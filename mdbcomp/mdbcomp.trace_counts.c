/*
** Automatically generated from `trace_counts.m'
** by the Mercury compiler,
** version rotd-2025-05-08
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


// :- module mdbcomp.trace_counts.
// :- implementation.

/*
INIT mercury__mdbcomp__trace_counts__init
ENDINIT
*/

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
#include "exception.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mercury_term_lexer.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stm_builtin.mih"
#include "store.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "term_io.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "varset.mih"
#include "io.call_system.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_TypeInfo_Struct2 mdbcomp__trace_counts__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0;

static const MR_FA_PseudoTypeInfo_Struct2 mdbcomp__trace_counts__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0;

static const MR_FA_PseudoTypeInfo_Struct2 mdbcomp__trace_counts__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0;

static const MR_EnumFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__enum_functor_desc_all_or_nonzero_0_0;

static const MR_EnumFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__enum_functor_desc_all_or_nonzero_0_1;

static const MR_EnumFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__enum_ordinal_ordered_all_or_nonzero_0[2];

static const MR_EnumFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__enum_name_ordered_all_or_nonzero_0[2];

static const MR_Integer mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_all_or_nonzero_0[2];

static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_base_count_file_type_0_0[2];

static const MR_DuArgLocn mdbcomp__trace_counts__mdbcomp__trace_counts__field_locns_base_count_file_type_0_0[2];

static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_base_count_file_type_0_0;

static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_base_count_file_type_0_0[1];

static const MR_DuPtagLayout mdbcomp__trace_counts__mdbcomp__trace_counts__du_ptag_ordered_base_count_file_type_0[1];

static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_name_ordered_base_count_file_type_0[1];

static const MR_Integer mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_base_count_file_type_0[1];

static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_line_no_and_count_0_0[3];

static const MR_ConstString mdbcomp__trace_counts__mdbcomp__trace_counts__field_names_line_no_and_count_0_0[3];

static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_line_no_and_count_0_0;

static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_line_no_and_count_0_0[1];

static const MR_DuPtagLayout mdbcomp__trace_counts__mdbcomp__trace_counts__du_ptag_ordered_line_no_and_count_0[1];

static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_name_ordered_line_no_and_count_0[1];

static const MR_Integer mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_line_no_and_count_0[1];

static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_path_port_0_0[1];

static const MR_DuArgLocn mdbcomp__trace_counts__mdbcomp__trace_counts__field_locns_path_port_0_0[1];

static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_path_port_0_0;

static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_path_port_0_1[1];

static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_path_port_0_1;

static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_path_port_0_2[2];

static const MR_DuArgLocn mdbcomp__trace_counts__mdbcomp__trace_counts__field_locns_path_port_0_2[2];

static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_path_port_0_2;

static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_path_port_0_0[1];

static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_path_port_0_1[1];

static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_path_port_0_2[1];

static const MR_DuPtagLayout mdbcomp__trace_counts__mdbcomp__trace_counts__du_ptag_ordered_path_port_0[3];

static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_name_ordered_path_port_0[3];

static const MR_Integer mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_path_port_0[3];

static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_proc_label_in_context_0_0[3];

static const MR_ConstString mdbcomp__trace_counts__mdbcomp__trace_counts__field_names_proc_label_in_context_0_0[3];

static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_proc_label_in_context_0_0;

static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_proc_label_in_context_0_0[1];

static const MR_DuPtagLayout mdbcomp__trace_counts__mdbcomp__trace_counts__du_ptag_ordered_proc_label_in_context_0[1];

static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_name_ordered_proc_label_in_context_0[1];

static const MR_Integer mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_proc_label_in_context_0[1];

static const MR_FA_TypeInfo_Struct2 mdbcomp__trace_counts__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0;

static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_read_trace_counts_list_result_0_0[2];

static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_list_result_0_0;

static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_read_trace_counts_list_result_0_1[1];

static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_list_result_0_1;

static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_read_trace_counts_list_result_0_0[1];

static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_read_trace_counts_list_result_0_1[1];

static const MR_DuPtagLayout mdbcomp__trace_counts__mdbcomp__trace_counts__du_ptag_ordered_read_trace_counts_list_result_0[2];

static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_name_ordered_read_trace_counts_list_result_0[2];

static const MR_Integer mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_read_trace_counts_list_result_0[2];

static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_read_trace_counts_result_0_0[2];

static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_result_0_0;

static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_read_trace_counts_result_0_1[1];

static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_result_0_1;

static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_read_trace_counts_result_0_2[1];

static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_result_0_2;

static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_read_trace_counts_result_0_3[1];

static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_result_0_3;

static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_read_trace_counts_result_0_4[1];

static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_result_0_4;

static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_read_trace_counts_result_0_0[1];

static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_read_trace_counts_result_0_1[1];

static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_read_trace_counts_result_0_2[1];

static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_read_trace_counts_result_0_3[2];

static const MR_DuPtagLayout mdbcomp__trace_counts__mdbcomp__trace_counts__du_ptag_ordered_read_trace_counts_result_0[4];

static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_name_ordered_read_trace_counts_result_0[5];

static const MR_Integer mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_read_trace_counts_result_0[5];

static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_trace_count_file_type_0_0[1];

static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_trace_count_file_type_0_0;

static const MR_FA_TypeInfo_Struct1 mdbcomp__trace_counts__list__ti_list_1mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0;

static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_trace_count_file_type_0_1[2];

static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_trace_count_file_type_0_1;

static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_trace_count_file_type_0_2[2];

static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_trace_count_file_type_0_2;

static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_trace_count_file_type_0_0[1];

static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_trace_count_file_type_0_1[1];

static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_trace_count_file_type_0_2[1];

static const MR_DuPtagLayout mdbcomp__trace_counts__mdbcomp__trace_counts__du_ptag_ordered_trace_count_file_type_0[3];

static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_name_ordered_trace_count_file_type_0[3];

static const MR_Integer mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_trace_count_file_type_0[3];

static const MR_Integer mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_trace_count_syntax_error_0[1];

static const MR_NotagFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__notag_functor_desc_trace_count_syntax_error_0;

static MR_bool MR_CALL 
mdbcomp__trace_counts__IntroducedFrom__pred__write_proc_label_and_check__903__1_2_p_0(
  MR_Word ModuleNameSym_7,
  MR_Word DefModuleSym_10);

static void MR_CALL 
mdbcomp__trace_counts____Compare____trace_count_syntax_error_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____trace_count_syntax_error_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mdbcomp__trace_counts__restrict_trace_counts_2_5_p_0(
  MR_Word ModuleName_6,
  MR_Word ProcLabelInContext_7,
  MR_Word ProcCounts_8,
  MR_Word STATE_VARIABLE_TraceCounts_0_16,
  MR_Word * STATE_VARIABLE_TraceCounts_17);

static void MR_CALL 
mdbcomp__trace_counts__write_path_port_count_5_p_0(
  MR_Word OutputStream_6,
  MR_Word PathPort_7,
  MR_Word LineNoAndCount_8);

static void MR_CALL 
mdbcomp__trace_counts__write_proc_label_and_file_trace_counts_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_bool MR_CALL 
mdbcomp__trace_counts__write_proc_label_and_file_trace_counts_9_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
mdbcomp__trace_counts__write_proc_label_and_file_trace_counts_9_p_0(
  MR_Word OutputStream_10,
  MR_Word ProcLabelInContext_11,
  MR_Word PathPortCounts_12,
  MR_Word STATE_VARIABLE_CurModuleNameSym_0_20,
  MR_Word * STATE_VARIABLE_CurModuleNameSym_21,
  MR_String STATE_VARIABLE_CurFileName_0_22,
  MR_String * STATE_VARIABLE_CurFileName_23);

static void MR_CALL 
mdbcomp__trace_counts__read_trace_counts_setup_5_p_0(
  MR_Word InputStream_6,
  MR_Word STATE_VARIABLE_TraceCounts_0_15,
  MR_Word * STATE_VARIABLE_TraceCounts_16);

static void MR_CALL 
mdbcomp__trace_counts__read_proc_trace_counts_9_p_0(
  MR_Word tscc_proc_1_input_1_InputStream_10,
  MR_Integer tscc_proc_1_input_2_HeaderLineNumber_11,
  MR_String tscc_proc_1_input_3_HeaderLine_12,
  MR_Word tscc_proc_1_input_4_CurModuleNameSym_13,
  MR_String tscc_proc_1_input_5_CurFileName_14,
  MR_Word tscc_proc_1_input_6_STATE_VARIABLE_TraceCounts_0_57,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_TraceCounts_58);

static void MR_CALL 
mdbcomp__trace_counts__read_proc_trace_counts_2_7_p_0(
  MR_Word tscc_proc_2_input_1_InputStream_8,
  MR_Word tscc_proc_2_input_2_ProcLabelInContext_9,
  MR_Word tscc_proc_2_input_3_ProcCounts0_10,
  MR_Word tscc_proc_2_input_4_STATE_VARIABLE_TraceCounts_0_24,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_TraceCounts_58);

static MR_bool MR_CALL 
mdbcomp__trace_counts__decimal_token_to_int_2_p_0(
  MR_Word Token_3,
  MR_Integer * Int_4);

static void MR_CALL 
mdbcomp__trace_counts__diff_proc_counts_acc_5_p_0(
  MR_Word ProcTraceCountsB_6,
  MR_Word PathPortA_7,
  MR_Word LineNoCountA_8,
  MR_Word STATE_VARIABLE_ProcTraceCounts_0_12,
  MR_Word * STATE_VARIABLE_ProcTraceCounts_13);

static void MR_CALL 
mdbcomp__trace_counts__diff_trace_counts_acc_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mdbcomp__trace_counts__diff_trace_counts_acc_5_p_0(
  MR_Word TraceCountsB_6,
  MR_Word ProcLabelInContextA_7,
  MR_Word ProcTraceCountsA_8,
  MR_Word STATE_VARIABLE_TraceCounts_0_12,
  MR_Word * STATE_VARIABLE_TraceCounts_13);

static MR_Word MR_CALL 
mdbcomp__trace_counts__sum_counts_on_line_2_f_0(
  MR_Word LC1_4,
  MR_Word LC2_5);

static MR_Box MR_CALL 
mdbcomp__trace_counts__sum_proc_trace_counts_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdbcomp__trace_counts__sum_proc_trace_counts_3_p_0(
  MR_Word ProcTraceCountsA_4,
  MR_Word ProcTraceCountsB_5,
  MR_Word * ProcTraceCounts_6);

static void MR_CALL 
mdbcomp__trace_counts__restrict_trace_counts_to_module_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mdbcomp__trace_counts__write_trace_counts_to_file_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
mdbcomp__trace_counts__read_and_union_trace_counts_2_9_p_0(
  MR_Word ShowProgress_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_FileType_0_3,
  MR_Word * STATE_VARIABLE_FileType_4,
  MR_Word STATE_VARIABLE_TraceCounts_0_5,
  MR_Word * STATE_VARIABLE_TraceCounts_6,
  MR_Word * HeadVar__7_7);

static void MR_CALL 
mdbcomp__trace_counts__read_trace_counts_list_stream_8_p_0(
  MR_Word ShowProgress_9,
  MR_Word FileType0_10,
  MR_Word TraceCounts0_11,
  MR_String MainFileName_12,
  MR_Word Stream_13,
  MR_Word * Result_14);

static void MR_CALL 
mdbcomp__trace_counts__read_trace_counts_4_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mdbcomp__trace_counts__diff_trace_counts_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mdbcomp__trace_counts__sum_trace_counts_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mdbcomp__trace_counts__summarize_trace_counts_list_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____all_or_nonzero_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdbcomp__trace_counts____Compare____all_or_nonzero_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____base_count_file_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdbcomp__trace_counts____Compare____base_count_file_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____line_no_and_count_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdbcomp__trace_counts____Compare____line_no_and_count_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____path_port_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdbcomp__trace_counts____Compare____path_port_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____proc_label_in_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdbcomp__trace_counts____Compare____proc_label_in_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____proc_trace_counts_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdbcomp__trace_counts____Compare____proc_trace_counts_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____read_trace_counts_list_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdbcomp__trace_counts____Compare____read_trace_counts_list_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____read_trace_counts_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdbcomp__trace_counts____Compare____read_trace_counts_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____trace_count_file_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdbcomp__trace_counts____Compare____trace_count_file_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____trace_count_syntax_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdbcomp__trace_counts____Compare____trace_count_syntax_error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____trace_counts_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdbcomp__trace_counts____Compare____trace_counts_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mdbcomp__trace_counts_scalar_common_1[6][3];

static /* final */ const MR_Box mdbcomp__trace_counts_scalar_common_2[1][4];

static /* final */ const MR_Box mdbcomp__trace_counts_scalar_common_3[2][5];

static /* final */ const MR_Box mdbcomp__trace_counts_scalar_common_4[2][2];

static /* final */ const MR_Box mdbcomp__trace_counts_scalar_common_5[10][1];

static /* final */ const MR_Box mdbcomp__trace_counts_scalar_common_6[3][6];

static /* final */ const MR_Box mdbcomp__trace_counts_scalar_common_7[5][8];

static /* final */ const MR_Box mdbcomp__trace_counts_scalar_common_8[1][12];


struct mdbcomp__trace_counts__vector_common_type_9_0_s {
  const MR_String mdbcomp__trace_counts__vector_common_type_9_0__vct_9_f_0;
  const MR_Integer mdbcomp__trace_counts__vector_common_type_9_0__vct_9_f_1;
};

static /* final */ const struct mdbcomp__trace_counts__vector_common_type_9_0_s mdbcomp__trace_counts_vector_common_9[4];



static /* final */ const MR_Box mdbcomp__trace_counts_scalar_common_1[6][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0)),
    ((MR_Box) (&mdbcomp__trace_counts_scalar_common_1[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mdbcomp__trace_counts_scalar_common_6[0])),
    ((MR_Box) (mdbcomp__trace_counts__summarize_trace_counts_list_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mdbcomp__trace_counts_scalar_common_6[1])),
    ((MR_Box) (mdbcomp__trace_counts__sum_trace_counts_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mdbcomp__trace_counts_scalar_common_6[2])),
    ((MR_Box) (mdbcomp__trace_counts__sum_proc_trace_counts_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mdbcomp__trace_counts_scalar_common_2[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mdbcomp__trace_counts_scalar_common_1[2])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mdbcomp__trace_counts_scalar_common_3[2][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mdbcomp__trace_counts_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box mdbcomp__trace_counts_scalar_common_4[2][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box mdbcomp__trace_counts_scalar_common_5[10][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 5U) },
  /* row   2 */
  { (MR_Box) ((MR_Unsigned) 1U) },
  /* row   3 */
  { (MR_Box) ((MR_Unsigned) 3U) },
  /* row   4 */
  { (MR_Box) ((MR_Unsigned) 2U) },
  /* row   5 */
  { (MR_Box) ((MR_Unsigned) 15U) },
  /* row   6 */
  { ((MR_Box) ((MR_String) "no trace count file id")) },
  /* row   7 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
  /* row   8 */
  { ((MR_Box) ((MR_String) "no info on trace count file type")) },
  /* row   9 */
  { ((MR_Box) ((MR_String) "")) },
};

static /* final */ const MR_Box mdbcomp__trace_counts_scalar_common_6[3][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__trace_counts__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)),
    ((MR_Box) (&mdbcomp__trace_counts__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)),
    ((MR_Box) (&mdbcomp__trace_counts__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__trace_counts__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)),
    ((MR_Box) (&mdbcomp__trace_counts__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)),
    ((MR_Box) (&mdbcomp__trace_counts__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0))
  },
};

static /* final */ const MR_Box mdbcomp__trace_counts_scalar_common_7[5][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mdbcomp__trace_counts__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0)),
    ((MR_Box) (&mdbcomp__trace_counts__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)),
    ((MR_Box) (&mdbcomp__trace_counts__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)),
    ((MR_Box) (&mdbcomp__trace_counts__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_input_stream_0)),
    ((MR_Box) (&mdbcomp__trace_counts__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)),
    ((MR_Box) (&mdbcomp__trace_counts__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0)),
    ((MR_Box) (&mdbcomp__trace_counts__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)),
    ((MR_Box) (&mdbcomp__trace_counts__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)),
    ((MR_Box) (&mdbcomp__trace_counts__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mdbcomp__trace_counts__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)),
    ((MR_Box) (&mdbcomp__trace_counts__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)),
    ((MR_Box) (&mdbcomp__trace_counts__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mdbcomp__trace_counts_scalar_common_8[1][12] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0)),
    ((MR_Box) (&mdbcomp__trace_counts__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};


static /* final */ const struct mdbcomp__trace_counts__vector_common_type_9_0_s mdbcomp__trace_counts_vector_common_9[4] = {
  /* row   0 */
  {
    (MR_String) "fproc",
    (MR_Integer) 0
  },
  /* row   1 */
  {
    (MR_String) "fprocdecl",
    (MR_Integer) 1
  },
  /* row   2 */
  {
    (MR_String) "pproc",
    (MR_Integer) 2
  },
  /* row   3 */
  {
    (MR_String) "pprocdecl",
    (MR_Integer) 3
  },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "mdbcomp.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_TypeInfo_Struct2 mdbcomp__trace_counts__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0),
    (MR_TypeInfo) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 mdbcomp__trace_counts__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0),
    (MR_PseudoTypeInfo) (&mdbcomp__trace_counts__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 mdbcomp__trace_counts__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0),
    (MR_PseudoTypeInfo) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)
  }
};

static const MR_EnumFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__enum_functor_desc_all_or_nonzero_0_0 = {
  (MR_String) "user_all",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__enum_functor_desc_all_or_nonzero_0_1 = {
  (MR_String) "user_nonzero",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__enum_ordinal_ordered_all_or_nonzero_0[2] = {
  &mdbcomp__trace_counts__mdbcomp__trace_counts__enum_functor_desc_all_or_nonzero_0_0,
  &mdbcomp__trace_counts__mdbcomp__trace_counts__enum_functor_desc_all_or_nonzero_0_1
};

static const MR_EnumFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__enum_name_ordered_all_or_nonzero_0[2] = {
  &mdbcomp__trace_counts__mdbcomp__trace_counts__enum_functor_desc_all_or_nonzero_0_0,
  &mdbcomp__trace_counts__mdbcomp__trace_counts__enum_functor_desc_all_or_nonzero_0_1
};

static const MR_Integer mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_all_or_nonzero_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_all_or_nonzero_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdbcomp__trace_counts____Unify____all_or_nonzero_0_0_10001)),
  ((MR_Box) (mdbcomp__trace_counts____Compare____all_or_nonzero_0_0_10001)),
  (MR_String) "mdbcomp.trace_counts",
  (MR_String) "all_or_nonzero",
  { mdbcomp__trace_counts__mdbcomp__trace_counts__enum_name_ordered_all_or_nonzero_0 },
  { mdbcomp__trace_counts__mdbcomp__trace_counts__enum_ordinal_ordered_all_or_nonzero_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_all_or_nonzero_0,

};

static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_base_count_file_type_0_0[2] = {
  (MR_PseudoTypeInfo) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_all_or_nonzero_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuArgLocn mdbcomp__trace_counts__mdbcomp__trace_counts__field_locns_base_count_file_type_0_0[2] = {
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

static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_base_count_file_type_0_0 = {
  (MR_String) "base_count_file_type",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_base_count_file_type_0_0,
  NULL,
  mdbcomp__trace_counts__mdbcomp__trace_counts__field_locns_base_count_file_type_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_base_count_file_type_0_0[1] = { &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_base_count_file_type_0_0 };

static const MR_DuPtagLayout mdbcomp__trace_counts__mdbcomp__trace_counts__du_ptag_ordered_base_count_file_type_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_base_count_file_type_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_name_ordered_base_count_file_type_0[1] = { &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_base_count_file_type_0_0 };

static const MR_Integer mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_base_count_file_type_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_base_count_file_type_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__trace_counts____Unify____base_count_file_type_0_0_10001)),
  ((MR_Box) (mdbcomp__trace_counts____Compare____base_count_file_type_0_0_10001)),
  (MR_String) "mdbcomp.trace_counts",
  (MR_String) "base_count_file_type",
  { mdbcomp__trace_counts__mdbcomp__trace_counts__du_name_ordered_base_count_file_type_0 },
  { mdbcomp__trace_counts__mdbcomp__trace_counts__du_ptag_ordered_base_count_file_type_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_base_count_file_type_0,

};

static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_line_no_and_count_0_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_ConstString mdbcomp__trace_counts__mdbcomp__trace_counts__field_names_line_no_and_count_0_0[3] = {
  (MR_String) "line_number",
  (MR_String) "exec_count",
  (MR_String) "num_tests"
};

static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_line_no_and_count_0_0 = {
  (MR_String) "line_no_and_count",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_line_no_and_count_0_0,
  mdbcomp__trace_counts__mdbcomp__trace_counts__field_names_line_no_and_count_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_line_no_and_count_0_0[1] = { &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_line_no_and_count_0_0 };

static const MR_DuPtagLayout mdbcomp__trace_counts__mdbcomp__trace_counts__du_ptag_ordered_line_no_and_count_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_line_no_and_count_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_name_ordered_line_no_and_count_0[1] = { &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_line_no_and_count_0_0 };

static const MR_Integer mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_line_no_and_count_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__trace_counts____Unify____line_no_and_count_0_0_10001)),
  ((MR_Box) (mdbcomp__trace_counts____Compare____line_no_and_count_0_0_10001)),
  (MR_String) "mdbcomp.trace_counts",
  (MR_String) "line_no_and_count",
  { mdbcomp__trace_counts__mdbcomp__trace_counts__du_name_ordered_line_no_and_count_0 },
  { mdbcomp__trace_counts__mdbcomp__trace_counts__du_ptag_ordered_line_no_and_count_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_line_no_and_count_0,

};

static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_path_port_0_0[1] = { (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_trace_port_0) };

static const MR_DuArgLocn mdbcomp__trace_counts__mdbcomp__trace_counts__field_locns_path_port_0_0[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 4
  }
};

static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_path_port_0_0 = {
  (MR_String) "port_only",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_path_port_0_0,
  NULL,
  mdbcomp__trace_counts__mdbcomp__trace_counts__field_locns_path_port_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_path_port_0_1[1] = { (MR_PseudoTypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0) };

static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_path_port_0_1 = {
  (MR_String) "path_only",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_path_port_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_path_port_0_2[2] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_trace_port_0),
  (MR_PseudoTypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0)
};

static const MR_DuArgLocn mdbcomp__trace_counts__mdbcomp__trace_counts__field_locns_path_port_0_2[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 4
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_path_port_0_2 = {
  (MR_String) "port_and_path",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_path_port_0_2,
  NULL,
  mdbcomp__trace_counts__mdbcomp__trace_counts__field_locns_path_port_0_2,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_path_port_0_0[1] = { &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_path_port_0_0 };

static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_path_port_0_1[1] = { &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_path_port_0_1 };

static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_path_port_0_2[1] = { &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_path_port_0_2 };

static const MR_DuPtagLayout mdbcomp__trace_counts__mdbcomp__trace_counts__du_ptag_ordered_path_port_0[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_path_port_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_path_port_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_path_port_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_name_ordered_path_port_0[3] = {
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_path_port_0_1,
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_path_port_0_2,
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_path_port_0_0
};

static const MR_Integer mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_path_port_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__trace_counts____Unify____path_port_0_0_10001)),
  ((MR_Box) (mdbcomp__trace_counts____Compare____path_port_0_0_10001)),
  (MR_String) "mdbcomp.trace_counts",
  (MR_String) "path_port",
  { mdbcomp__trace_counts__mdbcomp__trace_counts__du_name_ordered_path_port_0 },
  { mdbcomp__trace_counts__mdbcomp__trace_counts__du_ptag_ordered_path_port_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_path_port_0,

};

static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_proc_label_in_context_0_0[3] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0)
};

static const MR_ConstString mdbcomp__trace_counts__mdbcomp__trace_counts__field_names_proc_label_in_context_0_0[3] = {
  (MR_String) "context_module_symname",
  (MR_String) "context_filename",
  (MR_String) "proc_label"
};

static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_proc_label_in_context_0_0 = {
  (MR_String) "proc_label_in_context",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_proc_label_in_context_0_0,
  mdbcomp__trace_counts__mdbcomp__trace_counts__field_names_proc_label_in_context_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_proc_label_in_context_0_0[1] = { &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_proc_label_in_context_0_0 };

static const MR_DuPtagLayout mdbcomp__trace_counts__mdbcomp__trace_counts__du_ptag_ordered_proc_label_in_context_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_proc_label_in_context_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_name_ordered_proc_label_in_context_0[1] = { &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_proc_label_in_context_0_0 };

static const MR_Integer mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_proc_label_in_context_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__trace_counts____Unify____proc_label_in_context_0_0_10001)),
  ((MR_Box) (mdbcomp__trace_counts____Compare____proc_label_in_context_0_0_10001)),
  (MR_String) "mdbcomp.trace_counts",
  (MR_String) "proc_label_in_context",
  { mdbcomp__trace_counts__mdbcomp__trace_counts__du_name_ordered_proc_label_in_context_0 },
  { mdbcomp__trace_counts__mdbcomp__trace_counts__du_ptag_ordered_proc_label_in_context_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_proc_label_in_context_0,

};

const MR_TypeCtorInfo_Struct mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_trace_counts_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdbcomp__trace_counts____Unify____proc_trace_counts_0_0_10001)),
  ((MR_Box) (mdbcomp__trace_counts____Compare____proc_trace_counts_0_0_10001)),
  (MR_String) "mdbcomp.trace_counts",
  (MR_String) "proc_trace_counts",
  { NULL },
  { (MR_PseudoTypeInfo) (&mdbcomp__trace_counts__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct2 mdbcomp__trace_counts__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0),
    (MR_TypeInfo) (&mdbcomp__trace_counts__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)
  }
};

static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_read_trace_counts_list_result_0_0[2] = {
  (MR_PseudoTypeInfo) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0),
  (MR_PseudoTypeInfo) (&mdbcomp__trace_counts__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)
};

static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_list_result_0_0 = {
  (MR_String) "list_ok",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_read_trace_counts_list_result_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_read_trace_counts_list_result_0_1[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_list_result_0_1 = {
  (MR_String) "list_error_message",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_read_trace_counts_list_result_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_read_trace_counts_list_result_0_0[1] = { &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_list_result_0_0 };

static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_read_trace_counts_list_result_0_1[1] = { &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_list_result_0_1 };

static const MR_DuPtagLayout mdbcomp__trace_counts__mdbcomp__trace_counts__du_ptag_ordered_read_trace_counts_list_result_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_read_trace_counts_list_result_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_read_trace_counts_list_result_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_name_ordered_read_trace_counts_list_result_0[2] = {
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_list_result_0_1,
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_list_result_0_0
};

static const MR_Integer mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_read_trace_counts_list_result_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_read_trace_counts_list_result_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__trace_counts____Unify____read_trace_counts_list_result_0_0_10001)),
  ((MR_Box) (mdbcomp__trace_counts____Compare____read_trace_counts_list_result_0_0_10001)),
  (MR_String) "mdbcomp.trace_counts",
  (MR_String) "read_trace_counts_list_result",
  { mdbcomp__trace_counts__mdbcomp__trace_counts__du_name_ordered_read_trace_counts_list_result_0 },
  { mdbcomp__trace_counts__mdbcomp__trace_counts__du_ptag_ordered_read_trace_counts_list_result_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_read_trace_counts_list_result_0,

};

static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_read_trace_counts_result_0_0[2] = {
  (MR_PseudoTypeInfo) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0),
  (MR_PseudoTypeInfo) (&mdbcomp__trace_counts__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)
};

static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_result_0_0 = {
  (MR_String) "ok",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_read_trace_counts_result_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_read_trace_counts_result_0_1[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_result_0_1 = {
  (MR_String) "syntax_error",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_read_trace_counts_result_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_read_trace_counts_result_0_2[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_result_0_2 = {
  (MR_String) "error_message",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_read_trace_counts_result_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_read_trace_counts_result_0_3[1] = { (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_error_0) };

static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_result_0_3 = {
  (MR_String) "open_error",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(3),
  mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_read_trace_counts_result_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_read_trace_counts_result_0_4[1] = { (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_error_0) };

static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_result_0_4 = {
  (MR_String) "io_error",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(4),
  mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_read_trace_counts_result_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_read_trace_counts_result_0_0[1] = { &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_result_0_0 };

static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_read_trace_counts_result_0_1[1] = { &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_result_0_1 };

static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_read_trace_counts_result_0_2[1] = { &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_result_0_2 };

static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_read_trace_counts_result_0_3[2] = {
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_result_0_3,
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_result_0_4
};

static const MR_DuPtagLayout mdbcomp__trace_counts__mdbcomp__trace_counts__du_ptag_ordered_read_trace_counts_result_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_read_trace_counts_result_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_read_trace_counts_result_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_read_trace_counts_result_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(2),
    MR_SECTAG_REMOTE_FULL_WORD,
    mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_read_trace_counts_result_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_name_ordered_read_trace_counts_result_0[5] = {
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_result_0_2,
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_result_0_4,
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_result_0_0,
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_result_0_3,
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_result_0_1
};

static const MR_Integer mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_read_trace_counts_result_0[5] = {
  (MR_Integer) 2,
  (MR_Integer) 4,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_read_trace_counts_result_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__trace_counts____Unify____read_trace_counts_result_0_0_10001)),
  ((MR_Box) (mdbcomp__trace_counts____Compare____read_trace_counts_result_0_0_10001)),
  (MR_String) "mdbcomp.trace_counts",
  (MR_String) "read_trace_counts_result",
  { mdbcomp__trace_counts__mdbcomp__trace_counts__du_name_ordered_read_trace_counts_result_0 },
  { mdbcomp__trace_counts__mdbcomp__trace_counts__du_ptag_ordered_read_trace_counts_result_0 },
  (MR_Integer) 5,
  UINT16_C(12),
  mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_read_trace_counts_result_0,

};

static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_trace_count_file_type_0_0[1] = { (MR_PseudoTypeInfo) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_base_count_file_type_0) };

static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_trace_count_file_type_0_0 = {
  (MR_String) "single_file",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE_DIRECT_ARG,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_trace_count_file_type_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 mdbcomp__trace_counts__list__ti_list_1mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0) }
};

static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_trace_count_file_type_0_1[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mdbcomp__trace_counts__list__ti_list_1mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0)
};

static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_trace_count_file_type_0_1 = {
  (MR_String) "union_file",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_trace_count_file_type_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_trace_count_file_type_0_2[2] = {
  (MR_PseudoTypeInfo) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0),
  (MR_PseudoTypeInfo) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0)
};

static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_trace_count_file_type_0_2 = {
  (MR_String) "diff_file",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_trace_count_file_type_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_trace_count_file_type_0_0[1] = { &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_trace_count_file_type_0_0 };

static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_trace_count_file_type_0_1[1] = { &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_trace_count_file_type_0_1 };

static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_trace_count_file_type_0_2[1] = { &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_trace_count_file_type_0_2 };

static const MR_DuPtagLayout mdbcomp__trace_counts__mdbcomp__trace_counts__du_ptag_ordered_trace_count_file_type_0[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE_DIRECT_ARG,
    mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_trace_count_file_type_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_trace_count_file_type_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_trace_count_file_type_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_name_ordered_trace_count_file_type_0[3] = {
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_trace_count_file_type_0_2,
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_trace_count_file_type_0_0,
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_trace_count_file_type_0_1
};

static const MR_Integer mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_trace_count_file_type_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__trace_counts____Unify____trace_count_file_type_0_0_10001)),
  ((MR_Box) (mdbcomp__trace_counts____Compare____trace_count_file_type_0_0_10001)),
  (MR_String) "mdbcomp.trace_counts",
  (MR_String) "trace_count_file_type",
  { mdbcomp__trace_counts__mdbcomp__trace_counts__du_name_ordered_trace_count_file_type_0 },
  { mdbcomp__trace_counts__mdbcomp__trace_counts__du_ptag_ordered_trace_count_file_type_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_trace_count_file_type_0,

};

static const MR_Integer mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_trace_count_syntax_error_0[1] = { (MR_Integer) 0 };

static const MR_NotagFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__notag_functor_desc_trace_count_syntax_error_0 = {
  (MR_String) "trace_count_syntax_error",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_syntax_error_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mdbcomp__trace_counts____Unify____trace_count_syntax_error_0_0_10001)),
  ((MR_Box) (mdbcomp__trace_counts____Compare____trace_count_syntax_error_0_0_10001)),
  (MR_String) "mdbcomp.trace_counts",
  (MR_String) "trace_count_syntax_error",
  { &mdbcomp__trace_counts__mdbcomp__trace_counts__notag_functor_desc_trace_count_syntax_error_0 },
  { &mdbcomp__trace_counts__mdbcomp__trace_counts__notag_functor_desc_trace_count_syntax_error_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_trace_count_syntax_error_0,

};

const MR_TypeCtorInfo_Struct mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_counts_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdbcomp__trace_counts____Unify____trace_counts_0_0_10001)),
  ((MR_Box) (mdbcomp__trace_counts____Compare____trace_counts_0_0_10001)),
  (MR_String) "mdbcomp.trace_counts",
  (MR_String) "trace_counts",
  { NULL },
  { (MR_PseudoTypeInfo) (&mdbcomp__trace_counts__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static MR_bool MR_CALL 
mdbcomp__trace_counts__IntroducedFrom__pred__write_proc_label_and_check__903__1_2_p_0(
  MR_Word ModuleNameSym_7,
  MR_Word DefModuleSym_10)
{
  MR_bool succeeded;

  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleNameSym_7, DefModuleSym_10);
  return succeeded;
}

void MR_CALL 
mdbcomp__trace_counts____Compare____trace_counts_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&mdbcomp__trace_counts_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____trace_counts_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&mdbcomp__trace_counts_scalar_common_1[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
mdbcomp__trace_counts____Compare____trace_count_syntax_error_0_0(
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
  {
    MR_String ArgX1_4 = (MR_String) (HeadVar__2_2);
    MR_String ArgY1_5 = (MR_String) (HeadVar__3_3);

    mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____trace_count_syntax_error_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_5 == CastY_6);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_String ArgX1_3 = (MR_String) (HeadVar__1_1);
    MR_String ArgY1_4 = (MR_String) (HeadVar__2_2);

    succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
  }
  return succeeded;
}

void MR_CALL 
mdbcomp__trace_counts____Compare____read_trace_counts_result_0_0(
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
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
              MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
              MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
              MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
              MR_Word SubResult1_6;

              mdbcomp__trace_counts____Compare____trace_count_file_type_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
              succeeded = (SubResult1_6 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_6;
              else
                mercury__builtin__compare_3_p_0((MR_Word) (&mdbcomp__trace_counts_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 1:
            {
              MR_String ArgX1_9 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_String ArgY1_10 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, 0))));

              mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX1_9, ArgY1_10);
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 2:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            {
              MR_String ArgX1_11 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, 0))));
              MR_String ArgY1_12 = ((MR_String) ((MR_hl_field(2, HeadVar__3_3, 0))));

              mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX1_11, ArgY1_12);
            }
            break;
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word ArgX1_13 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_Word ArgY1_14 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));

                      mercury__io____Compare____error_0_0(HeadVar__1_1, ArgX1_13, ArgY1_14);
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
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word ArgX1_15 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_Word ArgY1_16 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));

                      mercury__io____Compare____error_0_0(HeadVar__1_1, ArgX1_15, ArgY1_16);
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

MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____read_trace_counts_result_0_0(
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
        {
          MR_Word TypeInfo_18_18;
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
          MR_Word ArgY1_4;
          MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
          MR_Word ArgY2_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
            ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
            succeeded = mdbcomp__trace_counts____Unify____trace_count_file_type_0_0(ArgX1_3, ArgY1_4);
            if (succeeded)
            {
              TypeInfo_18_18 = (MR_Word) (&mdbcomp__trace_counts_scalar_common_1[1]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
            }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String ArgX1_7 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, 0))));
          MR_String ArgY1_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_8 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 0))));
            succeeded = (strcmp(ArgX1_7, ArgY1_8) == 0);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String ArgX1_9 = ((MR_String) ((MR_hl_field(2, HeadVar__1_1, 0))));
          MR_String ArgY1_10;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_10 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, 0))));
            succeeded = (strcmp(ArgX1_9, ArgY1_10) == 0);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_12;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_12 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                succeeded = mercury__io____Unify____error_0_0(ArgX1_11, ArgY1_12);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_13 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_14;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_14 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                succeeded = mercury__io____Unify____error_0_0(ArgX1_13, ArgY1_14);
              }
            }
            break;
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
mdbcomp__trace_counts____Compare____read_trace_counts_list_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_String ArgX1_9 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_String ArgY1_10 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, 0))));

      mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX1_9, ArgY1_10);
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;

    mdbcomp__trace_counts____Compare____trace_count_file_type_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&mdbcomp__trace_counts_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

void MR_CALL 
mdbcomp__trace_counts____Compare____trace_count_file_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer CastX_16 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_17 = (MR_Integer) (HeadVar__3_3);

    // setup for model_det tailcalls optimized into a loop
    ;
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
              {
                MR_Word ArgX1_4 = (MR_Word) ((MR_Word) (HeadVar__2_2));
                MR_Word ArgY1_5 = (MR_Word) ((MR_Word) (HeadVar__3_3));

                mdbcomp__trace_counts____Compare____base_count_file_type_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
              }
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
          break;
        case (MR_Integer) 1:
          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              {
                MR_Integer ArgX1_6 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
                MR_Integer ArgY1_7 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, 0))));
                MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
                MR_Word ArgY2_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
                MR_Word SubResult1_8;

                succeeded = (ArgX1_6 < ArgY1_7);
                if (succeeded)
                {
                  SubResult1_8 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (ArgX1_6 > ArgY1_7);
                  if (succeeded)
                  {
                    SubResult1_8 = (MR_Integer) 2;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = MR_TRUE;
                    succeeded = !(succeeded);
                    if (succeeded)
                    {
                      SubResult1_8 = (MR_Integer) 0;
                      succeeded = MR_TRUE;
                    }
                  }
                }
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_8;
                else
                  mercury__builtin__compare_3_p_0((MR_Word) (&mdbcomp__trace_counts_scalar_common_4[0]), HeadVar__1_1, ((MR_Box) (ArgX2_9)), ((MR_Box) (ArgY2_10)));
              }
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
          break;
        case (MR_Integer) 2:
          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              {
                MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
                MR_Word ArgY1_12 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 0))));
                MR_Word ArgX2_14 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 1))));
                MR_Word ArgY2_15 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 1))));
                MR_Word SubResult1_13;

                mdbcomp__trace_counts____Compare____trace_count_file_type_0_0(&SubResult1_13, ArgX1_11, ArgY1_12);
                succeeded = (SubResult1_13 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_13;
                else
                {
                  MR_Word next_value_of_HeadVar__2_2 = ArgX2_14;
                  MR_Word next_value_of_HeadVar__3_3 = ArgY2_15;

                  // direct tailcall eliminated
                  ;
                  HeadVar__2_2 = next_value_of_HeadVar__2_2;
                  HeadVar__3_3 = next_value_of_HeadVar__3_3;
                  continue;
                }
              }
              break;
          }
          break;
      }
    break;
  }
}

MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____read_trace_counts_list_result_0_0(
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
    MR_String ArgX1_7 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_String ArgY1_8;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_8 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 0))));
      succeeded = (strcmp(ArgX1_7, ArgY1_8) == 0);
    }
  }
  else
  {
    MR_Word TypeInfo_11_11;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4;
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
      ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
      succeeded = mdbcomp__trace_counts____Unify____trace_count_file_type_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        TypeInfo_11_11 = (MR_Word) (&mdbcomp__trace_counts_scalar_common_1[1]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____trace_count_file_type_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

    // setup for model_semi tailcalls optimized into a loop
    ;
    succeeded = (CastX_13 == CastY_14);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ArgX1_3 = (MR_Word) ((MR_Word) (HeadVar__1_1));
            MR_Word ArgY1_4;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
            if (succeeded)
            {
              ArgY1_4 = (MR_Word) ((MR_Word) (HeadVar__2_2));
              succeeded = mdbcomp__trace_counts____Unify____base_count_file_type_0_0(ArgX1_3, ArgY1_4);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word TypeInfo_15_15;
            MR_Integer ArgX1_5 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 0))));
            MR_Integer ArgY1_6;
            MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
            MR_Word ArgY2_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_6 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
              ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
              succeeded = (ArgX1_5 == ArgY1_6);
              if (succeeded)
              {
                TypeInfo_15_15 = (MR_Word) (&mdbcomp__trace_counts_scalar_common_4[0]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
              }
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 0))));
            MR_Word ArgY1_10;
            MR_Word ArgX2_11 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 1))));
            MR_Word ArgY2_12;
            MR_Word next_value_of_HeadVar__1_1;
            MR_Word next_value_of_HeadVar__2_2;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_10 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
              ArgY2_12 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 1))));
              succeeded = mdbcomp__trace_counts____Unify____trace_count_file_type_0_0(ArgX1_9, ArgY1_10);
              if (succeeded)
              {
                // direct tailcall eliminated
                ;
                next_value_of_HeadVar__1_1 = ArgX2_11;
                next_value_of_HeadVar__2_2 = ArgY2_12;
                HeadVar__1_1 = next_value_of_HeadVar__1_1;
                HeadVar__2_2 = next_value_of_HeadVar__2_2;
                continue;
              }
            }
          }
          break;
      }
    return succeeded;
    break;
  }
}

void MR_CALL 
mdbcomp__trace_counts____Compare____proc_trace_counts_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&mdbcomp__trace_counts_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____proc_trace_counts_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&mdbcomp__trace_counts_scalar_common_1[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
mdbcomp__trace_counts____Compare____proc_label_in_context_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_String ArgY2_8 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word SubResult1_6;

    mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
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
        mdbcomp__prim_data____Compare____proc_label_0_0(HeadVar__1_1, ArgX3_10, ArgY3_11);
    }
  }
}

MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____proc_label_in_context_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_String ArgY2_6 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));

    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
      if (succeeded)
        succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(ArgX3_7, ArgY3_8);
    }
  }
  return succeeded;
}

void MR_CALL 
mdbcomp__trace_counts____Compare____path_port_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_13 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_14 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_13 == CastY_14);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 15);
              MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) & (MR_Integer) 15);
              MR_Integer Var_21 = (MR_Integer) (ArgX1_4);
              MR_Integer Var_22 = (MR_Integer) (ArgY1_5);

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
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

              mdbcomp__goal_path____Compare____reverse_goal_path_0_0(HeadVar__1_1, ArgX1_6, ArgY1_7);
            }
            break;
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 2:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgX1_8 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__2_2, 0))) & (MR_Integer) 15);
              MR_Word ArgY1_9 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__3_3, 0))) & (MR_Integer) 15);
              MR_Word ArgX2_11 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 1))));
              MR_Word ArgY2_12 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 1))));
              MR_Word SubResult1_10;
              MR_Integer Var_19 = (MR_Integer) (ArgX1_8);
              MR_Integer Var_20 = (MR_Integer) (ArgY1_9);

              succeeded = (Var_19 < Var_20);
              if (succeeded)
              {
                SubResult1_10 = (MR_Integer) 1;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = (Var_19 > Var_20);
                if (succeeded)
                {
                  SubResult1_10 = (MR_Integer) 2;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = MR_TRUE;
                  succeeded = !(succeeded);
                  if (succeeded)
                  {
                    SubResult1_10 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                }
              }
              if (succeeded)
                *HeadVar__1_1 = SubResult1_10;
              else
                mdbcomp__goal_path____Compare____reverse_goal_path_0_0(HeadVar__1_1, ArgX2_11, ArgY2_12);
            }
            break;
        }
        break;
    }
}

MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____path_port_0_0(
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
          MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) & (MR_Integer) 15);
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 15);
            succeeded = (ArgX1_3 == ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
          MR_Word ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
            succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(ArgX1_5, ArgY1_6);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_7 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__1_1, 0))) & (MR_Integer) 15);
          MR_Word ArgY1_8;
          MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 1))));
          MR_Word ArgY2_10;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_8 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__2_2, 0))) & (MR_Integer) 15);
            ArgY2_10 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 1))));
            succeeded = (ArgX1_7 == ArgY1_8);
            if (succeeded)
              succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(ArgX2_9, ArgY2_10);
          }
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
mdbcomp__trace_counts____Compare____line_no_and_count_0_0(
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
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 2))));
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
        succeeded = (ArgX3_10 < ArgY3_11);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (ArgX3_10 > ArgY3_11);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 2;
          else
            *HeadVar__1_1 = (MR_Integer) 0;
        }
      }
    }
  }
}

MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____line_no_and_count_0_0(
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
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 2))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
        succeeded = (ArgX3_7 == ArgY3_8);
    }
  }
  return succeeded;
}

void MR_CALL 
mdbcomp__trace_counts____Compare____base_count_file_type_0_0(
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
    MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 1);
    MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) & (MR_Integer) 1);
    MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_String ArgY2_8 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, 1))));
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
      mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____base_count_file_type_0_0(
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
    MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) & (MR_Integer) 1);
    MR_Word ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 1);
    MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_String ArgY2_6 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
      succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
  }
  return succeeded;
}

void MR_CALL 
mdbcomp__trace_counts____Compare____all_or_nonzero_0_0(
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
mdbcomp__trace_counts____Unify____all_or_nonzero_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
mdbcomp__trace_counts__restrict_trace_counts_2_5_p_0(
  MR_Word ModuleName_6,
  MR_Word ProcLabelInContext_7,
  MR_Word ProcCounts_8,
  MR_Word STATE_VARIABLE_TraceCounts_0_16,
  MR_Word * STATE_VARIABLE_TraceCounts_17)
{
  MR_bool succeeded;
  MR_Word ProcLabel_10 = ((MR_Word) ((MR_hl_field(0, ProcLabelInContext_7, 2))));
  MR_Word Var_22;

  succeeded = ((MR_tag((MR_Word) ProcLabel_10)) == (MR_Integer) 0);
  if (succeeded)
  {
    Var_22 = ((MR_Word) ((MR_hl_field(0, ProcLabel_10, 0))));
    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_6, Var_22);
  }
  if (succeeded)
    mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0), (MR_Word) (&mdbcomp__trace_counts_scalar_common_1[0]), ((MR_Box) (ProcLabelInContext_7)), ((MR_Box) (ProcCounts_8)), STATE_VARIABLE_TraceCounts_0_16, STATE_VARIABLE_TraceCounts_17);
  else
    *STATE_VARIABLE_TraceCounts_17 = STATE_VARIABLE_TraceCounts_0_16;
}

static void MR_CALL 
mdbcomp__trace_counts__write_path_port_count_5_p_0(
  MR_Word OutputStream_6,
  MR_Word PathPort_7,
  MR_Word LineNoAndCount_8)
{
  MR_Integer LineNo_10 = ((MR_Integer) ((MR_hl_field(0, LineNoAndCount_8, 0))));
  MR_Integer ExecCount_11 = ((MR_Integer) ((MR_hl_field(0, LineNoAndCount_8, 1))));
  MR_Integer NumTests_12 = ((MR_Integer) ((MR_hl_field(0, LineNoAndCount_8, 2))));

  switch (MR_tag((MR_Word) PathPort_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Port_13 = ((MR_Unsigned) ((MR_hl_field(0, PathPort_7, 0))) & (MR_Integer) 15);
        MR_String PortStr_14;
        MR_String Var_62;
        MR_String Var_72;
        MR_String Var_82;

        mdbcomp__prim_data__string_to_trace_port_2_p_1(&PortStr_14, Port_13);
        mercury__io__write_string_4_p_0(OutputStream_6, PortStr_14);
        mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) " ");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mdbcomp__trace_counts_scalar_common_5[7]), LineNo_10, &Var_62);
        mercury__io__write_string_4_p_0(OutputStream_6, Var_62);
        mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) " ");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mdbcomp__trace_counts_scalar_common_5[7]), ExecCount_11, &Var_72);
        mercury__io__write_string_4_p_0(OutputStream_6, Var_72);
        mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) " ");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mdbcomp__trace_counts_scalar_common_5[7]), NumTests_12, &Var_82);
        mercury__io__write_string_4_p_0(OutputStream_6, Var_82);
        mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "\n");
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Path_15 = ((MR_Word) ((MR_hl_field(1, PathPort_7, 0))));
        MR_String Var_33;
        MR_String Var_131;
        MR_String Var_141;
        MR_String Var_151;

        Var_33 = mdbcomp__goal_path__rev_goal_path_to_string_1_f_0(Path_15);
        mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "<");
        mercury__io__write_string_4_p_0(OutputStream_6, Var_33);
        mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "> ");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mdbcomp__trace_counts_scalar_common_5[7]), LineNo_10, &Var_131);
        mercury__io__write_string_4_p_0(OutputStream_6, Var_131);
        mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) " ");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mdbcomp__trace_counts_scalar_common_5[7]), ExecCount_11, &Var_141);
        mercury__io__write_string_4_p_0(OutputStream_6, Var_141);
        mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) " ");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mdbcomp__trace_counts_scalar_common_5[7]), NumTests_12, &Var_151);
        mercury__io__write_string_4_p_0(OutputStream_6, Var_151);
        mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "\n");
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String Var_47;
        MR_Word Port_55 = ((MR_Unsigned) ((MR_hl_field(2, PathPort_7, 0))) & (MR_Integer) 15);
        MR_String PortStr_56;
        MR_Word Path_57 = ((MR_Word) ((MR_hl_field(2, PathPort_7, 1))));
        MR_String Var_97;
        MR_String Var_107;
        MR_String Var_117;

        mdbcomp__prim_data__string_to_trace_port_2_p_1(&PortStr_56, Port_55);
        Var_47 = mdbcomp__goal_path__rev_goal_path_to_string_1_f_0(Path_57);
        mercury__io__write_string_4_p_0(OutputStream_6, PortStr_56);
        mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) " <");
        mercury__io__write_string_4_p_0(OutputStream_6, Var_47);
        mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "> ");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mdbcomp__trace_counts_scalar_common_5[7]), LineNo_10, &Var_97);
        mercury__io__write_string_4_p_0(OutputStream_6, Var_97);
        mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) " ");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mdbcomp__trace_counts_scalar_common_5[7]), ExecCount_11, &Var_107);
        mercury__io__write_string_4_p_0(OutputStream_6, Var_107);
        mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) " ");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mdbcomp__trace_counts_scalar_common_5[7]), NumTests_12, &Var_117);
        mercury__io__write_string_4_p_0(OutputStream_6, Var_117);
        mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "\n");
      }
      break;
  }
}

static void MR_CALL 
mdbcomp__trace_counts__write_proc_label_and_file_trace_counts_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  mdbcomp__trace_counts__write_path_port_count_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static MR_bool MR_CALL 
mdbcomp__trace_counts__write_proc_label_and_file_trace_counts_9_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = mdbcomp__trace_counts__IntroducedFrom__pred__write_proc_label_and_check__903__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static void MR_CALL 
mdbcomp__trace_counts__write_proc_label_and_file_trace_counts_9_p_0(
  MR_Word OutputStream_10,
  MR_Word ProcLabelInContext_11,
  MR_Word PathPortCounts_12,
  MR_Word STATE_VARIABLE_CurModuleNameSym_0_20,
  MR_Word * STATE_VARIABLE_CurModuleNameSym_21,
  MR_String STATE_VARIABLE_CurFileName_0_22,
  MR_String * STATE_VARIABLE_CurFileName_23)
{
  MR_bool succeeded;
  MR_Word ModuleNameSym_16 = ((MR_Word) ((MR_hl_field(0, ProcLabelInContext_11, 0))));
  MR_String FileName_17 = ((MR_String) ((MR_hl_field(0, ProcLabelInContext_11, 1))));
  MR_Word ProcLabel_18 = ((MR_Word) ((MR_hl_field(0, ProcLabelInContext_11, 2))));
  MR_Word Var_39;
  MR_Box conv0_STATE_VARIABLE_IO_25;

  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleNameSym_16, STATE_VARIABLE_CurModuleNameSym_0_20);
  if (succeeded)
    *STATE_VARIABLE_CurModuleNameSym_21 = STATE_VARIABLE_CurModuleNameSym_0_20;
  else
  {
    MR_String ModuleName_19;

    ModuleName_19 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleNameSym_16);
    mercury__io__write_string_4_p_0(OutputStream_10, (MR_String) "module ");
    mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_97_116_111_109_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0((MR_Word) (&mdbcomp__trace_counts_scalar_common_3[0]), OutputStream_10, ModuleName_19);
    mercury__io__write_string_4_p_0(OutputStream_10, (MR_String) "\n");
    *STATE_VARIABLE_CurModuleNameSym_21 = ModuleNameSym_16;
  }
  succeeded = (strcmp(FileName_17, STATE_VARIABLE_CurFileName_0_22) == 0);
  if (succeeded)
    *STATE_VARIABLE_CurFileName_23 = STATE_VARIABLE_CurFileName_0_22;
  else
  {
    mercury__io__write_string_4_p_0(OutputStream_10, (MR_String) "file ");
    mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_97_116_111_109_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0((MR_Word) (&mdbcomp__trace_counts_scalar_common_3[0]), OutputStream_10, FileName_17);
    mercury__io__write_string_4_p_0(OutputStream_10, (MR_String) "\n");
    *STATE_VARIABLE_CurFileName_23 = FileName_17;
  }
  if (((MR_tag((MR_Word) ProcLabel_18)) == (MR_Integer) 0))
  {
    MR_Word DefModuleSym_50 = ((MR_Word) ((MR_hl_field(0, ProcLabel_18, 0))));
    MR_Word Var_56;

    {
      Var_56 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_56, 0) = ((MR_Box) (&mdbcomp__trace_counts_scalar_common_3[1]));
      MR_hl_field(0, Var_56, 1) = ((MR_Box) (mdbcomp__trace_counts__write_proc_label_and_file_trace_counts_9_p_0_1));
      MR_hl_field(0, Var_56, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_56, 3) = ((MR_Box) (ModuleNameSym_16));
      MR_hl_field(0, Var_56, 4) = ((MR_Box) (DefModuleSym_50));
    }
    mercury__require__require_2_p_0(Var_56, (MR_String) "write_proc_label_and_check: module mismatch");
  }
  else
    {
      mercury__require__error_1_p_0((MR_String) "write_proc_label: special_pred");
      return;
    }
  mdbcomp__trace_counts__write_proc_label_4_p_0(OutputStream_10, ProcLabel_18);
  {
    Var_39 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_39, 0) = ((MR_Box) (&mdbcomp__trace_counts_scalar_common_7[4]));
    MR_hl_field(0, Var_39, 1) = ((MR_Box) (mdbcomp__trace_counts__write_proc_label_and_file_trace_counts_9_p_0_2));
    MR_hl_field(0, Var_39, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_39, 3) = ((MR_Box) (OutputStream_10));
  }
  mercury__map__foldl_4_p_2((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0), (MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_39, PathPortCounts_12, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_25);
}

static void MR_CALL 
mdbcomp__trace_counts__read_trace_counts_setup_5_p_0(
  MR_Word InputStream_6,
  MR_Word STATE_VARIABLE_TraceCounts_0_15,
  MR_Word * STATE_VARIABLE_TraceCounts_16)
{
  MR_Integer LineNumber_9;
  MR_Word Result_10;

  mercury__io__get_line_number_4_p_0(InputStream_6, &LineNumber_9);
  mercury__io__read_line_as_string_4_p_0(InputStream_6, &Result_10);
  switch (MR_tag((MR_Word) Result_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_TraceCounts_16 = STATE_VARIABLE_TraceCounts_0_15;
      break;
    case (MR_Integer) 1:
      {
        MR_String Line_11 = ((MR_String) ((MR_hl_field(1, Result_10, 0))));

        mdbcomp__trace_counts__read_proc_trace_counts_9_p_0(InputStream_6, LineNumber_9, Line_11, (MR_Word) (&mdbcomp__trace_counts_scalar_common_5[9]), (MR_String) "", STATE_VARIABLE_TraceCounts_0_15, STATE_VARIABLE_TraceCounts_16);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Error_14 = ((MR_Word) ((MR_hl_field(2, Result_10, 0))));

        {
          mercury__exception__throw_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (Error_14)));
          return;
        }
      }
      break;
  }
}

static void MR_CALL 
mdbcomp__trace_counts__read_proc_trace_counts_9_p_0(
  MR_Word tscc_proc_1_input_1_InputStream_10,
  MR_Integer tscc_proc_1_input_2_HeaderLineNumber_11,
  MR_String tscc_proc_1_input_3_HeaderLine_12,
  MR_Word tscc_proc_1_input_4_CurModuleNameSym_13,
  MR_String tscc_proc_1_input_5_CurFileName_14,
  MR_Word tscc_proc_1_input_6_STATE_VARIABLE_TraceCounts_0_57,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_TraceCounts_58)
{
  MR_Word tscc_proc_2_input_1_InputStream_8;
  MR_Word tscc_proc_2_input_2_ProcLabelInContext_9;
  MR_Word tscc_proc_2_input_3_ProcCounts0_10;
  MR_Word tscc_proc_2_input_4_STATE_VARIABLE_TraceCounts_0_24;
  MR_Word tscc_output_1_STATE_VARIABLE_TraceCounts_58;

  // The code for TSCC PROC 1: pred mdbcomp.trace_counts.read_proc_trace_counts/9-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred mdbcomp.trace_counts.read_proc_trace_counts/9-0
  ;
  // proc 2 in TSCC: pred mdbcomp.trace_counts.read_proc_trace_counts_2/7-0
  ;
  ;
  goto top_of_proc_1;
top_of_proc_1:;
  {
    MR_Word InputStream_10 = tscc_proc_1_input_1_InputStream_10;
    MR_Integer HeaderLineNumber_11 = tscc_proc_1_input_2_HeaderLineNumber_11;
    MR_String HeaderLine_12 = tscc_proc_1_input_3_HeaderLine_12;
    MR_Word CurModuleNameSym_13 = tscc_proc_1_input_4_CurModuleNameSym_13;
    MR_String CurFileName_14 = tscc_proc_1_input_5_CurFileName_14;
    MR_Word STATE_VARIABLE_TraceCounts_0_57 = tscc_proc_1_input_6_STATE_VARIABLE_TraceCounts_0_57;
    MR_Word STATE_VARIABLE_TraceCounts_58;
    MR_bool succeeded;
    MR_Word TokenList_17;
    MR_Integer Var_61;
    MR_Word Var_62;
    MR_Word Var_18;
    MR_String TokenName_19;
    MR_Word TokenListRest_21;
    MR_Word Var_65;

    Var_61 = mercury__string__length_1_f_0(HeaderLine_12);
    {
      Var_62 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_62, 0) = ((MR_Box) (HeaderLineNumber_11));
      MR_hl_field(0, Var_62, 1) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_62, 2) = ((MR_Box) ((MR_Integer) 0));
    }
    mercury__mercury_term_lexer__string_get_token_list_max_5_p_0(HeaderLine_12, Var_61, &TokenList_17, Var_62, &Var_18);
    succeeded = (TokenList_17 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_65 = ((MR_Word) ((MR_hl_field(1, TokenList_17, 0))));
      TokenListRest_21 = ((MR_Word) ((MR_hl_field(1, TokenList_17, 2))));
      succeeded = ((MR_tag((MR_Word) Var_65)) == (MR_Integer) 1);
      if (succeeded)
        TokenName_19 = ((MR_String) ((MR_hl_field(1, Var_65, 0))));
    }
    if (succeeded)
    {
      MR_String NextModuleName_22;
      MR_Word Var_66;
      MR_Word Var_67;

      succeeded = (strcmp(TokenName_19, (MR_String) "module") == 0);
      if (succeeded)
      {
        succeeded = (TokenListRest_21 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_66 = ((MR_Word) ((MR_hl_field(1, TokenListRest_21, 0))));
          Var_67 = ((MR_Word) ((MR_hl_field(1, TokenListRest_21, 2))));
          succeeded = (Var_67 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) Var_66)) == (MR_Integer) 1);
            if (succeeded)
              NextModuleName_22 = ((MR_String) ((MR_hl_field(1, Var_66, 0))));
          }
        }
      }
      if (succeeded)
      {
        MR_Word NextModuleNameSym_24;
        MR_Word Result_25;

        NextModuleNameSym_24 = mdbcomp__sym_name__string_to_sym_name_1_f_0(NextModuleName_22);
        mercury__io__read_line_as_string_4_p_0(InputStream_10, &Result_25);
        switch (MR_tag((MR_Word) Result_25)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_TraceCounts_58 = STATE_VARIABLE_TraceCounts_0_57;
            break;
          case (MR_Integer) 1:
            {
              MR_String Line_26 = ((MR_String) ((MR_hl_field(1, Result_25, 0))));
              MR_Integer LineNumber_27;
              MR_Word next_value_of_tscc_proc_1_input_1_InputStream_10;
              MR_Integer next_value_of_tscc_proc_1_input_2_HeaderLineNumber_11;
              MR_String next_value_of_tscc_proc_1_input_3_HeaderLine_12;
              MR_Word next_value_of_tscc_proc_1_input_4_CurModuleNameSym_13;
              MR_String next_value_of_tscc_proc_1_input_5_CurFileName_14;
              MR_Word next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_TraceCounts_0_57;

              mercury__io__get_line_number_4_p_0(InputStream_10, &LineNumber_27);
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_1_input_1_InputStream_10 = InputStream_10;
              next_value_of_tscc_proc_1_input_2_HeaderLineNumber_11 = LineNumber_27;
              next_value_of_tscc_proc_1_input_3_HeaderLine_12 = Line_26;
              next_value_of_tscc_proc_1_input_4_CurModuleNameSym_13 = NextModuleNameSym_24;
              next_value_of_tscc_proc_1_input_5_CurFileName_14 = CurFileName_14;
              next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_TraceCounts_0_57 = STATE_VARIABLE_TraceCounts_0_57;
              tscc_proc_1_input_1_InputStream_10 = next_value_of_tscc_proc_1_input_1_InputStream_10;
              tscc_proc_1_input_2_HeaderLineNumber_11 = next_value_of_tscc_proc_1_input_2_HeaderLineNumber_11;
              tscc_proc_1_input_3_HeaderLine_12 = next_value_of_tscc_proc_1_input_3_HeaderLine_12;
              tscc_proc_1_input_4_CurModuleNameSym_13 = next_value_of_tscc_proc_1_input_4_CurModuleNameSym_13;
              tscc_proc_1_input_5_CurFileName_14 = next_value_of_tscc_proc_1_input_5_CurFileName_14;
              tscc_proc_1_input_6_STATE_VARIABLE_TraceCounts_0_57 = next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_TraceCounts_0_57;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Error_28 = ((MR_Word) ((MR_hl_field(2, Result_25, 0))));

              {
                mercury__exception__throw_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (Error_28)));
                return;
              }
            }
            break;
        }
      }
      else
      {
        MR_String NextFileName_29;
        MR_Word Var_72;
        MR_Word Var_73;

        succeeded = (strcmp(TokenName_19, (MR_String) "file") == 0);
        if (succeeded)
        {
          succeeded = (TokenListRest_21 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_72 = ((MR_Word) ((MR_hl_field(1, TokenListRest_21, 0))));
            Var_73 = ((MR_Word) ((MR_hl_field(1, TokenListRest_21, 2))));
            succeeded = (Var_73 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) Var_72)) == (MR_Integer) 1);
              if (succeeded)
                NextFileName_29 = ((MR_String) ((MR_hl_field(1, Var_72, 0))));
            }
          }
        }
        if (succeeded)
        {
          MR_Word Result_124;

          mercury__io__read_line_as_string_4_p_0(InputStream_10, &Result_124);
          switch (MR_tag((MR_Word) Result_124)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              STATE_VARIABLE_TraceCounts_58 = STATE_VARIABLE_TraceCounts_0_57;
              break;
            case (MR_Integer) 1:
              {
                MR_String Line_118 = ((MR_String) ((MR_hl_field(1, Result_124, 0))));
                MR_Integer LineNumber_119;
                MR_Word next_value_of_tscc_proc_1_input_1_InputStream_10;
                MR_Integer next_value_of_tscc_proc_1_input_2_HeaderLineNumber_11;
                MR_String next_value_of_tscc_proc_1_input_3_HeaderLine_12;
                MR_Word next_value_of_tscc_proc_1_input_4_CurModuleNameSym_13;
                MR_String next_value_of_tscc_proc_1_input_5_CurFileName_14;
                MR_Word next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_TraceCounts_0_57;

                mercury__io__get_line_number_4_p_0(InputStream_10, &LineNumber_119);
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_1_input_1_InputStream_10 = InputStream_10;
                next_value_of_tscc_proc_1_input_2_HeaderLineNumber_11 = LineNumber_119;
                next_value_of_tscc_proc_1_input_3_HeaderLine_12 = Line_118;
                next_value_of_tscc_proc_1_input_4_CurModuleNameSym_13 = CurModuleNameSym_13;
                next_value_of_tscc_proc_1_input_5_CurFileName_14 = NextFileName_29;
                next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_TraceCounts_0_57 = STATE_VARIABLE_TraceCounts_0_57;
                tscc_proc_1_input_1_InputStream_10 = next_value_of_tscc_proc_1_input_1_InputStream_10;
                tscc_proc_1_input_2_HeaderLineNumber_11 = next_value_of_tscc_proc_1_input_2_HeaderLineNumber_11;
                tscc_proc_1_input_3_HeaderLine_12 = next_value_of_tscc_proc_1_input_3_HeaderLine_12;
                tscc_proc_1_input_4_CurModuleNameSym_13 = next_value_of_tscc_proc_1_input_4_CurModuleNameSym_13;
                tscc_proc_1_input_5_CurFileName_14 = next_value_of_tscc_proc_1_input_5_CurFileName_14;
                tscc_proc_1_input_6_STATE_VARIABLE_TraceCounts_0_57 = next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_TraceCounts_0_57;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Error_120 = ((MR_Word) ((MR_hl_field(2, Result_124, 0))));

                {
                  mercury__exception__throw_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (Error_120)));
                  return;
                }
              }
              break;
          }
        }
        else
        {
          MR_Word ProcLabel_39;
          MR_Word Var_158;
          MR_Word Var_160;
          MR_Word Var_161;
          MR_Word Var_163;
          MR_String Var_164;
          MR_Word Var_165;
          MR_Word Var_167;
          MR_Integer lo_0;
          MR_Integer hi_1;
          MR_Integer mid_2;
          MR_Integer result_3;

          succeeded = (TokenListRest_21 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_160 = ((MR_Word) ((MR_hl_field(1, TokenListRest_21, 0))));
            Var_158 = ((MR_Word) ((MR_hl_field(1, TokenListRest_21, 2))));
            succeeded = (Var_158 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_163 = ((MR_Word) ((MR_hl_field(1, Var_158, 0))));
              Var_161 = ((MR_Word) ((MR_hl_field(1, Var_158, 2))));
              succeeded = ((MR_tag((MR_Word) Var_160)) == (MR_Integer) 1);
              if (succeeded)
              {
                Var_164 = ((MR_String) ((MR_hl_field(1, Var_160, 0))));
                succeeded = (Var_161 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_167 = ((MR_Word) ((MR_hl_field(1, Var_161, 0))));
                  Var_165 = ((MR_Word) ((MR_hl_field(1, Var_161, 2))));
                  // binary string jump switch
                  ;
                  lo_0 = (MR_Integer) 0;
                  hi_1 = (MR_Integer) 3;
                  do
                  {
                    mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
                    result_3 = MR_strcmp(TokenName_19, ((&mdbcomp__trace_counts_vector_common_9[0 + mid_2]))->mdbcomp__trace_counts__vector_common_type_9_0__vct_9_f_0);
                    if ((result_3 == (MR_Integer) 0))
                    {
                      switch (((&mdbcomp__trace_counts_vector_common_9[0 + mid_2]))->mdbcomp__trace_counts__vector_common_type_9_0__vct_9_f_1) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            // case "fproc"
                            ;
                            {
                              MR_Word Var_88;
                              MR_Integer Arity_131;
                              MR_Integer Mode_132;

                              succeeded = (Var_165 == (MR_Word) ((MR_Unsigned) 0U));
                              if (succeeded)
                              {
                                succeeded = mdbcomp__trace_counts__decimal_token_to_int_2_p_0(Var_163, &Arity_131);
                                if (succeeded)
                                {
                                  succeeded = mdbcomp__trace_counts__decimal_token_to_int_2_p_0(Var_167, &Mode_132);
                                  if (succeeded)
                                  {
                                    Var_88 = (MR_Integer) 1;
                                    {
                                      ProcLabel_39 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                                      MR_hl_field(0, ProcLabel_39, 0) = ((MR_Box) (CurModuleNameSym_13));
                                      MR_hl_field(0, ProcLabel_39, 1) = (MR_Box) ((MR_Unsigned) (Var_88));
                                      MR_hl_field(0, ProcLabel_39, 2) = ((MR_Box) (CurModuleNameSym_13));
                                      MR_hl_field(0, ProcLabel_39, 3) = ((MR_Box) (Var_164));
                                      MR_hl_field(0, ProcLabel_39, 4) = ((MR_Box) (Arity_131));
                                      MR_hl_field(0, ProcLabel_39, 5) = ((MR_Box) (Mode_132));
                                    }
                                    succeeded = MR_TRUE;
                                  }
                                }
                              }
                            }
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            // case "fprocdecl"
                            ;
                            {
                              MR_Word Var_102;
                              MR_Word Var_103;
                              MR_String Name_138;
                              MR_Word ModeToken_140;
                              MR_Integer Arity_141;
                              MR_Integer Mode_142;
                              MR_Word DeclModuleNameSym_144;

                              succeeded = ((MR_tag((MR_Word) Var_163)) == (MR_Integer) 1);
                              if (succeeded)
                              {
                                Name_138 = ((MR_String) ((MR_hl_field(1, Var_163, 0))));
                                succeeded = (Var_165 != (MR_Word) ((MR_Unsigned) 0U));
                                if (succeeded)
                                {
                                  ModeToken_140 = ((MR_Word) ((MR_hl_field(1, Var_165, 0))));
                                  Var_102 = ((MR_Word) ((MR_hl_field(1, Var_165, 2))));
                                  succeeded = (Var_102 == (MR_Word) ((MR_Unsigned) 0U));
                                  if (succeeded)
                                  {
                                    succeeded = mdbcomp__trace_counts__decimal_token_to_int_2_p_0(Var_167, &Arity_141);
                                    if (succeeded)
                                    {
                                      succeeded = mdbcomp__trace_counts__decimal_token_to_int_2_p_0(ModeToken_140, &Mode_142);
                                      if (succeeded)
                                      {
                                        DeclModuleNameSym_144 = mdbcomp__sym_name__string_to_sym_name_1_f_0(Var_164);
                                        Var_103 = (MR_Integer) 1;
                                        {
                                          ProcLabel_39 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                                          MR_hl_field(0, ProcLabel_39, 0) = ((MR_Box) (CurModuleNameSym_13));
                                          MR_hl_field(0, ProcLabel_39, 1) = (MR_Box) ((MR_Unsigned) (Var_103));
                                          MR_hl_field(0, ProcLabel_39, 2) = ((MR_Box) (DeclModuleNameSym_144));
                                          MR_hl_field(0, ProcLabel_39, 3) = ((MR_Box) (Name_138));
                                          MR_hl_field(0, ProcLabel_39, 4) = ((MR_Box) (Arity_141));
                                          MR_hl_field(0, ProcLabel_39, 5) = ((MR_Box) (Mode_142));
                                        }
                                        succeeded = MR_TRUE;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                          break;
                        case (MR_Integer) 2:
                          {
                            // case "pproc"
                            ;
                            {
                              MR_Integer Arity_37;
                              MR_Integer Mode_38;
                              MR_Word Var_82;

                              succeeded = (Var_165 == (MR_Word) ((MR_Unsigned) 0U));
                              if (succeeded)
                              {
                                succeeded = mdbcomp__trace_counts__decimal_token_to_int_2_p_0(Var_163, &Arity_37);
                                if (succeeded)
                                {
                                  succeeded = mdbcomp__trace_counts__decimal_token_to_int_2_p_0(Var_167, &Mode_38);
                                  if (succeeded)
                                  {
                                    Var_82 = (MR_Integer) 0;
                                    {
                                      ProcLabel_39 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                                      MR_hl_field(0, ProcLabel_39, 0) = ((MR_Box) (CurModuleNameSym_13));
                                      MR_hl_field(0, ProcLabel_39, 1) = (MR_Box) ((MR_Unsigned) (Var_82));
                                      MR_hl_field(0, ProcLabel_39, 2) = ((MR_Box) (CurModuleNameSym_13));
                                      MR_hl_field(0, ProcLabel_39, 3) = ((MR_Box) (Var_164));
                                      MR_hl_field(0, ProcLabel_39, 4) = ((MR_Box) (Arity_37));
                                      MR_hl_field(0, ProcLabel_39, 5) = ((MR_Box) (Mode_38));
                                    }
                                    succeeded = MR_TRUE;
                                  }
                                }
                              }
                            }
                          }
                          break;
                        case (MR_Integer) 3:
                          {
                            // case "pprocdecl"
                            ;
                            {
                              MR_Word DeclModuleNameSym_48;
                              MR_Word Var_95;
                              MR_Word Var_96;
                              MR_String Name_133;
                              MR_Word ModeToken_135;
                              MR_Integer Arity_136;
                              MR_Integer Mode_137;

                              succeeded = ((MR_tag((MR_Word) Var_163)) == (MR_Integer) 1);
                              if (succeeded)
                              {
                                Name_133 = ((MR_String) ((MR_hl_field(1, Var_163, 0))));
                                succeeded = (Var_165 != (MR_Word) ((MR_Unsigned) 0U));
                                if (succeeded)
                                {
                                  ModeToken_135 = ((MR_Word) ((MR_hl_field(1, Var_165, 0))));
                                  Var_95 = ((MR_Word) ((MR_hl_field(1, Var_165, 2))));
                                  succeeded = (Var_95 == (MR_Word) ((MR_Unsigned) 0U));
                                  if (succeeded)
                                  {
                                    succeeded = mdbcomp__trace_counts__decimal_token_to_int_2_p_0(Var_167, &Arity_136);
                                    if (succeeded)
                                    {
                                      succeeded = mdbcomp__trace_counts__decimal_token_to_int_2_p_0(ModeToken_135, &Mode_137);
                                      if (succeeded)
                                      {
                                        DeclModuleNameSym_48 = mdbcomp__sym_name__string_to_sym_name_1_f_0(Var_164);
                                        Var_96 = (MR_Integer) 0;
                                        {
                                          ProcLabel_39 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                                          MR_hl_field(0, ProcLabel_39, 0) = ((MR_Box) (CurModuleNameSym_13));
                                          MR_hl_field(0, ProcLabel_39, 1) = (MR_Box) ((MR_Unsigned) (Var_96));
                                          MR_hl_field(0, ProcLabel_39, 2) = ((MR_Box) (DeclModuleNameSym_48));
                                          MR_hl_field(0, ProcLabel_39, 3) = ((MR_Box) (Name_133));
                                          MR_hl_field(0, ProcLabel_39, 4) = ((MR_Box) (Arity_136));
                                          MR_hl_field(0, ProcLabel_39, 5) = ((MR_Box) (Mode_137));
                                        }
                                        succeeded = MR_TRUE;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                          break;
                      }
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
          }
          if (succeeded)
          {
            MR_Word ProcLabelInContext_53;
            MR_Word StartCounts_55;
            MR_Word STATE_VARIABLE_TraceCounts_105_105;
            MR_Word ProbeCounts_54;
            MR_Word STATE_VARIABLE_TraceCounts_104_104;
            MR_Box conv0_ProbeCounts_54;
            MR_Word next_value_of_tscc_proc_2_input_1_InputStream_8;
            MR_Word next_value_of_tscc_proc_2_input_2_ProcLabelInContext_9;
            MR_Word next_value_of_tscc_proc_2_input_3_ProcCounts0_10;
            MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_TraceCounts_0_24;

            {
              ProcLabelInContext_53 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, ProcLabelInContext_53, 0) = ((MR_Box) (CurModuleNameSym_13));
              MR_hl_field(0, ProcLabelInContext_53, 1) = ((MR_Box) (CurFileName_14));
              MR_hl_field(0, ProcLabelInContext_53, 2) = ((MR_Box) (ProcLabel_39));
            }
            succeeded = mercury__map__remove_4_p_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0), (MR_Word) (&mdbcomp__trace_counts_scalar_common_1[0]), ((MR_Box) (ProcLabelInContext_53)), &conv0_ProbeCounts_54, STATE_VARIABLE_TraceCounts_0_57, &STATE_VARIABLE_TraceCounts_104_104);
            if (succeeded)
            {
              ProbeCounts_54 = ((MR_Word) (conv0_ProbeCounts_54));
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              STATE_VARIABLE_TraceCounts_105_105 = STATE_VARIABLE_TraceCounts_104_104;
              StartCounts_55 = ProbeCounts_54;
            }
            else
            {
              StartCounts_55 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0), (MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0));
              STATE_VARIABLE_TraceCounts_105_105 = STATE_VARIABLE_TraceCounts_0_57;
            }
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_2_input_1_InputStream_8 = InputStream_10;
            next_value_of_tscc_proc_2_input_2_ProcLabelInContext_9 = ProcLabelInContext_53;
            next_value_of_tscc_proc_2_input_3_ProcCounts0_10 = StartCounts_55;
            next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_TraceCounts_0_24 = STATE_VARIABLE_TraceCounts_105_105;
            tscc_proc_2_input_1_InputStream_8 = next_value_of_tscc_proc_2_input_1_InputStream_8;
            tscc_proc_2_input_2_ProcLabelInContext_9 = next_value_of_tscc_proc_2_input_2_ProcLabelInContext_9;
            tscc_proc_2_input_3_ProcCounts0_10 = next_value_of_tscc_proc_2_input_3_ProcCounts0_10;
            tscc_proc_2_input_4_STATE_VARIABLE_TraceCounts_0_24 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_TraceCounts_0_24;
            goto top_of_proc_2;
          }
          else
          {
            MR_String Message_56;
            MR_Word Var_112;
            MR_String Var_169;
            MR_String Var_176;

            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mdbcomp__trace_counts_scalar_common_5[7]), HeaderLineNumber_11, &Var_169);
            Var_176 = mercury__string__f_43_43_2_f_0(Var_169, (MR_String) " of execution trace");
            Message_56 = mercury__string__f_43_43_2_f_0((MR_String) "parse error on line ", Var_176);
            Var_112 = (MR_Word) (Message_56);
            {
              mercury__exception__throw_1_p_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_syntax_error_0), ((MR_Box) (Var_112)));
              return;
            }
          }
        }
      }
    }
    else
    {
      MR_Word Var_117;
      MR_String Message_149;
      MR_String Var_179;
      MR_String Var_186;

      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mdbcomp__trace_counts_scalar_common_5[7]), HeaderLineNumber_11, &Var_179);
      Var_186 = mercury__string__f_43_43_2_f_0(Var_179, (MR_String) " of execution trace");
      Message_149 = mercury__string__f_43_43_2_f_0((MR_String) "parse error on line ", Var_186);
      Var_117 = (MR_Word) (Message_149);
      {
        mercury__exception__throw_1_p_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_syntax_error_0), ((MR_Box) (Var_117)));
        return;
      }
    }
    tscc_output_1_STATE_VARIABLE_TraceCounts_58 = STATE_VARIABLE_TraceCounts_58;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word InputStream_8 = tscc_proc_2_input_1_InputStream_8;
    MR_Word ProcLabelInContext_9 = tscc_proc_2_input_2_ProcLabelInContext_9;
    MR_Word ProcCounts0_10 = tscc_proc_2_input_3_ProcCounts0_10;
    MR_Word STATE_VARIABLE_TraceCounts_0_24 = tscc_proc_2_input_4_STATE_VARIABLE_TraceCounts_0_24;
    MR_Word STATE_VARIABLE_TraceCounts_25;
    MR_bool succeeded;
    MR_Word Result_13;

    mercury__io__read_line_as_string_4_p_0(InputStream_8, &Result_13);
    switch (MR_tag((MR_Word) Result_13)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0), (MR_Word) (&mdbcomp__trace_counts_scalar_common_1[0]), ((MR_Box) (ProcLabelInContext_9)), ((MR_Box) (ProcCounts0_10)), STATE_VARIABLE_TraceCounts_0_24, &STATE_VARIABLE_TraceCounts_25);
        break;
      case (MR_Integer) 1:
        {
          MR_String Line_14 = ((MR_String) ((MR_hl_field(1, Result_13, 0))));
          MR_Word PathPort_15;
          MR_Integer LineNumber_16;
          MR_Integer ExecCount_17;
          MR_Integer NumTests_18;
          MR_Word Words_48;
          MR_Word PathPortPrime_53;
          MR_Integer LineNumberPrime_55;
          MR_Integer ExecCountPrime_56;
          MR_Integer NumTestsPrime_57;
          MR_String Word1_49;
          MR_String LineNumberStr_50;
          MR_Word Rest_51;
          MR_Word Var_60;
          MR_Word Port_52;

          Words_48 = mercury__string__words_1_f_0(Line_14);
          succeeded = (Words_48 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Word1_49 = ((MR_String) ((MR_hl_field(1, Words_48, 0))));
            Var_60 = ((MR_Word) ((MR_hl_field(1, Words_48, 1))));
            succeeded = (Var_60 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              LineNumberStr_50 = ((MR_String) ((MR_hl_field(1, Var_60, 0))));
              Rest_51 = ((MR_Word) ((MR_hl_field(1, Var_60, 1))));
              succeeded = mdbcomp__prim_data__string_to_trace_port_2_p_0(Word1_49, &Port_52);
              if (succeeded)
              {
                {
                  PathPortPrime_53 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, PathPortPrime_53, 0) = (MR_Box) ((MR_Unsigned) (Port_52));
                }
                succeeded = MR_TRUE;
              }
              else
              {
                MR_Word Path_54;
                MR_Integer Length_67;
                MR_String SubString_68;
                MR_String Var_70;
                MR_Integer Var_71;
                MR_Integer Var_72;
                MR_Integer Var_73;

                succeeded = mercury__string__prefix_2_p_0(Word1_49, (MR_String) "<");
                if (succeeded)
                {
                  Var_70 = (MR_String) ">";
                  succeeded = mercury__string__suffix_2_p_0(Word1_49, Var_70);
                  if (succeeded)
                  {
                    mercury__string__length_2_p_0(Word1_49, &Length_67);
                    Var_71 = (MR_Integer) 1;
                    Var_73 = (MR_Integer) 1;
                    Var_72 = (MR_Integer) ((MR_Unsigned) Length_67 - (MR_Unsigned) Var_73);
                    mercury__string__between_4_p_0(Word1_49, Var_71, Var_72, &SubString_68);
                    succeeded = mdbcomp__goal_path__rev_goal_path_from_string_2_p_0(SubString_68, &Path_54);
                    if (succeeded)
                    {
                      {
                        PathPortPrime_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, PathPortPrime_53, 0) = ((MR_Box) (Path_54));
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                }
              }
              if (succeeded)
              {
                succeeded = mercury__string__to_int_2_p_0(LineNumberStr_50, &LineNumberPrime_55);
                if (succeeded)
                {
                  if ((Rest_51 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    ExecCountPrime_56 = (MR_Integer) 0;
                    NumTestsPrime_57 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    MR_Word Var_80 = ((MR_Word) ((MR_hl_field(1, Rest_51, 1))));
                    MR_String Var_81 = ((MR_String) ((MR_hl_field(1, Rest_51, 0))));

                    if ((Var_80 == (MR_Word) ((MR_Unsigned) 0U)))
                    {
                      succeeded = mercury__string__to_int_2_p_0(Var_81, &ExecCountPrime_56);
                      if (succeeded)
                      {
                        NumTestsPrime_57 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                    }
                    else
                    {
                      MR_String NumTestsStr_75 = ((MR_String) ((MR_hl_field(1, Var_80, 0))));
                      MR_Word Var_78 = ((MR_Word) ((MR_hl_field(1, Var_80, 1))));

                      succeeded = (Var_78 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        succeeded = mercury__string__to_int_2_p_0(Var_81, &ExecCountPrime_56);
                        if (succeeded)
                          succeeded = mercury__string__to_int_2_p_0(NumTestsStr_75, &NumTestsPrime_57);
                      }
                    }
                  }
                }
              }
            }
          }
          if (succeeded)
          {
            PathPort_15 = PathPortPrime_53;
            LineNumber_16 = LineNumberPrime_55;
            ExecCount_17 = ExecCountPrime_56;
            NumTests_18 = NumTestsPrime_57;
            succeeded = MR_TRUE;
          }
          else
          {
            MR_String PortStr_58;
            MR_String PathStr_59;
            MR_Word Var_61;
            MR_Word Var_62;
            MR_String LineNumberStr_63;
            MR_Word Rest_64;
            MR_Word Port_65;
            MR_Word Path_66;
            MR_Integer Length_82;
            MR_String SubString_83;
            MR_String Var_84;
            MR_String Var_85;
            MR_Integer Var_86;
            MR_Integer Var_87;
            MR_Integer Var_88;

            succeeded = (Words_48 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              PortStr_58 = ((MR_String) ((MR_hl_field(1, Words_48, 0))));
              Var_61 = ((MR_Word) ((MR_hl_field(1, Words_48, 1))));
              succeeded = (Var_61 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                PathStr_59 = ((MR_String) ((MR_hl_field(1, Var_61, 0))));
                Var_62 = ((MR_Word) ((MR_hl_field(1, Var_61, 1))));
                succeeded = (Var_62 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  LineNumberStr_63 = ((MR_String) ((MR_hl_field(1, Var_62, 0))));
                  Rest_64 = ((MR_Word) ((MR_hl_field(1, Var_62, 1))));
                  succeeded = mdbcomp__prim_data__string_to_trace_port_2_p_0(PortStr_58, &Port_65);
                  if (succeeded)
                  {
                    Var_84 = (MR_String) "<";
                    succeeded = mercury__string__prefix_2_p_0(PathStr_59, Var_84);
                    if (succeeded)
                    {
                      Var_85 = (MR_String) ">";
                      succeeded = mercury__string__suffix_2_p_0(PathStr_59, Var_85);
                      if (succeeded)
                      {
                        mercury__string__length_2_p_0(PathStr_59, &Length_82);
                        Var_86 = (MR_Integer) 1;
                        Var_88 = (MR_Integer) 1;
                        Var_87 = (MR_Integer) ((MR_Unsigned) Length_82 - (MR_Unsigned) Var_88);
                        mercury__string__between_4_p_0(PathStr_59, Var_86, Var_87, &SubString_83);
                        succeeded = mdbcomp__goal_path__rev_goal_path_from_string_2_p_0(SubString_83, &Path_66);
                        if (succeeded)
                        {
                          {
                            PathPort_15 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(2, PathPort_15, 0) = (MR_Box) ((MR_Unsigned) (Port_65));
                            MR_hl_field(2, PathPort_15, 1) = ((MR_Box) (Path_66));
                          }
                          succeeded = mercury__string__to_int_2_p_0(LineNumberStr_63, &LineNumber_16);
                          if (succeeded)
                          {
                            if ((Rest_64 == (MR_Word) ((MR_Unsigned) 0U)))
                            {
                              ExecCount_17 = (MR_Integer) 0;
                              NumTests_18 = (MR_Integer) 1;
                              succeeded = MR_TRUE;
                            }
                            else
                            {
                              MR_Word Var_95 = ((MR_Word) ((MR_hl_field(1, Rest_64, 1))));
                              MR_String Var_96 = ((MR_String) ((MR_hl_field(1, Rest_64, 0))));

                              if ((Var_95 == (MR_Word) ((MR_Unsigned) 0U)))
                              {
                                succeeded = mercury__string__to_int_2_p_0(Var_96, &ExecCount_17);
                                if (succeeded)
                                {
                                  NumTests_18 = (MR_Integer) 1;
                                  succeeded = MR_TRUE;
                                }
                              }
                              else
                              {
                                MR_String NumTestsStr_90 = ((MR_String) ((MR_hl_field(1, Var_95, 0))));
                                MR_Word Var_93 = ((MR_Word) ((MR_hl_field(1, Var_95, 1))));

                                succeeded = (Var_93 == (MR_Word) ((MR_Unsigned) 0U));
                                if (succeeded)
                                {
                                  succeeded = mercury__string__to_int_2_p_0(Var_96, &ExecCount_17);
                                  if (succeeded)
                                    succeeded = mercury__string__to_int_2_p_0(NumTestsStr_90, &NumTests_18);
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
          if (succeeded)
          {
            MR_Word LineNoAndCount_19;
            MR_Word ProcCounts_20;
            MR_Word next_value_of_tscc_proc_2_input_1_InputStream_8;
            MR_Word next_value_of_tscc_proc_2_input_2_ProcLabelInContext_9;
            MR_Word next_value_of_tscc_proc_2_input_3_ProcCounts0_10;
            MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_TraceCounts_0_24;

            {
              LineNoAndCount_19 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, LineNoAndCount_19, 0) = ((MR_Box) (LineNumber_16));
              MR_hl_field(0, LineNoAndCount_19, 1) = ((MR_Box) (ExecCount_17));
              MR_hl_field(0, LineNoAndCount_19, 2) = ((MR_Box) (NumTests_18));
            }
            mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0), (MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0), ((MR_Box) (PathPort_15)), ((MR_Box) (LineNoAndCount_19)), ProcCounts0_10, &ProcCounts_20);
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_2_input_1_InputStream_8 = InputStream_8;
            next_value_of_tscc_proc_2_input_2_ProcLabelInContext_9 = ProcLabelInContext_9;
            next_value_of_tscc_proc_2_input_3_ProcCounts0_10 = ProcCounts_20;
            next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_TraceCounts_0_24 = STATE_VARIABLE_TraceCounts_0_24;
            tscc_proc_2_input_1_InputStream_8 = next_value_of_tscc_proc_2_input_1_InputStream_8;
            tscc_proc_2_input_2_ProcLabelInContext_9 = next_value_of_tscc_proc_2_input_2_ProcLabelInContext_9;
            tscc_proc_2_input_3_ProcCounts0_10 = next_value_of_tscc_proc_2_input_3_ProcCounts0_10;
            tscc_proc_2_input_4_STATE_VARIABLE_TraceCounts_0_24 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_TraceCounts_0_24;
            goto top_of_proc_2;
          }
          else
          {
            MR_Word CurModuleNameSym_21;
            MR_String CurFileName_22;
            MR_Word STATE_VARIABLE_TraceCounts_31_31;
            MR_Integer LineNumber_36;
            MR_Word next_value_of_tscc_proc_1_input_1_InputStream_10;
            MR_Integer next_value_of_tscc_proc_1_input_2_HeaderLineNumber_11;
            MR_String next_value_of_tscc_proc_1_input_3_HeaderLine_12;
            MR_Word next_value_of_tscc_proc_1_input_4_CurModuleNameSym_13;
            MR_String next_value_of_tscc_proc_1_input_5_CurFileName_14;
            MR_Word next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_TraceCounts_0_57;

            mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0), (MR_Word) (&mdbcomp__trace_counts_scalar_common_1[0]), ((MR_Box) (ProcLabelInContext_9)), ((MR_Box) (ProcCounts0_10)), STATE_VARIABLE_TraceCounts_0_24, &STATE_VARIABLE_TraceCounts_31_31);
            mercury__io__get_line_number_4_p_0(InputStream_8, &LineNumber_36);
            CurModuleNameSym_21 = ((MR_Word) ((MR_hl_field(0, ProcLabelInContext_9, 0))));
            CurFileName_22 = ((MR_String) ((MR_hl_field(0, ProcLabelInContext_9, 1))));
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_1_input_1_InputStream_10 = InputStream_8;
            next_value_of_tscc_proc_1_input_2_HeaderLineNumber_11 = LineNumber_36;
            next_value_of_tscc_proc_1_input_3_HeaderLine_12 = Line_14;
            next_value_of_tscc_proc_1_input_4_CurModuleNameSym_13 = CurModuleNameSym_21;
            next_value_of_tscc_proc_1_input_5_CurFileName_14 = CurFileName_22;
            next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_TraceCounts_0_57 = STATE_VARIABLE_TraceCounts_31_31;
            tscc_proc_1_input_1_InputStream_10 = next_value_of_tscc_proc_1_input_1_InputStream_10;
            tscc_proc_1_input_2_HeaderLineNumber_11 = next_value_of_tscc_proc_1_input_2_HeaderLineNumber_11;
            tscc_proc_1_input_3_HeaderLine_12 = next_value_of_tscc_proc_1_input_3_HeaderLine_12;
            tscc_proc_1_input_4_CurModuleNameSym_13 = next_value_of_tscc_proc_1_input_4_CurModuleNameSym_13;
            tscc_proc_1_input_5_CurFileName_14 = next_value_of_tscc_proc_1_input_5_CurFileName_14;
            tscc_proc_1_input_6_STATE_VARIABLE_TraceCounts_0_57 = next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_TraceCounts_0_57;
            goto top_of_proc_1;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Error_23 = ((MR_Word) ((MR_hl_field(2, Result_13, 0))));

          {
            mercury__exception__throw_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (Error_23)));
            return;
          }
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_TraceCounts_58 = STATE_VARIABLE_TraceCounts_25;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_TraceCounts_58 = tscc_output_1_STATE_VARIABLE_TraceCounts_58;
  return;
}

static void MR_CALL 
mdbcomp__trace_counts__read_proc_trace_counts_2_7_p_0(
  MR_Word tscc_proc_2_input_1_InputStream_8,
  MR_Word tscc_proc_2_input_2_ProcLabelInContext_9,
  MR_Word tscc_proc_2_input_3_ProcCounts0_10,
  MR_Word tscc_proc_2_input_4_STATE_VARIABLE_TraceCounts_0_24,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_TraceCounts_58)
{
  MR_Word tscc_proc_1_input_1_InputStream_10;
  MR_Integer tscc_proc_1_input_2_HeaderLineNumber_11;
  MR_String tscc_proc_1_input_3_HeaderLine_12;
  MR_Word tscc_proc_1_input_4_CurModuleNameSym_13;
  MR_String tscc_proc_1_input_5_CurFileName_14;
  MR_Word tscc_proc_1_input_6_STATE_VARIABLE_TraceCounts_0_57;
  MR_Word tscc_output_1_STATE_VARIABLE_TraceCounts_58;

  // The code for TSCC PROC 2: pred mdbcomp.trace_counts.read_proc_trace_counts_2/7-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred mdbcomp.trace_counts.read_proc_trace_counts/9-0
  ;
  // proc 2 in TSCC: pred mdbcomp.trace_counts.read_proc_trace_counts_2/7-0
  ;
  ;
  goto top_of_proc_2;
top_of_proc_1:;
  {
    MR_Word InputStream_10 = tscc_proc_1_input_1_InputStream_10;
    MR_Integer HeaderLineNumber_11 = tscc_proc_1_input_2_HeaderLineNumber_11;
    MR_String HeaderLine_12 = tscc_proc_1_input_3_HeaderLine_12;
    MR_Word CurModuleNameSym_13 = tscc_proc_1_input_4_CurModuleNameSym_13;
    MR_String CurFileName_14 = tscc_proc_1_input_5_CurFileName_14;
    MR_Word STATE_VARIABLE_TraceCounts_0_57 = tscc_proc_1_input_6_STATE_VARIABLE_TraceCounts_0_57;
    MR_Word STATE_VARIABLE_TraceCounts_58;
    MR_bool succeeded;
    MR_Word TokenList_17;
    MR_Integer Var_61;
    MR_Word Var_62;
    MR_Word Var_18;
    MR_String TokenName_19;
    MR_Word TokenListRest_21;
    MR_Word Var_65;

    Var_61 = mercury__string__length_1_f_0(HeaderLine_12);
    {
      Var_62 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_62, 0) = ((MR_Box) (HeaderLineNumber_11));
      MR_hl_field(0, Var_62, 1) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_62, 2) = ((MR_Box) ((MR_Integer) 0));
    }
    mercury__mercury_term_lexer__string_get_token_list_max_5_p_0(HeaderLine_12, Var_61, &TokenList_17, Var_62, &Var_18);
    succeeded = (TokenList_17 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_65 = ((MR_Word) ((MR_hl_field(1, TokenList_17, 0))));
      TokenListRest_21 = ((MR_Word) ((MR_hl_field(1, TokenList_17, 2))));
      succeeded = ((MR_tag((MR_Word) Var_65)) == (MR_Integer) 1);
      if (succeeded)
        TokenName_19 = ((MR_String) ((MR_hl_field(1, Var_65, 0))));
    }
    if (succeeded)
    {
      MR_String NextModuleName_22;
      MR_Word Var_66;
      MR_Word Var_67;

      succeeded = (strcmp(TokenName_19, (MR_String) "module") == 0);
      if (succeeded)
      {
        succeeded = (TokenListRest_21 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_66 = ((MR_Word) ((MR_hl_field(1, TokenListRest_21, 0))));
          Var_67 = ((MR_Word) ((MR_hl_field(1, TokenListRest_21, 2))));
          succeeded = (Var_67 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) Var_66)) == (MR_Integer) 1);
            if (succeeded)
              NextModuleName_22 = ((MR_String) ((MR_hl_field(1, Var_66, 0))));
          }
        }
      }
      if (succeeded)
      {
        MR_Word NextModuleNameSym_24;
        MR_Word Result_25;

        NextModuleNameSym_24 = mdbcomp__sym_name__string_to_sym_name_1_f_0(NextModuleName_22);
        mercury__io__read_line_as_string_4_p_0(InputStream_10, &Result_25);
        switch (MR_tag((MR_Word) Result_25)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_TraceCounts_58 = STATE_VARIABLE_TraceCounts_0_57;
            break;
          case (MR_Integer) 1:
            {
              MR_String Line_26 = ((MR_String) ((MR_hl_field(1, Result_25, 0))));
              MR_Integer LineNumber_27;
              MR_Word next_value_of_tscc_proc_1_input_1_InputStream_10;
              MR_Integer next_value_of_tscc_proc_1_input_2_HeaderLineNumber_11;
              MR_String next_value_of_tscc_proc_1_input_3_HeaderLine_12;
              MR_Word next_value_of_tscc_proc_1_input_4_CurModuleNameSym_13;
              MR_String next_value_of_tscc_proc_1_input_5_CurFileName_14;
              MR_Word next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_TraceCounts_0_57;

              mercury__io__get_line_number_4_p_0(InputStream_10, &LineNumber_27);
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_1_input_1_InputStream_10 = InputStream_10;
              next_value_of_tscc_proc_1_input_2_HeaderLineNumber_11 = LineNumber_27;
              next_value_of_tscc_proc_1_input_3_HeaderLine_12 = Line_26;
              next_value_of_tscc_proc_1_input_4_CurModuleNameSym_13 = NextModuleNameSym_24;
              next_value_of_tscc_proc_1_input_5_CurFileName_14 = CurFileName_14;
              next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_TraceCounts_0_57 = STATE_VARIABLE_TraceCounts_0_57;
              tscc_proc_1_input_1_InputStream_10 = next_value_of_tscc_proc_1_input_1_InputStream_10;
              tscc_proc_1_input_2_HeaderLineNumber_11 = next_value_of_tscc_proc_1_input_2_HeaderLineNumber_11;
              tscc_proc_1_input_3_HeaderLine_12 = next_value_of_tscc_proc_1_input_3_HeaderLine_12;
              tscc_proc_1_input_4_CurModuleNameSym_13 = next_value_of_tscc_proc_1_input_4_CurModuleNameSym_13;
              tscc_proc_1_input_5_CurFileName_14 = next_value_of_tscc_proc_1_input_5_CurFileName_14;
              tscc_proc_1_input_6_STATE_VARIABLE_TraceCounts_0_57 = next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_TraceCounts_0_57;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Error_28 = ((MR_Word) ((MR_hl_field(2, Result_25, 0))));

              {
                mercury__exception__throw_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (Error_28)));
                return;
              }
            }
            break;
        }
      }
      else
      {
        MR_String NextFileName_29;
        MR_Word Var_72;
        MR_Word Var_73;

        succeeded = (strcmp(TokenName_19, (MR_String) "file") == 0);
        if (succeeded)
        {
          succeeded = (TokenListRest_21 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_72 = ((MR_Word) ((MR_hl_field(1, TokenListRest_21, 0))));
            Var_73 = ((MR_Word) ((MR_hl_field(1, TokenListRest_21, 2))));
            succeeded = (Var_73 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) Var_72)) == (MR_Integer) 1);
              if (succeeded)
                NextFileName_29 = ((MR_String) ((MR_hl_field(1, Var_72, 0))));
            }
          }
        }
        if (succeeded)
        {
          MR_Word Result_124;

          mercury__io__read_line_as_string_4_p_0(InputStream_10, &Result_124);
          switch (MR_tag((MR_Word) Result_124)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              STATE_VARIABLE_TraceCounts_58 = STATE_VARIABLE_TraceCounts_0_57;
              break;
            case (MR_Integer) 1:
              {
                MR_String Line_118 = ((MR_String) ((MR_hl_field(1, Result_124, 0))));
                MR_Integer LineNumber_119;
                MR_Word next_value_of_tscc_proc_1_input_1_InputStream_10;
                MR_Integer next_value_of_tscc_proc_1_input_2_HeaderLineNumber_11;
                MR_String next_value_of_tscc_proc_1_input_3_HeaderLine_12;
                MR_Word next_value_of_tscc_proc_1_input_4_CurModuleNameSym_13;
                MR_String next_value_of_tscc_proc_1_input_5_CurFileName_14;
                MR_Word next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_TraceCounts_0_57;

                mercury__io__get_line_number_4_p_0(InputStream_10, &LineNumber_119);
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_1_input_1_InputStream_10 = InputStream_10;
                next_value_of_tscc_proc_1_input_2_HeaderLineNumber_11 = LineNumber_119;
                next_value_of_tscc_proc_1_input_3_HeaderLine_12 = Line_118;
                next_value_of_tscc_proc_1_input_4_CurModuleNameSym_13 = CurModuleNameSym_13;
                next_value_of_tscc_proc_1_input_5_CurFileName_14 = NextFileName_29;
                next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_TraceCounts_0_57 = STATE_VARIABLE_TraceCounts_0_57;
                tscc_proc_1_input_1_InputStream_10 = next_value_of_tscc_proc_1_input_1_InputStream_10;
                tscc_proc_1_input_2_HeaderLineNumber_11 = next_value_of_tscc_proc_1_input_2_HeaderLineNumber_11;
                tscc_proc_1_input_3_HeaderLine_12 = next_value_of_tscc_proc_1_input_3_HeaderLine_12;
                tscc_proc_1_input_4_CurModuleNameSym_13 = next_value_of_tscc_proc_1_input_4_CurModuleNameSym_13;
                tscc_proc_1_input_5_CurFileName_14 = next_value_of_tscc_proc_1_input_5_CurFileName_14;
                tscc_proc_1_input_6_STATE_VARIABLE_TraceCounts_0_57 = next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_TraceCounts_0_57;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Error_120 = ((MR_Word) ((MR_hl_field(2, Result_124, 0))));

                {
                  mercury__exception__throw_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (Error_120)));
                  return;
                }
              }
              break;
          }
        }
        else
        {
          MR_Word ProcLabel_39;
          MR_Word Var_158;
          MR_Word Var_160;
          MR_Word Var_161;
          MR_Word Var_163;
          MR_String Var_164;
          MR_Word Var_165;
          MR_Word Var_167;
          MR_Integer lo_0;
          MR_Integer hi_1;
          MR_Integer mid_2;
          MR_Integer result_3;

          succeeded = (TokenListRest_21 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_160 = ((MR_Word) ((MR_hl_field(1, TokenListRest_21, 0))));
            Var_158 = ((MR_Word) ((MR_hl_field(1, TokenListRest_21, 2))));
            succeeded = (Var_158 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_163 = ((MR_Word) ((MR_hl_field(1, Var_158, 0))));
              Var_161 = ((MR_Word) ((MR_hl_field(1, Var_158, 2))));
              succeeded = ((MR_tag((MR_Word) Var_160)) == (MR_Integer) 1);
              if (succeeded)
              {
                Var_164 = ((MR_String) ((MR_hl_field(1, Var_160, 0))));
                succeeded = (Var_161 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_167 = ((MR_Word) ((MR_hl_field(1, Var_161, 0))));
                  Var_165 = ((MR_Word) ((MR_hl_field(1, Var_161, 2))));
                  // binary string jump switch
                  ;
                  lo_0 = (MR_Integer) 0;
                  hi_1 = (MR_Integer) 3;
                  do
                  {
                    mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
                    result_3 = MR_strcmp(TokenName_19, ((&mdbcomp__trace_counts_vector_common_9[0 + mid_2]))->mdbcomp__trace_counts__vector_common_type_9_0__vct_9_f_0);
                    if ((result_3 == (MR_Integer) 0))
                    {
                      switch (((&mdbcomp__trace_counts_vector_common_9[0 + mid_2]))->mdbcomp__trace_counts__vector_common_type_9_0__vct_9_f_1) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            // case "fproc"
                            ;
                            {
                              MR_Word Var_88;
                              MR_Integer Arity_131;
                              MR_Integer Mode_132;

                              succeeded = (Var_165 == (MR_Word) ((MR_Unsigned) 0U));
                              if (succeeded)
                              {
                                succeeded = mdbcomp__trace_counts__decimal_token_to_int_2_p_0(Var_163, &Arity_131);
                                if (succeeded)
                                {
                                  succeeded = mdbcomp__trace_counts__decimal_token_to_int_2_p_0(Var_167, &Mode_132);
                                  if (succeeded)
                                  {
                                    Var_88 = (MR_Integer) 1;
                                    {
                                      ProcLabel_39 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                                      MR_hl_field(0, ProcLabel_39, 0) = ((MR_Box) (CurModuleNameSym_13));
                                      MR_hl_field(0, ProcLabel_39, 1) = (MR_Box) ((MR_Unsigned) (Var_88));
                                      MR_hl_field(0, ProcLabel_39, 2) = ((MR_Box) (CurModuleNameSym_13));
                                      MR_hl_field(0, ProcLabel_39, 3) = ((MR_Box) (Var_164));
                                      MR_hl_field(0, ProcLabel_39, 4) = ((MR_Box) (Arity_131));
                                      MR_hl_field(0, ProcLabel_39, 5) = ((MR_Box) (Mode_132));
                                    }
                                    succeeded = MR_TRUE;
                                  }
                                }
                              }
                            }
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            // case "fprocdecl"
                            ;
                            {
                              MR_Word Var_102;
                              MR_Word Var_103;
                              MR_String Name_138;
                              MR_Word ModeToken_140;
                              MR_Integer Arity_141;
                              MR_Integer Mode_142;
                              MR_Word DeclModuleNameSym_144;

                              succeeded = ((MR_tag((MR_Word) Var_163)) == (MR_Integer) 1);
                              if (succeeded)
                              {
                                Name_138 = ((MR_String) ((MR_hl_field(1, Var_163, 0))));
                                succeeded = (Var_165 != (MR_Word) ((MR_Unsigned) 0U));
                                if (succeeded)
                                {
                                  ModeToken_140 = ((MR_Word) ((MR_hl_field(1, Var_165, 0))));
                                  Var_102 = ((MR_Word) ((MR_hl_field(1, Var_165, 2))));
                                  succeeded = (Var_102 == (MR_Word) ((MR_Unsigned) 0U));
                                  if (succeeded)
                                  {
                                    succeeded = mdbcomp__trace_counts__decimal_token_to_int_2_p_0(Var_167, &Arity_141);
                                    if (succeeded)
                                    {
                                      succeeded = mdbcomp__trace_counts__decimal_token_to_int_2_p_0(ModeToken_140, &Mode_142);
                                      if (succeeded)
                                      {
                                        DeclModuleNameSym_144 = mdbcomp__sym_name__string_to_sym_name_1_f_0(Var_164);
                                        Var_103 = (MR_Integer) 1;
                                        {
                                          ProcLabel_39 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                                          MR_hl_field(0, ProcLabel_39, 0) = ((MR_Box) (CurModuleNameSym_13));
                                          MR_hl_field(0, ProcLabel_39, 1) = (MR_Box) ((MR_Unsigned) (Var_103));
                                          MR_hl_field(0, ProcLabel_39, 2) = ((MR_Box) (DeclModuleNameSym_144));
                                          MR_hl_field(0, ProcLabel_39, 3) = ((MR_Box) (Name_138));
                                          MR_hl_field(0, ProcLabel_39, 4) = ((MR_Box) (Arity_141));
                                          MR_hl_field(0, ProcLabel_39, 5) = ((MR_Box) (Mode_142));
                                        }
                                        succeeded = MR_TRUE;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                          break;
                        case (MR_Integer) 2:
                          {
                            // case "pproc"
                            ;
                            {
                              MR_Integer Arity_37;
                              MR_Integer Mode_38;
                              MR_Word Var_82;

                              succeeded = (Var_165 == (MR_Word) ((MR_Unsigned) 0U));
                              if (succeeded)
                              {
                                succeeded = mdbcomp__trace_counts__decimal_token_to_int_2_p_0(Var_163, &Arity_37);
                                if (succeeded)
                                {
                                  succeeded = mdbcomp__trace_counts__decimal_token_to_int_2_p_0(Var_167, &Mode_38);
                                  if (succeeded)
                                  {
                                    Var_82 = (MR_Integer) 0;
                                    {
                                      ProcLabel_39 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                                      MR_hl_field(0, ProcLabel_39, 0) = ((MR_Box) (CurModuleNameSym_13));
                                      MR_hl_field(0, ProcLabel_39, 1) = (MR_Box) ((MR_Unsigned) (Var_82));
                                      MR_hl_field(0, ProcLabel_39, 2) = ((MR_Box) (CurModuleNameSym_13));
                                      MR_hl_field(0, ProcLabel_39, 3) = ((MR_Box) (Var_164));
                                      MR_hl_field(0, ProcLabel_39, 4) = ((MR_Box) (Arity_37));
                                      MR_hl_field(0, ProcLabel_39, 5) = ((MR_Box) (Mode_38));
                                    }
                                    succeeded = MR_TRUE;
                                  }
                                }
                              }
                            }
                          }
                          break;
                        case (MR_Integer) 3:
                          {
                            // case "pprocdecl"
                            ;
                            {
                              MR_Word DeclModuleNameSym_48;
                              MR_Word Var_95;
                              MR_Word Var_96;
                              MR_String Name_133;
                              MR_Word ModeToken_135;
                              MR_Integer Arity_136;
                              MR_Integer Mode_137;

                              succeeded = ((MR_tag((MR_Word) Var_163)) == (MR_Integer) 1);
                              if (succeeded)
                              {
                                Name_133 = ((MR_String) ((MR_hl_field(1, Var_163, 0))));
                                succeeded = (Var_165 != (MR_Word) ((MR_Unsigned) 0U));
                                if (succeeded)
                                {
                                  ModeToken_135 = ((MR_Word) ((MR_hl_field(1, Var_165, 0))));
                                  Var_95 = ((MR_Word) ((MR_hl_field(1, Var_165, 2))));
                                  succeeded = (Var_95 == (MR_Word) ((MR_Unsigned) 0U));
                                  if (succeeded)
                                  {
                                    succeeded = mdbcomp__trace_counts__decimal_token_to_int_2_p_0(Var_167, &Arity_136);
                                    if (succeeded)
                                    {
                                      succeeded = mdbcomp__trace_counts__decimal_token_to_int_2_p_0(ModeToken_135, &Mode_137);
                                      if (succeeded)
                                      {
                                        DeclModuleNameSym_48 = mdbcomp__sym_name__string_to_sym_name_1_f_0(Var_164);
                                        Var_96 = (MR_Integer) 0;
                                        {
                                          ProcLabel_39 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                                          MR_hl_field(0, ProcLabel_39, 0) = ((MR_Box) (CurModuleNameSym_13));
                                          MR_hl_field(0, ProcLabel_39, 1) = (MR_Box) ((MR_Unsigned) (Var_96));
                                          MR_hl_field(0, ProcLabel_39, 2) = ((MR_Box) (DeclModuleNameSym_48));
                                          MR_hl_field(0, ProcLabel_39, 3) = ((MR_Box) (Name_133));
                                          MR_hl_field(0, ProcLabel_39, 4) = ((MR_Box) (Arity_136));
                                          MR_hl_field(0, ProcLabel_39, 5) = ((MR_Box) (Mode_137));
                                        }
                                        succeeded = MR_TRUE;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                          break;
                      }
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
          }
          if (succeeded)
          {
            MR_Word ProcLabelInContext_53;
            MR_Word StartCounts_55;
            MR_Word STATE_VARIABLE_TraceCounts_105_105;
            MR_Word ProbeCounts_54;
            MR_Word STATE_VARIABLE_TraceCounts_104_104;
            MR_Box conv0_ProbeCounts_54;
            MR_Word next_value_of_tscc_proc_2_input_1_InputStream_8;
            MR_Word next_value_of_tscc_proc_2_input_2_ProcLabelInContext_9;
            MR_Word next_value_of_tscc_proc_2_input_3_ProcCounts0_10;
            MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_TraceCounts_0_24;

            {
              ProcLabelInContext_53 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, ProcLabelInContext_53, 0) = ((MR_Box) (CurModuleNameSym_13));
              MR_hl_field(0, ProcLabelInContext_53, 1) = ((MR_Box) (CurFileName_14));
              MR_hl_field(0, ProcLabelInContext_53, 2) = ((MR_Box) (ProcLabel_39));
            }
            succeeded = mercury__map__remove_4_p_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0), (MR_Word) (&mdbcomp__trace_counts_scalar_common_1[0]), ((MR_Box) (ProcLabelInContext_53)), &conv0_ProbeCounts_54, STATE_VARIABLE_TraceCounts_0_57, &STATE_VARIABLE_TraceCounts_104_104);
            if (succeeded)
            {
              ProbeCounts_54 = ((MR_Word) (conv0_ProbeCounts_54));
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              STATE_VARIABLE_TraceCounts_105_105 = STATE_VARIABLE_TraceCounts_104_104;
              StartCounts_55 = ProbeCounts_54;
            }
            else
            {
              StartCounts_55 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0), (MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0));
              STATE_VARIABLE_TraceCounts_105_105 = STATE_VARIABLE_TraceCounts_0_57;
            }
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_2_input_1_InputStream_8 = InputStream_10;
            next_value_of_tscc_proc_2_input_2_ProcLabelInContext_9 = ProcLabelInContext_53;
            next_value_of_tscc_proc_2_input_3_ProcCounts0_10 = StartCounts_55;
            next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_TraceCounts_0_24 = STATE_VARIABLE_TraceCounts_105_105;
            tscc_proc_2_input_1_InputStream_8 = next_value_of_tscc_proc_2_input_1_InputStream_8;
            tscc_proc_2_input_2_ProcLabelInContext_9 = next_value_of_tscc_proc_2_input_2_ProcLabelInContext_9;
            tscc_proc_2_input_3_ProcCounts0_10 = next_value_of_tscc_proc_2_input_3_ProcCounts0_10;
            tscc_proc_2_input_4_STATE_VARIABLE_TraceCounts_0_24 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_TraceCounts_0_24;
            goto top_of_proc_2;
          }
          else
          {
            MR_String Message_56;
            MR_Word Var_112;
            MR_String Var_169;
            MR_String Var_176;

            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mdbcomp__trace_counts_scalar_common_5[7]), HeaderLineNumber_11, &Var_169);
            Var_176 = mercury__string__f_43_43_2_f_0(Var_169, (MR_String) " of execution trace");
            Message_56 = mercury__string__f_43_43_2_f_0((MR_String) "parse error on line ", Var_176);
            Var_112 = (MR_Word) (Message_56);
            {
              mercury__exception__throw_1_p_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_syntax_error_0), ((MR_Box) (Var_112)));
              return;
            }
          }
        }
      }
    }
    else
    {
      MR_Word Var_117;
      MR_String Message_149;
      MR_String Var_179;
      MR_String Var_186;

      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mdbcomp__trace_counts_scalar_common_5[7]), HeaderLineNumber_11, &Var_179);
      Var_186 = mercury__string__f_43_43_2_f_0(Var_179, (MR_String) " of execution trace");
      Message_149 = mercury__string__f_43_43_2_f_0((MR_String) "parse error on line ", Var_186);
      Var_117 = (MR_Word) (Message_149);
      {
        mercury__exception__throw_1_p_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_syntax_error_0), ((MR_Box) (Var_117)));
        return;
      }
    }
    tscc_output_1_STATE_VARIABLE_TraceCounts_58 = STATE_VARIABLE_TraceCounts_58;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word InputStream_8 = tscc_proc_2_input_1_InputStream_8;
    MR_Word ProcLabelInContext_9 = tscc_proc_2_input_2_ProcLabelInContext_9;
    MR_Word ProcCounts0_10 = tscc_proc_2_input_3_ProcCounts0_10;
    MR_Word STATE_VARIABLE_TraceCounts_0_24 = tscc_proc_2_input_4_STATE_VARIABLE_TraceCounts_0_24;
    MR_Word STATE_VARIABLE_TraceCounts_25;
    MR_bool succeeded;
    MR_Word Result_13;

    mercury__io__read_line_as_string_4_p_0(InputStream_8, &Result_13);
    switch (MR_tag((MR_Word) Result_13)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0), (MR_Word) (&mdbcomp__trace_counts_scalar_common_1[0]), ((MR_Box) (ProcLabelInContext_9)), ((MR_Box) (ProcCounts0_10)), STATE_VARIABLE_TraceCounts_0_24, &STATE_VARIABLE_TraceCounts_25);
        break;
      case (MR_Integer) 1:
        {
          MR_String Line_14 = ((MR_String) ((MR_hl_field(1, Result_13, 0))));
          MR_Word PathPort_15;
          MR_Integer LineNumber_16;
          MR_Integer ExecCount_17;
          MR_Integer NumTests_18;
          MR_Word Words_48;
          MR_Word PathPortPrime_53;
          MR_Integer LineNumberPrime_55;
          MR_Integer ExecCountPrime_56;
          MR_Integer NumTestsPrime_57;
          MR_String Word1_49;
          MR_String LineNumberStr_50;
          MR_Word Rest_51;
          MR_Word Var_60;
          MR_Word Port_52;

          Words_48 = mercury__string__words_1_f_0(Line_14);
          succeeded = (Words_48 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Word1_49 = ((MR_String) ((MR_hl_field(1, Words_48, 0))));
            Var_60 = ((MR_Word) ((MR_hl_field(1, Words_48, 1))));
            succeeded = (Var_60 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              LineNumberStr_50 = ((MR_String) ((MR_hl_field(1, Var_60, 0))));
              Rest_51 = ((MR_Word) ((MR_hl_field(1, Var_60, 1))));
              succeeded = mdbcomp__prim_data__string_to_trace_port_2_p_0(Word1_49, &Port_52);
              if (succeeded)
              {
                {
                  PathPortPrime_53 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, PathPortPrime_53, 0) = (MR_Box) ((MR_Unsigned) (Port_52));
                }
                succeeded = MR_TRUE;
              }
              else
              {
                MR_Word Path_54;
                MR_Integer Length_67;
                MR_String SubString_68;
                MR_String Var_70;
                MR_Integer Var_71;
                MR_Integer Var_72;
                MR_Integer Var_73;

                succeeded = mercury__string__prefix_2_p_0(Word1_49, (MR_String) "<");
                if (succeeded)
                {
                  Var_70 = (MR_String) ">";
                  succeeded = mercury__string__suffix_2_p_0(Word1_49, Var_70);
                  if (succeeded)
                  {
                    mercury__string__length_2_p_0(Word1_49, &Length_67);
                    Var_71 = (MR_Integer) 1;
                    Var_73 = (MR_Integer) 1;
                    Var_72 = (MR_Integer) ((MR_Unsigned) Length_67 - (MR_Unsigned) Var_73);
                    mercury__string__between_4_p_0(Word1_49, Var_71, Var_72, &SubString_68);
                    succeeded = mdbcomp__goal_path__rev_goal_path_from_string_2_p_0(SubString_68, &Path_54);
                    if (succeeded)
                    {
                      {
                        PathPortPrime_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, PathPortPrime_53, 0) = ((MR_Box) (Path_54));
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                }
              }
              if (succeeded)
              {
                succeeded = mercury__string__to_int_2_p_0(LineNumberStr_50, &LineNumberPrime_55);
                if (succeeded)
                {
                  if ((Rest_51 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    ExecCountPrime_56 = (MR_Integer) 0;
                    NumTestsPrime_57 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    MR_Word Var_80 = ((MR_Word) ((MR_hl_field(1, Rest_51, 1))));
                    MR_String Var_81 = ((MR_String) ((MR_hl_field(1, Rest_51, 0))));

                    if ((Var_80 == (MR_Word) ((MR_Unsigned) 0U)))
                    {
                      succeeded = mercury__string__to_int_2_p_0(Var_81, &ExecCountPrime_56);
                      if (succeeded)
                      {
                        NumTestsPrime_57 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                    }
                    else
                    {
                      MR_String NumTestsStr_75 = ((MR_String) ((MR_hl_field(1, Var_80, 0))));
                      MR_Word Var_78 = ((MR_Word) ((MR_hl_field(1, Var_80, 1))));

                      succeeded = (Var_78 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        succeeded = mercury__string__to_int_2_p_0(Var_81, &ExecCountPrime_56);
                        if (succeeded)
                          succeeded = mercury__string__to_int_2_p_0(NumTestsStr_75, &NumTestsPrime_57);
                      }
                    }
                  }
                }
              }
            }
          }
          if (succeeded)
          {
            PathPort_15 = PathPortPrime_53;
            LineNumber_16 = LineNumberPrime_55;
            ExecCount_17 = ExecCountPrime_56;
            NumTests_18 = NumTestsPrime_57;
            succeeded = MR_TRUE;
          }
          else
          {
            MR_String PortStr_58;
            MR_String PathStr_59;
            MR_Word Var_61;
            MR_Word Var_62;
            MR_String LineNumberStr_63;
            MR_Word Rest_64;
            MR_Word Port_65;
            MR_Word Path_66;
            MR_Integer Length_82;
            MR_String SubString_83;
            MR_String Var_84;
            MR_String Var_85;
            MR_Integer Var_86;
            MR_Integer Var_87;
            MR_Integer Var_88;

            succeeded = (Words_48 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              PortStr_58 = ((MR_String) ((MR_hl_field(1, Words_48, 0))));
              Var_61 = ((MR_Word) ((MR_hl_field(1, Words_48, 1))));
              succeeded = (Var_61 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                PathStr_59 = ((MR_String) ((MR_hl_field(1, Var_61, 0))));
                Var_62 = ((MR_Word) ((MR_hl_field(1, Var_61, 1))));
                succeeded = (Var_62 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  LineNumberStr_63 = ((MR_String) ((MR_hl_field(1, Var_62, 0))));
                  Rest_64 = ((MR_Word) ((MR_hl_field(1, Var_62, 1))));
                  succeeded = mdbcomp__prim_data__string_to_trace_port_2_p_0(PortStr_58, &Port_65);
                  if (succeeded)
                  {
                    Var_84 = (MR_String) "<";
                    succeeded = mercury__string__prefix_2_p_0(PathStr_59, Var_84);
                    if (succeeded)
                    {
                      Var_85 = (MR_String) ">";
                      succeeded = mercury__string__suffix_2_p_0(PathStr_59, Var_85);
                      if (succeeded)
                      {
                        mercury__string__length_2_p_0(PathStr_59, &Length_82);
                        Var_86 = (MR_Integer) 1;
                        Var_88 = (MR_Integer) 1;
                        Var_87 = (MR_Integer) ((MR_Unsigned) Length_82 - (MR_Unsigned) Var_88);
                        mercury__string__between_4_p_0(PathStr_59, Var_86, Var_87, &SubString_83);
                        succeeded = mdbcomp__goal_path__rev_goal_path_from_string_2_p_0(SubString_83, &Path_66);
                        if (succeeded)
                        {
                          {
                            PathPort_15 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(2, PathPort_15, 0) = (MR_Box) ((MR_Unsigned) (Port_65));
                            MR_hl_field(2, PathPort_15, 1) = ((MR_Box) (Path_66));
                          }
                          succeeded = mercury__string__to_int_2_p_0(LineNumberStr_63, &LineNumber_16);
                          if (succeeded)
                          {
                            if ((Rest_64 == (MR_Word) ((MR_Unsigned) 0U)))
                            {
                              ExecCount_17 = (MR_Integer) 0;
                              NumTests_18 = (MR_Integer) 1;
                              succeeded = MR_TRUE;
                            }
                            else
                            {
                              MR_Word Var_95 = ((MR_Word) ((MR_hl_field(1, Rest_64, 1))));
                              MR_String Var_96 = ((MR_String) ((MR_hl_field(1, Rest_64, 0))));

                              if ((Var_95 == (MR_Word) ((MR_Unsigned) 0U)))
                              {
                                succeeded = mercury__string__to_int_2_p_0(Var_96, &ExecCount_17);
                                if (succeeded)
                                {
                                  NumTests_18 = (MR_Integer) 1;
                                  succeeded = MR_TRUE;
                                }
                              }
                              else
                              {
                                MR_String NumTestsStr_90 = ((MR_String) ((MR_hl_field(1, Var_95, 0))));
                                MR_Word Var_93 = ((MR_Word) ((MR_hl_field(1, Var_95, 1))));

                                succeeded = (Var_93 == (MR_Word) ((MR_Unsigned) 0U));
                                if (succeeded)
                                {
                                  succeeded = mercury__string__to_int_2_p_0(Var_96, &ExecCount_17);
                                  if (succeeded)
                                    succeeded = mercury__string__to_int_2_p_0(NumTestsStr_90, &NumTests_18);
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
          if (succeeded)
          {
            MR_Word LineNoAndCount_19;
            MR_Word ProcCounts_20;
            MR_Word next_value_of_tscc_proc_2_input_1_InputStream_8;
            MR_Word next_value_of_tscc_proc_2_input_2_ProcLabelInContext_9;
            MR_Word next_value_of_tscc_proc_2_input_3_ProcCounts0_10;
            MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_TraceCounts_0_24;

            {
              LineNoAndCount_19 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, LineNoAndCount_19, 0) = ((MR_Box) (LineNumber_16));
              MR_hl_field(0, LineNoAndCount_19, 1) = ((MR_Box) (ExecCount_17));
              MR_hl_field(0, LineNoAndCount_19, 2) = ((MR_Box) (NumTests_18));
            }
            mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0), (MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0), ((MR_Box) (PathPort_15)), ((MR_Box) (LineNoAndCount_19)), ProcCounts0_10, &ProcCounts_20);
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_2_input_1_InputStream_8 = InputStream_8;
            next_value_of_tscc_proc_2_input_2_ProcLabelInContext_9 = ProcLabelInContext_9;
            next_value_of_tscc_proc_2_input_3_ProcCounts0_10 = ProcCounts_20;
            next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_TraceCounts_0_24 = STATE_VARIABLE_TraceCounts_0_24;
            tscc_proc_2_input_1_InputStream_8 = next_value_of_tscc_proc_2_input_1_InputStream_8;
            tscc_proc_2_input_2_ProcLabelInContext_9 = next_value_of_tscc_proc_2_input_2_ProcLabelInContext_9;
            tscc_proc_2_input_3_ProcCounts0_10 = next_value_of_tscc_proc_2_input_3_ProcCounts0_10;
            tscc_proc_2_input_4_STATE_VARIABLE_TraceCounts_0_24 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_TraceCounts_0_24;
            goto top_of_proc_2;
          }
          else
          {
            MR_Word CurModuleNameSym_21;
            MR_String CurFileName_22;
            MR_Word STATE_VARIABLE_TraceCounts_31_31;
            MR_Integer LineNumber_36;
            MR_Word next_value_of_tscc_proc_1_input_1_InputStream_10;
            MR_Integer next_value_of_tscc_proc_1_input_2_HeaderLineNumber_11;
            MR_String next_value_of_tscc_proc_1_input_3_HeaderLine_12;
            MR_Word next_value_of_tscc_proc_1_input_4_CurModuleNameSym_13;
            MR_String next_value_of_tscc_proc_1_input_5_CurFileName_14;
            MR_Word next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_TraceCounts_0_57;

            mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0), (MR_Word) (&mdbcomp__trace_counts_scalar_common_1[0]), ((MR_Box) (ProcLabelInContext_9)), ((MR_Box) (ProcCounts0_10)), STATE_VARIABLE_TraceCounts_0_24, &STATE_VARIABLE_TraceCounts_31_31);
            mercury__io__get_line_number_4_p_0(InputStream_8, &LineNumber_36);
            CurModuleNameSym_21 = ((MR_Word) ((MR_hl_field(0, ProcLabelInContext_9, 0))));
            CurFileName_22 = ((MR_String) ((MR_hl_field(0, ProcLabelInContext_9, 1))));
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_1_input_1_InputStream_10 = InputStream_8;
            next_value_of_tscc_proc_1_input_2_HeaderLineNumber_11 = LineNumber_36;
            next_value_of_tscc_proc_1_input_3_HeaderLine_12 = Line_14;
            next_value_of_tscc_proc_1_input_4_CurModuleNameSym_13 = CurModuleNameSym_21;
            next_value_of_tscc_proc_1_input_5_CurFileName_14 = CurFileName_22;
            next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_TraceCounts_0_57 = STATE_VARIABLE_TraceCounts_31_31;
            tscc_proc_1_input_1_InputStream_10 = next_value_of_tscc_proc_1_input_1_InputStream_10;
            tscc_proc_1_input_2_HeaderLineNumber_11 = next_value_of_tscc_proc_1_input_2_HeaderLineNumber_11;
            tscc_proc_1_input_3_HeaderLine_12 = next_value_of_tscc_proc_1_input_3_HeaderLine_12;
            tscc_proc_1_input_4_CurModuleNameSym_13 = next_value_of_tscc_proc_1_input_4_CurModuleNameSym_13;
            tscc_proc_1_input_5_CurFileName_14 = next_value_of_tscc_proc_1_input_5_CurFileName_14;
            tscc_proc_1_input_6_STATE_VARIABLE_TraceCounts_0_57 = next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_TraceCounts_0_57;
            goto top_of_proc_1;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Error_23 = ((MR_Word) ((MR_hl_field(2, Result_13, 0))));

          {
            mercury__exception__throw_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (Error_23)));
            return;
          }
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_TraceCounts_58 = STATE_VARIABLE_TraceCounts_25;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_TraceCounts_58 = tscc_output_1_STATE_VARIABLE_TraceCounts_58;
  return;
}

static MR_bool MR_CALL 
mdbcomp__trace_counts__decimal_token_to_int_2_p_0(
  MR_Word Token_3,
  MR_Integer * Int_4)
{
  MR_bool succeeded = ((((MR_tag((MR_Word) Token_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Token_3, 0)))) == (MR_Integer) 0)));
  MR_Word Integer_5;
  MR_Word Var_6;
  MR_Word Var_7;
  MR_Word Var_8;

  if (succeeded)
  {
    Var_6 = ((MR_Unsigned) ((MR_hl_field(3, Token_3, 1))) & (MR_Integer) 3);
    Integer_5 = ((MR_Word) ((MR_hl_field(3, Token_3, 2))));
    Var_7 = ((((MR_Unsigned) ((MR_hl_field(3, Token_3, 3))) >> 3)) & (MR_Integer) 1);
    Var_8 = ((MR_Unsigned) ((MR_hl_field(3, Token_3, 3))) & (MR_Integer) 7);
    succeeded = (Var_6 == (MR_Integer) 2);
    if (succeeded)
    {
      succeeded = (Var_7 == (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = (Var_8 == (MR_Integer) 0);
        if (succeeded)
          succeeded = mercury__integer__to_int_2_p_0(Integer_5, Int_4);
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
mdbcomp__trace_counts__diff_proc_counts_acc_5_p_0(
  MR_Word ProcTraceCountsB_6,
  MR_Word PathPortA_7,
  MR_Word LineNoCountA_8,
  MR_Word STATE_VARIABLE_ProcTraceCounts_0_12,
  MR_Word * STATE_VARIABLE_ProcTraceCounts_13)
{
  MR_bool succeeded;
  MR_Word LineNoCountB_10;
  MR_Box conv0_LineNoCountB_10;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0), (MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0), ProcTraceCountsB_6, ((MR_Box) (PathPortA_7)), &conv0_LineNoCountB_10);
  if (succeeded)
  {
    LineNoCountB_10 = ((MR_Word) (conv0_LineNoCountB_10));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word LineNoCount_11;
    MR_Integer LineNumber1_20 = ((MR_Integer) ((MR_hl_field(0, LineNoCountA_8, 0))));
    MR_Integer Count1_21 = ((MR_Integer) ((MR_hl_field(0, LineNoCountA_8, 1))));
    MR_Integer Count2_24 = ((MR_Integer) ((MR_hl_field(0, LineNoCountB_10, 1))));
    MR_Integer Var_26 = (MR_Integer) ((MR_Unsigned) Count1_21 - (MR_Unsigned) Count2_24);

    {
      LineNoCount_11 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, LineNoCount_11, 0) = ((MR_Box) (LineNumber1_20));
      MR_hl_field(0, LineNoCount_11, 1) = ((MR_Box) (Var_26));
      MR_hl_field(0, LineNoCount_11, 2) = ((MR_Box) ((MR_Integer) -1));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0), (MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0), ((MR_Box) (PathPortA_7)), ((MR_Box) (LineNoCount_11)), STATE_VARIABLE_ProcTraceCounts_0_12, STATE_VARIABLE_ProcTraceCounts_13);
  }
  else
    mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0), (MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0), ((MR_Box) (PathPortA_7)), ((MR_Box) (LineNoCountA_8)), STATE_VARIABLE_ProcTraceCounts_0_12, STATE_VARIABLE_ProcTraceCounts_13);
}

static void MR_CALL 
mdbcomp__trace_counts__diff_trace_counts_acc_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_ProcTraceCounts_13;

  mdbcomp__trace_counts__diff_proc_counts_acc_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_ProcTraceCounts_13);
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_ProcTraceCounts_13));
}

static void MR_CALL 
mdbcomp__trace_counts__diff_trace_counts_acc_5_p_0(
  MR_Word TraceCountsB_6,
  MR_Word ProcLabelInContextA_7,
  MR_Word ProcTraceCountsA_8,
  MR_Word STATE_VARIABLE_TraceCounts_0_12,
  MR_Word * STATE_VARIABLE_TraceCounts_13)
{
  MR_bool succeeded;
  MR_Word ProcTraceCountsB_10;
  MR_Box conv0_ProcTraceCountsB_10;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0), (MR_Word) (&mdbcomp__trace_counts_scalar_common_1[0]), TraceCountsB_6, ((MR_Box) (ProcLabelInContextA_7)), &conv0_ProcTraceCountsB_10);
  if (succeeded)
  {
    ProcTraceCountsB_10 = ((MR_Word) (conv0_ProcTraceCountsB_10));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word ProcTraceCounts_11;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Box conv2_ProcTraceCounts_11;

    {
      Var_20 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_20, 0) = ((MR_Box) (&mdbcomp__trace_counts_scalar_common_7[3]));
      MR_hl_field(0, Var_20, 1) = ((MR_Box) (mdbcomp__trace_counts__diff_trace_counts_acc_5_p_0_1));
      MR_hl_field(0, Var_20, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_20, 3) = ((MR_Box) (ProcTraceCountsB_10));
    }
    Var_21 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0), (MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0));
    mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0), (MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0), (MR_Word) (&mdbcomp__trace_counts_scalar_common_1[0]), Var_20, ProcTraceCountsA_8, ((MR_Box) (Var_21)), &conv2_ProcTraceCounts_11);
    ProcTraceCounts_11 = ((MR_Word) (conv2_ProcTraceCounts_11));
    mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0), (MR_Word) (&mdbcomp__trace_counts_scalar_common_1[0]), ((MR_Box) (ProcLabelInContextA_7)), ((MR_Box) (ProcTraceCounts_11)), STATE_VARIABLE_TraceCounts_0_12, STATE_VARIABLE_TraceCounts_13);
  }
  else
    mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0), (MR_Word) (&mdbcomp__trace_counts_scalar_common_1[0]), ((MR_Box) (ProcLabelInContextA_7)), ((MR_Box) (ProcTraceCountsA_8)), STATE_VARIABLE_TraceCounts_0_12, STATE_VARIABLE_TraceCounts_13);
}

static MR_Word MR_CALL 
mdbcomp__trace_counts__sum_counts_on_line_2_f_0(
  MR_Word LC1_4,
  MR_Word LC2_5)
{
  MR_Word LC_6;
  MR_Integer LineNumber1_7 = ((MR_Integer) ((MR_hl_field(0, LC1_4, 0))));
  MR_Integer Count1_8 = ((MR_Integer) ((MR_hl_field(0, LC1_4, 1))));
  MR_Integer NumTests1_9 = ((MR_Integer) ((MR_hl_field(0, LC1_4, 2))));
  MR_Integer Count2_11 = ((MR_Integer) ((MR_hl_field(0, LC2_5, 1))));
  MR_Integer NumTests2_12 = ((MR_Integer) ((MR_hl_field(0, LC2_5, 2))));
  MR_Integer Var_13 = (MR_Integer) ((MR_Unsigned) Count1_8 + (MR_Unsigned) Count2_11);
  MR_Integer Var_14 = (MR_Integer) ((MR_Unsigned) NumTests1_9 + (MR_Unsigned) NumTests2_12);

  {
    LC_6 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, LC_6, 0) = ((MR_Box) (LineNumber1_7));
    MR_hl_field(0, LC_6, 1) = ((MR_Box) (Var_13));
    MR_hl_field(0, LC_6, 2) = ((MR_Box) (Var_14));
  }
  return LC_6;
}

static MR_Box MR_CALL 
mdbcomp__trace_counts__sum_proc_trace_counts_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_LC_6;

  conv0_LC_6 = mdbcomp__trace_counts__sum_counts_on_line_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv0_LC_6));
  return wrapper_arg_3;
}

static void MR_CALL 
mdbcomp__trace_counts__sum_proc_trace_counts_3_p_0(
  MR_Word ProcTraceCountsA_4,
  MR_Word ProcTraceCountsB_5,
  MR_Word * ProcTraceCounts_6)
{
  *ProcTraceCounts_6 = mercury__map__union_3_f_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0), (MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0), (MR_Word) (&mdbcomp__trace_counts_scalar_common_1[5]), ProcTraceCountsA_4, ProcTraceCountsB_5);
}

MR_Integer MR_CALL 
mdbcomp__trace_counts__num_tests_for_file_type_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Integer HeadVar__2_2;

  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      HeadVar__2_2 = (MR_Integer) 1;
      break;
    case (MR_Integer) 1:
      HeadVar__2_2 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 0))));
      break;
    case (MR_Integer) 2:
      HeadVar__2_2 = (MR_Integer) -1;
      break;
  }
  return HeadVar__2_2;
}

MR_Integer MR_CALL 
mdbcomp__trace_counts__calc_num_tests_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Integer HeadVar__2_2;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__2_2 = (MR_Integer) 0;
  else
  {
    MR_Word FileType_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Rest_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Integer Var_5;
    MR_Integer Var_6;

    switch (MR_tag((MR_Word) FileType_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Var_5 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        Var_5 = ((MR_Integer) ((MR_hl_field(1, FileType_3, 0))));
        break;
      case (MR_Integer) 2:
        Var_5 = (MR_Integer) -1;
        break;
    }
    Var_6 = mdbcomp__trace_counts__calc_num_tests_1_f_0(Rest_4);
    HeadVar__2_2 = (MR_Integer) ((MR_Unsigned) Var_5 + (MR_Unsigned) Var_6);
  }
  return HeadVar__2_2;
}

static void MR_CALL 
mdbcomp__trace_counts__restrict_trace_counts_to_module_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_TraceCounts_17;

  mdbcomp__trace_counts__restrict_trace_counts_2_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_TraceCounts_17);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_TraceCounts_17));
}

void MR_CALL 
mdbcomp__trace_counts__restrict_trace_counts_to_module_3_p_0(
  MR_Word ModuleName_4,
  MR_Word TraceCounts0_5,
  MR_Word * TraceCounts_6)
{
  MR_Word Var_7;
  MR_Word Var_8;
  MR_Box conv1_TraceCounts_6;

  {
    Var_7 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_7, 0) = ((MR_Box) (&mdbcomp__trace_counts_scalar_common_7[2]));
    MR_hl_field(0, Var_7, 1) = ((MR_Box) (mdbcomp__trace_counts__restrict_trace_counts_to_module_3_p_0_1));
    MR_hl_field(0, Var_7, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_7, 3) = ((MR_Box) (ModuleName_4));
  }
  Var_8 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0), (MR_Word) (&mdbcomp__trace_counts_scalar_common_1[0]));
  mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0), (MR_Word) (&mdbcomp__trace_counts_scalar_common_1[0]), (MR_Word) (&mdbcomp__trace_counts_scalar_common_1[1]), Var_7, TraceCounts0_5, ((MR_Box) (Var_8)), &conv1_TraceCounts_6);
  *TraceCounts_6 = ((MR_Word) (conv1_TraceCounts_6));
}

void MR_CALL 
mdbcomp__trace_counts__write_proc_label_4_p_0(
  MR_Word OutputStream_5,
  MR_Word ProcLabel_6)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) ProcLabel_6)) == (MR_Integer) 0))
  {
    MR_Word DefModuleSym_8 = ((MR_Word) ((MR_hl_field(0, ProcLabel_6, 0))));
    MR_Word PredOrFunc_9 = ((MR_Unsigned) ((MR_hl_field(0, ProcLabel_6, 1))) & (MR_Integer) 1);
    MR_Word DeclModuleSym_10 = ((MR_Word) ((MR_hl_field(0, ProcLabel_6, 2))));
    MR_String Name_11 = ((MR_String) ((MR_hl_field(0, ProcLabel_6, 3))));
    MR_Integer Arity_12 = ((MR_Integer) ((MR_hl_field(0, ProcLabel_6, 4))));
    MR_Integer Mode_13 = ((MR_Integer) ((MR_hl_field(0, ProcLabel_6, 5))));
    MR_String Var_53;
    MR_String Var_63;

    switch (PredOrFunc_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(DeclModuleSym_10, DefModuleSym_8);
          if (succeeded)
            mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "fproc ");
          else
          {
            MR_String DeclModule_46;

            DeclModule_46 = mdbcomp__sym_name__sym_name_to_string_1_f_0(DeclModuleSym_10);
            mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "fprocdecl ");
            mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_97_116_111_109_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0((MR_Word) (&mdbcomp__trace_counts_scalar_common_3[0]), OutputStream_5, DeclModule_46);
            mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) " ");
          }
        }
        break;
      case (MR_Integer) 0:
        {
          succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(DeclModuleSym_10, DefModuleSym_8);
          if (succeeded)
            mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "pproc ");
          else
          {
            MR_String DeclModule_14;

            DeclModule_14 = mdbcomp__sym_name__sym_name_to_string_1_f_0(DeclModuleSym_10);
            mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "pprocdecl ");
            mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_97_116_111_109_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0((MR_Word) (&mdbcomp__trace_counts_scalar_common_3[0]), OutputStream_5, DeclModule_14);
            mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) " ");
          }
        }
        break;
    }
    mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_97_116_111_109_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0((MR_Word) (&mdbcomp__trace_counts_scalar_common_3[0]), OutputStream_5, Name_11);
    mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) " ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mdbcomp__trace_counts_scalar_common_5[7]), Arity_12, &Var_53);
    mercury__io__write_string_4_p_0(OutputStream_5, Var_53);
    mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) " ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mdbcomp__trace_counts_scalar_common_5[7]), Mode_13, &Var_63);
    mercury__io__write_string_4_p_0(OutputStream_5, Var_63);
    mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "\n");
  }
  else
    {
      mercury__require__error_1_p_0((MR_String) "write_proc_label: special_pred");
      return;
    }
}

static void MR_CALL 
mdbcomp__trace_counts__write_trace_counts_to_file_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_CurModuleNameSym_21;
  MR_String conv0_STATE_VARIABLE_CurFileName_23;

  mdbcomp__trace_counts__write_proc_label_and_file_trace_counts_9_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_CurModuleNameSym_21, ((MR_String) (wrapper_arg_5)), &conv0_STATE_VARIABLE_CurFileName_23);
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_CurModuleNameSym_21));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_CurFileName_23));
}

void MR_CALL 
mdbcomp__trace_counts__write_trace_counts_to_file_6_p_0(
  MR_Word FileType_7,
  MR_Word TraceCounts_8,
  MR_String FileName_9,
  MR_Word * Result_10)
{
  MR_Word FileResult_12;

  mercury__io__open_output_4_p_0(FileName_9, &FileResult_12);
  if (((MR_tag((MR_Word) FileResult_12)) == (MR_Integer) 1))
  {
    MR_Word Error_14 = ((MR_Word) ((MR_hl_field(1, FileResult_12, 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Result_10 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Error_14));
    }
  }
  else
  {
    MR_Word FileStream_13 = ((MR_Word) ((MR_hl_field(0, FileResult_12, 0))));
    MR_Word Var_27;
    MR_Box conv4_Var_22;
    MR_Box conv3_Var_23;
    MR_Box conv2_STATE_VARIABLE_IO_21_21;

    *Result_10 = (MR_Word) ((MR_Unsigned) 0U);
    mercury__io__write_string_4_p_0(FileStream_13, (MR_String) "Mercury trace counts file");
    mercury__io__nl_3_p_0(FileStream_13);
    mercury__io__write_4_p_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0), FileStream_13, ((MR_Box) (FileType_7)));
    mercury__io__write_string_4_p_0(FileStream_13, (MR_String) ".\n");
    {
      Var_27 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_27, 0) = ((MR_Box) (&mdbcomp__trace_counts_scalar_common_8[0]));
      MR_hl_field(0, Var_27, 1) = ((MR_Box) (mdbcomp__trace_counts__write_trace_counts_to_file_6_p_0_1));
      MR_hl_field(0, Var_27, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_27, 3) = ((MR_Box) (FileStream_13));
    }
    mercury__map__foldl3_8_p_2((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0), (MR_Word) (&mdbcomp__trace_counts_scalar_common_1[0]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_27, TraceCounts_8, ((MR_Box) (&mdbcomp__trace_counts_scalar_common_5[9])), &conv4_Var_22, ((MR_Box) ((MR_String) "")), &conv3_Var_23, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_21_21);
    mercury__io__close_output_3_p_0(FileStream_13);
  }
}

void MR_CALL 
mdbcomp__trace_counts__read_and_union_trace_counts_8_p_0(
  MR_Word ShowProgress_9,
  MR_Word Files_10,
  MR_Integer * NumTests_11,
  MR_Word * TestKinds_12,
  MR_Word * TraceCounts_13,
  MR_Word * MaybeError_14)
{
  MR_Word FileType_16;
  MR_Word Var_24;

  Var_24 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0), (MR_Word) (&mdbcomp__trace_counts_scalar_common_1[0]));
  mdbcomp__trace_counts__read_and_union_trace_counts_2_9_p_0(ShowProgress_9, Files_10, (MR_Word) (MR_mkword(1, &mdbcomp__trace_counts_scalar_common_4[1])), &FileType_16, Var_24, TraceCounts_13, MaybeError_14);
  switch (MR_tag((MR_Word) FileType_16)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        mercury__require__error_1_p_0((MR_String) "read_and_union_trace_counts: single_file");
        return;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word TestKindList_17;

        *NumTests_11 = ((MR_Integer) ((MR_hl_field(1, FileType_16, 0))));
        TestKindList_17 = ((MR_Word) ((MR_hl_field(1, FileType_16, 1))));
        mercury__set__list_to_set_2_p_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0), TestKindList_17, TestKinds_12);
      }
      break;
    case (MR_Integer) 2:
      {
        mercury__require__error_1_p_0((MR_String) "read_and_union_trace_counts: diff_file");
        return;
      }
      break;
  }
}

static void MR_CALL 
mdbcomp__trace_counts__read_and_union_trace_counts_2_9_p_0(
  MR_Word ShowProgress_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_FileType_0_3,
  MR_Word * STATE_VARIABLE_FileType_4,
  MR_Word STATE_VARIABLE_TraceCounts_0_5,
  MR_Word * STATE_VARIABLE_TraceCounts_6,
  MR_Word * HeadVar__7_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_TraceCounts_6 = STATE_VARIABLE_TraceCounts_0_5;
      *STATE_VARIABLE_FileType_4 = STATE_VARIABLE_FileType_0_3;
    }
    else
    {
      MR_String FileName_21 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word FileNames_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word TCResult_28;

      if (!((ShowProgress_1 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        MR_Word ProgressStream_27 = ((MR_Word) ((MR_hl_field(1, ShowProgress_1, 0))));

        mercury__io__write_string_4_p_0(ProgressStream_27, FileName_21);
        mercury__io__nl_3_p_0(ProgressStream_27);
      }
      mdbcomp__trace_counts__read_trace_counts_source_4_p_0(FileName_21, &TCResult_28);
      if (((MR_tag((MR_Word) TCResult_28)) == (MR_Integer) 1))
      {
        MR_String Message_30 = ((MR_String) ((MR_hl_field(1, TCResult_28, 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__7_7 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Message_30));
        }
        *STATE_VARIABLE_FileType_4 = STATE_VARIABLE_FileType_0_3;
        *STATE_VARIABLE_TraceCounts_6 = STATE_VARIABLE_TraceCounts_0_5;
      }
      else
      {
        MR_Word FileType_23 = ((MR_Word) ((MR_hl_field(0, TCResult_28, 0))));
        MR_Word NewTraceCounts_29 = ((MR_Word) ((MR_hl_field(0, TCResult_28, 1))));
        MR_Word Var_40;
        MR_Word STATE_VARIABLE_TraceCounts_41_41;
        MR_Word Var_42;
        MR_Word STATE_VARIABLE_FileType_44_44;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word next_value_of_STATE_VARIABLE_FileType_0_3;
        MR_Word next_value_of_STATE_VARIABLE_TraceCounts_0_5;

        {
          Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_42, 0) = ((MR_Box) (NewTraceCounts_29));
          MR_hl_field(1, Var_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_40, 0) = ((MR_Box) (STATE_VARIABLE_TraceCounts_0_5));
          MR_hl_field(1, Var_40, 1) = ((MR_Box) (Var_42));
        }
        mdbcomp__trace_counts__summarize_trace_counts_list_2_p_0(Var_40, &STATE_VARIABLE_TraceCounts_41_41);
        STATE_VARIABLE_FileType_44_44 = mdbcomp__trace_counts__sum_trace_count_file_type_2_f_0(STATE_VARIABLE_FileType_0_3, FileType_23);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = FileNames_22;
        next_value_of_STATE_VARIABLE_FileType_0_3 = STATE_VARIABLE_FileType_44_44;
        next_value_of_STATE_VARIABLE_TraceCounts_0_5 = STATE_VARIABLE_TraceCounts_41_41;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_FileType_0_3 = next_value_of_STATE_VARIABLE_FileType_0_3;
        STATE_VARIABLE_TraceCounts_0_5 = next_value_of_STATE_VARIABLE_TraceCounts_0_5;
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
mdbcomp__trace_counts__read_trace_counts_list_5_p_0(
  MR_Word ShowProgress_6,
  MR_String FileName_7,
  MR_Word * Result_8)
{
  MR_Word OpenResult_10;

  mercury__io__open_input_4_p_0(FileName_7, &OpenResult_10);
  if (((MR_tag((MR_Word) OpenResult_10)) == (MR_Integer) 1))
  {
    MR_Word IOError_12 = ((MR_Word) ((MR_hl_field(1, OpenResult_10, 0))));
    MR_String Var_21;
    MR_String Var_23;
    MR_String Var_24;
    MR_String Var_26;

    Var_26 = mercury__string__string_1_f_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (IOError_12)));
    Var_24 = mercury__string__f_43_43_2_f_0((MR_String) "\': ", Var_26);
    Var_23 = mercury__string__f_43_43_2_f_0(FileName_7, Var_24);
    Var_21 = mercury__string__f_43_43_2_f_0((MR_String) "Error opening file \140", Var_23);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Result_8 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_21));
    }
  }
  else
  {
    MR_Word FileStream_11 = ((MR_Word) ((MR_hl_field(0, OpenResult_10, 0))));
    MR_Word Var_17;

    Var_17 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0), (MR_Word) (&mdbcomp__trace_counts_scalar_common_1[0]));
    mdbcomp__trace_counts__read_trace_counts_list_stream_8_p_0(ShowProgress_6, (MR_Word) (MR_mkword(1, &mdbcomp__trace_counts_scalar_common_4[1])), Var_17, FileName_7, FileStream_11, Result_8);
  }
}

static void MR_CALL 
mdbcomp__trace_counts__read_trace_counts_list_stream_8_p_0(
  MR_Word ShowProgress_9,
  MR_Word FileType0_10,
  MR_Word TraceCounts0_11,
  MR_String MainFileName_12,
  MR_Word Stream_13,
  MR_Word * Result_14)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word ReadResult_16;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__io__read_line_as_string_4_p_0(Stream_13, &ReadResult_16);
    switch (MR_tag((MR_Word) ReadResult_16)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *Result_14 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (FileType0_10));
          MR_hl_field(0, base, 1) = ((MR_Box) (TraceCounts0_11));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Line_17 = ((MR_String) ((MR_hl_field(1, ReadResult_16, 0))));
          MR_String FileName_18;

          FileName_18 = mercury__string__rstrip_1_f_0(Line_17);
          succeeded = (strcmp(FileName_18, (MR_String) "") == 0);
          if (succeeded)
          {
            // direct tailcall eliminated
            ;
            continue;
          }
          else
          {
            MR_Word ReadTCResult_20;

            if (!((ShowProgress_9 == (MR_Word) ((MR_Unsigned) 0U))))
            {
              MR_Word ProgressStream_19 = ((MR_Word) ((MR_hl_field(1, ShowProgress_9, 0))));

              mercury__io__write_string_4_p_0(ProgressStream_19, FileName_18);
              mercury__io__nl_3_p_0(ProgressStream_19);
            }
            mdbcomp__trace_counts__read_trace_counts_4_p_0(FileName_18, &ReadTCResult_20);
            switch (MR_tag((MR_Word) ReadTCResult_20)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word FileType1_21 = ((MR_Word) ((MR_hl_field(0, ReadTCResult_20, 0))));
                  MR_Word TraceCounts1_22 = ((MR_Word) ((MR_hl_field(0, ReadTCResult_20, 1))));
                  MR_Word TraceCounts_23;
                  MR_Word FileType_24;
                  MR_Word Var_35;
                  MR_Word Var_36;
                  MR_Word next_value_of_FileType0_10;
                  MR_Word next_value_of_TraceCounts0_11;

                  {
                    Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_36, 0) = ((MR_Box) (TraceCounts1_22));
                    MR_hl_field(1, Var_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_35, 0) = ((MR_Box) (TraceCounts0_11));
                    MR_hl_field(1, Var_35, 1) = ((MR_Box) (Var_36));
                  }
                  mdbcomp__trace_counts__summarize_trace_counts_list_2_p_0(Var_35, &TraceCounts_23);
                  FileType_24 = mdbcomp__trace_counts__sum_trace_count_file_type_2_f_0(FileType0_10, FileType1_21);
                  // direct tailcall eliminated
                  ;
                  next_value_of_FileType0_10 = FileType_24;
                  next_value_of_TraceCounts0_11 = TraceCounts_23;
                  FileType0_10 = next_value_of_FileType0_10;
                  TraceCounts0_11 = next_value_of_TraceCounts0_11;
                  continue;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_String Var_53;
                  MR_String Var_55;
                  MR_String Var_56;
                  MR_String ErrMsg_75 = ((MR_String) ((MR_hl_field(1, ReadTCResult_20, 0))));

                  Var_56 = mercury__string__f_43_43_2_f_0((MR_String) "\': ", ErrMsg_75);
                  Var_55 = mercury__string__f_43_43_2_f_0(FileName_18, Var_56);
                  Var_53 = mercury__string__f_43_43_2_f_0((MR_String) "Syntax error in file \140", Var_55);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *Result_14 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (Var_53));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_String Var_58;
                  MR_String Var_60;
                  MR_String Var_62;
                  MR_String Var_63;
                  MR_String ErrMsg_76 = ((MR_String) ((MR_hl_field(2, ReadTCResult_20, 0))));

                  Var_63 = mercury__string__f_43_43_2_f_0((MR_String) "\': ", ErrMsg_76);
                  Var_62 = mercury__string__f_43_43_2_f_0(FileName_18, Var_63);
                  Var_60 = mercury__string__f_43_43_2_f_0((MR_String) "from file \140", Var_62);
                  Var_58 = mercury__string__f_43_43_2_f_0((MR_String) "Error reading trace counts ", Var_60);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *Result_14 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (Var_58));
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, ReadTCResult_20, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_String Var_46;
                      MR_String Var_48;
                      MR_String Var_50;
                      MR_String Var_51;
                      MR_Word IOError_73 = ((MR_Word) ((MR_hl_field(3, ReadTCResult_20, 1))));
                      MR_String ErrMsg_74;

                      ErrMsg_74 = mercury__io__error_message_1_f_0(IOError_73);
                      Var_51 = mercury__string__f_43_43_2_f_0((MR_String) "\': ", ErrMsg_74);
                      Var_50 = mercury__string__f_43_43_2_f_0(FileName_18, Var_51);
                      Var_48 = mercury__string__f_43_43_2_f_0((MR_String) "\140", Var_50);
                      Var_46 = mercury__string__f_43_43_2_f_0((MR_String) "I/O error opening file ", Var_48);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        *Result_14 = base;
                        MR_hl_field(1, base, 0) = ((MR_Box) (Var_46));
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word IOError_25 = ((MR_Word) ((MR_hl_field(3, ReadTCResult_20, 1))));
                      MR_String ErrMsg_26;
                      MR_String Var_39;
                      MR_String Var_41;
                      MR_String Var_43;
                      MR_String Var_44;

                      ErrMsg_26 = mercury__io__error_message_1_f_0(IOError_25);
                      Var_44 = mercury__string__f_43_43_2_f_0((MR_String) "\': ", ErrMsg_26);
                      Var_43 = mercury__string__f_43_43_2_f_0(FileName_18, Var_44);
                      Var_41 = mercury__string__f_43_43_2_f_0((MR_String) "\140", Var_43);
                      Var_39 = mercury__string__f_43_43_2_f_0((MR_String) "I/O error reading file ", Var_41);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        *Result_14 = base;
                        MR_hl_field(1, base, 0) = ((MR_Box) (Var_39));
                      }
                    }
                    break;
                }
                break;
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Error_27 = ((MR_Word) ((MR_hl_field(2, ReadResult_16, 0))));
          MR_String Var_65;
          MR_String Var_67;
          MR_String Var_69;
          MR_String Var_70;
          MR_String Var_72;

          Var_72 = mercury__string__string_1_f_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (Error_27)));
          Var_70 = mercury__string__f_43_43_2_f_0((MR_String) "\': ", Var_72);
          Var_69 = mercury__string__f_43_43_2_f_0(MainFileName_12, Var_70);
          Var_67 = mercury__string__f_43_43_2_f_0((MR_String) "\140", Var_69);
          Var_65 = mercury__string__f_43_43_2_f_0((MR_String) "IO error reading file ", Var_67);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *Result_14 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_65));
          }
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mdbcomp__trace_counts__read_trace_counts_source_4_p_0(
  MR_String FileName_5,
  MR_Word * Result_6)
{
  MR_Word ReadTCResult_8;

  mdbcomp__trace_counts__read_trace_counts_4_p_0(FileName_5, &ReadTCResult_8);
  switch (MR_tag((MR_Word) ReadTCResult_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word FileType_9 = ((MR_Word) ((MR_hl_field(0, ReadTCResult_8, 0))));
        MR_Word TraceCount_10 = ((MR_Word) ((MR_hl_field(0, ReadTCResult_8, 1))));

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *Result_6 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (FileType_9));
          MR_hl_field(0, base, 1) = ((MR_Box) (TraceCount_10));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String Var_30;
        MR_String Var_32;
        MR_String Var_33;
        MR_String ErrMsg_44 = ((MR_String) ((MR_hl_field(1, ReadTCResult_8, 0))));

        Var_33 = mercury__string__f_43_43_2_f_0((MR_String) "\': ", ErrMsg_44);
        Var_32 = mercury__string__f_43_43_2_f_0(FileName_5, Var_33);
        Var_30 = mercury__string__f_43_43_2_f_0((MR_String) "Syntax error in file \140", Var_32);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_6 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_30));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String Var_35;
        MR_String Var_37;
        MR_String Var_39;
        MR_String Var_40;
        MR_String ErrMsg_45 = ((MR_String) ((MR_hl_field(2, ReadTCResult_8, 0))));

        Var_40 = mercury__string__f_43_43_2_f_0((MR_String) "\': ", ErrMsg_45);
        Var_39 = mercury__string__f_43_43_2_f_0(FileName_5, Var_40);
        Var_37 = mercury__string__f_43_43_2_f_0((MR_String) "from file \140", Var_39);
        Var_35 = mercury__string__f_43_43_2_f_0((MR_String) "Error reading trace counts ", Var_37);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_6 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_35));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, ReadTCResult_8, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String Var_23;
            MR_String Var_25;
            MR_String Var_27;
            MR_String Var_28;
            MR_Word IOError_42 = ((MR_Word) ((MR_hl_field(3, ReadTCResult_8, 1))));
            MR_String ErrMsg_43;

            ErrMsg_43 = mercury__io__error_message_1_f_0(IOError_42);
            Var_28 = mercury__string__f_43_43_2_f_0((MR_String) "\': ", ErrMsg_43);
            Var_27 = mercury__string__f_43_43_2_f_0(FileName_5, Var_28);
            Var_25 = mercury__string__f_43_43_2_f_0((MR_String) "\140", Var_27);
            Var_23 = mercury__string__f_43_43_2_f_0((MR_String) "I/O error opening file ", Var_25);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *Result_6 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_23));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word IOError_11 = ((MR_Word) ((MR_hl_field(3, ReadTCResult_8, 1))));
            MR_String ErrMsg_12;
            MR_String Var_16;
            MR_String Var_18;
            MR_String Var_20;
            MR_String Var_21;

            ErrMsg_12 = mercury__io__error_message_1_f_0(IOError_11);
            Var_21 = mercury__string__f_43_43_2_f_0((MR_String) "\': ", ErrMsg_12);
            Var_20 = mercury__string__f_43_43_2_f_0(FileName_5, Var_21);
            Var_18 = mercury__string__f_43_43_2_f_0((MR_String) "\140", Var_20);
            Var_16 = mercury__string__f_43_43_2_f_0((MR_String) "I/O error reading file ", Var_18);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *Result_6 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_16));
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
mdbcomp__trace_counts__read_trace_counts_4_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_TraceCounts_16;

  mdbcomp__trace_counts__read_trace_counts_setup_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), &conv0_STATE_VARIABLE_TraceCounts_16);
  *wrapper_arg_1 = ((MR_Box) (conv0_STATE_VARIABLE_TraceCounts_16));
}

void MR_CALL 
mdbcomp__trace_counts__read_trace_counts_4_p_0(
  MR_String FileName_5,
  MR_Word * ReadResult_6)
{
  MR_bool succeeded;
  MR_String ActualFileName_10;
  MR_String GzipCmd_11;
  MR_Word Result_12;
  MR_String BaseName_8;

  succeeded = mercury__string__remove_suffix_3_p_0(FileName_5, (MR_String) ".gz", &BaseName_8);
  if (succeeded)
  {
    MR_String Var_21;
    MR_Word _UnzipResult_9;

    Var_21 = mercury__string__f_43_43_2_f_0((MR_String) "gunzip ", FileName_5);
    mercury__io__call_system__call_system_4_p_0(Var_21, &_UnzipResult_9);
    ActualFileName_10 = BaseName_8;
    GzipCmd_11 = mercury__string__f_43_43_2_f_0((MR_String) "gzip ", BaseName_8);
  }
  else
  {
    ActualFileName_10 = FileName_5;
    GzipCmd_11 = (MR_String) "";
  }
  mercury__io__open_input_4_p_0(ActualFileName_10, &Result_12);
  if (((MR_tag((MR_Word) Result_12)) == (MR_Integer) 1))
  {
    MR_Word IOError_16 = ((MR_Word) ((MR_hl_field(1, Result_12, 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *ReadResult_6 = base;
      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, base, 1) = ((MR_Box) (IOError_16));
    }
  }
  else
  {
    MR_Word FileStream_13 = ((MR_Word) ((MR_hl_field(0, Result_12, 0))));
    MR_Word IdReadResult_14;
    MR_String FirstLine_15;
    MR_String Var_27;
    MR_String Var_59;

    mercury__io__read_line_as_string_4_p_0(FileStream_13, &IdReadResult_14);
    succeeded = ((MR_tag((MR_Word) IdReadResult_14)) == (MR_Integer) 1);
    if (succeeded)
    {
      FirstLine_15 = ((MR_String) ((MR_hl_field(1, IdReadResult_14, 0))));
      Var_27 = mercury__string__rstrip_1_f_0(FirstLine_15);
      Var_59 = (MR_String) "Mercury trace counts file";
      succeeded = (strcmp(Var_27, Var_59) == 0);
    }
    if (succeeded)
    {
      MR_Word FileTypeResult_32;

      mercury__io__read_4_p_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0), FileStream_13, &FileTypeResult_32);
      switch (MR_tag((MR_Word) FileTypeResult_32)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 2:
          *ReadResult_6 = (MR_Word) (MR_mkword(1, &mdbcomp__trace_counts_scalar_common_5[8]));
          break;
        case (MR_Integer) 1:
          {
            MR_Word FileType_33 = ((MR_Word) ((MR_hl_field(1, FileTypeResult_32, 0))));
            MR_Word NewlineResult_34;
            MR_String Var_43;

            mercury__io__read_line_as_string_4_p_0(FileStream_13, &NewlineResult_34);
            succeeded = ((MR_tag((MR_Word) NewlineResult_34)) == (MR_Integer) 1);
            if (succeeded)
            {
              Var_43 = ((MR_String) ((MR_hl_field(1, NewlineResult_34, 0))));
              succeeded = (strcmp(Var_43, (MR_String) "\n") == 0);
            }
            if (succeeded)
            {
              MR_Word Result_35;
              MR_Word Var_44;
              MR_Word Var_45;

              Var_45 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0), (MR_Word) (&mdbcomp__trace_counts_scalar_common_1[0]));
              {
                Var_44 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_44, 0) = ((MR_Box) (&mdbcomp__trace_counts_scalar_common_7[1]));
                MR_hl_field(0, Var_44, 1) = ((MR_Box) (mdbcomp__trace_counts__read_trace_counts_4_p_0_1));
                MR_hl_field(0, Var_44, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_44, 3) = ((MR_Box) (FileStream_13));
                MR_hl_field(0, Var_44, 4) = ((MR_Box) (Var_45));
              }
              mercury__exception__try_io_4_p_0((MR_Word) (&mdbcomp__trace_counts_scalar_common_1[1]), Var_44, &Result_35);
              if (((MR_tag((MR_Word) Result_35)) == (MR_Integer) 2))
              {
                MR_Word Exception_37 = ((MR_Word) ((MR_hl_field(2, Result_35, 0))));
                MR_Word IOError_38;
                MR_Box conv1_IOError_38;

                succeeded = mercury__univ__univ_1_f_2((MR_Word) (&mercury__io__io__type_ctor_info_error_0), &conv1_IOError_38, Exception_37);
                if (succeeded)
                {
                  IOError_38 = ((MR_Word) (conv1_IOError_38));
                  succeeded = MR_TRUE;
                }
                if (succeeded)
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *ReadResult_6 = base;
                    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                    MR_hl_field(3, base, 1) = ((MR_Box) (IOError_38));
                  }
                else
                {
                  MR_String Message_39;
                  MR_Box conv2_Message_39;

                  succeeded = mercury__univ__univ_1_f_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), &conv2_Message_39, Exception_37);
                  if (succeeded)
                  {
                    Message_39 = ((MR_String) (conv2_Message_39));
                    succeeded = MR_TRUE;
                  }
                  if (succeeded)
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *ReadResult_6 = base;
                      MR_hl_field(2, base, 0) = ((MR_Box) (Message_39));
                    }
                  else
                  {
                    MR_String Error_40;
                    MR_Word Var_46;
                    MR_Box conv3_Var_46;

                    succeeded = mercury__univ__univ_1_f_2((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_syntax_error_0), &conv3_Var_46, Exception_37);
                    if (succeeded)
                    {
                      Var_46 = ((MR_Word) (conv3_Var_46));
                      succeeded = MR_TRUE;
                    }
                    if (succeeded)
                    {
                      Error_40 = (MR_String) (Var_46);
                      succeeded = MR_TRUE;
                    }
                    if (succeeded)
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        *ReadResult_6 = base;
                        MR_hl_field(1, base, 0) = ((MR_Box) (Error_40));
                      }
                    else
                    {
                      MR_String Var_48;
                      MR_String Var_50;

                      Var_50 = mercury__string__string_1_f_0((MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), ((MR_Box) (Exception_37)));
                      Var_48 = mercury__string__f_43_43_2_f_0((MR_String) "unexpected exception type: ", Var_50);
                      {
                        mercury__require__unexpected_2_p_0((MR_String) "predicate \140mdbcomp.trace_counts.read_trace_counts_from_stream\'/4", Var_48);
                        return;
                      }
                    }
                  }
                }
              }
              else
              {
                MR_Word TraceCounts_36 = ((MR_Word) ((MR_hl_field(1, Result_35, 0))));

                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  *ReadResult_6 = base;
                  MR_hl_field(0, base, 0) = ((MR_Box) (FileType_33));
                  MR_hl_field(0, base, 1) = ((MR_Box) (TraceCounts_36));
                }
              }
            }
            else
              *ReadResult_6 = (MR_Word) (MR_mkword(1, &mdbcomp__trace_counts_scalar_common_5[8]));
          }
          break;
      }
    }
    else
      *ReadResult_6 = (MR_Word) (MR_mkword(1, &mdbcomp__trace_counts_scalar_common_5[6]));
    mercury__io__close_input_3_p_0(FileStream_13);
  }
  succeeded = (strcmp(GzipCmd_11, (MR_String) "") == 0);
  if (!(succeeded))
  {
    MR_Word _ZipResult_17;

    mercury__io__call_system__call_system_4_p_0(GzipCmd_11, &_ZipResult_17);
  }
}

static void MR_CALL 
mdbcomp__trace_counts__diff_trace_counts_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_TraceCounts_13;

  mdbcomp__trace_counts__diff_trace_counts_acc_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_TraceCounts_13);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_TraceCounts_13));
}

void MR_CALL 
mdbcomp__trace_counts__diff_trace_counts_3_p_0(
  MR_Word TraceCountsA_4,
  MR_Word TraceCountsB_5,
  MR_Word * TraceCounts_6)
{
  MR_Word Var_7;
  MR_Word Var_8;
  MR_Box conv1_TraceCounts_6;

  {
    Var_7 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_7, 0) = ((MR_Box) (&mdbcomp__trace_counts_scalar_common_7[0]));
    MR_hl_field(0, Var_7, 1) = ((MR_Box) (mdbcomp__trace_counts__diff_trace_counts_3_p_0_1));
    MR_hl_field(0, Var_7, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_7, 3) = ((MR_Box) (TraceCountsB_5));
  }
  Var_8 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0), (MR_Word) (&mdbcomp__trace_counts_scalar_common_1[0]));
  mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0), (MR_Word) (&mdbcomp__trace_counts_scalar_common_1[0]), (MR_Word) (&mdbcomp__trace_counts_scalar_common_1[1]), Var_7, TraceCountsA_4, ((MR_Box) (Var_8)), &conv1_TraceCounts_6);
  *TraceCounts_6 = ((MR_Word) (conv1_TraceCounts_6));
}

static void MR_CALL 
mdbcomp__trace_counts__sum_trace_counts_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_ProcTraceCounts_6;

  mdbcomp__trace_counts__sum_proc_trace_counts_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_ProcTraceCounts_6);
  *wrapper_arg_3 = ((MR_Box) (conv0_ProcTraceCounts_6));
}

void MR_CALL 
mdbcomp__trace_counts__sum_trace_counts_3_p_0(
  MR_Word TraceCountsA_4,
  MR_Word TraceCountsB_5,
  MR_Word * TraceCounts_6)
{
  mercury__map__union_4_p_1((MR_Word) (&mdbcomp__trace_counts_scalar_common_1[0]), (MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0), (MR_Word) (&mdbcomp__trace_counts_scalar_common_1[4]), TraceCountsA_4, TraceCountsB_5, TraceCounts_6);
}

static void MR_CALL 
mdbcomp__trace_counts__summarize_trace_counts_list_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_TraceCounts_6;

  mdbcomp__trace_counts__sum_trace_counts_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_TraceCounts_6);
  *wrapper_arg_3 = ((MR_Box) (conv0_TraceCounts_6));
}

void MR_CALL 
mdbcomp__trace_counts__summarize_trace_counts_list_2_p_0(
  MR_Word TraceCountsList_3,
  MR_Word * TraceCounts_4)
{
  MR_bool succeeded = (TraceCountsList_3 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word TraceCountsPrime_5;
  MR_Word Var_6;

  if (succeeded)
  {
    TraceCountsPrime_5 = ((MR_Word) ((MR_hl_field(1, TraceCountsList_3, 0))));
    Var_6 = ((MR_Word) ((MR_hl_field(1, TraceCountsList_3, 1))));
    succeeded = (Var_6 == (MR_Word) ((MR_Unsigned) 0U));
  }
  if (succeeded)
    *TraceCounts_4 = TraceCountsPrime_5;
  else
  {
    MR_Word Var_8;
    MR_Box conv1_TraceCounts_4;

    Var_8 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0), (MR_Word) (&mdbcomp__trace_counts_scalar_common_1[0]));
    mercury__list__foldl_4_p_0((MR_Word) (&mdbcomp__trace_counts_scalar_common_1[1]), (MR_Word) (&mdbcomp__trace_counts_scalar_common_1[1]), (MR_Word) (&mdbcomp__trace_counts_scalar_common_1[3]), TraceCountsList_3, ((MR_Box) (Var_8)), &conv1_TraceCounts_4);
    *TraceCounts_4 = ((MR_Word) (conv1_TraceCounts_4));
  }
}

MR_Word MR_CALL 
mdbcomp__trace_counts__make_path_port_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;

  switch (HeadVar__2_2) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      HeadVar__3_3 = (MR_Word) (&mdbcomp__trace_counts_scalar_common_5[0]);
      break;
    case (MR_Integer) 12:
      {
        HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (HeadVar__1_1));
      }
      break;
    case (MR_Integer) 13:
      {
        HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (HeadVar__1_1));
      }
      break;
    case (MR_Integer) 5:
      HeadVar__3_3 = (MR_Word) (&mdbcomp__trace_counts_scalar_common_5[1]);
      break;
    case (MR_Integer) 1:
      HeadVar__3_3 = (MR_Word) (&mdbcomp__trace_counts_scalar_common_5[2]);
      break;
    case (MR_Integer) 3:
      HeadVar__3_3 = (MR_Word) (&mdbcomp__trace_counts_scalar_common_5[3]);
      break;
    case (MR_Integer) 6:
      {
        HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (HeadVar__1_1));
      }
      break;
    case (MR_Integer) 8:
      {
        HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (HeadVar__1_1));
      }
      break;
    case (MR_Integer) 7:
      {
        HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (HeadVar__1_1));
      }
      break;
    case (MR_Integer) 9:
      {
        HeadVar__3_3 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, HeadVar__3_3, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 9));
        MR_hl_field(2, HeadVar__3_3, 1) = ((MR_Box) (HeadVar__1_1));
      }
      break;
    case (MR_Integer) 11:
      {
        HeadVar__3_3 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, HeadVar__3_3, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 11));
        MR_hl_field(2, HeadVar__3_3, 1) = ((MR_Box) (HeadVar__1_1));
      }
      break;
    case (MR_Integer) 10:
      {
        HeadVar__3_3 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, HeadVar__3_3, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 10));
        MR_hl_field(2, HeadVar__3_3, 1) = ((MR_Box) (HeadVar__1_1));
      }
      break;
    case (MR_Integer) 2:
      HeadVar__3_3 = (MR_Word) (&mdbcomp__trace_counts_scalar_common_5[4]);
      break;
    case (MR_Integer) 14:
      {
        HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (HeadVar__1_1));
      }
      break;
    case (MR_Integer) 4:
      {
        HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (HeadVar__1_1));
      }
      break;
    case (MR_Integer) 15:
      HeadVar__3_3 = (MR_Word) (&mdbcomp__trace_counts_scalar_common_5[5]);
      break;
  }
  return HeadVar__3_3;
}

MR_Word MR_CALL 
mdbcomp__trace_counts__sum_trace_count_file_type_2_f_0(
  MR_Word Type1_4,
  MR_Word Type2_5)
{
  MR_Word UnionType_6;

  switch (MR_tag((MR_Word) Type1_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_tag((MR_Word) Type2_5)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_31;
            MR_Word Var_32;
            MR_Word Var_33;

            {
              Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_33, 0) = ((MR_Box) (Type2_5));
              MR_hl_field(1, Var_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_32, 0) = ((MR_Box) (Type1_4));
              MR_hl_field(1, Var_32, 1) = ((MR_Box) (Var_33));
            }
            Var_31 = mercury__list__sort_and_remove_dups_1_f_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0), Var_32);
            {
              UnionType_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, UnionType_6, 0) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(1, UnionType_6, 1) = ((MR_Box) (Var_31));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer N_10 = ((MR_Integer) ((MR_hl_field(1, Type2_5, 0))));
            MR_Word IncludedTypes2_11 = ((MR_Word) ((MR_hl_field(1, Type2_5, 1))));
            MR_Integer Var_35 = (MR_Integer) ((MR_Unsigned) N_10 + (MR_Unsigned) 1);
            MR_Word Var_37;
            MR_Word Set0_88;
            MR_Word Set_89;

            mercury__set__list_to_set_2_p_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0), IncludedTypes2_11, &Set0_88);
            mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0), ((MR_Box) (Type1_4)), Set0_88, &Set_89);
            mercury__set__to_sorted_list_2_p_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0), Set_89, &Var_37);
            {
              UnionType_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, UnionType_6, 0) = ((MR_Box) (Var_35));
              MR_hl_field(1, UnionType_6, 1) = ((MR_Box) (Var_37));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_39;
            MR_Word Var_40;
            MR_Word Var_41;

            {
              Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_41, 0) = ((MR_Box) (Type2_5));
              MR_hl_field(1, Var_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_40, 0) = ((MR_Box) (Type1_4));
              MR_hl_field(1, Var_40, 1) = ((MR_Box) (Var_41));
            }
            Var_39 = mercury__list__sort_and_remove_dups_1_f_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0), Var_40);
            {
              UnionType_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, UnionType_6, 0) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(1, UnionType_6, 1) = ((MR_Box) (Var_39));
            }
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_84 = ((MR_Word) ((MR_hl_field(1, Type1_4, 1))));
        MR_Integer Var_85 = ((MR_Integer) ((MR_hl_field(1, Type1_4, 0))));

        switch (MR_tag((MR_Word) Type2_5)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer Var_43 = (MR_Integer) ((MR_Unsigned) Var_85 + (MR_Unsigned) 1);
              MR_Word Var_45;
              MR_Word Set0_92;
              MR_Word Set_93;

              mercury__set__list_to_set_2_p_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0), Var_84, &Set0_92);
              mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0), ((MR_Box) (Type2_5)), Set0_92, &Set_93);
              mercury__set__to_sorted_list_2_p_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0), Set_93, &Var_45);
              {
                UnionType_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, UnionType_6, 0) = ((MR_Box) (Var_43));
                MR_hl_field(1, UnionType_6, 1) = ((MR_Box) (Var_45));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer N2_18 = ((MR_Integer) ((MR_hl_field(1, Type2_5, 0))));
              MR_Integer Var_46 = (MR_Integer) ((MR_Unsigned) Var_85 + (MR_Unsigned) N2_18);
              MR_Word Var_47;
              MR_Word Var_48;
              MR_Word IncludedTypes2_66 = ((MR_Word) ((MR_hl_field(1, Type2_5, 1))));

              Var_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0), Var_84, IncludedTypes2_66);
              Var_47 = mercury__list__sort_and_remove_dups_1_f_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0), Var_48);
              {
                UnionType_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, UnionType_6, 0) = ((MR_Box) (Var_46));
                MR_hl_field(1, UnionType_6, 1) = ((MR_Box) (Var_47));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer Var_49 = (MR_Integer) ((MR_Unsigned) Var_85 + (MR_Unsigned) 1);
              MR_Word Var_51;
              MR_Word Set0_90;
              MR_Word Set_91;

              mercury__set__list_to_set_2_p_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0), Var_84, &Set0_90);
              mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0), ((MR_Box) (Type2_5)), Set0_90, &Set_91);
              mercury__set__to_sorted_list_2_p_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0), Set_91, &Var_51);
              {
                UnionType_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, UnionType_6, 0) = ((MR_Box) (Var_49));
                MR_hl_field(1, UnionType_6, 1) = ((MR_Box) (Var_51));
              }
            }
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      switch (MR_tag((MR_Word) Type2_5)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_53;
            MR_Word Var_54;
            MR_Word Var_55;

            {
              Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_55, 0) = ((MR_Box) (Type2_5));
              MR_hl_field(1, Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_54, 0) = ((MR_Box) (Type1_4));
              MR_hl_field(1, Var_54, 1) = ((MR_Box) (Var_55));
            }
            Var_53 = mercury__list__sort_and_remove_dups_1_f_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0), Var_54);
            {
              UnionType_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, UnionType_6, 0) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(1, UnionType_6, 1) = ((MR_Box) (Var_53));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer Var_57;
            MR_Word Var_59;
            MR_Integer N_70 = ((MR_Integer) ((MR_hl_field(1, Type2_5, 0))));
            MR_Word IncludedTypes2_71 = ((MR_Word) ((MR_hl_field(1, Type2_5, 1))));
            MR_Word Set0_86;
            MR_Word Set_87;

            Var_57 = (MR_Integer) ((MR_Unsigned) N_70 + (MR_Unsigned) 1);
            mercury__set__list_to_set_2_p_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0), IncludedTypes2_71, &Set0_86);
            mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0), ((MR_Box) (Type1_4)), Set0_86, &Set_87);
            mercury__set__to_sorted_list_2_p_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0), Set_87, &Var_59);
            {
              UnionType_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, UnionType_6, 0) = ((MR_Box) (Var_57));
              MR_hl_field(1, UnionType_6, 1) = ((MR_Box) (Var_59));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_61;
            MR_Word Var_62;
            MR_Word Var_63;

            {
              Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_63, 0) = ((MR_Box) (Type2_5));
              MR_hl_field(1, Var_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_62, 0) = ((MR_Box) (Type1_4));
              MR_hl_field(1, Var_62, 1) = ((MR_Box) (Var_63));
            }
            Var_61 = mercury__list__sort_and_remove_dups_1_f_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0), Var_62);
            {
              UnionType_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, UnionType_6, 0) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(1, UnionType_6, 1) = ((MR_Box) (Var_61));
            }
          }
          break;
      }
      break;
  }
  return UnionType_6;
}

static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____all_or_nonzero_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdbcomp__trace_counts____Unify____all_or_nonzero_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdbcomp__trace_counts____Compare____all_or_nonzero_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdbcomp__trace_counts____Compare____all_or_nonzero_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____base_count_file_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdbcomp__trace_counts____Unify____base_count_file_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdbcomp__trace_counts____Compare____base_count_file_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdbcomp__trace_counts____Compare____base_count_file_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____line_no_and_count_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdbcomp__trace_counts____Unify____line_no_and_count_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdbcomp__trace_counts____Compare____line_no_and_count_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdbcomp__trace_counts____Compare____line_no_and_count_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____path_port_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdbcomp__trace_counts____Unify____path_port_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdbcomp__trace_counts____Compare____path_port_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdbcomp__trace_counts____Compare____path_port_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____proc_label_in_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdbcomp__trace_counts____Unify____proc_label_in_context_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdbcomp__trace_counts____Compare____proc_label_in_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdbcomp__trace_counts____Compare____proc_label_in_context_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____proc_trace_counts_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdbcomp__trace_counts____Unify____proc_trace_counts_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdbcomp__trace_counts____Compare____proc_trace_counts_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdbcomp__trace_counts____Compare____proc_trace_counts_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____read_trace_counts_list_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdbcomp__trace_counts____Unify____read_trace_counts_list_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdbcomp__trace_counts____Compare____read_trace_counts_list_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdbcomp__trace_counts____Compare____read_trace_counts_list_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____read_trace_counts_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdbcomp__trace_counts____Unify____read_trace_counts_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdbcomp__trace_counts____Compare____read_trace_counts_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdbcomp__trace_counts____Compare____read_trace_counts_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____trace_count_file_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdbcomp__trace_counts____Unify____trace_count_file_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdbcomp__trace_counts____Compare____trace_count_file_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdbcomp__trace_counts____Compare____trace_count_file_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____trace_count_syntax_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdbcomp__trace_counts____Unify____trace_count_syntax_error_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdbcomp__trace_counts____Compare____trace_count_syntax_error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdbcomp__trace_counts____Compare____trace_count_syntax_error_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____trace_counts_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdbcomp__trace_counts____Unify____trace_counts_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdbcomp__trace_counts____Compare____trace_counts_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdbcomp__trace_counts____Compare____trace_counts_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__mdbcomp__trace_counts__init(void)
{
}

void mercury__mdbcomp__trace_counts__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_all_or_nonzero_0);
  MR_register_type_ctor_info(&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_base_count_file_type_0);
  MR_register_type_ctor_info(&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0);
  MR_register_type_ctor_info(&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0);
  MR_register_type_ctor_info(&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0);
  MR_register_type_ctor_info(&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_trace_counts_0);
  MR_register_type_ctor_info(&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_read_trace_counts_list_result_0);
  MR_register_type_ctor_info(&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_read_trace_counts_result_0);
  MR_register_type_ctor_info(&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0);
  MR_register_type_ctor_info(&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_syntax_error_0);
  MR_register_type_ctor_info(&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_counts_0);
}

void mercury__mdbcomp__trace_counts__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__mdbcomp__trace_counts__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module mdbcomp.trace_counts.
