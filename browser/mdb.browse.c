/*
** Automatically generated from `browse.m'
** by the Mercury compiler,
** version rotd-2022-10-01
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


#include "array.mih"
#include "assoc_list.mih"
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
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdb.mih"
#include "mdbcomp.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "term_io.mih"
#include "term_to_xml.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "io.call_system.mih"
#include "io.environment.mih"
#include "io.file.mih"
#include "io.stream_db.mih"
#include "mdb.browser_info.mih"
#include "mdb.browser_term.mih"
#include "mdb.frame.mih"
#include "mdb.parse.mih"
#include "mdb.sized_pretty.mih"
#include "mdb.term_rep.mih"
#include "mdb.term_to_html.mih"
#include "mdbcomp.program_representation.mih"
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

static const MR_EnumFunctorDescPtr mdb__browse__mdb__browse__enum_ordinal_ordered_unbound_0[1];

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
  MR_Word TypeClassInfo_for_writer_15,
  MR_Word TypeClassInfo_for_writer_16,
  MR_Box Stream_5,
  MR_Word Univ_6,
  MR_Box STATE_VARIABLE_IO_0_9,
  MR_Box * STATE_VARIABLE_IO_10);

static void MR_CALL 
mdb__browse__put_comma_space_3_p_0(
  MR_Word TypeClassInfo_for_writer_9,
  MR_Box Stream_4,
  MR_Box STATE_VARIABLE_State_0_6,
  MR_Box * STATE_VARIABLE_State_7);

static MR_bool MR_CALL 
mdb__browse__bool_format_option_is_true_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Format_3);

static void MR_CALL 
mdb__browse__get_value_representation_2_p_0(
  MR_Word TypeInfo_for_T_3,
  MR_Box HeadVar__1_1,
  MR_Integer * HeadVar__2_2);

static void MR_CALL 
mdb__browse__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_118_97_108_117_101_95_114_101_112_114_101_115_101_110_116_97_116_105_111_110_95_95_91_49_93_95_48_2_p_0(
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
  MR_Word OutputStream_6,
  MR_Word ErrorStream_7,
  MR_String CommandStr_8);

static MR_Box MR_CALL 
mdb__browse__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_118_101_95_116_101_114_109_95_116_111_95_102_105_108_101_95_95_91_51_93_95_48_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
mdb__browse__save_univ_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
mdb__browse__save_univ_5_p_0(
  MR_Word OutputStream_6,
  MR_Integer Indent_7,
  MR_Word Univ_8);

static MR_Box MR_CALL 
mdb__browse__save_args_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
mdb__browse__save_args_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mdb__browse__dynamic_cast_to_list_2_p_0(
  MR_Word TypeInfo_for_T1_14,
  MR_Word * TypeInfo_for_T_13,
  MR_Box X_3,
  MR_Word * L_4);

static void MR_CALL 
mdb__browse__write_indent_4_p_0(
  MR_Word OutputStream_5,
  MR_Integer Indent_6);

static void MR_CALL 
mdb__browse__browse_main_loop_6_p_0(
  MR_Word InputStream_7,
  MR_Word Debugger_8,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17);

static void MR_CALL 
mdb__browse__run_command_7_p_0(
  MR_Word Debugger_8,
  MR_Word Command_9,
  MR_Word * Quit_10,
  MR_Word STATE_VARIABLE_Info_0_31,
  MR_Word * STATE_VARIABLE_Info_32);

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

static MR_bool MR_CALL 
mdb__browse__do_portray_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
mdb__browse__do_portray_7_p_0(
  MR_Word Debugger_8,
  MR_Word CallerType_9,
  MR_Word MaybeMaybeOptionTable_10,
  MR_Word Info_11,
  MR_Word MaybePath_12);

static void MR_CALL 
mdb__browse__simplify_rev_dirs_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer STATE_VARIABLE_ToDelete_0_2,
  MR_Word STATE_VARIABLE_DownDirs_0_3,
  MR_Word * STATE_VARIABLE_DownDirs_4);

static void MR_CALL 
mdb__browse__portray_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mdb__browse__portray_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

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
  MR_Word HeadVar__1_1);

static void MR_CALL 
mdb__browse__portray_raw_pretty_5_p_0(
  MR_Word Debugger_6,
  MR_Word BrowserTerm_7,
  MR_Word Params_8);

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
mdb__browse__browser_term_compress_3_p_0(
  MR_Word BrowserDb_4,
  MR_Word BrowserTerm_5,
  MR_String * Str_6);

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

static /* final */ const MR_Box mdb__browse_scalar_common_4[46][2];

static /* final */ const MR_Box mdb__browse_scalar_common_5[10][1];

static /* final */ const MR_Box mdb__browse_scalar_common_6[2][6];

static /* final */ const MR_Integer mdb__browse_scalar_common_8[1][3];

static /* final */ const MR_Box mdb__browse_scalar_common_9[1][9];

static /* final */ const MR_Box mdb__browse_scalar_common_10[1][7];

static /* final */ const MR_Integer mdb__browse_scalar_common_12[1][2];


struct mdb__browse__vector_common_type_7_0_s {
  const MR_String mdb__browse__vector_common_type_7_0__vct_7_f_0;
};

static /* final */ const struct mdb__browse__vector_common_type_7_0_s mdb__browse_vector_common_7[20];

struct mdb__browse__vector_common_type_11_0_s {
  const MR_Word mdb__browse__vector_common_type_11_0__vct_11_f_0;
};

static /* final */ const struct mdb__browse__vector_common_type_11_0_s mdb__browse_vector_common_11[4];



static /* final */ const MR_Box mdb__browse_scalar_common_1[7][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__string__builder__handle__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdb__parse__mdb__parse__type_ctor_info_format_option_0)),
    ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_data_0))
  },
  /* row   3 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__mdb__browser_info__debugger__arity0__io__state__arity0__)),
    ((MR_Box) (&mdb__browser_info__mdb__browser_info__type_ctor_info_debugger_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mdb__browse_scalar_common_6[0])),
    ((MR_Box) (mdb__browse__term_size_left_from_max_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mdb__browse_scalar_common_6[0])),
    ((MR_Box) (mdb__browse__browser_term_size_left_from_max_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mdb__browse_scalar_common_3[6])),
    ((MR_Box) (mdb__browse__do_portray_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mdb__browse_scalar_common_2[5][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mdb__browse_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__string__builder__handle__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&mdb__browse_scalar_common_1[1])),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__mdb__browser_info__debugger__arity0__io__state__arity0__)),
    ((MR_Box) (&mdb__browse_scalar_common_1[3])),
    ((MR_Box) (&mdb__browser_info__mdb__browser_info__type_ctor_info_debugger_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mdb__browse_scalar_common_10[0])),
    ((MR_Box) (mdb__browse__portray_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mdb__browse_scalar_common_3[0]))
  },
  /* row   4 */
  {
    ((MR_Box) (&mdb__browse_scalar_common_10[0])),
    ((MR_Box) (mdb__browse__browser_term_to_html_flat_string_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mdb__browse_scalar_common_3[1]))
  },
};

static /* final */ const MR_Box mdb__browse_scalar_common_3[8][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mdb__browse_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__string__builder__handle__arity0__string__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&mdb__browse_scalar_common_2[1])),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__string__builder__handle__arity0__character__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&mdb__browse_scalar_common_2[1])),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   3 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mdb__browse_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   4 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__mdb__browser_info__debugger__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mdb__browse_scalar_common_2[2])),
    ((MR_Box) (&mdb__browser_info__mdb__browser_info__type_ctor_info_debugger_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mdb__browse_scalar_common_9[0])),
    ((MR_Box) (mdb__browse__portray_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdb__browse_scalar_common_3[0])),
    ((MR_Box) (&mdb__browse_scalar_common_3[3]))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdb__browse__pair__pti_pair_2__plain_mdb__parse__type_ctor_info_format_option_0__plain_getopt__type_ctor_info_option_data_0)),
    ((MR_Box) (&mdb__parse__mdb__parse__type_ctor_info_format_option_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mdb__browse_scalar_common_9[0])),
    ((MR_Box) (mdb__browse__browser_term_to_html_flat_string_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdb__browse_scalar_common_3[1])),
    ((MR_Box) (&mdb__browse_scalar_common_3[2]))
  },
};

static /* final */ const MR_Box mdb__browse_scalar_common_4[46][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdb__browser_info__mdb__browser_info__type_ctor_info_down_dir_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__univ__univ__type_ctor_info_univ_0))
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_String) "-- Paths can be Unix-style or SICStus-style: /2/3/1 or ^2^3^1\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[2])))
  },
  /* row   4 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[3])))
  },
  /* row   5 */
  {
    ((MR_Box) ((MR_String) "\th              -- help\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[4])))
  },
  /* row   6 */
  {
    ((MR_Box) ((MR_String) "\t\?              -- help\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[5])))
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_String) "\t^ [path]       -- cd to the specified subterm (default is root)\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[6])))
  },
  /* row   8 */
  {
    ((MR_Box) ((MR_String) "\t< n            -- set depth\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[7])))
  },
  /* row   9 */
  {
    ((MR_Box) ((MR_String) "\tp              -- print\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[8])))
  },
  /* row  10 */
  {
    ((MR_Box) ((MR_String) "SICStus Prolog style commands are:\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[9])))
  },
  /* row  11 */
  {
    ((MR_Box) ((MR_String) "\thelp           -- show this help message\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[10])))
  },
  /* row  12 */
  {
    ((MR_Box) ((MR_String) "\tquit           -- quit browser\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[11])))
  },
  /* row  13 */
  {
    ((MR_Box) ((MR_String) "\tparams         -- show format and parameter values\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[12])))
  },
  /* row  14 */
  {
    ((MR_Box) ((MR_String) "\t               -- set the named parameter value\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[13])))
  },
  /* row  15 */
  {
    ((MR_Box) ((MR_String) "\tnum_io_actions <n>\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[14])))
  },
  /* row  16 */
  {
    ((MR_Box) ((MR_String) "\tlines [format_param_options] <n>\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[15])))
  },
  /* row  17 */
  {
    ((MR_Box) ((MR_String) "\twidth [format_param_options] <n>\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[16])))
  },
  /* row  18 */
  {
    ((MR_Box) ((MR_String) "\tsize  [format_param_options] <n>\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[17])))
  },
  /* row  19 */
  {
    ((MR_Box) ((MR_String) "\tdepth [format_param_options] <n>\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[18])))
  },
  /* row  20 */
  {
    ((MR_Box) ((MR_String) "\t               -- set the format\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[19])))
  },
  /* row  21 */
  {
    ((MR_Box) ((MR_String) "\tformat [format_options] <flat|raw-pretty|verbose|pretty>\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[20])))
  },
  /* row  22 */
  {
    ((MR_Box) ((MR_String) "\t                  (default is current)\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[21])))
  },
  /* row  23 */
  {
    ((MR_Box) ((MR_String) "\tmode [path]    -- show the mode of the specified subterm\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[22])))
  },
  /* row  24 */
  {
    ((MR_Box) ((MR_String) "\t                  that it makes the current goal invalid\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[23])))
  },
  /* row  25 */
  {
    ((MR_Box) ((MR_String) "\t                  for tracking, asserting for the declarative debugger\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[24])))
  },
  /* row  26 */
  {
    ((MR_Box) ((MR_String) "\t               -- mark the specified subterm (default is current)\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[25])))
  },
  /* row  27 */
  {
    ((MR_Box) ((MR_String) "\t[m|mark] [path]\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[26])))
  },
  /* row  28 */
  {
    ((MR_Box) ((MR_String) "\t                  for tracking, and quit\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[27])))
  },
  /* row  29 */
  {
    ((MR_Box) ((MR_String) "\t               -- mark the specified subterm (default is current)\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[28])))
  },
  /* row  30 */
  {
    ((MR_Box) ((MR_String) "\t[t|track] [path]\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[29])))
  },
  /* row  31 */
  {
    ((MR_Box) ((MR_String) "\tpwd            -- print the path to the current subterm\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[30])))
  },
  /* row  32 */
  {
    ((MR_Box) ((MR_String) "\tcdr n path     -- repeatedly apply the cd command n times\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[31])))
  },
  /* row  33 */
  {
    ((MR_Box) ((MR_String) "\tcd [path]      -- cd to the specified subterm (default is root)\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[32])))
  },
  /* row  34 */
  {
    ((MR_Box) ((MR_String) "\t               -- print the raw memory address of the specified subterm\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[33])))
  },
  /* row  35 */
  {
    ((MR_Box) ((MR_String) "\t[addr|memory_addr] [path]\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[34])))
  },
  /* row  36 */
  {
    ((MR_Box) ((MR_String) "\t               -- print the specified subterm using the \140browse\' params\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[35])))
  },
  /* row  37 */
  {
    ((MR_Box) ((MR_String) "\t[print|p|ls] [format_options] [path]\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[36])))
  },
  /* row  38 */
  {
    ((MR_Box) ((MR_String) "Commands are:\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[37])))
  },
  /* row  39 */
  {
    ((MR_Box) ((MR_String) "]")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  40 */
  {
    ((MR_Box) ((MR_String) ", ...")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  41 */
  {
    ((MR_Box) ((MR_String) "-")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  42 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__type_desc__type_desc__type_ctor_info_type_desc_0))
  },
  /* row  43 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_5[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[43])))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_5[6]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box mdb__browse_scalar_common_5[10][1] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   1 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_String) "error: inconsistent format options"))
  },
  /* row   4 */
  {
    ((MR_Box) ((MR_String) "("))
  },
  /* row   5 */
  {
    ((MR_Box) ((MR_String) ", "))
  },
  /* row   6 */
  {
    ((MR_Box) ((MR_String) ")"))
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_String) " = "))
  },
  /* row   8 */
  {
    ((MR_Box) ((MR_String) ""))
  },
  /* row   9 */
  {
    ((MR_Box) ((MR_String) "."))
  },
};

static /* final */ const MR_Box mdb__browse_scalar_common_6[2][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__univ__univ__type_ctor_info_univ_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (&mdb__browse_scalar_common_12[0])),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__univ__univ__type_ctor_info_univ_0))
  },
};

static /* final */ const MR_Integer mdb__browse_scalar_common_8[1][3] = {
  /* row   0 */
  {
    (MR_Integer) 2,
    (MR_Integer) 67663,
    (MR_Integer) 67727
  },
};

static /* final */ const MR_Box mdb__browse_scalar_common_9[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&mdb__browse_scalar_common_8[0])),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__univ__univ__type_ctor_info_univ_0)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 2))
  },
};

static /* final */ const MR_Box mdb__browse_scalar_common_10[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&mdb__browse_scalar_common_8[0])),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 2))
  },
};

static /* final */ const MR_Integer mdb__browse_scalar_common_12[1][2] = {
  /* row   0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};


static /* final */ const struct mdb__browse__vector_common_type_7_0_s mdb__browse_vector_common_7[20] = {
  /* row   0 */   { (MR_String) "!." },
  /* row   1 */   { (MR_String) "." },
  /* row   2 */   { (MR_String) ".." },
  /* row   3 */   { (MR_String) "=.." },
  /* row   4 */   { (MR_String) "r" },
  /* row   5 */   { (MR_String) "res" },
  /* row   6 */   { (MR_String) "result" },
  /* row   7 */   { (MR_String) "ret" },
  /* row   8 */   { (MR_String) "return" },
  /* row   9 */   { (MR_String) "rv" },
  /* row  10 */   { (MR_String) "Input" },
  /* row  11 */   { (MR_String) "Output" },
  /* row  12 */   { (MR_String) "Unbound" },
  /* row  13 */   { (MR_String) "Not Applicable" },
  /* row  14 */   { (MR_String) "r" },
  /* row  15 */   { (MR_String) "res" },
  /* row  16 */   { (MR_String) "result" },
  /* row  17 */   { (MR_String) "ret" },
  /* row  18 */   { (MR_String) "return" },
  /* row  19 */   { (MR_String) "rv" },
};

static /* final */ const struct mdb__browse__vector_common_type_11_0_s mdb__browse_vector_common_11[4] = {
  /* row   0 */   { (MR_Integer) 0 },
  /* row   1 */   { (MR_Integer) 1 },
  /* row   2 */   { (MR_Integer) 2 },
  /* row   3 */   { (MR_Integer) 3 },
};


#include "array.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "io.mh"
#include "mdb.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"
#include "mdb.browse.mh"

#line 221 "browse.m"
void 
ML_BROWSE_browse_browser_term_no_modes(
  MR_Word InputStream_9,
  MR_Word OutputStream_10,
  MR_Word Term_11,
  MR_Word * MaybeTrack_12,
  MR_Word STATE_VARIABLE_State_0_17,
  MR_Word * STATE_VARIABLE_State_18)
#line 221 "browse.m"
{
#line 221 "browse.m"
	mdb__browse__browse_browser_term_no_modes_8_p_0((MR_Word) InputStream_9, (MR_Word) OutputStream_10, (MR_Word) Term_11, (MR_Word *) MaybeTrack_12, (MR_Word) STATE_VARIABLE_State_0_17, (MR_Word *) STATE_VARIABLE_State_18);
}

#line 224 "browse.m"
void 
ML_BROWSE_browse_browser_term_format_no_modes(
  MR_Word InputStream_9,
  MR_Word OutputStream_10,
  MR_Word Format_11,
  MR_Word Term_12,
  MR_Word STATE_VARIABLE_State_0_17,
  MR_Word * STATE_VARIABLE_State_18)
#line 224 "browse.m"
{
#line 224 "browse.m"
	mdb__browse__browse_browser_term_format_no_modes_8_p_0((MR_Word) InputStream_9, (MR_Word) OutputStream_10, (MR_Word) Format_11, (MR_Word) Term_12, (MR_Word) STATE_VARIABLE_State_0_17, (MR_Word *) STATE_VARIABLE_State_18);
}

#line 227 "browse.m"
void 
ML_BROWSE_browse_external_no_modes(
  MR_Word TypeInfo_for_T_25,
  MR_Word InputStream_8,
  MR_Word OutputStream_9,
  MR_Word Term_10,
  MR_Word STATE_VARIABLE_State_0_16,
  MR_Word * STATE_VARIABLE_State_17)
#line 227 "browse.m"
{
#line 227 "browse.m"
	mdb__browse__browse_external_no_modes_7_p_0((MR_Word) TypeInfo_for_T_25, (MR_Word) InputStream_8, (MR_Word) OutputStream_9, (MR_Box) Term_10, (MR_Word) STATE_VARIABLE_State_0_16, (MR_Word *) STATE_VARIABLE_State_17);
}

#line 230 "browse.m"
void 
ML_BROWSE_print_browser_term(
  MR_Word OutputStream_7,
  MR_Word CallerType_8,
  MR_Word Term_9,
  MR_Word State_10)
#line 230 "browse.m"
{
#line 230 "browse.m"
	mdb__browse__print_browser_term_6_p_0((MR_Word) OutputStream_7, (MR_Word) CallerType_8, (MR_Word) Term_9, (MR_Word) State_10);
}

#line 232 "browse.m"
void 
ML_BROWSE_print_browser_term_format(
  MR_Word OutputStream_8,
  MR_Word CallerType_9,
  MR_Word Format_10,
  MR_Word Term_11,
  MR_Word State_12)
#line 232 "browse.m"
{
#line 232 "browse.m"
	mdb__browse__print_browser_term_format_7_p_0((MR_Word) OutputStream_8, (MR_Word) CallerType_9, (MR_Word) Format_10, (MR_Word) Term_11, (MR_Word) State_12);
}

#line 236 "browse.m"
void 
ML_BROWSE_save_term_to_file(
  MR_Word OutputStream_7,
  MR_String FileName_8,
  MR_String _Format_9,
  MR_Word BrowserTerm_10)
#line 236 "browse.m"
{
#line 236 "browse.m"
	mdb__browse__save_term_to_file_6_p_0((MR_Word) OutputStream_7, (MR_String) FileName_8, (MR_String) _Format_9, (MR_Word) BrowserTerm_10);
}

#line 238 "browse.m"
void 
ML_BROWSE_save_term_to_file_xml(
  MR_Word OutputStream_6,
  MR_String FileName_7,
  MR_Word BrowserTerm_8)
#line 238 "browse.m"
{
#line 238 "browse.m"
	mdb__browse__save_term_to_file_xml_5_p_0((MR_Word) OutputStream_6, (MR_String) FileName_7, (MR_Word) BrowserTerm_8);
}

#line 240 "browse.m"
void 
ML_BROWSE_save_term_to_file_doc(
  MR_Word OutputStream_6,
  MR_String FileName_7,
  MR_Word BrowserTerm_8)
#line 240 "browse.m"
{
#line 240 "browse.m"
	mdb__browse__save_term_to_file_doc_5_p_0((MR_Word) OutputStream_6, (MR_String) FileName_7, (MR_Word) BrowserTerm_8);
}

#line 243 "browse.m"
void 
ML_BROWSE_save_and_browse_browser_term_web(
  MR_Word OutputStream_7,
  MR_Word ErrorStream_8,
  MR_Word Term_9,
  MR_Word State_10)
#line 243 "browse.m"
{
#line 243 "browse.m"
	mdb__browse__save_and_browse_browser_term_web_6_p_0((MR_Word) OutputStream_7, (MR_Word) ErrorStream_8, (MR_Word) Term_9, (MR_Word) State_10);
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
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
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
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
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
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__browse__mdb__browse__du_stag_ordered_deref_result_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__browse__mdb__browse__du_stag_ordered_deref_result_1_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__browse____Unify____deref_result_1_0_10001)),
  ((MR_Box) (mdb__browse____Compare____deref_result_1_0_10001)),
  (MR_String) "mdb.browse",
  (MR_String) "deref_result",
  { mdb__browse__mdb__browse__du_name_ordered_deref_result_1 },
  { mdb__browse__mdb__browse__du_ptag_ordered_deref_result_1 },
  (MR_Integer) 2,
  UINT16_C(12),
  mdb__browse__mdb__browse__functor_number_map_deref_result_1,

};

static const MR_EnumFunctorDesc mdb__browse__mdb__browse__enum_functor_desc_unbound_0_0 = {
  (MR_String) "_",
  INT32_C(0)
};

static const MR_EnumFunctorDescPtr mdb__browse__mdb__browse__enum_ordinal_ordered_unbound_0[1] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (mdb__browse____Unify____unbound_0_0_10001)),
  ((MR_Box) (mdb__browse____Compare____unbound_0_0_10001)),
  (MR_String) "mdb.browse",
  (MR_String) "unbound",
  { mdb__browse__mdb__browse__enum_name_ordered_unbound_0 },
  { mdb__browse__mdb__browse__enum_ordinal_ordered_unbound_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mdb__browse__mdb__browse__functor_number_map_unbound_0,

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
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
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
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__browse__mdb__browse__du_stag_ordered_xml_function_wrapper_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__browse____Unify____xml_function_wrapper_0_0_10001)),
  ((MR_Box) (mdb__browse____Compare____xml_function_wrapper_0_0_10001)),
  (MR_String) "mdb.browse",
  (MR_String) "xml_function_wrapper",
  { mdb__browse__mdb__browse__du_name_ordered_xml_function_wrapper_0 },
  { mdb__browse__mdb__browse__du_ptag_ordered_xml_function_wrapper_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mdb__browse__mdb__browse__functor_number_map_xml_function_wrapper_0,

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
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
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
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__browse__mdb__browse__du_stag_ordered_xml_predicate_wrapper_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__browse____Unify____xml_predicate_wrapper_0_0_10001)),
  ((MR_Box) (mdb__browse____Compare____xml_predicate_wrapper_0_0_10001)),
  (MR_String) "mdb.browse",
  (MR_String) "xml_predicate_wrapper",
  { mdb__browse__mdb__browse__du_name_ordered_xml_predicate_wrapper_0 },
  { mdb__browse__mdb__browse__du_ptag_ordered_xml_predicate_wrapper_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mdb__browse__mdb__browse__functor_number_map_xml_predicate_wrapper_0,

};

static void MR_CALL 
mdb__browse____Compare____xml_predicate_wrapper_0_0(
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
    MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&mdb__browse_scalar_common_4[1]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

static MR_bool MR_CALL 
mdb__browse____Unify____xml_predicate_wrapper_0_0(
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

static void MR_CALL 
mdb__browse____Compare____xml_function_wrapper_0_0(
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
    MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
    MR_Word SubResult1_6;

    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&mdb__browse_scalar_common_4[1]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        mercury__univ____Compare____univ_0_0(HeadVar__1_1, ArgX3_10, ArgY3_11);
    }
  }
}

static MR_bool MR_CALL 
mdb__browse____Unify____xml_function_wrapper_0_0(
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
  return MR_TRUE;
}

static void MR_CALL 
mdb__browse____Compare____deref_result_1_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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
      MR_Word ArgY2_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_14;

      mercury__builtin__compare_3_p_0((MR_Word) (&mdb__browse_scalar_common_4[0]), &SubResult1_14, ((MR_Box) (Var_23)), ((MR_Box) (ArgY1_13)));
      succeeded = (SubResult1_14 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_14;
      else
        mdb__browser_info____Compare____down_dir_0_0(HeadVar__1_1, Var_22, ArgY2_16);
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

static MR_bool MR_CALL 
mdb__browse____Unify____deref_result_1_0(
  MR_Word TypeInfo_for_T_11,
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

static void MR_CALL 
mdb__browse__write_univ_or_unbound_4_p_0(
  MR_Word TypeClassInfo_for_writer_15,
  MR_Word TypeClassInfo_for_writer_16,
  MR_Box Stream_5,
  MR_Word Univ_6,
  MR_Box STATE_VARIABLE_IO_0_9,
  MR_Box * STATE_VARIABLE_IO_10)
{
  MR_bool succeeded;
  MR_Box conv0_Var_11;

  succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) (&mdb__browse__mdb__browse__type_ctor_info_unbound_0), Univ_6, &conv0_Var_11);
  if (succeeded)
    succeeded = MR_TRUE;
  if (succeeded)
    mercury__stream__string_writer__put_char_4_p_0(TypeClassInfo_for_writer_15, Stream_5, (MR_Char) 95, STATE_VARIABLE_IO_0_9, STATE_VARIABLE_IO_10);
  else
    mercury__stream__string_writer__write_univ_5_p_2(TypeClassInfo_for_writer_15, TypeClassInfo_for_writer_16, Stream_5, (MR_Integer) 2, Univ_6, STATE_VARIABLE_IO_0_9, STATE_VARIABLE_IO_10);
}

static void MR_CALL 
mdb__browse__put_comma_space_3_p_0(
  MR_Word TypeClassInfo_for_writer_9,
  MR_Box Stream_4,
  MR_Box STATE_VARIABLE_State_0_6,
  MR_Box * STATE_VARIABLE_State_7)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_9, (MR_Integer) 0)), (MR_Integer) 5))));

  func_0(((MR_Box) (TypeClassInfo_for_writer_9)), Stream_4, ((MR_Box) ((MR_String) ", ")), STATE_VARIABLE_State_0_6, STATE_VARIABLE_State_7);
}

static MR_bool MR_CALL 
mdb__browse__bool_format_option_is_true_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Format_3)
{
  MR_bool succeeded;
  MR_Word Var_4;
  MR_Word Var_5;

  *Format_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
  Var_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
  succeeded = ((MR_tag((MR_Word) Var_4)) == (MR_Integer) 1);
  if (succeeded)
  {
    Var_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Var_4, (MR_Integer) 0))) & (MR_Integer) 1);
    succeeded = (Var_5 == (MR_Integer) 1);
  }
  return succeeded;
}

static void MR_CALL 
mdb__browse__get_value_representation_2_p_0(
  MR_Word TypeInfo_for_T_3,
  MR_Box HeadVar__1_1,
  MR_Integer * HeadVar__2_2)
{
  mdb__browse__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_118_97_108_117_101_95_114_101_112_114_101_115_101_110_116_97_116_105_111_110_95_95_91_49_93_95_48_2_p_0(HeadVar__1_1, HeadVar__2_2);
}

static void MR_CALL 
mdb__browse__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_118_97_108_117_101_95_114_101_112_114_101_115_101_110_116_97_116_105_111_110_95_95_91_49_93_95_48_2_p_0(
  MR_Box HeadVar__1_1,
  MR_Integer * HeadVar__2_2)
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

MR_bool MR_CALL 
mdb__browse__string_is_return_value_alias_1_p_0(
  MR_String HeadVar__1_1)
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
    result_3 = MR_strcmp(HeadVar__1_1, ((&mdb__browse_vector_common_7[14 + mid_2]))->mdb__browse__vector_common_type_7_0__vct_7_f_0);
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
  return succeeded;
}

void MR_CALL 
mdb__browse__simplify_dirs_2_p_0(
  MR_Word Dirs_3,
  MR_Word * SimpleDirs_4)
{
  MR_Word RevDirs_5;

  mercury__list__reverse_2_p_0((MR_Word) (&mdb__browser_info__mdb__browser_info__type_ctor_info_up_down_dir_0), Dirs_3, &RevDirs_5);
  mdb__browse__simplify_rev_dirs_4_p_0(RevDirs_5, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), SimpleDirs_4);
}

static void MR_CALL 
mdb__browse__browser_term_to_html_flat_string_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  mdb__browse__put_comma_space_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), wrapper_arg_1, wrapper_arg_2, wrapper_arg_3);
}

static void MR_CALL 
mdb__browse__browser_term_to_html_flat_string_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  mdb__browse__write_univ_or_unbound_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), wrapper_arg_1, ((MR_Word) (wrapper_arg_2)), wrapper_arg_3, wrapper_arg_4);
}

void MR_CALL 
mdb__browse__browser_term_to_html_flat_string_5_p_0(
  MR_Word BrowserTerm_6,
  MR_String * Str_7,
  MR_Word * Elided_8)
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
      MR_Word Univ_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BrowserTerm_6, (MR_Integer) 0))));
      MR_Box conv0_State_12;

      mercury__stream__string_writer__write_univ_5_p_2((MR_Word) (&mdb__browse_scalar_common_3[1]), (MR_Word) (&mdb__browse_scalar_common_3[2]), ((MR_Box) ((MR_Integer) 0)), (MR_Integer) 2, Univ_24, ((MR_Box) (Var_21)), &conv0_State_12);
      State_12 = ((MR_Word) (conv0_State_12));
    }
    else
    {
      MR_String Functor_25 = ((MR_String) ((MR_hl_field(MR_mktag(1), BrowserTerm_6, (MR_Integer) 0))));
      MR_Word Args_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BrowserTerm_6, (MR_Integer) 1))));
      MR_Word MaybeReturn_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BrowserTerm_6, (MR_Integer) 2))));
      MR_Word STATE_VARIABLE_IO_19_30;
      MR_Word STATE_VARIABLE_IO_26_37;
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mdb__browse_scalar_common_3[1]), (MR_Integer) 0)), (MR_Integer) 5))));
      MR_Box conv2_STATE_VARIABLE_IO_19_30;

      func_1(((MR_Box) ((MR_Word) (&mdb__browse_scalar_common_3[1]))), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (Functor_25)), ((MR_Box) (Var_21)), &conv2_STATE_VARIABLE_IO_19_30);
      STATE_VARIABLE_IO_19_30 = ((MR_Word) (conv2_STATE_VARIABLE_IO_19_30));
      if ((Args_26 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_IO_26_37 = STATE_VARIABLE_IO_19_30;
      else
      {
        MR_Word TypeClassInfo_for_output_41;
        MR_Word STATE_VARIABLE_IO_21_32;
        MR_Word STATE_VARIABLE_IO_24_35;
        void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mdb__browse_scalar_common_3[1]), (MR_Integer) 0)), (MR_Integer) 5))));
        MR_Box conv4_STATE_VARIABLE_IO_21_32;
        MR_Box conv5_STATE_VARIABLE_IO_24_35;
        void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv7_STATE_VARIABLE_IO_26_37;

        func_3(((MR_Box) ((MR_Word) (&mdb__browse_scalar_common_3[1]))), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "(")), ((MR_Box) (STATE_VARIABLE_IO_19_30)), &conv4_STATE_VARIABLE_IO_21_32);
        STATE_VARIABLE_IO_21_32 = ((MR_Word) (conv4_STATE_VARIABLE_IO_21_32));
        mercury__private_builtin__superclass_from_typeclass_info_3_p_0((MR_Word) (&mdb__browse_scalar_common_3[1]), (MR_Integer) 1, &TypeClassInfo_for_output_41);
        mercury__stream__put_list_6_p_2((MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), TypeClassInfo_for_output_41, ((MR_Box) ((MR_Integer) 0)), (MR_Word) (&mdb__browse_scalar_common_3[7]), (MR_Word) (&mdb__browse_scalar_common_2[4]), Args_26, ((MR_Box) (STATE_VARIABLE_IO_21_32)), &conv5_STATE_VARIABLE_IO_24_35);
        STATE_VARIABLE_IO_24_35 = ((MR_Word) (conv5_STATE_VARIABLE_IO_24_35));
        func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mdb__browse_scalar_common_3[1]), (MR_Integer) 0)), (MR_Integer) 5))));
        func_6(((MR_Box) ((MR_Word) (&mdb__browse_scalar_common_3[1]))), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) ")")), ((MR_Box) (STATE_VARIABLE_IO_24_35)), &conv7_STATE_VARIABLE_IO_26_37);
        STATE_VARIABLE_IO_26_37 = ((MR_Word) (conv7_STATE_VARIABLE_IO_26_37));
      }
      if ((MaybeReturn_27 == (MR_Word) ((MR_Unsigned) 0U)))
        State_12 = STATE_VARIABLE_IO_26_37;
      else
      {
        MR_Word Return_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeReturn_27, (MR_Integer) 0))));
        MR_Word STATE_VARIABLE_IO_28_39;
        void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mdb__browse_scalar_common_3[1]), (MR_Integer) 0)), (MR_Integer) 5))));
        MR_Box conv9_STATE_VARIABLE_IO_28_39;
        MR_Box conv10_State_12;

        func_8(((MR_Box) ((MR_Word) (&mdb__browse_scalar_common_3[1]))), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) " = ")), ((MR_Box) (STATE_VARIABLE_IO_26_37)), &conv9_STATE_VARIABLE_IO_28_39);
        STATE_VARIABLE_IO_28_39 = ((MR_Word) (conv9_STATE_VARIABLE_IO_28_39));
        mercury__stream__string_writer__write_univ_5_p_2((MR_Word) (&mdb__browse_scalar_common_3[1]), (MR_Word) (&mdb__browse_scalar_common_3[2]), ((MR_Box) ((MR_Integer) 0)), (MR_Integer) 2, Return_28, ((MR_Box) (STATE_VARIABLE_IO_28_39)), &conv10_State_12);
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
    MR_Word MaybeFunctorArityArgs_47;
    MR_Word MaybeReturn_48;
    MR_String Functor_49;
    MR_Word Args_51;
    MR_Tuple Var_52;

    mercury__io__stream_db__get_stream_db_3_p_0(&StreamDb_13);
    BrowserDb_14 = (MR_Word) (StreamDb_13);
    mdb__browser_info__limited_deconstruct_browser_term_cc_5_p_0(BrowserDb_14, BrowserTerm_6, (MR_Integer) 10, &MaybeFunctorArityArgs_47, &MaybeReturn_48);
    succeeded = ((MR_Integer) 0 < (MR_Integer) 10);
    if (succeeded)
    {
      succeeded = ((MR_Integer) 0 < (MR_Integer) 5);
      if (succeeded)
      {
        succeeded = (MaybeFunctorArityArgs_47 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_52 = ((MR_Tuple) ((MR_hl_field(MR_mktag(1), MaybeFunctorArityArgs_47, (MR_Integer) 0))));
          Functor_49 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_52, (MR_Integer) 0))));
          Args_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_52, (MR_Integer) 2))));
          succeeded = MR_TRUE;
        }
      }
    }
    if (succeeded)
    {
      MR_Integer _NewSize_46;

      mdb__browse__browser_term_to_string_3_10_p_0(BrowserDb_14, Functor_49, Args_51, MaybeReturn_48, (MR_Integer) 10, (MR_Integer) 0, &_NewSize_46, (MR_Integer) 5, (MR_Integer) 0, Str_7);
    }
    else
      mdb__browse__browser_term_compress_3_p_0(BrowserDb_14, BrowserTerm_6, Str_7);
    *Elided_8 = (MR_Integer) 1;
  }
}

void MR_CALL 
mdb__browse__save_and_browse_browser_term_web_6_p_0(
  MR_Word OutputStream_7,
  MR_Word ErrorStream_8,
  MR_Word Term_9,
  MR_Word State_10)
{
  MR_bool succeeded;
  MR_Word MaybeValue_73;
  MR_String MdbDir_75;
  MR_String Path_74;
  MR_String Var_77;
  MR_String Var_78;

  mercury__io__environment__get_environment_var_4_p_0((MR_String) "MERCURY_DEBUGGER_INIT", &MaybeValue_73);
  succeeded = (MaybeValue_73 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    Path_74 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeValue_73, (MR_Integer) 0))));
    succeeded = mercury__dir__path_name_is_absolute_1_p_0(Path_74);
    if (succeeded)
    {
      Var_77 = (MR_String) "mdbrc";
      succeeded = mercury__dir__split_name_3_p_0(Path_74, &MdbDir_75, &Var_78);
      if (succeeded)
        succeeded = (strcmp(Var_77, Var_78) == 0);
    }
  }
  if (succeeded)
  {
    MR_Word MaybeBrowserCmd_14;

    MaybeBrowserCmd_14 = mdb__browser_info__web_browser_cmd_1_f_0(State_10);
    if ((MaybeBrowserCmd_14 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_String Var_52;
      MR_String Var_55;

      Var_55 = mercury__string__f_43_43_2_f_0((MR_String) "your preferred web browser, by issuing an mdb command ", (MR_String) "\"web_browser_cmd <command>\".\n");
      Var_52 = mercury__string__f_43_43_2_f_0((MR_String) "mdb: You need to specify the shell command that launches ", Var_55);
      mercury__io__write_string_4_p_0(ErrorStream_8, Var_52);
    }
    else
    {
      MR_String BrowserCmd_15 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeBrowserCmd_14, (MR_Integer) 0))));
      MR_String TmpDir_16;
      MR_Word TmpResult_17;

      mercury__io__file__get_temp_directory_3_p_0(&TmpDir_16);
      mercury__io__file__make_temp_file_6_p_0(TmpDir_16, (MR_String) "mdb", (MR_String) ".html", &TmpResult_17);
      if (((MR_tag((MR_Word) TmpResult_17)) == (MR_Integer) 1))
      {
        MR_Word Error_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TmpResult_17, (MR_Integer) 0))));
        MR_String Msg_61;

        mercury__io__error_message_2_p_0(Error_60, &Msg_61);
        mercury__io__write_string_4_p_0(ErrorStream_8, (MR_String) "Error opening temporary file: ");
        mercury__io__write_string_4_p_0(ErrorStream_8, Msg_61);
        mercury__io__write_string_4_p_0(ErrorStream_8, (MR_String) "\n");
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

          mercury__io__file__remove_file_4_p_0(TmpFileName0_18, &Var_20);
          TmpFileName_19 = mercury__string__f_43_43_2_f_0(TmpFileName0_18, (MR_String) ".html");
        }
        mercury__io__open_output_4_p_0(TmpFileName_19, &SaveResult_21);
        if (((MR_tag((MR_Word) SaveResult_21)) == (MR_Integer) 1))
        {
          MR_Word Error_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SaveResult_21, (MR_Integer) 0))));
          MR_String Msg_25;

          mercury__io__error_message_2_p_0(Error_24, &Msg_25);
          mercury__io__write_string_4_p_0(ErrorStream_8, (MR_String) "Error opening file \140");
          mercury__io__write_string_4_p_0(ErrorStream_8, TmpFileName_19);
          mercury__io__write_string_4_p_0(ErrorStream_8, (MR_String) "\': ");
          mercury__io__write_string_4_p_0(ErrorStream_8, Msg_25);
          mercury__io__write_string_4_p_0(ErrorStream_8, (MR_String) "\n");
        }
        else
        {
          MR_String CommandStr_23;
          MR_String Var_37;
          MR_Word OutputStream_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SaveResult_21, (MR_Integer) 0))));
          MR_Word Var_80;

          mdb__term_to_html__write_html_doc_6_p_0(OutputStream_79, Term_9, MdbDir_75, &Var_80);
          mercury__io__close_output_3_p_0(OutputStream_79);
          Var_37 = mercury__string__f_43_43_2_f_0((MR_String) " ", TmpFileName_19);
          CommandStr_23 = mercury__string__f_43_43_2_f_0(BrowserCmd_15, Var_37);
          mdb__browse__launch_web_browser_5_p_0(OutputStream_7, ErrorStream_8, CommandStr_23);
        }
      }
    }
  }
  else
    mercury__io__write_string_4_p_0(ErrorStream_8, (MR_String) "Could not determine directory containing mdb files.\n");
}

static void MR_CALL 
mdb__browse__launch_web_browser_5_p_0(
  MR_Word OutputStream_6,
  MR_Word ErrorStream_7,
  MR_String CommandStr_8)
{
  MR_bool succeeded;
  MR_Word Result_10;

  mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "Launching web browser...\n");
  mercury__io__flush_output_3_p_0(OutputStream_6);
  mercury__io__call_system__call_system_return_signal_4_p_0(CommandStr_8, &Result_10);
  if (((MR_tag((MR_Word) Result_10)) == (MR_Integer) 1))
  {
    MR_Word Error_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Result_10, (MR_Integer) 0))));
    MR_String Var_34;

    Var_34 = mercury__string__string_1_f_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (Error_14)));
    mercury__io__write_string_4_p_0(ErrorStream_7, (MR_String) "mdb: Error launching browser: ");
    mercury__io__write_string_4_p_0(ErrorStream_7, Var_34);
    mercury__io__write_string_4_p_0(ErrorStream_7, (MR_String) ".\n");
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
        mercury__io__write_string_4_p_0(ErrorStream_7, (MR_String) "mdb: The command \140");
        mercury__io__write_string_4_p_0(ErrorStream_7, CommandStr_8);
        mercury__io__write_string_4_p_0(ErrorStream_7, (MR_String) "\' terminated with a non-zero exit code.\n");
      }
    }
    else
      mercury__io__write_string_4_p_0(ErrorStream_7, (MR_String) "mdb: The browser was killed.\n");
  }
}

void MR_CALL 
mdb__browse__save_term_to_file_doc_5_p_0(
  MR_Word OutputStream_6,
  MR_String FileName_7,
  MR_Word BrowserTerm_8)
{
  MR_Word FileStreamResult_10;

  mercury__io__open_output_4_p_0(FileName_7, &FileStreamResult_10);
  if (((MR_tag((MR_Word) FileStreamResult_10)) == (MR_Integer) 1))
  {
    MR_Word Error_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FileStreamResult_10, (MR_Integer) 0))));
    MR_String Msg_22;

    mercury__io__error_message_2_p_0(Error_21, &Msg_22);
    mercury__io__write_string_4_p_0(OutputStream_6, Msg_22);
    mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "\n");
  }
  else
  {
    MR_Word FileStream_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FileStreamResult_10, (MR_Integer) 0))));
    MR_Word Doc_14;

    if (((MR_tag((MR_Word) BrowserTerm_8)) == (MR_Integer) 0))
    {
      MR_Word TypeInfo_33_33;
      MR_Word Univ_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BrowserTerm_8, (MR_Integer) 0))));
      MR_Box Term_13;

      Term_13 = mercury__univ__univ_value_1_f_0(&TypeInfo_33_33, Univ_12);
      Doc_14 = mercury__pretty_printer__format_1_f_0(TypeInfo_33_33, Term_13);
    }
    else
    {
      MR_String Functor_15 = ((MR_String) ((MR_hl_field(MR_mktag(1), BrowserTerm_8, (MR_Integer) 0))));
      MR_Word ArgUnivs_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BrowserTerm_8, (MR_Integer) 1))));
      MR_Word MaybeResultUniv_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BrowserTerm_8, (MR_Integer) 2))));

      if ((MaybeResultUniv_17 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word PredicateTerm_18;

        {
          PredicateTerm_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), PredicateTerm_18, 0) = ((MR_Box) (Functor_15));
          MR_hl_field(MR_mktag(0), PredicateTerm_18, 1) = ((MR_Box) (ArgUnivs_16));
        }
        Doc_14 = mercury__pretty_printer__format_1_f_0((MR_Word) (&mdb__browse__mdb__browse__type_ctor_info_xml_predicate_wrapper_0), ((MR_Box) (PredicateTerm_18)));
      }
      else
      {
        MR_Word ResultUniv_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeResultUniv_17, (MR_Integer) 0))));
        MR_Word FunctionTerm_20;

        {
          FunctionTerm_20 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), FunctionTerm_20, 0) = ((MR_Box) (Functor_15));
          MR_hl_field(MR_mktag(0), FunctionTerm_20, 1) = ((MR_Box) (ArgUnivs_16));
          MR_hl_field(MR_mktag(0), FunctionTerm_20, 2) = ((MR_Box) (ResultUniv_19));
        }
        Doc_14 = mercury__pretty_printer__format_1_f_0((MR_Word) (&mdb__browse__mdb__browse__type_ctor_info_xml_function_wrapper_0), ((MR_Box) (FunctionTerm_20)));
      }
    }
    mercury__pretty_printer__write_doc_4_p_0(FileStream_11, Doc_14);
    mercury__io__close_output_3_p_0(FileStream_11);
  }
}

void MR_CALL 
mdb__browse__save_term_to_file_xml_5_p_0(
  MR_Word OutputStream_6,
  MR_String FileName_7,
  MR_Word BrowserTerm_8)
{
  MR_Word FileStreamResult_10;

  mercury__io__open_output_4_p_0(FileName_7, &FileStreamResult_10);
  if (((MR_tag((MR_Word) FileStreamResult_10)) == (MR_Integer) 1))
  {
    MR_Word Error_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FileStreamResult_10, (MR_Integer) 0))));
    MR_String Msg_24;

    mercury__io__error_message_2_p_0(Error_23, &Msg_24);
    mercury__io__write_string_4_p_0(OutputStream_6, Msg_24);
    mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "\n");
  }
  else
  {
    MR_Word FileStream_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FileStreamResult_10, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) BrowserTerm_8)) == (MR_Integer) 0))
    {
      MR_Word TypeInfo_46_46;
      MR_Word Univ_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BrowserTerm_8, (MR_Integer) 0))));
      MR_Box Term_13;
      MR_Word Var_14;
      MR_Box conv0_STATE_VARIABLE_IO_31_31;

      Term_13 = mercury__univ__univ_value_1_f_0(&TypeInfo_46_46, Univ_12);
      mercury__term_to_xml__write_xml_doc_general_cc_8_p_0(TypeInfo_46_46, (MR_Word) (&mdb__browse_scalar_common_3[0]), ((MR_Box) (FileStream_11)), Term_13, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 4U), &Var_14, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_31_31);
    }
    else
    {
      MR_String Functor_15 = ((MR_String) ((MR_hl_field(MR_mktag(1), BrowserTerm_8, (MR_Integer) 0))));
      MR_Word ArgUnivs_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BrowserTerm_8, (MR_Integer) 1))));
      MR_Word MaybeResultUniv_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BrowserTerm_8, (MR_Integer) 2))));

      if ((MaybeResultUniv_17 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word PredicateTerm_18;
        MR_Word Var_19;
        MR_Box conv1_STATE_VARIABLE_IO_31_31;

        {
          PredicateTerm_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), PredicateTerm_18, 0) = ((MR_Box) (Functor_15));
          MR_hl_field(MR_mktag(0), PredicateTerm_18, 1) = ((MR_Box) (ArgUnivs_16));
        }
        mercury__term_to_xml__write_xml_doc_general_cc_8_p_0((MR_Word) (&mdb__browse__mdb__browse__type_ctor_info_xml_predicate_wrapper_0), (MR_Word) (&mdb__browse_scalar_common_3[0]), ((MR_Box) (FileStream_11)), ((MR_Box) (PredicateTerm_18)), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 4U), &Var_19, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_31_31);
      }
      else
      {
        MR_Word ResultUniv_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeResultUniv_17, (MR_Integer) 0))));
        MR_Word FunctionTerm_21;
        MR_Word Var_22;
        MR_Box conv2_STATE_VARIABLE_IO_31_31;

        {
          FunctionTerm_21 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), FunctionTerm_21, 0) = ((MR_Box) (Functor_15));
          MR_hl_field(MR_mktag(0), FunctionTerm_21, 1) = ((MR_Box) (ArgUnivs_16));
          MR_hl_field(MR_mktag(0), FunctionTerm_21, 2) = ((MR_Box) (ResultUniv_20));
        }
        mercury__term_to_xml__write_xml_doc_general_cc_8_p_0((MR_Word) (&mdb__browse__mdb__browse__type_ctor_info_xml_function_wrapper_0), (MR_Word) (&mdb__browse_scalar_common_3[0]), ((MR_Box) (FileStream_11)), ((MR_Box) (FunctionTerm_21)), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 4U), &Var_22, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_31_31);
      }
    }
    mercury__io__close_output_3_p_0(FileStream_11);
  }
}

void MR_CALL 
mdb__browse__save_term_to_file_6_p_0(
  MR_Word OutputStream_7,
  MR_String FileName_8,
  MR_String _Format_9,
  MR_Word BrowserTerm_10)
{
  mdb__browse__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_118_101_95_116_101_114_109_95_116_111_95_102_105_108_101_95_95_91_51_93_95_48_6_p_0(OutputStream_7, FileName_8, BrowserTerm_10);
}

static MR_Box MR_CALL 
mdb__browse__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_118_101_95_116_101_114_109_95_116_111_95_102_105_108_101_95_95_91_51_93_95_48_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = mercury__univ__univ_1_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), wrapper_arg_1);
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

void MR_CALL 
mdb__browse__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_118_101_95_116_101_114_109_95_116_111_95_102_105_108_101_95_95_91_51_93_95_48_6_p_0(
  MR_Word OutputStream_7,
  MR_String FileName_8,
  MR_Word BrowserTerm_10)
{
  MR_bool succeeded;
  MR_Word FileStreamResult_13;

  mercury__io__open_output_4_p_0(FileName_8, &FileStreamResult_13);
  if (((MR_tag((MR_Word) FileStreamResult_13)) == (MR_Integer) 1))
  {
    MR_Word Error_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FileStreamResult_13, (MR_Integer) 0))));
    MR_String Msg_21;

    mercury__io__error_message_2_p_0(Error_20, &Msg_21);
    mercury__io__write_string_4_p_0(OutputStream_7, Msg_21);
  }
  else
  {
    MR_Word FileStream_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FileStreamResult_13, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) BrowserTerm_10)) == (MR_Integer) 0))
    {
      MR_Word TypeInfo_13_51;
      MR_Word Term_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BrowserTerm_10, (MR_Integer) 0))));
      MR_Box Var_50;
      MR_Word TypeInfo_55_82;
      MR_Word List_52;

      Var_50 = mercury__univ__univ_value_1_f_0(&TypeInfo_13_51, Term_15);
      succeeded = mdb__browse__dynamic_cast_to_list_2_p_0(TypeInfo_13_51, &TypeInfo_55_82, Var_50, &List_52);
      if (succeeded)
        if ((List_52 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mdb__browse__write_indent_4_p_0(FileStream_14, (MR_Integer) 0);
          mercury__io__write_string_4_p_0(FileStream_14, (MR_String) "[]");
        }
        else
        {
          MR_Word MakeUniv_53;
          MR_Word Univs_54;

          {
            MakeUniv_53 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), MakeUniv_53, 0) = ((MR_Box) (&mdb__browse_scalar_common_6[1]));
            MR_hl_field(MR_mktag(0), MakeUniv_53, 1) = ((MR_Box) (mdb__browse__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_118_101_95_116_101_114_109_95_116_111_95_102_105_108_101_95_95_91_51_93_95_48_6_p_0_1));
            MR_hl_field(MR_mktag(0), MakeUniv_53, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), MakeUniv_53, 3) = ((MR_Box) (TypeInfo_55_82));
          }
          Univs_54 = mercury__list__map_2_f_0(TypeInfo_55_82, (MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), MakeUniv_53, List_52);
          mdb__browse__write_indent_4_p_0(FileStream_14, (MR_Integer) 0);
          mercury__io__write_string_4_p_0(FileStream_14, (MR_String) "[\n");
          mdb__browse__save_args_5_p_0(FileStream_14, (MR_Integer) ((MR_Unsigned) 0 + (MR_Unsigned) 1), Univs_54);
          mercury__io__write_string_4_p_0(FileStream_14, (MR_String) "\n");
          mdb__browse__write_indent_4_p_0(FileStream_14, (MR_Integer) 0);
          mercury__io__write_string_4_p_0(FileStream_14, (MR_String) "]");
        }
      else
      {
        MR_String Functor_55;
        MR_Word Args_57;
        MR_Integer _Arity_56;

        mercury__deconstruct__deconstruct_5_p_2(TypeInfo_13_51, Var_50, (MR_Integer) 2, &Functor_55, &_Arity_56, &Args_57);
        mdb__browse__write_indent_4_p_0(FileStream_14, (MR_Integer) 0);
        mercury__io__write_string_4_p_0(FileStream_14, Functor_55);
        if (!((Args_57 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          mercury__io__write_string_4_p_0(FileStream_14, (MR_String) "(\n");
          mdb__browse__save_args_5_p_0(FileStream_14, (MR_Integer) ((MR_Unsigned) 0 + (MR_Unsigned) 1), Args_57);
          mercury__io__write_string_4_p_0(FileStream_14, (MR_String) "\n");
          mdb__browse__write_indent_4_p_0(FileStream_14, (MR_Integer) 0);
          mercury__io__write_string_4_p_0(FileStream_14, (MR_String) ")");
        }
      }
      mercury__io__nl_3_p_0(FileStream_14);
    }
    else
    {
      MR_String Functor_16 = ((MR_String) ((MR_hl_field(MR_mktag(1), BrowserTerm_10, (MR_Integer) 0))));
      MR_Word ArgUnivs_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BrowserTerm_10, (MR_Integer) 1))));
      MR_Word MaybeResultUniv_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BrowserTerm_10, (MR_Integer) 2))));

      mercury__io__write_string_4_p_0(FileStream_14, Functor_16);
      mercury__io__write_string_4_p_0(FileStream_14, (MR_String) "(\n");
      mdb__browse__save_args_5_p_0(FileStream_14, (MR_Integer) 1, ArgUnivs_17);
      mercury__io__write_string_4_p_0(FileStream_14, (MR_String) "\n)\n");
      if (!((MaybeResultUniv_18 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        MR_Word ResultUniv_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeResultUniv_18, (MR_Integer) 0))));

        mercury__io__write_string_4_p_0(FileStream_14, (MR_String) "=\n");
        mdb__browse__save_univ_5_p_0(FileStream_14, (MR_Integer) 1, ResultUniv_19);
        mercury__io__write_string_4_p_0(FileStream_14, (MR_String) "\n");
      }
    }
    mercury__io__close_output_3_p_0(FileStream_14);
  }
}

static MR_Box MR_CALL 
mdb__browse__save_univ_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = mercury__univ__univ_1_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), wrapper_arg_1);
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
mdb__browse__save_univ_5_p_0(
  MR_Word OutputStream_6,
  MR_Integer Indent_7,
  MR_Word Univ_8)
{
  MR_bool succeeded;
  MR_Word TypeInfo_13_13;
  MR_Box Var_12;
  MR_Word TypeInfo_55_44;
  MR_Word List_14;

  Var_12 = mercury__univ__univ_value_1_f_0(&TypeInfo_13_13, Univ_8);
  succeeded = mdb__browse__dynamic_cast_to_list_2_p_0(TypeInfo_13_13, &TypeInfo_55_44, Var_12, &List_14);
  if (succeeded)
    if ((List_14 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mdb__browse__write_indent_4_p_0(OutputStream_6, Indent_7);
      mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "[]");
    }
    else
    {
      MR_Word MakeUniv_15;
      MR_Word Univs_16;
      MR_Integer Var_25;

      {
        MakeUniv_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), MakeUniv_15, 0) = ((MR_Box) (&mdb__browse_scalar_common_6[1]));
        MR_hl_field(MR_mktag(0), MakeUniv_15, 1) = ((MR_Box) (mdb__browse__save_univ_5_p_0_1));
        MR_hl_field(MR_mktag(0), MakeUniv_15, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), MakeUniv_15, 3) = ((MR_Box) (TypeInfo_55_44));
      }
      Univs_16 = mercury__list__map_2_f_0(TypeInfo_55_44, (MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), MakeUniv_15, List_14);
      mdb__browse__write_indent_4_p_0(OutputStream_6, Indent_7);
      mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "[\n");
      Var_25 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) 1);
      mdb__browse__save_args_5_p_0(OutputStream_6, Var_25, Univs_16);
      mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "\n");
      mdb__browse__write_indent_4_p_0(OutputStream_6, Indent_7);
      mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "]");
    }
  else
  {
    MR_String Functor_17;
    MR_Word Args_19;
    MR_Integer _Arity_18;

    mercury__deconstruct__deconstruct_5_p_2(TypeInfo_13_13, Var_12, (MR_Integer) 2, &Functor_17, &_Arity_18, &Args_19);
    mdb__browse__write_indent_4_p_0(OutputStream_6, Indent_7);
    mercury__io__write_string_4_p_0(OutputStream_6, Functor_17);
    if (!((Args_19 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Integer Var_37;

      mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "(\n");
      Var_37 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) 1);
      mdb__browse__save_args_5_p_0(OutputStream_6, Var_37, Args_19);
      mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "\n");
      mdb__browse__write_indent_4_p_0(OutputStream_6, Indent_7);
      mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) ")");
    }
  }
}

static MR_Box MR_CALL 
mdb__browse__save_args_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = mercury__univ__univ_1_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), wrapper_arg_1);
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
mdb__browse__save_args_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word TypeInfo_13_24;
      MR_Word Univ_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Univs_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Box Var_23;
      MR_Word TypeInfo_55_55;
      MR_Word List_25;

      Var_23 = mercury__univ__univ_value_1_f_0(&TypeInfo_13_24, Univ_13);
      succeeded = mdb__browse__dynamic_cast_to_list_2_p_0(TypeInfo_13_24, &TypeInfo_55_55, Var_23, &List_25);
      if (succeeded)
        if ((List_25 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mdb__browse__write_indent_4_p_0(HeadVar__1_1, HeadVar__2_2);
          mercury__io__write_string_4_p_0(HeadVar__1_1, (MR_String) "[]");
        }
        else
        {
          MR_Word MakeUniv_26;
          MR_Word Univs_27;
          MR_Integer Var_36;

          {
            MakeUniv_26 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), MakeUniv_26, 0) = ((MR_Box) (&mdb__browse_scalar_common_6[1]));
            MR_hl_field(MR_mktag(0), MakeUniv_26, 1) = ((MR_Box) (mdb__browse__save_args_5_p_0_1));
            MR_hl_field(MR_mktag(0), MakeUniv_26, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), MakeUniv_26, 3) = ((MR_Box) (TypeInfo_55_55));
          }
          Univs_27 = mercury__list__map_2_f_0(TypeInfo_55_55, (MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), MakeUniv_26, List_25);
          mdb__browse__write_indent_4_p_0(HeadVar__1_1, HeadVar__2_2);
          mercury__io__write_string_4_p_0(HeadVar__1_1, (MR_String) "[\n");
          Var_36 = (MR_Integer) ((MR_Unsigned) HeadVar__2_2 + (MR_Unsigned) 1);
          mdb__browse__save_args_5_p_0(HeadVar__1_1, Var_36, Univs_27);
          mercury__io__write_string_4_p_0(HeadVar__1_1, (MR_String) "\n");
          mdb__browse__write_indent_4_p_0(HeadVar__1_1, HeadVar__2_2);
          mercury__io__write_string_4_p_0(HeadVar__1_1, (MR_String) "]");
        }
      else
      {
        MR_String Functor_28;
        MR_Word Args_30;
        MR_Integer _Arity_29;

        mercury__deconstruct__deconstruct_5_p_2(TypeInfo_13_24, Var_23, (MR_Integer) 2, &Functor_28, &_Arity_29, &Args_30);
        mdb__browse__write_indent_4_p_0(HeadVar__1_1, HeadVar__2_2);
        mercury__io__write_string_4_p_0(HeadVar__1_1, Functor_28);
        if (!((Args_30 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          MR_Integer Var_48;

          mercury__io__write_string_4_p_0(HeadVar__1_1, (MR_String) "(\n");
          Var_48 = (MR_Integer) ((MR_Unsigned) HeadVar__2_2 + (MR_Unsigned) 1);
          mdb__browse__save_args_5_p_0(HeadVar__1_1, Var_48, Args_30);
          mercury__io__write_string_4_p_0(HeadVar__1_1, (MR_String) "\n");
          mdb__browse__write_indent_4_p_0(HeadVar__1_1, HeadVar__2_2);
          mercury__io__write_string_4_p_0(HeadVar__1_1, (MR_String) ")");
        }
      }
      if (!((Univs_14 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        MR_Word next_value_of_HeadVar__3_3;

        mercury__io__write_string_4_p_0(HeadVar__1_1, (MR_String) ",\n");
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__3_3 = Univs_14;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        continue;
      }
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
  succeeded = (Var_8 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    ArgTypeDesc_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_8, (MR_Integer) 0))));
    Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_8, (MR_Integer) 1))));
    TypeInfo_19_19 = (MR_Word) (&mdb__browse_scalar_common_4[42]);
    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) ((MR_Unsigned) 0U)), ((MR_Box) (Var_18)));
    if (succeeded)
    {
      mercury__type_desc__has_type_2_p_0(TypeInfo_for_T_13, ArgTypeDesc_5);
      TypeCtorInfo_15_15 = (MR_Word) (&mercury__list__list__type_ctor_info_list_1);
      {
        TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
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

static void MR_CALL 
mdb__browse__write_indent_4_p_0(
  MR_Word OutputStream_5,
  MR_Integer Indent_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Indent_6 <= (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (!(succeeded))
    {
      MR_Integer Var_13;
      MR_Integer next_value_of_Indent_6;

      mercury__io__write_char_4_p_0(OutputStream_5, (MR_Char) 32);
      Var_13 = (MR_Integer) ((MR_Unsigned) Indent_6 - (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_Indent_6 = Var_13;
      Indent_6 = next_value_of_Indent_6;
      continue;
    }
    break;
  }
}

void MR_CALL 
mdb__browse__browse_external_8_p_0(
  MR_Word TypeInfo_for_T_26,
  MR_Word InputStream_9,
  MR_Word OutputStream_10,
  MR_Word MaybeModeFunc_11,
  MR_Box Term_12,
  MR_Word STATE_VARIABLE_State_0_17,
  MR_Word * STATE_VARIABLE_State_18)
{
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_25;
  MR_Word Info0_27;
  MR_Word Info_28;

  {
    Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (OutputStream_10));
  }
  Var_25 = mercury__univ__univ_1_f_0(TypeInfo_for_T_26, Term_12);
  {
    Var_22 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (Var_25));
  }
  Info0_27 = mdb__browser_info__browser_info_init_5_f_0(Var_22, (MR_Integer) 1, (MR_Word) ((MR_Unsigned) 0U), MaybeModeFunc_11, STATE_VARIABLE_State_0_17);
  mdb__browse__browse_main_loop_6_p_0(InputStream_9, Var_21, Info0_27, &Info_28);
  *STATE_VARIABLE_State_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_28, (MR_Integer) 4))));
}

void MR_CALL 
mdb__browse__browse_external_no_modes_7_p_0(
  MR_Word TypeInfo_for_T_25,
  MR_Word InputStream_8,
  MR_Word OutputStream_9,
  MR_Box Term_10,
  MR_Word STATE_VARIABLE_State_0_16,
  MR_Word * STATE_VARIABLE_State_17)
{
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_24;
  MR_Word Info0_26;
  MR_Word Info_27;

  {
    Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (OutputStream_9));
  }
  Var_24 = mercury__univ__univ_1_f_0(TypeInfo_for_T_25, Term_10);
  {
    Var_21 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (Var_24));
  }
  Info0_26 = mdb__browser_info__browser_info_init_5_f_0(Var_21, (MR_Integer) 1, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_State_0_16);
  mdb__browse__browse_main_loop_6_p_0(InputStream_8, Var_20, Info0_26, &Info_27);
  *STATE_VARIABLE_State_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_27, (MR_Integer) 4))));
}

void MR_CALL 
mdb__browse__browse_browser_term_format_9_p_0(
  MR_Word InputStream_10,
  MR_Word OutputStream_11,
  MR_Word Format_12,
  MR_Word MaybeModeFunc_13,
  MR_Word Term_14,
  MR_Word STATE_VARIABLE_State_0_18,
  MR_Word * STATE_VARIABLE_State_19)
{
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Info0_24;
  MR_Word Info_25;

  {
    Var_22 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (OutputStream_11));
  }
  {
    Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (Format_12));
  }
  Info0_24 = mdb__browser_info__browser_info_init_5_f_0(Term_14, (MR_Integer) 1, Var_23, MaybeModeFunc_13, STATE_VARIABLE_State_0_18);
  mdb__browse__browse_main_loop_6_p_0(InputStream_10, Var_22, Info0_24, &Info_25);
  *STATE_VARIABLE_State_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_25, (MR_Integer) 4))));
}

void MR_CALL 
mdb__browse__browse_browser_term_format_no_modes_8_p_0(
  MR_Word InputStream_9,
  MR_Word OutputStream_10,
  MR_Word Format_11,
  MR_Word Term_12,
  MR_Word STATE_VARIABLE_State_0_17,
  MR_Word * STATE_VARIABLE_State_18)
{
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Info0_23;
  MR_Word Info_24;

  {
    Var_21 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (OutputStream_10));
  }
  {
    Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (Format_11));
  }
  Info0_23 = mdb__browser_info__browser_info_init_5_f_0(Term_12, (MR_Integer) 1, Var_22, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_State_0_17);
  mdb__browse__browse_main_loop_6_p_0(InputStream_9, Var_21, Info0_23, &Info_24);
  *STATE_VARIABLE_State_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_24, (MR_Integer) 4))));
}

void MR_CALL 
mdb__browse__browse_browser_term_9_p_0(
  MR_Word InputStream_10,
  MR_Word OutputStream_11,
  MR_Word MaybeModeFunc_12,
  MR_Word Term_13,
  MR_Word * MaybeTrack_14,
  MR_Word STATE_VARIABLE_State_0_18,
  MR_Word * STATE_VARIABLE_State_19)
{
  MR_Word Var_22;
  MR_Word Info0_23;
  MR_Word Info_24;

  {
    Var_22 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (OutputStream_11));
  }
  Info0_23 = mdb__browser_info__browser_info_init_5_f_0(Term_13, (MR_Integer) 1, (MR_Word) ((MR_Unsigned) 0U), MaybeModeFunc_12, STATE_VARIABLE_State_0_18);
  mdb__browse__browse_main_loop_6_p_0(InputStream_10, Var_22, Info0_23, &Info_24);
  *STATE_VARIABLE_State_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_24, (MR_Integer) 4))));
  *MaybeTrack_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_24, (MR_Integer) 5))));
}

void MR_CALL 
mdb__browse__browse_browser_term_no_modes_8_p_0(
  MR_Word InputStream_9,
  MR_Word OutputStream_10,
  MR_Word Term_11,
  MR_Word * MaybeTrack_12,
  MR_Word STATE_VARIABLE_State_0_17,
  MR_Word * STATE_VARIABLE_State_18)
{
  MR_Word Var_21;
  MR_Word Info0_22;
  MR_Word Info_23;

  {
    Var_21 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (OutputStream_10));
  }
  Info0_22 = mdb__browser_info__browser_info_init_5_f_0(Term_11, (MR_Integer) 1, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_State_0_17);
  mdb__browse__browse_main_loop_6_p_0(InputStream_9, Var_21, Info0_22, &Info_23);
  *STATE_VARIABLE_State_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_23, (MR_Integer) 4))));
  *MaybeTrack_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_23, (MR_Integer) 5))));
}

static void MR_CALL 
mdb__browse__browse_main_loop_6_p_0(
  MR_Word InputStream_7,
  MR_Word Debugger_8,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17)
{
  while (MR_TRUE)
  {
    MR_Word OutputStream_11;
    MR_Word Command_12;
    MR_Word Quit_13;
    MR_Word STATE_VARIABLE_Info_23_23;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) Debugger_8)) == (MR_Integer) 1))
    {
      OutputStream_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Debugger_8, (MR_Integer) 0))));
      mdb__parse__read_browser_command_external_4_p_0(InputStream_7, &Command_12);
    }
    else
    {
      OutputStream_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Debugger_8, (MR_Integer) 0))));
      mdb__parse__read_browser_command_6_p_0(InputStream_7, OutputStream_11, (MR_String) "browser> ", &Command_12);
    }
    mdb__browse__run_command_7_p_0(Debugger_8, Command_12, &Quit_13, STATE_VARIABLE_Info_0_16, &STATE_VARIABLE_Info_23_23);
    switch (Quit_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word next_value_of_STATE_VARIABLE_Info_0_16 = STATE_VARIABLE_Info_23_23;

          // direct tailcall eliminated
          ;
          STATE_VARIABLE_Info_0_16 = next_value_of_STATE_VARIABLE_Info_0_16;
          continue;
        }
        break;
      case (MR_Integer) 1:
        {
          if (((MR_tag((MR_Word) Debugger_8)) == (MR_Integer) 1))
            mdb__browser_info__send_term_to_socket_4_p_0(OutputStream_11, (MR_Word) ((MR_Unsigned) 8U));
          *STATE_VARIABLE_Info_17 = STATE_VARIABLE_Info_23_23;
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
  MR_Word STATE_VARIABLE_Info_0_31,
  MR_Word * STATE_VARIABLE_Info_32)
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
            *STATE_VARIABLE_Info_32 = STATE_VARIABLE_Info_0_31;
          }
          break;
        case (MR_Integer) 1:
          {
            mdb__browser_info__write_string_debugger_4_p_0(Debugger_8, (MR_String) "command not yet implemented\n");
            *Quit_10 = (MR_Integer) 0;
            *STATE_VARIABLE_Info_32 = STATE_VARIABLE_Info_0_31;
          }
          break;
        case (MR_Integer) 2:
          {
            mdb__browse__set_path_3_p_0((MR_Word) (&mdb__browse_scalar_common_5[0]), STATE_VARIABLE_Info_0_31, STATE_VARIABLE_Info_32);
            *Quit_10 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_31, (MR_Integer) 1))));

            mdb__browser_info__write_down_path_4_p_0(Debugger_8, Var_49);
            mdb__browser_info__nl_debugger_3_p_0(Debugger_8);
            *Quit_10 = (MR_Integer) 0;
            *STATE_VARIABLE_Info_32 = STATE_VARIABLE_Info_0_31;
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word MaybeModeFunc_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_31, (MR_Integer) 6))));
            MR_Word Var_156 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_31, (MR_Integer) 1))));

            mdb__browse__write_term_mode_debugger_5_p_0(Debugger_8, MaybeModeFunc_85, Var_156);
            *Quit_10 = (MR_Integer) 0;
            *STATE_VARIABLE_Info_32 = STATE_VARIABLE_Info_0_31;
          }
          break;
        case (MR_Integer) 5:
          {
            mdb__browse__help_3_p_0(Debugger_8);
            *Quit_10 = (MR_Integer) 0;
            *STATE_VARIABLE_Info_32 = STATE_VARIABLE_Info_0_31;
          }
          break;
        case (MR_Integer) 6:
          {
            *Quit_10 = (MR_Integer) 1;
            *STATE_VARIABLE_Info_32 = STATE_VARIABLE_Info_0_31;
          }
          break;
        case (MR_Integer) 7:
          {
            *Quit_10 = (MR_Integer) 0;
            *STATE_VARIABLE_Info_32 = STATE_VARIABLE_Info_0_31;
          }
          break;
        case (MR_Integer) 8:
          {
            mdb__browser_info__write_string_debugger_4_p_0(Debugger_8, (MR_String) "Error: unknown command or syntax error.\n");
            mdb__browser_info__write_string_debugger_4_p_0(Debugger_8, (MR_String) "Type \"help\" for help.\n");
            *Quit_10 = (MR_Integer) 0;
            *STATE_VARIABLE_Info_32 = STATE_VARIABLE_Info_0_31;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word PrintOption_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Command_9, (MR_Integer) 0))));
        MR_Word MaybePath_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Command_9, (MR_Integer) 1))));

        mdb__browse__do_portray_7_p_0(Debugger_8, (MR_Integer) 1, PrintOption_13, STATE_VARIABLE_Info_0_31, MaybePath_14);
        *Quit_10 = (MR_Integer) 0;
        *STATE_VARIABLE_Info_32 = STATE_VARIABLE_Info_0_31;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word MaybePath_75 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Command_9, (MR_Integer) 0))));

        mdb__browse__do_print_memory_addr_5_p_0(Debugger_8, STATE_VARIABLE_Info_0_31, MaybePath_75);
        *Quit_10 = (MR_Integer) 0;
        *STATE_VARIABLE_Info_32 = STATE_VARIABLE_Info_0_31;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Command_9, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Path_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Command_9, (MR_Integer) 1))));
            MR_Word NewPwd_16;
            MR_Word Result_17;
            MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_31, (MR_Integer) 1))));
            MR_Word Var_46;

            mdb__browse__change_dir_3_p_0(Var_45, Path_15, &NewPwd_16);
            Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_31, (MR_Integer) 0))));
            mdb__browse__deref_subterm_3_p_0(Var_46, NewPwd_16, &Result_17);
            if (((MR_tag((MR_Word) Result_17)) == (MR_Integer) 1))
            {
              MR_Word OKPath_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Result_17, (MR_Integer) 0))));
              MR_Word ErrorDir_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Result_17, (MR_Integer) 1))));

              mdb__browse__report_deref_error_5_p_0(Debugger_8, OKPath_19, ErrorDir_20);
              *STATE_VARIABLE_Info_32 = STATE_VARIABLE_Info_0_31;
            }
            else
            {
              MR_Word Var_98 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_31, (MR_Integer) 0))));
              MR_Word Var_100 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_31, (MR_Integer) 2))) & (MR_Integer) 3);
              MR_Word Var_101 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_31, (MR_Integer) 3))));
              MR_Word Var_102 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_31, (MR_Integer) 4))));
              MR_Word Var_103 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_31, (MR_Integer) 5))));
              MR_Word Var_104 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_31, (MR_Integer) 6))));

              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_Info_32 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_98));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (NewPwd_16));
                MR_hl_field(MR_mktag(0), base, 2) = (MR_Box) ((MR_Unsigned) (Var_100));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_101));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_102));
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_103));
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_104));
              }
            }
            *Quit_10 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word MaybePath_80 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Command_9, (MR_Integer) 2))));
            MR_Word Var_167 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_31, (MR_Integer) 6))));
            MR_Word Var_169 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_31, (MR_Integer) 4))));
            MR_Word Var_170 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_31, (MR_Integer) 3))));
            MR_Word Var_171 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_31, (MR_Integer) 2))) & (MR_Integer) 3);
            MR_Word Var_172 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_31, (MR_Integer) 1))));
            MR_Word Var_173 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_31, (MR_Integer) 0))));
            MR_Unsigned packed_word_7 = (MR_Unsigned) ((MR_hl_field(MR_mktag(3), Command_9, (MR_Integer) 1)));

            if ((MaybePath_80 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Var_59;

              {
                Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_59, 0) = (MR_Box) (packed_word_7);
                MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (Var_172));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_Info_32 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_173));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_172));
                MR_hl_field(MR_mktag(0), base, 2) = (MR_Box) ((MR_Unsigned) (Var_171));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_170));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_169));
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_59));
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_167));
              }
              *Quit_10 = (MR_Integer) 1;
            }
            else
            {
              MR_Word SubResult_23;
              MR_Word Var_53;
              MR_Word Path_76 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePath_80, (MR_Integer) 0))));
              MR_Word NewPwd_77;

              mdb__browse__change_dir_3_p_0(Var_172, Path_76, &NewPwd_77);
              Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_31, (MR_Integer) 0))));
              mdb__browse__deref_subterm_3_p_0(Var_53, NewPwd_77, &SubResult_23);
              if (((MR_tag((MR_Word) SubResult_23)) == (MR_Integer) 1))
              {
                mdb__browser_info__write_string_debugger_4_p_0(Debugger_8, (MR_String) "error: cannot track subterm\n");
                *Quit_10 = (MR_Integer) 0;
                *STATE_VARIABLE_Info_32 = STATE_VARIABLE_Info_0_31;
              }
              else
              {
                MR_Word Var_55;
                MR_Word Var_123;
                MR_Word Var_124;
                MR_Word Var_125;
                MR_Word Var_126;
                MR_Word Var_127;
                MR_Word Var_129;

                {
                  Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_55, 0) = (MR_Box) (packed_word_7);
                  MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (NewPwd_77));
                }
                Var_123 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_31, (MR_Integer) 0))));
                Var_124 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_31, (MR_Integer) 1))));
                Var_125 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_31, (MR_Integer) 2))) & (MR_Integer) 3);
                Var_126 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_31, (MR_Integer) 3))));
                Var_127 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_31, (MR_Integer) 4))));
                Var_129 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_31, (MR_Integer) 6))));
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                  *STATE_VARIABLE_Info_32 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_123));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_124));
                  MR_hl_field(MR_mktag(0), base, 2) = (MR_Box) ((MR_Unsigned) (Var_125));
                  MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_126));
                  MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_127));
                  MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_55));
                  MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_129));
                }
                *Quit_10 = (MR_Integer) 1;
              }
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word MaybeModeFunc_27;
            MR_Word Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_31, (MR_Integer) 1))));
            MR_Word Path_83 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Command_9, (MR_Integer) 1))));
            MR_Word NewPwd_84;

            mdb__browse__change_dir_3_p_0(Var_61, Path_83, &NewPwd_84);
            MaybeModeFunc_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_31, (MR_Integer) 6))));
            mdb__browse__write_term_mode_debugger_5_p_0(Debugger_8, MaybeModeFunc_27, NewPwd_84);
            *Quit_10 = (MR_Integer) 0;
            *STATE_VARIABLE_Info_32 = STATE_VARIABLE_Info_0_31;
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word ParamCmd_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Command_9, (MR_Integer) 1))));

            mdb__browser_info__run_param_command_7_p_0(Debugger_8, ParamCmd_28, (MR_Integer) 1, STATE_VARIABLE_Info_0_31, STATE_VARIABLE_Info_32);
            *Quit_10 = (MR_Integer) 0;
          }
          break;
      }
      break;
  }
  if (((MR_tag((MR_Word) Debugger_8)) == (MR_Integer) 1))
  {
    MR_Word OutputStream_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Debugger_8, (MR_Integer) 0))));

    mdb__browser_info__send_term_to_socket_4_p_0(OutputStream_29, (MR_Word) ((MR_Unsigned) 4U));
  }
}

static void MR_CALL 
mdb__browse__write_term_mode_debugger_5_p_0(
  MR_Word Debugger_6,
  MR_Word MaybeModeFunc_7,
  MR_Word Dirs_8)
{
  if ((MaybeModeFunc_7 == (MR_Word) ((MR_Unsigned) 0U)))
    mdb__browser_info__write_string_debugger_4_p_0(Debugger_6, (MR_String) "Mode information not available.\n");
  else
  {
    MR_Word ModeFunc_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeModeFunc_7, (MR_Integer) 0))));
    MR_Word Mode_11;
    MR_String ModeStr_12;
    MR_String Var_15;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), ModeFunc_10, (MR_Integer) 1))));
    MR_Box conv1_Mode_11;

    conv1_Mode_11 = func_0(((MR_Box) (ModeFunc_10)), ((MR_Box) (Dirs_8)));
    Mode_11 = ((MR_Word) (conv1_Mode_11));
    ModeStr_12 = ((&mdb__browse_vector_common_7[10 + Mode_11]))->mdb__browse__vector_common_type_7_0__vct_7_f_0;
    Var_15 = mercury__string__f_43_43_2_f_0(ModeStr_12, (MR_String) "\n");
    mdb__browser_info__write_string_debugger_4_p_0(Debugger_6, Var_15);
  }
}

static void MR_CALL 
mdb__browse__change_dir_3_p_0(
  MR_Word PwdDirs_4,
  MR_Word Path_5,
  MR_Word * RootRelDirs_6)
{
  MR_Word NewDirs_8;
  MR_Word RevDirs_12;

  if (((MR_tag((MR_Word) Path_5)) == (MR_Integer) 1))
  {
    MR_Word Var_9;
    MR_Word Dirs_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Path_5, (MR_Integer) 0))));

    Var_9 = mdb__browser_info__down_to_up_down_dirs_1_f_0(PwdDirs_4);
    NewDirs_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&mdb__browser_info__mdb__browser_info__type_ctor_info_up_down_dir_0), Var_9, Dirs_10);
  }
  else
    NewDirs_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Path_5, (MR_Integer) 0))));
  mercury__list__reverse_2_p_0((MR_Word) (&mdb__browser_info__mdb__browser_info__type_ctor_info_up_down_dir_0), NewDirs_8, &RevDirs_12);
  mdb__browse__simplify_rev_dirs_4_p_0(RevDirs_12, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), RootRelDirs_6);
}

static void MR_CALL 
mdb__browse__set_path_3_p_0(
  MR_Word NewPath_4,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  MR_Word Dirs0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 1))));
  MR_Word Dirs_7;
  MR_Word NewDirs_24;
  MR_Word RevDirs_28;
  MR_Word Var_16;
  MR_Word Var_18;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_22;

  if (((MR_tag((MR_Word) NewPath_4)) == (MR_Integer) 1))
  {
    MR_Word Var_25;
    MR_Word Dirs_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), NewPath_4, (MR_Integer) 0))));

    Var_25 = mdb__browser_info__down_to_up_down_dirs_1_f_0(Dirs0_6);
    NewDirs_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&mdb__browser_info__mdb__browser_info__type_ctor_info_up_down_dir_0), Var_25, Dirs_26);
  }
  else
    NewDirs_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NewPath_4, (MR_Integer) 0))));
  mercury__list__reverse_2_p_0((MR_Word) (&mdb__browser_info__mdb__browser_info__type_ctor_info_up_down_dir_0), NewDirs_24, &RevDirs_28);
  mdb__browse__simplify_rev_dirs_4_p_0(RevDirs_28, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), &Dirs_7);
  Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 0))));
  Var_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 2))) & (MR_Integer) 3);
  Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 3))));
  Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 4))));
  Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 5))));
  Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 6))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_9 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_16));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Dirs_7));
    MR_hl_field(MR_mktag(0), base, 2) = (MR_Box) ((MR_Unsigned) (Var_18));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_19));
    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_20));
    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_21));
    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_22));
  }
}

static void MR_CALL 
mdb__browse__report_deref_error_5_p_0(
  MR_Word Debugger_6,
  MR_Word OKPath_7,
  MR_Word ErrorDir_8)
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
    MR_Integer Num_27 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ErrorDir_8, (MR_Integer) 0))));

    Var_25 = mercury__string__int_to_string_1_f_0(Num_27);
  }
  Var_24 = mercury__string__f_43_43_2_f_0(Var_25, (MR_String) "\n");
  Msg_13 = mercury__string__f_43_43_2_f_0((MR_String) "there is no subterm ", Var_24);
  mdb__browser_info__write_string_debugger_4_p_0(Debugger_6, Msg_13);
}

static void MR_CALL 
mdb__browse__help_3_p_0(
  MR_Word Debugger_4)
{
  MR_String HelpMessage_6;

  mercury__string__append_list_2_p_0((MR_Word) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[38])), &HelpMessage_6);
  mdb__browser_info__write_string_debugger_4_p_0(Debugger_4, HelpMessage_6);
}

static void MR_CALL 
mdb__browse__do_print_memory_addr_5_p_0(
  MR_Word Debugger_6,
  MR_Word Info_7,
  MR_Word MaybePath_8)
{
  MR_Word Dirs0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1))));
  MR_Word Dirs_11;
  MR_Word DerefResult_13;
  MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0))));

  if ((MaybePath_8 == (MR_Word) ((MR_Unsigned) 0U)))
    Dirs_11 = Dirs0_10;
  else
  {
    MR_Word Path_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePath_8, (MR_Integer) 0))));
    MR_Word NewDirs_58;
    MR_Word RevDirs_62;

    if (((MR_tag((MR_Word) Path_12)) == (MR_Integer) 1))
    {
      MR_Word Var_59;
      MR_Word Dirs_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Path_12, (MR_Integer) 0))));

      Var_59 = mdb__browser_info__down_to_up_down_dirs_1_f_0(Dirs0_10);
      NewDirs_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&mdb__browser_info__mdb__browser_info__type_ctor_info_up_down_dir_0), Var_59, Dirs_60);
    }
    else
      NewDirs_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Path_12, (MR_Integer) 0))));
    mercury__list__reverse_2_p_0((MR_Word) (&mdb__browser_info__mdb__browser_info__type_ctor_info_up_down_dir_0), NewDirs_58, &RevDirs_62);
    mdb__browse__simplify_rev_dirs_4_p_0(RevDirs_62, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), &Dirs_11);
  }
  mdb__browse__deref_subterm_3_p_0(Var_33, Dirs_11, &DerefResult_13);
  if (((MR_tag((MR_Word) DerefResult_13)) == (MR_Integer) 1))
  {
    MR_Word OKPath_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DerefResult_13, (MR_Integer) 0))));
    MR_Word ErrorDir_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DerefResult_13, (MR_Integer) 1))));
    MR_String Msg_69;
    MR_String Var_78;
    MR_String Var_79;

    mdb__browser_info__write_string_debugger_4_p_0(Debugger_6, (MR_String) "error: ");
    if (!((OKPath_22 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_String Context_68;
      MR_String Var_73;
      MR_String Var_74;

      Var_74 = mdb__browse__down_dirs_to_string_1_f_0(OKPath_22);
      Var_73 = mercury__string__f_43_43_2_f_0(Var_74, (MR_String) ": ");
      Context_68 = mercury__string__f_43_43_2_f_0((MR_String) "in subdir ", Var_73);
      mdb__browser_info__write_string_debugger_4_p_0(Debugger_6, Context_68);
    }
    if (((MR_tag((MR_Word) ErrorDir_23)) == (MR_Integer) 1))
      Var_79 = ((MR_String) ((MR_hl_field(MR_mktag(1), ErrorDir_23, (MR_Integer) 0))));
    else
    {
      MR_Integer Num_81 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ErrorDir_23, (MR_Integer) 0))));

      Var_79 = mercury__string__int_to_string_1_f_0(Num_81);
    }
    Var_78 = mercury__string__f_43_43_2_f_0(Var_79, (MR_String) "\n");
    Msg_69 = mercury__string__f_43_43_2_f_0((MR_String) "there is no subterm ", Var_78);
    mdb__browser_info__write_string_debugger_4_p_0(Debugger_6, Msg_69);
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
      MR_String Var_55;
      MR_Word TypeInfo_45_45;

      Value_16 = mercury__univ__univ_value_1_f_0(&TypeInfo_45_45, Univ_15);
{
#define MR_PROC_LABEL mdb__browse__do_print_memory_addr_5_p_0

	MR_Word Value;
	MR_Integer Addr;

	Value = (MR_Word) Value_16 ;
		{

    Addr = (MR_Integer) Value;


		;}
#undef MR_PROC_LABEL
	Addr_17  = Addr;
}
      mercury__string__format__format_unsigned_int_component_nowidth_noprec_4_p_0((MR_Word) (&mdb__browse_scalar_common_5[1]), (MR_Integer) 2, Addr_17, &Var_48);
      Var_55 = mercury__string__f_43_43_2_f_0(Var_48, (MR_String) "\n");
      Str_18 = mercury__string__f_43_43_2_f_0((MR_String) "addr = ", Var_55);
    }
    else
      Str_18 = (MR_String) "synthetic terms have no addresses\n";
    mdb__browser_info__write_string_debugger_4_p_0(Debugger_6, Str_18);
  }
}

static MR_bool MR_CALL 
mdb__browse__do_portray_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
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

static void MR_CALL 
mdb__browse__do_portray_7_p_0(
  MR_Word Debugger_8,
  MR_Word CallerType_9,
  MR_Word MaybeMaybeOptionTable_10,
  MR_Word Info_11,
  MR_Word MaybePath_12)
{
  MR_bool succeeded;

  if ((MaybeMaybeOptionTable_10 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((MaybePath_12 == (MR_Word) ((MR_Unsigned) 0U)))
      mdb__browse__portray_6_p_0(Debugger_8, CallerType_9, (MR_Word) ((MR_Unsigned) 0U), Info_11);
    else
    {
      MR_Word Path_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePath_12, (MR_Integer) 0))));
      MR_Word Info_32;
      MR_Word Dirs0_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 1))));
      MR_Word Dirs_34;
      MR_Word NewDirs_49;
      MR_Word RevDirs_53;
      MR_Word Var_41;
      MR_Word Var_43;
      MR_Word Var_44;
      MR_Word Var_45;
      MR_Word Var_46;
      MR_Word Var_47;

      if (((MR_tag((MR_Word) Path_31)) == (MR_Integer) 1))
      {
        MR_Word Var_50;
        MR_Word Dirs_51 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Path_31, (MR_Integer) 0))));

        Var_50 = mdb__browser_info__down_to_up_down_dirs_1_f_0(Dirs0_33);
        NewDirs_49 = mercury__list__f_43_43_2_f_0((MR_Word) (&mdb__browser_info__mdb__browser_info__type_ctor_info_up_down_dir_0), Var_50, Dirs_51);
      }
      else
        NewDirs_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Path_31, (MR_Integer) 0))));
      mercury__list__reverse_2_p_0((MR_Word) (&mdb__browser_info__mdb__browser_info__type_ctor_info_up_down_dir_0), NewDirs_49, &RevDirs_53);
      mdb__browse__simplify_rev_dirs_4_p_0(RevDirs_53, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), &Dirs_34);
      Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 0))));
      Var_43 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 2))) & (MR_Integer) 3);
      Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 3))));
      Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 4))));
      Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 5))));
      Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 6))));
      {
        Info_32 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Info_32, 0) = ((MR_Box) (Var_41));
        MR_hl_field(MR_mktag(0), Info_32, 1) = ((MR_Box) (Dirs_34));
        MR_hl_field(MR_mktag(0), Info_32, 2) = (MR_Box) ((MR_Unsigned) (Var_43));
        MR_hl_field(MR_mktag(0), Info_32, 3) = ((MR_Box) (Var_44));
        MR_hl_field(MR_mktag(0), Info_32, 4) = ((MR_Box) (Var_45));
        MR_hl_field(MR_mktag(0), Info_32, 5) = ((MR_Box) (Var_46));
        MR_hl_field(MR_mktag(0), Info_32, 6) = ((MR_Box) (Var_47));
      }
      mdb__browse__portray_6_p_0(Debugger_8, CallerType_9, (MR_Word) ((MR_Unsigned) 0U), Info_32);
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
      MR_Word OptionAssocList_57;
      MR_Word TrueFormatOptions_58;

      mercury__map__to_assoc_list_2_p_0((MR_Word) (&mdb__parse__mdb__parse__type_ctor_info_format_option_0), (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), OptionTable_15, &OptionAssocList_57);
      mercury__list__filter_map_3_p_0((MR_Word) (&mdb__browse_scalar_common_1[2]), (MR_Word) (&mdb__parse__mdb__parse__type_ctor_info_format_option_0), (MR_Word) (&mdb__browse_scalar_common_1[6]), OptionAssocList_57, &TrueFormatOptions_58);
      if ((TrueFormatOptions_58 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word MaybeFormat_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (MR_Word) (&mdb__browse_scalar_common_5[2]), (MR_Integer) 0))));

        if ((MaybePath_12 == (MR_Word) ((MR_Unsigned) 0U)))
          mdb__browse__portray_6_p_0(Debugger_8, CallerType_9, MaybeFormat_17, Info_11);
        else
        {
          MR_Word Path_67 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePath_12, (MR_Integer) 0))));
          MR_Word Info_68;
          MR_Word Dirs0_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 1))));
          MR_Word Dirs_70;
          MR_Word Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 0))));
          MR_Word Var_72 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 2))) & (MR_Integer) 3);
          MR_Word Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 3))));
          MR_Word Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 4))));
          MR_Word Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 5))));
          MR_Word Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 6))));
          MR_Word NewDirs_85;
          MR_Word RevDirs_89;

          if (((MR_tag((MR_Word) Path_67)) == (MR_Integer) 1))
          {
            MR_Word Var_86;
            MR_Word Dirs_87 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Path_67, (MR_Integer) 0))));

            Var_86 = mdb__browser_info__down_to_up_down_dirs_1_f_0(Dirs0_69);
            NewDirs_85 = mercury__list__f_43_43_2_f_0((MR_Word) (&mdb__browser_info__mdb__browser_info__type_ctor_info_up_down_dir_0), Var_86, Dirs_87);
          }
          else
            NewDirs_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Path_67, (MR_Integer) 0))));
          mercury__list__reverse_2_p_0((MR_Word) (&mdb__browser_info__mdb__browser_info__type_ctor_info_up_down_dir_0), NewDirs_85, &RevDirs_89);
          mdb__browse__simplify_rev_dirs_4_p_0(RevDirs_89, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), &Dirs_70);
          {
            Info_68 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Info_68, 0) = ((MR_Box) (Var_71));
            MR_hl_field(MR_mktag(0), Info_68, 1) = ((MR_Box) (Dirs_70));
            MR_hl_field(MR_mktag(0), Info_68, 2) = (MR_Box) ((MR_Unsigned) (Var_72));
            MR_hl_field(MR_mktag(0), Info_68, 3) = ((MR_Box) (Var_73));
            MR_hl_field(MR_mktag(0), Info_68, 4) = ((MR_Box) (Var_74));
            MR_hl_field(MR_mktag(0), Info_68, 5) = ((MR_Box) (Var_75));
            MR_hl_field(MR_mktag(0), Info_68, 6) = ((MR_Box) (Var_76));
          }
          mdb__browse__portray_6_p_0(Debugger_8, CallerType_9, MaybeFormat_17, Info_68);
        }
      }
      else
      {
        MR_Word Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TrueFormatOptions_58, (MR_Integer) 1))));
        MR_Word Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TrueFormatOptions_58, (MR_Integer) 0))));
        MR_Word FormatResult_222;

        if ((Var_65 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Format_59 = ((&mdb__browse_vector_common_11[0 + Var_66]))->mdb__browse__vector_common_type_11_0__vct_11_f_0;
          MR_Word Var_61;

          {
            Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (Format_59));
          }
          {
            FormatResult_222 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), FormatResult_222, 0) = ((MR_Box) (Var_61));
          }
        }
        else
          FormatResult_222 = (MR_Word) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_5[3]));
        if (((MR_tag((MR_Word) FormatResult_222)) == (MR_Integer) 1))
        {
          MR_String Msg_18 = ((MR_String) ((MR_hl_field(MR_mktag(1), FormatResult_222, (MR_Integer) 0))));

          mdb__browser_info__write_string_debugger_4_p_0(Debugger_8, Msg_18);
          mdb__browser_info__write_string_debugger_4_p_0(Debugger_8, (MR_String) "\n");
        }
        else
        {
          MR_Word MaybeFormat_170 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FormatResult_222, (MR_Integer) 0))));

          if ((MaybePath_12 == (MR_Word) ((MR_Unsigned) 0U)))
            mdb__browse__portray_6_p_0(Debugger_8, CallerType_9, MaybeFormat_170, Info_11);
          else
          {
            MR_Word Path_120 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePath_12, (MR_Integer) 0))));
            MR_Word Info_121;
            MR_Word Dirs0_122 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 1))));
            MR_Word Dirs_123;
            MR_Word Var_124 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 0))));
            MR_Word Var_125 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 2))) & (MR_Integer) 3);
            MR_Word Var_126 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 3))));
            MR_Word Var_127 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 4))));
            MR_Word Var_128 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 5))));
            MR_Word Var_129 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 6))));
            MR_Word NewDirs_137;
            MR_Word RevDirs_141;

            if (((MR_tag((MR_Word) Path_120)) == (MR_Integer) 1))
            {
              MR_Word Var_93;
              MR_Word Dirs_94 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Path_120, (MR_Integer) 0))));

              Var_93 = mdb__browser_info__down_to_up_down_dirs_1_f_0(Dirs0_122);
              NewDirs_137 = mercury__list__f_43_43_2_f_0((MR_Word) (&mdb__browser_info__mdb__browser_info__type_ctor_info_up_down_dir_0), Var_93, Dirs_94);
            }
            else
              NewDirs_137 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Path_120, (MR_Integer) 0))));
            mercury__list__reverse_2_p_0((MR_Word) (&mdb__browser_info__mdb__browser_info__type_ctor_info_up_down_dir_0), NewDirs_137, &RevDirs_141);
            mdb__browse__simplify_rev_dirs_4_p_0(RevDirs_141, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), &Dirs_123);
            {
              Info_121 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Info_121, 0) = ((MR_Box) (Var_124));
              MR_hl_field(MR_mktag(0), Info_121, 1) = ((MR_Box) (Dirs_123));
              MR_hl_field(MR_mktag(0), Info_121, 2) = (MR_Box) ((MR_Unsigned) (Var_125));
              MR_hl_field(MR_mktag(0), Info_121, 3) = ((MR_Box) (Var_126));
              MR_hl_field(MR_mktag(0), Info_121, 4) = ((MR_Box) (Var_127));
              MR_hl_field(MR_mktag(0), Info_121, 5) = ((MR_Box) (Var_128));
              MR_hl_field(MR_mktag(0), Info_121, 6) = ((MR_Box) (Var_129));
            }
            mdb__browse__portray_6_p_0(Debugger_8, CallerType_9, MaybeFormat_170, Info_121);
          }
        }
      }
    }
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
      MR_Integer STATE_VARIABLE_ToDelete_19_19;
      MR_Word STATE_VARIABLE_DownDirs_24_24;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_STATE_VARIABLE_ToDelete_0_2;
      MR_Word next_value_of_STATE_VARIABLE_DownDirs_0_3;

      switch (MR_tag((MR_Word) RevUpDownDir_9)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            STATE_VARIABLE_ToDelete_19_19 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_ToDelete_0_2 + (MR_Unsigned) 1);
            STATE_VARIABLE_DownDirs_24_24 = STATE_VARIABLE_DownDirs_0_3;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer ChildNum_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), RevUpDownDir_9, (MR_Integer) 0))));
            MR_Word DownDir_29;

            {
              DownDir_29 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), DownDir_29, 0) = ((MR_Box) (ChildNum_13));
            }
            succeeded = (STATE_VARIABLE_ToDelete_0_2 > (MR_Integer) 0);
            if (succeeded)
            {
              STATE_VARIABLE_ToDelete_19_19 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_ToDelete_0_2 - (MR_Unsigned) 1);
              STATE_VARIABLE_DownDirs_24_24 = STATE_VARIABLE_DownDirs_0_3;
            }
            else
            {
              {
                STATE_VARIABLE_DownDirs_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_DownDirs_24_24, 0) = ((MR_Box) (DownDir_29));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_DownDirs_24_24, 1) = ((MR_Box) (STATE_VARIABLE_DownDirs_0_3));
              }
              STATE_VARIABLE_ToDelete_19_19 = STATE_VARIABLE_ToDelete_0_2;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word DownDir_14;
            MR_String ChildName_15 = ((MR_String) ((MR_hl_field(MR_mktag(2), RevUpDownDir_9, (MR_Integer) 0))));

            {
              DownDir_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), DownDir_14, 0) = ((MR_Box) (ChildName_15));
            }
            succeeded = (STATE_VARIABLE_ToDelete_0_2 > (MR_Integer) 0);
            if (succeeded)
            {
              STATE_VARIABLE_ToDelete_19_19 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_ToDelete_0_2 - (MR_Unsigned) 1);
              STATE_VARIABLE_DownDirs_24_24 = STATE_VARIABLE_DownDirs_0_3;
            }
            else
            {
              {
                STATE_VARIABLE_DownDirs_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_DownDirs_24_24, 0) = ((MR_Box) (DownDir_14));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_DownDirs_24_24, 1) = ((MR_Box) (STATE_VARIABLE_DownDirs_0_3));
              }
              STATE_VARIABLE_ToDelete_19_19 = STATE_VARIABLE_ToDelete_0_2;
            }
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = RevUpDownDirs_10;
      next_value_of_STATE_VARIABLE_ToDelete_0_2 = STATE_VARIABLE_ToDelete_19_19;
      next_value_of_STATE_VARIABLE_DownDirs_0_3 = STATE_VARIABLE_DownDirs_24_24;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ToDelete_0_2 = next_value_of_STATE_VARIABLE_ToDelete_0_2;
      STATE_VARIABLE_DownDirs_0_3 = next_value_of_STATE_VARIABLE_DownDirs_0_3;
      continue;
    }
    break;
  }
}

void MR_CALL 
mdb__browse__print_browser_term_format_7_p_0(
  MR_Word OutputStream_8,
  MR_Word CallerType_9,
  MR_Word Format_10,
  MR_Word Term_11,
  MR_Word State_12)
{
  MR_bool succeeded;
  MR_Word Var_16;
  MR_Word Info_18;
  MR_Word Format_19;
  MR_Word Var_23;

  {
    Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (Format_10));
  }
  Info_18 = mdb__browser_info__browser_info_init_5_f_0(Term_11, CallerType_9, Var_16, (MR_Word) ((MR_Unsigned) 0U), State_12);
  mdb__browser_info__get_format_4_p_0(Info_18, CallerType_9, Var_16, &Format_19);
  succeeded = ((MR_tag((MR_Word) Term_11)) == (MR_Integer) 0);
  if (succeeded)
    succeeded = (Format_19 != (MR_Integer) 0);
  if (succeeded)
    mercury__io__nl_3_p_0(OutputStream_8);
  {
    Var_23 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (OutputStream_8));
  }
  mdb__browse__portray_6_p_0(Var_23, CallerType_9, (MR_Word) ((MR_Unsigned) 0U), Info_18);
}

void MR_CALL 
mdb__browse__print_browser_term_6_p_0(
  MR_Word OutputStream_7,
  MR_Word CallerType_8,
  MR_Word Term_9,
  MR_Word State_10)
{
  MR_bool succeeded;
  MR_Word Info_16;
  MR_Word Format_17;
  MR_Word Var_21;

  Info_16 = mdb__browser_info__browser_info_init_5_f_0(Term_9, CallerType_8, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), State_10);
  mdb__browser_info__get_format_4_p_0(Info_16, CallerType_8, (MR_Word) ((MR_Unsigned) 0U), &Format_17);
  succeeded = ((MR_tag((MR_Word) Term_9)) == (MR_Integer) 0);
  if (succeeded)
    succeeded = (Format_17 != (MR_Integer) 0);
  if (succeeded)
    mercury__io__nl_3_p_0(OutputStream_7);
  {
    Var_21 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (OutputStream_7));
  }
  mdb__browse__portray_6_p_0(Var_21, CallerType_8, (MR_Word) ((MR_Unsigned) 0U), Info_16);
}

static void MR_CALL 
mdb__browse__portray_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  mdb__browse__put_comma_space_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), wrapper_arg_1, wrapper_arg_2, wrapper_arg_3);
}

static void MR_CALL 
mdb__browse__portray_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  mdb__browse__write_univ_or_unbound_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), wrapper_arg_1, ((MR_Word) (wrapper_arg_2)), wrapper_arg_3, wrapper_arg_4);
}

static void MR_CALL 
mdb__browse__portray_6_p_0(
  MR_Word Debugger_7,
  MR_Word Caller_8,
  MR_Word MaybeFormat_9,
  MR_Word Info_10)
{
  MR_bool succeeded;
  MR_Word Format_12;
  MR_Word Params_13;
  MR_Word SubResult_14;
  MR_Word Var_20;
  MR_Word Var_23;

  mdb__browser_info__get_format_4_p_0(Info_10, Caller_8, MaybeFormat_9, &Format_12);
  mdb__browser_info__get_format_params_4_p_0(Info_10, Caller_8, Format_12, &Params_13);
  Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_10, (MR_Integer) 0))));
  Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_10, (MR_Integer) 1))));
  mdb__browse__deref_subterm_3_p_0(Var_20, Var_23, &SubResult_14);
  if (((MR_tag((MR_Word) SubResult_14)) == (MR_Integer) 1))
  {
    MR_Word OKPath_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubResult_14, (MR_Integer) 0))));
    MR_Word ErrorDir_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubResult_14, (MR_Integer) 1))));
    MR_String Msg_38;
    MR_String Var_47;
    MR_String Var_48;

    mdb__browser_info__write_string_debugger_4_p_0(Debugger_7, (MR_String) "error: ");
    if (!((OKPath_16 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_String Context_37;
      MR_String Var_42;
      MR_String Var_43;

      Var_43 = mdb__browse__down_dirs_to_string_1_f_0(OKPath_16);
      Var_42 = mercury__string__f_43_43_2_f_0(Var_43, (MR_String) ": ");
      Context_37 = mercury__string__f_43_43_2_f_0((MR_String) "in subdir ", Var_42);
      mdb__browser_info__write_string_debugger_4_p_0(Debugger_7, Context_37);
    }
    if (((MR_tag((MR_Word) ErrorDir_17)) == (MR_Integer) 1))
      Var_48 = ((MR_String) ((MR_hl_field(MR_mktag(1), ErrorDir_17, (MR_Integer) 0))));
    else
    {
      MR_Integer Num_50 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ErrorDir_17, (MR_Integer) 0))));

      Var_48 = mercury__string__int_to_string_1_f_0(Num_50);
    }
    Var_47 = mercury__string__f_43_43_2_f_0(Var_48, (MR_String) "\n");
    Msg_38 = mercury__string__f_43_43_2_f_0((MR_String) "there is no subterm ", Var_47);
    mdb__browser_info__write_string_debugger_4_p_0(Debugger_7, Msg_38);
  }
  else
  {
    MR_Word SubUniv_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubResult_14, (MR_Integer) 0))));

    switch (Format_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer RemainingSize_52;

          mdb__browse__browser_term_size_left_from_max_3_p_0(SubUniv_15, (MR_Integer) 60, &RemainingSize_52);
          succeeded = (RemainingSize_52 >= (MR_Integer) 0);
          if (succeeded)
          {
            MR_Word Stream_53;

            mercury__io__output_stream_3_p_0(&Stream_53);
            if (((MR_tag((MR_Word) SubUniv_15)) == (MR_Integer) 0))
            {
              MR_Word Univ_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubUniv_15, (MR_Integer) 0))));
              MR_Box conv0_STATE_VARIABLE_IO_22_22;

              mercury__stream__string_writer__write_univ_5_p_2((MR_Word) (&mdb__browse_scalar_common_3[0]), (MR_Word) (&mdb__browse_scalar_common_3[3]), ((MR_Box) (Stream_53)), (MR_Integer) 2, Univ_71, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_22_22);
            }
            else
            {
              MR_String Functor_72 = ((MR_String) ((MR_hl_field(MR_mktag(1), SubUniv_15, (MR_Integer) 0))));
              MR_Word Args_73 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubUniv_15, (MR_Integer) 1))));
              MR_Word MaybeReturn_74 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubUniv_15, (MR_Integer) 2))));
              void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mdb__browse_scalar_common_3[0]), (MR_Integer) 0)), (MR_Integer) 5))));
              MR_Box conv2_STATE_VARIABLE_IO_19_77;

              func_1(((MR_Box) ((MR_Word) (&mdb__browse_scalar_common_3[0]))), ((MR_Box) (Stream_53)), ((MR_Box) (Functor_72)), ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_19_77);
              if (!((Args_73 == (MR_Word) ((MR_Unsigned) 0U))))
              {
                MR_Word TypeClassInfo_for_output_88;
                void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mdb__browse_scalar_common_3[0]), (MR_Integer) 0)), (MR_Integer) 5))));
                MR_Box conv4_STATE_VARIABLE_IO_21_79;
                MR_Box conv5_STATE_VARIABLE_IO_24_82;
                void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                MR_Box conv7_STATE_VARIABLE_IO_26_84;

                func_3(((MR_Box) ((MR_Word) (&mdb__browse_scalar_common_3[0]))), ((MR_Box) (Stream_53)), ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_21_79);
                mercury__private_builtin__superclass_from_typeclass_info_3_p_0((MR_Word) (&mdb__browse_scalar_common_3[0]), (MR_Integer) 1, &TypeClassInfo_for_output_88);
                mercury__stream__put_list_6_p_2((MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), TypeClassInfo_for_output_88, ((MR_Box) (Stream_53)), (MR_Word) (&mdb__browse_scalar_common_3[5]), (MR_Word) (&mdb__browse_scalar_common_2[3]), Args_73, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_24_82);
                func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mdb__browse_scalar_common_3[0]), (MR_Integer) 0)), (MR_Integer) 5))));
                func_6(((MR_Box) ((MR_Word) (&mdb__browse_scalar_common_3[0]))), ((MR_Box) (Stream_53)), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_26_84);
              }
              if (!((MaybeReturn_74 == (MR_Word) ((MR_Unsigned) 0U))))
              {
                MR_Word Return_75 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeReturn_74, (MR_Integer) 0))));
                void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mdb__browse_scalar_common_3[0]), (MR_Integer) 0)), (MR_Integer) 5))));
                MR_Box conv9_STATE_VARIABLE_IO_28_86;
                MR_Box conv10_STATE_VARIABLE_IO_22_22;

                func_8(((MR_Box) ((MR_Word) (&mdb__browse_scalar_common_3[0]))), ((MR_Box) (Stream_53)), ((MR_Box) ((MR_String) " = ")), ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_IO_28_86);
                mercury__stream__string_writer__write_univ_5_p_2((MR_Word) (&mdb__browse_scalar_common_3[0]), (MR_Word) (&mdb__browse_scalar_common_3[3]), ((MR_Box) (Stream_53)), (MR_Integer) 2, Return_75, ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_IO_22_22);
              }
            }
          }
          else
          {
            MR_Word StreamDb_54;
            MR_Word BrowserDb_55;
            MR_String Str_56;
            MR_Integer Var_61;
            MR_Integer Var_63;
            MR_Word MaybeFunctorArityArgs_94;
            MR_Word MaybeReturn_95;
            MR_String Functor_96;
            MR_Word Args_98;
            MR_Tuple Var_99;

            mercury__io__stream_db__get_stream_db_3_p_0(&StreamDb_54);
            BrowserDb_55 = (MR_Word) (StreamDb_54);
            Var_63 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Params_13, (MR_Integer) 0))));
            Var_61 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Params_13, (MR_Integer) 1))));
            mdb__browser_info__limited_deconstruct_browser_term_cc_5_p_0(BrowserDb_55, SubUniv_15, Var_61, &MaybeFunctorArityArgs_94, &MaybeReturn_95);
            succeeded = ((MR_Integer) 0 < Var_61);
            if (succeeded)
            {
              succeeded = ((MR_Integer) 0 < Var_63);
              if (succeeded)
              {
                succeeded = (MaybeFunctorArityArgs_94 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_99 = ((MR_Tuple) ((MR_hl_field(MR_mktag(1), MaybeFunctorArityArgs_94, (MR_Integer) 0))));
                  Functor_96 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_99, (MR_Integer) 0))));
                  Args_98 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_99, (MR_Integer) 2))));
                  succeeded = MR_TRUE;
                }
              }
            }
            if (succeeded)
            {
              MR_Integer _NewSize_93;

              mdb__browse__browser_term_to_string_3_10_p_0(BrowserDb_55, Functor_96, Args_98, MaybeReturn_95, Var_61, (MR_Integer) 0, &_NewSize_93, Var_63, (MR_Integer) 0, &Str_56);
            }
            else
              mdb__browse__browser_term_compress_3_p_0(BrowserDb_55, SubUniv_15, &Str_56);
            mdb__browser_info__write_string_debugger_4_p_0(Debugger_7, Str_56);
          }
        }
        break;
      case (MR_Integer) 3:
        mdb__browse__portray_pretty_5_p_0(Debugger_7, SubUniv_15, Params_13);
        break;
      case (MR_Integer) 1:
        mdb__browse__portray_raw_pretty_5_p_0(Debugger_7, SubUniv_15, Params_13);
        break;
      case (MR_Integer) 2:
        mdb__browse__portray_verbose_5_p_0(Debugger_7, SubUniv_15, Params_13);
        break;
    }
  }
  mdb__browser_info__nl_debugger_3_p_0(Debugger_7);
}

static MR_String MR_CALL 
mdb__browse__down_dirs_to_string_1_f_0(
  MR_Word HeadVar__1_1)
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

static void MR_CALL 
mdb__browse__deref_subterm_3_p_0(
  MR_Word BrowserTerm_4,
  MR_Word Path_5,
  MR_Word * Result_6)
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
      MR_Word SubUniv_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubResult_8, (MR_Integer) 0))));
      MR_Word SubBrowserTerm_29;

      {
        SubBrowserTerm_29 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), SubBrowserTerm_29, 0) = ((MR_Box) (SubUniv_28));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *Result_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (SubBrowserTerm_29));
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
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
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
          result_3 = MR_strcmp(Name_18, ((&mdb__browse_vector_common_7[4 + mid_2]))->mdb__browse__vector_common_type_7_0__vct_7_f_0);
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
          succeeded = (MaybeReturn_11 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
            ArgUniv_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeReturn_11, (MR_Integer) 0))));
        }
      }
      else
      {
        MR_Integer N_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Step_13, (MR_Integer) 0))));
        MR_Word ReturnValue_16;
        MR_Integer Var_20;
        MR_Integer Var_21;

        Var_20 = mercury__list__length_1_f_0((MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), Args_10);
        Var_21 = (MR_Integer) ((MR_Unsigned) N_15 - (MR_Unsigned) Var_20);
        succeeded = (Var_21 == (MR_Integer) 1);
        if (succeeded)
        {
          succeeded = (MaybeReturn_11 != (MR_Word) ((MR_Unsigned) 0U));
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
        MR_Word Var_22;
        MR_Word SubResult_25;

        {
          Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (Step_13));
          MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mdb__browse__deref_subterm_2_4_p_0(ArgUniv_17, PathTail_14, Var_22, &SubResult_25);
        if (((MR_tag((MR_Word) SubResult_25)) == (MR_Integer) 1))
          *Result_6 = (MR_Word) (SubResult_25);
        else
        {
          MR_Word SubUniv_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubResult_25, (MR_Integer) 0))));
          MR_Word SubBrowserTerm_33;

          {
            SubBrowserTerm_33 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), SubBrowserTerm_33, 0) = ((MR_Box) (SubUniv_32));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *Result_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (SubBrowserTerm_33));
          }
        }
      }
      else
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Result_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Step_13));
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
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
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
        MR_Box Var_24;

        Var_24 = mercury__univ__univ_value_1_f_0(&TypeInfo_29_29, Univ_5);
        mercury__deconstruct__named_arg_cc_3_p_0(TypeInfo_29_29, Var_24, Name_14, &MaybeValue_13);
      }
      else
      {
        MR_Integer N_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Dir_9, (MR_Integer) 0))));
        MR_Word TypeCtor_12;
        MR_Word Var_17;
        MR_String Var_18;
        MR_String Var_19;

        Var_17 = mercury__univ__univ_type_1_f_0(Univ_5);
        TypeCtor_12 = mercury__type_desc__type_ctor_1_f_0(Var_17);
        Var_18 = mercury__type_desc__type_ctor_name_1_f_0(TypeCtor_12);
        succeeded = (strcmp(Var_18, (MR_String) "array") == 0);
        if (succeeded)
        {
          Var_19 = mercury__type_desc__type_ctor_module_name_1_f_0(TypeCtor_12);
          succeeded = (strcmp(Var_19, (MR_String) "array") == 0);
        }
        if (succeeded)
        {
          MR_Word TypeInfo_27_27;
          MR_Box Var_20;

          Var_20 = mercury__univ__univ_value_1_f_0(&TypeInfo_27_27, Univ_5);
          mercury__deconstruct__arg_cc_3_p_0(TypeInfo_27_27, Var_20, N_11, &MaybeValue_13);
        }
        else
        {
          MR_Word TypeInfo_28_28;
          MR_Box Var_21;
          MR_Integer Var_22;

          Var_21 = mercury__univ__univ_value_1_f_0(&TypeInfo_28_28, Univ_5);
          Var_22 = (MR_Integer) ((MR_Unsigned) N_11 - (MR_Unsigned) 1);
          mercury__deconstruct__arg_cc_3_p_0(TypeInfo_28_28, Var_21, Var_22, &MaybeValue_13);
        }
      }
      if ((MaybeValue_13 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_26;

        Var_26 = mercury__list__reverse_1_f_0((MR_Word) (&mdb__browser_info__mdb__browser_info__type_ctor_info_down_dir_0), RevPath0_7);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Result_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_26));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Dir_9));
        }
      }
      else
      {
        MR_Word TypeInfo_30_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeValue_13, (MR_Integer) 0))));
        MR_Box Value_15 = (MR_hl_field(MR_mktag(1), MaybeValue_13, (MR_Integer) 1));
        MR_Word ArgN_16;
        MR_Word Var_25;
        MR_Word next_value_of_Univ_5;
        MR_Word next_value_of_Path_6;
        MR_Word next_value_of_RevPath0_7;

        ArgN_16 = mercury__univ__univ_1_f_0(TypeInfo_30_30, Value_15);
        {
          Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (Dir_9));
          MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (RevPath0_7));
        }
        // direct tailcall eliminated
        ;
        next_value_of_Univ_5 = ArgN_16;
        next_value_of_Path_6 = Dirs_10;
        next_value_of_RevPath0_7 = Var_25;
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
    MR_Word MaybeFunctorArityArgs_29;
    MR_Word MaybeReturn_30;
    MR_String Functor_31;
    MR_Word Args_33;
    MR_Tuple Var_34;

    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (Univ_17));
    }
    mdb__browser_info__limited_deconstruct_browser_term_cc_5_p_0(HeadVar__1_1, Var_28, HeadVar__3_3, &MaybeFunctorArityArgs_29, &MaybeReturn_30);
    succeeded = (CurSize_4 < HeadVar__3_3);
    if (succeeded)
    {
      succeeded = (HeadVar__7_7 < HeadVar__6_6);
      if (succeeded)
      {
        succeeded = (MaybeFunctorArityArgs_29 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_34 = ((MR_Tuple) ((MR_hl_field(MR_mktag(1), MaybeFunctorArityArgs_29, (MR_Integer) 0))));
          Functor_31 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_34, (MR_Integer) 0))));
          Args_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_34, (MR_Integer) 2))));
          succeeded = MR_TRUE;
        }
      }
    }
    if (succeeded)
      mdb__browse__browser_term_to_string_3_10_p_0(HeadVar__1_1, Functor_31, Args_33, MaybeReturn_30, HeadVar__3_3, CurSize_4, &NewSize1_25, HeadVar__6_6, HeadVar__7_7, &Str_26);
    else
    {
      mdb__browse__browser_term_compress_3_p_0(HeadVar__1_1, Var_28, &Str_26);
      NewSize1_25 = CurSize_4;
    }
    mdb__browse__args_to_string_list_8_p_0(HeadVar__1_1, Univs_18, HeadVar__3_3, NewSize1_25, NewSize_5, HeadVar__6_6, HeadVar__7_7, &RestStrs_27);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Strs_8 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Str_26));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (RestStrs_27));
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
  MR_bool succeeded;
  MR_Integer Limit_17;
  MR_Word MaybeFunctorArityArgs_18;
  MR_Word MaybeReturn_19;
  MR_Word Var_31;

  Limit_17 = mercury__int__max_2_f_0(MaxSize_11, (MR_Integer) 2);
  {
    Var_31 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (TailUniv_10));
  }
  mdb__browser_info__limited_deconstruct_browser_term_cc_5_p_0(BrowserDb_9, Var_31, Limit_17, &MaybeFunctorArityArgs_18, &MaybeReturn_19);
  if ((MaybeFunctorArityArgs_18 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_49;
    MR_String TailCompressedStr_51;

    *Size_13 = Size0_12;
    mdb__browse__browser_term_compress_3_p_0(BrowserDb_9, Var_31, &TailCompressedStr_51);
    {
      Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (TailCompressedStr_51));
      MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *TailStrs_16 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) " | "));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_49));
    }
  }
  else
  {
    MR_String Functor_20;
    MR_Word Args_22;
    MR_Tuple Var_32 = ((MR_Tuple) ((MR_hl_field(MR_mktag(1), MaybeFunctorArityArgs_18, (MR_Integer) 0))));

    Functor_20 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_32, (MR_Integer) 0))));
    Args_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_32, (MR_Integer) 2))));
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
      MR_Word Var_33;
      MR_Word Var_34;

      succeeded = (strcmp(Functor_20, (MR_String) "[|]") == 0);
      if (succeeded)
      {
        succeeded = (MaybeReturn_19 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = (Args_22 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            ListHead_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_22, (MR_Integer) 0))));
            Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_22, (MR_Integer) 1))));
            succeeded = (Var_33 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              ListTail_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_33, (MR_Integer) 0))));
              Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_33, (MR_Integer) 1))));
              succeeded = (Var_34 == (MR_Word) ((MR_Unsigned) 0U));
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
          MR_Word Var_35;
          MR_Word Var_37;
          MR_Word MaybeFunctorArityArgs_52;
          MR_Word MaybeReturn_53;
          MR_String Functor_54;
          MR_Word Args_56;
          MR_Tuple Var_57;

          {
            Var_35 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (ListHead_23));
          }
          mdb__browser_info__limited_deconstruct_browser_term_cc_5_p_0(BrowserDb_9, Var_35, MaxSize_11, &MaybeFunctorArityArgs_52, &MaybeReturn_53);
          succeeded = (Size0_12 < MaxSize_11);
          if (succeeded)
          {
            succeeded = (Depth0_15 < MaxDepth_14);
            if (succeeded)
            {
              succeeded = (MaybeFunctorArityArgs_52 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_57 = ((MR_Tuple) ((MR_hl_field(MR_mktag(1), MaybeFunctorArityArgs_52, (MR_Integer) 0))));
                Functor_54 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_57, (MR_Integer) 0))));
                Args_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_57, (MR_Integer) 2))));
                succeeded = MR_TRUE;
              }
            }
          }
          if (succeeded)
            mdb__browse__browser_term_to_string_3_10_p_0(BrowserDb_9, Functor_54, Args_56, MaybeReturn_53, MaxSize_11, Size0_12, &Size1_25, MaxDepth_14, Depth0_15, &HeadStr_26);
          else
          {
            mdb__browse__browser_term_compress_3_p_0(BrowserDb_9, Var_35, &HeadStr_26);
            Size1_25 = Size0_12;
          }
          mdb__browse__list_tail_to_string_list_8_p_0(BrowserDb_9, ListTail_24, MaxSize_11, Size1_25, Size_13, MaxDepth_14, Depth0_15, &TailStrs0_27);
          {
            Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (HeadStr_26));
            MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (TailStrs0_27));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *TailStrs_16 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) ", "));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_37));
          }
        }
        else
        {
          *Size_13 = Size0_12;
          *TailStrs_16 = (MR_Word) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[40]));
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
          MR_Word Var_41;

          mdb__browse__browser_term_to_string_3_10_p_0(BrowserDb_9, Functor_20, Args_22, MaybeReturn_19, MaxSize_11, Size0_12, Size_13, MaxDepth_14, Depth0_15, &TailStr_28);
          {
            Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (TailStr_28));
            MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *TailStrs_16 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) " | "));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_41));
          }
        }
        else
        {
          MR_String TailCompressedStr_29;
          MR_Word Var_45;

          *Size_13 = Size0_12;
          mdb__browse__browser_term_compress_3_p_0(BrowserDb_9, Var_31, &TailCompressedStr_29);
          {
            Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (TailCompressedStr_29));
            MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *TailStrs_16 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) " | "));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_45));
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
      succeeded = (Args_13 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ListHead_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 0))));
        Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 1))));
        succeeded = (Var_33 != (MR_Word) ((MR_Unsigned) 0U));
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
    MR_Integer Size1_23 = (MR_Integer) ((MR_Unsigned) Size0_16 + (MR_Unsigned) 1);
    MR_Integer Depth1_24 = (MR_Integer) ((MR_Unsigned) Depth0_19 + (MR_Unsigned) 1);
    MR_Integer Size2_25;
    MR_String HeadStr_26;
    MR_Word TailStrs_27;
    MR_Word Strs_28;
    MR_Word Var_37;
    MR_Word Var_41;
    MR_Word Var_43;
    MR_Word MaybeFunctorArityArgs_61;
    MR_Word MaybeReturn_62;
    MR_String Functor_63;
    MR_Word Args_65;
    MR_Tuple Var_66;

    {
      Var_37 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (ListHead_21));
    }
    mdb__browser_info__limited_deconstruct_browser_term_cc_5_p_0(BrowserDb_11, Var_37, MaxSize_15, &MaybeFunctorArityArgs_61, &MaybeReturn_62);
    succeeded = (Size1_23 < MaxSize_15);
    if (succeeded)
    {
      succeeded = (Depth1_24 < MaxDepth_18);
      if (succeeded)
      {
        succeeded = (MaybeFunctorArityArgs_61 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_66 = ((MR_Tuple) ((MR_hl_field(MR_mktag(1), MaybeFunctorArityArgs_61, (MR_Integer) 0))));
          Functor_63 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_66, (MR_Integer) 0))));
          Args_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_66, (MR_Integer) 2))));
          succeeded = MR_TRUE;
        }
      }
    }
    if (succeeded)
      mdb__browse__browser_term_to_string_3_10_p_0(BrowserDb_11, Functor_63, Args_65, MaybeReturn_62, MaxSize_15, Size1_23, &Size2_25, MaxDepth_18, Depth1_24, &HeadStr_26);
    else
    {
      mdb__browse__browser_term_compress_3_p_0(BrowserDb_11, Var_37, &HeadStr_26);
      Size2_25 = Size1_23;
    }
    mdb__browse__list_tail_to_string_list_8_p_0(BrowserDb_11, ListTail_22, MaxSize_15, Size2_25, Size_17, MaxDepth_18, Depth1_24, &TailStrs_27);
    mercury__list__append_3_p_1((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), TailStrs_27, (MR_Word) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[39])), &Strs_28);
    {
      Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (HeadStr_26));
      MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (Strs_28));
    }
    {
      Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
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
      *Size_17 = (MR_Integer) ((MR_Unsigned) Size0_16 + (MR_Unsigned) 1);
      *Str_20 = (MR_String) "[]";
    }
    else
    {
      MR_Word ArgStrs_29;
      MR_String BracketedArgsStr_30;
      MR_Integer Size1_57 = (MR_Integer) ((MR_Unsigned) Size0_16 + (MR_Unsigned) 1);
      MR_Integer Depth1_58 = (MR_Integer) ((MR_Unsigned) Depth0_19 + (MR_Unsigned) 1);
      MR_Integer Size2_59;

      mdb__browse__args_to_string_list_8_p_0(BrowserDb_11, Args_13, MaxSize_15, Size1_57, &Size2_59, MaxDepth_18, Depth1_58, &ArgStrs_29);
      if ((ArgStrs_29 == (MR_Word) ((MR_Unsigned) 0U)))
        BracketedArgsStr_30 = (MR_String) "";
      else
      {
        MR_String HeadArg_67 = ((MR_String) ((MR_hl_field(MR_mktag(1), ArgStrs_29, (MR_Integer) 0))));
        MR_Word TailArgs_68 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgStrs_29, (MR_Integer) 1))));
        MR_String Var_70;
        MR_String Var_71;
        MR_String Var_72;

        Var_72 = mdb__browse__comma_string_list_1_f_0(TailArgs_68);
        Var_71 = mercury__string__f_43_43_2_f_0(Var_72, (MR_String) ")");
        Var_70 = mercury__string__f_43_43_2_f_0(HeadArg_67, Var_71);
        BracketedArgsStr_30 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_70);
      }
      if ((MaybeReturn_14 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_54;
        MR_Word Var_55;

        *Size_17 = Size2_59;
        {
          Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (BracketedArgsStr_30));
          MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (Functor_12));
          MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_55));
        }
        mercury__string__append_list_2_p_0(Var_54, Str_20);
      }
      else
      {
        MR_Word Return_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeReturn_14, (MR_Integer) 0))));
        MR_String ReturnStr_32;
        MR_Word Var_47;
        MR_Word Var_48;
        MR_Word Var_49;
        MR_Word Var_50;
        MR_Word Var_52;
        MR_Word MaybeFunctorArityArgs_74;
        MR_Word MaybeReturn_75;
        MR_String Functor_76;
        MR_Word Args_78;
        MR_Tuple Var_79;

        {
          Var_47 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (Return_31));
        }
        mdb__browser_info__limited_deconstruct_browser_term_cc_5_p_0(BrowserDb_11, Var_47, MaxSize_15, &MaybeFunctorArityArgs_74, &MaybeReturn_75);
        succeeded = (Size2_59 < MaxSize_15);
        if (succeeded)
        {
          succeeded = (Depth1_58 < MaxDepth_18);
          if (succeeded)
          {
            succeeded = (MaybeFunctorArityArgs_74 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_79 = ((MR_Tuple) ((MR_hl_field(MR_mktag(1), MaybeFunctorArityArgs_74, (MR_Integer) 0))));
              Functor_76 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_79, (MR_Integer) 0))));
              Args_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_79, (MR_Integer) 2))));
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
          mdb__browse__browser_term_to_string_3_10_p_0(BrowserDb_11, Functor_76, Args_78, MaybeReturn_75, MaxSize_15, Size2_59, Size_17, MaxDepth_18, Depth1_58, &ReturnStr_32);
        else
        {
          mdb__browse__browser_term_compress_3_p_0(BrowserDb_11, Var_47, &ReturnStr_32);
          *Size_17 = Size2_59;
        }
        {
          Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (ReturnStr_32));
          MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) ((MR_String) " = "));
          MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Var_52));
        }
        {
          Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (BracketedArgsStr_30));
          MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (Var_50));
        }
        {
          Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (Functor_12));
          MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (Var_49));
        }
        mercury__string__append_list_2_p_0(Var_48, Str_20);
      }
    }
  }
}

static MR_String MR_CALL 
mdb__browse__comma_string_list_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__2_2 = (MR_String) "";
  else
  {
    MR_String HeadArg_3 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word TailArgs_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_String Var_6;
    MR_String Var_7;

    Var_7 = mdb__browse__comma_string_list_1_f_0(TailArgs_4);
    Var_6 = mercury__string__f_43_43_2_f_0(HeadArg_3, Var_7);
    HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_6);
  }
  return HeadVar__2_2;
}

static void MR_CALL 
mdb__browse__portray_raw_pretty_5_p_0(
  MR_Word Debugger_6,
  MR_Word BrowserTerm_7,
  MR_Word Params_8)
{
  MR_Word StreamDb_10;
  MR_Word BrowserDb_11;
  MR_String Str_12;
  MR_Integer Var_16;
  MR_Integer Var_20;

  mercury__io__stream_db__get_stream_db_3_p_0(&StreamDb_10);
  BrowserDb_11 = (MR_Word) (StreamDb_10);
  Var_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Params_8, (MR_Integer) 2))));
  Var_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Params_8, (MR_Integer) 3))));
  mdb__sized_pretty__browser_term_to_string_line_5_p_0(BrowserDb_11, BrowserTerm_7, Var_16, Var_20, &Str_12);
  mdb__browser_info__write_string_debugger_4_p_0(Debugger_6, Str_12);
}

static void MR_CALL 
mdb__browse__portray_pretty_5_p_0(
  MR_Word Debugger_6,
  MR_Word BrowserTerm_7,
  MR_Word Params_8)
{
  MR_bool succeeded;
  MR_Integer Var_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Params_8, (MR_Integer) 2))));
  MR_Integer Var_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Params_8, (MR_Integer) 0))));
  MR_Integer Var_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Params_8, (MR_Integer) 1))));
  MR_Integer Var_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Params_8, (MR_Integer) 3))));
  MR_Word Doc_30;
  MR_Word Formatters_34;
  MR_Word Limit_35;
  MR_Word Params_36;
  MR_Integer Var_38;
  MR_Word Var_39;
  MR_Box conv0_STATE_VARIABLE_IO_11;

  if (((MR_tag((MR_Word) BrowserTerm_7)) == (MR_Integer) 0))
  {
    MR_Word Univ_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BrowserTerm_7, (MR_Integer) 0))));

    {
      Doc_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Doc_30, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Doc_30, 1) = ((MR_Box) (Univ_29));
    }
  }
  else
  {
    MR_String Functor_31 = ((MR_String) ((MR_hl_field(MR_mktag(1), BrowserTerm_7, (MR_Integer) 0))));
    MR_Word Args_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BrowserTerm_7, (MR_Integer) 1))));
    MR_Word MaybeReturn_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BrowserTerm_7, (MR_Integer) 2))));
    MR_Word Doc0_40;

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
        result_3 = MR_strcmp(Functor_31, ((&mdb__browse_vector_common_7[0 + mid_2]))->mdb__browse__vector_common_type_7_0__vct_7_f_0);
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
    }
    if (!(succeeded))
    {
      succeeded = mercury__string__contains_char_2_p_0(Functor_31, (MR_Char) 46);
      succeeded = !(succeeded);
    }
    if (succeeded)
      {
        Doc0_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Doc0_40, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(MR_mktag(3), Doc0_40, 1) = ((MR_Box) (Functor_31));
        MR_hl_field(MR_mktag(3), Doc0_40, 2) = ((MR_Box) (Args_32));
      }
    else
    {
      MR_Word FunctorDoc_41;
      MR_Word Var_46;

      Var_46 = mercury__string__split_at_char_2_f_0((MR_Char) 46, Functor_31);
      FunctorDoc_41 = mdb__browse__qualified_functor_to_doc_1_f_0(Var_46);
      if ((Args_32 == (MR_Word) ((MR_Unsigned) 0U)))
        Doc0_40 = FunctorDoc_41;
      else
      {
        MR_Word Var_48;
        MR_Word Var_49;
        MR_Word Var_52;
        MR_Word Var_53;
        MR_Word Var_54;

        Var_54 = mercury__pretty_printer__group_1_f_0((MR_Word) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[44])));
        {
          Var_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_53, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(MR_mktag(3), Var_53, 1) = ((MR_Box) (Args_32));
          MR_hl_field(MR_mktag(3), Var_53, 2) = ((MR_Box) (Var_54));
        }
        {
          Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (Var_53));
          MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[45])));
        }
        {
          Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_5[4])));
          MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (Var_52));
        }
        {
          Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (FunctorDoc_41));
          MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (Var_49));
        }
        Doc0_40 = mercury__pretty_printer__indent_1_f_0(Var_48);
      }
    }
    if ((MaybeReturn_33 == (MR_Word) ((MR_Unsigned) 0U)))
      Doc_30 = Doc0_40;
    else
    {
      MR_Word Return_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeReturn_33, (MR_Integer) 0))));
      MR_Word Var_60;
      MR_Word Var_61;
      MR_Word Var_64;
      MR_Word Var_65;
      MR_Word Var_66;

      {
        Var_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_66, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_66, 1) = ((MR_Box) (Return_44));
      }
      Var_65 = mercury__pretty_printer__format_arg_1_f_0(Var_66);
      {
        Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (Var_65));
        MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_5[7])));
        MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (Var_64));
      }
      {
        Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (Doc0_40));
        MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (Var_61));
      }
      {
        Doc_30 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Doc_30, 0) = ((MR_Box) (Var_60));
      }
    }
  }
  mercury__pretty_printer__get_default_formatter_map_3_p_0(&Formatters_34);
  Var_38 = (MR_Integer) 0;
  succeeded = (Var_16 > Var_38);
  if (succeeded)
    {
      Limit_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Limit_35, 0) = ((MR_Box) (Var_16));
    }
  else
    {
      Limit_35 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Limit_35, 0) = ((MR_Box) (Var_17));
    }
  {
    Params_36 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Params_36, 0) = ((MR_Box) (Var_12));
    MR_hl_field(MR_mktag(0), Params_36, 1) = ((MR_Box) (Var_18));
    MR_hl_field(MR_mktag(0), Params_36, 2) = ((MR_Box) (Limit_35));
  }
  Var_39 = (MR_Integer) 2;
  mercury__pretty_printer__put_doc_7_p_1((MR_Word) (&mdb__browse_scalar_common_3[4]), ((MR_Box) (Debugger_6)), Var_39, Formatters_34, Params_36, Doc_30, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_11);
}

static MR_Word MR_CALL 
mdb__browse__qualified_functor_to_doc_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__2_2 = (MR_Word) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_5[8]));
  else
  {
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_String Var_22 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

    if ((Var_21 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_String Var_6;

      Var_6 = mercury__term_io__quoted_atom_1_f_0(Var_22);
      {
        HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
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
        Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_12, 0) = ((MR_Box) (Var_13));
      }
      Var_18 = mdb__browse__qualified_functor_to_doc_1_f_0(Var_21);
      {
        Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (Var_18));
        MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_5[9])));
        MR_hl_field(MR_mktag(1), Var_14, 1) = ((MR_Box) (Var_17));
      }
      {
        Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_11, 0) = ((MR_Box) (Var_12));
        MR_hl_field(MR_mktag(1), Var_11, 1) = ((MR_Box) (Var_14));
      }
      {
        HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), HeadVar__2_2, 0) = ((MR_Box) (Var_11));
      }
    }
  }
  return HeadVar__2_2;
}

static void MR_CALL 
mdb__browse__portray_verbose_5_p_0(
  MR_Word Debugger_6,
  MR_Word BrowserTerm_7,
  MR_Word Params_8)
{
  MR_bool succeeded;
  MR_Word StreamDb_10;
  MR_Word BrowserDb_11;
  MR_String Str_12;
  MR_Integer Var_16;
  MR_Integer Var_20;
  MR_Integer Var_21;
  MR_Integer Var_22;
  MR_Word Frame_35;
  MR_Word ClippedFrame_36;
  MR_Word Var_37;
  MR_Word MaybeFunctorArityArgs_38;
  MR_Word MaybeReturn_39;
  MR_String Functor_40;
  MR_Word Args0_42;
  MR_Tuple Var_50;

  mercury__io__stream_db__get_stream_db_3_p_0(&StreamDb_10);
  BrowserDb_11 = (MR_Word) (StreamDb_10);
  Var_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Params_8, (MR_Integer) 0))));
  Var_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Params_8, (MR_Integer) 1))));
  Var_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Params_8, (MR_Integer) 2))));
  Var_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Params_8, (MR_Integer) 3))));
  mdb__browser_info__limited_deconstruct_browser_term_cc_5_p_0(BrowserDb_11, BrowserTerm_7, Var_16, &MaybeFunctorArityArgs_38, &MaybeReturn_39);
  succeeded = ((MR_Integer) 0 < Var_16);
  if (succeeded)
  {
    succeeded = ((MR_Integer) 0 < Var_20);
    if (succeeded)
    {
      succeeded = (MaybeFunctorArityArgs_38 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_50 = ((MR_Tuple) ((MR_hl_field(MR_mktag(1), MaybeFunctorArityArgs_38, (MR_Integer) 0))));
        Functor_40 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_50, (MR_Integer) 0))));
        Args0_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_50, (MR_Integer) 2))));
        succeeded = MR_TRUE;
      }
    }
  }
  if (succeeded)
  {
    MR_Word Args_44;
    MR_Word ArgsFrame_48;
    MR_Word Var_55;
    MR_Integer _NewSize_34;

    if ((MaybeReturn_39 == (MR_Word) ((MR_Unsigned) 0U)))
      Args_44 = Args0_42;
    else
    {
      MR_Word Return_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeReturn_39, (MR_Integer) 0))));
      MR_Word Var_51;

      {
        Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Return_43));
        MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__list__append_3_p_1((MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), Args0_42, Var_51, &Args_44);
    }
    mdb__browse__args_to_string_verbose_list_9_p_0(BrowserDb_11, Args_44, (MR_Integer) 1, Var_16, (MR_Integer) ((MR_Unsigned) 0 + (MR_Unsigned) 1), &_NewSize_34, Var_20, (MR_Integer) ((MR_Unsigned) 0 + (MR_Unsigned) 1), &ArgsFrame_48);
    {
      Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (Functor_40));
      MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Frame_35 = mdb__frame__vglue_2_f_0(Var_55, ArgsFrame_48);
  }
  else
  {
    MR_String Line_49;

    mdb__browse__browser_term_compress_3_p_0(BrowserDb_11, BrowserTerm_7, &Line_49);
    {
      Frame_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Frame_35, 0) = ((MR_Box) (Line_49));
      MR_hl_field(MR_mktag(1), Frame_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  {
    Var_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (Var_21));
    MR_hl_field(MR_mktag(0), Var_37, 1) = ((MR_Box) (Var_22));
  }
  ClippedFrame_36 = mdb__frame__clip_2_f_0(Var_37, Frame_35);
  mdb__browse__unlines_2_p_0(ClippedFrame_36, &Str_12);
  mdb__browser_info__write_string_debugger_4_p_0(Debugger_6, Str_12);
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
        Var_30 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (Var_74));
      }
      mdb__browse__browser_term_to_string_verbose_2_8_p_0(HeadVar__1_1, Var_30, HeadVar__4_4, CurSize_5, NewSize_6, HeadVar__7_7, HeadVar__8_8, &TreeFrame_26);
      mercury__string__int_to_string_2_p_0(HeadVar__3_3, &ArgNumS_27);
      {
        Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (ArgNumS_27));
        MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[41])));
      }
      mercury__string__append_list_2_p_0(Var_31, &LastBranchS_28);
      {
        Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
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
        Var_60 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (Var_74));
      }
      mdb__browse__browser_term_to_string_verbose_2_8_p_0(HeadVar__1_1, Var_60, HeadVar__4_4, CurSize_5, &NewSize1_48, HeadVar__7_7, HeadVar__8_8, &TreeFrame_49);
      ArgNum1_50 = (MR_Integer) ((MR_Unsigned) HeadVar__3_3 + (MR_Unsigned) 1);
      mdb__browse__args_to_string_verbose_list_9_p_0(HeadVar__1_1, Var_73, ArgNum1_50, HeadVar__4_4, NewSize1_48, NewSize_6, HeadVar__7_7, HeadVar__8_8, &RestTreesFrame_52);
      mercury__string__int_to_string_2_p_0(HeadVar__3_3, &ArgNumS_53);
      {
        Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (ArgNumS_53));
        MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[41])));
      }
      mercury__string__append_list_2_p_0(Var_63, &BranchFrameS_54);
      Var_67 = mdb__frame__vsize_1_f_0(TreeFrame_49);
      Height_55 = (MR_Integer) ((MR_Unsigned) Var_67 - (MR_Unsigned) 1);
      mercury__list__duplicate_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Height_55, ((MR_Box) ((MR_String) "|")), &VBranchFrame_56);
      {
        Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
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
      succeeded = (MaybeFunctorArityArgs_17 != (MR_Word) ((MR_Unsigned) 0U));
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
        Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Return_22));
        MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__list__append_3_p_1((MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), Args0_21, Var_30, &Args_23);
    }
    CurSize1_24 = (MR_Integer) ((MR_Unsigned) CurSize_12 + (MR_Unsigned) 1);
    CurDepth1_25 = (MR_Integer) ((MR_Unsigned) CurDepth_15 + (MR_Unsigned) 1);
    mdb__browse__args_to_string_verbose_list_9_p_0(BrowserDb_9, Args_23, (MR_Integer) 1, MaxSize_11, CurSize1_24, NewSize_13, MaxDepth_14, CurDepth1_25, &ArgsFrame_27);
    {
      Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Functor_19));
      MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    *Frame_16 = mdb__frame__vglue_2_f_0(Var_34, ArgsFrame_27);
  }
  else
  {
    MR_String Line_28;

    mdb__browse__browser_term_compress_3_p_0(BrowserDb_9, BrowserTerm_10, &Line_28);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Frame_16 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Line_28));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    *NewSize_13 = CurSize_12;
  }
}

static void MR_CALL 
mdb__browse__browser_term_compress_3_p_0(
  MR_Word BrowserDb_4,
  MR_Word BrowserTerm_5,
  MR_String * Str_6)
{
  MR_bool succeeded;
  MR_String Functor_7;
  MR_Integer Arity_8;
  MR_Word IsFunc_9;

  mdb__browser_info__functor_browser_term_cc_5_p_0(BrowserDb_4, BrowserTerm_5, &Functor_7, &Arity_8, &IsFunc_9);
  succeeded = (Arity_8 == (MR_Integer) 0);
  if (succeeded)
    *Str_6 = Functor_7;
  else
    switch (IsFunc_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String Var_33;
          MR_String Var_41;

          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mdb__browse_scalar_common_5[1]), Arity_8, &Var_33);
          Var_41 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_33);
          *Str_6 = mercury__string__f_43_43_2_f_0(Functor_7, Var_41);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Var_23;
          MR_String Var_30;
          MR_String Var_32;

          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mdb__browse_scalar_common_5[1]), Arity_8, &Var_23);
          Var_30 = mercury__string__f_43_43_2_f_0(Var_23, (MR_String) "+1");
          Var_32 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_30);
          *Str_6 = mercury__string__f_43_43_2_f_0(Functor_7, Var_32);
        }
        break;
    }
}

static void MR_CALL 
mdb__browse__browser_term_size_left_from_max_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Integer conv0_RemainingSize_6;

  mdb__browse__term_size_left_from_max_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv0_RemainingSize_6);
  *wrapper_arg_3 = ((MR_Box) (conv0_RemainingSize_6));
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
      MR_Integer Var_20 = (MR_Integer) ((MR_Unsigned) Arity_12 * (MR_Unsigned) 2);

      PrincipalSize_14 = (MR_Integer) ((MR_Unsigned) FunctorSize_11 + (MR_Unsigned) Var_20);
    }
    else
    {
      MR_Integer Var_16;
      MR_Integer Var_17 = (MR_Integer) ((MR_Unsigned) Arity_12 * (MR_Unsigned) 2);

      Var_16 = (MR_Integer) ((MR_Unsigned) FunctorSize_11 + (MR_Unsigned) Var_17);
      PrincipalSize_14 = (MR_Integer) ((MR_Unsigned) Var_16 + (MR_Unsigned) 3);
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
  MR_Box closure = closure_arg;
  MR_Integer conv0_RemainingSize_6;

  mdb__browse__term_size_left_from_max_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv0_RemainingSize_6);
  *wrapper_arg_3 = ((MR_Box) (conv0_RemainingSize_6));
}

void MR_CALL 
mdb__browse__term_size_left_from_max_3_p_0(
  MR_Word Univ_4,
  MR_Integer MaxSize_5,
  MR_Integer * RemainingSize_6)
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
      Var_17 = (MR_Integer) ((MR_Unsigned) Arity_9 * (MR_Unsigned) 2);
      PrincipalSize_12 = (MR_Integer) ((MR_Unsigned) FunctorSize_11 + (MR_Unsigned) Var_17);
      MaxArgsSize_13 = (MR_Integer) ((MR_Unsigned) MaxSize_5 - (MR_Unsigned) PrincipalSize_12);
      mercury__list__foldl_4_p_9((MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mdb__browse_scalar_common_1[4]), Args_10, ((MR_Box) (MaxArgsSize_13)), &conv1_RemainingSize_6);
      *RemainingSize_6 = ((MR_Integer) (conv1_RemainingSize_6));
    }
  }
}

static MR_bool MR_CALL 
mdb__browse____Unify____deref_result_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mdb__browse____Unify____deref_result_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mdb__browse____Compare____deref_result_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__browse____Compare____deref_result_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__browse____Unify____unbound_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__browse____Unify____unbound_0_0();
  return succeeded;
}

static void MR_CALL 
mdb__browse____Compare____unbound_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__browse____Compare____unbound_0_0(&conv0_HeadVar__1_1);
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__browse____Unify____xml_function_wrapper_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__browse____Unify____xml_function_wrapper_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdb__browse____Compare____xml_function_wrapper_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__browse____Compare____xml_function_wrapper_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__browse____Unify____xml_predicate_wrapper_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__browse____Unify____xml_predicate_wrapper_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdb__browse____Compare____xml_predicate_wrapper_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__browse____Compare____xml_predicate_wrapper_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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
