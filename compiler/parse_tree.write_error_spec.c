/*
** Automatically generated from `write_error_spec.m'
** by the Mercury compiler,
** version rotd-2022-12-04
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
ENDINIT
*/

#include "parse_tree.write_error_spec.mih"


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
#include "libs.globals.mih"
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
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_TypeInfo_Struct1 parse_tree__write_error_spec__list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_error_spec__set_ordlist__pti_set_ordlist_1__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__write_error_spec__set_ordlist__ti_set_ordlist_1list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__write_error_spec__maybe__ti_maybe_1builtin__type_ctor_info_int_0;

static const MR_PseudoTypeInfo parse_tree__write_error_spec__parse_tree__write_error_spec__field_types_error_line_0_0[5];

static const MR_ConstString parse_tree__write_error_spec__parse_tree__write_error_spec__field_names_error_line_0_0[5];

static const MR_DuArgLocn parse_tree__write_error_spec__parse_tree__write_error_spec__field_locns_error_line_0_0[5];

static const MR_DuFunctorDesc parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_error_line_0_0;

static const MR_DuFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__du_stag_ordered_error_line_0_0[1];

static const MR_DuPtagLayout parse_tree__write_error_spec__parse_tree__write_error_spec__du_ptag_ordered_error_line_0[1];

static const MR_DuFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__du_name_ordered_error_line_0[1];

static const MR_Integer parse_tree__write_error_spec__parse_tree__write_error_spec__functor_number_map_error_line_0[1];

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

static const MR_FA_TypeInfo_Struct1 parse_tree__write_error_spec__list__ti_list_1builtin__type_ctor_info_string_0;

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

static const MR_DuFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__du_stag_ordered_plain_or_prefix_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__du_stag_ordered_plain_or_prefix_0_1[1];

static const MR_DuFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__du_stag_ordered_plain_or_prefix_0_2[1];

static const MR_DuPtagLayout parse_tree__write_error_spec__parse_tree__write_error_spec__du_ptag_ordered_plain_or_prefix_0[3];

static const MR_DuFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__du_name_ordered_plain_or_prefix_0[3];

static const MR_Integer parse_tree__write_error_spec__parse_tree__write_error_spec__functor_number_map_plain_or_prefix_0[3];

static const MR_PseudoTypeInfo parse_tree__write_error_spec__parse_tree__write_error_spec__field_types_word_0_0[1];

static const MR_DuFunctorDesc parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_word_0_0;

static const MR_PseudoTypeInfo parse_tree__write_error_spec__parse_tree__write_error_spec__field_types_word_0_1[1];

static const MR_DuFunctorDesc parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_word_0_1;

static const MR_PseudoTypeInfo parse_tree__write_error_spec__parse_tree__write_error_spec__field_types_word_0_2[1];

static const MR_DuFunctorDesc parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_word_0_2;

static const MR_DuFunctorDesc parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_word_0_3;

static const MR_DuFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__du_stag_ordered_word_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__du_stag_ordered_word_0_1[1];

static const MR_DuFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__du_stag_ordered_word_0_2[1];

static const MR_DuFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__du_stag_ordered_word_0_3[1];

static const MR_DuPtagLayout parse_tree__write_error_spec__parse_tree__write_error_spec__du_ptag_ordered_word_0[4];

static const MR_DuFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__du_name_ordered_word_0[4];

static const MR_Integer parse_tree__write_error_spec__parse_tree__write_error_spec__functor_number_map_word_0[4];

static MR_bool MR_CALL 
parse_tree__write_error_spec__IntroducedFrom__pred__find_matching_rp_and_maybe_join__1256__1_2_p_0(
  MR_Integer TotalLpRpLen_26,
  MR_Integer ReplacementLineStrLen_33);

static MR_String MR_CALL 
parse_tree__write_error_spec__IntroducedFrom__func__find_matching_rp_and_maybe_join__1251__1_1_f_0(
  MR_Word LambdaHeadVar__1_51);

static MR_bool MR_CALL 
parse_tree__write_error_spec__IntroducedFrom__pred__find_matching_rp_and_maybe_join__1226__1_2_p_0(
  MR_Word LPParen_13,
  MR_Word HeadVar__2_38);

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
parse_tree__write_error_spec____Compare____error_line_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
parse_tree__write_error_spec____Compare____already_printed_verbose_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__write_error_spec____Unify____already_printed_verbose_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_String MR_CALL 
parse_tree__write_error_spec__error_pieces_to_string_loop_2_f_0(
  MR_Word FirstInMsg_1,
  MR_Word HeadVar__2_2);

static MR_String MR_CALL 
parse_tree__write_error_spec__join_string_and_tail_3_f_0(
  MR_String Word_5,
  MR_Word Pieces_6,
  MR_String TailStr_7);

static void MR_CALL 
parse_tree__write_error_spec__write_error_specs_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9);

static void MR_CALL 
parse_tree__write_error_spec__do_write_error_spec_11_p_0(
  MR_Word Stream_12,
  MR_Word Globals_13,
  MR_Word Spec_14,
  MR_Integer STATE_VARIABLE_NumWarnings_0_45,
  MR_Integer * STATE_VARIABLE_NumWarnings_46,
  MR_Integer STATE_VARIABLE_NumErrors_0_47,
  MR_Integer * STATE_VARIABLE_NumErrors_48,
  MR_Word STATE_VARIABLE_AlreadyPrintedVerbose_0_49,
  MR_Word * STATE_VARIABLE_AlreadyPrintedVerbose_50);

static void MR_CALL 
parse_tree__write_error_spec__do_write_error_msgs_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_PrintedSome_0_5,
  MR_Word * STATE_VARIABLE_PrintedSome_6,
  MR_Word STATE_VARIABLE_AlreadyPrintedVerbose_0_7,
  MR_Word * STATE_VARIABLE_AlreadyPrintedVerbose_8);

static void MR_CALL 
parse_tree__write_error_spec__write_msg_components_13_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word MaybeContext_3,
  MR_Integer Indent_4,
  MR_Word Globals_5,
  MR_Word STATE_VARIABLE_First_0_6,
  MR_Word * STATE_VARIABLE_First_7,
  MR_Word STATE_VARIABLE_PrintedSome_0_8,
  MR_Word * STATE_VARIABLE_PrintedSome_9,
  MR_Word STATE_VARIABLE_AlreadyPrintedVerbose_0_10,
  MR_Word * STATE_VARIABLE_AlreadyPrintedVerbose_11);

static void MR_CALL 
parse_tree__write_error_spec__do_write_error_pieces_8_p_0(
  MR_Word Stream_9,
  MR_Word Globals_10,
  MR_Word MaybeContext_11,
  MR_Word TreatAsFirst_12,
  MR_Integer FixedIndent_13,
  MR_Word Pieces_14);

static MR_bool MR_CALL 
parse_tree__write_error_spec__try_to_join_lp_to_rp_lines_2_p_0_3(
  MR_Box closure_arg);

static MR_Box MR_CALL 
parse_tree__write_error_spec__try_to_join_lp_to_rp_lines_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
parse_tree__write_error_spec__try_to_join_lp_to_rp_lines_2_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__write_error_spec__try_to_join_lp_to_rp_lines_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static MR_bool MR_CALL 
parse_tree__write_error_spec__find_matching_rp_7_p_0_3(
  MR_Box closure_arg);

static MR_Box MR_CALL 
parse_tree__write_error_spec__find_matching_rp_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
parse_tree__write_error_spec__find_matching_rp_7_p_0_1(
  MR_Box closure_arg);

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
parse_tree__write_error_spec____Unify____error_line_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__write_error_spec__divide_paragraphs_into_lines_5_p_0(
  MR_Word MaybeAvailLen_6,
  MR_Word TreatAsFirst_7,
  MR_Integer CurIndent_8,
  MR_Word Paras_9,
  MR_Word * Lines_10);

static void MR_CALL 
parse_tree__write_error_spec__group_nonfirst_line_words_6_p_0(
  MR_Integer AvailLen_7,
  MR_String FirstWord_8,
  MR_Word LaterWords_9,
  MR_Integer Indent_10,
  MR_Word LastParen_11,
  MR_Word * Lines_12);

static void MR_CALL 
parse_tree__write_error_spec__get_later_words_7_p_0(
  MR_Integer Avail_1,
  MR_Word HeadVar__2_2,
  MR_Integer CurLen_3,
  MR_Integer * FinalLen_4,
  MR_Word HeadVar__5_5,
  MR_Word * LineWords_6,
  MR_Word * HeadVar__7_7);

static void MR_CALL 
parse_tree__write_error_spec__convert_pieces_to_paragraphs_acc_5_p_0(
  MR_Word FirstInMsg_1,
  MR_Word HeadVar__2_2,
  MR_Word RevWords0_3,
  MR_Word STATE_VARIABLE_Paras_0_4,
  MR_Word * STATE_VARIABLE_Paras_5);

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
parse_tree__write_error_spec__first_in_msg_after_piece_3_p_0(
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
parse_tree__write_error_spec__rev_words_to_strings_1_f_0(
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
parse_tree__write_error_spec____Unify____error_line_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__write_error_spec____Compare____error_line_0_0_10001(
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
parse_tree__write_error_spec____Unify____word_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__write_error_spec____Compare____word_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__write_error_spec_scalar_common_1[7][2];

static /* final */ const MR_Box parse_tree__write_error_spec_scalar_common_2[1][1];

static /* final */ const MR_Box parse_tree__write_error_spec_scalar_common_4[3][5];

static /* final */ const MR_Box parse_tree__write_error_spec_scalar_common_5[2][3];

static /* final */ const MR_Box parse_tree__write_error_spec_scalar_common_6[1][14];


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
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
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

static /* final */ const MR_Box parse_tree__write_error_spec_scalar_common_2[1][1] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_String) ""))
  },
};

static /* final */ const MR_Box parse_tree__write_error_spec_scalar_common_4[3][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_paren_status_0)),
    ((MR_Box) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_paren_status_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_error_line_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box parse_tree__write_error_spec_scalar_common_5[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (&parse_tree__write_error_spec_scalar_common_4[1])),
    ((MR_Box) (parse_tree__write_error_spec__find_matching_rp_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__write_error_spec_scalar_common_4[1])),
    ((MR_Box) (parse_tree__write_error_spec__try_to_join_lp_to_rp_lines_2_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__write_error_spec_scalar_common_6[1][14] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__write_error_spec__set_ordlist__pti_set_ordlist_1__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0)),
    ((MR_Box) (&parse_tree__write_error_spec__set_ordlist__pti_set_ordlist_1__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
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



static const MR_FA_TypeInfo_Struct1 parse_tree__write_error_spec__list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_error_spec__set_ordlist__pti_set_ordlist_1__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__write_error_spec__list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__write_error_spec__set_ordlist__ti_set_ordlist_1list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&parse_tree__write_error_spec__list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0)
  }
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

static const MR_FA_TypeInfo_Struct1 parse_tree__write_error_spec__maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__write_error_spec__parse_tree__write_error_spec__field_types_error_line_0_0[5] = {
  (MR_PseudoTypeInfo) (&parse_tree__write_error_spec__maybe__ti_maybe_1builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_paren_status_0)
};

static const MR_ConstString parse_tree__write_error_spec__parse_tree__write_error_spec__field_names_error_line_0_0[5] = {
  (MR_String) "maybe_avail_len",
  (MR_String) "line_indent_level",
  (MR_String) "line_words_str",
  (MR_String) "line_words_len",
  (MR_String) "line_paren"
};

static const MR_DuArgLocn parse_tree__write_error_spec__parse_tree__write_error_spec__field_locns_error_line_0_0[5] = {
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
    (MR_Integer) 2
  }
};

static const MR_DuFunctorDesc parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_error_line_0_0 = {
  (MR_String) "error_line",
  INT16_C(5),
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

static const MR_DuFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__du_stag_ordered_error_line_0_0[1] = {
  &parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_error_line_0_0
};

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

static const MR_DuFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__du_name_ordered_error_line_0[1] = {
  &parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_error_line_0_0
};

static const MR_Integer parse_tree__write_error_spec__parse_tree__write_error_spec__functor_number_map_error_line_0[1] = {
  (MR_Integer) 0
};

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

static const MR_FA_TypeInfo_Struct1 parse_tree__write_error_spec__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__write_error_spec__parse_tree__write_error_spec__field_types_paragraph_0_0[4] = {
  (MR_PseudoTypeInfo) (&parse_tree__write_error_spec__list__ti_list_1builtin__type_ctor_info_string_0),
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

static const MR_DuFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__du_stag_ordered_paragraph_0_0[1] = {
  &parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_paragraph_0_0
};

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

static const MR_DuFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__du_name_ordered_paragraph_0[1] = {
  &parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_paragraph_0_0
};

static const MR_Integer parse_tree__write_error_spec__parse_tree__write_error_spec__functor_number_map_paragraph_0[1] = {
  (MR_Integer) 0
};

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

static const MR_PseudoTypeInfo parse_tree__write_error_spec__parse_tree__write_error_spec__field_types_plain_or_prefix_0_0[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

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

static const MR_PseudoTypeInfo parse_tree__write_error_spec__parse_tree__write_error_spec__field_types_plain_or_prefix_0_1[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

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

static const MR_DuFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__du_stag_ordered_plain_or_prefix_0_0[1] = {
  &parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_plain_or_prefix_0_2
};

static const MR_DuFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__du_stag_ordered_plain_or_prefix_0_1[1] = {
  &parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_plain_or_prefix_0_0
};

static const MR_DuFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__du_stag_ordered_plain_or_prefix_0_2[1] = {
  &parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_plain_or_prefix_0_1
};

static const MR_DuPtagLayout parse_tree__write_error_spec__parse_tree__write_error_spec__du_ptag_ordered_plain_or_prefix_0[3] = {
  {
    UINT32_C(1),
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
  }
};

static const MR_DuFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__du_name_ordered_plain_or_prefix_0[3] = {
  &parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_plain_or_prefix_0_2,
  &parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_plain_or_prefix_0_0,
  &parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_plain_or_prefix_0_1
};

static const MR_Integer parse_tree__write_error_spec__parse_tree__write_error_spec__functor_number_map_plain_or_prefix_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_plain_or_prefix_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__write_error_spec____Unify____plain_or_prefix_0_0_10001)),
  ((MR_Box) (parse_tree__write_error_spec____Compare____plain_or_prefix_0_0_10001)),
  (MR_String) "parse_tree.write_error_spec",
  (MR_String) "plain_or_prefix",
  { parse_tree__write_error_spec__parse_tree__write_error_spec__du_name_ordered_plain_or_prefix_0 },
  { parse_tree__write_error_spec__parse_tree__write_error_spec__du_ptag_ordered_plain_or_prefix_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  parse_tree__write_error_spec__parse_tree__write_error_spec__functor_number_map_plain_or_prefix_0,

};

static const MR_PseudoTypeInfo parse_tree__write_error_spec__parse_tree__write_error_spec__field_types_word_0_0[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

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

static const MR_PseudoTypeInfo parse_tree__write_error_spec__parse_tree__write_error_spec__field_types_word_0_1[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

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

static const MR_PseudoTypeInfo parse_tree__write_error_spec__parse_tree__write_error_spec__field_types_word_0_2[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_word_0_2 = {
  (MR_String) "suffix_word",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(3),
  (MR_Integer) -1,
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

static const MR_DuFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__du_stag_ordered_word_0_0[1] = {
  &parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_word_0_3
};

static const MR_DuFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__du_stag_ordered_word_0_1[1] = {
  &parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_word_0_0
};

static const MR_DuFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__du_stag_ordered_word_0_2[1] = {
  &parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_word_0_1
};

static const MR_DuFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__du_stag_ordered_word_0_3[1] = {
  &parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_word_0_2
};

static const MR_DuPtagLayout parse_tree__write_error_spec__parse_tree__write_error_spec__du_ptag_ordered_word_0[4] = {
  {
    UINT32_C(1),
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
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__write_error_spec__parse_tree__write_error_spec__du_stag_ordered_word_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__write_error_spec__parse_tree__write_error_spec__du_name_ordered_word_0[4] = {
  &parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_word_0_3,
  &parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_word_0_0,
  &parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_word_0_1,
  &parse_tree__write_error_spec__parse_tree__write_error_spec__du_functor_desc_word_0_2
};

static const MR_Integer parse_tree__write_error_spec__parse_tree__write_error_spec__functor_number_map_word_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3,
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
  (MR_Integer) 4,
  UINT16_C(12),
  parse_tree__write_error_spec__parse_tree__write_error_spec__functor_number_map_word_0,

};

static MR_bool MR_CALL 
parse_tree__write_error_spec__IntroducedFrom__pred__find_matching_rp_and_maybe_join__1256__1_2_p_0(
  MR_Integer TotalLpRpLen_26,
  MR_Integer ReplacementLineStrLen_33)
{
  MR_bool succeeded = (TotalLpRpLen_26 == ReplacementLineStrLen_33);

  return succeeded;
}

static MR_String MR_CALL 
parse_tree__write_error_spec__IntroducedFrom__func__find_matching_rp_and_maybe_join__1251__1_1_f_0(
  MR_Word LambdaHeadVar__1_51)
{
  MR_String LambdaHeadVar__2_52 = ((MR_String) ((MR_hl_field(0, LambdaHeadVar__1_51, (MR_Integer) 2))));

  return LambdaHeadVar__2_52;
}

static MR_bool MR_CALL 
parse_tree__write_error_spec__IntroducedFrom__pred__find_matching_rp_and_maybe_join__1226__1_2_p_0(
  MR_Word LPParen_13,
  MR_Word HeadVar__2_38)
{
  MR_bool succeeded = (LPParen_13 == HeadVar__2_38);

  return succeeded;
}

static void MR_CALL 
parse_tree__write_error_spec____Compare____word_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_28 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_29 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_28 == CastY_29);
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
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Var_33 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 1:
              {
                MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

                mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_33, ArgY1_5);
              }
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String Var_34 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));

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
                MR_String ArgY1_14 = ((MR_String) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));

                mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_34, ArgY1_14);
              }
              break;
            case (MR_Integer) 3:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_String Var_35 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 3:
              {
                MR_String ArgY1_23 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))));

                mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_35, ArgY1_23);
              }
              break;
          }
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
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
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
          MR_String ArgX1_7 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))));
          MR_String ArgY1_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3);
          if (succeeded)
          {
            ArgY1_8 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = (strcmp(ArgX1_7, ArgY1_8) == 0);
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
  MR_Integer CastX_16 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_17 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_16 == CastY_17);
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
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Var_20 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 1:
              {
                MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

                mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_20, ArgY1_5);
              }
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String Var_21 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));

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
                MR_String ArgY1_12 = ((MR_String) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));

                mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_21, ArgY1_12);
              }
              break;
          }
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
parse_tree__write_error_spec____Compare____error_line_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_18 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_19 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_18 == CastY_19);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_String ArgX3_10 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_String ArgY3_11 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Integer ArgX4_13 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Integer ArgY4_14 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word ArgX5_16 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))) & (MR_Integer) 3);
    MR_Word ArgY5_17 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))) & (MR_Integer) 3);
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__write_error_spec_scalar_common_1[3]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
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

void MR_CALL 
parse_tree__write_error_spec__report_warning_7_p_0(
  MR_Word Stream_8,
  MR_Word Globals_9,
  MR_Word Context_10,
  MR_Integer Indent_11,
  MR_Word Pieces_12)
{
  MR_Word Var_17;

  libs__compiler_util__record_warning_3_p_0(Globals_9);
  {
    Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_17, 0) = ((MR_Box) (Context_10));
  }
  parse_tree__write_error_spec__do_write_error_pieces_8_p_0(Stream_8, Globals_9, Var_17, (MR_Integer) 0, Indent_11, Pieces_12);
}

void MR_CALL 
parse_tree__write_error_spec__report_warning_6_p_0(
  MR_Word Globals_7,
  MR_Word Context_8,
  MR_Integer Indent_9,
  MR_Word Pieces_10)
{
  MR_Word Stream_12;
  MR_Word Var_17;

  mercury__io__output_stream_3_p_0(&Stream_12);
  libs__compiler_util__record_warning_3_p_0(Globals_7);
  {
    Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_17, 0) = ((MR_Box) (Context_8));
  }
  parse_tree__write_error_spec__do_write_error_pieces_8_p_0(Stream_12, Globals_7, Var_17, (MR_Integer) 0, Indent_9, Pieces_10);
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

MR_String MR_CALL 
parse_tree__write_error_spec__error_pieces_to_string_1_f_0(
  MR_Word Pieces_3)
{
  MR_String HeadVar__2_2;

  HeadVar__2_2 = parse_tree__write_error_spec__error_pieces_to_string_loop_2_f_0((MR_Integer) 0, Pieces_3);
  return HeadVar__2_2;
}

static MR_String MR_CALL 
parse_tree__write_error_spec__error_pieces_to_string_loop_2_f_0(
  MR_Word FirstInMsg_1,
  MR_Word HeadVar__2_2)
{
  MR_String HeadVar__3_3;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__3_3 = (MR_String) "";
  else
  {
    MR_Word Piece_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Pieces_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word TailFirstInMsg_9;
    MR_String TailStr_10;

    parse_tree__write_error_spec__first_in_msg_after_piece_3_p_0(Piece_6, FirstInMsg_1, &TailFirstInMsg_9);
    TailStr_10 = parse_tree__write_error_spec__error_pieces_to_string_loop_2_f_0(TailFirstInMsg_9, Pieces_7);
    switch (MR_tag((MR_Word) Piece_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Piece_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (FirstInMsg_1) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                HeadVar__3_3 = TailStr_10;
                break;
              case (MR_Integer) 1:
                HeadVar__3_3 = mercury__string__uncapitalize_first_1_f_0(TailStr_10);
                break;
            }
            break;
          case (MR_Integer) 1:
            HeadVar__3_3 = TailStr_10;
            break;
          case (MR_Integer) 2:
            HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "\n", TailStr_10);
            break;
          case (MR_Integer) 3:
            HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "\n\n", TailStr_10);
            break;
        }
        break;
      case (MR_Integer) 1:
        HeadVar__3_3 = TailStr_10;
        break;
      case (MR_Integer) 2:
        {
          MR_String Word_12 = ((MR_String) ((MR_hl_field(2, Piece_6, (MR_Integer) 0))));

          HeadVar__3_3 = parse_tree__write_error_spec__join_string_and_tail_3_f_0(Word_12, Pieces_7, TailStr_10);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Piece_6, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String Var_49;
              MR_String Word_75 = ((MR_String) ((MR_hl_field(3, Piece_6, (MR_Integer) 1))));

              Var_49 = parse_tree__error_spec__add_quotes_1_f_0(Word_75);
              HeadVar__3_3 = parse_tree__write_error_spec__join_string_and_tail_3_f_0(Var_49, Pieces_7, TailStr_10);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer Int_13 = ((MR_Integer) ((MR_hl_field(3, Piece_6, (MR_Integer) 1))));
              MR_String Var_50;

              Var_50 = mercury__string__int_to_string_1_f_0(Int_13);
              HeadVar__3_3 = parse_tree__write_error_spec__join_string_and_tail_3_f_0(Var_50, Pieces_7, TailStr_10);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_String Var_51;
              MR_Integer Int_76 = ((MR_Integer) ((MR_hl_field(3, Piece_6, (MR_Integer) 1))));

              Var_51 = parse_tree__write_error_spec__int_name_str_1_f_0(Int_76);
              HeadVar__3_3 = parse_tree__write_error_spec__join_string_and_tail_3_f_0(Var_51, Pieces_7, TailStr_10);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_String Var_52;
              MR_Integer Int_77 = ((MR_Integer) ((MR_hl_field(3, Piece_6, (MR_Integer) 1))));

              Var_52 = parse_tree__write_error_spec__nth_fixed_str_1_f_0(Int_77);
              HeadVar__3_3 = parse_tree__write_error_spec__join_string_and_tail_3_f_0(Var_52, Pieces_7, TailStr_10);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_String Prefix_14 = ((MR_String) ((MR_hl_field(3, Piece_6, (MR_Integer) 1))));

              HeadVar__3_3 = mercury__string__f_43_43_2_f_0(Prefix_14, TailStr_10);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_String Suffix_15 = ((MR_String) ((MR_hl_field(3, Piece_6, (MR_Integer) 1))));

              HeadVar__3_3 = parse_tree__write_error_spec__join_string_and_tail_3_f_0(Suffix_15, Pieces_7, TailStr_10);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_String Words_11 = ((MR_String) ((MR_hl_field(3, Piece_6, (MR_Integer) 1))));

              HeadVar__3_3 = parse_tree__write_error_spec__join_string_and_tail_3_f_0(Words_11, Pieces_7, TailStr_10);
            }
            break;
          case (MR_Integer) 7:
            {
              MR_String Var_48;
              MR_String Words_74 = ((MR_String) ((MR_hl_field(3, Piece_6, (MR_Integer) 1))));

              Var_48 = parse_tree__error_spec__add_quotes_1_f_0(Words_74);
              HeadVar__3_3 = parse_tree__write_error_spec__join_string_and_tail_3_f_0(Var_48, Pieces_7, TailStr_10);
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word SymName_16 = ((MR_Word) ((MR_hl_field(3, Piece_6, (MR_Integer) 1))));
              MR_String Word_78;

              Word_78 = parse_tree__write_error_spec__sym_name_to_word_1_f_0(SymName_16);
              HeadVar__3_3 = parse_tree__write_error_spec__join_string_and_tail_3_f_0(Word_78, Pieces_7, TailStr_10);
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word SymName0_17 = ((MR_Word) ((MR_hl_field(3, Piece_6, (MR_Integer) 1))));
              MR_String Var_53;
              MR_Word SymName_162;
              MR_String Word_163;

              Var_53 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName0_17);
              {
                SymName_162 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, SymName_162, 0) = ((MR_Box) (Var_53));
              }
              Word_163 = parse_tree__write_error_spec__sym_name_to_word_1_f_0(SymName_162);
              HeadVar__3_3 = parse_tree__write_error_spec__join_string_and_tail_3_f_0(Word_163, Pieces_7, TailStr_10);
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word NameAndArity_18 = ((MR_Word) ((MR_hl_field(3, Piece_6, (MR_Integer) 1))));
              MR_String Word_79;

              Word_79 = parse_tree__write_error_spec__name_arity_to_word_1_f_0(NameAndArity_18);
              HeadVar__3_3 = parse_tree__write_error_spec__join_string_and_tail_3_f_0(Word_79, Pieces_7, TailStr_10);
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word SymNameAndArity_19 = ((MR_Word) ((MR_hl_field(3, Piece_6, (MR_Integer) 1))));
              MR_String Word_84;

              Word_84 = parse_tree__write_error_spec__sym_name_arity_to_word_1_f_0(SymNameAndArity_19);
              HeadVar__3_3 = parse_tree__write_error_spec__join_string_and_tail_3_f_0(Word_84, Pieces_7, TailStr_10);
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word SymNameAndArity0_20 = ((MR_Word) ((MR_hl_field(3, Piece_6, (MR_Integer) 1))));
              MR_Integer Arity_21 = ((MR_Integer) ((MR_hl_field(0, SymNameAndArity0_20, (MR_Integer) 1))));
              MR_String Var_54;
              MR_Word SymName_80;
              MR_Word SymName0_81 = ((MR_Word) ((MR_hl_field(0, SymNameAndArity0_20, (MR_Integer) 0))));
              MR_Word SymNameAndArity_164;
              MR_String Word_165;

              Var_54 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName0_81);
              {
                SymName_80 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, SymName_80, 0) = ((MR_Box) (Var_54));
              }
              {
                SymNameAndArity_164 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, SymNameAndArity_164, 0) = ((MR_Box) (SymName_80));
                MR_hl_field(0, SymNameAndArity_164, 1) = ((MR_Box) (Arity_21));
              }
              Word_165 = parse_tree__write_error_spec__sym_name_arity_to_word_1_f_0(SymNameAndArity_164);
              HeadVar__3_3 = parse_tree__write_error_spec__join_string_and_tail_3_f_0(Word_165, Pieces_7, TailStr_10);
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word PFSymNameArity_22 = ((MR_Word) ((MR_hl_field(3, Piece_6, (MR_Integer) 1))));
              MR_String Word_91;

              Word_91 = parse_tree__prog_out__pf_sym_name_pred_form_arity_to_string_1_f_0(PFSymNameArity_22);
              HeadVar__3_3 = parse_tree__write_error_spec__join_string_and_tail_3_f_0(Word_91, Pieces_7, TailStr_10);
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word PFSymNameArity0_23 = ((MR_Word) ((MR_hl_field(3, Piece_6, (MR_Integer) 1))));
              MR_Word PF_24 = ((MR_Unsigned) ((MR_hl_field(0, PFSymNameArity0_23, (MR_Integer) 0))) & (MR_Integer) 1);
              MR_Word PredFormArity_25 = ((MR_Word) ((MR_hl_field(0, PFSymNameArity0_23, (MR_Integer) 2))));
              MR_String Var_55;
              MR_Word SymName_87;
              MR_Word SymName0_88 = ((MR_Word) ((MR_hl_field(0, PFSymNameArity0_23, (MR_Integer) 1))));
              MR_Word PFSymNameArity_158;
              MR_String Word_159;

              Var_55 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName0_88);
              {
                SymName_87 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, SymName_87, 0) = ((MR_Box) (Var_55));
              }
              {
                PFSymNameArity_158 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, PFSymNameArity_158, 0) = (MR_Box) ((MR_Unsigned) (PF_24));
                MR_hl_field(0, PFSymNameArity_158, 1) = ((MR_Box) (SymName_87));
                MR_hl_field(0, PFSymNameArity_158, 2) = ((MR_Box) (PredFormArity_25));
              }
              Word_159 = parse_tree__prog_out__pf_sym_name_pred_form_arity_to_string_1_f_0(PFSymNameArity_158);
              HeadVar__3_3 = parse_tree__write_error_spec__join_string_and_tail_3_f_0(Word_159, Pieces_7, TailStr_10);
            }
            break;
          case (MR_Integer) 15:
            {
              MR_String Word_102;
              MR_Word PFSymNameArity_105 = ((MR_Word) ((MR_hl_field(3, Piece_6, (MR_Integer) 1))));

              Word_102 = parse_tree__prog_out__pf_sym_name_user_arity_to_string_1_f_0(PFSymNameArity_105);
              HeadVar__3_3 = parse_tree__write_error_spec__join_string_and_tail_3_f_0(Word_102, Pieces_7, TailStr_10);
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Word UserArity_26;
              MR_String Var_56;
              MR_Word SymName_94;
              MR_Word SymName0_95;
              MR_Word PFSymNameArity0_96 = ((MR_Word) ((MR_hl_field(3, Piece_6, (MR_Integer) 1))));
              MR_Word PF_97 = ((MR_Unsigned) ((MR_hl_field(0, PFSymNameArity0_96, (MR_Integer) 0))) & (MR_Integer) 1);
              MR_String Word_160;
              MR_Word PFSymNameArity_161;

              SymName0_95 = ((MR_Word) ((MR_hl_field(0, PFSymNameArity0_96, (MR_Integer) 1))));
              UserArity_26 = ((MR_Word) ((MR_hl_field(0, PFSymNameArity0_96, (MR_Integer) 2))));
              Var_56 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName0_95);
              {
                SymName_94 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, SymName_94, 0) = ((MR_Box) (Var_56));
              }
              {
                PFSymNameArity_161 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, PFSymNameArity_161, 0) = (MR_Box) ((MR_Unsigned) (PF_97));
                MR_hl_field(0, PFSymNameArity_161, 1) = ((MR_Box) (SymName_94));
                MR_hl_field(0, PFSymNameArity_161, 2) = ((MR_Box) (UserArity_26));
              }
              Word_160 = parse_tree__prog_out__pf_sym_name_user_arity_to_string_1_f_0(PFSymNameArity_161);
              HeadVar__3_3 = parse_tree__write_error_spec__join_string_and_tail_3_f_0(Word_160, Pieces_7, TailStr_10);
            }
            break;
          case (MR_Integer) 17:
            {
              MR_Word TypeCtor_29 = ((MR_Word) ((MR_hl_field(3, Piece_6, (MR_Integer) 1))));
              MR_String Word_140;
              MR_Word SymName_141 = ((MR_Word) ((MR_hl_field(0, TypeCtor_29, (MR_Integer) 0))));
              MR_Word SymNameAndArity_142;
              MR_Integer Arity_143 = ((MR_Integer) ((MR_hl_field(0, TypeCtor_29, (MR_Integer) 1))));

              {
                SymNameAndArity_142 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, SymNameAndArity_142, 0) = ((MR_Box) (SymName_141));
                MR_hl_field(0, SymNameAndArity_142, 1) = ((MR_Box) (Arity_143));
              }
              Word_140 = parse_tree__write_error_spec__sym_name_arity_to_word_1_f_0(SymNameAndArity_142);
              HeadVar__3_3 = parse_tree__write_error_spec__join_string_and_tail_3_f_0(Word_140, Pieces_7, TailStr_10);
            }
            break;
          case (MR_Integer) 18:
            {
              MR_String Var_57;
              MR_Word SymName0_110;
              MR_Word TypeCtor_111 = ((MR_Word) ((MR_hl_field(3, Piece_6, (MR_Integer) 1))));
              MR_String Word_166;
              MR_Word SymName_167;
              MR_Word SymNameAndArity_168;
              MR_Integer Arity_169;

              SymName0_110 = ((MR_Word) ((MR_hl_field(0, TypeCtor_111, (MR_Integer) 0))));
              Arity_169 = ((MR_Integer) ((MR_hl_field(0, TypeCtor_111, (MR_Integer) 1))));
              Var_57 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName0_110);
              {
                SymName_167 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, SymName_167, 0) = ((MR_Box) (Var_57));
              }
              {
                SymNameAndArity_168 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, SymNameAndArity_168, 0) = ((MR_Box) (SymName_167));
                MR_hl_field(0, SymNameAndArity_168, 1) = ((MR_Box) (Arity_169));
              }
              Word_166 = parse_tree__write_error_spec__sym_name_arity_to_word_1_f_0(SymNameAndArity_168);
              HeadVar__3_3 = parse_tree__write_error_spec__join_string_and_tail_3_f_0(Word_166, Pieces_7, TailStr_10);
            }
            break;
          case (MR_Integer) 19:
            {
              MR_Word InstCtor_30 = ((MR_Word) ((MR_hl_field(3, Piece_6, (MR_Integer) 1))));
              MR_String Word_132;
              MR_Word SymName_133 = ((MR_Word) ((MR_hl_field(0, InstCtor_30, (MR_Integer) 0))));
              MR_Word SymNameAndArity_134;
              MR_Integer Arity_135 = ((MR_Integer) ((MR_hl_field(0, InstCtor_30, (MR_Integer) 1))));

              {
                SymNameAndArity_134 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, SymNameAndArity_134, 0) = ((MR_Box) (SymName_133));
                MR_hl_field(0, SymNameAndArity_134, 1) = ((MR_Box) (Arity_135));
              }
              Word_132 = parse_tree__write_error_spec__sym_name_arity_to_word_1_f_0(SymNameAndArity_134);
              HeadVar__3_3 = parse_tree__write_error_spec__join_string_and_tail_3_f_0(Word_132, Pieces_7, TailStr_10);
            }
            break;
          case (MR_Integer) 20:
            {
              MR_String Var_58;
              MR_Word SymName0_112;
              MR_Word InstCtor_113 = ((MR_Word) ((MR_hl_field(3, Piece_6, (MR_Integer) 1))));
              MR_String Word_150;
              MR_Word SymName_151;
              MR_Word SymNameAndArity_152;
              MR_Integer Arity_153;

              SymName0_112 = ((MR_Word) ((MR_hl_field(0, InstCtor_113, (MR_Integer) 0))));
              Arity_153 = ((MR_Integer) ((MR_hl_field(0, InstCtor_113, (MR_Integer) 1))));
              Var_58 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName0_112);
              {
                SymName_151 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, SymName_151, 0) = ((MR_Box) (Var_58));
              }
              {
                SymNameAndArity_152 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, SymNameAndArity_152, 0) = ((MR_Box) (SymName_151));
                MR_hl_field(0, SymNameAndArity_152, 1) = ((MR_Box) (Arity_153));
              }
              Word_150 = parse_tree__write_error_spec__sym_name_arity_to_word_1_f_0(SymNameAndArity_152);
              HeadVar__3_3 = parse_tree__write_error_spec__join_string_and_tail_3_f_0(Word_150, Pieces_7, TailStr_10);
            }
            break;
          case (MR_Integer) 21:
            {
              MR_Word ModeCtor_31 = ((MR_Word) ((MR_hl_field(3, Piece_6, (MR_Integer) 1))));
              MR_String Word_136;
              MR_Word SymName_137 = ((MR_Word) ((MR_hl_field(0, ModeCtor_31, (MR_Integer) 0))));
              MR_Word SymNameAndArity_138;
              MR_Integer Arity_139 = ((MR_Integer) ((MR_hl_field(0, ModeCtor_31, (MR_Integer) 1))));

              {
                SymNameAndArity_138 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, SymNameAndArity_138, 0) = ((MR_Box) (SymName_137));
                MR_hl_field(0, SymNameAndArity_138, 1) = ((MR_Box) (Arity_139));
              }
              Word_136 = parse_tree__write_error_spec__sym_name_arity_to_word_1_f_0(SymNameAndArity_138);
              HeadVar__3_3 = parse_tree__write_error_spec__join_string_and_tail_3_f_0(Word_136, Pieces_7, TailStr_10);
            }
            break;
          case (MR_Integer) 22:
            {
              MR_String Var_59;
              MR_Word SymName0_114;
              MR_Word ModeCtor_115 = ((MR_Word) ((MR_hl_field(3, Piece_6, (MR_Integer) 1))));
              MR_String Word_154;
              MR_Word SymName_155;
              MR_Word SymNameAndArity_156;
              MR_Integer Arity_157;

              SymName0_114 = ((MR_Word) ((MR_hl_field(0, ModeCtor_115, (MR_Integer) 0))));
              Arity_157 = ((MR_Integer) ((MR_hl_field(0, ModeCtor_115, (MR_Integer) 1))));
              Var_59 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName0_114);
              {
                SymName_155 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, SymName_155, 0) = ((MR_Box) (Var_59));
              }
              {
                SymNameAndArity_156 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, SymNameAndArity_156, 0) = ((MR_Box) (SymName_155));
                MR_hl_field(0, SymNameAndArity_156, 1) = ((MR_Box) (Arity_157));
              }
              Word_154 = parse_tree__write_error_spec__sym_name_arity_to_word_1_f_0(SymNameAndArity_156);
              HeadVar__3_3 = parse_tree__write_error_spec__join_string_and_tail_3_f_0(Word_154, Pieces_7, TailStr_10);
            }
            break;
          case (MR_Integer) 23:
            {
              MR_Word ClassId_32 = ((MR_Word) ((MR_hl_field(3, Piece_6, (MR_Integer) 1))));
              MR_String Word_119;
              MR_Word SymName_120 = ((MR_Word) ((MR_hl_field(0, ClassId_32, (MR_Integer) 0))));
              MR_Word SymNameAndArity_122;
              MR_Integer Arity_123 = ((MR_Integer) ((MR_hl_field(0, ClassId_32, (MR_Integer) 1))));

              {
                SymNameAndArity_122 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, SymNameAndArity_122, 0) = ((MR_Box) (SymName_120));
                MR_hl_field(0, SymNameAndArity_122, 1) = ((MR_Box) (Arity_123));
              }
              Word_119 = parse_tree__write_error_spec__sym_name_arity_to_word_1_f_0(SymNameAndArity_122);
              HeadVar__3_3 = parse_tree__write_error_spec__join_string_and_tail_3_f_0(Word_119, Pieces_7, TailStr_10);
            }
            break;
          case (MR_Integer) 24:
            {
              MR_String Var_60;
              MR_Word SymName0_116;
              MR_Word ClassId_117 = ((MR_Word) ((MR_hl_field(3, Piece_6, (MR_Integer) 1))));
              MR_String Word_144;
              MR_Word SymName_145;
              MR_Word SymNameAndArity_146;
              MR_Integer Arity_147;

              SymName0_116 = ((MR_Word) ((MR_hl_field(0, ClassId_117, (MR_Integer) 0))));
              Arity_147 = ((MR_Integer) ((MR_hl_field(0, ClassId_117, (MR_Integer) 1))));
              Var_60 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName0_116);
              {
                SymName_145 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, SymName_145, 0) = ((MR_Box) (Var_60));
              }
              {
                SymNameAndArity_146 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, SymNameAndArity_146, 0) = ((MR_Box) (SymName_145));
                MR_hl_field(0, SymNameAndArity_146, 1) = ((MR_Box) (Arity_147));
              }
              Word_144 = parse_tree__write_error_spec__sym_name_arity_to_word_1_f_0(SymNameAndArity_146);
              HeadVar__3_3 = parse_tree__write_error_spec__join_string_and_tail_3_f_0(Word_144, Pieces_7, TailStr_10);
            }
            break;
          case (MR_Integer) 25:
            {
              MR_Word ConsId0_27 = ((MR_Word) ((MR_hl_field(3, Piece_6, (MR_Integer) 1))));
              MR_Word ConsId_28;
              MR_String Word_109;

              parse_tree__prog_util__strip_builtin_qualifier_from_cons_id_2_p_0(ConsId0_27, &ConsId_28);
              Word_109 = parse_tree__prog_out__maybe_quoted_cons_id_and_arity_to_string_1_f_0(ConsId_28);
              HeadVar__3_3 = parse_tree__write_error_spec__join_string_and_tail_3_f_0(Word_109, Pieces_7, TailStr_10);
            }
            break;
          case (MR_Integer) 26:
            {
              MR_Word ConsId0_108 = ((MR_Word) ((MR_hl_field(3, Piece_6, (MR_Integer) 1))));
              MR_Word ConsId_148;
              MR_String Word_149;

              parse_tree__prog_util__strip_module_qualifier_from_cons_id_2_p_0(ConsId0_108, &ConsId_148);
              Word_149 = parse_tree__prog_out__maybe_quoted_cons_id_and_arity_to_string_1_f_0(ConsId_148);
              HeadVar__3_3 = parse_tree__write_error_spec__join_string_and_tail_3_f_0(Word_149, Pieces_7, TailStr_10);
            }
            break;
          case (MR_Integer) 27:
            {
              MR_Word Type_33 = ((MR_Word) ((MR_hl_field(3, Piece_6, (MR_Integer) 1))));
              MR_Word TypeCtorSymName_34;
              MR_Integer TypeCtorArity_35;
              MR_Word SymNameArity_36;
              MR_String Word_124;
              MR_Word TypeCtor_125;

              parse_tree__prog_type__type_to_ctor_det_2_p_0(Type_33, &TypeCtor_125);
              TypeCtorSymName_34 = ((MR_Word) ((MR_hl_field(0, TypeCtor_125, (MR_Integer) 0))));
              TypeCtorArity_35 = ((MR_Integer) ((MR_hl_field(0, TypeCtor_125, (MR_Integer) 1))));
              {
                SymNameArity_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, SymNameArity_36, 0) = ((MR_Box) (TypeCtorSymName_34));
                MR_hl_field(0, SymNameArity_36, 1) = ((MR_Box) (TypeCtorArity_35));
              }
              Word_124 = parse_tree__write_error_spec__sym_name_arity_to_word_1_f_0(SymNameArity_36);
              HeadVar__3_3 = parse_tree__write_error_spec__join_string_and_tail_3_f_0(Word_124, Pieces_7, TailStr_10);
            }
            break;
          case (MR_Integer) 28:
            {
              MR_Word PredOrFunc_37 = ((MR_Unsigned) ((MR_hl_field(3, Piece_6, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_String Word_126;

              Word_126 = mdbcomp__prim_data__pred_or_func_to_string_1_f_0(PredOrFunc_37);
              HeadVar__3_3 = parse_tree__write_error_spec__join_string_and_tail_3_f_0(Word_126, Pieces_7, TailStr_10);
            }
            break;
          case (MR_Integer) 29:
            {
              MR_Word Purity_38 = ((MR_Unsigned) ((MR_hl_field(3, Piece_6, (MR_Integer) 1))) & (MR_Integer) 3);
              MR_String Word_127;

              Word_127 = parse_tree__write_error_spec__purity_to_string_1_f_0(Purity_38);
              HeadVar__3_3 = parse_tree__write_error_spec__join_string_and_tail_3_f_0(Word_127, Pieces_7, TailStr_10);
            }
            break;
          case (MR_Integer) 30:
            {
              MR_String Word_128;
              MR_Word Purity_129 = ((MR_Unsigned) ((MR_hl_field(3, Piece_6, (MR_Integer) 1))) & (MR_Integer) 3);

              Word_128 = parse_tree__write_error_spec__a_purity_to_string_1_f_0(Purity_129);
              HeadVar__3_3 = parse_tree__write_error_spec__join_string_and_tail_3_f_0(Word_128, Pieces_7, TailStr_10);
            }
            break;
          case (MR_Integer) 31:
            {
              MR_String Decl_39 = ((MR_String) ((MR_hl_field(3, Piece_6, (MR_Integer) 1))));
              MR_String Var_61;
              MR_String Word_130;

              Var_61 = mercury__string__f_43_43_2_f_0((MR_String) ":- ", Decl_39);
              Word_130 = parse_tree__error_spec__add_quotes_1_f_0(Var_61);
              HeadVar__3_3 = parse_tree__write_error_spec__join_string_and_tail_3_f_0(Word_130, Pieces_7, TailStr_10);
            }
            break;
          case (MR_Integer) 32:
            {
              MR_String PragmaName_40 = ((MR_String) ((MR_hl_field(3, Piece_6, (MR_Integer) 1))));
              MR_String Var_63;
              MR_String Word_131;

              Var_63 = mercury__string__f_43_43_2_f_0((MR_String) ":- pragma ", PragmaName_40);
              Word_131 = parse_tree__error_spec__add_quotes_1_f_0(Var_63);
              HeadVar__3_3 = parse_tree__write_error_spec__join_string_and_tail_3_f_0(Word_131, Pieces_7, TailStr_10);
            }
            break;
          case (MR_Integer) 33:
            {
              MR_String LP_42 = ((MR_String) ((MR_hl_field(3, Piece_6, (MR_Integer) 1))));
              MR_String Var_68;

              Var_68 = mercury__string__f_43_43_2_f_0(LP_42, (MR_String) "\n");
              HeadVar__3_3 = parse_tree__write_error_spec__join_string_and_tail_3_f_0(Var_68, Pieces_7, TailStr_10);
            }
            break;
          case (MR_Integer) 34:
            {
              MR_String RP_44 = ((MR_String) ((MR_hl_field(3, Piece_6, (MR_Integer) 1))));
              MR_Word RPWordKind_45 = ((MR_Unsigned) ((MR_hl_field(3, Piece_6, (MR_Integer) 2))) & (MR_Integer) 1);

              switch (RPWordKind_45) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_String Var_70;

                    Var_70 = mercury__string__f_43_43_2_f_0((MR_String) "\n", RP_44);
                    HeadVar__3_3 = parse_tree__write_error_spec__join_string_and_tail_3_f_0(Var_70, Pieces_7, TailStr_10);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_String Var_73;

                    Var_73 = mercury__string__f_43_43_2_f_0(RP_44, TailStr_10);
                    HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "\n", Var_73);
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 35:
            HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "\n", TailStr_10);
            break;
          case (MR_Integer) 36:
            HeadVar__3_3 = TailStr_10;
            break;
        }
        break;
    }
  }
  return HeadVar__3_3;
}

static MR_String MR_CALL 
parse_tree__write_error_spec__join_string_and_tail_3_f_0(
  MR_String Word_5,
  MR_Word Pieces_6,
  MR_String TailStr_7)
{
  MR_bool succeeded = (strcmp(TailStr_7, (MR_String) "") == 0);
  MR_String Str_8;

  if (succeeded)
    Str_8 = Word_5;
  else
  {
    MR_Word NextPiece_9;

    succeeded = (Pieces_6 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      NextPiece_9 = ((MR_Word) ((MR_hl_field(1, Pieces_6, (MR_Integer) 0))));
      if (((((MR_tag((MR_Word) NextPiece_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, NextPiece_9, (MR_Integer) 0)))) == (MR_Integer) 33))))
      {
        MR_Word Var_13 = ((MR_Unsigned) ((MR_hl_field(3, NextPiece_9, (MR_Integer) 2))) & (MR_Integer) 1);

        succeeded = (Var_13 == (MR_Integer) 1);
      }
      else
      if (((((MR_tag((MR_Word) NextPiece_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, NextPiece_9, (MR_Integer) 0)))) == (MR_Integer) 5))))
        succeeded = MR_TRUE;
      else
        succeeded = MR_FALSE;
    }
    if (succeeded)
      Str_8 = mercury__string__f_43_43_2_f_0(Word_5, TailStr_7);
    else
    {
      MR_String Var_14;

      Var_14 = mercury__string__f_43_43_2_f_0((MR_String) " ", TailStr_7);
      Str_8 = mercury__string__f_43_43_2_f_0(Word_5, Var_14);
    }
  }
  return Str_8;
}

void MR_CALL 
parse_tree__write_error_spec__write_error_pieces_maybe_with_context_7_p_0(
  MR_Word Stream_8,
  MR_Word Globals_9,
  MR_Word MaybeContext_10,
  MR_Integer Indent_11,
  MR_Word Pieces_12)
{
  parse_tree__write_error_spec__do_write_error_pieces_8_p_0(Stream_8, Globals_9, MaybeContext_10, (MR_Integer) 0, Indent_11, Pieces_12);
}

void MR_CALL 
parse_tree__write_error_spec__write_error_pieces_maybe_with_context_6_p_0(
  MR_Word Globals_7,
  MR_Word MaybeContext_8,
  MR_Integer Indent_9,
  MR_Word Pieces_10)
{
  MR_Word Stream_12;

  mercury__io__output_stream_3_p_0(&Stream_12);
  parse_tree__write_error_spec__do_write_error_pieces_8_p_0(Stream_12, Globals_7, MaybeContext_8, (MR_Integer) 0, Indent_9, Pieces_10);
}

void MR_CALL 
parse_tree__write_error_spec__write_error_pieces_7_p_0(
  MR_Word Stream_8,
  MR_Word Globals_9,
  MR_Word Context_10,
  MR_Integer Indent_11,
  MR_Word Pieces_12)
{
  MR_Word Var_16;

  {
    Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_16, 0) = ((MR_Box) (Context_10));
  }
  parse_tree__write_error_spec__do_write_error_pieces_8_p_0(Stream_8, Globals_9, Var_16, (MR_Integer) 0, Indent_11, Pieces_12);
}

void MR_CALL 
parse_tree__write_error_spec__write_error_pieces_6_p_0(
  MR_Word Globals_7,
  MR_Word Context_8,
  MR_Integer Indent_9,
  MR_Word Pieces_10)
{
  MR_Word Stream_12;
  MR_Word Var_16;

  mercury__io__output_stream_3_p_0(&Stream_12);
  {
    Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_16, 0) = ((MR_Box) (Context_8));
  }
  parse_tree__write_error_spec__do_write_error_pieces_8_p_0(Stream_12, Globals_7, Var_16, (MR_Integer) 0, Indent_9, Pieces_10);
}

void MR_CALL 
parse_tree__write_error_spec__write_error_pieces_plain_5_p_0(
  MR_Word Stream_6,
  MR_Word Globals_7,
  MR_Word Pieces_8)
{
  parse_tree__write_error_spec__do_write_error_pieces_8_p_0(Stream_6, Globals_7, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 0, Pieces_8);
}

void MR_CALL 
parse_tree__write_error_spec__write_error_pieces_plain_4_p_0(
  MR_Word Globals_5,
  MR_Word Pieces_6)
{
  MR_Word Stream_8;

  mercury__io__output_stream_3_p_0(&Stream_8);
  parse_tree__write_error_spec__do_write_error_pieces_8_p_0(Stream_8, Globals_5, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 0, Pieces_6);
}

void MR_CALL 
parse_tree__write_error_spec__write_error_specs_4_p_0(
  MR_Word Globals_5,
  MR_Word Specs0_6)
{
  MR_Word Stream_8;

  mercury__io__output_stream_3_p_0(&Stream_8);
  parse_tree__write_error_spec__write_error_specs_5_p_0(Stream_8, Globals_5, Specs0_6);
}

static void MR_CALL 
parse_tree__write_error_spec__write_error_specs_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9)
{
  MR_Box closure = closure_arg;
  MR_Integer conv2_STATE_VARIABLE_NumWarnings_46;
  MR_Integer conv1_STATE_VARIABLE_NumErrors_48;
  MR_Word conv0_STATE_VARIABLE_AlreadyPrintedVerbose_50;

  parse_tree__write_error_spec__do_write_error_spec_11_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv2_STATE_VARIABLE_NumWarnings_46, ((MR_Integer) (wrapper_arg_4)), &conv1_STATE_VARIABLE_NumErrors_48, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_AlreadyPrintedVerbose_50);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_NumWarnings_46));
  *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_NumErrors_48));
  *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_AlreadyPrintedVerbose_50));
}

void MR_CALL 
parse_tree__write_error_spec__write_error_specs_5_p_0(
  MR_Word Stream_6,
  MR_Word Globals_7,
  MR_Word Specs0_8)
{
  MR_Word Specs_10;
  MR_Word Var_16;
  MR_Word Var_19;
  MR_Box conv6_Var_11;
  MR_Box conv5_Var_12;
  MR_Box conv4_Var_13;
  MR_Box conv3_STATE_VARIABLE_IO_15;

  parse_tree__error_sort__sort_error_specs_3_p_0(Globals_7, Specs0_8, &Specs_10);
  {
    Var_16 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_16, 0) = ((MR_Box) (&parse_tree__write_error_spec_scalar_common_6[0]));
    MR_hl_field(0, Var_16, 1) = ((MR_Box) (parse_tree__write_error_spec__write_error_specs_5_p_0_1));
    MR_hl_field(0, Var_16, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_16, 3) = ((MR_Box) (Stream_6));
    MR_hl_field(0, Var_16, 4) = ((MR_Box) (Globals_7));
  }
  Var_19 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__write_error_spec_scalar_common_1[0]));
  mercury__list__foldl4_10_p_2((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&parse_tree__write_error_spec_scalar_common_1[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_16, Specs_10, ((MR_Box) ((MR_Integer) 0)), &conv6_Var_11, ((MR_Box) ((MR_Integer) 0)), &conv5_Var_12, ((MR_Box) (Var_19)), &conv4_Var_13, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_15);
}

void MR_CALL 
parse_tree__write_error_spec__write_error_spec_5_p_0(
  MR_Word Stream_6,
  MR_Word Globals_7,
  MR_Word Spec_8)
{
  MR_Word Var_17;
  MR_Integer Var_10;
  MR_Integer Var_11;
  MR_Word Var_12;

  Var_17 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__write_error_spec_scalar_common_1[0]));
  parse_tree__write_error_spec__do_write_error_spec_11_p_0(Stream_6, Globals_7, Spec_8, (MR_Integer) 0, &Var_10, (MR_Integer) 0, &Var_11, Var_17, &Var_12);
}

void MR_CALL 
parse_tree__write_error_spec__write_error_spec_4_p_0(
  MR_Word Globals_5,
  MR_Word Spec_6)
{
  MR_Word Stream_8;
  MR_Word Var_17;
  MR_Integer Var_12;
  MR_Integer Var_13;
  MR_Word Var_14;

  mercury__io__output_stream_3_p_0(&Stream_8);
  Var_17 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__write_error_spec_scalar_common_1[0]));
  parse_tree__write_error_spec__do_write_error_spec_11_p_0(Stream_8, Globals_5, Spec_6, (MR_Integer) 0, &Var_12, (MR_Integer) 0, &Var_13, Var_17, &Var_14);
}

static void MR_CALL 
parse_tree__write_error_spec__do_write_error_spec_11_p_0(
  MR_Word Stream_12,
  MR_Word Globals_13,
  MR_Word Spec_14,
  MR_Integer STATE_VARIABLE_NumWarnings_0_45,
  MR_Integer * STATE_VARIABLE_NumWarnings_46,
  MR_Integer STATE_VARIABLE_NumErrors_0_47,
  MR_Integer * STATE_VARIABLE_NumErrors_48,
  MR_Word STATE_VARIABLE_AlreadyPrintedVerbose_0_49,
  MR_Word * STATE_VARIABLE_AlreadyPrintedVerbose_50)
{
  MR_bool succeeded;
  MR_String Id_19;
  MR_Word Msgs1_22;
  MR_Word MaybeActual_23;
  MR_Word PrintId_30;
  MR_Word Msgs_31;
  MR_Word PrintedSome_43;

  switch (MR_tag((MR_Word) Spec_14)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Severity_20;

        Id_19 = ((MR_String) ((MR_hl_field(0, Spec_14, (MR_Integer) 0))));
        Severity_20 = ((MR_Word) ((MR_hl_field(0, Spec_14, (MR_Integer) 1))));
        Msgs1_22 = ((MR_Word) ((MR_hl_field(0, Spec_14, (MR_Integer) 3))));
        MaybeActual_23 = parse_tree__error_util__actual_error_severity_2_f_0(Globals_13, Severity_20);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Context_24;
        MR_Word Pieces_25;
        MR_Word Var_53;
        MR_Word Severity_87;

        Id_19 = ((MR_String) ((MR_hl_field(1, Spec_14, (MR_Integer) 0))));
        Severity_87 = ((MR_Word) ((MR_hl_field(1, Spec_14, (MR_Integer) 1))));
        Context_24 = ((MR_Word) ((MR_hl_field(1, Spec_14, (MR_Integer) 3))));
        Pieces_25 = ((MR_Word) ((MR_hl_field(1, Spec_14, (MR_Integer) 4))));
        MaybeActual_23 = parse_tree__error_util__actual_error_severity_2_f_0(Globals_13, Severity_87);
        {
          Var_53 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_53, 0) = ((MR_Box) (Context_24));
          MR_hl_field(0, Var_53, 1) = ((MR_Box) (Pieces_25));
        }
        {
          Msgs1_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Msgs1_22, 0) = ((MR_Box) (Var_53));
          MR_hl_field(1, Msgs1_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Var_55;
        MR_Word Severity_90;
        MR_Word Pieces_92;

        Id_19 = ((MR_String) ((MR_hl_field(2, Spec_14, (MR_Integer) 0))));
        Severity_90 = ((MR_Word) ((MR_hl_field(2, Spec_14, (MR_Integer) 1))));
        Pieces_92 = ((MR_Word) ((MR_hl_field(2, Spec_14, (MR_Integer) 3))));
        MaybeActual_23 = parse_tree__error_util__actual_error_severity_2_f_0(Globals_13, Severity_90);
        {
          Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_55, 0) = ((MR_Box) (Pieces_92));
        }
        {
          Msgs1_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Msgs1_22, 0) = ((MR_Box) (Var_55));
          MR_hl_field(1, Msgs1_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word Option_26;
        MR_Word MatchValue_27;
        MR_Word Msgs0_28;
        MR_Word Value_29;
        MR_Word Severity_94;

        Id_19 = ((MR_String) ((MR_hl_field(3, Spec_14, (MR_Integer) 0))));
        Option_26 = ((((MR_Unsigned) ((MR_hl_field(3, Spec_14, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1023);
        MatchValue_27 = ((MR_Unsigned) ((MR_hl_field(3, Spec_14, (MR_Integer) 1))) & (MR_Integer) 1);
        Severity_94 = ((MR_Word) ((MR_hl_field(3, Spec_14, (MR_Integer) 2))));
        Msgs0_28 = ((MR_Word) ((MR_hl_field(3, Spec_14, (MR_Integer) 4))));
        libs__globals__lookup_bool_option_3_p_0(Globals_13, Option_26, &Value_29);
        succeeded = (Value_29 == MatchValue_27);
        if (succeeded)
        {
          MaybeActual_23 = parse_tree__error_util__actual_error_severity_2_f_0(Globals_13, Severity_94);
          Msgs1_22 = Msgs0_28;
        }
        else
        {
          MaybeActual_23 = (MR_Word) ((MR_Unsigned) 0U);
          Msgs1_22 = (MR_Word) ((MR_Unsigned) 0U);
        }
      }
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 70, &PrintId_30);
  switch (PrintId_30) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      Msgs_31 = Msgs1_22;
      break;
    case (MR_Integer) 1:
      if ((Msgs1_22 == (MR_Word) ((MR_Unsigned) 0U)))
        Msgs_31 = Msgs1_22;
      else
      {
        MR_Word HeadMsg_32 = ((MR_Word) ((MR_hl_field(1, Msgs1_22, (MR_Integer) 0))));
        MR_Word MaybeHeadContext_37;
        MR_Word IdMsg_42;
        MR_Word Var_60;
        MR_Word Var_61;
        MR_Word Var_62;
        MR_Word Var_65;
        MR_Word Var_66;
        MR_Word Var_71;

        switch (MR_tag((MR_Word) HeadMsg_32)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word HeadContext_96 = ((MR_Word) ((MR_hl_field(0, HeadMsg_32, (MR_Integer) 0))));

              {
                MaybeHeadContext_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, MaybeHeadContext_37, 0) = ((MR_Box) (HeadContext_96));
              }
            }
            break;
          case (MR_Integer) 1:
            MaybeHeadContext_37 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 2:
            {
              MR_Word HeadContext_34 = ((MR_Word) ((MR_hl_field(2, HeadMsg_32, (MR_Integer) 0))));

              {
                MaybeHeadContext_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, MaybeHeadContext_37, 0) = ((MR_Box) (HeadContext_34));
              }
            }
            break;
          case (MR_Integer) 3:
            MaybeHeadContext_37 = ((MR_Word) ((MR_hl_field(3, HeadMsg_32, (MR_Integer) 0))));
            break;
        }
        {
          Var_66 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_66, 0) = ((MR_Box) (Id_19));
        }
        {
          Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_65, 0) = ((MR_Box) (Var_66));
          MR_hl_field(1, Var_65, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__write_error_spec_scalar_common_1[6])));
        }
        {
          Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_62, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__write_error_spec_scalar_common_1[5])));
          MR_hl_field(1, Var_62, 1) = ((MR_Box) (Var_65));
        }
        {
          Var_61 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_61, 0) = ((MR_Box) (Var_62));
        }
        {
          Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_60, 0) = ((MR_Box) (Var_61));
          MR_hl_field(1, Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          IdMsg_42 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, IdMsg_42, 0) = ((MR_Box) (MaybeHeadContext_37));
          MR_hl_field(3, IdMsg_42, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
          MR_hl_field(3, IdMsg_42, 2) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(3, IdMsg_42, 3) = ((MR_Box) (Var_60));
        }
        {
          Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_71, 0) = ((MR_Box) (IdMsg_42));
          MR_hl_field(1, Var_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Msgs_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0), Msgs1_22, Var_71);
      }
      break;
  }
  parse_tree__write_error_spec__do_write_error_msgs_10_p_0(Stream_12, Msgs_31, Globals_13, (MR_Integer) 0, (MR_Integer) 1, &PrintedSome_43, STATE_VARIABLE_AlreadyPrintedVerbose_0_49, STATE_VARIABLE_AlreadyPrintedVerbose_50);
  switch (PrintedSome_43) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        *STATE_VARIABLE_NumWarnings_46 = STATE_VARIABLE_NumWarnings_0_45;
        *STATE_VARIABLE_NumErrors_48 = STATE_VARIABLE_NumErrors_0_47;
      }
      break;
    case (MR_Integer) 0:
      if ((MaybeActual_23 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.write_error_spec.do_write_error_spec\'/11", (MR_String) "printed_something but MaybeActual = no");
          return;
        }
      else
      {
        MR_Word Actual_44 = ((MR_Word) ((MR_hl_field(1, MaybeActual_23, (MR_Integer) 0))));

        switch (Actual_44) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *STATE_VARIABLE_NumErrors_48 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumErrors_0_47 + (MR_Unsigned) 1);
              mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
              *STATE_VARIABLE_NumWarnings_46 = STATE_VARIABLE_NumWarnings_0_45;
            }
            break;
          case (MR_Integer) 2:
            {
              *STATE_VARIABLE_NumWarnings_46 = STATE_VARIABLE_NumWarnings_0_45;
              *STATE_VARIABLE_NumErrors_48 = STATE_VARIABLE_NumErrors_0_47;
            }
            break;
          case (MR_Integer) 1:
            {
              *STATE_VARIABLE_NumWarnings_46 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumWarnings_0_45 + (MR_Unsigned) 1);
              libs__compiler_util__record_warning_3_p_0(Globals_13);
              *STATE_VARIABLE_NumErrors_48 = STATE_VARIABLE_NumErrors_0_47;
            }
            break;
        }
      }
      break;
  }
}

static void MR_CALL 
parse_tree__write_error_spec__do_write_error_msgs_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_PrintedSome_0_5,
  MR_Word * STATE_VARIABLE_PrintedSome_6,
  MR_Word STATE_VARIABLE_AlreadyPrintedVerbose_0_7,
  MR_Word * STATE_VARIABLE_AlreadyPrintedVerbose_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_AlreadyPrintedVerbose_8 = STATE_VARIABLE_AlreadyPrintedVerbose_0_7;
      *STATE_VARIABLE_PrintedSome_6 = STATE_VARIABLE_PrintedSome_0_5;
    }
    else
    {
      MR_Word Msg_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Msgs_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Components_33;
      MR_Word MaybeContext_34;
      MR_Integer ExtraIndentLevel_36;
      MR_Integer Indent_37;
      MR_Word STATE_VARIABLE_First_49_49;
      MR_Integer Var_50;
      MR_Word STATE_VARIABLE_First_51_51;
      MR_Word STATE_VARIABLE_PrintedSome_52_52;
      MR_Word STATE_VARIABLE_AlreadyPrintedVerbose_53_53;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_PrintedSome_0_5;
      MR_Word next_value_of_STATE_VARIABLE_AlreadyPrintedVerbose_0_7;

      switch (MR_tag((MR_Word) Msg_24)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SimpleContext_31 = ((MR_Word) ((MR_hl_field(0, Msg_24, (MR_Integer) 0))));
            MR_Word Pieces_32 = ((MR_Word) ((MR_hl_field(0, Msg_24, (MR_Integer) 1))));
            MR_Word Var_45;

            {
              Var_45 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_45, 0) = ((MR_Box) (Pieces_32));
            }
            {
              Components_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Components_33, 0) = ((MR_Box) (Var_45));
              MR_hl_field(1, Components_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MaybeContext_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MaybeContext_34, 0) = ((MR_Box) (SimpleContext_31));
            }
            ExtraIndentLevel_36 = (MR_Integer) 0;
            STATE_VARIABLE_First_49_49 = HeadVar__4_4;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_47;
            MR_Word Pieces_58 = ((MR_Word) ((MR_hl_field(1, Msg_24, (MR_Integer) 0))));

            {
              Var_47 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_47, 0) = ((MR_Box) (Pieces_58));
            }
            {
              Components_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Components_33, 0) = ((MR_Box) (Var_47));
              MR_hl_field(1, Components_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            MaybeContext_34 = (MR_Word) ((MR_Unsigned) 0U);
            ExtraIndentLevel_36 = (MR_Integer) 0;
            STATE_VARIABLE_First_49_49 = HeadVar__4_4;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word SimpleContext_59 = ((MR_Word) ((MR_hl_field(2, Msg_24, (MR_Integer) 0))));

            Components_33 = ((MR_Word) ((MR_hl_field(2, Msg_24, (MR_Integer) 1))));
            {
              MaybeContext_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MaybeContext_34, 0) = ((MR_Box) (SimpleContext_59));
            }
            ExtraIndentLevel_36 = (MR_Integer) 0;
            STATE_VARIABLE_First_49_49 = HeadVar__4_4;
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word TreatAsFirst_35;

            MaybeContext_34 = ((MR_Word) ((MR_hl_field(3, Msg_24, (MR_Integer) 0))));
            TreatAsFirst_35 = ((MR_Unsigned) ((MR_hl_field(3, Msg_24, (MR_Integer) 1))) & (MR_Integer) 1);
            ExtraIndentLevel_36 = ((MR_Integer) ((MR_hl_field(3, Msg_24, (MR_Integer) 2))));
            Components_33 = ((MR_Word) ((MR_hl_field(3, Msg_24, (MR_Integer) 3))));
            switch (TreatAsFirst_35) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                STATE_VARIABLE_First_49_49 = (MR_Integer) 0;
                break;
              case (MR_Integer) 1:
                STATE_VARIABLE_First_49_49 = HeadVar__4_4;
                break;
            }
          }
          break;
      }
      Var_50 = parse_tree__prog_out__indent_increment_0_f_0();
      Indent_37 = (MR_Integer) ((MR_Unsigned) ExtraIndentLevel_36 * (MR_Unsigned) Var_50);
      parse_tree__write_error_spec__write_msg_components_13_p_0(HeadVar__1_1, Components_33, MaybeContext_34, Indent_37, HeadVar__3_3, STATE_VARIABLE_First_49_49, &STATE_VARIABLE_First_51_51, STATE_VARIABLE_PrintedSome_0_5, &STATE_VARIABLE_PrintedSome_52_52, STATE_VARIABLE_AlreadyPrintedVerbose_0_7, &STATE_VARIABLE_AlreadyPrintedVerbose_53_53);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Msgs_25;
      next_value_of_HeadVar__4_4 = STATE_VARIABLE_First_51_51;
      next_value_of_STATE_VARIABLE_PrintedSome_0_5 = STATE_VARIABLE_PrintedSome_52_52;
      next_value_of_STATE_VARIABLE_AlreadyPrintedVerbose_0_7 = STATE_VARIABLE_AlreadyPrintedVerbose_53_53;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_PrintedSome_0_5 = next_value_of_STATE_VARIABLE_PrintedSome_0_5;
      STATE_VARIABLE_AlreadyPrintedVerbose_0_7 = next_value_of_STATE_VARIABLE_AlreadyPrintedVerbose_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__write_error_spec__write_msg_components_13_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word MaybeContext_3,
  MR_Integer Indent_4,
  MR_Word Globals_5,
  MR_Word STATE_VARIABLE_First_0_6,
  MR_Word * STATE_VARIABLE_First_7,
  MR_Word STATE_VARIABLE_PrintedSome_0_8,
  MR_Word * STATE_VARIABLE_PrintedSome_9,
  MR_Word STATE_VARIABLE_AlreadyPrintedVerbose_0_10,
  MR_Word * STATE_VARIABLE_AlreadyPrintedVerbose_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_AlreadyPrintedVerbose_11 = STATE_VARIABLE_AlreadyPrintedVerbose_0_10;
      *STATE_VARIABLE_PrintedSome_9 = STATE_VARIABLE_PrintedSome_0_8;
      *STATE_VARIABLE_First_7 = STATE_VARIABLE_First_0_6;
    }
    else
    {
      MR_Word Component_31 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Components_32 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_First_59_59;
      MR_Word STATE_VARIABLE_PrintedSome_60_60;
      MR_Word STATE_VARIABLE_AlreadyPrintedVerbose_63_63;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_First_0_6;
      MR_Word next_value_of_STATE_VARIABLE_PrintedSome_0_8;
      MR_Word next_value_of_STATE_VARIABLE_AlreadyPrintedVerbose_0_10;

      switch (MR_tag((MR_Word) Component_31)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Pieces_40 = ((MR_Word) ((MR_hl_field(0, Component_31, (MR_Integer) 0))));

            parse_tree__write_error_spec__do_write_error_pieces_8_p_0(HeadVar__1_1, Globals_5, MaybeContext_3, STATE_VARIABLE_First_0_6, Indent_4, Pieces_40);
            STATE_VARIABLE_First_59_59 = (MR_Integer) 1;
            STATE_VARIABLE_PrintedSome_60_60 = (MR_Integer) 0;
            STATE_VARIABLE_AlreadyPrintedVerbose_63_63 = STATE_VARIABLE_AlreadyPrintedVerbose_0_10;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Option_41 = ((((MR_Unsigned) ((MR_hl_field(1, Component_31, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1023);
            MR_Word MatchValue_42 = ((MR_Unsigned) ((MR_hl_field(1, Component_31, (MR_Integer) 0))) & (MR_Integer) 1);
            MR_Word EmbeddedComponents_43 = ((MR_Word) ((MR_hl_field(1, Component_31, (MR_Integer) 1))));
            MR_Word OptionValue_44;

            libs__globals__lookup_bool_option_3_p_0(Globals_5, Option_41, &OptionValue_44);
            succeeded = (OptionValue_44 == MatchValue_42);
            if (succeeded)
              parse_tree__write_error_spec__write_msg_components_13_p_0(HeadVar__1_1, EmbeddedComponents_43, MaybeContext_3, Indent_4, Globals_5, STATE_VARIABLE_First_0_6, &STATE_VARIABLE_First_59_59, STATE_VARIABLE_PrintedSome_0_8, &STATE_VARIABLE_PrintedSome_60_60, STATE_VARIABLE_AlreadyPrintedVerbose_0_10, &STATE_VARIABLE_AlreadyPrintedVerbose_63_63);
            else
            {
              STATE_VARIABLE_AlreadyPrintedVerbose_63_63 = STATE_VARIABLE_AlreadyPrintedVerbose_0_10;
              STATE_VARIABLE_PrintedSome_60_60 = STATE_VARIABLE_PrintedSome_0_8;
              STATE_VARIABLE_First_59_59 = STATE_VARIABLE_First_0_6;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word AlwaysOrOnce_45 = ((MR_Unsigned) ((MR_hl_field(2, Component_31, (MR_Integer) 0))) & (MR_Integer) 1);
            MR_Word VerboseErrors_46;
            MR_Word Pieces_89 = ((MR_Word) ((MR_hl_field(2, Component_31, (MR_Integer) 1))));

            libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 74, &VerboseErrors_46);
            switch (VerboseErrors_46) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  libs__globals__io_set_extra_error_info_3_p_0((MR_Integer) 1);
                  STATE_VARIABLE_First_59_59 = STATE_VARIABLE_First_0_6;
                  STATE_VARIABLE_PrintedSome_60_60 = STATE_VARIABLE_PrintedSome_0_8;
                  STATE_VARIABLE_AlreadyPrintedVerbose_63_63 = STATE_VARIABLE_AlreadyPrintedVerbose_0_10;
                }
                break;
              case (MR_Integer) 1:
                switch (AlwaysOrOnce_45) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      parse_tree__write_error_spec__do_write_error_pieces_8_p_0(HeadVar__1_1, Globals_5, MaybeContext_3, STATE_VARIABLE_First_0_6, Indent_4, Pieces_89);
                      STATE_VARIABLE_First_59_59 = (MR_Integer) 1;
                      STATE_VARIABLE_PrintedSome_60_60 = (MR_Integer) 0;
                      STATE_VARIABLE_AlreadyPrintedVerbose_63_63 = STATE_VARIABLE_AlreadyPrintedVerbose_0_10;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      succeeded = mercury__set__contains_2_p_0((MR_Word) (&parse_tree__write_error_spec_scalar_common_1[0]), STATE_VARIABLE_AlreadyPrintedVerbose_0_10, ((MR_Box) (Pieces_89)));
                      if (succeeded)
                      {
                        STATE_VARIABLE_AlreadyPrintedVerbose_63_63 = STATE_VARIABLE_AlreadyPrintedVerbose_0_10;
                        STATE_VARIABLE_PrintedSome_60_60 = STATE_VARIABLE_PrintedSome_0_8;
                        STATE_VARIABLE_First_59_59 = STATE_VARIABLE_First_0_6;
                      }
                      else
                      {
                        parse_tree__write_error_spec__do_write_error_pieces_8_p_0(HeadVar__1_1, Globals_5, MaybeContext_3, STATE_VARIABLE_First_0_6, Indent_4, Pieces_89);
                        STATE_VARIABLE_First_59_59 = (MR_Integer) 1;
                        STATE_VARIABLE_PrintedSome_60_60 = (MR_Integer) 0;
                        mercury__set__insert_3_p_0((MR_Word) (&parse_tree__write_error_spec_scalar_common_1[0]), ((MR_Box) (Pieces_89)), STATE_VARIABLE_AlreadyPrintedVerbose_0_10, &STATE_VARIABLE_AlreadyPrintedVerbose_63_63);
                      }
                    }
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, Component_31, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word VerbosePieces_47 = ((MR_Word) ((MR_hl_field(3, Component_31, (MR_Integer) 1))));
                MR_Word NonVerbosePieces_48 = ((MR_Word) ((MR_hl_field(3, Component_31, (MR_Integer) 2))));
                MR_Word VerboseErrors_90;

                libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 74, &VerboseErrors_90);
                switch (VerboseErrors_90) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      parse_tree__write_error_spec__do_write_error_pieces_8_p_0(HeadVar__1_1, Globals_5, MaybeContext_3, STATE_VARIABLE_First_0_6, Indent_4, NonVerbosePieces_48);
                      libs__globals__io_set_extra_error_info_3_p_0((MR_Integer) 1);
                    }
                    break;
                  case (MR_Integer) 1:
                    parse_tree__write_error_spec__do_write_error_pieces_8_p_0(HeadVar__1_1, Globals_5, MaybeContext_3, STATE_VARIABLE_First_0_6, Indent_4, VerbosePieces_47);
                    break;
                }
                STATE_VARIABLE_First_59_59 = (MR_Integer) 1;
                STATE_VARIABLE_PrintedSome_60_60 = (MR_Integer) 0;
                STATE_VARIABLE_AlreadyPrintedVerbose_63_63 = STATE_VARIABLE_AlreadyPrintedVerbose_0_10;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word TypeClassInfo_for_print_anything_93 = ((MR_Word) ((MR_hl_field(3, Component_31, (MR_Integer) 1))));
                MR_Box Anything_49 = (MR_hl_field(3, Component_31, (MR_Integer) 2));
                void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_print_anything_93, (MR_Integer) 0)), (MR_Integer) 5))));
                MR_Box conv1_STATE_VARIABLE_IO_58_58;

                func_0(((MR_Box) (TypeClassInfo_for_print_anything_93)), Anything_49, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_58_58);
                STATE_VARIABLE_First_59_59 = (MR_Integer) 1;
                STATE_VARIABLE_PrintedSome_60_60 = (MR_Integer) 0;
                STATE_VARIABLE_AlreadyPrintedVerbose_63_63 = STATE_VARIABLE_AlreadyPrintedVerbose_0_10;
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Components_32;
      next_value_of_STATE_VARIABLE_First_0_6 = STATE_VARIABLE_First_59_59;
      next_value_of_STATE_VARIABLE_PrintedSome_0_8 = STATE_VARIABLE_PrintedSome_60_60;
      next_value_of_STATE_VARIABLE_AlreadyPrintedVerbose_0_10 = STATE_VARIABLE_AlreadyPrintedVerbose_63_63;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_First_0_6 = next_value_of_STATE_VARIABLE_First_0_6;
      STATE_VARIABLE_PrintedSome_0_8 = next_value_of_STATE_VARIABLE_PrintedSome_0_8;
      STATE_VARIABLE_AlreadyPrintedVerbose_0_10 = next_value_of_STATE_VARIABLE_AlreadyPrintedVerbose_0_10;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__write_error_spec__do_write_error_pieces_8_p_0(
  MR_Word Stream_9,
  MR_Word Globals_10,
  MR_Word MaybeContext_11,
  MR_Word TreatAsFirst_12,
  MR_Integer FixedIndent_13,
  MR_Word Pieces_14)
{
  MR_bool succeeded;
  MR_Word MaybeMaxWidth_16;
  MR_Word LimitErrorContextsMap_17;

  libs__globals__lookup_maybe_int_option_3_p_0(Globals_10, (MR_Integer) 179, &MaybeMaxWidth_16);
  libs__globals__get_limit_error_contexts_map_2_p_0(Globals_10, &LimitErrorContextsMap_17);
  if ((MaybeContext_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_String ContextStr_24 = ((MR_String) ((MR_hl_field(1, (MR_Word) (MR_mkword(1, &parse_tree__write_error_spec_scalar_common_2[0])), (MR_Integer) 0))));

    if (!((Pieces_14 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Paragraphs_27;
      MR_String FixedIndentStr_28;
      MR_String PrefixStr_29;
      MR_Integer PrefixLen_30;
      MR_Word MaybeAvailLen_33;
      MR_Integer FirstIndent_34;
      MR_Word Lines0_35;
      MR_Word Lines_36;
      MR_Word ParasCord_85;
      MR_Word Var_88;

      Var_88 = mercury__cord__empty_0_f_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_paragraph_0));
      parse_tree__write_error_spec__convert_pieces_to_paragraphs_acc_5_p_0((MR_Integer) 0, Pieces_14, (MR_Word) ((MR_Unsigned) 0U), Var_88, &ParasCord_85);
      Paragraphs_27 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_paragraph_0), ParasCord_85);
      mercury__string__pad_left_4_p_0((MR_String) "", (MR_Char) 32, FixedIndent_13, &FixedIndentStr_28);
      PrefixStr_29 = mercury__string__f_43_43_2_f_0(ContextStr_24, FixedIndentStr_28);
      PrefixLen_30 = mercury__string__count_codepoints_1_f_0(PrefixStr_29);
      if ((MaybeMaxWidth_16 == (MR_Word) ((MR_Unsigned) 0U)))
        MaybeAvailLen_33 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Integer MaxWidth_31 = ((MR_Integer) ((MR_hl_field(1, MaybeMaxWidth_16, (MR_Integer) 0))));
        MR_Integer AvailLen_32 = (MR_Integer) ((MR_Unsigned) MaxWidth_31 - (MR_Unsigned) PrefixLen_30);

        {
          MaybeAvailLen_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeAvailLen_33, 0) = ((MR_Box) (AvailLen_32));
        }
      }
      succeeded = (TreatAsFirst_12 == (MR_Integer) 0);
      if (succeeded)
        FirstIndent_34 = (MR_Integer) 0;
      else
        FirstIndent_34 = (MR_Integer) 1;
      parse_tree__write_error_spec__divide_paragraphs_into_lines_5_p_0(MaybeAvailLen_33, TreatAsFirst_12, FirstIndent_34, Paragraphs_27, &Lines0_35);
      parse_tree__write_error_spec__try_to_join_lp_to_rp_lines_2_p_0(Lines0_35, &Lines_36);
      parse_tree__write_error_spec__write_msg_lines_5_p_0(Stream_9, PrefixStr_29, Lines_36);
    }
  }
  else
  {
    MR_Word Context_18 = ((MR_Word) ((MR_hl_field(1, MaybeContext_11, (MR_Integer) 0))));
    MR_String FileName_19;
    MR_Integer LineNumber_20;

    FileName_19 = mercury__term_context__context_file_1_f_0(Context_18);
    LineNumber_20 = mercury__term_context__context_line_1_f_0(Context_18);
    {
      MR_Word LineNumberRanges_21;
      MR_Word Var_42;
      MR_Box conv0_LineNumberRanges_21;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__write_error_spec_scalar_common_1[2]), LimitErrorContextsMap_17, ((MR_Box) (FileName_19)), &conv0_LineNumberRanges_21);
      if (succeeded)
      {
        LineNumberRanges_21 = ((MR_Word) (conv0_LineNumberRanges_21));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        Var_42 = parse_tree__write_error_spec__line_number_is_in_a_range_2_f_0(LineNumberRanges_21, LineNumber_20);
        succeeded = (Var_42 == (MR_Integer) 0);
      }
    }
    if (!(succeeded))
    {
      MR_Word Var_44;
      MR_Word LineNumberRanges_65;
      MR_Box conv1_LineNumberRanges_65;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__write_error_spec_scalar_common_1[2]), LimitErrorContextsMap_17, ((MR_Box) ((MR_String) "")), &conv1_LineNumberRanges_65);
      if (succeeded)
      {
        LineNumberRanges_65 = ((MR_Word) (conv1_LineNumberRanges_65));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        Var_44 = parse_tree__write_error_spec__line_number_is_in_a_range_2_f_0(LineNumberRanges_65, LineNumber_20);
        succeeded = (Var_44 == (MR_Integer) 0);
      }
    }
    if (succeeded)
      libs__globals__io_set_some_errors_were_context_limited_3_p_0((MR_Integer) 1);
    else
    {
      MR_String ContextStr_128;

      parse_tree__prog_out__context_to_string_2_p_0(Context_18, &ContextStr_128);
      if (!((Pieces_14 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        MR_Word Paragraphs_94;
        MR_String FixedIndentStr_95;
        MR_String PrefixStr_96;
        MR_Integer PrefixLen_97;
        MR_Word MaybeAvailLen_100;
        MR_Integer FirstIndent_101;
        MR_Word Lines0_102;
        MR_Word Lines_103;
        MR_Word ParasCord_106;
        MR_Word Var_109;

        Var_109 = mercury__cord__empty_0_f_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_paragraph_0));
        parse_tree__write_error_spec__convert_pieces_to_paragraphs_acc_5_p_0((MR_Integer) 0, Pieces_14, (MR_Word) ((MR_Unsigned) 0U), Var_109, &ParasCord_106);
        Paragraphs_94 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_paragraph_0), ParasCord_106);
        mercury__string__pad_left_4_p_0((MR_String) "", (MR_Char) 32, FixedIndent_13, &FixedIndentStr_95);
        PrefixStr_96 = mercury__string__f_43_43_2_f_0(ContextStr_128, FixedIndentStr_95);
        PrefixLen_97 = mercury__string__count_codepoints_1_f_0(PrefixStr_96);
        if ((MaybeMaxWidth_16 == (MR_Word) ((MR_Unsigned) 0U)))
          MaybeAvailLen_100 = (MR_Word) ((MR_Unsigned) 0U);
        else
        {
          MR_Integer MaxWidth_90 = ((MR_Integer) ((MR_hl_field(1, MaybeMaxWidth_16, (MR_Integer) 0))));
          MR_Integer AvailLen_91 = (MR_Integer) ((MR_Unsigned) MaxWidth_90 - (MR_Unsigned) PrefixLen_97);

          {
            MaybeAvailLen_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, MaybeAvailLen_100, 0) = ((MR_Box) (AvailLen_91));
          }
        }
        succeeded = (TreatAsFirst_12 == (MR_Integer) 0);
        if (succeeded)
          FirstIndent_101 = (MR_Integer) 0;
        else
          FirstIndent_101 = (MR_Integer) 1;
        parse_tree__write_error_spec__divide_paragraphs_into_lines_5_p_0(MaybeAvailLen_100, TreatAsFirst_12, FirstIndent_101, Paragraphs_94, &Lines0_102);
        parse_tree__write_error_spec__try_to_join_lp_to_rp_lines_2_p_0(Lines0_102, &Lines_103);
        parse_tree__write_error_spec__write_msg_lines_5_p_0(Stream_9, PrefixStr_96, Lines_103);
      }
    }
  }
}

static MR_bool MR_CALL 
parse_tree__write_error_spec__try_to_join_lp_to_rp_lines_2_p_0_3(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__write_error_spec__IntroducedFrom__pred__find_matching_rp_and_maybe_join__1256__1_2_p_0(((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_Box MR_CALL 
parse_tree__write_error_spec__try_to_join_lp_to_rp_lines_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_LambdaHeadVar__2_52;

  conv0_LambdaHeadVar__2_52 = parse_tree__write_error_spec__IntroducedFrom__func__find_matching_rp_and_maybe_join__1251__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_52));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
parse_tree__write_error_spec__try_to_join_lp_to_rp_lines_2_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__write_error_spec__IntroducedFrom__pred__find_matching_rp_and_maybe_join__1226__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
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
      MR_Word HeadParen_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadLine0_3, (MR_Integer) 4))) & (MR_Integer) 3);

      switch (HeadParen_10) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
        case (MR_Integer) 0:
          {
            MR_Word TailLines_11;

            parse_tree__write_error_spec__try_to_join_lp_to_rp_lines_2_p_0(TailLines0_4, &TailLines_11);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__2_2 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (HeadLine0_3));
              MR_hl_field(1, base, 1) = ((MR_Box) (TailLines_11));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ReplacementLines_12;
            MR_Word LeftOverLines0_13;
            MR_Word TypeCtorInfo_66_66;
            MR_Word FirstReplacementLine_14;
            MR_Word MaybeAvailLen_19 = ((MR_Word) ((MR_hl_field(0, HeadLine0_3, (MR_Integer) 0))));
            MR_Integer LPIndent_20 = ((MR_Integer) ((MR_hl_field(0, HeadLine0_3, (MR_Integer) 1))));
            MR_String LPLineWordsStr_21 = ((MR_String) ((MR_hl_field(0, HeadLine0_3, (MR_Integer) 2))));
            MR_Integer LPLineWordsLen_22 = ((MR_Integer) ((MR_hl_field(0, HeadLine0_3, (MR_Integer) 3))));
            MR_Word LPParen_23 = ((MR_Unsigned) ((MR_hl_field(0, HeadLine0_3, (MR_Integer) 4))) & (MR_Integer) 3);
            MR_Word MidLinesCord_24;
            MR_Integer MidLinesLen_25;
            MR_Word RPLine_26;
            MR_String RPLineWordsStr_29;
            MR_Integer RPLineWordsLen_30;
            MR_Word RPParen_31;
            MR_Word MidLines_32;
            MR_Integer NumMidLines_33;
            MR_Integer MidLineSpaces_34;
            MR_Integer TotalLpRpLen_35;
            MR_Word ChunkLines_36;
            MR_Word Var_43;
            MR_Word Var_47;
            MR_Integer Var_50;
            MR_Integer Var_51;
            MR_Word Var_52;
            MR_Word Var_53;
            MR_Word Var_54;
            MR_Integer CastX_78;
            MR_Integer CastY_79;

            {
              Var_43 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_43, 0) = ((MR_Box) (&parse_tree__write_error_spec_scalar_common_4[0]));
              MR_hl_field(0, Var_43, 1) = ((MR_Box) (parse_tree__write_error_spec__try_to_join_lp_to_rp_lines_2_p_0_1));
              MR_hl_field(0, Var_43, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_43, 3) = ((MR_Box) (LPParen_23));
              MR_hl_field(0, Var_43, 4) = ((MR_Box) ((MR_Integer) 1));
            }
            mercury__require__expect_3_p_0(Var_43, (MR_String) "predicate \140parse_tree.write_error_spec.find_matching_rp_and_maybe_join\'/4", (MR_String) "LPParen != paren_lp_end");
            Var_47 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_error_line_0));
            succeeded = parse_tree__write_error_spec__find_matching_rp_7_p_0(TailLines0_4, Var_47, &MidLinesCord_24, (MR_Integer) 0, &MidLinesLen_25, &RPLine_26, &LeftOverLines0_13);
            if (succeeded)
            {
              RPLineWordsStr_29 = ((MR_String) ((MR_hl_field(0, RPLine_26, (MR_Integer) 2))));
              RPLineWordsLen_30 = ((MR_Integer) ((MR_hl_field(0, RPLine_26, (MR_Integer) 3))));
              RPParen_31 = ((MR_Unsigned) ((MR_hl_field(0, RPLine_26, (MR_Integer) 4))) & (MR_Integer) 3);
              TypeCtorInfo_66_66 = (MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_error_line_0);
              MidLines_32 = mercury__cord__list_1_f_0(TypeCtorInfo_66_66, MidLinesCord_24);
              mercury__list__length_2_p_0(TypeCtorInfo_66_66, MidLines_32, &NumMidLines_33);
              succeeded = (NumMidLines_33 == (MR_Integer) 0);
              if (succeeded)
                MidLineSpaces_34 = (MR_Integer) 0;
              else
                MidLineSpaces_34 = (MR_Integer) ((MR_Unsigned) NumMidLines_33 - (MR_Unsigned) 1);
              Var_51 = (MR_Integer) ((MR_Unsigned) LPLineWordsLen_22 + (MR_Unsigned) MidLinesLen_25);
              Var_50 = (MR_Integer) ((MR_Unsigned) Var_51 + (MR_Unsigned) MidLineSpaces_34);
              TotalLpRpLen_35 = (MR_Integer) ((MR_Unsigned) Var_50 + (MR_Unsigned) RPLineWordsLen_30);
              Var_54 = (MR_Word) ((MR_Unsigned) 0U);
              {
                Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_52, 0) = ((MR_Box) (HeadLine0_3));
                MR_hl_field(1, Var_52, 1) = ((MR_Box) (MidLines_32));
              }
              {
                Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_53, 0) = ((MR_Box) (RPLine_26));
                MR_hl_field(1, Var_53, 1) = ((MR_Box) (Var_54));
              }
              ChunkLines_36 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_66_66, Var_52, Var_53);
              if ((MaybeAvailLen_19 == (MR_Word) ((MR_Unsigned) 0U)))
                succeeded = MR_TRUE;
              else
              {
                MR_Integer AvailLen_37 = ((MR_Integer) ((MR_hl_field(1, MaybeAvailLen_19, (MR_Integer) 0))));
                MR_Integer Var_55;
                MR_Integer Var_56;
                MR_Integer Var_57;

                Var_57 = parse_tree__prog_out__indent_increment_0_f_0();
                Var_56 = (MR_Integer) ((MR_Unsigned) LPIndent_20 * (MR_Unsigned) Var_57);
                Var_55 = (MR_Integer) ((MR_Unsigned) Var_56 + (MR_Unsigned) TotalLpRpLen_35);
                succeeded = (Var_55 <= AvailLen_37);
              }
              if (succeeded)
              {
                MR_Word MidLineStrs_38;
                MR_String MidSpaceLinesStr_39;
                MR_String ReplacementLineStr_40;
                MR_Integer ReplacementLineStrLen_41;
                MR_Word ReplacementLine_42;
                MR_String Var_60;
                MR_Word Var_61;

                MidLineStrs_38 = mercury__list__map_2_f_0(TypeCtorInfo_66_66, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__write_error_spec_scalar_common_5[1]), MidLines_32);
                MidSpaceLinesStr_39 = mercury__string__join_list_2_f_0((MR_String) " ", MidLineStrs_38);
                Var_60 = mercury__string__f_43_43_2_f_0(MidSpaceLinesStr_39, RPLineWordsStr_29);
                ReplacementLineStr_40 = mercury__string__f_43_43_2_f_0(LPLineWordsStr_21, Var_60);
                mercury__string__count_codepoints_2_p_0(ReplacementLineStr_40, &ReplacementLineStrLen_41);
                {
                  Var_61 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_61, 0) = ((MR_Box) (&parse_tree__write_error_spec_scalar_common_4[2]));
                  MR_hl_field(0, Var_61, 1) = ((MR_Box) (parse_tree__write_error_spec__try_to_join_lp_to_rp_lines_2_p_0_3));
                  MR_hl_field(0, Var_61, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(0, Var_61, 3) = ((MR_Box) (TotalLpRpLen_35));
                  MR_hl_field(0, Var_61, 4) = ((MR_Box) (ReplacementLineStrLen_41));
                }
                mercury__require__expect_3_p_0(Var_61, (MR_String) "predicate \140parse_tree.write_error_spec.find_matching_rp_and_maybe_join\'/4", (MR_String) "TotalLpRpLen != ReplacementLineStrLen");
                {
                  ReplacementLine_42 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, ReplacementLine_42, 0) = ((MR_Box) (MaybeAvailLen_19));
                  MR_hl_field(0, ReplacementLine_42, 1) = ((MR_Box) (LPIndent_20));
                  MR_hl_field(0, ReplacementLine_42, 2) = ((MR_Box) (ReplacementLineStr_40));
                  MR_hl_field(0, ReplacementLine_42, 3) = ((MR_Box) (TotalLpRpLen_35));
                  MR_hl_field(0, ReplacementLine_42, 4) = (MR_Box) ((MR_Unsigned) (RPParen_31));
                }
                {
                  ReplacementLines_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, ReplacementLines_12, 0) = ((MR_Box) (ReplacementLine_42));
                  MR_hl_field(1, ReplacementLines_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              }
              else
                ReplacementLines_12 = ChunkLines_36;
              succeeded = (ReplacementLines_12 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                FirstReplacementLine_14 = ((MR_Word) ((MR_hl_field(1, ReplacementLines_12, (MR_Integer) 0))));
                CastX_78 = (MR_Integer) (FirstReplacementLine_14);
                CastY_79 = (MR_Integer) (HeadLine0_3);
                succeeded = (CastX_78 == CastY_79);
                if (succeeded)
                  succeeded = MR_TRUE;
                else
                {
                  MR_Word ArgX1_68 = ((MR_Word) ((MR_hl_field(0, FirstReplacementLine_14, (MR_Integer) 0))));
                  MR_Word ArgY1_69 = ((MR_Word) ((MR_hl_field(0, HeadLine0_3, (MR_Integer) 0))));
                  MR_Integer ArgX2_70 = ((MR_Integer) ((MR_hl_field(0, FirstReplacementLine_14, (MR_Integer) 1))));
                  MR_Integer ArgY2_71 = ((MR_Integer) ((MR_hl_field(0, HeadLine0_3, (MR_Integer) 1))));
                  MR_String ArgX3_72 = ((MR_String) ((MR_hl_field(0, FirstReplacementLine_14, (MR_Integer) 2))));
                  MR_String ArgY3_73 = ((MR_String) ((MR_hl_field(0, HeadLine0_3, (MR_Integer) 2))));
                  MR_Integer ArgX4_74 = ((MR_Integer) ((MR_hl_field(0, FirstReplacementLine_14, (MR_Integer) 3))));
                  MR_Integer ArgY4_75 = ((MR_Integer) ((MR_hl_field(0, HeadLine0_3, (MR_Integer) 3))));
                  MR_Word ArgX5_76 = ((MR_Unsigned) ((MR_hl_field(0, FirstReplacementLine_14, (MR_Integer) 4))) & (MR_Integer) 3);
                  MR_Word ArgY5_77 = ((MR_Unsigned) ((MR_hl_field(0, HeadLine0_3, (MR_Integer) 4))) & (MR_Integer) 3);

                  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__write_error_spec_scalar_common_1[3]), ((MR_Box) (ArgX1_68)), ((MR_Box) (ArgY1_69)));
                  if (succeeded)
                  {
                    succeeded = (ArgX2_70 == ArgY2_71);
                    if (succeeded)
                    {
                      succeeded = (strcmp(ArgX3_72, ArgY3_73) == 0);
                      if (succeeded)
                      {
                        succeeded = (ArgX4_74 == ArgY4_75);
                        if (succeeded)
                          succeeded = (ArgX5_76 == ArgY5_77);
                      }
                    }
                  }
                }
                succeeded = !(succeeded);
              }
            }
            if (succeeded)
            {
              MR_Word Lines1_16;
              MR_Word next_value_of_HeadVar__1_1;

              Lines1_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_error_line_0), ReplacementLines_12, LeftOverLines0_13);
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__1_1 = Lines1_16;
              HeadVar__1_1 = next_value_of_HeadVar__1_1;
              continue;
            }
            else
            {
              MR_Word TailLines_17;

              parse_tree__write_error_spec__try_to_join_lp_to_rp_lines_2_p_0(TailLines0_4, &TailLines_17);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__2_2 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (HeadLine0_3));
                MR_hl_field(1, base, 1) = ((MR_Box) (TailLines_17));
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
parse_tree__write_error_spec__find_matching_rp_7_p_0_3(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__write_error_spec__IntroducedFrom__pred__find_matching_rp_and_maybe_join__1256__1_2_p_0(((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_Box MR_CALL 
parse_tree__write_error_spec__find_matching_rp_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_LambdaHeadVar__2_52;

  conv0_LambdaHeadVar__2_52 = parse_tree__write_error_spec__IntroducedFrom__func__find_matching_rp_and_maybe_join__1251__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_52));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
parse_tree__write_error_spec__find_matching_rp_7_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__write_error_spec__IntroducedFrom__pred__find_matching_rp_and_maybe_join__1226__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
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
    MR_Word _HeadMaybeAvailLen_22;
    MR_Integer _HeadIndent_23;
    MR_String _HeadLineWordsStr_24;
    MR_Integer HeadLineWordsLen_25;
    MR_Word HeadParen_26;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      HeadLine0_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      TailLines0_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      _HeadMaybeAvailLen_22 = ((MR_Word) ((MR_hl_field(0, HeadLine0_16, (MR_Integer) 0))));
      _HeadIndent_23 = ((MR_Integer) ((MR_hl_field(0, HeadLine0_16, (MR_Integer) 1))));
      _HeadLineWordsStr_24 = ((MR_String) ((MR_hl_field(0, HeadLine0_16, (MR_Integer) 2))));
      HeadLineWordsLen_25 = ((MR_Integer) ((MR_hl_field(0, HeadLine0_16, (MR_Integer) 3))));
      HeadParen_26 = ((MR_Unsigned) ((MR_hl_field(0, HeadLine0_16, (MR_Integer) 4))) & (MR_Integer) 3);
      switch (HeadParen_26) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
          {
            MR_Word TypeCtorInfo_48_48;

            succeeded = (TailLines0_17 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              *RPLine_6 = ((MR_Word) ((MR_hl_field(1, TailLines0_17, (MR_Integer) 0))));
              *LeftOverLines_7 = ((MR_Word) ((MR_hl_field(1, TailLines0_17, (MR_Integer) 1))));
              TypeCtorInfo_48_48 = (MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_error_line_0);
              mercury__cord__snoc_3_p_0(TypeCtorInfo_48_48, ((MR_Box) (HeadLine0_16)), STATE_VARIABLE_MidLinesCord_0_2, STATE_VARIABLE_MidLinesCord_3);
              *STATE_VARIABLE_MidLinesLen_5 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_MidLinesLen_0_4 + (MR_Unsigned) HeadLineWordsLen_25);
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word TypeCtorInfo_66_100;
            MR_Word AfterRpLines_29;
            MR_Word MidLinesCord_58;
            MR_Integer MidLinesLen_59;
            MR_Word RPLine_60;
            MR_String RPLineWordsStr_63;
            MR_Integer RPLineWordsLen_64;
            MR_Word RPParen_65;
            MR_Word MidLines_66;
            MR_Integer NumMidLines_67;
            MR_Integer MidLineSpaces_68;
            MR_Integer TotalLpRpLen_69;
            MR_Word ChunkLines_70;
            MR_Word Var_77;
            MR_Word Var_81;
            MR_Integer Var_84;
            MR_Integer Var_85;
            MR_Word Var_86;
            MR_Word Var_87;
            MR_Word Var_88;

            {
              Var_77 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_77, 0) = ((MR_Box) (&parse_tree__write_error_spec_scalar_common_4[0]));
              MR_hl_field(0, Var_77, 1) = ((MR_Box) (parse_tree__write_error_spec__find_matching_rp_7_p_0_1));
              MR_hl_field(0, Var_77, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_77, 3) = ((MR_Box) (HeadParen_26));
              MR_hl_field(0, Var_77, 4) = ((MR_Box) ((MR_Integer) 1));
            }
            mercury__require__expect_3_p_0(Var_77, (MR_String) "predicate \140parse_tree.write_error_spec.find_matching_rp_and_maybe_join\'/4", (MR_String) "LPParen != paren_lp_end");
            Var_81 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_error_line_0));
            succeeded = parse_tree__write_error_spec__find_matching_rp_7_p_0(TailLines0_17, Var_81, &MidLinesCord_58, (MR_Integer) 0, &MidLinesLen_59, &RPLine_60, &AfterRpLines_29);
            if (succeeded)
            {
              RPLineWordsStr_63 = ((MR_String) ((MR_hl_field(0, RPLine_60, (MR_Integer) 2))));
              RPLineWordsLen_64 = ((MR_Integer) ((MR_hl_field(0, RPLine_60, (MR_Integer) 3))));
              RPParen_65 = ((MR_Unsigned) ((MR_hl_field(0, RPLine_60, (MR_Integer) 4))) & (MR_Integer) 3);
              TypeCtorInfo_66_100 = (MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_error_line_0);
              MidLines_66 = mercury__cord__list_1_f_0(TypeCtorInfo_66_100, MidLinesCord_58);
              mercury__list__length_2_p_0(TypeCtorInfo_66_100, MidLines_66, &NumMidLines_67);
              succeeded = (NumMidLines_67 == (MR_Integer) 0);
              if (succeeded)
                MidLineSpaces_68 = (MR_Integer) 0;
              else
                MidLineSpaces_68 = (MR_Integer) ((MR_Unsigned) NumMidLines_67 - (MR_Unsigned) 1);
              Var_85 = (MR_Integer) ((MR_Unsigned) HeadLineWordsLen_25 + (MR_Unsigned) MidLinesLen_59);
              Var_84 = (MR_Integer) ((MR_Unsigned) Var_85 + (MR_Unsigned) MidLineSpaces_68);
              TotalLpRpLen_69 = (MR_Integer) ((MR_Unsigned) Var_84 + (MR_Unsigned) RPLineWordsLen_64);
              Var_88 = (MR_Word) ((MR_Unsigned) 0U);
              {
                Var_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_86, 0) = ((MR_Box) (HeadLine0_16));
                MR_hl_field(1, Var_86, 1) = ((MR_Box) (MidLines_66));
              }
              {
                Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_87, 0) = ((MR_Box) (RPLine_60));
                MR_hl_field(1, Var_87, 1) = ((MR_Box) (Var_88));
              }
              ChunkLines_70 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_66_100, Var_86, Var_87);
              if ((_HeadMaybeAvailLen_22 == (MR_Word) ((MR_Unsigned) 0U)))
                succeeded = MR_TRUE;
              else
              {
                MR_Integer AvailLen_71 = ((MR_Integer) ((MR_hl_field(1, _HeadMaybeAvailLen_22, (MR_Integer) 0))));
                MR_Integer Var_89;
                MR_Integer Var_90;
                MR_Integer Var_91;

                Var_91 = parse_tree__prog_out__indent_increment_0_f_0();
                Var_90 = (MR_Integer) ((MR_Unsigned) _HeadIndent_23 * (MR_Unsigned) Var_91);
                Var_89 = (MR_Integer) ((MR_Unsigned) Var_90 + (MR_Unsigned) TotalLpRpLen_69);
                succeeded = (Var_89 <= AvailLen_71);
              }
              if (succeeded)
              {
                MR_Word HeadReplacementLine_30;
                MR_Word MidLineStrs_72;
                MR_String MidSpaceLinesStr_73;
                MR_String ReplacementLineStr_74;
                MR_Integer ReplacementLineStrLen_75;
                MR_String Var_94;
                MR_Word Var_95;

                MidLineStrs_72 = mercury__list__map_2_f_0(TypeCtorInfo_66_100, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__write_error_spec_scalar_common_5[0]), MidLines_66);
                MidSpaceLinesStr_73 = mercury__string__join_list_2_f_0((MR_String) " ", MidLineStrs_72);
                Var_94 = mercury__string__f_43_43_2_f_0(MidSpaceLinesStr_73, RPLineWordsStr_63);
                ReplacementLineStr_74 = mercury__string__f_43_43_2_f_0(_HeadLineWordsStr_24, Var_94);
                mercury__string__count_codepoints_2_p_0(ReplacementLineStr_74, &ReplacementLineStrLen_75);
                {
                  Var_95 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_95, 0) = ((MR_Box) (&parse_tree__write_error_spec_scalar_common_4[2]));
                  MR_hl_field(0, Var_95, 1) = ((MR_Box) (parse_tree__write_error_spec__find_matching_rp_7_p_0_3));
                  MR_hl_field(0, Var_95, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(0, Var_95, 3) = ((MR_Box) (TotalLpRpLen_69));
                  MR_hl_field(0, Var_95, 4) = ((MR_Box) (ReplacementLineStrLen_75));
                }
                mercury__require__expect_3_p_0(Var_95, (MR_String) "predicate \140parse_tree.write_error_spec.find_matching_rp_and_maybe_join\'/4", (MR_String) "TotalLpRpLen != ReplacementLineStrLen");
                {
                  HeadReplacementLine_30 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, HeadReplacementLine_30, 0) = ((MR_Box) (_HeadMaybeAvailLen_22));
                  MR_hl_field(0, HeadReplacementLine_30, 1) = ((MR_Box) (_HeadIndent_23));
                  MR_hl_field(0, HeadReplacementLine_30, 2) = ((MR_Box) (ReplacementLineStr_74));
                  MR_hl_field(0, HeadReplacementLine_30, 3) = ((MR_Box) (TotalLpRpLen_69));
                  MR_hl_field(0, HeadReplacementLine_30, 4) = (MR_Box) ((MR_Unsigned) (RPParen_65));
                }
                succeeded = parse_tree__write_error_spec____Unify____error_line_0_0(HeadReplacementLine_30, HeadLine0_16);
                if (succeeded)
                  succeeded = MR_FALSE;
                else
                {
                  MR_Word Var_46;
                  MR_Word next_value_of_HeadVar__1_1;

                  {
                    Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_46, 0) = ((MR_Box) (HeadReplacementLine_30));
                    MR_hl_field(1, Var_46, 1) = ((MR_Box) (AfterRpLines_29));
                  }
                  // direct tailcall eliminated
                  ;
                  next_value_of_HeadVar__1_1 = Var_46;
                  HeadVar__1_1 = next_value_of_HeadVar__1_1;
                  continue;
                }
              }
              else
              if ((ChunkLines_70 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.write_error_spec.find_matching_rp\'/7", (MR_String) "ReplacementLines = []");
                succeeded = MR_TRUE;
              }
              else
              {
                MR_Word HeadReplacementLine_104 = ((MR_Word) ((MR_hl_field(1, ChunkLines_70, (MR_Integer) 0))));
                MR_Word TailReplacementLines_105 = ((MR_Word) ((MR_hl_field(1, ChunkLines_70, (MR_Integer) 1))));

                succeeded = (TailReplacementLines_105 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  succeeded = parse_tree__write_error_spec____Unify____error_line_0_0(HeadReplacementLine_104, HeadLine0_16);
                  if (succeeded)
                    succeeded = MR_FALSE;
                  else
                  {
                    MR_Word Var_102;
                    MR_Word next_value_of_HeadVar__1_1;

                    {
                      Var_102 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_102, 0) = ((MR_Box) (HeadReplacementLine_104));
                      MR_hl_field(1, Var_102, 1) = ((MR_Box) (AfterRpLines_29));
                    }
                    // direct tailcall eliminated
                    ;
                    next_value_of_HeadVar__1_1 = Var_102;
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
            MR_Word STATE_VARIABLE_MidLinesCord_38_38;
            MR_Integer STATE_VARIABLE_MidLinesLen_39_39;
            MR_Word next_value_of_HeadVar__1_1;
            MR_Word next_value_of_STATE_VARIABLE_MidLinesCord_0_2;
            MR_Integer next_value_of_STATE_VARIABLE_MidLinesLen_0_4;

            mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_error_line_0), ((MR_Box) (HeadLine0_16)), STATE_VARIABLE_MidLinesCord_0_2, &STATE_VARIABLE_MidLinesCord_38_38);
            STATE_VARIABLE_MidLinesLen_39_39 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_MidLinesLen_0_4 + (MR_Unsigned) HeadLineWordsLen_25);
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__1_1 = TailLines0_17;
            next_value_of_STATE_VARIABLE_MidLinesCord_0_2 = STATE_VARIABLE_MidLinesCord_38_38;
            next_value_of_STATE_VARIABLE_MidLinesLen_0_4 = STATE_VARIABLE_MidLinesLen_39_39;
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
parse_tree__write_error_spec____Unify____error_line_0_0(
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
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_String ArgX3_7 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_String ArgY3_8 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Integer ArgX4_9 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Integer ArgY4_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgX5_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))) & (MR_Integer) 3);
    MR_Word ArgY5_12 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))) & (MR_Integer) 3);

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__write_error_spec_scalar_common_1[3]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
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
            succeeded = (ArgX5_11 == ArgY5_12);
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
parse_tree__write_error_spec__divide_paragraphs_into_lines_5_p_0(
  MR_Word MaybeAvailLen_6,
  MR_Word TreatAsFirst_7,
  MR_Integer CurIndent_8,
  MR_Word Paras_9,
  MR_Word * Lines_10)
{
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
    MR_Integer RestIndent_17;
    MR_Integer NextIndent_18;
    MR_Word BlankLine_19;
    MR_Word FirstParaBlankLines_20;
    MR_Word NextTreatAsFirst_21;
    MR_Word FirstParaLines_22;
    MR_Word LaterParaLines_34;
    MR_Word Var_45;

    switch (TreatAsFirst_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        RestIndent_17 = CurIndent_8;
        break;
      case (MR_Integer) 0:
        RestIndent_17 = (MR_Integer) ((MR_Unsigned) CurIndent_8 + (MR_Unsigned) 1);
        break;
    }
    NextIndent_18 = (MR_Integer) ((MR_Unsigned) RestIndent_17 + (MR_Unsigned) FirstIndentDelta_15);
    {
      BlankLine_19 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, BlankLine_19, 0) = ((MR_Box) (MaybeAvailLen_6));
      MR_hl_field(0, BlankLine_19, 1) = ((MR_Box) (CurIndent_8));
      MR_hl_field(0, BlankLine_19, 2) = ((MR_Box) ((MR_String) ""));
      MR_hl_field(0, BlankLine_19, 3) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(0, BlankLine_19, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_error_line_0), NumBlankLines_14, ((MR_Box) (BlankLine_19)), &FirstParaBlankLines_20);
    if ((FirstParaWords_13 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      NextTreatAsFirst_21 = TreatAsFirst_7;
      FirstParaLines_22 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_String FirstWord_23 = ((MR_String) ((MR_hl_field(1, FirstParaWords_13, (MR_Integer) 0))));
      MR_Word LaterWords_24 = ((MR_Word) ((MR_hl_field(1, FirstParaWords_13, (MR_Integer) 1))));

      NextTreatAsFirst_21 = (MR_Integer) 1;
      if ((MaybeAvailLen_6 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_41;
        MR_String Var_42;

        Var_42 = mercury__string__join_list_2_f_0((MR_String) " ", FirstParaWords_13);
        {
          Var_41 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_41, 0) = ((MR_Box) (MaybeAvailLen_6));
          MR_hl_field(0, Var_41, 1) = ((MR_Box) (CurIndent_8));
          MR_hl_field(0, Var_41, 2) = ((MR_Box) (Var_42));
          MR_hl_field(0, Var_41, 3) = ((MR_Box) ((MR_Integer) -1));
          MR_hl_field(0, Var_41, 4) = (MR_Box) ((MR_Unsigned) (ParaParen_16));
        }
        {
          FirstParaLines_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, FirstParaLines_22, 0) = ((MR_Box) (Var_41));
          MR_hl_field(1, FirstParaLines_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      else
      {
        MR_Integer AvailLen_25 = ((MR_Integer) ((MR_hl_field(1, MaybeAvailLen_6, (MR_Integer) 0))));
        MR_Integer LineWordsLen_26;
        MR_Word LineWords_27;
        MR_Word RestWords_28;
        MR_String LineWordsStr_29;
        MR_Integer FirstWordLen_49;
        MR_Integer AvailLeft_50;
        MR_Word LineWordsCord_51;
        MR_Integer Var_52;
        MR_Integer Var_53;
        MR_Word Var_54;

        mercury__string__count_codepoints_2_p_0(FirstWord_23, &FirstWordLen_49);
        Var_53 = parse_tree__prog_out__indent_increment_0_f_0();
        Var_52 = (MR_Integer) ((MR_Unsigned) CurIndent_8 * (MR_Unsigned) Var_53);
        AvailLeft_50 = (MR_Integer) ((MR_Unsigned) AvailLen_25 - (MR_Unsigned) Var_52);
        Var_54 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (FirstWord_23)));
        parse_tree__write_error_spec__get_later_words_7_p_0(AvailLeft_50, LaterWords_24, FirstWordLen_49, &LineWordsLen_26, Var_54, &LineWordsCord_51, &RestWords_28);
        LineWords_27 = mercury__cord__list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), LineWordsCord_51);
        LineWordsStr_29 = mercury__string__join_list_2_f_0((MR_String) " ", LineWords_27);
        if ((RestWords_28 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word CurLine_30;

          {
            CurLine_30 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, CurLine_30, 0) = ((MR_Box) (MaybeAvailLen_6));
            MR_hl_field(0, CurLine_30, 1) = ((MR_Box) (CurIndent_8));
            MR_hl_field(0, CurLine_30, 2) = ((MR_Box) (LineWordsStr_29));
            MR_hl_field(0, CurLine_30, 3) = ((MR_Box) (LineWordsLen_26));
            MR_hl_field(0, CurLine_30, 4) = (MR_Box) ((MR_Unsigned) (ParaParen_16));
          }
          {
            FirstParaLines_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, FirstParaLines_22, 0) = ((MR_Box) (CurLine_30));
            MR_hl_field(1, FirstParaLines_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        else
        {
          MR_String FirstRestWord_31 = ((MR_String) ((MR_hl_field(1, RestWords_28, (MR_Integer) 0))));
          MR_Word LaterRestWords_32 = ((MR_Word) ((MR_hl_field(1, RestWords_28, (MR_Integer) 1))));
          MR_Word FirstParaRestLines_33;
          MR_Word CurLine_46;

          {
            CurLine_46 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, CurLine_46, 0) = ((MR_Box) (MaybeAvailLen_6));
            MR_hl_field(0, CurLine_46, 1) = ((MR_Box) (CurIndent_8));
            MR_hl_field(0, CurLine_46, 2) = ((MR_Box) (LineWordsStr_29));
            MR_hl_field(0, CurLine_46, 3) = ((MR_Box) (LineWordsLen_26));
            MR_hl_field(0, CurLine_46, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          }
          parse_tree__write_error_spec__group_nonfirst_line_words_6_p_0(AvailLen_25, FirstRestWord_31, LaterRestWords_32, RestIndent_17, ParaParen_16, &FirstParaRestLines_33);
          {
            FirstParaLines_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, FirstParaLines_22, 0) = ((MR_Box) (CurLine_46));
            MR_hl_field(1, FirstParaLines_22, 1) = ((MR_Box) (FirstParaRestLines_33));
          }
        }
      }
    }
    parse_tree__write_error_spec__divide_paragraphs_into_lines_5_p_0(MaybeAvailLen_6, NextTreatAsFirst_21, NextIndent_18, LaterParas_12, &LaterParaLines_34);
    Var_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_error_line_0), FirstParaBlankLines_20, LaterParaLines_34);
    *Lines_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_error_line_0), FirstParaLines_22, Var_45);
  }
}

static void MR_CALL 
parse_tree__write_error_spec__group_nonfirst_line_words_6_p_0(
  MR_Integer AvailLen_7,
  MR_String FirstWord_8,
  MR_Word LaterWords_9,
  MR_Integer Indent_10,
  MR_Word LastParen_11,
  MR_Word * Lines_12)
{
  MR_Integer LineWordsLen_13;
  MR_Word LineWords_14;
  MR_Word RestWords_15;
  MR_String LineWordsStr_16;
  MR_Integer FirstWordLen_26;
  MR_Integer AvailLeft_27;
  MR_Word LineWordsCord_28;
  MR_Integer Var_29;
  MR_Integer Var_30;
  MR_Word Var_31;

  mercury__string__count_codepoints_2_p_0(FirstWord_8, &FirstWordLen_26);
  Var_30 = parse_tree__prog_out__indent_increment_0_f_0();
  Var_29 = (MR_Integer) ((MR_Unsigned) Indent_10 * (MR_Unsigned) Var_30);
  AvailLeft_27 = (MR_Integer) ((MR_Unsigned) AvailLen_7 - (MR_Unsigned) Var_29);
  Var_31 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (FirstWord_8)));
  parse_tree__write_error_spec__get_later_words_7_p_0(AvailLeft_27, LaterWords_9, FirstWordLen_26, &LineWordsLen_13, Var_31, &LineWordsCord_28, &RestWords_15);
  LineWords_14 = mercury__cord__list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), LineWordsCord_28);
  LineWordsStr_16 = mercury__string__join_list_2_f_0((MR_String) " ", LineWords_14);
  if ((RestWords_15 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Line_17;
    MR_Word Var_21;

    {
      Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_21, 0) = ((MR_Box) (AvailLen_7));
    }
    {
      Line_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Line_17, 0) = ((MR_Box) (Var_21));
      MR_hl_field(0, Line_17, 1) = ((MR_Box) (Indent_10));
      MR_hl_field(0, Line_17, 2) = ((MR_Box) (LineWordsStr_16));
      MR_hl_field(0, Line_17, 3) = ((MR_Box) (LineWordsLen_13));
      MR_hl_field(0, Line_17, 4) = (MR_Box) ((MR_Unsigned) (LastParen_11));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Lines_12 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Line_17));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  else
  {
    MR_String FirstRestWord_18 = ((MR_String) ((MR_hl_field(1, RestWords_15, (MR_Integer) 0))));
    MR_Word LaterRestWords_19 = ((MR_Word) ((MR_hl_field(1, RestWords_15, (MR_Integer) 1))));
    MR_Word RestLines_20;
    MR_Word Var_23;
    MR_Word Line_25;

    {
      Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_23, 0) = ((MR_Box) (AvailLen_7));
    }
    {
      Line_25 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Line_25, 0) = ((MR_Box) (Var_23));
      MR_hl_field(0, Line_25, 1) = ((MR_Box) (Indent_10));
      MR_hl_field(0, Line_25, 2) = ((MR_Box) (LineWordsStr_16));
      MR_hl_field(0, Line_25, 3) = ((MR_Box) (LineWordsLen_13));
      MR_hl_field(0, Line_25, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    parse_tree__write_error_spec__group_nonfirst_line_words_6_p_0(AvailLen_7, FirstRestWord_18, LaterRestWords_19, Indent_10, LastParen_11, &RestLines_20);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Lines_12 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Line_25));
      MR_hl_field(1, base, 1) = ((MR_Box) (RestLines_20));
    }
  }
}

static void MR_CALL 
parse_tree__write_error_spec__get_later_words_7_p_0(
  MR_Integer Avail_1,
  MR_Word HeadVar__2_2,
  MR_Integer CurLen_3,
  MR_Integer * FinalLen_4,
  MR_Word HeadVar__5_5,
  MR_Word * LineWords_6,
  MR_Word * HeadVar__7_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *LineWords_6 = HeadVar__5_5;
      *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
      *FinalLen_4 = CurLen_3;
    }
    else
    {
      MR_String Word_13 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Words_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer WordLen_20;
      MR_Integer NextLen_21;
      MR_Integer Var_23;

      mercury__string__count_codepoints_2_p_0(Word_13, &WordLen_20);
      Var_23 = (MR_Integer) ((MR_Unsigned) CurLen_3 + (MR_Unsigned) 1);
      NextLen_21 = (MR_Integer) ((MR_Unsigned) Var_23 + (MR_Unsigned) WordLen_20);
      succeeded = (NextLen_21 <= Avail_1);
      if (succeeded)
      {
        MR_Word LineWords1_22;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Integer next_value_of_CurLen_3;
        MR_Word next_value_of_HeadVar__5_5;

        mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Word_13)), HeadVar__5_5, &LineWords1_22);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = Words_14;
        next_value_of_CurLen_3 = NextLen_21;
        next_value_of_HeadVar__5_5 = LineWords1_22;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        CurLen_3 = next_value_of_CurLen_3;
        HeadVar__5_5 = next_value_of_HeadVar__5_5;
        continue;
      }
      else
      {
        *FinalLen_4 = CurLen_3;
        *LineWords_6 = HeadVar__5_5;
        *HeadVar__7_7 = HeadVar__2_2;
      }
    }
    break;
  }
}

static void MR_CALL 
parse_tree__write_error_spec__convert_pieces_to_paragraphs_acc_5_p_0(
  MR_Word FirstInMsg_1,
  MR_Word HeadVar__2_2,
  MR_Word RevWords0_3,
  MR_Word STATE_VARIABLE_Paras_0_4,
  MR_Word * STATE_VARIABLE_Paras_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Strings_9;
      MR_Word Var_12;

      Strings_9 = parse_tree__write_error_spec__rev_words_to_strings_1_f_0(RevWords0_3);
      {
        Var_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_12, 0) = ((MR_Box) (Strings_9));
        MR_hl_field(0, Var_12, 1) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(0, Var_12, 2) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(0, Var_12, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      }
      parse_tree__write_error_spec__add_paragraph_3_p_0(Var_12, STATE_VARIABLE_Paras_0_4, STATE_VARIABLE_Paras_5);
    }
    else
    {
      MR_Word Piece_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Pieces_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word RevWords1_23;
      MR_Word TailFirstInMsg_61;
      MR_Word STATE_VARIABLE_Paras_101_101;
      MR_Word next_value_of_FirstInMsg_1;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_RevWords0_3;
      MR_Word next_value_of_STATE_VARIABLE_Paras_0_4;

      switch (MR_tag((MR_Word) Piece_18)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(Piece_18)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                switch (FirstInMsg_1) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    RevWords1_23 = RevWords0_3;
                    break;
                  case (MR_Integer) 1:
                    {
                      RevWords1_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, RevWords1_23, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(1, RevWords1_23, 1) = ((MR_Box) (RevWords0_3));
                    }
                    break;
                }
                STATE_VARIABLE_Paras_101_101 = STATE_VARIABLE_Paras_0_4;
              }
              break;
            case (MR_Integer) 1:
              {
                RevWords1_23 = RevWords0_3;
                STATE_VARIABLE_Paras_101_101 = STATE_VARIABLE_Paras_0_4;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Strings_51;
                MR_Word Var_100;

                Strings_51 = parse_tree__write_error_spec__rev_words_to_strings_1_f_0(RevWords0_3);
                {
                  Var_100 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_100, 0) = ((MR_Box) (Strings_51));
                  MR_hl_field(0, Var_100, 1) = ((MR_Box) ((MR_Integer) 0));
                  MR_hl_field(0, Var_100, 2) = ((MR_Box) ((MR_Integer) 0));
                  MR_hl_field(0, Var_100, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                }
                parse_tree__write_error_spec__add_paragraph_3_p_0(Var_100, STATE_VARIABLE_Paras_0_4, &STATE_VARIABLE_Paras_101_101);
                RevWords1_23 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Var_109;
                MR_Word Strings_188;

                Strings_188 = parse_tree__write_error_spec__rev_words_to_strings_1_f_0(RevWords0_3);
                {
                  Var_109 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_109, 0) = ((MR_Box) (Strings_188));
                  MR_hl_field(0, Var_109, 1) = ((MR_Box) ((MR_Integer) 1));
                  MR_hl_field(0, Var_109, 2) = ((MR_Box) ((MR_Integer) 0));
                  MR_hl_field(0, Var_109, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                }
                parse_tree__write_error_spec__add_paragraph_3_p_0(Var_109, STATE_VARIABLE_Paras_0_4, &STATE_VARIABLE_Paras_101_101);
                RevWords1_23 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            RevWords1_23 = RevWords0_3;
            STATE_VARIABLE_Paras_101_101 = STATE_VARIABLE_Paras_0_4;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String Word_24 = ((MR_String) ((MR_hl_field(2, Piece_18, (MR_Integer) 0))));
            MR_Word Var_65;

            {
              Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_65, 0) = ((MR_Box) (Word_24));
            }
            {
              RevWords1_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, RevWords1_23, 0) = ((MR_Box) (Var_65));
              MR_hl_field(1, RevWords1_23, 1) = ((MR_Box) (RevWords0_3));
            }
            STATE_VARIABLE_Paras_101_101 = STATE_VARIABLE_Paras_0_4;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, Piece_18, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_66;
                MR_String Var_67;
                MR_String Word_128 = ((MR_String) ((MR_hl_field(3, Piece_18, (MR_Integer) 1))));

                Var_67 = parse_tree__error_spec__add_quotes_1_f_0(Word_128);
                {
                  Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_66, 0) = ((MR_Box) (Var_67));
                }
                {
                  RevWords1_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, RevWords1_23, 0) = ((MR_Box) (Var_66));
                  MR_hl_field(1, RevWords1_23, 1) = ((MR_Box) (RevWords0_3));
                }
                STATE_VARIABLE_Paras_101_101 = STATE_VARIABLE_Paras_0_4;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer Int_25 = ((MR_Integer) ((MR_hl_field(3, Piece_18, (MR_Integer) 1))));
                MR_Word Var_68;
                MR_String Var_69;

                Var_69 = mercury__string__int_to_string_1_f_0(Int_25);
                {
                  Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_68, 0) = ((MR_Box) (Var_69));
                }
                {
                  RevWords1_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, RevWords1_23, 0) = ((MR_Box) (Var_68));
                  MR_hl_field(1, RevWords1_23, 1) = ((MR_Box) (RevWords0_3));
                }
                STATE_VARIABLE_Paras_101_101 = STATE_VARIABLE_Paras_0_4;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Var_70;
                MR_String Var_71;
                MR_Integer Int_129 = ((MR_Integer) ((MR_hl_field(3, Piece_18, (MR_Integer) 1))));

                Var_71 = parse_tree__write_error_spec__int_name_str_1_f_0(Int_129);
                {
                  Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_70, 0) = ((MR_Box) (Var_71));
                }
                {
                  RevWords1_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, RevWords1_23, 0) = ((MR_Box) (Var_70));
                  MR_hl_field(1, RevWords1_23, 1) = ((MR_Box) (RevWords0_3));
                }
                STATE_VARIABLE_Paras_101_101 = STATE_VARIABLE_Paras_0_4;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Var_72;
                MR_String Var_73;
                MR_Integer Int_130 = ((MR_Integer) ((MR_hl_field(3, Piece_18, (MR_Integer) 1))));

                Var_73 = parse_tree__write_error_spec__nth_fixed_str_1_f_0(Int_130);
                {
                  Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_72, 0) = ((MR_Box) (Var_73));
                }
                {
                  RevWords1_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, RevWords1_23, 0) = ((MR_Box) (Var_72));
                  MR_hl_field(1, RevWords1_23, 1) = ((MR_Box) (RevWords0_3));
                }
                STATE_VARIABLE_Paras_101_101 = STATE_VARIABLE_Paras_0_4;
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Var_75;
                MR_String Word_131 = ((MR_String) ((MR_hl_field(3, Piece_18, (MR_Integer) 1))));

                {
                  Var_75 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, Var_75, 0) = ((MR_Box) (Word_131));
                }
                {
                  RevWords1_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, RevWords1_23, 0) = ((MR_Box) (Var_75));
                  MR_hl_field(1, RevWords1_23, 1) = ((MR_Box) (RevWords0_3));
                }
                STATE_VARIABLE_Paras_101_101 = STATE_VARIABLE_Paras_0_4;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Var_76;
                MR_String Word_132 = ((MR_String) ((MR_hl_field(3, Piece_18, (MR_Integer) 1))));

                {
                  Var_76 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_76, 0) = ((MR_Box) (Word_132));
                }
                {
                  RevWords1_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, RevWords1_23, 0) = ((MR_Box) (Var_76));
                  MR_hl_field(1, RevWords1_23, 1) = ((MR_Box) (RevWords0_3));
                }
                STATE_VARIABLE_Paras_101_101 = STATE_VARIABLE_Paras_0_4;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_String WordsStr_22 = ((MR_String) ((MR_hl_field(3, Piece_18, (MR_Integer) 1))));

                parse_tree__write_error_spec__break_into_words_3_p_0(WordsStr_22, RevWords0_3, &RevWords1_23);
                STATE_VARIABLE_Paras_101_101 = STATE_VARIABLE_Paras_0_4;
              }
              break;
            case (MR_Integer) 7:
              {
                MR_String Var_64;
                MR_String WordsStr_127 = ((MR_String) ((MR_hl_field(3, Piece_18, (MR_Integer) 1))));

                Var_64 = parse_tree__error_spec__add_quotes_1_f_0(WordsStr_127);
                parse_tree__write_error_spec__break_into_words_3_p_0(Var_64, RevWords0_3, &RevWords1_23);
                STATE_VARIABLE_Paras_101_101 = STATE_VARIABLE_Paras_0_4;
              }
              break;
            case (MR_Integer) 8:
              {
                MR_Word SymName_26 = ((MR_Word) ((MR_hl_field(3, Piece_18, (MR_Integer) 1))));
                MR_Word Var_78;
                MR_String Word_133;

                Word_133 = parse_tree__write_error_spec__sym_name_to_word_1_f_0(SymName_26);
                {
                  Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_78, 0) = ((MR_Box) (Word_133));
                }
                {
                  RevWords1_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, RevWords1_23, 0) = ((MR_Box) (Var_78));
                  MR_hl_field(1, RevWords1_23, 1) = ((MR_Box) (RevWords0_3));
                }
                STATE_VARIABLE_Paras_101_101 = STATE_VARIABLE_Paras_0_4;
              }
              break;
            case (MR_Integer) 9:
              {
                MR_Word SymName0_27 = ((MR_Word) ((MR_hl_field(3, Piece_18, (MR_Integer) 1))));
                MR_String Var_77;
                MR_Word SymName_228;
                MR_Word Var_229;
                MR_String Word_230;

                Var_77 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName0_27);
                {
                  SymName_228 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, SymName_228, 0) = ((MR_Box) (Var_77));
                }
                Word_230 = parse_tree__write_error_spec__sym_name_to_word_1_f_0(SymName_228);
                {
                  Var_229 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_229, 0) = ((MR_Box) (Word_230));
                }
                {
                  RevWords1_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, RevWords1_23, 0) = ((MR_Box) (Var_229));
                  MR_hl_field(1, RevWords1_23, 1) = ((MR_Box) (RevWords0_3));
                }
                STATE_VARIABLE_Paras_101_101 = STATE_VARIABLE_Paras_0_4;
              }
              break;
            case (MR_Integer) 10:
              {
                MR_Word NameAndArity_28 = ((MR_Word) ((MR_hl_field(3, Piece_18, (MR_Integer) 1))));
                MR_Word Var_79;
                MR_String Word_134;

                Word_134 = parse_tree__write_error_spec__name_arity_to_word_1_f_0(NameAndArity_28);
                {
                  Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_79, 0) = ((MR_Box) (Word_134));
                }
                {
                  RevWords1_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, RevWords1_23, 0) = ((MR_Box) (Var_79));
                  MR_hl_field(1, RevWords1_23, 1) = ((MR_Box) (RevWords0_3));
                }
                STATE_VARIABLE_Paras_101_101 = STATE_VARIABLE_Paras_0_4;
              }
              break;
            case (MR_Integer) 11:
              {
                MR_Word SymNameAndArity_29 = ((MR_Word) ((MR_hl_field(3, Piece_18, (MR_Integer) 1))));
                MR_Word Var_81;
                MR_String Word_139;

                Word_139 = parse_tree__write_error_spec__sym_name_arity_to_word_1_f_0(SymNameAndArity_29);
                {
                  Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_81, 0) = ((MR_Box) (Word_139));
                }
                {
                  RevWords1_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, RevWords1_23, 0) = ((MR_Box) (Var_81));
                  MR_hl_field(1, RevWords1_23, 1) = ((MR_Box) (RevWords0_3));
                }
                STATE_VARIABLE_Paras_101_101 = STATE_VARIABLE_Paras_0_4;
              }
              break;
            case (MR_Integer) 12:
              {
                MR_Word SymNameAndArity0_30 = ((MR_Word) ((MR_hl_field(3, Piece_18, (MR_Integer) 1))));
                MR_Integer Arity_31 = ((MR_Integer) ((MR_hl_field(0, SymNameAndArity0_30, (MR_Integer) 1))));
                MR_String Var_80;
                MR_Word SymName_135;
                MR_Word SymName0_136 = ((MR_Word) ((MR_hl_field(0, SymNameAndArity0_30, (MR_Integer) 0))));
                MR_Word SymNameAndArity_231;
                MR_Word Var_232;
                MR_String Word_233;

                Var_80 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName0_136);
                {
                  SymName_135 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, SymName_135, 0) = ((MR_Box) (Var_80));
                }
                {
                  SymNameAndArity_231 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, SymNameAndArity_231, 0) = ((MR_Box) (SymName_135));
                  MR_hl_field(0, SymNameAndArity_231, 1) = ((MR_Box) (Arity_31));
                }
                Word_233 = parse_tree__write_error_spec__sym_name_arity_to_word_1_f_0(SymNameAndArity_231);
                {
                  Var_232 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_232, 0) = ((MR_Box) (Word_233));
                }
                {
                  RevWords1_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, RevWords1_23, 0) = ((MR_Box) (Var_232));
                  MR_hl_field(1, RevWords1_23, 1) = ((MR_Box) (RevWords0_3));
                }
                STATE_VARIABLE_Paras_101_101 = STATE_VARIABLE_Paras_0_4;
              }
              break;
            case (MR_Integer) 13:
              {
                MR_Word PFSymNameArity_32 = ((MR_Word) ((MR_hl_field(3, Piece_18, (MR_Integer) 1))));
                MR_String WordsStr_146;

                WordsStr_146 = parse_tree__prog_out__pf_sym_name_pred_form_arity_to_string_1_f_0(PFSymNameArity_32);
                parse_tree__write_error_spec__break_into_words_3_p_0(WordsStr_146, RevWords0_3, &RevWords1_23);
                STATE_VARIABLE_Paras_101_101 = STATE_VARIABLE_Paras_0_4;
              }
              break;
            case (MR_Integer) 14:
              {
                MR_Word PFSymNameArity0_33 = ((MR_Word) ((MR_hl_field(3, Piece_18, (MR_Integer) 1))));
                MR_Word PF_34 = ((MR_Unsigned) ((MR_hl_field(0, PFSymNameArity0_33, (MR_Integer) 0))) & (MR_Integer) 1);
                MR_Word PredFormArity_35 = ((MR_Word) ((MR_hl_field(0, PFSymNameArity0_33, (MR_Integer) 2))));
                MR_String Var_82;
                MR_Word SymName_142;
                MR_Word SymName0_143 = ((MR_Word) ((MR_hl_field(0, PFSymNameArity0_33, (MR_Integer) 1))));
                MR_Word PFSymNameArity_224;
                MR_String WordsStr_225;

                Var_82 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName0_143);
                {
                  SymName_142 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, SymName_142, 0) = ((MR_Box) (Var_82));
                }
                {
                  PFSymNameArity_224 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, PFSymNameArity_224, 0) = (MR_Box) ((MR_Unsigned) (PF_34));
                  MR_hl_field(0, PFSymNameArity_224, 1) = ((MR_Box) (SymName_142));
                  MR_hl_field(0, PFSymNameArity_224, 2) = ((MR_Box) (PredFormArity_35));
                }
                WordsStr_225 = parse_tree__prog_out__pf_sym_name_pred_form_arity_to_string_1_f_0(PFSymNameArity_224);
                parse_tree__write_error_spec__break_into_words_3_p_0(WordsStr_225, RevWords0_3, &RevWords1_23);
                STATE_VARIABLE_Paras_101_101 = STATE_VARIABLE_Paras_0_4;
              }
              break;
            case (MR_Integer) 15:
              {
                MR_String WordsStr_157;
                MR_Word PFSymNameArity_160 = ((MR_Word) ((MR_hl_field(3, Piece_18, (MR_Integer) 1))));

                WordsStr_157 = parse_tree__prog_out__pf_sym_name_user_arity_to_string_1_f_0(PFSymNameArity_160);
                parse_tree__write_error_spec__break_into_words_3_p_0(WordsStr_157, RevWords0_3, &RevWords1_23);
                STATE_VARIABLE_Paras_101_101 = STATE_VARIABLE_Paras_0_4;
              }
              break;
            case (MR_Integer) 16:
              {
                MR_Word UserArity_36;
                MR_String Var_83;
                MR_Word SymName_149;
                MR_Word SymName0_150;
                MR_Word PFSymNameArity0_151 = ((MR_Word) ((MR_hl_field(3, Piece_18, (MR_Integer) 1))));
                MR_Word PF_152 = ((MR_Unsigned) ((MR_hl_field(0, PFSymNameArity0_151, (MR_Integer) 0))) & (MR_Integer) 1);
                MR_String WordsStr_226;
                MR_Word PFSymNameArity_227;

                SymName0_150 = ((MR_Word) ((MR_hl_field(0, PFSymNameArity0_151, (MR_Integer) 1))));
                UserArity_36 = ((MR_Word) ((MR_hl_field(0, PFSymNameArity0_151, (MR_Integer) 2))));
                Var_83 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName0_150);
                {
                  SymName_149 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, SymName_149, 0) = ((MR_Box) (Var_83));
                }
                {
                  PFSymNameArity_227 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, PFSymNameArity_227, 0) = (MR_Box) ((MR_Unsigned) (PF_152));
                  MR_hl_field(0, PFSymNameArity_227, 1) = ((MR_Box) (SymName_149));
                  MR_hl_field(0, PFSymNameArity_227, 2) = ((MR_Box) (UserArity_36));
                }
                WordsStr_226 = parse_tree__prog_out__pf_sym_name_user_arity_to_string_1_f_0(PFSymNameArity_227);
                parse_tree__write_error_spec__break_into_words_3_p_0(WordsStr_226, RevWords0_3, &RevWords1_23);
                STATE_VARIABLE_Paras_101_101 = STATE_VARIABLE_Paras_0_4;
              }
              break;
            case (MR_Integer) 17:
              {
                MR_Word TypeCtor_39 = ((MR_Word) ((MR_hl_field(3, Piece_18, (MR_Integer) 1))));
                MR_Word Var_201;
                MR_String Word_202;
                MR_Word SymName_203 = ((MR_Word) ((MR_hl_field(0, TypeCtor_39, (MR_Integer) 0))));
                MR_Word SymNameAndArity_204;
                MR_Integer Arity_205 = ((MR_Integer) ((MR_hl_field(0, TypeCtor_39, (MR_Integer) 1))));

                {
                  SymNameAndArity_204 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, SymNameAndArity_204, 0) = ((MR_Box) (SymName_203));
                  MR_hl_field(0, SymNameAndArity_204, 1) = ((MR_Box) (Arity_205));
                }
                Word_202 = parse_tree__write_error_spec__sym_name_arity_to_word_1_f_0(SymNameAndArity_204);
                {
                  Var_201 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_201, 0) = ((MR_Box) (Word_202));
                }
                {
                  RevWords1_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, RevWords1_23, 0) = ((MR_Box) (Var_201));
                  MR_hl_field(1, RevWords1_23, 1) = ((MR_Box) (RevWords0_3));
                }
                STATE_VARIABLE_Paras_101_101 = STATE_VARIABLE_Paras_0_4;
              }
              break;
            case (MR_Integer) 18:
              {
                MR_String Var_85;
                MR_Word SymName0_165;
                MR_Word TypeCtor_166 = ((MR_Word) ((MR_hl_field(3, Piece_18, (MR_Integer) 1))));
                MR_Word Var_234;
                MR_String Word_235;
                MR_Word SymName_236;
                MR_Word SymNameAndArity_237;
                MR_Integer Arity_238;

                SymName0_165 = ((MR_Word) ((MR_hl_field(0, TypeCtor_166, (MR_Integer) 0))));
                Arity_238 = ((MR_Integer) ((MR_hl_field(0, TypeCtor_166, (MR_Integer) 1))));
                Var_85 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName0_165);
                {
                  SymName_236 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, SymName_236, 0) = ((MR_Box) (Var_85));
                }
                {
                  SymNameAndArity_237 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, SymNameAndArity_237, 0) = ((MR_Box) (SymName_236));
                  MR_hl_field(0, SymNameAndArity_237, 1) = ((MR_Box) (Arity_238));
                }
                Word_235 = parse_tree__write_error_spec__sym_name_arity_to_word_1_f_0(SymNameAndArity_237);
                {
                  Var_234 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_234, 0) = ((MR_Box) (Word_235));
                }
                {
                  RevWords1_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, RevWords1_23, 0) = ((MR_Box) (Var_234));
                  MR_hl_field(1, RevWords1_23, 1) = ((MR_Box) (RevWords0_3));
                }
                STATE_VARIABLE_Paras_101_101 = STATE_VARIABLE_Paras_0_4;
              }
              break;
            case (MR_Integer) 19:
              {
                MR_Word InstCtor_40 = ((MR_Word) ((MR_hl_field(3, Piece_18, (MR_Integer) 1))));
                MR_Word Var_191;
                MR_String Word_192;
                MR_Word SymName_193 = ((MR_Word) ((MR_hl_field(0, InstCtor_40, (MR_Integer) 0))));
                MR_Word SymNameAndArity_194;
                MR_Integer Arity_195 = ((MR_Integer) ((MR_hl_field(0, InstCtor_40, (MR_Integer) 1))));

                {
                  SymNameAndArity_194 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, SymNameAndArity_194, 0) = ((MR_Box) (SymName_193));
                  MR_hl_field(0, SymNameAndArity_194, 1) = ((MR_Box) (Arity_195));
                }
                Word_192 = parse_tree__write_error_spec__sym_name_arity_to_word_1_f_0(SymNameAndArity_194);
                {
                  Var_191 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_191, 0) = ((MR_Box) (Word_192));
                }
                {
                  RevWords1_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, RevWords1_23, 0) = ((MR_Box) (Var_191));
                  MR_hl_field(1, RevWords1_23, 1) = ((MR_Box) (RevWords0_3));
                }
                STATE_VARIABLE_Paras_101_101 = STATE_VARIABLE_Paras_0_4;
              }
              break;
            case (MR_Integer) 20:
              {
                MR_String Var_86;
                MR_Word SymName0_167;
                MR_Word InstCtor_168 = ((MR_Word) ((MR_hl_field(3, Piece_18, (MR_Integer) 1))));
                MR_Word Var_214;
                MR_String Word_215;
                MR_Word SymName_216;
                MR_Word SymNameAndArity_217;
                MR_Integer Arity_218;

                SymName0_167 = ((MR_Word) ((MR_hl_field(0, InstCtor_168, (MR_Integer) 0))));
                Arity_218 = ((MR_Integer) ((MR_hl_field(0, InstCtor_168, (MR_Integer) 1))));
                Var_86 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName0_167);
                {
                  SymName_216 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, SymName_216, 0) = ((MR_Box) (Var_86));
                }
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
                  RevWords1_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, RevWords1_23, 0) = ((MR_Box) (Var_214));
                  MR_hl_field(1, RevWords1_23, 1) = ((MR_Box) (RevWords0_3));
                }
                STATE_VARIABLE_Paras_101_101 = STATE_VARIABLE_Paras_0_4;
              }
              break;
            case (MR_Integer) 21:
              {
                MR_Word ModeCtor_41 = ((MR_Word) ((MR_hl_field(3, Piece_18, (MR_Integer) 1))));
                MR_Word Var_196;
                MR_String Word_197;
                MR_Word SymName_198 = ((MR_Word) ((MR_hl_field(0, ModeCtor_41, (MR_Integer) 0))));
                MR_Word SymNameAndArity_199;
                MR_Integer Arity_200 = ((MR_Integer) ((MR_hl_field(0, ModeCtor_41, (MR_Integer) 1))));

                {
                  SymNameAndArity_199 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, SymNameAndArity_199, 0) = ((MR_Box) (SymName_198));
                  MR_hl_field(0, SymNameAndArity_199, 1) = ((MR_Box) (Arity_200));
                }
                Word_197 = parse_tree__write_error_spec__sym_name_arity_to_word_1_f_0(SymNameAndArity_199);
                {
                  Var_196 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_196, 0) = ((MR_Box) (Word_197));
                }
                {
                  RevWords1_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, RevWords1_23, 0) = ((MR_Box) (Var_196));
                  MR_hl_field(1, RevWords1_23, 1) = ((MR_Box) (RevWords0_3));
                }
                STATE_VARIABLE_Paras_101_101 = STATE_VARIABLE_Paras_0_4;
              }
              break;
            case (MR_Integer) 22:
              {
                MR_String Var_87;
                MR_Word SymName0_169;
                MR_Word ModeCtor_170 = ((MR_Word) ((MR_hl_field(3, Piece_18, (MR_Integer) 1))));
                MR_Word Var_219;
                MR_String Word_220;
                MR_Word SymName_221;
                MR_Word SymNameAndArity_222;
                MR_Integer Arity_223;

                SymName0_169 = ((MR_Word) ((MR_hl_field(0, ModeCtor_170, (MR_Integer) 0))));
                Arity_223 = ((MR_Integer) ((MR_hl_field(0, ModeCtor_170, (MR_Integer) 1))));
                Var_87 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName0_169);
                {
                  SymName_221 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, SymName_221, 0) = ((MR_Box) (Var_87));
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
                  RevWords1_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, RevWords1_23, 0) = ((MR_Box) (Var_219));
                  MR_hl_field(1, RevWords1_23, 1) = ((MR_Box) (RevWords0_3));
                }
                STATE_VARIABLE_Paras_101_101 = STATE_VARIABLE_Paras_0_4;
              }
              break;
            case (MR_Integer) 23:
              {
                MR_Word ClassId_42 = ((MR_Word) ((MR_hl_field(3, Piece_18, (MR_Integer) 1))));
                MR_Word Var_89;
                MR_String Word_174;
                MR_Word SymName_175 = ((MR_Word) ((MR_hl_field(0, ClassId_42, (MR_Integer) 0))));
                MR_Word SymNameAndArity_177;
                MR_Integer Arity_178 = ((MR_Integer) ((MR_hl_field(0, ClassId_42, (MR_Integer) 1))));

                {
                  SymNameAndArity_177 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, SymNameAndArity_177, 0) = ((MR_Box) (SymName_175));
                  MR_hl_field(0, SymNameAndArity_177, 1) = ((MR_Box) (Arity_178));
                }
                Word_174 = parse_tree__write_error_spec__sym_name_arity_to_word_1_f_0(SymNameAndArity_177);
                {
                  Var_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_89, 0) = ((MR_Box) (Word_174));
                }
                {
                  RevWords1_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, RevWords1_23, 0) = ((MR_Box) (Var_89));
                  MR_hl_field(1, RevWords1_23, 1) = ((MR_Box) (RevWords0_3));
                }
                STATE_VARIABLE_Paras_101_101 = STATE_VARIABLE_Paras_0_4;
              }
              break;
            case (MR_Integer) 24:
              {
                MR_String Var_88;
                MR_Word SymName0_171;
                MR_Word ClassId_172 = ((MR_Word) ((MR_hl_field(3, Piece_18, (MR_Integer) 1))));
                MR_Word Var_206;
                MR_String Word_207;
                MR_Word SymName_208;
                MR_Word SymNameAndArity_209;
                MR_Integer Arity_210;

                SymName0_171 = ((MR_Word) ((MR_hl_field(0, ClassId_172, (MR_Integer) 0))));
                Arity_210 = ((MR_Integer) ((MR_hl_field(0, ClassId_172, (MR_Integer) 1))));
                Var_88 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName0_171);
                {
                  SymName_208 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, SymName_208, 0) = ((MR_Box) (Var_88));
                }
                {
                  SymNameAndArity_209 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, SymNameAndArity_209, 0) = ((MR_Box) (SymName_208));
                  MR_hl_field(0, SymNameAndArity_209, 1) = ((MR_Box) (Arity_210));
                }
                Word_207 = parse_tree__write_error_spec__sym_name_arity_to_word_1_f_0(SymNameAndArity_209);
                {
                  Var_206 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_206, 0) = ((MR_Box) (Word_207));
                }
                {
                  RevWords1_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, RevWords1_23, 0) = ((MR_Box) (Var_206));
                  MR_hl_field(1, RevWords1_23, 1) = ((MR_Box) (RevWords0_3));
                }
                STATE_VARIABLE_Paras_101_101 = STATE_VARIABLE_Paras_0_4;
              }
              break;
            case (MR_Integer) 25:
              {
                MR_Word ConsId0_37 = ((MR_Word) ((MR_hl_field(3, Piece_18, (MR_Integer) 1))));
                MR_Word ConsId_38;
                MR_Word Var_84;
                MR_String Word_164;

                parse_tree__prog_util__strip_builtin_qualifier_from_cons_id_2_p_0(ConsId0_37, &ConsId_38);
                Word_164 = parse_tree__prog_out__maybe_quoted_cons_id_and_arity_to_string_1_f_0(ConsId_38);
                {
                  Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_84, 0) = ((MR_Box) (Word_164));
                }
                {
                  RevWords1_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, RevWords1_23, 0) = ((MR_Box) (Var_84));
                  MR_hl_field(1, RevWords1_23, 1) = ((MR_Box) (RevWords0_3));
                }
                STATE_VARIABLE_Paras_101_101 = STATE_VARIABLE_Paras_0_4;
              }
              break;
            case (MR_Integer) 26:
              {
                MR_Word ConsId0_163 = ((MR_Word) ((MR_hl_field(3, Piece_18, (MR_Integer) 1))));
                MR_Word ConsId_211;
                MR_Word Var_212;
                MR_String Word_213;

                parse_tree__prog_util__strip_module_qualifier_from_cons_id_2_p_0(ConsId0_163, &ConsId_211);
                Word_213 = parse_tree__prog_out__maybe_quoted_cons_id_and_arity_to_string_1_f_0(ConsId_211);
                {
                  Var_212 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_212, 0) = ((MR_Box) (Word_213));
                }
                {
                  RevWords1_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, RevWords1_23, 0) = ((MR_Box) (Var_212));
                  MR_hl_field(1, RevWords1_23, 1) = ((MR_Box) (RevWords0_3));
                }
                STATE_VARIABLE_Paras_101_101 = STATE_VARIABLE_Paras_0_4;
              }
              break;
            case (MR_Integer) 27:
              {
                MR_Word Type_43 = ((MR_Word) ((MR_hl_field(3, Piece_18, (MR_Integer) 1))));
                MR_Word TypeCtorName_44;
                MR_Integer TypeCtorArity_45;
                MR_Word SymNameArity_46;
                MR_Word Var_90;
                MR_String Word_179;
                MR_Word TypeCtor_180;

                parse_tree__prog_type__type_to_ctor_det_2_p_0(Type_43, &TypeCtor_180);
                TypeCtorName_44 = ((MR_Word) ((MR_hl_field(0, TypeCtor_180, (MR_Integer) 0))));
                TypeCtorArity_45 = ((MR_Integer) ((MR_hl_field(0, TypeCtor_180, (MR_Integer) 1))));
                {
                  SymNameArity_46 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, SymNameArity_46, 0) = ((MR_Box) (TypeCtorName_44));
                  MR_hl_field(0, SymNameArity_46, 1) = ((MR_Box) (TypeCtorArity_45));
                }
                Word_179 = parse_tree__write_error_spec__sym_name_arity_to_word_1_f_0(SymNameArity_46);
                {
                  Var_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_90, 0) = ((MR_Box) (Word_179));
                }
                {
                  RevWords1_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, RevWords1_23, 0) = ((MR_Box) (Var_90));
                  MR_hl_field(1, RevWords1_23, 1) = ((MR_Box) (RevWords0_3));
                }
                STATE_VARIABLE_Paras_101_101 = STATE_VARIABLE_Paras_0_4;
              }
              break;
            case (MR_Integer) 28:
              {
                MR_Word PredOrFunc_47 = ((MR_Unsigned) ((MR_hl_field(3, Piece_18, (MR_Integer) 1))) & (MR_Integer) 1);
                MR_Word Var_91;
                MR_String Word_181;

                Word_181 = mdbcomp__prim_data__pred_or_func_to_string_1_f_0(PredOrFunc_47);
                {
                  Var_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_91, 0) = ((MR_Box) (Word_181));
                }
                {
                  RevWords1_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, RevWords1_23, 0) = ((MR_Box) (Var_91));
                  MR_hl_field(1, RevWords1_23, 1) = ((MR_Box) (RevWords0_3));
                }
                STATE_VARIABLE_Paras_101_101 = STATE_VARIABLE_Paras_0_4;
              }
              break;
            case (MR_Integer) 29:
              {
                MR_Word Purity_48 = ((MR_Unsigned) ((MR_hl_field(3, Piece_18, (MR_Integer) 1))) & (MR_Integer) 3);
                MR_Word Var_92;
                MR_String Word_182;

                Word_182 = parse_tree__write_error_spec__purity_to_string_1_f_0(Purity_48);
                {
                  Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_92, 0) = ((MR_Box) (Word_182));
                }
                {
                  RevWords1_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, RevWords1_23, 0) = ((MR_Box) (Var_92));
                  MR_hl_field(1, RevWords1_23, 1) = ((MR_Box) (RevWords0_3));
                }
                STATE_VARIABLE_Paras_101_101 = STATE_VARIABLE_Paras_0_4;
              }
              break;
            case (MR_Integer) 30:
              {
                MR_Word Var_93;
                MR_String Word_183;
                MR_Word Purity_184 = ((MR_Unsigned) ((MR_hl_field(3, Piece_18, (MR_Integer) 1))) & (MR_Integer) 3);

                Word_183 = parse_tree__write_error_spec__a_purity_to_string_1_f_0(Purity_184);
                {
                  Var_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_93, 0) = ((MR_Box) (Word_183));
                }
                {
                  RevWords1_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, RevWords1_23, 0) = ((MR_Box) (Var_93));
                  MR_hl_field(1, RevWords1_23, 1) = ((MR_Box) (RevWords0_3));
                }
                STATE_VARIABLE_Paras_101_101 = STATE_VARIABLE_Paras_0_4;
              }
              break;
            case (MR_Integer) 31:
              {
                MR_String DeclName_49 = ((MR_String) ((MR_hl_field(3, Piece_18, (MR_Integer) 1))));
                MR_String Var_94;
                MR_Word Var_96;
                MR_String Word_185;

                Var_94 = mercury__string__f_43_43_2_f_0((MR_String) ":- ", DeclName_49);
                Word_185 = parse_tree__error_spec__add_quotes_1_f_0(Var_94);
                {
                  Var_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_96, 0) = ((MR_Box) (Word_185));
                }
                {
                  RevWords1_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, RevWords1_23, 0) = ((MR_Box) (Var_96));
                  MR_hl_field(1, RevWords1_23, 1) = ((MR_Box) (RevWords0_3));
                }
                STATE_VARIABLE_Paras_101_101 = STATE_VARIABLE_Paras_0_4;
              }
              break;
            case (MR_Integer) 32:
              {
                MR_String PragmaName_50 = ((MR_String) ((MR_hl_field(3, Piece_18, (MR_Integer) 1))));
                MR_String Var_97;
                MR_Word Var_99;
                MR_String Word_186;

                Var_97 = mercury__string__f_43_43_2_f_0((MR_String) ":- pragma ", PragmaName_50);
                Word_186 = parse_tree__error_spec__add_quotes_1_f_0(Var_97);
                {
                  Var_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_99, 0) = ((MR_Box) (Word_186));
                }
                {
                  RevWords1_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, RevWords1_23, 0) = ((MR_Box) (Var_99));
                  MR_hl_field(1, RevWords1_23, 1) = ((MR_Box) (RevWords0_3));
                }
                STATE_VARIABLE_Paras_101_101 = STATE_VARIABLE_Paras_0_4;
              }
              break;
            case (MR_Integer) 33:
              {
                MR_String LP_53 = ((MR_String) ((MR_hl_field(3, Piece_18, (MR_Integer) 1))));
                MR_Word LPWordKind_54 = ((MR_Unsigned) ((MR_hl_field(3, Piece_18, (MR_Integer) 2))) & (MR_Integer) 1);
                MR_Word LPWord_55;
                MR_Word Var_114;
                MR_Word Var_115;
                MR_Word Strings_189;

                switch (LPWordKind_54) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      LPWord_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, LPWord_55, 0) = ((MR_Box) (LP_53));
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      LPWord_55 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, LPWord_55, 0) = ((MR_Box) (LP_53));
                    }
                    break;
                }
                {
                  Var_114 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_114, 0) = ((MR_Box) (LPWord_55));
                  MR_hl_field(1, Var_114, 1) = ((MR_Box) (RevWords0_3));
                }
                Strings_189 = parse_tree__write_error_spec__rev_words_to_strings_1_f_0(Var_114);
                {
                  Var_115 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_115, 0) = ((MR_Box) (Strings_189));
                  MR_hl_field(0, Var_115, 1) = ((MR_Box) ((MR_Integer) 0));
                  MR_hl_field(0, Var_115, 2) = ((MR_Box) ((MR_Integer) 1));
                  MR_hl_field(0, Var_115, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                }
                parse_tree__write_error_spec__add_paragraph_3_p_0(Var_115, STATE_VARIABLE_Paras_0_4, &STATE_VARIABLE_Paras_101_101);
                RevWords1_23 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 34:
              {
                MR_String RP_56 = ((MR_String) ((MR_hl_field(3, Piece_18, (MR_Integer) 1))));
                MR_Word RPWordKind_57 = ((MR_Unsigned) ((MR_hl_field(3, Piece_18, (MR_Integer) 2))) & (MR_Integer) 1);
                MR_Word RPWord_58;
                MR_Word Var_120;
                MR_Word Strings_190;

                Strings_190 = parse_tree__write_error_spec__rev_words_to_strings_1_f_0(RevWords0_3);
                {
                  Var_120 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_120, 0) = ((MR_Box) (Strings_190));
                  MR_hl_field(0, Var_120, 1) = ((MR_Box) ((MR_Integer) 0));
                  MR_hl_field(0, Var_120, 2) = ((MR_Box) ((MR_Integer) -1));
                  MR_hl_field(0, Var_120, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                }
                parse_tree__write_error_spec__add_paragraph_3_p_0(Var_120, STATE_VARIABLE_Paras_0_4, &STATE_VARIABLE_Paras_101_101);
                switch (RPWordKind_57) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      RPWord_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, RPWord_58, 0) = ((MR_Box) (RP_56));
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      RPWord_58 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, RPWord_58, 0) = ((MR_Box) (RP_56));
                    }
                    break;
                }
                {
                  RevWords1_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, RevWords1_23, 0) = ((MR_Box) (RPWord_58));
                  MR_hl_field(1, RevWords1_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              }
              break;
            case (MR_Integer) 35:
              {
                MR_Integer IndentDelta_52 = ((MR_Integer) ((MR_hl_field(3, Piece_18, (MR_Integer) 1))));
                MR_Word Var_105;
                MR_Word Strings_187;

                Strings_187 = parse_tree__write_error_spec__rev_words_to_strings_1_f_0(RevWords0_3);
                {
                  Var_105 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_105, 0) = ((MR_Box) (Strings_187));
                  MR_hl_field(0, Var_105, 1) = ((MR_Box) ((MR_Integer) 0));
                  MR_hl_field(0, Var_105, 2) = ((MR_Box) (IndentDelta_52));
                  MR_hl_field(0, Var_105, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                }
                parse_tree__write_error_spec__add_paragraph_3_p_0(Var_105, STATE_VARIABLE_Paras_0_4, &STATE_VARIABLE_Paras_101_101);
                RevWords1_23 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 36:
              {
                RevWords1_23 = RevWords0_3;
                STATE_VARIABLE_Paras_101_101 = STATE_VARIABLE_Paras_0_4;
              }
              break;
          }
          break;
      }
      parse_tree__write_error_spec__first_in_msg_after_piece_3_p_0(Piece_18, FirstInMsg_1, &TailFirstInMsg_61);
      // direct tailcall eliminated
      ;
      next_value_of_FirstInMsg_1 = TailFirstInMsg_61;
      next_value_of_HeadVar__2_2 = Pieces_19;
      next_value_of_RevWords0_3 = RevWords1_23;
      next_value_of_STATE_VARIABLE_Paras_0_4 = STATE_VARIABLE_Paras_101_101;
      FirstInMsg_1 = next_value_of_FirstInMsg_1;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      RevWords0_3 = next_value_of_RevWords0_3;
      STATE_VARIABLE_Paras_0_4 = next_value_of_STATE_VARIABLE_Paras_0_4;
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
parse_tree__write_error_spec__first_in_msg_after_piece_3_p_0(
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
parse_tree__write_error_spec__rev_words_to_strings_1_f_0(
  MR_Word RevWords_3)
{
  MR_Word Strings_4;
  MR_Word PorPs_5;
  MR_Word Var_6;

  Var_6 = parse_tree__write_error_spec__rev_words_to_rev_plain_or_prefix_1_f_0(RevWords_3);
  PorPs_5 = mercury__list__reverse_1_f_0((MR_Word) (&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_plain_or_prefix_0), Var_6);
  Strings_4 = parse_tree__write_error_spec__join_prefixes_1_f_0(PorPs_5);
  return Strings_4;
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
    MR_Word TailStrings_6;

    TailStrings_6 = parse_tree__write_error_spec__join_prefixes_1_f_0(Tail_4);
    switch (MR_tag((MR_Word) Head_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        if ((TailStrings_6 == (MR_Word) ((MR_Unsigned) 0U)))
          HeadVar__2_2 = TailStrings_6;
        else
        {
          MR_String FirstTailString_11 = ((MR_String) ((MR_hl_field(1, TailStrings_6, (MR_Integer) 0))));
          MR_Word LaterTailStrings_12 = ((MR_Word) ((MR_hl_field(1, TailStrings_6, (MR_Integer) 1))));
          MR_String Var_14;

          Var_14 = mercury__string__uncapitalize_first_1_f_0(FirstTailString_11);
          {
            HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Var_14));
            MR_hl_field(1, HeadVar__2_2, 1) = ((MR_Box) (LaterTailStrings_12));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String String_7 = ((MR_String) ((MR_hl_field(1, Head_3, (MR_Integer) 0))));

          {
            HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (String_7));
            MR_hl_field(1, HeadVar__2_2, 1) = ((MR_Box) (TailStrings_6));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String Prefix_8 = ((MR_String) ((MR_hl_field(2, Head_3, (MR_Integer) 0))));

          if ((TailStrings_6 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Prefix_8));
              MR_hl_field(1, HeadVar__2_2, 1) = ((MR_Box) (TailStrings_6));
            }
          else
          {
            MR_String First_9 = ((MR_String) ((MR_hl_field(1, TailStrings_6, (MR_Integer) 0))));
            MR_Word Later_10 = ((MR_Word) ((MR_hl_field(1, TailStrings_6, (MR_Integer) 1))));
            MR_String Var_13;

            Var_13 = mercury__string__f_43_43_2_f_0(Prefix_8, First_9);
            {
              HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Var_13));
              MR_hl_field(1, HeadVar__2_2, 1) = ((MR_Box) (Later_10));
            }
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
          {
            MR_Word Var_15;

            Var_15 = parse_tree__write_error_spec__rev_words_to_rev_plain_or_prefix_1_f_0(Words_4);
            {
              HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(1, HeadVar__2_2, 1) = ((MR_Box) (Var_15));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String String_6 = ((MR_String) ((MR_hl_field(1, Word_3, (MR_Integer) 0))));
            MR_Word Var_12;
            MR_Word Var_13;

            {
              Var_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_12, 0) = ((MR_Box) (String_6));
            }
            Var_13 = parse_tree__write_error_spec__rev_words_to_rev_plain_or_prefix_1_f_0(Words_4);
            {
              HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Var_12));
              MR_hl_field(1, HeadVar__2_2, 1) = ((MR_Box) (Var_13));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String Prefix_7 = ((MR_String) ((MR_hl_field(2, Word_3, (MR_Integer) 0))));
            MR_Word Var_16;
            MR_Word Var_17;

            {
              Var_16 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Var_16, 0) = ((MR_Box) (Prefix_7));
            }
            Var_17 = parse_tree__write_error_spec__rev_words_to_rev_plain_or_prefix_1_f_0(Words_4);
            {
              HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Var_16));
              MR_hl_field(1, HeadVar__2_2, 1) = ((MR_Box) (Var_17));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_String Suffix_8 = ((MR_String) ((MR_hl_field(3, Word_3, (MR_Integer) 0))));

            if ((Words_4 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Var_18;

              {
                Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_18, 0) = ((MR_Box) (Suffix_8));
              }
              {
                HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Var_18));
                MR_hl_field(1, HeadVar__2_2, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            else
            {
              MR_Word Var_40 = ((MR_Word) ((MR_hl_field(1, Words_4, (MR_Integer) 1))));
              MR_Word Var_41 = ((MR_Word) ((MR_hl_field(1, Words_4, (MR_Integer) 0))));

              switch (MR_tag((MR_Word) Var_41)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word NewWords_10;
                    MR_Word Var_25;
                    MR_String Var_26;
                    MR_Word next_value_of_HeadVar__1_1;

                    Var_26 = mercury__string__uncapitalize_first_1_f_0(Suffix_8);
                    {
                      Var_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Var_25, 0) = ((MR_Box) (Var_26));
                    }
                    {
                      NewWords_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, NewWords_10, 0) = ((MR_Box) (Var_25));
                      MR_hl_field(1, NewWords_10, 1) = ((MR_Box) (Var_40));
                    }
                    // direct tailcall eliminated
                    ;
                    next_value_of_HeadVar__1_1 = NewWords_10;
                    HeadVar__1_1 = next_value_of_HeadVar__1_1;
                    continue;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Var_21;
                    MR_String Var_22;
                    MR_Word Var_23;
                    MR_String String_35 = ((MR_String) ((MR_hl_field(1, Var_41, (MR_Integer) 0))));

                    Var_22 = mercury__string__f_43_43_2_f_0(String_35, Suffix_8);
                    {
                      Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_21, 0) = ((MR_Box) (Var_22));
                    }
                    Var_23 = parse_tree__write_error_spec__rev_words_to_rev_plain_or_prefix_1_f_0(Var_40);
                    {
                      HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Var_21));
                      MR_hl_field(1, HeadVar__2_2, 1) = ((MR_Box) (Var_23));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Var_28;
                    MR_String Var_29;
                    MR_Word Var_30;
                    MR_String Prefix_37 = ((MR_String) ((MR_hl_field(2, Var_41, (MR_Integer) 0))));

                    Var_29 = mercury__string__f_43_43_2_f_0(Prefix_37, Suffix_8);
                    {
                      Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_28, 0) = ((MR_Box) (Var_29));
                    }
                    Var_30 = parse_tree__write_error_spec__rev_words_to_rev_plain_or_prefix_1_f_0(Var_40);
                    {
                      HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Var_28));
                      MR_hl_field(1, HeadVar__2_2, 1) = ((MR_Box) (Var_30));
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_String MoreSuffix_11 = ((MR_String) ((MR_hl_field(3, Var_41, (MR_Integer) 0))));
                    MR_Word Var_32;
                    MR_Word Var_33;
                    MR_String Var_34;
                    MR_Word next_value_of_HeadVar__1_1;

                    Var_34 = mercury__string__f_43_43_2_f_0(MoreSuffix_11, Suffix_8);
                    {
                      Var_33 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Var_33, 0) = ((MR_Box) (Var_34));
                    }
                    {
                      Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_32, 0) = ((MR_Box) (Var_33));
                      MR_hl_field(1, Var_32, 1) = ((MR_Box) (Var_40));
                    }
                    // direct tailcall eliminated
                    ;
                    next_value_of_HeadVar__1_1 = Var_32;
                    HeadVar__1_1 = next_value_of_HeadVar__1_1;
                    continue;
                  }
                  break;
              }
            }
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
      MR_Integer LineIndent_20 = ((MR_Integer) ((MR_hl_field(0, Line_13, (MR_Integer) 1))));
      MR_String LineWordsStr_21 = ((MR_String) ((MR_hl_field(0, Line_13, (MR_Integer) 2))));
      MR_Word next_value_of_HeadVar__3_3;

      succeeded = (strcmp(LineWordsStr_21, (MR_String) "") == 0);
      if (succeeded)
      {
        mercury__io__write_string_4_p_0(HeadVar__1_1, PrefixStr_2);
        mercury__io__write_string_4_p_0(HeadVar__1_1, (MR_String) "\n");
      }
      else
      {
        MR_String IndentStr_24;

        IndentStr_24 = parse_tree__prog_out__indent_string_1_f_0(LineIndent_20);
        mercury__io__write_string_4_p_0(HeadVar__1_1, PrefixStr_2);
        mercury__io__write_string_4_p_0(HeadVar__1_1, IndentStr_24);
        mercury__io__write_string_4_p_0(HeadVar__1_1, LineWordsStr_21);
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
	MR_register_type_ctor_info(&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_error_line_0);
	MR_register_type_ctor_info(&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_maybe_first_in_msg_0);
	MR_register_type_ctor_info(&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_maybe_lower_next_initial_0);
	MR_register_type_ctor_info(&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_maybe_printed_something_0);
	MR_register_type_ctor_info(&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_maybe_treat_as_first_0);
	MR_register_type_ctor_info(&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_paragraph_0);
	MR_register_type_ctor_info(&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_paren_status_0);
	MR_register_type_ctor_info(&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_plain_or_prefix_0);
	MR_register_type_ctor_info(&parse_tree__write_error_spec__parse_tree__write_error_spec__type_ctor_info_word_0);
}

void mercury__parse_tree__write_error_spec__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__write_error_spec__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.write_error_spec.
