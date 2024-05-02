/*
** Automatically generated from `write_error_spec.m'
** by the Mercury compiler,
** version rotd-2024-05-02
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
#include "parse_tree.maybe_error.mih"
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




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_error_spec__stack__pti_stack_1__plain_libs__globals__type_ctor_info_color_spec_0;

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

static const MR_PseudoTypeInfo parse_tree__write_error_spec__parse_tree__write_error_spec__field_types_color_name_map_0_0[3];

static const MR_ConstString parse_tree__write_error_spec__parse_tree__write_error_spec__field_names_color_name_map_0_0[3];

static const MR_DuFunctorDesc parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_color_name_map_0_0;

static const MR_DuFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__du_stag_ordered_color_name_map_0_0[1];

static const MR_DuPtagLayout parse_tree__write_error_spec__parse_tree__write_error_spec__du_ptag_ordered_color_name_map_0[1];

static const MR_DuFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__du_name_ordered_color_name_map_0[1];

static const MR_Integer parse_tree__write_error_spec__parse_tree__write_error_spec__functor_number_map_color_name_map_0[1];

static const MR_FA_TypeInfo_Struct1 parse_tree__write_error_spec__stack__ti_stack_1libs__globals__type_ctor_info_color_spec_0;

static const MR_EnumFunctorDesc parse_tree__write_error_spec__parse_tree__write_error_spec__enum_functor_desc_context_limited_errors_0_0;

static const MR_EnumFunctorDesc parse_tree__write_error_spec__parse_tree__write_error_spec__enum_functor_desc_context_limited_errors_0_1;

static const MR_EnumFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__enum_ordinal_ordered_context_limited_errors_0[2];

static const MR_EnumFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__enum_name_ordered_context_limited_errors_0[2];

static const MR_Integer parse_tree__write_error_spec__parse_tree__write_error_spec__functor_number_map_context_limited_errors_0[2];

static const MR_PseudoTypeInfo parse_tree__write_error_spec__parse_tree__write_error_spec__field_types_error_line_0_0[8];

static const MR_ConstString parse_tree__write_error_spec__parse_tree__write_error_spec__field_names_error_line_0_0[8];

static const MR_DuArgLocn parse_tree__write_error_spec__parse_tree__write_error_spec__field_locns_error_line_0_0[8];

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

static MR_String MR_CALL 
parse_tree__write_error_spec__IntroducedFrom__func__find_matching_rp_and_maybe_join__1701__1_1_f_0(
  MR_Word LambdaHeadVar__1_60);

static MR_bool MR_CALL 
parse_tree__write_error_spec__IntroducedFrom__pred__find_matching_rp_and_maybe_join__1686__1_2_p_0(
  MR_Word LPEndCS_15,
  MR_Word RPStartCS_26);

static MR_bool MR_CALL 
parse_tree__write_error_spec__IntroducedFrom__pred__find_matching_rp_and_maybe_join__1679__1_2_p_0(
  MR_Word LPParen_16,
  MR_Word HeadVar__2_43);

static MR_bool MR_CALL 
parse_tree__write_error_spec__IntroducedFrom__pred__get_later_words__1487__1_2_p_0(
  MR_String NextSpace0_2,
  MR_String HeadVar__2_52);

static MR_bool MR_CALL 
parse_tree__write_error_spec__IntroducedFrom__pred__get_later_words__1513__1_2_p_0(
  MR_String NextSpace0_2,
  MR_String HeadVar__2_62);

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
parse_tree__write_error_spec__write_msg_lines_5_p_0(
  MR_Word HeadVar__1_1,
  MR_String PrefixStr_2,
  MR_Word HeadVar__3_3);

static MR_String MR_CALL 
parse_tree__write_error_spec__convert_line_words_to_string_1_f_0(
  MR_Word Line_3);

static void MR_CALL 
parse_tree__write_error_spec__convert_pieces_to_lines_8_p_0(
  MR_Word ColorDb_9,
  MR_Word MaybeMaxWidth_10,
  MR_String ContextStr_11,
  MR_Word TreatAsFirst_12,
  MR_Unsigned FixedIndent_13,
  MR_Word Pieces_14,
  MR_String * PrefixStr_15,
  MR_Word * Lines_16);

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

static MR_Box MR_CALL 
parse_tree__write_error_spec__find_matching_rp_and_maybe_join_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
parse_tree__write_error_spec__find_matching_rp_and_maybe_join_4_p_0_2(
  MR_Box closure_arg);

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
parse_tree__write_error_spec__divide_paragraphs_into_lines_6_p_0(
  MR_Integer AvailLen_7,
  MR_Word TreatAsFirst_8,
  MR_Unsigned CurIndent_9,
  MR_Word Paras_10,
  MR_Word * Lines_11,
  MR_Word ColorStack0_12);

static void MR_CALL 
parse_tree__write_error_spec__get_line_of_words_10_p_0(
  MR_Integer AvailLen_11,
  MR_Word FirstSCUnit_12,
  MR_Word LaterSCUnits0_13,
  MR_Unsigned Indent_14,
  MR_Integer * LineWordsLen_15,
  MR_Word * LineStrs_16,
  MR_Word * RestSCUnits_17,
  MR_Word STATE_VARIABLE_ColorStack_0_29,
  MR_Word * STATE_VARIABLE_ColorStack_30,
  MR_Word * LineEndReset_19);

static void MR_CALL 
parse_tree__write_error_spec__group_nonfirst_line_words_8_p_0(
  MR_Integer AvailLen_9,
  MR_Word FirstWord_10,
  MR_Word LaterWords_11,
  MR_Unsigned Indent_12,
  MR_Word LastParen_13,
  MR_Word * Lines_14,
  MR_Word ColorStack0_15,
  MR_Word * ColorStack_16);

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
  MR_Word STATE_VARIABLE_ColorStack_0_9,
  MR_Word * STATE_VARIABLE_ColorStack_10,
  MR_Word HeadVar__11_11,
  MR_Word * LineEndReset_12);

static void MR_CALL 
parse_tree__write_error_spec__merge_adjacent_color_changes_5_p_0(
  MR_Word HeadSCUnit_6,
  MR_Word TailSCUnits0_7,
  MR_Word * SCUnits_8,
  MR_Word STATE_VARIABLE_ColorStack_0_16,
  MR_Word * STATE_VARIABLE_ColorStack_17);

static void MR_CALL 
parse_tree__write_error_spec__convert_pieces_to_paragraphs_acc_6_p_0(
  MR_Word ColorDb_1,
  MR_Word FirstInMsg_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_WordsCord_0_4,
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
parse_tree__write_error_spec__break_into_words_2_p_0(
  MR_String String_3,
  MR_Word * WordsCord_4);

static void MR_CALL 
parse_tree__write_error_spec__break_into_words_from_4_p_0(
  MR_String String_5,
  MR_Integer Cur_6,
  MR_Word STATE_VARIABLE_WordsCord_0_11,
  MR_Word * STATE_VARIABLE_WordsCord_12);

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
parse_tree__write_error_spec__words_cord_to_sc_units_1_f_0(
  MR_Word WordsCord_3);

static MR_Word MR_CALL 
parse_tree__write_error_spec__join_prefixes_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Word MR_CALL 
parse_tree__write_error_spec__lower_next_sc_unit_1_f_0(
  MR_Word SCUnits0_3);

static MR_Word MR_CALL 
parse_tree__write_error_spec__rev_words_to_rev_plain_or_prefix_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
parse_tree__write_error_spec__add_paragraph_3_p_0(
  MR_Word Para_4,
  MR_Word STATE_VARIABLE_Paras_0_10,
  MR_Word * STATE_VARIABLE_Paras_11);

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
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_color_spec_0))
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
    ((MR_Box) (&parse_tree__write_error_spec__stack__pti_stack_1__plain_libs__globals__type_ctor_info_color_spec_0)),
    ((MR_Box) (&parse_tree__write_error_spec__stack__pti_stack_1__plain_libs__globals__type_ctor_info_color_spec_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_error_line_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box parse_tree__write_error_spec_scalar_common_5[3][3] = {
  /* row   0 */
  {
    ((MR_Box) (&parse_tree__write_error_spec_scalar_common_4[3])),
    ((MR_Box) (parse_tree__write_error_spec__find_matching_rp_and_maybe_join_4_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__write_error_spec_scalar_common_4[3])),
    ((MR_Box) (parse_tree__write_error_spec__error_lines_to_one_line_string_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__write_error_spec_scalar_common_4[3])),
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
#line 2202 "write_error_spec.m"
MR_Unsigned parse_tree__write_error_spec__mutable_variable_extra_error_info;

#line 2209 "write_error_spec.m"
MR_Unsigned parse_tree__write_error_spec__mutable_variable_some_errors_were_context_limited;


#line 2202 "write_error_spec.m"
void 
parse_tree__write_error_spec__user_init_pred_192_0(void)
#line 2202 "write_error_spec.m"
{
#line 2202 "write_error_spec.m"
	parse_tree__write_error_spec__initialise_mutable_extra_error_info_0_p_0();
}

#line 2209 "write_error_spec.m"
void 
parse_tree__write_error_spec__user_init_pred_193_0(void)
#line 2209 "write_error_spec.m"
{
#line 2209 "write_error_spec.m"
	parse_tree__write_error_spec__initialise_mutable_some_errors_were_context_limited_0_p_0();
}


static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_error_spec__stack__pti_stack_1__plain_libs__globals__type_ctor_info_color_spec_0 = {
  &mercury__stack__stack__type_ctor_info_stack_1,
  { (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_color_spec_0) }
};

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

static const MR_PseudoTypeInfo parse_tree__write_error_spec__parse_tree__write_error_spec__field_types_color_0_0[1] = { (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_color_spec_0) };

static const MR_DuFunctorDesc parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_color_0_0 = {
  (MR_String) "color_set",
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
  &parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_color_0_1,
  &parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_color_0_0
};

static const MR_Integer parse_tree__write_error_spec__parse_tree__write_error_spec__functor_number_map_color_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
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

static const MR_PseudoTypeInfo parse_tree__write_error_spec__parse_tree__write_error_spec__field_types_color_name_map_0_0[3] = {
  (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_color_spec_0),
  (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_color_spec_0),
  (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_color_spec_0)
};

static const MR_ConstString parse_tree__write_error_spec__parse_tree__write_error_spec__field_names_color_name_map_0_0[3] = {
  (MR_String) "cnm_correct",
  (MR_String) "cnm_incorrect",
  (MR_String) "cnm_cause"
};

static const MR_DuFunctorDesc parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_color_name_map_0_0 = {
  (MR_String) "color_name_map",
  INT16_C(3),
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

static const MR_FA_TypeInfo_Struct1 parse_tree__write_error_spec__stack__ti_stack_1libs__globals__type_ctor_info_color_spec_0 = {
  &mercury__stack__stack__type_ctor_info_stack_1,
  { (MR_TypeInfo) (&libs__globals__libs__globals__type_ctor_info_color_spec_0) }
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
  { (MR_PseudoTypeInfo) (&parse_tree__write_error_spec__stack__ti_stack_1libs__globals__type_ctor_info_color_spec_0) },
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

static const MR_PseudoTypeInfo parse_tree__write_error_spec__parse_tree__write_error_spec__field_types_error_line_0_0[8] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_line_end_reset_0),
  (MR_PseudoTypeInfo) (&parse_tree__write_error_spec__stack__ti_stack_1libs__globals__type_ctor_info_color_spec_0),
  (MR_PseudoTypeInfo) (&parse_tree__write_error_spec__stack__ti_stack_1libs__globals__type_ctor_info_color_spec_0),
  (MR_PseudoTypeInfo) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_paren_status_0)
};

static const MR_ConstString parse_tree__write_error_spec__parse_tree__write_error_spec__field_names_error_line_0_0[8] = {
  (MR_String) "maybe_avail_len",
  (MR_String) "line_indent_level",
  (MR_String) "line_words_str",
  (MR_String) "line_words_len",
  (MR_String) "line_end_reset",
  (MR_String) "line_start_colors",
  (MR_String) "line_end_colors",
  (MR_String) "line_paren"
};

static const MR_DuArgLocn parse_tree__write_error_spec__parse_tree__write_error_spec__field_locns_error_line_0_0[8] = {
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
    (MR_Integer) 0
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 0,
    (MR_Integer) 2
  }
};

static const MR_DuFunctorDesc parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_error_line_0_0 = {
  (MR_String) "error_line",
  INT16_C(8),
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

static const MR_PseudoTypeInfo parse_tree__write_error_spec__parse_tree__write_error_spec__field_types_plain_or_prefix_0_3[1] = { (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_color_spec_0) };

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

static const MR_PseudoTypeInfo parse_tree__write_error_spec__parse_tree__write_error_spec__field_types_sc_unit_0_1[1] = { (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_color_spec_0) };

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

static const MR_PseudoTypeInfo parse_tree__write_error_spec__parse_tree__write_error_spec__field_types_word_0_4[1] = { (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_color_spec_0) };

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

static MR_String MR_CALL 
parse_tree__write_error_spec__IntroducedFrom__func__find_matching_rp_and_maybe_join__1701__1_1_f_0(
  MR_Word LambdaHeadVar__1_60)
{
  MR_String LambdaHeadVar__2_61 = ((MR_String) ((MR_hl_field(0, LambdaHeadVar__1_60, (MR_Integer) 2))));

  return LambdaHeadVar__2_61;
}

static MR_bool MR_CALL 
parse_tree__write_error_spec__IntroducedFrom__pred__find_matching_rp_and_maybe_join__1686__1_2_p_0(
  MR_Word LPEndCS_15,
  MR_Word RPStartCS_26)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__write_error_spec_scalar_common_1[3]), ((MR_Box) (LPEndCS_15)), ((MR_Box) (RPStartCS_26)));
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__write_error_spec__IntroducedFrom__pred__find_matching_rp_and_maybe_join__1679__1_2_p_0(
  MR_Word LPParen_16,
  MR_Word HeadVar__2_43)
{
  MR_bool succeeded = (LPParen_16 == HeadVar__2_43);

  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__write_error_spec__IntroducedFrom__pred__get_later_words__1487__1_2_p_0(
  MR_String NextSpace0_2,
  MR_String HeadVar__2_52)
{
  MR_bool succeeded = (strcmp(NextSpace0_2, HeadVar__2_52) == 0);

  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__write_error_spec__IntroducedFrom__pred__get_later_words__1513__1_2_p_0(
  MR_String NextSpace0_2,
  MR_String HeadVar__2_62)
{
  MR_bool succeeded = (strcmp(NextSpace0_2, HeadVar__2_62) == 0);

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
                      uint8_t Var_18 = (uint8_t) (ArgX1_10);
                      uint8_t Var_19 = (uint8_t) (ArgY1_11);

                      succeeded = (Var_18 < Var_19);
                      if (succeeded)
                        *HeadVar__1_1 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (Var_18 > Var_19);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 2;
                        else
                          *HeadVar__1_1 = (MR_Integer) 0;
                      }
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
              uint8_t Var_18;
              uint8_t Var_19;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_12 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                Var_18 = (uint8_t) (ArgX1_11);
                Var_19 = (uint8_t) (ArgY1_12);
                succeeded = (Var_18 == Var_19);
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
              uint8_t Var_12 = (uint8_t) (ArgX1_6);
              uint8_t Var_13 = (uint8_t) (ArgY1_7);

              succeeded = (Var_12 < Var_13);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 1;
              else
              {
                succeeded = (Var_12 > Var_13);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 2;
                else
                  *HeadVar__1_1 = (MR_Integer) 0;
              }
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
          uint8_t Var_12;
          uint8_t Var_13;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
            Var_12 = (uint8_t) (ArgX1_5);
            Var_13 = (uint8_t) (ArgY1_6);
            succeeded = (Var_12 == Var_13);
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
              uint8_t Var_15 = (uint8_t) (ArgX1_8);
              uint8_t Var_16 = (uint8_t) (ArgY1_9);

              succeeded = (Var_15 < Var_16);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 1;
              else
              {
                succeeded = (Var_15 > Var_16);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 2;
                else
                  *HeadVar__1_1 = (MR_Integer) 0;
              }
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
          uint8_t Var_16;
          uint8_t Var_17;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3);
          if (succeeded)
          {
            ArgY1_10 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))));
            Var_16 = (uint8_t) (ArgX1_9);
            Var_17 = (uint8_t) (ArgY1_10);
            succeeded = (Var_16 == Var_17);
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
  MR_Integer CastX_27 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_28 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_27 == CastY_28);
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
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 6))));
    MR_Word ArgX8_25 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))) & (MR_Integer) 3);
    MR_Word ArgY8_26 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 7))) & (MR_Integer) 3);
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
            MR_Integer Var_37 = (MR_Integer) (ArgX5_16);
            MR_Integer Var_38 = (MR_Integer) (ArgY5_17);

            succeeded = (Var_37 < Var_38);
            if (succeeded)
            {
              SubResult5_18 = (MR_Integer) 1;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = (Var_37 > Var_38);
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
                MR_Word SubResult7_24;

                mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__write_error_spec_scalar_common_1[3]), &SubResult7_24, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
                succeeded = (SubResult7_24 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                {
                  MR_Integer Var_39 = (MR_Integer) (ArgX8_25);
                  MR_Integer Var_40 = (MR_Integer) (ArgY8_26);

                  succeeded = (Var_39 < Var_40);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_39 > Var_40);
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
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word SubResult1_6;
    uint8_t Var_17 = (uint8_t) (ArgX1_4);
    uint8_t Var_18 = (uint8_t) (ArgY1_5);

    succeeded = (Var_17 < Var_18);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Var_17 > Var_18);
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
      uint8_t Var_19 = (uint8_t) (ArgX2_7);
      uint8_t Var_20 = (uint8_t) (ArgY2_8);

      succeeded = (Var_19 < Var_20);
      if (succeeded)
      {
        SubResult2_9 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_19 > Var_20);
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
        uint8_t Var_21 = (uint8_t) (ArgX3_10);
        uint8_t Var_22 = (uint8_t) (ArgY3_11);

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
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    uint8_t Var_14 = (uint8_t) (ArgX1_3);
    uint8_t Var_15 = (uint8_t) (ArgY1_4);
    uint8_t Var_16;
    uint8_t Var_17;
    uint8_t Var_18;
    uint8_t Var_19;

    succeeded = (Var_14 == Var_15);
    if (succeeded)
    {
      Var_16 = (uint8_t) (ArgX2_5);
      Var_17 = (uint8_t) (ArgY2_6);
      succeeded = (Var_16 == Var_17);
      if (succeeded)
      {
        Var_18 = (uint8_t) (ArgX3_7);
        Var_19 = (uint8_t) (ArgY3_8);
        succeeded = (Var_18 == Var_19);
      }
    }
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    uint8_t Var_9 = (uint8_t) (ArgX1_4);
    uint8_t Var_10 = (uint8_t) (ArgY1_5);

    succeeded = (Var_9 < Var_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Var_9 > Var_10);
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4;
    uint8_t Var_10;
    uint8_t Var_11;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      Var_10 = (uint8_t) (ArgX1_3);
      Var_11 = (uint8_t) (ArgY1_4);
      succeeded = (Var_10 == Var_11);
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
    MR_String IndentStr_15;
    MR_String LineWordsStr_16;
    MR_String Var_18;
    MR_String Var_19;

    IndentStr_15 = libs__indent__indent2_string_1_f_0(LineIndent_8);
    LineWordsStr_16 = parse_tree__write_error_spec__convert_line_words_to_string_1_f_0(Line_5);
    Var_19 = mercury__string__f_43_43_2_f_0(LineWordsStr_16, (MR_String) "\n");
    Var_18 = mercury__string__f_43_43_2_f_0(IndentStr_15, Var_19);
    Str_6 = mercury__string__f_43_43_2_f_0(Prefix_4, Var_18);
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
  MR_Word ColorStack0_18;
  MR_Word Lines0_19;
  MR_Integer Var_23;
  MR_Word WordsCord0_72;
  MR_Word ParasCord0_73;
  MR_Word ParasCord_74;

  WordsCord0_72 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_word_0));
  ParasCord0_73 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_paragraph_0));
  parse_tree__write_error_spec__convert_pieces_to_paragraphs_acc_6_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, Pieces_3, WordsCord0_72, ParasCord0_73, &ParasCord_74);
  Paragraphs_12 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_paragraph_0), ParasCord_74);
  Var_23 = mercury__uint__cast_to_int_1_f_0((MR_Unsigned) 0U);
  mercury__string__pad_left_4_p_0((MR_String) "", (MR_Char) 32, Var_23, &FixedIndentStr_13);
  Var_5 = mercury__string__f_43_43_2_f_0((MR_String) "", FixedIndentStr_13);
  PrefixLen_14 = mercury__string__count_code_points_1_f_0(Var_5);
  MaxWidth_15 = ((MR_Integer) ((MR_hl_field(1, (MR_Word) (MR_mkword(1, &parse_tree__write_error_spec_scalar_common_2[0])), (MR_Integer) 0))));
  AvailLen_16 = (MR_Integer) ((MR_Unsigned) MaxWidth_15 - (MR_Unsigned) PrefixLen_14);
  if (MR_TRUE)
    FirstIndent_17 = (MR_Unsigned) 0U;
  else
    FirstIndent_17 = (MR_Unsigned) 1U;
  mercury__stack__init_1_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_color_spec_0), &ColorStack0_18);
  parse_tree__write_error_spec__divide_paragraphs_into_lines_6_p_0(AvailLen_16, (MR_Integer) 0, FirstIndent_17, Paragraphs_12, &Lines0_19, ColorStack0_18);
  parse_tree__write_error_spec__try_to_join_lp_to_rp_lines_2_p_0(Lines0_19, &Lines_4);
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

  mercury__getopt__lookup_maybe_int_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), OptionTable_11, ((MR_Box) ((MR_Integer) 189)), &MaybeMaxWidth_18);
  if ((MaybeContext_13 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_String ContextStr_25 = ((MR_String) ((MR_hl_field(1, (MR_Word) (MR_mkword(1, &parse_tree__write_error_spec_scalar_common_2[1])), (MR_Integer) 0))));

    if (!((Pieces_16 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word ColorDb_28;
      MR_String PrefixStr_29;
      MR_Word Lines_30;
      MR_Word UseColors_47;

      mercury__getopt__lookup_bool_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), OptionTable_11, ((MR_Box) ((MR_Integer) 92)), &UseColors_47);
      switch (UseColors_47) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          ColorDb_28 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 1:
          {
            MR_Word MaybeColorSpecs_48;

            MaybeColorSpecs_48 = libs__globals__convert_color_spec_options_1_f_0(OptionTable_11);
            if (((MR_tag((MR_Word) MaybeColorSpecs_48)) == (MR_Integer) 0))
              ColorDb_28 = (MR_Word) ((MR_Unsigned) 0U);
            else
            {
              MR_Word ColorSpecs_50 = ((MR_Word) ((MR_hl_field(1, MaybeColorSpecs_48, (MR_Integer) 0))));
              MR_Word MaybeCorrect_51 = ((MR_Word) ((MR_hl_field(0, ColorSpecs_50, (MR_Integer) 0))));
              MR_Word MaybeIncorrect_52 = ((MR_Word) ((MR_hl_field(0, ColorSpecs_50, (MR_Integer) 1))));
              MR_Word MaybeCause_53 = ((MR_Word) ((MR_hl_field(0, ColorSpecs_50, (MR_Integer) 2))));
              MR_Word Correct_54;
              MR_Word Incorrect_55;
              MR_Word Cause_56;
              MR_Word ColorNameMap_57;

              if ((MaybeCorrect_51 == (MR_Word) ((MR_Unsigned) 0U)))
                Correct_54 = (MR_Word) (((MR_Box) (MR_Word) (UINT8_C(40))));
              else
                Correct_54 = ((MR_Word) ((MR_hl_field(1, MaybeCorrect_51, (MR_Integer) 0))));
              if ((MaybeIncorrect_52 == (MR_Word) ((MR_Unsigned) 0U)))
                Incorrect_55 = (MR_Word) (((MR_Box) (MR_Word) (UINT8_C(203))));
              else
                Incorrect_55 = ((MR_Word) ((MR_hl_field(1, MaybeIncorrect_52, (MR_Integer) 0))));
              if ((MaybeCause_53 == (MR_Word) ((MR_Unsigned) 0U)))
                Cause_56 = (MR_Word) (((MR_Box) (MR_Word) (UINT8_C(226))));
              else
                Cause_56 = ((MR_Word) ((MR_hl_field(1, MaybeCause_53, (MR_Integer) 0))));
              {
                ColorNameMap_57 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, ColorNameMap_57, 0) = ((MR_Box) (Correct_54));
                MR_hl_field(0, ColorNameMap_57, 1) = ((MR_Box) (Incorrect_55));
                MR_hl_field(0, ColorNameMap_57, 2) = ((MR_Box) (Cause_56));
              }
              ColorDb_28 = (MR_Word) (MR_mkword(1, (MR_Word) (ColorNameMap_57)));
            }
          }
          break;
      }
      parse_tree__write_error_spec__convert_pieces_to_lines_8_p_0(ColorDb_28, MaybeMaxWidth_18, ContextStr_25, TreatAsFirst_14, FixedIndent_15, Pieces_16, &PrefixStr_29, &Lines_30);
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
      MR_String ContextStr_127;

      ContextStr_127 = parse_tree__parse_tree_out_misc__context_to_string_1_f_0(Context_19);
      if (!((Pieces_16 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        MR_Word ColorDb_97;
        MR_String PrefixStr_98;
        MR_Word Lines_99;
        MR_Word UseColors_100;

        mercury__getopt__lookup_bool_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), OptionTable_11, ((MR_Box) ((MR_Integer) 92)), &UseColors_100);
        switch (UseColors_100) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            ColorDb_97 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            {
              MR_Word MaybeColorSpecs_79;

              MaybeColorSpecs_79 = libs__globals__convert_color_spec_options_1_f_0(OptionTable_11);
              if (((MR_tag((MR_Word) MaybeColorSpecs_79)) == (MR_Integer) 0))
                ColorDb_97 = (MR_Word) ((MR_Unsigned) 0U);
              else
              {
                MR_Word ColorSpecs_63 = ((MR_Word) ((MR_hl_field(1, MaybeColorSpecs_79, (MR_Integer) 0))));
                MR_Word MaybeCorrect_64 = ((MR_Word) ((MR_hl_field(0, ColorSpecs_63, (MR_Integer) 0))));
                MR_Word MaybeIncorrect_65 = ((MR_Word) ((MR_hl_field(0, ColorSpecs_63, (MR_Integer) 1))));
                MR_Word MaybeCause_66 = ((MR_Word) ((MR_hl_field(0, ColorSpecs_63, (MR_Integer) 2))));
                MR_Word Correct_67;
                MR_Word Incorrect_68;
                MR_Word Cause_69;
                MR_Word ColorNameMap_70;

                if ((MaybeCorrect_64 == (MR_Word) ((MR_Unsigned) 0U)))
                  Correct_67 = (MR_Word) (((MR_Box) (MR_Word) (UINT8_C(40))));
                else
                  Correct_67 = ((MR_Word) ((MR_hl_field(1, MaybeCorrect_64, (MR_Integer) 0))));
                if ((MaybeIncorrect_65 == (MR_Word) ((MR_Unsigned) 0U)))
                  Incorrect_68 = (MR_Word) (((MR_Box) (MR_Word) (UINT8_C(203))));
                else
                  Incorrect_68 = ((MR_Word) ((MR_hl_field(1, MaybeIncorrect_65, (MR_Integer) 0))));
                if ((MaybeCause_66 == (MR_Word) ((MR_Unsigned) 0U)))
                  Cause_69 = (MR_Word) (((MR_Box) (MR_Word) (UINT8_C(226))));
                else
                  Cause_69 = ((MR_Word) ((MR_hl_field(1, MaybeCause_66, (MR_Integer) 0))));
                {
                  ColorNameMap_70 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, ColorNameMap_70, 0) = ((MR_Box) (Correct_67));
                  MR_hl_field(0, ColorNameMap_70, 1) = ((MR_Box) (Incorrect_68));
                  MR_hl_field(0, ColorNameMap_70, 2) = ((MR_Box) (Cause_69));
                }
                ColorDb_97 = (MR_Word) (MR_mkword(1, (MR_Word) (ColorNameMap_70)));
              }
            }
            break;
        }
        parse_tree__write_error_spec__convert_pieces_to_lines_8_p_0(ColorDb_97, MaybeMaxWidth_18, ContextStr_127, TreatAsFirst_14, FixedIndent_15, Pieces_16, &PrefixStr_98, &Lines_99);
        parse_tree__write_error_spec__write_msg_lines_5_p_0(Stream_10, PrefixStr_98, Lines_99);
      }
    }
  }
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
  MR_Word StartColorStack_10 = ((MR_Word) ((MR_hl_field(0, Line_3, (MR_Integer) 5))));
  MR_Word EndColorStack_11 = ((MR_Word) ((MR_hl_field(0, Line_3, (MR_Integer) 6))));

  succeeded = (strcmp(LineWordsStr_7, (MR_String) "") == 0);
  if (succeeded)
    Str_4 = (MR_String) "";
  else
  {
    MR_String StartColorStr_14;
    MR_String EndColorResetStr_15;
    MR_String Var_19;
    MR_Word StartColor_13;
    MR_Box conv0_StartColor_13;

    succeeded = mercury__stack__top_2_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_color_spec_0), StartColorStack_10, &conv0_StartColor_13);
    if (succeeded)
    {
      StartColor_13 = ((MR_Word) (conv0_StartColor_13));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      uint8_t ColorNum_23 = (uint8_t) (StartColor_13);
      MR_Integer Var_27;
      MR_String Var_30;
      MR_String Var_37;

      Var_27 = mercury__uint8__cast_to_int_1_f_0(ColorNum_23);
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__write_error_spec_scalar_common_2[2]), Var_27, &Var_30);
      Var_37 = mercury__string__f_43_43_2_f_0(Var_30, (MR_String) "m");
      StartColorStr_14 = mercury__string__f_43_43_2_f_0((MR_String) "\033[38;5;", Var_37);
    }
    else
      StartColorStr_14 = (MR_String) "";
    switch (LineEndReset_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Box conv1_Var_16;

          succeeded = mercury__stack__top_2_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_color_spec_0), EndColorStack_11, &conv1_Var_16);
          if (succeeded)
            succeeded = MR_TRUE;
          if (succeeded)
            EndColorResetStr_15 = (MR_String) "\033[39;49m";
          else
            EndColorResetStr_15 = (MR_String) "";
        }
        break;
      case (MR_Integer) 0:
        EndColorResetStr_15 = (MR_String) "";
        break;
    }
    Var_19 = mercury__string__f_43_43_2_f_0(LineWordsStr_7, EndColorResetStr_15);
    Str_4 = mercury__string__f_43_43_2_f_0(StartColorStr_14, Var_19);
  }
  return Str_4;
}

static void MR_CALL 
parse_tree__write_error_spec__convert_pieces_to_lines_8_p_0(
  MR_Word ColorDb_9,
  MR_Word MaybeMaxWidth_10,
  MR_String ContextStr_11,
  MR_Word TreatAsFirst_12,
  MR_Unsigned FixedIndent_13,
  MR_Word Pieces_14,
  MR_String * PrefixStr_15,
  MR_Word * Lines_16)
{
  MR_bool succeeded;
  MR_Word Paragraphs_17;
  MR_String FixedIndentStr_18;
  MR_Integer PrefixLen_19;
  MR_Integer AvailLen_21;
  MR_Unsigned FirstIndent_22;
  MR_Word ColorStack0_23;
  MR_Word Lines0_24;
  MR_Integer Var_29;
  MR_Word WordsCord0_78;
  MR_Word ParasCord0_79;
  MR_Word ParasCord_80;

  WordsCord0_78 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_word_0));
  ParasCord0_79 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_paragraph_0));
  parse_tree__write_error_spec__convert_pieces_to_paragraphs_acc_6_p_0(ColorDb_9, (MR_Integer) 0, Pieces_14, WordsCord0_78, ParasCord0_79, &ParasCord_80);
  Paragraphs_17 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_paragraph_0), ParasCord_80);
  Var_29 = mercury__uint__cast_to_int_1_f_0(FixedIndent_13);
  mercury__string__pad_left_4_p_0((MR_String) "", (MR_Char) 32, Var_29, &FixedIndentStr_18);
  *PrefixStr_15 = mercury__string__f_43_43_2_f_0(ContextStr_11, FixedIndentStr_18);
  PrefixLen_19 = mercury__string__count_code_points_1_f_0(*PrefixStr_15);
  if ((MaybeMaxWidth_10 == (MR_Word) ((MR_Unsigned) 0U)))
    mercury__int__max_int_1_p_0(&AvailLen_21);
  else
  {
    MR_Integer MaxWidth_20 = ((MR_Integer) ((MR_hl_field(1, MaybeMaxWidth_10, (MR_Integer) 0))));

    AvailLen_21 = (MR_Integer) ((MR_Unsigned) MaxWidth_20 - (MR_Unsigned) PrefixLen_19);
  }
  succeeded = (TreatAsFirst_12 == (MR_Integer) 0);
  if (succeeded)
    FirstIndent_22 = (MR_Unsigned) 0U;
  else
    FirstIndent_22 = (MR_Unsigned) 1U;
  mercury__stack__init_1_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_color_spec_0), &ColorStack0_23);
  parse_tree__write_error_spec__divide_paragraphs_into_lines_6_p_0(AvailLen_21, TreatAsFirst_12, FirstIndent_22, Paragraphs_17, &Lines0_24, ColorStack0_23);
  parse_tree__write_error_spec__try_to_join_lp_to_rp_lines_2_p_0(Lines0_24, Lines_16);
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
      MR_Word HeadParen_13 = ((MR_Unsigned) ((MR_hl_field(0, HeadLine0_3, (MR_Integer) 7))) & (MR_Integer) 3);

      switch (HeadParen_13) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
        case (MR_Integer) 0:
          {
            MR_Word TailLines_14;

            parse_tree__write_error_spec__try_to_join_lp_to_rp_lines_2_p_0(TailLines0_4, &TailLines_14);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__2_2 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (HeadLine0_3));
              MR_hl_field(1, base, 1) = ((MR_Box) (TailLines_14));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ReplacementLines_15;
            MR_Word LeftOverLines0_16;
            MR_Word FirstReplacementLine_17;

            succeeded = parse_tree__write_error_spec__find_matching_rp_and_maybe_join_4_p_0(HeadLine0_3, TailLines0_4, &ReplacementLines_15, &LeftOverLines0_16);
            if (succeeded)
            {
              succeeded = (ReplacementLines_15 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                FirstReplacementLine_17 = ((MR_Word) ((MR_hl_field(1, ReplacementLines_15, (MR_Integer) 0))));
                succeeded = parse_tree__write_error_spec____Unify____error_line_0_0(FirstReplacementLine_17, HeadLine0_3);
                succeeded = !(succeeded);
              }
            }
            if (succeeded)
            {
              MR_Word Lines1_19;
              MR_Word next_value_of_HeadVar__1_1;

              Lines1_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_error_line_0), ReplacementLines_15, LeftOverLines0_16);
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__1_1 = Lines1_19;
              HeadVar__1_1 = next_value_of_HeadVar__1_1;
              continue;
            }
            else
            {
              MR_Word TailLines_20;

              parse_tree__write_error_spec__try_to_join_lp_to_rp_lines_2_p_0(TailLines0_4, &TailLines_20);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__2_2 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (HeadLine0_3));
                MR_hl_field(1, base, 1) = ((MR_Box) (TailLines_20));
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
    MR_Word HeadParen_29;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      HeadLine0_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      TailLines0_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      HeadLineWordsLen_25 = ((MR_Integer) ((MR_hl_field(0, HeadLine0_16, (MR_Integer) 3))));
      HeadParen_29 = ((MR_Unsigned) ((MR_hl_field(0, HeadLine0_16, (MR_Integer) 7))) & (MR_Integer) 3);
      switch (HeadParen_29) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
          {
            MR_Word TypeCtorInfo_51_51;

            succeeded = (TailLines0_17 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              *RPLine_6 = ((MR_Word) ((MR_hl_field(1, TailLines0_17, (MR_Integer) 0))));
              *LeftOverLines_7 = ((MR_Word) ((MR_hl_field(1, TailLines0_17, (MR_Integer) 1))));
              TypeCtorInfo_51_51 = (MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_error_line_0);
              mercury__cord__snoc_3_p_0(TypeCtorInfo_51_51, ((MR_Box) (HeadLine0_16)), STATE_VARIABLE_MidLinesCord_0_2, STATE_VARIABLE_MidLinesCord_3);
              *STATE_VARIABLE_MidLinesLen_5 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_MidLinesLen_0_4 + (MR_Unsigned) HeadLineWordsLen_25);
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ReplacementLines_31;
            MR_Word AfterRpLines_32;

            succeeded = parse_tree__write_error_spec__find_matching_rp_and_maybe_join_4_p_0(HeadLine0_16, TailLines0_17, &ReplacementLines_31, &AfterRpLines_32);
            if (succeeded)
            {
              if ((ReplacementLines_31 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.write_error_spec.find_matching_rp\'/7", (MR_String) "ReplacementLines = []");
                succeeded = MR_TRUE;
              }
              else
              {
                MR_Word HeadReplacementLine_33 = ((MR_Word) ((MR_hl_field(1, ReplacementLines_31, (MR_Integer) 0))));
                MR_Word TailReplacementLines_34 = ((MR_Word) ((MR_hl_field(1, ReplacementLines_31, (MR_Integer) 1))));

                succeeded = (TailReplacementLines_34 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  succeeded = parse_tree__write_error_spec____Unify____error_line_0_0(HeadReplacementLine_33, HeadLine0_16);
                  if (succeeded)
                    succeeded = MR_FALSE;
                  else
                  {
                    MR_Word Var_49;
                    MR_Word next_value_of_HeadVar__1_1;

                    {
                      Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_49, 0) = ((MR_Box) (HeadReplacementLine_33));
                      MR_hl_field(1, Var_49, 1) = ((MR_Box) (AfterRpLines_32));
                    }
                    // direct tailcall eliminated
                    ;
                    next_value_of_HeadVar__1_1 = Var_49;
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
            MR_Word STATE_VARIABLE_MidLinesCord_41_41;
            MR_Integer STATE_VARIABLE_MidLinesLen_42_42;
            MR_Word next_value_of_HeadVar__1_1;
            MR_Word next_value_of_STATE_VARIABLE_MidLinesCord_0_2;
            MR_Integer next_value_of_STATE_VARIABLE_MidLinesLen_0_4;

            mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_error_line_0), ((MR_Box) (HeadLine0_16)), STATE_VARIABLE_MidLinesCord_0_2, &STATE_VARIABLE_MidLinesCord_41_41);
            STATE_VARIABLE_MidLinesLen_42_42 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_MidLinesLen_0_4 + (MR_Unsigned) HeadLineWordsLen_25);
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__1_1 = TailLines0_17;
            next_value_of_STATE_VARIABLE_MidLinesCord_0_2 = STATE_VARIABLE_MidLinesCord_41_41;
            next_value_of_STATE_VARIABLE_MidLinesLen_0_4 = STATE_VARIABLE_MidLinesLen_42_42;
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

static MR_Box MR_CALL 
parse_tree__write_error_spec__find_matching_rp_and_maybe_join_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_LambdaHeadVar__2_61;

  conv0_LambdaHeadVar__2_61 = parse_tree__write_error_spec__IntroducedFrom__func__find_matching_rp_and_maybe_join__1701__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_61));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
parse_tree__write_error_spec__find_matching_rp_and_maybe_join_4_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__write_error_spec__IntroducedFrom__pred__find_matching_rp_and_maybe_join__1686__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__write_error_spec__find_matching_rp_and_maybe_join_4_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__write_error_spec__IntroducedFrom__pred__find_matching_rp_and_maybe_join__1679__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
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
  MR_Word TypeCtorInfo_76_76;
  MR_Integer AvailLen_9 = ((MR_Integer) ((MR_hl_field(0, LPLine_5, (MR_Integer) 0))));
  MR_Unsigned LPIndent_10 = ((MR_Unsigned) ((MR_hl_field(0, LPLine_5, (MR_Integer) 1))));
  MR_String LPLineWordsStr_11 = ((MR_String) ((MR_hl_field(0, LPLine_5, (MR_Integer) 2))));
  MR_Integer LPLineWordsLen_12 = ((MR_Integer) ((MR_hl_field(0, LPLine_5, (MR_Integer) 3))));
  MR_Word LPLineEndReset_13 = ((MR_Unsigned) ((MR_hl_field(0, LPLine_5, (MR_Integer) 4))) & (MR_Integer) 1);
  MR_Word LPStartCS_14 = ((MR_Word) ((MR_hl_field(0, LPLine_5, (MR_Integer) 5))));
  MR_Word LPEndCS_15 = ((MR_Word) ((MR_hl_field(0, LPLine_5, (MR_Integer) 6))));
  MR_Word LPParen_16 = ((MR_Unsigned) ((MR_hl_field(0, LPLine_5, (MR_Integer) 7))) & (MR_Integer) 3);
  MR_Word MidLinesCord_17;
  MR_Integer MidLinesLen_18;
  MR_Word RPLine_19;
  MR_String RPLineWordsStr_23;
  MR_Integer RPLineWordsLen_24;
  MR_Word RPLineEndReset_25;
  MR_Word RPStartCS_26;
  MR_Word RPEndCS_27;
  MR_Word RPParen_28;
  MR_Word MidLines_29;
  MR_Integer NumMidLines_30;
  MR_Integer MidLineSpaces_31;
  MR_Integer TotalLpRpLen_32;
  MR_Word ChunkLines_33;
  MR_Word Var_40;
  MR_Word Var_44;
  MR_Word Var_46;
  MR_String Var_47;
  MR_String Var_48;
  MR_Integer Var_50;
  MR_Integer Var_51;
  MR_Word Var_52;
  MR_Word Var_53;
  MR_Word Var_54;
  MR_Integer Var_55;
  MR_Integer Var_56;
  MR_Unsigned Var_57;
  MR_Unsigned Var_58;

  {
    Var_40 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_40, 0) = ((MR_Box) (&parse_tree__write_error_spec_scalar_common_4[1]));
    MR_hl_field(0, Var_40, 1) = ((MR_Box) (parse_tree__write_error_spec__find_matching_rp_and_maybe_join_4_p_0_1));
    MR_hl_field(0, Var_40, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_40, 3) = ((MR_Box) (LPParen_16));
    MR_hl_field(0, Var_40, 4) = ((MR_Box) ((MR_Integer) 1));
  }
  mercury__require__expect_3_p_0(Var_40, (MR_String) "predicate \140parse_tree.write_error_spec.find_matching_rp_and_maybe_join\'/4", (MR_String) "LPParen != paren_lp_end");
  Var_44 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_error_line_0));
  succeeded = parse_tree__write_error_spec__find_matching_rp_7_p_0(TailLines0_6, Var_44, &MidLinesCord_17, (MR_Integer) 0, &MidLinesLen_18, &RPLine_19, LeftOverLines_8);
  if (succeeded)
  {
    RPLineWordsStr_23 = ((MR_String) ((MR_hl_field(0, RPLine_19, (MR_Integer) 2))));
    RPLineWordsLen_24 = ((MR_Integer) ((MR_hl_field(0, RPLine_19, (MR_Integer) 3))));
    RPLineEndReset_25 = ((MR_Unsigned) ((MR_hl_field(0, RPLine_19, (MR_Integer) 4))) & (MR_Integer) 1);
    RPStartCS_26 = ((MR_Word) ((MR_hl_field(0, RPLine_19, (MR_Integer) 5))));
    RPEndCS_27 = ((MR_Word) ((MR_hl_field(0, RPLine_19, (MR_Integer) 6))));
    RPParen_28 = ((MR_Unsigned) ((MR_hl_field(0, RPLine_19, (MR_Integer) 7))) & (MR_Integer) 3);
    Var_47 = (MR_String) "predicate \140parse_tree.write_error_spec.find_matching_rp_and_maybe_join\'/4";
    Var_48 = (MR_String) "LPEndCS != RPStartCS";
    {
      Var_46 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_46, 0) = ((MR_Box) (&parse_tree__write_error_spec_scalar_common_4[2]));
      MR_hl_field(0, Var_46, 1) = ((MR_Box) (parse_tree__write_error_spec__find_matching_rp_and_maybe_join_4_p_0_2));
      MR_hl_field(0, Var_46, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_46, 3) = ((MR_Box) (LPEndCS_15));
      MR_hl_field(0, Var_46, 4) = ((MR_Box) (RPStartCS_26));
    }
    mercury__require__expect_3_p_0(Var_46, Var_47, Var_48);
    TypeCtorInfo_76_76 = (MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_error_line_0);
    MidLines_29 = mercury__cord__list_1_f_0(TypeCtorInfo_76_76, MidLinesCord_17);
    mercury__list__length_2_p_0(TypeCtorInfo_76_76, MidLines_29, &NumMidLines_30);
    succeeded = (NumMidLines_30 == (MR_Integer) 0);
    if (succeeded)
      MidLineSpaces_31 = (MR_Integer) 0;
    else
      MidLineSpaces_31 = (MR_Integer) ((MR_Unsigned) NumMidLines_30 - (MR_Unsigned) 1);
    Var_51 = (MR_Integer) ((MR_Unsigned) LPLineWordsLen_12 + (MR_Unsigned) MidLinesLen_18);
    Var_50 = (MR_Integer) ((MR_Unsigned) Var_51 + (MR_Unsigned) MidLineSpaces_31);
    TotalLpRpLen_32 = (MR_Integer) ((MR_Unsigned) Var_50 + (MR_Unsigned) RPLineWordsLen_24);
    Var_54 = (MR_Word) ((MR_Unsigned) 0U);
    {
      Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_52, 0) = ((MR_Box) (LPLine_5));
      MR_hl_field(1, Var_52, 1) = ((MR_Box) (MidLines_29));
    }
    {
      Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_53, 0) = ((MR_Box) (RPLine_19));
      MR_hl_field(1, Var_53, 1) = ((MR_Box) (Var_54));
    }
    ChunkLines_33 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_76_76, Var_52, Var_53);
    Var_58 = libs__indent__indent2_increment_0_f_0();
    Var_57 = (LPIndent_10 * Var_58);
    Var_56 = mercury__uint__cast_to_int_1_f_0(Var_57);
    Var_55 = (MR_Integer) ((MR_Unsigned) Var_56 + (MR_Unsigned) TotalLpRpLen_32);
    succeeded = (Var_55 <= AvailLen_9);
    if (succeeded)
    {
      MR_Word MidLineStrs_34;
      MR_String MidSpaceLinesStr_36;
      MR_String ReplacementLineStr_37;
      MR_Word LPRPLineEndReset_38;
      MR_Word ReplacementLine_39;
      MR_String Var_63;

      MidLineStrs_34 = mercury__list__map_2_f_0(TypeCtorInfo_76_76, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__write_error_spec_scalar_common_5[0]), MidLines_29);
      MidSpaceLinesStr_36 = mercury__string__join_list_2_f_0((MR_String) " ", MidLineStrs_34);
      Var_63 = mercury__string__f_43_43_2_f_0(MidSpaceLinesStr_36, RPLineWordsStr_23);
      ReplacementLineStr_37 = mercury__string__f_43_43_2_f_0(LPLineWordsStr_11, Var_63);
      succeeded = (LPLineEndReset_13 == (MR_Integer) 0);
      if (succeeded)
        succeeded = (RPLineEndReset_25 == (MR_Integer) 0);
      if (succeeded)
        LPRPLineEndReset_38 = (MR_Integer) 0;
      else
        LPRPLineEndReset_38 = (MR_Integer) 1;
      {
        ReplacementLine_39 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ReplacementLine_39, 0) = ((MR_Box) (AvailLen_9));
        MR_hl_field(0, ReplacementLine_39, 1) = ((MR_Box) (LPIndent_10));
        MR_hl_field(0, ReplacementLine_39, 2) = ((MR_Box) (ReplacementLineStr_37));
        MR_hl_field(0, ReplacementLine_39, 3) = ((MR_Box) (TotalLpRpLen_32));
        MR_hl_field(0, ReplacementLine_39, 4) = (MR_Box) ((MR_Unsigned) (LPRPLineEndReset_38));
        MR_hl_field(0, ReplacementLine_39, 5) = ((MR_Box) (LPStartCS_14));
        MR_hl_field(0, ReplacementLine_39, 6) = ((MR_Box) (RPEndCS_27));
        MR_hl_field(0, ReplacementLine_39, 7) = (MR_Box) ((MR_Unsigned) (RPParen_28));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *ReplacementLines_7 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (ReplacementLine_39));
        MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    else
      *ReplacementLines_7 = ChunkLines_33;
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
  MR_Integer CastX_19 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_20 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_19 == CastY_20);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_21_21;
    MR_Word TypeInfo_22_22;
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
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 6))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Word ArgX8_17 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 7))) & (MR_Integer) 3);
    MR_Word ArgY8_18 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))) & (MR_Integer) 3);

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
              TypeInfo_21_21 = (MR_Word) (&parse_tree__write_error_spec_scalar_common_1[3]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
              if (succeeded)
              {
                TypeInfo_22_22 = (MR_Word) (&parse_tree__write_error_spec_scalar_common_1[3]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_22_22, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                if (succeeded)
                  succeeded = (ArgX8_17 == ArgY8_18);
              }
            }
          }
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
parse_tree__write_error_spec__divide_paragraphs_into_lines_6_p_0(
  MR_Integer AvailLen_7,
  MR_Word TreatAsFirst_8,
  MR_Unsigned CurIndent_9,
  MR_Word Paras_10,
  MR_Word * Lines_11,
  MR_Word ColorStack0_12)
{
  MR_bool succeeded;

  if ((Paras_10 == (MR_Word) ((MR_Unsigned) 0U)))
    *Lines_11 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word FirstPara_13 = ((MR_Word) ((MR_hl_field(1, Paras_10, (MR_Integer) 0))));
    MR_Word LaterParas_14 = ((MR_Word) ((MR_hl_field(1, Paras_10, (MR_Integer) 1))));
    MR_Word FirstParaWords_15 = ((MR_Word) ((MR_hl_field(0, FirstPara_13, (MR_Integer) 0))));
    MR_Integer NumBlankLines_16 = ((MR_Integer) ((MR_hl_field(0, FirstPara_13, (MR_Integer) 1))));
    MR_Integer FirstIndentDelta_17 = ((MR_Integer) ((MR_hl_field(0, FirstPara_13, (MR_Integer) 2))));
    MR_Word ParaParen_18 = ((MR_Unsigned) ((MR_hl_field(0, FirstPara_13, (MR_Integer) 3))) & (MR_Integer) 3);
    MR_Unsigned RestIndent_19;
    MR_Integer NextIndentInt_20;
    MR_Unsigned NextIndent_22;
    MR_Word FirstParaWarningLines_23;
    MR_Word FirstParaBlankLines_26;
    MR_Word NextTreatAsFirst_27;
    MR_Word FirstParaLines_28;
    MR_Word ColorStackNext_29;
    MR_Word LaterParaLines_42;
    MR_Integer Var_44;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Unsigned NextIndentPrime_21;

    switch (TreatAsFirst_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        RestIndent_19 = CurIndent_9;
        break;
      case (MR_Integer) 0:
        RestIndent_19 = (CurIndent_9 + (MR_Unsigned) 1U);
        break;
    }
    Var_44 = mercury__uint__cast_to_int_1_f_0(RestIndent_19);
    NextIndentInt_20 = (MR_Integer) ((MR_Unsigned) Var_44 + (MR_Unsigned) FirstIndentDelta_17);
    succeeded = mercury__uint__from_int_2_p_0(NextIndentInt_20, &NextIndentPrime_21);
    if (succeeded)
    {
      NextIndent_22 = NextIndentPrime_21;
      FirstParaWarningLines_23 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word WarningLine_24;

      {
        WarningLine_24 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, WarningLine_24, 0) = ((MR_Box) (AvailLen_7));
        MR_hl_field(0, WarningLine_24, 1) = ((MR_Box) (CurIndent_9));
        MR_hl_field(0, WarningLine_24, 2) = ((MR_Box) ((MR_String) "WARNING: NEGATIVE INDENT"));
        MR_hl_field(0, WarningLine_24, 3) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(0, WarningLine_24, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(0, WarningLine_24, 5) = ((MR_Box) (ColorStack0_12));
        MR_hl_field(0, WarningLine_24, 6) = ((MR_Box) (ColorStack0_12));
        MR_hl_field(0, WarningLine_24, 7) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      }
      {
        FirstParaWarningLines_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, FirstParaWarningLines_23, 0) = ((MR_Box) (WarningLine_24));
        MR_hl_field(1, FirstParaWarningLines_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      NextIndent_22 = (MR_Unsigned) 0U;
    }
    succeeded = (NumBlankLines_16 > (MR_Integer) 0);
    if (succeeded)
    {
      MR_Word BlankLine_25;

      {
        BlankLine_25 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, BlankLine_25, 0) = ((MR_Box) (AvailLen_7));
        MR_hl_field(0, BlankLine_25, 1) = ((MR_Box) (CurIndent_9));
        MR_hl_field(0, BlankLine_25, 2) = ((MR_Box) ((MR_String) ""));
        MR_hl_field(0, BlankLine_25, 3) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(0, BlankLine_25, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(0, BlankLine_25, 5) = ((MR_Box) (ColorStack0_12));
        MR_hl_field(0, BlankLine_25, 6) = ((MR_Box) (ColorStack0_12));
        MR_hl_field(0, BlankLine_25, 7) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      }
      mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_error_line_0), NumBlankLines_16, ((MR_Box) (BlankLine_25)), &FirstParaBlankLines_26);
    }
    else
      FirstParaBlankLines_26 = (MR_Word) ((MR_Unsigned) 0U);
    if ((FirstParaWords_15 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      NextTreatAsFirst_27 = TreatAsFirst_8;
      FirstParaLines_28 = (MR_Word) ((MR_Unsigned) 0U);
      ColorStackNext_29 = ColorStack0_12;
    }
    else
    {
      MR_Word FirstWord_30 = ((MR_Word) ((MR_hl_field(1, FirstParaWords_15, (MR_Integer) 0))));
      MR_Word LaterWords_31 = ((MR_Word) ((MR_hl_field(1, FirstParaWords_15, (MR_Integer) 1))));
      MR_Integer LineWordsLen_32;
      MR_Word LineWords_33;
      MR_Word RestWords_34;
      MR_Word ColorStack1_35;
      MR_Word LineEndReset_36;
      MR_String LineWordsStr_37;

      NextTreatAsFirst_27 = (MR_Integer) 1;
      parse_tree__write_error_spec__get_line_of_words_10_p_0(AvailLen_7, FirstWord_30, LaterWords_31, CurIndent_9, &LineWordsLen_32, &LineWords_33, &RestWords_34, ColorStack0_12, &ColorStack1_35, &LineEndReset_36);
      LineWordsStr_37 = mercury__string__append_list_1_f_0(LineWords_33);
      if ((RestWords_34 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word CurLine_38;

        {
          CurLine_38 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, CurLine_38, 0) = ((MR_Box) (AvailLen_7));
          MR_hl_field(0, CurLine_38, 1) = ((MR_Box) (CurIndent_9));
          MR_hl_field(0, CurLine_38, 2) = ((MR_Box) (LineWordsStr_37));
          MR_hl_field(0, CurLine_38, 3) = ((MR_Box) (LineWordsLen_32));
          MR_hl_field(0, CurLine_38, 4) = (MR_Box) ((MR_Unsigned) (LineEndReset_36));
          MR_hl_field(0, CurLine_38, 5) = ((MR_Box) (ColorStack0_12));
          MR_hl_field(0, CurLine_38, 6) = ((MR_Box) (ColorStack1_35));
          MR_hl_field(0, CurLine_38, 7) = (MR_Box) ((MR_Unsigned) (ParaParen_18));
        }
        {
          FirstParaLines_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, FirstParaLines_28, 0) = ((MR_Box) (CurLine_38));
          MR_hl_field(1, FirstParaLines_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        ColorStackNext_29 = ColorStack1_35;
      }
      else
      {
        MR_Word FirstRestWord_39 = ((MR_Word) ((MR_hl_field(1, RestWords_34, (MR_Integer) 0))));
        MR_Word LaterRestWords_40 = ((MR_Word) ((MR_hl_field(1, RestWords_34, (MR_Integer) 1))));
        MR_Word FirstParaRestLines_41;
        MR_Word CurLine_61;

        {
          CurLine_61 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, CurLine_61, 0) = ((MR_Box) (AvailLen_7));
          MR_hl_field(0, CurLine_61, 1) = ((MR_Box) (CurIndent_9));
          MR_hl_field(0, CurLine_61, 2) = ((MR_Box) (LineWordsStr_37));
          MR_hl_field(0, CurLine_61, 3) = ((MR_Box) (LineWordsLen_32));
          MR_hl_field(0, CurLine_61, 4) = (MR_Box) ((MR_Unsigned) (LineEndReset_36));
          MR_hl_field(0, CurLine_61, 5) = ((MR_Box) (ColorStack0_12));
          MR_hl_field(0, CurLine_61, 6) = ((MR_Box) (ColorStack1_35));
          MR_hl_field(0, CurLine_61, 7) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        }
        parse_tree__write_error_spec__group_nonfirst_line_words_8_p_0(AvailLen_7, FirstRestWord_39, LaterRestWords_40, RestIndent_19, ParaParen_18, &FirstParaRestLines_41, ColorStack1_35, &ColorStackNext_29);
        {
          FirstParaLines_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, FirstParaLines_28, 0) = ((MR_Box) (CurLine_61));
          MR_hl_field(1, FirstParaLines_28, 1) = ((MR_Box) (FirstParaRestLines_41));
        }
      }
    }
    parse_tree__write_error_spec__divide_paragraphs_into_lines_6_p_0(AvailLen_7, NextTreatAsFirst_27, NextIndent_22, LaterParas_14, &LaterParaLines_42, ColorStackNext_29);
    Var_60 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_error_line_0), FirstParaBlankLines_26, LaterParaLines_42);
    Var_59 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_error_line_0), FirstParaLines_28, Var_60);
    *Lines_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_error_line_0), FirstParaWarningLines_23, Var_59);
  }
}

static void MR_CALL 
parse_tree__write_error_spec__get_line_of_words_10_p_0(
  MR_Integer AvailLen_11,
  MR_Word FirstSCUnit_12,
  MR_Word LaterSCUnits0_13,
  MR_Unsigned Indent_14,
  MR_Integer * LineWordsLen_15,
  MR_Word * LineStrs_16,
  MR_Word * RestSCUnits_17,
  MR_Word STATE_VARIABLE_ColorStack_0_29,
  MR_Word * STATE_VARIABLE_ColorStack_30,
  MR_Word * LineEndReset_19)
{
  MR_bool succeeded;
  MR_Integer AvailLeft_20;
  MR_String FirstStr_21;
  MR_Word LineEndReset1_22;
  MR_String NextSpace_23;
  MR_Integer LenSoFar_24;
  MR_Word LaterSCUnits_25;
  MR_Word LineStrsCord0_27;
  MR_Word LineStrsCord_28;
  MR_Integer Var_31;
  MR_Unsigned Var_32;
  MR_Unsigned Var_33;
  MR_Word STATE_VARIABLE_ColorStack_34_34;

  Var_33 = libs__indent__indent2_increment_0_f_0();
  Var_32 = (Indent_14 * Var_33);
  Var_31 = mercury__uint__cast_to_int_1_f_0(Var_32);
  AvailLeft_20 = (MR_Integer) ((MR_Unsigned) AvailLen_11 - (MR_Unsigned) Var_31);
  switch (MR_tag((MR_Word) FirstSCUnit_12)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 2:
      {
        MR_Word TopColorSpec_38;
        MR_Box conv0_TopColorSpec_38;

        LineEndReset1_22 = (MR_Integer) 1;
        NextSpace_23 = (MR_String) "";
        parse_tree__write_error_spec__merge_adjacent_color_changes_5_p_0(FirstSCUnit_12, LaterSCUnits0_13, &LaterSCUnits_25, STATE_VARIABLE_ColorStack_0_29, &STATE_VARIABLE_ColorStack_34_34);
        succeeded = mercury__stack__top_2_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_color_spec_0), STATE_VARIABLE_ColorStack_34_34, &conv0_TopColorSpec_38);
        if (succeeded)
        {
          TopColorSpec_38 = ((MR_Word) (conv0_TopColorSpec_38));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          uint8_t ColorNum_41 = (uint8_t) (TopColorSpec_38);
          MR_Integer Var_45;
          MR_String Var_48;
          MR_String Var_55;

          Var_45 = mercury__uint8__cast_to_int_1_f_0(ColorNum_41);
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__write_error_spec_scalar_common_2[2]), Var_45, &Var_48);
          Var_55 = mercury__string__f_43_43_2_f_0(Var_48, (MR_String) "m");
          FirstStr_21 = mercury__string__f_43_43_2_f_0((MR_String) "\033[38;5;", Var_55);
        }
        else
          FirstStr_21 = (MR_String) "\033[39;49m";
        LenSoFar_24 = (MR_Integer) 0;
      }
      break;
    case (MR_Integer) 1:
      {
        FirstStr_21 = ((MR_String) ((MR_hl_field(1, FirstSCUnit_12, (MR_Integer) 0))));
        succeeded = mercury__stack__is_empty_1_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_color_spec_0), STATE_VARIABLE_ColorStack_0_29);
        if (succeeded)
          LineEndReset1_22 = (MR_Integer) 0;
        else
          LineEndReset1_22 = (MR_Integer) 1;
        NextSpace_23 = (MR_String) " ";
        mercury__string__count_code_points_2_p_0(FirstStr_21, &LenSoFar_24);
        LaterSCUnits_25 = LaterSCUnits0_13;
        STATE_VARIABLE_ColorStack_34_34 = STATE_VARIABLE_ColorStack_0_29;
      }
      break;
  }
  LineStrsCord0_27 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (FirstStr_21)));
  parse_tree__write_error_spec__get_later_words_12_p_0(AvailLeft_20, NextSpace_23, LaterSCUnits_25, LenSoFar_24, LineWordsLen_15, LineStrsCord0_27, &LineStrsCord_28, RestSCUnits_17, STATE_VARIABLE_ColorStack_34_34, STATE_VARIABLE_ColorStack_30, LineEndReset1_22, LineEndReset_19);
  *LineStrs_16 = mercury__cord__list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), LineStrsCord_28);
}

static void MR_CALL 
parse_tree__write_error_spec__group_nonfirst_line_words_8_p_0(
  MR_Integer AvailLen_9,
  MR_Word FirstWord_10,
  MR_Word LaterWords_11,
  MR_Unsigned Indent_12,
  MR_Word LastParen_13,
  MR_Word * Lines_14,
  MR_Word ColorStack0_15,
  MR_Word * ColorStack_16)
{
  MR_bool succeeded;
  MR_Integer LineWordsLen_17;
  MR_Word LineWords_18;
  MR_Word RestWords_19;
  MR_Word ColorStack1_20;
  MR_Word EndLineReset_21;
  MR_String LineWordsStr_22;
  MR_Integer AvailLeft_30;
  MR_String FirstStr_31;
  MR_Word LineEndReset1_32;
  MR_String NextSpace_33;
  MR_Integer LenSoFar_34;
  MR_Word LaterSCUnits_35;
  MR_Word LineStrsCord0_37;
  MR_Word LineStrsCord_38;
  MR_Integer Var_39;
  MR_Unsigned Var_40;
  MR_Unsigned Var_41;
  MR_Word STATE_VARIABLE_ColorStack_34_42;

  Var_41 = libs__indent__indent2_increment_0_f_0();
  Var_40 = (Indent_12 * Var_41);
  Var_39 = mercury__uint__cast_to_int_1_f_0(Var_40);
  AvailLeft_30 = (MR_Integer) ((MR_Unsigned) AvailLen_9 - (MR_Unsigned) Var_39);
  switch (MR_tag((MR_Word) FirstWord_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 2:
      {
        MR_Word TopColorSpec_46;
        MR_Box conv0_TopColorSpec_46;

        LineEndReset1_32 = (MR_Integer) 1;
        NextSpace_33 = (MR_String) "";
        parse_tree__write_error_spec__merge_adjacent_color_changes_5_p_0(FirstWord_10, LaterWords_11, &LaterSCUnits_35, ColorStack0_15, &STATE_VARIABLE_ColorStack_34_42);
        succeeded = mercury__stack__top_2_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_color_spec_0), STATE_VARIABLE_ColorStack_34_42, &conv0_TopColorSpec_46);
        if (succeeded)
        {
          TopColorSpec_46 = ((MR_Word) (conv0_TopColorSpec_46));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          uint8_t ColorNum_49 = (uint8_t) (TopColorSpec_46);
          MR_Integer Var_53;
          MR_String Var_56;
          MR_String Var_63;

          Var_53 = mercury__uint8__cast_to_int_1_f_0(ColorNum_49);
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__write_error_spec_scalar_common_2[2]), Var_53, &Var_56);
          Var_63 = mercury__string__f_43_43_2_f_0(Var_56, (MR_String) "m");
          FirstStr_31 = mercury__string__f_43_43_2_f_0((MR_String) "\033[38;5;", Var_63);
        }
        else
          FirstStr_31 = (MR_String) "\033[39;49m";
        LenSoFar_34 = (MR_Integer) 0;
      }
      break;
    case (MR_Integer) 1:
      {
        FirstStr_31 = ((MR_String) ((MR_hl_field(1, FirstWord_10, (MR_Integer) 0))));
        succeeded = mercury__stack__is_empty_1_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_color_spec_0), ColorStack0_15);
        if (succeeded)
          LineEndReset1_32 = (MR_Integer) 0;
        else
          LineEndReset1_32 = (MR_Integer) 1;
        NextSpace_33 = (MR_String) " ";
        mercury__string__count_code_points_2_p_0(FirstStr_31, &LenSoFar_34);
        LaterSCUnits_35 = LaterWords_11;
        STATE_VARIABLE_ColorStack_34_42 = ColorStack0_15;
      }
      break;
  }
  LineStrsCord0_37 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (FirstStr_31)));
  parse_tree__write_error_spec__get_later_words_12_p_0(AvailLeft_30, NextSpace_33, LaterSCUnits_35, LenSoFar_34, &LineWordsLen_17, LineStrsCord0_37, &LineStrsCord_38, &RestWords_19, STATE_VARIABLE_ColorStack_34_42, &ColorStack1_20, LineEndReset1_32, &EndLineReset_21);
  LineWords_18 = mercury__cord__list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), LineStrsCord_38);
  LineWordsStr_22 = mercury__string__append_list_1_f_0(LineWords_18);
  if ((RestWords_19 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Line_23;

    {
      Line_23 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Line_23, 0) = ((MR_Box) (AvailLen_9));
      MR_hl_field(0, Line_23, 1) = ((MR_Box) (Indent_12));
      MR_hl_field(0, Line_23, 2) = ((MR_Box) (LineWordsStr_22));
      MR_hl_field(0, Line_23, 3) = ((MR_Box) (LineWordsLen_17));
      MR_hl_field(0, Line_23, 4) = (MR_Box) ((MR_Unsigned) (EndLineReset_21));
      MR_hl_field(0, Line_23, 5) = ((MR_Box) (ColorStack0_15));
      MR_hl_field(0, Line_23, 6) = ((MR_Box) (ColorStack1_20));
      MR_hl_field(0, Line_23, 7) = (MR_Box) ((MR_Unsigned) (LastParen_13));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Lines_14 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Line_23));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    *ColorStack_16 = ColorStack1_20;
  }
  else
  {
    MR_Word FirstRestWord_24 = ((MR_Word) ((MR_hl_field(1, RestWords_19, (MR_Integer) 0))));
    MR_Word LaterRestWords_25 = ((MR_Word) ((MR_hl_field(1, RestWords_19, (MR_Integer) 1))));
    MR_Word RestLines_26;
    MR_Word Line_29;

    {
      Line_29 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Line_29, 0) = ((MR_Box) (AvailLen_9));
      MR_hl_field(0, Line_29, 1) = ((MR_Box) (Indent_12));
      MR_hl_field(0, Line_29, 2) = ((MR_Box) (LineWordsStr_22));
      MR_hl_field(0, Line_29, 3) = ((MR_Box) (LineWordsLen_17));
      MR_hl_field(0, Line_29, 4) = (MR_Box) ((MR_Unsigned) (EndLineReset_21));
      MR_hl_field(0, Line_29, 5) = ((MR_Box) (ColorStack0_15));
      MR_hl_field(0, Line_29, 6) = ((MR_Box) (ColorStack1_20));
      MR_hl_field(0, Line_29, 7) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    parse_tree__write_error_spec__group_nonfirst_line_words_8_p_0(AvailLen_9, FirstRestWord_24, LaterRestWords_25, Indent_12, LastParen_13, &RestLines_26, ColorStack1_20, ColorStack_16);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Lines_14 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Line_29));
      MR_hl_field(1, base, 1) = ((MR_Box) (RestLines_26));
    }
  }
}

static MR_bool MR_CALL 
parse_tree__write_error_spec__get_later_words_12_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__write_error_spec__IntroducedFrom__pred__get_later_words__1487__1_2_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__write_error_spec__get_later_words_12_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__write_error_spec__IntroducedFrom__pred__get_later_words__1513__1_2_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
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
  MR_Word STATE_VARIABLE_ColorStack_0_9,
  MR_Word * STATE_VARIABLE_ColorStack_10,
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
      *STATE_VARIABLE_ColorStack_10 = STATE_VARIABLE_ColorStack_0_9;
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
      MR_Word STATE_VARIABLE_ColorStack_58_58;

      switch (MR_tag((MR_Word) SCUnit_24)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_59;
            MR_Word TopColorSpec_67;
            MR_Box conv0_TopColorSpec_67;

            LineEndReset1_35 = (MR_Integer) 1;
            {
              Var_59 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_59, 0) = ((MR_Box) (&parse_tree__write_error_spec_scalar_common_4[0]));
              MR_hl_field(0, Var_59, 1) = ((MR_Box) (parse_tree__write_error_spec__get_later_words_12_p_0_1));
              MR_hl_field(0, Var_59, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_59, 3) = ((MR_Box) (NextSpace0_2));
              MR_hl_field(0, Var_59, 4) = ((MR_Box) ((MR_String) " "));
            }
            mercury__require__expect_3_p_0(Var_59, (MR_String) "predicate \140parse_tree.write_error_spec.get_later_words\'/12", (MR_String) "NextSpace0 != 1 for color end");
            parse_tree__write_error_spec__merge_adjacent_color_changes_5_p_0(SCUnit_24, SCUnits0_25, &SCUnits_36, STATE_VARIABLE_ColorStack_0_9, &STATE_VARIABLE_ColorStack_58_58);
            succeeded = mercury__stack__top_2_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_color_spec_0), STATE_VARIABLE_ColorStack_58_58, &conv0_TopColorSpec_67);
            if (succeeded)
            {
              TopColorSpec_67 = ((MR_Word) (conv0_TopColorSpec_67));
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              uint8_t ColorNum_70 = (uint8_t) (TopColorSpec_67);
              MR_Integer Var_74;
              MR_String Var_77;
              MR_String Var_84;

              Var_74 = mercury__uint8__cast_to_int_1_f_0(ColorNum_70);
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__write_error_spec_scalar_common_2[2]), Var_74, &Var_77);
              Var_84 = mercury__string__f_43_43_2_f_0(Var_77, (MR_String) "m");
              FirstStr_37 = mercury__string__f_43_43_2_f_0((MR_String) "\033[38;5;", Var_84);
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
            STATE_VARIABLE_ColorStack_58_58 = STATE_VARIABLE_ColorStack_0_9;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word SCUnits1_43;
            MR_Integer NextLen0_44;
            MR_Integer PeekWordLen_45;
            MR_Word Var_49;
            MR_Word STATE_VARIABLE_ColorStack_53_53;
            MR_String Var_54;
            MR_Word TopColorSpec_87;
            MR_Box conv1_TopColorSpec_87;
            MR_Integer Var_56;

            LineEndReset1_35 = (MR_Integer) 1;
            {
              Var_49 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_49, 0) = ((MR_Box) (&parse_tree__write_error_spec_scalar_common_4[0]));
              MR_hl_field(0, Var_49, 1) = ((MR_Box) (parse_tree__write_error_spec__get_later_words_12_p_0_2));
              MR_hl_field(0, Var_49, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_49, 3) = ((MR_Box) (NextSpace0_2));
              MR_hl_field(0, Var_49, 4) = ((MR_Box) ((MR_String) " "));
            }
            mercury__require__expect_3_p_0(Var_49, (MR_String) "predicate \140parse_tree.write_error_spec.get_later_words\'/12", (MR_String) "NextSpace0 != 1 for color start");
            parse_tree__write_error_spec__merge_adjacent_color_changes_5_p_0(SCUnit_24, SCUnits0_25, &SCUnits1_43, STATE_VARIABLE_ColorStack_0_9, &STATE_VARIABLE_ColorStack_53_53);
            succeeded = mercury__stack__top_2_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_color_spec_0), STATE_VARIABLE_ColorStack_53_53, &conv1_TopColorSpec_87);
            if (succeeded)
            {
              TopColorSpec_87 = ((MR_Word) (conv1_TopColorSpec_87));
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              uint8_t ColorNum_90 = (uint8_t) (TopColorSpec_87);
              MR_Integer Var_94;
              MR_String Var_97;
              MR_String Var_104;

              Var_94 = mercury__uint8__cast_to_int_1_f_0(ColorNum_90);
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__write_error_spec_scalar_common_2[2]), Var_94, &Var_97);
              Var_104 = mercury__string__f_43_43_2_f_0(Var_97, (MR_String) "m");
              Var_54 = mercury__string__f_43_43_2_f_0((MR_String) "\033[38;5;", Var_104);
            }
            else
              Var_54 = (MR_String) "\033[39;49m";
            FirstStr_37 = mercury__string__f_43_43_2_f_0(NextSpace0_2, Var_54);
            NextLen0_44 = (MR_Integer) ((MR_Unsigned) CurLen_4 + (MR_Unsigned) 1);
            NextSpace_40 = (MR_String) "";
            if ((SCUnits1_43 == (MR_Word) ((MR_Unsigned) 0U)))
              PeekWordLen_45 = (MR_Integer) 0;
            else
            {
              MR_Word SCUnit_106 = ((MR_Word) ((MR_hl_field(1, SCUnits1_43, (MR_Integer) 0))));

              switch (MR_tag((MR_Word) SCUnit_106)) {
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
                    MR_String Str_109 = ((MR_String) ((MR_hl_field(1, SCUnit_106, (MR_Integer) 0))));

                    mercury__string__count_code_points_2_p_0(Str_109, &PeekWordLen_45);
                  }
                  break;
              }
            }
            Var_56 = (MR_Integer) ((MR_Unsigned) NextLen0_44 + (MR_Unsigned) PeekWordLen_45);
            succeeded = (Var_56 <= Avail_1);
            if (succeeded)
            {
              SCUnits_36 = SCUnits1_43;
              NextLen_39 = NextLen0_44;
              STATE_VARIABLE_ColorStack_58_58 = STATE_VARIABLE_ColorStack_53_53;
            }
            else
            {
              SCUnits_36 = SCUnits0_25;
              NextLen_39 = (MR_Integer) ((MR_Unsigned) Avail_1 + (MR_Unsigned) 1);
              STATE_VARIABLE_ColorStack_58_58 = STATE_VARIABLE_ColorStack_0_9;
            }
          }
          break;
      }
      succeeded = (NextLen_39 <= Avail_1);
      if (!(succeeded))
        succeeded = (CurLen_4 == (MR_Integer) 0);
      if (succeeded)
      {
        MR_Word LineStrs1_46;
        MR_String next_value_of_NextSpace0_2;
        MR_Word next_value_of_HeadVar__3_3;
        MR_Integer next_value_of_CurLen_4;
        MR_Word next_value_of_HeadVar__6_6;
        MR_Word next_value_of_STATE_VARIABLE_ColorStack_0_9;
        MR_Word next_value_of_HeadVar__11_11;

        mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (FirstStr_37)), HeadVar__6_6, &LineStrs1_46);
        // direct tailcall eliminated
        ;
        next_value_of_NextSpace0_2 = NextSpace_40;
        next_value_of_HeadVar__3_3 = SCUnits_36;
        next_value_of_CurLen_4 = NextLen_39;
        next_value_of_HeadVar__6_6 = LineStrs1_46;
        next_value_of_STATE_VARIABLE_ColorStack_0_9 = STATE_VARIABLE_ColorStack_58_58;
        next_value_of_HeadVar__11_11 = LineEndReset1_35;
        NextSpace0_2 = next_value_of_NextSpace0_2;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        CurLen_4 = next_value_of_CurLen_4;
        HeadVar__6_6 = next_value_of_HeadVar__6_6;
        STATE_VARIABLE_ColorStack_0_9 = next_value_of_STATE_VARIABLE_ColorStack_0_9;
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
        *STATE_VARIABLE_ColorStack_10 = STATE_VARIABLE_ColorStack_58_58;
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
  MR_Word STATE_VARIABLE_ColorStack_0_16,
  MR_Word * STATE_VARIABLE_ColorStack_17)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word STATE_VARIABLE_ColorStack_18_18;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadSCUnit_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word STATE_VARIABLE_ColorStack_19_19;
      MR_Box conv0__OldTopColor_11;

      succeeded = mercury__stack__pop_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_color_spec_0), &conv0__OldTopColor_11, STATE_VARIABLE_ColorStack_0_16, &STATE_VARIABLE_ColorStack_19_19);
      if (succeeded)
        succeeded = MR_TRUE;
      if (succeeded)
        STATE_VARIABLE_ColorStack_18_18 = STATE_VARIABLE_ColorStack_19_19;
      else
        STATE_VARIABLE_ColorStack_18_18 = STATE_VARIABLE_ColorStack_0_16;
    }
    else
    {
      MR_Word Color_10 = ((MR_Word) ((MR_hl_field(2, HeadSCUnit_6, (MR_Integer) 0))));

      mercury__stack__push_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_color_spec_0), ((MR_Box) (Color_10)), STATE_VARIABLE_ColorStack_0_16, &STATE_VARIABLE_ColorStack_18_18);
    }
    if ((TailSCUnits0_7 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *SCUnits_8 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_ColorStack_17 = STATE_VARIABLE_ColorStack_18_18;
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
            MR_Word next_value_of_STATE_VARIABLE_ColorStack_0_16 = STATE_VARIABLE_ColorStack_18_18;

            // direct tailcall eliminated
            ;
            HeadSCUnit_6 = next_value_of_HeadSCUnit_6;
            TailSCUnits0_7 = next_value_of_TailSCUnits0_7;
            STATE_VARIABLE_ColorStack_0_16 = next_value_of_STATE_VARIABLE_ColorStack_0_16;
            continue;
          }
          break;
        case (MR_Integer) 1:
          {
            *SCUnits_8 = TailSCUnits0_7;
            *STATE_VARIABLE_ColorStack_17 = STATE_VARIABLE_ColorStack_18_18;
          }
          break;
      }
    }
    break;
  }
}

static void MR_CALL 
parse_tree__write_error_spec__convert_pieces_to_paragraphs_acc_6_p_0(
  MR_Word ColorDb_1,
  MR_Word FirstInMsg_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_WordsCord_0_4,
  MR_Word STATE_VARIABLE_Paras_0_5,
  MR_Word * STATE_VARIABLE_Paras_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word SCUnits_11;
      MR_Word Var_15;

      SCUnits_11 = parse_tree__write_error_spec__words_cord_to_sc_units_1_f_0(STATE_VARIABLE_WordsCord_0_4);
      {
        Var_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_15, 0) = ((MR_Box) (SCUnits_11));
        MR_hl_field(0, Var_15, 1) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(0, Var_15, 2) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(0, Var_15, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      }
      parse_tree__write_error_spec__add_paragraph_3_p_0(Var_15, STATE_VARIABLE_Paras_0_5, STATE_VARIABLE_Paras_6);
    }
    else
    {
      MR_Word Piece0_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Pieces0_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Piece_29;
      MR_Word Pieces_30;
      MR_Word TailFirstInMsg_76;
      MR_Word STATE_VARIABLE_WordsCord_80_80;
      MR_Word STATE_VARIABLE_Paras_140_140;
      MR_Word HeadPiece0_27;
      MR_Word TailPieces0_28;
      MR_Word next_value_of_FirstInMsg_2;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_WordsCord_0_4;
      MR_Word next_value_of_STATE_VARIABLE_Paras_0_5;

      if ((Piece0_22 == (MR_Word) ((MR_Unsigned) 8U)))
        succeeded = MR_TRUE;
      else
      if (((((MR_tag((MR_Word) Piece0_22)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Piece0_22, (MR_Integer) 0)))) == (MR_Integer) 35))))
        succeeded = MR_TRUE;
      else
        succeeded = MR_FALSE;
      if (succeeded)
      {
        succeeded = (Pieces0_23 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          HeadPiece0_27 = ((MR_Word) ((MR_hl_field(1, Pieces0_23, (MR_Integer) 0))));
          TailPieces0_28 = ((MR_Word) ((MR_hl_field(1, Pieces0_23, (MR_Integer) 1))));
          succeeded = (HeadPiece0_27 == (MR_Word) ((MR_Unsigned) 16U));
        }
      }
      if (succeeded)
      {
        Piece_29 = HeadPiece0_27;
        {
          Pieces_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_30, 0) = ((MR_Box) (Piece0_22));
          MR_hl_field(1, Pieces_30, 1) = ((MR_Box) (TailPieces0_28));
        }
      }
      else
      {
        Piece_29 = Piece0_22;
        Pieces_30 = Pieces0_23;
      }
      switch (MR_tag((MR_Word) Piece_29)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(Piece_29)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                switch (FirstInMsg_2) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    STATE_VARIABLE_WordsCord_80_80 = STATE_VARIABLE_WordsCord_0_4;
                    break;
                  case (MR_Integer) 1:
                    mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_word_0), ((MR_Box) ((MR_Unsigned) 0U)), STATE_VARIABLE_WordsCord_0_4, &STATE_VARIABLE_WordsCord_80_80);
                    break;
                }
                STATE_VARIABLE_Paras_140_140 = STATE_VARIABLE_Paras_0_5;
              }
              break;
            case (MR_Integer) 1:
              {
                STATE_VARIABLE_WordsCord_80_80 = STATE_VARIABLE_WordsCord_0_4;
                STATE_VARIABLE_Paras_140_140 = STATE_VARIABLE_Paras_0_5;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word SCUnits_60;
                MR_Word Var_139;

                SCUnits_60 = parse_tree__write_error_spec__words_cord_to_sc_units_1_f_0(STATE_VARIABLE_WordsCord_0_4);
                {
                  Var_139 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_139, 0) = ((MR_Box) (SCUnits_60));
                  MR_hl_field(0, Var_139, 1) = ((MR_Box) ((MR_Integer) 0));
                  MR_hl_field(0, Var_139, 2) = ((MR_Box) ((MR_Integer) 0));
                  MR_hl_field(0, Var_139, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                }
                parse_tree__write_error_spec__add_paragraph_3_p_0(Var_139, STATE_VARIABLE_Paras_0_5, &STATE_VARIABLE_Paras_140_140);
                STATE_VARIABLE_WordsCord_80_80 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_word_0));
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Var_150;
                MR_Word SCUnits_238;

                SCUnits_238 = parse_tree__write_error_spec__words_cord_to_sc_units_1_f_0(STATE_VARIABLE_WordsCord_0_4);
                {
                  Var_150 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_150, 0) = ((MR_Box) (SCUnits_238));
                  MR_hl_field(0, Var_150, 1) = ((MR_Box) ((MR_Integer) 1));
                  MR_hl_field(0, Var_150, 2) = ((MR_Box) ((MR_Integer) 0));
                  MR_hl_field(0, Var_150, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                }
                parse_tree__write_error_spec__add_paragraph_3_p_0(Var_150, STATE_VARIABLE_Paras_0_5, &STATE_VARIABLE_Paras_140_140);
                STATE_VARIABLE_WordsCord_80_80 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_word_0));
              }
              break;
            case (MR_Integer) 4:
              {
                if ((ColorDb_1 == (MR_Word) ((MR_Unsigned) 0U)))
                  STATE_VARIABLE_WordsCord_80_80 = STATE_VARIABLE_WordsCord_0_4;
                else
                  mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_word_0), ((MR_Box) ((MR_Unsigned) 4U)), STATE_VARIABLE_WordsCord_0_4, &STATE_VARIABLE_WordsCord_80_80);
                STATE_VARIABLE_Paras_140_140 = STATE_VARIABLE_Paras_0_5;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            STATE_VARIABLE_WordsCord_80_80 = STATE_VARIABLE_WordsCord_0_4;
            STATE_VARIABLE_Paras_140_140 = STATE_VARIABLE_Paras_0_5;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String Word_33 = ((MR_String) ((MR_hl_field(2, Piece_29, (MR_Integer) 0))));
            MR_Word Var_83;

            {
              Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_83, 0) = ((MR_Box) (Word_33));
            }
            mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_word_0), ((MR_Box) (Var_83)), STATE_VARIABLE_WordsCord_0_4, &STATE_VARIABLE_WordsCord_80_80);
            STATE_VARIABLE_Paras_140_140 = STATE_VARIABLE_Paras_0_5;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, Piece_29, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_85;
                MR_String Var_87;
                MR_String Word_176 = ((MR_String) ((MR_hl_field(3, Piece_29, (MR_Integer) 1))));

                Var_87 = parse_tree__error_spec__add_quotes_1_f_0(Word_176);
                {
                  Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_85, 0) = ((MR_Box) (Var_87));
                }
                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_word_0), ((MR_Box) (Var_85)), STATE_VARIABLE_WordsCord_0_4, &STATE_VARIABLE_WordsCord_80_80);
                STATE_VARIABLE_Paras_140_140 = STATE_VARIABLE_Paras_0_5;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer Int_34 = ((MR_Integer) ((MR_hl_field(3, Piece_29, (MR_Integer) 1))));
                MR_Word Var_88;
                MR_String Var_90;

                Var_90 = mercury__string__int_to_string_1_f_0(Int_34);
                {
                  Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_88, 0) = ((MR_Box) (Var_90));
                }
                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_word_0), ((MR_Box) (Var_88)), STATE_VARIABLE_WordsCord_0_4, &STATE_VARIABLE_WordsCord_80_80);
                STATE_VARIABLE_Paras_140_140 = STATE_VARIABLE_Paras_0_5;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Var_91;
                MR_String Var_93;
                MR_Integer Int_177 = ((MR_Integer) ((MR_hl_field(3, Piece_29, (MR_Integer) 1))));

                Var_93 = parse_tree__write_error_spec__int_name_str_1_f_0(Int_177);
                {
                  Var_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_91, 0) = ((MR_Box) (Var_93));
                }
                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_word_0), ((MR_Box) (Var_91)), STATE_VARIABLE_WordsCord_0_4, &STATE_VARIABLE_WordsCord_80_80);
                STATE_VARIABLE_Paras_140_140 = STATE_VARIABLE_Paras_0_5;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Var_94;
                MR_String Var_96;
                MR_Integer Int_178 = ((MR_Integer) ((MR_hl_field(3, Piece_29, (MR_Integer) 1))));

                Var_96 = parse_tree__write_error_spec__nth_fixed_str_1_f_0(Int_178);
                {
                  Var_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_94, 0) = ((MR_Box) (Var_96));
                }
                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_word_0), ((MR_Box) (Var_94)), STATE_VARIABLE_WordsCord_0_4, &STATE_VARIABLE_WordsCord_80_80);
                STATE_VARIABLE_Paras_140_140 = STATE_VARIABLE_Paras_0_5;
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Var_99;
                MR_String Word_179 = ((MR_String) ((MR_hl_field(3, Piece_29, (MR_Integer) 1))));

                {
                  Var_99 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, Var_99, 0) = ((MR_Box) (Word_179));
                }
                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_word_0), ((MR_Box) (Var_99)), STATE_VARIABLE_WordsCord_0_4, &STATE_VARIABLE_WordsCord_80_80);
                STATE_VARIABLE_Paras_140_140 = STATE_VARIABLE_Paras_0_5;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Var_101;
                MR_String Word_180 = ((MR_String) ((MR_hl_field(3, Piece_29, (MR_Integer) 1))));

                {
                  Var_101 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_101, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(3, Var_101, 1) = ((MR_Box) (Word_180));
                }
                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_word_0), ((MR_Box) (Var_101)), STATE_VARIABLE_WordsCord_0_4, &STATE_VARIABLE_WordsCord_80_80);
                STATE_VARIABLE_Paras_140_140 = STATE_VARIABLE_Paras_0_5;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_String WordsStr_31 = ((MR_String) ((MR_hl_field(3, Piece_29, (MR_Integer) 1))));
                MR_Word PieceWordsCord_32;

                parse_tree__write_error_spec__break_into_words_2_p_0(WordsStr_31, &PieceWordsCord_32);
                STATE_VARIABLE_WordsCord_80_80 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_word_0), STATE_VARIABLE_WordsCord_0_4, PieceWordsCord_32);
                STATE_VARIABLE_Paras_140_140 = STATE_VARIABLE_Paras_0_5;
              }
              break;
            case (MR_Integer) 7:
              {
                MR_String Var_81;
                MR_String WordsStr_174 = ((MR_String) ((MR_hl_field(3, Piece_29, (MR_Integer) 1))));
                MR_Word PieceWordsCord_175;

                Var_81 = parse_tree__error_spec__add_quotes_1_f_0(WordsStr_174);
                parse_tree__write_error_spec__break_into_words_2_p_0(Var_81, &PieceWordsCord_175);
                STATE_VARIABLE_WordsCord_80_80 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_word_0), STATE_VARIABLE_WordsCord_0_4, PieceWordsCord_175);
                STATE_VARIABLE_Paras_140_140 = STATE_VARIABLE_Paras_0_5;
              }
              break;
            case (MR_Integer) 8:
              {
                MR_Word SymName_35 = ((MR_Word) ((MR_hl_field(3, Piece_29, (MR_Integer) 1))));
                MR_Word Var_104;
                MR_String Word_181;

                Word_181 = parse_tree__write_error_spec__sym_name_to_word_1_f_0(SymName_35);
                {
                  Var_104 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_104, 0) = ((MR_Box) (Word_181));
                }
                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_word_0), ((MR_Box) (Var_104)), STATE_VARIABLE_WordsCord_0_4, &STATE_VARIABLE_WordsCord_80_80);
                STATE_VARIABLE_Paras_140_140 = STATE_VARIABLE_Paras_0_5;
              }
              break;
            case (MR_Integer) 9:
              {
                MR_Word SymName0_36 = ((MR_Word) ((MR_hl_field(3, Piece_29, (MR_Integer) 1))));
                MR_String Var_103;
                MR_Word SymName_325;
                MR_Word Var_326;
                MR_String Word_327;

                Var_103 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName0_36);
                {
                  SymName_325 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, SymName_325, 0) = ((MR_Box) (Var_103));
                }
                Word_327 = parse_tree__write_error_spec__sym_name_to_word_1_f_0(SymName_325);
                {
                  Var_326 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_326, 0) = ((MR_Box) (Word_327));
                }
                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_word_0), ((MR_Box) (Var_326)), STATE_VARIABLE_WordsCord_0_4, &STATE_VARIABLE_WordsCord_80_80);
                STATE_VARIABLE_Paras_140_140 = STATE_VARIABLE_Paras_0_5;
              }
              break;
            case (MR_Integer) 10:
              {
                MR_Word NameAndArity_37 = ((MR_Word) ((MR_hl_field(3, Piece_29, (MR_Integer) 1))));
                MR_Word Var_106;
                MR_String Word_182;

                Word_182 = parse_tree__write_error_spec__name_arity_to_word_1_f_0(NameAndArity_37);
                {
                  Var_106 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_106, 0) = ((MR_Box) (Word_182));
                }
                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_word_0), ((MR_Box) (Var_106)), STATE_VARIABLE_WordsCord_0_4, &STATE_VARIABLE_WordsCord_80_80);
                STATE_VARIABLE_Paras_140_140 = STATE_VARIABLE_Paras_0_5;
              }
              break;
            case (MR_Integer) 11:
              {
                MR_Word SymNameAndArity_38 = ((MR_Word) ((MR_hl_field(3, Piece_29, (MR_Integer) 1))));
                MR_Word Var_109;
                MR_String Word_187;

                Word_187 = parse_tree__write_error_spec__sym_name_arity_to_word_1_f_0(SymNameAndArity_38);
                {
                  Var_109 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_109, 0) = ((MR_Box) (Word_187));
                }
                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_word_0), ((MR_Box) (Var_109)), STATE_VARIABLE_WordsCord_0_4, &STATE_VARIABLE_WordsCord_80_80);
                STATE_VARIABLE_Paras_140_140 = STATE_VARIABLE_Paras_0_5;
              }
              break;
            case (MR_Integer) 12:
              {
                MR_Word SymNameAndArity0_39 = ((MR_Word) ((MR_hl_field(3, Piece_29, (MR_Integer) 1))));
                MR_Integer Arity_40 = ((MR_Integer) ((MR_hl_field(0, SymNameAndArity0_39, (MR_Integer) 1))));
                MR_String Var_108;
                MR_Word SymName_183;
                MR_Word SymName0_184 = ((MR_Word) ((MR_hl_field(0, SymNameAndArity0_39, (MR_Integer) 0))));
                MR_Word SymNameAndArity_329;
                MR_Word Var_330;
                MR_String Word_331;

                Var_108 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName0_184);
                {
                  SymName_183 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, SymName_183, 0) = ((MR_Box) (Var_108));
                }
                {
                  SymNameAndArity_329 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, SymNameAndArity_329, 0) = ((MR_Box) (SymName_183));
                  MR_hl_field(0, SymNameAndArity_329, 1) = ((MR_Box) (Arity_40));
                }
                Word_331 = parse_tree__write_error_spec__sym_name_arity_to_word_1_f_0(SymNameAndArity_329);
                {
                  Var_330 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_330, 0) = ((MR_Box) (Word_331));
                }
                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_word_0), ((MR_Box) (Var_330)), STATE_VARIABLE_WordsCord_0_4, &STATE_VARIABLE_WordsCord_80_80);
                STATE_VARIABLE_Paras_140_140 = STATE_VARIABLE_Paras_0_5;
              }
              break;
            case (MR_Integer) 13:
              {
                MR_Word PFSymNameArity_41 = ((MR_Word) ((MR_hl_field(3, Piece_29, (MR_Integer) 1))));
                MR_String WordsStr_194;
                MR_Word PieceWordsCord_195;

                WordsStr_194 = parse_tree__parse_tree_out_sym_name__pf_sym_name_pred_form_arity_to_string_1_f_0(PFSymNameArity_41);
                parse_tree__write_error_spec__break_into_words_2_p_0(WordsStr_194, &PieceWordsCord_195);
                STATE_VARIABLE_WordsCord_80_80 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_word_0), STATE_VARIABLE_WordsCord_0_4, PieceWordsCord_195);
                STATE_VARIABLE_Paras_140_140 = STATE_VARIABLE_Paras_0_5;
              }
              break;
            case (MR_Integer) 14:
              {
                MR_Word PFSymNameArity0_42 = ((MR_Word) ((MR_hl_field(3, Piece_29, (MR_Integer) 1))));
                MR_Word PF_43 = ((MR_Unsigned) ((MR_hl_field(0, PFSymNameArity0_42, (MR_Integer) 0))) & (MR_Integer) 1);
                MR_Word PredFormArity_44 = ((MR_Word) ((MR_hl_field(0, PFSymNameArity0_42, (MR_Integer) 2))));
                MR_String Var_111;
                MR_Word SymName_190;
                MR_Word SymName0_191 = ((MR_Word) ((MR_hl_field(0, PFSymNameArity0_42, (MR_Integer) 1))));
                MR_Word PFSymNameArity_317;
                MR_String WordsStr_318;
                MR_Word PieceWordsCord_319;

                Var_111 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName0_191);
                {
                  SymName_190 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, SymName_190, 0) = ((MR_Box) (Var_111));
                }
                {
                  PFSymNameArity_317 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, PFSymNameArity_317, 0) = (MR_Box) ((MR_Unsigned) (PF_43));
                  MR_hl_field(0, PFSymNameArity_317, 1) = ((MR_Box) (SymName_190));
                  MR_hl_field(0, PFSymNameArity_317, 2) = ((MR_Box) (PredFormArity_44));
                }
                WordsStr_318 = parse_tree__parse_tree_out_sym_name__pf_sym_name_pred_form_arity_to_string_1_f_0(PFSymNameArity_317);
                parse_tree__write_error_spec__break_into_words_2_p_0(WordsStr_318, &PieceWordsCord_319);
                STATE_VARIABLE_WordsCord_80_80 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_word_0), STATE_VARIABLE_WordsCord_0_4, PieceWordsCord_319);
                STATE_VARIABLE_Paras_140_140 = STATE_VARIABLE_Paras_0_5;
              }
              break;
            case (MR_Integer) 15:
              {
                MR_String WordsStr_206;
                MR_Word PieceWordsCord_207;
                MR_Word PFSymNameArity_210 = ((MR_Word) ((MR_hl_field(3, Piece_29, (MR_Integer) 1))));

                WordsStr_206 = parse_tree__parse_tree_out_sym_name__pf_sym_name_user_arity_to_string_1_f_0(PFSymNameArity_210);
                parse_tree__write_error_spec__break_into_words_2_p_0(WordsStr_206, &PieceWordsCord_207);
                STATE_VARIABLE_WordsCord_80_80 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_word_0), STATE_VARIABLE_WordsCord_0_4, PieceWordsCord_207);
                STATE_VARIABLE_Paras_140_140 = STATE_VARIABLE_Paras_0_5;
              }
              break;
            case (MR_Integer) 16:
              {
                MR_Word UserArity_45;
                MR_String Var_113;
                MR_Word SymName_198;
                MR_Word SymName0_199;
                MR_Word PFSymNameArity0_200 = ((MR_Word) ((MR_hl_field(3, Piece_29, (MR_Integer) 1))));
                MR_Word PF_201 = ((MR_Unsigned) ((MR_hl_field(0, PFSymNameArity0_200, (MR_Integer) 0))) & (MR_Integer) 1);
                MR_String WordsStr_321;
                MR_Word PieceWordsCord_322;
                MR_Word PFSymNameArity_323;

                SymName0_199 = ((MR_Word) ((MR_hl_field(0, PFSymNameArity0_200, (MR_Integer) 1))));
                UserArity_45 = ((MR_Word) ((MR_hl_field(0, PFSymNameArity0_200, (MR_Integer) 2))));
                Var_113 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName0_199);
                {
                  SymName_198 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, SymName_198, 0) = ((MR_Box) (Var_113));
                }
                {
                  PFSymNameArity_323 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, PFSymNameArity_323, 0) = (MR_Box) ((MR_Unsigned) (PF_201));
                  MR_hl_field(0, PFSymNameArity_323, 1) = ((MR_Box) (SymName_198));
                  MR_hl_field(0, PFSymNameArity_323, 2) = ((MR_Box) (UserArity_45));
                }
                WordsStr_321 = parse_tree__parse_tree_out_sym_name__pf_sym_name_user_arity_to_string_1_f_0(PFSymNameArity_323);
                parse_tree__write_error_spec__break_into_words_2_p_0(WordsStr_321, &PieceWordsCord_322);
                STATE_VARIABLE_WordsCord_80_80 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_word_0), STATE_VARIABLE_WordsCord_0_4, PieceWordsCord_322);
                STATE_VARIABLE_Paras_140_140 = STATE_VARIABLE_Paras_0_5;
              }
              break;
            case (MR_Integer) 17:
              {
                MR_Word TypeCtor_48 = ((MR_Word) ((MR_hl_field(3, Piece_29, (MR_Integer) 1))));
                MR_Word Var_289;
                MR_String Word_290;
                MR_Word SymName_291 = ((MR_Word) ((MR_hl_field(0, TypeCtor_48, (MR_Integer) 0))));
                MR_Word SymNameAndArity_292;
                MR_Integer Arity_293 = ((MR_Integer) ((MR_hl_field(0, TypeCtor_48, (MR_Integer) 1))));

                {
                  SymNameAndArity_292 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, SymNameAndArity_292, 0) = ((MR_Box) (SymName_291));
                  MR_hl_field(0, SymNameAndArity_292, 1) = ((MR_Box) (Arity_293));
                }
                Word_290 = parse_tree__write_error_spec__sym_name_arity_to_word_1_f_0(SymNameAndArity_292);
                {
                  Var_289 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_289, 0) = ((MR_Box) (Word_290));
                }
                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_word_0), ((MR_Box) (Var_289)), STATE_VARIABLE_WordsCord_0_4, &STATE_VARIABLE_WordsCord_80_80);
                STATE_VARIABLE_Paras_140_140 = STATE_VARIABLE_Paras_0_5;
              }
              break;
            case (MR_Integer) 18:
              {
                MR_String Var_117;
                MR_Word SymName0_215;
                MR_Word TypeCtor_216 = ((MR_Word) ((MR_hl_field(3, Piece_29, (MR_Integer) 1))));
                MR_Word Var_333;
                MR_String Word_334;
                MR_Word SymName_335;
                MR_Word SymNameAndArity_336;
                MR_Integer Arity_337;

                SymName0_215 = ((MR_Word) ((MR_hl_field(0, TypeCtor_216, (MR_Integer) 0))));
                Arity_337 = ((MR_Integer) ((MR_hl_field(0, TypeCtor_216, (MR_Integer) 1))));
                Var_117 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName0_215);
                {
                  SymName_335 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, SymName_335, 0) = ((MR_Box) (Var_117));
                }
                {
                  SymNameAndArity_336 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, SymNameAndArity_336, 0) = ((MR_Box) (SymName_335));
                  MR_hl_field(0, SymNameAndArity_336, 1) = ((MR_Box) (Arity_337));
                }
                Word_334 = parse_tree__write_error_spec__sym_name_arity_to_word_1_f_0(SymNameAndArity_336);
                {
                  Var_333 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_333, 0) = ((MR_Box) (Word_334));
                }
                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_word_0), ((MR_Box) (Var_333)), STATE_VARIABLE_WordsCord_0_4, &STATE_VARIABLE_WordsCord_80_80);
                STATE_VARIABLE_Paras_140_140 = STATE_VARIABLE_Paras_0_5;
              }
              break;
            case (MR_Integer) 19:
              {
                MR_Word InstCtor_49 = ((MR_Word) ((MR_hl_field(3, Piece_29, (MR_Integer) 1))));
                MR_Word Var_277;
                MR_String Word_278;
                MR_Word SymName_279 = ((MR_Word) ((MR_hl_field(0, InstCtor_49, (MR_Integer) 0))));
                MR_Word SymNameAndArity_280;
                MR_Integer Arity_281 = ((MR_Integer) ((MR_hl_field(0, InstCtor_49, (MR_Integer) 1))));

                {
                  SymNameAndArity_280 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, SymNameAndArity_280, 0) = ((MR_Box) (SymName_279));
                  MR_hl_field(0, SymNameAndArity_280, 1) = ((MR_Box) (Arity_281));
                }
                Word_278 = parse_tree__write_error_spec__sym_name_arity_to_word_1_f_0(SymNameAndArity_280);
                {
                  Var_277 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_277, 0) = ((MR_Box) (Word_278));
                }
                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_word_0), ((MR_Box) (Var_277)), STATE_VARIABLE_WordsCord_0_4, &STATE_VARIABLE_WordsCord_80_80);
                STATE_VARIABLE_Paras_140_140 = STATE_VARIABLE_Paras_0_5;
              }
              break;
            case (MR_Integer) 20:
              {
                MR_String Var_118;
                MR_Word SymName0_217;
                MR_Word InstCtor_218 = ((MR_Word) ((MR_hl_field(3, Piece_29, (MR_Integer) 1))));
                MR_Word Var_305;
                MR_String Word_306;
                MR_Word SymName_307;
                MR_Word SymNameAndArity_308;
                MR_Integer Arity_309;

                SymName0_217 = ((MR_Word) ((MR_hl_field(0, InstCtor_218, (MR_Integer) 0))));
                Arity_309 = ((MR_Integer) ((MR_hl_field(0, InstCtor_218, (MR_Integer) 1))));
                Var_118 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName0_217);
                {
                  SymName_307 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, SymName_307, 0) = ((MR_Box) (Var_118));
                }
                {
                  SymNameAndArity_308 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, SymNameAndArity_308, 0) = ((MR_Box) (SymName_307));
                  MR_hl_field(0, SymNameAndArity_308, 1) = ((MR_Box) (Arity_309));
                }
                Word_306 = parse_tree__write_error_spec__sym_name_arity_to_word_1_f_0(SymNameAndArity_308);
                {
                  Var_305 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_305, 0) = ((MR_Box) (Word_306));
                }
                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_word_0), ((MR_Box) (Var_305)), STATE_VARIABLE_WordsCord_0_4, &STATE_VARIABLE_WordsCord_80_80);
                STATE_VARIABLE_Paras_140_140 = STATE_VARIABLE_Paras_0_5;
              }
              break;
            case (MR_Integer) 21:
              {
                MR_Word ModeCtor_50 = ((MR_Word) ((MR_hl_field(3, Piece_29, (MR_Integer) 1))));
                MR_Word Var_283;
                MR_String Word_284;
                MR_Word SymName_285 = ((MR_Word) ((MR_hl_field(0, ModeCtor_50, (MR_Integer) 0))));
                MR_Word SymNameAndArity_286;
                MR_Integer Arity_287 = ((MR_Integer) ((MR_hl_field(0, ModeCtor_50, (MR_Integer) 1))));

                {
                  SymNameAndArity_286 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, SymNameAndArity_286, 0) = ((MR_Box) (SymName_285));
                  MR_hl_field(0, SymNameAndArity_286, 1) = ((MR_Box) (Arity_287));
                }
                Word_284 = parse_tree__write_error_spec__sym_name_arity_to_word_1_f_0(SymNameAndArity_286);
                {
                  Var_283 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_283, 0) = ((MR_Box) (Word_284));
                }
                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_word_0), ((MR_Box) (Var_283)), STATE_VARIABLE_WordsCord_0_4, &STATE_VARIABLE_WordsCord_80_80);
                STATE_VARIABLE_Paras_140_140 = STATE_VARIABLE_Paras_0_5;
              }
              break;
            case (MR_Integer) 22:
              {
                MR_String Var_119;
                MR_Word SymName0_219;
                MR_Word ModeCtor_220 = ((MR_Word) ((MR_hl_field(3, Piece_29, (MR_Integer) 1))));
                MR_Word Var_311;
                MR_String Word_312;
                MR_Word SymName_313;
                MR_Word SymNameAndArity_314;
                MR_Integer Arity_315;

                SymName0_219 = ((MR_Word) ((MR_hl_field(0, ModeCtor_220, (MR_Integer) 0))));
                Arity_315 = ((MR_Integer) ((MR_hl_field(0, ModeCtor_220, (MR_Integer) 1))));
                Var_119 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName0_219);
                {
                  SymName_313 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, SymName_313, 0) = ((MR_Box) (Var_119));
                }
                {
                  SymNameAndArity_314 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, SymNameAndArity_314, 0) = ((MR_Box) (SymName_313));
                  MR_hl_field(0, SymNameAndArity_314, 1) = ((MR_Box) (Arity_315));
                }
                Word_312 = parse_tree__write_error_spec__sym_name_arity_to_word_1_f_0(SymNameAndArity_314);
                {
                  Var_311 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_311, 0) = ((MR_Box) (Word_312));
                }
                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_word_0), ((MR_Box) (Var_311)), STATE_VARIABLE_WordsCord_0_4, &STATE_VARIABLE_WordsCord_80_80);
                STATE_VARIABLE_Paras_140_140 = STATE_VARIABLE_Paras_0_5;
              }
              break;
            case (MR_Integer) 23:
              {
                MR_Word ClassId_51 = ((MR_Word) ((MR_hl_field(3, Piece_29, (MR_Integer) 1))));
                MR_Word Var_121;
                MR_String Word_224;
                MR_Word SymName_225 = ((MR_Word) ((MR_hl_field(0, ClassId_51, (MR_Integer) 0))));
                MR_Word SymNameAndArity_227;
                MR_Integer Arity_228 = ((MR_Integer) ((MR_hl_field(0, ClassId_51, (MR_Integer) 1))));

                {
                  SymNameAndArity_227 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, SymNameAndArity_227, 0) = ((MR_Box) (SymName_225));
                  MR_hl_field(0, SymNameAndArity_227, 1) = ((MR_Box) (Arity_228));
                }
                Word_224 = parse_tree__write_error_spec__sym_name_arity_to_word_1_f_0(SymNameAndArity_227);
                {
                  Var_121 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_121, 0) = ((MR_Box) (Word_224));
                }
                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_word_0), ((MR_Box) (Var_121)), STATE_VARIABLE_WordsCord_0_4, &STATE_VARIABLE_WordsCord_80_80);
                STATE_VARIABLE_Paras_140_140 = STATE_VARIABLE_Paras_0_5;
              }
              break;
            case (MR_Integer) 24:
              {
                MR_String Var_120;
                MR_Word SymName0_221;
                MR_Word ClassId_222 = ((MR_Word) ((MR_hl_field(3, Piece_29, (MR_Integer) 1))));
                MR_Word Var_295;
                MR_String Word_296;
                MR_Word SymName_297;
                MR_Word SymNameAndArity_298;
                MR_Integer Arity_299;

                SymName0_221 = ((MR_Word) ((MR_hl_field(0, ClassId_222, (MR_Integer) 0))));
                Arity_299 = ((MR_Integer) ((MR_hl_field(0, ClassId_222, (MR_Integer) 1))));
                Var_120 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName0_221);
                {
                  SymName_297 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, SymName_297, 0) = ((MR_Box) (Var_120));
                }
                {
                  SymNameAndArity_298 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, SymNameAndArity_298, 0) = ((MR_Box) (SymName_297));
                  MR_hl_field(0, SymNameAndArity_298, 1) = ((MR_Box) (Arity_299));
                }
                Word_296 = parse_tree__write_error_spec__sym_name_arity_to_word_1_f_0(SymNameAndArity_298);
                {
                  Var_295 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_295, 0) = ((MR_Box) (Word_296));
                }
                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_word_0), ((MR_Box) (Var_295)), STATE_VARIABLE_WordsCord_0_4, &STATE_VARIABLE_WordsCord_80_80);
                STATE_VARIABLE_Paras_140_140 = STATE_VARIABLE_Paras_0_5;
              }
              break;
            case (MR_Integer) 25:
              {
                MR_Word ConsId0_46 = ((MR_Word) ((MR_hl_field(3, Piece_29, (MR_Integer) 1))));
                MR_Word ConsId_47;
                MR_Word Var_115;
                MR_String Word_214;

                parse_tree__prog_util__strip_builtin_qualifier_from_cons_id_2_p_0(ConsId0_46, &ConsId_47);
                Word_214 = parse_tree__parse_tree_out_cons_id__maybe_quoted_cons_id_and_arity_to_string_1_f_0(ConsId_47);
                {
                  Var_115 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_115, 0) = ((MR_Box) (Word_214));
                }
                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_word_0), ((MR_Box) (Var_115)), STATE_VARIABLE_WordsCord_0_4, &STATE_VARIABLE_WordsCord_80_80);
                STATE_VARIABLE_Paras_140_140 = STATE_VARIABLE_Paras_0_5;
              }
              break;
            case (MR_Integer) 26:
              {
                MR_Word ConsId0_213 = ((MR_Word) ((MR_hl_field(3, Piece_29, (MR_Integer) 1))));
                MR_Word ConsId_301;
                MR_Word Var_302;
                MR_String Word_303;

                parse_tree__prog_util__strip_module_qualifier_from_cons_id_2_p_0(ConsId0_213, &ConsId_301);
                Word_303 = parse_tree__parse_tree_out_cons_id__maybe_quoted_cons_id_and_arity_to_string_1_f_0(ConsId_301);
                {
                  Var_302 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_302, 0) = ((MR_Box) (Word_303));
                }
                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_word_0), ((MR_Box) (Var_302)), STATE_VARIABLE_WordsCord_0_4, &STATE_VARIABLE_WordsCord_80_80);
                STATE_VARIABLE_Paras_140_140 = STATE_VARIABLE_Paras_0_5;
              }
              break;
            case (MR_Integer) 27:
              {
                MR_Word Type_52 = ((MR_Word) ((MR_hl_field(3, Piece_29, (MR_Integer) 1))));
                MR_Word TypeCtorName_53;
                MR_Integer TypeCtorArity_54;
                MR_Word SymNameArity_55;
                MR_Word Var_123;
                MR_String Word_229;
                MR_Word TypeCtor_230;

                parse_tree__prog_type__type_to_ctor_det_2_p_0(Type_52, &TypeCtor_230);
                TypeCtorName_53 = ((MR_Word) ((MR_hl_field(0, TypeCtor_230, (MR_Integer) 0))));
                TypeCtorArity_54 = ((MR_Integer) ((MR_hl_field(0, TypeCtor_230, (MR_Integer) 1))));
                {
                  SymNameArity_55 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, SymNameArity_55, 0) = ((MR_Box) (TypeCtorName_53));
                  MR_hl_field(0, SymNameArity_55, 1) = ((MR_Box) (TypeCtorArity_54));
                }
                Word_229 = parse_tree__write_error_spec__sym_name_arity_to_word_1_f_0(SymNameArity_55);
                {
                  Var_123 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_123, 0) = ((MR_Box) (Word_229));
                }
                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_word_0), ((MR_Box) (Var_123)), STATE_VARIABLE_WordsCord_0_4, &STATE_VARIABLE_WordsCord_80_80);
                STATE_VARIABLE_Paras_140_140 = STATE_VARIABLE_Paras_0_5;
              }
              break;
            case (MR_Integer) 28:
              {
                MR_Word PredOrFunc_56 = ((MR_Unsigned) ((MR_hl_field(3, Piece_29, (MR_Integer) 1))) & (MR_Integer) 1);
                MR_Word Var_125;
                MR_String Word_231;

                Word_231 = mdbcomp__prim_data__pred_or_func_to_string_1_f_0(PredOrFunc_56);
                {
                  Var_125 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_125, 0) = ((MR_Box) (Word_231));
                }
                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_word_0), ((MR_Box) (Var_125)), STATE_VARIABLE_WordsCord_0_4, &STATE_VARIABLE_WordsCord_80_80);
                STATE_VARIABLE_Paras_140_140 = STATE_VARIABLE_Paras_0_5;
              }
              break;
            case (MR_Integer) 29:
              {
                MR_Word Purity_57 = ((MR_Unsigned) ((MR_hl_field(3, Piece_29, (MR_Integer) 1))) & (MR_Integer) 3);
                MR_Word Var_127;
                MR_String Word_232;

                Word_232 = parse_tree__write_error_spec__purity_to_string_1_f_0(Purity_57);
                {
                  Var_127 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_127, 0) = ((MR_Box) (Word_232));
                }
                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_word_0), ((MR_Box) (Var_127)), STATE_VARIABLE_WordsCord_0_4, &STATE_VARIABLE_WordsCord_80_80);
                STATE_VARIABLE_Paras_140_140 = STATE_VARIABLE_Paras_0_5;
              }
              break;
            case (MR_Integer) 30:
              {
                MR_Word Var_129;
                MR_String Word_233;
                MR_Word Purity_234 = ((MR_Unsigned) ((MR_hl_field(3, Piece_29, (MR_Integer) 1))) & (MR_Integer) 3);

                Word_233 = parse_tree__write_error_spec__a_purity_to_string_1_f_0(Purity_234);
                {
                  Var_129 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_129, 0) = ((MR_Box) (Word_233));
                }
                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_word_0), ((MR_Box) (Var_129)), STATE_VARIABLE_WordsCord_0_4, &STATE_VARIABLE_WordsCord_80_80);
                STATE_VARIABLE_Paras_140_140 = STATE_VARIABLE_Paras_0_5;
              }
              break;
            case (MR_Integer) 31:
              {
                MR_String DeclName_58 = ((MR_String) ((MR_hl_field(3, Piece_29, (MR_Integer) 1))));
                MR_String Var_131;
                MR_Word Var_133;
                MR_String Word_235;

                Var_131 = mercury__string__f_43_43_2_f_0((MR_String) ":- ", DeclName_58);
                Word_235 = parse_tree__error_spec__add_quotes_1_f_0(Var_131);
                {
                  Var_133 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_133, 0) = ((MR_Box) (Word_235));
                }
                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_word_0), ((MR_Box) (Var_133)), STATE_VARIABLE_WordsCord_0_4, &STATE_VARIABLE_WordsCord_80_80);
                STATE_VARIABLE_Paras_140_140 = STATE_VARIABLE_Paras_0_5;
              }
              break;
            case (MR_Integer) 32:
              {
                MR_String PragmaName_59 = ((MR_String) ((MR_hl_field(3, Piece_29, (MR_Integer) 1))));
                MR_String Var_135;
                MR_Word Var_137;
                MR_String Word_236;

                Var_135 = mercury__string__f_43_43_2_f_0((MR_String) ":- pragma ", PragmaName_59);
                Word_236 = parse_tree__error_spec__add_quotes_1_f_0(Var_135);
                {
                  Var_137 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_137, 0) = ((MR_Box) (Word_236));
                }
                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_word_0), ((MR_Box) (Var_137)), STATE_VARIABLE_WordsCord_0_4, &STATE_VARIABLE_WordsCord_80_80);
                STATE_VARIABLE_Paras_140_140 = STATE_VARIABLE_Paras_0_5;
              }
              break;
            case (MR_Integer) 33:
              {
                MR_String LP_62 = ((MR_String) ((MR_hl_field(3, Piece_29, (MR_Integer) 1))));
                MR_Word LPWordKind_63 = ((MR_Unsigned) ((MR_hl_field(3, Piece_29, (MR_Integer) 2))) & (MR_Integer) 1);
                MR_Word LPWord_64;
                MR_Word STATE_VARIABLE_WordsCord_156_156;
                MR_Word Var_157;
                MR_Word SCUnits_239;

                switch (LPWordKind_63) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      LPWord_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, LPWord_64, 0) = ((MR_Box) (LP_62));
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      LPWord_64 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, LPWord_64, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(3, LPWord_64, 1) = ((MR_Box) (LP_62));
                    }
                    break;
                }
                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_word_0), ((MR_Box) (LPWord_64)), STATE_VARIABLE_WordsCord_0_4, &STATE_VARIABLE_WordsCord_156_156);
                SCUnits_239 = parse_tree__write_error_spec__words_cord_to_sc_units_1_f_0(STATE_VARIABLE_WordsCord_156_156);
                {
                  Var_157 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_157, 0) = ((MR_Box) (SCUnits_239));
                  MR_hl_field(0, Var_157, 1) = ((MR_Box) ((MR_Integer) 0));
                  MR_hl_field(0, Var_157, 2) = ((MR_Box) ((MR_Integer) 1));
                  MR_hl_field(0, Var_157, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                }
                parse_tree__write_error_spec__add_paragraph_3_p_0(Var_157, STATE_VARIABLE_Paras_0_5, &STATE_VARIABLE_Paras_140_140);
                STATE_VARIABLE_WordsCord_80_80 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_word_0));
              }
              break;
            case (MR_Integer) 34:
              {
                MR_String RP_65 = ((MR_String) ((MR_hl_field(3, Piece_29, (MR_Integer) 1))));
                MR_Word RPWordKind_66 = ((MR_Unsigned) ((MR_hl_field(3, Piece_29, (MR_Integer) 2))) & (MR_Integer) 1);
                MR_Word RPWord_67;
                MR_Word Var_163;
                MR_Word SCUnits_240;

                SCUnits_240 = parse_tree__write_error_spec__words_cord_to_sc_units_1_f_0(STATE_VARIABLE_WordsCord_0_4);
                {
                  Var_163 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_163, 0) = ((MR_Box) (SCUnits_240));
                  MR_hl_field(0, Var_163, 1) = ((MR_Box) ((MR_Integer) 0));
                  MR_hl_field(0, Var_163, 2) = ((MR_Box) ((MR_Integer) -1));
                  MR_hl_field(0, Var_163, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                }
                parse_tree__write_error_spec__add_paragraph_3_p_0(Var_163, STATE_VARIABLE_Paras_0_5, &STATE_VARIABLE_Paras_140_140);
                switch (RPWordKind_66) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      RPWord_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, RPWord_67, 0) = ((MR_Box) (RP_65));
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      RPWord_67 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, RPWord_67, 0) = ((MR_Box) (RP_65));
                    }
                    break;
                }
                STATE_VARIABLE_WordsCord_80_80 = mercury__cord__singleton_1_f_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_word_0), ((MR_Box) (RPWord_67)));
              }
              break;
            case (MR_Integer) 35:
              {
                MR_Integer IndentDelta_61 = ((MR_Integer) ((MR_hl_field(3, Piece_29, (MR_Integer) 1))));
                MR_Word Var_145;
                MR_Word SCUnits_237;

                SCUnits_237 = parse_tree__write_error_spec__words_cord_to_sc_units_1_f_0(STATE_VARIABLE_WordsCord_0_4);
                {
                  Var_145 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_145, 0) = ((MR_Box) (SCUnits_237));
                  MR_hl_field(0, Var_145, 1) = ((MR_Box) ((MR_Integer) 0));
                  MR_hl_field(0, Var_145, 2) = ((MR_Box) (IndentDelta_61));
                  MR_hl_field(0, Var_145, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                }
                parse_tree__write_error_spec__add_paragraph_3_p_0(Var_145, STATE_VARIABLE_Paras_0_5, &STATE_VARIABLE_Paras_140_140);
                STATE_VARIABLE_WordsCord_80_80 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_word_0));
              }
              break;
            case (MR_Integer) 36:
              {
                MR_Word ColorName_68 = ((MR_Unsigned) ((MR_hl_field(3, Piece_29, (MR_Integer) 1))) & (MR_Integer) 3);

                if ((ColorDb_1 == (MR_Word) ((MR_Unsigned) 0U)))
                  STATE_VARIABLE_WordsCord_80_80 = STATE_VARIABLE_WordsCord_0_4;
                else
                {
                  MR_Word ColorNameMap_69 = (MR_Word) (MR_body((MR_Word) (ColorDb_1), (MR_Integer) 1));
                  MR_Word Color_70;
                  MR_Word Var_169;
                  MR_Word Var_339 = ((MR_Word) ((MR_hl_field(0, ColorNameMap_69, (MR_Integer) 2))));
                  MR_Word Var_340 = ((MR_Word) ((MR_hl_field(0, ColorNameMap_69, (MR_Integer) 1))));
                  MR_Word Var_341 = ((MR_Word) ((MR_hl_field(0, ColorNameMap_69, (MR_Integer) 0))));

                  switch (ColorName_68) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 2:
                      Color_70 = Var_339;
                      break;
                    case (MR_Integer) 0:
                      Color_70 = Var_341;
                      break;
                    case (MR_Integer) 1:
                      Color_70 = Var_340;
                      break;
                  }
                  {
                    Var_169 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_169, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                    MR_hl_field(3, Var_169, 1) = ((MR_Box) (Color_70));
                  }
                  mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_word_0), ((MR_Box) (Var_169)), STATE_VARIABLE_WordsCord_0_4, &STATE_VARIABLE_WordsCord_80_80);
                }
                STATE_VARIABLE_Paras_140_140 = STATE_VARIABLE_Paras_0_5;
              }
              break;
            case (MR_Integer) 37:
              {
                STATE_VARIABLE_WordsCord_80_80 = STATE_VARIABLE_WordsCord_0_4;
                STATE_VARIABLE_Paras_140_140 = STATE_VARIABLE_Paras_0_5;
              }
              break;
          }
          break;
      }
      parse_tree__write_error_spec__update_first_in_msg_after_piece_3_p_0(Piece_29, FirstInMsg_2, &TailFirstInMsg_76);
      // direct tailcall eliminated
      ;
      next_value_of_FirstInMsg_2 = TailFirstInMsg_76;
      next_value_of_HeadVar__3_3 = Pieces_30;
      next_value_of_STATE_VARIABLE_WordsCord_0_4 = STATE_VARIABLE_WordsCord_80_80;
      next_value_of_STATE_VARIABLE_Paras_0_5 = STATE_VARIABLE_Paras_140_140;
      FirstInMsg_2 = next_value_of_FirstInMsg_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_WordsCord_0_4 = next_value_of_STATE_VARIABLE_WordsCord_0_4;
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
parse_tree__write_error_spec__break_into_words_2_p_0(
  MR_String String_3,
  MR_Word * WordsCord_4)
{
  MR_Word Var_6;

  Var_6 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_word_0));
  parse_tree__write_error_spec__break_into_words_from_4_p_0(String_3, (MR_Integer) 0, Var_6, WordsCord_4);
}

static void MR_CALL 
parse_tree__write_error_spec__break_into_words_from_4_p_0(
  MR_String String_5,
  MR_Integer Cur_6,
  MR_Word STATE_VARIABLE_WordsCord_0_11,
  MR_Word * STATE_VARIABLE_WordsCord_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer Start_8;

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = parse_tree__write_error_spec__find_word_start_3_p_0(String_5, Cur_6, &Start_8);
    if (succeeded)
    {
      MR_Integer End_9;
      MR_String WordStr_10;
      MR_Word Var_13;
      MR_Word STATE_VARIABLE_WordsCord_14_14;
      MR_Integer next_value_of_Cur_6;
      MR_Word next_value_of_STATE_VARIABLE_WordsCord_0_11;

      parse_tree__write_error_spec__find_word_end_3_p_0(String_5, Start_8, &End_9);
      mercury__string__between_4_p_0(String_5, Start_8, End_9, &WordStr_10);
      {
        Var_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_13, 0) = ((MR_Box) (WordStr_10));
      }
      mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_word_0), ((MR_Box) (Var_13)), STATE_VARIABLE_WordsCord_0_11, &STATE_VARIABLE_WordsCord_14_14);
      // direct tailcall eliminated
      ;
      next_value_of_Cur_6 = End_9;
      next_value_of_STATE_VARIABLE_WordsCord_0_11 = STATE_VARIABLE_WordsCord_14_14;
      Cur_6 = next_value_of_Cur_6;
      STATE_VARIABLE_WordsCord_0_11 = next_value_of_STATE_VARIABLE_WordsCord_0_11;
      continue;
    }
    else
      *STATE_VARIABLE_WordsCord_12 = STATE_VARIABLE_WordsCord_0_11;
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
parse_tree__write_error_spec__words_cord_to_sc_units_1_f_0(
  MR_Word WordsCord_3)
{
  MR_Word SCUnits_4;
  MR_Word Words_5;
  MR_Word RevWords_6;
  MR_Word PorPs_7;
  MR_Word Var_8;

  Words_5 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_word_0), WordsCord_3);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_word_0), Words_5, &RevWords_6);
  Var_8 = parse_tree__write_error_spec__rev_words_to_rev_plain_or_prefix_1_f_0(RevWords_6);
  PorPs_7 = mercury__list__reverse_1_f_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_plain_or_prefix_0), Var_8);
  SCUnits_4 = parse_tree__write_error_spec__join_prefixes_1_f_0(PorPs_7);
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
            HeadVar__2_2 = parse_tree__write_error_spec__lower_next_sc_unit_1_f_0(TailSCUnits_6);
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
          MR_Word Var_14;

          {
            Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_14, 0) = ((MR_Box) (String_7));
          }
          {
            HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Var_14));
            MR_hl_field(1, HeadVar__2_2, 1) = ((MR_Box) (TailSCUnits_6));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String Prefix_8 = ((MR_String) ((MR_hl_field(2, Head_3, (MR_Integer) 0))));

          if ((TailSCUnits_6 == (MR_Word) ((MR_Unsigned) 0U)))
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
          else
          {
            MR_Word HeadTailSCUnit_9 = ((MR_Word) ((MR_hl_field(1, TailSCUnits_6, (MR_Integer) 0))));
            MR_Word TailTailSCUnits_10 = ((MR_Word) ((MR_hl_field(1, TailSCUnits_6, (MR_Integer) 1))));

            switch (MR_tag((MR_Word) HeadTailSCUnit_9)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 2:
                {
                  MR_Word Var_17;

                  {
                    Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_17, 0) = ((MR_Box) (Prefix_8));
                  }
                  {
                    HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Var_17));
                    MR_hl_field(1, HeadVar__2_2, 1) = ((MR_Box) (TailSCUnits_6));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_String HeadTailStr_11 = ((MR_String) ((MR_hl_field(1, HeadTailSCUnit_9, (MR_Integer) 0))));
                  MR_Word Var_15;
                  MR_String Var_16;

                  Var_16 = mercury__string__f_43_43_2_f_0(Prefix_8, HeadTailStr_11);
                  {
                    Var_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_15, 0) = ((MR_Box) (Var_16));
                  }
                  {
                    HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Var_15));
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
          MR_Word Color_13 = ((MR_Word) ((MR_hl_field(3, Head_3, (MR_Integer) 0))));
          MR_Word Var_20;

          {
            Var_20 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Var_20, 0) = ((MR_Box) (Color_13));
          }
          {
            HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Var_20));
            MR_hl_field(1, HeadVar__2_2, 1) = ((MR_Box) (TailSCUnits_6));
          }
        }
        break;
    }
  }
  return HeadVar__2_2;
}

static MR_Word MR_CALL 
parse_tree__write_error_spec__lower_next_sc_unit_1_f_0(
  MR_Word SCUnits0_3)
{
  MR_Word SCUnits_4;

  if ((SCUnits0_3 == (MR_Word) ((MR_Unsigned) 0U)))
    SCUnits_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word HeadSCUnit0_5 = ((MR_Word) ((MR_hl_field(1, SCUnits0_3, (MR_Integer) 0))));
    MR_Word TailSCUnits0_6 = ((MR_Word) ((MR_hl_field(1, SCUnits0_3, (MR_Integer) 1))));

    switch (MR_tag((MR_Word) HeadSCUnit0_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 2:
        {
          MR_Word TailSCUnits_10;

          TailSCUnits_10 = parse_tree__write_error_spec__lower_next_sc_unit_1_f_0(TailSCUnits0_6);
          {
            SCUnits_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, SCUnits_4, 0) = ((MR_Box) (HeadSCUnit0_5));
            MR_hl_field(1, SCUnits_4, 1) = ((MR_Box) (TailSCUnits_10));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String String0_7 = ((MR_String) ((MR_hl_field(1, HeadSCUnit0_5, (MR_Integer) 0))));
          MR_Word HeadSCUnit_8;
          MR_String Var_11;

          Var_11 = mercury__string__uncapitalize_first_1_f_0(String0_7);
          {
            HeadSCUnit_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, HeadSCUnit_8, 0) = ((MR_Box) (Var_11));
          }
          {
            SCUnits_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, SCUnits_4, 0) = ((MR_Box) (HeadSCUnit_8));
            MR_hl_field(1, SCUnits_4, 1) = ((MR_Box) (TailSCUnits0_6));
          }
        }
        break;
    }
  }
  return SCUnits_4;
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
      MR_Word RevWord_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word RevWords_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));

      switch (MR_tag((MR_Word) RevWord_3)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(RevWord_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_20;

                Var_20 = parse_tree__write_error_spec__rev_words_to_rev_plain_or_prefix_1_f_0(RevWords_4);
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

                Var_18 = parse_tree__write_error_spec__rev_words_to_rev_plain_or_prefix_1_f_0(RevWords_4);
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
            MR_String String_6 = ((MR_String) ((MR_hl_field(1, RevWord_3, (MR_Integer) 0))));
            MR_Word Var_13;
            MR_Word Var_14;

            {
              Var_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_13, 0) = ((MR_Box) (String_6));
            }
            Var_14 = parse_tree__write_error_spec__rev_words_to_rev_plain_or_prefix_1_f_0(RevWords_4);
            {
              HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Var_13));
              MR_hl_field(1, HeadVar__2_2, 1) = ((MR_Box) (Var_14));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String Prefix_8 = ((MR_String) ((MR_hl_field(2, RevWord_3, (MR_Integer) 0))));
            MR_Word Var_21;
            MR_Word Var_22;

            {
              Var_21 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Var_21, 0) = ((MR_Box) (Prefix_8));
            }
            Var_22 = parse_tree__write_error_spec__rev_words_to_rev_plain_or_prefix_1_f_0(RevWords_4);
            {
              HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Var_21));
              MR_hl_field(1, HeadVar__2_2, 1) = ((MR_Box) (Var_22));
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, RevWord_3, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String Suffix_9 = ((MR_String) ((MR_hl_field(3, RevWord_3, (MR_Integer) 1))));

                if ((RevWords_4 == (MR_Word) ((MR_Unsigned) 0U)))
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
                  MR_Word Var_58 = ((MR_Word) ((MR_hl_field(1, RevWords_4, (MR_Integer) 1))));
                  MR_Word Var_59 = ((MR_Word) ((MR_hl_field(1, RevWords_4, (MR_Integer) 0))));

                  switch (MR_tag((MR_Word) Var_59)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      switch (MR_unmkbody(Var_59)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            MR_Word NewRevWords_11;
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
                              NewRevWords_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, NewRevWords_11, 0) = ((MR_Box) (Var_40));
                              MR_hl_field(1, NewRevWords_11, 1) = ((MR_Box) (Var_58));
                            }
                            // direct tailcall eliminated
                            ;
                            next_value_of_HeadVar__1_1 = NewRevWords_11;
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
                            MR_Word Color_50 = ((MR_Word) ((MR_hl_field(3, Var_59, (MR_Integer) 1))));

                            {
                              Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, Var_26, 0) = ((MR_Box) (Suffix_9));
                            }
                            {
                              Var_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(3, Var_28, 0) = ((MR_Box) (Color_50));
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
                MR_Word Color_7 = ((MR_Word) ((MR_hl_field(3, RevWord_3, (MR_Integer) 1))));
                MR_Word Var_15;
                MR_Word Var_16;

                {
                  Var_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_15, 0) = ((MR_Box) (Color_7));
                }
                Var_16 = parse_tree__write_error_spec__rev_words_to_rev_plain_or_prefix_1_f_0(RevWords_4);
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
