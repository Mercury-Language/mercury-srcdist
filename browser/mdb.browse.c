/*
** Automatically generated from `browse.m'
** by the Mercury compiler,
** version rotd-2018-08-01
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


// :- module mdb.browse.
// :- implementation.

/*
INIT mercury__mdb__browse__init
ENDINIT
*/

#include "mdb.browse.mih"
#include "mdb.browse.mh"


#include "mdb.mih"
#include "mdbcomp.mih"
#include "mdb.browser_info.mih"
#include "mdb.browser_term.mih"
#include "mdb.frame.mih"
#include "mdb.parse.mih"
#include "mdb.sized_pretty.mih"
#include "mdb.term_rep.mih"
#include "mdb.term_to_html.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "dir.mih"
#include "enum.mih"
#include "getopt.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_io.mih"
#include "term_to_xml.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "stream.string_writer.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct2 mdb__browse__pair__pti_pair_2__plain_mdb__parse__type_ctor_info_format_option_0__plain_getopt__type_ctor_info_option_data_0;

static const MR_PseudoTypeInfo mdb__browse__mdb__browse__field_types_deref_result_1_0[1];

static const MR_DuFunctorDesc mdb__browse__mdb__browse__du_functor_desc_deref_result_1_0;

static const MR_FA_TypeInfo_Struct1 mdb__browse__list__ti_list_1mdb__browser_info__type_ctor_info_down_dir_0;

static const MR_PseudoTypeInfo mdb__browse__mdb__browse__field_types_deref_result_1_1[2];

static const MR_DuFunctorDesc mdb__browse__mdb__browse__du_functor_desc_deref_result_1_1;

static const MR_DuFunctorDescPtr mdb__browse__mdb__browse__du_stag_ordered_deref_result_1_0[1];

static const MR_DuFunctorDescPtr mdb__browse__mdb__browse__du_stag_ordered_deref_result_1_1[1];

static const MR_DuPtagLayout mdb__browse__mdb__browse__du_ptag_ordered_deref_result_1[2];

static const MR_DuFunctorDescPtr mdb__browse__mdb__browse__du_name_ordered_deref_result_1[2];

static const MR_Integer mdb__browse__mdb__browse__functor_number_map_deref_result_1[2];

static const MR_EnumFunctorDesc mdb__browse__mdb__browse__enum_functor_desc_unbound_0_0;

static const MR_EnumFunctorDescPtr mdb__browse__mdb__browse__enum_value_ordered_unbound_0[1];

static const MR_EnumFunctorDescPtr mdb__browse__mdb__browse__enum_name_ordered_unbound_0[1];

static const MR_Integer mdb__browse__mdb__browse__functor_number_map_unbound_0[1];

static const MR_FA_TypeInfo_Struct1 mdb__browse__list__ti_list_1univ__type_ctor_info_univ_0;

static const MR_PseudoTypeInfo mdb__browse__mdb__browse__field_types_xml_function_wrapper_0_0[3];

static const MR_ConstString mdb__browse__mdb__browse__field_names_xml_function_wrapper_0_0[3];

static const MR_DuFunctorDesc mdb__browse__mdb__browse__du_functor_desc_xml_function_wrapper_0_0;

static const MR_DuFunctorDescPtr mdb__browse__mdb__browse__du_stag_ordered_xml_function_wrapper_0_0[1];

static const MR_DuPtagLayout mdb__browse__mdb__browse__du_ptag_ordered_xml_function_wrapper_0[1];

static const MR_DuFunctorDescPtr mdb__browse__mdb__browse__du_name_ordered_xml_function_wrapper_0[1];

static const MR_Integer mdb__browse__mdb__browse__functor_number_map_xml_function_wrapper_0[1];

static const MR_PseudoTypeInfo mdb__browse__mdb__browse__field_types_xml_predicate_wrapper_0_0[2];

static const MR_ConstString mdb__browse__mdb__browse__field_names_xml_predicate_wrapper_0_0[2];

static const MR_DuFunctorDesc mdb__browse__mdb__browse__du_functor_desc_xml_predicate_wrapper_0_0;

static const MR_DuFunctorDescPtr mdb__browse__mdb__browse__du_stag_ordered_xml_predicate_wrapper_0_0[1];

static const MR_DuPtagLayout mdb__browse__mdb__browse__du_ptag_ordered_xml_predicate_wrapper_0[1];

static const MR_DuFunctorDescPtr mdb__browse__mdb__browse__du_name_ordered_xml_predicate_wrapper_0[1];

static const MR_Integer mdb__browse__mdb__browse__functor_number_map_xml_predicate_wrapper_0[1];

static void MR_CALL 
mdb__browse____Compare____xml_predicate_wrapper_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mdb__browse____Unify____xml_predicate_wrapper_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mdb__browse____Compare____xml_function_wrapper_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mdb__browse____Unify____xml_function_wrapper_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mdb__browse____Compare____deref_result_1_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mdb__browse____Unify____deref_result_1_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mdb__browse__write_univ_or_unbound_4_p_0(
  MR_Word TypeClassInfo_for_writer_16,
  MR_Word TypeClassInfo_for_writer_17,
  MR_Box Stream_5,
  MR_Word Univ_6,
  MR_Box STATE_VARIABLE_IO_0_9,
  MR_Box * STATE_VARIABLE_IO_10);

static void MR_CALL 
mdb__browse__put_comma_space_3_p_0(
  MR_Word TypeClassInfo_for_writer_10,
  MR_Box Stream_4,
  MR_Box STATE_VARIABLE_State_0_6,
  MR_Box * STATE_VARIABLE_State_7);

static MR_bool MR_CALL 
mdb__browse__bool_format_option_is_true_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Format_3);

static void MR_CALL 
mdb__browse__get_value_representation_2_p_0(
  MR_Word TypeInfo_for_T_6,
  MR_Box HeadVar__1_1,
  MR_Integer * HeadVar__2_2);

static void MR_CALL 
mdb__browse__browser_term_to_html_flat_string_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mdb__browse__browser_term_to_html_flat_string_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mdb__browse__launch_web_browser_5_p_0(
  MR_Word OutStream_6,
  MR_Word ErrStream_7,
  MR_String CommandStr_8);

static void MR_CALL 
mdb__browse__launch_xml_browser_5_p_0(
  MR_Word OutStream_6,
  MR_Word ErrStream_7,
  MR_String CommandStr_8);

static MR_Box MR_CALL 
mdb__browse__save_univ_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
mdb__browse__save_univ_4_p_0(
  MR_Integer Indent_5,
  MR_Word Univ_6);

static MR_Box MR_CALL 
mdb__browse__save_args_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
mdb__browse__save_args_4_p_0(
  MR_Integer HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mdb__browse__write_indent_3_p_0(
  MR_Integer Indent_4);

static MR_bool MR_CALL 
mdb__browse__dynamic_cast_to_list_2_p_0(
  MR_Word TypeInfo_for_T1_14,
  MR_Word * TypeInfo_for_T_13,
  MR_Box X_3,
  MR_Word * L_4);

static void MR_CALL 
mdb__browse__browse_main_loop_5_p_0(
  MR_Word Debugger_6,
  MR_Word STATE_VARIABLE_Info_0_11,
  MR_Word * STATE_VARIABLE_Info_12);

static void MR_CALL 
mdb__browse__run_command_7_p_0(
  MR_Word Debugger_8,
  MR_Word Command_9,
  MR_Word * Quit_10,
  MR_Word STATE_VARIABLE_Info_0_29,
  MR_Word * STATE_VARIABLE_Info_30);

static void MR_CALL 
mdb__browse__write_term_mode_debugger_5_p_0(
  MR_Word Debugger_6,
  MR_Word MaybeModeFunc_7,
  MR_Word Dirs_8);

static void MR_CALL 
mdb__browse__change_dir_3_p_0(
  MR_Word PwdDirs_4,
  MR_Word Path_5,
  MR_Word * RootRelDirs_6);

static void MR_CALL 
mdb__browse__set_path_3_p_0(
  MR_Word NewPath_4,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9);

static void MR_CALL 
mdb__browse__report_deref_error_5_p_0(
  MR_Word Debugger_6,
  MR_Word OKPath_7,
  MR_Word ErrorDir_8);

static void MR_CALL 
mdb__browse__help_3_p_0(
  MR_Word Debugger_4);

static void MR_CALL 
mdb__browse__do_print_memory_addr_5_p_0(
  MR_Word Debugger_6,
  MR_Word Info_7,
  MR_Word MaybePath_8);

static void MR_CALL 
mdb__browse__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_118_97_108_117_101_95_114_101_112_114_101_115_101_110_116_97_116_105_111_110_95_95_91_49_93_95_48_2_p_0(
  MR_Box HeadVar__1_1,
  MR_Integer * HeadVar__2_2);

static void MR_CALL 
mdb__browse__do_portray_7_p_0(
  MR_Word Debugger_8,
  MR_Word CallerType_9,
  MR_Word MaybeMaybeOptionTable_10,
  MR_Word Info_11,
  MR_Word MaybePath_12);

static void MR_CALL 
mdb__browse__portray_maybe_path_7_p_0(
  MR_Word Debugger_8,
  MR_Word Caller_9,
  MR_Word MaybeFormat_10,
  MR_Word Info_11,
  MR_Word MaybePath_12);

static void MR_CALL 
mdb__browse__simplify_rev_dirs_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer STATE_VARIABLE_ToDelete_0_2,
  MR_Word STATE_VARIABLE_DownDirs_0_3,
  MR_Word * STATE_VARIABLE_DownDirs_4);

static MR_bool MR_CALL 
mdb__browse__interpret_format_options_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
mdb__browse__interpret_format_options_2_p_0(
  MR_Word OptionTable_3,
  MR_Word * MaybeMaybeFormat_4);

static void MR_CALL 
mdb__browse__portray_6_p_0(
  MR_Word Debugger_7,
  MR_Word Caller_8,
  MR_Word MaybeFormat_9,
  MR_Word Info_10);

static MR_String MR_CALL 
mdb__browse__down_dirs_to_string_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
mdb__browse__deref_subterm_3_p_0(
  MR_Word BrowserTerm_4,
  MR_Word Path_5,
  MR_Word * Result_6);

static void MR_CALL 
mdb__browse__deref_subterm_2_4_p_0(
  MR_Word Univ_5,
  MR_Word Path_6,
  MR_Word RevPath0_7,
  MR_Word * Result_8);

static void MR_CALL 
mdb__browse__portray_pretty_5_p_0(
  MR_Word Debugger_6,
  MR_Word BrowserTerm_7,
  MR_Word Params_8);

static MR_Word MR_CALL 
mdb__browse__qualified_functor_to_doc_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
mdb__browse__portray_verbose_5_p_0(
  MR_Word Debugger_6,
  MR_Word BrowserTerm_7,
  MR_Word Params_8);

static void MR_CALL 
mdb__browse__browser_term_to_string_verbose_7_p_0(
  MR_Word BrowserDb_8,
  MR_Word BrowserTerm_9,
  MR_Integer MaxSize_10,
  MR_Integer MaxDepth_11,
  MR_Integer X_12,
  MR_Integer Y_13,
  MR_String * Str_14);

static void MR_CALL 
mdb__browse__unlines_2_p_0(
  MR_Word HeadVar__1_1,
  MR_String * HeadVar__2_2);

static void MR_CALL 
mdb__browse__args_to_string_verbose_list_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Integer HeadVar__4_4,
  MR_Integer CurSize_5,
  MR_Integer * NewSize_6,
  MR_Integer HeadVar__7_7,
  MR_Integer HeadVar__8_8,
  MR_Word * HeadVar__9_9);

static void MR_CALL 
mdb__browse__browser_term_to_string_verbose_2_8_p_0(
  MR_Word BrowserDb_9,
  MR_Word BrowserTerm_10,
  MR_Integer MaxSize_11,
  MR_Integer CurSize_12,
  MR_Integer * NewSize_13,
  MR_Integer MaxDepth_14,
  MR_Integer CurDepth_15,
  MR_Word * Frame_16);

static void MR_CALL 
mdb__browse__portray_flat_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mdb__browse__portray_flat_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mdb__browse__portray_flat_5_p_0(
  MR_Word Debugger_6,
  MR_Word BrowserTerm_7,
  MR_Word Params_8);

static void MR_CALL 
mdb__browse__browser_term_to_string_5_p_0(
  MR_Word BrowserDb_6,
  MR_Word BrowserTerm_7,
  MR_Integer MaxSize_8,
  MR_Integer MaxDepth_9,
  MR_String * Str_10);

static void MR_CALL 
mdb__browse__browser_term_to_string_2_8_p_0(
  MR_Word BrowserDb_9,
  MR_Word BrowserTerm_10,
  MR_Integer MaxSize_11,
  MR_Integer CurSize_12,
  MR_Integer * NewSize_13,
  MR_Integer MaxDepth_14,
  MR_Integer CurDepth_15,
  MR_String * Str_16);

static void MR_CALL 
mdb__browse__args_to_string_list_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Integer CurSize_4,
  MR_Integer * NewSize_5,
  MR_Integer HeadVar__6_6,
  MR_Integer HeadVar__7_7,
  MR_Word * Strs_8);

static void MR_CALL 
mdb__browse__list_tail_to_string_list_8_p_0(
  MR_Word BrowserDb_9,
  MR_Word TailUniv_10,
  MR_Integer MaxSize_11,
  MR_Integer Size0_12,
  MR_Integer * Size_13,
  MR_Integer MaxDepth_14,
  MR_Integer Depth0_15,
  MR_Word * TailStrs_16);

static void MR_CALL 
mdb__browse__browser_term_to_string_3_10_p_0(
  MR_Word BrowserDb_11,
  MR_String Functor_12,
  MR_Word Args_13,
  MR_Word MaybeReturn_14,
  MR_Integer MaxSize_15,
  MR_Integer Size0_16,
  MR_Integer * Size_17,
  MR_Integer MaxDepth_18,
  MR_Integer Depth0_19,
  MR_String * Str_20);

static MR_String MR_CALL 
mdb__browse__comma_string_list_1_f_0(
  MR_Word Args_3);

static void MR_CALL 
mdb__browse__browser_term_size_left_from_max_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mdb__browse__term_size_left_from_max_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
mdb__browse____Unify____deref_result_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mdb__browse____Compare____deref_result_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mdb__browse____Unify____unbound_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__browse____Compare____unbound_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__browse____Unify____xml_function_wrapper_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__browse____Compare____xml_function_wrapper_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__browse____Unify____xml_predicate_wrapper_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__browse____Compare____xml_predicate_wrapper_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mdb__browse_scalar_common_1[7][3];

static /* final */ const MR_Box mdb__browse_scalar_common_2[5][4];

static /* final */ const MR_Box mdb__browse_scalar_common_3[8][5];

static /* final */ const MR_Box mdb__browse_scalar_common_4[48][2];

static /* final */ const MR_Box mdb__browse_scalar_common_5[10][1];

static /* final */ const MR_Box mdb__browse_scalar_common_6[2][6];

static /* final */ const MR_Integer mdb__browse_scalar_common_7[1][3];

static /* final */ const MR_Box mdb__browse_scalar_common_8[1][9];

static /* final */ const MR_Box mdb__browse_scalar_common_9[1][7];

static /* final */ const MR_Integer mdb__browse_scalar_common_12[1][2];


/* sealed */ struct mdb__browse__vector_common_type_10_0_s {
  const MR_String mdb__browse__vector_common_type_10_0__vct_10_f_0;
};

static /* final */ const struct mdb__browse__vector_common_type_10_0_s mdb__browse_vector_common_10[20];

/* sealed */ struct mdb__browse__vector_common_type_11_0_s {
  const MR_Word mdb__browse__vector_common_type_11_0__vct_11_f_0;
};

static /* final */ const struct mdb__browse__vector_common_type_11_0_s mdb__browse_vector_common_11[4];



static /* final */ const MR_Box mdb__browse_scalar_common_1[7][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__string__builder__handle__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdb__parse__mdb__parse__type_ctor_info_format_option_0)),
    ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_data_0))
  },
  /* row 2 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__mdb__browser_info__debugger__arity0__io__state__arity0__)),
    ((MR_Box) (&mdb__browser_info__mdb__browser_info__type_ctor_info_debugger_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mdb__browse_scalar_common_6[0])),
    ((MR_Box) (mdb__browse__term_size_left_from_max_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mdb__browse_scalar_common_6[0])),
    ((MR_Box) (mdb__browse__browser_term_size_left_from_max_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mdb__browse_scalar_common_3[6])),
    ((MR_Box) (mdb__browse__interpret_format_options_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mdb__browse_scalar_common_2[5][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__string__builder__handle__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&mdb__browse_scalar_common_1[0])),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mdb__browse_scalar_common_1[2])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__mdb__browser_info__debugger__arity0__io__state__arity0__)),
    ((MR_Box) (&mdb__browse_scalar_common_1[3])),
    ((MR_Box) (&mdb__browser_info__mdb__browser_info__type_ctor_info_debugger_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mdb__browse_scalar_common_9[0])),
    ((MR_Box) (mdb__browse__portray_flat_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&mdb__browse_scalar_common_3[2]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mdb__browse_scalar_common_9[0])),
    ((MR_Box) (mdb__browse__browser_term_to_html_flat_string_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&mdb__browse_scalar_common_3[0]))
  },
};

static /* final */ const MR_Box mdb__browse_scalar_common_3[8][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__string__builder__handle__arity0__string__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&mdb__browse_scalar_common_2[0])),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__string__builder__handle__arity0__character__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&mdb__browse_scalar_common_2[0])),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mdb__browse_scalar_common_2[1])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mdb__browse_scalar_common_2[1])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 4 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__mdb__browser_info__debugger__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mdb__browse_scalar_common_2[2])),
    ((MR_Box) (&mdb__browser_info__mdb__browser_info__type_ctor_info_debugger_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mdb__browse_scalar_common_8[0])),
    ((MR_Box) (mdb__browse__portray_flat_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdb__browse_scalar_common_3[2])),
    ((MR_Box) (&mdb__browse_scalar_common_3[3]))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdb__browse__pair__pti_pair_2__plain_mdb__parse__type_ctor_info_format_option_0__plain_getopt__type_ctor_info_option_data_0)),
    ((MR_Box) (&mdb__parse__mdb__parse__type_ctor_info_format_option_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mdb__browse_scalar_common_8[0])),
    ((MR_Box) (mdb__browse__browser_term_to_html_flat_string_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdb__browse_scalar_common_3[0])),
    ((MR_Box) (&mdb__browse_scalar_common_3[1]))
  },
};

static /* final */ const MR_Box mdb__browse_scalar_common_4[48][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdb__browser_info__mdb__browser_info__type_ctor_info_down_dir_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__univ__univ__type_ctor_info_univ_0))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "-- Paths can be Unix-style or SICStus-style: /2/3/1 or ^2^3^1\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[2])))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[3])))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "\th              -- help\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[4])))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "\t\?              -- help\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[5])))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "\t^ [path]       -- cd to the specified subterm (default is root)\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[6])))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "\t< n            -- set depth\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[7])))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "\tp              -- print\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[8])))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) "SICStus Prolog style commands are:\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[9])))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) "\thelp           -- show this help message\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[10])))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_String) "\tquit           -- quit browser\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[11])))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_String) "\tparams         -- show format and parameter values\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[12])))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_String) "\t               -- set the named parameter value\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[13])))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_String) "\tnum_io_actions <n>\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[14])))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_String) "\tlines [format_param_options] <n>\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[15])))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_String) "\twidth [format_param_options] <n>\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[16])))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_String) "\tsize  [format_param_options] <n>\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[17])))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_String) "\tdepth [format_param_options] <n>\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[18])))
  },
  /* row 20 */
  {
    ((MR_Box) ((MR_String) "\t               -- set the format\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[19])))
  },
  /* row 21 */
  {
    ((MR_Box) ((MR_String) "\tformat [format_options] <flat|raw-pretty|verbose|pretty>\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[20])))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_String) "\t                  (default is current)\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[21])))
  },
  /* row 23 */
  {
    ((MR_Box) ((MR_String) "\tmode [path]    -- show the mode of the specified subterm\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[22])))
  },
  /* row 24 */
  {
    ((MR_Box) ((MR_String) "\t                  that it makes the current goal invalid\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[23])))
  },
  /* row 25 */
  {
    ((MR_Box) ((MR_String) "\t                  for tracking, asserting for the declarative debugger\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[24])))
  },
  /* row 26 */
  {
    ((MR_Box) ((MR_String) "\t               -- mark the specified subterm (default is current)\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[25])))
  },
  /* row 27 */
  {
    ((MR_Box) ((MR_String) "\t[m|mark] [path]\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[26])))
  },
  /* row 28 */
  {
    ((MR_Box) ((MR_String) "\t                  for tracking, and quit\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[27])))
  },
  /* row 29 */
  {
    ((MR_Box) ((MR_String) "\t               -- mark the specified subterm (default is current)\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[28])))
  },
  /* row 30 */
  {
    ((MR_Box) ((MR_String) "\t[t|track] [path]\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[29])))
  },
  /* row 31 */
  {
    ((MR_Box) ((MR_String) "\tpwd            -- print the path to the current subterm\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[30])))
  },
  /* row 32 */
  {
    ((MR_Box) ((MR_String) "\tcdr n path     -- repeatedly apply the cd command n times\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[31])))
  },
  /* row 33 */
  {
    ((MR_Box) ((MR_String) "\tcd [path]      -- cd to the specified subterm (default is root)\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[32])))
  },
  /* row 34 */
  {
    ((MR_Box) ((MR_String) "\t               -- print the raw memory address of the specified subterm\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[33])))
  },
  /* row 35 */
  {
    ((MR_Box) ((MR_String) "\t[addr|memory_addr] [path]\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[34])))
  },
  /* row 36 */
  {
    ((MR_Box) ((MR_String) "\t               -- print the specified subterm using the \140browse\' params\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[35])))
  },
  /* row 37 */
  {
    ((MR_Box) ((MR_String) "\t[print|p|ls] [format_options] [path]\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[36])))
  },
  /* row 38 */
  {
    ((MR_Box) ((MR_String) "Commands are:\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[37])))
  },
  /* row 39 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__type_desc__type_desc__type_ctor_info_type_desc_0))
  },
  /* row 40 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_5[0]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[40])))
  },
  /* row 42 */
  {
    ((MR_Box) ((MR_String) "]")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 43 */
  {
    ((MR_Box) ((MR_String) ")")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 44 */
  {
    ((MR_Box) ((MR_String) "+1")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 45 */
  {
    ((MR_Box) ((MR_String) ", ...")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 46 */
  {
    ((MR_Box) ((MR_String) "-")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_5[4]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box mdb__browse_scalar_common_5[10][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) ", "))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) ""))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "."))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "("))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) ")"))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) " = "))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "error: inconsistent format options"))
  },
  /* row 8 */
  {
    (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << (MR_Integer) 4)) | (((((MR_Unsigned) ((MR_Integer) 0) << (MR_Integer) 3)) | (((((MR_Unsigned) ((MR_Integer) 0) << (MR_Integer) 2)) | (((((MR_Unsigned) ((MR_Integer) 0) << (MR_Integer) 1)) | (MR_Unsigned) ((MR_Integer) 0)))))))))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box mdb__browse_scalar_common_6[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__univ__univ__type_ctor_info_univ_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (&mdb__browse_scalar_common_12[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__univ__univ__type_ctor_info_univ_0))
  },
};

static /* final */ const MR_Integer mdb__browse_scalar_common_7[1][3] = {
  /* row 0 */
  {
    (MR_Integer) 2,
    (MR_Integer) 67663,
    (MR_Integer) 67727
  },
};

static /* final */ const MR_Box mdb__browse_scalar_common_8[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&mdb__browse_scalar_common_7[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__univ__univ__type_ctor_info_univ_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2))
  },
};

static /* final */ const MR_Box mdb__browse_scalar_common_9[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&mdb__browse_scalar_common_7[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2))
  },
};

static /* final */ const MR_Integer mdb__browse_scalar_common_12[1][2] = {
  /* row 0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};


static /* final */ const struct mdb__browse__vector_common_type_10_0_s mdb__browse_vector_common_10[20] = {
  /* row 0 */   {     (MR_String) "!." },
  /* row 1 */   {     (MR_String) "." },
  /* row 2 */   {     (MR_String) ".." },
  /* row 3 */   {     (MR_String) "=.." },
  /* row 4 */   {     (MR_String) "r" },
  /* row 5 */   {     (MR_String) "res" },
  /* row 6 */   {     (MR_String) "result" },
  /* row 7 */   {     (MR_String) "ret" },
  /* row 8 */   {     (MR_String) "return" },
  /* row 9 */   {     (MR_String) "rv" },
  /* row 10 */   {     (MR_String) "Input" },
  /* row 11 */   {     (MR_String) "Output" },
  /* row 12 */   {     (MR_String) "Unbound" },
  /* row 13 */   {     (MR_String) "Not Applicable" },
  /* row 14 */   {     (MR_String) "r" },
  /* row 15 */   {     (MR_String) "res" },
  /* row 16 */   {     (MR_String) "result" },
  /* row 17 */   {     (MR_String) "ret" },
  /* row 18 */   {     (MR_String) "return" },
  /* row 19 */   {     (MR_String) "rv" },
};

static /* final */ const struct mdb__browse__vector_common_type_11_0_s mdb__browse_vector_common_11[4] = {
  /* row 0 */   {     (MR_Integer) 0 },
  /* row 1 */   {     (MR_Integer) 1 },
  /* row 2 */   {     (MR_Integer) 2 },
  /* row 3 */   {     (MR_Integer) 3 },
};


#include "dir.mh"
#include "io.mh"
#include "mdb.mh"
#include "string.mh"
#include "time.mh"
#include "mdb.browse.mh"
#include "mdbcomp.rtti_access.mh"

#line 218 "browse.m"
void 
ML_BROWSE_browse_browser_term(
  MR_Word Term_9,
  MR_Word InputStream_10,
  MR_Word OutputStream_11,
  MR_Word * MaybeTrack_12,
  MR_Word STATE_VARIABLE_State_0_15,
  MR_Word * STATE_VARIABLE_State_16)
#line 218 "browse.m"
{
#line 218 "browse.m"
	mdb__browse__browse_browser_term_no_modes_8_p_0((MR_Word) Term_9, (MR_Word) InputStream_10, (MR_Word) OutputStream_11, (MR_Word *) MaybeTrack_12, (MR_Word) STATE_VARIABLE_State_0_15, (MR_Word *) STATE_VARIABLE_State_16);
}

#line 221 "browse.m"
void 
ML_BROWSE_browse_browser_term_format(
  MR_Word Term_9,
  MR_Word InputStream_10,
  MR_Word OutputStream_11,
  MR_Word Format_12,
  MR_Word STATE_VARIABLE_State_0_16,
  MR_Word * STATE_VARIABLE_State_17)
#line 221 "browse.m"
{
#line 221 "browse.m"
	mdb__browse__browse_browser_term_format_no_modes_8_p_0((MR_Word) Term_9, (MR_Word) InputStream_10, (MR_Word) OutputStream_11, (MR_Word) Format_12, (MR_Word) STATE_VARIABLE_State_0_16, (MR_Word *) STATE_VARIABLE_State_17);
}

#line 224 "browse.m"
void 
ML_BROWSE_browse_external(
  MR_Word TypeInfo_for_T_25,
  MR_Word Term_8,
  MR_Word InputStream_9,
  MR_Word OutputStream_10,
  MR_Word STATE_VARIABLE_State_0_14,
  MR_Word * STATE_VARIABLE_State_15)
#line 224 "browse.m"
{
#line 224 "browse.m"
	mdb__browse__browse_external_no_modes_7_p_0((MR_Word) TypeInfo_for_T_25, (MR_Box) Term_8, (MR_Word) InputStream_9, (MR_Word) OutputStream_10, (MR_Word) STATE_VARIABLE_State_0_14, (MR_Word *) STATE_VARIABLE_State_15);
}

#line 227 "browse.m"
void 
ML_BROWSE_print_browser_term(
  MR_Word Term_7,
  MR_Word OutputStream_8,
  MR_Word Caller_9,
  MR_Word State_10)
#line 227 "browse.m"
{
#line 227 "browse.m"
	mdb__browse__print_browser_term_6_p_0((MR_Word) Term_7, (MR_Word) OutputStream_8, (MR_Word) Caller_9, (MR_Word) State_10);
}

#line 229 "browse.m"
void 
ML_BROWSE_print_browser_term_format(
  MR_Word Term_8,
  MR_Word OutputStream_9,
  MR_Word Caller_10,
  MR_Word Format_11,
  MR_Word State_12)
#line 229 "browse.m"
{
#line 229 "browse.m"
	mdb__browse__print_browser_term_format_7_p_0((MR_Word) Term_8, (MR_Word) OutputStream_9, (MR_Word) Caller_10, (MR_Word) Format_11, (MR_Word) State_12);
}

#line 233 "browse.m"
void 
ML_BROWSE_save_term_to_file(
  MR_String FileName_7,
  MR_String _Format_8,
  MR_Word BrowserTerm_9,
  MR_Word OutStream_10)
#line 233 "browse.m"
{
#line 233 "browse.m"
	mdb__browse__save_term_to_file_6_p_0((MR_String) FileName_7, (MR_String) _Format_8, (MR_Word) BrowserTerm_9, (MR_Word) OutStream_10);
}

#line 236 "browse.m"
void 
ML_BROWSE_save_term_to_file_xml(
  MR_String FileName_6,
  MR_Word BrowserTerm_7,
  MR_Word OutStream_8)
#line 236 "browse.m"
{
#line 236 "browse.m"
	mdb__browse__save_term_to_file_xml_5_p_0((MR_String) FileName_6, (MR_Word) BrowserTerm_7, (MR_Word) OutStream_8);
}

#line 239 "browse.m"
void 
ML_BROWSE_browse_term_xml(
  MR_Word Term_7,
  MR_Word OutStream_8,
  MR_Word ErrStream_9,
  MR_Word State_10)
#line 239 "browse.m"
{
#line 239 "browse.m"
	mdb__browse__save_and_browse_browser_term_xml_6_p_0((MR_Word) Term_7, (MR_Word) OutStream_8, (MR_Word) ErrStream_9, (MR_Word) State_10);
}

#line 243 "browse.m"
void 
ML_BROWSE_browse_term_web(
  MR_Word Term_7,
  MR_Word OutStream_8,
  MR_Word ErrStream_9,
  MR_Word State_10)
#line 243 "browse.m"
{
#line 243 "browse.m"
	mdb__browse__save_and_browse_browser_term_web_6_p_0((MR_Word) Term_7, (MR_Word) OutStream_8, (MR_Word) ErrStream_9, (MR_Word) State_10);
}


static const MR_FA_PseudoTypeInfo_Struct2 mdb__browse__pair__pti_pair_2__plain_mdb__parse__type_ctor_info_format_option_0__plain_getopt__type_ctor_info_option_data_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mdb__parse__mdb__parse__type_ctor_info_format_option_0),
    (MR_PseudoTypeInfo) (&mercury__getopt__getopt__type_ctor_info_option_data_0)
  }
};

static const MR_PseudoTypeInfo mdb__browse__mdb__browse__field_types_deref_result_1_0[1] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1)
};

static const MR_DuFunctorDesc mdb__browse__mdb__browse__du_functor_desc_deref_result_1_0 = {
  (MR_String) "deref_result",
  (MR_Integer) 1,
  (MR_Integer) 1,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__browse__mdb__browse__field_types_deref_result_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 mdb__browse__list__ti_list_1mdb__browser_info__type_ctor_info_down_dir_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mdb__browser_info__mdb__browser_info__type_ctor_info_down_dir_0)
  }
};

static const MR_PseudoTypeInfo mdb__browse__mdb__browse__field_types_deref_result_1_1[2] = {
  (MR_PseudoTypeInfo) (&mdb__browse__list__ti_list_1mdb__browser_info__type_ctor_info_down_dir_0),
  (MR_PseudoTypeInfo) (&mdb__browser_info__mdb__browser_info__type_ctor_info_down_dir_0)
};

static const MR_DuFunctorDesc mdb__browse__mdb__browse__du_functor_desc_deref_result_1_1 = {
  (MR_String) "deref_error",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdb__browse__mdb__browse__field_types_deref_result_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdb__browse__mdb__browse__du_stag_ordered_deref_result_1_0[1] = {
  &mdb__browse__mdb__browse__du_functor_desc_deref_result_1_0
};

static const MR_DuFunctorDescPtr mdb__browse__mdb__browse__du_stag_ordered_deref_result_1_1[1] = {
  &mdb__browse__mdb__browse__du_functor_desc_deref_result_1_1
};

static const MR_DuPtagLayout mdb__browse__mdb__browse__du_ptag_ordered_deref_result_1[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdb__browse__mdb__browse__du_stag_ordered_deref_result_1_0,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdb__browse__mdb__browse__du_stag_ordered_deref_result_1_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr mdb__browse__mdb__browse__du_name_ordered_deref_result_1[2] = {
  &mdb__browse__mdb__browse__du_functor_desc_deref_result_1_1,
  &mdb__browse__mdb__browse__du_functor_desc_deref_result_1_0
};

static const MR_Integer mdb__browse__mdb__browse__functor_number_map_deref_result_1[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdb__browse__mdb__browse__type_ctor_info_deref_result_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__browse____Unify____deref_result_1_0_10001)),
  ((MR_Box) (mdb__browse____Compare____deref_result_1_0_10001)),
  (MR_String) "mdb.browse",
  (MR_String) "deref_result",
  {     mdb__browse__mdb__browse__du_name_ordered_deref_result_1 },
  {     mdb__browse__mdb__browse__du_ptag_ordered_deref_result_1 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdb__browse__mdb__browse__functor_number_map_deref_result_1
};

static const MR_EnumFunctorDesc mdb__browse__mdb__browse__enum_functor_desc_unbound_0_0 = {
  (MR_String) "_",
  (MR_Integer) 0
};

static const MR_EnumFunctorDescPtr mdb__browse__mdb__browse__enum_value_ordered_unbound_0[1] = {
  &mdb__browse__mdb__browse__enum_functor_desc_unbound_0_0
};

static const MR_EnumFunctorDescPtr mdb__browse__mdb__browse__enum_name_ordered_unbound_0[1] = {
  &mdb__browse__mdb__browse__enum_functor_desc_unbound_0_0
};

static const MR_Integer mdb__browse__mdb__browse__functor_number_map_unbound_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdb__browse__mdb__browse__type_ctor_info_unbound_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (mdb__browse____Unify____unbound_0_0_10001)),
  ((MR_Box) (mdb__browse____Compare____unbound_0_0_10001)),
  (MR_String) "mdb.browse",
  (MR_String) "unbound",
  {     mdb__browse__mdb__browse__enum_name_ordered_unbound_0 },
  {     mdb__browse__mdb__browse__enum_value_ordered_unbound_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__browse__mdb__browse__functor_number_map_unbound_0
};

static const MR_FA_TypeInfo_Struct1 mdb__browse__list__ti_list_1univ__type_ctor_info_univ_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mercury__univ__univ__type_ctor_info_univ_0)
  }
};

static const MR_PseudoTypeInfo mdb__browse__mdb__browse__field_types_xml_function_wrapper_0_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mdb__browse__list__ti_list_1univ__type_ctor_info_univ_0),
  (MR_PseudoTypeInfo) (&mercury__univ__univ__type_ctor_info_univ_0)
};

static const MR_ConstString mdb__browse__mdb__browse__field_names_xml_function_wrapper_0_0[3] = {
  (MR_String) "function_name",
  (MR_String) "function_arguments",
  (MR_String) "return_value"
};

static const MR_DuFunctorDesc mdb__browse__mdb__browse__du_functor_desc_xml_function_wrapper_0_0 = {
  (MR_String) "function",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__browse__mdb__browse__field_types_xml_function_wrapper_0_0,
  mdb__browse__mdb__browse__field_names_xml_function_wrapper_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdb__browse__mdb__browse__du_stag_ordered_xml_function_wrapper_0_0[1] = {
  &mdb__browse__mdb__browse__du_functor_desc_xml_function_wrapper_0_0
};

static const MR_DuPtagLayout mdb__browse__mdb__browse__du_ptag_ordered_xml_function_wrapper_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdb__browse__mdb__browse__du_stag_ordered_xml_function_wrapper_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr mdb__browse__mdb__browse__du_name_ordered_xml_function_wrapper_0[1] = {
  &mdb__browse__mdb__browse__du_functor_desc_xml_function_wrapper_0_0
};

static const MR_Integer mdb__browse__mdb__browse__functor_number_map_xml_function_wrapper_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdb__browse__mdb__browse__type_ctor_info_xml_function_wrapper_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__browse____Unify____xml_function_wrapper_0_0_10001)),
  ((MR_Box) (mdb__browse____Compare____xml_function_wrapper_0_0_10001)),
  (MR_String) "mdb.browse",
  (MR_String) "xml_function_wrapper",
  {     mdb__browse__mdb__browse__du_name_ordered_xml_function_wrapper_0 },
  {     mdb__browse__mdb__browse__du_ptag_ordered_xml_function_wrapper_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__browse__mdb__browse__functor_number_map_xml_function_wrapper_0
};

static const MR_PseudoTypeInfo mdb__browse__mdb__browse__field_types_xml_predicate_wrapper_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mdb__browse__list__ti_list_1univ__type_ctor_info_univ_0)
};

static const MR_ConstString mdb__browse__mdb__browse__field_names_xml_predicate_wrapper_0_0[2] = {
  (MR_String) "predicate_name",
  (MR_String) "predicate_arguments"
};

static const MR_DuFunctorDesc mdb__browse__mdb__browse__du_functor_desc_xml_predicate_wrapper_0_0 = {
  (MR_String) "predicate",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__browse__mdb__browse__field_types_xml_predicate_wrapper_0_0,
  mdb__browse__mdb__browse__field_names_xml_predicate_wrapper_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdb__browse__mdb__browse__du_stag_ordered_xml_predicate_wrapper_0_0[1] = {
  &mdb__browse__mdb__browse__du_functor_desc_xml_predicate_wrapper_0_0
};

static const MR_DuPtagLayout mdb__browse__mdb__browse__du_ptag_ordered_xml_predicate_wrapper_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdb__browse__mdb__browse__du_stag_ordered_xml_predicate_wrapper_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr mdb__browse__mdb__browse__du_name_ordered_xml_predicate_wrapper_0[1] = {
  &mdb__browse__mdb__browse__du_functor_desc_xml_predicate_wrapper_0_0
};

static const MR_Integer mdb__browse__mdb__browse__functor_number_map_xml_predicate_wrapper_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdb__browse__mdb__browse__type_ctor_info_xml_predicate_wrapper_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__browse____Unify____xml_predicate_wrapper_0_0_10001)),
  ((MR_Box) (mdb__browse____Compare____xml_predicate_wrapper_0_0_10001)),
  (MR_String) "mdb.browse",
  (MR_String) "xml_predicate_wrapper",
  {     mdb__browse__mdb__browse__du_name_ordered_xml_predicate_wrapper_0 },
  {     mdb__browse__mdb__browse__du_ptag_ordered_xml_predicate_wrapper_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__browse__mdb__browse__functor_number_map_xml_predicate_wrapper_0
};

static void MR_CALL 
mdb__browse____Compare____xml_predicate_wrapper_0_0(
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
      MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Var_8;

      mercury__private_builtin__builtin_compare_string_3_p_0(&Var_8, ArgX1_4, ArgY1_5);
      succeeded = (Var_8 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_8;
      else
      {
        mercury__builtin__compare_3_p_0((MR_Word) (&mdb__browse_scalar_common_4[1]), HeadVar__1_1, ((MR_Box) (ArgX2_6)), ((MR_Box) (ArgY2_7)));
      }
    }
  }
}

static MR_bool MR_CALL 
mdb__browse____Unify____xml_predicate_wrapper_0_0(
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
      MR_Word TypeInfo_9_9;
      MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
      if (succeeded)
      {
        TypeInfo_9_9 = (MR_Word) (&mdb__browse_scalar_common_4[1]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
mdb__browse____Compare____xml_function_wrapper_0_0(
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
      MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word Var_10;

      mercury__private_builtin__builtin_compare_string_3_p_0(&Var_10, ArgX1_4, ArgY1_5);
      succeeded = (Var_10 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_10;
      else
      {
        MR_Word Var_11;

        mercury__builtin__compare_3_p_0((MR_Word) (&mdb__browse_scalar_common_4[1]), &Var_11, ((MR_Box) (ArgX2_6)), ((MR_Box) (ArgY2_7)));
        succeeded = (Var_11 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_11;
        else
          mercury__univ____Compare____univ_0_0(HeadVar__1_1, ArgX3_8, ArgY3_9);
      }
    }
  }
}

static MR_bool MR_CALL 
mdb__browse____Unify____xml_function_wrapper_0_0(
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
      MR_Word TypeInfo_11_11;
      MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
      if (succeeded)
      {
        TypeInfo_11_11 = (MR_Word) (&mdb__browse_scalar_common_4[1]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
          succeeded = mercury__univ____Unify____univ_0_0(ArgX3_7, ArgY3_8);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
mdb__browse____Compare____unbound_0_0(
  MR_Word * HeadVar__1_1)
{
  mdb__browse__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_100_98_95_95_98_114_111_119_115_101_95_95_117_110_98_111_117_110_100_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(HeadVar__1_1);
}

void MR_CALL 
mdb__browse__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_100_98_95_95_98_114_111_119_115_101_95_95_117_110_98_111_117_110_100_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_Integer) 0;
}

MR_bool MR_CALL 
mdb__browse____Unify____unbound_0_0(void)
{
  {
    MR_bool succeeded;

    succeeded = mdb__browse__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_109_100_98_95_95_98_114_111_119_115_101_95_95_117_110_98_111_117_110_100_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0();
    return succeeded;
  }
}

MR_bool MR_CALL 
mdb__browse__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_109_100_98_95_95_98_114_111_119_115_101_95_95_117_110_98_111_117_110_100_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0(void)
{
  {
    return MR_TRUE;
  }
}

static void MR_CALL 
mdb__browse____Compare____deref_result_1_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_17 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_18 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_17 == CastY_18);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    {
      MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
      {
        MR_Word ArgY1_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word ArgY2_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word Var_16;

        mercury__builtin__compare_3_p_0((MR_Word) (&mdb__browse_scalar_common_4[0]), &Var_16, ((MR_Box) (Var_23)), ((MR_Box) (ArgY1_13)));
        succeeded = (Var_16 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_16;
        else
          mdb__browser_info____Compare____down_dir_0_0(HeadVar__1_1, Var_22, ArgY2_15);
      }
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
    else
    {
      MR_Box Var_24 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_Box ArgY1_5 = (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0));

        mercury__builtin__compare_3_p_0(TypeInfo_for_T_19, HeadVar__1_1, Var_24, ArgY1_5);
      }
    }
  }
}

static MR_bool MR_CALL 
mdb__browse____Unify____deref_result_1_0(
  MR_Word TypeInfo_for_T_11,
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
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
    {
      MR_Word TypeInfo_12_12;
      MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_6;
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_8;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
      if (succeeded)
      {
        ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        TypeInfo_12_12 = (MR_Word) (&mdb__browse_scalar_common_4[0]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
        if (succeeded)
          succeeded = mdb__browser_info____Unify____down_dir_0_0(ArgX2_7, ArgY2_8);
      }
    }
    else
    {
      MR_Box ArgX1_3 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0));
      MR_Box ArgY1_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
      if (succeeded)
      {
        ArgY1_4 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_11, ArgX1_3, ArgY1_4);
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
mdb__browse__write_univ_or_unbound_4_p_0(
  MR_Word TypeClassInfo_for_writer_16,
  MR_Word TypeClassInfo_for_writer_17,
  MR_Box Stream_5,
  MR_Word Univ_6,
  MR_Box STATE_VARIABLE_IO_0_9,
  MR_Box * STATE_VARIABLE_IO_10)
{
  {
    MR_bool succeeded;
    MR_Box conv0_Var_11;

    succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) (&mdb__browse__mdb__browse__type_ctor_info_unbound_0), Univ_6, &conv0_Var_11);
    if (succeeded)
      succeeded = MR_TRUE;
    if (succeeded)
    {
      mercury__stream__string_writer__put_char_4_p_0(TypeClassInfo_for_writer_16, Stream_5, (MR_Char) 95, STATE_VARIABLE_IO_0_9, STATE_VARIABLE_IO_10);
    }
    else
    {
      mercury__stream__string_writer__write_univ_5_p_2(TypeClassInfo_for_writer_16, TypeClassInfo_for_writer_17, Stream_5, (MR_Integer) 2, Univ_6, STATE_VARIABLE_IO_0_9, STATE_VARIABLE_IO_10);
    }
  }
}

static void MR_CALL 
mdb__browse__put_comma_space_3_p_0(
  MR_Word TypeClassInfo_for_writer_10,
  MR_Box Stream_4,
  MR_Box STATE_VARIABLE_State_0_6,
  MR_Box * STATE_VARIABLE_State_7)
{
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_10, (MR_Integer) 0)), (MR_Integer) 5))));

    func_0(((MR_Box) (TypeClassInfo_for_writer_10)), Stream_4, ((MR_Box) ((MR_String) ", ")), STATE_VARIABLE_State_0_6, STATE_VARIABLE_State_7);
  }
}

static MR_bool MR_CALL 
mdb__browse__bool_format_option_is_true_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Format_3)
{
  {
    MR_bool succeeded;
    MR_Word Var_4;
    MR_Word Var_5;

    *Format_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    Var_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_4)) == (MR_Integer) 1);
    if (succeeded)
    {
      Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_4, (MR_Integer) 0))));
      succeeded = (Var_5 == (MR_Integer) 1);
    }
    return succeeded;
  }
}

static void MR_CALL 
mdb__browse__get_value_representation_2_p_0(
  MR_Word TypeInfo_for_T_6,
  MR_Box HeadVar__1_1,
  MR_Integer * HeadVar__2_2)
{
  mdb__browse__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_118_97_108_117_101_95_114_101_112_114_101_115_101_110_116_97_116_105_111_110_95_95_91_49_93_95_48_2_p_0(HeadVar__1_1, HeadVar__2_2);
}

MR_bool MR_CALL 
mdb__browse__string_is_return_value_alias_1_p_0(
  MR_String HeadVar__1_1)
{
  {
    MR_bool succeeded;
    MR_Integer lo_0 = (MR_Integer) 0;
    MR_Integer hi_1 = (MR_Integer) 5;
    MR_Integer mid_2;
    MR_Integer result_3;

    // binary string simple lookup switch
    ;
    do
    {
      mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
      result_3 = MR_strcmp(HeadVar__1_1, ((&mdb__browse_vector_common_10[14 + mid_2]))->mdb__browse__vector_common_type_10_0__vct_10_f_0);
      if ((result_3 == (MR_Integer) 0))
      {
        succeeded = MR_TRUE;
        // jump out of search loop
        ;
        goto label_0;
      }
      else
      if ((result_3 < (MR_Integer) 0))
        hi_1 = (MR_Integer) ((MR_Unsigned) mid_2 - (MR_Unsigned) (MR_Integer) 1);
      else
        lo_0 = (MR_Integer) ((MR_Unsigned) mid_2 + (MR_Unsigned) (MR_Integer) 1);
    }
    while ((lo_0 <= hi_1));
    succeeded = MR_FALSE;
  label_0:;
    return succeeded;
  }
}

void MR_CALL 
mdb__browse__simplify_dirs_2_p_0(
  MR_Word Dirs_3,
  MR_Word * SimpleDirs_4)
{
  {
    MR_Word RevDirs_5;

    mercury__list__reverse_2_p_0((MR_Word) (&mdb__browser_info__mdb__browser_info__type_ctor_info_up_down_dir_0), Dirs_3, &RevDirs_5);
    mdb__browse__simplify_rev_dirs_4_p_0(RevDirs_5, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), SimpleDirs_4);
  }
}

static void MR_CALL 
mdb__browse__browser_term_to_html_flat_string_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    mdb__browse__put_comma_space_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), wrapper_arg_1, wrapper_arg_2, wrapper_arg_3);
  }
}

static void MR_CALL 
mdb__browse__browser_term_to_html_flat_string_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    mdb__browse__write_univ_or_unbound_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), wrapper_arg_1, ((MR_Word) (wrapper_arg_2)), wrapper_arg_3, wrapper_arg_4);
  }
}

void MR_CALL 
mdb__browse__browser_term_to_html_flat_string_5_p_0(
  MR_Word BrowserTerm_6,
  MR_String * Str_7,
  MR_Word * Elided_8)
{
  {
    MR_bool succeeded;
    MR_Integer RemainingSize_11;

    mdb__browse__browser_term_size_left_from_max_3_p_0(BrowserTerm_6, (MR_Integer) 120, &RemainingSize_11);
    succeeded = (RemainingSize_11 >= (MR_Integer) 0);
    if (succeeded)
    {
      MR_Word State_12;
      MR_Word Var_21;

      Var_21 = mercury__string__builder__init_0_f_0();
      if (((MR_tag((MR_Word) BrowserTerm_6)) == (MR_Integer) 0))
      {
        MR_Word Univ_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BrowserTerm_6, (MR_Integer) 0))));
        MR_Box conv0_State_12;

        mercury__stream__string_writer__write_univ_5_p_2((MR_Word) (&mdb__browse_scalar_common_3[0]), (MR_Word) (&mdb__browse_scalar_common_3[1]), ((MR_Box) ((MR_Integer) 0)), (MR_Integer) 2, Univ_26, ((MR_Box) (Var_21)), &conv0_State_12);
        State_12 = ((MR_Word) (conv0_State_12));
      }
      else
      {
        MR_String Functor_33 = ((MR_String) ((MR_hl_field(MR_mktag(1), BrowserTerm_6, (MR_Integer) 0))));
        MR_Word Args_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BrowserTerm_6, (MR_Integer) 1))));
        MR_Word MaybeReturn_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BrowserTerm_6, (MR_Integer) 2))));
        MR_Word STATE_VARIABLE_IO_22_42;
        MR_Word STATE_VARIABLE_IO_29_49;
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mdb__browse_scalar_common_3[0]), (MR_Integer) 0)), (MR_Integer) 5))));
        MR_Box conv2_STATE_VARIABLE_IO_22_42;

        func_1(((MR_Box) ((MR_Word) (&mdb__browse_scalar_common_3[0]))), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (Functor_33)), ((MR_Box) (Var_21)), &conv2_STATE_VARIABLE_IO_22_42);
        STATE_VARIABLE_IO_22_42 = ((MR_Word) (conv2_STATE_VARIABLE_IO_22_42));
        if ((Args_34 == (MR_Word) ((MR_Unsigned) 0U)))
          STATE_VARIABLE_IO_29_49 = STATE_VARIABLE_IO_22_42;
        else
        {
          MR_Word TypeClassInfo_for_output_61;
          MR_Word STATE_VARIABLE_IO_24_44;
          MR_Word STATE_VARIABLE_IO_27_47;
          void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mdb__browse_scalar_common_3[0]), (MR_Integer) 0)), (MR_Integer) 5))));
          MR_Box conv4_STATE_VARIABLE_IO_24_44;
          MR_Box conv5_STATE_VARIABLE_IO_27_47;
          void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv7_STATE_VARIABLE_IO_29_49;

          func_3(((MR_Box) ((MR_Word) (&mdb__browse_scalar_common_3[0]))), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "(")), ((MR_Box) (STATE_VARIABLE_IO_22_42)), &conv4_STATE_VARIABLE_IO_24_44);
          STATE_VARIABLE_IO_24_44 = ((MR_Word) (conv4_STATE_VARIABLE_IO_24_44));
          mercury__private_builtin__superclass_from_typeclass_info_3_p_0((MR_Word) (&mdb__browse_scalar_common_3[0]), (MR_Integer) 1, &TypeClassInfo_for_output_61);
          mercury__stream__put_list_6_p_2((MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), TypeClassInfo_for_output_61, ((MR_Box) ((MR_Integer) 0)), (MR_Word) (&mdb__browse_scalar_common_3[7]), (MR_Word) (&mdb__browse_scalar_common_2[4]), Args_34, ((MR_Box) (STATE_VARIABLE_IO_24_44)), &conv5_STATE_VARIABLE_IO_27_47);
          STATE_VARIABLE_IO_27_47 = ((MR_Word) (conv5_STATE_VARIABLE_IO_27_47));
          func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mdb__browse_scalar_common_3[0]), (MR_Integer) 0)), (MR_Integer) 5))));
          func_6(((MR_Box) ((MR_Word) (&mdb__browse_scalar_common_3[0]))), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) ")")), ((MR_Box) (STATE_VARIABLE_IO_27_47)), &conv7_STATE_VARIABLE_IO_29_49);
          STATE_VARIABLE_IO_29_49 = ((MR_Word) (conv7_STATE_VARIABLE_IO_29_49));
        }
        if ((MaybeReturn_35 == (MR_Word) ((MR_Unsigned) 0U)))
          State_12 = STATE_VARIABLE_IO_29_49;
        else
        {
          MR_Word Return_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeReturn_35, (MR_Integer) 0))));
          MR_Word STATE_VARIABLE_IO_31_51;
          void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mdb__browse_scalar_common_3[0]), (MR_Integer) 0)), (MR_Integer) 5))));
          MR_Box conv9_STATE_VARIABLE_IO_31_51;
          MR_Box conv10_State_12;

          func_8(((MR_Box) ((MR_Word) (&mdb__browse_scalar_common_3[0]))), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) " = ")), ((MR_Box) (STATE_VARIABLE_IO_29_49)), &conv9_STATE_VARIABLE_IO_31_51);
          STATE_VARIABLE_IO_31_51 = ((MR_Word) (conv9_STATE_VARIABLE_IO_31_51));
          mercury__stream__string_writer__write_univ_5_p_2((MR_Word) (&mdb__browse_scalar_common_3[0]), (MR_Word) (&mdb__browse_scalar_common_3[1]), ((MR_Box) ((MR_Integer) 0)), (MR_Integer) 2, Return_39, ((MR_Box) (STATE_VARIABLE_IO_31_51)), &conv10_State_12);
          State_12 = ((MR_Word) (conv10_State_12));
        }
      }
      *Str_7 = mercury__string__builder__to_string_1_f_0(State_12);
      *Elided_8 = (MR_Integer) 0;
    }
    else
    {
      MR_Word StreamDb_13;
      MR_Word BrowserDb_14;

      mercury__io__get_stream_db_3_p_0(&StreamDb_13);
      BrowserDb_14 = (MR_Word) (StreamDb_13);
      mdb__browse__browser_term_to_string_5_p_0(BrowserDb_14, BrowserTerm_6, (MR_Integer) 10, (MR_Integer) 5, Str_7);
      *Elided_8 = (MR_Integer) 1;
    }
  }
}

void MR_CALL 
mdb__browse__save_and_browse_browser_term_web_6_p_0(
  MR_Word Term_7,
  MR_Word OutStream_8,
  MR_Word ErrStream_9,
  MR_Word State_10)
{
  {
    MR_bool succeeded;
    MR_Word MaybeValue_65;
    MR_String MdbDir_67;
    MR_String Path_66;
    MR_String Var_70;
    MR_String Var_71;

    mercury__io__get_environment_var_4_p_0((MR_String) "MERCURY_DEBUGGER_INIT", &MaybeValue_65);
    succeeded = ((MR_tag((MR_Word) MaybeValue_65)) == (MR_Integer) 1);
    if (succeeded)
    {
      Path_66 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeValue_65, (MR_Integer) 0))));
      succeeded = mercury__dir__path_name_is_absolute_1_p_0(Path_66);
      if (succeeded)
      {
        Var_70 = (MR_String) "mdbrc";
        succeeded = mercury__dir__split_name_3_p_0(Path_66, &MdbDir_67, &Var_71);
        if (succeeded)
          succeeded = (strcmp(Var_70, Var_71) == 0);
      }
    }
    if (succeeded)
    {
      MR_Word MaybeBrowserCmd_14;

      MaybeBrowserCmd_14 = mdb__browser_info__web_browser_cmd_1_f_0(State_10);
      if ((MaybeBrowserCmd_14 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__io__write_string_4_p_0(ErrStream_9, (MR_String) "mdb: You need to specify the shell command that launches your preferred web browser, by issuing an mdb command \"web_browser_cmd <command>\".\n");
      }
      else
      {
        MR_String BrowserCmd_15 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeBrowserCmd_14, (MR_Integer) 0))));
        MR_String TmpDir_16;
        MR_Word TmpResult_17;

        mercury__io__get_temp_directory_3_p_0(&TmpDir_16);
        mercury__io__make_temp_file_6_p_0(TmpDir_16, (MR_String) "mdb", (MR_String) ".html", &TmpResult_17);
        if (((MR_tag((MR_Word) TmpResult_17)) == (MR_Integer) 1))
        {
          MR_Word Error_59 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TmpResult_17, (MR_Integer) 0))));
          MR_String Msg_60;

          mercury__io__error_message_2_p_0(Error_59, &Msg_60);
          mercury__io__write_string_4_p_0(ErrStream_9, (MR_String) "Error opening temporary file: ");
          mercury__io__write_string_4_p_0(ErrStream_9, Msg_60);
          mercury__io__nl_2_p_0();
        }
        else
        {
          MR_String TmpFileName0_18 = ((MR_String) ((MR_hl_field(MR_mktag(0), TmpResult_17, (MR_Integer) 0))));
          MR_String TmpFileName_19;
          MR_Word SaveResult_21;

          succeeded = mercury__string__suffix_2_p_0(TmpFileName0_18, (MR_String) ".html");
          if (succeeded)
            TmpFileName_19 = TmpFileName0_18;
          else
          {
            MR_Word Var_20;

            mercury__io__remove_file_4_p_0(TmpFileName0_18, &Var_20);
            TmpFileName_19 = mercury__string__f_43_43_2_f_0(TmpFileName0_18, (MR_String) ".html");
          }
          mercury__io__open_output_4_p_0(TmpFileName_19, &SaveResult_21);
          if (((MR_tag((MR_Word) SaveResult_21)) == (MR_Integer) 1))
          {
            MR_Word Error_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SaveResult_21, (MR_Integer) 0))));
            MR_String Msg_25;
            MR_String Var_49;
            MR_String Var_52;

            mercury__io__error_message_2_p_0(Error_24, &Msg_25);
            Var_52 = mercury__string__f_43_43_2_f_0(TmpFileName_19, (MR_String) "\': ");
            Var_49 = mercury__string__f_43_43_2_f_0((MR_String) "Error opening file \140", Var_52);
            mercury__io__write_string_4_p_0(ErrStream_9, Var_49);
            mercury__io__write_string_4_p_0(ErrStream_9, Msg_25);
            mercury__io__nl_2_p_0();
          }
          else
          {
            MR_String CommandStr_23;
            MR_String Var_56;
            MR_Word OutputStream_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SaveResult_21, (MR_Integer) 0))));
            MR_Word Var_80;

            mdb__term_to_html__write_html_doc_6_p_0(OutputStream_79, Term_7, MdbDir_67, &Var_80);
            mercury__io__close_output_3_p_0(OutputStream_79);
            Var_56 = mercury__string__f_43_43_2_f_0((MR_String) " ", TmpFileName_19);
            CommandStr_23 = mercury__string__f_43_43_2_f_0(BrowserCmd_15, Var_56);
            mdb__browse__launch_web_browser_5_p_0(OutStream_8, ErrStream_9, CommandStr_23);
          }
        }
      }
    }
    else
    {
      mercury__io__write_string_4_p_0(ErrStream_9, (MR_String) "Could not determine directory containing mdb files.\n");
    }
  }
}

static void MR_CALL 
mdb__browse__launch_web_browser_5_p_0(
  MR_Word OutStream_6,
  MR_Word ErrStream_7,
  MR_String CommandStr_8)
{
  {
    MR_bool succeeded;
    MR_Word Result_10;

    mercury__io__write_string_4_p_0(OutStream_6, (MR_String) "Launching web browser...\n");
    mercury__io__flush_output_3_p_0(OutStream_6);
    mercury__io__call_system_return_signal_4_p_0(CommandStr_8, &Result_10);
    if (((MR_tag((MR_Word) Result_10)) == (MR_Integer) 1))
    {
      MR_Word Error_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Result_10, (MR_Integer) 0))));
      MR_String Var_21;
      MR_String Var_24;
      MR_String Var_25;

      Var_25 = mercury__string__string_1_f_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (Error_14)));
      Var_24 = mercury__string__f_43_43_2_f_0(Var_25, (MR_String) ".\n");
      Var_21 = mercury__string__f_43_43_2_f_0((MR_String) "mdb: Error launching browser: ", Var_24);
      mercury__io__write_string_4_p_0(ErrStream_7, Var_21);
    }
    else
    {
      MR_Word ExitStatus_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Result_10, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) ExitStatus_11)) == (MR_Integer) 0))
      {
        MR_Integer ExitCode_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ExitStatus_11, (MR_Integer) 0))));

        succeeded = (ExitCode_12 == (MR_Integer) 0);
        if (!(succeeded))
        {
          MR_String Var_29;
          MR_String Var_32;

          Var_32 = mercury__string__f_43_43_2_f_0(CommandStr_8, (MR_String) "\' terminated with a non-zero exit code.\n");
          Var_29 = mercury__string__f_43_43_2_f_0((MR_String) "mdb: The command \140", Var_32);
          mercury__io__write_string_4_p_0(ErrStream_7, Var_29);
        }
      }
      else
      {
        mercury__io__write_string_4_p_0(ErrStream_7, (MR_String) "mdb: The browser was killed.\n");
      }
    }
  }
}

void MR_CALL 
mdb__browse__save_and_browse_browser_term_xml_6_p_0(
  MR_Word Term_7,
  MR_Word OutStream_8,
  MR_Word ErrStream_9,
  MR_Word State_10)
{
  {
    MR_Word MaybeXMLBrowserCmd_12;
    MR_Word MaybeTmpFileName_13;

    MaybeXMLBrowserCmd_12 = mdb__browser_info__xml_browser_cmd_1_f_0(State_10);
    MaybeTmpFileName_13 = mdb__browser_info__xml_tmp_filename_1_f_0(State_10);
    if ((MaybeXMLBrowserCmd_12 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((MaybeTmpFileName_13 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__io__write_string_4_p_0(ErrStream_9, (MR_String) "mdb: You need to issue a \"set xml_browser_cmd \'<command>\'\" command\nand a \"set xml_tmp_filename \'<filename>\'\" command first.\n");
      }
      else
      {
        mercury__io__write_string_4_p_0(ErrStream_9, (MR_String) "mdb: You need to issue a \"set xml_browser_cmd \'<command>\'\" command first.\n");
      }
    else
    {
      MR_String Var_49 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeXMLBrowserCmd_12, (MR_Integer) 0))));

      if ((MaybeTmpFileName_13 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__io__write_string_4_p_0(ErrStream_9, (MR_String) "mdb: You need to issue a \"set xml_tmp_filename \'<filename>\'\" command first.\n");
      }
      else
      {
        MR_String TmpFileName_15 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeTmpFileName_13, (MR_Integer) 0))));
        MR_Word SaveResult_16;

        mercury__io__write_string_4_p_0(OutStream_8, (MR_String) "Saving term to XML file...\n");
        mercury__io__open_output_4_p_0(TmpFileName_15, &SaveResult_16);
        if (!(((MR_tag((MR_Word) SaveResult_16)) == (MR_Integer) 1)))
        {
          MR_Word OutputStream_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SaveResult_16, (MR_Integer) 0))));

          if (((MR_tag((MR_Word) Term_7)) == (MR_Integer) 0))
          {
            MR_Word TypeInfo_39_83;
            MR_Word Univ_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 0))));
            MR_Box Term_58;
            MR_Word Var_59;
            MR_Box conv0_STATE_VARIABLE_IO_37_81;

            Term_58 = mercury__univ__univ_value_1_f_0(&TypeInfo_39_83, Univ_57);
            mercury__term_to_xml__write_xml_doc_general_cc_8_p_0(TypeInfo_39_83, (MR_Word) (&mdb__browse_scalar_common_3[2]), ((MR_Box) (OutputStream_56)), Term_58, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 4U), &Var_59, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_37_81);
          }
          else
          {
            MR_String Functor_60 = ((MR_String) ((MR_hl_field(MR_mktag(1), Term_7, (MR_Integer) 0))));
            MR_Word Args_61 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Term_7, (MR_Integer) 1))));
            MR_Word MaybeRes_62 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Term_7, (MR_Integer) 2))));

            if ((MaybeRes_62 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word PredicateTerm_63;
              MR_Word Var_64;
              MR_Box conv1_STATE_VARIABLE_IO_37_81;

              {
                PredicateTerm_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), PredicateTerm_63, 0) = ((MR_Box) (Functor_60));
                MR_hl_field(MR_mktag(0), PredicateTerm_63, 1) = ((MR_Box) (Args_61));
              }
              mercury__term_to_xml__write_xml_doc_general_cc_8_p_0((MR_Word) (&mdb__browse__mdb__browse__type_ctor_info_xml_predicate_wrapper_0), (MR_Word) (&mdb__browse_scalar_common_3[2]), ((MR_Box) (OutputStream_56)), ((MR_Box) (PredicateTerm_63)), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 4U), &Var_64, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_37_81);
            }
            else
            {
              MR_Word Result_65 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRes_62, (MR_Integer) 0))));
              MR_Word FunctionTerm_66;
              MR_Word Var_67;
              MR_Box conv2_STATE_VARIABLE_IO_37_81;

              {
                FunctionTerm_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), FunctionTerm_66, 0) = ((MR_Box) (Functor_60));
                MR_hl_field(MR_mktag(0), FunctionTerm_66, 1) = ((MR_Box) (Args_61));
                MR_hl_field(MR_mktag(0), FunctionTerm_66, 2) = ((MR_Box) (Result_65));
              }
              mercury__term_to_xml__write_xml_doc_general_cc_8_p_0((MR_Word) (&mdb__browse__mdb__browse__type_ctor_info_xml_function_wrapper_0), (MR_Word) (&mdb__browse_scalar_common_3[2]), ((MR_Box) (OutputStream_56)), ((MR_Box) (FunctionTerm_66)), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 4U), &Var_67, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_37_81);
            }
          }
          mercury__io__close_output_3_p_0(OutputStream_56);
        }
        if (((MR_tag((MR_Word) SaveResult_16)) == (MR_Integer) 1))
        {
          MR_Word Error_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SaveResult_16, (MR_Integer) 0))));
          MR_String Msg_19;
          MR_String Var_41;
          MR_String Var_44;

          mercury__io__error_message_2_p_0(Error_18, &Msg_19);
          Var_44 = mercury__string__f_43_43_2_f_0(TmpFileName_15, (MR_String) "\': ");
          Var_41 = mercury__string__f_43_43_2_f_0((MR_String) "Error opening file \140", Var_44);
          mercury__io__write_string_4_p_0(ErrStream_9, Var_41);
          mercury__io__write_string_4_p_0(ErrStream_9, Msg_19);
          mercury__io__nl_2_p_0();
        }
        else
          mdb__browse__launch_xml_browser_5_p_0(OutStream_8, ErrStream_9, Var_49);
      }
    }
  }
}

static void MR_CALL 
mdb__browse__launch_xml_browser_5_p_0(
  MR_Word OutStream_6,
  MR_Word ErrStream_7,
  MR_String CommandStr_8)
{
  {
    MR_bool succeeded;
    MR_Word Result_10;

    mercury__io__write_string_4_p_0(OutStream_6, (MR_String) "Launching XML browser (this may take some time) ...\n");
    mercury__io__flush_output_3_p_0(OutStream_6);
    mercury__io__call_system_return_signal_4_p_0(CommandStr_8, &Result_10);
    if (((MR_tag((MR_Word) Result_10)) == (MR_Integer) 1))
    {
      MR_Word Error_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Result_10, (MR_Integer) 0))));
      MR_String Var_23;
      MR_String Var_26;
      MR_String Var_27;

      Var_27 = mercury__string__string_1_f_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (Error_14)));
      Var_26 = mercury__string__f_43_43_2_f_0(Var_27, (MR_String) ".\n");
      Var_23 = mercury__string__f_43_43_2_f_0((MR_String) "mdb: Error launching browser: ", Var_26);
      mercury__io__write_string_4_p_0(ErrStream_7, Var_23);
    }
    else
    {
      MR_Word ExitStatus_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Result_10, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) ExitStatus_11)) == (MR_Integer) 0))
      {
        MR_Integer ExitCode_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ExitStatus_11, (MR_Integer) 0))));

        succeeded = (ExitCode_12 == (MR_Integer) 0);
        if (!(succeeded))
        {
          MR_String Var_31;
          MR_String Var_34;

          Var_34 = mercury__string__f_43_43_2_f_0(CommandStr_8, (MR_String) "\' terminated with a non-zero exit code.\n");
          Var_31 = mercury__string__f_43_43_2_f_0((MR_String) "mdb: The command \140", Var_34);
          mercury__io__write_string_4_p_0(ErrStream_7, Var_31);
        }
      }
      else
      {
        mercury__io__write_string_4_p_0(ErrStream_7, (MR_String) "mdb: The browser was killed.\n");
      }
    }
  }
}

void MR_CALL 
mdb__browse__save_term_to_file_xml_5_p_0(
  MR_String FileName_6,
  MR_Word BrowserTerm_7,
  MR_Word OutStream_8)
{
  {
    MR_Word Result_10;

    mercury__io__open_output_4_p_0(FileName_6, &Result_10);
    if (!(((MR_tag((MR_Word) Result_10)) == (MR_Integer) 1)))
    {
      MR_Word OutputStream_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Result_10, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) BrowserTerm_7)) == (MR_Integer) 0))
      {
        MR_Word TypeInfo_39_52;
        MR_Word Univ_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BrowserTerm_7, (MR_Integer) 0))));
        MR_Box Term_27;
        MR_Word Var_28;
        MR_Box conv0_STATE_VARIABLE_IO_37_50;

        Term_27 = mercury__univ__univ_value_1_f_0(&TypeInfo_39_52, Univ_26);
        mercury__term_to_xml__write_xml_doc_general_cc_8_p_0(TypeInfo_39_52, (MR_Word) (&mdb__browse_scalar_common_3[2]), ((MR_Box) (OutputStream_25)), Term_27, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 4U), &Var_28, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_37_50);
      }
      else
      {
        MR_String Functor_29 = ((MR_String) ((MR_hl_field(MR_mktag(1), BrowserTerm_7, (MR_Integer) 0))));
        MR_Word Args_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BrowserTerm_7, (MR_Integer) 1))));
        MR_Word MaybeRes_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BrowserTerm_7, (MR_Integer) 2))));

        if ((MaybeRes_31 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word PredicateTerm_32;
          MR_Word Var_33;
          MR_Box conv1_STATE_VARIABLE_IO_37_50;

          {
            PredicateTerm_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), PredicateTerm_32, 0) = ((MR_Box) (Functor_29));
            MR_hl_field(MR_mktag(0), PredicateTerm_32, 1) = ((MR_Box) (Args_30));
          }
          mercury__term_to_xml__write_xml_doc_general_cc_8_p_0((MR_Word) (&mdb__browse__mdb__browse__type_ctor_info_xml_predicate_wrapper_0), (MR_Word) (&mdb__browse_scalar_common_3[2]), ((MR_Box) (OutputStream_25)), ((MR_Box) (PredicateTerm_32)), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 4U), &Var_33, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_37_50);
        }
        else
        {
          MR_Word Result_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRes_31, (MR_Integer) 0))));
          MR_Word FunctionTerm_35;
          MR_Word Var_36;
          MR_Box conv2_STATE_VARIABLE_IO_37_50;

          {
            FunctionTerm_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), FunctionTerm_35, 0) = ((MR_Box) (Functor_29));
            MR_hl_field(MR_mktag(0), FunctionTerm_35, 1) = ((MR_Box) (Args_30));
            MR_hl_field(MR_mktag(0), FunctionTerm_35, 2) = ((MR_Box) (Result_34));
          }
          mercury__term_to_xml__write_xml_doc_general_cc_8_p_0((MR_Word) (&mdb__browse__mdb__browse__type_ctor_info_xml_function_wrapper_0), (MR_Word) (&mdb__browse_scalar_common_3[2]), ((MR_Box) (OutputStream_25)), ((MR_Box) (FunctionTerm_35)), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 4U), &Var_36, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_37_50);
        }
      }
      mercury__io__close_output_3_p_0(OutputStream_25);
    }
    if (((MR_tag((MR_Word) Result_10)) == (MR_Integer) 1))
    {
      MR_Word Error_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Result_10, (MR_Integer) 0))));
      MR_String Msg_13;

      mercury__io__error_message_2_p_0(Error_12, &Msg_13);
      mercury__io__write_string_4_p_0(OutStream_8, Msg_13);
      mercury__io__nl_2_p_0();
    }
  }
}

void MR_CALL 
mdb__browse__save_term_to_file_6_p_0(
  MR_String FileName_7,
  MR_String _Format_8,
  MR_Word BrowserTerm_9,
  MR_Word OutStream_10)
{
  mdb__browse__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_118_101_95_116_101_114_109_95_116_111_95_102_105_108_101_95_95_91_50_93_95_48_6_p_0(FileName_7, BrowserTerm_9, OutStream_10);
}

void MR_CALL 
mdb__browse__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_118_101_95_116_101_114_109_95_116_111_95_102_105_108_101_95_95_91_50_93_95_48_6_p_0(
  MR_String FileName_7,
  MR_Word BrowserTerm_9,
  MR_Word OutStream_10)
{
  {
    MR_Word FileStreamRes_13;

    mercury__io__tell_4_p_0(FileName_7, &FileStreamRes_13);
    if ((FileStreamRes_13 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      if (((MR_tag((MR_Word) BrowserTerm_9)) == (MR_Integer) 0))
      {
        MR_Word Term_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BrowserTerm_9, (MR_Integer) 0))));

        mdb__browse__save_univ_4_p_0((MR_Integer) 0, Term_14);
        mercury__io__nl_2_p_0();
      }
      else
      {
        MR_String Functor_15 = ((MR_String) ((MR_hl_field(MR_mktag(1), BrowserTerm_9, (MR_Integer) 0))));
        MR_Word Args_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BrowserTerm_9, (MR_Integer) 1))));
        MR_Word MaybeRes_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BrowserTerm_9, (MR_Integer) 2))));

        mercury__io__write_string_3_p_0(Functor_15);
        mercury__io__write_string_3_p_0((MR_String) "(\n");
        mdb__browse__save_args_4_p_0((MR_Integer) 1, Args_16);
        mercury__io__write_string_3_p_0((MR_String) "\n)\n");
        if (!((MaybeRes_17 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          MR_Word Result_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRes_17, (MR_Integer) 0))));

          mercury__io__write_string_3_p_0((MR_String) "=\n");
          mdb__browse__save_univ_4_p_0((MR_Integer) 1, Result_18);
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
      }
      mercury__io__told_2_p_0();
    }
    else
    {
      MR_Word Error_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FileStreamRes_13, (MR_Integer) 0))));
      MR_String Msg_20;

      mercury__io__error_message_2_p_0(Error_19, &Msg_20);
      mercury__io__write_string_4_p_0(OutStream_10, Msg_20);
    }
  }
}

static MR_Box MR_CALL 
mdb__browse__save_univ_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = mercury__univ__univ_1_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), wrapper_arg_1);
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
mdb__browse__save_univ_4_p_0(
  MR_Integer Indent_5,
  MR_Word Univ_6)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_12_12;
    MR_Box Var_10;
    MR_Word TypeInfo_53_60;
    MR_Word List_18;

    Var_10 = mercury__univ__univ_value_1_f_0(&TypeInfo_12_12, Univ_6);
    succeeded = mdb__browse__dynamic_cast_to_list_2_p_0(TypeInfo_12_12, &TypeInfo_53_60, Var_10, &List_18);
    if (succeeded)
      if ((List_18 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mdb__browse__write_indent_3_p_0(Indent_5);
        mercury__io__write_string_3_p_0((MR_String) "[]");
      }
      else
      {
        MR_Word MakeUniv_21;
        MR_Word Univs_24;
        MR_Integer Var_35;

        {
          MakeUniv_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), MakeUniv_21, 0) = ((MR_Box) (&mdb__browse_scalar_common_6[1]));
          MR_hl_field(MR_mktag(0), MakeUniv_21, 1) = ((MR_Box) (mdb__browse__save_univ_4_p_0_1));
          MR_hl_field(MR_mktag(0), MakeUniv_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), MakeUniv_21, 3) = ((MR_Box) (TypeInfo_53_60));
        }
        Univs_24 = mercury__list__map_2_f_0(TypeInfo_53_60, (MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), MakeUniv_21, List_18);
        mdb__browse__write_indent_3_p_0(Indent_5);
        mercury__io__write_string_3_p_0((MR_String) "[\n");
        Var_35 = (MR_Integer) ((MR_Unsigned) Indent_5 + (MR_Unsigned) (MR_Integer) 1);
        mdb__browse__save_args_4_p_0(Var_35, Univs_24);
        mercury__io__write_string_3_p_0((MR_String) "\n");
        mdb__browse__write_indent_3_p_0(Indent_5);
        mercury__io__write_string_3_p_0((MR_String) "]");
      }
    else
    {
      MR_String Functor_25;
      MR_Word Args_27;
      MR_Integer _Arity_26;

      mercury__deconstruct__deconstruct_5_p_2(TypeInfo_12_12, Var_10, (MR_Integer) 2, &Functor_25, &_Arity_26, &Args_27);
      mdb__browse__write_indent_3_p_0(Indent_5);
      mercury__io__write_string_3_p_0(Functor_25);
      if (!((Args_27 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        MR_Integer Var_51;

        mercury__io__write_string_3_p_0((MR_String) "(\n");
        Var_51 = (MR_Integer) ((MR_Unsigned) Indent_5 + (MR_Unsigned) (MR_Integer) 1);
        mdb__browse__save_args_4_p_0(Var_51, Args_27);
        mercury__io__write_string_3_p_0((MR_String) "\n");
        mdb__browse__write_indent_3_p_0(Indent_5);
        mercury__io__write_string_3_p_0((MR_String) ")");
      }
    }
  }
}

static MR_Box MR_CALL 
mdb__browse__save_args_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = mercury__univ__univ_1_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), wrapper_arg_1);
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
mdb__browse__save_args_4_p_0(
  MR_Integer HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word TypeInfo_12_28;
      MR_Word Univ_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Univs_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box Var_26;
      MR_Word TypeInfo_53_76;
      MR_Word List_34;

      Var_26 = mercury__univ__univ_value_1_f_0(&TypeInfo_12_28, Univ_10);
      succeeded = mdb__browse__dynamic_cast_to_list_2_p_0(TypeInfo_12_28, &TypeInfo_53_76, Var_26, &List_34);
      if (succeeded)
        if ((List_34 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mdb__browse__write_indent_3_p_0(HeadVar__1_1);
          mercury__io__write_string_3_p_0((MR_String) "[]");
        }
        else
        {
          MR_Word MakeUniv_37;
          MR_Word Univs_40;
          MR_Integer Var_51;

          {
            MakeUniv_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), MakeUniv_37, 0) = ((MR_Box) (&mdb__browse_scalar_common_6[1]));
            MR_hl_field(MR_mktag(0), MakeUniv_37, 1) = ((MR_Box) (mdb__browse__save_args_4_p_0_1));
            MR_hl_field(MR_mktag(0), MakeUniv_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), MakeUniv_37, 3) = ((MR_Box) (TypeInfo_53_76));
          }
          Univs_40 = mercury__list__map_2_f_0(TypeInfo_53_76, (MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), MakeUniv_37, List_34);
          mdb__browse__write_indent_3_p_0(HeadVar__1_1);
          mercury__io__write_string_3_p_0((MR_String) "[\n");
          Var_51 = (MR_Integer) ((MR_Unsigned) HeadVar__1_1 + (MR_Unsigned) (MR_Integer) 1);
          mdb__browse__save_args_4_p_0(Var_51, Univs_40);
          mercury__io__write_string_3_p_0((MR_String) "\n");
          mdb__browse__write_indent_3_p_0(HeadVar__1_1);
          mercury__io__write_string_3_p_0((MR_String) "]");
        }
      else
      {
        MR_String Functor_41;
        MR_Word Args_43;
        MR_Integer _Arity_42;

        mercury__deconstruct__deconstruct_5_p_2(TypeInfo_12_28, Var_26, (MR_Integer) 2, &Functor_41, &_Arity_42, &Args_43);
        mdb__browse__write_indent_3_p_0(HeadVar__1_1);
        mercury__io__write_string_3_p_0(Functor_41);
        if (!((Args_43 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          MR_Integer Var_67;

          mercury__io__write_string_3_p_0((MR_String) "(\n");
          Var_67 = (MR_Integer) ((MR_Unsigned) HeadVar__1_1 + (MR_Unsigned) (MR_Integer) 1);
          mdb__browse__save_args_4_p_0(Var_67, Args_43);
          mercury__io__write_string_3_p_0((MR_String) "\n");
          mdb__browse__write_indent_3_p_0(HeadVar__1_1);
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
      }
      if (!((Univs_11 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        MR_Word next_value_of_HeadVar__2_2;

        mercury__io__write_string_3_p_0((MR_String) ",\n");
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = Univs_11;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
mdb__browse__write_indent_3_p_0(
  MR_Integer Indent_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Indent_4 <= (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (!(succeeded))
    {
      MR_Integer Var_11;
      MR_Integer next_value_of_Indent_4;

      mercury__io__write_char_3_p_0((MR_Char) 32);
      Var_11 = (MR_Integer) ((MR_Unsigned) Indent_4 - (MR_Unsigned) (MR_Integer) 1);
      // direct tailcall eliminated
      ;
      next_value_of_Indent_4 = Var_11;
      Indent_4 = next_value_of_Indent_4;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
mdb__browse__dynamic_cast_to_list_2_p_0(
  MR_Word TypeInfo_for_T1_14,
  MR_Word * TypeInfo_for_T_13,
  MR_Box X_3,
  MR_Word * L_4)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_15_15;
    MR_Word TypeInfo_16_16;
    MR_Word TypeInfo_19_19;
    MR_Word ArgTypeDesc_5;
    MR_Word Var_8;
    MR_Word Var_10;
    MR_Word Var_18;
    MR_Box conv0_L_4;

    Var_10 = mercury__type_desc__type_of_1_f_0(TypeInfo_for_T1_14);
    Var_8 = mercury__type_desc__type_args_1_f_0(Var_10);
    succeeded = ((MR_tag((MR_Word) Var_8)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgTypeDesc_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_8, (MR_Integer) 0))));
      Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_8, (MR_Integer) 1))));
      TypeInfo_19_19 = (MR_Word) (&mdb__browse_scalar_common_4[39]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) ((MR_Unsigned) 0U)), ((MR_Box) (Var_18)));
      if (succeeded)
      {
        mercury__type_desc__has_type_2_p_0(TypeInfo_for_T_13, ArgTypeDesc_5);
        TypeCtorInfo_15_15 = (MR_Word) (&mercury__list__list__type_ctor_info_list_1);
        {
          TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfo_16_16, 0) = ((MR_Box) (TypeCtorInfo_15_15));
          MR_hl_field(MR_mktag(0), TypeInfo_16_16, 1) = ((MR_Box) (*TypeInfo_for_T_13));
        }
        succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T1_14, TypeInfo_16_16, X_3, &conv0_L_4);
        if (succeeded)
        {
          *L_4 = ((MR_Word) (conv0_L_4));
          succeeded = MR_TRUE;
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
mdb__browse__browse_external_8_p_0(
  MR_Word TypeInfo_for_T_26,
  MR_Box Term_9,
  MR_Word InputStream_10,
  MR_Word OutputStream_11,
  MR_Word MaybeModeFunc_12,
  MR_Word STATE_VARIABLE_State_0_16,
  MR_Word * STATE_VARIABLE_State_17)
{
  {
    MR_Word Var_21;
    MR_Word Var_25;
    MR_Word Info0_40;
    MR_Word OldInputStream_41;
    MR_Word OldOutputStream_42;
    MR_Word Info_43;
    MR_Word Var_44;
    MR_Word Var_45;

    Var_25 = mercury__univ__univ_1_f_0(TypeInfo_for_T_26, Term_9);
    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (Var_25));
    }
    Info0_40 = mdb__browser_info__init_5_f_0(Var_21, (MR_Integer) 1, (MR_Word) ((MR_Unsigned) 0U), MaybeModeFunc_12, STATE_VARIABLE_State_0_16);
    mercury__io__set_input_stream_4_p_0(InputStream_10, &OldInputStream_41);
    mercury__io__set_output_stream_4_p_0(OutputStream_11, &OldOutputStream_42);
    mdb__browse__browse_main_loop_5_p_0((MR_Integer) 1, Info0_40, &Info_43);
    mercury__io__set_input_stream_4_p_0(OldInputStream_41, &Var_44);
    mercury__io__set_output_stream_4_p_0(OldOutputStream_42, &Var_45);
    *STATE_VARIABLE_State_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_43, (MR_Integer) 4))));
  }
}

void MR_CALL 
mdb__browse__browse_external_no_modes_7_p_0(
  MR_Word TypeInfo_for_T_25,
  MR_Box Term_8,
  MR_Word InputStream_9,
  MR_Word OutputStream_10,
  MR_Word STATE_VARIABLE_State_0_14,
  MR_Word * STATE_VARIABLE_State_15)
{
  {
    MR_Word Var_19;
    MR_Word Var_24;
    MR_Word Info0_39;
    MR_Word OldInputStream_40;
    MR_Word OldOutputStream_41;
    MR_Word Info_42;
    MR_Word Var_43;
    MR_Word Var_44;

    Var_24 = mercury__univ__univ_1_f_0(TypeInfo_for_T_25, Term_8);
    {
      Var_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (Var_24));
    }
    Info0_39 = mdb__browser_info__init_5_f_0(Var_19, (MR_Integer) 1, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_State_0_14);
    mercury__io__set_input_stream_4_p_0(InputStream_9, &OldInputStream_40);
    mercury__io__set_output_stream_4_p_0(OutputStream_10, &OldOutputStream_41);
    mdb__browse__browse_main_loop_5_p_0((MR_Integer) 1, Info0_39, &Info_42);
    mercury__io__set_input_stream_4_p_0(OldInputStream_40, &Var_43);
    mercury__io__set_output_stream_4_p_0(OldOutputStream_41, &Var_44);
    *STATE_VARIABLE_State_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_42, (MR_Integer) 4))));
  }
}

void MR_CALL 
mdb__browse__browse_browser_term_format_9_p_0(
  MR_Word Term_10,
  MR_Word InputStream_11,
  MR_Word OutputStream_12,
  MR_Word Format_13,
  MR_Word MaybeModeFunc_14,
  MR_Word STATE_VARIABLE_State_0_18,
  MR_Word * STATE_VARIABLE_State_19)
{
  {
    MR_Word Var_23;
    MR_Word Info0_39;
    MR_Word OldInputStream_40;
    MR_Word OldOutputStream_41;
    MR_Word Info_42;
    MR_Word Var_43;
    MR_Word Var_44;

    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (Format_13));
    }
    Info0_39 = mdb__browser_info__init_5_f_0(Term_10, (MR_Integer) 1, Var_23, MaybeModeFunc_14, STATE_VARIABLE_State_0_18);
    mercury__io__set_input_stream_4_p_0(InputStream_11, &OldInputStream_40);
    mercury__io__set_output_stream_4_p_0(OutputStream_12, &OldOutputStream_41);
    mdb__browse__browse_main_loop_5_p_0((MR_Integer) 0, Info0_39, &Info_42);
    mercury__io__set_input_stream_4_p_0(OldInputStream_40, &Var_43);
    mercury__io__set_output_stream_4_p_0(OldOutputStream_41, &Var_44);
    *STATE_VARIABLE_State_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_42, (MR_Integer) 4))));
  }
}

void MR_CALL 
mdb__browse__browse_browser_term_format_no_modes_8_p_0(
  MR_Word Term_9,
  MR_Word InputStream_10,
  MR_Word OutputStream_11,
  MR_Word Format_12,
  MR_Word STATE_VARIABLE_State_0_16,
  MR_Word * STATE_VARIABLE_State_17)
{
  {
    MR_Word Var_21;
    MR_Word Info0_38;
    MR_Word OldInputStream_39;
    MR_Word OldOutputStream_40;
    MR_Word Info_41;
    MR_Word Var_42;
    MR_Word Var_43;

    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (Format_12));
    }
    Info0_38 = mdb__browser_info__init_5_f_0(Term_9, (MR_Integer) 1, Var_21, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_State_0_16);
    mercury__io__set_input_stream_4_p_0(InputStream_10, &OldInputStream_39);
    mercury__io__set_output_stream_4_p_0(OutputStream_11, &OldOutputStream_40);
    mdb__browse__browse_main_loop_5_p_0((MR_Integer) 0, Info0_38, &Info_41);
    mercury__io__set_input_stream_4_p_0(OldInputStream_39, &Var_42);
    mercury__io__set_output_stream_4_p_0(OldOutputStream_40, &Var_43);
    *STATE_VARIABLE_State_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_41, (MR_Integer) 4))));
  }
}

void MR_CALL 
mdb__browse__browse_browser_term_9_p_0(
  MR_Word Term_10,
  MR_Word InputStream_11,
  MR_Word OutputStream_12,
  MR_Word MaybeModeFunc_13,
  MR_Word * MaybeTrack_14,
  MR_Word STATE_VARIABLE_State_0_17,
  MR_Word * STATE_VARIABLE_State_18)
{
  {
    MR_Word Info0_38;
    MR_Word OldInputStream_39;
    MR_Word OldOutputStream_40;
    MR_Word Info_41;
    MR_Word Var_42;
    MR_Word Var_43;

    Info0_38 = mdb__browser_info__init_5_f_0(Term_10, (MR_Integer) 1, (MR_Word) ((MR_Unsigned) 0U), MaybeModeFunc_13, STATE_VARIABLE_State_0_17);
    mercury__io__set_input_stream_4_p_0(InputStream_11, &OldInputStream_39);
    mercury__io__set_output_stream_4_p_0(OutputStream_12, &OldOutputStream_40);
    mdb__browse__browse_main_loop_5_p_0((MR_Integer) 0, Info0_38, &Info_41);
    mercury__io__set_input_stream_4_p_0(OldInputStream_39, &Var_42);
    mercury__io__set_output_stream_4_p_0(OldOutputStream_40, &Var_43);
    *STATE_VARIABLE_State_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_41, (MR_Integer) 4))));
    *MaybeTrack_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_41, (MR_Integer) 5))));
  }
}

void MR_CALL 
mdb__browse__browse_browser_term_no_modes_8_p_0(
  MR_Word Term_9,
  MR_Word InputStream_10,
  MR_Word OutputStream_11,
  MR_Word * MaybeTrack_12,
  MR_Word STATE_VARIABLE_State_0_15,
  MR_Word * STATE_VARIABLE_State_16)
{
  {
    MR_Word Info0_37;
    MR_Word OldInputStream_38;
    MR_Word OldOutputStream_39;
    MR_Word Info_40;
    MR_Word Var_41;
    MR_Word Var_42;

    Info0_37 = mdb__browser_info__init_5_f_0(Term_9, (MR_Integer) 1, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_State_0_15);
    mercury__io__set_input_stream_4_p_0(InputStream_10, &OldInputStream_38);
    mercury__io__set_output_stream_4_p_0(OutputStream_11, &OldOutputStream_39);
    mdb__browse__browse_main_loop_5_p_0((MR_Integer) 0, Info0_37, &Info_40);
    mercury__io__set_input_stream_4_p_0(OldInputStream_38, &Var_41);
    mercury__io__set_output_stream_4_p_0(OldOutputStream_39, &Var_42);
    *STATE_VARIABLE_State_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_40, (MR_Integer) 4))));
    *MaybeTrack_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_40, (MR_Integer) 5))));
  }
}

static void MR_CALL 
mdb__browse__browse_main_loop_5_p_0(
  MR_Word Debugger_6,
  MR_Word STATE_VARIABLE_Info_0_11,
  MR_Word * STATE_VARIABLE_Info_12)
{
  while (MR_TRUE)
  {
    MR_Word Command_9;
    MR_Word Quit_10;
    MR_Word STATE_VARIABLE_Info_18_18;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (Debugger_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        mdb__parse__read_command_external_3_p_0(&Command_9);
        break;
      case (MR_Integer) 0:
        {
          mdb__parse__read_command_4_p_0((MR_String) "browser> ", &Command_9);
        }
        break;
    }
    mdb__browse__run_command_7_p_0(Debugger_6, Command_9, &Quit_10, STATE_VARIABLE_Info_0_11, &STATE_VARIABLE_Info_18_18);
    switch (Quit_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word next_value_of_STATE_VARIABLE_Info_0_11 = STATE_VARIABLE_Info_18_18;

          // direct tailcall eliminated
          ;
          STATE_VARIABLE_Info_0_11 = next_value_of_STATE_VARIABLE_Info_0_11;
          continue;
        }
        break;
      case (MR_Integer) 1:
        {
          switch (Debugger_6) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                mdb__browser_info__send_term_to_socket_3_p_0((MR_Word) ((MR_Unsigned) 8U));
              }
              break;
            case (MR_Integer) 0:
              {
              }
              break;
          }
          *STATE_VARIABLE_Info_12 = STATE_VARIABLE_Info_18_18;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
mdb__browse__run_command_7_p_0(
  MR_Word Debugger_8,
  MR_Word Command_9,
  MR_Word * Quit_10,
  MR_Word STATE_VARIABLE_Info_0_29,
  MR_Word * STATE_VARIABLE_Info_30)
{
  {
    switch (MR_tag((MR_Word) Command_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Command_9)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mdb__browser_info__write_string_debugger_4_p_0(Debugger_8, (MR_String) "command not yet implemented\n");
              *Quit_10 = (MR_Integer) 0;
              *STATE_VARIABLE_Info_30 = STATE_VARIABLE_Info_0_29;
            }
            break;
          case (MR_Integer) 1:
            {
              mdb__browser_info__write_string_debugger_4_p_0(Debugger_8, (MR_String) "command not yet implemented\n");
              *Quit_10 = (MR_Integer) 0;
              *STATE_VARIABLE_Info_30 = STATE_VARIABLE_Info_0_29;
            }
            break;
          case (MR_Integer) 2:
            {
              mdb__browse__set_path_3_p_0((MR_Word) (&mdb__browse_scalar_common_5[9]), STATE_VARIABLE_Info_0_29, STATE_VARIABLE_Info_30);
              *Quit_10 = (MR_Integer) 0;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_29, (MR_Integer) 1))));

              mdb__browser_info__write_down_path_4_p_0(Debugger_8, Var_54);
              mdb__browser_info__nl_debugger_3_p_0(Debugger_8);
              *Quit_10 = (MR_Integer) 0;
              *STATE_VARIABLE_Info_30 = STATE_VARIABLE_Info_0_29;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word MaybeModeFunc_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_29, (MR_Integer) 6))));
              MR_Word Var_154 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_29, (MR_Integer) 1))));

              mdb__browse__write_term_mode_debugger_5_p_0(Debugger_8, MaybeModeFunc_83, Var_154);
              *Quit_10 = (MR_Integer) 0;
              *STATE_VARIABLE_Info_30 = STATE_VARIABLE_Info_0_29;
            }
            break;
          case (MR_Integer) 5:
            {
              mdb__browse__help_3_p_0(Debugger_8);
              *Quit_10 = (MR_Integer) 0;
              *STATE_VARIABLE_Info_30 = STATE_VARIABLE_Info_0_29;
            }
            break;
          case (MR_Integer) 6:
            {
              *Quit_10 = (MR_Integer) 1;
              *STATE_VARIABLE_Info_30 = STATE_VARIABLE_Info_0_29;
            }
            break;
          case (MR_Integer) 7:
            {
              *Quit_10 = (MR_Integer) 0;
              *STATE_VARIABLE_Info_30 = STATE_VARIABLE_Info_0_29;
            }
            break;
          case (MR_Integer) 8:
            {
              mdb__browser_info__write_string_debugger_4_p_0(Debugger_8, (MR_String) "Error: unknown command or syntax error.\n");
              mdb__browser_info__write_string_debugger_4_p_0(Debugger_8, (MR_String) "Type \"help\" for help.\n");
              *Quit_10 = (MR_Integer) 0;
              *STATE_VARIABLE_Info_30 = STATE_VARIABLE_Info_0_29;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word PrintOption_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Command_9, (MR_Integer) 0))));
          MR_Word MaybePath_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Command_9, (MR_Integer) 1))));

          mdb__browse__do_portray_7_p_0(Debugger_8, (MR_Integer) 1, PrintOption_13, STATE_VARIABLE_Info_0_29, MaybePath_14);
          *Quit_10 = (MR_Integer) 0;
          *STATE_VARIABLE_Info_30 = STATE_VARIABLE_Info_0_29;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word MaybePath_73 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Command_9, (MR_Integer) 0))));

          mdb__browse__do_print_memory_addr_5_p_0(Debugger_8, STATE_VARIABLE_Info_0_29, MaybePath_73);
          *Quit_10 = (MR_Integer) 0;
          *STATE_VARIABLE_Info_30 = STATE_VARIABLE_Info_0_29;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Command_9, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Path_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Command_9, (MR_Integer) 1))));
              MR_Word NewPwd_16;
              MR_Word Result_17;
              MR_Word Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_29, (MR_Integer) 1))));
              MR_Word Var_58;

              mdb__browse__change_dir_3_p_0(Var_57, Path_15, &NewPwd_16);
              Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_29, (MR_Integer) 0))));
              mdb__browse__deref_subterm_3_p_0(Var_58, NewPwd_16, &Result_17);
              if (((MR_tag((MR_Word) Result_17)) == (MR_Integer) 1))
              {
                MR_Word OKPath_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Result_17, (MR_Integer) 0))));
                MR_Word ErrorDir_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Result_17, (MR_Integer) 1))));

                mdb__browse__report_deref_error_5_p_0(Debugger_8, OKPath_19, ErrorDir_20);
                *STATE_VARIABLE_Info_30 = STATE_VARIABLE_Info_0_29;
              }
              else
              {
                MR_Word Var_96 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_29, (MR_Integer) 0))));
                MR_Word Var_98 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_29, (MR_Integer) 2))));
                MR_Word Var_99 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_29, (MR_Integer) 3))));
                MR_Word Var_100 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_29, (MR_Integer) 4))));
                MR_Word Var_101 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_29, (MR_Integer) 5))));
                MR_Word Var_102 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_29, (MR_Integer) 6))));

                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
                  *STATE_VARIABLE_Info_30 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_96));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (NewPwd_16));
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_98));
                  MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_99));
                  MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_100));
                  MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_101));
                  MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_102));
                }
              }
              *Quit_10 = (MR_Integer) 0;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word MaybePath_78 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Command_9, (MR_Integer) 2))));
              MR_Word Var_165 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_29, (MR_Integer) 6))));
              MR_Word Var_167 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_29, (MR_Integer) 4))));
              MR_Word Var_168 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_29, (MR_Integer) 3))));
              MR_Word Var_169 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_29, (MR_Integer) 2))));
              MR_Word Var_170 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_29, (MR_Integer) 1))));
              MR_Word Var_171 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_29, (MR_Integer) 0))));
              MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(3), Command_9, (MR_Integer) 1)));

              if ((MaybePath_78 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word Var_46;

                {
                  Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_46, 0) = (MR_Box) (packed_args_0);
                  MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (Var_170));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
                  *STATE_VARIABLE_Info_30 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_171));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_170));
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_169));
                  MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_168));
                  MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_167));
                  MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_46));
                  MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_165));
                }
                *Quit_10 = (MR_Integer) 1;
              }
              else
              {
                MR_Word SubResult_23;
                MR_Word Var_49;
                MR_Word Path_74 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePath_78, (MR_Integer) 0))));
                MR_Word NewPwd_75;

                mdb__browse__change_dir_3_p_0(Var_170, Path_74, &NewPwd_75);
                Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_29, (MR_Integer) 0))));
                mdb__browse__deref_subterm_3_p_0(Var_49, NewPwd_75, &SubResult_23);
                if (((MR_tag((MR_Word) SubResult_23)) == (MR_Integer) 1))
                {
                  mdb__browser_info__write_string_debugger_4_p_0(Debugger_8, (MR_String) "error: cannot track subterm\n");
                  *Quit_10 = (MR_Integer) 0;
                  *STATE_VARIABLE_Info_30 = STATE_VARIABLE_Info_0_29;
                }
                else
                {
                  MR_Word Var_53;
                  MR_Word Var_121;
                  MR_Word Var_122;
                  MR_Word Var_123;
                  MR_Word Var_124;
                  MR_Word Var_125;
                  MR_Word Var_127;

                  {
                    Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_53, 0) = (MR_Box) (packed_args_0);
                    MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (NewPwd_75));
                  }
                  Var_121 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_29, (MR_Integer) 0))));
                  Var_122 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_29, (MR_Integer) 1))));
                  Var_123 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_29, (MR_Integer) 2))));
                  Var_124 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_29, (MR_Integer) 3))));
                  Var_125 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_29, (MR_Integer) 4))));
                  Var_127 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_29, (MR_Integer) 6))));
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
                    *STATE_VARIABLE_Info_30 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_121));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_122));
                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_123));
                    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_124));
                    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_125));
                    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_53));
                    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_127));
                  }
                  *Quit_10 = (MR_Integer) 1;
                }
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word MaybeModeFunc_27;
              MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_29, (MR_Integer) 1))));
              MR_Word Path_81 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Command_9, (MR_Integer) 1))));
              MR_Word NewPwd_82;

              mdb__browse__change_dir_3_p_0(Var_43, Path_81, &NewPwd_82);
              MaybeModeFunc_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_29, (MR_Integer) 6))));
              mdb__browse__write_term_mode_debugger_5_p_0(Debugger_8, MaybeModeFunc_27, NewPwd_82);
              *Quit_10 = (MR_Integer) 0;
              *STATE_VARIABLE_Info_30 = STATE_VARIABLE_Info_0_29;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ParamCmd_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Command_9, (MR_Integer) 1))));

              mdb__browser_info__run_param_command_7_p_0(Debugger_8, ParamCmd_28, (MR_Integer) 1, STATE_VARIABLE_Info_0_29, STATE_VARIABLE_Info_30);
              *Quit_10 = (MR_Integer) 0;
            }
            break;
        }
        break;
    }
    switch (Debugger_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          mdb__browser_info__send_term_to_socket_3_p_0((MR_Word) ((MR_Unsigned) 4U));
        }
        break;
      case (MR_Integer) 0:
        {
        }
        break;
    }
  }
}

static void MR_CALL 
mdb__browse__write_term_mode_debugger_5_p_0(
  MR_Word Debugger_6,
  MR_Word MaybeModeFunc_7,
  MR_Word Dirs_8)
{
  if ((MaybeModeFunc_7 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    mdb__browser_info__write_string_debugger_4_p_0(Debugger_6, (MR_String) "Mode information not available.\n");
  }
  else
  {
    MR_Word ModeFunc_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeModeFunc_7, (MR_Integer) 0))));
    MR_Word Mode_11;
    MR_String ModeStr_12;
    MR_String Var_17;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), ModeFunc_10, (MR_Integer) 1))));
    MR_Box conv1_Mode_11;

    conv1_Mode_11 = func_0(((MR_Box) (ModeFunc_10)), ((MR_Box) (Dirs_8)));
    Mode_11 = ((MR_Word) (conv1_Mode_11));
    ModeStr_12 = ((&mdb__browse_vector_common_10[10 + Mode_11]))->mdb__browse__vector_common_type_10_0__vct_10_f_0;
    Var_17 = mercury__string__f_43_43_2_f_0(ModeStr_12, (MR_String) "\n");
    mdb__browser_info__write_string_debugger_4_p_0(Debugger_6, Var_17);
  }
}

static void MR_CALL 
mdb__browse__change_dir_3_p_0(
  MR_Word PwdDirs_4,
  MR_Word Path_5,
  MR_Word * RootRelDirs_6)
{
  {
    MR_Word NewDirs_8;
    MR_Word RevDirs_14;

    if (((MR_tag((MR_Word) Path_5)) == (MR_Integer) 1))
    {
      MR_Word Var_9;
      MR_Word Dirs_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Path_5, (MR_Integer) 0))));

      Var_9 = mdb__browser_info__down_to_up_down_dirs_1_f_0(PwdDirs_4);
      NewDirs_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&mdb__browser_info__mdb__browser_info__type_ctor_info_up_down_dir_0), Var_9, Dirs_10);
    }
    else
      NewDirs_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Path_5, (MR_Integer) 0))));
    mercury__list__reverse_2_p_0((MR_Word) (&mdb__browser_info__mdb__browser_info__type_ctor_info_up_down_dir_0), NewDirs_8, &RevDirs_14);
    mdb__browse__simplify_rev_dirs_4_p_0(RevDirs_14, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), RootRelDirs_6);
  }
}

static void MR_CALL 
mdb__browse__set_path_3_p_0(
  MR_Word NewPath_4,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  {
    MR_Word Dirs0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 1))));
    MR_Word Dirs_7;
    MR_Word NewDirs_28;
    MR_Word RevDirs_34;
    MR_Word Var_17;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;

    if (((MR_tag((MR_Word) NewPath_4)) == (MR_Integer) 1))
    {
      MR_Word Var_29;
      MR_Word Dirs_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), NewPath_4, (MR_Integer) 0))));

      Var_29 = mdb__browser_info__down_to_up_down_dirs_1_f_0(Dirs0_6);
      NewDirs_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&mdb__browser_info__mdb__browser_info__type_ctor_info_up_down_dir_0), Var_29, Dirs_30);
    }
    else
      NewDirs_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NewPath_4, (MR_Integer) 0))));
    mercury__list__reverse_2_p_0((MR_Word) (&mdb__browser_info__mdb__browser_info__type_ctor_info_up_down_dir_0), NewDirs_28, &RevDirs_34);
    mdb__browse__simplify_rev_dirs_4_p_0(RevDirs_34, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), &Dirs_7);
    Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 0))));
    Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 2))));
    Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 3))));
    Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 4))));
    Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 5))));
    Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 6))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Dirs_7));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_23));
    }
  }
}

static void MR_CALL 
mdb__browse__report_deref_error_5_p_0(
  MR_Word Debugger_6,
  MR_Word OKPath_7,
  MR_Word ErrorDir_8)
{
  {
    MR_String Msg_13;
    MR_String Var_24;
    MR_String Var_25;

    mdb__browser_info__write_string_debugger_4_p_0(Debugger_6, (MR_String) "error: ");
    if (!((OKPath_7 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_String Context_12;
      MR_String Var_19;
      MR_String Var_20;

      Var_20 = mdb__browse__down_dirs_to_string_1_f_0(OKPath_7);
      Var_19 = mercury__string__f_43_43_2_f_0(Var_20, (MR_String) ": ");
      Context_12 = mercury__string__f_43_43_2_f_0((MR_String) "in subdir ", Var_19);
      mdb__browser_info__write_string_debugger_4_p_0(Debugger_6, Context_12);
    }
    if (((MR_tag((MR_Word) ErrorDir_8)) == (MR_Integer) 1))
      Var_25 = ((MR_String) ((MR_hl_field(MR_mktag(1), ErrorDir_8, (MR_Integer) 0))));
    else
    {
      MR_Integer Num_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ErrorDir_8, (MR_Integer) 0))));

      Var_25 = mercury__string__int_to_string_1_f_0(Num_28);
    }
    Var_24 = mercury__string__f_43_43_2_f_0(Var_25, (MR_String) "\n");
    Msg_13 = mercury__string__f_43_43_2_f_0((MR_String) "there is no subterm ", Var_24);
    mdb__browser_info__write_string_debugger_4_p_0(Debugger_6, Msg_13);
  }
}

static void MR_CALL 
mdb__browse__help_3_p_0(
  MR_Word Debugger_4)
{
  {
    MR_String HelpMessage_6;

    mercury__string__append_list_2_p_0((MR_Word) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[38])), &HelpMessage_6);
    mdb__browser_info__write_string_debugger_4_p_0(Debugger_4, HelpMessage_6);
  }
}

static void MR_CALL 
mdb__browse__do_print_memory_addr_5_p_0(
  MR_Word Debugger_6,
  MR_Word Info_7,
  MR_Word MaybePath_8)
{
  {
    MR_Word Dirs0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1))));
    MR_Word Dirs_11;
    MR_Word DerefResult_13;
    MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0))));

    if ((MaybePath_8 == (MR_Word) ((MR_Unsigned) 0U)))
      Dirs_11 = Dirs0_10;
    else
    {
      MR_Word Path_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePath_8, (MR_Integer) 0))));
      MR_Word NewDirs_62;
      MR_Word RevDirs_68;

      if (((MR_tag((MR_Word) Path_12)) == (MR_Integer) 1))
      {
        MR_Word Var_63;
        MR_Word Dirs_64 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Path_12, (MR_Integer) 0))));

        Var_63 = mdb__browser_info__down_to_up_down_dirs_1_f_0(Dirs0_10);
        NewDirs_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&mdb__browser_info__mdb__browser_info__type_ctor_info_up_down_dir_0), Var_63, Dirs_64);
      }
      else
        NewDirs_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Path_12, (MR_Integer) 0))));
      mercury__list__reverse_2_p_0((MR_Word) (&mdb__browser_info__mdb__browser_info__type_ctor_info_up_down_dir_0), NewDirs_62, &RevDirs_68);
      mdb__browse__simplify_rev_dirs_4_p_0(RevDirs_68, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), &Dirs_11);
    }
    mdb__browse__deref_subterm_3_p_0(Var_34, Dirs_11, &DerefResult_13);
    if (((MR_tag((MR_Word) DerefResult_13)) == (MR_Integer) 1))
    {
      MR_Word OKPath_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DerefResult_13, (MR_Integer) 0))));
      MR_Word ErrorDir_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DerefResult_13, (MR_Integer) 1))));
      MR_String Msg_81;
      MR_String Var_90;
      MR_String Var_91;

      mdb__browser_info__write_string_debugger_4_p_0(Debugger_6, (MR_String) "error: ");
      if (!((OKPath_22 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        MR_String Context_80;
        MR_String Var_85;
        MR_String Var_86;

        Var_86 = mdb__browse__down_dirs_to_string_1_f_0(OKPath_22);
        Var_85 = mercury__string__f_43_43_2_f_0(Var_86, (MR_String) ": ");
        Context_80 = mercury__string__f_43_43_2_f_0((MR_String) "in subdir ", Var_85);
        mdb__browser_info__write_string_debugger_4_p_0(Debugger_6, Context_80);
      }
      if (((MR_tag((MR_Word) ErrorDir_23)) == (MR_Integer) 1))
        Var_91 = ((MR_String) ((MR_hl_field(MR_mktag(1), ErrorDir_23, (MR_Integer) 0))));
      else
      {
        MR_Integer Num_94 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ErrorDir_23, (MR_Integer) 0))));

        Var_91 = mercury__string__int_to_string_1_f_0(Num_94);
      }
      Var_90 = mercury__string__f_43_43_2_f_0(Var_91, (MR_String) "\n");
      Msg_81 = mercury__string__f_43_43_2_f_0((MR_String) "there is no subterm ", Var_90);
      mdb__browser_info__write_string_debugger_4_p_0(Debugger_6, Msg_81);
      mdb__browser_info__nl_debugger_3_p_0(Debugger_6);
    }
    else
    {
      MR_Word BrowserTerm_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DerefResult_13, (MR_Integer) 0))));
      MR_String Str_18;

      if (((MR_tag((MR_Word) BrowserTerm_14)) == (MR_Integer) 0))
      {
        MR_Word Univ_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BrowserTerm_14, (MR_Integer) 0))));
        MR_Box Value_16;
        MR_Integer Addr_17;
        MR_String Var_48;
        MR_String Var_56;
        MR_Word TypeInfo_46_46;

        Value_16 = mercury__univ__univ_value_1_f_0(&TypeInfo_46_46, Univ_15);
        mdb__browse__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_118_97_108_117_101_95_114_101_112_114_101_115_101_110_116_97_116_105_111_110_95_95_91_49_93_95_48_2_p_0(Value_16, &Addr_17);
        mercury__string__format__format_unsigned_int_component_nowidth_noprec_4_p_0((MR_Word) (&mdb__browse_scalar_common_5[8]), (MR_Integer) 2, Addr_17, &Var_48);
        Var_56 = mercury__string__f_43_43_2_f_0(Var_48, (MR_String) "\n");
        Str_18 = mercury__string__f_43_43_2_f_0((MR_String) "addr = ", Var_56);
      }
      else
        Str_18 = (MR_String) "synthetic terms have no addresses\n";
      mdb__browser_info__write_string_debugger_4_p_0(Debugger_6, Str_18);
    }
  }
}

static void MR_CALL 
mdb__browse__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_118_97_108_117_101_95_114_101_112_114_101_115_101_110_116_97_116_105_111_110_95_95_91_49_93_95_48_2_p_0(
  MR_Box HeadVar__1_1,
  MR_Integer * HeadVar__2_2)
{
  {
{
#define MR_PROC_LABEL mdb__browse__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_118_97_108_117_101_95_114_101_112_114_101_115_101_110_116_97_116_105_111_110_95_95_91_49_93_95_48_2_p_0

	MR_Word Value;
	MR_Integer Addr;

	Value = (MR_Word) HeadVar__1_1 ;
		{

    Addr = (MR_Integer) Value;


		;}
#undef MR_PROC_LABEL
	 *HeadVar__2_2  = Addr;
}
  }
}

static void MR_CALL 
mdb__browse__do_portray_7_p_0(
  MR_Word Debugger_8,
  MR_Word CallerType_9,
  MR_Word MaybeMaybeOptionTable_10,
  MR_Word Info_11,
  MR_Word MaybePath_12)
{
  if ((MaybeMaybeOptionTable_10 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    if ((MaybePath_12 == (MR_Word) ((MR_Unsigned) 0U)))
      mdb__browse__portray_6_p_0(Debugger_8, CallerType_9, (MR_Word) ((MR_Unsigned) 0U), Info_11);
    else
    {
      MR_Word Path_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePath_12, (MR_Integer) 0))));
      MR_Word Info_50;
      MR_Word Dirs0_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 1))));
      MR_Word Dirs_57;
      MR_Word NewDirs_76;
      MR_Word RevDirs_82;
      MR_Word Var_65;
      MR_Word Var_67;
      MR_Word Var_68;
      MR_Word Var_69;
      MR_Word Var_70;
      MR_Word Var_71;

      if (((MR_tag((MR_Word) Path_39)) == (MR_Integer) 1))
      {
        MR_Word Var_77;
        MR_Word Dirs_78 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Path_39, (MR_Integer) 0))));

        Var_77 = mdb__browser_info__down_to_up_down_dirs_1_f_0(Dirs0_56);
        NewDirs_76 = mercury__list__f_43_43_2_f_0((MR_Word) (&mdb__browser_info__mdb__browser_info__type_ctor_info_up_down_dir_0), Var_77, Dirs_78);
      }
      else
        NewDirs_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Path_39, (MR_Integer) 0))));
      mercury__list__reverse_2_p_0((MR_Word) (&mdb__browser_info__mdb__browser_info__type_ctor_info_up_down_dir_0), NewDirs_76, &RevDirs_82);
      mdb__browse__simplify_rev_dirs_4_p_0(RevDirs_82, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), &Dirs_57);
      Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 0))));
      Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 2))));
      Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 3))));
      Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 4))));
      Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 5))));
      Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 6))));
      {
        Info_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Info_50, 0) = ((MR_Box) (Var_65));
        MR_hl_field(MR_mktag(0), Info_50, 1) = ((MR_Box) (Dirs_57));
        MR_hl_field(MR_mktag(0), Info_50, 2) = ((MR_Box) (Var_67));
        MR_hl_field(MR_mktag(0), Info_50, 3) = ((MR_Box) (Var_68));
        MR_hl_field(MR_mktag(0), Info_50, 4) = ((MR_Box) (Var_69));
        MR_hl_field(MR_mktag(0), Info_50, 5) = ((MR_Box) (Var_70));
        MR_hl_field(MR_mktag(0), Info_50, 6) = ((MR_Box) (Var_71));
      }
      mdb__browse__portray_6_p_0(Debugger_8, CallerType_9, (MR_Word) ((MR_Unsigned) 0U), Info_50);
    }
  }
  else
  {
    MR_Word MaybeOptionTable_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMaybeOptionTable_10, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) MaybeOptionTable_14)) == (MR_Integer) 1))
    {
      MR_String Msg_30 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeOptionTable_14, (MR_Integer) 0))));

      mdb__browser_info__write_string_debugger_4_p_0(Debugger_8, Msg_30);
      mdb__browser_info__write_string_debugger_4_p_0(Debugger_8, (MR_String) "\n");
    }
    else
    {
      MR_Word OptionTable_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeOptionTable_14, (MR_Integer) 0))));
      MR_Word FormatResult_16;

      mdb__browse__interpret_format_options_2_p_0(OptionTable_15, &FormatResult_16);
      if (((MR_tag((MR_Word) FormatResult_16)) == (MR_Integer) 1))
      {
        MR_String Msg_18 = ((MR_String) ((MR_hl_field(MR_mktag(1), FormatResult_16, (MR_Integer) 0))));

        mdb__browser_info__write_string_debugger_4_p_0(Debugger_8, Msg_18);
        mdb__browser_info__write_string_debugger_4_p_0(Debugger_8, (MR_String) "\n");
      }
      else
      {
        MR_Word MaybeFormat_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FormatResult_16, (MR_Integer) 0))));

        mdb__browse__portray_maybe_path_7_p_0(Debugger_8, CallerType_9, MaybeFormat_17, Info_11, MaybePath_12);
      }
    }
  }
}

static void MR_CALL 
mdb__browse__portray_maybe_path_7_p_0(
  MR_Word Debugger_8,
  MR_Word Caller_9,
  MR_Word MaybeFormat_10,
  MR_Word Info_11,
  MR_Word MaybePath_12)
{
  if ((MaybePath_12 == (MR_Word) ((MR_Unsigned) 0U)))
    mdb__browse__portray_6_p_0(Debugger_8, Caller_9, MaybeFormat_10, Info_11);
  else
  {
    MR_Word Path_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePath_12, (MR_Integer) 0))));
    MR_Word Info_27;
    MR_Word Dirs0_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 1))));
    MR_Word Dirs_34;
    MR_Word NewDirs_53;
    MR_Word RevDirs_59;
    MR_Word Var_42;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;

    if (((MR_tag((MR_Word) Path_14)) == (MR_Integer) 1))
    {
      MR_Word Var_54;
      MR_Word Dirs_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Path_14, (MR_Integer) 0))));

      Var_54 = mdb__browser_info__down_to_up_down_dirs_1_f_0(Dirs0_33);
      NewDirs_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&mdb__browser_info__mdb__browser_info__type_ctor_info_up_down_dir_0), Var_54, Dirs_55);
    }
    else
      NewDirs_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Path_14, (MR_Integer) 0))));
    mercury__list__reverse_2_p_0((MR_Word) (&mdb__browser_info__mdb__browser_info__type_ctor_info_up_down_dir_0), NewDirs_53, &RevDirs_59);
    mdb__browse__simplify_rev_dirs_4_p_0(RevDirs_59, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), &Dirs_34);
    Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 0))));
    Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 2))));
    Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 3))));
    Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 4))));
    Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 5))));
    Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 6))));
    {
      Info_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Info_27, 0) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), Info_27, 1) = ((MR_Box) (Dirs_34));
      MR_hl_field(MR_mktag(0), Info_27, 2) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), Info_27, 3) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), Info_27, 4) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), Info_27, 5) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), Info_27, 6) = ((MR_Box) (Var_48));
    }
    mdb__browse__portray_6_p_0(Debugger_8, Caller_9, MaybeFormat_10, Info_27);
  }
}

static void MR_CALL 
mdb__browse__simplify_rev_dirs_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer STATE_VARIABLE_ToDelete_0_2,
  MR_Word STATE_VARIABLE_DownDirs_0_3,
  MR_Word * STATE_VARIABLE_DownDirs_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_DownDirs_4 = STATE_VARIABLE_DownDirs_0_3;
    else
    {
      MR_Word RevUpDownDir_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word RevUpDownDirs_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_DownDirs_22_22;
      MR_Integer STATE_VARIABLE_ToDelete_23_23;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_STATE_VARIABLE_ToDelete_0_2;
      MR_Word next_value_of_STATE_VARIABLE_DownDirs_0_3;

      switch (MR_tag((MR_Word) RevUpDownDir_9)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            STATE_VARIABLE_ToDelete_23_23 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_ToDelete_0_2 + (MR_Unsigned) (MR_Integer) 1);
            STATE_VARIABLE_DownDirs_22_22 = STATE_VARIABLE_DownDirs_0_3;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer ChildNum_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), RevUpDownDir_9, (MR_Integer) 0))));
            MR_Word DownDir_30;

            {
              DownDir_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), DownDir_30, 0) = ((MR_Box) (ChildNum_13));
            }
            succeeded = (STATE_VARIABLE_ToDelete_0_2 > (MR_Integer) 0);
            if (succeeded)
            {
              STATE_VARIABLE_ToDelete_23_23 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_ToDelete_0_2 - (MR_Unsigned) (MR_Integer) 1);
              STATE_VARIABLE_DownDirs_22_22 = STATE_VARIABLE_DownDirs_0_3;
            }
            else
            {
              {
                STATE_VARIABLE_DownDirs_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_DownDirs_22_22, 0) = ((MR_Box) (DownDir_30));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_DownDirs_22_22, 1) = ((MR_Box) (STATE_VARIABLE_DownDirs_0_3));
              }
              STATE_VARIABLE_ToDelete_23_23 = STATE_VARIABLE_ToDelete_0_2;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word DownDir_14;
            MR_String ChildName_15 = ((MR_String) ((MR_hl_field(MR_mktag(2), RevUpDownDir_9, (MR_Integer) 0))));

            {
              DownDir_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), DownDir_14, 0) = ((MR_Box) (ChildName_15));
            }
            succeeded = (STATE_VARIABLE_ToDelete_0_2 > (MR_Integer) 0);
            if (succeeded)
            {
              STATE_VARIABLE_ToDelete_23_23 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_ToDelete_0_2 - (MR_Unsigned) (MR_Integer) 1);
              STATE_VARIABLE_DownDirs_22_22 = STATE_VARIABLE_DownDirs_0_3;
            }
            else
            {
              {
                STATE_VARIABLE_DownDirs_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_DownDirs_22_22, 0) = ((MR_Box) (DownDir_14));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_DownDirs_22_22, 1) = ((MR_Box) (STATE_VARIABLE_DownDirs_0_3));
              }
              STATE_VARIABLE_ToDelete_23_23 = STATE_VARIABLE_ToDelete_0_2;
            }
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = RevUpDownDirs_10;
      next_value_of_STATE_VARIABLE_ToDelete_0_2 = STATE_VARIABLE_ToDelete_23_23;
      next_value_of_STATE_VARIABLE_DownDirs_0_3 = STATE_VARIABLE_DownDirs_22_22;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ToDelete_0_2 = next_value_of_STATE_VARIABLE_ToDelete_0_2;
      STATE_VARIABLE_DownDirs_0_3 = next_value_of_STATE_VARIABLE_DownDirs_0_3;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
mdb__browse__interpret_format_options_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_Format_3;

    succeeded = mdb__browse__bool_format_option_is_true_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_Format_3);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv0_Format_3));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
mdb__browse__interpret_format_options_2_p_0(
  MR_Word OptionTable_3,
  MR_Word * MaybeMaybeFormat_4)
{
  {
    MR_bool succeeded;
    MR_Word OptionAssocList_5;
    MR_Word TrueFormatOptions_6;

    mercury__map__to_assoc_list_2_p_0((MR_Word) (&mdb__parse__mdb__parse__type_ctor_info_format_option_0), (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), OptionTable_3, &OptionAssocList_5);
    mercury__list__filter_map_3_p_0((MR_Word) (&mdb__browse_scalar_common_1[1]), (MR_Word) (&mdb__parse__mdb__parse__type_ctor_info_format_option_0), (MR_Word) (&mdb__browse_scalar_common_1[6]), OptionAssocList_5, &TrueFormatOptions_6);
    if ((TrueFormatOptions_6 == (MR_Word) ((MR_Unsigned) 0U)))
      *MaybeMaybeFormat_4 = (MR_Word) (&mdb__browse_scalar_common_5[6]);
    else
    {
      MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TrueFormatOptions_6, (MR_Integer) 1))));
      MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TrueFormatOptions_6, (MR_Integer) 0))));

      if ((Var_23 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Format_8 = ((&mdb__browse_vector_common_11[0 + Var_24]))->mdb__browse__vector_common_type_11_0__vct_11_f_0;
        MR_Word Var_16;

        {
          Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (Format_8));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeMaybeFormat_4 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_16));
        }
      }
      else
        *MaybeMaybeFormat_4 = (MR_Word) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_5[7]));
    }
  }
}

void MR_CALL 
mdb__browse__print_browser_term_format_7_p_0(
  MR_Word Term_8,
  MR_Word OutputStream_9,
  MR_Word Caller_10,
  MR_Word Format_11,
  MR_Word State_12)
{
  {
    MR_bool succeeded;
    MR_Word Var_16;
    MR_Word Info_26;
    MR_Word OldStream_27;
    MR_Word Format_28;
    MR_Word Var_30;

    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (Format_11));
    }
    Info_26 = mdb__browser_info__init_5_f_0(Term_8, Caller_10, Var_16, (MR_Word) ((MR_Unsigned) 0U), State_12);
    mercury__io__set_output_stream_4_p_0(OutputStream_9, &OldStream_27);
    mdb__browser_info__get_format_4_p_0(Info_26, Caller_10, Var_16, &Format_28);
    succeeded = ((MR_tag((MR_Word) Term_8)) == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = (Format_28 == (MR_Integer) 0);
      succeeded = !(succeeded);
    }
    if (succeeded)
      mercury__io__nl_2_p_0();
    mdb__browse__portray_6_p_0((MR_Integer) 0, Caller_10, (MR_Word) ((MR_Unsigned) 0U), Info_26);
    mercury__io__set_output_stream_4_p_0(OldStream_27, &Var_30);
  }
}

void MR_CALL 
mdb__browse__print_browser_term_6_p_0(
  MR_Word Term_7,
  MR_Word OutputStream_8,
  MR_Word Caller_9,
  MR_Word State_10)
{
  {
    MR_bool succeeded;
    MR_Word Info_24;
    MR_Word OldStream_25;
    MR_Word Format_26;
    MR_Word Var_28;

    Info_24 = mdb__browser_info__init_5_f_0(Term_7, Caller_9, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), State_10);
    mercury__io__set_output_stream_4_p_0(OutputStream_8, &OldStream_25);
    mdb__browser_info__get_format_4_p_0(Info_24, Caller_9, (MR_Word) ((MR_Unsigned) 0U), &Format_26);
    succeeded = ((MR_tag((MR_Word) Term_7)) == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = (Format_26 == (MR_Integer) 0);
      succeeded = !(succeeded);
    }
    if (succeeded)
      mercury__io__nl_2_p_0();
    mdb__browse__portray_6_p_0((MR_Integer) 0, Caller_9, (MR_Word) ((MR_Unsigned) 0U), Info_24);
    mercury__io__set_output_stream_4_p_0(OldStream_25, &Var_28);
  }
}

static void MR_CALL 
mdb__browse__portray_6_p_0(
  MR_Word Debugger_7,
  MR_Word Caller_8,
  MR_Word MaybeFormat_9,
  MR_Word Info_10)
{
  {
    MR_Word Format_12;
    MR_Word Params_13;
    MR_Word SubResult_14;
    MR_Word Var_20;
    MR_Word Var_28;

    mdb__browser_info__get_format_4_p_0(Info_10, Caller_8, MaybeFormat_9, &Format_12);
    mdb__browser_info__get_format_params_4_p_0(Info_10, Caller_8, Format_12, &Params_13);
    Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_10, (MR_Integer) 0))));
    Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_10, (MR_Integer) 1))));
    mdb__browse__deref_subterm_3_p_0(Var_20, Var_28, &SubResult_14);
    if (((MR_tag((MR_Word) SubResult_14)) == (MR_Integer) 1))
    {
      MR_Word OKPath_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubResult_14, (MR_Integer) 0))));
      MR_Word ErrorDir_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubResult_14, (MR_Integer) 1))));
      MR_String Msg_49;
      MR_String Var_58;
      MR_String Var_59;

      mdb__browser_info__write_string_debugger_4_p_0(Debugger_7, (MR_String) "error: ");
      if (!((OKPath_16 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        MR_String Context_48;
        MR_String Var_53;
        MR_String Var_54;

        Var_54 = mdb__browse__down_dirs_to_string_1_f_0(OKPath_16);
        Var_53 = mercury__string__f_43_43_2_f_0(Var_54, (MR_String) ": ");
        Context_48 = mercury__string__f_43_43_2_f_0((MR_String) "in subdir ", Var_53);
        mdb__browser_info__write_string_debugger_4_p_0(Debugger_7, Context_48);
      }
      if (((MR_tag((MR_Word) ErrorDir_17)) == (MR_Integer) 1))
        Var_59 = ((MR_String) ((MR_hl_field(MR_mktag(1), ErrorDir_17, (MR_Integer) 0))));
      else
      {
        MR_Integer Num_62 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ErrorDir_17, (MR_Integer) 0))));

        Var_59 = mercury__string__int_to_string_1_f_0(Num_62);
      }
      Var_58 = mercury__string__f_43_43_2_f_0(Var_59, (MR_String) "\n");
      Msg_49 = mercury__string__f_43_43_2_f_0((MR_String) "there is no subterm ", Var_58);
      mdb__browser_info__write_string_debugger_4_p_0(Debugger_7, Msg_49);
    }
    else
    {
      MR_Word SubUniv_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubResult_14, (MR_Integer) 0))));

      switch (Format_12) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          mdb__browse__portray_flat_5_p_0(Debugger_7, SubUniv_15, Params_13);
          break;
        case (MR_Integer) 3:
          mdb__browse__portray_pretty_5_p_0(Debugger_7, SubUniv_15, Params_13);
          break;
        case (MR_Integer) 1:
          {
            MR_Word StreamDb_70;
            MR_Word BrowserDb_71;
            MR_String Str_72;
            MR_Integer Var_74;
            MR_Integer Var_79;

            mercury__io__get_stream_db_3_p_0(&StreamDb_70);
            BrowserDb_71 = (MR_Word) (StreamDb_70);
            Var_74 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Params_13, (MR_Integer) 2))));
            Var_79 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Params_13, (MR_Integer) 3))));
            mdb__sized_pretty__browser_term_to_string_line_5_p_0(BrowserDb_71, SubUniv_15, Var_74, Var_79, &Str_72);
            mdb__browser_info__write_string_debugger_4_p_0(Debugger_7, Str_72);
          }
          break;
        case (MR_Integer) 2:
          mdb__browse__portray_verbose_5_p_0(Debugger_7, SubUniv_15, Params_13);
          break;
      }
    }
    mdb__browser_info__nl_debugger_3_p_0(Debugger_7);
  }
}

static MR_String MR_CALL 
mdb__browse__down_dirs_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String HeadVar__2_2;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__2_2 = (MR_String) "";
    else
    {
      MR_Word Dir_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Dirs_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));

      if ((Dirs_4 == (MR_Word) ((MR_Unsigned) 0U)))
        if (((MR_tag((MR_Word) Dir_3)) == (MR_Integer) 1))
          HeadVar__2_2 = ((MR_String) ((MR_hl_field(MR_mktag(1), Dir_3, (MR_Integer) 0))));
        else
        {
          MR_Integer Num_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Dir_3, (MR_Integer) 0))));

          HeadVar__2_2 = mercury__string__int_to_string_1_f_0(Num_12);
        }
      else
      {
        MR_String Var_8;
        MR_String Var_9;
        MR_String Var_11;

        if (((MR_tag((MR_Word) Dir_3)) == (MR_Integer) 1))
          Var_8 = ((MR_String) ((MR_hl_field(MR_mktag(1), Dir_3, (MR_Integer) 0))));
        else
        {
          MR_Integer Num_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Dir_3, (MR_Integer) 0))));

          Var_8 = mercury__string__int_to_string_1_f_0(Num_14);
        }
        Var_11 = mdb__browse__down_dirs_to_string_1_f_0(Dirs_4);
        Var_9 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_11);
        HeadVar__2_2 = mercury__string__f_43_43_2_f_0(Var_8, Var_9);
      }
    }
    return HeadVar__2_2;
  }
}

static void MR_CALL 
mdb__browse__deref_subterm_3_p_0(
  MR_Word BrowserTerm_4,
  MR_Word Path_5,
  MR_Word * Result_6)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) BrowserTerm_4)) == (MR_Integer) 0))
    {
      MR_Word Univ_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BrowserTerm_4, (MR_Integer) 0))));
      MR_Word SubResult_8;

      mdb__browse__deref_subterm_2_4_p_0(Univ_7, Path_5, (MR_Word) ((MR_Unsigned) 0U), &SubResult_8);
      if (((MR_tag((MR_Word) SubResult_8)) == (MR_Integer) 1))
        *Result_6 = (MR_Word) (SubResult_8);
      else
      {
        MR_Word SubUniv_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubResult_8, (MR_Integer) 0))));
        MR_Word SubBrowserTerm_35;

        {
          SubBrowserTerm_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), SubBrowserTerm_35, 0) = ((MR_Box) (SubUniv_34));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *Result_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (SubBrowserTerm_35));
        }
      }
    }
    else
    {
      MR_Word Args_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BrowserTerm_4, (MR_Integer) 1))));
      MR_Word MaybeReturn_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BrowserTerm_4, (MR_Integer) 2))));

      if ((Path_5 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *Result_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (BrowserTerm_4));
        }
      else
      {
        MR_Word Step_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Path_5, (MR_Integer) 0))));
        MR_Word PathTail_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Path_5, (MR_Integer) 1))));
        MR_Word ArgUniv_17;

        if (((MR_tag((MR_Word) Step_13)) == (MR_Integer) 1))
        {
          MR_String Name_18 = ((MR_String) ((MR_hl_field(MR_mktag(1), Step_13, (MR_Integer) 0))));
          MR_Integer lo_0 = (MR_Integer) 0;
          MR_Integer hi_1 = (MR_Integer) 5;
          MR_Integer mid_2;
          MR_Integer result_3;

          // binary string simple lookup switch
          ;
          do
          {
            mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
            result_3 = MR_strcmp(Name_18, ((&mdb__browse_vector_common_10[4 + mid_2]))->mdb__browse__vector_common_type_10_0__vct_10_f_0);
            if ((result_3 == (MR_Integer) 0))
            {
              succeeded = MR_TRUE;
              // jump out of search loop
              ;
              goto label_0;
            }
            else
            if ((result_3 < (MR_Integer) 0))
              hi_1 = (MR_Integer) ((MR_Unsigned) mid_2 - (MR_Unsigned) (MR_Integer) 1);
            else
              lo_0 = (MR_Integer) ((MR_Unsigned) mid_2 + (MR_Unsigned) (MR_Integer) 1);
          }
          while ((lo_0 <= hi_1));
          succeeded = MR_FALSE;
        label_0:;
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) MaybeReturn_11)) == (MR_Integer) 1);
            if (succeeded)
              ArgUniv_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeReturn_11, (MR_Integer) 0))));
          }
        }
        else
        {
          MR_Integer N_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Step_13, (MR_Integer) 0))));
          MR_Word ReturnValue_16;
          MR_Integer Var_19;
          MR_Integer Var_20;

          Var_19 = mercury__list__length_1_f_0((MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), Args_10);
          Var_20 = (MR_Integer) ((MR_Unsigned) N_15 - (MR_Unsigned) Var_19);
          succeeded = (Var_20 == (MR_Integer) 1);
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) MaybeReturn_11)) == (MR_Integer) 1);
            if (succeeded)
              ReturnValue_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeReturn_11, (MR_Integer) 0))));
          }
          if (succeeded)
          {
            ArgUniv_17 = ReturnValue_16;
            succeeded = MR_TRUE;
          }
          else
          {
            MR_Box conv0_ArgUniv_17;

            succeeded = mercury__list__index1_3_p_0((MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), Args_10, N_15, &conv0_ArgUniv_17);
            if (succeeded)
            {
              ArgUniv_17 = ((MR_Word) (conv0_ArgUniv_17));
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
        {
          MR_Word Var_21;
          MR_Word SubResult_25;

          {
            Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (Step_13));
            MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mdb__browse__deref_subterm_2_4_p_0(ArgUniv_17, PathTail_14, Var_21, &SubResult_25);
          if (((MR_tag((MR_Word) SubResult_25)) == (MR_Integer) 1))
            *Result_6 = (MR_Word) (SubResult_25);
          else
          {
            MR_Word SubUniv_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubResult_25, (MR_Integer) 0))));
            MR_Word SubBrowserTerm_41;

            {
              SubBrowserTerm_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), SubBrowserTerm_41, 0) = ((MR_Box) (SubUniv_40));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *Result_6 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (SubBrowserTerm_41));
            }
          }
        }
        else
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *Result_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Step_13));
          }
        }
      }
    }
  }
}

static void MR_CALL 
mdb__browse__deref_subterm_2_4_p_0(
  MR_Word Univ_5,
  MR_Word Path_6,
  MR_Word RevPath0_7,
  MR_Word * Result_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((Path_6 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *Result_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Univ_5));
      }
    else
    {
      MR_Word Dir_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Path_6, (MR_Integer) 0))));
      MR_Word Dirs_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Path_6, (MR_Integer) 1))));
      MR_Word MaybeValue_13;

      if (((MR_tag((MR_Word) Dir_9)) == (MR_Integer) 1))
      {
        MR_Word TypeInfo_29_29;
        MR_String Name_14 = ((MR_String) ((MR_hl_field(MR_mktag(1), Dir_9, (MR_Integer) 0))));
        MR_Box Var_17;

        Var_17 = mercury__univ__univ_value_1_f_0(&TypeInfo_29_29, Univ_5);
        mercury__deconstruct__named_arg_cc_3_p_0(TypeInfo_29_29, Var_17, Name_14, &MaybeValue_13);
      }
      else
      {
        MR_Integer N_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Dir_9, (MR_Integer) 0))));
        MR_Word TypeCtor_12;
        MR_Word Var_18;
        MR_String Var_19;
        MR_String Var_20;

        Var_18 = mercury__univ__univ_type_1_f_0(Univ_5);
        TypeCtor_12 = mercury__type_desc__type_ctor_1_f_0(Var_18);
        Var_19 = mercury__type_desc__type_ctor_name_1_f_0(TypeCtor_12);
        succeeded = (strcmp(Var_19, (MR_String) "array") == 0);
        if (succeeded)
        {
          Var_20 = mercury__type_desc__type_ctor_module_name_1_f_0(TypeCtor_12);
          succeeded = (strcmp(Var_20, (MR_String) "array") == 0);
        }
        if (succeeded)
        {
          MR_Word TypeInfo_27_27;
          MR_Box Var_21;

          Var_21 = mercury__univ__univ_value_1_f_0(&TypeInfo_27_27, Univ_5);
          mercury__deconstruct__arg_cc_3_p_0(TypeInfo_27_27, Var_21, N_11, &MaybeValue_13);
        }
        else
        {
          MR_Word TypeInfo_28_28;
          MR_Box Var_22;
          MR_Integer Var_23;

          Var_22 = mercury__univ__univ_value_1_f_0(&TypeInfo_28_28, Univ_5);
          Var_23 = (MR_Integer) ((MR_Unsigned) N_11 - (MR_Unsigned) (MR_Integer) 1);
          mercury__deconstruct__arg_cc_3_p_0(TypeInfo_28_28, Var_22, Var_23, &MaybeValue_13);
        }
      }
      if ((MaybeValue_13 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_25;

        Var_25 = mercury__list__reverse_1_f_0((MR_Word) (&mdb__browser_info__mdb__browser_info__type_ctor_info_down_dir_0), RevPath0_7);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *Result_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_25));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Dir_9));
        }
      }
      else
      {
        MR_Word TypeInfo_30_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeValue_13, (MR_Integer) 0))));
        MR_Box Value_15 = (MR_hl_field(MR_mktag(1), MaybeValue_13, (MR_Integer) 1));
        MR_Word ArgN_16;
        MR_Word Var_26;
        MR_Word next_value_of_Univ_5;
        MR_Word next_value_of_Path_6;
        MR_Word next_value_of_RevPath0_7;

        ArgN_16 = mercury__univ__univ_1_f_0(TypeInfo_30_30, Value_15);
        {
          Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (Dir_9));
          MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (RevPath0_7));
        }
        // direct tailcall eliminated
        ;
        next_value_of_Univ_5 = ArgN_16;
        next_value_of_Path_6 = Dirs_10;
        next_value_of_RevPath0_7 = Var_26;
        Univ_5 = next_value_of_Univ_5;
        Path_6 = next_value_of_Path_6;
        RevPath0_7 = next_value_of_RevPath0_7;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
mdb__browse__portray_pretty_5_p_0(
  MR_Word Debugger_6,
  MR_Word BrowserTerm_7,
  MR_Word Params_8)
{
  {
    MR_bool succeeded;
    MR_Integer Var_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Params_8, (MR_Integer) 2))));
    MR_Integer Var_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Params_8, (MR_Integer) 0))));
    MR_Integer Var_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Params_8, (MR_Integer) 1))));
    MR_Integer Var_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Params_8, (MR_Integer) 3))));
    MR_Word Doc_40;
    MR_Word Formatters_44;
    MR_Word Limit_45;
    MR_Word Params_46;
    MR_Integer Var_48;
    MR_Word Var_49;
    MR_Box conv0_STATE_VARIABLE_IO_11;

    if (((MR_tag((MR_Word) BrowserTerm_7)) == (MR_Integer) 0))
    {
      MR_Word Univ_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BrowserTerm_7, (MR_Integer) 0))));

      {
        Doc_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Doc_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), Doc_40, 1) = ((MR_Box) (Univ_39));
      }
    }
    else
    {
      MR_String Functor_41 = ((MR_String) ((MR_hl_field(MR_mktag(1), BrowserTerm_7, (MR_Integer) 0))));
      MR_Word Args_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BrowserTerm_7, (MR_Integer) 1))));
      MR_Word MaybeReturn_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BrowserTerm_7, (MR_Integer) 2))));
      MR_Word Doc0_55;

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
          result_3 = MR_strcmp(Functor_41, ((&mdb__browse_vector_common_10[0 + mid_2]))->mdb__browse__vector_common_type_10_0__vct_10_f_0);
          if ((result_3 == (MR_Integer) 0))
          {
            succeeded = MR_TRUE;
            // jump out of search loop
            ;
            goto label_0;
          }
          else
          if ((result_3 < (MR_Integer) 0))
            hi_1 = (MR_Integer) ((MR_Unsigned) mid_2 - (MR_Unsigned) (MR_Integer) 1);
          else
            lo_0 = (MR_Integer) ((MR_Unsigned) mid_2 + (MR_Unsigned) (MR_Integer) 1);
        }
        while ((lo_0 <= hi_1));
        succeeded = MR_FALSE;
      label_0:;
      }
      if (!(succeeded))
      {
        succeeded = mercury__string__contains_char_2_p_0(Functor_41, (MR_Char) 46);
        succeeded = !(succeeded);
      }
      if (succeeded)
        {
          Doc0_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Doc0_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), Doc0_55, 1) = ((MR_Box) (Functor_41));
          MR_hl_field(MR_mktag(3), Doc0_55, 2) = ((MR_Box) (Args_42));
        }
      else
      {
        MR_Word FunctorDoc_56;
        MR_Word Var_61;

        Var_61 = mercury__string__split_at_char_2_f_0((MR_Char) 46, Functor_41);
        FunctorDoc_56 = mdb__browse__qualified_functor_to_doc_1_f_0(Var_61);
        if ((Args_42 == (MR_Word) ((MR_Unsigned) 0U)))
          Doc0_55 = FunctorDoc_56;
        else
        {
          MR_Word Var_63;
          MR_Word Var_64;
          MR_Word Var_67;
          MR_Word Var_68;
          MR_Word Var_69;

          Var_69 = mercury__pretty_printer__group_1_f_0((MR_Word) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[41])));
          {
            Var_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_68, 1) = ((MR_Box) (Args_42));
            MR_hl_field(MR_mktag(3), Var_68, 2) = ((MR_Box) (Var_69));
          }
          {
            Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (Var_68));
            MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[47])));
          }
          {
            Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_5[3])));
            MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (Var_67));
          }
          {
            Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (FunctorDoc_56));
            MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (Var_64));
          }
          Doc0_55 = mercury__pretty_printer__indent_1_f_0(Var_63);
        }
      }
      if ((MaybeReturn_43 == (MR_Word) ((MR_Unsigned) 0U)))
        Doc_40 = Doc0_55;
      else
      {
        MR_Word Return_59 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeReturn_43, (MR_Integer) 0))));
        MR_Word Var_80;
        MR_Word Var_81;
        MR_Word Var_84;
        MR_Word Var_85;
        MR_Word Var_86;

        {
          Var_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_86, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), Var_86, 1) = ((MR_Box) (Return_59));
        }
        Var_85 = mercury__pretty_printer__format_arg_1_f_0(Var_86);
        {
          Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (Var_85));
          MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_5[5])));
          MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) (Var_84));
        }
        {
          Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (Doc0_55));
          MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) (Var_81));
        }
        {
          Doc_40 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Doc_40, 0) = ((MR_Box) (Var_80));
        }
      }
    }
    mercury__pretty_printer__get_default_formatter_map_3_p_0(&Formatters_44);
    Var_48 = (MR_Integer) 0;
    succeeded = (Var_17 > Var_48);
    if (succeeded)
      {
        Limit_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Limit_45, 0) = ((MR_Box) (Var_17));
      }
    else
      {
        Limit_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Limit_45, 0) = ((MR_Box) (Var_18));
      }
    {
      Params_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Params_46, 0) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), Params_46, 1) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), Params_46, 2) = ((MR_Box) (Limit_45));
    }
    Var_49 = (MR_Integer) 2;
    mercury__pretty_printer__put_doc_7_p_1((MR_Word) (&mdb__browse_scalar_common_3[4]), ((MR_Box) (Debugger_6)), Var_49, Formatters_44, Params_46, Doc_40, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_11);
  }
}

static MR_Word MR_CALL 
mdb__browse__qualified_functor_to_doc_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__2_2 = (MR_Word) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_5[1]));
    else
    {
      MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_String Var_22 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

      if ((Var_21 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_String Var_6;

        Var_6 = mercury__term_io__quoted_atom_1_f_0(Var_22);
        {
          HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), HeadVar__2_2, 0) = ((MR_Box) (Var_6));
        }
      }
      else
      {
        MR_Word Var_11;
        MR_Word Var_12;
        MR_String Var_13;
        MR_Word Var_14;
        MR_Word Var_17;
        MR_Word Var_18;

        Var_13 = mercury__term_io__quoted_atom_1_f_0(Var_22);
        {
          Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_12, 0) = ((MR_Box) (Var_13));
        }
        Var_18 = mdb__browse__qualified_functor_to_doc_1_f_0(Var_21);
        {
          Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (Var_18));
          MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_5[2])));
          MR_hl_field(MR_mktag(1), Var_14, 1) = ((MR_Box) (Var_17));
        }
        {
          Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_11, 0) = ((MR_Box) (Var_12));
          MR_hl_field(MR_mktag(1), Var_11, 1) = ((MR_Box) (Var_14));
        }
        {
          HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), HeadVar__2_2, 0) = ((MR_Box) (Var_11));
        }
      }
    }
    return HeadVar__2_2;
  }
}

static void MR_CALL 
mdb__browse__portray_verbose_5_p_0(
  MR_Word Debugger_6,
  MR_Word BrowserTerm_7,
  MR_Word Params_8)
{
  {
    MR_Word StreamDb_10;
    MR_Word BrowserDb_11;
    MR_String Str_12;
    MR_Integer Var_16;
    MR_Integer Var_21;
    MR_Integer Var_22;
    MR_Integer Var_23;

    mercury__io__get_stream_db_3_p_0(&StreamDb_10);
    BrowserDb_11 = (MR_Word) (StreamDb_10);
    Var_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Params_8, (MR_Integer) 0))));
    Var_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Params_8, (MR_Integer) 1))));
    Var_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Params_8, (MR_Integer) 2))));
    Var_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Params_8, (MR_Integer) 3))));
    mdb__browse__browser_term_to_string_verbose_7_p_0(BrowserDb_11, BrowserTerm_7, Var_16, Var_21, Var_22, Var_23, &Str_12);
    mdb__browser_info__write_string_debugger_4_p_0(Debugger_6, Str_12);
  }
}

static void MR_CALL 
mdb__browse__browser_term_to_string_verbose_7_p_0(
  MR_Word BrowserDb_8,
  MR_Word BrowserTerm_9,
  MR_Integer MaxSize_10,
  MR_Integer MaxDepth_11,
  MR_Integer X_12,
  MR_Integer Y_13,
  MR_String * Str_14)
{
  {
    MR_bool succeeded;
    MR_Word Frame_18;
    MR_Word ClippedFrame_19;
    MR_Word Var_20;
    MR_Word MaybeFunctorArityArgs_29;
    MR_Word MaybeReturn_30;
    MR_String Functor_31;
    MR_Word Args0_33;
    MR_Tuple Var_41;

    mdb__browser_info__limited_deconstruct_browser_term_cc_5_p_0(BrowserDb_8, BrowserTerm_9, MaxSize_10, &MaybeFunctorArityArgs_29, &MaybeReturn_30);
    succeeded = ((MR_Integer) 0 < MaxSize_10);
    if (succeeded)
    {
      succeeded = ((MR_Integer) 0 < MaxDepth_11);
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) MaybeFunctorArityArgs_29)) == (MR_Integer) 1);
        if (succeeded)
        {
          Var_41 = ((MR_Tuple) ((MR_hl_field(MR_mktag(1), MaybeFunctorArityArgs_29, (MR_Integer) 0))));
          Functor_31 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_41, (MR_Integer) 0))));
          Args0_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_41, (MR_Integer) 2))));
          succeeded = MR_TRUE;
        }
      }
    }
    if (succeeded)
    {
      MR_Word Args_35;
      MR_Word ArgsFrame_39;
      MR_Word Var_46;
      MR_Integer _NewSize_17;

      if ((MaybeReturn_30 == (MR_Word) ((MR_Unsigned) 0U)))
        Args_35 = Args0_33;
      else
      {
        MR_Word Return_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeReturn_30, (MR_Integer) 0))));
        MR_Word Var_42;

        {
          Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Return_34));
          MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__list__append_3_p_1((MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), Args0_33, Var_42, &Args_35);
      }
      mdb__browse__args_to_string_verbose_list_9_p_0(BrowserDb_8, Args_35, (MR_Integer) 1, MaxSize_10, (MR_Integer) ((MR_Unsigned) (MR_Integer) 0 + (MR_Unsigned) (MR_Integer) 1), &_NewSize_17, MaxDepth_11, (MR_Integer) ((MR_Unsigned) (MR_Integer) 0 + (MR_Unsigned) (MR_Integer) 1), &ArgsFrame_39);
      {
        Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Functor_31));
        MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Frame_18 = mdb__frame__vglue_2_f_0(Var_46, ArgsFrame_39);
    }
    else
    {
      MR_String Line_40;
      MR_String Functor_53;
      MR_Integer Arity_54;
      MR_Word IsFunc_55;

      mdb__browser_info__functor_browser_term_cc_5_p_0(BrowserDb_8, BrowserTerm_9, &Functor_53, &Arity_54, &IsFunc_55);
      succeeded = (Arity_54 == (MR_Integer) 0);
      if (succeeded)
        Line_40 = Functor_53;
      else
      {
        MR_String ArityStr_56;

        mercury__string__int_to_string_2_p_0(Arity_54, &ArityStr_56);
        switch (IsFunc_55) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_57;
              MR_Word Var_58;
              MR_Word Var_60;

              {
                Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (ArityStr_56));
                MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) ((MR_String) "/"));
                MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (Var_60));
              }
              {
                Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (Functor_53));
                MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (Var_58));
              }
              mercury__string__append_list_2_p_0(Var_57, &Line_40);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_62;
              MR_Word Var_63;
              MR_Word Var_65;

              {
                Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (ArityStr_56));
                MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[44])));
              }
              {
                Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) ((MR_String) "/"));
                MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (Var_65));
              }
              {
                Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (Functor_53));
                MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (Var_63));
              }
              mercury__string__append_list_2_p_0(Var_62, &Line_40);
            }
            break;
        }
      }
      {
        Frame_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Frame_18, 0) = ((MR_Box) (Line_40));
        MR_hl_field(MR_mktag(1), Frame_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    {
      Var_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (X_12));
      MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (Y_13));
    }
    ClippedFrame_19 = mdb__frame__clip_2_f_0(Var_20, Frame_18);
    mdb__browse__unlines_2_p_0(ClippedFrame_19, Str_14);
  }
}

static void MR_CALL 
mdb__browse__unlines_2_p_0(
  MR_Word HeadVar__1_1,
  MR_String * HeadVar__2_2)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_String) "";
  else
  {
    MR_String Line_3 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Lines_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_String NLine_6;
    MR_String Strs_7;

    mercury__string__append_3_p_2(Line_3, (MR_String) "\n", &NLine_6);
    mdb__browse__unlines_2_p_0(Lines_4, &Strs_7);
    mercury__string__append_3_p_2(NLine_6, Strs_7, HeadVar__2_2);
  }
}

static void MR_CALL 
mdb__browse__args_to_string_verbose_list_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Integer HeadVar__4_4,
  MR_Integer CurSize_5,
  MR_Integer * NewSize_6,
  MR_Integer HeadVar__7_7,
  MR_Integer HeadVar__8_8,
  MR_Word * HeadVar__9_9)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__9_9 = (MR_Word) ((MR_Unsigned) 0U);
    *NewSize_6 = CurSize_5;
  }
  else
  {
    MR_Word Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

    if ((Var_73 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word TreeFrame_26;
      MR_String ArgNumS_27;
      MR_String LastBranchS_28;
      MR_Word Var_30;
      MR_Word Var_31;
      MR_Word Var_35;

      {
        Var_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (Var_74));
      }
      mdb__browse__browser_term_to_string_verbose_2_8_p_0(HeadVar__1_1, Var_30, HeadVar__4_4, CurSize_5, NewSize_6, HeadVar__7_7, HeadVar__8_8, &TreeFrame_26);
      mercury__string__int_to_string_2_p_0(HeadVar__3_3, &ArgNumS_27);
      {
        Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (ArgNumS_27));
        MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[46])));
      }
      mercury__string__append_list_2_p_0(Var_31, &LastBranchS_28);
      {
        Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (LastBranchS_28));
        MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      *HeadVar__9_9 = mdb__frame__hglue_2_f_0(Var_35, TreeFrame_26);
    }
    else
    {
      MR_Integer NewSize1_48;
      MR_Word TreeFrame_49;
      MR_Integer ArgNum1_50;
      MR_Word RestTreesFrame_52;
      MR_String ArgNumS_53;
      MR_String BranchFrameS_54;
      MR_Integer Height_55;
      MR_Word VBranchFrame_56;
      MR_Word LeftFrame_57;
      MR_Word TopFrame_58;
      MR_Word Var_60;
      MR_Word Var_63;
      MR_Integer Var_67;
      MR_Word Var_70;

      {
        Var_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (Var_74));
      }
      mdb__browse__browser_term_to_string_verbose_2_8_p_0(HeadVar__1_1, Var_60, HeadVar__4_4, CurSize_5, &NewSize1_48, HeadVar__7_7, HeadVar__8_8, &TreeFrame_49);
      ArgNum1_50 = (MR_Integer) ((MR_Unsigned) HeadVar__3_3 + (MR_Unsigned) (MR_Integer) 1);
      mdb__browse__args_to_string_verbose_list_9_p_0(HeadVar__1_1, Var_73, ArgNum1_50, HeadVar__4_4, NewSize1_48, NewSize_6, HeadVar__7_7, HeadVar__8_8, &RestTreesFrame_52);
      mercury__string__int_to_string_2_p_0(HeadVar__3_3, &ArgNumS_53);
      {
        Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (ArgNumS_53));
        MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[46])));
      }
      mercury__string__append_list_2_p_0(Var_63, &BranchFrameS_54);
      Var_67 = mdb__frame__vsize_1_f_0(TreeFrame_49);
      Height_55 = (MR_Integer) ((MR_Unsigned) Var_67 - (MR_Unsigned) (MR_Integer) 1);
      mercury__list__duplicate_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Height_55, ((MR_Box) ((MR_String) "|")), &VBranchFrame_56);
      {
        Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (BranchFrameS_54));
        MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      LeftFrame_57 = mdb__frame__vglue_2_f_0(Var_70, VBranchFrame_56);
      TopFrame_58 = mdb__frame__hglue_2_f_0(LeftFrame_57, TreeFrame_49);
      *HeadVar__9_9 = mdb__frame__vglue_2_f_0(TopFrame_58, RestTreesFrame_52);
    }
  }
}

static void MR_CALL 
mdb__browse__browser_term_to_string_verbose_2_8_p_0(
  MR_Word BrowserDb_9,
  MR_Word BrowserTerm_10,
  MR_Integer MaxSize_11,
  MR_Integer CurSize_12,
  MR_Integer * NewSize_13,
  MR_Integer MaxDepth_14,
  MR_Integer CurDepth_15,
  MR_Word * Frame_16)
{
  {
    MR_bool succeeded;
    MR_Word MaybeFunctorArityArgs_17;
    MR_Word MaybeReturn_18;
    MR_String Functor_19;
    MR_Word Args0_21;
    MR_Tuple Var_29;

    mdb__browser_info__limited_deconstruct_browser_term_cc_5_p_0(BrowserDb_9, BrowserTerm_10, MaxSize_11, &MaybeFunctorArityArgs_17, &MaybeReturn_18);
    succeeded = (CurSize_12 < MaxSize_11);
    if (succeeded)
    {
      succeeded = (CurDepth_15 < MaxDepth_14);
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) MaybeFunctorArityArgs_17)) == (MR_Integer) 1);
        if (succeeded)
        {
          Var_29 = ((MR_Tuple) ((MR_hl_field(MR_mktag(1), MaybeFunctorArityArgs_17, (MR_Integer) 0))));
          Functor_19 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_29, (MR_Integer) 0))));
          Args0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_29, (MR_Integer) 2))));
          succeeded = MR_TRUE;
        }
      }
    }
    if (succeeded)
    {
      MR_Word Args_23;
      MR_Integer CurSize1_24;
      MR_Integer CurDepth1_25;
      MR_Word ArgsFrame_27;
      MR_Word Var_34;

      if ((MaybeReturn_18 == (MR_Word) ((MR_Unsigned) 0U)))
        Args_23 = Args0_21;
      else
      {
        MR_Word Return_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeReturn_18, (MR_Integer) 0))));
        MR_Word Var_30;

        {
          Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Return_22));
          MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__list__append_3_p_1((MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), Args0_21, Var_30, &Args_23);
      }
      CurSize1_24 = (MR_Integer) ((MR_Unsigned) CurSize_12 + (MR_Unsigned) (MR_Integer) 1);
      CurDepth1_25 = (MR_Integer) ((MR_Unsigned) CurDepth_15 + (MR_Unsigned) (MR_Integer) 1);
      mdb__browse__args_to_string_verbose_list_9_p_0(BrowserDb_9, Args_23, (MR_Integer) 1, MaxSize_11, CurSize1_24, NewSize_13, MaxDepth_14, CurDepth1_25, &ArgsFrame_27);
      {
        Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Functor_19));
        MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      *Frame_16 = mdb__frame__vglue_2_f_0(Var_34, ArgsFrame_27);
    }
    else
    {
      MR_String Line_28;
      MR_String Functor_41;
      MR_Integer Arity_42;
      MR_Word IsFunc_43;

      mdb__browser_info__functor_browser_term_cc_5_p_0(BrowserDb_9, BrowserTerm_10, &Functor_41, &Arity_42, &IsFunc_43);
      succeeded = (Arity_42 == (MR_Integer) 0);
      if (succeeded)
        Line_28 = Functor_41;
      else
      {
        MR_String ArityStr_44;

        mercury__string__int_to_string_2_p_0(Arity_42, &ArityStr_44);
        switch (IsFunc_43) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_45;
              MR_Word Var_46;
              MR_Word Var_48;

              {
                Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (ArityStr_44));
                MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) ((MR_String) "/"));
                MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (Var_48));
              }
              {
                Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Functor_41));
                MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (Var_46));
              }
              mercury__string__append_list_2_p_0(Var_45, &Line_28);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_50;
              MR_Word Var_51;
              MR_Word Var_53;

              {
                Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (ArityStr_44));
                MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[44])));
              }
              {
                Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) ((MR_String) "/"));
                MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (Var_53));
              }
              {
                Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Functor_41));
                MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Var_51));
              }
              mercury__string__append_list_2_p_0(Var_50, &Line_28);
            }
            break;
        }
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *Frame_16 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Line_28));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      *NewSize_13 = CurSize_12;
    }
  }
}

static void MR_CALL 
mdb__browse__portray_flat_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    mdb__browse__put_comma_space_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), wrapper_arg_1, wrapper_arg_2, wrapper_arg_3);
  }
}

static void MR_CALL 
mdb__browse__portray_flat_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    mdb__browse__write_univ_or_unbound_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), wrapper_arg_1, ((MR_Word) (wrapper_arg_2)), wrapper_arg_3, wrapper_arg_4);
  }
}

static void MR_CALL 
mdb__browse__portray_flat_5_p_0(
  MR_Word Debugger_6,
  MR_Word BrowserTerm_7,
  MR_Word Params_8)
{
  {
    MR_bool succeeded;
    MR_Integer RemainingSize_10;

    mdb__browse__browser_term_size_left_from_max_3_p_0(BrowserTerm_7, (MR_Integer) 60, &RemainingSize_10);
    succeeded = (RemainingSize_10 >= (MR_Integer) 0);
    if (succeeded)
    {
      MR_Word Stream_11;

      mercury__io__output_stream_3_p_0(&Stream_11);
      if (((MR_tag((MR_Word) BrowserTerm_7)) == (MR_Integer) 0))
      {
        MR_Word Univ_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BrowserTerm_7, (MR_Integer) 0))));
        MR_Box conv0_STATE_VARIABLE_IO_16;

        mercury__stream__string_writer__write_univ_5_p_2((MR_Word) (&mdb__browse_scalar_common_3[2]), (MR_Word) (&mdb__browse_scalar_common_3[3]), ((MR_Box) (Stream_11)), (MR_Integer) 2, Univ_34, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_16);
      }
      else
      {
        MR_String Functor_41 = ((MR_String) ((MR_hl_field(MR_mktag(1), BrowserTerm_7, (MR_Integer) 0))));
        MR_Word Args_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BrowserTerm_7, (MR_Integer) 1))));
        MR_Word MaybeReturn_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BrowserTerm_7, (MR_Integer) 2))));
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mdb__browse_scalar_common_3[2]), (MR_Integer) 0)), (MR_Integer) 5))));
        MR_Box conv2_STATE_VARIABLE_IO_22_50;

        func_1(((MR_Box) ((MR_Word) (&mdb__browse_scalar_common_3[2]))), ((MR_Box) (Stream_11)), ((MR_Box) (Functor_41)), ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_22_50);
        if (!((Args_42 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          MR_Word TypeClassInfo_for_output_69;
          void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mdb__browse_scalar_common_3[2]), (MR_Integer) 0)), (MR_Integer) 5))));
          MR_Box conv4_STATE_VARIABLE_IO_24_52;
          MR_Box conv5_STATE_VARIABLE_IO_27_55;
          void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv7_STATE_VARIABLE_IO_29_57;

          func_3(((MR_Box) ((MR_Word) (&mdb__browse_scalar_common_3[2]))), ((MR_Box) (Stream_11)), ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_24_52);
          mercury__private_builtin__superclass_from_typeclass_info_3_p_0((MR_Word) (&mdb__browse_scalar_common_3[2]), (MR_Integer) 1, &TypeClassInfo_for_output_69);
          mercury__stream__put_list_6_p_2((MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), TypeClassInfo_for_output_69, ((MR_Box) (Stream_11)), (MR_Word) (&mdb__browse_scalar_common_3[5]), (MR_Word) (&mdb__browse_scalar_common_2[3]), Args_42, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_27_55);
          func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mdb__browse_scalar_common_3[2]), (MR_Integer) 0)), (MR_Integer) 5))));
          func_6(((MR_Box) ((MR_Word) (&mdb__browse_scalar_common_3[2]))), ((MR_Box) (Stream_11)), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_29_57);
        }
        if (!((MaybeReturn_43 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          MR_Word Return_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeReturn_43, (MR_Integer) 0))));
          void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mdb__browse_scalar_common_3[2]), (MR_Integer) 0)), (MR_Integer) 5))));
          MR_Box conv9_STATE_VARIABLE_IO_31_59;
          MR_Box conv10_STATE_VARIABLE_IO_16;

          func_8(((MR_Box) ((MR_Word) (&mdb__browse_scalar_common_3[2]))), ((MR_Box) (Stream_11)), ((MR_Box) ((MR_String) " = ")), ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_IO_31_59);
          mercury__stream__string_writer__write_univ_5_p_2((MR_Word) (&mdb__browse_scalar_common_3[2]), (MR_Word) (&mdb__browse_scalar_common_3[3]), ((MR_Box) (Stream_11)), (MR_Integer) 2, Return_47, ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_IO_16);
        }
      }
    }
    else
    {
      MR_Word StreamDb_12;
      MR_Word BrowserDb_13;
      MR_String Str_14;
      MR_Integer Var_22;
      MR_Integer Var_25;

      mercury__io__get_stream_db_3_p_0(&StreamDb_12);
      BrowserDb_13 = (MR_Word) (StreamDb_12);
      Var_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Params_8, (MR_Integer) 0))));
      Var_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Params_8, (MR_Integer) 1))));
      mdb__browse__browser_term_to_string_5_p_0(BrowserDb_13, BrowserTerm_7, Var_22, Var_25, &Str_14);
      mdb__browser_info__write_string_debugger_4_p_0(Debugger_6, Str_14);
    }
  }
}

static void MR_CALL 
mdb__browse__browser_term_to_string_5_p_0(
  MR_Word BrowserDb_6,
  MR_Word BrowserTerm_7,
  MR_Integer MaxSize_8,
  MR_Integer MaxDepth_9,
  MR_String * Str_10)
{
  {
    MR_bool succeeded;
    MR_Word MaybeFunctorArityArgs_22;
    MR_Word MaybeReturn_23;
    MR_String Functor_24;
    MR_Word Args_26;
    MR_Tuple Var_27;

    mdb__browser_info__limited_deconstruct_browser_term_cc_5_p_0(BrowserDb_6, BrowserTerm_7, MaxSize_8, &MaybeFunctorArityArgs_22, &MaybeReturn_23);
    succeeded = ((MR_Integer) 0 < MaxSize_8);
    if (succeeded)
    {
      succeeded = ((MR_Integer) 0 < MaxDepth_9);
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) MaybeFunctorArityArgs_22)) == (MR_Integer) 1);
        if (succeeded)
        {
          Var_27 = ((MR_Tuple) ((MR_hl_field(MR_mktag(1), MaybeFunctorArityArgs_22, (MR_Integer) 0))));
          Functor_24 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_27, (MR_Integer) 0))));
          Args_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_27, (MR_Integer) 2))));
          succeeded = MR_TRUE;
        }
      }
    }
    if (succeeded)
    {
      MR_Integer _NewSize_13;

      mdb__browse__browser_term_to_string_3_10_p_0(BrowserDb_6, Functor_24, Args_26, MaybeReturn_23, MaxSize_8, (MR_Integer) 0, &_NewSize_13, MaxDepth_9, (MR_Integer) 0, Str_10);
    }
    else
    {
      MR_String Functor_31;
      MR_Integer Arity_32;
      MR_Word IsFunc_33;

      mdb__browser_info__functor_browser_term_cc_5_p_0(BrowserDb_6, BrowserTerm_7, &Functor_31, &Arity_32, &IsFunc_33);
      succeeded = (Arity_32 == (MR_Integer) 0);
      if (succeeded)
        *Str_10 = Functor_31;
      else
      {
        MR_String ArityStr_34;

        mercury__string__int_to_string_2_p_0(Arity_32, &ArityStr_34);
        switch (IsFunc_33) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_35;
              MR_Word Var_36;
              MR_Word Var_38;

              {
                Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (ArityStr_34));
                MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) ((MR_String) "/"));
                MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Var_38));
              }
              {
                Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Functor_31));
                MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_36));
              }
              mercury__string__append_list_2_p_0(Var_35, Str_10);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_40;
              MR_Word Var_41;
              MR_Word Var_43;

              {
                Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (ArityStr_34));
                MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[44])));
              }
              {
                Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) ((MR_String) "/"));
                MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_43));
              }
              {
                Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Functor_31));
                MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_41));
              }
              mercury__string__append_list_2_p_0(Var_40, Str_10);
            }
            break;
        }
      }
    }
  }
}

static void MR_CALL 
mdb__browse__browser_term_to_string_2_8_p_0(
  MR_Word BrowserDb_9,
  MR_Word BrowserTerm_10,
  MR_Integer MaxSize_11,
  MR_Integer CurSize_12,
  MR_Integer * NewSize_13,
  MR_Integer MaxDepth_14,
  MR_Integer CurDepth_15,
  MR_String * Str_16)
{
  {
    MR_bool succeeded;
    MR_Word MaybeFunctorArityArgs_17;
    MR_Word MaybeReturn_18;
    MR_String Functor_19;
    MR_Word Args_21;
    MR_Tuple Var_22;

    mdb__browser_info__limited_deconstruct_browser_term_cc_5_p_0(BrowserDb_9, BrowserTerm_10, MaxSize_11, &MaybeFunctorArityArgs_17, &MaybeReturn_18);
    succeeded = (CurSize_12 < MaxSize_11);
    if (succeeded)
    {
      succeeded = (CurDepth_15 < MaxDepth_14);
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) MaybeFunctorArityArgs_17)) == (MR_Integer) 1);
        if (succeeded)
        {
          Var_22 = ((MR_Tuple) ((MR_hl_field(MR_mktag(1), MaybeFunctorArityArgs_17, (MR_Integer) 0))));
          Functor_19 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_22, (MR_Integer) 0))));
          Args_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_22, (MR_Integer) 2))));
          succeeded = MR_TRUE;
        }
      }
    }
    if (succeeded)
      mdb__browse__browser_term_to_string_3_10_p_0(BrowserDb_9, Functor_19, Args_21, MaybeReturn_18, MaxSize_11, CurSize_12, NewSize_13, MaxDepth_14, CurDepth_15, Str_16);
    else
    {
      MR_String Functor_26;
      MR_Integer Arity_27;
      MR_Word IsFunc_28;

      mdb__browser_info__functor_browser_term_cc_5_p_0(BrowserDb_9, BrowserTerm_10, &Functor_26, &Arity_27, &IsFunc_28);
      succeeded = (Arity_27 == (MR_Integer) 0);
      if (succeeded)
        *Str_16 = Functor_26;
      else
      {
        MR_String ArityStr_29;

        mercury__string__int_to_string_2_p_0(Arity_27, &ArityStr_29);
        switch (IsFunc_28) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_30;
              MR_Word Var_31;
              MR_Word Var_33;

              {
                Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (ArityStr_29));
                MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) ((MR_String) "/"));
                MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_33));
              }
              {
                Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Functor_26));
                MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_31));
              }
              mercury__string__append_list_2_p_0(Var_30, Str_16);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_35;
              MR_Word Var_36;
              MR_Word Var_38;

              {
                Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (ArityStr_29));
                MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[44])));
              }
              {
                Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) ((MR_String) "/"));
                MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Var_38));
              }
              {
                Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Functor_26));
                MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_36));
              }
              mercury__string__append_list_2_p_0(Var_35, Str_16);
            }
            break;
        }
      }
      *NewSize_13 = CurSize_12;
    }
  }
}

static void MR_CALL 
mdb__browse__args_to_string_list_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Integer CurSize_4,
  MR_Integer * NewSize_5,
  MR_Integer HeadVar__6_6,
  MR_Integer HeadVar__7_7,
  MR_Word * Strs_8)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *Strs_8 = (MR_Word) ((MR_Unsigned) 0U);
      *NewSize_5 = CurSize_4;
    }
    else
    {
      MR_Word Univ_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Univs_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer NewSize1_25;
      MR_String Str_26;
      MR_Word RestStrs_27;
      MR_Word Var_28;
      MR_Word MaybeFunctorArityArgs_37;
      MR_Word MaybeReturn_38;
      MR_String Functor_39;
      MR_Word Args_41;
      MR_Tuple Var_42;

      {
        Var_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (Univ_17));
      }
      mdb__browser_info__limited_deconstruct_browser_term_cc_5_p_0(HeadVar__1_1, Var_28, HeadVar__3_3, &MaybeFunctorArityArgs_37, &MaybeReturn_38);
      succeeded = (CurSize_4 < HeadVar__3_3);
      if (succeeded)
      {
        succeeded = (HeadVar__7_7 < HeadVar__6_6);
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) MaybeFunctorArityArgs_37)) == (MR_Integer) 1);
          if (succeeded)
          {
            Var_42 = ((MR_Tuple) ((MR_hl_field(MR_mktag(1), MaybeFunctorArityArgs_37, (MR_Integer) 0))));
            Functor_39 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_42, (MR_Integer) 0))));
            Args_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_42, (MR_Integer) 2))));
            succeeded = MR_TRUE;
          }
        }
      }
      if (succeeded)
        mdb__browse__browser_term_to_string_3_10_p_0(HeadVar__1_1, Functor_39, Args_41, MaybeReturn_38, HeadVar__3_3, CurSize_4, &NewSize1_25, HeadVar__6_6, HeadVar__7_7, &Str_26);
      else
      {
        MR_String Functor_46;
        MR_Integer Arity_47;
        MR_Word IsFunc_48;

        mdb__browser_info__functor_browser_term_cc_5_p_0(HeadVar__1_1, Var_28, &Functor_46, &Arity_47, &IsFunc_48);
        succeeded = (Arity_47 == (MR_Integer) 0);
        if (succeeded)
          Str_26 = Functor_46;
        else
        {
          MR_String ArityStr_49;

          mercury__string__int_to_string_2_p_0(Arity_47, &ArityStr_49);
          switch (IsFunc_48) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_50;
                MR_Word Var_51;
                MR_Word Var_53;

                {
                  Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (ArityStr_49));
                  MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) ((MR_String) "/"));
                  MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (Var_53));
                }
                {
                  Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Functor_46));
                  MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Var_51));
                }
                mercury__string__append_list_2_p_0(Var_50, &Str_26);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_55;
                MR_Word Var_56;
                MR_Word Var_58;

                {
                  Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (ArityStr_49));
                  MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[44])));
                }
                {
                  Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) ((MR_String) "/"));
                  MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (Var_58));
                }
                {
                  Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (Functor_46));
                  MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (Var_56));
                }
                mercury__string__append_list_2_p_0(Var_55, &Str_26);
              }
              break;
          }
        }
        NewSize1_25 = CurSize_4;
      }
      mdb__browse__args_to_string_list_8_p_0(HeadVar__1_1, Univs_18, HeadVar__3_3, NewSize1_25, NewSize_5, HeadVar__6_6, HeadVar__7_7, &RestStrs_27);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *Strs_8 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Str_26));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (RestStrs_27));
      }
    }
  }
}

static void MR_CALL 
mdb__browse__list_tail_to_string_list_8_p_0(
  MR_Word BrowserDb_9,
  MR_Word TailUniv_10,
  MR_Integer MaxSize_11,
  MR_Integer Size0_12,
  MR_Integer * Size_13,
  MR_Integer MaxDepth_14,
  MR_Integer Depth0_15,
  MR_Word * TailStrs_16)
{
  {
    MR_bool succeeded;
    MR_Integer Limit_17;
    MR_Word MaybeFunctorArityArgs_18;
    MR_Word MaybeReturn_19;
    MR_Word Var_31;

    Limit_17 = mercury__int__max_2_f_0(MaxSize_11, (MR_Integer) 2);
    {
      Var_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (TailUniv_10));
    }
    mdb__browser_info__limited_deconstruct_browser_term_cc_5_p_0(BrowserDb_9, Var_31, Limit_17, &MaybeFunctorArityArgs_18, &MaybeReturn_19);
    if ((MaybeFunctorArityArgs_18 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_34;
      MR_String TailCompressedStr_51;
      MR_String Functor_55;
      MR_Integer Arity_56;
      MR_Word IsFunc_57;

      *Size_13 = Size0_12;
      mdb__browser_info__functor_browser_term_cc_5_p_0(BrowserDb_9, Var_31, &Functor_55, &Arity_56, &IsFunc_57);
      succeeded = (Arity_56 == (MR_Integer) 0);
      if (succeeded)
        TailCompressedStr_51 = Functor_55;
      else
      {
        MR_String ArityStr_58;

        mercury__string__int_to_string_2_p_0(Arity_56, &ArityStr_58);
        switch (IsFunc_57) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_59;
              MR_Word Var_60;
              MR_Word Var_62;

              {
                Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (ArityStr_58));
                MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) ((MR_String) "/"));
                MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (Var_62));
              }
              {
                Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (Functor_55));
                MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (Var_60));
              }
              mercury__string__append_list_2_p_0(Var_59, &TailCompressedStr_51);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_64;
              MR_Word Var_65;
              MR_Word Var_67;

              {
                Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (ArityStr_58));
                MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[44])));
              }
              {
                Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) ((MR_String) "/"));
                MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (Var_67));
              }
              {
                Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (Functor_55));
                MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (Var_65));
              }
              mercury__string__append_list_2_p_0(Var_64, &TailCompressedStr_51);
            }
            break;
        }
      }
      {
        Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (TailCompressedStr_51));
        MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *TailStrs_16 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) " | "));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_34));
      }
    }
    else
    {
      MR_String Functor_20;
      MR_Word Args_22;
      MR_Tuple Var_36 = ((MR_Tuple) ((MR_hl_field(MR_mktag(1), MaybeFunctorArityArgs_18, (MR_Integer) 0))));

      Functor_20 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_36, (MR_Integer) 0))));
      Args_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_36, (MR_Integer) 2))));
      succeeded = (strcmp(Functor_20, (MR_String) "[]") == 0);
      if (succeeded)
      {
        succeeded = (Args_22 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          succeeded = (MaybeReturn_19 == (MR_Word) ((MR_Unsigned) 0U));
      }
      if (succeeded)
      {
        *Size_13 = Size0_12;
        *TailStrs_16 = (MR_Word) ((MR_Unsigned) 0U);
      }
      else
      {
        MR_Word ListHead_23;
        MR_Word ListTail_24;
        MR_Word Var_37;
        MR_Word Var_38;

        succeeded = (strcmp(Functor_20, (MR_String) "[|]") == 0);
        if (succeeded)
        {
          succeeded = (MaybeReturn_19 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) Args_22)) == (MR_Integer) 1);
            if (succeeded)
            {
              ListHead_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_22, (MR_Integer) 0))));
              Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_22, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) Var_37)) == (MR_Integer) 1);
              if (succeeded)
              {
                ListTail_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_37, (MR_Integer) 0))));
                Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_37, (MR_Integer) 1))));
                succeeded = (Var_38 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
          }
        }
        if (succeeded)
        {
          succeeded = (Size0_12 < MaxSize_11);
          if (succeeded)
            succeeded = (Depth0_15 < MaxDepth_14);
          if (succeeded)
          {
            MR_Integer Size1_25;
            MR_String HeadStr_26;
            MR_Word TailStrs0_27;
            MR_Word Var_39;
            MR_Word Var_41;

            {
              Var_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (ListHead_23));
            }
            mdb__browse__browser_term_to_string_2_8_p_0(BrowserDb_9, Var_39, MaxSize_11, Size0_12, &Size1_25, MaxDepth_14, Depth0_15, &HeadStr_26);
            mdb__browse__list_tail_to_string_list_8_p_0(BrowserDb_9, ListTail_24, MaxSize_11, Size1_25, Size_13, MaxDepth_14, Depth0_15, &TailStrs0_27);
            {
              Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (HeadStr_26));
              MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (TailStrs0_27));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *TailStrs_16 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) ", "));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_41));
            }
          }
          else
          {
            *Size_13 = Size0_12;
            *TailStrs_16 = (MR_Word) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[45]));
          }
        }
        else
        {
          succeeded = (Size0_12 < MaxSize_11);
          if (succeeded)
            succeeded = (Depth0_15 < MaxDepth_14);
          if (succeeded)
          {
            MR_String TailStr_28;
            MR_Word Var_45;

            mdb__browse__browser_term_to_string_3_10_p_0(BrowserDb_9, Functor_20, Args_22, MaybeReturn_19, MaxSize_11, Size0_12, Size_13, MaxDepth_14, Depth0_15, &TailStr_28);
            {
              Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (TailStr_28));
              MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *TailStrs_16 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) " | "));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_45));
            }
          }
          else
          {
            MR_String TailCompressedStr_29;
            MR_Word Var_49;
            MR_String Functor_74;
            MR_Integer Arity_75;
            MR_Word IsFunc_76;

            *Size_13 = Size0_12;
            mdb__browser_info__functor_browser_term_cc_5_p_0(BrowserDb_9, Var_31, &Functor_74, &Arity_75, &IsFunc_76);
            succeeded = (Arity_75 == (MR_Integer) 0);
            if (succeeded)
              TailCompressedStr_29 = Functor_74;
            else
            {
              MR_String ArityStr_77;

              mercury__string__int_to_string_2_p_0(Arity_75, &ArityStr_77);
              switch (IsFunc_76) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Var_78;
                    MR_Word Var_79;
                    MR_Word Var_81;

                    {
                      Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (ArityStr_77));
                      MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) ((MR_String) "/"));
                      MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) (Var_81));
                    }
                    {
                      Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (Functor_74));
                      MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) (Var_79));
                    }
                    mercury__string__append_list_2_p_0(Var_78, &TailCompressedStr_29);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Var_83;
                    MR_Word Var_84;
                    MR_Word Var_86;

                    {
                      Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (ArityStr_77));
                      MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[44])));
                    }
                    {
                      Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) ((MR_String) "/"));
                      MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) (Var_86));
                    }
                    {
                      Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (Functor_74));
                      MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) (Var_84));
                    }
                    mercury__string__append_list_2_p_0(Var_83, &TailCompressedStr_29);
                  }
                  break;
              }
            }
            {
              Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (TailCompressedStr_29));
              MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *TailStrs_16 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) " | "));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_49));
            }
          }
        }
      }
    }
  }
}

static void MR_CALL 
mdb__browse__browser_term_to_string_3_10_p_0(
  MR_Word BrowserDb_11,
  MR_String Functor_12,
  MR_Word Args_13,
  MR_Word MaybeReturn_14,
  MR_Integer MaxSize_15,
  MR_Integer Size0_16,
  MR_Integer * Size_17,
  MR_Integer MaxDepth_18,
  MR_Integer Depth0_19,
  MR_String * Str_20)
{
  {
    MR_bool succeeded = (strcmp(Functor_12, (MR_String) "[|]") == 0);
    MR_Word ListHead_21;
    MR_Word ListTail_22;
    MR_Word Var_33;
    MR_Word Var_34;

    if (succeeded)
    {
      succeeded = (MaybeReturn_14 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Args_13)) == (MR_Integer) 1);
        if (succeeded)
        {
          ListHead_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 0))));
          Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) Var_33)) == (MR_Integer) 1);
          if (succeeded)
          {
            ListTail_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_33, (MR_Integer) 0))));
            Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_33, (MR_Integer) 1))));
            succeeded = (Var_34 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Integer Size1_23 = (MR_Integer) ((MR_Unsigned) Size0_16 + (MR_Unsigned) (MR_Integer) 1);
      MR_Integer Depth1_24 = (MR_Integer) ((MR_Unsigned) Depth0_19 + (MR_Unsigned) (MR_Integer) 1);
      MR_Integer Size2_25;
      MR_String HeadStr_26;
      MR_Word TailStrs_27;
      MR_Word Strs_28;
      MR_Word Var_37;
      MR_Word Var_41;
      MR_Word Var_43;

      {
        Var_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (ListHead_21));
      }
      mdb__browse__browser_term_to_string_2_8_p_0(BrowserDb_11, Var_37, MaxSize_15, Size1_23, &Size2_25, MaxDepth_18, Depth1_24, &HeadStr_26);
      mdb__browse__list_tail_to_string_list_8_p_0(BrowserDb_11, ListTail_22, MaxSize_15, Size2_25, Size_17, MaxDepth_18, Depth1_24, &TailStrs_27);
      mercury__list__append_3_p_1((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), TailStrs_27, (MR_Word) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[42])), &Strs_28);
      {
        Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (HeadStr_26));
        MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (Strs_28));
      }
      {
        Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) ((MR_String) "["));
        MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_43));
      }
      mercury__string__append_list_2_p_0(Var_41, Str_20);
    }
    else
    {
      succeeded = (strcmp(Functor_12, (MR_String) "[]") == 0);
      if (succeeded)
      {
        succeeded = (Args_13 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          succeeded = (MaybeReturn_14 == (MR_Word) ((MR_Unsigned) 0U));
      }
      if (succeeded)
      {
        *Size_17 = (MR_Integer) ((MR_Unsigned) Size0_16 + (MR_Unsigned) (MR_Integer) 1);
        *Str_20 = (MR_String) "[]";
      }
      else
      {
        MR_Word ArgStrs_29;
        MR_String BracketedArgsStr_30;
        MR_Integer Size1_57 = (MR_Integer) ((MR_Unsigned) Size0_16 + (MR_Unsigned) (MR_Integer) 1);
        MR_Integer Depth1_58 = (MR_Integer) ((MR_Unsigned) Depth0_19 + (MR_Unsigned) (MR_Integer) 1);
        MR_Integer Size2_59;

        mdb__browse__args_to_string_list_8_p_0(BrowserDb_11, Args_13, MaxSize_15, Size1_57, &Size2_59, MaxDepth_18, Depth1_58, &ArgStrs_29);
        if ((ArgStrs_29 == (MR_Word) ((MR_Unsigned) 0U)))
          BracketedArgsStr_30 = (MR_String) "";
        else
        {
          MR_Word Var_68;
          MR_Word Var_70;
          MR_String Var_71;

          Var_71 = mdb__browse__comma_string_list_1_f_0(ArgStrs_29);
          {
            Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (Var_71));
            MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[43])));
          }
          {
            Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) ((MR_String) "("));
            MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (Var_70));
          }
          mercury__string__append_list_2_p_0(Var_68, &BracketedArgsStr_30);
        }
        if ((MaybeReturn_14 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Var_47;
          MR_Word Var_48;

          *Size_17 = Size2_59;
          {
            Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (BracketedArgsStr_30));
            MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Functor_12));
            MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (Var_48));
          }
          mercury__string__append_list_2_p_0(Var_47, Str_20);
        }
        else
        {
          MR_Word Return_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeReturn_14, (MR_Integer) 0))));
          MR_String ReturnStr_32;
          MR_Word Var_50;
          MR_Word Var_51;
          MR_Word Var_52;
          MR_Word Var_53;
          MR_Word Var_55;

          {
            Var_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) (Return_31));
          }
          mdb__browse__browser_term_to_string_2_8_p_0(BrowserDb_11, Var_50, MaxSize_15, Size2_59, Size_17, MaxDepth_18, Depth1_58, &ReturnStr_32);
          {
            Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (ReturnStr_32));
            MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) ((MR_String) " = "));
            MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_55));
          }
          {
            Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (BracketedArgsStr_30));
            MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (Var_53));
          }
          {
            Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Functor_12));
            MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (Var_52));
          }
          mercury__string__append_list_2_p_0(Var_51, Str_20);
        }
      }
    }
  }
}

static MR_String MR_CALL 
mdb__browse__comma_string_list_1_f_0(
  MR_Word Args_3)
{
  {
    MR_String Str_4;

    if ((Args_3 == (MR_Word) ((MR_Unsigned) 0U)))
      Str_4 = (MR_String) "";
    else
    {
      MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_3, (MR_Integer) 1))));
      MR_String Var_19 = ((MR_String) ((MR_hl_field(MR_mktag(1), Args_3, (MR_Integer) 0))));

      if ((Var_18 == (MR_Word) ((MR_Unsigned) 0U)))
        Str_4 = Var_19;
      else
      {
        MR_String Rest_9;
        MR_Word Var_12;
        MR_Word Var_13;
        MR_Word Var_15;
        MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 1))));
        MR_String Var_36 = ((MR_String) ((MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 0))));

        if ((Var_35 == (MR_Word) ((MR_Unsigned) 0U)))
          Rest_9 = Var_36;
        else
        {
          MR_String Rest_26;
          MR_Word Var_29;
          MR_Word Var_30;
          MR_Word Var_32;

          Rest_26 = mdb__browse__comma_string_list_1_f_0(Var_35);
          {
            Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (Rest_26));
            MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) ((MR_String) ", "));
            MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_32));
          }
          {
            Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Var_36));
            MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_30));
          }
          mercury__string__append_list_2_p_0(Var_29, &Rest_9);
        }
        {
          Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_15, 0) = ((MR_Box) (Rest_9));
          MR_hl_field(MR_mktag(1), Var_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_13, 0) = ((MR_Box) ((MR_String) ", "));
          MR_hl_field(MR_mktag(1), Var_13, 1) = ((MR_Box) (Var_15));
        }
        {
          Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_12, 0) = ((MR_Box) (Var_19));
          MR_hl_field(MR_mktag(1), Var_12, 1) = ((MR_Box) (Var_13));
        }
        mercury__string__append_list_2_p_0(Var_12, &Str_4);
      }
    }
    return Str_4;
  }
}

static void MR_CALL 
mdb__browse__browser_term_size_left_from_max_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv0_RemainingSize_6;

    mdb__browse__term_size_left_from_max_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv0_RemainingSize_6);
    *wrapper_arg_3 = ((MR_Box) (conv0_RemainingSize_6));
  }
}

void MR_CALL 
mdb__browse__browser_term_size_left_from_max_3_p_0(
  MR_Word BrowserTerm_4,
  MR_Integer MaxSize_5,
  MR_Integer * RemainingSize_6)
{
  if (((MR_tag((MR_Word) BrowserTerm_4)) == (MR_Integer) 0))
  {
    MR_Word Univ_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BrowserTerm_4, (MR_Integer) 0))));

    mdb__browse__term_size_left_from_max_3_p_0(Univ_7, MaxSize_5, RemainingSize_6);
  }
  else
  {
    MR_String Functor_8 = ((MR_String) ((MR_hl_field(MR_mktag(1), BrowserTerm_4, (MR_Integer) 0))));
    MR_Word Args_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BrowserTerm_4, (MR_Integer) 1))));
    MR_Word MaybeReturn_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BrowserTerm_4, (MR_Integer) 2))));
    MR_Integer FunctorSize_11;
    MR_Integer Arity_12;
    MR_Integer PrincipalSize_14;
    MR_Integer MaxArgsSize_15;
    MR_Box conv1_RemainingSize_6;

    mercury__string__length_2_p_0(Functor_8, &FunctorSize_11);
    mercury__list__length_2_p_0((MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), Args_9, &Arity_12);
    if ((MaybeReturn_10 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Integer Var_16 = (MR_Integer) ((MR_Unsigned) Arity_12 * (MR_Unsigned) (MR_Integer) 2);

      PrincipalSize_14 = (MR_Integer) ((MR_Unsigned) FunctorSize_11 + (MR_Unsigned) Var_16);
    }
    else
    {
      MR_Integer Var_18;
      MR_Integer Var_19 = (MR_Integer) ((MR_Unsigned) Arity_12 * (MR_Unsigned) (MR_Integer) 2);

      Var_18 = (MR_Integer) ((MR_Unsigned) FunctorSize_11 + (MR_Unsigned) Var_19);
      PrincipalSize_14 = (MR_Integer) ((MR_Unsigned) Var_18 + (MR_Unsigned) (MR_Integer) 3);
    }
    MaxArgsSize_15 = (MR_Integer) ((MR_Unsigned) MaxSize_5 - (MR_Unsigned) PrincipalSize_14);
    mercury__list__foldl_4_p_9((MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mdb__browse_scalar_common_1[5]), Args_9, ((MR_Box) (MaxArgsSize_15)), &conv1_RemainingSize_6);
    *RemainingSize_6 = ((MR_Integer) (conv1_RemainingSize_6));
  }
}

static void MR_CALL 
mdb__browse__term_size_left_from_max_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv0_RemainingSize_6;

    mdb__browse__term_size_left_from_max_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv0_RemainingSize_6);
    *wrapper_arg_3 = ((MR_Box) (conv0_RemainingSize_6));
  }
}

void MR_CALL 
mdb__browse__term_size_left_from_max_3_p_0(
  MR_Word Univ_4,
  MR_Integer MaxSize_5,
  MR_Integer * RemainingSize_6)
{
  {
    MR_bool succeeded = (MaxSize_5 < (MR_Integer) 0);

    if (succeeded)
      *RemainingSize_6 = MaxSize_5;
    else
    {
      MR_Word TypeInfo_20_20;
      MR_Word MaybeFunctorArityArgs_7;
      MR_Box Var_15;

      Var_15 = mercury__univ__univ_value_1_f_0(&TypeInfo_20_20, Univ_4);
      mercury__deconstruct__limited_deconstruct_cc_3_p_0(TypeInfo_20_20, Var_15, MaxSize_5, &MaybeFunctorArityArgs_7);
      if ((MaybeFunctorArityArgs_7 == (MR_Word) ((MR_Unsigned) 0U)))
        *RemainingSize_6 = (MR_Integer) -1;
      else
      {
        MR_String Functor_8;
        MR_Integer Arity_9;
        MR_Word Args_10;
        MR_Integer FunctorSize_11;
        MR_Integer PrincipalSize_12;
        MR_Integer MaxArgsSize_13;
        MR_Tuple Var_16 = ((MR_Tuple) ((MR_hl_field(MR_mktag(1), MaybeFunctorArityArgs_7, (MR_Integer) 0))));
        MR_Integer Var_17;
        MR_Box conv1_RemainingSize_6;

        Functor_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 0))));
        Arity_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 1))));
        Args_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 2))));
        mercury__string__length_2_p_0(Functor_8, &FunctorSize_11);
        Var_17 = (MR_Integer) ((MR_Unsigned) Arity_9 * (MR_Unsigned) (MR_Integer) 2);
        PrincipalSize_12 = (MR_Integer) ((MR_Unsigned) FunctorSize_11 + (MR_Unsigned) Var_17);
        MaxArgsSize_13 = (MR_Integer) ((MR_Unsigned) MaxSize_5 - (MR_Unsigned) PrincipalSize_12);
        mercury__list__foldl_4_p_9((MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mdb__browse_scalar_common_1[4]), Args_10, ((MR_Box) (MaxArgsSize_13)), &conv1_RemainingSize_6);
        *RemainingSize_6 = ((MR_Integer) (conv1_RemainingSize_6));
      }
    }
  }
}

static MR_bool MR_CALL 
mdb__browse____Unify____deref_result_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mdb__browse____Unify____deref_result_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__browse____Compare____deref_result_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__browse____Compare____deref_result_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__browse____Unify____unbound_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__browse____Unify____unbound_0_0();
    return succeeded;
  }
}

static void MR_CALL 
mdb__browse____Compare____unbound_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__browse____Compare____unbound_0_0(&conv0_HeadVar__1_1);
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__browse____Unify____xml_function_wrapper_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__browse____Unify____xml_function_wrapper_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__browse____Compare____xml_function_wrapper_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__browse____Compare____xml_function_wrapper_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__browse____Unify____xml_predicate_wrapper_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__browse____Unify____xml_predicate_wrapper_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__browse____Compare____xml_predicate_wrapper_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__browse____Compare____xml_predicate_wrapper_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__mdb__browse__init(void)
{
}

void mercury__mdb__browse__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mdb__browse__mdb__browse__type_ctor_info_deref_result_1);
	MR_register_type_ctor_info(&mdb__browse__mdb__browse__type_ctor_info_unbound_0);
	MR_register_type_ctor_info(&mdb__browse__mdb__browse__type_ctor_info_xml_function_wrapper_0);
	MR_register_type_ctor_info(&mdb__browse__mdb__browse__type_ctor_info_xml_predicate_wrapper_0);
}

void mercury__mdb__browse__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__mdb__browse__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module mdb.browse.
