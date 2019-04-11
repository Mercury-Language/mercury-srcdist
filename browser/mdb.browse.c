/*
** Automatically generated from `browse.m'
** by the Mercury compiler,
** version rotd-2017-06-02
** configured for x86_64-apple-darwin13.4.0.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


/* :- module mdb.browse. */
/* :- implementation. */

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

static MR_bool MR_CALL 
mdb__browse____Unify____deref_result_1_0_10001(
  MR_Box mdb__browse__wrapper_arg_1,
  MR_Box mdb__browse__wrapper_arg_2,
  MR_Box mdb__browse__wrapper_arg_3);

static void MR_CALL 
mdb__browse____Compare____deref_result_1_0_10001(
  MR_Box mdb__browse__wrapper_arg_1,
  MR_Box * mdb__browse__wrapper_arg_2,
  MR_Box mdb__browse__wrapper_arg_3,
  MR_Box mdb__browse__wrapper_arg_4);

static MR_bool MR_CALL 
mdb__browse____Unify____unbound_0_0_10001(
  MR_Box mdb__browse__wrapper_arg_1,
  MR_Box mdb__browse__wrapper_arg_2);

static void MR_CALL 
mdb__browse____Compare____unbound_0_0_10001(
  MR_Box * mdb__browse__wrapper_arg_1,
  MR_Box mdb__browse__wrapper_arg_2,
  MR_Box mdb__browse__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__browse____Unify____xml_function_wrapper_0_0_10001(
  MR_Box mdb__browse__wrapper_arg_1,
  MR_Box mdb__browse__wrapper_arg_2);

static void MR_CALL 
mdb__browse____Compare____xml_function_wrapper_0_0_10001(
  MR_Box * mdb__browse__wrapper_arg_1,
  MR_Box mdb__browse__wrapper_arg_2,
  MR_Box mdb__browse__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__browse____Unify____xml_predicate_wrapper_0_0_10001(
  MR_Box mdb__browse__wrapper_arg_1,
  MR_Box mdb__browse__wrapper_arg_2);

static void MR_CALL 
mdb__browse____Compare____xml_predicate_wrapper_0_0_10001(
  MR_Box * mdb__browse__wrapper_arg_1,
  MR_Box mdb__browse__wrapper_arg_2,
  MR_Box mdb__browse__wrapper_arg_3);

static void MR_CALL 
mdb__browse__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_118_97_108_117_101_95_114_101_112_114_101_115_101_110_116_97_116_105_111_110_95_95_91_49_93_95_48_2_p_0(
  MR_Box mdb__browse__HeadVar__1_1,
  MR_Integer * mdb__browse__HeadVar__2_2);

static void MR_CALL 
mdb__browse____Compare____xml_predicate_wrapper_0_0(
  MR_Word * mdb__browse__HeadVar__1_1,
  MR_Word mdb__browse__HeadVar__2_2,
  MR_Word mdb__browse__HeadVar__3_3);

static MR_bool MR_CALL 
mdb__browse____Unify____xml_predicate_wrapper_0_0(
  MR_Word mdb__browse__HeadVar__1_1,
  MR_Word mdb__browse__HeadVar__2_2);

static void MR_CALL 
mdb__browse____Compare____xml_function_wrapper_0_0(
  MR_Word * mdb__browse__HeadVar__1_1,
  MR_Word mdb__browse__HeadVar__2_2,
  MR_Word mdb__browse__HeadVar__3_3);

static MR_bool MR_CALL 
mdb__browse____Unify____xml_function_wrapper_0_0(
  MR_Word mdb__browse__HeadVar__1_1,
  MR_Word mdb__browse__HeadVar__2_2);

static void MR_CALL 
mdb__browse____Compare____deref_result_1_0(
  MR_Word mdb__browse__TypeInfo_for_T_19,
  MR_Word * mdb__browse__HeadVar__1_1,
  MR_Word mdb__browse__HeadVar__2_2,
  MR_Word mdb__browse__HeadVar__3_3);

static MR_bool MR_CALL 
mdb__browse____Unify____deref_result_1_0(
  MR_Word mdb__browse__TypeInfo_for_T_11,
  MR_Word mdb__browse__HeadVar__1_1,
  MR_Word mdb__browse__HeadVar__2_2);

static MR_Word MR_CALL 
mdb__browse__qualified_functor_to_doc_1_f_0(
  MR_Word mdb__browse__HeadVar__1_1);

static void MR_CALL 
mdb__browse__write_term_mode_debugger_5_p_0(
  MR_Word mdb__browse__Debugger_6,
  MR_Word mdb__browse__MaybeModeFunc_7,
  MR_Word mdb__browse__Dirs_8);

static MR_String MR_CALL 
mdb__browse__down_dirs_to_string_1_f_0(
  MR_Word mdb__browse__HeadVar__1_1);

static void MR_CALL 
mdb__browse__simplify_rev_dirs_4_p_0(
  MR_Word mdb__browse__HeadVar__1_1,
  MR_Integer mdb__browse__STATE_VARIABLE_ToDelete_0_2,
  MR_Word mdb__browse__STATE_VARIABLE_DownDirs_0_3,
  MR_Word * mdb__browse__STATE_VARIABLE_DownDirs_4);

static void MR_CALL 
mdb__browse__write_indent_3_p_0(
  MR_Integer mdb__browse__Indent_4);

static MR_Box MR_CALL 
mdb__browse__save_args_4_p_0_1(
  MR_Box mdb__browse__closure_arg,
  MR_Box mdb__browse__wrapper_arg_1);

static void MR_CALL 
mdb__browse__save_args_4_p_0(
  MR_Integer mdb__browse__HeadVar__1_1,
  MR_Word mdb__browse__HeadVar__2_2);

static MR_bool MR_CALL 
mdb__browse__dynamic_cast_to_list_2_p_0(
  MR_Word mdb__browse__TypeInfo_for_T1_14,
  MR_Word * mdb__browse__TypeInfo_for_T_13,
  MR_Box mdb__browse__X_3,
  MR_Word * mdb__browse__L_4);

static MR_Box MR_CALL 
mdb__browse__save_univ_4_p_0_1(
  MR_Box mdb__browse__closure_arg,
  MR_Box mdb__browse__wrapper_arg_1);

static void MR_CALL 
mdb__browse__save_univ_4_p_0(
  MR_Integer mdb__browse__Indent_5,
  MR_Word mdb__browse__Univ_6);

static void MR_CALL 
mdb__browse__launch_xml_browser_5_p_0(
  MR_Word mdb__browse__OutStream_6,
  MR_Word mdb__browse__ErrStream_7,
  MR_String mdb__browse__CommandStr_8);

static void MR_CALL 
mdb__browse__change_dir_3_p_0(
  MR_Word mdb__browse__PwdDirs_4,
  MR_Word mdb__browse__Path_5,
  MR_Word * mdb__browse__RootRelDirs_6);

static void MR_CALL 
mdb__browse__set_path_3_p_0(
  MR_Word mdb__browse__NewPath_4,
  MR_Word mdb__browse__STATE_VARIABLE_Info_0_8,
  MR_Word * mdb__browse__STATE_VARIABLE_Info_9);

static void MR_CALL 
mdb__browse__deref_subterm_2_4_p_0(
  MR_Word mdb__browse__Univ_5,
  MR_Word mdb__browse__Path_6,
  MR_Word mdb__browse__RevPath0_7,
  MR_Word * mdb__browse__Result_8);

static void MR_CALL 
mdb__browse__deref_subterm_3_p_0(
  MR_Word mdb__browse__BrowserTerm_4,
  MR_Word mdb__browse__Path_5,
  MR_Word * mdb__browse__Result_6);

static void MR_CALL 
mdb__browse__unlines_2_p_0(
  MR_Word mdb__browse__HeadVar__1_1,
  MR_String * mdb__browse__HeadVar__2_2);

static void MR_CALL 
mdb__browse__args_to_string_verbose_list_9_p_0(
  MR_Word mdb__browse__HeadVar__1_1,
  MR_Word mdb__browse__HeadVar__2_2,
  MR_Integer mdb__browse__HeadVar__3_3,
  MR_Integer mdb__browse__HeadVar__4_4,
  MR_Integer mdb__browse__CurSize_5,
  MR_Integer * mdb__browse__NewSize_6,
  MR_Integer mdb__browse__HeadVar__7_7,
  MR_Integer mdb__browse__HeadVar__8_8,
  MR_Word * mdb__browse__HeadVar__9_9);

static void MR_CALL 
mdb__browse__browser_term_to_string_verbose_2_8_p_0(
  MR_Word mdb__browse__BrowserDb_9,
  MR_Word mdb__browse__BrowserTerm_10,
  MR_Integer mdb__browse__MaxSize_11,
  MR_Integer mdb__browse__CurSize_12,
  MR_Integer * mdb__browse__NewSize_13,
  MR_Integer mdb__browse__MaxDepth_14,
  MR_Integer mdb__browse__CurDepth_15,
  MR_Word * mdb__browse__Frame_16);

static void MR_CALL 
mdb__browse__browser_term_to_string_verbose_7_p_0(
  MR_Word mdb__browse__BrowserDb_8,
  MR_Word mdb__browse__BrowserTerm_9,
  MR_Integer mdb__browse__MaxSize_10,
  MR_Integer mdb__browse__MaxDepth_11,
  MR_Integer mdb__browse__X_12,
  MR_Integer mdb__browse__Y_13,
  MR_String * mdb__browse__Str_14);

static MR_String MR_CALL 
mdb__browse__comma_string_list_1_f_0(
  MR_Word mdb__browse__Args_3);

static void MR_CALL 
mdb__browse__args_to_string_list_8_p_0(
  MR_Word mdb__browse__HeadVar__1_1,
  MR_Word mdb__browse__HeadVar__2_2,
  MR_Integer mdb__browse__HeadVar__3_3,
  MR_Integer mdb__browse__CurSize_4,
  MR_Integer * mdb__browse__NewSize_5,
  MR_Integer mdb__browse__HeadVar__6_6,
  MR_Integer mdb__browse__HeadVar__7_7,
  MR_Word * mdb__browse__Strs_8);

static void MR_CALL 
mdb__browse__list_tail_to_string_list_8_p_0(
  MR_Word mdb__browse__BrowserDb_9,
  MR_Word mdb__browse__TailUniv_10,
  MR_Integer mdb__browse__MaxSize_11,
  MR_Integer mdb__browse__Size0_12,
  MR_Integer * mdb__browse__Size_13,
  MR_Integer mdb__browse__MaxDepth_14,
  MR_Integer mdb__browse__Depth0_15,
  MR_Word * mdb__browse__TailStrs_16);

static void MR_CALL 
mdb__browse__browser_term_to_string_3_10_p_0(
  MR_Word mdb__browse__BrowserDb_11,
  MR_String mdb__browse__Functor_12,
  MR_Word mdb__browse__Args_13,
  MR_Word mdb__browse__MaybeReturn_14,
  MR_Integer mdb__browse__MaxSize_15,
  MR_Integer mdb__browse__Size0_16,
  MR_Integer * mdb__browse__Size_17,
  MR_Integer mdb__browse__MaxDepth_18,
  MR_Integer mdb__browse__Depth0_19,
  MR_String * mdb__browse__Str_20);

static void MR_CALL 
mdb__browse__browser_term_to_string_2_8_p_0(
  MR_Word mdb__browse__BrowserDb_9,
  MR_Word mdb__browse__BrowserTerm_10,
  MR_Integer mdb__browse__MaxSize_11,
  MR_Integer mdb__browse__CurSize_12,
  MR_Integer * mdb__browse__NewSize_13,
  MR_Integer mdb__browse__MaxDepth_14,
  MR_Integer mdb__browse__CurDepth_15,
  MR_String * mdb__browse__Str_16);

static void MR_CALL 
mdb__browse__browser_term_to_string_5_p_0(
  MR_Word mdb__browse__BrowserDb_6,
  MR_Word mdb__browse__BrowserTerm_7,
  MR_Integer mdb__browse__MaxSize_8,
  MR_Integer mdb__browse__MaxDepth_9,
  MR_String * mdb__browse__Str_10);

static void MR_CALL 
mdb__browse__report_deref_error_5_p_0(
  MR_Word mdb__browse__Debugger_6,
  MR_Word mdb__browse__OKPath_7,
  MR_Word mdb__browse__ErrorDir_8);

static void MR_CALL 
mdb__browse__write_univ_or_unbound_4_p_0(
  MR_Word mdb__browse__Stream_5,
  MR_Word mdb__browse__Univ_6);

static void MR_CALL 
mdb__browse__portray_pretty_5_p_0(
  MR_Word mdb__browse__Debugger_6,
  MR_Word mdb__browse__BrowserTerm_7,
  MR_Word mdb__browse__Params_8);

static void MR_CALL 
mdb__browse__portray_verbose_5_p_0(
  MR_Word mdb__browse__Debugger_6,
  MR_Word mdb__browse__BrowserTerm_7,
  MR_Word mdb__browse__Params_8);

static void MR_CALL 
mdb__browse__portray_flat_5_p_0_1(
  MR_Box mdb__browse__closure_arg,
  MR_Box mdb__browse__wrapper_arg_1,
  MR_Box mdb__browse__wrapper_arg_2,
  MR_Box * mdb__browse__wrapper_arg_3);

static void MR_CALL 
mdb__browse__portray_flat_5_p_0(
  MR_Word mdb__browse__Debugger_6,
  MR_Word mdb__browse__BrowserTerm_7,
  MR_Word mdb__browse__Params_8);

static void MR_CALL 
mdb__browse__portray_6_p_0(
  MR_Word mdb__browse__Debugger_7,
  MR_Word mdb__browse__Caller_8,
  MR_Word mdb__browse__MaybeFormat_9,
  MR_Word mdb__browse__Info_10);

static void MR_CALL 
mdb__browse__portray_maybe_path_7_p_0(
  MR_Word mdb__browse__Debugger_8,
  MR_Word mdb__browse__Caller_9,
  MR_Word mdb__browse__MaybeFormat_10,
  MR_Word mdb__browse__Info_11,
  MR_Word mdb__browse__MaybePath_12);

static void MR_CALL 
mdb__browse__help_3_p_0(
  MR_Word mdb__browse__Debugger_4);

static MR_bool MR_CALL 
mdb__browse__bool_format_option_is_true_2_p_0(
  MR_Word mdb__browse__HeadVar__1_1,
  MR_Word * mdb__browse__Format_3);

static MR_bool MR_CALL 
mdb__browse__interpret_format_options_2_p_0_1(
  MR_Box mdb__browse__closure_arg,
  MR_Box mdb__browse__wrapper_arg_1,
  MR_Box * mdb__browse__wrapper_arg_2);

static void MR_CALL 
mdb__browse__interpret_format_options_2_p_0(
  MR_Word mdb__browse__OptionTable_3,
  MR_Word * mdb__browse__MaybeMaybeFormat_4);

static void MR_CALL 
mdb__browse__get_value_representation_2_p_0(
  MR_Word mdb__browse__TypeInfo_for_T_6,
  MR_Box mdb__browse__HeadVar__1_1,
  MR_Integer * mdb__browse__HeadVar__2_2);

static void MR_CALL 
mdb__browse__do_print_memory_addr_5_p_0(
  MR_Word mdb__browse__Debugger_6,
  MR_Word mdb__browse__Info_7,
  MR_Word mdb__browse__MaybePath_8);

static void MR_CALL 
mdb__browse__do_portray_7_p_0(
  MR_Word mdb__browse__Debugger_8,
  MR_Word mdb__browse__CallerType_9,
  MR_Word mdb__browse__MaybeMaybeOptionTable_10,
  MR_Word mdb__browse__Info_11,
  MR_Word mdb__browse__MaybePath_12);

static void MR_CALL 
mdb__browse__run_command_7_p_0(
  MR_Word mdb__browse__Debugger_8,
  MR_Word mdb__browse__Command_9,
  MR_Word * mdb__browse__Quit_10,
  MR_Word mdb__browse__STATE_VARIABLE_Info_0_29,
  MR_Word * mdb__browse__STATE_VARIABLE_Info_30);

static void MR_CALL 
mdb__browse__browse_main_loop_5_p_0(
  MR_Word mdb__browse__Debugger_6,
  MR_Word mdb__browse__STATE_VARIABLE_Info_0_11,
  MR_Word * mdb__browse__STATE_VARIABLE_Info_12);

static void MR_CALL 
mdb__browse__browser_term_size_left_from_max_3_p_0_1(
  MR_Box mdb__browse__closure_arg,
  MR_Box mdb__browse__wrapper_arg_1,
  MR_Box mdb__browse__wrapper_arg_2,
  MR_Box * mdb__browse__wrapper_arg_3);

static void MR_CALL 
mdb__browse__term_size_left_from_max_3_p_0_1(
  MR_Box mdb__browse__closure_arg,
  MR_Box mdb__browse__wrapper_arg_1,
  MR_Box mdb__browse__wrapper_arg_2,
  MR_Box * mdb__browse__wrapper_arg_3);


static /* final */ const MR_Box mdb__browse_scalar_common_1[6][3];

static /* final */ const MR_Box mdb__browse_scalar_common_2[2][4];

static /* final */ const MR_Box mdb__browse_scalar_common_3[4][5];

static /* final */ const MR_Box mdb__browse_scalar_common_4[48][2];

static /* final */ const MR_Box mdb__browse_scalar_common_5[10][1];

static /* final */ const MR_Box mdb__browse_scalar_common_6[2][6];

static /* final */ const MR_Box mdb__browse_scalar_common_9[1][7];

static /* final */ const MR_Integer mdb__browse_scalar_common_10[1][2];


/* sealed */ struct mdb__browse__vector_common_type_7_0_s {
  const MR_String mdb__browse__vector_common_type_7_0__vct_7_f_0;
};

static /* final */ const struct mdb__browse__vector_common_type_7_0_s mdb__browse_vector_common_7[20];

/* sealed */ struct mdb__browse__vector_common_type_8_0_s {
  const MR_Word mdb__browse__vector_common_type_8_0__vct_8_f_0;
};

static /* final */ const struct mdb__browse__vector_common_type_8_0_s mdb__browse_vector_common_8[4];



static /* final */ const MR_Box mdb__browse_scalar_common_1[6][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdb__parse__mdb__parse__type_ctor_info_format_option_0)),
    ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_data_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__mdb__browser_info__debugger__arity0__io__state__arity0__)),
    ((MR_Box) (&mdb__browser_info__mdb__browser_info__type_ctor_info_debugger_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mdb__browse_scalar_common_6[0])),
    ((MR_Box) (mdb__browse__term_size_left_from_max_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mdb__browse_scalar_common_6[0])),
    ((MR_Box) (mdb__browse__browser_term_size_left_from_max_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mdb__browse_scalar_common_3[3])),
    ((MR_Box) (mdb__browse__interpret_format_options_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mdb__browse_scalar_common_2[2][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mdb__browse_scalar_common_1[1])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__mdb__browser_info__debugger__arity0__io__state__arity0__)),
    ((MR_Box) (&mdb__browse_scalar_common_1[2])),
    ((MR_Box) (&mdb__browser_info__mdb__browser_info__type_ctor_info_debugger_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mdb__browse_scalar_common_3[4][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mdb__browse_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mdb__browse_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__mdb__browser_info__debugger__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mdb__browse_scalar_common_2[1])),
    ((MR_Box) (&mdb__browser_info__mdb__browser_info__type_ctor_info_debugger_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdb__browse__pair__pti_pair_2__plain_mdb__parse__type_ctor_info_format_option_0__plain_getopt__type_ctor_info_option_data_0)),
    ((MR_Box) (&mdb__parse__mdb__parse__type_ctor_info_format_option_0))
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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_5[0]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[40])))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_5[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 43 */
  {
    ((MR_Box) ((MR_String) "+1")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 44 */
  {
    ((MR_Box) ((MR_String) "]")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 45 */
  {
    ((MR_Box) ((MR_String) ")")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 46 */
  {
    ((MR_Box) ((MR_String) ", ...")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 47 */
  {
    ((MR_Box) ((MR_String) "-")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box mdb__browse_scalar_common_5[10][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) ", "))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 2 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "error: inconsistent format options"))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "("))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) ")"))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) " = "))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) ""))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "."))
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
    ((MR_Box) (&mdb__browse_scalar_common_10[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__univ__univ__type_ctor_info_univ_0))
  },
};

static /* final */ const MR_Box mdb__browse_scalar_common_9[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__univ__univ__type_ctor_info_univ_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Integer mdb__browse_scalar_common_10[1][2] = {
  /* row 0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};


static /* final */ const struct mdb__browse__vector_common_type_7_0_s mdb__browse_vector_common_7[20] = {
  /* row 0 */   {     (MR_String) "r" },
  /* row 1 */   {     (MR_String) "res" },
  /* row 2 */   {     (MR_String) "result" },
  /* row 3 */   {     (MR_String) "ret" },
  /* row 4 */   {     (MR_String) "return" },
  /* row 5 */   {     (MR_String) "rv" },
  /* row 6 */   {     (MR_String) "!." },
  /* row 7 */   {     (MR_String) "." },
  /* row 8 */   {     (MR_String) ".." },
  /* row 9 */   {     (MR_String) "=.." },
  /* row 10 */   {     (MR_String) "r" },
  /* row 11 */   {     (MR_String) "res" },
  /* row 12 */   {     (MR_String) "result" },
  /* row 13 */   {     (MR_String) "ret" },
  /* row 14 */   {     (MR_String) "return" },
  /* row 15 */   {     (MR_String) "rv" },
  /* row 16 */   {     (MR_String) "Input" },
  /* row 17 */   {     (MR_String) "Output" },
  /* row 18 */   {     (MR_String) "Unbound" },
  /* row 19 */   {     (MR_String) "Not Applicable" },
};

static /* final */ const struct mdb__browse__vector_common_type_8_0_s mdb__browse_vector_common_8[4] = {
  /* row 0 */   {     (MR_Integer) 0 },
  /* row 1 */   {     (MR_Integer) 1 },
  /* row 2 */   {     (MR_Integer) 2 },
  /* row 3 */   {     (MR_Integer) 3 },
};


#include "io.mh"
#include "mdb.mh"
#include "string.mh"
#include "time.mh"
#include "mdb.browse.mh"
#include "mdbcomp.rtti_access.mh"

#line 203 "browse.m"
void 
ML_BROWSE_browse_browser_term(
  MR_Word mdb__browse__Term_9,
  MR_Word mdb__browse__InputStream_10,
  MR_Word mdb__browse__OutputStream_11,
  MR_Word * mdb__browse__MaybeTrack_12,
  MR_Word mdb__browse__STATE_VARIABLE_State_0_15,
  MR_Word * mdb__browse__STATE_VARIABLE_State_16)
#line 203 "browse.m"
{
#line 203 "browse.m"
	mdb__browse__browse_browser_term_no_modes_8_p_0((MR_Word) mdb__browse__Term_9, (MR_Word) mdb__browse__InputStream_10, (MR_Word) mdb__browse__OutputStream_11, (MR_Word *) mdb__browse__MaybeTrack_12, (MR_Word) mdb__browse__STATE_VARIABLE_State_0_15, (MR_Word *) mdb__browse__STATE_VARIABLE_State_16);
}

#line 206 "browse.m"
void 
ML_BROWSE_browse_browser_term_format(
  MR_Word mdb__browse__Term_9,
  MR_Word mdb__browse__InputStream_10,
  MR_Word mdb__browse__OutputStream_11,
  MR_Word mdb__browse__Format_12,
  MR_Word mdb__browse__STATE_VARIABLE_State_0_16,
  MR_Word * mdb__browse__STATE_VARIABLE_State_17)
#line 206 "browse.m"
{
#line 206 "browse.m"
	mdb__browse__browse_browser_term_format_no_modes_8_p_0((MR_Word) mdb__browse__Term_9, (MR_Word) mdb__browse__InputStream_10, (MR_Word) mdb__browse__OutputStream_11, (MR_Word) mdb__browse__Format_12, (MR_Word) mdb__browse__STATE_VARIABLE_State_0_16, (MR_Word *) mdb__browse__STATE_VARIABLE_State_17);
}

#line 209 "browse.m"
void 
ML_BROWSE_browse_external(
  MR_Word mdb__browse__TypeInfo_for_T_25,
  MR_Word mdb__browse__Term_8,
  MR_Word mdb__browse__InputStream_9,
  MR_Word mdb__browse__OutputStream_10,
  MR_Word mdb__browse__STATE_VARIABLE_State_0_14,
  MR_Word * mdb__browse__STATE_VARIABLE_State_15)
#line 209 "browse.m"
{
#line 209 "browse.m"
	mdb__browse__browse_external_no_modes_7_p_0((MR_Word) mdb__browse__TypeInfo_for_T_25, (MR_Box) mdb__browse__Term_8, (MR_Word) mdb__browse__InputStream_9, (MR_Word) mdb__browse__OutputStream_10, (MR_Word) mdb__browse__STATE_VARIABLE_State_0_14, (MR_Word *) mdb__browse__STATE_VARIABLE_State_15);
}

#line 212 "browse.m"
void 
ML_BROWSE_print_browser_term(
  MR_Word mdb__browse__Term_7,
  MR_Word mdb__browse__OutputStream_8,
  MR_Word mdb__browse__Caller_9,
  MR_Word mdb__browse__State_10)
#line 212 "browse.m"
{
#line 212 "browse.m"
	mdb__browse__print_browser_term_6_p_0((MR_Word) mdb__browse__Term_7, (MR_Word) mdb__browse__OutputStream_8, (MR_Word) mdb__browse__Caller_9, (MR_Word) mdb__browse__State_10);
}

#line 214 "browse.m"
void 
ML_BROWSE_print_browser_term_format(
  MR_Word mdb__browse__Term_8,
  MR_Word mdb__browse__OutputStream_9,
  MR_Word mdb__browse__Caller_10,
  MR_Word mdb__browse__Format_11,
  MR_Word mdb__browse__State_12)
#line 214 "browse.m"
{
#line 214 "browse.m"
	mdb__browse__print_browser_term_format_7_p_0((MR_Word) mdb__browse__Term_8, (MR_Word) mdb__browse__OutputStream_9, (MR_Word) mdb__browse__Caller_10, (MR_Word) mdb__browse__Format_11, (MR_Word) mdb__browse__State_12);
}

#line 218 "browse.m"
void 
ML_BROWSE_save_term_to_file(
  MR_String mdb__browse__FileName_7,
  MR_String mdb__browse___Format_8,
  MR_Word mdb__browse__BrowserTerm_9,
  MR_Word mdb__browse__OutStream_10)
#line 218 "browse.m"
{
#line 218 "browse.m"
	mdb__browse__save_term_to_file_6_p_0((MR_String) mdb__browse__FileName_7, (MR_String) mdb__browse___Format_8, (MR_Word) mdb__browse__BrowserTerm_9, (MR_Word) mdb__browse__OutStream_10);
}

#line 221 "browse.m"
void 
ML_BROWSE_save_term_to_file_xml(
  MR_String mdb__browse__FileName_6,
  MR_Word mdb__browse__BrowserTerm_7,
  MR_Word mdb__browse__OutStream_8)
#line 221 "browse.m"
{
#line 221 "browse.m"
	mdb__browse__save_term_to_file_xml_5_p_0((MR_String) mdb__browse__FileName_6, (MR_Word) mdb__browse__BrowserTerm_7, (MR_Word) mdb__browse__OutStream_8);
}

#line 224 "browse.m"
void 
ML_BROWSE_browse_term_xml(
  MR_Word mdb__browse__Term_7,
  MR_Word mdb__browse__OutStream_8,
  MR_Word mdb__browse__ErrStream_9,
  MR_Word mdb__browse__State_10)
#line 224 "browse.m"
{
#line 224 "browse.m"
	mdb__browse__save_and_browse_browser_term_xml_6_p_0((MR_Word) mdb__browse__Term_7, (MR_Word) mdb__browse__OutStream_8, (MR_Word) mdb__browse__ErrStream_9, (MR_Word) mdb__browse__State_10);
}


static const MR_FA_PseudoTypeInfo_Struct2 mdb__browse__pair__pti_pair_2__plain_mdb__parse__type_ctor_info_format_option_0__plain_getopt__type_ctor_info_option_data_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mdb__parse__mdb__parse__type_ctor_info_format_option_0,
    (MR_PseudoTypeInfo) &mercury__getopt__getopt__type_ctor_info_option_data_0
  }
};

static const MR_PseudoTypeInfo mdb__browse__mdb__browse__field_types_deref_result_1_0[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

static const MR_DuFunctorDesc mdb__browse__mdb__browse__du_functor_desc_deref_result_1_0 = {
  (MR_String) "deref_result",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__browse__mdb__browse__field_types_deref_result_1_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_TypeInfo_Struct1 mdb__browse__list__ti_list_1mdb__browser_info__type_ctor_info_down_dir_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_down_dir_0
  }
};

static const MR_PseudoTypeInfo mdb__browse__mdb__browse__field_types_deref_result_1_1[2] = {
  (MR_PseudoTypeInfo) &mdb__browse__list__ti_list_1mdb__browser_info__type_ctor_info_down_dir_0,
  (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_down_dir_0
};

static const MR_DuFunctorDesc mdb__browse__mdb__browse__du_functor_desc_deref_result_1_1 = {
  (MR_String) "deref_error",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdb__browse__mdb__browse__field_types_deref_result_1_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__browse__mdb__browse__du_stag_ordered_deref_result_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__browse__mdb__browse__du_stag_ordered_deref_result_1_1
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
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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
  mercury__private_builtin__MR_TYPECTOR_REP_DUMMY,
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
    (MR_TypeInfo) &mercury__univ__univ__type_ctor_info_univ_0
  }
};

static const MR_PseudoTypeInfo mdb__browse__mdb__browse__field_types_xml_function_wrapper_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mdb__browse__list__ti_list_1univ__type_ctor_info_univ_0,
  (MR_PseudoTypeInfo) &mercury__univ__univ__type_ctor_info_univ_0
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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__browse__mdb__browse__field_types_xml_function_wrapper_0_0,
  mdb__browse__mdb__browse__field_names_xml_function_wrapper_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mdb__browse__mdb__browse__du_stag_ordered_xml_function_wrapper_0_0[1] = {
  &mdb__browse__mdb__browse__du_functor_desc_xml_function_wrapper_0_0
};

static const MR_DuPtagLayout mdb__browse__mdb__browse__du_ptag_ordered_xml_function_wrapper_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__browse__mdb__browse__du_stag_ordered_xml_function_wrapper_0_0
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
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mdb__browse__list__ti_list_1univ__type_ctor_info_univ_0
};

static const MR_ConstString mdb__browse__mdb__browse__field_names_xml_predicate_wrapper_0_0[2] = {
  (MR_String) "predicate_name",
  (MR_String) "predicate_arguments"
};

static const MR_DuFunctorDesc mdb__browse__mdb__browse__du_functor_desc_xml_predicate_wrapper_0_0 = {
  (MR_String) "predicate",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__browse__mdb__browse__field_types_xml_predicate_wrapper_0_0,
  mdb__browse__mdb__browse__field_names_xml_predicate_wrapper_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mdb__browse__mdb__browse__du_stag_ordered_xml_predicate_wrapper_0_0[1] = {
  &mdb__browse__mdb__browse__du_functor_desc_xml_predicate_wrapper_0_0
};

static const MR_DuPtagLayout mdb__browse__mdb__browse__du_ptag_ordered_xml_predicate_wrapper_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__browse__mdb__browse__du_stag_ordered_xml_predicate_wrapper_0_0
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
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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

static MR_bool MR_CALL 
mdb__browse____Unify____deref_result_1_0_10001(
  MR_Box mdb__browse__wrapper_arg_1,
  MR_Box mdb__browse__wrapper_arg_2,
  MR_Box mdb__browse__wrapper_arg_3)
{
  {
    MR_bool mdb__browse__succeeded;

    {
      mdb__browse__succeeded = mdb__browse____Unify____deref_result_1_0(((MR_Word) mdb__browse__wrapper_arg_1), ((MR_Word) mdb__browse__wrapper_arg_2), ((MR_Word) mdb__browse__wrapper_arg_3));
    }
    return mdb__browse__succeeded;
  }
}

static void MR_CALL 
mdb__browse____Compare____deref_result_1_0_10001(
  MR_Box mdb__browse__wrapper_arg_1,
  MR_Box * mdb__browse__wrapper_arg_2,
  MR_Box mdb__browse__wrapper_arg_3,
  MR_Box mdb__browse__wrapper_arg_4)
{
  {
    MR_Word mdb__browse__conv0_HeadVar__1_1;

    {
      mdb__browse____Compare____deref_result_1_0(((MR_Word) mdb__browse__wrapper_arg_1), &mdb__browse__conv0_HeadVar__1_1, ((MR_Word) mdb__browse__wrapper_arg_3), ((MR_Word) mdb__browse__wrapper_arg_4));
    }
    *mdb__browse__wrapper_arg_2 = ((MR_Box) (mdb__browse__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__browse____Unify____unbound_0_0_10001(
  MR_Box mdb__browse__wrapper_arg_1,
  MR_Box mdb__browse__wrapper_arg_2)
{
  {
    MR_bool mdb__browse__succeeded;

    {
      mdb__browse__succeeded = mdb__browse____Unify____unbound_0_0();
    }
    return mdb__browse__succeeded;
  }
}

static void MR_CALL 
mdb__browse____Compare____unbound_0_0_10001(
  MR_Box * mdb__browse__wrapper_arg_1,
  MR_Box mdb__browse__wrapper_arg_2,
  MR_Box mdb__browse__wrapper_arg_3)
{
  {
    MR_Word mdb__browse__conv0_HeadVar__1_1;

    {
      mdb__browse____Compare____unbound_0_0(&mdb__browse__conv0_HeadVar__1_1);
    }
    *mdb__browse__wrapper_arg_1 = ((MR_Box) (mdb__browse__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__browse____Unify____xml_function_wrapper_0_0_10001(
  MR_Box mdb__browse__wrapper_arg_1,
  MR_Box mdb__browse__wrapper_arg_2)
{
  {
    MR_bool mdb__browse__succeeded;

    {
      mdb__browse__succeeded = mdb__browse____Unify____xml_function_wrapper_0_0(((MR_Word) mdb__browse__wrapper_arg_1), ((MR_Word) mdb__browse__wrapper_arg_2));
    }
    return mdb__browse__succeeded;
  }
}

static void MR_CALL 
mdb__browse____Compare____xml_function_wrapper_0_0_10001(
  MR_Box * mdb__browse__wrapper_arg_1,
  MR_Box mdb__browse__wrapper_arg_2,
  MR_Box mdb__browse__wrapper_arg_3)
{
  {
    MR_Word mdb__browse__conv0_HeadVar__1_1;

    {
      mdb__browse____Compare____xml_function_wrapper_0_0(&mdb__browse__conv0_HeadVar__1_1, ((MR_Word) mdb__browse__wrapper_arg_2), ((MR_Word) mdb__browse__wrapper_arg_3));
    }
    *mdb__browse__wrapper_arg_1 = ((MR_Box) (mdb__browse__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__browse____Unify____xml_predicate_wrapper_0_0_10001(
  MR_Box mdb__browse__wrapper_arg_1,
  MR_Box mdb__browse__wrapper_arg_2)
{
  {
    MR_bool mdb__browse__succeeded;

    {
      mdb__browse__succeeded = mdb__browse____Unify____xml_predicate_wrapper_0_0(((MR_Word) mdb__browse__wrapper_arg_1), ((MR_Word) mdb__browse__wrapper_arg_2));
    }
    return mdb__browse__succeeded;
  }
}

static void MR_CALL 
mdb__browse____Compare____xml_predicate_wrapper_0_0_10001(
  MR_Box * mdb__browse__wrapper_arg_1,
  MR_Box mdb__browse__wrapper_arg_2,
  MR_Box mdb__browse__wrapper_arg_3)
{
  {
    MR_Word mdb__browse__conv0_HeadVar__1_1;

    {
      mdb__browse____Compare____xml_predicate_wrapper_0_0(&mdb__browse__conv0_HeadVar__1_1, ((MR_Word) mdb__browse__wrapper_arg_2), ((MR_Word) mdb__browse__wrapper_arg_3));
    }
    *mdb__browse__wrapper_arg_1 = ((MR_Box) (mdb__browse__conv0_HeadVar__1_1));
  }
}

void MR_CALL 
mdb__browse__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_100_98_95_95_98_114_111_119_115_101_95_95_117_110_98_111_117_110_100_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
  MR_Word * mdb__browse__HeadVar__1_1)
{
  {
    MR_bool mdb__browse__succeeded;

    *mdb__browse__HeadVar__1_1 = (MR_Integer) 0;
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
mdb__browse__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_118_97_108_117_101_95_114_101_112_114_101_115_101_110_116_97_116_105_111_110_95_95_91_49_93_95_48_2_p_0(
  MR_Box mdb__browse__HeadVar__1_1,
  MR_Integer * mdb__browse__HeadVar__2_2)
{
  {
    MR_bool mdb__browse__succeeded;
    MR_Word mdb__browse__TypeInfo_for_T_7;

{
#define MR_PROC_LABEL mdb__browse__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_118_97_108_117_101_95_114_101_112_114_101_115_101_110_116_97_116_105_111_110_95_95_91_49_93_95_48_2_p_0

	MR_Word Value;
	MR_Integer Addr;

	Value = (MR_Word) mdb__browse__HeadVar__1_1 ;
		{

    Addr = (MR_Integer) Value;


		;}
#undef MR_PROC_LABEL
	 *mdb__browse__HeadVar__2_2  = Addr;
}
  }
}

void MR_CALL 
mdb__browse__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_118_101_95_116_101_114_109_95_116_111_95_102_105_108_101_95_95_91_50_93_95_48_6_p_0(
  MR_String mdb__browse__FileName_7,
  MR_Word mdb__browse__BrowserTerm_9,
  MR_Word mdb__browse__OutStream_10)
{
  {
    MR_bool mdb__browse__succeeded;
    MR_Word mdb__browse__FileStreamRes_13;

    {
      mercury__io__tell_4_p_0(mdb__browse__FileName_7, &mdb__browse__FileStreamRes_13);
    }
    if ((mdb__browse__FileStreamRes_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        if (((MR_tag((MR_Word) mdb__browse__BrowserTerm_9)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_Word mdb__browse__Term_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__BrowserTerm_9, (MR_Integer) 0)));

            {
              mdb__browse__save_univ_4_p_0((MR_Integer) 0, mdb__browse__Term_14);
            }
            {
              mercury__io__nl_2_p_0();
            }
          }
        else
          {
            MR_String mdb__browse__Functor_15 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browse__BrowserTerm_9, (MR_Integer) 0)));
            MR_Word mdb__browse__Args_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__BrowserTerm_9, (MR_Integer) 1)));
            MR_Word mdb__browse__MaybeRes_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__BrowserTerm_9, (MR_Integer) 2)));

            {
              mercury__io__write_string_3_p_0(mdb__browse__Functor_15);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "(\n");
            }
            {
              mdb__browse__save_args_4_p_0((MR_Integer) 1, mdb__browse__Args_16);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "\n)\n");
            }
            if ((mdb__browse__MaybeRes_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
              }
            else
              {
                MR_Word mdb__browse__Result_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__MaybeRes_17, (MR_Integer) 0)));

                {
                  mercury__io__write_string_3_p_0((MR_String) "=\n");
                }
                {
                  mdb__browse__save_univ_4_p_0((MR_Integer) 1, mdb__browse__Result_18);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) "\n");
                }
              }
          }
        {
          mercury__io__told_2_p_0();
        }
      }
    else
      {
        MR_Word mdb__browse__Error_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__FileStreamRes_13, (MR_Integer) 0)));
        MR_String mdb__browse__Msg_20;

        {
          mercury__io__error_message_2_p_0(mdb__browse__Error_19, &mdb__browse__Msg_20);
        }
        {
          mercury__io__write_string_4_p_0(mdb__browse__OutStream_10, mdb__browse__Msg_20);
        }
      }
  }
}

static void MR_CALL 
mdb__browse____Compare____xml_predicate_wrapper_0_0(
  MR_Word * mdb__browse__HeadVar__1_1,
  MR_Word mdb__browse__HeadVar__2_2,
  MR_Word mdb__browse__HeadVar__3_3)
{
  {
    MR_bool mdb__browse__succeeded;
    MR_Integer mdb__browse__CastX_9 = (MR_Integer) mdb__browse__HeadVar__2_2;
    MR_Integer mdb__browse__CastY_10 = (MR_Integer) mdb__browse__HeadVar__3_3;

    mdb__browse__succeeded = (mdb__browse__CastX_9 == mdb__browse__CastY_10);
    if (mdb__browse__succeeded)
      *mdb__browse__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_String mdb__browse__Var_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__browse__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mdb__browse__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__HeadVar__2_2, (MR_Integer) 1)));
        MR_String mdb__browse__Var_6 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__browse__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word mdb__browse__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word mdb__browse__Var_8;

        {
          mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__browse__Var_8, mdb__browse__Var_4, mdb__browse__Var_6);
        }
        mdb__browse__succeeded = (mdb__browse__Var_8 == (MR_Integer) 0);
        mdb__browse__succeeded = !(mdb__browse__succeeded);
        if (mdb__browse__succeeded)
          *mdb__browse__HeadVar__1_1 = mdb__browse__Var_8;
        else
          {
            {
              mercury__builtin__compare_3_p_0((MR_Word) &mdb__browse_scalar_common_4[1], mdb__browse__HeadVar__1_1, ((MR_Box) (mdb__browse__Var_5)), ((MR_Box) (mdb__browse__Var_7)));
            }
          }
      }
  }
}

static MR_bool MR_CALL 
mdb__browse____Unify____xml_predicate_wrapper_0_0(
  MR_Word mdb__browse__HeadVar__1_1,
  MR_Word mdb__browse__HeadVar__2_2)
{
  {
    MR_bool mdb__browse__succeeded;
    MR_Integer mdb__browse__CastX_7 = (MR_Integer) mdb__browse__HeadVar__1_1;
    MR_Integer mdb__browse__CastY_8 = (MR_Integer) mdb__browse__HeadVar__2_2;

    mdb__browse__succeeded = (mdb__browse__CastX_7 == mdb__browse__CastY_8);
    if (mdb__browse__succeeded)
      mdb__browse__succeeded = MR_TRUE;
    else
      {
        MR_Word mdb__browse__TypeInfo_9_9;
        MR_String mdb__browse__Var_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__browse__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mdb__browse__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__HeadVar__1_1, (MR_Integer) 1)));
        MR_String mdb__browse__Var_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__browse__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mdb__browse__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__HeadVar__2_2, (MR_Integer) 1)));

        mdb__browse__succeeded = (strcmp(mdb__browse__Var_3, mdb__browse__Var_5) == 0);
        if (mdb__browse__succeeded)
          {
            mdb__browse__TypeInfo_9_9 = (MR_Word) &mdb__browse_scalar_common_4[1];
            {
              mdb__browse__succeeded = mercury__builtin__unify_2_p_0(mdb__browse__TypeInfo_9_9, ((MR_Box) (mdb__browse__Var_4)), ((MR_Box) (mdb__browse__Var_6)));
            }
          }
      }
    return mdb__browse__succeeded;
  }
}

static void MR_CALL 
mdb__browse____Compare____xml_function_wrapper_0_0(
  MR_Word * mdb__browse__HeadVar__1_1,
  MR_Word mdb__browse__HeadVar__2_2,
  MR_Word mdb__browse__HeadVar__3_3)
{
  {
    MR_bool mdb__browse__succeeded;
    MR_Integer mdb__browse__CastX_12 = (MR_Integer) mdb__browse__HeadVar__2_2;
    MR_Integer mdb__browse__CastY_13 = (MR_Integer) mdb__browse__HeadVar__3_3;

    mdb__browse__succeeded = (mdb__browse__CastX_12 == mdb__browse__CastY_13);
    if (mdb__browse__succeeded)
      *mdb__browse__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_String mdb__browse__Var_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__browse__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mdb__browse__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mdb__browse__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__HeadVar__2_2, (MR_Integer) 2)));
        MR_String mdb__browse__Var_7 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__browse__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word mdb__browse__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word mdb__browse__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word mdb__browse__Var_10;

        {
          mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__browse__Var_10, mdb__browse__Var_4, mdb__browse__Var_7);
        }
        mdb__browse__succeeded = (mdb__browse__Var_10 == (MR_Integer) 0);
        mdb__browse__succeeded = !(mdb__browse__succeeded);
        if (mdb__browse__succeeded)
          *mdb__browse__HeadVar__1_1 = mdb__browse__Var_10;
        else
          {
            MR_Word mdb__browse__Var_11;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &mdb__browse_scalar_common_4[1], &mdb__browse__Var_11, ((MR_Box) (mdb__browse__Var_5)), ((MR_Box) (mdb__browse__Var_8)));
            }
            mdb__browse__succeeded = (mdb__browse__Var_11 == (MR_Integer) 0);
            mdb__browse__succeeded = !(mdb__browse__succeeded);
            if (mdb__browse__succeeded)
              *mdb__browse__HeadVar__1_1 = mdb__browse__Var_11;
            else
              {
                mercury__univ____Compare____univ_0_0(mdb__browse__HeadVar__1_1, mdb__browse__Var_6, mdb__browse__Var_9);
              }
          }
      }
  }
}

static MR_bool MR_CALL 
mdb__browse____Unify____xml_function_wrapper_0_0(
  MR_Word mdb__browse__HeadVar__1_1,
  MR_Word mdb__browse__HeadVar__2_2)
{
  {
    MR_bool mdb__browse__succeeded;
    MR_Integer mdb__browse__CastX_9 = (MR_Integer) mdb__browse__HeadVar__1_1;
    MR_Integer mdb__browse__CastY_10 = (MR_Integer) mdb__browse__HeadVar__2_2;

    mdb__browse__succeeded = (mdb__browse__CastX_9 == mdb__browse__CastY_10);
    if (mdb__browse__succeeded)
      mdb__browse__succeeded = MR_TRUE;
    else
      {
        MR_Word mdb__browse__TypeInfo_11_11;
        MR_String mdb__browse__Var_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__browse__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mdb__browse__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mdb__browse__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__HeadVar__1_1, (MR_Integer) 2)));
        MR_String mdb__browse__Var_6 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__browse__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mdb__browse__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mdb__browse__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__HeadVar__2_2, (MR_Integer) 2)));

        mdb__browse__succeeded = (strcmp(mdb__browse__Var_3, mdb__browse__Var_6) == 0);
        if (mdb__browse__succeeded)
          {
            mdb__browse__TypeInfo_11_11 = (MR_Word) &mdb__browse_scalar_common_4[1];
            {
              mdb__browse__succeeded = mercury__builtin__unify_2_p_0(mdb__browse__TypeInfo_11_11, ((MR_Box) (mdb__browse__Var_4)), ((MR_Box) (mdb__browse__Var_7)));
            }
            if (mdb__browse__succeeded)
              {
                mdb__browse__succeeded = mercury__univ____Unify____univ_0_0(mdb__browse__Var_5, mdb__browse__Var_8);
              }
          }
      }
    return mdb__browse__succeeded;
  }
}

void MR_CALL 
mdb__browse____Compare____unbound_0_0(
  MR_Word * mdb__browse__HeadVar__1_1)
{
  {
    MR_bool mdb__browse__succeeded;

    {
      mdb__browse__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_100_98_95_95_98_114_111_119_115_101_95_95_117_110_98_111_117_110_100_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(mdb__browse__HeadVar__1_1);
    }
  }
}

MR_bool MR_CALL 
mdb__browse____Unify____unbound_0_0(void)
{
  {
    MR_bool mdb__browse__succeeded;

    {
      mdb__browse__succeeded = mdb__browse__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_109_100_98_95_95_98_114_111_119_115_101_95_95_117_110_98_111_117_110_100_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0();
    }
    return mdb__browse__succeeded;
  }
}

static void MR_CALL 
mdb__browse____Compare____deref_result_1_0(
  MR_Word mdb__browse__TypeInfo_for_T_19,
  MR_Word * mdb__browse__HeadVar__1_1,
  MR_Word mdb__browse__HeadVar__2_2,
  MR_Word mdb__browse__HeadVar__3_3)
{
  {
    MR_bool mdb__browse__succeeded;
    MR_Integer mdb__browse__CastX_17 = (MR_Integer) mdb__browse__HeadVar__2_2;
    MR_Integer mdb__browse__CastY_18 = (MR_Integer) mdb__browse__HeadVar__3_3;

    mdb__browse__succeeded = (mdb__browse__CastX_17 == mdb__browse__CastY_18);
    if (mdb__browse__succeeded)
      *mdb__browse__HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) mdb__browse__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word mdb__browse__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mdb__browse__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) mdb__browse__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word mdb__browse__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word mdb__browse__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word mdb__browse__Var_16;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &mdb__browse_scalar_common_4[0], &mdb__browse__Var_16, ((MR_Box) (mdb__browse__Var_23)), ((MR_Box) (mdb__browse__Var_14)));
            }
            mdb__browse__succeeded = (mdb__browse__Var_16 == (MR_Integer) 0);
            mdb__browse__succeeded = !(mdb__browse__succeeded);
            if (mdb__browse__succeeded)
              *mdb__browse__HeadVar__1_1 = mdb__browse__Var_16;
            else
              {
                mdb__browser_info____Compare____down_dir_0_0(mdb__browse__HeadVar__1_1, mdb__browse__Var_22, mdb__browse__Var_15);
              }
          }
        else
          *mdb__browse__HeadVar__1_1 = (MR_Integer) 2;
      }
    else
      {
        MR_Box mdb__browse__Var_24 = (MR_hl_field(MR_mktag(0), mdb__browse__HeadVar__2_2, (MR_Integer) 0));

        if (((MR_tag((MR_Word) mdb__browse__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
          *mdb__browse__HeadVar__1_1 = (MR_Integer) 1;
        else
          {
            MR_Box mdb__browse__Var_5 = (MR_hl_field(MR_mktag(0), mdb__browse__HeadVar__3_3, (MR_Integer) 0));

            {
              mercury__builtin__compare_3_p_0(mdb__browse__TypeInfo_for_T_19, mdb__browse__HeadVar__1_1, mdb__browse__Var_24, mdb__browse__Var_5);
            }
          }
      }
  }
}

static MR_bool MR_CALL 
mdb__browse____Unify____deref_result_1_0(
  MR_Word mdb__browse__TypeInfo_for_T_11,
  MR_Word mdb__browse__HeadVar__1_1,
  MR_Word mdb__browse__HeadVar__2_2)
{
  {
    MR_bool mdb__browse__succeeded;
    MR_Integer mdb__browse__CastX_9 = (MR_Integer) mdb__browse__HeadVar__1_1;
    MR_Integer mdb__browse__CastY_10 = (MR_Integer) mdb__browse__HeadVar__2_2;

    mdb__browse__succeeded = (mdb__browse__CastX_9 == mdb__browse__CastY_10);
    if (mdb__browse__succeeded)
      mdb__browse__succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) mdb__browse__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word mdb__browse__TypeInfo_12_12;
        MR_Word mdb__browse__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mdb__browse__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mdb__browse__Var_7;
        MR_Word mdb__browse__Var_8;

        mdb__browse__succeeded = ((MR_tag((MR_Word) mdb__browse__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (mdb__browse__succeeded)
          {
            mdb__browse__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__HeadVar__2_2, (MR_Integer) 0)));
            mdb__browse__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__HeadVar__2_2, (MR_Integer) 1)));
            mdb__browse__TypeInfo_12_12 = (MR_Word) &mdb__browse_scalar_common_4[0];
            {
              mdb__browse__succeeded = mercury__builtin__unify_2_p_0(mdb__browse__TypeInfo_12_12, ((MR_Box) (mdb__browse__Var_5)), ((MR_Box) (mdb__browse__Var_7)));
            }
            if (mdb__browse__succeeded)
              {
                mdb__browse__succeeded = mdb__browser_info____Unify____down_dir_0_0(mdb__browse__Var_6, mdb__browse__Var_8);
              }
          }
      }
    else
      {
        MR_Box mdb__browse__Var_3 = (MR_hl_field(MR_mktag(0), mdb__browse__HeadVar__1_1, (MR_Integer) 0));
        MR_Box mdb__browse__Var_4;

        mdb__browse__succeeded = ((MR_tag((MR_Word) mdb__browse__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
        if (mdb__browse__succeeded)
          {
            mdb__browse__Var_4 = (MR_hl_field(MR_mktag(0), mdb__browse__HeadVar__2_2, (MR_Integer) 0));
            {
              mdb__browse__succeeded = mercury__builtin__unify_2_p_0(mdb__browse__TypeInfo_for_T_11, mdb__browse__Var_3, mdb__browse__Var_4);
            }
          }
      }
    return mdb__browse__succeeded;
  }
}

static MR_Word MR_CALL 
mdb__browse__qualified_functor_to_doc_1_f_0(
  MR_Word mdb__browse__HeadVar__1_1)
{
  {
    MR_bool mdb__browse__succeeded;
    MR_Word mdb__browse__HeadVar__2_2;

    if ((mdb__browse__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        mdb__browse__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_5[8]);
      }
    else
      {
        MR_Word mdb__browse__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__HeadVar__1_1, (MR_Integer) 1)));
        MR_String mdb__browse__Var_22 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browse__HeadVar__1_1, (MR_Integer) 0)));

        if ((mdb__browse__Var_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_String mdb__browse__Var_6;

            {
              mdb__browse__Var_6 = mercury__term_io__quoted_atom_1_f_0(mdb__browse__Var_22);
            }
            {
              mdb__browse__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mdb__browse__HeadVar__2_2, 0) = ((MR_Box) (mdb__browse__Var_6));
            }
          }
        else
          {
            MR_Word mdb__browse__Var_11;
            MR_Word mdb__browse__Var_12;
            MR_String mdb__browse__Var_13;
            MR_Word mdb__browse__Var_14;
            MR_Word mdb__browse__Var_17;
            MR_Word mdb__browse__Var_18;

            {
              mdb__browse__Var_13 = mercury__term_io__quoted_atom_1_f_0(mdb__browse__Var_22);
            }
            {
              mdb__browse__Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mdb__browse__Var_12, 0) = ((MR_Box) (mdb__browse__Var_13));
            }
            {
              mdb__browse__Var_18 = mdb__browse__qualified_functor_to_doc_1_f_0(mdb__browse__Var_21);
            }
            {
              mdb__browse__Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mdb__browse__Var_17, 0) = ((MR_Box) (mdb__browse__Var_18));
              MR_hl_field(MR_mktag(1), mdb__browse__Var_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              mdb__browse__Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mdb__browse__Var_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_5[9])));
              MR_hl_field(MR_mktag(1), mdb__browse__Var_14, 1) = ((MR_Box) (mdb__browse__Var_17));
            }
            {
              mdb__browse__Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mdb__browse__Var_11, 0) = ((MR_Box) (mdb__browse__Var_12));
              MR_hl_field(MR_mktag(1), mdb__browse__Var_11, 1) = ((MR_Box) (mdb__browse__Var_14));
            }
            {
              mdb__browse__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), mdb__browse__HeadVar__2_2, 0) = ((MR_Box) (mdb__browse__Var_11));
            }
          }
      }
    return mdb__browse__HeadVar__2_2;
  }
}

static void MR_CALL 
mdb__browse__write_term_mode_debugger_5_p_0(
  MR_Word mdb__browse__Debugger_6,
  MR_Word mdb__browse__MaybeModeFunc_7,
  MR_Word mdb__browse__Dirs_8)
{
  {
    MR_bool mdb__browse__succeeded;

    if ((mdb__browse__MaybeModeFunc_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mdb__browser_info__write_string_debugger_4_p_0(mdb__browse__Debugger_6, (MR_String) "Mode information not available.\n");
        }
      }
    else
      {
        MR_Word mdb__browse__ModeFunc_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__MaybeModeFunc_7, (MR_Integer) 0)));
        MR_Word mdb__browse__Mode_11;
        MR_String mdb__browse__ModeStr_12;
        MR_String mdb__browse__Var_17;
        MR_Box MR_CALL (* mdb__browse__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mdb__browse__ModeFunc_10, (MR_Integer) 1)));
        MR_Box mdb__browse__conv1_Mode_11;

        {
          mdb__browse__conv1_Mode_11 = mdb__browse__func_0(((MR_Box) mdb__browse__ModeFunc_10), ((MR_Box) (mdb__browse__Dirs_8)));
        }
        mdb__browse__Mode_11 = ((MR_Word) mdb__browse__conv1_Mode_11);
        mdb__browse__ModeStr_12 = ((&mdb__browse_vector_common_7[16 + mdb__browse__Mode_11]))->mdb__browse__vector_common_type_7_0__vct_7_f_0;
        {
          mdb__browse__Var_17 = mercury__string__f_43_43_2_f_0(mdb__browse__ModeStr_12, (MR_String) "\n");
        }
        {
          mdb__browser_info__write_string_debugger_4_p_0(mdb__browse__Debugger_6, mdb__browse__Var_17);
        }
      }
  }
}

static MR_String MR_CALL 
mdb__browse__down_dirs_to_string_1_f_0(
  MR_Word mdb__browse__HeadVar__1_1)
{
  {
    MR_bool mdb__browse__succeeded;
    MR_String mdb__browse__HeadVar__2_2;

    if ((mdb__browse__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mdb__browse__HeadVar__2_2 = (MR_String) "";
    else
      {
        MR_Word mdb__browse__Dir_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mdb__browse__Dirs_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__HeadVar__1_1, (MR_Integer) 1)));

        if ((mdb__browse__Dirs_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          if (((MR_tag((MR_Word) mdb__browse__Dir_3)) == (MR_mktag((MR_Integer) 1))))
            mdb__browse__HeadVar__2_2 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browse__Dir_3, (MR_Integer) 0)));
          else
            {
              MR_Integer mdb__browse__Num_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browse__Dir_3, (MR_Integer) 0)));

              {
                mdb__browse__HeadVar__2_2 = mercury__string__int_to_string_1_f_0(mdb__browse__Num_12);
              }
            }
        else
          {
            MR_String mdb__browse__Var_8;
            MR_String mdb__browse__Var_9;
            MR_String mdb__browse__Var_11;

            if (((MR_tag((MR_Word) mdb__browse__Dir_3)) == (MR_mktag((MR_Integer) 1))))
              mdb__browse__Var_8 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browse__Dir_3, (MR_Integer) 0)));
            else
              {
                MR_Integer mdb__browse__Num_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browse__Dir_3, (MR_Integer) 0)));

                {
                  mdb__browse__Var_8 = mercury__string__int_to_string_1_f_0(mdb__browse__Num_14);
                }
              }
            {
              mdb__browse__Var_11 = mdb__browse__down_dirs_to_string_1_f_0(mdb__browse__Dirs_4);
            }
            {
              mdb__browse__Var_9 = mercury__string__f_43_43_2_f_0((MR_String) "/", mdb__browse__Var_11);
            }
            {
              mdb__browse__HeadVar__2_2 = mercury__string__f_43_43_2_f_0(mdb__browse__Var_8, mdb__browse__Var_9);
            }
          }
      }
    return mdb__browse__HeadVar__2_2;
  }
}

static void MR_CALL 
mdb__browse__simplify_rev_dirs_4_p_0(
  MR_Word mdb__browse__HeadVar__1_1,
  MR_Integer mdb__browse__STATE_VARIABLE_ToDelete_0_2,
  MR_Word mdb__browse__STATE_VARIABLE_DownDirs_0_3,
  MR_Word * mdb__browse__STATE_VARIABLE_DownDirs_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mdb__browse__succeeded;

        if ((mdb__browse__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mdb__browse__STATE_VARIABLE_DownDirs_4 = mdb__browse__STATE_VARIABLE_DownDirs_0_3;
        else
          {
            MR_Word mdb__browse__RevUpDownDir_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mdb__browse__RevUpDownDirs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mdb__browse__STATE_VARIABLE_DownDirs_22_22;
            MR_Integer mdb__browse__STATE_VARIABLE_ToDelete_23_23;

            switch (MR_tag((MR_Word) mdb__browse__RevUpDownDir_9)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mdb__browse__STATE_VARIABLE_ToDelete_23_23 = (mdb__browse__STATE_VARIABLE_ToDelete_0_2 + (MR_Integer) 1);
                  mdb__browse__STATE_VARIABLE_DownDirs_22_22 = mdb__browse__STATE_VARIABLE_DownDirs_0_3;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer mdb__browse__ChildNum_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__browse__RevUpDownDir_9, (MR_Integer) 0)));
                  MR_Word mdb__browse__DownDir_30;

                  {
                    mdb__browse__DownDir_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), mdb__browse__DownDir_30, 0) = ((MR_Box) (mdb__browse__ChildNum_13));
                  }
                  mdb__browse__succeeded = (mdb__browse__STATE_VARIABLE_ToDelete_0_2 > (MR_Integer) 0);
                  if (mdb__browse__succeeded)
                    {
                      mdb__browse__STATE_VARIABLE_ToDelete_23_23 = (mdb__browse__STATE_VARIABLE_ToDelete_0_2 - (MR_Integer) 1);
                      mdb__browse__STATE_VARIABLE_DownDirs_22_22 = mdb__browse__STATE_VARIABLE_DownDirs_0_3;
                    }
                  else
                    {
                      {
                        mdb__browse__STATE_VARIABLE_DownDirs_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), mdb__browse__STATE_VARIABLE_DownDirs_22_22, 0) = ((MR_Box) (mdb__browse__DownDir_30));
                        MR_hl_field(MR_mktag(1), mdb__browse__STATE_VARIABLE_DownDirs_22_22, 1) = ((MR_Box) (mdb__browse__STATE_VARIABLE_DownDirs_0_3));
                      }
                      mdb__browse__STATE_VARIABLE_ToDelete_23_23 = mdb__browse__STATE_VARIABLE_ToDelete_0_2;
                    }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word mdb__browse__DownDir_14;
                  MR_String mdb__browse__ChildName_15 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__browse__RevUpDownDir_9, (MR_Integer) 0)));

                  {
                    mdb__browse__DownDir_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mdb__browse__DownDir_14, 0) = ((MR_Box) (mdb__browse__ChildName_15));
                  }
                  mdb__browse__succeeded = (mdb__browse__STATE_VARIABLE_ToDelete_0_2 > (MR_Integer) 0);
                  if (mdb__browse__succeeded)
                    {
                      mdb__browse__STATE_VARIABLE_ToDelete_23_23 = (mdb__browse__STATE_VARIABLE_ToDelete_0_2 - (MR_Integer) 1);
                      mdb__browse__STATE_VARIABLE_DownDirs_22_22 = mdb__browse__STATE_VARIABLE_DownDirs_0_3;
                    }
                  else
                    {
                      {
                        mdb__browse__STATE_VARIABLE_DownDirs_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), mdb__browse__STATE_VARIABLE_DownDirs_22_22, 0) = ((MR_Box) (mdb__browse__DownDir_14));
                        MR_hl_field(MR_mktag(1), mdb__browse__STATE_VARIABLE_DownDirs_22_22, 1) = ((MR_Box) (mdb__browse__STATE_VARIABLE_DownDirs_0_3));
                      }
                      mdb__browse__STATE_VARIABLE_ToDelete_23_23 = mdb__browse__STATE_VARIABLE_ToDelete_0_2;
                    }
                }
                break;
            }
            /* direct tailcall eliminated */
            {
              MR_Word mdb__browse__next_value_of_HeadVar__1_1 = mdb__browse__RevUpDownDirs_10;
              MR_Integer mdb__browse__next_value_of_STATE_VARIABLE_ToDelete_0_2 = mdb__browse__STATE_VARIABLE_ToDelete_23_23;
              MR_Word mdb__browse__next_value_of_STATE_VARIABLE_DownDirs_0_3 = mdb__browse__STATE_VARIABLE_DownDirs_22_22;

              mdb__browse__STATE_VARIABLE_DownDirs_0_3 = mdb__browse__next_value_of_STATE_VARIABLE_DownDirs_0_3;
              mdb__browse__STATE_VARIABLE_ToDelete_0_2 = mdb__browse__next_value_of_STATE_VARIABLE_ToDelete_0_2;
              mdb__browse__HeadVar__1_1 = mdb__browse__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
mdb__browse__write_indent_3_p_0(
  MR_Integer mdb__browse__Indent_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mdb__browse__succeeded = (mdb__browse__Indent_4 <= (MR_Integer) 0);

        if (mdb__browse__succeeded)
          {
          }
        else
          {
            MR_Integer mdb__browse__Var_11;

            {
              mercury__io__write_char_3_p_0((MR_Char) 32);
            }
            mdb__browse__Var_11 = (mdb__browse__Indent_4 - (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer mdb__browse__next_value_of_Indent_4 = mdb__browse__Var_11;

              mdb__browse__Indent_4 = mdb__browse__next_value_of_Indent_4;
            }
            continue;
          }
      }
      break;
    }
}

static MR_Box MR_CALL 
mdb__browse__save_args_4_p_0_1(
  MR_Box mdb__browse__closure_arg,
  MR_Box mdb__browse__wrapper_arg_1)
{
  {
    MR_Box mdb__browse__wrapper_arg_2;
    MR_Box mdb__browse__closure = mdb__browse__closure_arg;
    MR_Word mdb__browse__conv0_HeadVar__2_2;

    {
      mdb__browse__conv0_HeadVar__2_2 = mercury__univ__univ_1_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__closure, (MR_Integer) 3))), mdb__browse__wrapper_arg_1);
    }
    mdb__browse__wrapper_arg_2 = ((MR_Box) (mdb__browse__conv0_HeadVar__2_2));
    return mdb__browse__wrapper_arg_2;
  }
}

static void MR_CALL 
mdb__browse__save_args_4_p_0(
  MR_Integer mdb__browse__HeadVar__1_1,
  MR_Word mdb__browse__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mdb__browse__succeeded;

        if ((mdb__browse__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word mdb__browse__TypeInfo_12_28;
            MR_Word mdb__browse__Univ_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word mdb__browse__Univs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__HeadVar__2_2, (MR_Integer) 1)));
            MR_Box mdb__browse__Var_26;
            MR_Word mdb__browse__TypeInfo_53_76;
            MR_Word mdb__browse__List_34;

            {
              mdb__browse__Var_26 = mercury__univ__univ_value_1_f_0(&mdb__browse__TypeInfo_12_28, mdb__browse__Univ_10);
            }
            {
              mdb__browse__succeeded = mdb__browse__dynamic_cast_to_list_2_p_0(mdb__browse__TypeInfo_12_28, &mdb__browse__TypeInfo_53_76, mdb__browse__Var_26, &mdb__browse__List_34);
            }
            if (mdb__browse__succeeded)
              if ((mdb__browse__List_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  {
                    mdb__browse__write_indent_3_p_0(mdb__browse__HeadVar__1_1);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) "[]");
                  }
                }
              else
                {
                  MR_Word mdb__browse__MakeUniv_37;
                  MR_Word mdb__browse__Univs_40;
                  MR_Integer mdb__browse__Var_51;

                  {
                    mdb__browse__MakeUniv_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), mdb__browse__MakeUniv_37, 0) = ((MR_Box) (&mdb__browse_scalar_common_6[1]));
                    MR_hl_field(MR_mktag(0), mdb__browse__MakeUniv_37, 1) = ((MR_Box) (mdb__browse__save_args_4_p_0_1));
                    MR_hl_field(MR_mktag(0), mdb__browse__MakeUniv_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(0), mdb__browse__MakeUniv_37, 3) = ((MR_Box) (mdb__browse__TypeInfo_53_76));
                  }
                  {
                    mdb__browse__Univs_40 = mercury__list__map_2_f_0(mdb__browse__TypeInfo_53_76, (MR_Word) &mercury__univ__univ__type_ctor_info_univ_0, mdb__browse__MakeUniv_37, mdb__browse__List_34);
                  }
                  {
                    mdb__browse__write_indent_3_p_0(mdb__browse__HeadVar__1_1);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) "[\n");
                  }
                  mdb__browse__Var_51 = (mdb__browse__HeadVar__1_1 + (MR_Integer) 1);
                  {
                    mdb__browse__save_args_4_p_0(mdb__browse__Var_51, mdb__browse__Univs_40);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) "\n");
                  }
                  {
                    mdb__browse__write_indent_3_p_0(mdb__browse__HeadVar__1_1);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) "]");
                  }
                }
            else
              {
                MR_String mdb__browse__Functor_41;
                MR_Word mdb__browse__Args_43;
                MR_Integer mdb__browse___Arity_42;

                {
                  mercury__deconstruct__deconstruct_5_p_2(mdb__browse__TypeInfo_12_28, mdb__browse__Var_26, (MR_Integer) 2, &mdb__browse__Functor_41, &mdb__browse___Arity_42, &mdb__browse__Args_43);
                }
                {
                  mdb__browse__write_indent_3_p_0(mdb__browse__HeadVar__1_1);
                }
                {
                  mercury__io__write_string_3_p_0(mdb__browse__Functor_41);
                }
                if ((mdb__browse__Args_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                  }
                else
                  {
                    MR_Integer mdb__browse__Var_67;

                    {
                      mercury__io__write_string_3_p_0((MR_String) "(\n");
                    }
                    mdb__browse__Var_67 = (mdb__browse__HeadVar__1_1 + (MR_Integer) 1);
                    {
                      mdb__browse__save_args_4_p_0(mdb__browse__Var_67, mdb__browse__Args_43);
                    }
                    {
                      mercury__io__write_string_3_p_0((MR_String) "\n");
                    }
                    {
                      mdb__browse__write_indent_3_p_0(mdb__browse__HeadVar__1_1);
                    }
                    {
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
              }
            if ((mdb__browse__Univs_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
              }
            else
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) ",\n");
                }
                /* direct tailcall eliminated */
                {
                  MR_Word mdb__browse__next_value_of_HeadVar__2_2 = mdb__browse__Univs_11;

                  mdb__browse__HeadVar__2_2 = mdb__browse__next_value_of_HeadVar__2_2;
                }
                continue;
              }
          }
      }
      break;
    }
}

static MR_bool MR_CALL 
mdb__browse__dynamic_cast_to_list_2_p_0(
  MR_Word mdb__browse__TypeInfo_for_T1_14,
  MR_Word * mdb__browse__TypeInfo_for_T_13,
  MR_Box mdb__browse__X_3,
  MR_Word * mdb__browse__L_4)
{
  {
    MR_bool mdb__browse__succeeded;
    MR_Word mdb__browse__TypeCtorInfo_15_15;
    MR_Word mdb__browse__TypeInfo_16_16;
    MR_Word mdb__browse__TypeInfo_19_19;
    MR_Word mdb__browse__ArgTypeDesc_5;
    MR_Word mdb__browse__Var_8;
    MR_Word mdb__browse__Var_10;
    MR_Word mdb__browse__Var_18;
    MR_Box mdb__browse__Var_17;
    MR_Box mdb__browse__Var_11;
    MR_Box mdb__browse__conv0_L_4;

    {
      mdb__browse__Var_10 = mercury__type_desc__type_of_1_f_0(mdb__browse__TypeInfo_for_T1_14);
    }
    {
      mdb__browse__Var_8 = mercury__type_desc__type_args_1_f_0(mdb__browse__Var_10);
    }
    mdb__browse__succeeded = ((MR_tag((MR_Word) mdb__browse__Var_8)) == (MR_mktag((MR_Integer) 1)));
    if (mdb__browse__succeeded)
      {
        mdb__browse__ArgTypeDesc_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__Var_8, (MR_Integer) 0)));
        mdb__browse__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__Var_8, (MR_Integer) 1)));
        mdb__browse__TypeInfo_19_19 = (MR_Word) &mdb__browse_scalar_common_4[39];
        {
          mdb__browse__succeeded = mercury__builtin__unify_2_p_0(mdb__browse__TypeInfo_19_19, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (mdb__browse__Var_18)));
        }
        if (mdb__browse__succeeded)
          {
            {
              mercury__type_desc__has_type_2_p_0(mdb__browse__TypeInfo_for_T_13, mdb__browse__ArgTypeDesc_5);
            }
            mdb__browse__TypeCtorInfo_15_15 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
            {
              mdb__browse__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mdb__browse__TypeInfo_16_16, 0) = ((MR_Box) (mdb__browse__TypeCtorInfo_15_15));
              MR_hl_field(MR_mktag(0), mdb__browse__TypeInfo_16_16, 1) = ((MR_Box) (*mdb__browse__TypeInfo_for_T_13));
            }
            {
              mdb__browse__succeeded = mercury__builtin__dynamic_cast_2_p_0(mdb__browse__TypeInfo_for_T1_14, mdb__browse__TypeInfo_16_16, mdb__browse__X_3, &mdb__browse__conv0_L_4);
            }
            if (mdb__browse__succeeded)
              {
                *mdb__browse__L_4 = ((MR_Word) mdb__browse__conv0_L_4);
                mdb__browse__succeeded = MR_TRUE;
              }
          }
      }
    return mdb__browse__succeeded;
  }
}

static MR_Box MR_CALL 
mdb__browse__save_univ_4_p_0_1(
  MR_Box mdb__browse__closure_arg,
  MR_Box mdb__browse__wrapper_arg_1)
{
  {
    MR_Box mdb__browse__wrapper_arg_2;
    MR_Box mdb__browse__closure = mdb__browse__closure_arg;
    MR_Word mdb__browse__conv0_HeadVar__2_2;

    {
      mdb__browse__conv0_HeadVar__2_2 = mercury__univ__univ_1_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__closure, (MR_Integer) 3))), mdb__browse__wrapper_arg_1);
    }
    mdb__browse__wrapper_arg_2 = ((MR_Box) (mdb__browse__conv0_HeadVar__2_2));
    return mdb__browse__wrapper_arg_2;
  }
}

static void MR_CALL 
mdb__browse__save_univ_4_p_0(
  MR_Integer mdb__browse__Indent_5,
  MR_Word mdb__browse__Univ_6)
{
  {
    MR_bool mdb__browse__succeeded;
    MR_Word mdb__browse__TypeInfo_12_12;
    MR_Box mdb__browse__Var_10;
    MR_Word mdb__browse__TypeInfo_53_60;
    MR_Word mdb__browse__List_18;

    {
      mdb__browse__Var_10 = mercury__univ__univ_value_1_f_0(&mdb__browse__TypeInfo_12_12, mdb__browse__Univ_6);
    }
    {
      mdb__browse__succeeded = mdb__browse__dynamic_cast_to_list_2_p_0(mdb__browse__TypeInfo_12_12, &mdb__browse__TypeInfo_53_60, mdb__browse__Var_10, &mdb__browse__List_18);
    }
    if (mdb__browse__succeeded)
      if ((mdb__browse__List_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          {
            mdb__browse__write_indent_3_p_0(mdb__browse__Indent_5);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "[]");
          }
        }
      else
        {
          MR_Word mdb__browse__MakeUniv_21;
          MR_Word mdb__browse__Univs_24;
          MR_Integer mdb__browse__Var_35;

          {
            mdb__browse__MakeUniv_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), mdb__browse__MakeUniv_21, 0) = ((MR_Box) (&mdb__browse_scalar_common_6[1]));
            MR_hl_field(MR_mktag(0), mdb__browse__MakeUniv_21, 1) = ((MR_Box) (mdb__browse__save_univ_4_p_0_1));
            MR_hl_field(MR_mktag(0), mdb__browse__MakeUniv_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), mdb__browse__MakeUniv_21, 3) = ((MR_Box) (mdb__browse__TypeInfo_53_60));
          }
          {
            mdb__browse__Univs_24 = mercury__list__map_2_f_0(mdb__browse__TypeInfo_53_60, (MR_Word) &mercury__univ__univ__type_ctor_info_univ_0, mdb__browse__MakeUniv_21, mdb__browse__List_18);
          }
          {
            mdb__browse__write_indent_3_p_0(mdb__browse__Indent_5);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "[\n");
          }
          mdb__browse__Var_35 = (mdb__browse__Indent_5 + (MR_Integer) 1);
          {
            mdb__browse__save_args_4_p_0(mdb__browse__Var_35, mdb__browse__Univs_24);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "\n");
          }
          {
            mdb__browse__write_indent_3_p_0(mdb__browse__Indent_5);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "]");
          }
        }
    else
      {
        MR_String mdb__browse__Functor_25;
        MR_Word mdb__browse__Args_27;
        MR_Integer mdb__browse___Arity_26;

        {
          mercury__deconstruct__deconstruct_5_p_2(mdb__browse__TypeInfo_12_12, mdb__browse__Var_10, (MR_Integer) 2, &mdb__browse__Functor_25, &mdb__browse___Arity_26, &mdb__browse__Args_27);
        }
        {
          mdb__browse__write_indent_3_p_0(mdb__browse__Indent_5);
        }
        {
          mercury__io__write_string_3_p_0(mdb__browse__Functor_25);
        }
        if ((mdb__browse__Args_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Integer mdb__browse__Var_51;

            {
              mercury__io__write_string_3_p_0((MR_String) "(\n");
            }
            mdb__browse__Var_51 = (mdb__browse__Indent_5 + (MR_Integer) 1);
            {
              mdb__browse__save_args_4_p_0(mdb__browse__Var_51, mdb__browse__Args_27);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
            {
              mdb__browse__write_indent_3_p_0(mdb__browse__Indent_5);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
          }
      }
  }
}

static void MR_CALL 
mdb__browse__launch_xml_browser_5_p_0(
  MR_Word mdb__browse__OutStream_6,
  MR_Word mdb__browse__ErrStream_7,
  MR_String mdb__browse__CommandStr_8)
{
  {
    MR_bool mdb__browse__succeeded;
    MR_Word mdb__browse__Result_10;

    {
      mercury__io__write_string_4_p_0(mdb__browse__OutStream_6, (MR_String) "Launching XML browser (this may take some time) ...\n");
    }
    {
      mercury__io__flush_output_3_p_0(mdb__browse__OutStream_6);
    }
    {
      mercury__io__call_system_return_signal_4_p_0(mdb__browse__CommandStr_8, &mdb__browse__Result_10);
    }
    if (((MR_tag((MR_Word) mdb__browse__Result_10)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word mdb__browse__Error_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__Result_10, (MR_Integer) 0)));
        MR_String mdb__browse__Var_23;
        MR_String mdb__browse__Var_26;
        MR_String mdb__browse__Var_27;

        {
          mdb__browse__Var_27 = mercury__string__string_1_f_0((MR_Word) &mercury__io__io__type_ctor_info_error_0, ((MR_Box) (mdb__browse__Error_14)));
        }
        {
          mdb__browse__Var_26 = mercury__string__f_43_43_2_f_0(mdb__browse__Var_27, (MR_String) ".\n");
        }
        {
          mdb__browse__Var_23 = mercury__string__f_43_43_2_f_0((MR_String) "mdb: Error launching browser: ", mdb__browse__Var_26);
        }
        {
          mercury__io__write_string_4_p_0(mdb__browse__ErrStream_7, mdb__browse__Var_23);
        }
      }
    else
      {
        MR_Word mdb__browse__ExitStatus_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Result_10, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) mdb__browse__ExitStatus_11)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_Integer mdb__browse__ExitCode_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browse__ExitStatus_11, (MR_Integer) 0)));

            mdb__browse__succeeded = (mdb__browse__ExitCode_12 == (MR_Integer) 0);
            if (mdb__browse__succeeded)
              {
              }
            else
              {
                MR_String mdb__browse__Var_31;
                MR_String mdb__browse__Var_34;

                {
                  mdb__browse__Var_34 = mercury__string__f_43_43_2_f_0(mdb__browse__CommandStr_8, (MR_String) "\' terminated with a non-zero exit code.\n");
                }
                {
                  mdb__browse__Var_31 = mercury__string__f_43_43_2_f_0((MR_String) "mdb: The command \140", mdb__browse__Var_34);
                }
                {
                  mercury__io__write_string_4_p_0(mdb__browse__ErrStream_7, mdb__browse__Var_31);
                }
              }
          }
        else
          {
            {
              mercury__io__write_string_4_p_0(mdb__browse__ErrStream_7, (MR_String) "mdb: The browser was killed.\n");
            }
          }
      }
  }
}

static void MR_CALL 
mdb__browse__change_dir_3_p_0(
  MR_Word mdb__browse__PwdDirs_4,
  MR_Word mdb__browse__Path_5,
  MR_Word * mdb__browse__RootRelDirs_6)
{
  {
    MR_bool mdb__browse__succeeded;
    MR_Word mdb__browse__NewDirs_8;
    MR_Word mdb__browse__RevDirs_14;

    if (((MR_tag((MR_Word) mdb__browse__Path_5)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word mdb__browse__Var_9;
        MR_Word mdb__browse__Dirs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__Path_5, (MR_Integer) 0)));

        {
          mdb__browse__Var_9 = mdb__browser_info__down_to_up_down_dirs_1_f_0(mdb__browse__PwdDirs_4);
        }
        {
          mdb__browse__NewDirs_8 = mercury__list__f_43_43_2_f_0((MR_Word) &mdb__browser_info__mdb__browser_info__type_ctor_info_up_down_dir_0, mdb__browse__Var_9, mdb__browse__Dirs_10);
        }
      }
    else
      mdb__browse__NewDirs_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Path_5, (MR_Integer) 0)));
    {
      mercury__list__reverse_2_p_0((MR_Word) &mdb__browser_info__mdb__browser_info__type_ctor_info_up_down_dir_0, mdb__browse__NewDirs_8, &mdb__browse__RevDirs_14);
    }
    {
      mdb__browse__simplify_rev_dirs_4_p_0(mdb__browse__RevDirs_14, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), mdb__browse__RootRelDirs_6);
    }
  }
}

static void MR_CALL 
mdb__browse__set_path_3_p_0(
  MR_Word mdb__browse__NewPath_4,
  MR_Word mdb__browse__STATE_VARIABLE_Info_0_8,
  MR_Word * mdb__browse__STATE_VARIABLE_Info_9)
{
  {
    MR_bool mdb__browse__succeeded;
    MR_Word mdb__browse__Dirs0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
    MR_Word mdb__browse__Dirs_7;
    MR_Word mdb__browse__NewDirs_28;
    MR_Word mdb__browse__RevDirs_34;
    MR_Word mdb__browse__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
    MR_Word mdb__browse__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
    MR_Word mdb__browse__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
    MR_Word mdb__browse__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
    MR_Word mdb__browse__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
    MR_Word mdb__browse__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
    MR_Word mdb__browse__Var_17;
    MR_Word mdb__browse__Var_19;
    MR_Word mdb__browse__Var_20;
    MR_Word mdb__browse__Var_21;
    MR_Word mdb__browse__Var_22;
    MR_Word mdb__browse__Var_23;
    MR_Word mdb__browse__Var_18;

    if (((MR_tag((MR_Word) mdb__browse__NewPath_4)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word mdb__browse__Var_29;
        MR_Word mdb__browse__Dirs_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__NewPath_4, (MR_Integer) 0)));

        {
          mdb__browse__Var_29 = mdb__browser_info__down_to_up_down_dirs_1_f_0(mdb__browse__Dirs0_6);
        }
        {
          mdb__browse__NewDirs_28 = mercury__list__f_43_43_2_f_0((MR_Word) &mdb__browser_info__mdb__browser_info__type_ctor_info_up_down_dir_0, mdb__browse__Var_29, mdb__browse__Dirs_30);
        }
      }
    else
      mdb__browse__NewDirs_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__NewPath_4, (MR_Integer) 0)));
    {
      mercury__list__reverse_2_p_0((MR_Word) &mdb__browser_info__mdb__browser_info__type_ctor_info_up_down_dir_0, mdb__browse__NewDirs_28, &mdb__browse__RevDirs_34);
    }
    {
      mdb__browse__simplify_rev_dirs_4_p_0(mdb__browse__RevDirs_34, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &mdb__browse__Dirs_7);
    }
    mdb__browse__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
    mdb__browse__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
    mdb__browse__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
    mdb__browse__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
    mdb__browse__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
    mdb__browse__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
    mdb__browse__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *mdb__browse__STATE_VARIABLE_Info_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__browse__Var_17));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__browse__Dirs_7));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__browse__Var_19));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__browse__Var_20));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__browse__Var_21));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__browse__Var_22));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (mdb__browse__Var_23));
    }
  }
}

static void MR_CALL 
mdb__browse__deref_subterm_2_4_p_0(
  MR_Word mdb__browse__Univ_5,
  MR_Word mdb__browse__Path_6,
  MR_Word mdb__browse__RevPath0_7,
  MR_Word * mdb__browse__Result_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mdb__browse__succeeded;

        if ((mdb__browse__Path_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *mdb__browse__Result_8 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__browse__Univ_5));
          }
        else
          {
            MR_Word mdb__browse__Dir_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__Path_6, (MR_Integer) 0)));
            MR_Word mdb__browse__Dirs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__Path_6, (MR_Integer) 1)));
            MR_Word mdb__browse__MaybeValue_13;

            if (((MR_tag((MR_Word) mdb__browse__Dir_9)) == (MR_mktag((MR_Integer) 1))))
              {
                MR_Word mdb__browse__TypeInfo_29_29;
                MR_String mdb__browse__Name_14 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browse__Dir_9, (MR_Integer) 0)));
                MR_Box mdb__browse__Var_17;

                {
                  mdb__browse__Var_17 = mercury__univ__univ_value_1_f_0(&mdb__browse__TypeInfo_29_29, mdb__browse__Univ_5);
                }
                {
                  mercury__deconstruct__named_arg_cc_3_p_0(mdb__browse__TypeInfo_29_29, mdb__browse__Var_17, mdb__browse__Name_14, &mdb__browse__MaybeValue_13);
                }
              }
            else
              {
                MR_Integer mdb__browse__N_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browse__Dir_9, (MR_Integer) 0)));
                MR_Word mdb__browse__TypeCtor_12;
                MR_Word mdb__browse__Var_18;
                MR_String mdb__browse__Var_19;
                MR_String mdb__browse__Var_20;

                {
                  mdb__browse__Var_18 = mercury__univ__univ_type_1_f_0(mdb__browse__Univ_5);
                }
                {
                  mdb__browse__TypeCtor_12 = mercury__type_desc__type_ctor_1_f_0(mdb__browse__Var_18);
                }
                {
                  mdb__browse__Var_19 = mercury__type_desc__type_ctor_name_1_f_0(mdb__browse__TypeCtor_12);
                }
                mdb__browse__succeeded = (strcmp(mdb__browse__Var_19, (MR_String) "array") == 0);
                if (mdb__browse__succeeded)
                  {
                    {
                      mdb__browse__Var_20 = mercury__type_desc__type_ctor_module_name_1_f_0(mdb__browse__TypeCtor_12);
                    }
                    mdb__browse__succeeded = (strcmp(mdb__browse__Var_20, (MR_String) "array") == 0);
                  }
                if (mdb__browse__succeeded)
                  {
                    MR_Word mdb__browse__TypeInfo_27_27;
                    MR_Box mdb__browse__Var_21;

                    {
                      mdb__browse__Var_21 = mercury__univ__univ_value_1_f_0(&mdb__browse__TypeInfo_27_27, mdb__browse__Univ_5);
                    }
                    {
                      mercury__deconstruct__arg_cc_3_p_0(mdb__browse__TypeInfo_27_27, mdb__browse__Var_21, mdb__browse__N_11, &mdb__browse__MaybeValue_13);
                    }
                  }
                else
                  {
                    MR_Word mdb__browse__TypeInfo_28_28;
                    MR_Box mdb__browse__Var_22;
                    MR_Integer mdb__browse__Var_23;

                    {
                      mdb__browse__Var_22 = mercury__univ__univ_value_1_f_0(&mdb__browse__TypeInfo_28_28, mdb__browse__Univ_5);
                    }
                    mdb__browse__Var_23 = (mdb__browse__N_11 - (MR_Integer) 1);
                    {
                      mercury__deconstruct__arg_cc_3_p_0(mdb__browse__TypeInfo_28_28, mdb__browse__Var_22, mdb__browse__Var_23, &mdb__browse__MaybeValue_13);
                    }
                  }
              }
            if ((mdb__browse__MaybeValue_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word mdb__browse__Var_25;

                {
                  mdb__browse__Var_25 = mercury__list__reverse_1_f_0((MR_Word) &mdb__browser_info__mdb__browser_info__type_ctor_info_down_dir_0, mdb__browse__RevPath0_7);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *mdb__browse__Result_8 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__browse__Var_25));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__browse__Dir_9));
                }
              }
            else
              {
                MR_Word mdb__browse__TypeInfo_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__MaybeValue_13, (MR_Integer) 0)));
                MR_Box mdb__browse__Value_15 = (MR_hl_field(MR_mktag(1), mdb__browse__MaybeValue_13, (MR_Integer) 1));
                MR_Word mdb__browse__ArgN_16;
                MR_Word mdb__browse__Var_26;

                {
                  mdb__browse__ArgN_16 = mercury__univ__univ_1_f_0(mdb__browse__TypeInfo_30_30, mdb__browse__Value_15);
                }
                {
                  mdb__browse__Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mdb__browse__Var_26, 0) = ((MR_Box) (mdb__browse__Dir_9));
                  MR_hl_field(MR_mktag(1), mdb__browse__Var_26, 1) = ((MR_Box) (mdb__browse__RevPath0_7));
                }
                /* direct tailcall eliminated */
                {
                  MR_Word mdb__browse__next_value_of_Univ_5 = mdb__browse__ArgN_16;
                  MR_Word mdb__browse__next_value_of_Path_6 = mdb__browse__Dirs_10;
                  MR_Word mdb__browse__next_value_of_RevPath0_7 = mdb__browse__Var_26;

                  mdb__browse__RevPath0_7 = mdb__browse__next_value_of_RevPath0_7;
                  mdb__browse__Path_6 = mdb__browse__next_value_of_Path_6;
                  mdb__browse__Univ_5 = mdb__browse__next_value_of_Univ_5;
                }
                continue;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
mdb__browse__deref_subterm_3_p_0(
  MR_Word mdb__browse__BrowserTerm_4,
  MR_Word mdb__browse__Path_5,
  MR_Word * mdb__browse__Result_6)
{
  {
    MR_bool mdb__browse__succeeded;

    if (((MR_tag((MR_Word) mdb__browse__BrowserTerm_4)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word mdb__browse__Univ_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__BrowserTerm_4, (MR_Integer) 0)));
        MR_Word mdb__browse__SubResult_8;

        {
          mdb__browse__deref_subterm_2_4_p_0(mdb__browse__Univ_7, mdb__browse__Path_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &mdb__browse__SubResult_8);
        }
        if (((MR_tag((MR_Word) mdb__browse__SubResult_8)) == (MR_mktag((MR_Integer) 1))))
          *mdb__browse__Result_6 = (MR_Word) mdb__browse__SubResult_8;
        else
          {
            MR_Word mdb__browse__SubUniv_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__SubResult_8, (MR_Integer) 0)));
            MR_Word mdb__browse__SubBrowserTerm_35;

            {
              mdb__browse__SubBrowserTerm_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mdb__browse__SubBrowserTerm_35, 0) = ((MR_Box) (mdb__browse__SubUniv_34));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *mdb__browse__Result_6 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__browse__SubBrowserTerm_35));
            }
          }
      }
    else
      {
        MR_Word mdb__browse__Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__BrowserTerm_4, (MR_Integer) 1)));
        MR_Word mdb__browse__MaybeReturn_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__BrowserTerm_4, (MR_Integer) 2)));
        MR_String mdb__browse___Functor_9 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browse__BrowserTerm_4, (MR_Integer) 0)));

        if ((mdb__browse__Path_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *mdb__browse__Result_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__browse__BrowserTerm_4));
          }
        else
          {
            MR_Word mdb__browse__Step_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__Path_5, (MR_Integer) 0)));
            MR_Word mdb__browse__PathTail_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__Path_5, (MR_Integer) 1)));
            MR_Word mdb__browse__ArgUniv_17;

            if (((MR_tag((MR_Word) mdb__browse__Step_13)) == (MR_mktag((MR_Integer) 1))))
              {
                MR_String mdb__browse__Name_18 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browse__Step_13, (MR_Integer) 0)));
                MR_Integer mdb__browse__lo_0;
                MR_Integer mdb__browse__hi_1;
                MR_Integer mdb__browse__mid_2;
                MR_Integer mdb__browse__result_3;

                /* binary string simple lookup switch */
                mdb__browse__lo_0 = (MR_Integer) 0;
                mdb__browse__hi_1 = (MR_Integer) 5;
                do
                  {
                    mdb__browse__mid_2 = (((mdb__browse__lo_0 + mdb__browse__hi_1)) / (MR_Integer) 2);
                    mdb__browse__result_3 = MR_strcmp(mdb__browse__Name_18, ((&mdb__browse_vector_common_7[10 + mdb__browse__mid_2]))->mdb__browse__vector_common_type_7_0__vct_7_f_0);
                    if ((mdb__browse__result_3 == (MR_Integer) 0))
                      {
                        mdb__browse__succeeded = MR_TRUE;
                        /* jump out of search loop */
                        goto label_0;
                      }
                    else
                    if ((mdb__browse__result_3 < (MR_Integer) 0))
                      mdb__browse__hi_1 = (mdb__browse__mid_2 - (MR_Integer) 1);
                    else
                      mdb__browse__lo_0 = (mdb__browse__mid_2 + (MR_Integer) 1);
                  }
                while ((mdb__browse__lo_0 <= mdb__browse__hi_1));
                mdb__browse__succeeded = MR_FALSE;
              label_0:;
                if (mdb__browse__succeeded)
                  {
                    mdb__browse__succeeded = ((MR_tag((MR_Word) mdb__browse__MaybeReturn_11)) == (MR_mktag((MR_Integer) 1)));
                    if (mdb__browse__succeeded)
                      mdb__browse__ArgUniv_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__MaybeReturn_11, (MR_Integer) 0)));
                  }
              }
            else
              {
                MR_Integer mdb__browse__N_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browse__Step_13, (MR_Integer) 0)));
                MR_Word mdb__browse__ReturnValue_16;
                MR_Integer mdb__browse__Var_19;
                MR_Integer mdb__browse__Var_20;

                {
                  mdb__browse__Var_19 = mercury__list__length_1_f_0((MR_Word) &mercury__univ__univ__type_ctor_info_univ_0, mdb__browse__Args_10);
                }
                mdb__browse__Var_20 = (mdb__browse__N_15 - mdb__browse__Var_19);
                mdb__browse__succeeded = (mdb__browse__Var_20 == (MR_Integer) 1);
                if (mdb__browse__succeeded)
                  {
                    mdb__browse__succeeded = ((MR_tag((MR_Word) mdb__browse__MaybeReturn_11)) == (MR_mktag((MR_Integer) 1)));
                    if (mdb__browse__succeeded)
                      mdb__browse__ReturnValue_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__MaybeReturn_11, (MR_Integer) 0)));
                  }
                if (mdb__browse__succeeded)
                  {
                    mdb__browse__ArgUniv_17 = mdb__browse__ReturnValue_16;
                    mdb__browse__succeeded = MR_TRUE;
                  }
                else
                  {
                    MR_Box mdb__browse__conv0_ArgUniv_17;

                    {
                      mdb__browse__succeeded = mercury__list__index1_3_p_0((MR_Word) &mercury__univ__univ__type_ctor_info_univ_0, mdb__browse__Args_10, mdb__browse__N_15, &mdb__browse__conv0_ArgUniv_17);
                    }
                    if (mdb__browse__succeeded)
                      {
                        mdb__browse__ArgUniv_17 = ((MR_Word) mdb__browse__conv0_ArgUniv_17);
                        mdb__browse__succeeded = MR_TRUE;
                      }
                  }
              }
            if (mdb__browse__succeeded)
              {
                MR_Word mdb__browse__Var_21;
                MR_Word mdb__browse__SubResult_25;

                {
                  mdb__browse__Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mdb__browse__Var_21, 0) = ((MR_Box) (mdb__browse__Step_13));
                  MR_hl_field(MR_mktag(1), mdb__browse__Var_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  mdb__browse__deref_subterm_2_4_p_0(mdb__browse__ArgUniv_17, mdb__browse__PathTail_14, mdb__browse__Var_21, &mdb__browse__SubResult_25);
                }
                if (((MR_tag((MR_Word) mdb__browse__SubResult_25)) == (MR_mktag((MR_Integer) 1))))
                  *mdb__browse__Result_6 = (MR_Word) mdb__browse__SubResult_25;
                else
                  {
                    MR_Word mdb__browse__SubUniv_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__SubResult_25, (MR_Integer) 0)));
                    MR_Word mdb__browse__SubBrowserTerm_41;

                    {
                      mdb__browse__SubBrowserTerm_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), mdb__browse__SubBrowserTerm_41, 0) = ((MR_Box) (mdb__browse__SubUniv_40));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      *mdb__browse__Result_6 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__browse__SubBrowserTerm_41));
                    }
                  }
              }
            else
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *mdb__browse__Result_6 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__browse__Step_13));
                }
              }
          }
      }
  }
}

static void MR_CALL 
mdb__browse__unlines_2_p_0(
  MR_Word mdb__browse__HeadVar__1_1,
  MR_String * mdb__browse__HeadVar__2_2)
{
  {
    MR_bool mdb__browse__succeeded;

    if ((mdb__browse__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mdb__browse__HeadVar__2_2 = (MR_String) "";
    else
      {
        MR_String mdb__browse__Line_3 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browse__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mdb__browse__Lines_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__HeadVar__1_1, (MR_Integer) 1)));
        MR_String mdb__browse__NLine_6;
        MR_String mdb__browse__Strs_7;

        {
          mercury__string__append_3_p_2(mdb__browse__Line_3, (MR_String) "\n", &mdb__browse__NLine_6);
        }
        {
          mdb__browse__unlines_2_p_0(mdb__browse__Lines_4, &mdb__browse__Strs_7);
        }
        {
          mercury__string__append_3_p_2(mdb__browse__NLine_6, mdb__browse__Strs_7, mdb__browse__HeadVar__2_2);
        }
      }
  }
}

static void MR_CALL 
mdb__browse__args_to_string_verbose_list_9_p_0(
  MR_Word mdb__browse__HeadVar__1_1,
  MR_Word mdb__browse__HeadVar__2_2,
  MR_Integer mdb__browse__HeadVar__3_3,
  MR_Integer mdb__browse__HeadVar__4_4,
  MR_Integer mdb__browse__CurSize_5,
  MR_Integer * mdb__browse__NewSize_6,
  MR_Integer mdb__browse__HeadVar__7_7,
  MR_Integer mdb__browse__HeadVar__8_8,
  MR_Word * mdb__browse__HeadVar__9_9)
{
  {
    MR_bool mdb__browse__succeeded;

    if ((mdb__browse__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mdb__browse__HeadVar__9_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *mdb__browse__NewSize_6 = mdb__browse__CurSize_5;
      }
    else
      {
        MR_Word mdb__browse__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mdb__browse__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__HeadVar__2_2, (MR_Integer) 0)));

        if ((mdb__browse__Var_73 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word mdb__browse__TreeFrame_26;
            MR_String mdb__browse__ArgNumS_27;
            MR_String mdb__browse__LastBranchS_28;
            MR_Word mdb__browse__Var_30;
            MR_Word mdb__browse__Var_31;
            MR_Word mdb__browse__Var_35;

            {
              mdb__browse__Var_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mdb__browse__Var_30, 0) = ((MR_Box) (mdb__browse__Var_74));
            }
            {
              mdb__browse__browser_term_to_string_verbose_2_8_p_0(mdb__browse__HeadVar__1_1, mdb__browse__Var_30, mdb__browse__HeadVar__4_4, mdb__browse__CurSize_5, mdb__browse__NewSize_6, mdb__browse__HeadVar__7_7, mdb__browse__HeadVar__8_8, &mdb__browse__TreeFrame_26);
            }
            {
              mercury__string__int_to_string_2_p_0(mdb__browse__HeadVar__3_3, &mdb__browse__ArgNumS_27);
            }
            {
              mdb__browse__Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mdb__browse__Var_31, 0) = ((MR_Box) (mdb__browse__ArgNumS_27));
              MR_hl_field(MR_mktag(1), mdb__browse__Var_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[47])));
            }
            {
              mercury__string__append_list_2_p_0(mdb__browse__Var_31, &mdb__browse__LastBranchS_28);
            }
            {
              mdb__browse__Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mdb__browse__Var_35, 0) = ((MR_Box) (mdb__browse__LastBranchS_28));
              MR_hl_field(MR_mktag(1), mdb__browse__Var_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              *mdb__browse__HeadVar__9_9 = mdb__frame__hglue_2_f_0(mdb__browse__Var_35, mdb__browse__TreeFrame_26);
            }
          }
        else
          {
            MR_Integer mdb__browse__NewSize1_48;
            MR_Word mdb__browse__TreeFrame_49;
            MR_Integer mdb__browse__ArgNum1_50;
            MR_Word mdb__browse__RestTreesFrame_52;
            MR_String mdb__browse__ArgNumS_53;
            MR_String mdb__browse__BranchFrameS_54;
            MR_Integer mdb__browse__Height_55;
            MR_Word mdb__browse__VBranchFrame_56;
            MR_Word mdb__browse__LeftFrame_57;
            MR_Word mdb__browse__TopFrame_58;
            MR_Word mdb__browse__Var_60;
            MR_Word mdb__browse__Var_63;
            MR_Integer mdb__browse__Var_67;
            MR_Word mdb__browse__Var_70;

            {
              mdb__browse__Var_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mdb__browse__Var_60, 0) = ((MR_Box) (mdb__browse__Var_74));
            }
            {
              mdb__browse__browser_term_to_string_verbose_2_8_p_0(mdb__browse__HeadVar__1_1, mdb__browse__Var_60, mdb__browse__HeadVar__4_4, mdb__browse__CurSize_5, &mdb__browse__NewSize1_48, mdb__browse__HeadVar__7_7, mdb__browse__HeadVar__8_8, &mdb__browse__TreeFrame_49);
            }
            mdb__browse__ArgNum1_50 = (mdb__browse__HeadVar__3_3 + (MR_Integer) 1);
            {
              mdb__browse__args_to_string_verbose_list_9_p_0(mdb__browse__HeadVar__1_1, mdb__browse__Var_73, mdb__browse__ArgNum1_50, mdb__browse__HeadVar__4_4, mdb__browse__NewSize1_48, mdb__browse__NewSize_6, mdb__browse__HeadVar__7_7, mdb__browse__HeadVar__8_8, &mdb__browse__RestTreesFrame_52);
            }
            {
              mercury__string__int_to_string_2_p_0(mdb__browse__HeadVar__3_3, &mdb__browse__ArgNumS_53);
            }
            {
              mdb__browse__Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mdb__browse__Var_63, 0) = ((MR_Box) (mdb__browse__ArgNumS_53));
              MR_hl_field(MR_mktag(1), mdb__browse__Var_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[47])));
            }
            {
              mercury__string__append_list_2_p_0(mdb__browse__Var_63, &mdb__browse__BranchFrameS_54);
            }
            {
              mdb__browse__Var_67 = mdb__frame__vsize_1_f_0(mdb__browse__TreeFrame_49);
            }
            mdb__browse__Height_55 = (mdb__browse__Var_67 - (MR_Integer) 1);
            {
              mercury__list__duplicate_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, mdb__browse__Height_55, ((MR_Box) ((MR_String) "|")), &mdb__browse__VBranchFrame_56);
            }
            {
              mdb__browse__Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mdb__browse__Var_70, 0) = ((MR_Box) (mdb__browse__BranchFrameS_54));
              MR_hl_field(MR_mktag(1), mdb__browse__Var_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              mdb__browse__LeftFrame_57 = mdb__frame__vglue_2_f_0(mdb__browse__Var_70, mdb__browse__VBranchFrame_56);
            }
            {
              mdb__browse__TopFrame_58 = mdb__frame__hglue_2_f_0(mdb__browse__LeftFrame_57, mdb__browse__TreeFrame_49);
            }
            {
              *mdb__browse__HeadVar__9_9 = mdb__frame__vglue_2_f_0(mdb__browse__TopFrame_58, mdb__browse__RestTreesFrame_52);
            }
          }
      }
  }
}

static void MR_CALL 
mdb__browse__browser_term_to_string_verbose_2_8_p_0(
  MR_Word mdb__browse__BrowserDb_9,
  MR_Word mdb__browse__BrowserTerm_10,
  MR_Integer mdb__browse__MaxSize_11,
  MR_Integer mdb__browse__CurSize_12,
  MR_Integer * mdb__browse__NewSize_13,
  MR_Integer mdb__browse__MaxDepth_14,
  MR_Integer mdb__browse__CurDepth_15,
  MR_Word * mdb__browse__Frame_16)
{
  {
    MR_bool mdb__browse__succeeded;
    MR_Word mdb__browse__MaybeFunctorArityArgs_17;
    MR_Word mdb__browse__MaybeReturn_18;
    MR_String mdb__browse__Functor_19;
    MR_Word mdb__browse__Args0_21;
    MR_Tuple mdb__browse__Var_29;
    MR_Integer mdb__browse___Arity_20;

    {
      mdb__browser_info__limited_deconstruct_browser_term_cc_5_p_0(mdb__browse__BrowserDb_9, mdb__browse__BrowserTerm_10, mdb__browse__MaxSize_11, &mdb__browse__MaybeFunctorArityArgs_17, &mdb__browse__MaybeReturn_18);
    }
    mdb__browse__succeeded = (mdb__browse__CurSize_12 < mdb__browse__MaxSize_11);
    if (mdb__browse__succeeded)
      {
        mdb__browse__succeeded = (mdb__browse__CurDepth_15 < mdb__browse__MaxDepth_14);
        if (mdb__browse__succeeded)
          {
            mdb__browse__succeeded = ((MR_tag((MR_Word) mdb__browse__MaybeFunctorArityArgs_17)) == (MR_mktag((MR_Integer) 1)));
            if (mdb__browse__succeeded)
              {
                mdb__browse__Var_29 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mdb__browse__MaybeFunctorArityArgs_17, (MR_Integer) 0)));
                mdb__browse__Functor_19 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__browse__Var_29, (MR_Integer) 0)));
                mdb__browse___Arity_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browse__Var_29, (MR_Integer) 1)));
                mdb__browse__Args0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Var_29, (MR_Integer) 2)));
                mdb__browse__succeeded = MR_TRUE;
              }
          }
      }
    if (mdb__browse__succeeded)
      {
        MR_Word mdb__browse__Args_23;
        MR_Integer mdb__browse__CurSize1_24;
        MR_Integer mdb__browse__CurDepth1_25;
        MR_Word mdb__browse__ArgsFrame_27;
        MR_Word mdb__browse__Var_34;

        if ((mdb__browse__MaybeReturn_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          mdb__browse__Args_23 = mdb__browse__Args0_21;
        else
          {
            MR_Word mdb__browse__Return_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__MaybeReturn_18, (MR_Integer) 0)));
            MR_Word mdb__browse__Var_30;

            {
              mdb__browse__Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mdb__browse__Var_30, 0) = ((MR_Box) (mdb__browse__Return_22));
              MR_hl_field(MR_mktag(1), mdb__browse__Var_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              mercury__list__append_3_p_1((MR_Word) &mercury__univ__univ__type_ctor_info_univ_0, mdb__browse__Args0_21, mdb__browse__Var_30, &mdb__browse__Args_23);
            }
          }
        mdb__browse__CurSize1_24 = (mdb__browse__CurSize_12 + (MR_Integer) 1);
        mdb__browse__CurDepth1_25 = (mdb__browse__CurDepth_15 + (MR_Integer) 1);
        {
          mdb__browse__args_to_string_verbose_list_9_p_0(mdb__browse__BrowserDb_9, mdb__browse__Args_23, (MR_Integer) 1, mdb__browse__MaxSize_11, mdb__browse__CurSize1_24, mdb__browse__NewSize_13, mdb__browse__MaxDepth_14, mdb__browse__CurDepth1_25, &mdb__browse__ArgsFrame_27);
        }
        {
          mdb__browse__Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mdb__browse__Var_34, 0) = ((MR_Box) (mdb__browse__Functor_19));
          MR_hl_field(MR_mktag(1), mdb__browse__Var_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          *mdb__browse__Frame_16 = mdb__frame__vglue_2_f_0(mdb__browse__Var_34, mdb__browse__ArgsFrame_27);
        }
      }
    else
      {
        MR_String mdb__browse__Line_28;
        MR_String mdb__browse__Functor_41;
        MR_Integer mdb__browse__Arity_42;
        MR_Word mdb__browse__IsFunc_43;

        {
          mdb__browser_info__functor_browser_term_cc_5_p_0(mdb__browse__BrowserDb_9, mdb__browse__BrowserTerm_10, &mdb__browse__Functor_41, &mdb__browse__Arity_42, &mdb__browse__IsFunc_43);
        }
        mdb__browse__succeeded = (mdb__browse__Arity_42 == (MR_Integer) 0);
        if (mdb__browse__succeeded)
          mdb__browse__Line_28 = mdb__browse__Functor_41;
        else
          {
            MR_String mdb__browse__ArityStr_44;

            {
              mercury__string__int_to_string_2_p_0(mdb__browse__Arity_42, &mdb__browse__ArityStr_44);
            }
            switch (mdb__browse__IsFunc_43) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word mdb__browse__Var_45;
                  MR_Word mdb__browse__Var_46;
                  MR_Word mdb__browse__Var_48;

                  {
                    mdb__browse__Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mdb__browse__Var_48, 0) = ((MR_Box) (mdb__browse__ArityStr_44));
                    MR_hl_field(MR_mktag(1), mdb__browse__Var_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    mdb__browse__Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mdb__browse__Var_46, 0) = ((MR_Box) ((MR_String) "/"));
                    MR_hl_field(MR_mktag(1), mdb__browse__Var_46, 1) = ((MR_Box) (mdb__browse__Var_48));
                  }
                  {
                    mdb__browse__Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mdb__browse__Var_45, 0) = ((MR_Box) (mdb__browse__Functor_41));
                    MR_hl_field(MR_mktag(1), mdb__browse__Var_45, 1) = ((MR_Box) (mdb__browse__Var_46));
                  }
                  {
                    mercury__string__append_list_2_p_0(mdb__browse__Var_45, &mdb__browse__Line_28);
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word mdb__browse__Var_50;
                  MR_Word mdb__browse__Var_51;
                  MR_Word mdb__browse__Var_53;

                  {
                    mdb__browse__Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mdb__browse__Var_53, 0) = ((MR_Box) (mdb__browse__ArityStr_44));
                    MR_hl_field(MR_mktag(1), mdb__browse__Var_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[43])));
                  }
                  {
                    mdb__browse__Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mdb__browse__Var_51, 0) = ((MR_Box) ((MR_String) "/"));
                    MR_hl_field(MR_mktag(1), mdb__browse__Var_51, 1) = ((MR_Box) (mdb__browse__Var_53));
                  }
                  {
                    mdb__browse__Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mdb__browse__Var_50, 0) = ((MR_Box) (mdb__browse__Functor_41));
                    MR_hl_field(MR_mktag(1), mdb__browse__Var_50, 1) = ((MR_Box) (mdb__browse__Var_51));
                  }
                  {
                    mercury__string__append_list_2_p_0(mdb__browse__Var_50, &mdb__browse__Line_28);
                  }
                }
                break;
            }
          }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *mdb__browse__Frame_16 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__browse__Line_28));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        *mdb__browse__NewSize_13 = mdb__browse__CurSize_12;
      }
  }
}

static void MR_CALL 
mdb__browse__browser_term_to_string_verbose_7_p_0(
  MR_Word mdb__browse__BrowserDb_8,
  MR_Word mdb__browse__BrowserTerm_9,
  MR_Integer mdb__browse__MaxSize_10,
  MR_Integer mdb__browse__MaxDepth_11,
  MR_Integer mdb__browse__X_12,
  MR_Integer mdb__browse__Y_13,
  MR_String * mdb__browse__Str_14)
{
  {
    MR_bool mdb__browse__succeeded;
    MR_Word mdb__browse__Frame_18;
    MR_Word mdb__browse__ClippedFrame_19;
    MR_Word mdb__browse__Var_20;
    MR_Word mdb__browse__MaybeFunctorArityArgs_29;
    MR_Word mdb__browse__MaybeReturn_30;
    MR_String mdb__browse__Functor_31;
    MR_Word mdb__browse__Args0_33;
    MR_Tuple mdb__browse__Var_41;
    MR_Integer mdb__browse___Arity_32;

    {
      mdb__browser_info__limited_deconstruct_browser_term_cc_5_p_0(mdb__browse__BrowserDb_8, mdb__browse__BrowserTerm_9, mdb__browse__MaxSize_10, &mdb__browse__MaybeFunctorArityArgs_29, &mdb__browse__MaybeReturn_30);
    }
    mdb__browse__succeeded = ((MR_Integer) 0 < mdb__browse__MaxSize_10);
    if (mdb__browse__succeeded)
      {
        mdb__browse__succeeded = ((MR_Integer) 0 < mdb__browse__MaxDepth_11);
        if (mdb__browse__succeeded)
          {
            mdb__browse__succeeded = ((MR_tag((MR_Word) mdb__browse__MaybeFunctorArityArgs_29)) == (MR_mktag((MR_Integer) 1)));
            if (mdb__browse__succeeded)
              {
                mdb__browse__Var_41 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mdb__browse__MaybeFunctorArityArgs_29, (MR_Integer) 0)));
                mdb__browse__Functor_31 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__browse__Var_41, (MR_Integer) 0)));
                mdb__browse___Arity_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browse__Var_41, (MR_Integer) 1)));
                mdb__browse__Args0_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Var_41, (MR_Integer) 2)));
                mdb__browse__succeeded = MR_TRUE;
              }
          }
      }
    if (mdb__browse__succeeded)
      {
        MR_Word mdb__browse__Args_35;
        MR_Word mdb__browse__ArgsFrame_39;
        MR_Word mdb__browse__Var_46;
        MR_Integer mdb__browse___NewSize_17;

        if ((mdb__browse__MaybeReturn_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          mdb__browse__Args_35 = mdb__browse__Args0_33;
        else
          {
            MR_Word mdb__browse__Return_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__MaybeReturn_30, (MR_Integer) 0)));
            MR_Word mdb__browse__Var_42;

            {
              mdb__browse__Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mdb__browse__Var_42, 0) = ((MR_Box) (mdb__browse__Return_34));
              MR_hl_field(MR_mktag(1), mdb__browse__Var_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              mercury__list__append_3_p_1((MR_Word) &mercury__univ__univ__type_ctor_info_univ_0, mdb__browse__Args0_33, mdb__browse__Var_42, &mdb__browse__Args_35);
            }
          }
        {
          mdb__browse__args_to_string_verbose_list_9_p_0(mdb__browse__BrowserDb_8, mdb__browse__Args_35, (MR_Integer) 1, mdb__browse__MaxSize_10, ((MR_Integer) 0 + (MR_Integer) 1), &mdb__browse___NewSize_17, mdb__browse__MaxDepth_11, ((MR_Integer) 0 + (MR_Integer) 1), &mdb__browse__ArgsFrame_39);
        }
        {
          mdb__browse__Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mdb__browse__Var_46, 0) = ((MR_Box) (mdb__browse__Functor_31));
          MR_hl_field(MR_mktag(1), mdb__browse__Var_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          mdb__browse__Frame_18 = mdb__frame__vglue_2_f_0(mdb__browse__Var_46, mdb__browse__ArgsFrame_39);
        }
      }
    else
      {
        MR_String mdb__browse__Line_40;
        MR_String mdb__browse__Functor_53;
        MR_Integer mdb__browse__Arity_54;
        MR_Word mdb__browse__IsFunc_55;

        {
          mdb__browser_info__functor_browser_term_cc_5_p_0(mdb__browse__BrowserDb_8, mdb__browse__BrowserTerm_9, &mdb__browse__Functor_53, &mdb__browse__Arity_54, &mdb__browse__IsFunc_55);
        }
        mdb__browse__succeeded = (mdb__browse__Arity_54 == (MR_Integer) 0);
        if (mdb__browse__succeeded)
          mdb__browse__Line_40 = mdb__browse__Functor_53;
        else
          {
            MR_String mdb__browse__ArityStr_56;

            {
              mercury__string__int_to_string_2_p_0(mdb__browse__Arity_54, &mdb__browse__ArityStr_56);
            }
            switch (mdb__browse__IsFunc_55) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word mdb__browse__Var_57;
                  MR_Word mdb__browse__Var_58;
                  MR_Word mdb__browse__Var_60;

                  {
                    mdb__browse__Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mdb__browse__Var_60, 0) = ((MR_Box) (mdb__browse__ArityStr_56));
                    MR_hl_field(MR_mktag(1), mdb__browse__Var_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    mdb__browse__Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mdb__browse__Var_58, 0) = ((MR_Box) ((MR_String) "/"));
                    MR_hl_field(MR_mktag(1), mdb__browse__Var_58, 1) = ((MR_Box) (mdb__browse__Var_60));
                  }
                  {
                    mdb__browse__Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mdb__browse__Var_57, 0) = ((MR_Box) (mdb__browse__Functor_53));
                    MR_hl_field(MR_mktag(1), mdb__browse__Var_57, 1) = ((MR_Box) (mdb__browse__Var_58));
                  }
                  {
                    mercury__string__append_list_2_p_0(mdb__browse__Var_57, &mdb__browse__Line_40);
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word mdb__browse__Var_62;
                  MR_Word mdb__browse__Var_63;
                  MR_Word mdb__browse__Var_65;

                  {
                    mdb__browse__Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mdb__browse__Var_65, 0) = ((MR_Box) (mdb__browse__ArityStr_56));
                    MR_hl_field(MR_mktag(1), mdb__browse__Var_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[43])));
                  }
                  {
                    mdb__browse__Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mdb__browse__Var_63, 0) = ((MR_Box) ((MR_String) "/"));
                    MR_hl_field(MR_mktag(1), mdb__browse__Var_63, 1) = ((MR_Box) (mdb__browse__Var_65));
                  }
                  {
                    mdb__browse__Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mdb__browse__Var_62, 0) = ((MR_Box) (mdb__browse__Functor_53));
                    MR_hl_field(MR_mktag(1), mdb__browse__Var_62, 1) = ((MR_Box) (mdb__browse__Var_63));
                  }
                  {
                    mercury__string__append_list_2_p_0(mdb__browse__Var_62, &mdb__browse__Line_40);
                  }
                }
                break;
            }
          }
        {
          mdb__browse__Frame_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mdb__browse__Frame_18, 0) = ((MR_Box) (mdb__browse__Line_40));
          MR_hl_field(MR_mktag(1), mdb__browse__Frame_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
    {
      mdb__browse__Var_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__browse__Var_20, 0) = ((MR_Box) (mdb__browse__X_12));
      MR_hl_field(MR_mktag(0), mdb__browse__Var_20, 1) = ((MR_Box) (mdb__browse__Y_13));
    }
    {
      mdb__browse__ClippedFrame_19 = mdb__frame__clip_2_f_0(mdb__browse__Var_20, mdb__browse__Frame_18);
    }
    {
      mdb__browse__unlines_2_p_0(mdb__browse__ClippedFrame_19, mdb__browse__Str_14);
    }
  }
}

static MR_String MR_CALL 
mdb__browse__comma_string_list_1_f_0(
  MR_Word mdb__browse__Args_3)
{
  {
    MR_bool mdb__browse__succeeded;
    MR_String mdb__browse__Str_4;

    if ((mdb__browse__Args_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mdb__browse__Str_4 = (MR_String) "";
    else
      {
        MR_Word mdb__browse__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__Args_3, (MR_Integer) 1)));
        MR_String mdb__browse__Var_19 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browse__Args_3, (MR_Integer) 0)));

        if ((mdb__browse__Var_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          mdb__browse__Str_4 = mdb__browse__Var_19;
        else
          {
            MR_String mdb__browse__Rest_9;
            MR_Word mdb__browse__Var_12;
            MR_Word mdb__browse__Var_13;
            MR_Word mdb__browse__Var_15;
            MR_Word mdb__browse__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__Var_18, (MR_Integer) 1)));
            MR_String mdb__browse__Var_36 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browse__Var_18, (MR_Integer) 0)));

            if ((mdb__browse__Var_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              mdb__browse__Rest_9 = mdb__browse__Var_36;
            else
              {
                MR_String mdb__browse__Rest_26;
                MR_Word mdb__browse__Var_29;
                MR_Word mdb__browse__Var_30;
                MR_Word mdb__browse__Var_32;

                {
                  mdb__browse__Rest_26 = mdb__browse__comma_string_list_1_f_0(mdb__browse__Var_35);
                }
                {
                  mdb__browse__Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mdb__browse__Var_32, 0) = ((MR_Box) (mdb__browse__Rest_26));
                  MR_hl_field(MR_mktag(1), mdb__browse__Var_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  mdb__browse__Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mdb__browse__Var_30, 0) = ((MR_Box) ((MR_String) ", "));
                  MR_hl_field(MR_mktag(1), mdb__browse__Var_30, 1) = ((MR_Box) (mdb__browse__Var_32));
                }
                {
                  mdb__browse__Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mdb__browse__Var_29, 0) = ((MR_Box) (mdb__browse__Var_36));
                  MR_hl_field(MR_mktag(1), mdb__browse__Var_29, 1) = ((MR_Box) (mdb__browse__Var_30));
                }
                {
                  mercury__string__append_list_2_p_0(mdb__browse__Var_29, &mdb__browse__Rest_9);
                }
              }
            {
              mdb__browse__Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mdb__browse__Var_15, 0) = ((MR_Box) (mdb__browse__Rest_9));
              MR_hl_field(MR_mktag(1), mdb__browse__Var_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              mdb__browse__Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mdb__browse__Var_13, 0) = ((MR_Box) ((MR_String) ", "));
              MR_hl_field(MR_mktag(1), mdb__browse__Var_13, 1) = ((MR_Box) (mdb__browse__Var_15));
            }
            {
              mdb__browse__Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mdb__browse__Var_12, 0) = ((MR_Box) (mdb__browse__Var_19));
              MR_hl_field(MR_mktag(1), mdb__browse__Var_12, 1) = ((MR_Box) (mdb__browse__Var_13));
            }
            {
              mercury__string__append_list_2_p_0(mdb__browse__Var_12, &mdb__browse__Str_4);
            }
          }
      }
    return mdb__browse__Str_4;
  }
}

static void MR_CALL 
mdb__browse__args_to_string_list_8_p_0(
  MR_Word mdb__browse__HeadVar__1_1,
  MR_Word mdb__browse__HeadVar__2_2,
  MR_Integer mdb__browse__HeadVar__3_3,
  MR_Integer mdb__browse__CurSize_4,
  MR_Integer * mdb__browse__NewSize_5,
  MR_Integer mdb__browse__HeadVar__6_6,
  MR_Integer mdb__browse__HeadVar__7_7,
  MR_Word * mdb__browse__Strs_8)
{
  {
    MR_bool mdb__browse__succeeded;

    if ((mdb__browse__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mdb__browse__Strs_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *mdb__browse__NewSize_5 = mdb__browse__CurSize_4;
      }
    else
      {
        MR_Word mdb__browse__Univ_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mdb__browse__Univs_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer mdb__browse__NewSize1_25;
        MR_String mdb__browse__Str_26;
        MR_Word mdb__browse__RestStrs_27;
        MR_Word mdb__browse__Var_28;
        MR_Word mdb__browse__MaybeFunctorArityArgs_37;
        MR_Word mdb__browse__MaybeReturn_38;
        MR_String mdb__browse__Functor_39;
        MR_Word mdb__browse__Args_41;
        MR_Tuple mdb__browse__Var_42;
        MR_Integer mdb__browse___Arity_40;

        {
          mdb__browse__Var_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mdb__browse__Var_28, 0) = ((MR_Box) (mdb__browse__Univ_17));
        }
        {
          mdb__browser_info__limited_deconstruct_browser_term_cc_5_p_0(mdb__browse__HeadVar__1_1, mdb__browse__Var_28, mdb__browse__HeadVar__3_3, &mdb__browse__MaybeFunctorArityArgs_37, &mdb__browse__MaybeReturn_38);
        }
        mdb__browse__succeeded = (mdb__browse__CurSize_4 < mdb__browse__HeadVar__3_3);
        if (mdb__browse__succeeded)
          {
            mdb__browse__succeeded = (mdb__browse__HeadVar__7_7 < mdb__browse__HeadVar__6_6);
            if (mdb__browse__succeeded)
              {
                mdb__browse__succeeded = ((MR_tag((MR_Word) mdb__browse__MaybeFunctorArityArgs_37)) == (MR_mktag((MR_Integer) 1)));
                if (mdb__browse__succeeded)
                  {
                    mdb__browse__Var_42 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mdb__browse__MaybeFunctorArityArgs_37, (MR_Integer) 0)));
                    mdb__browse__Functor_39 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__browse__Var_42, (MR_Integer) 0)));
                    mdb__browse___Arity_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browse__Var_42, (MR_Integer) 1)));
                    mdb__browse__Args_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Var_42, (MR_Integer) 2)));
                    mdb__browse__succeeded = MR_TRUE;
                  }
              }
          }
        if (mdb__browse__succeeded)
          {
            mdb__browse__browser_term_to_string_3_10_p_0(mdb__browse__HeadVar__1_1, mdb__browse__Functor_39, mdb__browse__Args_41, mdb__browse__MaybeReturn_38, mdb__browse__HeadVar__3_3, mdb__browse__CurSize_4, &mdb__browse__NewSize1_25, mdb__browse__HeadVar__6_6, mdb__browse__HeadVar__7_7, &mdb__browse__Str_26);
          }
        else
          {
            MR_String mdb__browse__Functor_46;
            MR_Integer mdb__browse__Arity_47;
            MR_Word mdb__browse__IsFunc_48;

            {
              mdb__browser_info__functor_browser_term_cc_5_p_0(mdb__browse__HeadVar__1_1, mdb__browse__Var_28, &mdb__browse__Functor_46, &mdb__browse__Arity_47, &mdb__browse__IsFunc_48);
            }
            mdb__browse__succeeded = (mdb__browse__Arity_47 == (MR_Integer) 0);
            if (mdb__browse__succeeded)
              mdb__browse__Str_26 = mdb__browse__Functor_46;
            else
              {
                MR_String mdb__browse__ArityStr_49;

                {
                  mercury__string__int_to_string_2_p_0(mdb__browse__Arity_47, &mdb__browse__ArityStr_49);
                }
                switch (mdb__browse__IsFunc_48) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word mdb__browse__Var_50;
                      MR_Word mdb__browse__Var_51;
                      MR_Word mdb__browse__Var_53;

                      {
                        mdb__browse__Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), mdb__browse__Var_53, 0) = ((MR_Box) (mdb__browse__ArityStr_49));
                        MR_hl_field(MR_mktag(1), mdb__browse__Var_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                      {
                        mdb__browse__Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), mdb__browse__Var_51, 0) = ((MR_Box) ((MR_String) "/"));
                        MR_hl_field(MR_mktag(1), mdb__browse__Var_51, 1) = ((MR_Box) (mdb__browse__Var_53));
                      }
                      {
                        mdb__browse__Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), mdb__browse__Var_50, 0) = ((MR_Box) (mdb__browse__Functor_46));
                        MR_hl_field(MR_mktag(1), mdb__browse__Var_50, 1) = ((MR_Box) (mdb__browse__Var_51));
                      }
                      {
                        mercury__string__append_list_2_p_0(mdb__browse__Var_50, &mdb__browse__Str_26);
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word mdb__browse__Var_55;
                      MR_Word mdb__browse__Var_56;
                      MR_Word mdb__browse__Var_58;

                      {
                        mdb__browse__Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), mdb__browse__Var_58, 0) = ((MR_Box) (mdb__browse__ArityStr_49));
                        MR_hl_field(MR_mktag(1), mdb__browse__Var_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[43])));
                      }
                      {
                        mdb__browse__Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), mdb__browse__Var_56, 0) = ((MR_Box) ((MR_String) "/"));
                        MR_hl_field(MR_mktag(1), mdb__browse__Var_56, 1) = ((MR_Box) (mdb__browse__Var_58));
                      }
                      {
                        mdb__browse__Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), mdb__browse__Var_55, 0) = ((MR_Box) (mdb__browse__Functor_46));
                        MR_hl_field(MR_mktag(1), mdb__browse__Var_55, 1) = ((MR_Box) (mdb__browse__Var_56));
                      }
                      {
                        mercury__string__append_list_2_p_0(mdb__browse__Var_55, &mdb__browse__Str_26);
                      }
                    }
                    break;
                }
              }
            mdb__browse__NewSize1_25 = mdb__browse__CurSize_4;
          }
        {
          mdb__browse__args_to_string_list_8_p_0(mdb__browse__HeadVar__1_1, mdb__browse__Univs_18, mdb__browse__HeadVar__3_3, mdb__browse__NewSize1_25, mdb__browse__NewSize_5, mdb__browse__HeadVar__6_6, mdb__browse__HeadVar__7_7, &mdb__browse__RestStrs_27);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *mdb__browse__Strs_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__browse__Str_26));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__browse__RestStrs_27));
        }
      }
  }
}

static void MR_CALL 
mdb__browse__list_tail_to_string_list_8_p_0(
  MR_Word mdb__browse__BrowserDb_9,
  MR_Word mdb__browse__TailUniv_10,
  MR_Integer mdb__browse__MaxSize_11,
  MR_Integer mdb__browse__Size0_12,
  MR_Integer * mdb__browse__Size_13,
  MR_Integer mdb__browse__MaxDepth_14,
  MR_Integer mdb__browse__Depth0_15,
  MR_Word * mdb__browse__TailStrs_16)
{
  {
    MR_bool mdb__browse__succeeded;
    MR_Integer mdb__browse__Limit_17;
    MR_Word mdb__browse__MaybeFunctorArityArgs_18;
    MR_Word mdb__browse__MaybeReturn_19;
    MR_Word mdb__browse__Var_31;

    {
      mdb__browse__Limit_17 = mercury__int__max_2_f_0(mdb__browse__MaxSize_11, (MR_Integer) 2);
    }
    {
      mdb__browse__Var_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__browse__Var_31, 0) = ((MR_Box) (mdb__browse__TailUniv_10));
    }
    {
      mdb__browser_info__limited_deconstruct_browser_term_cc_5_p_0(mdb__browse__BrowserDb_9, mdb__browse__Var_31, mdb__browse__Limit_17, &mdb__browse__MaybeFunctorArityArgs_18, &mdb__browse__MaybeReturn_19);
    }
    if ((mdb__browse__MaybeFunctorArityArgs_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word mdb__browse__Var_34;
        MR_String mdb__browse__TailCompressedStr_51;
        MR_String mdb__browse__Functor_55;
        MR_Integer mdb__browse__Arity_56;
        MR_Word mdb__browse__IsFunc_57;

        *mdb__browse__Size_13 = mdb__browse__Size0_12;
        {
          mdb__browser_info__functor_browser_term_cc_5_p_0(mdb__browse__BrowserDb_9, mdb__browse__Var_31, &mdb__browse__Functor_55, &mdb__browse__Arity_56, &mdb__browse__IsFunc_57);
        }
        mdb__browse__succeeded = (mdb__browse__Arity_56 == (MR_Integer) 0);
        if (mdb__browse__succeeded)
          mdb__browse__TailCompressedStr_51 = mdb__browse__Functor_55;
        else
          {
            MR_String mdb__browse__ArityStr_58;

            {
              mercury__string__int_to_string_2_p_0(mdb__browse__Arity_56, &mdb__browse__ArityStr_58);
            }
            switch (mdb__browse__IsFunc_57) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word mdb__browse__Var_59;
                  MR_Word mdb__browse__Var_60;
                  MR_Word mdb__browse__Var_62;

                  {
                    mdb__browse__Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mdb__browse__Var_62, 0) = ((MR_Box) (mdb__browse__ArityStr_58));
                    MR_hl_field(MR_mktag(1), mdb__browse__Var_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    mdb__browse__Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mdb__browse__Var_60, 0) = ((MR_Box) ((MR_String) "/"));
                    MR_hl_field(MR_mktag(1), mdb__browse__Var_60, 1) = ((MR_Box) (mdb__browse__Var_62));
                  }
                  {
                    mdb__browse__Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mdb__browse__Var_59, 0) = ((MR_Box) (mdb__browse__Functor_55));
                    MR_hl_field(MR_mktag(1), mdb__browse__Var_59, 1) = ((MR_Box) (mdb__browse__Var_60));
                  }
                  {
                    mercury__string__append_list_2_p_0(mdb__browse__Var_59, &mdb__browse__TailCompressedStr_51);
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word mdb__browse__Var_64;
                  MR_Word mdb__browse__Var_65;
                  MR_Word mdb__browse__Var_67;

                  {
                    mdb__browse__Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mdb__browse__Var_67, 0) = ((MR_Box) (mdb__browse__ArityStr_58));
                    MR_hl_field(MR_mktag(1), mdb__browse__Var_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[43])));
                  }
                  {
                    mdb__browse__Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mdb__browse__Var_65, 0) = ((MR_Box) ((MR_String) "/"));
                    MR_hl_field(MR_mktag(1), mdb__browse__Var_65, 1) = ((MR_Box) (mdb__browse__Var_67));
                  }
                  {
                    mdb__browse__Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mdb__browse__Var_64, 0) = ((MR_Box) (mdb__browse__Functor_55));
                    MR_hl_field(MR_mktag(1), mdb__browse__Var_64, 1) = ((MR_Box) (mdb__browse__Var_65));
                  }
                  {
                    mercury__string__append_list_2_p_0(mdb__browse__Var_64, &mdb__browse__TailCompressedStr_51);
                  }
                }
                break;
            }
          }
        {
          mdb__browse__Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mdb__browse__Var_34, 0) = ((MR_Box) (mdb__browse__TailCompressedStr_51));
          MR_hl_field(MR_mktag(1), mdb__browse__Var_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *mdb__browse__TailStrs_16 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) " | "));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__browse__Var_34));
        }
      }
    else
      {
        MR_String mdb__browse__Functor_20;
        MR_Word mdb__browse__Args_22;
        MR_Tuple mdb__browse__Var_36 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mdb__browse__MaybeFunctorArityArgs_18, (MR_Integer) 0)));
        MR_Integer mdb__browse___Arity_21;

        mdb__browse__Functor_20 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__browse__Var_36, (MR_Integer) 0)));
        mdb__browse___Arity_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browse__Var_36, (MR_Integer) 1)));
        mdb__browse__Args_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Var_36, (MR_Integer) 2)));
        mdb__browse__succeeded = (strcmp(mdb__browse__Functor_20, (MR_String) "[]") == 0);
        if (mdb__browse__succeeded)
          {
            mdb__browse__succeeded = (mdb__browse__Args_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (mdb__browse__succeeded)
              mdb__browse__succeeded = (mdb__browse__MaybeReturn_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
        if (mdb__browse__succeeded)
          {
            *mdb__browse__Size_13 = mdb__browse__Size0_12;
            *mdb__browse__TailStrs_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
        else
          {
            MR_Word mdb__browse__ListHead_23;
            MR_Word mdb__browse__ListTail_24;
            MR_Word mdb__browse__Var_37;
            MR_Word mdb__browse__Var_38;

            mdb__browse__succeeded = (strcmp(mdb__browse__Functor_20, (MR_String) "[|]") == 0);
            if (mdb__browse__succeeded)
              {
                mdb__browse__succeeded = (mdb__browse__MaybeReturn_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (mdb__browse__succeeded)
                  {
                    mdb__browse__succeeded = ((MR_tag((MR_Word) mdb__browse__Args_22)) == (MR_mktag((MR_Integer) 1)));
                    if (mdb__browse__succeeded)
                      {
                        mdb__browse__ListHead_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__Args_22, (MR_Integer) 0)));
                        mdb__browse__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__Args_22, (MR_Integer) 1)));
                        mdb__browse__succeeded = ((MR_tag((MR_Word) mdb__browse__Var_37)) == (MR_mktag((MR_Integer) 1)));
                        if (mdb__browse__succeeded)
                          {
                            mdb__browse__ListTail_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__Var_37, (MR_Integer) 0)));
                            mdb__browse__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__Var_37, (MR_Integer) 1)));
                            mdb__browse__succeeded = (mdb__browse__Var_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                      }
                  }
              }
            if (mdb__browse__succeeded)
              {
                mdb__browse__succeeded = (mdb__browse__Size0_12 < mdb__browse__MaxSize_11);
                if (mdb__browse__succeeded)
                  mdb__browse__succeeded = (mdb__browse__Depth0_15 < mdb__browse__MaxDepth_14);
                if (mdb__browse__succeeded)
                  {
                    MR_Integer mdb__browse__Size1_25;
                    MR_String mdb__browse__HeadStr_26;
                    MR_Word mdb__browse__TailStrs0_27;
                    MR_Word mdb__browse__Var_39;
                    MR_Word mdb__browse__Var_41;

                    {
                      mdb__browse__Var_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), mdb__browse__Var_39, 0) = ((MR_Box) (mdb__browse__ListHead_23));
                    }
                    {
                      mdb__browse__browser_term_to_string_2_8_p_0(mdb__browse__BrowserDb_9, mdb__browse__Var_39, mdb__browse__MaxSize_11, mdb__browse__Size0_12, &mdb__browse__Size1_25, mdb__browse__MaxDepth_14, mdb__browse__Depth0_15, &mdb__browse__HeadStr_26);
                    }
                    {
                      mdb__browse__list_tail_to_string_list_8_p_0(mdb__browse__BrowserDb_9, mdb__browse__ListTail_24, mdb__browse__MaxSize_11, mdb__browse__Size1_25, mdb__browse__Size_13, mdb__browse__MaxDepth_14, mdb__browse__Depth0_15, &mdb__browse__TailStrs0_27);
                    }
                    {
                      mdb__browse__Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), mdb__browse__Var_41, 0) = ((MR_Box) (mdb__browse__HeadStr_26));
                      MR_hl_field(MR_mktag(1), mdb__browse__Var_41, 1) = ((MR_Box) (mdb__browse__TailStrs0_27));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *mdb__browse__TailStrs_16 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) ", "));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__browse__Var_41));
                    }
                  }
                else
                  {
                    *mdb__browse__Size_13 = mdb__browse__Size0_12;
                    *mdb__browse__TailStrs_16 = (MR_Word) MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[46]);
                  }
              }
            else
              {
                mdb__browse__succeeded = (mdb__browse__Size0_12 < mdb__browse__MaxSize_11);
                if (mdb__browse__succeeded)
                  mdb__browse__succeeded = (mdb__browse__Depth0_15 < mdb__browse__MaxDepth_14);
                if (mdb__browse__succeeded)
                  {
                    MR_String mdb__browse__TailStr_28;
                    MR_Word mdb__browse__Var_45;

                    {
                      mdb__browse__browser_term_to_string_3_10_p_0(mdb__browse__BrowserDb_9, mdb__browse__Functor_20, mdb__browse__Args_22, mdb__browse__MaybeReturn_19, mdb__browse__MaxSize_11, mdb__browse__Size0_12, mdb__browse__Size_13, mdb__browse__MaxDepth_14, mdb__browse__Depth0_15, &mdb__browse__TailStr_28);
                    }
                    {
                      mdb__browse__Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), mdb__browse__Var_45, 0) = ((MR_Box) (mdb__browse__TailStr_28));
                      MR_hl_field(MR_mktag(1), mdb__browse__Var_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *mdb__browse__TailStrs_16 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) " | "));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__browse__Var_45));
                    }
                  }
                else
                  {
                    MR_String mdb__browse__TailCompressedStr_29;
                    MR_Word mdb__browse__Var_49;
                    MR_String mdb__browse__Functor_74;
                    MR_Integer mdb__browse__Arity_75;
                    MR_Word mdb__browse__IsFunc_76;

                    *mdb__browse__Size_13 = mdb__browse__Size0_12;
                    {
                      mdb__browser_info__functor_browser_term_cc_5_p_0(mdb__browse__BrowserDb_9, mdb__browse__Var_31, &mdb__browse__Functor_74, &mdb__browse__Arity_75, &mdb__browse__IsFunc_76);
                    }
                    mdb__browse__succeeded = (mdb__browse__Arity_75 == (MR_Integer) 0);
                    if (mdb__browse__succeeded)
                      mdb__browse__TailCompressedStr_29 = mdb__browse__Functor_74;
                    else
                      {
                        MR_String mdb__browse__ArityStr_77;

                        {
                          mercury__string__int_to_string_2_p_0(mdb__browse__Arity_75, &mdb__browse__ArityStr_77);
                        }
                        switch (mdb__browse__IsFunc_76) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            {
                              MR_Word mdb__browse__Var_78;
                              MR_Word mdb__browse__Var_79;
                              MR_Word mdb__browse__Var_81;

                              {
                                mdb__browse__Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), mdb__browse__Var_81, 0) = ((MR_Box) (mdb__browse__ArityStr_77));
                                MR_hl_field(MR_mktag(1), mdb__browse__Var_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              }
                              {
                                mdb__browse__Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), mdb__browse__Var_79, 0) = ((MR_Box) ((MR_String) "/"));
                                MR_hl_field(MR_mktag(1), mdb__browse__Var_79, 1) = ((MR_Box) (mdb__browse__Var_81));
                              }
                              {
                                mdb__browse__Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), mdb__browse__Var_78, 0) = ((MR_Box) (mdb__browse__Functor_74));
                                MR_hl_field(MR_mktag(1), mdb__browse__Var_78, 1) = ((MR_Box) (mdb__browse__Var_79));
                              }
                              {
                                mercury__string__append_list_2_p_0(mdb__browse__Var_78, &mdb__browse__TailCompressedStr_29);
                              }
                            }
                            break;
                          case (MR_Integer) 1:
                            {
                              MR_Word mdb__browse__Var_83;
                              MR_Word mdb__browse__Var_84;
                              MR_Word mdb__browse__Var_86;

                              {
                                mdb__browse__Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), mdb__browse__Var_86, 0) = ((MR_Box) (mdb__browse__ArityStr_77));
                                MR_hl_field(MR_mktag(1), mdb__browse__Var_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[43])));
                              }
                              {
                                mdb__browse__Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), mdb__browse__Var_84, 0) = ((MR_Box) ((MR_String) "/"));
                                MR_hl_field(MR_mktag(1), mdb__browse__Var_84, 1) = ((MR_Box) (mdb__browse__Var_86));
                              }
                              {
                                mdb__browse__Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), mdb__browse__Var_83, 0) = ((MR_Box) (mdb__browse__Functor_74));
                                MR_hl_field(MR_mktag(1), mdb__browse__Var_83, 1) = ((MR_Box) (mdb__browse__Var_84));
                              }
                              {
                                mercury__string__append_list_2_p_0(mdb__browse__Var_83, &mdb__browse__TailCompressedStr_29);
                              }
                            }
                            break;
                        }
                      }
                    {
                      mdb__browse__Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), mdb__browse__Var_49, 0) = ((MR_Box) (mdb__browse__TailCompressedStr_29));
                      MR_hl_field(MR_mktag(1), mdb__browse__Var_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *mdb__browse__TailStrs_16 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) " | "));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__browse__Var_49));
                    }
                  }
              }
          }
      }
  }
}

static void MR_CALL 
mdb__browse__browser_term_to_string_3_10_p_0(
  MR_Word mdb__browse__BrowserDb_11,
  MR_String mdb__browse__Functor_12,
  MR_Word mdb__browse__Args_13,
  MR_Word mdb__browse__MaybeReturn_14,
  MR_Integer mdb__browse__MaxSize_15,
  MR_Integer mdb__browse__Size0_16,
  MR_Integer * mdb__browse__Size_17,
  MR_Integer mdb__browse__MaxDepth_18,
  MR_Integer mdb__browse__Depth0_19,
  MR_String * mdb__browse__Str_20)
{
  {
    MR_bool mdb__browse__succeeded = (strcmp(mdb__browse__Functor_12, (MR_String) "[|]") == 0);
    MR_Word mdb__browse__ListHead_21;
    MR_Word mdb__browse__ListTail_22;
    MR_Word mdb__browse__Var_33;
    MR_Word mdb__browse__Var_34;

    if (mdb__browse__succeeded)
      {
        mdb__browse__succeeded = (mdb__browse__MaybeReturn_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (mdb__browse__succeeded)
          {
            mdb__browse__succeeded = ((MR_tag((MR_Word) mdb__browse__Args_13)) == (MR_mktag((MR_Integer) 1)));
            if (mdb__browse__succeeded)
              {
                mdb__browse__ListHead_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__Args_13, (MR_Integer) 0)));
                mdb__browse__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__Args_13, (MR_Integer) 1)));
                mdb__browse__succeeded = ((MR_tag((MR_Word) mdb__browse__Var_33)) == (MR_mktag((MR_Integer) 1)));
                if (mdb__browse__succeeded)
                  {
                    mdb__browse__ListTail_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__Var_33, (MR_Integer) 0)));
                    mdb__browse__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__Var_33, (MR_Integer) 1)));
                    mdb__browse__succeeded = (mdb__browse__Var_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
              }
          }
      }
    if (mdb__browse__succeeded)
      {
        MR_Integer mdb__browse__Size1_23 = (mdb__browse__Size0_16 + (MR_Integer) 1);
        MR_Integer mdb__browse__Depth1_24 = (mdb__browse__Depth0_19 + (MR_Integer) 1);
        MR_Integer mdb__browse__Size2_25;
        MR_String mdb__browse__HeadStr_26;
        MR_Word mdb__browse__TailStrs_27;
        MR_Word mdb__browse__Strs_28;
        MR_Word mdb__browse__Var_37;
        MR_Word mdb__browse__Var_41;
        MR_Word mdb__browse__Var_43;

        {
          mdb__browse__Var_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mdb__browse__Var_37, 0) = ((MR_Box) (mdb__browse__ListHead_21));
        }
        {
          mdb__browse__browser_term_to_string_2_8_p_0(mdb__browse__BrowserDb_11, mdb__browse__Var_37, mdb__browse__MaxSize_15, mdb__browse__Size1_23, &mdb__browse__Size2_25, mdb__browse__MaxDepth_18, mdb__browse__Depth1_24, &mdb__browse__HeadStr_26);
        }
        {
          mdb__browse__list_tail_to_string_list_8_p_0(mdb__browse__BrowserDb_11, mdb__browse__ListTail_22, mdb__browse__MaxSize_15, mdb__browse__Size2_25, mdb__browse__Size_17, mdb__browse__MaxDepth_18, mdb__browse__Depth1_24, &mdb__browse__TailStrs_27);
        }
        {
          mercury__list__append_3_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, mdb__browse__TailStrs_27, (MR_Word) MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[44]), &mdb__browse__Strs_28);
        }
        {
          mdb__browse__Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mdb__browse__Var_43, 0) = ((MR_Box) (mdb__browse__HeadStr_26));
          MR_hl_field(MR_mktag(1), mdb__browse__Var_43, 1) = ((MR_Box) (mdb__browse__Strs_28));
        }
        {
          mdb__browse__Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mdb__browse__Var_41, 0) = ((MR_Box) ((MR_String) "["));
          MR_hl_field(MR_mktag(1), mdb__browse__Var_41, 1) = ((MR_Box) (mdb__browse__Var_43));
        }
        {
          mercury__string__append_list_2_p_0(mdb__browse__Var_41, mdb__browse__Str_20);
        }
      }
    else
      {
        mdb__browse__succeeded = (strcmp(mdb__browse__Functor_12, (MR_String) "[]") == 0);
        if (mdb__browse__succeeded)
          {
            mdb__browse__succeeded = (mdb__browse__Args_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (mdb__browse__succeeded)
              mdb__browse__succeeded = (mdb__browse__MaybeReturn_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
        if (mdb__browse__succeeded)
          {
            *mdb__browse__Size_17 = (mdb__browse__Size0_16 + (MR_Integer) 1);
            *mdb__browse__Str_20 = (MR_String) "[]";
          }
        else
          {
            MR_Word mdb__browse__ArgStrs_29;
            MR_String mdb__browse__BracketedArgsStr_30;
            MR_Integer mdb__browse__Size1_57 = (mdb__browse__Size0_16 + (MR_Integer) 1);
            MR_Integer mdb__browse__Depth1_58 = (mdb__browse__Depth0_19 + (MR_Integer) 1);
            MR_Integer mdb__browse__Size2_59;

            {
              mdb__browse__args_to_string_list_8_p_0(mdb__browse__BrowserDb_11, mdb__browse__Args_13, mdb__browse__MaxSize_15, mdb__browse__Size1_57, &mdb__browse__Size2_59, mdb__browse__MaxDepth_18, mdb__browse__Depth1_58, &mdb__browse__ArgStrs_29);
            }
            if ((mdb__browse__ArgStrs_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              mdb__browse__BracketedArgsStr_30 = (MR_String) "";
            else
              {
                MR_Word mdb__browse__Var_68;
                MR_Word mdb__browse__Var_70;
                MR_String mdb__browse__Var_71;

                {
                  mdb__browse__Var_71 = mdb__browse__comma_string_list_1_f_0(mdb__browse__ArgStrs_29);
                }
                {
                  mdb__browse__Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mdb__browse__Var_70, 0) = ((MR_Box) (mdb__browse__Var_71));
                  MR_hl_field(MR_mktag(1), mdb__browse__Var_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[45])));
                }
                {
                  mdb__browse__Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mdb__browse__Var_68, 0) = ((MR_Box) ((MR_String) "("));
                  MR_hl_field(MR_mktag(1), mdb__browse__Var_68, 1) = ((MR_Box) (mdb__browse__Var_70));
                }
                {
                  mercury__string__append_list_2_p_0(mdb__browse__Var_68, &mdb__browse__BracketedArgsStr_30);
                }
              }
            if ((mdb__browse__MaybeReturn_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word mdb__browse__Var_47;
                MR_Word mdb__browse__Var_48;

                *mdb__browse__Size_17 = mdb__browse__Size2_59;
                {
                  mdb__browse__Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mdb__browse__Var_48, 0) = ((MR_Box) (mdb__browse__BracketedArgsStr_30));
                  MR_hl_field(MR_mktag(1), mdb__browse__Var_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  mdb__browse__Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mdb__browse__Var_47, 0) = ((MR_Box) (mdb__browse__Functor_12));
                  MR_hl_field(MR_mktag(1), mdb__browse__Var_47, 1) = ((MR_Box) (mdb__browse__Var_48));
                }
                {
                  mercury__string__append_list_2_p_0(mdb__browse__Var_47, mdb__browse__Str_20);
                }
              }
            else
              {
                MR_Word mdb__browse__Return_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__MaybeReturn_14, (MR_Integer) 0)));
                MR_String mdb__browse__ReturnStr_32;
                MR_Word mdb__browse__Var_50;
                MR_Word mdb__browse__Var_51;
                MR_Word mdb__browse__Var_52;
                MR_Word mdb__browse__Var_53;
                MR_Word mdb__browse__Var_55;

                {
                  mdb__browse__Var_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mdb__browse__Var_50, 0) = ((MR_Box) (mdb__browse__Return_31));
                }
                {
                  mdb__browse__browser_term_to_string_2_8_p_0(mdb__browse__BrowserDb_11, mdb__browse__Var_50, mdb__browse__MaxSize_15, mdb__browse__Size2_59, mdb__browse__Size_17, mdb__browse__MaxDepth_18, mdb__browse__Depth1_58, &mdb__browse__ReturnStr_32);
                }
                {
                  mdb__browse__Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mdb__browse__Var_55, 0) = ((MR_Box) (mdb__browse__ReturnStr_32));
                  MR_hl_field(MR_mktag(1), mdb__browse__Var_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  mdb__browse__Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mdb__browse__Var_53, 0) = ((MR_Box) ((MR_String) " = "));
                  MR_hl_field(MR_mktag(1), mdb__browse__Var_53, 1) = ((MR_Box) (mdb__browse__Var_55));
                }
                {
                  mdb__browse__Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mdb__browse__Var_52, 0) = ((MR_Box) (mdb__browse__BracketedArgsStr_30));
                  MR_hl_field(MR_mktag(1), mdb__browse__Var_52, 1) = ((MR_Box) (mdb__browse__Var_53));
                }
                {
                  mdb__browse__Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mdb__browse__Var_51, 0) = ((MR_Box) (mdb__browse__Functor_12));
                  MR_hl_field(MR_mktag(1), mdb__browse__Var_51, 1) = ((MR_Box) (mdb__browse__Var_52));
                }
                {
                  mercury__string__append_list_2_p_0(mdb__browse__Var_51, mdb__browse__Str_20);
                }
              }
          }
      }
  }
}

static void MR_CALL 
mdb__browse__browser_term_to_string_2_8_p_0(
  MR_Word mdb__browse__BrowserDb_9,
  MR_Word mdb__browse__BrowserTerm_10,
  MR_Integer mdb__browse__MaxSize_11,
  MR_Integer mdb__browse__CurSize_12,
  MR_Integer * mdb__browse__NewSize_13,
  MR_Integer mdb__browse__MaxDepth_14,
  MR_Integer mdb__browse__CurDepth_15,
  MR_String * mdb__browse__Str_16)
{
  {
    MR_bool mdb__browse__succeeded;
    MR_Word mdb__browse__MaybeFunctorArityArgs_17;
    MR_Word mdb__browse__MaybeReturn_18;
    MR_String mdb__browse__Functor_19;
    MR_Word mdb__browse__Args_21;
    MR_Tuple mdb__browse__Var_22;
    MR_Integer mdb__browse___Arity_20;

    {
      mdb__browser_info__limited_deconstruct_browser_term_cc_5_p_0(mdb__browse__BrowserDb_9, mdb__browse__BrowserTerm_10, mdb__browse__MaxSize_11, &mdb__browse__MaybeFunctorArityArgs_17, &mdb__browse__MaybeReturn_18);
    }
    mdb__browse__succeeded = (mdb__browse__CurSize_12 < mdb__browse__MaxSize_11);
    if (mdb__browse__succeeded)
      {
        mdb__browse__succeeded = (mdb__browse__CurDepth_15 < mdb__browse__MaxDepth_14);
        if (mdb__browse__succeeded)
          {
            mdb__browse__succeeded = ((MR_tag((MR_Word) mdb__browse__MaybeFunctorArityArgs_17)) == (MR_mktag((MR_Integer) 1)));
            if (mdb__browse__succeeded)
              {
                mdb__browse__Var_22 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mdb__browse__MaybeFunctorArityArgs_17, (MR_Integer) 0)));
                mdb__browse__Functor_19 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__browse__Var_22, (MR_Integer) 0)));
                mdb__browse___Arity_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browse__Var_22, (MR_Integer) 1)));
                mdb__browse__Args_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Var_22, (MR_Integer) 2)));
                mdb__browse__succeeded = MR_TRUE;
              }
          }
      }
    if (mdb__browse__succeeded)
      {
        mdb__browse__browser_term_to_string_3_10_p_0(mdb__browse__BrowserDb_9, mdb__browse__Functor_19, mdb__browse__Args_21, mdb__browse__MaybeReturn_18, mdb__browse__MaxSize_11, mdb__browse__CurSize_12, mdb__browse__NewSize_13, mdb__browse__MaxDepth_14, mdb__browse__CurDepth_15, mdb__browse__Str_16);
      }
    else
      {
        MR_String mdb__browse__Functor_26;
        MR_Integer mdb__browse__Arity_27;
        MR_Word mdb__browse__IsFunc_28;

        {
          mdb__browser_info__functor_browser_term_cc_5_p_0(mdb__browse__BrowserDb_9, mdb__browse__BrowserTerm_10, &mdb__browse__Functor_26, &mdb__browse__Arity_27, &mdb__browse__IsFunc_28);
        }
        mdb__browse__succeeded = (mdb__browse__Arity_27 == (MR_Integer) 0);
        if (mdb__browse__succeeded)
          *mdb__browse__Str_16 = mdb__browse__Functor_26;
        else
          {
            MR_String mdb__browse__ArityStr_29;

            {
              mercury__string__int_to_string_2_p_0(mdb__browse__Arity_27, &mdb__browse__ArityStr_29);
            }
            switch (mdb__browse__IsFunc_28) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word mdb__browse__Var_30;
                  MR_Word mdb__browse__Var_31;
                  MR_Word mdb__browse__Var_33;

                  {
                    mdb__browse__Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mdb__browse__Var_33, 0) = ((MR_Box) (mdb__browse__ArityStr_29));
                    MR_hl_field(MR_mktag(1), mdb__browse__Var_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    mdb__browse__Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mdb__browse__Var_31, 0) = ((MR_Box) ((MR_String) "/"));
                    MR_hl_field(MR_mktag(1), mdb__browse__Var_31, 1) = ((MR_Box) (mdb__browse__Var_33));
                  }
                  {
                    mdb__browse__Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mdb__browse__Var_30, 0) = ((MR_Box) (mdb__browse__Functor_26));
                    MR_hl_field(MR_mktag(1), mdb__browse__Var_30, 1) = ((MR_Box) (mdb__browse__Var_31));
                  }
                  {
                    mercury__string__append_list_2_p_0(mdb__browse__Var_30, mdb__browse__Str_16);
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word mdb__browse__Var_35;
                  MR_Word mdb__browse__Var_36;
                  MR_Word mdb__browse__Var_38;

                  {
                    mdb__browse__Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mdb__browse__Var_38, 0) = ((MR_Box) (mdb__browse__ArityStr_29));
                    MR_hl_field(MR_mktag(1), mdb__browse__Var_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[43])));
                  }
                  {
                    mdb__browse__Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mdb__browse__Var_36, 0) = ((MR_Box) ((MR_String) "/"));
                    MR_hl_field(MR_mktag(1), mdb__browse__Var_36, 1) = ((MR_Box) (mdb__browse__Var_38));
                  }
                  {
                    mdb__browse__Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mdb__browse__Var_35, 0) = ((MR_Box) (mdb__browse__Functor_26));
                    MR_hl_field(MR_mktag(1), mdb__browse__Var_35, 1) = ((MR_Box) (mdb__browse__Var_36));
                  }
                  {
                    mercury__string__append_list_2_p_0(mdb__browse__Var_35, mdb__browse__Str_16);
                  }
                }
                break;
            }
          }
        *mdb__browse__NewSize_13 = mdb__browse__CurSize_12;
      }
  }
}

static void MR_CALL 
mdb__browse__browser_term_to_string_5_p_0(
  MR_Word mdb__browse__BrowserDb_6,
  MR_Word mdb__browse__BrowserTerm_7,
  MR_Integer mdb__browse__MaxSize_8,
  MR_Integer mdb__browse__MaxDepth_9,
  MR_String * mdb__browse__Str_10)
{
  {
    MR_bool mdb__browse__succeeded;
    MR_Word mdb__browse__MaybeFunctorArityArgs_22;
    MR_Word mdb__browse__MaybeReturn_23;
    MR_String mdb__browse__Functor_24;
    MR_Word mdb__browse__Args_26;
    MR_Tuple mdb__browse__Var_27;
    MR_Integer mdb__browse___Arity_25;

    {
      mdb__browser_info__limited_deconstruct_browser_term_cc_5_p_0(mdb__browse__BrowserDb_6, mdb__browse__BrowserTerm_7, mdb__browse__MaxSize_8, &mdb__browse__MaybeFunctorArityArgs_22, &mdb__browse__MaybeReturn_23);
    }
    mdb__browse__succeeded = ((MR_Integer) 0 < mdb__browse__MaxSize_8);
    if (mdb__browse__succeeded)
      {
        mdb__browse__succeeded = ((MR_Integer) 0 < mdb__browse__MaxDepth_9);
        if (mdb__browse__succeeded)
          {
            mdb__browse__succeeded = ((MR_tag((MR_Word) mdb__browse__MaybeFunctorArityArgs_22)) == (MR_mktag((MR_Integer) 1)));
            if (mdb__browse__succeeded)
              {
                mdb__browse__Var_27 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mdb__browse__MaybeFunctorArityArgs_22, (MR_Integer) 0)));
                mdb__browse__Functor_24 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__browse__Var_27, (MR_Integer) 0)));
                mdb__browse___Arity_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browse__Var_27, (MR_Integer) 1)));
                mdb__browse__Args_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Var_27, (MR_Integer) 2)));
                mdb__browse__succeeded = MR_TRUE;
              }
          }
      }
    if (mdb__browse__succeeded)
      {
        MR_Integer mdb__browse___NewSize_13;

        {
          mdb__browse__browser_term_to_string_3_10_p_0(mdb__browse__BrowserDb_6, mdb__browse__Functor_24, mdb__browse__Args_26, mdb__browse__MaybeReturn_23, mdb__browse__MaxSize_8, (MR_Integer) 0, &mdb__browse___NewSize_13, mdb__browse__MaxDepth_9, (MR_Integer) 0, mdb__browse__Str_10);
        }
      }
    else
      {
        MR_String mdb__browse__Functor_31;
        MR_Integer mdb__browse__Arity_32;
        MR_Word mdb__browse__IsFunc_33;

        {
          mdb__browser_info__functor_browser_term_cc_5_p_0(mdb__browse__BrowserDb_6, mdb__browse__BrowserTerm_7, &mdb__browse__Functor_31, &mdb__browse__Arity_32, &mdb__browse__IsFunc_33);
        }
        mdb__browse__succeeded = (mdb__browse__Arity_32 == (MR_Integer) 0);
        if (mdb__browse__succeeded)
          *mdb__browse__Str_10 = mdb__browse__Functor_31;
        else
          {
            MR_String mdb__browse__ArityStr_34;

            {
              mercury__string__int_to_string_2_p_0(mdb__browse__Arity_32, &mdb__browse__ArityStr_34);
            }
            switch (mdb__browse__IsFunc_33) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word mdb__browse__Var_35;
                  MR_Word mdb__browse__Var_36;
                  MR_Word mdb__browse__Var_38;

                  {
                    mdb__browse__Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mdb__browse__Var_38, 0) = ((MR_Box) (mdb__browse__ArityStr_34));
                    MR_hl_field(MR_mktag(1), mdb__browse__Var_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    mdb__browse__Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mdb__browse__Var_36, 0) = ((MR_Box) ((MR_String) "/"));
                    MR_hl_field(MR_mktag(1), mdb__browse__Var_36, 1) = ((MR_Box) (mdb__browse__Var_38));
                  }
                  {
                    mdb__browse__Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mdb__browse__Var_35, 0) = ((MR_Box) (mdb__browse__Functor_31));
                    MR_hl_field(MR_mktag(1), mdb__browse__Var_35, 1) = ((MR_Box) (mdb__browse__Var_36));
                  }
                  {
                    mercury__string__append_list_2_p_0(mdb__browse__Var_35, mdb__browse__Str_10);
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word mdb__browse__Var_40;
                  MR_Word mdb__browse__Var_41;
                  MR_Word mdb__browse__Var_43;

                  {
                    mdb__browse__Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mdb__browse__Var_43, 0) = ((MR_Box) (mdb__browse__ArityStr_34));
                    MR_hl_field(MR_mktag(1), mdb__browse__Var_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[43])));
                  }
                  {
                    mdb__browse__Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mdb__browse__Var_41, 0) = ((MR_Box) ((MR_String) "/"));
                    MR_hl_field(MR_mktag(1), mdb__browse__Var_41, 1) = ((MR_Box) (mdb__browse__Var_43));
                  }
                  {
                    mdb__browse__Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mdb__browse__Var_40, 0) = ((MR_Box) (mdb__browse__Functor_31));
                    MR_hl_field(MR_mktag(1), mdb__browse__Var_40, 1) = ((MR_Box) (mdb__browse__Var_41));
                  }
                  {
                    mercury__string__append_list_2_p_0(mdb__browse__Var_40, mdb__browse__Str_10);
                  }
                }
                break;
            }
          }
      }
  }
}

static void MR_CALL 
mdb__browse__report_deref_error_5_p_0(
  MR_Word mdb__browse__Debugger_6,
  MR_Word mdb__browse__OKPath_7,
  MR_Word mdb__browse__ErrorDir_8)
{
  {
    MR_bool mdb__browse__succeeded;
    MR_String mdb__browse__Msg_13;
    MR_String mdb__browse__Var_24;
    MR_String mdb__browse__Var_25;

    {
      mdb__browser_info__write_string_debugger_4_p_0(mdb__browse__Debugger_6, (MR_String) "error: ");
    }
    if ((mdb__browse__OKPath_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        MR_String mdb__browse__Context_12;
        MR_String mdb__browse__Var_19;
        MR_String mdb__browse__Var_20;

        {
          mdb__browse__Var_20 = mdb__browse__down_dirs_to_string_1_f_0(mdb__browse__OKPath_7);
        }
        {
          mdb__browse__Var_19 = mercury__string__f_43_43_2_f_0(mdb__browse__Var_20, (MR_String) ": ");
        }
        {
          mdb__browse__Context_12 = mercury__string__f_43_43_2_f_0((MR_String) "in subdir ", mdb__browse__Var_19);
        }
        {
          mdb__browser_info__write_string_debugger_4_p_0(mdb__browse__Debugger_6, mdb__browse__Context_12);
        }
      }
    if (((MR_tag((MR_Word) mdb__browse__ErrorDir_8)) == (MR_mktag((MR_Integer) 1))))
      mdb__browse__Var_25 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browse__ErrorDir_8, (MR_Integer) 0)));
    else
      {
        MR_Integer mdb__browse__Num_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browse__ErrorDir_8, (MR_Integer) 0)));

        {
          mdb__browse__Var_25 = mercury__string__int_to_string_1_f_0(mdb__browse__Num_28);
        }
      }
    {
      mdb__browse__Var_24 = mercury__string__f_43_43_2_f_0(mdb__browse__Var_25, (MR_String) "\n");
    }
    {
      mdb__browse__Msg_13 = mercury__string__f_43_43_2_f_0((MR_String) "there is no subterm ", mdb__browse__Var_24);
    }
    {
      mdb__browser_info__write_string_debugger_4_p_0(mdb__browse__Debugger_6, mdb__browse__Msg_13);
    }
  }
}

static void MR_CALL 
mdb__browse__write_univ_or_unbound_4_p_0(
  MR_Word mdb__browse__Stream_5,
  MR_Word mdb__browse__Univ_6)
{
  {
    MR_bool mdb__browse__succeeded;
    MR_Box mdb__browse__conv0_Var_11;

    {
      mdb__browse__succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) &mdb__browse__mdb__browse__type_ctor_info_unbound_0, mdb__browse__Univ_6, &mdb__browse__conv0_Var_11);
    }
    if (mdb__browse__succeeded)
      mdb__browse__succeeded = MR_TRUE;
    if (mdb__browse__succeeded)
      {
        {
          mercury__io__write_char_4_p_0(mdb__browse__Stream_5, (MR_Char) 95);
        }
      }
    else
      {
        {
          mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_117_110_105_118_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_50_95_49_5_p_2((MR_Word) &mdb__browse_scalar_common_3[0], (MR_Word) &mdb__browse_scalar_common_3[1], mdb__browse__Stream_5, (MR_Integer) 2, mdb__browse__Univ_6);
        }
      }
  }
}

static void MR_CALL 
mdb__browse__portray_pretty_5_p_0(
  MR_Word mdb__browse__Debugger_6,
  MR_Word mdb__browse__BrowserTerm_7,
  MR_Word mdb__browse__Params_8)
{
  {
    MR_bool mdb__browse__succeeded;
    MR_Integer mdb__browse__Var_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browse__Params_8, (MR_Integer) 2)));
    MR_Integer mdb__browse__Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browse__Params_8, (MR_Integer) 0)));
    MR_Integer mdb__browse__Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browse__Params_8, (MR_Integer) 1)));
    MR_Integer mdb__browse__Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browse__Params_8, (MR_Integer) 3)));
    MR_Word mdb__browse__Doc_40;
    MR_Word mdb__browse__Formatters_44;
    MR_Word mdb__browse__Limit_45;
    MR_Word mdb__browse__Params_46;
    MR_Integer mdb__browse__Var_48;
    MR_Word mdb__browse__Var_49;
    MR_Box mdb__browse__conv0_STATE_VARIABLE_IO_11;

    if (((MR_tag((MR_Word) mdb__browse__BrowserTerm_7)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word mdb__browse__Univ_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__BrowserTerm_7, (MR_Integer) 0)));

        {
          mdb__browse__Doc_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), mdb__browse__Doc_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), mdb__browse__Doc_40, 1) = ((MR_Box) (mdb__browse__Univ_39));
        }
      }
    else
      {
        MR_String mdb__browse__Functor_41 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browse__BrowserTerm_7, (MR_Integer) 0)));
        MR_Word mdb__browse__Args_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__BrowserTerm_7, (MR_Integer) 1)));
        MR_Word mdb__browse__MaybeReturn_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__BrowserTerm_7, (MR_Integer) 2)));
        MR_Word mdb__browse__Doc0_55;

        {
          MR_Integer mdb__browse__lo_0;
          MR_Integer mdb__browse__hi_1;
          MR_Integer mdb__browse__mid_2;
          MR_Integer mdb__browse__result_3;

          /* binary string simple lookup switch */
          mdb__browse__lo_0 = (MR_Integer) 0;
          mdb__browse__hi_1 = (MR_Integer) 3;
          do
            {
              mdb__browse__mid_2 = (((mdb__browse__lo_0 + mdb__browse__hi_1)) / (MR_Integer) 2);
              mdb__browse__result_3 = MR_strcmp(mdb__browse__Functor_41, ((&mdb__browse_vector_common_7[6 + mdb__browse__mid_2]))->mdb__browse__vector_common_type_7_0__vct_7_f_0);
              if ((mdb__browse__result_3 == (MR_Integer) 0))
                {
                  mdb__browse__succeeded = MR_TRUE;
                  /* jump out of search loop */
                  goto label_0;
                }
              else
              if ((mdb__browse__result_3 < (MR_Integer) 0))
                mdb__browse__hi_1 = (mdb__browse__mid_2 - (MR_Integer) 1);
              else
                mdb__browse__lo_0 = (mdb__browse__mid_2 + (MR_Integer) 1);
            }
          while ((mdb__browse__lo_0 <= mdb__browse__hi_1));
          mdb__browse__succeeded = MR_FALSE;
        label_0:;
        }
        if (!(mdb__browse__succeeded))
          {
            {
              mdb__browse__succeeded = mercury__string__contains_char_2_p_0(mdb__browse__Functor_41, (MR_Char) 46);
            }
            mdb__browse__succeeded = !(mdb__browse__succeeded);
          }
        if (mdb__browse__succeeded)
          {
            mdb__browse__Doc0_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), mdb__browse__Doc0_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), mdb__browse__Doc0_55, 1) = ((MR_Box) (mdb__browse__Functor_41));
            MR_hl_field(MR_mktag(3), mdb__browse__Doc0_55, 2) = ((MR_Box) (mdb__browse__Args_42));
          }
        else
          {
            MR_Word mdb__browse__FunctorDoc_56;
            MR_Word mdb__browse__Var_61;

            {
              mdb__browse__Var_61 = mercury__string__split_at_char_2_f_0((MR_Char) 46, mdb__browse__Functor_41);
            }
            {
              mdb__browse__FunctorDoc_56 = mdb__browse__qualified_functor_to_doc_1_f_0(mdb__browse__Var_61);
            }
            if ((mdb__browse__Args_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              mdb__browse__Doc0_55 = mdb__browse__FunctorDoc_56;
            else
              {
                MR_Word mdb__browse__Var_63;
                MR_Word mdb__browse__Var_64;
                MR_Word mdb__browse__Var_67;
                MR_Word mdb__browse__Var_68;
                MR_Word mdb__browse__Var_69;

                {
                  mdb__browse__Var_69 = mercury__pretty_printer__group_1_f_0((MR_Word) MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[41]));
                }
                {
                  mdb__browse__Var_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), mdb__browse__Var_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), mdb__browse__Var_68, 1) = ((MR_Box) (mdb__browse__Args_42));
                  MR_hl_field(MR_mktag(3), mdb__browse__Var_68, 2) = ((MR_Box) (mdb__browse__Var_69));
                }
                {
                  mdb__browse__Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mdb__browse__Var_67, 0) = ((MR_Box) (mdb__browse__Var_68));
                  MR_hl_field(MR_mktag(1), mdb__browse__Var_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[42])));
                }
                {
                  mdb__browse__Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mdb__browse__Var_64, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_5[5])));
                  MR_hl_field(MR_mktag(1), mdb__browse__Var_64, 1) = ((MR_Box) (mdb__browse__Var_67));
                }
                {
                  mdb__browse__Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mdb__browse__Var_63, 0) = ((MR_Box) (mdb__browse__FunctorDoc_56));
                  MR_hl_field(MR_mktag(1), mdb__browse__Var_63, 1) = ((MR_Box) (mdb__browse__Var_64));
                }
                {
                  mdb__browse__Doc0_55 = mercury__pretty_printer__indent_1_f_0(mdb__browse__Var_63);
                }
              }
          }
        if ((mdb__browse__MaybeReturn_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          mdb__browse__Doc_40 = mdb__browse__Doc0_55;
        else
          {
            MR_Word mdb__browse__Return_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__MaybeReturn_43, (MR_Integer) 0)));
            MR_Word mdb__browse__Var_80;
            MR_Word mdb__browse__Var_81;
            MR_Word mdb__browse__Var_84;
            MR_Word mdb__browse__Var_85;
            MR_Word mdb__browse__Var_86;

            {
              mdb__browse__Var_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), mdb__browse__Var_86, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), mdb__browse__Var_86, 1) = ((MR_Box) (mdb__browse__Return_59));
            }
            {
              mdb__browse__Var_85 = mercury__pretty_printer__format_arg_1_f_0(mdb__browse__Var_86);
            }
            {
              mdb__browse__Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mdb__browse__Var_84, 0) = ((MR_Box) (mdb__browse__Var_85));
              MR_hl_field(MR_mktag(1), mdb__browse__Var_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              mdb__browse__Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mdb__browse__Var_81, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_5[7])));
              MR_hl_field(MR_mktag(1), mdb__browse__Var_81, 1) = ((MR_Box) (mdb__browse__Var_84));
            }
            {
              mdb__browse__Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mdb__browse__Var_80, 0) = ((MR_Box) (mdb__browse__Doc0_55));
              MR_hl_field(MR_mktag(1), mdb__browse__Var_80, 1) = ((MR_Box) (mdb__browse__Var_81));
            }
            {
              mdb__browse__Doc_40 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), mdb__browse__Doc_40, 0) = ((MR_Box) (mdb__browse__Var_80));
            }
          }
      }
    {
      mercury__pretty_printer__get_default_formatter_map_3_p_0(&mdb__browse__Formatters_44);
    }
    mdb__browse__Var_48 = (MR_Integer) 0;
    mdb__browse__succeeded = (mdb__browse__Var_17 > mdb__browse__Var_48);
    if (mdb__browse__succeeded)
      {
        mdb__browse__Limit_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), mdb__browse__Limit_45, 0) = ((MR_Box) (mdb__browse__Var_17));
      }
    else
      {
        mdb__browse__Limit_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), mdb__browse__Limit_45, 0) = ((MR_Box) (mdb__browse__Var_18));
      }
    {
      mdb__browse__Params_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__browse__Params_46, 0) = ((MR_Box) (mdb__browse__Var_12));
      MR_hl_field(MR_mktag(0), mdb__browse__Params_46, 1) = ((MR_Box) (mdb__browse__Var_19));
      MR_hl_field(MR_mktag(0), mdb__browse__Params_46, 2) = ((MR_Box) (mdb__browse__Limit_45));
    }
    mdb__browse__Var_49 = (MR_Integer) 2;
    {
      mercury__pretty_printer__put_doc_7_p_1((MR_Word) &mdb__browse_scalar_common_3[2], ((MR_Box) (mdb__browse__Debugger_6)), mdb__browse__Var_49, mdb__browse__Formatters_44, mdb__browse__Params_46, mdb__browse__Doc_40, ((MR_Box) ((MR_Integer) 0)), &mdb__browse__conv0_STATE_VARIABLE_IO_11);
    }
  }
}

static void MR_CALL 
mdb__browse__portray_verbose_5_p_0(
  MR_Word mdb__browse__Debugger_6,
  MR_Word mdb__browse__BrowserTerm_7,
  MR_Word mdb__browse__Params_8)
{
  {
    MR_bool mdb__browse__succeeded;
    MR_Word mdb__browse__StreamDb_10;
    MR_Word mdb__browse__BrowserDb_11;
    MR_String mdb__browse__Str_12;
    MR_Integer mdb__browse__Var_16;
    MR_Integer mdb__browse__Var_21;
    MR_Integer mdb__browse__Var_22;
    MR_Integer mdb__browse__Var_23;

    {
      mercury__io__get_stream_db_3_p_0(&mdb__browse__StreamDb_10);
    }
    mdb__browse__BrowserDb_11 = (MR_Word) mdb__browse__StreamDb_10;
    mdb__browse__Var_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browse__Params_8, (MR_Integer) 0)));
    mdb__browse__Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browse__Params_8, (MR_Integer) 1)));
    mdb__browse__Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browse__Params_8, (MR_Integer) 2)));
    mdb__browse__Var_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browse__Params_8, (MR_Integer) 3)));
    {
      mdb__browse__browser_term_to_string_verbose_7_p_0(mdb__browse__BrowserDb_11, mdb__browse__BrowserTerm_7, mdb__browse__Var_16, mdb__browse__Var_21, mdb__browse__Var_22, mdb__browse__Var_23, &mdb__browse__Str_12);
    }
    {
      mdb__browser_info__write_string_debugger_4_p_0(mdb__browse__Debugger_6, mdb__browse__Str_12);
    }
  }
}

static void MR_CALL 
mdb__browse__portray_flat_5_p_0_1(
  MR_Box mdb__browse__closure_arg,
  MR_Box mdb__browse__wrapper_arg_1,
  MR_Box mdb__browse__wrapper_arg_2,
  MR_Box * mdb__browse__wrapper_arg_3)
{
  {
    MR_Box mdb__browse__closure = mdb__browse__closure_arg;

    {
      mdb__browse__write_univ_or_unbound_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__closure, (MR_Integer) 3))), ((MR_Word) mdb__browse__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
mdb__browse__portray_flat_5_p_0(
  MR_Word mdb__browse__Debugger_6,
  MR_Word mdb__browse__BrowserTerm_7,
  MR_Word mdb__browse__Params_8)
{
  {
    MR_bool mdb__browse__succeeded;
    MR_Integer mdb__browse__RemainingSize_10;

    {
      mdb__browse__browser_term_size_left_from_max_3_p_0(mdb__browse__BrowserTerm_7, (MR_Integer) 60, &mdb__browse__RemainingSize_10);
    }
    mdb__browse__succeeded = (mdb__browse__RemainingSize_10 >= (MR_Integer) 0);
    if (mdb__browse__succeeded)
      if (((MR_tag((MR_Word) mdb__browse__BrowserTerm_7)) == (MR_mktag((MR_Integer) 0))))
        {
          MR_Word mdb__browse__Univ_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__BrowserTerm_7, (MR_Integer) 0)));
          MR_Word mdb__browse__Stream_31;

          {
            mercury__io__output_stream_3_p_0(&mdb__browse__Stream_31);
          }
          {
            mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_117_110_105_118_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_50_95_49_5_p_2((MR_Word) &mdb__browse_scalar_common_3[0], (MR_Word) &mdb__browse_scalar_common_3[1], mdb__browse__Stream_31, (MR_Integer) 2, mdb__browse__Univ_29);
          }
        }
      else
        {
          MR_String mdb__browse__Functor_37 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browse__BrowserTerm_7, (MR_Integer) 0)));
          MR_Word mdb__browse__Args_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__BrowserTerm_7, (MR_Integer) 1)));
          MR_Word mdb__browse__MaybeReturn_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__BrowserTerm_7, (MR_Integer) 2)));
          MR_Word mdb__browse__Stream_41;

          {
            mercury__io__write_string_3_p_0(mdb__browse__Functor_37);
          }
          {
            mercury__io__output_stream_3_p_0(&mdb__browse__Stream_41);
          }
          if ((mdb__browse__Args_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
            }
          else
            {
              MR_Word mdb__browse__Var_52;

              {
                mercury__io__write_string_3_p_0((MR_String) "(");
              }
              {
                mdb__browse__Var_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mdb__browse__Var_52, 0) = ((MR_Box) (&mdb__browse_scalar_common_9[0]));
                MR_hl_field(MR_mktag(0), mdb__browse__Var_52, 1) = ((MR_Box) (mdb__browse__portray_flat_5_p_0_1));
                MR_hl_field(MR_mktag(0), mdb__browse__Var_52, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), mdb__browse__Var_52, 3) = ((MR_Box) (mdb__browse__Stream_41));
              }
              {
                mercury__io__write_list_5_p_1((MR_Word) &mercury__univ__univ__type_ctor_info_univ_0, mdb__browse__Args_38, (MR_String) ", ", mdb__browse__Var_52);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
          if ((mdb__browse__MaybeReturn_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
            }
          else
            {
              MR_Word mdb__browse__Return_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__MaybeReturn_39, (MR_Integer) 0)));

              {
                mercury__io__write_string_3_p_0((MR_String) " = ");
              }
              {
                mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_117_110_105_118_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_50_95_49_5_p_2((MR_Word) &mdb__browse_scalar_common_3[0], (MR_Word) &mdb__browse_scalar_common_3[1], mdb__browse__Stream_41, (MR_Integer) 2, mdb__browse__Return_44);
              }
            }
        }
    else
      {
        MR_Word mdb__browse__StreamDb_11;
        MR_Word mdb__browse__BrowserDb_12;
        MR_String mdb__browse__Str_13;
        MR_Integer mdb__browse__Var_20;
        MR_Integer mdb__browse__Var_23;
        MR_Integer mdb__browse__Var_24;
        MR_Integer mdb__browse__Var_25;

        {
          mercury__io__get_stream_db_3_p_0(&mdb__browse__StreamDb_11);
        }
        mdb__browse__BrowserDb_12 = (MR_Word) mdb__browse__StreamDb_11;
        mdb__browse__Var_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browse__Params_8, (MR_Integer) 0)));
        mdb__browse__Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browse__Params_8, (MR_Integer) 1)));
        mdb__browse__Var_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browse__Params_8, (MR_Integer) 2)));
        mdb__browse__Var_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browse__Params_8, (MR_Integer) 3)));
        {
          mdb__browse__browser_term_to_string_5_p_0(mdb__browse__BrowserDb_12, mdb__browse__BrowserTerm_7, mdb__browse__Var_20, mdb__browse__Var_23, &mdb__browse__Str_13);
        }
        {
          mdb__browser_info__write_string_debugger_4_p_0(mdb__browse__Debugger_6, mdb__browse__Str_13);
        }
      }
  }
}

static void MR_CALL 
mdb__browse__portray_6_p_0(
  MR_Word mdb__browse__Debugger_7,
  MR_Word mdb__browse__Caller_8,
  MR_Word mdb__browse__MaybeFormat_9,
  MR_Word mdb__browse__Info_10)
{
  {
    MR_bool mdb__browse__succeeded;
    MR_Word mdb__browse__Format_12;
    MR_Word mdb__browse__Params_13;
    MR_Word mdb__browse__SubResult_14;
    MR_Word mdb__browse__Var_20;
    MR_Word mdb__browse__Var_28;
    MR_Word mdb__browse__Var_29;
    MR_Word mdb__browse__Var_30;
    MR_Word mdb__browse__Var_31;
    MR_Word mdb__browse__Var_32;
    MR_Word mdb__browse__Var_33;

    {
      mdb__browser_info__get_format_4_p_0(mdb__browse__Info_10, mdb__browse__Caller_8, mdb__browse__MaybeFormat_9, &mdb__browse__Format_12);
    }
    {
      mdb__browser_info__get_format_params_4_p_0(mdb__browse__Info_10, mdb__browse__Caller_8, mdb__browse__Format_12, &mdb__browse__Params_13);
    }
    mdb__browse__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_10, (MR_Integer) 0)));
    mdb__browse__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_10, (MR_Integer) 1)));
    mdb__browse__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_10, (MR_Integer) 2)));
    mdb__browse__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_10, (MR_Integer) 3)));
    mdb__browse__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_10, (MR_Integer) 4)));
    mdb__browse__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_10, (MR_Integer) 5)));
    mdb__browse__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_10, (MR_Integer) 6)));
    {
      mdb__browse__deref_subterm_3_p_0(mdb__browse__Var_20, mdb__browse__Var_28, &mdb__browse__SubResult_14);
    }
    if (((MR_tag((MR_Word) mdb__browse__SubResult_14)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word mdb__browse__OKPath_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__SubResult_14, (MR_Integer) 0)));
        MR_Word mdb__browse__ErrorDir_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__SubResult_14, (MR_Integer) 1)));
        MR_String mdb__browse__Msg_49;
        MR_String mdb__browse__Var_58;
        MR_String mdb__browse__Var_59;

        {
          mdb__browser_info__write_string_debugger_4_p_0(mdb__browse__Debugger_7, (MR_String) "error: ");
        }
        if ((mdb__browse__OKPath_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_String mdb__browse__Context_48;
            MR_String mdb__browse__Var_53;
            MR_String mdb__browse__Var_54;

            {
              mdb__browse__Var_54 = mdb__browse__down_dirs_to_string_1_f_0(mdb__browse__OKPath_16);
            }
            {
              mdb__browse__Var_53 = mercury__string__f_43_43_2_f_0(mdb__browse__Var_54, (MR_String) ": ");
            }
            {
              mdb__browse__Context_48 = mercury__string__f_43_43_2_f_0((MR_String) "in subdir ", mdb__browse__Var_53);
            }
            {
              mdb__browser_info__write_string_debugger_4_p_0(mdb__browse__Debugger_7, mdb__browse__Context_48);
            }
          }
        if (((MR_tag((MR_Word) mdb__browse__ErrorDir_17)) == (MR_mktag((MR_Integer) 1))))
          mdb__browse__Var_59 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browse__ErrorDir_17, (MR_Integer) 0)));
        else
          {
            MR_Integer mdb__browse__Num_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browse__ErrorDir_17, (MR_Integer) 0)));

            {
              mdb__browse__Var_59 = mercury__string__int_to_string_1_f_0(mdb__browse__Num_62);
            }
          }
        {
          mdb__browse__Var_58 = mercury__string__f_43_43_2_f_0(mdb__browse__Var_59, (MR_String) "\n");
        }
        {
          mdb__browse__Msg_49 = mercury__string__f_43_43_2_f_0((MR_String) "there is no subterm ", mdb__browse__Var_58);
        }
        {
          mdb__browser_info__write_string_debugger_4_p_0(mdb__browse__Debugger_7, mdb__browse__Msg_49);
        }
      }
    else
      {
        MR_Word mdb__browse__SubUniv_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__SubResult_14, (MR_Integer) 0)));

        switch (mdb__browse__Format_12) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mdb__browse__portray_flat_5_p_0(mdb__browse__Debugger_7, mdb__browse__SubUniv_15, mdb__browse__Params_13);
            }
            break;
          case (MR_Integer) 3:
            {
              mdb__browse__portray_pretty_5_p_0(mdb__browse__Debugger_7, mdb__browse__SubUniv_15, mdb__browse__Params_13);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word mdb__browse__StreamDb_70;
              MR_Word mdb__browse__BrowserDb_71;
              MR_String mdb__browse__Str_72;
              MR_Integer mdb__browse__Var_74;
              MR_Integer mdb__browse__Var_79;
              MR_Integer mdb__browse__Var_77;
              MR_Integer mdb__browse__Var_78;

              {
                mercury__io__get_stream_db_3_p_0(&mdb__browse__StreamDb_70);
              }
              mdb__browse__BrowserDb_71 = (MR_Word) mdb__browse__StreamDb_70;
              mdb__browse__Var_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browse__Params_13, (MR_Integer) 0)));
              mdb__browse__Var_78 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browse__Params_13, (MR_Integer) 1)));
              mdb__browse__Var_74 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browse__Params_13, (MR_Integer) 2)));
              mdb__browse__Var_79 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browse__Params_13, (MR_Integer) 3)));
              {
                mdb__sized_pretty__browser_term_to_string_line_5_p_0(mdb__browse__BrowserDb_71, mdb__browse__SubUniv_15, mdb__browse__Var_74, mdb__browse__Var_79, &mdb__browse__Str_72);
              }
              {
                mdb__browser_info__write_string_debugger_4_p_0(mdb__browse__Debugger_7, mdb__browse__Str_72);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              mdb__browse__portray_verbose_5_p_0(mdb__browse__Debugger_7, mdb__browse__SubUniv_15, mdb__browse__Params_13);
            }
            break;
        }
      }
    {
      mdb__browser_info__nl_debugger_3_p_0(mdb__browse__Debugger_7);
    }
  }
}

static void MR_CALL 
mdb__browse__portray_maybe_path_7_p_0(
  MR_Word mdb__browse__Debugger_8,
  MR_Word mdb__browse__Caller_9,
  MR_Word mdb__browse__MaybeFormat_10,
  MR_Word mdb__browse__Info_11,
  MR_Word mdb__browse__MaybePath_12)
{
  {
    MR_bool mdb__browse__succeeded;

    if ((mdb__browse__MaybePath_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        mdb__browse__portray_6_p_0(mdb__browse__Debugger_8, mdb__browse__Caller_9, mdb__browse__MaybeFormat_10, mdb__browse__Info_11);
      }
    else
      {
        MR_Word mdb__browse__Path_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__MaybePath_12, (MR_Integer) 0)));
        MR_Word mdb__browse__Info_27;
        MR_Word mdb__browse__Dirs0_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_11, (MR_Integer) 1)));
        MR_Word mdb__browse__Dirs_34;
        MR_Word mdb__browse__NewDirs_53;
        MR_Word mdb__browse__RevDirs_59;
        MR_Word mdb__browse__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_11, (MR_Integer) 0)));
        MR_Word mdb__browse__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_11, (MR_Integer) 2)));
        MR_Word mdb__browse__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_11, (MR_Integer) 3)));
        MR_Word mdb__browse__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_11, (MR_Integer) 4)));
        MR_Word mdb__browse__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_11, (MR_Integer) 5)));
        MR_Word mdb__browse__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_11, (MR_Integer) 6)));
        MR_Word mdb__browse__Var_42;
        MR_Word mdb__browse__Var_44;
        MR_Word mdb__browse__Var_45;
        MR_Word mdb__browse__Var_46;
        MR_Word mdb__browse__Var_47;
        MR_Word mdb__browse__Var_48;
        MR_Word mdb__browse__Var_43;

        if (((MR_tag((MR_Word) mdb__browse__Path_14)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word mdb__browse__Var_54;
            MR_Word mdb__browse__Dirs_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__Path_14, (MR_Integer) 0)));

            {
              mdb__browse__Var_54 = mdb__browser_info__down_to_up_down_dirs_1_f_0(mdb__browse__Dirs0_33);
            }
            {
              mdb__browse__NewDirs_53 = mercury__list__f_43_43_2_f_0((MR_Word) &mdb__browser_info__mdb__browser_info__type_ctor_info_up_down_dir_0, mdb__browse__Var_54, mdb__browse__Dirs_55);
            }
          }
        else
          mdb__browse__NewDirs_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Path_14, (MR_Integer) 0)));
        {
          mercury__list__reverse_2_p_0((MR_Word) &mdb__browser_info__mdb__browser_info__type_ctor_info_up_down_dir_0, mdb__browse__NewDirs_53, &mdb__browse__RevDirs_59);
        }
        {
          mdb__browse__simplify_rev_dirs_4_p_0(mdb__browse__RevDirs_59, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &mdb__browse__Dirs_34);
        }
        mdb__browse__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_11, (MR_Integer) 0)));
        mdb__browse__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_11, (MR_Integer) 1)));
        mdb__browse__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_11, (MR_Integer) 2)));
        mdb__browse__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_11, (MR_Integer) 3)));
        mdb__browse__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_11, (MR_Integer) 4)));
        mdb__browse__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_11, (MR_Integer) 5)));
        mdb__browse__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_11, (MR_Integer) 6)));
        {
          mdb__browse__Info_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mdb__browse__Info_27, 0) = ((MR_Box) (mdb__browse__Var_42));
          MR_hl_field(MR_mktag(0), mdb__browse__Info_27, 1) = ((MR_Box) (mdb__browse__Dirs_34));
          MR_hl_field(MR_mktag(0), mdb__browse__Info_27, 2) = ((MR_Box) (mdb__browse__Var_44));
          MR_hl_field(MR_mktag(0), mdb__browse__Info_27, 3) = ((MR_Box) (mdb__browse__Var_45));
          MR_hl_field(MR_mktag(0), mdb__browse__Info_27, 4) = ((MR_Box) (mdb__browse__Var_46));
          MR_hl_field(MR_mktag(0), mdb__browse__Info_27, 5) = ((MR_Box) (mdb__browse__Var_47));
          MR_hl_field(MR_mktag(0), mdb__browse__Info_27, 6) = ((MR_Box) (mdb__browse__Var_48));
        }
        {
          mdb__browse__portray_6_p_0(mdb__browse__Debugger_8, mdb__browse__Caller_9, mdb__browse__MaybeFormat_10, mdb__browse__Info_27);
        }
      }
  }
}

static void MR_CALL 
mdb__browse__help_3_p_0(
  MR_Word mdb__browse__Debugger_4)
{
  {
    MR_bool mdb__browse__succeeded;
    MR_String mdb__browse__HelpMessage_6;

    {
      mercury__string__append_list_2_p_0((MR_Word) MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_4[38]), &mdb__browse__HelpMessage_6);
    }
    {
      mdb__browser_info__write_string_debugger_4_p_0(mdb__browse__Debugger_4, mdb__browse__HelpMessage_6);
    }
  }
}

static MR_bool MR_CALL 
mdb__browse__bool_format_option_is_true_2_p_0(
  MR_Word mdb__browse__HeadVar__1_1,
  MR_Word * mdb__browse__Format_3)
{
  {
    MR_bool mdb__browse__succeeded;
    MR_Word mdb__browse__Var_4;
    MR_Word mdb__browse__Var_5;

    *mdb__browse__Format_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__HeadVar__1_1, (MR_Integer) 0)));
    mdb__browse__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__HeadVar__1_1, (MR_Integer) 1)));
    mdb__browse__succeeded = ((MR_tag((MR_Word) mdb__browse__Var_4)) == (MR_mktag((MR_Integer) 1)));
    if (mdb__browse__succeeded)
      {
        mdb__browse__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__Var_4, (MR_Integer) 0)));
        mdb__browse__succeeded = (mdb__browse__Var_5 == (MR_Integer) 1);
      }
    return mdb__browse__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__browse__interpret_format_options_2_p_0_1(
  MR_Box mdb__browse__closure_arg,
  MR_Box mdb__browse__wrapper_arg_1,
  MR_Box * mdb__browse__wrapper_arg_2)
{
  {
    MR_bool mdb__browse__succeeded;
    MR_Box mdb__browse__closure = mdb__browse__closure_arg;
    MR_Word mdb__browse__conv0_Format_3;

    {
      mdb__browse__succeeded = mdb__browse__bool_format_option_is_true_2_p_0(((MR_Word) mdb__browse__wrapper_arg_1), &mdb__browse__conv0_Format_3);
    }
    if (mdb__browse__succeeded)
      {
        *mdb__browse__wrapper_arg_2 = ((MR_Box) (mdb__browse__conv0_Format_3));
        mdb__browse__succeeded = MR_TRUE;
      }
    return mdb__browse__succeeded;
  }
}

static void MR_CALL 
mdb__browse__interpret_format_options_2_p_0(
  MR_Word mdb__browse__OptionTable_3,
  MR_Word * mdb__browse__MaybeMaybeFormat_4)
{
  {
    MR_bool mdb__browse__succeeded;
    MR_Word mdb__browse__TypeCtorInfo_18_18 = (MR_Word) &mdb__parse__mdb__parse__type_ctor_info_format_option_0;
    MR_Word mdb__browse__OptionAssocList_5;
    MR_Word mdb__browse__TrueFormatOptions_6;

    {
      mercury__map__to_assoc_list_2_p_0(mdb__browse__TypeCtorInfo_18_18, (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0, mdb__browse__OptionTable_3, &mdb__browse__OptionAssocList_5);
    }
    {
      mercury__list__filter_map_3_p_0((MR_Word) &mdb__browse_scalar_common_1[0], mdb__browse__TypeCtorInfo_18_18, (MR_Word) &mdb__browse_scalar_common_1[5], mdb__browse__OptionAssocList_5, &mdb__browse__TrueFormatOptions_6);
    }
    if ((mdb__browse__TrueFormatOptions_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mdb__browse__MaybeMaybeFormat_4 = (MR_Word) &mdb__browse_scalar_common_5[3];
      }
    else
      {
        MR_Word mdb__browse__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__TrueFormatOptions_6, (MR_Integer) 1)));
        MR_Word mdb__browse__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__TrueFormatOptions_6, (MR_Integer) 0)));

        if ((mdb__browse__Var_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word mdb__browse__Format_8 = ((&mdb__browse_vector_common_8[0 + mdb__browse__Var_24]))->mdb__browse__vector_common_type_8_0__vct_8_f_0;
            MR_Word mdb__browse__Var_16;

            {
              mdb__browse__Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mdb__browse__Var_16, 0) = ((MR_Box) (mdb__browse__Format_8));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *mdb__browse__MaybeMaybeFormat_4 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__browse__Var_16));
            }
          }
        else
          {
            *mdb__browse__MaybeMaybeFormat_4 = (MR_Word) MR_mkword(MR_mktag(1), &mdb__browse_scalar_common_5[4]);
          }
      }
  }
}

static void MR_CALL 
mdb__browse__get_value_representation_2_p_0(
  MR_Word mdb__browse__TypeInfo_for_T_6,
  MR_Box mdb__browse__HeadVar__1_1,
  MR_Integer * mdb__browse__HeadVar__2_2)
{
  {
    MR_bool mdb__browse__succeeded;

    {
      mdb__browse__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_118_97_108_117_101_95_114_101_112_114_101_115_101_110_116_97_116_105_111_110_95_95_91_49_93_95_48_2_p_0(mdb__browse__HeadVar__1_1, mdb__browse__HeadVar__2_2);
    }
  }
}

static void MR_CALL 
mdb__browse__do_print_memory_addr_5_p_0(
  MR_Word mdb__browse__Debugger_6,
  MR_Word mdb__browse__Info_7,
  MR_Word mdb__browse__MaybePath_8)
{
  {
    MR_bool mdb__browse__succeeded;
    MR_Word mdb__browse__Dirs0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_7, (MR_Integer) 1)));
    MR_Word mdb__browse__Dirs_11;
    MR_Word mdb__browse__DerefResult_13;
    MR_Word mdb__browse__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_7, (MR_Integer) 0)));
    MR_Word mdb__browse__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_7, (MR_Integer) 2)));
    MR_Word mdb__browse__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_7, (MR_Integer) 3)));
    MR_Word mdb__browse__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_7, (MR_Integer) 4)));
    MR_Word mdb__browse__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_7, (MR_Integer) 5)));
    MR_Word mdb__browse__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_7, (MR_Integer) 6)));

    if ((mdb__browse__MaybePath_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mdb__browse__Dirs_11 = mdb__browse__Dirs0_10;
    else
      {
        MR_Word mdb__browse__Path_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__MaybePath_8, (MR_Integer) 0)));
        MR_Word mdb__browse__NewDirs_62;
        MR_Word mdb__browse__RevDirs_68;

        if (((MR_tag((MR_Word) mdb__browse__Path_12)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word mdb__browse__Var_63;
            MR_Word mdb__browse__Dirs_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__Path_12, (MR_Integer) 0)));

            {
              mdb__browse__Var_63 = mdb__browser_info__down_to_up_down_dirs_1_f_0(mdb__browse__Dirs0_10);
            }
            {
              mdb__browse__NewDirs_62 = mercury__list__f_43_43_2_f_0((MR_Word) &mdb__browser_info__mdb__browser_info__type_ctor_info_up_down_dir_0, mdb__browse__Var_63, mdb__browse__Dirs_64);
            }
          }
        else
          mdb__browse__NewDirs_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Path_12, (MR_Integer) 0)));
        {
          mercury__list__reverse_2_p_0((MR_Word) &mdb__browser_info__mdb__browser_info__type_ctor_info_up_down_dir_0, mdb__browse__NewDirs_62, &mdb__browse__RevDirs_68);
        }
        {
          mdb__browse__simplify_rev_dirs_4_p_0(mdb__browse__RevDirs_68, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &mdb__browse__Dirs_11);
        }
      }
    {
      mdb__browse__deref_subterm_3_p_0(mdb__browse__Var_34, mdb__browse__Dirs_11, &mdb__browse__DerefResult_13);
    }
    if (((MR_tag((MR_Word) mdb__browse__DerefResult_13)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word mdb__browse__OKPath_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__DerefResult_13, (MR_Integer) 0)));
        MR_Word mdb__browse__ErrorDir_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__DerefResult_13, (MR_Integer) 1)));
        MR_String mdb__browse__Msg_81;
        MR_String mdb__browse__Var_90;
        MR_String mdb__browse__Var_91;

        {
          mdb__browser_info__write_string_debugger_4_p_0(mdb__browse__Debugger_6, (MR_String) "error: ");
        }
        if ((mdb__browse__OKPath_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_String mdb__browse__Context_80;
            MR_String mdb__browse__Var_85;
            MR_String mdb__browse__Var_86;

            {
              mdb__browse__Var_86 = mdb__browse__down_dirs_to_string_1_f_0(mdb__browse__OKPath_22);
            }
            {
              mdb__browse__Var_85 = mercury__string__f_43_43_2_f_0(mdb__browse__Var_86, (MR_String) ": ");
            }
            {
              mdb__browse__Context_80 = mercury__string__f_43_43_2_f_0((MR_String) "in subdir ", mdb__browse__Var_85);
            }
            {
              mdb__browser_info__write_string_debugger_4_p_0(mdb__browse__Debugger_6, mdb__browse__Context_80);
            }
          }
        if (((MR_tag((MR_Word) mdb__browse__ErrorDir_23)) == (MR_mktag((MR_Integer) 1))))
          mdb__browse__Var_91 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browse__ErrorDir_23, (MR_Integer) 0)));
        else
          {
            MR_Integer mdb__browse__Num_94 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browse__ErrorDir_23, (MR_Integer) 0)));

            {
              mdb__browse__Var_91 = mercury__string__int_to_string_1_f_0(mdb__browse__Num_94);
            }
          }
        {
          mdb__browse__Var_90 = mercury__string__f_43_43_2_f_0(mdb__browse__Var_91, (MR_String) "\n");
        }
        {
          mdb__browse__Msg_81 = mercury__string__f_43_43_2_f_0((MR_String) "there is no subterm ", mdb__browse__Var_90);
        }
        {
          mdb__browser_info__write_string_debugger_4_p_0(mdb__browse__Debugger_6, mdb__browse__Msg_81);
        }
        {
          mdb__browser_info__nl_debugger_3_p_0(mdb__browse__Debugger_6);
        }
      }
    else
      {
        MR_Word mdb__browse__BrowserTerm_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__DerefResult_13, (MR_Integer) 0)));
        MR_String mdb__browse__Str_18;

        if (((MR_tag((MR_Word) mdb__browse__BrowserTerm_14)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_Word mdb__browse__Univ_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__BrowserTerm_14, (MR_Integer) 0)));
            MR_Box mdb__browse__Value_16;
            MR_Integer mdb__browse__Addr_17;
            MR_String mdb__browse__Var_48;
            MR_String mdb__browse__Var_56;
            MR_Word mdb__browse__TypeInfo_46_46;

            {
              mdb__browse__Value_16 = mercury__univ__univ_value_1_f_0(&mdb__browse__TypeInfo_46_46, mdb__browse__Univ_15);
            }
            {
              mdb__browse__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_118_97_108_117_101_95_114_101_112_114_101_115_101_110_116_97_116_105_111_110_95_95_91_49_93_95_48_2_p_0(mdb__browse__Value_16, &mdb__browse__Addr_17);
            }
            {
              mercury__string__format__format_unsigned_int_component_nowidth_noprec_4_p_0((MR_Word) &mdb__browse_scalar_common_5[2], (MR_Integer) 2, mdb__browse__Addr_17, &mdb__browse__Var_48);
            }
            {
              mdb__browse__Var_56 = mercury__string__f_43_43_2_f_0(mdb__browse__Var_48, (MR_String) "\n");
            }
            {
              mdb__browse__Str_18 = mercury__string__f_43_43_2_f_0((MR_String) "addr = ", mdb__browse__Var_56);
            }
          }
        else
          mdb__browse__Str_18 = (MR_String) "synthetic terms have no addresses\n";
        {
          mdb__browser_info__write_string_debugger_4_p_0(mdb__browse__Debugger_6, mdb__browse__Str_18);
        }
      }
  }
}

static void MR_CALL 
mdb__browse__do_portray_7_p_0(
  MR_Word mdb__browse__Debugger_8,
  MR_Word mdb__browse__CallerType_9,
  MR_Word mdb__browse__MaybeMaybeOptionTable_10,
  MR_Word mdb__browse__Info_11,
  MR_Word mdb__browse__MaybePath_12)
{
  {
    MR_bool mdb__browse__succeeded;

    if ((mdb__browse__MaybeMaybeOptionTable_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word mdb__browse__Var_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

        if ((mdb__browse__MaybePath_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            mdb__browse__portray_6_p_0(mdb__browse__Debugger_8, mdb__browse__CallerType_9, mdb__browse__Var_28, mdb__browse__Info_11);
          }
        else
          {
            MR_Word mdb__browse__Path_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__MaybePath_12, (MR_Integer) 0)));
            MR_Word mdb__browse__Info_50;
            MR_Word mdb__browse__Dirs0_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_11, (MR_Integer) 1)));
            MR_Word mdb__browse__Dirs_57;
            MR_Word mdb__browse__NewDirs_76;
            MR_Word mdb__browse__RevDirs_82;
            MR_Word mdb__browse__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_11, (MR_Integer) 0)));
            MR_Word mdb__browse__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_11, (MR_Integer) 2)));
            MR_Word mdb__browse__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_11, (MR_Integer) 3)));
            MR_Word mdb__browse__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_11, (MR_Integer) 4)));
            MR_Word mdb__browse__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_11, (MR_Integer) 5)));
            MR_Word mdb__browse__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_11, (MR_Integer) 6)));
            MR_Word mdb__browse__Var_65;
            MR_Word mdb__browse__Var_67;
            MR_Word mdb__browse__Var_68;
            MR_Word mdb__browse__Var_69;
            MR_Word mdb__browse__Var_70;
            MR_Word mdb__browse__Var_71;
            MR_Word mdb__browse__Var_66;

            if (((MR_tag((MR_Word) mdb__browse__Path_39)) == (MR_mktag((MR_Integer) 1))))
              {
                MR_Word mdb__browse__Var_77;
                MR_Word mdb__browse__Dirs_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__Path_39, (MR_Integer) 0)));

                {
                  mdb__browse__Var_77 = mdb__browser_info__down_to_up_down_dirs_1_f_0(mdb__browse__Dirs0_56);
                }
                {
                  mdb__browse__NewDirs_76 = mercury__list__f_43_43_2_f_0((MR_Word) &mdb__browser_info__mdb__browser_info__type_ctor_info_up_down_dir_0, mdb__browse__Var_77, mdb__browse__Dirs_78);
                }
              }
            else
              mdb__browse__NewDirs_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Path_39, (MR_Integer) 0)));
            {
              mercury__list__reverse_2_p_0((MR_Word) &mdb__browser_info__mdb__browser_info__type_ctor_info_up_down_dir_0, mdb__browse__NewDirs_76, &mdb__browse__RevDirs_82);
            }
            {
              mdb__browse__simplify_rev_dirs_4_p_0(mdb__browse__RevDirs_82, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &mdb__browse__Dirs_57);
            }
            mdb__browse__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_11, (MR_Integer) 0)));
            mdb__browse__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_11, (MR_Integer) 1)));
            mdb__browse__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_11, (MR_Integer) 2)));
            mdb__browse__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_11, (MR_Integer) 3)));
            mdb__browse__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_11, (MR_Integer) 4)));
            mdb__browse__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_11, (MR_Integer) 5)));
            mdb__browse__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_11, (MR_Integer) 6)));
            {
              mdb__browse__Info_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mdb__browse__Info_50, 0) = ((MR_Box) (mdb__browse__Var_65));
              MR_hl_field(MR_mktag(0), mdb__browse__Info_50, 1) = ((MR_Box) (mdb__browse__Dirs_57));
              MR_hl_field(MR_mktag(0), mdb__browse__Info_50, 2) = ((MR_Box) (mdb__browse__Var_67));
              MR_hl_field(MR_mktag(0), mdb__browse__Info_50, 3) = ((MR_Box) (mdb__browse__Var_68));
              MR_hl_field(MR_mktag(0), mdb__browse__Info_50, 4) = ((MR_Box) (mdb__browse__Var_69));
              MR_hl_field(MR_mktag(0), mdb__browse__Info_50, 5) = ((MR_Box) (mdb__browse__Var_70));
              MR_hl_field(MR_mktag(0), mdb__browse__Info_50, 6) = ((MR_Box) (mdb__browse__Var_71));
            }
            {
              mdb__browse__portray_6_p_0(mdb__browse__Debugger_8, mdb__browse__CallerType_9, mdb__browse__Var_28, mdb__browse__Info_50);
            }
          }
      }
    else
      {
        MR_Word mdb__browse__MaybeOptionTable_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__MaybeMaybeOptionTable_10, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) mdb__browse__MaybeOptionTable_14)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_String mdb__browse__Msg_30 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browse__MaybeOptionTable_14, (MR_Integer) 0)));

            {
              mdb__browser_info__write_string_debugger_4_p_0(mdb__browse__Debugger_8, mdb__browse__Msg_30);
            }
            {
              mdb__browser_info__write_string_debugger_4_p_0(mdb__browse__Debugger_8, (MR_String) "\n");
            }
          }
        else
          {
            MR_Word mdb__browse__OptionTable_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__MaybeOptionTable_14, (MR_Integer) 0)));
            MR_Word mdb__browse__FormatResult_16;

            {
              mdb__browse__interpret_format_options_2_p_0(mdb__browse__OptionTable_15, &mdb__browse__FormatResult_16);
            }
            if (((MR_tag((MR_Word) mdb__browse__FormatResult_16)) == (MR_mktag((MR_Integer) 1))))
              {
                MR_String mdb__browse__Msg_18 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browse__FormatResult_16, (MR_Integer) 0)));

                {
                  mdb__browser_info__write_string_debugger_4_p_0(mdb__browse__Debugger_8, mdb__browse__Msg_18);
                }
                {
                  mdb__browser_info__write_string_debugger_4_p_0(mdb__browse__Debugger_8, (MR_String) "\n");
                }
              }
            else
              {
                MR_Word mdb__browse__MaybeFormat_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__FormatResult_16, (MR_Integer) 0)));

                {
                  mdb__browse__portray_maybe_path_7_p_0(mdb__browse__Debugger_8, mdb__browse__CallerType_9, mdb__browse__MaybeFormat_17, mdb__browse__Info_11, mdb__browse__MaybePath_12);
                }
              }
          }
      }
  }
}

static void MR_CALL 
mdb__browse__run_command_7_p_0(
  MR_Word mdb__browse__Debugger_8,
  MR_Word mdb__browse__Command_9,
  MR_Word * mdb__browse__Quit_10,
  MR_Word mdb__browse__STATE_VARIABLE_Info_0_29,
  MR_Word * mdb__browse__STATE_VARIABLE_Info_30)
{
  {
    MR_bool mdb__browse__succeeded;

    switch (MR_tag((MR_Word) mdb__browse__Command_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(mdb__browse__Command_9)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mdb__browser_info__write_string_debugger_4_p_0(mdb__browse__Debugger_8, (MR_String) "command not yet implemented\n");
              }
              *mdb__browse__Quit_10 = (MR_Integer) 0;
              *mdb__browse__STATE_VARIABLE_Info_30 = mdb__browse__STATE_VARIABLE_Info_0_29;
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mdb__browser_info__write_string_debugger_4_p_0(mdb__browse__Debugger_8, (MR_String) "command not yet implemented\n");
              }
              *mdb__browse__Quit_10 = (MR_Integer) 0;
              *mdb__browse__STATE_VARIABLE_Info_30 = mdb__browse__STATE_VARIABLE_Info_0_29;
            }
            break;
          case (MR_Integer) 2:
            {
              {
                mdb__browse__set_path_3_p_0((MR_Word) &mdb__browse_scalar_common_5[1], mdb__browse__STATE_VARIABLE_Info_0_29, mdb__browse__STATE_VARIABLE_Info_30);
              }
              *mdb__browse__Quit_10 = (MR_Integer) 0;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word mdb__browse__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 1)));
              MR_Word mdb__browse__Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 0)));
              MR_Word mdb__browse__Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 2)));
              MR_Word mdb__browse__Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 3)));
              MR_Word mdb__browse__Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 4)));
              MR_Word mdb__browse__Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 5)));
              MR_Word mdb__browse__Var_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 6)));

              {
                mdb__browser_info__write_down_path_4_p_0(mdb__browse__Debugger_8, mdb__browse__Var_54);
              }
              {
                mdb__browser_info__nl_debugger_3_p_0(mdb__browse__Debugger_8);
              }
              *mdb__browse__Quit_10 = (MR_Integer) 0;
              *mdb__browse__STATE_VARIABLE_Info_30 = mdb__browse__STATE_VARIABLE_Info_0_29;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word mdb__browse__MaybeModeFunc_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 6)));
              MR_Word mdb__browse__Var_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 1)));
              MR_Word mdb__browse__Var_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 0)));
              MR_Word mdb__browse__Var_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 2)));
              MR_Word mdb__browse__Var_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 3)));
              MR_Word mdb__browse__Var_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 4)));
              MR_Word mdb__browse__Var_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 5)));

              {
                mdb__browse__write_term_mode_debugger_5_p_0(mdb__browse__Debugger_8, mdb__browse__MaybeModeFunc_83, mdb__browse__Var_154);
              }
              *mdb__browse__Quit_10 = (MR_Integer) 0;
              *mdb__browse__STATE_VARIABLE_Info_30 = mdb__browse__STATE_VARIABLE_Info_0_29;
            }
            break;
          case (MR_Integer) 5:
            {
              {
                mdb__browse__help_3_p_0(mdb__browse__Debugger_8);
              }
              *mdb__browse__Quit_10 = (MR_Integer) 0;
              *mdb__browse__STATE_VARIABLE_Info_30 = mdb__browse__STATE_VARIABLE_Info_0_29;
            }
            break;
          case (MR_Integer) 6:
            {
              *mdb__browse__Quit_10 = (MR_Integer) 1;
              *mdb__browse__STATE_VARIABLE_Info_30 = mdb__browse__STATE_VARIABLE_Info_0_29;
            }
            break;
          case (MR_Integer) 7:
            {
              *mdb__browse__Quit_10 = (MR_Integer) 0;
              *mdb__browse__STATE_VARIABLE_Info_30 = mdb__browse__STATE_VARIABLE_Info_0_29;
            }
            break;
          case (MR_Integer) 8:
            {
              {
                mdb__browser_info__write_string_debugger_4_p_0(mdb__browse__Debugger_8, (MR_String) "Error: unknown command or syntax error.\n");
              }
              {
                mdb__browser_info__write_string_debugger_4_p_0(mdb__browse__Debugger_8, (MR_String) "Type \"help\" for help.\n");
              }
              *mdb__browse__Quit_10 = (MR_Integer) 0;
              *mdb__browse__STATE_VARIABLE_Info_30 = mdb__browse__STATE_VARIABLE_Info_0_29;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word mdb__browse__PrintOption_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__Command_9, (MR_Integer) 0)));
          MR_Word mdb__browse__MaybePath_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__Command_9, (MR_Integer) 1)));

          {
            mdb__browse__do_portray_7_p_0(mdb__browse__Debugger_8, (MR_Integer) 1, mdb__browse__PrintOption_13, mdb__browse__STATE_VARIABLE_Info_0_29, mdb__browse__MaybePath_14);
          }
          *mdb__browse__Quit_10 = (MR_Integer) 0;
          *mdb__browse__STATE_VARIABLE_Info_30 = mdb__browse__STATE_VARIABLE_Info_0_29;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word mdb__browse__MaybePath_73 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__browse__Command_9, (MR_Integer) 0)));

          {
            mdb__browse__do_print_memory_addr_5_p_0(mdb__browse__Debugger_8, mdb__browse__STATE_VARIABLE_Info_0_29, mdb__browse__MaybePath_73);
          }
          *mdb__browse__Quit_10 = (MR_Integer) 0;
          *mdb__browse__STATE_VARIABLE_Info_30 = mdb__browse__STATE_VARIABLE_Info_0_29;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__browse__Command_9, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word mdb__browse__Path_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__browse__Command_9, (MR_Integer) 1)));
              MR_Word mdb__browse__NewPwd_16;
              MR_Word mdb__browse__Result_17;
              MR_Word mdb__browse__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 1)));
              MR_Word mdb__browse__Var_58;
              MR_Word mdb__browse__Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 0)));
              MR_Word mdb__browse__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 2)));
              MR_Word mdb__browse__Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 3)));
              MR_Word mdb__browse__Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 4)));
              MR_Word mdb__browse__Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 5)));
              MR_Word mdb__browse__Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 6)));
              MR_Word mdb__browse__Var_90;
              MR_Word mdb__browse__Var_91;
              MR_Word mdb__browse__Var_92;
              MR_Word mdb__browse__Var_93;
              MR_Word mdb__browse__Var_94;
              MR_Word mdb__browse__Var_95;

              {
                mdb__browse__change_dir_3_p_0(mdb__browse__Var_57, mdb__browse__Path_15, &mdb__browse__NewPwd_16);
              }
              mdb__browse__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 0)));
              mdb__browse__Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 1)));
              mdb__browse__Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 2)));
              mdb__browse__Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 3)));
              mdb__browse__Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 4)));
              mdb__browse__Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 5)));
              mdb__browse__Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 6)));
              {
                mdb__browse__deref_subterm_3_p_0(mdb__browse__Var_58, mdb__browse__NewPwd_16, &mdb__browse__Result_17);
              }
              if (((MR_tag((MR_Word) mdb__browse__Result_17)) == (MR_mktag((MR_Integer) 1))))
                {
                  MR_Word mdb__browse__OKPath_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__Result_17, (MR_Integer) 0)));
                  MR_Word mdb__browse__ErrorDir_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__Result_17, (MR_Integer) 1)));

                  {
                    mdb__browse__report_deref_error_5_p_0(mdb__browse__Debugger_8, mdb__browse__OKPath_19, mdb__browse__ErrorDir_20);
                  }
                  *mdb__browse__STATE_VARIABLE_Info_30 = mdb__browse__STATE_VARIABLE_Info_0_29;
                }
              else
                {
                  MR_Word mdb__browse__Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 0)));
                  MR_Word mdb__browse__Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 2)));
                  MR_Word mdb__browse__Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 3)));
                  MR_Word mdb__browse__Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 4)));
                  MR_Word mdb__browse__Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 5)));
                  MR_Word mdb__browse__Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 6)));
                  MR_Word mdb__browse__Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 1)));

                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
                    *mdb__browse__STATE_VARIABLE_Info_30 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__browse__Var_96));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__browse__NewPwd_16));
                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__browse__Var_98));
                    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__browse__Var_99));
                    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__browse__Var_100));
                    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__browse__Var_101));
                    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (mdb__browse__Var_102));
                  }
                }
              *mdb__browse__Quit_10 = (MR_Integer) 0;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word mdb__browse__HowTrack_21 = ((((MR_Word) (MR_hl_field(MR_mktag(3), mdb__browse__Command_9, (MR_Integer) 1)))) & (MR_Integer) 1);
              MR_Word mdb__browse__ShouldAssertInvalid_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), mdb__browse__Command_9, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              MR_Word mdb__browse__MaybePath_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__browse__Command_9, (MR_Integer) 2)));
              MR_Word mdb__browse__Var_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 6)));
              MR_Word mdb__browse__Var_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 4)));
              MR_Word mdb__browse__Var_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 3)));
              MR_Word mdb__browse__Var_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 2)));
              MR_Word mdb__browse__Var_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 1)));
              MR_Word mdb__browse__Var_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 0)));
              MR_Word mdb__browse__Var_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 5)));

              if ((mdb__browse__MaybePath_78 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_Word mdb__browse__Var_46;

                  {
                    mdb__browse__Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mdb__browse__Var_46, 0) = ((MR_Box) ((mdb__browse__HowTrack_21 | ((mdb__browse__ShouldAssertInvalid_22 << (MR_Integer) 1)))));
                    MR_hl_field(MR_mktag(1), mdb__browse__Var_46, 1) = ((MR_Box) (mdb__browse__Var_170));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
                    *mdb__browse__STATE_VARIABLE_Info_30 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__browse__Var_171));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__browse__Var_170));
                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__browse__Var_169));
                    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__browse__Var_168));
                    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__browse__Var_167));
                    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__browse__Var_46));
                    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (mdb__browse__Var_165));
                  }
                  *mdb__browse__Quit_10 = (MR_Integer) 1;
                }
              else
                {
                  MR_Word mdb__browse__SubResult_23;
                  MR_Word mdb__browse__Var_49;
                  MR_Word mdb__browse__Path_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__MaybePath_78, (MR_Integer) 0)));
                  MR_Word mdb__browse__NewPwd_75;
                  MR_Word mdb__browse__Var_115;
                  MR_Word mdb__browse__Var_116;
                  MR_Word mdb__browse__Var_117;
                  MR_Word mdb__browse__Var_118;
                  MR_Word mdb__browse__Var_119;
                  MR_Word mdb__browse__Var_120;

                  {
                    mdb__browse__change_dir_3_p_0(mdb__browse__Var_170, mdb__browse__Path_74, &mdb__browse__NewPwd_75);
                  }
                  mdb__browse__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 0)));
                  mdb__browse__Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 1)));
                  mdb__browse__Var_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 2)));
                  mdb__browse__Var_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 3)));
                  mdb__browse__Var_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 4)));
                  mdb__browse__Var_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 5)));
                  mdb__browse__Var_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 6)));
                  {
                    mdb__browse__deref_subterm_3_p_0(mdb__browse__Var_49, mdb__browse__NewPwd_75, &mdb__browse__SubResult_23);
                  }
                  if (((MR_tag((MR_Word) mdb__browse__SubResult_23)) == (MR_mktag((MR_Integer) 1))))
                    {
                      {
                        mdb__browser_info__write_string_debugger_4_p_0(mdb__browse__Debugger_8, (MR_String) "error: cannot track subterm\n");
                      }
                      *mdb__browse__Quit_10 = (MR_Integer) 0;
                      *mdb__browse__STATE_VARIABLE_Info_30 = mdb__browse__STATE_VARIABLE_Info_0_29;
                    }
                  else
                    {
                      MR_Word mdb__browse__Var_53;
                      MR_Word mdb__browse__Var_121;
                      MR_Word mdb__browse__Var_122;
                      MR_Word mdb__browse__Var_123;
                      MR_Word mdb__browse__Var_124;
                      MR_Word mdb__browse__Var_125;
                      MR_Word mdb__browse__Var_127;
                      MR_Word mdb__browse__Var_126;

                      {
                        mdb__browse__Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), mdb__browse__Var_53, 0) = ((MR_Box) ((mdb__browse__HowTrack_21 | ((mdb__browse__ShouldAssertInvalid_22 << (MR_Integer) 1)))));
                        MR_hl_field(MR_mktag(1), mdb__browse__Var_53, 1) = ((MR_Box) (mdb__browse__NewPwd_75));
                      }
                      mdb__browse__Var_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 0)));
                      mdb__browse__Var_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 1)));
                      mdb__browse__Var_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 2)));
                      mdb__browse__Var_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 3)));
                      mdb__browse__Var_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 4)));
                      mdb__browse__Var_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 5)));
                      mdb__browse__Var_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 6)));
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
                        *mdb__browse__STATE_VARIABLE_Info_30 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__browse__Var_121));
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__browse__Var_122));
                        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__browse__Var_123));
                        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__browse__Var_124));
                        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__browse__Var_125));
                        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__browse__Var_53));
                        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (mdb__browse__Var_127));
                      }
                      *mdb__browse__Quit_10 = (MR_Integer) 1;
                    }
                }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mdb__browse__MaybeModeFunc_27;
              MR_Word mdb__browse__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 1)));
              MR_Word mdb__browse__Path_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__browse__Command_9, (MR_Integer) 1)));
              MR_Word mdb__browse__NewPwd_82;
              MR_Word mdb__browse__Var_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 0)));
              MR_Word mdb__browse__Var_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 2)));
              MR_Word mdb__browse__Var_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 3)));
              MR_Word mdb__browse__Var_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 4)));
              MR_Word mdb__browse__Var_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 5)));
              MR_Word mdb__browse__Var_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 6)));
              MR_Word mdb__browse__Var_147;
              MR_Word mdb__browse__Var_148;
              MR_Word mdb__browse__Var_149;
              MR_Word mdb__browse__Var_150;
              MR_Word mdb__browse__Var_151;
              MR_Word mdb__browse__Var_152;

              {
                mdb__browse__change_dir_3_p_0(mdb__browse__Var_43, mdb__browse__Path_81, &mdb__browse__NewPwd_82);
              }
              mdb__browse__Var_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 0)));
              mdb__browse__Var_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 1)));
              mdb__browse__Var_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 2)));
              mdb__browse__Var_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 3)));
              mdb__browse__Var_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 4)));
              mdb__browse__Var_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 5)));
              mdb__browse__MaybeModeFunc_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__STATE_VARIABLE_Info_0_29, (MR_Integer) 6)));
              {
                mdb__browse__write_term_mode_debugger_5_p_0(mdb__browse__Debugger_8, mdb__browse__MaybeModeFunc_27, mdb__browse__NewPwd_82);
              }
              *mdb__browse__Quit_10 = (MR_Integer) 0;
              *mdb__browse__STATE_VARIABLE_Info_30 = mdb__browse__STATE_VARIABLE_Info_0_29;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word mdb__browse__ParamCmd_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__browse__Command_9, (MR_Integer) 1)));

              {
                mdb__browser_info__run_param_command_7_p_0(mdb__browse__Debugger_8, mdb__browse__ParamCmd_28, (MR_Integer) 1, mdb__browse__STATE_VARIABLE_Info_0_29, mdb__browse__STATE_VARIABLE_Info_30);
              }
              *mdb__browse__Quit_10 = (MR_Integer) 0;
            }
            break;
        }
        break;
    }
    switch (mdb__browse__Debugger_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          {
            mdb__browser_info__send_term_to_socket_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)));
          }
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
mdb__browse__browse_main_loop_5_p_0(
  MR_Word mdb__browse__Debugger_6,
  MR_Word mdb__browse__STATE_VARIABLE_Info_0_11,
  MR_Word * mdb__browse__STATE_VARIABLE_Info_12)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mdb__browse__succeeded;
        MR_Word mdb__browse__Command_9;
        MR_Word mdb__browse__Quit_10;
        MR_Word mdb__browse__STATE_VARIABLE_Info_18_18;

        switch (mdb__browse__Debugger_6) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              mdb__parse__read_command_external_3_p_0(&mdb__browse__Command_9);
            }
            break;
          case (MR_Integer) 0:
            {
              {
                mdb__parse__read_command_4_p_0((MR_String) "browser> ", &mdb__browse__Command_9);
              }
            }
            break;
        }
        {
          mdb__browse__run_command_7_p_0(mdb__browse__Debugger_6, mdb__browse__Command_9, &mdb__browse__Quit_10, mdb__browse__STATE_VARIABLE_Info_0_11, &mdb__browse__STATE_VARIABLE_Info_18_18);
        }
        switch (mdb__browse__Quit_10) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              /* direct tailcall eliminated */
              {
                MR_Word mdb__browse__next_value_of_STATE_VARIABLE_Info_0_11 = mdb__browse__STATE_VARIABLE_Info_18_18;

                mdb__browse__STATE_VARIABLE_Info_0_11 = mdb__browse__next_value_of_STATE_VARIABLE_Info_0_11;
              }
              continue;
            }
            break;
          case (MR_Integer) 1:
            {
              switch (mdb__browse__Debugger_6) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    {
                      mdb__browser_info__send_term_to_socket_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)));
                    }
                  }
                  break;
                case (MR_Integer) 0:
                  {
                  }
                  break;
              }
              *mdb__browse__STATE_VARIABLE_Info_12 = mdb__browse__STATE_VARIABLE_Info_18_18;
            }
            break;
        }
      }
      break;
    }
}

MR_bool MR_CALL 
mdb__browse__string_is_return_value_alias_1_p_0(
  MR_String mdb__browse__HeadVar__1_1)
{
  {
    MR_bool mdb__browse__succeeded;
    MR_Integer mdb__browse__lo_0;
    MR_Integer mdb__browse__hi_1;
    MR_Integer mdb__browse__mid_2;
    MR_Integer mdb__browse__result_3;

    /* binary string simple lookup switch */
    mdb__browse__lo_0 = (MR_Integer) 0;
    mdb__browse__hi_1 = (MR_Integer) 5;
    do
      {
        mdb__browse__mid_2 = (((mdb__browse__lo_0 + mdb__browse__hi_1)) / (MR_Integer) 2);
        mdb__browse__result_3 = MR_strcmp(mdb__browse__HeadVar__1_1, ((&mdb__browse_vector_common_7[0 + mdb__browse__mid_2]))->mdb__browse__vector_common_type_7_0__vct_7_f_0);
        if ((mdb__browse__result_3 == (MR_Integer) 0))
          {
            mdb__browse__succeeded = MR_TRUE;
            /* jump out of search loop */
            goto label_0;
          }
        else
        if ((mdb__browse__result_3 < (MR_Integer) 0))
          mdb__browse__hi_1 = (mdb__browse__mid_2 - (MR_Integer) 1);
        else
          mdb__browse__lo_0 = (mdb__browse__mid_2 + (MR_Integer) 1);
      }
    while ((mdb__browse__lo_0 <= mdb__browse__hi_1));
    mdb__browse__succeeded = MR_FALSE;
  label_0:;
    return mdb__browse__succeeded;
  }
}

void MR_CALL 
mdb__browse__simplify_dirs_2_p_0(
  MR_Word mdb__browse__Dirs_3,
  MR_Word * mdb__browse__SimpleDirs_4)
{
  {
    MR_bool mdb__browse__succeeded;
    MR_Word mdb__browse__RevDirs_5;

    {
      mercury__list__reverse_2_p_0((MR_Word) &mdb__browser_info__mdb__browser_info__type_ctor_info_up_down_dir_0, mdb__browse__Dirs_3, &mdb__browse__RevDirs_5);
    }
    {
      mdb__browse__simplify_rev_dirs_4_p_0(mdb__browse__RevDirs_5, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), mdb__browse__SimpleDirs_4);
    }
  }
}

void MR_CALL 
mdb__browse__save_and_browse_browser_term_xml_6_p_0(
  MR_Word mdb__browse__Term_7,
  MR_Word mdb__browse__OutStream_8,
  MR_Word mdb__browse__ErrStream_9,
  MR_Word mdb__browse__State_10)
{
  {
    MR_bool mdb__browse__succeeded;
    MR_Word mdb__browse__MaybeXMLBrowserCmd_12;
    MR_Word mdb__browse__MaybeTmpFileName_13;

    {
      mdb__browse__MaybeXMLBrowserCmd_12 = mdb__browser_info__xml_browser_cmd_1_f_0(mdb__browse__State_10);
    }
    {
      mdb__browse__MaybeTmpFileName_13 = mdb__browser_info__xml_tmp_filename_1_f_0(mdb__browse__State_10);
    }
    if ((mdb__browse__MaybeXMLBrowserCmd_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((mdb__browse__MaybeTmpFileName_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          {
            mercury__io__write_string_4_p_0(mdb__browse__ErrStream_9, (MR_String) "mdb: You need to issue a \"set xml_browser_cmd \'<command>\'\" command\nand a \"set xml_tmp_filename \'<filename>\'\" command first.\n");
          }
        }
      else
        {
          {
            mercury__io__write_string_4_p_0(mdb__browse__ErrStream_9, (MR_String) "mdb: You need to issue a \"set xml_browser_cmd \'<command>\'\" command first.\n");
          }
        }
    else
      {
        MR_String mdb__browse__Var_49 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browse__MaybeXMLBrowserCmd_12, (MR_Integer) 0)));

        if ((mdb__browse__MaybeTmpFileName_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__io__write_string_4_p_0(mdb__browse__ErrStream_9, (MR_String) "mdb: You need to issue a \"set xml_tmp_filename \'<filename>\'\" command first.\n");
            }
          }
        else
          {
            MR_String mdb__browse__TmpFileName_15 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browse__MaybeTmpFileName_13, (MR_Integer) 0)));
            MR_Word mdb__browse__SaveResult_16;

            {
              mercury__io__write_string_4_p_0(mdb__browse__OutStream_8, (MR_String) "Saving term to XML file...\n");
            }
            {
              mercury__io__open_output_4_p_0(mdb__browse__TmpFileName_15, &mdb__browse__SaveResult_16);
            }
            if (((MR_tag((MR_Word) mdb__browse__SaveResult_16)) == (MR_mktag((MR_Integer) 1))))
              {
              }
            else
              {
                MR_Word mdb__browse__OutputStream_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__SaveResult_16, (MR_Integer) 0)));

                if (((MR_tag((MR_Word) mdb__browse__Term_7)) == (MR_mktag((MR_Integer) 0))))
                  {
                    MR_Word mdb__browse__TypeInfo_39_83;
                    MR_Word mdb__browse__Univ_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Term_7, (MR_Integer) 0)));
                    MR_Box mdb__browse__Term_58;
                    MR_Word mdb__browse__Var_59;
                    MR_Box mdb__browse__conv0_STATE_VARIABLE_IO_37_81;

                    {
                      mdb__browse__Term_58 = mercury__univ__univ_value_1_f_0(&mdb__browse__TypeInfo_39_83, mdb__browse__Univ_57);
                    }
                    {
                      mercury__term_to_xml__write_xml_doc_general_cc_8_p_0(mdb__browse__TypeInfo_39_83, (MR_Word) &mdb__browse_scalar_common_3[0], ((MR_Box) (mdb__browse__OutputStream_56)), mdb__browse__Term_58, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), &mdb__browse__Var_59, ((MR_Box) ((MR_Integer) 0)), &mdb__browse__conv0_STATE_VARIABLE_IO_37_81);
                    }
                  }
                else
                  {
                    MR_String mdb__browse__Functor_60 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browse__Term_7, (MR_Integer) 0)));
                    MR_Word mdb__browse__Args_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__Term_7, (MR_Integer) 1)));
                    MR_Word mdb__browse__MaybeRes_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__Term_7, (MR_Integer) 2)));

                    if ((mdb__browse__MaybeRes_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      {
                        MR_Word mdb__browse__PredicateTerm_63;
                        MR_Word mdb__browse__Var_64;
                        MR_Box mdb__browse__conv1_STATE_VARIABLE_IO_37_81;

                        {
                          mdb__browse__PredicateTerm_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), mdb__browse__PredicateTerm_63, 0) = ((MR_Box) (mdb__browse__Functor_60));
                          MR_hl_field(MR_mktag(0), mdb__browse__PredicateTerm_63, 1) = ((MR_Box) (mdb__browse__Args_61));
                        }
                        {
                          mercury__term_to_xml__write_xml_doc_general_cc_8_p_0((MR_Word) &mdb__browse__mdb__browse__type_ctor_info_xml_predicate_wrapper_0, (MR_Word) &mdb__browse_scalar_common_3[0], ((MR_Box) (mdb__browse__OutputStream_56)), ((MR_Box) (mdb__browse__PredicateTerm_63)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), &mdb__browse__Var_64, ((MR_Box) ((MR_Integer) 0)), &mdb__browse__conv1_STATE_VARIABLE_IO_37_81);
                        }
                      }
                    else
                      {
                        MR_Word mdb__browse__Result_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__MaybeRes_62, (MR_Integer) 0)));
                        MR_Word mdb__browse__FunctionTerm_66;
                        MR_Word mdb__browse__Var_67;
                        MR_Box mdb__browse__conv2_STATE_VARIABLE_IO_37_81;

                        {
                          mdb__browse__FunctionTerm_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), mdb__browse__FunctionTerm_66, 0) = ((MR_Box) (mdb__browse__Functor_60));
                          MR_hl_field(MR_mktag(0), mdb__browse__FunctionTerm_66, 1) = ((MR_Box) (mdb__browse__Args_61));
                          MR_hl_field(MR_mktag(0), mdb__browse__FunctionTerm_66, 2) = ((MR_Box) (mdb__browse__Result_65));
                        }
                        {
                          mercury__term_to_xml__write_xml_doc_general_cc_8_p_0((MR_Word) &mdb__browse__mdb__browse__type_ctor_info_xml_function_wrapper_0, (MR_Word) &mdb__browse_scalar_common_3[0], ((MR_Box) (mdb__browse__OutputStream_56)), ((MR_Box) (mdb__browse__FunctionTerm_66)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), &mdb__browse__Var_67, ((MR_Box) ((MR_Integer) 0)), &mdb__browse__conv2_STATE_VARIABLE_IO_37_81);
                        }
                      }
                  }
                {
                  mercury__io__close_output_3_p_0(mdb__browse__OutputStream_56);
                }
              }
            if (((MR_tag((MR_Word) mdb__browse__SaveResult_16)) == (MR_mktag((MR_Integer) 1))))
              {
                MR_Word mdb__browse__Error_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__SaveResult_16, (MR_Integer) 0)));
                MR_String mdb__browse__Msg_19;
                MR_String mdb__browse__Var_41;
                MR_String mdb__browse__Var_44;

                {
                  mercury__io__error_message_2_p_0(mdb__browse__Error_18, &mdb__browse__Msg_19);
                }
                {
                  mdb__browse__Var_44 = mercury__string__f_43_43_2_f_0(mdb__browse__TmpFileName_15, (MR_String) "\': ");
                }
                {
                  mdb__browse__Var_41 = mercury__string__f_43_43_2_f_0((MR_String) "Error opening file \140", mdb__browse__Var_44);
                }
                {
                  mercury__io__write_string_4_p_0(mdb__browse__ErrStream_9, mdb__browse__Var_41);
                }
                {
                  mercury__io__write_string_4_p_0(mdb__browse__ErrStream_9, mdb__browse__Msg_19);
                }
                {
                  mercury__io__nl_2_p_0();
                }
              }
            else
              {
                mdb__browse__launch_xml_browser_5_p_0(mdb__browse__OutStream_8, mdb__browse__ErrStream_9, mdb__browse__Var_49);
              }
          }
      }
  }
}

void MR_CALL 
mdb__browse__save_term_to_file_xml_5_p_0(
  MR_String mdb__browse__FileName_6,
  MR_Word mdb__browse__BrowserTerm_7,
  MR_Word mdb__browse__OutStream_8)
{
  {
    MR_bool mdb__browse__succeeded;
    MR_Word mdb__browse__Result_10;

    {
      mercury__io__open_output_4_p_0(mdb__browse__FileName_6, &mdb__browse__Result_10);
    }
    if (((MR_tag((MR_Word) mdb__browse__Result_10)) == (MR_mktag((MR_Integer) 1))))
      {
      }
    else
      {
        MR_Word mdb__browse__OutputStream_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Result_10, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) mdb__browse__BrowserTerm_7)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_Word mdb__browse__TypeInfo_39_52;
            MR_Word mdb__browse__Univ_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__BrowserTerm_7, (MR_Integer) 0)));
            MR_Box mdb__browse__Term_27;
            MR_Word mdb__browse__Var_28;
            MR_Box mdb__browse__conv0_STATE_VARIABLE_IO_37_50;

            {
              mdb__browse__Term_27 = mercury__univ__univ_value_1_f_0(&mdb__browse__TypeInfo_39_52, mdb__browse__Univ_26);
            }
            {
              mercury__term_to_xml__write_xml_doc_general_cc_8_p_0(mdb__browse__TypeInfo_39_52, (MR_Word) &mdb__browse_scalar_common_3[0], ((MR_Box) (mdb__browse__OutputStream_25)), mdb__browse__Term_27, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), &mdb__browse__Var_28, ((MR_Box) ((MR_Integer) 0)), &mdb__browse__conv0_STATE_VARIABLE_IO_37_50);
            }
          }
        else
          {
            MR_String mdb__browse__Functor_29 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browse__BrowserTerm_7, (MR_Integer) 0)));
            MR_Word mdb__browse__Args_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__BrowserTerm_7, (MR_Integer) 1)));
            MR_Word mdb__browse__MaybeRes_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__BrowserTerm_7, (MR_Integer) 2)));

            if ((mdb__browse__MaybeRes_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word mdb__browse__PredicateTerm_32;
                MR_Word mdb__browse__Var_33;
                MR_Box mdb__browse__conv1_STATE_VARIABLE_IO_37_50;

                {
                  mdb__browse__PredicateTerm_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mdb__browse__PredicateTerm_32, 0) = ((MR_Box) (mdb__browse__Functor_29));
                  MR_hl_field(MR_mktag(0), mdb__browse__PredicateTerm_32, 1) = ((MR_Box) (mdb__browse__Args_30));
                }
                {
                  mercury__term_to_xml__write_xml_doc_general_cc_8_p_0((MR_Word) &mdb__browse__mdb__browse__type_ctor_info_xml_predicate_wrapper_0, (MR_Word) &mdb__browse_scalar_common_3[0], ((MR_Box) (mdb__browse__OutputStream_25)), ((MR_Box) (mdb__browse__PredicateTerm_32)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), &mdb__browse__Var_33, ((MR_Box) ((MR_Integer) 0)), &mdb__browse__conv1_STATE_VARIABLE_IO_37_50);
                }
              }
            else
              {
                MR_Word mdb__browse__Result_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__MaybeRes_31, (MR_Integer) 0)));
                MR_Word mdb__browse__FunctionTerm_35;
                MR_Word mdb__browse__Var_36;
                MR_Box mdb__browse__conv2_STATE_VARIABLE_IO_37_50;

                {
                  mdb__browse__FunctionTerm_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mdb__browse__FunctionTerm_35, 0) = ((MR_Box) (mdb__browse__Functor_29));
                  MR_hl_field(MR_mktag(0), mdb__browse__FunctionTerm_35, 1) = ((MR_Box) (mdb__browse__Args_30));
                  MR_hl_field(MR_mktag(0), mdb__browse__FunctionTerm_35, 2) = ((MR_Box) (mdb__browse__Result_34));
                }
                {
                  mercury__term_to_xml__write_xml_doc_general_cc_8_p_0((MR_Word) &mdb__browse__mdb__browse__type_ctor_info_xml_function_wrapper_0, (MR_Word) &mdb__browse_scalar_common_3[0], ((MR_Box) (mdb__browse__OutputStream_25)), ((MR_Box) (mdb__browse__FunctionTerm_35)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), &mdb__browse__Var_36, ((MR_Box) ((MR_Integer) 0)), &mdb__browse__conv2_STATE_VARIABLE_IO_37_50);
                }
              }
          }
        {
          mercury__io__close_output_3_p_0(mdb__browse__OutputStream_25);
        }
      }
    if (((MR_tag((MR_Word) mdb__browse__Result_10)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word mdb__browse__Error_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__Result_10, (MR_Integer) 0)));
        MR_String mdb__browse__Msg_13;

        {
          mercury__io__error_message_2_p_0(mdb__browse__Error_12, &mdb__browse__Msg_13);
        }
        {
          mercury__io__write_string_4_p_0(mdb__browse__OutStream_8, mdb__browse__Msg_13);
        }
        {
          mercury__io__nl_2_p_0();
        }
      }
    else
      {
      }
  }
}

void MR_CALL 
mdb__browse__save_term_to_file_6_p_0(
  MR_String mdb__browse__FileName_7,
  MR_String mdb__browse___Format_8,
  MR_Word mdb__browse__BrowserTerm_9,
  MR_Word mdb__browse__OutStream_10)
{
  {
    MR_bool mdb__browse__succeeded;

    {
      mdb__browse__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_118_101_95_116_101_114_109_95_116_111_95_102_105_108_101_95_95_91_50_93_95_48_6_p_0(mdb__browse__FileName_7, mdb__browse__BrowserTerm_9, mdb__browse__OutStream_10);
    }
  }
}

static void MR_CALL 
mdb__browse__browser_term_size_left_from_max_3_p_0_1(
  MR_Box mdb__browse__closure_arg,
  MR_Box mdb__browse__wrapper_arg_1,
  MR_Box mdb__browse__wrapper_arg_2,
  MR_Box * mdb__browse__wrapper_arg_3)
{
  {
    MR_Box mdb__browse__closure = mdb__browse__closure_arg;
    MR_Integer mdb__browse__conv0_RemainingSize_6;

    {
      mdb__browse__term_size_left_from_max_3_p_0(((MR_Word) mdb__browse__wrapper_arg_1), ((MR_Integer) mdb__browse__wrapper_arg_2), &mdb__browse__conv0_RemainingSize_6);
    }
    *mdb__browse__wrapper_arg_3 = ((MR_Box) (mdb__browse__conv0_RemainingSize_6));
  }
}

void MR_CALL 
mdb__browse__browser_term_size_left_from_max_3_p_0(
  MR_Word mdb__browse__BrowserTerm_4,
  MR_Integer mdb__browse__MaxSize_5,
  MR_Integer * mdb__browse__RemainingSize_6)
{
  {
    MR_bool mdb__browse__succeeded;

    if (((MR_tag((MR_Word) mdb__browse__BrowserTerm_4)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word mdb__browse__Univ_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__BrowserTerm_4, (MR_Integer) 0)));

        {
          mdb__browse__term_size_left_from_max_3_p_0(mdb__browse__Univ_7, mdb__browse__MaxSize_5, mdb__browse__RemainingSize_6);
        }
      }
    else
      {
        MR_Word mdb__browse__TypeCtorInfo_23_23;
        MR_String mdb__browse__Functor_8 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browse__BrowserTerm_4, (MR_Integer) 0)));
        MR_Word mdb__browse__Args_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__BrowserTerm_4, (MR_Integer) 1)));
        MR_Word mdb__browse__MaybeReturn_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browse__BrowserTerm_4, (MR_Integer) 2)));
        MR_Integer mdb__browse__FunctorSize_11;
        MR_Integer mdb__browse__Arity_12;
        MR_Integer mdb__browse__PrincipalSize_14;
        MR_Integer mdb__browse__MaxArgsSize_15;
        MR_Box mdb__browse__conv1_RemainingSize_6;

        {
          mercury__string__length_2_p_0(mdb__browse__Functor_8, &mdb__browse__FunctorSize_11);
        }
        mdb__browse__TypeCtorInfo_23_23 = (MR_Word) &mercury__univ__univ__type_ctor_info_univ_0;
        {
          mercury__list__length_2_p_0(mdb__browse__TypeCtorInfo_23_23, mdb__browse__Args_9, &mdb__browse__Arity_12);
        }
        if ((mdb__browse__MaybeReturn_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Integer mdb__browse__Var_16 = (mdb__browse__Arity_12 * (MR_Integer) 2);

            mdb__browse__PrincipalSize_14 = (mdb__browse__FunctorSize_11 + mdb__browse__Var_16);
          }
        else
          {
            MR_Integer mdb__browse__Var_18;
            MR_Integer mdb__browse__Var_19 = (mdb__browse__Arity_12 * (MR_Integer) 2);

            mdb__browse__Var_18 = (mdb__browse__FunctorSize_11 + mdb__browse__Var_19);
            mdb__browse__PrincipalSize_14 = (mdb__browse__Var_18 + (MR_Integer) 3);
          }
        mdb__browse__MaxArgsSize_15 = (mdb__browse__MaxSize_5 - mdb__browse__PrincipalSize_14);
        {
          mercury__list__foldl_4_p_9(mdb__browse__TypeCtorInfo_23_23, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mdb__browse_scalar_common_1[4], mdb__browse__Args_9, ((MR_Box) (mdb__browse__MaxArgsSize_15)), &mdb__browse__conv1_RemainingSize_6);
        }
        *mdb__browse__RemainingSize_6 = ((MR_Integer) mdb__browse__conv1_RemainingSize_6);
      }
  }
}

static void MR_CALL 
mdb__browse__term_size_left_from_max_3_p_0_1(
  MR_Box mdb__browse__closure_arg,
  MR_Box mdb__browse__wrapper_arg_1,
  MR_Box mdb__browse__wrapper_arg_2,
  MR_Box * mdb__browse__wrapper_arg_3)
{
  {
    MR_Box mdb__browse__closure = mdb__browse__closure_arg;
    MR_Integer mdb__browse__conv0_RemainingSize_6;

    {
      mdb__browse__term_size_left_from_max_3_p_0(((MR_Word) mdb__browse__wrapper_arg_1), ((MR_Integer) mdb__browse__wrapper_arg_2), &mdb__browse__conv0_RemainingSize_6);
    }
    *mdb__browse__wrapper_arg_3 = ((MR_Box) (mdb__browse__conv0_RemainingSize_6));
  }
}

void MR_CALL 
mdb__browse__term_size_left_from_max_3_p_0(
  MR_Word mdb__browse__Univ_4,
  MR_Integer mdb__browse__MaxSize_5,
  MR_Integer * mdb__browse__RemainingSize_6)
{
  {
    MR_bool mdb__browse__succeeded = (mdb__browse__MaxSize_5 < (MR_Integer) 0);

    if (mdb__browse__succeeded)
      *mdb__browse__RemainingSize_6 = mdb__browse__MaxSize_5;
    else
      {
        MR_Word mdb__browse__TypeInfo_20_20;
        MR_Word mdb__browse__MaybeFunctorArityArgs_7;
        MR_Box mdb__browse__Var_15;

        {
          mdb__browse__Var_15 = mercury__univ__univ_value_1_f_0(&mdb__browse__TypeInfo_20_20, mdb__browse__Univ_4);
        }
        {
          mercury__deconstruct__limited_deconstruct_cc_3_p_0(mdb__browse__TypeInfo_20_20, mdb__browse__Var_15, mdb__browse__MaxSize_5, &mdb__browse__MaybeFunctorArityArgs_7);
        }
        if ((mdb__browse__MaybeFunctorArityArgs_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mdb__browse__RemainingSize_6 = (MR_Integer) -1;
        else
          {
            MR_String mdb__browse__Functor_8;
            MR_Integer mdb__browse__Arity_9;
            MR_Word mdb__browse__Args_10;
            MR_Integer mdb__browse__FunctorSize_11;
            MR_Integer mdb__browse__PrincipalSize_12;
            MR_Integer mdb__browse__MaxArgsSize_13;
            MR_Tuple mdb__browse__Var_16 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mdb__browse__MaybeFunctorArityArgs_7, (MR_Integer) 0)));
            MR_Integer mdb__browse__Var_17;
            MR_Box mdb__browse__conv1_RemainingSize_6;

            mdb__browse__Functor_8 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__browse__Var_16, (MR_Integer) 0)));
            mdb__browse__Arity_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browse__Var_16, (MR_Integer) 1)));
            mdb__browse__Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Var_16, (MR_Integer) 2)));
            {
              mercury__string__length_2_p_0(mdb__browse__Functor_8, &mdb__browse__FunctorSize_11);
            }
            mdb__browse__Var_17 = (mdb__browse__Arity_9 * (MR_Integer) 2);
            mdb__browse__PrincipalSize_12 = (mdb__browse__FunctorSize_11 + mdb__browse__Var_17);
            mdb__browse__MaxArgsSize_13 = (mdb__browse__MaxSize_5 - mdb__browse__PrincipalSize_12);
            {
              mercury__list__foldl_4_p_9((MR_Word) &mercury__univ__univ__type_ctor_info_univ_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mdb__browse_scalar_common_1[3], mdb__browse__Args_10, ((MR_Box) (mdb__browse__MaxArgsSize_13)), &mdb__browse__conv1_RemainingSize_6);
            }
            *mdb__browse__RemainingSize_6 = ((MR_Integer) mdb__browse__conv1_RemainingSize_6);
          }
      }
  }
}

void MR_CALL 
mdb__browse__browse_external_8_p_0(
  MR_Word mdb__browse__TypeInfo_for_T_26,
  MR_Box mdb__browse__Term_9,
  MR_Word mdb__browse__InputStream_10,
  MR_Word mdb__browse__OutputStream_11,
  MR_Word mdb__browse__MaybeModeFunc_12,
  MR_Word mdb__browse__STATE_VARIABLE_State_0_16,
  MR_Word * mdb__browse__STATE_VARIABLE_State_17)
{
  {
    MR_bool mdb__browse__succeeded;
    MR_Word mdb__browse__Var_21;
    MR_Word mdb__browse__Var_25;
    MR_Word mdb__browse__Info0_40;
    MR_Word mdb__browse__OldInputStream_41;
    MR_Word mdb__browse__OldOutputStream_42;
    MR_Word mdb__browse__Info_43;
    MR_Word mdb__browse__Var_44;
    MR_Word mdb__browse__Var_45;
    MR_Word mdb__browse__Var_15;
    MR_Word mdb__browse__Var_53;
    MR_Word mdb__browse__Var_54;
    MR_Word mdb__browse__Var_55;
    MR_Word mdb__browse__Var_56;
    MR_Word mdb__browse__Var_58;

    {
      mdb__browse__Var_25 = mercury__univ__univ_1_f_0(mdb__browse__TypeInfo_for_T_26, mdb__browse__Term_9);
    }
    {
      mdb__browse__Var_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__browse__Var_21, 0) = ((MR_Box) (mdb__browse__Var_25));
    }
    {
      mdb__browse__Info0_40 = mdb__browser_info__init_5_f_0(mdb__browse__Var_21, (MR_Integer) 1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), mdb__browse__MaybeModeFunc_12, mdb__browse__STATE_VARIABLE_State_0_16);
    }
    {
      mercury__io__set_input_stream_4_p_0(mdb__browse__InputStream_10, &mdb__browse__OldInputStream_41);
    }
    {
      mercury__io__set_output_stream_4_p_0(mdb__browse__OutputStream_11, &mdb__browse__OldOutputStream_42);
    }
    {
      mdb__browse__browse_main_loop_5_p_0((MR_Integer) 1, mdb__browse__Info0_40, &mdb__browse__Info_43);
    }
    {
      mercury__io__set_input_stream_4_p_0(mdb__browse__OldInputStream_41, &mdb__browse__Var_44);
    }
    {
      mercury__io__set_output_stream_4_p_0(mdb__browse__OldOutputStream_42, &mdb__browse__Var_45);
    }
    mdb__browse__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_43, (MR_Integer) 0)));
    mdb__browse__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_43, (MR_Integer) 1)));
    mdb__browse__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_43, (MR_Integer) 2)));
    mdb__browse__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_43, (MR_Integer) 3)));
    *mdb__browse__STATE_VARIABLE_State_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_43, (MR_Integer) 4)));
    mdb__browse__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_43, (MR_Integer) 5)));
    mdb__browse__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_43, (MR_Integer) 6)));
  }
}

void MR_CALL 
mdb__browse__browse_external_no_modes_7_p_0(
  MR_Word mdb__browse__TypeInfo_for_T_25,
  MR_Box mdb__browse__Term_8,
  MR_Word mdb__browse__InputStream_9,
  MR_Word mdb__browse__OutputStream_10,
  MR_Word mdb__browse__STATE_VARIABLE_State_0_14,
  MR_Word * mdb__browse__STATE_VARIABLE_State_15)
{
  {
    MR_bool mdb__browse__succeeded;
    MR_Word mdb__browse__Var_19;
    MR_Word mdb__browse__Var_24;
    MR_Word mdb__browse__Info0_39;
    MR_Word mdb__browse__OldInputStream_40;
    MR_Word mdb__browse__OldOutputStream_41;
    MR_Word mdb__browse__Info_42;
    MR_Word mdb__browse__Var_43;
    MR_Word mdb__browse__Var_44;
    MR_Word mdb__browse__Var_13;
    MR_Word mdb__browse__Var_52;
    MR_Word mdb__browse__Var_53;
    MR_Word mdb__browse__Var_54;
    MR_Word mdb__browse__Var_55;
    MR_Word mdb__browse__Var_57;

    {
      mdb__browse__Var_24 = mercury__univ__univ_1_f_0(mdb__browse__TypeInfo_for_T_25, mdb__browse__Term_8);
    }
    {
      mdb__browse__Var_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__browse__Var_19, 0) = ((MR_Box) (mdb__browse__Var_24));
    }
    {
      mdb__browse__Info0_39 = mdb__browser_info__init_5_f_0(mdb__browse__Var_19, (MR_Integer) 1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), mdb__browse__STATE_VARIABLE_State_0_14);
    }
    {
      mercury__io__set_input_stream_4_p_0(mdb__browse__InputStream_9, &mdb__browse__OldInputStream_40);
    }
    {
      mercury__io__set_output_stream_4_p_0(mdb__browse__OutputStream_10, &mdb__browse__OldOutputStream_41);
    }
    {
      mdb__browse__browse_main_loop_5_p_0((MR_Integer) 1, mdb__browse__Info0_39, &mdb__browse__Info_42);
    }
    {
      mercury__io__set_input_stream_4_p_0(mdb__browse__OldInputStream_40, &mdb__browse__Var_43);
    }
    {
      mercury__io__set_output_stream_4_p_0(mdb__browse__OldOutputStream_41, &mdb__browse__Var_44);
    }
    mdb__browse__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_42, (MR_Integer) 0)));
    mdb__browse__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_42, (MR_Integer) 1)));
    mdb__browse__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_42, (MR_Integer) 2)));
    mdb__browse__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_42, (MR_Integer) 3)));
    *mdb__browse__STATE_VARIABLE_State_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_42, (MR_Integer) 4)));
    mdb__browse__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_42, (MR_Integer) 5)));
    mdb__browse__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_42, (MR_Integer) 6)));
  }
}

void MR_CALL 
mdb__browse__browse_browser_term_format_9_p_0(
  MR_Word mdb__browse__Term_10,
  MR_Word mdb__browse__InputStream_11,
  MR_Word mdb__browse__OutputStream_12,
  MR_Word mdb__browse__Format_13,
  MR_Word mdb__browse__MaybeModeFunc_14,
  MR_Word mdb__browse__STATE_VARIABLE_State_0_18,
  MR_Word * mdb__browse__STATE_VARIABLE_State_19)
{
  {
    MR_bool mdb__browse__succeeded;
    MR_Word mdb__browse__Var_23;
    MR_Word mdb__browse__Info0_39;
    MR_Word mdb__browse__OldInputStream_40;
    MR_Word mdb__browse__OldOutputStream_41;
    MR_Word mdb__browse__Info_42;
    MR_Word mdb__browse__Var_43;
    MR_Word mdb__browse__Var_44;
    MR_Word mdb__browse__Var_17;
    MR_Word mdb__browse__Var_52;
    MR_Word mdb__browse__Var_53;
    MR_Word mdb__browse__Var_54;
    MR_Word mdb__browse__Var_55;
    MR_Word mdb__browse__Var_57;

    {
      mdb__browse__Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdb__browse__Var_23, 0) = ((MR_Box) (mdb__browse__Format_13));
    }
    {
      mdb__browse__Info0_39 = mdb__browser_info__init_5_f_0(mdb__browse__Term_10, (MR_Integer) 1, mdb__browse__Var_23, mdb__browse__MaybeModeFunc_14, mdb__browse__STATE_VARIABLE_State_0_18);
    }
    {
      mercury__io__set_input_stream_4_p_0(mdb__browse__InputStream_11, &mdb__browse__OldInputStream_40);
    }
    {
      mercury__io__set_output_stream_4_p_0(mdb__browse__OutputStream_12, &mdb__browse__OldOutputStream_41);
    }
    {
      mdb__browse__browse_main_loop_5_p_0((MR_Integer) 0, mdb__browse__Info0_39, &mdb__browse__Info_42);
    }
    {
      mercury__io__set_input_stream_4_p_0(mdb__browse__OldInputStream_40, &mdb__browse__Var_43);
    }
    {
      mercury__io__set_output_stream_4_p_0(mdb__browse__OldOutputStream_41, &mdb__browse__Var_44);
    }
    mdb__browse__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_42, (MR_Integer) 0)));
    mdb__browse__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_42, (MR_Integer) 1)));
    mdb__browse__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_42, (MR_Integer) 2)));
    mdb__browse__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_42, (MR_Integer) 3)));
    *mdb__browse__STATE_VARIABLE_State_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_42, (MR_Integer) 4)));
    mdb__browse__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_42, (MR_Integer) 5)));
    mdb__browse__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_42, (MR_Integer) 6)));
  }
}

void MR_CALL 
mdb__browse__browse_browser_term_format_no_modes_8_p_0(
  MR_Word mdb__browse__Term_9,
  MR_Word mdb__browse__InputStream_10,
  MR_Word mdb__browse__OutputStream_11,
  MR_Word mdb__browse__Format_12,
  MR_Word mdb__browse__STATE_VARIABLE_State_0_16,
  MR_Word * mdb__browse__STATE_VARIABLE_State_17)
{
  {
    MR_bool mdb__browse__succeeded;
    MR_Word mdb__browse__Var_21;
    MR_Word mdb__browse__Info0_38;
    MR_Word mdb__browse__OldInputStream_39;
    MR_Word mdb__browse__OldOutputStream_40;
    MR_Word mdb__browse__Info_41;
    MR_Word mdb__browse__Var_42;
    MR_Word mdb__browse__Var_43;
    MR_Word mdb__browse__Var_15;
    MR_Word mdb__browse__Var_51;
    MR_Word mdb__browse__Var_52;
    MR_Word mdb__browse__Var_53;
    MR_Word mdb__browse__Var_54;
    MR_Word mdb__browse__Var_56;

    {
      mdb__browse__Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdb__browse__Var_21, 0) = ((MR_Box) (mdb__browse__Format_12));
    }
    {
      mdb__browse__Info0_38 = mdb__browser_info__init_5_f_0(mdb__browse__Term_9, (MR_Integer) 1, mdb__browse__Var_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), mdb__browse__STATE_VARIABLE_State_0_16);
    }
    {
      mercury__io__set_input_stream_4_p_0(mdb__browse__InputStream_10, &mdb__browse__OldInputStream_39);
    }
    {
      mercury__io__set_output_stream_4_p_0(mdb__browse__OutputStream_11, &mdb__browse__OldOutputStream_40);
    }
    {
      mdb__browse__browse_main_loop_5_p_0((MR_Integer) 0, mdb__browse__Info0_38, &mdb__browse__Info_41);
    }
    {
      mercury__io__set_input_stream_4_p_0(mdb__browse__OldInputStream_39, &mdb__browse__Var_42);
    }
    {
      mercury__io__set_output_stream_4_p_0(mdb__browse__OldOutputStream_40, &mdb__browse__Var_43);
    }
    mdb__browse__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_41, (MR_Integer) 0)));
    mdb__browse__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_41, (MR_Integer) 1)));
    mdb__browse__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_41, (MR_Integer) 2)));
    mdb__browse__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_41, (MR_Integer) 3)));
    *mdb__browse__STATE_VARIABLE_State_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_41, (MR_Integer) 4)));
    mdb__browse__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_41, (MR_Integer) 5)));
    mdb__browse__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_41, (MR_Integer) 6)));
  }
}

void MR_CALL 
mdb__browse__browse_browser_term_9_p_0(
  MR_Word mdb__browse__Term_10,
  MR_Word mdb__browse__InputStream_11,
  MR_Word mdb__browse__OutputStream_12,
  MR_Word mdb__browse__MaybeModeFunc_13,
  MR_Word * mdb__browse__MaybeTrack_14,
  MR_Word mdb__browse__STATE_VARIABLE_State_0_17,
  MR_Word * mdb__browse__STATE_VARIABLE_State_18)
{
  {
    MR_bool mdb__browse__succeeded;
    MR_Word mdb__browse__Info0_38;
    MR_Word mdb__browse__OldInputStream_39;
    MR_Word mdb__browse__OldOutputStream_40;
    MR_Word mdb__browse__Info_41;
    MR_Word mdb__browse__Var_42;
    MR_Word mdb__browse__Var_43;
    MR_Word mdb__browse__Var_51;
    MR_Word mdb__browse__Var_52;
    MR_Word mdb__browse__Var_53;
    MR_Word mdb__browse__Var_54;
    MR_Word mdb__browse__Var_56;

    {
      mdb__browse__Info0_38 = mdb__browser_info__init_5_f_0(mdb__browse__Term_10, (MR_Integer) 1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), mdb__browse__MaybeModeFunc_13, mdb__browse__STATE_VARIABLE_State_0_17);
    }
    {
      mercury__io__set_input_stream_4_p_0(mdb__browse__InputStream_11, &mdb__browse__OldInputStream_39);
    }
    {
      mercury__io__set_output_stream_4_p_0(mdb__browse__OutputStream_12, &mdb__browse__OldOutputStream_40);
    }
    {
      mdb__browse__browse_main_loop_5_p_0((MR_Integer) 0, mdb__browse__Info0_38, &mdb__browse__Info_41);
    }
    {
      mercury__io__set_input_stream_4_p_0(mdb__browse__OldInputStream_39, &mdb__browse__Var_42);
    }
    {
      mercury__io__set_output_stream_4_p_0(mdb__browse__OldOutputStream_40, &mdb__browse__Var_43);
    }
    mdb__browse__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_41, (MR_Integer) 0)));
    mdb__browse__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_41, (MR_Integer) 1)));
    mdb__browse__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_41, (MR_Integer) 2)));
    mdb__browse__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_41, (MR_Integer) 3)));
    *mdb__browse__STATE_VARIABLE_State_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_41, (MR_Integer) 4)));
    *mdb__browse__MaybeTrack_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_41, (MR_Integer) 5)));
    mdb__browse__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_41, (MR_Integer) 6)));
  }
}

void MR_CALL 
mdb__browse__browse_browser_term_no_modes_8_p_0(
  MR_Word mdb__browse__Term_9,
  MR_Word mdb__browse__InputStream_10,
  MR_Word mdb__browse__OutputStream_11,
  MR_Word * mdb__browse__MaybeTrack_12,
  MR_Word mdb__browse__STATE_VARIABLE_State_0_15,
  MR_Word * mdb__browse__STATE_VARIABLE_State_16)
{
  {
    MR_bool mdb__browse__succeeded;
    MR_Word mdb__browse__Info0_37;
    MR_Word mdb__browse__OldInputStream_38;
    MR_Word mdb__browse__OldOutputStream_39;
    MR_Word mdb__browse__Info_40;
    MR_Word mdb__browse__Var_41;
    MR_Word mdb__browse__Var_42;
    MR_Word mdb__browse__Var_50;
    MR_Word mdb__browse__Var_51;
    MR_Word mdb__browse__Var_52;
    MR_Word mdb__browse__Var_53;
    MR_Word mdb__browse__Var_55;

    {
      mdb__browse__Info0_37 = mdb__browser_info__init_5_f_0(mdb__browse__Term_9, (MR_Integer) 1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), mdb__browse__STATE_VARIABLE_State_0_15);
    }
    {
      mercury__io__set_input_stream_4_p_0(mdb__browse__InputStream_10, &mdb__browse__OldInputStream_38);
    }
    {
      mercury__io__set_output_stream_4_p_0(mdb__browse__OutputStream_11, &mdb__browse__OldOutputStream_39);
    }
    {
      mdb__browse__browse_main_loop_5_p_0((MR_Integer) 0, mdb__browse__Info0_37, &mdb__browse__Info_40);
    }
    {
      mercury__io__set_input_stream_4_p_0(mdb__browse__OldInputStream_38, &mdb__browse__Var_41);
    }
    {
      mercury__io__set_output_stream_4_p_0(mdb__browse__OldOutputStream_39, &mdb__browse__Var_42);
    }
    mdb__browse__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_40, (MR_Integer) 0)));
    mdb__browse__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_40, (MR_Integer) 1)));
    mdb__browse__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_40, (MR_Integer) 2)));
    mdb__browse__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_40, (MR_Integer) 3)));
    *mdb__browse__STATE_VARIABLE_State_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_40, (MR_Integer) 4)));
    *mdb__browse__MaybeTrack_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_40, (MR_Integer) 5)));
    mdb__browse__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Info_40, (MR_Integer) 6)));
  }
}

void MR_CALL 
mdb__browse__print_browser_term_format_7_p_0(
  MR_Word mdb__browse__Term_8,
  MR_Word mdb__browse__OutputStream_9,
  MR_Word mdb__browse__Caller_10,
  MR_Word mdb__browse__Format_11,
  MR_Word mdb__browse__State_12)
{
  {
    MR_bool mdb__browse__succeeded;
    MR_Word mdb__browse__Var_16;
    MR_Word mdb__browse__Info_26;
    MR_Word mdb__browse__OldStream_27;
    MR_Word mdb__browse__Format_28;
    MR_Word mdb__browse__Var_29;
    MR_Word mdb__browse__Var_30;

    {
      mdb__browse__Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdb__browse__Var_16, 0) = ((MR_Box) (mdb__browse__Format_11));
    }
    {
      mdb__browse__Info_26 = mdb__browser_info__init_5_f_0(mdb__browse__Term_8, mdb__browse__Caller_10, mdb__browse__Var_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), mdb__browse__State_12);
    }
    {
      mercury__io__set_output_stream_4_p_0(mdb__browse__OutputStream_9, &mdb__browse__OldStream_27);
    }
    {
      mdb__browser_info__get_format_4_p_0(mdb__browse__Info_26, mdb__browse__Caller_10, mdb__browse__Var_16, &mdb__browse__Format_28);
    }
    mdb__browse__succeeded = ((MR_tag((MR_Word) mdb__browse__Term_8)) == (MR_mktag((MR_Integer) 0)));
    if (mdb__browse__succeeded)
      {
        mdb__browse__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Term_8, (MR_Integer) 0)));
        mdb__browse__succeeded = (mdb__browse__Format_28 == (MR_Integer) 0);
        mdb__browse__succeeded = !(mdb__browse__succeeded);
      }
    if (mdb__browse__succeeded)
      {
        mercury__io__nl_2_p_0();
      }
    else
      {
      }
    {
      mdb__browse__portray_6_p_0((MR_Integer) 0, mdb__browse__Caller_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), mdb__browse__Info_26);
    }
    {
      mercury__io__set_output_stream_4_p_0(mdb__browse__OldStream_27, &mdb__browse__Var_30);
    }
  }
}

void MR_CALL 
mdb__browse__print_browser_term_6_p_0(
  MR_Word mdb__browse__Term_7,
  MR_Word mdb__browse__OutputStream_8,
  MR_Word mdb__browse__Caller_9,
  MR_Word mdb__browse__State_10)
{
  {
    MR_bool mdb__browse__succeeded;
    MR_Word mdb__browse__Var_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mdb__browse__Info_24;
    MR_Word mdb__browse__OldStream_25;
    MR_Word mdb__browse__Format_26;
    MR_Word mdb__browse__Var_27;
    MR_Word mdb__browse__Var_28;

    {
      mdb__browse__Info_24 = mdb__browser_info__init_5_f_0(mdb__browse__Term_7, mdb__browse__Caller_9, mdb__browse__Var_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), mdb__browse__State_10);
    }
    {
      mercury__io__set_output_stream_4_p_0(mdb__browse__OutputStream_8, &mdb__browse__OldStream_25);
    }
    {
      mdb__browser_info__get_format_4_p_0(mdb__browse__Info_24, mdb__browse__Caller_9, mdb__browse__Var_14, &mdb__browse__Format_26);
    }
    mdb__browse__succeeded = ((MR_tag((MR_Word) mdb__browse__Term_7)) == (MR_mktag((MR_Integer) 0)));
    if (mdb__browse__succeeded)
      {
        mdb__browse__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browse__Term_7, (MR_Integer) 0)));
        mdb__browse__succeeded = (mdb__browse__Format_26 == (MR_Integer) 0);
        mdb__browse__succeeded = !(mdb__browse__succeeded);
      }
    if (mdb__browse__succeeded)
      {
        mercury__io__nl_2_p_0();
      }
    else
      {
      }
    {
      mdb__browse__portray_6_p_0((MR_Integer) 0, mdb__browse__Caller_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), mdb__browse__Info_24);
    }
    {
      mercury__io__set_output_stream_4_p_0(mdb__browse__OldStream_25, &mdb__browse__Var_28);
    }
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

/* :- end_module mdb.browse. */
