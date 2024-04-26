/*
** Automatically generated from `write_error_spec.m'
** by the Mercury compiler,
** version rotd-2024-04-26
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


// :- module parse_tree.write_error_spec.
// :- implementation.

/*
INIT mercury__parse_tree__write_error_spec__init
REQUIRED_INIT mercury__parse_tree__write_error_spec__required_init
ENDINIT
*/

#include "parse_tree.write_error_spec.mih"
#include "parse_tree.write_error_spec.mh"


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
#include "int.mih"
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
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "uint.mih"
#include "uint8.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "libs.compiler_util.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_sort.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.parse_tree_out_cons_id.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_misc.mih"
#include "parse_tree.parse_tree_out_sym_name.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_error_spec__tree234__pti_tree234_2__plain_libs__options__type_ctor_info_option_0__plain_getopt__type_ctor_info_option_data_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__write_error_spec__list__ti_list_1libs__globals__type_ctor_info_line_number_range_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_error_spec__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_list_1libs__globals__type_ctor_info_line_number_range_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__write_error_spec__list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_error_spec__set_ordlist__pti_set_ordlist_1__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__write_error_spec__set_ordlist__ti_set_ordlist_1list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0;

static const MR_PseudoTypeInfo parse_tree__write_error_spec__parse_tree__write_error_spec__field_types_color_0_0[1];

static const MR_DuFunctorDesc parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_color_0_0;

static const MR_DuFunctorDesc parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_color_0_1;

static const MR_DuFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__du_stag_ordered_color_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__du_stag_ordered_color_0_1[1];

static const MR_DuPtagLayout parse_tree__write_error_spec__parse_tree__write_error_spec__du_ptag_ordered_color_0[2];

static const MR_DuFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__du_name_ordered_color_0[2];

static const MR_Integer parse_tree__write_error_spec__parse_tree__write_error_spec__functor_number_map_color_0[2];

static const MR_DuFunctorDesc parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_color_db_0_0;

static const MR_PseudoTypeInfo parse_tree__write_error_spec__parse_tree__write_error_spec__field_types_color_db_0_1[1];

static const MR_DuFunctorDesc parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_color_db_0_1;

static const MR_DuFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__du_stag_ordered_color_db_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__du_stag_ordered_color_db_0_1[1];

static const MR_DuPtagLayout parse_tree__write_error_spec__parse_tree__write_error_spec__du_ptag_ordered_color_db_0[2];

static const MR_DuFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__du_name_ordered_color_db_0[2];

static const MR_Integer parse_tree__write_error_spec__parse_tree__write_error_spec__functor_number_map_color_db_0[2];

static const MR_PseudoTypeInfo parse_tree__write_error_spec__parse_tree__write_error_spec__field_types_color_name_map_0_0[2];

static const MR_ConstString parse_tree__write_error_spec__parse_tree__write_error_spec__field_names_color_name_map_0_0[2];

static const MR_DuFunctorDesc parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_color_name_map_0_0;

static const MR_DuFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__du_stag_ordered_color_name_map_0_0[1];

static const MR_DuPtagLayout parse_tree__write_error_spec__parse_tree__write_error_spec__du_ptag_ordered_color_name_map_0[1];

static const MR_DuFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__du_name_ordered_color_name_map_0[1];

static const MR_Integer parse_tree__write_error_spec__parse_tree__write_error_spec__functor_number_map_color_name_map_0[1];

static const MR_FA_TypeInfo_Struct1 parse_tree__write_error_spec__stack__ti_stack_1parse_tree__write_error_spec__type_ctor_info_color_0;

static const MR_EnumFunctorDesc parse_tree__write_error_spec__parse_tree__write_error_spec__enum_functor_desc_context_limited_errors_0_0;

static const MR_EnumFunctorDesc parse_tree__write_error_spec__parse_tree__write_error_spec__enum_functor_desc_context_limited_errors_0_1;

static const MR_EnumFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__enum_ordinal_ordered_context_limited_errors_0[2];

static const MR_EnumFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__enum_name_ordered_context_limited_errors_0[2];

static const MR_Integer parse_tree__write_error_spec__parse_tree__write_error_spec__functor_number_map_context_limited_errors_0[2];

static const MR_PseudoTypeInfo parse_tree__write_error_spec__parse_tree__write_error_spec__field_types_error_line_0_0[7];

static const MR_ConstString parse_tree__write_error_spec__parse_tree__write_error_spec__field_names_error_line_0_0[7];

static const MR_DuArgLocn parse_tree__write_error_spec__parse_tree__write_error_spec__field_locns_error_line_0_0[7];

static const MR_DuFunctorDesc parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_error_line_0_0;

static const MR_DuFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__du_stag_ordered_error_line_0_0[1];

static const MR_DuPtagLayout parse_tree__write_error_spec__parse_tree__write_error_spec__du_ptag_ordered_error_line_0[1];

static const MR_DuFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__du_name_ordered_error_line_0[1];

static const MR_Integer parse_tree__write_error_spec__parse_tree__write_error_spec__functor_number_map_error_line_0[1];

static const MR_EnumFunctorDesc parse_tree__write_error_spec__parse_tree__write_error_spec__enum_functor_desc_line_end_reset_0_0;

static const MR_EnumFunctorDesc parse_tree__write_error_spec__parse_tree__write_error_spec__enum_functor_desc_line_end_reset_0_1;

static const MR_EnumFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__enum_ordinal_ordered_line_end_reset_0[2];

static const MR_EnumFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__enum_name_ordered_line_end_reset_0[2];

static const MR_Integer parse_tree__write_error_spec__parse_tree__write_error_spec__functor_number_map_line_end_reset_0[2];

static const MR_EnumFunctorDesc parse_tree__write_error_spec__parse_tree__write_error_spec__enum_functor_desc_maybe_extra_error_info_0_0;

static const MR_EnumFunctorDesc parse_tree__write_error_spec__parse_tree__write_error_spec__enum_functor_desc_maybe_extra_error_info_0_1;

static const MR_EnumFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__enum_ordinal_ordered_maybe_extra_error_info_0[2];

static const MR_EnumFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__enum_name_ordered_maybe_extra_error_info_0[2];

static const MR_Integer parse_tree__write_error_spec__parse_tree__write_error_spec__functor_number_map_maybe_extra_error_info_0[2];

static const MR_EnumFunctorDesc parse_tree__write_error_spec__parse_tree__write_error_spec__enum_functor_desc_maybe_first_in_msg_0_0;

static const MR_EnumFunctorDesc parse_tree__write_error_spec__parse_tree__write_error_spec__enum_functor_desc_maybe_first_in_msg_0_1;

static const MR_EnumFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__enum_ordinal_ordered_maybe_first_in_msg_0[2];

static const MR_EnumFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__enum_name_ordered_maybe_first_in_msg_0[2];

static const MR_Integer parse_tree__write_error_spec__parse_tree__write_error_spec__functor_number_map_maybe_first_in_msg_0[2];

static const MR_EnumFunctorDesc parse_tree__write_error_spec__parse_tree__write_error_spec__enum_functor_desc_maybe_lower_next_initial_0_0;

static const MR_EnumFunctorDesc parse_tree__write_error_spec__parse_tree__write_error_spec__enum_functor_desc_maybe_lower_next_initial_0_1;

static const MR_EnumFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__enum_ordinal_ordered_maybe_lower_next_initial_0[2];

static const MR_EnumFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__enum_name_ordered_maybe_lower_next_initial_0[2];

static const MR_Integer parse_tree__write_error_spec__parse_tree__write_error_spec__functor_number_map_maybe_lower_next_initial_0[2];

static const MR_EnumFunctorDesc parse_tree__write_error_spec__parse_tree__write_error_spec__enum_functor_desc_maybe_printed_something_0_0;

static const MR_EnumFunctorDesc parse_tree__write_error_spec__parse_tree__write_error_spec__enum_functor_desc_maybe_printed_something_0_1;

static const MR_EnumFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__enum_ordinal_ordered_maybe_printed_something_0[2];

static const MR_EnumFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__enum_name_ordered_maybe_printed_something_0[2];

static const MR_Integer parse_tree__write_error_spec__parse_tree__write_error_spec__functor_number_map_maybe_printed_something_0[2];

static const MR_EnumFunctorDesc parse_tree__write_error_spec__parse_tree__write_error_spec__enum_functor_desc_maybe_treat_as_first_0_0;

static const MR_EnumFunctorDesc parse_tree__write_error_spec__parse_tree__write_error_spec__enum_functor_desc_maybe_treat_as_first_0_1;

static const MR_EnumFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__enum_ordinal_ordered_maybe_treat_as_first_0[2];

static const MR_EnumFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__enum_name_ordered_maybe_treat_as_first_0[2];

static const MR_Integer parse_tree__write_error_spec__parse_tree__write_error_spec__functor_number_map_maybe_treat_as_first_0[2];

static const MR_FA_TypeInfo_Struct1 parse_tree__write_error_spec__list__ti_list_1parse_tree__write_error_spec__type_ctor_info_sc_unit_0;

static const MR_PseudoTypeInfo parse_tree__write_error_spec__parse_tree__write_error_spec__field_types_paragraph_0_0[4];

static const MR_DuArgLocn parse_tree__write_error_spec__parse_tree__write_error_spec__field_locns_paragraph_0_0[4];

static const MR_DuFunctorDesc parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_paragraph_0_0;

static const MR_DuFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__du_stag_ordered_paragraph_0_0[1];

static const MR_DuPtagLayout parse_tree__write_error_spec__parse_tree__write_error_spec__du_ptag_ordered_paragraph_0[1];

static const MR_DuFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__du_name_ordered_paragraph_0[1];

static const MR_Integer parse_tree__write_error_spec__parse_tree__write_error_spec__functor_number_map_paragraph_0[1];

static const MR_EnumFunctorDesc parse_tree__write_error_spec__parse_tree__write_error_spec__enum_functor_desc_paren_status_0_0;

static const MR_EnumFunctorDesc parse_tree__write_error_spec__parse_tree__write_error_spec__enum_functor_desc_paren_status_0_1;

static const MR_EnumFunctorDesc parse_tree__write_error_spec__parse_tree__write_error_spec__enum_functor_desc_paren_status_0_2;

static const MR_EnumFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__enum_ordinal_ordered_paren_status_0[3];

static const MR_EnumFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__enum_name_ordered_paren_status_0[3];

static const MR_Integer parse_tree__write_error_spec__parse_tree__write_error_spec__functor_number_map_paren_status_0[3];

static const MR_PseudoTypeInfo parse_tree__write_error_spec__parse_tree__write_error_spec__field_types_plain_or_prefix_0_0[1];

static const MR_DuFunctorDesc parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_plain_or_prefix_0_0;

static const MR_PseudoTypeInfo parse_tree__write_error_spec__parse_tree__write_error_spec__field_types_plain_or_prefix_0_1[1];

static const MR_DuFunctorDesc parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_plain_or_prefix_0_1;

static const MR_DuFunctorDesc parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_plain_or_prefix_0_2;

static const MR_PseudoTypeInfo parse_tree__write_error_spec__parse_tree__write_error_spec__field_types_plain_or_prefix_0_3[1];

static const MR_DuFunctorDesc parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_plain_or_prefix_0_3;

static const MR_DuFunctorDesc parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_plain_or_prefix_0_4;

static const MR_DuFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__du_stag_ordered_plain_or_prefix_0_0[2];

static const MR_DuFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__du_stag_ordered_plain_or_prefix_0_1[1];

static const MR_DuFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__du_stag_ordered_plain_or_prefix_0_2[1];

static const MR_DuFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__du_stag_ordered_plain_or_prefix_0_3[1];

static const MR_DuPtagLayout parse_tree__write_error_spec__parse_tree__write_error_spec__du_ptag_ordered_plain_or_prefix_0[4];

static const MR_DuFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__du_name_ordered_plain_or_prefix_0[5];

static const MR_Integer parse_tree__write_error_spec__parse_tree__write_error_spec__functor_number_map_plain_or_prefix_0[5];

static const MR_PseudoTypeInfo parse_tree__write_error_spec__parse_tree__write_error_spec__field_types_sc_unit_0_0[1];

static const MR_DuFunctorDesc parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_sc_unit_0_0;

static const MR_PseudoTypeInfo parse_tree__write_error_spec__parse_tree__write_error_spec__field_types_sc_unit_0_1[1];

static const MR_DuFunctorDesc parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_sc_unit_0_1;

static const MR_DuFunctorDesc parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_sc_unit_0_2;

static const MR_DuFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__du_stag_ordered_sc_unit_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__du_stag_ordered_sc_unit_0_1[1];

static const MR_DuFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__du_stag_ordered_sc_unit_0_2[1];

static const MR_DuPtagLayout parse_tree__write_error_spec__parse_tree__write_error_spec__du_ptag_ordered_sc_unit_0[3];

static const MR_DuFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__du_name_ordered_sc_unit_0[3];

static const MR_Integer parse_tree__write_error_spec__parse_tree__write_error_spec__functor_number_map_sc_unit_0[3];

static const MR_PseudoTypeInfo parse_tree__write_error_spec__parse_tree__write_error_spec__field_types_word_0_0[1];

static const MR_DuFunctorDesc parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_word_0_0;

static const MR_PseudoTypeInfo parse_tree__write_error_spec__parse_tree__write_error_spec__field_types_word_0_1[1];

static const MR_DuFunctorDesc parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_word_0_1;

static const MR_PseudoTypeInfo parse_tree__write_error_spec__parse_tree__write_error_spec__field_types_word_0_2[1];

static const MR_DuFunctorDesc parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_word_0_2;

static const MR_DuFunctorDesc parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_word_0_3;

static const MR_PseudoTypeInfo parse_tree__write_error_spec__parse_tree__write_error_spec__field_types_word_0_4[1];

static const MR_DuFunctorDesc parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_word_0_4;

static const MR_DuFunctorDesc parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_word_0_5;

static const MR_DuFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__du_stag_ordered_word_0_0[2];

static const MR_DuFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__du_stag_ordered_word_0_1[1];

static const MR_DuFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__du_stag_ordered_word_0_2[1];

static const MR_DuFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__du_stag_ordered_word_0_3[2];

static const MR_DuPtagLayout parse_tree__write_error_spec__parse_tree__write_error_spec__du_ptag_ordered_word_0[4];

static const MR_DuFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__du_name_ordered_word_0[6];

static const MR_Integer parse_tree__write_error_spec__parse_tree__write_error_spec__functor_number_map_word_0[6];

static MR_bool MR_CALL 
parse_tree__write_error_spec__IntroducedFrom__pred__find_matching_rp_and_maybe_join__1614__1_2_p_0(
  MR_Integer TotalLpRpLen_30,
  MR_Integer ReplacementLineLen_36);

static MR_String MR_CALL 
parse_tree__write_error_spec__IntroducedFrom__func__find_matching_rp_and_maybe_join__1609__1_1_f_0(
  MR_Word LambdaHeadVar__1_56);

static MR_bool MR_CALL 
parse_tree__write_error_spec__IntroducedFrom__pred__find_matching_rp_and_maybe_join__1588__1_2_p_0(
  MR_Word LPParen_15,
  MR_Word HeadVar__2_42);

static MR_bool MR_CALL 
parse_tree__write_error_spec__IntroducedFrom__pred__get_later_words__1413__1_2_p_0(
  MR_String NextSpace0_2,
  MR_String HeadVar__2_50);

static MR_bool MR_CALL 
parse_tree__write_error_spec__IntroducedFrom__pred__get_later_words__1435__1_2_p_0(
  MR_String NextSpace0_2,
  MR_String HeadVar__2_59);

static void MR_CALL 
parse_tree__write_error_spec____Compare____word_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__write_error_spec____Unify____word_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__write_error_spec____Compare____sc_unit_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__write_error_spec____Unify____sc_unit_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__write_error_spec____Compare____plain_or_prefix_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__write_error_spec____Unify____plain_or_prefix_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__write_error_spec____Compare____paren_status_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__write_error_spec____Unify____paren_status_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__write_error_spec____Compare____paragraph_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__write_error_spec____Unify____paragraph_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__write_error_spec____Compare____maybe_treat_as_first_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__write_error_spec____Unify____maybe_treat_as_first_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__write_error_spec____Compare____maybe_printed_something_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__write_error_spec____Unify____maybe_printed_something_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__write_error_spec____Compare____maybe_lower_next_initial_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__write_error_spec____Unify____maybe_lower_next_initial_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__write_error_spec____Compare____maybe_first_in_msg_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__write_error_spec____Unify____maybe_first_in_msg_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__write_error_spec____Compare____maybe_extra_error_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__write_error_spec____Unify____maybe_extra_error_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__write_error_spec____Compare____line_end_reset_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__write_error_spec____Unify____line_end_reset_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__write_error_spec____Compare____context_limited_errors_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__write_error_spec____Unify____context_limited_errors_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__write_error_spec____Compare____color_stack_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__write_error_spec____Unify____color_stack_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__write_error_spec____Compare____color_db_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
parse_tree__write_error_spec____Compare____color_name_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__write_error_spec____Unify____color_db_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
parse_tree__write_error_spec____Unify____color_name_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__write_error_spec____Compare____color_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__write_error_spec____Unify____color_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__write_error_spec____Compare____already_printed_verbose_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__write_error_spec____Unify____already_printed_verbose_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__write_error_spec__unsafe_set_some_errors_were_context_limited_1_p_0(
  MR_Word X_1);

static void MR_CALL 
parse_tree__write_error_spec__unsafe_get_some_errors_were_context_limited_1_p_0(
  MR_Word * X_1);

static void MR_CALL 
parse_tree__write_error_spec__unlock_some_errors_were_context_limited_0_p_0(void);

static void MR_CALL 
parse_tree__write_error_spec__lock_some_errors_were_context_limited_0_p_0(void);

static void MR_CALL 
parse_tree__write_error_spec__pre_initialise_mutable_some_errors_were_context_limited_0_p_0(void);

static void MR_CALL 
parse_tree__write_error_spec__initialise_mutable_some_errors_were_context_limited_0_p_0(void);

static void MR_CALL 
parse_tree__write_error_spec__unsafe_set_extra_error_info_1_p_0(
  MR_Word X_1);

static void MR_CALL 
parse_tree__write_error_spec__unsafe_get_extra_error_info_1_p_0(
  MR_Word * X_1);

static void MR_CALL 
parse_tree__write_error_spec__unlock_extra_error_info_0_p_0(void);

static void MR_CALL 
parse_tree__write_error_spec__lock_extra_error_info_0_p_0(void);

static void MR_CALL 
parse_tree__write_error_spec__pre_initialise_mutable_extra_error_info_0_p_0(void);

static void MR_CALL 
parse_tree__write_error_spec__initialise_mutable_extra_error_info_0_p_0(void);

static MR_String MR_CALL 
parse_tree__write_error_spec__convert_line_and_nl_to_string_2_f_0(
  MR_String Prefix_4,
  MR_Word Line_5);

static MR_Box MR_CALL 
parse_tree__write_error_spec__error_pieces_to_multi_line_string_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__write_error_spec__error_pieces_to_one_line_string_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__write_error_spec__error_lines_to_multi_line_string_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__write_error_spec__error_lines_to_one_line_string_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
parse_tree__write_error_spec__do_spaces_lines_fit_in_n_code_points_3_p_0(
  MR_Integer Max_4,
  MR_Word Line1_5,
  MR_Word Lines2plus_6);

static void MR_CALL 
parse_tree__write_error_spec__write_error_specs_opt_table_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__write_error_spec__write_error_specs_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__write_error_spec__do_write_error_spec_8_p_0(
  MR_Word Stream_9,
  MR_Word OptionTable_10,
  MR_Word LimitErrorContextsMap_11,
  MR_Word Spec_12,
  MR_Word STATE_VARIABLE_AlreadyPrintedVerbose_0_41,
  MR_Word * STATE_VARIABLE_AlreadyPrintedVerbose_42);

static void MR_CALL 
parse_tree__write_error_spec__do_write_error_msgs_11_p_0(
  MR_Word HeadVar__1_1,
  MR_Word OptionTable_2,
  MR_Word LimitErrorContextsMap_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_First_0_5,
  MR_Word STATE_VARIABLE_PrintedSome_0_6,
  MR_Word * STATE_VARIABLE_PrintedSome_7,
  MR_Word STATE_VARIABLE_AlreadyPrintedVerbose_0_8,
  MR_Word * STATE_VARIABLE_AlreadyPrintedVerbose_9);

static void MR_CALL 
parse_tree__write_error_spec__write_msg_components_14_p_0(
  MR_Word HeadVar__1_1,
  MR_Word OptionTable_2,
  MR_Word LimitErrorContextsMap_3,
  MR_Word MaybeContext_4,
  MR_Word HeadVar__5_5,
  MR_Unsigned Indent_6,
  MR_Word STATE_VARIABLE_First_0_7,
  MR_Word * STATE_VARIABLE_First_8,
  MR_Word STATE_VARIABLE_PrintedSome_0_9,
  MR_Word * STATE_VARIABLE_PrintedSome_10,
  MR_Word STATE_VARIABLE_AlreadyPrintedVerbose_0_11,
  MR_Word * STATE_VARIABLE_AlreadyPrintedVerbose_12);

static void MR_CALL 
parse_tree__write_error_spec__do_write_error_pieces_9_p_0(
  MR_Word Stream_10,
  MR_Word OptionTable_11,
  MR_Word LimitErrorContextsMap_12,
  MR_Word MaybeContext_13,
  MR_Word TreatAsFirst_14,
  MR_Unsigned FixedIndent_15,
  MR_Word Pieces_16);

static void MR_CALL 
parse_tree__write_error_spec__try_to_join_lp_to_rp_lines_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static MR_bool MR_CALL 
parse_tree__write_error_spec__find_matching_rp_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_MidLinesCord_0_2,
  MR_Word * STATE_VARIABLE_MidLinesCord_3,
  MR_Integer STATE_VARIABLE_MidLinesLen_0_4,
  MR_Integer * STATE_VARIABLE_MidLinesLen_5,
  MR_Word * RPLine_6,
  MR_Word * LeftOverLines_7);

static MR_bool MR_CALL 
parse_tree__write_error_spec__find_matching_rp_and_maybe_join_4_p_0_3(
  MR_Box closure_arg);

static MR_Box MR_CALL 
parse_tree__write_error_spec__find_matching_rp_and_maybe_join_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
parse_tree__write_error_spec__find_matching_rp_and_maybe_join_4_p_0_1(
  MR_Box closure_arg);

static MR_bool MR_CALL 
parse_tree__write_error_spec__find_matching_rp_and_maybe_join_4_p_0(
  MR_Word LPLine_5,
  MR_Word TailLines0_6,
  MR_Word * ReplacementLines_7,
  MR_Word * LeftOverLines_8);

static void MR_CALL 
parse_tree__write_error_spec__divide_paragraphs_into_lines_5_p_0(
  MR_Integer AvailLen_6,
  MR_Word TreatAsFirst_7,
  MR_Unsigned CurIndent_8,
  MR_Word Paras_9,
  MR_Word * Lines_10);

static void MR_CALL 
parse_tree__write_error_spec__group_nonfirst_line_words_7_p_0(
  MR_Integer AvailLen_8,
  MR_Word FirstWord_9,
  MR_Word LaterWords_10,
  MR_Unsigned Indent_11,
  MR_Word LastParen_12,
  MR_Word * Lines_13,
  MR_Word ColourStack0_14);

static MR_bool MR_CALL 
parse_tree__write_error_spec__get_later_words_12_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
parse_tree__write_error_spec__get_later_words_12_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__write_error_spec__get_later_words_12_p_0(
  MR_Integer Avail_1,
  MR_String NextSpace0_2,
  MR_Word HeadVar__3_3,
  MR_Integer CurLen_4,
  MR_Integer * FinalLen_5,
  MR_Word HeadVar__6_6,
  MR_Word * LineStrs_7,
  MR_Word * HeadVar__8_8,
  MR_Word STATE_VARIABLE_ColourStack_0_9,
  MR_Word * STATE_VARIABLE_ColourStack_10,
  MR_Word HeadVar__11_11,
  MR_Word * LineEndReset_12);

static void MR_CALL 
parse_tree__write_error_spec__merge_adjacent_color_changes_5_p_0(
  MR_Word HeadSCUnit_6,
  MR_Word TailSCUnits0_7,
  MR_Word * SCUnits_8,
  MR_Word STATE_VARIABLE_ColourStack_0_16,
  MR_Word * STATE_VARIABLE_ColourStack_17);

static void MR_CALL 
parse_tree__write_error_spec__convert_pieces_to_paragraphs_acc_6_p_0(
  MR_Word ColourDb_1,
  MR_Word FirstInMsg_2,
  MR_Word HeadVar__3_3,
  MR_Word RevWords0_4,
  MR_Word STATE_VARIABLE_Paras_0_5,
  MR_Word * STATE_VARIABLE_Paras_6);

static MR_String MR_CALL 
parse_tree__write_error_spec__a_purity_to_string_1_f_0(
  MR_Word HeadVar__1_1);

static MR_String MR_CALL 
parse_tree__write_error_spec__purity_to_string_1_f_0(
  MR_Word HeadVar__1_1);

static MR_String MR_CALL 
parse_tree__write_error_spec__nth_fixed_str_1_f_0(
  MR_Integer N_3);

static MR_String MR_CALL 
parse_tree__write_error_spec__int_name_str_1_f_0(
  MR_Integer N_3);

static MR_String MR_CALL 
parse_tree__write_error_spec__sym_name_arity_to_word_1_f_0(
  MR_Word HeadVar__1_1);

static MR_String MR_CALL 
parse_tree__write_error_spec__name_arity_to_word_1_f_0(
  MR_Word HeadVar__1_1);

static MR_String MR_CALL 
parse_tree__write_error_spec__sym_name_to_word_1_f_0(
  MR_Word SymName_3);

static void MR_CALL 
parse_tree__write_error_spec__update_first_in_msg_after_piece_3_p_0(
  MR_Word Piece_4,
  MR_Word FirstInMsg_5,
  MR_Word * TailFirstInMsg_6);

static void MR_CALL 
parse_tree__write_error_spec__break_into_words_3_p_0(
  MR_String String_4,
  MR_Word Words0_5,
  MR_Word * Words_6);

static void MR_CALL 
parse_tree__write_error_spec__break_into_words_from_4_p_0(
  MR_String String_5,
  MR_Integer Cur_6,
  MR_Word Words0_7,
  MR_Word * Words_8);

static void MR_CALL 
parse_tree__write_error_spec__find_word_end_3_p_0(
  MR_String String_4,
  MR_Integer Cur_5,
  MR_Integer * WordEnd_6);

static MR_bool MR_CALL 
parse_tree__write_error_spec__find_word_start_3_p_0(
  MR_String String_4,
  MR_Integer Cur_5,
  MR_Integer * WordStart_6);

static MR_Word MR_CALL 
parse_tree__write_error_spec__rev_words_to_sc_units_1_f_0(
  MR_Word RevWords_3);

static MR_Word MR_CALL 
parse_tree__write_error_spec__join_prefixes_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Word MR_CALL 
parse_tree__write_error_spec__rev_words_to_rev_plain_or_prefix_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
parse_tree__write_error_spec__add_paragraph_3_p_0(
  MR_Word Para_4,
  MR_Word STATE_VARIABLE_Paras_0_10,
  MR_Word * STATE_VARIABLE_Paras_11);

static void MR_CALL 
parse_tree__write_error_spec__write_msg_lines_5_p_0(
  MR_Word HeadVar__1_1,
  MR_String PrefixStr_2,
  MR_Word HeadVar__3_3);

static MR_String MR_CALL 
parse_tree__write_error_spec__convert_line_words_to_string_1_f_0(
  MR_Word Line_3);

static MR_Word MR_CALL 
parse_tree__write_error_spec__line_number_is_in_a_range_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Integer LineNumber_2);

static MR_bool MR_CALL 
parse_tree__write_error_spec____Unify____already_printed_verbose_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__write_error_spec____Compare____already_printed_verbose_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__write_error_spec____Unify____color_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__write_error_spec____Compare____color_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__write_error_spec____Unify____color_db_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__write_error_spec____Compare____color_db_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__write_error_spec____Unify____color_name_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__write_error_spec____Compare____color_name_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__write_error_spec____Unify____color_stack_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__write_error_spec____Compare____color_stack_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__write_error_spec____Unify____context_limited_errors_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__write_error_spec____Compare____context_limited_errors_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__write_error_spec____Unify____error_line_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__write_error_spec____Compare____error_line_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__write_error_spec____Unify____line_end_reset_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__write_error_spec____Compare____line_end_reset_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__write_error_spec____Unify____maybe_extra_error_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__write_error_spec____Compare____maybe_extra_error_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__write_error_spec____Unify____maybe_first_in_msg_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__write_error_spec____Compare____maybe_first_in_msg_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__write_error_spec____Unify____maybe_lower_next_initial_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__write_error_spec____Compare____maybe_lower_next_initial_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__write_error_spec____Unify____maybe_printed_something_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__write_error_spec____Compare____maybe_printed_something_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__write_error_spec____Unify____maybe_treat_as_first_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__write_error_spec____Compare____maybe_treat_as_first_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__write_error_spec____Unify____paragraph_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__write_error_spec____Compare____paragraph_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__write_error_spec____Unify____paren_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__write_error_spec____Compare____paren_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__write_error_spec____Unify____plain_or_prefix_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__write_error_spec____Compare____plain_or_prefix_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__write_error_spec____Unify____sc_unit_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__write_error_spec____Compare____sc_unit_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__write_error_spec____Unify____word_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__write_error_spec____Compare____word_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__write_error_spec_scalar_common_1[7][2];

static /* final */ const MR_Box parse_tree__write_error_spec_scalar_common_2[3][1];

static /* final */ const MR_Box parse_tree__write_error_spec_scalar_common_4[4][5];

static /* final */ const MR_Box parse_tree__write_error_spec_scalar_common_5[3][3];

static /* final */ const MR_Box parse_tree__write_error_spec_scalar_common_6[1][11];

static /* final */ const MR_Box parse_tree__write_error_spec_scalar_common_7[1][6];


struct parse_tree__write_error_spec__vector_common_type_3_0_s {
  const MR_String parse_tree__write_error_spec__vector_common_type_3_0__vct_3_f_0;
};

static /* final */ const struct parse_tree__write_error_spec__vector_common_type_3_0_s parse_tree__write_error_spec_vector_common_3[21];



static /* final */ const MR_Box parse_tree__write_error_spec_scalar_common_1[7][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__write_error_spec_scalar_common_1[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_line_number_range_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__stack__stack__type_ctor_info_stack_1)),
    ((MR_Box) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_color_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_sc_unit_0))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "error_spec id:"))
  },
  /* row   6 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box parse_tree__write_error_spec_scalar_common_2[3][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Integer) 80)) },
  /* row   1 */
  { ((MR_Box) ((MR_String) "")) },
  /* row   2 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};

static /* final */ const MR_Box parse_tree__write_error_spec_scalar_common_4[4][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_paren_status_0)),
    ((MR_Box) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_paren_status_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_error_line_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box parse_tree__write_error_spec_scalar_common_5[3][3] = {
  /* row   0 */
  {
    ((MR_Box) (&parse_tree__write_error_spec_scalar_common_4[2])),
    ((MR_Box) (parse_tree__write_error_spec__find_matching_rp_and_maybe_join_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__write_error_spec_scalar_common_4[2])),
    ((MR_Box) (parse_tree__write_error_spec__error_lines_to_one_line_string_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__write_error_spec_scalar_common_4[2])),
    ((MR_Box) (parse_tree__write_error_spec__error_pieces_to_one_line_string_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__write_error_spec_scalar_common_6[1][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&parse_tree__write_error_spec__tree234__pti_tree234_2__plain_libs__options__type_ctor_info_option_0__plain_getopt__type_ctor_info_option_data_0)),
    ((MR_Box) (&parse_tree__write_error_spec__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_list_1libs__globals__type_ctor_info_line_number_range_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__write_error_spec__set_ordlist__pti_set_ordlist_1__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0)),
    ((MR_Box) (&parse_tree__write_error_spec__set_ordlist__pti_set_ordlist_1__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__write_error_spec_scalar_common_7[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_error_line_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};


static /* final */ const struct parse_tree__write_error_spec__vector_common_type_3_0_s parse_tree__write_error_spec_vector_common_3[21] = {
  /* row   0 */   { (MR_String) "zero" },
  /* row   1 */   { (MR_String) "one" },
  /* row   2 */   { (MR_String) "two" },
  /* row   3 */   { (MR_String) "three" },
  /* row   4 */   { (MR_String) "four" },
  /* row   5 */   { (MR_String) "five" },
  /* row   6 */   { (MR_String) "six" },
  /* row   7 */   { (MR_String) "seven" },
  /* row   8 */   { (MR_String) "eight" },
  /* row   9 */   { (MR_String) "nine" },
  /* row  10 */   { (MR_String) "ten" },
  /* row  11 */   { (MR_String) "first" },
  /* row  12 */   { (MR_String) "second" },
  /* row  13 */   { (MR_String) "third" },
  /* row  14 */   { (MR_String) "fourth" },
  /* row  15 */   { (MR_String) "fifth" },
  /* row  16 */   { (MR_String) "sixth" },
  /* row  17 */   { (MR_String) "seventh" },
  /* row  18 */   { (MR_String) "eighth" },
  /* row  19 */   { (MR_String) "ninth" },
  /* row  20 */   { (MR_String) "tenth" },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"
#include "parse_tree.write_error_spec.mh"
#line 2041 "write_error_spec.m"
MR_Unsigned parse_tree__write_error_spec__mutable_variable_extra_error_info;

#line 2048 "write_error_spec.m"
MR_Unsigned parse_tree__write_error_spec__mutable_variable_some_errors_were_context_limited;


#line 2041 "write_error_spec.m"
void 
parse_tree__write_error_spec__user_init_pred_192_0(void)
#line 2041 "write_error_spec.m"
{
#line 2041 "write_error_spec.m"
	parse_tree__write_error_spec__initialise_mutable_extra_error_info_0_p_0();
}

#line 2048 "write_error_spec.m"
void 
parse_tree__write_error_spec__user_init_pred_193_0(void)
#line 2048 "write_error_spec.m"
{
#line 2048 "write_error_spec.m"
	parse_tree__write_error_spec__initialise_mutable_some_errors_were_context_limited_0_p_0();
}


static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_error_spec__tree234__pti_tree234_2__plain_libs__options__type_ctor_info_option_0__plain_getopt__type_ctor_info_option_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&libs__options__libs__options__type_ctor_info_option_0),
    (MR_PseudoTypeInfo) (&mercury__getopt__getopt__type_ctor_info_option_data_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__write_error_spec__list__ti_list_1libs__globals__type_ctor_info_line_number_range_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&libs__globals__libs__globals__type_ctor_info_line_number_range_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_error_spec__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_list_1libs__globals__type_ctor_info_line_number_range_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&parse_tree__write_error_spec__list__ti_list_1libs__globals__type_ctor_info_line_number_range_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__write_error_spec__list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_error_spec__set_ordlist__pti_set_ordlist_1__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&parse_tree__write_error_spec__list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__write_error_spec__set_ordlist__ti_set_ordlist_1list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&parse_tree__write_error_spec__list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0) }
};

const MR_TypeCtorInfo_Struct parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_already_printed_verbose_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__write_error_spec____Unify____already_printed_verbose_0_0_10001)),
  ((MR_Box) (parse_tree__write_error_spec____Compare____already_printed_verbose_0_0_10001)),
  (MR_String) "parse_tree.write_error_spec",
  (MR_String) "already_printed_verbose",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__write_error_spec__set_ordlist__ti_set_ordlist_1list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo parse_tree__write_error_spec__parse_tree__write_error_spec__field_types_color_0_0[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint8_0) };

static const MR_DuFunctorDesc parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_color_0_0 = {
  (MR_String) "color_8bit",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__write_error_spec__parse_tree__write_error_spec__field_types_color_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_color_0_1 = {
  (MR_String) "color_reset",
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

static const MR_DuFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__du_stag_ordered_color_0_0[1] = { &parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_color_0_1 };

static const MR_DuFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__du_stag_ordered_color_0_1[1] = { &parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_color_0_0 };

static const MR_DuPtagLayout parse_tree__write_error_spec__parse_tree__write_error_spec__du_ptag_ordered_color_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    parse_tree__write_error_spec__parse_tree__write_error_spec__du_stag_ordered_color_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__write_error_spec__parse_tree__write_error_spec__du_stag_ordered_color_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__du_name_ordered_color_0[2] = {
  &parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_color_0_0,
  &parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_color_0_1
};

static const MR_Integer parse_tree__write_error_spec__parse_tree__write_error_spec__functor_number_map_color_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_color_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__write_error_spec____Unify____color_0_0_10001)),
  ((MR_Box) (parse_tree__write_error_spec____Compare____color_0_0_10001)),
  (MR_String) "parse_tree.write_error_spec",
  (MR_String) "color",
  { parse_tree__write_error_spec__parse_tree__write_error_spec__du_name_ordered_color_0 },
  { parse_tree__write_error_spec__parse_tree__write_error_spec__du_ptag_ordered_color_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__write_error_spec__parse_tree__write_error_spec__functor_number_map_color_0,

};

static const MR_DuFunctorDesc parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_color_db_0_0 = {
  (MR_String) "no_color_db",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__write_error_spec__parse_tree__write_error_spec__field_types_color_db_0_1[1] = { (MR_PseudoTypeInfo) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_color_name_map_0) };

static const MR_DuFunctorDesc parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_color_db_0_1 = {
  (MR_String) "color_db",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE_DIRECT_ARG,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__write_error_spec__parse_tree__write_error_spec__field_types_color_db_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__du_stag_ordered_color_db_0_0[1] = { &parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_color_db_0_0 };

static const MR_DuFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__du_stag_ordered_color_db_0_1[1] = { &parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_color_db_0_1 };

static const MR_DuPtagLayout parse_tree__write_error_spec__parse_tree__write_error_spec__du_ptag_ordered_color_db_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    parse_tree__write_error_spec__parse_tree__write_error_spec__du_stag_ordered_color_db_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE_DIRECT_ARG,
    parse_tree__write_error_spec__parse_tree__write_error_spec__du_stag_ordered_color_db_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__du_name_ordered_color_db_0[2] = {
  &parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_color_db_0_1,
  &parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_color_db_0_0
};

static const MR_Integer parse_tree__write_error_spec__parse_tree__write_error_spec__functor_number_map_color_db_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_color_db_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__write_error_spec____Unify____color_db_0_0_10001)),
  ((MR_Box) (parse_tree__write_error_spec____Compare____color_db_0_0_10001)),
  (MR_String) "parse_tree.write_error_spec",
  (MR_String) "color_db",
  { parse_tree__write_error_spec__parse_tree__write_error_spec__du_name_ordered_color_db_0 },
  { parse_tree__write_error_spec__parse_tree__write_error_spec__du_ptag_ordered_color_db_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__write_error_spec__parse_tree__write_error_spec__functor_number_map_color_db_0,

};

static const MR_PseudoTypeInfo parse_tree__write_error_spec__parse_tree__write_error_spec__field_types_color_name_map_0_0[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_color_0),
  (MR_PseudoTypeInfo) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_color_0)
};

static const MR_ConstString parse_tree__write_error_spec__parse_tree__write_error_spec__field_names_color_name_map_0_0[2] = {
  (MR_String) "cnm_incorrect",
  (MR_String) "cnm_correct"
};

static const MR_DuFunctorDesc parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_color_name_map_0_0 = {
  (MR_String) "color_name_map",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__write_error_spec__parse_tree__write_error_spec__field_types_color_name_map_0_0,
  parse_tree__write_error_spec__parse_tree__write_error_spec__field_names_color_name_map_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__du_stag_ordered_color_name_map_0_0[1] = { &parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_color_name_map_0_0 };

static const MR_DuPtagLayout parse_tree__write_error_spec__parse_tree__write_error_spec__du_ptag_ordered_color_name_map_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__write_error_spec__parse_tree__write_error_spec__du_stag_ordered_color_name_map_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__du_name_ordered_color_name_map_0[1] = { &parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_color_name_map_0_0 };

static const MR_Integer parse_tree__write_error_spec__parse_tree__write_error_spec__functor_number_map_color_name_map_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_color_name_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__write_error_spec____Unify____color_name_map_0_0_10001)),
  ((MR_Box) (parse_tree__write_error_spec____Compare____color_name_map_0_0_10001)),
  (MR_String) "parse_tree.write_error_spec",
  (MR_String) "color_name_map",
  { parse_tree__write_error_spec__parse_tree__write_error_spec__du_name_ordered_color_name_map_0 },
  { parse_tree__write_error_spec__parse_tree__write_error_spec__du_ptag_ordered_color_name_map_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__write_error_spec__parse_tree__write_error_spec__functor_number_map_color_name_map_0,

};

static const MR_FA_TypeInfo_Struct1 parse_tree__write_error_spec__stack__ti_stack_1parse_tree__write_error_spec__type_ctor_info_color_0 = {
  &mercury__stack__stack__type_ctor_info_stack_1,
  { (MR_TypeInfo) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_color_0) }
};

const MR_TypeCtorInfo_Struct parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_color_stack_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__write_error_spec____Unify____color_stack_0_0_10001)),
  ((MR_Box) (parse_tree__write_error_spec____Compare____color_stack_0_0_10001)),
  (MR_String) "parse_tree.write_error_spec",
  (MR_String) "color_stack",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__write_error_spec__stack__ti_stack_1parse_tree__write_error_spec__type_ctor_info_color_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_EnumFunctorDesc parse_tree__write_error_spec__parse_tree__write_error_spec__enum_functor_desc_context_limited_errors_0_0 = {
  (MR_String) "no_errors_were_context_limited",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__write_error_spec__parse_tree__write_error_spec__enum_functor_desc_context_limited_errors_0_1 = {
  (MR_String) "some_errors_were_context_limited",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__enum_ordinal_ordered_context_limited_errors_0[2] = {
  &parse_tree__write_error_spec__parse_tree__write_error_spec__enum_functor_desc_context_limited_errors_0_0,
  &parse_tree__write_error_spec__parse_tree__write_error_spec__enum_functor_desc_context_limited_errors_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__enum_name_ordered_context_limited_errors_0[2] = {
  &parse_tree__write_error_spec__parse_tree__write_error_spec__enum_functor_desc_context_limited_errors_0_0,
  &parse_tree__write_error_spec__parse_tree__write_error_spec__enum_functor_desc_context_limited_errors_0_1
};

static const MR_Integer parse_tree__write_error_spec__parse_tree__write_error_spec__functor_number_map_context_limited_errors_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_context_limited_errors_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__write_error_spec____Unify____context_limited_errors_0_0_10001)),
  ((MR_Box) (parse_tree__write_error_spec____Compare____context_limited_errors_0_0_10001)),
  (MR_String) "parse_tree.write_error_spec",
  (MR_String) "context_limited_errors",
  { parse_tree__write_error_spec__parse_tree__write_error_spec__enum_name_ordered_context_limited_errors_0 },
  { parse_tree__write_error_spec__parse_tree__write_error_spec__enum_ordinal_ordered_context_limited_errors_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__write_error_spec__parse_tree__write_error_spec__functor_number_map_context_limited_errors_0,

};

static const MR_PseudoTypeInfo parse_tree__write_error_spec__parse_tree__write_error_spec__field_types_error_line_0_0[7] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_line_end_reset_0),
  (MR_PseudoTypeInfo) (&parse_tree__write_error_spec__stack__ti_stack_1parse_tree__write_error_spec__type_ctor_info_color_0),
  (MR_PseudoTypeInfo) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_paren_status_0)
};

static const MR_ConstString parse_tree__write_error_spec__parse_tree__write_error_spec__field_names_error_line_0_0[7] = {
  (MR_String) "maybe_avail_len",
  (MR_String) "line_indent_level",
  (MR_String) "line_words_str",
  (MR_String) "line_words_len",
  (MR_String) "line_end_reset",
  (MR_String) "line_start_colors",
  (MR_String) "line_paren"
};

static const MR_DuArgLocn parse_tree__write_error_spec__parse_tree__write_error_spec__field_locns_error_line_0_0[7] = {
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
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 0,
    (MR_Integer) 2
  }
};

static const MR_DuFunctorDesc parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_error_line_0_0 = {
  (MR_String) "error_line",
  INT16_C(7),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__write_error_spec__parse_tree__write_error_spec__field_types_error_line_0_0,
  parse_tree__write_error_spec__parse_tree__write_error_spec__field_names_error_line_0_0,
  parse_tree__write_error_spec__parse_tree__write_error_spec__field_locns_error_line_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__du_stag_ordered_error_line_0_0[1] = { &parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_error_line_0_0 };

static const MR_DuPtagLayout parse_tree__write_error_spec__parse_tree__write_error_spec__du_ptag_ordered_error_line_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__write_error_spec__parse_tree__write_error_spec__du_stag_ordered_error_line_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__du_name_ordered_error_line_0[1] = { &parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_error_line_0_0 };

static const MR_Integer parse_tree__write_error_spec__parse_tree__write_error_spec__functor_number_map_error_line_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_error_line_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__write_error_spec____Unify____error_line_0_0_10001)),
  ((MR_Box) (parse_tree__write_error_spec____Compare____error_line_0_0_10001)),
  (MR_String) "parse_tree.write_error_spec",
  (MR_String) "error_line",
  { parse_tree__write_error_spec__parse_tree__write_error_spec__du_name_ordered_error_line_0 },
  { parse_tree__write_error_spec__parse_tree__write_error_spec__du_ptag_ordered_error_line_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__write_error_spec__parse_tree__write_error_spec__functor_number_map_error_line_0,

};

static const MR_EnumFunctorDesc parse_tree__write_error_spec__parse_tree__write_error_spec__enum_functor_desc_line_end_reset_0_0 = {
  (MR_String) "line_end_reset_nothing",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__write_error_spec__parse_tree__write_error_spec__enum_functor_desc_line_end_reset_0_1 = {
  (MR_String) "line_end_reset_color",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__enum_ordinal_ordered_line_end_reset_0[2] = {
  &parse_tree__write_error_spec__parse_tree__write_error_spec__enum_functor_desc_line_end_reset_0_0,
  &parse_tree__write_error_spec__parse_tree__write_error_spec__enum_functor_desc_line_end_reset_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__enum_name_ordered_line_end_reset_0[2] = {
  &parse_tree__write_error_spec__parse_tree__write_error_spec__enum_functor_desc_line_end_reset_0_1,
  &parse_tree__write_error_spec__parse_tree__write_error_spec__enum_functor_desc_line_end_reset_0_0
};

static const MR_Integer parse_tree__write_error_spec__parse_tree__write_error_spec__functor_number_map_line_end_reset_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_line_end_reset_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__write_error_spec____Unify____line_end_reset_0_0_10001)),
  ((MR_Box) (parse_tree__write_error_spec____Compare____line_end_reset_0_0_10001)),
  (MR_String) "parse_tree.write_error_spec",
  (MR_String) "line_end_reset",
  { parse_tree__write_error_spec__parse_tree__write_error_spec__enum_name_ordered_line_end_reset_0 },
  { parse_tree__write_error_spec__parse_tree__write_error_spec__enum_ordinal_ordered_line_end_reset_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__write_error_spec__parse_tree__write_error_spec__functor_number_map_line_end_reset_0,

};

static const MR_EnumFunctorDesc parse_tree__write_error_spec__parse_tree__write_error_spec__enum_functor_desc_maybe_extra_error_info_0_0 = {
  (MR_String) "no_extra_error_info",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__write_error_spec__parse_tree__write_error_spec__enum_functor_desc_maybe_extra_error_info_0_1 = {
  (MR_String) "some_extra_error_info",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__enum_ordinal_ordered_maybe_extra_error_info_0[2] = {
  &parse_tree__write_error_spec__parse_tree__write_error_spec__enum_functor_desc_maybe_extra_error_info_0_0,
  &parse_tree__write_error_spec__parse_tree__write_error_spec__enum_functor_desc_maybe_extra_error_info_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__enum_name_ordered_maybe_extra_error_info_0[2] = {
  &parse_tree__write_error_spec__parse_tree__write_error_spec__enum_functor_desc_maybe_extra_error_info_0_0,
  &parse_tree__write_error_spec__parse_tree__write_error_spec__enum_functor_desc_maybe_extra_error_info_0_1
};

static const MR_Integer parse_tree__write_error_spec__parse_tree__write_error_spec__functor_number_map_maybe_extra_error_info_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_maybe_extra_error_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__write_error_spec____Unify____maybe_extra_error_info_0_0_10001)),
  ((MR_Box) (parse_tree__write_error_spec____Compare____maybe_extra_error_info_0_0_10001)),
  (MR_String) "parse_tree.write_error_spec",
  (MR_String) "maybe_extra_error_info",
  { parse_tree__write_error_spec__parse_tree__write_error_spec__enum_name_ordered_maybe_extra_error_info_0 },
  { parse_tree__write_error_spec__parse_tree__write_error_spec__enum_ordinal_ordered_maybe_extra_error_info_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__write_error_spec__parse_tree__write_error_spec__functor_number_map_maybe_extra_error_info_0,

};

static const MR_EnumFunctorDesc parse_tree__write_error_spec__parse_tree__write_error_spec__enum_functor_desc_maybe_first_in_msg_0_0 = {
  (MR_String) "first_in_msg",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__write_error_spec__parse_tree__write_error_spec__enum_functor_desc_maybe_first_in_msg_0_1 = {
  (MR_String) "not_first_in_msg",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__enum_ordinal_ordered_maybe_first_in_msg_0[2] = {
  &parse_tree__write_error_spec__parse_tree__write_error_spec__enum_functor_desc_maybe_first_in_msg_0_0,
  &parse_tree__write_error_spec__parse_tree__write_error_spec__enum_functor_desc_maybe_first_in_msg_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__enum_name_ordered_maybe_first_in_msg_0[2] = {
  &parse_tree__write_error_spec__parse_tree__write_error_spec__enum_functor_desc_maybe_first_in_msg_0_0,
  &parse_tree__write_error_spec__parse_tree__write_error_spec__enum_functor_desc_maybe_first_in_msg_0_1
};

static const MR_Integer parse_tree__write_error_spec__parse_tree__write_error_spec__functor_number_map_maybe_first_in_msg_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_maybe_first_in_msg_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__write_error_spec____Unify____maybe_first_in_msg_0_0_10001)),
  ((MR_Box) (parse_tree__write_error_spec____Compare____maybe_first_in_msg_0_0_10001)),
  (MR_String) "parse_tree.write_error_spec",
  (MR_String) "maybe_first_in_msg",
  { parse_tree__write_error_spec__parse_tree__write_error_spec__enum_name_ordered_maybe_first_in_msg_0 },
  { parse_tree__write_error_spec__parse_tree__write_error_spec__enum_ordinal_ordered_maybe_first_in_msg_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__write_error_spec__parse_tree__write_error_spec__functor_number_map_maybe_first_in_msg_0,

};

static const MR_EnumFunctorDesc parse_tree__write_error_spec__parse_tree__write_error_spec__enum_functor_desc_maybe_lower_next_initial_0_0 = {
  (MR_String) "lower_next_initial",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__write_error_spec__parse_tree__write_error_spec__enum_functor_desc_maybe_lower_next_initial_0_1 = {
  (MR_String) "do_not_lower_next_initial",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__enum_ordinal_ordered_maybe_lower_next_initial_0[2] = {
  &parse_tree__write_error_spec__parse_tree__write_error_spec__enum_functor_desc_maybe_lower_next_initial_0_0,
  &parse_tree__write_error_spec__parse_tree__write_error_spec__enum_functor_desc_maybe_lower_next_initial_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__enum_name_ordered_maybe_lower_next_initial_0[2] = {
  &parse_tree__write_error_spec__parse_tree__write_error_spec__enum_functor_desc_maybe_lower_next_initial_0_1,
  &parse_tree__write_error_spec__parse_tree__write_error_spec__enum_functor_desc_maybe_lower_next_initial_0_0
};

static const MR_Integer parse_tree__write_error_spec__parse_tree__write_error_spec__functor_number_map_maybe_lower_next_initial_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_maybe_lower_next_initial_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__write_error_spec____Unify____maybe_lower_next_initial_0_0_10001)),
  ((MR_Box) (parse_tree__write_error_spec____Compare____maybe_lower_next_initial_0_0_10001)),
  (MR_String) "parse_tree.write_error_spec",
  (MR_String) "maybe_lower_next_initial",
  { parse_tree__write_error_spec__parse_tree__write_error_spec__enum_name_ordered_maybe_lower_next_initial_0 },
  { parse_tree__write_error_spec__parse_tree__write_error_spec__enum_ordinal_ordered_maybe_lower_next_initial_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__write_error_spec__parse_tree__write_error_spec__functor_number_map_maybe_lower_next_initial_0,

};

static const MR_EnumFunctorDesc parse_tree__write_error_spec__parse_tree__write_error_spec__enum_functor_desc_maybe_printed_something_0_0 = {
  (MR_String) "printed_something",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__write_error_spec__parse_tree__write_error_spec__enum_functor_desc_maybe_printed_something_0_1 = {
  (MR_String) "have_not_printed_anything",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__enum_ordinal_ordered_maybe_printed_something_0[2] = {
  &parse_tree__write_error_spec__parse_tree__write_error_spec__enum_functor_desc_maybe_printed_something_0_0,
  &parse_tree__write_error_spec__parse_tree__write_error_spec__enum_functor_desc_maybe_printed_something_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__enum_name_ordered_maybe_printed_something_0[2] = {
  &parse_tree__write_error_spec__parse_tree__write_error_spec__enum_functor_desc_maybe_printed_something_0_1,
  &parse_tree__write_error_spec__parse_tree__write_error_spec__enum_functor_desc_maybe_printed_something_0_0
};

static const MR_Integer parse_tree__write_error_spec__parse_tree__write_error_spec__functor_number_map_maybe_printed_something_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_maybe_printed_something_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__write_error_spec____Unify____maybe_printed_something_0_0_10001)),
  ((MR_Box) (parse_tree__write_error_spec____Compare____maybe_printed_something_0_0_10001)),
  (MR_String) "parse_tree.write_error_spec",
  (MR_String) "maybe_printed_something",
  { parse_tree__write_error_spec__parse_tree__write_error_spec__enum_name_ordered_maybe_printed_something_0 },
  { parse_tree__write_error_spec__parse_tree__write_error_spec__enum_ordinal_ordered_maybe_printed_something_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__write_error_spec__parse_tree__write_error_spec__functor_number_map_maybe_printed_something_0,

};

static const MR_EnumFunctorDesc parse_tree__write_error_spec__parse_tree__write_error_spec__enum_functor_desc_maybe_treat_as_first_0_0 = {
  (MR_String) "treat_as_first",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__write_error_spec__parse_tree__write_error_spec__enum_functor_desc_maybe_treat_as_first_0_1 = {
  (MR_String) "do_not_treat_as_first",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__enum_ordinal_ordered_maybe_treat_as_first_0[2] = {
  &parse_tree__write_error_spec__parse_tree__write_error_spec__enum_functor_desc_maybe_treat_as_first_0_0,
  &parse_tree__write_error_spec__parse_tree__write_error_spec__enum_functor_desc_maybe_treat_as_first_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__enum_name_ordered_maybe_treat_as_first_0[2] = {
  &parse_tree__write_error_spec__parse_tree__write_error_spec__enum_functor_desc_maybe_treat_as_first_0_1,
  &parse_tree__write_error_spec__parse_tree__write_error_spec__enum_functor_desc_maybe_treat_as_first_0_0
};

static const MR_Integer parse_tree__write_error_spec__parse_tree__write_error_spec__functor_number_map_maybe_treat_as_first_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_maybe_treat_as_first_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__write_error_spec____Unify____maybe_treat_as_first_0_0_10001)),
  ((MR_Box) (parse_tree__write_error_spec____Compare____maybe_treat_as_first_0_0_10001)),
  (MR_String) "parse_tree.write_error_spec",
  (MR_String) "maybe_treat_as_first",
  { parse_tree__write_error_spec__parse_tree__write_error_spec__enum_name_ordered_maybe_treat_as_first_0 },
  { parse_tree__write_error_spec__parse_tree__write_error_spec__enum_ordinal_ordered_maybe_treat_as_first_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__write_error_spec__parse_tree__write_error_spec__functor_number_map_maybe_treat_as_first_0,

};

static const MR_FA_TypeInfo_Struct1 parse_tree__write_error_spec__list__ti_list_1parse_tree__write_error_spec__type_ctor_info_sc_unit_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_sc_unit_0) }
};

static const MR_PseudoTypeInfo parse_tree__write_error_spec__parse_tree__write_error_spec__field_types_paragraph_0_0[4] = {
  (MR_PseudoTypeInfo) (&parse_tree__write_error_spec__list__ti_list_1parse_tree__write_error_spec__type_ctor_info_sc_unit_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_paren_status_0)
};

static const MR_DuArgLocn parse_tree__write_error_spec__parse_tree__write_error_spec__field_locns_paragraph_0_0[4] = {
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
    (MR_Integer) 2
  }
};

static const MR_DuFunctorDesc parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_paragraph_0_0 = {
  (MR_String) "paragraph",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__write_error_spec__parse_tree__write_error_spec__field_types_paragraph_0_0,
  NULL,
  parse_tree__write_error_spec__parse_tree__write_error_spec__field_locns_paragraph_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__du_stag_ordered_paragraph_0_0[1] = { &parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_paragraph_0_0 };

static const MR_DuPtagLayout parse_tree__write_error_spec__parse_tree__write_error_spec__du_ptag_ordered_paragraph_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__write_error_spec__parse_tree__write_error_spec__du_stag_ordered_paragraph_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__du_name_ordered_paragraph_0[1] = { &parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_paragraph_0_0 };

static const MR_Integer parse_tree__write_error_spec__parse_tree__write_error_spec__functor_number_map_paragraph_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_paragraph_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__write_error_spec____Unify____paragraph_0_0_10001)),
  ((MR_Box) (parse_tree__write_error_spec____Compare____paragraph_0_0_10001)),
  (MR_String) "parse_tree.write_error_spec",
  (MR_String) "paragraph",
  { parse_tree__write_error_spec__parse_tree__write_error_spec__du_name_ordered_paragraph_0 },
  { parse_tree__write_error_spec__parse_tree__write_error_spec__du_ptag_ordered_paragraph_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__write_error_spec__parse_tree__write_error_spec__functor_number_map_paragraph_0,

};

static const MR_EnumFunctorDesc parse_tree__write_error_spec__parse_tree__write_error_spec__enum_functor_desc_paren_status_0_0 = {
  (MR_String) "paren_none",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__write_error_spec__parse_tree__write_error_spec__enum_functor_desc_paren_status_0_1 = {
  (MR_String) "paren_lp_end",
  INT32_C(1)
};

static const MR_EnumFunctorDesc parse_tree__write_error_spec__parse_tree__write_error_spec__enum_functor_desc_paren_status_0_2 = {
  (MR_String) "paren_end_rp",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__enum_ordinal_ordered_paren_status_0[3] = {
  &parse_tree__write_error_spec__parse_tree__write_error_spec__enum_functor_desc_paren_status_0_0,
  &parse_tree__write_error_spec__parse_tree__write_error_spec__enum_functor_desc_paren_status_0_1,
  &parse_tree__write_error_spec__parse_tree__write_error_spec__enum_functor_desc_paren_status_0_2
};

static const MR_EnumFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__enum_name_ordered_paren_status_0[3] = {
  &parse_tree__write_error_spec__parse_tree__write_error_spec__enum_functor_desc_paren_status_0_2,
  &parse_tree__write_error_spec__parse_tree__write_error_spec__enum_functor_desc_paren_status_0_1,
  &parse_tree__write_error_spec__parse_tree__write_error_spec__enum_functor_desc_paren_status_0_0
};

static const MR_Integer parse_tree__write_error_spec__parse_tree__write_error_spec__functor_number_map_paren_status_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_paren_status_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__write_error_spec____Unify____paren_status_0_0_10001)),
  ((MR_Box) (parse_tree__write_error_spec____Compare____paren_status_0_0_10001)),
  (MR_String) "parse_tree.write_error_spec",
  (MR_String) "paren_status",
  { parse_tree__write_error_spec__parse_tree__write_error_spec__enum_name_ordered_paren_status_0 },
  { parse_tree__write_error_spec__parse_tree__write_error_spec__enum_ordinal_ordered_paren_status_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  parse_tree__write_error_spec__parse_tree__write_error_spec__functor_number_map_paren_status_0,

};

static const MR_PseudoTypeInfo parse_tree__write_error_spec__parse_tree__write_error_spec__field_types_plain_or_prefix_0_0[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_plain_or_prefix_0_0 = {
  (MR_String) "plain",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__write_error_spec__parse_tree__write_error_spec__field_types_plain_or_prefix_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__write_error_spec__parse_tree__write_error_spec__field_types_plain_or_prefix_0_1[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_plain_or_prefix_0_1 = {
  (MR_String) "prefix",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__write_error_spec__parse_tree__write_error_spec__field_types_plain_or_prefix_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_plain_or_prefix_0_2 = {
  (MR_String) "lower_next",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(2),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__write_error_spec__parse_tree__write_error_spec__field_types_plain_or_prefix_0_3[1] = { (MR_PseudoTypeInfo) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_color_0) };

static const MR_DuFunctorDesc parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_plain_or_prefix_0_3 = {
  (MR_String) "color_start",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(3),
  (MR_Integer) -1,
  INT32_C(3),
  parse_tree__write_error_spec__parse_tree__write_error_spec__field_types_plain_or_prefix_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_plain_or_prefix_0_4 = {
  (MR_String) "color_end",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(4),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__du_stag_ordered_plain_or_prefix_0_0[2] = {
  &parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_plain_or_prefix_0_2,
  &parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_plain_or_prefix_0_4
};

static const MR_DuFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__du_stag_ordered_plain_or_prefix_0_1[1] = { &parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_plain_or_prefix_0_0 };

static const MR_DuFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__du_stag_ordered_plain_or_prefix_0_2[1] = { &parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_plain_or_prefix_0_1 };

static const MR_DuFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__du_stag_ordered_plain_or_prefix_0_3[1] = { &parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_plain_or_prefix_0_3 };

static const MR_DuPtagLayout parse_tree__write_error_spec__parse_tree__write_error_spec__du_ptag_ordered_plain_or_prefix_0[4] = {
  {
    UINT32_C(2),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    parse_tree__write_error_spec__parse_tree__write_error_spec__du_stag_ordered_plain_or_prefix_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__write_error_spec__parse_tree__write_error_spec__du_stag_ordered_plain_or_prefix_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__write_error_spec__parse_tree__write_error_spec__du_stag_ordered_plain_or_prefix_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__write_error_spec__parse_tree__write_error_spec__du_stag_ordered_plain_or_prefix_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__du_name_ordered_plain_or_prefix_0[5] = {
  &parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_plain_or_prefix_0_4,
  &parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_plain_or_prefix_0_3,
  &parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_plain_or_prefix_0_2,
  &parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_plain_or_prefix_0_0,
  &parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_plain_or_prefix_0_1
};

static const MR_Integer parse_tree__write_error_spec__parse_tree__write_error_spec__functor_number_map_plain_or_prefix_0[5] = {
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_plain_or_prefix_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__write_error_spec____Unify____plain_or_prefix_0_0_10001)),
  ((MR_Box) (parse_tree__write_error_spec____Compare____plain_or_prefix_0_0_10001)),
  (MR_String) "parse_tree.write_error_spec",
  (MR_String) "plain_or_prefix",
  { parse_tree__write_error_spec__parse_tree__write_error_spec__du_name_ordered_plain_or_prefix_0 },
  { parse_tree__write_error_spec__parse_tree__write_error_spec__du_ptag_ordered_plain_or_prefix_0 },
  (MR_Integer) 5,
  UINT16_C(12),
  parse_tree__write_error_spec__parse_tree__write_error_spec__functor_number_map_plain_or_prefix_0,

};

static const MR_PseudoTypeInfo parse_tree__write_error_spec__parse_tree__write_error_spec__field_types_sc_unit_0_0[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_sc_unit_0_0 = {
  (MR_String) "sc_str",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__write_error_spec__parse_tree__write_error_spec__field_types_sc_unit_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__write_error_spec__parse_tree__write_error_spec__field_types_sc_unit_0_1[1] = { (MR_PseudoTypeInfo) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_color_0) };

static const MR_DuFunctorDesc parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_sc_unit_0_1 = {
  (MR_String) "sc_color_start",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__write_error_spec__parse_tree__write_error_spec__field_types_sc_unit_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_sc_unit_0_2 = {
  (MR_String) "sc_color_end",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(2),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__du_stag_ordered_sc_unit_0_0[1] = { &parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_sc_unit_0_2 };

static const MR_DuFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__du_stag_ordered_sc_unit_0_1[1] = { &parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_sc_unit_0_0 };

static const MR_DuFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__du_stag_ordered_sc_unit_0_2[1] = { &parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_sc_unit_0_1 };

static const MR_DuPtagLayout parse_tree__write_error_spec__parse_tree__write_error_spec__du_ptag_ordered_sc_unit_0[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    parse_tree__write_error_spec__parse_tree__write_error_spec__du_stag_ordered_sc_unit_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__write_error_spec__parse_tree__write_error_spec__du_stag_ordered_sc_unit_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__write_error_spec__parse_tree__write_error_spec__du_stag_ordered_sc_unit_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__du_name_ordered_sc_unit_0[3] = {
  &parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_sc_unit_0_2,
  &parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_sc_unit_0_1,
  &parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_sc_unit_0_0
};

static const MR_Integer parse_tree__write_error_spec__parse_tree__write_error_spec__functor_number_map_sc_unit_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_sc_unit_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__write_error_spec____Unify____sc_unit_0_0_10001)),
  ((MR_Box) (parse_tree__write_error_spec____Compare____sc_unit_0_0_10001)),
  (MR_String) "parse_tree.write_error_spec",
  (MR_String) "sc_unit",
  { parse_tree__write_error_spec__parse_tree__write_error_spec__du_name_ordered_sc_unit_0 },
  { parse_tree__write_error_spec__parse_tree__write_error_spec__du_ptag_ordered_sc_unit_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  parse_tree__write_error_spec__parse_tree__write_error_spec__functor_number_map_sc_unit_0,

};

static const MR_PseudoTypeInfo parse_tree__write_error_spec__parse_tree__write_error_spec__field_types_word_0_0[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_word_0_0 = {
  (MR_String) "plain_word",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__write_error_spec__parse_tree__write_error_spec__field_types_word_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__write_error_spec__parse_tree__write_error_spec__field_types_word_0_1[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_word_0_1 = {
  (MR_String) "prefix_word",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__write_error_spec__parse_tree__write_error_spec__field_types_word_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__write_error_spec__parse_tree__write_error_spec__field_types_word_0_2[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_word_0_2 = {
  (MR_String) "suffix_word",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(2),
  parse_tree__write_error_spec__parse_tree__write_error_spec__field_types_word_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_word_0_3 = {
  (MR_String) "lower_next_word",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(3),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__write_error_spec__parse_tree__write_error_spec__field_types_word_0_4[1] = { (MR_PseudoTypeInfo) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_color_0) };

static const MR_DuFunctorDesc parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_word_0_4 = {
  (MR_String) "color_start_word",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(4),
  parse_tree__write_error_spec__parse_tree__write_error_spec__field_types_word_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_word_0_5 = {
  (MR_String) "color_end_word",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(5),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__du_stag_ordered_word_0_0[2] = {
  &parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_word_0_3,
  &parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_word_0_5
};

static const MR_DuFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__du_stag_ordered_word_0_1[1] = { &parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_word_0_0 };

static const MR_DuFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__du_stag_ordered_word_0_2[1] = { &parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_word_0_1 };

static const MR_DuFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__du_stag_ordered_word_0_3[2] = {
  &parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_word_0_2,
  &parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_word_0_4
};

static const MR_DuPtagLayout parse_tree__write_error_spec__parse_tree__write_error_spec__du_ptag_ordered_word_0[4] = {
  {
    UINT32_C(2),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    parse_tree__write_error_spec__parse_tree__write_error_spec__du_stag_ordered_word_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__write_error_spec__parse_tree__write_error_spec__du_stag_ordered_word_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__write_error_spec__parse_tree__write_error_spec__du_stag_ordered_word_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(2),
    MR_SECTAG_REMOTE_FULL_WORD,
    parse_tree__write_error_spec__parse_tree__write_error_spec__du_stag_ordered_word_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__du_name_ordered_word_0[6] = {
  &parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_word_0_5,
  &parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_word_0_4,
  &parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_word_0_3,
  &parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_word_0_0,
  &parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_word_0_1,
  &parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_word_0_2
};

static const MR_Integer parse_tree__write_error_spec__parse_tree__write_error_spec__functor_number_map_word_0[6] = {
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 5,
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_word_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__write_error_spec____Unify____word_0_0_10001)),
  ((MR_Box) (parse_tree__write_error_spec____Compare____word_0_0_10001)),
  (MR_String) "parse_tree.write_error_spec",
  (MR_String) "word",
  { parse_tree__write_error_spec__parse_tree__write_error_spec__du_name_ordered_word_0 },
  { parse_tree__write_error_spec__parse_tree__write_error_spec__du_ptag_ordered_word_0 },
  (MR_Integer) 6,
  UINT16_C(12),
  parse_tree__write_error_spec__parse_tree__write_error_spec__functor_number_map_word_0,

};

static MR_bool MR_CALL 
parse_tree__write_error_spec__IntroducedFrom__pred__find_matching_rp_and_maybe_join__1614__1_2_p_0(
  MR_Integer TotalLpRpLen_30,
  MR_Integer ReplacementLineLen_36)
{
  MR_bool succeeded = (TotalLpRpLen_30 == ReplacementLineLen_36);

  return succeeded;
}

static MR_String MR_CALL 
parse_tree__write_error_spec__IntroducedFrom__func__find_matching_rp_and_maybe_join__1609__1_1_f_0(
  MR_Word LambdaHeadVar__1_56)
{
  MR_String LambdaHeadVar__2_57 = ((MR_String) ((MR_hl_field(0, LambdaHeadVar__1_56, (MR_Integer) 2))));

  return LambdaHeadVar__2_57;
}

static MR_bool MR_CALL 
parse_tree__write_error_spec__IntroducedFrom__pred__find_matching_rp_and_maybe_join__1588__1_2_p_0(
  MR_Word LPParen_15,
  MR_Word HeadVar__2_42)
{
  MR_bool succeeded = (LPParen_15 == HeadVar__2_42);

  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__write_error_spec__IntroducedFrom__pred__get_later_words__1413__1_2_p_0(
  MR_String NextSpace0_2,
  MR_String HeadVar__2_50)
{
  MR_bool succeeded = (strcmp(NextSpace0_2, HeadVar__2_50) == 0);

  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__write_error_spec__IntroducedFrom__pred__get_later_words__1435__1_2_p_0(
  MR_String NextSpace0_2,
  MR_String HeadVar__2_59)
{
  MR_bool succeeded = (strcmp(NextSpace0_2, HeadVar__2_59) == 0);

  return succeeded;
}

static void MR_CALL 
parse_tree__write_error_spec____Compare____word_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
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
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
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
              case (MR_Integer) 2:
              case (MR_Integer) 3:
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
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            {
              MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
              MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

              mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
            }
            break;
        }
        break;
      case (MR_Integer) 2:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            {
              MR_String ArgX1_6 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
              MR_String ArgY1_7 = ((MR_String) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));

              mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX1_6, ArgY1_7);
            }
            break;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_String ArgX1_8 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                      MR_String ArgY1_9 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));

                      mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX1_8, ArgY1_9);
                    }
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
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
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word ArgX1_10 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                      MR_Word ArgY1_11 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));

                      parse_tree__write_error_spec____Compare____color_0_0(HeadVar__1_1, ArgX1_10, ArgY1_11);
                    }
                    break;
                }
                break;
            }
            break;
        }
        break;
    }
}

static MR_bool MR_CALL 
parse_tree__write_error_spec____Unify____word_0_0(
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
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_10 == CastX_9);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_14 == CastX_13);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_String ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String ArgX1_5 = ((MR_String) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))));
          MR_String ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_6 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = (strcmp(ArgX1_5, ArgY1_6) == 0);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String ArgX1_7 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_String ArgY1_8;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_8 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = (strcmp(ArgX1_7, ArgY1_8) == 0);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_12;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_12 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = parse_tree__write_error_spec____Unify____color_0_0(ArgX1_11, ArgY1_12);
              }
            }
            break;
        }
        break;
    }
  return succeeded;
}

static void MR_CALL 
parse_tree__write_error_spec____Compare____sc_unit_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_8 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_9 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_8 == CastY_9);
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
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            {
              MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
              MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

              mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
            }
            break;
        }
        break;
      case (MR_Integer) 2:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
              MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));

              parse_tree__write_error_spec____Compare____color_0_0(HeadVar__1_1, ArgX1_6, ArgY1_7);
            }
            break;
        }
        break;
    }
}

static MR_bool MR_CALL 
parse_tree__write_error_spec____Unify____sc_unit_0_0(
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
        {
          MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_8 == CastX_7);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_String ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = parse_tree__write_error_spec____Unify____color_0_0(ArgX1_5, ArgY1_6);
          }
        }
        break;
    }
  return succeeded;
}

static void MR_CALL 
parse_tree__write_error_spec____Compare____plain_or_prefix_0_0(
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
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                *HeadVar__1_1 = (MR_Integer) 1;
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
              case (MR_Integer) 2:
              case (MR_Integer) 3:
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
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            {
              MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
              MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

              mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
            }
            break;
        }
        break;
      case (MR_Integer) 2:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            {
              MR_String ArgX1_6 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
              MR_String ArgY1_7 = ((MR_String) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));

              mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX1_6, ArgY1_7);
            }
            break;
        }
        break;
      case (MR_Integer) 3:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 3:
            {
              MR_Word ArgX1_8 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))));
              MR_Word ArgY1_9 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))));

              parse_tree__write_error_spec____Compare____color_0_0(HeadVar__1_1, ArgX1_8, ArgY1_9);
            }
            break;
        }
        break;
    }
}

static MR_bool MR_CALL 
parse_tree__write_error_spec____Unify____plain_or_prefix_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_13 == CastY_14);
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
              MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_8 == CastX_7);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_12 == CastX_11);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_String ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String ArgX1_5 = ((MR_String) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))));
          MR_String ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_6 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = (strcmp(ArgX1_5, ArgY1_6) == 0);
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_10;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3);
          if (succeeded)
          {
            ArgY1_10 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = parse_tree__write_error_spec____Unify____color_0_0(ArgX1_9, ArgY1_10);
          }
        }
        break;
    }
  return succeeded;
}

static void MR_CALL 
parse_tree__write_error_spec____Compare____paren_status_0_0(
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
parse_tree__write_error_spec____Unify____paren_status_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
parse_tree__write_error_spec____Compare____paragraph_0_0(
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
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))) & (MR_Integer) 3);
    MR_Word ArgY4_14 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))) & (MR_Integer) 3);
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__write_error_spec_scalar_common_1[4]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      succeeded = (ArgX2_7 < ArgY2_8);
      if (succeeded)
      {
        SubResult2_9 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (ArgX2_7 > ArgY2_8);
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

        succeeded = (ArgX3_10 < ArgY3_11);
        if (succeeded)
        {
          SubResult3_12 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (ArgX3_10 > ArgY3_11);
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
          MR_Integer Var_21 = (MR_Integer) (ArgX4_13);
          MR_Integer Var_22 = (MR_Integer) (ArgY4_14);

          succeeded = (Var_21 < Var_22);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 1;
          else
          {
            succeeded = (Var_21 > Var_22);
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

static MR_bool MR_CALL 
parse_tree__write_error_spec____Unify____paragraph_0_0(
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
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))) & (MR_Integer) 3);
    MR_Word ArgY4_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))) & (MR_Integer) 3);

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__write_error_spec_scalar_common_1[4]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        succeeded = (ArgX3_7 == ArgY3_8);
        if (succeeded)
          succeeded = (ArgX4_9 == ArgY4_10);
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
parse_tree__write_error_spec____Compare____maybe_treat_as_first_0_0(
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
parse_tree__write_error_spec____Unify____maybe_treat_as_first_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
parse_tree__write_error_spec____Compare____maybe_printed_something_0_0(
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
parse_tree__write_error_spec____Unify____maybe_printed_something_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
parse_tree__write_error_spec____Compare____maybe_lower_next_initial_0_0(
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
parse_tree__write_error_spec____Unify____maybe_lower_next_initial_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
parse_tree__write_error_spec____Compare____maybe_first_in_msg_0_0(
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
parse_tree__write_error_spec____Unify____maybe_first_in_msg_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
parse_tree__write_error_spec____Compare____maybe_extra_error_info_0_0(
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
parse_tree__write_error_spec____Unify____maybe_extra_error_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
parse_tree__write_error_spec____Compare____line_end_reset_0_0(
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
parse_tree__write_error_spec____Unify____line_end_reset_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__write_error_spec____Compare____error_line_0_0(
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
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Unsigned ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Unsigned ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_String ArgX3_10 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_String ArgY3_11 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Integer ArgX4_13 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Integer ArgY4_14 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word ArgX5_16 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))) & (MR_Integer) 1);
    MR_Word ArgY5_17 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))) & (MR_Integer) 1);
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 5))));
    MR_Word ArgX7_22 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))) & (MR_Integer) 3);
    MR_Word ArgY7_23 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 6))) & (MR_Integer) 3);
    MR_Word SubResult1_6;

    succeeded = (ArgX1_4 < ArgY1_5);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (ArgX1_4 > ArgY1_5);
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

      succeeded = (ArgX2_7 < ArgY2_8);
      if (succeeded)
      {
        SubResult2_9 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (ArgX2_7 > ArgY2_8);
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

        mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          succeeded = (ArgX4_13 < ArgY4_14);
          if (succeeded)
          {
            SubResult4_15 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (ArgX4_13 > ArgY4_14);
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
            MR_Integer Var_33 = (MR_Integer) (ArgX5_16);
            MR_Integer Var_34 = (MR_Integer) (ArgY5_17);

            succeeded = (Var_33 < Var_34);
            if (succeeded)
            {
              SubResult5_18 = (MR_Integer) 1;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = (Var_33 > Var_34);
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

              mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__write_error_spec_scalar_common_1[3]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Integer Var_35 = (MR_Integer) (ArgX7_22);
                MR_Integer Var_36 = (MR_Integer) (ArgY7_23);

                succeeded = (Var_35 < Var_36);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_35 > Var_36);
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

static void MR_CALL 
parse_tree__write_error_spec____Compare____context_limited_errors_0_0(
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
parse_tree__write_error_spec____Unify____context_limited_errors_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
parse_tree__write_error_spec____Compare____color_stack_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__write_error_spec_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
parse_tree__write_error_spec____Unify____color_stack_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__write_error_spec_scalar_common_1[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
parse_tree__write_error_spec____Compare____color_db_0_0(
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
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word ArgX1_4 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 1));
    MR_Word ArgY1_5 = (MR_Word) (MR_body((MR_Word) (HeadVar__3_3), (MR_Integer) 1));

    parse_tree__write_error_spec____Compare____color_name_map_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

static void MR_CALL 
parse_tree__write_error_spec____Compare____color_name_map_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    parse_tree__write_error_spec____Compare____color_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      parse_tree__write_error_spec____Compare____color_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

static MR_bool MR_CALL 
parse_tree__write_error_spec____Unify____color_db_0_0(
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
    MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_4 == CastX_3);
  }
  else
  {
    MR_Word ArgX1_5 = (MR_Word) (MR_body((MR_Word) (HeadVar__1_1), (MR_Integer) 1));
    MR_Word ArgY1_6;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_6 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 1));
      succeeded = parse_tree__write_error_spec____Unify____color_name_map_0_0(ArgX1_5, ArgY1_6);
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__write_error_spec____Unify____color_name_map_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = parse_tree__write_error_spec____Unify____color_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
      succeeded = parse_tree__write_error_spec____Unify____color_0_0(ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

static void MR_CALL 
parse_tree__write_error_spec____Compare____color_0_0(
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
    uint8_t ArgX1_4 = ((uint8_t) (MR_Word) (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0)));
    uint8_t ArgY1_5 = ((uint8_t) (MR_Word) (MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0)));

    succeeded = (ArgX1_4 < ArgY1_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (ArgX1_4 > ArgY1_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

static MR_bool MR_CALL 
parse_tree__write_error_spec____Unify____color_0_0(
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
    uint8_t ArgX1_3 = ((uint8_t) (MR_Word) (MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0)));
    uint8_t ArgY1_4;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((uint8_t) (MR_Word) (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0)));
      succeeded = (ArgX1_3 == ArgY1_4);
    }
  }
  return succeeded;
}

static void MR_CALL 
parse_tree__write_error_spec____Compare____already_printed_verbose_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__write_error_spec_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
parse_tree__write_error_spec____Unify____already_printed_verbose_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__write_error_spec_scalar_common_1[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
parse_tree__write_error_spec__unsafe_set_some_errors_were_context_limited_1_p_0(
  MR_Word X_1)
{
{
#define MR_PROC_LABEL parse_tree__write_error_spec__unsafe_set_some_errors_were_context_limited_1_p_0

	MR_Word X;

	X = X_1 ;
		{
MR_set_thread_local_mutable(MR_Word, X, parse_tree__write_error_spec__mutable_variable_some_errors_were_context_limited);


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
parse_tree__write_error_spec__unsafe_get_some_errors_were_context_limited_1_p_0(
  MR_Word * X_1)
{
{
#define MR_PROC_LABEL parse_tree__write_error_spec__unsafe_get_some_errors_were_context_limited_1_p_0

	MR_Word X;

		{
MR_get_thread_local_mutable(MR_Word, X, parse_tree__write_error_spec__mutable_variable_some_errors_were_context_limited);


		;}
#undef MR_PROC_LABEL
	*X_1  = X;
}
}

static void MR_CALL 
parse_tree__write_error_spec__unlock_some_errors_were_context_limited_0_p_0(void)
{
{
#define MR_PROC_LABEL parse_tree__write_error_spec__unlock_some_errors_were_context_limited_0_p_0


		{


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
parse_tree__write_error_spec__lock_some_errors_were_context_limited_0_p_0(void)
{
{
#define MR_PROC_LABEL parse_tree__write_error_spec__lock_some_errors_were_context_limited_0_p_0


		{


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
parse_tree__write_error_spec__pre_initialise_mutable_some_errors_were_context_limited_0_p_0(void)
{
{
#define MR_PROC_LABEL parse_tree__write_error_spec__pre_initialise_mutable_some_errors_were_context_limited_0_p_0


		{
parse_tree__write_error_spec__mutable_variable_some_errors_were_context_limited = MR_new_thread_local_mutable_index();


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
parse_tree__write_error_spec__initialise_mutable_some_errors_were_context_limited_0_p_0(void)
{
{
#define MR_PROC_LABEL parse_tree__write_error_spec__initialise_mutable_some_errors_were_context_limited_0_p_0


		{
parse_tree__write_error_spec__mutable_variable_some_errors_were_context_limited = MR_new_thread_local_mutable_index();


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL parse_tree__write_error_spec__initialise_mutable_some_errors_were_context_limited_0_p_0


		{


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL parse_tree__write_error_spec__initialise_mutable_some_errors_were_context_limited_0_p_0

	MR_Word X;

	X = (MR_Integer) 0 ;
		{
MR_set_thread_local_mutable(MR_Word, X, parse_tree__write_error_spec__mutable_variable_some_errors_were_context_limited);


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL parse_tree__write_error_spec__initialise_mutable_some_errors_were_context_limited_0_p_0


		{


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
parse_tree__write_error_spec__unsafe_set_extra_error_info_1_p_0(
  MR_Word X_1)
{
{
#define MR_PROC_LABEL parse_tree__write_error_spec__unsafe_set_extra_error_info_1_p_0

	MR_Word X;

	X = X_1 ;
		{
MR_set_thread_local_mutable(MR_Word, X, parse_tree__write_error_spec__mutable_variable_extra_error_info);


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
parse_tree__write_error_spec__unsafe_get_extra_error_info_1_p_0(
  MR_Word * X_1)
{
{
#define MR_PROC_LABEL parse_tree__write_error_spec__unsafe_get_extra_error_info_1_p_0

	MR_Word X;

		{
MR_get_thread_local_mutable(MR_Word, X, parse_tree__write_error_spec__mutable_variable_extra_error_info);


		;}
#undef MR_PROC_LABEL
	*X_1  = X;
}
}

static void MR_CALL 
parse_tree__write_error_spec__unlock_extra_error_info_0_p_0(void)
{
{
#define MR_PROC_LABEL parse_tree__write_error_spec__unlock_extra_error_info_0_p_0


		{


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
parse_tree__write_error_spec__lock_extra_error_info_0_p_0(void)
{
{
#define MR_PROC_LABEL parse_tree__write_error_spec__lock_extra_error_info_0_p_0


		{


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
parse_tree__write_error_spec__pre_initialise_mutable_extra_error_info_0_p_0(void)
{
{
#define MR_PROC_LABEL parse_tree__write_error_spec__pre_initialise_mutable_extra_error_info_0_p_0


		{
parse_tree__write_error_spec__mutable_variable_extra_error_info = MR_new_thread_local_mutable_index();


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
parse_tree__write_error_spec__initialise_mutable_extra_error_info_0_p_0(void)
{
{
#define MR_PROC_LABEL parse_tree__write_error_spec__initialise_mutable_extra_error_info_0_p_0


		{
parse_tree__write_error_spec__mutable_variable_extra_error_info = MR_new_thread_local_mutable_index();


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL parse_tree__write_error_spec__initialise_mutable_extra_error_info_0_p_0


		{


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL parse_tree__write_error_spec__initialise_mutable_extra_error_info_0_p_0

	MR_Word X;

	X = (MR_Integer) 0 ;
		{
MR_set_thread_local_mutable(MR_Word, X, parse_tree__write_error_spec__mutable_variable_extra_error_info);


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL parse_tree__write_error_spec__initialise_mutable_extra_error_info_0_p_0


		{


		;}
#undef MR_PROC_LABEL
}
}

static MR_String MR_CALL 
parse_tree__write_error_spec__convert_line_and_nl_to_string_2_f_0(
  MR_String Prefix_4,
  MR_Word Line_5)
{
  MR_bool succeeded;
  MR_String Str_6;
  MR_Unsigned LineIndent_8 = ((MR_Unsigned) ((MR_hl_field(0, Line_5, (MR_Integer) 1))));
  MR_String RawLineWordsStr_9 = ((MR_String) ((MR_hl_field(0, Line_5, (MR_Integer) 2))));

  succeeded = (strcmp(RawLineWordsStr_9, (MR_String) "") == 0);
  if (succeeded)
    Str_6 = mercury__string__f_43_43_2_f_0(Prefix_4, (MR_String) "\n");
  else
  {
    MR_String IndentStr_14;
    MR_String LineWordsStr_15;
    MR_String Var_17;
    MR_String Var_18;

    IndentStr_14 = libs__indent__indent2_string_1_f_0(LineIndent_8);
    LineWordsStr_15 = parse_tree__write_error_spec__convert_line_words_to_string_1_f_0(Line_5);
    Var_18 = mercury__string__f_43_43_2_f_0(LineWordsStr_15, (MR_String) "\n");
    Var_17 = mercury__string__f_43_43_2_f_0(IndentStr_14, Var_18);
    Str_6 = mercury__string__f_43_43_2_f_0(Prefix_4, Var_17);
  }
  return Str_6;
}

void MR_CALL 
parse_tree__write_error_spec__maybe_print_delayed_error_messages_4_p_0(
  MR_Word ErrorStream_5,
  MR_Word Globals_6)
{
  MR_Word Limited_8;
  MR_Word ExtraErrorInfo_9;

{
#define MR_PROC_LABEL parse_tree__write_error_spec__maybe_print_delayed_error_messages_4_p_0


		{


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL parse_tree__write_error_spec__maybe_print_delayed_error_messages_4_p_0

	MR_Word X;

		{
MR_get_thread_local_mutable(MR_Word, X, parse_tree__write_error_spec__mutable_variable_some_errors_were_context_limited);


		;}
#undef MR_PROC_LABEL
	Limited_8  = X;
}
{
#define MR_PROC_LABEL parse_tree__write_error_spec__maybe_print_delayed_error_messages_4_p_0


		{


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL parse_tree__write_error_spec__maybe_print_delayed_error_messages_4_p_0


		{


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL parse_tree__write_error_spec__maybe_print_delayed_error_messages_4_p_0

	MR_Word X;

	X = (MR_Integer) 0 ;
		{
MR_set_thread_local_mutable(MR_Word, X, parse_tree__write_error_spec__mutable_variable_some_errors_were_context_limited);


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL parse_tree__write_error_spec__maybe_print_delayed_error_messages_4_p_0


		{


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL parse_tree__write_error_spec__maybe_print_delayed_error_messages_4_p_0


		{


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL parse_tree__write_error_spec__maybe_print_delayed_error_messages_4_p_0

	MR_Word X;

		{
MR_get_thread_local_mutable(MR_Word, X, parse_tree__write_error_spec__mutable_variable_extra_error_info);


		;}
#undef MR_PROC_LABEL
	ExtraErrorInfo_9  = X;
}
{
#define MR_PROC_LABEL parse_tree__write_error_spec__maybe_print_delayed_error_messages_4_p_0


		{


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL parse_tree__write_error_spec__maybe_print_delayed_error_messages_4_p_0


		{


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL parse_tree__write_error_spec__maybe_print_delayed_error_messages_4_p_0

	MR_Word X;

	X = (MR_Integer) 0 ;
		{
MR_set_thread_local_mutable(MR_Word, X, parse_tree__write_error_spec__mutable_variable_extra_error_info);


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL parse_tree__write_error_spec__maybe_print_delayed_error_messages_4_p_0


		{


		;}
#undef MR_PROC_LABEL
}
  switch (Limited_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        mercury__io__write_string_4_p_0(ErrorStream_5, (MR_String) "Some error messages were suppressed by \140--limit-error-contexts\' options.\n");
        mercury__io__write_string_4_p_0(ErrorStream_5, (MR_String) "You can see the suppressed messages if you recompile without these options.\n");
      }
      break;
  }
  switch (ExtraErrorInfo_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word VerboseErrors_10;

        libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 75, &VerboseErrors_10);
        switch (VerboseErrors_10) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            mercury__io__write_string_4_p_0(ErrorStream_5, (MR_String) "For more information, recompile with \140-E\'.\n");
            break;
          case (MR_Integer) 1:
            {
            }
            break;
        }
      }
      break;
  }
}

void MR_CALL 
parse_tree__write_error_spec__pre_hlds_maybe_write_out_errors_7_p_0(
  MR_Word Stream_8,
  MR_Word Verbose_9,
  MR_Word Globals_10,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14)
{
  switch (Verbose_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_Specs_14 = STATE_VARIABLE_Specs_0_13;
      break;
    case (MR_Integer) 1:
      {
        parse_tree__write_error_spec__write_error_specs_5_p_0(Stream_8, Globals_10, STATE_VARIABLE_Specs_0_13);
        *STATE_VARIABLE_Specs_14 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
  }
}

static MR_Box MR_CALL 
parse_tree__write_error_spec__error_pieces_to_multi_line_string_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_Str_6;

  conv0_Str_6 = parse_tree__write_error_spec__convert_line_and_nl_to_string_2_f_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Str_6));
  return wrapper_arg_2;
}

MR_String MR_CALL 
parse_tree__write_error_spec__error_pieces_to_multi_line_string_2_f_0(
  MR_String Prefix_4,
  MR_Word Pieces_5)
{
  MR_String Str_6;
  MR_Word Lines_7;
  MR_Word LineStrs_8;
  MR_Word Var_9;

  Lines_7 = parse_tree__write_error_spec__error_pieces_to_std_lines_1_f_0(Pieces_5);
  {
    Var_9 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_9, 0) = ((MR_Box) (&parse_tree__write_error_spec_scalar_common_7[0]));
    MR_hl_field(0, Var_9, 1) = ((MR_Box) (parse_tree__write_error_spec__error_pieces_to_multi_line_string_2_f_0_1));
    MR_hl_field(0, Var_9, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_9, 3) = ((MR_Box) (Prefix_4));
  }
  LineStrs_8 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_error_line_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_9, Lines_7);
  mercury__string__append_list_2_p_0(LineStrs_8, &Str_6);
  return Str_6;
}

static MR_Box MR_CALL 
parse_tree__write_error_spec__error_pieces_to_one_line_string_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_Str_4;

  conv0_Str_4 = parse_tree__write_error_spec__convert_line_words_to_string_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Str_4));
  return wrapper_arg_2;
}

MR_String MR_CALL 
parse_tree__write_error_spec__error_pieces_to_one_line_string_1_f_0(
  MR_Word Pieces_3)
{
  MR_String Str_4;
  MR_Word Lines_5;
  MR_Word LineStrs_6;

  Lines_5 = parse_tree__write_error_spec__error_pieces_to_std_lines_1_f_0(Pieces_3);
  LineStrs_6 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_error_line_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__write_error_spec_scalar_common_5[2]), Lines_5);
  Str_4 = mercury__string__join_list_2_f_0((MR_String) " ", LineStrs_6);
  return Str_4;
}

static MR_Box MR_CALL 
parse_tree__write_error_spec__error_lines_to_multi_line_string_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_Str_6;

  conv0_Str_6 = parse_tree__write_error_spec__convert_line_and_nl_to_string_2_f_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Str_6));
  return wrapper_arg_2;
}

MR_String MR_CALL 
parse_tree__write_error_spec__error_lines_to_multi_line_string_2_f_0(
  MR_String Prefix_4,
  MR_Word Lines_5)
{
  MR_String Str_6;
  MR_Word LineStrs_7;
  MR_Word Var_8;

  {
    Var_8 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_8, 0) = ((MR_Box) (&parse_tree__write_error_spec_scalar_common_7[0]));
    MR_hl_field(0, Var_8, 1) = ((MR_Box) (parse_tree__write_error_spec__error_lines_to_multi_line_string_2_f_0_1));
    MR_hl_field(0, Var_8, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_8, 3) = ((MR_Box) (Prefix_4));
  }
  LineStrs_7 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_error_line_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_8, Lines_5);
  mercury__string__append_list_2_p_0(LineStrs_7, &Str_6);
  return Str_6;
}

static MR_Box MR_CALL 
parse_tree__write_error_spec__error_lines_to_one_line_string_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_Str_4;

  conv0_Str_4 = parse_tree__write_error_spec__convert_line_words_to_string_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Str_4));
  return wrapper_arg_2;
}

MR_String MR_CALL 
parse_tree__write_error_spec__error_lines_to_one_line_string_1_f_0(
  MR_Word Lines_3)
{
  MR_String Str_4;
  MR_Word LineStrs_5;

  LineStrs_5 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_error_line_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__write_error_spec_scalar_common_5[1]), Lines_3);
  Str_4 = mercury__string__join_list_2_f_0((MR_String) " ", LineStrs_5);
  return Str_4;
}

MR_bool MR_CALL 
parse_tree__write_error_spec__do_lines_fit_in_n_code_points_2_p_0(
  MR_Integer HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    succeeded = MR_TRUE;
  else
  {
    MR_Word Line1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Lines2plus_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer LineLen1_7 = ((MR_Integer) ((MR_hl_field(0, Line1_5, (MR_Integer) 3))));
    MR_Integer MaxLeft_8 = (MR_Integer) ((MR_Unsigned) HeadVar__1_1 - (MR_Unsigned) LineLen1_7);

    succeeded = (MaxLeft_8 >= (MR_Integer) 0);
    if (succeeded)
    {
      if ((Lines2plus_6 == (MR_Word) ((MR_Unsigned) 0U)))
        succeeded = MR_TRUE;
      else
      {
        MR_Word Line2_9 = ((MR_Word) ((MR_hl_field(1, Lines2plus_6, (MR_Integer) 0))));
        MR_Word Lines3plus_10 = ((MR_Word) ((MR_hl_field(1, Lines2plus_6, (MR_Integer) 1))));

        succeeded = parse_tree__write_error_spec__do_spaces_lines_fit_in_n_code_points_3_p_0(MaxLeft_8, Line2_9, Lines3plus_10);
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__write_error_spec__do_spaces_lines_fit_in_n_code_points_3_p_0(
  MR_Integer Max_4,
  MR_Word Line1_5,
  MR_Word Lines2plus_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer LineLen1_7 = ((MR_Integer) ((MR_hl_field(0, Line1_5, (MR_Integer) 3))));
    MR_Integer MaxLeft_8;
    MR_Integer Var_11 = (MR_Integer) ((MR_Unsigned) Max_4 - (MR_Unsigned) 1);

    // setup for model_semi tailcalls optimized into a loop
    ;
    MaxLeft_8 = (MR_Integer) ((MR_Unsigned) Var_11 - (MR_Unsigned) LineLen1_7);
    succeeded = (MaxLeft_8 >= (MR_Integer) 0);
    if (succeeded)
    {
      if ((Lines2plus_6 == (MR_Word) ((MR_Unsigned) 0U)))
        succeeded = MR_TRUE;
      else
      {
        MR_Word Line2_9 = ((MR_Word) ((MR_hl_field(1, Lines2plus_6, (MR_Integer) 0))));
        MR_Word Lines3plus_10 = ((MR_Word) ((MR_hl_field(1, Lines2plus_6, (MR_Integer) 1))));
        MR_Integer next_value_of_Max_4 = MaxLeft_8;
        MR_Word next_value_of_Line1_5 = Line2_9;
        MR_Word next_value_of_Lines2plus_6 = Lines3plus_10;

        // direct tailcall eliminated
        ;
        Max_4 = next_value_of_Max_4;
        Line1_5 = next_value_of_Line1_5;
        Lines2plus_6 = next_value_of_Lines2plus_6;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_Word MR_CALL 
parse_tree__write_error_spec__error_pieces_to_std_lines_1_f_0(
  MR_Word Pieces_3)
{
  MR_Word Lines_4;
  MR_String Var_5;
  MR_Word Paragraphs_12;
  MR_String FixedIndentStr_13;
  MR_Integer PrefixLen_14;
  MR_Integer MaxWidth_15;
  MR_Integer AvailLen_16;
  MR_Unsigned FirstIndent_17;
  MR_Word Lines0_18;
  MR_Integer Var_22;
  MR_Word ParasCord_52;
  MR_Word Var_55;

  Var_55 = mercury__cord__empty_0_f_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_paragraph_0));
  parse_tree__write_error_spec__convert_pieces_to_paragraphs_acc_6_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, Pieces_3, (MR_Word) ((MR_Unsigned) 0U), Var_55, &ParasCord_52);
  Paragraphs_12 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_paragraph_0), ParasCord_52);
  Var_22 = mercury__uint__cast_to_int_1_f_0((MR_Unsigned) 0U);
  mercury__string__pad_left_4_p_0((MR_String) "", (MR_Char) 32, Var_22, &FixedIndentStr_13);
  Var_5 = mercury__string__f_43_43_2_f_0((MR_String) "", FixedIndentStr_13);
  PrefixLen_14 = mercury__string__count_code_points_1_f_0(Var_5);
  MaxWidth_15 = ((MR_Integer) ((MR_hl_field(1, (MR_Word) (MR_mkword(1, &parse_tree__write_error_spec_scalar_common_2[0])), (MR_Integer) 0))));
  AvailLen_16 = (MR_Integer) ((MR_Unsigned) MaxWidth_15 - (MR_Unsigned) PrefixLen_14);
  if (MR_TRUE)
    FirstIndent_17 = (MR_Unsigned) 0U;
  else
    FirstIndent_17 = (MR_Unsigned) 1U;
  parse_tree__write_error_spec__divide_paragraphs_into_lines_5_p_0(AvailLen_16, (MR_Integer) 0, FirstIndent_17, Paragraphs_12, &Lines0_18);
  parse_tree__write_error_spec__try_to_join_lp_to_rp_lines_2_p_0(Lines0_18, &Lines_4);
  return Lines_4;
}

void MR_CALL 
parse_tree__write_error_spec__write_error_pieces_maybe_with_context_7_p_0(
  MR_Word Stream_8,
  MR_Word Globals_9,
  MR_Word MaybeContext_10,
  MR_Unsigned Indent_11,
  MR_Word Pieces_12)
{
  MR_Word OptionTable_14;
  MR_Word LimitErrorContextsMap_15;

  libs__globals__get_options_2_p_0(Globals_9, &OptionTable_14);
  libs__globals__get_limit_error_contexts_map_2_p_0(Globals_9, &LimitErrorContextsMap_15);
  parse_tree__write_error_spec__do_write_error_pieces_9_p_0(Stream_8, OptionTable_14, LimitErrorContextsMap_15, MaybeContext_10, (MR_Integer) 0, Indent_11, Pieces_12);
}

void MR_CALL 
parse_tree__write_error_spec__write_error_pieces_7_p_0(
  MR_Word Stream_8,
  MR_Word Globals_9,
  MR_Word Context_10,
  MR_Unsigned Indent_11,
  MR_Word Pieces_12)
{
  MR_Word OptionTable_14;
  MR_Word LimitErrorContextsMap_15;
  MR_Word Var_18;

  libs__globals__get_options_2_p_0(Globals_9, &OptionTable_14);
  libs__globals__get_limit_error_contexts_map_2_p_0(Globals_9, &LimitErrorContextsMap_15);
  {
    Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_18, 0) = ((MR_Box) (Context_10));
  }
  parse_tree__write_error_spec__do_write_error_pieces_9_p_0(Stream_8, OptionTable_14, LimitErrorContextsMap_15, Var_18, (MR_Integer) 0, Indent_11, Pieces_12);
}

void MR_CALL 
parse_tree__write_error_spec__write_error_pieces_plain_5_p_0(
  MR_Word Stream_6,
  MR_Word Globals_7,
  MR_Word Pieces_8)
{
  MR_Word OptionTable_10;
  MR_Word LimitErrorContextsMap_11;

  libs__globals__get_options_2_p_0(Globals_7, &OptionTable_10);
  libs__globals__get_limit_error_contexts_map_2_p_0(Globals_7, &LimitErrorContextsMap_11);
  parse_tree__write_error_spec__do_write_error_pieces_9_p_0(Stream_6, OptionTable_10, LimitErrorContextsMap_11, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Unsigned) 0U, Pieces_8);
}

static void MR_CALL 
parse_tree__write_error_spec__write_error_specs_opt_table_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_AlreadyPrintedVerbose_42;

  parse_tree__write_error_spec__do_write_error_spec_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_AlreadyPrintedVerbose_42);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_AlreadyPrintedVerbose_42));
}

void MR_CALL 
parse_tree__write_error_spec__write_error_specs_opt_table_5_p_0(
  MR_Word Stream_6,
  MR_Word OptionTable_7,
  MR_Word Specs0_8)
{
  MR_Word Specs_10;
  MR_Word LimitErrorContexts_11;
  MR_Word LimitErrorContextsMap_13;
  MR_Word Var_18;
  MR_Word Var_19;
  MR_Word _BadOptions_12;
  MR_Box conv2_Var_14;
  MR_Box conv1_STATE_VARIABLE_IO_16;

  parse_tree__error_sort__sort_error_specs_opt_table_3_p_0(OptionTable_7, Specs0_8, &Specs_10);
  mercury__getopt__lookup_accumulating_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), OptionTable_7, ((MR_Box) ((MR_Integer) 87)), &LimitErrorContexts_11);
  libs__globals__convert_limit_error_contexts_3_p_0(LimitErrorContexts_11, &_BadOptions_12, &LimitErrorContextsMap_13);
  {
    Var_18 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_18, 0) = ((MR_Box) (&parse_tree__write_error_spec_scalar_common_6[0]));
    MR_hl_field(0, Var_18, 1) = ((MR_Box) (parse_tree__write_error_spec__write_error_specs_opt_table_5_p_0_1));
    MR_hl_field(0, Var_18, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_18, 3) = ((MR_Box) (Stream_6));
    MR_hl_field(0, Var_18, 4) = ((MR_Box) (OptionTable_7));
    MR_hl_field(0, Var_18, 5) = ((MR_Box) (LimitErrorContextsMap_13));
  }
  Var_19 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__write_error_spec_scalar_common_1[0]));
  mercury__list__foldl2_6_p_2((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), (MR_Word) (&parse_tree__write_error_spec_scalar_common_1[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_18, Specs_10, ((MR_Box) (Var_19)), &conv2_Var_14, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_16);
}

static void MR_CALL 
parse_tree__write_error_spec__write_error_specs_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_AlreadyPrintedVerbose_42;

  parse_tree__write_error_spec__do_write_error_spec_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_AlreadyPrintedVerbose_42);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_AlreadyPrintedVerbose_42));
}

void MR_CALL 
parse_tree__write_error_spec__write_error_specs_5_p_0(
  MR_Word Stream_6,
  MR_Word Globals_7,
  MR_Word Specs0_8)
{
  MR_Word OptionTable_10;
  MR_Word LimitErrorContextsMap_11;
  MR_Word Specs_12;
  MR_Word Var_16;
  MR_Word Var_17;
  MR_Box conv2_Var_13;
  MR_Box conv1_STATE_VARIABLE_IO_15;

  libs__globals__get_options_2_p_0(Globals_7, &OptionTable_10);
  libs__globals__get_limit_error_contexts_map_2_p_0(Globals_7, &LimitErrorContextsMap_11);
  parse_tree__error_sort__sort_error_specs_3_p_0(Globals_7, Specs0_8, &Specs_12);
  {
    Var_16 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_16, 0) = ((MR_Box) (&parse_tree__write_error_spec_scalar_common_6[0]));
    MR_hl_field(0, Var_16, 1) = ((MR_Box) (parse_tree__write_error_spec__write_error_specs_5_p_0_1));
    MR_hl_field(0, Var_16, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_16, 3) = ((MR_Box) (Stream_6));
    MR_hl_field(0, Var_16, 4) = ((MR_Box) (OptionTable_10));
    MR_hl_field(0, Var_16, 5) = ((MR_Box) (LimitErrorContextsMap_11));
  }
  Var_17 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__write_error_spec_scalar_common_1[0]));
  mercury__list__foldl2_6_p_2((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), (MR_Word) (&parse_tree__write_error_spec_scalar_common_1[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_16, Specs_12, ((MR_Box) (Var_17)), &conv2_Var_13, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_15);
}

void MR_CALL 
parse_tree__write_error_spec__write_error_spec_5_p_0(
  MR_Word Stream_6,
  MR_Word Globals_7,
  MR_Word Spec_8)
{
  MR_Word OptionTable_10;
  MR_Word LimitErrorContextsMap_11;
  MR_Word Var_15;
  MR_Word Var_12;

  libs__globals__get_options_2_p_0(Globals_7, &OptionTable_10);
  libs__globals__get_limit_error_contexts_map_2_p_0(Globals_7, &LimitErrorContextsMap_11);
  Var_15 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__write_error_spec_scalar_common_1[0]));
  parse_tree__write_error_spec__do_write_error_spec_8_p_0(Stream_6, OptionTable_10, LimitErrorContextsMap_11, Spec_8, Var_15, &Var_12);
}

static void MR_CALL 
parse_tree__write_error_spec__do_write_error_spec_8_p_0(
  MR_Word Stream_9,
  MR_Word OptionTable_10,
  MR_Word LimitErrorContextsMap_11,
  MR_Word Spec_12,
  MR_Word STATE_VARIABLE_AlreadyPrintedVerbose_0_41,
  MR_Word * STATE_VARIABLE_AlreadyPrintedVerbose_42)
{
  MR_bool succeeded;
  MR_String Id_15;
  MR_Word Msgs1_18;
  MR_Word MaybeActual_19;
  MR_Word PrintId_26;
  MR_Word Msgs_27;
  MR_Word PrintedSome_39;

  switch (MR_tag((MR_Word) Spec_12)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Context_20;
        MR_Word Pieces_21;
        MR_Word Var_45;
        MR_Word Severity_75;

        Id_15 = ((MR_String) ((MR_hl_field(0, Spec_12, (MR_Integer) 0))));
        Severity_75 = ((MR_Word) ((MR_hl_field(0, Spec_12, (MR_Integer) 1))));
        Context_20 = ((MR_Word) ((MR_hl_field(0, Spec_12, (MR_Integer) 3))));
        Pieces_21 = ((MR_Word) ((MR_hl_field(0, Spec_12, (MR_Integer) 4))));
        MaybeActual_19 = parse_tree__error_util__actual_error_severity_opt_table_2_f_0(OptionTable_10, Severity_75);
        {
          Var_45 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_45, 0) = ((MR_Box) (Context_20));
          MR_hl_field(0, Var_45, 1) = ((MR_Box) (Pieces_21));
        }
        {
          Msgs1_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Msgs1_18, 0) = ((MR_Box) (Var_45));
          MR_hl_field(1, Msgs1_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_47;
        MR_Word Severity_78;
        MR_Word Pieces_80;

        Id_15 = ((MR_String) ((MR_hl_field(1, Spec_12, (MR_Integer) 0))));
        Severity_78 = ((MR_Word) ((MR_hl_field(1, Spec_12, (MR_Integer) 1))));
        Pieces_80 = ((MR_Word) ((MR_hl_field(1, Spec_12, (MR_Integer) 3))));
        MaybeActual_19 = parse_tree__error_util__actual_error_severity_opt_table_2_f_0(OptionTable_10, Severity_78);
        {
          Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_47, 0) = ((MR_Box) (Pieces_80));
        }
        {
          Msgs1_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Msgs1_18, 0) = ((MR_Box) (Var_47));
          MR_hl_field(1, Msgs1_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Severity_16;

        Id_15 = ((MR_String) ((MR_hl_field(2, Spec_12, (MR_Integer) 0))));
        Severity_16 = ((MR_Word) ((MR_hl_field(2, Spec_12, (MR_Integer) 1))));
        Msgs1_18 = ((MR_Word) ((MR_hl_field(2, Spec_12, (MR_Integer) 3))));
        MaybeActual_19 = parse_tree__error_util__actual_error_severity_opt_table_2_f_0(OptionTable_10, Severity_16);
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word Option_22;
        MR_Word MatchValue_23;
        MR_Word Msgs0_24;
        MR_Word Value_25;
        MR_Word Severity_82;

        Id_15 = ((MR_String) ((MR_hl_field(3, Spec_12, (MR_Integer) 0))));
        Option_22 = ((((MR_Unsigned) ((MR_hl_field(3, Spec_12, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1023);
        MatchValue_23 = ((MR_Unsigned) ((MR_hl_field(3, Spec_12, (MR_Integer) 1))) & (MR_Integer) 1);
        Severity_82 = ((MR_Word) ((MR_hl_field(3, Spec_12, (MR_Integer) 2))));
        Msgs0_24 = ((MR_Word) ((MR_hl_field(3, Spec_12, (MR_Integer) 4))));
        mercury__getopt__lookup_bool_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), OptionTable_10, ((MR_Box) (Option_22)), &Value_25);
        succeeded = (Value_25 == MatchValue_23);
        if (succeeded)
        {
          MaybeActual_19 = parse_tree__error_util__actual_error_severity_opt_table_2_f_0(OptionTable_10, Severity_82);
          Msgs1_18 = Msgs0_24;
        }
        else
        {
          MaybeActual_19 = (MR_Word) ((MR_Unsigned) 0U);
          Msgs1_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
      }
      break;
  }
  mercury__getopt__lookup_bool_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), OptionTable_10, ((MR_Box) ((MR_Integer) 70)), &PrintId_26);
  switch (PrintId_26) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      Msgs_27 = Msgs1_18;
      break;
    case (MR_Integer) 1:
      if ((Msgs1_18 == (MR_Word) ((MR_Unsigned) 0U)))
        Msgs_27 = Msgs1_18;
      else
      {
        MR_Word HeadMsg_28 = ((MR_Word) ((MR_hl_field(1, Msgs1_18, (MR_Integer) 0))));
        MR_Word MaybeHeadContext_33;
        MR_Word IdMsg_38;
        MR_Word Var_52;
        MR_Word Var_53;
        MR_Word Var_54;
        MR_Word Var_57;
        MR_Word Var_58;
        MR_Word Var_63;

        switch (MR_tag((MR_Word) HeadMsg_28)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word HeadContext_30 = ((MR_Word) ((MR_hl_field(0, HeadMsg_28, (MR_Integer) 0))));

              {
                MaybeHeadContext_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, MaybeHeadContext_33, 0) = ((MR_Box) (HeadContext_30));
              }
            }
            break;
          case (MR_Integer) 1:
            MaybeHeadContext_33 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 2:
            {
              MR_Word HeadContext_86 = ((MR_Word) ((MR_hl_field(2, HeadMsg_28, (MR_Integer) 0))));

              {
                MaybeHeadContext_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, MaybeHeadContext_33, 0) = ((MR_Box) (HeadContext_86));
              }
            }
            break;
          case (MR_Integer) 3:
            MaybeHeadContext_33 = ((MR_Word) ((MR_hl_field(3, HeadMsg_28, (MR_Integer) 0))));
            break;
        }
        {
          Var_58 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_58, 0) = ((MR_Box) (Id_15));
        }
        {
          Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_57, 0) = ((MR_Box) (Var_58));
          MR_hl_field(1, Var_57, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__write_error_spec_scalar_common_1[6])));
        }
        {
          Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_54, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__write_error_spec_scalar_common_1[5])));
          MR_hl_field(1, Var_54, 1) = ((MR_Box) (Var_57));
        }
        {
          Var_53 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_53, 0) = ((MR_Box) (Var_54));
        }
        {
          Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_52, 0) = ((MR_Box) (Var_53));
          MR_hl_field(1, Var_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          IdMsg_38 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, IdMsg_38, 0) = ((MR_Box) (MaybeHeadContext_33));
          MR_hl_field(3, IdMsg_38, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
          MR_hl_field(3, IdMsg_38, 2) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(3, IdMsg_38, 3) = ((MR_Box) (Var_52));
        }
        {
          Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_63, 0) = ((MR_Box) (IdMsg_38));
          MR_hl_field(1, Var_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Msgs_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0), Msgs1_18, Var_63);
      }
      break;
  }
  parse_tree__write_error_spec__do_write_error_msgs_11_p_0(Stream_9, OptionTable_10, LimitErrorContextsMap_11, Msgs_27, (MR_Integer) 0, (MR_Integer) 1, &PrintedSome_39, STATE_VARIABLE_AlreadyPrintedVerbose_0_41, STATE_VARIABLE_AlreadyPrintedVerbose_42);
  switch (PrintedSome_39) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
      }
      break;
    case (MR_Integer) 0:
      if ((MaybeActual_19 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.write_error_spec.do_write_error_spec\'/8", (MR_String) "printed_something but MaybeActual = no");
          return;
        }
      else
      {
        MR_Word Actual_40 = ((MR_Word) ((MR_hl_field(1, MaybeActual_19, (MR_Integer) 0))));

        switch (Actual_40) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
            break;
          case (MR_Integer) 2:
            {
            }
            break;
          case (MR_Integer) 1:
            libs__compiler_util__record_warning_opt_table_3_p_0(OptionTable_10);
            break;
        }
      }
      break;
  }
}

static void MR_CALL 
parse_tree__write_error_spec__do_write_error_msgs_11_p_0(
  MR_Word HeadVar__1_1,
  MR_Word OptionTable_2,
  MR_Word LimitErrorContextsMap_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_First_0_5,
  MR_Word STATE_VARIABLE_PrintedSome_0_6,
  MR_Word * STATE_VARIABLE_PrintedSome_7,
  MR_Word STATE_VARIABLE_AlreadyPrintedVerbose_0_8,
  MR_Word * STATE_VARIABLE_AlreadyPrintedVerbose_9)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_AlreadyPrintedVerbose_9 = STATE_VARIABLE_AlreadyPrintedVerbose_0_8;
      *STATE_VARIABLE_PrintedSome_7 = STATE_VARIABLE_PrintedSome_0_6;
    }
    else
    {
      MR_Word Msg_28 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
      MR_Word Msgs_29 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
      MR_Word Components_36;
      MR_Word MaybeContext_37;
      MR_Unsigned ExtraIndentLevel_39;
      MR_Unsigned Indent_41;
      MR_Word STATE_VARIABLE_First_53_53;
      MR_Unsigned Var_54;
      MR_Word STATE_VARIABLE_First_55_55;
      MR_Word STATE_VARIABLE_PrintedSome_56_56;
      MR_Word STATE_VARIABLE_AlreadyPrintedVerbose_57_57;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_First_0_5;
      MR_Word next_value_of_STATE_VARIABLE_PrintedSome_0_6;
      MR_Word next_value_of_STATE_VARIABLE_AlreadyPrintedVerbose_0_8;

      switch (MR_tag((MR_Word) Msg_28)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SimpleContext_34 = ((MR_Word) ((MR_hl_field(0, Msg_28, (MR_Integer) 0))));
            MR_Word Pieces_35 = ((MR_Word) ((MR_hl_field(0, Msg_28, (MR_Integer) 1))));
            MR_Word Var_49;

            {
              Var_49 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_49, 0) = ((MR_Box) (Pieces_35));
            }
            {
              Components_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Components_36, 0) = ((MR_Box) (Var_49));
              MR_hl_field(1, Components_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MaybeContext_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MaybeContext_37, 0) = ((MR_Box) (SimpleContext_34));
            }
            ExtraIndentLevel_39 = (MR_Unsigned) 0U;
            STATE_VARIABLE_First_53_53 = STATE_VARIABLE_First_0_5;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_51;
            MR_Word Pieces_62 = ((MR_Word) ((MR_hl_field(1, Msg_28, (MR_Integer) 0))));

            {
              Var_51 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_51, 0) = ((MR_Box) (Pieces_62));
            }
            {
              Components_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Components_36, 0) = ((MR_Box) (Var_51));
              MR_hl_field(1, Components_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            MaybeContext_37 = (MR_Word) ((MR_Unsigned) 0U);
            ExtraIndentLevel_39 = (MR_Unsigned) 0U;
            STATE_VARIABLE_First_53_53 = STATE_VARIABLE_First_0_5;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word SimpleContext_63 = ((MR_Word) ((MR_hl_field(2, Msg_28, (MR_Integer) 0))));

            Components_36 = ((MR_Word) ((MR_hl_field(2, Msg_28, (MR_Integer) 1))));
            {
              MaybeContext_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MaybeContext_37, 0) = ((MR_Box) (SimpleContext_63));
            }
            ExtraIndentLevel_39 = (MR_Unsigned) 0U;
            STATE_VARIABLE_First_53_53 = STATE_VARIABLE_First_0_5;
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word TreatAsFirst_38;
            MR_Integer ExtraIndentLevelInt_40;

            MaybeContext_37 = ((MR_Word) ((MR_hl_field(3, Msg_28, (MR_Integer) 0))));
            TreatAsFirst_38 = ((MR_Unsigned) ((MR_hl_field(3, Msg_28, (MR_Integer) 1))) & (MR_Integer) 1);
            ExtraIndentLevelInt_40 = ((MR_Integer) ((MR_hl_field(3, Msg_28, (MR_Integer) 2))));
            Components_36 = ((MR_Word) ((MR_hl_field(3, Msg_28, (MR_Integer) 3))));
            ExtraIndentLevel_39 = mercury__uint__cast_from_int_1_f_0(ExtraIndentLevelInt_40);
            switch (TreatAsFirst_38) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                STATE_VARIABLE_First_53_53 = (MR_Integer) 0;
                break;
              case (MR_Integer) 1:
                STATE_VARIABLE_First_53_53 = STATE_VARIABLE_First_0_5;
                break;
            }
          }
          break;
      }
      Var_54 = libs__indent__indent2_increment_0_f_0();
      Indent_41 = (ExtraIndentLevel_39 * Var_54);
      parse_tree__write_error_spec__write_msg_components_14_p_0(HeadVar__1_1, OptionTable_2, LimitErrorContextsMap_3, MaybeContext_37, Components_36, Indent_41, STATE_VARIABLE_First_53_53, &STATE_VARIABLE_First_55_55, STATE_VARIABLE_PrintedSome_0_6, &STATE_VARIABLE_PrintedSome_56_56, STATE_VARIABLE_AlreadyPrintedVerbose_0_8, &STATE_VARIABLE_AlreadyPrintedVerbose_57_57);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = Msgs_29;
      next_value_of_STATE_VARIABLE_First_0_5 = STATE_VARIABLE_First_55_55;
      next_value_of_STATE_VARIABLE_PrintedSome_0_6 = STATE_VARIABLE_PrintedSome_56_56;
      next_value_of_STATE_VARIABLE_AlreadyPrintedVerbose_0_8 = STATE_VARIABLE_AlreadyPrintedVerbose_57_57;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_First_0_5 = next_value_of_STATE_VARIABLE_First_0_5;
      STATE_VARIABLE_PrintedSome_0_6 = next_value_of_STATE_VARIABLE_PrintedSome_0_6;
      STATE_VARIABLE_AlreadyPrintedVerbose_0_8 = next_value_of_STATE_VARIABLE_AlreadyPrintedVerbose_0_8;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__write_error_spec__write_msg_components_14_p_0(
  MR_Word HeadVar__1_1,
  MR_Word OptionTable_2,
  MR_Word LimitErrorContextsMap_3,
  MR_Word MaybeContext_4,
  MR_Word HeadVar__5_5,
  MR_Unsigned Indent_6,
  MR_Word STATE_VARIABLE_First_0_7,
  MR_Word * STATE_VARIABLE_First_8,
  MR_Word STATE_VARIABLE_PrintedSome_0_9,
  MR_Word * STATE_VARIABLE_PrintedSome_10,
  MR_Word STATE_VARIABLE_AlreadyPrintedVerbose_0_11,
  MR_Word * STATE_VARIABLE_AlreadyPrintedVerbose_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_AlreadyPrintedVerbose_12 = STATE_VARIABLE_AlreadyPrintedVerbose_0_11;
      *STATE_VARIABLE_PrintedSome_10 = STATE_VARIABLE_PrintedSome_0_9;
      *STATE_VARIABLE_First_8 = STATE_VARIABLE_First_0_7;
    }
    else
    {
      MR_Word Component_36 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
      MR_Word Components_37 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_First_62_62;
      MR_Word STATE_VARIABLE_PrintedSome_63_63;
      MR_Word STATE_VARIABLE_AlreadyPrintedVerbose_66_66;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_First_0_7;
      MR_Word next_value_of_STATE_VARIABLE_PrintedSome_0_9;
      MR_Word next_value_of_STATE_VARIABLE_AlreadyPrintedVerbose_0_11;

      switch (MR_tag((MR_Word) Component_36)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Pieces_43 = ((MR_Word) ((MR_hl_field(0, Component_36, (MR_Integer) 0))));

            parse_tree__write_error_spec__do_write_error_pieces_9_p_0(HeadVar__1_1, OptionTable_2, LimitErrorContextsMap_3, MaybeContext_4, STATE_VARIABLE_First_0_7, Indent_6, Pieces_43);
            STATE_VARIABLE_First_62_62 = (MR_Integer) 1;
            STATE_VARIABLE_PrintedSome_63_63 = (MR_Integer) 0;
            STATE_VARIABLE_AlreadyPrintedVerbose_66_66 = STATE_VARIABLE_AlreadyPrintedVerbose_0_11;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Option_44 = ((((MR_Unsigned) ((MR_hl_field(1, Component_36, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1023);
            MR_Word MatchValue_45 = ((MR_Unsigned) ((MR_hl_field(1, Component_36, (MR_Integer) 0))) & (MR_Integer) 1);
            MR_Word EmbeddedComponents_46 = ((MR_Word) ((MR_hl_field(1, Component_36, (MR_Integer) 1))));
            MR_Word OptionValue_47;

            mercury__getopt__lookup_bool_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), OptionTable_2, ((MR_Box) (Option_44)), &OptionValue_47);
            succeeded = (OptionValue_47 == MatchValue_45);
            if (succeeded)
              parse_tree__write_error_spec__write_msg_components_14_p_0(HeadVar__1_1, OptionTable_2, LimitErrorContextsMap_3, MaybeContext_4, EmbeddedComponents_46, Indent_6, STATE_VARIABLE_First_0_7, &STATE_VARIABLE_First_62_62, STATE_VARIABLE_PrintedSome_0_9, &STATE_VARIABLE_PrintedSome_63_63, STATE_VARIABLE_AlreadyPrintedVerbose_0_11, &STATE_VARIABLE_AlreadyPrintedVerbose_66_66);
            else
            {
              STATE_VARIABLE_AlreadyPrintedVerbose_66_66 = STATE_VARIABLE_AlreadyPrintedVerbose_0_11;
              STATE_VARIABLE_PrintedSome_63_63 = STATE_VARIABLE_PrintedSome_0_9;
              STATE_VARIABLE_First_62_62 = STATE_VARIABLE_First_0_7;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word AlwaysOrOnce_48 = ((MR_Unsigned) ((MR_hl_field(2, Component_36, (MR_Integer) 0))) & (MR_Integer) 1);
            MR_Word VerboseErrors_49;
            MR_Word Pieces_92 = ((MR_Word) ((MR_hl_field(2, Component_36, (MR_Integer) 1))));

            mercury__getopt__lookup_bool_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), OptionTable_2, ((MR_Box) ((MR_Integer) 75)), &VerboseErrors_49);
            switch (VerboseErrors_49) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
{
#define MR_PROC_LABEL parse_tree__write_error_spec__write_msg_components_14_p_0


		{


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL parse_tree__write_error_spec__write_msg_components_14_p_0

	MR_Word X;

	X = (MR_Integer) 1 ;
		{
MR_set_thread_local_mutable(MR_Word, X, parse_tree__write_error_spec__mutable_variable_extra_error_info);


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL parse_tree__write_error_spec__write_msg_components_14_p_0


		{


		;}
#undef MR_PROC_LABEL
}
                  STATE_VARIABLE_First_62_62 = STATE_VARIABLE_First_0_7;
                  STATE_VARIABLE_PrintedSome_63_63 = STATE_VARIABLE_PrintedSome_0_9;
                  STATE_VARIABLE_AlreadyPrintedVerbose_66_66 = STATE_VARIABLE_AlreadyPrintedVerbose_0_11;
                }
                break;
              case (MR_Integer) 1:
                switch (AlwaysOrOnce_48) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      parse_tree__write_error_spec__do_write_error_pieces_9_p_0(HeadVar__1_1, OptionTable_2, LimitErrorContextsMap_3, MaybeContext_4, STATE_VARIABLE_First_0_7, Indent_6, Pieces_92);
                      STATE_VARIABLE_First_62_62 = (MR_Integer) 1;
                      STATE_VARIABLE_PrintedSome_63_63 = (MR_Integer) 0;
                      STATE_VARIABLE_AlreadyPrintedVerbose_66_66 = STATE_VARIABLE_AlreadyPrintedVerbose_0_11;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      succeeded = mercury__set__contains_2_p_0((MR_Word) (&parse_tree__write_error_spec_scalar_common_1[0]), STATE_VARIABLE_AlreadyPrintedVerbose_0_11, ((MR_Box) (Pieces_92)));
                      if (succeeded)
                      {
                        STATE_VARIABLE_AlreadyPrintedVerbose_66_66 = STATE_VARIABLE_AlreadyPrintedVerbose_0_11;
                        STATE_VARIABLE_PrintedSome_63_63 = STATE_VARIABLE_PrintedSome_0_9;
                        STATE_VARIABLE_First_62_62 = STATE_VARIABLE_First_0_7;
                      }
                      else
                      {
                        parse_tree__write_error_spec__do_write_error_pieces_9_p_0(HeadVar__1_1, OptionTable_2, LimitErrorContextsMap_3, MaybeContext_4, STATE_VARIABLE_First_0_7, Indent_6, Pieces_92);
                        STATE_VARIABLE_First_62_62 = (MR_Integer) 1;
                        STATE_VARIABLE_PrintedSome_63_63 = (MR_Integer) 0;
                        mercury__set__insert_3_p_0((MR_Word) (&parse_tree__write_error_spec_scalar_common_1[0]), ((MR_Box) (Pieces_92)), STATE_VARIABLE_AlreadyPrintedVerbose_0_11, &STATE_VARIABLE_AlreadyPrintedVerbose_66_66);
                      }
                    }
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, Component_36, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word VerbosePieces_50 = ((MR_Word) ((MR_hl_field(3, Component_36, (MR_Integer) 1))));
                MR_Word NonVerbosePieces_51 = ((MR_Word) ((MR_hl_field(3, Component_36, (MR_Integer) 2))));
                MR_Word VerboseErrors_93;

                mercury__getopt__lookup_bool_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), OptionTable_2, ((MR_Box) ((MR_Integer) 75)), &VerboseErrors_93);
                switch (VerboseErrors_93) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      parse_tree__write_error_spec__do_write_error_pieces_9_p_0(HeadVar__1_1, OptionTable_2, LimitErrorContextsMap_3, MaybeContext_4, STATE_VARIABLE_First_0_7, Indent_6, NonVerbosePieces_51);
{
#define MR_PROC_LABEL parse_tree__write_error_spec__write_msg_components_14_p_0


		{


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL parse_tree__write_error_spec__write_msg_components_14_p_0

	MR_Word X;

	X = (MR_Integer) 1 ;
		{
MR_set_thread_local_mutable(MR_Word, X, parse_tree__write_error_spec__mutable_variable_extra_error_info);


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL parse_tree__write_error_spec__write_msg_components_14_p_0


		{


		;}
#undef MR_PROC_LABEL
}
                    }
                    break;
                  case (MR_Integer) 1:
                    parse_tree__write_error_spec__do_write_error_pieces_9_p_0(HeadVar__1_1, OptionTable_2, LimitErrorContextsMap_3, MaybeContext_4, STATE_VARIABLE_First_0_7, Indent_6, VerbosePieces_50);
                    break;
                }
                STATE_VARIABLE_First_62_62 = (MR_Integer) 1;
                STATE_VARIABLE_PrintedSome_63_63 = (MR_Integer) 0;
                STATE_VARIABLE_AlreadyPrintedVerbose_66_66 = STATE_VARIABLE_AlreadyPrintedVerbose_0_11;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word TypeClassInfo_for_print_anything_99 = ((MR_Word) ((MR_hl_field(3, Component_36, (MR_Integer) 1))));
                MR_Box Anything_52 = (MR_hl_field(3, Component_36, (MR_Integer) 2));
                void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_print_anything_99, (MR_Integer) 0)), (MR_Integer) 5))));
                MR_Box conv1_STATE_VARIABLE_IO_61_61;

                func_0(((MR_Box) (TypeClassInfo_for_print_anything_99)), ((MR_Box) (HeadVar__1_1)), Anything_52, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_61_61);
                STATE_VARIABLE_First_62_62 = (MR_Integer) 1;
                STATE_VARIABLE_PrintedSome_63_63 = (MR_Integer) 0;
                STATE_VARIABLE_AlreadyPrintedVerbose_66_66 = STATE_VARIABLE_AlreadyPrintedVerbose_0_11;
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__5_5 = Components_37;
      next_value_of_STATE_VARIABLE_First_0_7 = STATE_VARIABLE_First_62_62;
      next_value_of_STATE_VARIABLE_PrintedSome_0_9 = STATE_VARIABLE_PrintedSome_63_63;
      next_value_of_STATE_VARIABLE_AlreadyPrintedVerbose_0_11 = STATE_VARIABLE_AlreadyPrintedVerbose_66_66;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      STATE_VARIABLE_First_0_7 = next_value_of_STATE_VARIABLE_First_0_7;
      STATE_VARIABLE_PrintedSome_0_9 = next_value_of_STATE_VARIABLE_PrintedSome_0_9;
      STATE_VARIABLE_AlreadyPrintedVerbose_0_11 = next_value_of_STATE_VARIABLE_AlreadyPrintedVerbose_0_11;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__write_error_spec__do_write_error_pieces_9_p_0(
  MR_Word Stream_10,
  MR_Word OptionTable_11,
  MR_Word LimitErrorContextsMap_12,
  MR_Word MaybeContext_13,
  MR_Word TreatAsFirst_14,
  MR_Unsigned FixedIndent_15,
  MR_Word Pieces_16)
{
  MR_bool succeeded;
  MR_Word MaybeMaxWidth_18;

  mercury__getopt__lookup_maybe_int_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), OptionTable_11, ((MR_Box) ((MR_Integer) 181)), &MaybeMaxWidth_18);
  if ((MaybeContext_13 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_String ContextStr_25 = ((MR_String) ((MR_hl_field(1, (MR_Word) (MR_mkword(1, &parse_tree__write_error_spec_scalar_common_2[1])), (MR_Integer) 0))));

    if (!((Pieces_16 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_String PrefixStr_29;
      MR_Word Lines_30;
      MR_Word Paragraphs_47;
      MR_String FixedIndentStr_48;
      MR_Integer PrefixLen_49;
      MR_Integer AvailLen_51;
      MR_Unsigned FirstIndent_52;
      MR_Word Lines0_53;
      MR_Integer Var_57;
      MR_Word ParasCord_87;
      MR_Word Var_90;

      Var_90 = mercury__cord__empty_0_f_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_paragraph_0));
      parse_tree__write_error_spec__convert_pieces_to_paragraphs_acc_6_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, Pieces_16, (MR_Word) ((MR_Unsigned) 0U), Var_90, &ParasCord_87);
      Paragraphs_47 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_paragraph_0), ParasCord_87);
      Var_57 = mercury__uint__cast_to_int_1_f_0(FixedIndent_15);
      mercury__string__pad_left_4_p_0((MR_String) "", (MR_Char) 32, Var_57, &FixedIndentStr_48);
      PrefixStr_29 = mercury__string__f_43_43_2_f_0(ContextStr_25, FixedIndentStr_48);
      PrefixLen_49 = mercury__string__count_code_points_1_f_0(PrefixStr_29);
      if ((MaybeMaxWidth_18 == (MR_Word) ((MR_Unsigned) 0U)))
        mercury__int__max_int_1_p_0(&AvailLen_51);
      else
      {
        MR_Integer MaxWidth_50 = ((MR_Integer) ((MR_hl_field(1, MaybeMaxWidth_18, (MR_Integer) 0))));

        AvailLen_51 = (MR_Integer) ((MR_Unsigned) MaxWidth_50 - (MR_Unsigned) PrefixLen_49);
      }
      succeeded = (TreatAsFirst_14 == (MR_Integer) 0);
      if (succeeded)
        FirstIndent_52 = (MR_Unsigned) 0U;
      else
        FirstIndent_52 = (MR_Unsigned) 1U;
      parse_tree__write_error_spec__divide_paragraphs_into_lines_5_p_0(AvailLen_51, TreatAsFirst_14, FirstIndent_52, Paragraphs_47, &Lines0_53);
      parse_tree__write_error_spec__try_to_join_lp_to_rp_lines_2_p_0(Lines0_53, &Lines_30);
      parse_tree__write_error_spec__write_msg_lines_5_p_0(Stream_10, PrefixStr_29, Lines_30);
    }
  }
  else
  {
    MR_Word Context_19 = ((MR_Word) ((MR_hl_field(1, MaybeContext_13, (MR_Integer) 0))));
    MR_String FileName_20;
    MR_Integer LineNumber_21;

    FileName_20 = mercury__term_context__context_file_1_f_0(Context_19);
    LineNumber_21 = mercury__term_context__context_line_1_f_0(Context_19);
    {
      MR_Word LineNumberRanges_22;
      MR_Word Var_34;
      MR_Box conv0_LineNumberRanges_22;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__write_error_spec_scalar_common_1[2]), LimitErrorContextsMap_12, ((MR_Box) (FileName_20)), &conv0_LineNumberRanges_22);
      if (succeeded)
      {
        LineNumberRanges_22 = ((MR_Word) (conv0_LineNumberRanges_22));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        Var_34 = parse_tree__write_error_spec__line_number_is_in_a_range_2_f_0(LineNumberRanges_22, LineNumber_21);
        succeeded = (Var_34 == (MR_Integer) 0);
      }
    }
    if (!(succeeded))
    {
      MR_Word Var_36;
      MR_Word LineNumberRanges_41;
      MR_Box conv1_LineNumberRanges_41;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__write_error_spec_scalar_common_1[2]), LimitErrorContextsMap_12, ((MR_Box) ((MR_String) "")), &conv1_LineNumberRanges_41);
      if (succeeded)
      {
        LineNumberRanges_41 = ((MR_Word) (conv1_LineNumberRanges_41));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        Var_36 = parse_tree__write_error_spec__line_number_is_in_a_range_2_f_0(LineNumberRanges_41, LineNumber_21);
        succeeded = (Var_36 == (MR_Integer) 0);
      }
    }
    if (succeeded)
    {
{
#define MR_PROC_LABEL parse_tree__write_error_spec__do_write_error_pieces_9_p_0


		{


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL parse_tree__write_error_spec__do_write_error_pieces_9_p_0

	MR_Word X;

	X = (MR_Integer) 1 ;
		{
MR_set_thread_local_mutable(MR_Word, X, parse_tree__write_error_spec__mutable_variable_some_errors_were_context_limited);


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL parse_tree__write_error_spec__do_write_error_pieces_9_p_0


		{


		;}
#undef MR_PROC_LABEL
}
    }
    else
    {
      MR_String ContextStr_130;

      ContextStr_130 = parse_tree__parse_tree_out_misc__context_to_string_1_f_0(Context_19);
      if (!((Pieces_16 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        MR_String PrefixStr_95;
        MR_Word Lines_96;
        MR_Word Paragraphs_97;
        MR_String FixedIndentStr_98;
        MR_Integer PrefixLen_99;
        MR_Integer AvailLen_101;
        MR_Unsigned FirstIndent_102;
        MR_Word Lines0_103;
        MR_Integer Var_106;
        MR_Word ParasCord_107;
        MR_Word Var_110;

        Var_110 = mercury__cord__empty_0_f_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_paragraph_0));
        parse_tree__write_error_spec__convert_pieces_to_paragraphs_acc_6_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, Pieces_16, (MR_Word) ((MR_Unsigned) 0U), Var_110, &ParasCord_107);
        Paragraphs_97 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_paragraph_0), ParasCord_107);
        Var_106 = mercury__uint__cast_to_int_1_f_0(FixedIndent_15);
        mercury__string__pad_left_4_p_0((MR_String) "", (MR_Char) 32, Var_106, &FixedIndentStr_98);
        PrefixStr_95 = mercury__string__f_43_43_2_f_0(ContextStr_130, FixedIndentStr_98);
        PrefixLen_99 = mercury__string__count_code_points_1_f_0(PrefixStr_95);
        if ((MaybeMaxWidth_18 == (MR_Word) ((MR_Unsigned) 0U)))
          mercury__int__max_int_1_p_0(&AvailLen_101);
        else
        {
          MR_Integer MaxWidth_92 = ((MR_Integer) ((MR_hl_field(1, MaybeMaxWidth_18, (MR_Integer) 0))));

          AvailLen_101 = (MR_Integer) ((MR_Unsigned) MaxWidth_92 - (MR_Unsigned) PrefixLen_99);
        }
        succeeded = (TreatAsFirst_14 == (MR_Integer) 0);
        if (succeeded)
          FirstIndent_102 = (MR_Unsigned) 0U;
        else
          FirstIndent_102 = (MR_Unsigned) 1U;
        parse_tree__write_error_spec__divide_paragraphs_into_lines_5_p_0(AvailLen_101, TreatAsFirst_14, FirstIndent_102, Paragraphs_97, &Lines0_103);
        parse_tree__write_error_spec__try_to_join_lp_to_rp_lines_2_p_0(Lines0_103, &Lines_96);
        parse_tree__write_error_spec__write_msg_lines_5_p_0(Stream_10, PrefixStr_95, Lines_96);
      }
    }
  }
}

static void MR_CALL 
parse_tree__write_error_spec__try_to_join_lp_to_rp_lines_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word HeadLine0_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word TailLines0_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word HeadParen_12 = ((MR_Unsigned) ((MR_hl_field(0, HeadLine0_3, (MR_Integer) 6))) & (MR_Integer) 3);

      switch (HeadParen_12) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
        case (MR_Integer) 0:
          {
            MR_Word TailLines_13;

            parse_tree__write_error_spec__try_to_join_lp_to_rp_lines_2_p_0(TailLines0_4, &TailLines_13);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__2_2 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (HeadLine0_3));
              MR_hl_field(1, base, 1) = ((MR_Box) (TailLines_13));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ReplacementLines_14;
            MR_Word LeftOverLines0_15;
            MR_Word FirstReplacementLine_16;

            succeeded = parse_tree__write_error_spec__find_matching_rp_and_maybe_join_4_p_0(HeadLine0_3, TailLines0_4, &ReplacementLines_14, &LeftOverLines0_15);
            if (succeeded)
            {
              succeeded = (ReplacementLines_14 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                FirstReplacementLine_16 = ((MR_Word) ((MR_hl_field(1, ReplacementLines_14, (MR_Integer) 0))));
                succeeded = parse_tree__write_error_spec____Unify____error_line_0_0(FirstReplacementLine_16, HeadLine0_3);
                succeeded = !(succeeded);
              }
            }
            if (succeeded)
            {
              MR_Word Lines1_18;
              MR_Word next_value_of_HeadVar__1_1;

              Lines1_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_error_line_0), ReplacementLines_14, LeftOverLines0_15);
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__1_1 = Lines1_18;
              HeadVar__1_1 = next_value_of_HeadVar__1_1;
              continue;
            }
            else
            {
              MR_Word TailLines_19;

              parse_tree__write_error_spec__try_to_join_lp_to_rp_lines_2_p_0(TailLines0_4, &TailLines_19);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__2_2 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (HeadLine0_3));
                MR_hl_field(1, base, 1) = ((MR_Box) (TailLines_19));
              }
            }
          }
          break;
      }
    }
    break;
  }
}

static MR_bool MR_CALL 
parse_tree__write_error_spec__find_matching_rp_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_MidLinesCord_0_2,
  MR_Word * STATE_VARIABLE_MidLinesCord_3,
  MR_Integer STATE_VARIABLE_MidLinesLen_0_4,
  MR_Integer * STATE_VARIABLE_MidLinesLen_5,
  MR_Word * RPLine_6,
  MR_Word * LeftOverLines_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word HeadLine0_16;
    MR_Word TailLines0_17;
    MR_Integer HeadLineWordsLen_25;
    MR_Word HeadParen_28;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      HeadLine0_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      TailLines0_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      HeadLineWordsLen_25 = ((MR_Integer) ((MR_hl_field(0, HeadLine0_16, (MR_Integer) 3))));
      HeadParen_28 = ((MR_Unsigned) ((MR_hl_field(0, HeadLine0_16, (MR_Integer) 6))) & (MR_Integer) 3);
      switch (HeadParen_28) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
          {
            MR_Word TypeCtorInfo_50_50;

            succeeded = (TailLines0_17 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              *RPLine_6 = ((MR_Word) ((MR_hl_field(1, TailLines0_17, (MR_Integer) 0))));
              *LeftOverLines_7 = ((MR_Word) ((MR_hl_field(1, TailLines0_17, (MR_Integer) 1))));
              TypeCtorInfo_50_50 = (MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_error_line_0);
              mercury__cord__snoc_3_p_0(TypeCtorInfo_50_50, ((MR_Box) (HeadLine0_16)), STATE_VARIABLE_MidLinesCord_0_2, STATE_VARIABLE_MidLinesCord_3);
              *STATE_VARIABLE_MidLinesLen_5 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_MidLinesLen_0_4 + (MR_Unsigned) HeadLineWordsLen_25);
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ReplacementLines_30;
            MR_Word AfterRpLines_31;

            succeeded = parse_tree__write_error_spec__find_matching_rp_and_maybe_join_4_p_0(HeadLine0_16, TailLines0_17, &ReplacementLines_30, &AfterRpLines_31);
            if (succeeded)
            {
              if ((ReplacementLines_30 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.write_error_spec.find_matching_rp\'/7", (MR_String) "ReplacementLines = []");
                succeeded = MR_TRUE;
              }
              else
              {
                MR_Word HeadReplacementLine_32 = ((MR_Word) ((MR_hl_field(1, ReplacementLines_30, (MR_Integer) 0))));
                MR_Word TailReplacementLines_33 = ((MR_Word) ((MR_hl_field(1, ReplacementLines_30, (MR_Integer) 1))));

                succeeded = (TailReplacementLines_33 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  succeeded = parse_tree__write_error_spec____Unify____error_line_0_0(HeadReplacementLine_32, HeadLine0_16);
                  if (succeeded)
                    succeeded = MR_FALSE;
                  else
                  {
                    MR_Word Var_48;
                    MR_Word next_value_of_HeadVar__1_1;

                    {
                      Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_48, 0) = ((MR_Box) (HeadReplacementLine_32));
                      MR_hl_field(1, Var_48, 1) = ((MR_Box) (AfterRpLines_31));
                    }
                    // direct tailcall eliminated
                    ;
                    next_value_of_HeadVar__1_1 = Var_48;
                    HeadVar__1_1 = next_value_of_HeadVar__1_1;
                    continue;
                  }
                }
              }
            }
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word STATE_VARIABLE_MidLinesCord_40_40;
            MR_Integer STATE_VARIABLE_MidLinesLen_41_41;
            MR_Word next_value_of_HeadVar__1_1;
            MR_Word next_value_of_STATE_VARIABLE_MidLinesCord_0_2;
            MR_Integer next_value_of_STATE_VARIABLE_MidLinesLen_0_4;

            mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_error_line_0), ((MR_Box) (HeadLine0_16)), STATE_VARIABLE_MidLinesCord_0_2, &STATE_VARIABLE_MidLinesCord_40_40);
            STATE_VARIABLE_MidLinesLen_41_41 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_MidLinesLen_0_4 + (MR_Unsigned) HeadLineWordsLen_25);
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__1_1 = TailLines0_17;
            next_value_of_STATE_VARIABLE_MidLinesCord_0_2 = STATE_VARIABLE_MidLinesCord_40_40;
            next_value_of_STATE_VARIABLE_MidLinesLen_0_4 = STATE_VARIABLE_MidLinesLen_41_41;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            STATE_VARIABLE_MidLinesCord_0_2 = next_value_of_STATE_VARIABLE_MidLinesCord_0_2;
            STATE_VARIABLE_MidLinesLen_0_4 = next_value_of_STATE_VARIABLE_MidLinesLen_0_4;
            continue;
          }
          break;
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
parse_tree__write_error_spec__find_matching_rp_and_maybe_join_4_p_0_3(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__write_error_spec__IntroducedFrom__pred__find_matching_rp_and_maybe_join__1614__1_2_p_0(((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_Box MR_CALL 
parse_tree__write_error_spec__find_matching_rp_and_maybe_join_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_LambdaHeadVar__2_57;

  conv0_LambdaHeadVar__2_57 = parse_tree__write_error_spec__IntroducedFrom__func__find_matching_rp_and_maybe_join__1609__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_57));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
parse_tree__write_error_spec__find_matching_rp_and_maybe_join_4_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__write_error_spec__IntroducedFrom__pred__find_matching_rp_and_maybe_join__1588__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__write_error_spec__find_matching_rp_and_maybe_join_4_p_0(
  MR_Word LPLine_5,
  MR_Word TailLines0_6,
  MR_Word * ReplacementLines_7,
  MR_Word * LeftOverLines_8)
{
  MR_bool succeeded;
  MR_Word TypeCtorInfo_73_73;
  MR_Integer AvailLen_9 = ((MR_Integer) ((MR_hl_field(0, LPLine_5, (MR_Integer) 0))));
  MR_Unsigned LPIndent_10 = ((MR_Unsigned) ((MR_hl_field(0, LPLine_5, (MR_Integer) 1))));
  MR_String LPLineWordsStr_11 = ((MR_String) ((MR_hl_field(0, LPLine_5, (MR_Integer) 2))));
  MR_Integer LPLineWordsLen_12 = ((MR_Integer) ((MR_hl_field(0, LPLine_5, (MR_Integer) 3))));
  MR_Word LPLineEndReset_13 = ((MR_Unsigned) ((MR_hl_field(0, LPLine_5, (MR_Integer) 4))) & (MR_Integer) 1);
  MR_Word LPStartCS_14 = ((MR_Word) ((MR_hl_field(0, LPLine_5, (MR_Integer) 5))));
  MR_Word LPParen_15 = ((MR_Unsigned) ((MR_hl_field(0, LPLine_5, (MR_Integer) 6))) & (MR_Integer) 3);
  MR_Word MidLinesCord_16;
  MR_Integer MidLinesLen_17;
  MR_Word RPLine_18;
  MR_String RPLineWordsStr_22;
  MR_Integer RPLineWordsLen_23;
  MR_Word RPLineEndReset_24;
  MR_Word RPParen_26;
  MR_Word MidLines_27;
  MR_Integer NumMidLines_28;
  MR_Integer MidLineSpaces_29;
  MR_Integer TotalLpRpLen_30;
  MR_Word ChunkLines_31;
  MR_Word Var_39;
  MR_Word Var_43;
  MR_Integer Var_46;
  MR_Integer Var_47;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word Var_50;
  MR_Integer Var_51;
  MR_Integer Var_52;
  MR_Unsigned Var_53;
  MR_Unsigned Var_54;

  {
    Var_39 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_39, 0) = ((MR_Box) (&parse_tree__write_error_spec_scalar_common_4[1]));
    MR_hl_field(0, Var_39, 1) = ((MR_Box) (parse_tree__write_error_spec__find_matching_rp_and_maybe_join_4_p_0_1));
    MR_hl_field(0, Var_39, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_39, 3) = ((MR_Box) (LPParen_15));
    MR_hl_field(0, Var_39, 4) = ((MR_Box) ((MR_Integer) 1));
  }
  mercury__require__expect_3_p_0(Var_39, (MR_String) "predicate \140parse_tree.write_error_spec.find_matching_rp_and_maybe_join\'/4", (MR_String) "LPParen != paren_lp_end");
  Var_43 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_error_line_0));
  succeeded = parse_tree__write_error_spec__find_matching_rp_7_p_0(TailLines0_6, Var_43, &MidLinesCord_16, (MR_Integer) 0, &MidLinesLen_17, &RPLine_18, LeftOverLines_8);
  if (succeeded)
  {
    RPLineWordsStr_22 = ((MR_String) ((MR_hl_field(0, RPLine_18, (MR_Integer) 2))));
    RPLineWordsLen_23 = ((MR_Integer) ((MR_hl_field(0, RPLine_18, (MR_Integer) 3))));
    RPLineEndReset_24 = ((MR_Unsigned) ((MR_hl_field(0, RPLine_18, (MR_Integer) 4))) & (MR_Integer) 1);
    RPParen_26 = ((MR_Unsigned) ((MR_hl_field(0, RPLine_18, (MR_Integer) 6))) & (MR_Integer) 3);
    TypeCtorInfo_73_73 = (MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_error_line_0);
    MidLines_27 = mercury__cord__list_1_f_0(TypeCtorInfo_73_73, MidLinesCord_16);
    mercury__list__length_2_p_0(TypeCtorInfo_73_73, MidLines_27, &NumMidLines_28);
    succeeded = (NumMidLines_28 == (MR_Integer) 0);
    if (succeeded)
      MidLineSpaces_29 = (MR_Integer) 0;
    else
      MidLineSpaces_29 = (MR_Integer) ((MR_Unsigned) NumMidLines_28 - (MR_Unsigned) 1);
    Var_47 = (MR_Integer) ((MR_Unsigned) LPLineWordsLen_12 + (MR_Unsigned) MidLinesLen_17);
    Var_46 = (MR_Integer) ((MR_Unsigned) Var_47 + (MR_Unsigned) MidLineSpaces_29);
    TotalLpRpLen_30 = (MR_Integer) ((MR_Unsigned) Var_46 + (MR_Unsigned) RPLineWordsLen_23);
    Var_50 = (MR_Word) ((MR_Unsigned) 0U);
    {
      Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_48, 0) = ((MR_Box) (LPLine_5));
      MR_hl_field(1, Var_48, 1) = ((MR_Box) (MidLines_27));
    }
    {
      Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_49, 0) = ((MR_Box) (RPLine_18));
      MR_hl_field(1, Var_49, 1) = ((MR_Box) (Var_50));
    }
    ChunkLines_31 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_73_73, Var_48, Var_49);
    Var_54 = libs__indent__indent2_increment_0_f_0();
    Var_53 = (LPIndent_10 * Var_54);
    Var_52 = mercury__uint__cast_to_int_1_f_0(Var_53);
    Var_51 = (MR_Integer) ((MR_Unsigned) Var_52 + (MR_Unsigned) TotalLpRpLen_30);
    succeeded = (Var_51 <= AvailLen_9);
    if (succeeded)
    {
      MR_Word MidLineStrs_32;
      MR_String MidSpaceLinesStr_34;
      MR_String ReplacementLineStr_35;
      MR_Integer ReplacementLineLen_36;
      MR_Word LPRPLineEndReset_37;
      MR_Word ReplacementLine_38;
      MR_String Var_59;
      MR_Word Var_60;

      MidLineStrs_32 = mercury__list__map_2_f_0(TypeCtorInfo_73_73, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__write_error_spec_scalar_common_5[0]), MidLines_27);
      MidSpaceLinesStr_34 = mercury__string__join_list_2_f_0((MR_String) " ", MidLineStrs_32);
      Var_59 = mercury__string__f_43_43_2_f_0(MidSpaceLinesStr_34, RPLineWordsStr_22);
      ReplacementLineStr_35 = mercury__string__f_43_43_2_f_0(LPLineWordsStr_11, Var_59);
      mercury__string__count_code_points_2_p_0(ReplacementLineStr_35, &ReplacementLineLen_36);
      {
        Var_60 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_60, 0) = ((MR_Box) (&parse_tree__write_error_spec_scalar_common_4[3]));
        MR_hl_field(0, Var_60, 1) = ((MR_Box) (parse_tree__write_error_spec__find_matching_rp_and_maybe_join_4_p_0_3));
        MR_hl_field(0, Var_60, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_60, 3) = ((MR_Box) (TotalLpRpLen_30));
        MR_hl_field(0, Var_60, 4) = ((MR_Box) (ReplacementLineLen_36));
      }
      mercury__require__expect_3_p_0(Var_60, (MR_String) "predicate \140parse_tree.write_error_spec.find_matching_rp_and_maybe_join\'/4", (MR_String) "TotalLpRpLen != ReplacementLineLen");
      succeeded = (LPLineEndReset_13 == (MR_Integer) 0);
      if (succeeded)
        succeeded = (RPLineEndReset_24 == (MR_Integer) 0);
      if (succeeded)
        LPRPLineEndReset_37 = (MR_Integer) 0;
      else
        LPRPLineEndReset_37 = (MR_Integer) 1;
      {
        ReplacementLine_38 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ReplacementLine_38, 0) = ((MR_Box) (AvailLen_9));
        MR_hl_field(0, ReplacementLine_38, 1) = ((MR_Box) (LPIndent_10));
        MR_hl_field(0, ReplacementLine_38, 2) = ((MR_Box) (ReplacementLineStr_35));
        MR_hl_field(0, ReplacementLine_38, 3) = ((MR_Box) (TotalLpRpLen_30));
        MR_hl_field(0, ReplacementLine_38, 4) = (MR_Box) ((MR_Unsigned) (LPRPLineEndReset_37));
        MR_hl_field(0, ReplacementLine_38, 5) = ((MR_Box) (LPStartCS_14));
        MR_hl_field(0, ReplacementLine_38, 6) = (MR_Box) ((MR_Unsigned) (RPParen_26));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *ReplacementLines_7 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (ReplacementLine_38));
        MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    else
      *ReplacementLines_7 = ChunkLines_31;
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_bool MR_CALL 
parse_tree__write_error_spec____Unify____error_line_0_0(
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
    MR_Word TypeInfo_19_19;
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Unsigned ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Unsigned ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_String ArgX3_7 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_String ArgY3_8 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Integer ArgX4_9 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Integer ArgY4_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgX5_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))) & (MR_Integer) 1);
    MR_Word ArgY5_12 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))) & (MR_Integer) 1);
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgX7_15 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 6))) & (MR_Integer) 3);
    MR_Word ArgY7_16 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))) & (MR_Integer) 3);

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        succeeded = (strcmp(ArgX3_7, ArgY3_8) == 0);
        if (succeeded)
        {
          succeeded = (ArgX4_9 == ArgY4_10);
          if (succeeded)
          {
            succeeded = (ArgX5_11 == ArgY5_12);
            if (succeeded)
            {
              TypeInfo_19_19 = (MR_Word) (&parse_tree__write_error_spec_scalar_common_1[3]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
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
parse_tree__write_error_spec__divide_paragraphs_into_lines_5_p_0(
  MR_Integer AvailLen_6,
  MR_Word TreatAsFirst_7,
  MR_Unsigned CurIndent_8,
  MR_Word Paras_9,
  MR_Word * Lines_10)
{
  MR_bool succeeded;

  if ((Paras_9 == (MR_Word) ((MR_Unsigned) 0U)))
    *Lines_10 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word FirstPara_11 = ((MR_Word) ((MR_hl_field(1, Paras_9, (MR_Integer) 0))));
    MR_Word LaterParas_12 = ((MR_Word) ((MR_hl_field(1, Paras_9, (MR_Integer) 1))));
    MR_Word FirstParaWords_13 = ((MR_Word) ((MR_hl_field(0, FirstPara_11, (MR_Integer) 0))));
    MR_Integer NumBlankLines_14 = ((MR_Integer) ((MR_hl_field(0, FirstPara_11, (MR_Integer) 1))));
    MR_Integer FirstIndentDelta_15 = ((MR_Integer) ((MR_hl_field(0, FirstPara_11, (MR_Integer) 2))));
    MR_Word ParaParen_16 = ((MR_Unsigned) ((MR_hl_field(0, FirstPara_11, (MR_Integer) 3))) & (MR_Integer) 3);
    MR_Unsigned RestIndent_17;
    MR_Word ColourStack0_18;
    MR_Integer NextIndentInt_19;
    MR_Unsigned NextIndent_21;
    MR_Word FirstParaWarningLines_22;
    MR_Word BlankLine_24;
    MR_Word FirstParaBlankLines_25;
    MR_Word NextTreatAsFirst_26;
    MR_Word FirstParaLines_27;
    MR_Word LaterParaLines_40;
    MR_Integer Var_42;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Unsigned NextIndentPrime_20;

    switch (TreatAsFirst_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        RestIndent_17 = CurIndent_8;
        break;
      case (MR_Integer) 0:
        RestIndent_17 = (CurIndent_8 + (MR_Unsigned) 1U);
        break;
    }
    mercury__stack__init_1_p_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_color_0), &ColourStack0_18);
    Var_42 = mercury__uint__cast_to_int_1_f_0(RestIndent_17);
    NextIndentInt_19 = (MR_Integer) ((MR_Unsigned) Var_42 + (MR_Unsigned) FirstIndentDelta_15);
    succeeded = mercury__uint__from_int_2_p_0(NextIndentInt_19, &NextIndentPrime_20);
    if (succeeded)
    {
      NextIndent_21 = NextIndentPrime_20;
      FirstParaWarningLines_22 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word WarningLine_23;

      {
        WarningLine_23 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, WarningLine_23, 0) = ((MR_Box) (AvailLen_6));
        MR_hl_field(0, WarningLine_23, 1) = ((MR_Box) (CurIndent_8));
        MR_hl_field(0, WarningLine_23, 2) = ((MR_Box) ((MR_String) "WARNING: NEGATIVE INDENT"));
        MR_hl_field(0, WarningLine_23, 3) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(0, WarningLine_23, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(0, WarningLine_23, 5) = ((MR_Box) (ColourStack0_18));
        MR_hl_field(0, WarningLine_23, 6) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      }
      {
        FirstParaWarningLines_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, FirstParaWarningLines_22, 0) = ((MR_Box) (WarningLine_23));
        MR_hl_field(1, FirstParaWarningLines_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      NextIndent_21 = (MR_Unsigned) 0U;
    }
    {
      BlankLine_24 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, BlankLine_24, 0) = ((MR_Box) (AvailLen_6));
      MR_hl_field(0, BlankLine_24, 1) = ((MR_Box) (CurIndent_8));
      MR_hl_field(0, BlankLine_24, 2) = ((MR_Box) ((MR_String) ""));
      MR_hl_field(0, BlankLine_24, 3) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(0, BlankLine_24, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(0, BlankLine_24, 5) = ((MR_Box) (ColourStack0_18));
      MR_hl_field(0, BlankLine_24, 6) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_error_line_0), NumBlankLines_14, ((MR_Box) (BlankLine_24)), &FirstParaBlankLines_25);
    if ((FirstParaWords_13 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      NextTreatAsFirst_26 = TreatAsFirst_7;
      FirstParaLines_27 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word FirstWord_28 = ((MR_Word) ((MR_hl_field(1, FirstParaWords_13, (MR_Integer) 0))));
      MR_Word LaterWords_29 = ((MR_Word) ((MR_hl_field(1, FirstParaWords_13, (MR_Integer) 1))));
      MR_Integer LineWordsLen_30;
      MR_Word LineWords_31;
      MR_Word RestWords_32;
      MR_Word ColourStack1_33;
      MR_Word LineEndReset_34;
      MR_String LineWordsStr_35;
      MR_Integer AvailLeft_59;
      MR_String FirstStr_60;
      MR_Word LineEndReset1_61;
      MR_String NextSpace_62;
      MR_Integer LenSoFar_63;
      MR_Word LaterSCUnits_64;
      MR_Word LineStrsCord0_66;
      MR_Word LineStrsCord_67;
      MR_Integer Var_68;
      MR_Unsigned Var_69;
      MR_Unsigned Var_70;
      MR_Word STATE_VARIABLE_ColourStack_34_71;

      NextTreatAsFirst_26 = (MR_Integer) 1;
      Var_70 = libs__indent__indent2_increment_0_f_0();
      Var_69 = (CurIndent_8 * Var_70);
      Var_68 = mercury__uint__cast_to_int_1_f_0(Var_69);
      AvailLeft_59 = (MR_Integer) ((MR_Unsigned) AvailLen_6 - (MR_Unsigned) Var_68);
      switch (MR_tag((MR_Word) FirstWord_28)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 2:
          {
            MR_Word TopColourPrime_74;
            MR_Box conv0_TopColourPrime_74;

            LineEndReset1_61 = (MR_Integer) 1;
            NextSpace_62 = (MR_String) "";
            parse_tree__write_error_spec__merge_adjacent_color_changes_5_p_0(FirstWord_28, LaterWords_29, &LaterSCUnits_64, ColourStack0_18, &STATE_VARIABLE_ColourStack_34_71);
            succeeded = mercury__stack__top_2_p_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_color_0), STATE_VARIABLE_ColourStack_34_71, &conv0_TopColourPrime_74);
            if (succeeded)
            {
              TopColourPrime_74 = ((MR_Word) (conv0_TopColourPrime_74));
              succeeded = MR_TRUE;
            }
            if (succeeded)
              if ((TopColourPrime_74 == (MR_Word) ((MR_Unsigned) 0U)))
                FirstStr_60 = (MR_String) "\033[39;49m";
              else
              {
                uint8_t ColourNum_76 = ((uint8_t) (MR_Word) (MR_hl_field(1, TopColourPrime_74, (MR_Integer) 0)));
                MR_Integer Var_81;
                MR_String Var_85;
                MR_String Var_92;

                Var_81 = mercury__uint8__cast_to_int_1_f_0(ColourNum_76);
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__write_error_spec_scalar_common_2[2]), Var_81, &Var_85);
                Var_92 = mercury__string__f_43_43_2_f_0(Var_85, (MR_String) "m");
                FirstStr_60 = mercury__string__f_43_43_2_f_0((MR_String) "\033[38;5;", Var_92);
              }
            else
              FirstStr_60 = (MR_String) "\033[39;49m";
            LenSoFar_63 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 1:
          {
            FirstStr_60 = ((MR_String) ((MR_hl_field(1, FirstWord_28, (MR_Integer) 0))));
            LineEndReset1_61 = (MR_Integer) 0;
            NextSpace_62 = (MR_String) " ";
            mercury__string__count_code_points_2_p_0(FirstStr_60, &LenSoFar_63);
            LaterSCUnits_64 = LaterWords_29;
            STATE_VARIABLE_ColourStack_34_71 = ColourStack0_18;
          }
          break;
      }
      LineStrsCord0_66 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (FirstStr_60)));
      parse_tree__write_error_spec__get_later_words_12_p_0(AvailLeft_59, NextSpace_62, LaterSCUnits_64, LenSoFar_63, &LineWordsLen_30, LineStrsCord0_66, &LineStrsCord_67, &RestWords_32, STATE_VARIABLE_ColourStack_34_71, &ColourStack1_33, LineEndReset1_61, &LineEndReset_34);
      LineWords_31 = mercury__cord__list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), LineStrsCord_67);
      LineWordsStr_35 = mercury__string__append_list_1_f_0(LineWords_31);
      if ((RestWords_32 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word CurLine_36;

        {
          CurLine_36 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, CurLine_36, 0) = ((MR_Box) (AvailLen_6));
          MR_hl_field(0, CurLine_36, 1) = ((MR_Box) (CurIndent_8));
          MR_hl_field(0, CurLine_36, 2) = ((MR_Box) (LineWordsStr_35));
          MR_hl_field(0, CurLine_36, 3) = ((MR_Box) (LineWordsLen_30));
          MR_hl_field(0, CurLine_36, 4) = (MR_Box) ((MR_Unsigned) (LineEndReset_34));
          MR_hl_field(0, CurLine_36, 5) = ((MR_Box) (ColourStack0_18));
          MR_hl_field(0, CurLine_36, 6) = (MR_Box) ((MR_Unsigned) (ParaParen_16));
        }
        {
          FirstParaLines_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, FirstParaLines_27, 0) = ((MR_Box) (CurLine_36));
          MR_hl_field(1, FirstParaLines_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      else
      {
        MR_Word FirstRestWord_37 = ((MR_Word) ((MR_hl_field(1, RestWords_32, (MR_Integer) 0))));
        MR_Word LaterRestWords_38 = ((MR_Word) ((MR_hl_field(1, RestWords_32, (MR_Integer) 1))));
        MR_Word FirstParaRestLines_39;
        MR_Word CurLine_56;

        {
          CurLine_56 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, CurLine_56, 0) = ((MR_Box) (AvailLen_6));
          MR_hl_field(0, CurLine_56, 1) = ((MR_Box) (CurIndent_8));
          MR_hl_field(0, CurLine_56, 2) = ((MR_Box) (LineWordsStr_35));
          MR_hl_field(0, CurLine_56, 3) = ((MR_Box) (LineWordsLen_30));
          MR_hl_field(0, CurLine_56, 4) = (MR_Box) ((MR_Unsigned) (LineEndReset_34));
          MR_hl_field(0, CurLine_56, 5) = ((MR_Box) (ColourStack0_18));
          MR_hl_field(0, CurLine_56, 6) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        }
        parse_tree__write_error_spec__group_nonfirst_line_words_7_p_0(AvailLen_6, FirstRestWord_37, LaterRestWords_38, RestIndent_17, ParaParen_16, &FirstParaRestLines_39, ColourStack1_33);
        {
          FirstParaLines_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, FirstParaLines_27, 0) = ((MR_Box) (CurLine_56));
          MR_hl_field(1, FirstParaLines_27, 1) = ((MR_Box) (FirstParaRestLines_39));
        }
      }
    }
    parse_tree__write_error_spec__divide_paragraphs_into_lines_5_p_0(AvailLen_6, NextTreatAsFirst_26, NextIndent_21, LaterParas_12, &LaterParaLines_40);
    Var_55 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_error_line_0), FirstParaBlankLines_25, LaterParaLines_40);
    Var_54 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_error_line_0), FirstParaLines_27, Var_55);
    *Lines_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_error_line_0), FirstParaWarningLines_22, Var_54);
  }
}

static void MR_CALL 
parse_tree__write_error_spec__group_nonfirst_line_words_7_p_0(
  MR_Integer AvailLen_8,
  MR_Word FirstWord_9,
  MR_Word LaterWords_10,
  MR_Unsigned Indent_11,
  MR_Word LastParen_12,
  MR_Word * Lines_13,
  MR_Word ColourStack0_14)
{
  MR_bool succeeded;
  MR_Integer LineWordsLen_15;
  MR_Word LineWords_16;
  MR_Word RestWords_17;
  MR_Word ColourStack1_18;
  MR_Word EndLineReset_19;
  MR_String LineWordsStr_20;
  MR_Integer AvailLeft_28;
  MR_String FirstStr_29;
  MR_Word LineEndReset1_30;
  MR_String NextSpace_31;
  MR_Integer LenSoFar_32;
  MR_Word LaterSCUnits_33;
  MR_Word LineStrsCord0_35;
  MR_Word LineStrsCord_36;
  MR_Integer Var_37;
  MR_Unsigned Var_38;
  MR_Unsigned Var_39;
  MR_Word STATE_VARIABLE_ColourStack_34_40;

  Var_39 = libs__indent__indent2_increment_0_f_0();
  Var_38 = (Indent_11 * Var_39);
  Var_37 = mercury__uint__cast_to_int_1_f_0(Var_38);
  AvailLeft_28 = (MR_Integer) ((MR_Unsigned) AvailLen_8 - (MR_Unsigned) Var_37);
  switch (MR_tag((MR_Word) FirstWord_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 2:
      {
        MR_Word TopColourPrime_43;
        MR_Box conv0_TopColourPrime_43;

        LineEndReset1_30 = (MR_Integer) 1;
        NextSpace_31 = (MR_String) "";
        parse_tree__write_error_spec__merge_adjacent_color_changes_5_p_0(FirstWord_9, LaterWords_10, &LaterSCUnits_33, ColourStack0_14, &STATE_VARIABLE_ColourStack_34_40);
        succeeded = mercury__stack__top_2_p_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_color_0), STATE_VARIABLE_ColourStack_34_40, &conv0_TopColourPrime_43);
        if (succeeded)
        {
          TopColourPrime_43 = ((MR_Word) (conv0_TopColourPrime_43));
          succeeded = MR_TRUE;
        }
        if (succeeded)
          if ((TopColourPrime_43 == (MR_Word) ((MR_Unsigned) 0U)))
            FirstStr_29 = (MR_String) "\033[39;49m";
          else
          {
            uint8_t ColourNum_45 = ((uint8_t) (MR_Word) (MR_hl_field(1, TopColourPrime_43, (MR_Integer) 0)));
            MR_Integer Var_50;
            MR_String Var_54;
            MR_String Var_61;

            Var_50 = mercury__uint8__cast_to_int_1_f_0(ColourNum_45);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__write_error_spec_scalar_common_2[2]), Var_50, &Var_54);
            Var_61 = mercury__string__f_43_43_2_f_0(Var_54, (MR_String) "m");
            FirstStr_29 = mercury__string__f_43_43_2_f_0((MR_String) "\033[38;5;", Var_61);
          }
        else
          FirstStr_29 = (MR_String) "\033[39;49m";
        LenSoFar_32 = (MR_Integer) 0;
      }
      break;
    case (MR_Integer) 1:
      {
        FirstStr_29 = ((MR_String) ((MR_hl_field(1, FirstWord_9, (MR_Integer) 0))));
        LineEndReset1_30 = (MR_Integer) 0;
        NextSpace_31 = (MR_String) " ";
        mercury__string__count_code_points_2_p_0(FirstStr_29, &LenSoFar_32);
        LaterSCUnits_33 = LaterWords_10;
        STATE_VARIABLE_ColourStack_34_40 = ColourStack0_14;
      }
      break;
  }
  LineStrsCord0_35 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (FirstStr_29)));
  parse_tree__write_error_spec__get_later_words_12_p_0(AvailLeft_28, NextSpace_31, LaterSCUnits_33, LenSoFar_32, &LineWordsLen_15, LineStrsCord0_35, &LineStrsCord_36, &RestWords_17, STATE_VARIABLE_ColourStack_34_40, &ColourStack1_18, LineEndReset1_30, &EndLineReset_19);
  LineWords_16 = mercury__cord__list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), LineStrsCord_36);
  LineWordsStr_20 = mercury__string__append_list_1_f_0(LineWords_16);
  if ((RestWords_17 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Line_21;

    {
      Line_21 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Line_21, 0) = ((MR_Box) (AvailLen_8));
      MR_hl_field(0, Line_21, 1) = ((MR_Box) (Indent_11));
      MR_hl_field(0, Line_21, 2) = ((MR_Box) (LineWordsStr_20));
      MR_hl_field(0, Line_21, 3) = ((MR_Box) (LineWordsLen_15));
      MR_hl_field(0, Line_21, 4) = (MR_Box) ((MR_Unsigned) (EndLineReset_19));
      MR_hl_field(0, Line_21, 5) = ((MR_Box) (ColourStack0_14));
      MR_hl_field(0, Line_21, 6) = (MR_Box) ((MR_Unsigned) (LastParen_12));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Lines_13 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Line_21));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  else
  {
    MR_Word FirstRestWord_22 = ((MR_Word) ((MR_hl_field(1, RestWords_17, (MR_Integer) 0))));
    MR_Word LaterRestWords_23 = ((MR_Word) ((MR_hl_field(1, RestWords_17, (MR_Integer) 1))));
    MR_Word RestLines_24;
    MR_Word Line_27;

    {
      Line_27 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Line_27, 0) = ((MR_Box) (AvailLen_8));
      MR_hl_field(0, Line_27, 1) = ((MR_Box) (Indent_11));
      MR_hl_field(0, Line_27, 2) = ((MR_Box) (LineWordsStr_20));
      MR_hl_field(0, Line_27, 3) = ((MR_Box) (LineWordsLen_15));
      MR_hl_field(0, Line_27, 4) = (MR_Box) ((MR_Unsigned) (EndLineReset_19));
      MR_hl_field(0, Line_27, 5) = ((MR_Box) (ColourStack0_14));
      MR_hl_field(0, Line_27, 6) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    parse_tree__write_error_spec__group_nonfirst_line_words_7_p_0(AvailLen_8, FirstRestWord_22, LaterRestWords_23, Indent_11, LastParen_12, &RestLines_24, ColourStack1_18);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Lines_13 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Line_27));
      MR_hl_field(1, base, 1) = ((MR_Box) (RestLines_24));
    }
  }
}

static MR_bool MR_CALL 
parse_tree__write_error_spec__get_later_words_12_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__write_error_spec__IntroducedFrom__pred__get_later_words__1413__1_2_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__write_error_spec__get_later_words_12_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__write_error_spec__IntroducedFrom__pred__get_later_words__1435__1_2_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
parse_tree__write_error_spec__get_later_words_12_p_0(
  MR_Integer Avail_1,
  MR_String NextSpace0_2,
  MR_Word HeadVar__3_3,
  MR_Integer CurLen_4,
  MR_Integer * FinalLen_5,
  MR_Word HeadVar__6_6,
  MR_Word * LineStrs_7,
  MR_Word * HeadVar__8_8,
  MR_Word STATE_VARIABLE_ColourStack_0_9,
  MR_Word * STATE_VARIABLE_ColourStack_10,
  MR_Word HeadVar__11_11,
  MR_Word * LineEndReset_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *LineStrs_7 = HeadVar__6_6;
      *HeadVar__8_8 = (MR_Word) ((MR_Unsigned) 0U);
      *LineEndReset_12 = HeadVar__11_11;
      *FinalLen_5 = CurLen_4;
      *STATE_VARIABLE_ColourStack_10 = STATE_VARIABLE_ColourStack_0_9;
    }
    else
    {
      MR_Word SCUnit_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word SCUnits0_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word LineEndReset1_35;
      MR_Word SCUnits_36;
      MR_String FirstStr_37;
      MR_Integer NextLen_39;
      MR_String NextSpace_40;
      MR_Word STATE_VARIABLE_ColourStack_51_51;

      switch (MR_tag((MR_Word) SCUnit_24)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_56;
            MR_Word TopColourPrime_64;
            MR_Box conv0_TopColourPrime_64;

            LineEndReset1_35 = (MR_Integer) 1;
            {
              Var_56 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_56, 0) = ((MR_Box) (&parse_tree__write_error_spec_scalar_common_4[0]));
              MR_hl_field(0, Var_56, 1) = ((MR_Box) (parse_tree__write_error_spec__get_later_words_12_p_0_1));
              MR_hl_field(0, Var_56, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_56, 3) = ((MR_Box) (NextSpace0_2));
              MR_hl_field(0, Var_56, 4) = ((MR_Box) ((MR_String) " "));
            }
            mercury__require__expect_3_p_0(Var_56, (MR_String) "predicate \140parse_tree.write_error_spec.get_later_words\'/12", (MR_String) "NextSpace0 != 1 for color end");
            parse_tree__write_error_spec__merge_adjacent_color_changes_5_p_0(SCUnit_24, SCUnits0_25, &SCUnits_36, STATE_VARIABLE_ColourStack_0_9, &STATE_VARIABLE_ColourStack_51_51);
            succeeded = mercury__stack__top_2_p_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_color_0), STATE_VARIABLE_ColourStack_51_51, &conv0_TopColourPrime_64);
            if (succeeded)
            {
              TopColourPrime_64 = ((MR_Word) (conv0_TopColourPrime_64));
              succeeded = MR_TRUE;
            }
            if (succeeded)
              if ((TopColourPrime_64 == (MR_Word) ((MR_Unsigned) 0U)))
                FirstStr_37 = (MR_String) "\033[39;49m";
              else
              {
                uint8_t ColourNum_66 = ((uint8_t) (MR_Word) (MR_hl_field(1, TopColourPrime_64, (MR_Integer) 0)));
                MR_Integer Var_71;
                MR_String Var_75;
                MR_String Var_82;

                Var_71 = mercury__uint8__cast_to_int_1_f_0(ColourNum_66);
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__write_error_spec_scalar_common_2[2]), Var_71, &Var_75);
                Var_82 = mercury__string__f_43_43_2_f_0(Var_75, (MR_String) "m");
                FirstStr_37 = mercury__string__f_43_43_2_f_0((MR_String) "\033[38;5;", Var_82);
              }
            else
              FirstStr_37 = (MR_String) "\033[39;49m";
            NextLen_39 = CurLen_4;
            NextSpace_40 = (MR_String) " ";
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String Str0_34 = ((MR_String) ((MR_hl_field(1, SCUnit_24, (MR_Integer) 0))));
            MR_Integer FirstStrLen_38;

            LineEndReset1_35 = HeadVar__11_11;
            SCUnits_36 = SCUnits0_25;
            FirstStr_37 = mercury__string__f_43_43_2_f_0(NextSpace0_2, Str0_34);
            mercury__string__count_code_points_2_p_0(FirstStr_37, &FirstStrLen_38);
            NextLen_39 = (MR_Integer) ((MR_Unsigned) CurLen_4 + (MR_Unsigned) FirstStrLen_38);
            NextSpace_40 = (MR_String) " ";
            STATE_VARIABLE_ColourStack_51_51 = STATE_VARIABLE_ColourStack_0_9;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer NextLen0_42;
            MR_Integer PeekWordLen_43;
            MR_Word Var_47;
            MR_String Var_52;
            MR_Word TopColourPrime_85;
            MR_Box conv1_TopColourPrime_85;
            MR_Integer Var_54;

            LineEndReset1_35 = (MR_Integer) 1;
            {
              Var_47 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_47, 0) = ((MR_Box) (&parse_tree__write_error_spec_scalar_common_4[0]));
              MR_hl_field(0, Var_47, 1) = ((MR_Box) (parse_tree__write_error_spec__get_later_words_12_p_0_2));
              MR_hl_field(0, Var_47, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_47, 3) = ((MR_Box) (NextSpace0_2));
              MR_hl_field(0, Var_47, 4) = ((MR_Box) ((MR_String) " "));
            }
            mercury__require__expect_3_p_0(Var_47, (MR_String) "predicate \140parse_tree.write_error_spec.get_later_words\'/12", (MR_String) "NextSpace0 != 1 for color start");
            parse_tree__write_error_spec__merge_adjacent_color_changes_5_p_0(SCUnit_24, SCUnits0_25, &SCUnits_36, STATE_VARIABLE_ColourStack_0_9, &STATE_VARIABLE_ColourStack_51_51);
            succeeded = mercury__stack__top_2_p_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_color_0), STATE_VARIABLE_ColourStack_51_51, &conv1_TopColourPrime_85);
            if (succeeded)
            {
              TopColourPrime_85 = ((MR_Word) (conv1_TopColourPrime_85));
              succeeded = MR_TRUE;
            }
            if (succeeded)
              if ((TopColourPrime_85 == (MR_Word) ((MR_Unsigned) 0U)))
                Var_52 = (MR_String) "\033[39;49m";
              else
              {
                uint8_t ColourNum_87 = ((uint8_t) (MR_Word) (MR_hl_field(1, TopColourPrime_85, (MR_Integer) 0)));
                MR_Integer Var_92;
                MR_String Var_96;
                MR_String Var_103;

                Var_92 = mercury__uint8__cast_to_int_1_f_0(ColourNum_87);
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__write_error_spec_scalar_common_2[2]), Var_92, &Var_96);
                Var_103 = mercury__string__f_43_43_2_f_0(Var_96, (MR_String) "m");
                Var_52 = mercury__string__f_43_43_2_f_0((MR_String) "\033[38;5;", Var_103);
              }
            else
              Var_52 = (MR_String) "\033[39;49m";
            FirstStr_37 = mercury__string__f_43_43_2_f_0(NextSpace0_2, Var_52);
            NextLen0_42 = (MR_Integer) ((MR_Unsigned) CurLen_4 + (MR_Unsigned) 1);
            NextSpace_40 = (MR_String) "";
            if ((SCUnits_36 == (MR_Word) ((MR_Unsigned) 0U)))
              PeekWordLen_43 = (MR_Integer) 0;
            else
            {
              MR_Word SCUnit_105 = ((MR_Word) ((MR_hl_field(1, SCUnits_36, (MR_Integer) 0))));

              switch (MR_tag((MR_Word) SCUnit_105)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 2:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "function \140parse_tree.write_error_spec.peek_and_find_len_of_next_word\'/1", (MR_String) "next sc_unit after color change is not sc_str");
                    return;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_String Str_108 = ((MR_String) ((MR_hl_field(1, SCUnit_105, (MR_Integer) 0))));

                    mercury__string__count_code_points_2_p_0(Str_108, &PeekWordLen_43);
                  }
                  break;
              }
            }
            Var_54 = (MR_Integer) ((MR_Unsigned) NextLen0_42 + (MR_Unsigned) PeekWordLen_43);
            succeeded = (Var_54 <= Avail_1);
            if (succeeded)
              NextLen_39 = NextLen0_42;
            else
              NextLen_39 = (MR_Integer) ((MR_Unsigned) Avail_1 + (MR_Unsigned) 1);
          }
          break;
      }
      succeeded = (NextLen_39 <= Avail_1);
      if (succeeded)
      {
        MR_Word LineStrs1_44;
        MR_String next_value_of_NextSpace0_2;
        MR_Word next_value_of_HeadVar__3_3;
        MR_Integer next_value_of_CurLen_4;
        MR_Word next_value_of_HeadVar__6_6;
        MR_Word next_value_of_STATE_VARIABLE_ColourStack_0_9;
        MR_Word next_value_of_HeadVar__11_11;

        mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (FirstStr_37)), HeadVar__6_6, &LineStrs1_44);
        // direct tailcall eliminated
        ;
        next_value_of_NextSpace0_2 = NextSpace_40;
        next_value_of_HeadVar__3_3 = SCUnits_36;
        next_value_of_CurLen_4 = NextLen_39;
        next_value_of_HeadVar__6_6 = LineStrs1_44;
        next_value_of_STATE_VARIABLE_ColourStack_0_9 = STATE_VARIABLE_ColourStack_51_51;
        next_value_of_HeadVar__11_11 = LineEndReset1_35;
        NextSpace0_2 = next_value_of_NextSpace0_2;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        CurLen_4 = next_value_of_CurLen_4;
        HeadVar__6_6 = next_value_of_HeadVar__6_6;
        STATE_VARIABLE_ColourStack_0_9 = next_value_of_STATE_VARIABLE_ColourStack_0_9;
        HeadVar__11_11 = next_value_of_HeadVar__11_11;
        continue;
      }
      else
      {
        *FinalLen_5 = CurLen_4;
        *LineStrs_7 = HeadVar__6_6;
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__8_8 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (SCUnit_24));
          MR_hl_field(1, base, 1) = ((MR_Box) (SCUnits_36));
        }
        *LineEndReset_12 = HeadVar__11_11;
        *STATE_VARIABLE_ColourStack_10 = STATE_VARIABLE_ColourStack_51_51;
      }
    }
    break;
  }
}

static void MR_CALL 
parse_tree__write_error_spec__merge_adjacent_color_changes_5_p_0(
  MR_Word HeadSCUnit_6,
  MR_Word TailSCUnits0_7,
  MR_Word * SCUnits_8,
  MR_Word STATE_VARIABLE_ColourStack_0_16,
  MR_Word * STATE_VARIABLE_ColourStack_17)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word STATE_VARIABLE_ColourStack_18_18;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadSCUnit_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word STATE_VARIABLE_ColourStack_19_19;
      MR_Box conv0__OldTopColour_11;

      succeeded = mercury__stack__pop_3_p_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_color_0), &conv0__OldTopColour_11, STATE_VARIABLE_ColourStack_0_16, &STATE_VARIABLE_ColourStack_19_19);
      if (succeeded)
        succeeded = MR_TRUE;
      if (succeeded)
        STATE_VARIABLE_ColourStack_18_18 = STATE_VARIABLE_ColourStack_19_19;
      else
        STATE_VARIABLE_ColourStack_18_18 = STATE_VARIABLE_ColourStack_0_16;
    }
    else
    {
      MR_Word Colour_10 = ((MR_Word) ((MR_hl_field(2, HeadSCUnit_6, (MR_Integer) 0))));

      mercury__stack__push_3_p_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_color_0), ((MR_Box) (Colour_10)), STATE_VARIABLE_ColourStack_0_16, &STATE_VARIABLE_ColourStack_18_18);
    }
    if ((TailSCUnits0_7 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *SCUnits_8 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_ColourStack_17 = STATE_VARIABLE_ColourStack_18_18;
    }
    else
    {
      MR_Word HeadTailSCUnit0_12 = ((MR_Word) ((MR_hl_field(1, TailSCUnits0_7, (MR_Integer) 0))));
      MR_Word TailTailSCUnits0_13 = ((MR_Word) ((MR_hl_field(1, TailSCUnits0_7, (MR_Integer) 1))));

      switch (MR_tag((MR_Word) HeadTailSCUnit0_12)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 2:
          {
            MR_Word next_value_of_HeadSCUnit_6 = HeadTailSCUnit0_12;
            MR_Word next_value_of_TailSCUnits0_7 = TailTailSCUnits0_13;
            MR_Word next_value_of_STATE_VARIABLE_ColourStack_0_16 = STATE_VARIABLE_ColourStack_18_18;

            // direct tailcall eliminated
            ;
            HeadSCUnit_6 = next_value_of_HeadSCUnit_6;
            TailSCUnits0_7 = next_value_of_TailSCUnits0_7;
            STATE_VARIABLE_ColourStack_0_16 = next_value_of_STATE_VARIABLE_ColourStack_0_16;
            continue;
          }
          break;
        case (MR_Integer) 1:
          {
            *SCUnits_8 = TailSCUnits0_7;
            *STATE_VARIABLE_ColourStack_17 = STATE_VARIABLE_ColourStack_18_18;
          }
          break;
      }
    }
    break;
  }
}

static void MR_CALL 
parse_tree__write_error_spec__convert_pieces_to_paragraphs_acc_6_p_0(
  MR_Word ColourDb_1,
  MR_Word FirstInMsg_2,
  MR_Word HeadVar__3_3,
  MR_Word RevWords0_4,
  MR_Word STATE_VARIABLE_Paras_0_5,
  MR_Word * STATE_VARIABLE_Paras_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word SCUnits_11;
      MR_Word Var_14;

      SCUnits_11 = parse_tree__write_error_spec__rev_words_to_sc_units_1_f_0(RevWords0_4);
      {
        Var_14 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_14, 0) = ((MR_Box) (SCUnits_11));
        MR_hl_field(0, Var_14, 1) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(0, Var_14, 2) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(0, Var_14, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      }
      parse_tree__write_error_spec__add_paragraph_3_p_0(Var_14, STATE_VARIABLE_Paras_0_5, STATE_VARIABLE_Paras_6);
    }
    else
    {
      MR_Word Piece_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Pieces_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word RevWords1_26;
      MR_Word TailFirstInMsg_70;
      MR_Word STATE_VARIABLE_Paras_110_110;
      MR_Word next_value_of_FirstInMsg_2;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_RevWords0_4;
      MR_Word next_value_of_STATE_VARIABLE_Paras_0_5;

      switch (MR_tag((MR_Word) Piece_21)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(Piece_21)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                switch (FirstInMsg_2) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    RevWords1_26 = RevWords0_4;
                    break;
                  case (MR_Integer) 1:
                    {
                      RevWords1_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, RevWords1_26, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(1, RevWords1_26, 1) = ((MR_Box) (RevWords0_4));
                    }
                    break;
                }
                STATE_VARIABLE_Paras_110_110 = STATE_VARIABLE_Paras_0_5;
              }
              break;
            case (MR_Integer) 1:
              {
                RevWords1_26 = RevWords0_4;
                STATE_VARIABLE_Paras_110_110 = STATE_VARIABLE_Paras_0_5;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word SCUnits_54;
                MR_Word Var_109;

                SCUnits_54 = parse_tree__write_error_spec__rev_words_to_sc_units_1_f_0(RevWords0_4);
                {
                  Var_109 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_109, 0) = ((MR_Box) (SCUnits_54));
                  MR_hl_field(0, Var_109, 1) = ((MR_Box) ((MR_Integer) 0));
                  MR_hl_field(0, Var_109, 2) = ((MR_Box) ((MR_Integer) 0));
                  MR_hl_field(0, Var_109, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                }
                parse_tree__write_error_spec__add_paragraph_3_p_0(Var_109, STATE_VARIABLE_Paras_0_5, &STATE_VARIABLE_Paras_110_110);
                RevWords1_26 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Var_118;
                MR_Word SCUnits_199;

                SCUnits_199 = parse_tree__write_error_spec__rev_words_to_sc_units_1_f_0(RevWords0_4);
                {
                  Var_118 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_118, 0) = ((MR_Box) (SCUnits_199));
                  MR_hl_field(0, Var_118, 1) = ((MR_Box) ((MR_Integer) 1));
                  MR_hl_field(0, Var_118, 2) = ((MR_Box) ((MR_Integer) 0));
                  MR_hl_field(0, Var_118, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                }
                parse_tree__write_error_spec__add_paragraph_3_p_0(Var_118, STATE_VARIABLE_Paras_0_5, &STATE_VARIABLE_Paras_110_110);
                RevWords1_26 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 4:
              {
                if ((ColourDb_1 == (MR_Word) ((MR_Unsigned) 0U)))
                  RevWords1_26 = RevWords0_4;
                else
                  {
                    RevWords1_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, RevWords1_26, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                    MR_hl_field(1, RevWords1_26, 1) = ((MR_Box) (RevWords0_4));
                  }
                STATE_VARIABLE_Paras_110_110 = STATE_VARIABLE_Paras_0_5;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            RevWords1_26 = RevWords0_4;
            STATE_VARIABLE_Paras_110_110 = STATE_VARIABLE_Paras_0_5;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String Word_27 = ((MR_String) ((MR_hl_field(2, Piece_21, (MR_Integer) 0))));
            MR_Word Var_74;

            {
              Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_74, 0) = ((MR_Box) (Word_27));
            }
            {
              RevWords1_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, RevWords1_26, 0) = ((MR_Box) (Var_74));
              MR_hl_field(1, RevWords1_26, 1) = ((MR_Box) (RevWords0_4));
            }
            STATE_VARIABLE_Paras_110_110 = STATE_VARIABLE_Paras_0_5;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, Piece_21, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_75;
                MR_String Var_76;
                MR_String Word_139 = ((MR_String) ((MR_hl_field(3, Piece_21, (MR_Integer) 1))));

                Var_76 = parse_tree__error_spec__add_quotes_1_f_0(Word_139);
                {
                  Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_75, 0) = ((MR_Box) (Var_76));
                }
                {
                  RevWords1_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, RevWords1_26, 0) = ((MR_Box) (Var_75));
                  MR_hl_field(1, RevWords1_26, 1) = ((MR_Box) (RevWords0_4));
                }
                STATE_VARIABLE_Paras_110_110 = STATE_VARIABLE_Paras_0_5;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer Int_28 = ((MR_Integer) ((MR_hl_field(3, Piece_21, (MR_Integer) 1))));
                MR_Word Var_77;
                MR_String Var_78;

                Var_78 = mercury__string__int_to_string_1_f_0(Int_28);
                {
                  Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_77, 0) = ((MR_Box) (Var_78));
                }
                {
                  RevWords1_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, RevWords1_26, 0) = ((MR_Box) (Var_77));
                  MR_hl_field(1, RevWords1_26, 1) = ((MR_Box) (RevWords0_4));
                }
                STATE_VARIABLE_Paras_110_110 = STATE_VARIABLE_Paras_0_5;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Var_79;
                MR_String Var_80;
                MR_Integer Int_140 = ((MR_Integer) ((MR_hl_field(3, Piece_21, (MR_Integer) 1))));

                Var_80 = parse_tree__write_error_spec__int_name_str_1_f_0(Int_140);
                {
                  Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_79, 0) = ((MR_Box) (Var_80));
                }
                {
                  RevWords1_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, RevWords1_26, 0) = ((MR_Box) (Var_79));
                  MR_hl_field(1, RevWords1_26, 1) = ((MR_Box) (RevWords0_4));
                }
                STATE_VARIABLE_Paras_110_110 = STATE_VARIABLE_Paras_0_5;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Var_81;
                MR_String Var_82;
                MR_Integer Int_141 = ((MR_Integer) ((MR_hl_field(3, Piece_21, (MR_Integer) 1))));

                Var_82 = parse_tree__write_error_spec__nth_fixed_str_1_f_0(Int_141);
                {
                  Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_81, 0) = ((MR_Box) (Var_82));
                }
                {
                  RevWords1_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, RevWords1_26, 0) = ((MR_Box) (Var_81));
                  MR_hl_field(1, RevWords1_26, 1) = ((MR_Box) (RevWords0_4));
                }
                STATE_VARIABLE_Paras_110_110 = STATE_VARIABLE_Paras_0_5;
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Var_84;
                MR_String Word_142 = ((MR_String) ((MR_hl_field(3, Piece_21, (MR_Integer) 1))));

                {
                  Var_84 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, Var_84, 0) = ((MR_Box) (Word_142));
                }
                {
                  RevWords1_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, RevWords1_26, 0) = ((MR_Box) (Var_84));
                  MR_hl_field(1, RevWords1_26, 1) = ((MR_Box) (RevWords0_4));
                }
                STATE_VARIABLE_Paras_110_110 = STATE_VARIABLE_Paras_0_5;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Var_85;
                MR_String Word_143 = ((MR_String) ((MR_hl_field(3, Piece_21, (MR_Integer) 1))));

                {
                  Var_85 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_85, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(3, Var_85, 1) = ((MR_Box) (Word_143));
                }
                {
                  RevWords1_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, RevWords1_26, 0) = ((MR_Box) (Var_85));
                  MR_hl_field(1, RevWords1_26, 1) = ((MR_Box) (RevWords0_4));
                }
                STATE_VARIABLE_Paras_110_110 = STATE_VARIABLE_Paras_0_5;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_String WordsStr_25 = ((MR_String) ((MR_hl_field(3, Piece_21, (MR_Integer) 1))));

                parse_tree__write_error_spec__break_into_words_3_p_0(WordsStr_25, RevWords0_4, &RevWords1_26);
                STATE_VARIABLE_Paras_110_110 = STATE_VARIABLE_Paras_0_5;
              }
              break;
            case (MR_Integer) 7:
              {
                MR_String Var_73;
                MR_String WordsStr_138 = ((MR_String) ((MR_hl_field(3, Piece_21, (MR_Integer) 1))));

                Var_73 = parse_tree__error_spec__add_quotes_1_f_0(WordsStr_138);
                parse_tree__write_error_spec__break_into_words_3_p_0(Var_73, RevWords0_4, &RevWords1_26);
                STATE_VARIABLE_Paras_110_110 = STATE_VARIABLE_Paras_0_5;
              }
              break;
            case (MR_Integer) 8:
              {
                MR_Word SymName_29 = ((MR_Word) ((MR_hl_field(3, Piece_21, (MR_Integer) 1))));
                MR_Word Var_87;
                MR_String Word_144;

                Word_144 = parse_tree__write_error_spec__sym_name_to_word_1_f_0(SymName_29);
                {
                  Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_87, 0) = ((MR_Box) (Word_144));
                }
                {
                  RevWords1_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, RevWords1_26, 0) = ((MR_Box) (Var_87));
                  MR_hl_field(1, RevWords1_26, 1) = ((MR_Box) (RevWords0_4));
                }
                STATE_VARIABLE_Paras_110_110 = STATE_VARIABLE_Paras_0_5;
              }
              break;
            case (MR_Integer) 9:
              {
                MR_Word SymName0_30 = ((MR_Word) ((MR_hl_field(3, Piece_21, (MR_Integer) 1))));
                MR_String Var_86;
                MR_Word SymName_241;
                MR_Word Var_242;
                MR_String Word_243;

                Var_86 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName0_30);
                {
                  SymName_241 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, SymName_241, 0) = ((MR_Box) (Var_86));
                }
                Word_243 = parse_tree__write_error_spec__sym_name_to_word_1_f_0(SymName_241);
                {
                  Var_242 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_242, 0) = ((MR_Box) (Word_243));
                }
                {
                  RevWords1_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, RevWords1_26, 0) = ((MR_Box) (Var_242));
                  MR_hl_field(1, RevWords1_26, 1) = ((MR_Box) (RevWords0_4));
                }
                STATE_VARIABLE_Paras_110_110 = STATE_VARIABLE_Paras_0_5;
              }
              break;
            case (MR_Integer) 10:
              {
                MR_Word NameAndArity_31 = ((MR_Word) ((MR_hl_field(3, Piece_21, (MR_Integer) 1))));
                MR_Word Var_88;
                MR_String Word_145;

                Word_145 = parse_tree__write_error_spec__name_arity_to_word_1_f_0(NameAndArity_31);
                {
                  Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_88, 0) = ((MR_Box) (Word_145));
                }
                {
                  RevWords1_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, RevWords1_26, 0) = ((MR_Box) (Var_88));
                  MR_hl_field(1, RevWords1_26, 1) = ((MR_Box) (RevWords0_4));
                }
                STATE_VARIABLE_Paras_110_110 = STATE_VARIABLE_Paras_0_5;
              }
              break;
            case (MR_Integer) 11:
              {
                MR_Word SymNameAndArity_32 = ((MR_Word) ((MR_hl_field(3, Piece_21, (MR_Integer) 1))));
                MR_Word Var_90;
                MR_String Word_150;

                Word_150 = parse_tree__write_error_spec__sym_name_arity_to_word_1_f_0(SymNameAndArity_32);
                {
                  Var_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_90, 0) = ((MR_Box) (Word_150));
                }
                {
                  RevWords1_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, RevWords1_26, 0) = ((MR_Box) (Var_90));
                  MR_hl_field(1, RevWords1_26, 1) = ((MR_Box) (RevWords0_4));
                }
                STATE_VARIABLE_Paras_110_110 = STATE_VARIABLE_Paras_0_5;
              }
              break;
            case (MR_Integer) 12:
              {
                MR_Word SymNameAndArity0_33 = ((MR_Word) ((MR_hl_field(3, Piece_21, (MR_Integer) 1))));
                MR_Integer Arity_34 = ((MR_Integer) ((MR_hl_field(0, SymNameAndArity0_33, (MR_Integer) 1))));
                MR_String Var_89;
                MR_Word SymName_146;
                MR_Word SymName0_147 = ((MR_Word) ((MR_hl_field(0, SymNameAndArity0_33, (MR_Integer) 0))));
                MR_Word SymNameAndArity_244;
                MR_Word Var_245;
                MR_String Word_246;

                Var_89 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName0_147);
                {
                  SymName_146 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, SymName_146, 0) = ((MR_Box) (Var_89));
                }
                {
                  SymNameAndArity_244 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, SymNameAndArity_244, 0) = ((MR_Box) (SymName_146));
                  MR_hl_field(0, SymNameAndArity_244, 1) = ((MR_Box) (Arity_34));
                }
                Word_246 = parse_tree__write_error_spec__sym_name_arity_to_word_1_f_0(SymNameAndArity_244);
                {
                  Var_245 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_245, 0) = ((MR_Box) (Word_246));
                }
                {
                  RevWords1_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, RevWords1_26, 0) = ((MR_Box) (Var_245));
                  MR_hl_field(1, RevWords1_26, 1) = ((MR_Box) (RevWords0_4));
                }
                STATE_VARIABLE_Paras_110_110 = STATE_VARIABLE_Paras_0_5;
              }
              break;
            case (MR_Integer) 13:
              {
                MR_Word PFSymNameArity_35 = ((MR_Word) ((MR_hl_field(3, Piece_21, (MR_Integer) 1))));
                MR_String WordsStr_157;

                WordsStr_157 = parse_tree__parse_tree_out_sym_name__pf_sym_name_pred_form_arity_to_string_1_f_0(PFSymNameArity_35);
                parse_tree__write_error_spec__break_into_words_3_p_0(WordsStr_157, RevWords0_4, &RevWords1_26);
                STATE_VARIABLE_Paras_110_110 = STATE_VARIABLE_Paras_0_5;
              }
              break;
            case (MR_Integer) 14:
              {
                MR_Word PFSymNameArity0_36 = ((MR_Word) ((MR_hl_field(3, Piece_21, (MR_Integer) 1))));
                MR_Word PF_37 = ((MR_Unsigned) ((MR_hl_field(0, PFSymNameArity0_36, (MR_Integer) 0))) & (MR_Integer) 1);
                MR_Word PredFormArity_38 = ((MR_Word) ((MR_hl_field(0, PFSymNameArity0_36, (MR_Integer) 2))));
                MR_String Var_91;
                MR_Word SymName_153;
                MR_Word SymName0_154 = ((MR_Word) ((MR_hl_field(0, PFSymNameArity0_36, (MR_Integer) 1))));
                MR_Word PFSymNameArity_237;
                MR_String WordsStr_238;

                Var_91 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName0_154);
                {
                  SymName_153 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, SymName_153, 0) = ((MR_Box) (Var_91));
                }
                {
                  PFSymNameArity_237 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, PFSymNameArity_237, 0) = (MR_Box) ((MR_Unsigned) (PF_37));
                  MR_hl_field(0, PFSymNameArity_237, 1) = ((MR_Box) (SymName_153));
                  MR_hl_field(0, PFSymNameArity_237, 2) = ((MR_Box) (PredFormArity_38));
                }
                WordsStr_238 = parse_tree__parse_tree_out_sym_name__pf_sym_name_pred_form_arity_to_string_1_f_0(PFSymNameArity_237);
                parse_tree__write_error_spec__break_into_words_3_p_0(WordsStr_238, RevWords0_4, &RevWords1_26);
                STATE_VARIABLE_Paras_110_110 = STATE_VARIABLE_Paras_0_5;
              }
              break;
            case (MR_Integer) 15:
              {
                MR_String WordsStr_168;
                MR_Word PFSymNameArity_171 = ((MR_Word) ((MR_hl_field(3, Piece_21, (MR_Integer) 1))));

                WordsStr_168 = parse_tree__parse_tree_out_sym_name__pf_sym_name_user_arity_to_string_1_f_0(PFSymNameArity_171);
                parse_tree__write_error_spec__break_into_words_3_p_0(WordsStr_168, RevWords0_4, &RevWords1_26);
                STATE_VARIABLE_Paras_110_110 = STATE_VARIABLE_Paras_0_5;
              }
              break;
            case (MR_Integer) 16:
              {
                MR_Word UserArity_39;
                MR_String Var_92;
                MR_Word SymName_160;
                MR_Word SymName0_161;
                MR_Word PFSymNameArity0_162 = ((MR_Word) ((MR_hl_field(3, Piece_21, (MR_Integer) 1))));
                MR_Word PF_163 = ((MR_Unsigned) ((MR_hl_field(0, PFSymNameArity0_162, (MR_Integer) 0))) & (MR_Integer) 1);
                MR_String WordsStr_239;
                MR_Word PFSymNameArity_240;

                SymName0_161 = ((MR_Word) ((MR_hl_field(0, PFSymNameArity0_162, (MR_Integer) 1))));
                UserArity_39 = ((MR_Word) ((MR_hl_field(0, PFSymNameArity0_162, (MR_Integer) 2))));
                Var_92 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName0_161);
                {
                  SymName_160 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, SymName_160, 0) = ((MR_Box) (Var_92));
                }
                {
                  PFSymNameArity_240 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, PFSymNameArity_240, 0) = (MR_Box) ((MR_Unsigned) (PF_163));
                  MR_hl_field(0, PFSymNameArity_240, 1) = ((MR_Box) (SymName_160));
                  MR_hl_field(0, PFSymNameArity_240, 2) = ((MR_Box) (UserArity_39));
                }
                WordsStr_239 = parse_tree__parse_tree_out_sym_name__pf_sym_name_user_arity_to_string_1_f_0(PFSymNameArity_240);
                parse_tree__write_error_spec__break_into_words_3_p_0(WordsStr_239, RevWords0_4, &RevWords1_26);
                STATE_VARIABLE_Paras_110_110 = STATE_VARIABLE_Paras_0_5;
              }
              break;
            case (MR_Integer) 17:
              {
                MR_Word TypeCtor_42 = ((MR_Word) ((MR_hl_field(3, Piece_21, (MR_Integer) 1))));
                MR_Word Var_214;
                MR_String Word_215;
                MR_Word SymName_216 = ((MR_Word) ((MR_hl_field(0, TypeCtor_42, (MR_Integer) 0))));
                MR_Word SymNameAndArity_217;
                MR_Integer Arity_218 = ((MR_Integer) ((MR_hl_field(0, TypeCtor_42, (MR_Integer) 1))));

                {
                  SymNameAndArity_217 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, SymNameAndArity_217, 0) = ((MR_Box) (SymName_216));
                  MR_hl_field(0, SymNameAndArity_217, 1) = ((MR_Box) (Arity_218));
                }
                Word_215 = parse_tree__write_error_spec__sym_name_arity_to_word_1_f_0(SymNameAndArity_217);
                {
                  Var_214 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_214, 0) = ((MR_Box) (Word_215));
                }
                {
                  RevWords1_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, RevWords1_26, 0) = ((MR_Box) (Var_214));
                  MR_hl_field(1, RevWords1_26, 1) = ((MR_Box) (RevWords0_4));
                }
                STATE_VARIABLE_Paras_110_110 = STATE_VARIABLE_Paras_0_5;
              }
              break;
            case (MR_Integer) 18:
              {
                MR_String Var_94;
                MR_Word SymName0_176;
                MR_Word TypeCtor_177 = ((MR_Word) ((MR_hl_field(3, Piece_21, (MR_Integer) 1))));
                MR_Word Var_247;
                MR_String Word_248;
                MR_Word SymName_249;
                MR_Word SymNameAndArity_250;
                MR_Integer Arity_251;

                SymName0_176 = ((MR_Word) ((MR_hl_field(0, TypeCtor_177, (MR_Integer) 0))));
                Arity_251 = ((MR_Integer) ((MR_hl_field(0, TypeCtor_177, (MR_Integer) 1))));
                Var_94 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName0_176);
                {
                  SymName_249 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, SymName_249, 0) = ((MR_Box) (Var_94));
                }
                {
                  SymNameAndArity_250 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, SymNameAndArity_250, 0) = ((MR_Box) (SymName_249));
                  MR_hl_field(0, SymNameAndArity_250, 1) = ((MR_Box) (Arity_251));
                }
                Word_248 = parse_tree__write_error_spec__sym_name_arity_to_word_1_f_0(SymNameAndArity_250);
                {
                  Var_247 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_247, 0) = ((MR_Box) (Word_248));
                }
                {
                  RevWords1_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, RevWords1_26, 0) = ((MR_Box) (Var_247));
                  MR_hl_field(1, RevWords1_26, 1) = ((MR_Box) (RevWords0_4));
                }
                STATE_VARIABLE_Paras_110_110 = STATE_VARIABLE_Paras_0_5;
              }
              break;
            case (MR_Integer) 19:
              {
                MR_Word InstCtor_43 = ((MR_Word) ((MR_hl_field(3, Piece_21, (MR_Integer) 1))));
                MR_Word Var_204;
                MR_String Word_205;
                MR_Word SymName_206 = ((MR_Word) ((MR_hl_field(0, InstCtor_43, (MR_Integer) 0))));
                MR_Word SymNameAndArity_207;
                MR_Integer Arity_208 = ((MR_Integer) ((MR_hl_field(0, InstCtor_43, (MR_Integer) 1))));

                {
                  SymNameAndArity_207 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, SymNameAndArity_207, 0) = ((MR_Box) (SymName_206));
                  MR_hl_field(0, SymNameAndArity_207, 1) = ((MR_Box) (Arity_208));
                }
                Word_205 = parse_tree__write_error_spec__sym_name_arity_to_word_1_f_0(SymNameAndArity_207);
                {
                  Var_204 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_204, 0) = ((MR_Box) (Word_205));
                }
                {
                  RevWords1_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, RevWords1_26, 0) = ((MR_Box) (Var_204));
                  MR_hl_field(1, RevWords1_26, 1) = ((MR_Box) (RevWords0_4));
                }
                STATE_VARIABLE_Paras_110_110 = STATE_VARIABLE_Paras_0_5;
              }
              break;
            case (MR_Integer) 20:
              {
                MR_String Var_95;
                MR_Word SymName0_178;
                MR_Word InstCtor_179 = ((MR_Word) ((MR_hl_field(3, Piece_21, (MR_Integer) 1))));
                MR_Word Var_227;
                MR_String Word_228;
                MR_Word SymName_229;
                MR_Word SymNameAndArity_230;
                MR_Integer Arity_231;

                SymName0_178 = ((MR_Word) ((MR_hl_field(0, InstCtor_179, (MR_Integer) 0))));
                Arity_231 = ((MR_Integer) ((MR_hl_field(0, InstCtor_179, (MR_Integer) 1))));
                Var_95 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName0_178);
                {
                  SymName_229 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, SymName_229, 0) = ((MR_Box) (Var_95));
                }
                {
                  SymNameAndArity_230 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, SymNameAndArity_230, 0) = ((MR_Box) (SymName_229));
                  MR_hl_field(0, SymNameAndArity_230, 1) = ((MR_Box) (Arity_231));
                }
                Word_228 = parse_tree__write_error_spec__sym_name_arity_to_word_1_f_0(SymNameAndArity_230);
                {
                  Var_227 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_227, 0) = ((MR_Box) (Word_228));
                }
                {
                  RevWords1_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, RevWords1_26, 0) = ((MR_Box) (Var_227));
                  MR_hl_field(1, RevWords1_26, 1) = ((MR_Box) (RevWords0_4));
                }
                STATE_VARIABLE_Paras_110_110 = STATE_VARIABLE_Paras_0_5;
              }
              break;
            case (MR_Integer) 21:
              {
                MR_Word ModeCtor_44 = ((MR_Word) ((MR_hl_field(3, Piece_21, (MR_Integer) 1))));
                MR_Word Var_209;
                MR_String Word_210;
                MR_Word SymName_211 = ((MR_Word) ((MR_hl_field(0, ModeCtor_44, (MR_Integer) 0))));
                MR_Word SymNameAndArity_212;
                MR_Integer Arity_213 = ((MR_Integer) ((MR_hl_field(0, ModeCtor_44, (MR_Integer) 1))));

                {
                  SymNameAndArity_212 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, SymNameAndArity_212, 0) = ((MR_Box) (SymName_211));
                  MR_hl_field(0, SymNameAndArity_212, 1) = ((MR_Box) (Arity_213));
                }
                Word_210 = parse_tree__write_error_spec__sym_name_arity_to_word_1_f_0(SymNameAndArity_212);
                {
                  Var_209 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_209, 0) = ((MR_Box) (Word_210));
                }
                {
                  RevWords1_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, RevWords1_26, 0) = ((MR_Box) (Var_209));
                  MR_hl_field(1, RevWords1_26, 1) = ((MR_Box) (RevWords0_4));
                }
                STATE_VARIABLE_Paras_110_110 = STATE_VARIABLE_Paras_0_5;
              }
              break;
            case (MR_Integer) 22:
              {
                MR_String Var_96;
                MR_Word SymName0_180;
                MR_Word ModeCtor_181 = ((MR_Word) ((MR_hl_field(3, Piece_21, (MR_Integer) 1))));
                MR_Word Var_232;
                MR_String Word_233;
                MR_Word SymName_234;
                MR_Word SymNameAndArity_235;
                MR_Integer Arity_236;

                SymName0_180 = ((MR_Word) ((MR_hl_field(0, ModeCtor_181, (MR_Integer) 0))));
                Arity_236 = ((MR_Integer) ((MR_hl_field(0, ModeCtor_181, (MR_Integer) 1))));
                Var_96 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName0_180);
                {
                  SymName_234 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, SymName_234, 0) = ((MR_Box) (Var_96));
                }
                {
                  SymNameAndArity_235 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, SymNameAndArity_235, 0) = ((MR_Box) (SymName_234));
                  MR_hl_field(0, SymNameAndArity_235, 1) = ((MR_Box) (Arity_236));
                }
                Word_233 = parse_tree__write_error_spec__sym_name_arity_to_word_1_f_0(SymNameAndArity_235);
                {
                  Var_232 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_232, 0) = ((MR_Box) (Word_233));
                }
                {
                  RevWords1_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, RevWords1_26, 0) = ((MR_Box) (Var_232));
                  MR_hl_field(1, RevWords1_26, 1) = ((MR_Box) (RevWords0_4));
                }
                STATE_VARIABLE_Paras_110_110 = STATE_VARIABLE_Paras_0_5;
              }
              break;
            case (MR_Integer) 23:
              {
                MR_Word ClassId_45 = ((MR_Word) ((MR_hl_field(3, Piece_21, (MR_Integer) 1))));
                MR_Word Var_98;
                MR_String Word_185;
                MR_Word SymName_186 = ((MR_Word) ((MR_hl_field(0, ClassId_45, (MR_Integer) 0))));
                MR_Word SymNameAndArity_188;
                MR_Integer Arity_189 = ((MR_Integer) ((MR_hl_field(0, ClassId_45, (MR_Integer) 1))));

                {
                  SymNameAndArity_188 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, SymNameAndArity_188, 0) = ((MR_Box) (SymName_186));
                  MR_hl_field(0, SymNameAndArity_188, 1) = ((MR_Box) (Arity_189));
                }
                Word_185 = parse_tree__write_error_spec__sym_name_arity_to_word_1_f_0(SymNameAndArity_188);
                {
                  Var_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_98, 0) = ((MR_Box) (Word_185));
                }
                {
                  RevWords1_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, RevWords1_26, 0) = ((MR_Box) (Var_98));
                  MR_hl_field(1, RevWords1_26, 1) = ((MR_Box) (RevWords0_4));
                }
                STATE_VARIABLE_Paras_110_110 = STATE_VARIABLE_Paras_0_5;
              }
              break;
            case (MR_Integer) 24:
              {
                MR_String Var_97;
                MR_Word SymName0_182;
                MR_Word ClassId_183 = ((MR_Word) ((MR_hl_field(3, Piece_21, (MR_Integer) 1))));
                MR_Word Var_219;
                MR_String Word_220;
                MR_Word SymName_221;
                MR_Word SymNameAndArity_222;
                MR_Integer Arity_223;

                SymName0_182 = ((MR_Word) ((MR_hl_field(0, ClassId_183, (MR_Integer) 0))));
                Arity_223 = ((MR_Integer) ((MR_hl_field(0, ClassId_183, (MR_Integer) 1))));
                Var_97 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName0_182);
                {
                  SymName_221 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, SymName_221, 0) = ((MR_Box) (Var_97));
                }
                {
                  SymNameAndArity_222 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, SymNameAndArity_222, 0) = ((MR_Box) (SymName_221));
                  MR_hl_field(0, SymNameAndArity_222, 1) = ((MR_Box) (Arity_223));
                }
                Word_220 = parse_tree__write_error_spec__sym_name_arity_to_word_1_f_0(SymNameAndArity_222);
                {
                  Var_219 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_219, 0) = ((MR_Box) (Word_220));
                }
                {
                  RevWords1_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, RevWords1_26, 0) = ((MR_Box) (Var_219));
                  MR_hl_field(1, RevWords1_26, 1) = ((MR_Box) (RevWords0_4));
                }
                STATE_VARIABLE_Paras_110_110 = STATE_VARIABLE_Paras_0_5;
              }
              break;
            case (MR_Integer) 25:
              {
                MR_Word ConsId0_40 = ((MR_Word) ((MR_hl_field(3, Piece_21, (MR_Integer) 1))));
                MR_Word ConsId_41;
                MR_Word Var_93;
                MR_String Word_175;

                parse_tree__prog_util__strip_builtin_qualifier_from_cons_id_2_p_0(ConsId0_40, &ConsId_41);
                Word_175 = parse_tree__parse_tree_out_cons_id__maybe_quoted_cons_id_and_arity_to_string_1_f_0(ConsId_41);
                {
                  Var_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_93, 0) = ((MR_Box) (Word_175));
                }
                {
                  RevWords1_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, RevWords1_26, 0) = ((MR_Box) (Var_93));
                  MR_hl_field(1, RevWords1_26, 1) = ((MR_Box) (RevWords0_4));
                }
                STATE_VARIABLE_Paras_110_110 = STATE_VARIABLE_Paras_0_5;
              }
              break;
            case (MR_Integer) 26:
              {
                MR_Word ConsId0_174 = ((MR_Word) ((MR_hl_field(3, Piece_21, (MR_Integer) 1))));
                MR_Word ConsId_224;
                MR_Word Var_225;
                MR_String Word_226;

                parse_tree__prog_util__strip_module_qualifier_from_cons_id_2_p_0(ConsId0_174, &ConsId_224);
                Word_226 = parse_tree__parse_tree_out_cons_id__maybe_quoted_cons_id_and_arity_to_string_1_f_0(ConsId_224);
                {
                  Var_225 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_225, 0) = ((MR_Box) (Word_226));
                }
                {
                  RevWords1_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, RevWords1_26, 0) = ((MR_Box) (Var_225));
                  MR_hl_field(1, RevWords1_26, 1) = ((MR_Box) (RevWords0_4));
                }
                STATE_VARIABLE_Paras_110_110 = STATE_VARIABLE_Paras_0_5;
              }
              break;
            case (MR_Integer) 27:
              {
                MR_Word Type_46 = ((MR_Word) ((MR_hl_field(3, Piece_21, (MR_Integer) 1))));
                MR_Word TypeCtorName_47;
                MR_Integer TypeCtorArity_48;
                MR_Word SymNameArity_49;
                MR_Word Var_99;
                MR_String Word_190;
                MR_Word TypeCtor_191;

                parse_tree__prog_type__type_to_ctor_det_2_p_0(Type_46, &TypeCtor_191);
                TypeCtorName_47 = ((MR_Word) ((MR_hl_field(0, TypeCtor_191, (MR_Integer) 0))));
                TypeCtorArity_48 = ((MR_Integer) ((MR_hl_field(0, TypeCtor_191, (MR_Integer) 1))));
                {
                  SymNameArity_49 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, SymNameArity_49, 0) = ((MR_Box) (TypeCtorName_47));
                  MR_hl_field(0, SymNameArity_49, 1) = ((MR_Box) (TypeCtorArity_48));
                }
                Word_190 = parse_tree__write_error_spec__sym_name_arity_to_word_1_f_0(SymNameArity_49);
                {
                  Var_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_99, 0) = ((MR_Box) (Word_190));
                }
                {
                  RevWords1_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, RevWords1_26, 0) = ((MR_Box) (Var_99));
                  MR_hl_field(1, RevWords1_26, 1) = ((MR_Box) (RevWords0_4));
                }
                STATE_VARIABLE_Paras_110_110 = STATE_VARIABLE_Paras_0_5;
              }
              break;
            case (MR_Integer) 28:
              {
                MR_Word PredOrFunc_50 = ((MR_Unsigned) ((MR_hl_field(3, Piece_21, (MR_Integer) 1))) & (MR_Integer) 1);
                MR_Word Var_100;
                MR_String Word_192;

                Word_192 = mdbcomp__prim_data__pred_or_func_to_string_1_f_0(PredOrFunc_50);
                {
                  Var_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_100, 0) = ((MR_Box) (Word_192));
                }
                {
                  RevWords1_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, RevWords1_26, 0) = ((MR_Box) (Var_100));
                  MR_hl_field(1, RevWords1_26, 1) = ((MR_Box) (RevWords0_4));
                }
                STATE_VARIABLE_Paras_110_110 = STATE_VARIABLE_Paras_0_5;
              }
              break;
            case (MR_Integer) 29:
              {
                MR_Word Purity_51 = ((MR_Unsigned) ((MR_hl_field(3, Piece_21, (MR_Integer) 1))) & (MR_Integer) 3);
                MR_Word Var_101;
                MR_String Word_193;

                Word_193 = parse_tree__write_error_spec__purity_to_string_1_f_0(Purity_51);
                {
                  Var_101 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_101, 0) = ((MR_Box) (Word_193));
                }
                {
                  RevWords1_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, RevWords1_26, 0) = ((MR_Box) (Var_101));
                  MR_hl_field(1, RevWords1_26, 1) = ((MR_Box) (RevWords0_4));
                }
                STATE_VARIABLE_Paras_110_110 = STATE_VARIABLE_Paras_0_5;
              }
              break;
            case (MR_Integer) 30:
              {
                MR_Word Var_102;
                MR_String Word_194;
                MR_Word Purity_195 = ((MR_Unsigned) ((MR_hl_field(3, Piece_21, (MR_Integer) 1))) & (MR_Integer) 3);

                Word_194 = parse_tree__write_error_spec__a_purity_to_string_1_f_0(Purity_195);
                {
                  Var_102 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_102, 0) = ((MR_Box) (Word_194));
                }
                {
                  RevWords1_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, RevWords1_26, 0) = ((MR_Box) (Var_102));
                  MR_hl_field(1, RevWords1_26, 1) = ((MR_Box) (RevWords0_4));
                }
                STATE_VARIABLE_Paras_110_110 = STATE_VARIABLE_Paras_0_5;
              }
              break;
            case (MR_Integer) 31:
              {
                MR_String DeclName_52 = ((MR_String) ((MR_hl_field(3, Piece_21, (MR_Integer) 1))));
                MR_String Var_103;
                MR_Word Var_105;
                MR_String Word_196;

                Var_103 = mercury__string__f_43_43_2_f_0((MR_String) ":- ", DeclName_52);
                Word_196 = parse_tree__error_spec__add_quotes_1_f_0(Var_103);
                {
                  Var_105 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_105, 0) = ((MR_Box) (Word_196));
                }
                {
                  RevWords1_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, RevWords1_26, 0) = ((MR_Box) (Var_105));
                  MR_hl_field(1, RevWords1_26, 1) = ((MR_Box) (RevWords0_4));
                }
                STATE_VARIABLE_Paras_110_110 = STATE_VARIABLE_Paras_0_5;
              }
              break;
            case (MR_Integer) 32:
              {
                MR_String PragmaName_53 = ((MR_String) ((MR_hl_field(3, Piece_21, (MR_Integer) 1))));
                MR_String Var_106;
                MR_Word Var_108;
                MR_String Word_197;

                Var_106 = mercury__string__f_43_43_2_f_0((MR_String) ":- pragma ", PragmaName_53);
                Word_197 = parse_tree__error_spec__add_quotes_1_f_0(Var_106);
                {
                  Var_108 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_108, 0) = ((MR_Box) (Word_197));
                }
                {
                  RevWords1_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, RevWords1_26, 0) = ((MR_Box) (Var_108));
                  MR_hl_field(1, RevWords1_26, 1) = ((MR_Box) (RevWords0_4));
                }
                STATE_VARIABLE_Paras_110_110 = STATE_VARIABLE_Paras_0_5;
              }
              break;
            case (MR_Integer) 33:
              {
                MR_String LP_56 = ((MR_String) ((MR_hl_field(3, Piece_21, (MR_Integer) 1))));
                MR_Word LPWordKind_57 = ((MR_Unsigned) ((MR_hl_field(3, Piece_21, (MR_Integer) 2))) & (MR_Integer) 1);
                MR_Word LPWord_58;
                MR_Word Var_123;
                MR_Word Var_124;
                MR_Word SCUnits_200;

                switch (LPWordKind_57) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      LPWord_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, LPWord_58, 0) = ((MR_Box) (LP_56));
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      LPWord_58 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, LPWord_58, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(3, LPWord_58, 1) = ((MR_Box) (LP_56));
                    }
                    break;
                }
                {
                  Var_123 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_123, 0) = ((MR_Box) (LPWord_58));
                  MR_hl_field(1, Var_123, 1) = ((MR_Box) (RevWords0_4));
                }
                SCUnits_200 = parse_tree__write_error_spec__rev_words_to_sc_units_1_f_0(Var_123);
                {
                  Var_124 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_124, 0) = ((MR_Box) (SCUnits_200));
                  MR_hl_field(0, Var_124, 1) = ((MR_Box) ((MR_Integer) 0));
                  MR_hl_field(0, Var_124, 2) = ((MR_Box) ((MR_Integer) 1));
                  MR_hl_field(0, Var_124, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                }
                parse_tree__write_error_spec__add_paragraph_3_p_0(Var_124, STATE_VARIABLE_Paras_0_5, &STATE_VARIABLE_Paras_110_110);
                RevWords1_26 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 34:
              {
                MR_String RP_59 = ((MR_String) ((MR_hl_field(3, Piece_21, (MR_Integer) 1))));
                MR_Word RPWordKind_60 = ((MR_Unsigned) ((MR_hl_field(3, Piece_21, (MR_Integer) 2))) & (MR_Integer) 1);
                MR_Word RPWord_61;
                MR_Word Var_129;
                MR_Word SCUnits_201;

                SCUnits_201 = parse_tree__write_error_spec__rev_words_to_sc_units_1_f_0(RevWords0_4);
                {
                  Var_129 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_129, 0) = ((MR_Box) (SCUnits_201));
                  MR_hl_field(0, Var_129, 1) = ((MR_Box) ((MR_Integer) 0));
                  MR_hl_field(0, Var_129, 2) = ((MR_Box) ((MR_Integer) -1));
                  MR_hl_field(0, Var_129, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                }
                parse_tree__write_error_spec__add_paragraph_3_p_0(Var_129, STATE_VARIABLE_Paras_0_5, &STATE_VARIABLE_Paras_110_110);
                switch (RPWordKind_60) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      RPWord_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, RPWord_61, 0) = ((MR_Box) (RP_59));
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      RPWord_61 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, RPWord_61, 0) = ((MR_Box) (RP_59));
                    }
                    break;
                }
                {
                  RevWords1_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, RevWords1_26, 0) = ((MR_Box) (RPWord_61));
                  MR_hl_field(1, RevWords1_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              }
              break;
            case (MR_Integer) 35:
              {
                MR_Integer IndentDelta_55 = ((MR_Integer) ((MR_hl_field(3, Piece_21, (MR_Integer) 1))));
                MR_Word Var_114;
                MR_Word SCUnits_198;

                SCUnits_198 = parse_tree__write_error_spec__rev_words_to_sc_units_1_f_0(RevWords0_4);
                {
                  Var_114 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_114, 0) = ((MR_Box) (SCUnits_198));
                  MR_hl_field(0, Var_114, 1) = ((MR_Box) ((MR_Integer) 0));
                  MR_hl_field(0, Var_114, 2) = ((MR_Box) (IndentDelta_55));
                  MR_hl_field(0, Var_114, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                }
                parse_tree__write_error_spec__add_paragraph_3_p_0(Var_114, STATE_VARIABLE_Paras_0_5, &STATE_VARIABLE_Paras_110_110);
                RevWords1_26 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 36:
              {
                MR_Word ColourName_62 = ((MR_Unsigned) ((MR_hl_field(3, Piece_21, (MR_Integer) 1))) & (MR_Integer) 1);

                if ((ColourDb_1 == (MR_Word) ((MR_Unsigned) 0U)))
                  RevWords1_26 = RevWords0_4;
                else
                {
                  MR_Word ColourNameMap_63 = (MR_Word) (MR_body((MR_Word) (ColourDb_1), (MR_Integer) 1));
                  MR_Word Colour_64;
                  MR_Word Var_135;
                  MR_Word Var_252 = ((MR_Word) ((MR_hl_field(0, ColourNameMap_63, (MR_Integer) 1))));
                  MR_Word Var_253 = ((MR_Word) ((MR_hl_field(0, ColourNameMap_63, (MR_Integer) 0))));

                  switch (ColourName_62) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      Colour_64 = Var_252;
                      break;
                    case (MR_Integer) 0:
                      Colour_64 = Var_253;
                      break;
                  }
                  {
                    Var_135 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_135, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                    MR_hl_field(3, Var_135, 1) = ((MR_Box) (Colour_64));
                  }
                  {
                    RevWords1_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, RevWords1_26, 0) = ((MR_Box) (Var_135));
                    MR_hl_field(1, RevWords1_26, 1) = ((MR_Box) (RevWords0_4));
                  }
                }
                STATE_VARIABLE_Paras_110_110 = STATE_VARIABLE_Paras_0_5;
              }
              break;
            case (MR_Integer) 37:
              {
                RevWords1_26 = RevWords0_4;
                STATE_VARIABLE_Paras_110_110 = STATE_VARIABLE_Paras_0_5;
              }
              break;
          }
          break;
      }
      parse_tree__write_error_spec__update_first_in_msg_after_piece_3_p_0(Piece_21, FirstInMsg_2, &TailFirstInMsg_70);
      // direct tailcall eliminated
      ;
      next_value_of_FirstInMsg_2 = TailFirstInMsg_70;
      next_value_of_HeadVar__3_3 = Pieces_22;
      next_value_of_RevWords0_4 = RevWords1_26;
      next_value_of_STATE_VARIABLE_Paras_0_5 = STATE_VARIABLE_Paras_110_110;
      FirstInMsg_2 = next_value_of_FirstInMsg_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      RevWords0_4 = next_value_of_RevWords0_4;
      STATE_VARIABLE_Paras_0_5 = next_value_of_STATE_VARIABLE_Paras_0_5;
      continue;
    }
    break;
  }
}

static MR_String MR_CALL 
parse_tree__write_error_spec__a_purity_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2;

  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
      HeadVar__2_2 = (MR_String) "an impure";
      break;
    case (MR_Integer) 0:
      HeadVar__2_2 = (MR_String) "a pure";
      break;
    case (MR_Integer) 1:
      HeadVar__2_2 = (MR_String) "a semipure";
      break;
  }
  return HeadVar__2_2;
}

static MR_String MR_CALL 
parse_tree__write_error_spec__purity_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2;

  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
      HeadVar__2_2 = (MR_String) "impure";
      break;
    case (MR_Integer) 0:
      HeadVar__2_2 = (MR_String) "pure";
      break;
    case (MR_Integer) 1:
      HeadVar__2_2 = (MR_String) "semipure";
      break;
  }
  return HeadVar__2_2;
}

static MR_String MR_CALL 
parse_tree__write_error_spec__nth_fixed_str_1_f_0(
  MR_Integer N_3)
{
  MR_bool succeeded;
  MR_String Str_4;
  MR_String StrPrime_5;

  if ((((MR_Unsigned) ((MR_Integer) ((MR_Unsigned) N_3 - (MR_Unsigned) 1))) <= ((MR_Unsigned) 9)))
  {
    StrPrime_5 = ((&parse_tree__write_error_spec_vector_common_3[11 + (MR_Integer) ((MR_Unsigned) N_3 - (MR_Unsigned) 1)]))->parse_tree__write_error_spec__vector_common_type_3_0__vct_3_f_0;
    succeeded = MR_TRUE;
  }
  else
    succeeded = MR_FALSE;
  if (succeeded)
    Str_4 = StrPrime_5;
  else
  {
    MR_String NStr_6;
    MR_Integer LastDigit_7;

    NStr_6 = mercury__string__int_to_string_1_f_0(N_3);
    LastDigit_7 = mercury__int__mod_2_f_0(N_3, (MR_Integer) 10);
    succeeded = (N_3 > (MR_Integer) 20);
    if (succeeded)
      succeeded = (LastDigit_7 == (MR_Integer) 2);
    if (succeeded)
      Str_4 = mercury__string__f_43_43_2_f_0(NStr_6, (MR_String) "nd");
    else
    {
      succeeded = (N_3 > (MR_Integer) 20);
      if (succeeded)
        succeeded = (LastDigit_7 == (MR_Integer) 3);
      if (succeeded)
        Str_4 = mercury__string__f_43_43_2_f_0(NStr_6, (MR_String) "rd");
      else
        Str_4 = mercury__string__f_43_43_2_f_0(NStr_6, (MR_String) "th");
    }
  }
  return Str_4;
}

static MR_String MR_CALL 
parse_tree__write_error_spec__int_name_str_1_f_0(
  MR_Integer N_3)
{
  MR_bool succeeded;
  MR_String Str_4;
  MR_String StrPrime_5;

  if ((((MR_Unsigned) N_3) <= ((MR_Unsigned) 10)))
  {
    StrPrime_5 = ((&parse_tree__write_error_spec_vector_common_3[0 + N_3]))->parse_tree__write_error_spec__vector_common_type_3_0__vct_3_f_0;
    succeeded = MR_TRUE;
  }
  else
    succeeded = MR_FALSE;
  if (succeeded)
    Str_4 = StrPrime_5;
  else
    Str_4 = mercury__string__int_to_string_1_f_0(N_3);
  return Str_4;
}

static MR_String MR_CALL 
parse_tree__write_error_spec__sym_name_arity_to_word_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2;
  MR_Word SymName_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Integer Arity_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  MR_String Var_5;
  MR_String Var_6;
  MR_String Var_7;
  MR_String Var_9;

  Var_6 = mdbcomp__sym_name__sym_name_to_string_1_f_0(SymName_3);
  Var_5 = parse_tree__error_spec__add_quotes_1_f_0(Var_6);
  Var_9 = mercury__string__int_to_string_1_f_0(Arity_4);
  Var_7 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_9);
  HeadVar__2_2 = mercury__string__f_43_43_2_f_0(Var_5, Var_7);
  return HeadVar__2_2;
}

static MR_String MR_CALL 
parse_tree__write_error_spec__name_arity_to_word_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2;
  MR_String Name_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Integer Arity_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  MR_String Var_5;
  MR_String Var_6;
  MR_String Var_8;

  Var_5 = parse_tree__error_spec__add_quotes_1_f_0(Name_3);
  Var_8 = mercury__string__int_to_string_1_f_0(Arity_4);
  Var_6 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_8);
  HeadVar__2_2 = mercury__string__f_43_43_2_f_0(Var_5, Var_6);
  return HeadVar__2_2;
}

static MR_String MR_CALL 
parse_tree__write_error_spec__sym_name_to_word_1_f_0(
  MR_Word SymName_3)
{
  MR_String HeadVar__2_2;
  MR_String Var_4;

  Var_4 = mdbcomp__sym_name__sym_name_to_string_1_f_0(SymName_3);
  HeadVar__2_2 = parse_tree__error_spec__add_quotes_1_f_0(Var_4);
  return HeadVar__2_2;
}

static void MR_CALL 
parse_tree__write_error_spec__update_first_in_msg_after_piece_3_p_0(
  MR_Word Piece_4,
  MR_Word FirstInMsg_5,
  MR_Word * TailFirstInMsg_6)
{
  switch (MR_tag((MR_Word) Piece_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Piece_4)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 2:
        case (MR_Integer) 4:
          *TailFirstInMsg_6 = FirstInMsg_5;
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 3:
          *TailFirstInMsg_6 = (MR_Integer) 0;
          break;
      }
      break;
    case (MR_Integer) 1:
      *TailFirstInMsg_6 = FirstInMsg_5;
      break;
    case (MR_Integer) 2:
      *TailFirstInMsg_6 = (MR_Integer) 1;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Piece_4, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
        case (MR_Integer) 2:
        case (MR_Integer) 3:
        case (MR_Integer) 4:
        case (MR_Integer) 5:
        case (MR_Integer) 6:
        case (MR_Integer) 7:
        case (MR_Integer) 8:
        case (MR_Integer) 9:
        case (MR_Integer) 10:
        case (MR_Integer) 11:
        case (MR_Integer) 12:
        case (MR_Integer) 13:
        case (MR_Integer) 14:
        case (MR_Integer) 15:
        case (MR_Integer) 16:
        case (MR_Integer) 17:
        case (MR_Integer) 18:
        case (MR_Integer) 19:
        case (MR_Integer) 20:
        case (MR_Integer) 21:
        case (MR_Integer) 22:
        case (MR_Integer) 23:
        case (MR_Integer) 24:
        case (MR_Integer) 25:
        case (MR_Integer) 26:
        case (MR_Integer) 27:
        case (MR_Integer) 28:
        case (MR_Integer) 29:
        case (MR_Integer) 30:
        case (MR_Integer) 31:
        case (MR_Integer) 32:
        case (MR_Integer) 33:
        case (MR_Integer) 34:
          *TailFirstInMsg_6 = (MR_Integer) 1;
          break;
        case (MR_Integer) 35:
        case (MR_Integer) 36:
        case (MR_Integer) 37:
          *TailFirstInMsg_6 = FirstInMsg_5;
          break;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__write_error_spec__break_into_words_3_p_0(
  MR_String String_4,
  MR_Word Words0_5,
  MR_Word * Words_6)
{
  parse_tree__write_error_spec__break_into_words_from_4_p_0(String_4, (MR_Integer) 0, Words0_5, Words_6);
}

static void MR_CALL 
parse_tree__write_error_spec__break_into_words_from_4_p_0(
  MR_String String_5,
  MR_Integer Cur_6,
  MR_Word Words0_7,
  MR_Word * Words_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer Start_9;

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = parse_tree__write_error_spec__find_word_start_3_p_0(String_5, Cur_6, &Start_9);
    if (succeeded)
    {
      MR_Integer End_10;
      MR_String WordStr_11;
      MR_Word Words1_12;
      MR_Word Var_13;
      MR_Integer next_value_of_Cur_6;
      MR_Word next_value_of_Words0_7;

      parse_tree__write_error_spec__find_word_end_3_p_0(String_5, Start_9, &End_10);
      mercury__string__between_4_p_0(String_5, Start_9, End_10, &WordStr_11);
      {
        Var_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_13, 0) = ((MR_Box) (WordStr_11));
      }
      {
        Words1_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Words1_12, 0) = ((MR_Box) (Var_13));
        MR_hl_field(1, Words1_12, 1) = ((MR_Box) (Words0_7));
      }
      // direct tailcall eliminated
      ;
      next_value_of_Cur_6 = End_10;
      next_value_of_Words0_7 = Words1_12;
      Cur_6 = next_value_of_Cur_6;
      Words0_7 = next_value_of_Words0_7;
      continue;
    }
    else
      *Words_8 = Words0_7;
    break;
  }
}

static void MR_CALL 
parse_tree__write_error_spec__find_word_end_3_p_0(
  MR_String String_4,
  MR_Integer Cur_5,
  MR_Integer * WordEnd_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer Next_7;
    MR_Char Char_8;

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = mercury__string__unsafe_index_next_4_p_0(String_4, Cur_5, &Next_7, &Char_8);
    if (succeeded)
    {
      succeeded = mercury__char__is_whitespace_1_p_0(Char_8);
      if (succeeded)
        *WordEnd_6 = Cur_5;
      else
      {
        MR_Integer next_value_of_Cur_5 = Next_7;

        // direct tailcall eliminated
        ;
        Cur_5 = next_value_of_Cur_5;
        continue;
      }
    }
    else
      *WordEnd_6 = Cur_5;
    break;
  }
}

static MR_bool MR_CALL 
parse_tree__write_error_spec__find_word_start_3_p_0(
  MR_String String_4,
  MR_Integer Cur_5,
  MR_Integer * WordStart_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer Next_7;
    MR_Char Char_8;

    // setup for model_semi tailcalls optimized into a loop
    ;
    succeeded = mercury__string__unsafe_index_next_4_p_0(String_4, Cur_5, &Next_7, &Char_8);
    if (succeeded)
    {
      succeeded = mercury__char__is_whitespace_1_p_0(Char_8);
      if (succeeded)
      {
        MR_Integer next_value_of_Cur_5 = Next_7;

        // direct tailcall eliminated
        ;
        Cur_5 = next_value_of_Cur_5;
        continue;
      }
      else
      {
        *WordStart_6 = Cur_5;
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
    break;
  }
}

static MR_Word MR_CALL 
parse_tree__write_error_spec__rev_words_to_sc_units_1_f_0(
  MR_Word RevWords_3)
{
  MR_Word SCUnits_4;
  MR_Word PorPs_5;
  MR_Word Var_6;

  Var_6 = parse_tree__write_error_spec__rev_words_to_rev_plain_or_prefix_1_f_0(RevWords_3);
  PorPs_5 = mercury__list__reverse_1_f_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_plain_or_prefix_0), Var_6);
  SCUnits_4 = parse_tree__write_error_spec__join_prefixes_1_f_0(PorPs_5);
  return SCUnits_4;
}

static MR_Word MR_CALL 
parse_tree__write_error_spec__join_prefixes_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Head_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Tail_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word TailSCUnits_6;

    TailSCUnits_6 = parse_tree__write_error_spec__join_prefixes_1_f_0(Tail_4);
    switch (MR_tag((MR_Word) Head_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Head_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            if ((TailSCUnits_6 == (MR_Word) ((MR_Unsigned) 0U)))
              HeadVar__2_2 = TailSCUnits_6;
            else
            {
              MR_Word FirstTailSCUnits_13 = ((MR_Word) ((MR_hl_field(1, TailSCUnits_6, (MR_Integer) 0))));
              MR_Word LaterTailSCUnits_14 = ((MR_Word) ((MR_hl_field(1, TailSCUnits_6, (MR_Integer) 1))));
              MR_Word Var_22;

              switch (MR_tag((MR_Word) FirstTailSCUnits_13)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 2:
                  Var_22 = FirstTailSCUnits_13;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_String String0_25 = ((MR_String) ((MR_hl_field(1, FirstTailSCUnits_13, (MR_Integer) 0))));
                    MR_String Var_27;

                    Var_27 = mercury__string__uncapitalize_first_1_f_0(String0_25);
                    {
                      Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_22, 0) = ((MR_Box) (Var_27));
                    }
                  }
                  break;
              }
              {
                HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Var_22));
                MR_hl_field(1, HeadVar__2_2, 1) = ((MR_Box) (LaterTailSCUnits_14));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(1, HeadVar__2_2, 1) = ((MR_Box) (TailSCUnits_6));
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String String_7 = ((MR_String) ((MR_hl_field(1, Head_3, (MR_Integer) 0))));
          MR_Word Var_16;

          {
            Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_16, 0) = ((MR_Box) (String_7));
          }
          {
            HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Var_16));
            MR_hl_field(1, HeadVar__2_2, 1) = ((MR_Box) (TailSCUnits_6));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String Prefix_8 = ((MR_String) ((MR_hl_field(2, Head_3, (MR_Integer) 0))));

          if ((TailSCUnits_6 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word Var_21;

            {
              Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_21, 0) = ((MR_Box) (Prefix_8));
            }
            {
              HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Var_21));
              MR_hl_field(1, HeadVar__2_2, 1) = ((MR_Box) (TailSCUnits_6));
            }
          }
          else
          {
            MR_Word HeadTailSCUnit_9 = ((MR_Word) ((MR_hl_field(1, TailSCUnits_6, (MR_Integer) 0))));
            MR_Word TailTailSCUnits_10 = ((MR_Word) ((MR_hl_field(1, TailSCUnits_6, (MR_Integer) 1))));

            switch (MR_tag((MR_Word) HeadTailSCUnit_9)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 2:
                {
                  MR_Word Var_19;

                  {
                    Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_19, 0) = ((MR_Box) (Prefix_8));
                  }
                  {
                    HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Var_19));
                    MR_hl_field(1, HeadVar__2_2, 1) = ((MR_Box) (TailSCUnits_6));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_String HeadTailStr_11 = ((MR_String) ((MR_hl_field(1, HeadTailSCUnit_9, (MR_Integer) 0))));
                  MR_Word Var_17;
                  MR_String Var_18;

                  Var_18 = mercury__string__f_43_43_2_f_0(Prefix_8, HeadTailStr_11);
                  {
                    Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_17, 0) = ((MR_Box) (Var_18));
                  }
                  {
                    HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Var_17));
                    MR_hl_field(1, HeadVar__2_2, 1) = ((MR_Box) (TailTailSCUnits_10));
                  }
                }
                break;
            }
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word Colour_15 = ((MR_Word) ((MR_hl_field(3, Head_3, (MR_Integer) 0))));
          MR_Word Var_23;

          {
            Var_23 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Var_23, 0) = ((MR_Box) (Colour_15));
          }
          {
            HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Var_23));
            MR_hl_field(1, HeadVar__2_2, 1) = ((MR_Box) (TailSCUnits_6));
          }
        }
        break;
    }
  }
  return HeadVar__2_2;
}

static MR_Word MR_CALL 
parse_tree__write_error_spec__rev_words_to_rev_plain_or_prefix_1_f_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    MR_Word HeadVar__2_2;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Word_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Words_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));

      switch (MR_tag((MR_Word) Word_3)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(Word_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_20;

                Var_20 = parse_tree__write_error_spec__rev_words_to_rev_plain_or_prefix_1_f_0(Words_4);
                {
                  HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(1, HeadVar__2_2, 1) = ((MR_Box) (Var_20));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_18;

                Var_18 = parse_tree__write_error_spec__rev_words_to_rev_plain_or_prefix_1_f_0(Words_4);
                {
                  HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                  MR_hl_field(1, HeadVar__2_2, 1) = ((MR_Box) (Var_18));
                }
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String String_6 = ((MR_String) ((MR_hl_field(1, Word_3, (MR_Integer) 0))));
            MR_Word Var_13;
            MR_Word Var_14;

            {
              Var_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_13, 0) = ((MR_Box) (String_6));
            }
            Var_14 = parse_tree__write_error_spec__rev_words_to_rev_plain_or_prefix_1_f_0(Words_4);
            {
              HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Var_13));
              MR_hl_field(1, HeadVar__2_2, 1) = ((MR_Box) (Var_14));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String Prefix_8 = ((MR_String) ((MR_hl_field(2, Word_3, (MR_Integer) 0))));
            MR_Word Var_21;
            MR_Word Var_22;

            {
              Var_21 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Var_21, 0) = ((MR_Box) (Prefix_8));
            }
            Var_22 = parse_tree__write_error_spec__rev_words_to_rev_plain_or_prefix_1_f_0(Words_4);
            {
              HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Var_21));
              MR_hl_field(1, HeadVar__2_2, 1) = ((MR_Box) (Var_22));
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, Word_3, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String Suffix_9 = ((MR_String) ((MR_hl_field(3, Word_3, (MR_Integer) 1))));

                if ((Words_4 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word Var_23;

                  {
                    Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_23, 0) = ((MR_Box) (Suffix_9));
                  }
                  {
                    HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Var_23));
                    MR_hl_field(1, HeadVar__2_2, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                }
                else
                {
                  MR_Word Var_58 = ((MR_Word) ((MR_hl_field(1, Words_4, (MR_Integer) 1))));
                  MR_Word Var_59 = ((MR_Word) ((MR_hl_field(1, Words_4, (MR_Integer) 0))));

                  switch (MR_tag((MR_Word) Var_59)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      switch (MR_unmkbody(Var_59)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            MR_Word NewWords_11;
                            MR_Word Var_40;
                            MR_String Var_41;
                            MR_Word next_value_of_HeadVar__1_1;

                            Var_41 = mercury__string__uncapitalize_first_1_f_0(Suffix_9);
                            {
                              Var_40 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(3, Var_40, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                              MR_hl_field(3, Var_40, 1) = ((MR_Box) (Var_41));
                            }
                            {
                              NewWords_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, NewWords_11, 0) = ((MR_Box) (Var_40));
                              MR_hl_field(1, NewWords_11, 1) = ((MR_Box) (Var_58));
                            }
                            // direct tailcall eliminated
                            ;
                            next_value_of_HeadVar__1_1 = NewWords_11;
                            HeadVar__1_1 = next_value_of_HeadVar__1_1;
                            continue;
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_Word Var_31;
                            MR_Word Var_32;
                            MR_Word Var_34;

                            {
                              Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, Var_31, 0) = ((MR_Box) (Suffix_9));
                            }
                            Var_34 = parse_tree__write_error_spec__rev_words_to_rev_plain_or_prefix_1_f_0(Var_58);
                            {
                              Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, Var_32, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                              MR_hl_field(1, Var_32, 1) = ((MR_Box) (Var_34));
                            }
                            {
                              HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Var_31));
                              MR_hl_field(1, HeadVar__2_2, 1) = ((MR_Box) (Var_32));
                            }
                          }
                          break;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word Var_36;
                        MR_String Var_37;
                        MR_Word Var_38;
                        MR_String String_52 = ((MR_String) ((MR_hl_field(1, Var_59, (MR_Integer) 0))));

                        Var_37 = mercury__string__f_43_43_2_f_0(String_52, Suffix_9);
                        {
                          Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_36, 0) = ((MR_Box) (Var_37));
                        }
                        Var_38 = parse_tree__write_error_spec__rev_words_to_rev_plain_or_prefix_1_f_0(Var_58);
                        {
                          HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Var_36));
                          MR_hl_field(1, HeadVar__2_2, 1) = ((MR_Box) (Var_38));
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word Var_43;
                        MR_String Var_44;
                        MR_Word Var_45;
                        MR_String Prefix_55 = ((MR_String) ((MR_hl_field(2, Var_59, (MR_Integer) 0))));

                        Var_44 = mercury__string__f_43_43_2_f_0(Prefix_55, Suffix_9);
                        {
                          Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_43, 0) = ((MR_Box) (Var_44));
                        }
                        Var_45 = parse_tree__write_error_spec__rev_words_to_rev_plain_or_prefix_1_f_0(Var_58);
                        {
                          HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Var_43));
                          MR_hl_field(1, HeadVar__2_2, 1) = ((MR_Box) (Var_45));
                        }
                      }
                      break;
                    case (MR_Integer) 3:
                      switch (((MR_Integer) ((MR_hl_field(3, Var_59, (MR_Integer) 0))))) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            MR_String MoreSuffix_12 = ((MR_String) ((MR_hl_field(3, Var_59, (MR_Integer) 1))));
                            MR_Word Var_47;
                            MR_Word Var_48;
                            MR_String Var_49;
                            MR_Word next_value_of_HeadVar__1_1;

                            Var_49 = mercury__string__f_43_43_2_f_0(MoreSuffix_12, Suffix_9);
                            {
                              Var_48 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(3, Var_48, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                              MR_hl_field(3, Var_48, 1) = ((MR_Box) (Var_49));
                            }
                            {
                              Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, Var_47, 0) = ((MR_Box) (Var_48));
                              MR_hl_field(1, Var_47, 1) = ((MR_Box) (Var_58));
                            }
                            // direct tailcall eliminated
                            ;
                            next_value_of_HeadVar__1_1 = Var_47;
                            HeadVar__1_1 = next_value_of_HeadVar__1_1;
                            continue;
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_Word Var_26;
                            MR_Word Var_27;
                            MR_Word Var_28;
                            MR_Word Var_29;
                            MR_Word Colour_50 = ((MR_Word) ((MR_hl_field(3, Var_59, (MR_Integer) 1))));

                            {
                              Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, Var_26, 0) = ((MR_Box) (Suffix_9));
                            }
                            {
                              Var_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(3, Var_28, 0) = ((MR_Box) (Colour_50));
                            }
                            Var_29 = parse_tree__write_error_spec__rev_words_to_rev_plain_or_prefix_1_f_0(Var_58);
                            {
                              Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, Var_27, 0) = ((MR_Box) (Var_28));
                              MR_hl_field(1, Var_27, 1) = ((MR_Box) (Var_29));
                            }
                            {
                              HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Var_26));
                              MR_hl_field(1, HeadVar__2_2, 1) = ((MR_Box) (Var_27));
                            }
                          }
                          break;
                      }
                      break;
                  }
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Colour_7 = ((MR_Word) ((MR_hl_field(3, Word_3, (MR_Integer) 1))));
                MR_Word Var_15;
                MR_Word Var_16;

                {
                  Var_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_15, 0) = ((MR_Box) (Colour_7));
                }
                Var_16 = parse_tree__write_error_spec__rev_words_to_rev_plain_or_prefix_1_f_0(Words_4);
                {
                  HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Var_15));
                  MR_hl_field(1, HeadVar__2_2, 1) = ((MR_Box) (Var_16));
                }
              }
              break;
          }
          break;
      }
    }
    return HeadVar__2_2;
    break;
  }
}

static void MR_CALL 
parse_tree__write_error_spec__add_paragraph_3_p_0(
  MR_Word Para_4,
  MR_Word STATE_VARIABLE_Paras_0_10,
  MR_Word * STATE_VARIABLE_Paras_11)
{
  MR_bool succeeded;
  MR_Word Strings_6 = ((MR_Word) ((MR_hl_field(0, Para_4, (MR_Integer) 0))));
  MR_Integer NumBlankLines_7 = ((MR_Integer) ((MR_hl_field(0, Para_4, (MR_Integer) 1))));
  MR_Integer IndentDelta_8 = ((MR_Integer) ((MR_hl_field(0, Para_4, (MR_Integer) 2))));
  MR_Word ParaParen_9 = ((MR_Unsigned) ((MR_hl_field(0, Para_4, (MR_Integer) 3))) & (MR_Integer) 3);

  succeeded = (Strings_6 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    succeeded = (NumBlankLines_7 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = (IndentDelta_8 == (MR_Integer) 0);
      if (succeeded)
        succeeded = (ParaParen_9 == (MR_Integer) 0);
    }
  }
  if (succeeded)
    *STATE_VARIABLE_Paras_11 = STATE_VARIABLE_Paras_0_10;
  else
    *STATE_VARIABLE_Paras_11 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_paragraph_0), STATE_VARIABLE_Paras_0_10, ((MR_Box) (Para_4)));
}

static void MR_CALL 
parse_tree__write_error_spec__write_msg_lines_5_p_0(
  MR_Word HeadVar__1_1,
  MR_String PrefixStr_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Line_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Lines_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_String LineWordsStr_19;
      MR_Word next_value_of_HeadVar__3_3;

      LineWordsStr_19 = parse_tree__write_error_spec__convert_line_words_to_string_1_f_0(Line_13);
      succeeded = (strcmp(LineWordsStr_19, (MR_String) "") == 0);
      if (succeeded)
      {
        mercury__io__write_string_4_p_0(HeadVar__1_1, PrefixStr_2);
        mercury__io__write_string_4_p_0(HeadVar__1_1, (MR_String) "\n");
      }
      else
      {
        MR_Unsigned LineIndent_20 = ((MR_Unsigned) ((MR_hl_field(0, Line_13, (MR_Integer) 1))));
        MR_String IndentStr_21;

        IndentStr_21 = libs__indent__indent2_string_1_f_0(LineIndent_20);
        mercury__io__write_string_4_p_0(HeadVar__1_1, PrefixStr_2);
        mercury__io__write_string_4_p_0(HeadVar__1_1, IndentStr_21);
        mercury__io__write_string_4_p_0(HeadVar__1_1, LineWordsStr_19);
        mercury__io__write_string_4_p_0(HeadVar__1_1, (MR_String) "\n");
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Lines_14;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

static MR_String MR_CALL 
parse_tree__write_error_spec__convert_line_words_to_string_1_f_0(
  MR_Word Line_3)
{
  MR_bool succeeded;
  MR_String Str_4;
  MR_String LineWordsStr_7 = ((MR_String) ((MR_hl_field(0, Line_3, (MR_Integer) 2))));
  MR_Word LineEndReset_9 = ((MR_Unsigned) ((MR_hl_field(0, Line_3, (MR_Integer) 4))) & (MR_Integer) 1);
  MR_Word StartColourStack_10 = ((MR_Word) ((MR_hl_field(0, Line_3, (MR_Integer) 5))));

  succeeded = (strcmp(LineWordsStr_7, (MR_String) "") == 0);
  if (succeeded)
    Str_4 = (MR_String) "";
  else
  {
    MR_String StartColourStr_13;
    MR_String EndColourResetStr_14;
    MR_String Var_16;
    MR_Word StartColour_12;
    MR_Box conv0_StartColour_12;

    succeeded = mercury__stack__top_2_p_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_color_0), StartColourStack_10, &conv0_StartColour_12);
    if (succeeded)
    {
      StartColour_12 = ((MR_Word) (conv0_StartColour_12));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      if ((StartColour_12 == (MR_Word) ((MR_Unsigned) 0U)))
        StartColourStr_13 = (MR_String) "\033[39;49m";
      else
      {
        uint8_t ColourNum_18 = ((uint8_t) (MR_Word) (MR_hl_field(1, StartColour_12, (MR_Integer) 0)));
        MR_Integer Var_23;
        MR_String Var_27;
        MR_String Var_34;

        Var_23 = mercury__uint8__cast_to_int_1_f_0(ColourNum_18);
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__write_error_spec_scalar_common_2[2]), Var_23, &Var_27);
        Var_34 = mercury__string__f_43_43_2_f_0(Var_27, (MR_String) "m");
        StartColourStr_13 = mercury__string__f_43_43_2_f_0((MR_String) "\033[38;5;", Var_34);
      }
    else
      StartColourStr_13 = (MR_String) "";
    switch (LineEndReset_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        EndColourResetStr_14 = (MR_String) "\033[39;49m";
        break;
      case (MR_Integer) 0:
        EndColourResetStr_14 = (MR_String) "";
        break;
    }
    Var_16 = mercury__string__f_43_43_2_f_0(LineWordsStr_7, EndColourResetStr_14);
    Str_4 = mercury__string__f_43_43_2_f_0(StartColourStr_13, Var_16);
  }
  return Str_4;
}

static MR_Word MR_CALL 
parse_tree__write_error_spec__line_number_is_in_a_range_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Integer LineNumber_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word HeadVar__3_3;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = (MR_Integer) 0;
    else
    {
      MR_Word Range_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Ranges_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word MaybeMin_9 = ((MR_Word) ((MR_hl_field(0, Range_5, (MR_Integer) 0))));
      MR_Word MaybeMax_10 = ((MR_Word) ((MR_hl_field(0, Range_5, (MR_Integer) 1))));

      if ((MaybeMin_9 == (MR_Word) ((MR_Unsigned) 0U)))
        succeeded = MR_TRUE;
      else
      {
        MR_Integer Min_11 = ((MR_Integer) ((MR_hl_field(1, MaybeMin_9, (MR_Integer) 0))));

        succeeded = (Min_11 <= LineNumber_2);
      }
      if (succeeded)
      {
        if ((MaybeMax_10 == (MR_Word) ((MR_Unsigned) 0U)))
          succeeded = MR_TRUE;
        else
        {
          MR_Integer Max_12 = ((MR_Integer) ((MR_hl_field(1, MaybeMax_10, (MR_Integer) 0))));

          succeeded = (LineNumber_2 <= Max_12);
        }
      }
      if (succeeded)
        HeadVar__3_3 = (MR_Integer) 1;
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = Ranges_6;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return HeadVar__3_3;
    break;
  }
}

static MR_bool MR_CALL 
parse_tree__write_error_spec____Unify____already_printed_verbose_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__write_error_spec____Unify____already_printed_verbose_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__write_error_spec____Compare____already_printed_verbose_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__write_error_spec____Compare____already_printed_verbose_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__write_error_spec____Unify____color_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__write_error_spec____Unify____color_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__write_error_spec____Compare____color_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__write_error_spec____Compare____color_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__write_error_spec____Unify____color_db_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__write_error_spec____Unify____color_db_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__write_error_spec____Compare____color_db_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__write_error_spec____Compare____color_db_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__write_error_spec____Unify____color_name_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__write_error_spec____Unify____color_name_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__write_error_spec____Compare____color_name_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__write_error_spec____Compare____color_name_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__write_error_spec____Unify____color_stack_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__write_error_spec____Unify____color_stack_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__write_error_spec____Compare____color_stack_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__write_error_spec____Compare____color_stack_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__write_error_spec____Unify____context_limited_errors_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__write_error_spec____Unify____context_limited_errors_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__write_error_spec____Compare____context_limited_errors_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__write_error_spec____Compare____context_limited_errors_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__write_error_spec____Unify____error_line_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__write_error_spec____Unify____error_line_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__write_error_spec____Compare____error_line_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__write_error_spec____Compare____error_line_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__write_error_spec____Unify____line_end_reset_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__write_error_spec____Unify____line_end_reset_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__write_error_spec____Compare____line_end_reset_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__write_error_spec____Compare____line_end_reset_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__write_error_spec____Unify____maybe_extra_error_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__write_error_spec____Unify____maybe_extra_error_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__write_error_spec____Compare____maybe_extra_error_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__write_error_spec____Compare____maybe_extra_error_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__write_error_spec____Unify____maybe_first_in_msg_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__write_error_spec____Unify____maybe_first_in_msg_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__write_error_spec____Compare____maybe_first_in_msg_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__write_error_spec____Compare____maybe_first_in_msg_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__write_error_spec____Unify____maybe_lower_next_initial_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__write_error_spec____Unify____maybe_lower_next_initial_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__write_error_spec____Compare____maybe_lower_next_initial_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__write_error_spec____Compare____maybe_lower_next_initial_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__write_error_spec____Unify____maybe_printed_something_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__write_error_spec____Unify____maybe_printed_something_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__write_error_spec____Compare____maybe_printed_something_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__write_error_spec____Compare____maybe_printed_something_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__write_error_spec____Unify____maybe_treat_as_first_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__write_error_spec____Unify____maybe_treat_as_first_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__write_error_spec____Compare____maybe_treat_as_first_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__write_error_spec____Compare____maybe_treat_as_first_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__write_error_spec____Unify____paragraph_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__write_error_spec____Unify____paragraph_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__write_error_spec____Compare____paragraph_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__write_error_spec____Compare____paragraph_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__write_error_spec____Unify____paren_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__write_error_spec____Unify____paren_status_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__write_error_spec____Compare____paren_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__write_error_spec____Compare____paren_status_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__write_error_spec____Unify____plain_or_prefix_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__write_error_spec____Unify____plain_or_prefix_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__write_error_spec____Compare____plain_or_prefix_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__write_error_spec____Compare____plain_or_prefix_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__write_error_spec____Unify____sc_unit_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__write_error_spec____Unify____sc_unit_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__write_error_spec____Compare____sc_unit_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__write_error_spec____Compare____sc_unit_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__write_error_spec____Unify____word_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__write_error_spec____Unify____word_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__write_error_spec____Compare____word_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__write_error_spec____Compare____word_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__parse_tree__write_error_spec__init(void)
{
}

void mercury__parse_tree__write_error_spec__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_already_printed_verbose_0);
	MR_register_type_ctor_info(&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_color_0);
	MR_register_type_ctor_info(&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_color_db_0);
	MR_register_type_ctor_info(&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_color_name_map_0);
	MR_register_type_ctor_info(&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_color_stack_0);
	MR_register_type_ctor_info(&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_context_limited_errors_0);
	MR_register_type_ctor_info(&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_error_line_0);
	MR_register_type_ctor_info(&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_line_end_reset_0);
	MR_register_type_ctor_info(&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_maybe_extra_error_info_0);
	MR_register_type_ctor_info(&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_maybe_first_in_msg_0);
	MR_register_type_ctor_info(&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_maybe_lower_next_initial_0);
	MR_register_type_ctor_info(&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_maybe_printed_something_0);
	MR_register_type_ctor_info(&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_maybe_treat_as_first_0);
	MR_register_type_ctor_info(&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_paragraph_0);
	MR_register_type_ctor_info(&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_paren_status_0);
	MR_register_type_ctor_info(&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_plain_or_prefix_0);
	MR_register_type_ctor_info(&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_sc_unit_0);
	MR_register_type_ctor_info(&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_word_0);
}

void mercury__parse_tree__write_error_spec__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

void mercury__parse_tree__write_error_spec__required_init(void)
{
	parse_tree__write_error_spec__user_init_pred_192_0();
	parse_tree__write_error_spec__user_init_pred_193_0();
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__write_error_spec__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.write_error_spec.
