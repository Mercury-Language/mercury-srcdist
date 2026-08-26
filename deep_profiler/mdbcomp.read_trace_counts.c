/*
** Automatically generated from `read_trace_counts.m'
** by the Mercury compiler,
** version rotd-2026-08-26
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


// :- module mdbcomp.read_trace_counts.
// :- implementation.

/*
INIT mercury__mdbcomp__read_trace_counts__init
ENDINIT
*/

#include "mdbcomp.read_trace_counts.mih"


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
#include "mercury_term_parser.mih"
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
#include "term_conversion.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "varset.mih"
#include "io.call_system.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_TypeInfo_Struct2 mdbcomp__read_trace_counts__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0;

static const MR_FA_PseudoTypeInfo_Struct2 mdbcomp__read_trace_counts__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0;

static const MR_PseudoTypeInfo mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__field_types_read_trace_counts_error_0_0[1];

static const MR_DuFunctorDesc mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__du_functor_desc_read_trace_counts_error_0_0;

static const MR_PseudoTypeInfo mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__field_types_read_trace_counts_error_0_1[1];

static const MR_DuFunctorDesc mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__du_functor_desc_read_trace_counts_error_0_1;

static const MR_PseudoTypeInfo mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__field_types_read_trace_counts_error_0_2[1];

static const MR_DuFunctorDesc mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__du_functor_desc_read_trace_counts_error_0_2;

static const MR_PseudoTypeInfo mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__field_types_read_trace_counts_error_0_3[1];

static const MR_DuFunctorDesc mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__du_functor_desc_read_trace_counts_error_0_3;

static const MR_DuFunctorDescPtr mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__du_stag_ordered_read_trace_counts_error_0_0[1];

static const MR_DuFunctorDescPtr mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__du_stag_ordered_read_trace_counts_error_0_1[1];

static const MR_DuFunctorDescPtr mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__du_stag_ordered_read_trace_counts_error_0_2[1];

static const MR_DuFunctorDescPtr mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__du_stag_ordered_read_trace_counts_error_0_3[1];

static const MR_DuPtagLayout mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__du_ptag_ordered_read_trace_counts_error_0[4];

static const MR_DuFunctorDescPtr mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__du_name_ordered_read_trace_counts_error_0[4];

static const MR_Integer mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__functor_number_map_read_trace_counts_error_0[4];

static const MR_FA_TypeInfo_Struct2 mdbcomp__read_trace_counts__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0;

static const MR_PseudoTypeInfo mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__field_types_read_trace_counts_file_result_0_0[2];

static const MR_DuFunctorDesc mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__du_functor_desc_read_trace_counts_file_result_0_0;

static const MR_PseudoTypeInfo mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__field_types_read_trace_counts_file_result_0_1[1];

static const MR_DuFunctorDesc mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__du_functor_desc_read_trace_counts_file_result_0_1;

static const MR_DuFunctorDescPtr mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__du_stag_ordered_read_trace_counts_file_result_0_0[1];

static const MR_DuFunctorDescPtr mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__du_stag_ordered_read_trace_counts_file_result_0_1[1];

static const MR_DuPtagLayout mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__du_ptag_ordered_read_trace_counts_file_result_0[2];

static const MR_DuFunctorDescPtr mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__du_name_ordered_read_trace_counts_file_result_0[2];

static const MR_Integer mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__functor_number_map_read_trace_counts_file_result_0[2];

static const MR_PseudoTypeInfo mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__field_types_read_trace_counts_result_0_0[2];

static const MR_DuFunctorDesc mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__du_functor_desc_read_trace_counts_result_0_0;

static const MR_PseudoTypeInfo mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__field_types_read_trace_counts_result_0_1[1];

static const MR_DuFunctorDesc mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__du_functor_desc_read_trace_counts_result_0_1;

static const MR_DuFunctorDescPtr mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__du_stag_ordered_read_trace_counts_result_0_0[1];

static const MR_DuFunctorDescPtr mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__du_stag_ordered_read_trace_counts_result_0_1[1];

static const MR_DuPtagLayout mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__du_ptag_ordered_read_trace_counts_result_0[2];

static const MR_DuFunctorDescPtr mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__du_name_ordered_read_trace_counts_result_0[2];

static const MR_Integer mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__functor_number_map_read_trace_counts_result_0[2];

static const MR_Integer mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__functor_number_map_trace_count_syntax_error_0[1];

static const MR_NotagFunctorDesc mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__notag_functor_desc_trace_count_syntax_error_0;

static void MR_CALL 
mdbcomp__read_trace_counts____Compare____trace_count_syntax_error_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mdbcomp__read_trace_counts____Unify____trace_count_syntax_error_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mdbcomp__read_trace_counts____Compare____read_trace_counts_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mdbcomp__read_trace_counts____Unify____read_trace_counts_result_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mdbcomp__read_trace_counts____Compare____read_trace_counts_error_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mdbcomp__read_trace_counts____Unify____read_trace_counts_error_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mdbcomp__read_trace_counts__old_read_trace_counts_setup_5_p_0(
  MR_Word InputStream_6,
  MR_Word STATE_VARIABLE_TraceCounts_0_15,
  MR_Word * STATE_VARIABLE_TraceCounts_16);

static void MR_CALL 
mdbcomp__read_trace_counts__old_read_proc_trace_counts_9_p_0(
  MR_Word tscc_proc_1_input_1_InputStream_10,
  MR_Integer tscc_proc_1_input_2_HeaderLineNumber_11,
  MR_String tscc_proc_1_input_3_HeaderLine_12,
  MR_Word tscc_proc_1_input_4_CurModuleNameSym_13,
  MR_String tscc_proc_1_input_5_CurFileName_14,
  MR_Word tscc_proc_1_input_6_STATE_VARIABLE_TraceCounts_0_57,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_TraceCounts_58);

static void MR_CALL 
mdbcomp__read_trace_counts__old_read_proc_trace_counts_2_7_p_0(
  MR_Word tscc_proc_2_input_1_InputStream_8,
  MR_Word tscc_proc_2_input_2_ProcLabelInContext_9,
  MR_Word tscc_proc_2_input_3_ProcCounts0_10,
  MR_Word tscc_proc_2_input_4_STATE_VARIABLE_TraceCounts_0_24,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_TraceCounts_58);

static void MR_CALL 
mdbcomp__read_trace_counts__read_and_union_trace_counts_loop_9_p_0(
  MR_Word ShowProgress_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_FileType_0_3,
  MR_Word * STATE_VARIABLE_FileType_4,
  MR_Word STATE_VARIABLE_TraceCounts_0_5,
  MR_Word * STATE_VARIABLE_TraceCounts_6,
  MR_Word * HeadVar__7_7);

static void MR_CALL 
mdbcomp__read_trace_counts__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_114_111_99_95_116_114_97_99_101_95_99_111_117_110_116_115_95_95_91_49_93_95_48_10_p_0(
  MR_Integer LineNumber0_12,
  MR_Word Lines0_13,
  MR_Word TCModuleNameSym0_14,
  MR_String TCFileName0_15,
  MR_Word * MaybeError_16,
  MR_Word STATE_VARIABLE_TraceCounts_0_63,
  MR_Word * STATE_VARIABLE_TraceCounts_64);

static void MR_CALL 
mdbcomp__read_trace_counts__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_114_111_99_95_112_97_116_104_95_116_114_97_99_101_95_99_111_117_110_116_115_95_95_91_49_93_95_48_9_p_0(
  MR_Integer LineNumber0_11,
  MR_Integer * LineNumber_12,
  MR_Word Lines0_13,
  MR_Word * Lines_14,
  MR_Word ProcCounts0_15,
  MR_Word * ProcCounts_16);

static MR_bool MR_CALL 
mdbcomp__read_trace_counts__parse_path_port_line_5_p_0(
  MR_String Line_6,
  MR_Word * PathPort_7,
  MR_Integer * LineNumber_8,
  MR_Integer * ExecCount_9,
  MR_Integer * NumTests_10);

static MR_bool MR_CALL 
mdbcomp__read_trace_counts__decimal_token_to_int_2_p_0(
  MR_Word Token_3,
  MR_Integer * Int_4);

static void MR_CALL 
mdbcomp__read_trace_counts__old_read_trace_counts_base_4_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mdbcomp__read_trace_counts__old_read_trace_counts_base_4_p_0(
  MR_String FileName_5,
  MR_Word * ReadResult_6);

static MR_String MR_CALL 
mdbcomp__read_trace_counts__read_trace_counts_error_to_str_2_f_0(
  MR_String FileName_4,
  MR_Word ReadTCError_5);

static MR_bool MR_CALL 
mdbcomp__read_trace_counts____Unify____read_trace_counts_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdbcomp__read_trace_counts____Compare____read_trace_counts_error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__read_trace_counts____Unify____read_trace_counts_file_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdbcomp__read_trace_counts____Compare____read_trace_counts_file_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__read_trace_counts____Unify____read_trace_counts_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdbcomp__read_trace_counts____Compare____read_trace_counts_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__read_trace_counts____Unify____trace_count_syntax_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdbcomp__read_trace_counts____Compare____trace_count_syntax_error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mdbcomp__read_trace_counts_scalar_common_1[2][3];

static /* final */ const MR_Box mdbcomp__read_trace_counts_scalar_common_2[1][2];

static /* final */ const MR_Box mdbcomp__read_trace_counts_scalar_common_3[6][1];

static /* final */ const MR_Box mdbcomp__read_trace_counts_scalar_common_4[1][8];


struct mdbcomp__read_trace_counts__vector_common_type_5_0_s {
  const MR_String mdbcomp__read_trace_counts__vector_common_type_5_0__vct_5_f_0;
  const MR_Integer mdbcomp__read_trace_counts__vector_common_type_5_0__vct_5_f_1;
};

static /* final */ const struct mdbcomp__read_trace_counts__vector_common_type_5_0_s mdbcomp__read_trace_counts_vector_common_5[8];



static /* final */ const MR_Box mdbcomp__read_trace_counts_scalar_common_1[2][3] = {
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
    ((MR_Box) (&mdbcomp__read_trace_counts_scalar_common_1[0]))
  },
};

static /* final */ const MR_Box mdbcomp__read_trace_counts_scalar_common_2[1][2] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box mdbcomp__read_trace_counts_scalar_common_3[6][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_String) "no trace count file id")) },
  /* row   1 */
  { ((MR_Box) (MR_mkword(2, &mdbcomp__read_trace_counts_scalar_common_3[0]))) },
  /* row   2 */
  { ((MR_Box) ((MR_String) "no info on trace count file type")) },
  /* row   3 */
  { ((MR_Box) (MR_mkword(2, &mdbcomp__read_trace_counts_scalar_common_3[2]))) },
  /* row   4 */
  { ((MR_Box) ((MR_String) "")) },
  /* row   5 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};

static /* final */ const MR_Box mdbcomp__read_trace_counts_scalar_common_4[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_input_stream_0)),
    ((MR_Box) (&mdbcomp__read_trace_counts__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)),
    ((MR_Box) (&mdbcomp__read_trace_counts__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};


static /* final */ const struct mdbcomp__read_trace_counts__vector_common_type_5_0_s mdbcomp__read_trace_counts_vector_common_5[8] = {
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
  /* row   4 */
  {
    (MR_String) "fproc",
    (MR_Integer) 0
  },
  /* row   5 */
  {
    (MR_String) "fprocdecl",
    (MR_Integer) 1
  },
  /* row   6 */
  {
    (MR_String) "pproc",
    (MR_Integer) 2
  },
  /* row   7 */
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


static const MR_FA_TypeInfo_Struct2 mdbcomp__read_trace_counts__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0),
    (MR_TypeInfo) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 mdbcomp__read_trace_counts__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0),
    (MR_PseudoTypeInfo) (&mdbcomp__read_trace_counts__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)
  }
};

static const MR_PseudoTypeInfo mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__field_types_read_trace_counts_error_0_0[1] = { (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_error_0) };

static const MR_DuFunctorDesc mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__du_functor_desc_read_trace_counts_error_0_0 = {
  (MR_String) "rtce_open_error",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__field_types_read_trace_counts_error_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__field_types_read_trace_counts_error_0_1[1] = { (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_error_0) };

static const MR_DuFunctorDesc mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__du_functor_desc_read_trace_counts_error_0_1 = {
  (MR_String) "rtce_io_error",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__field_types_read_trace_counts_error_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__field_types_read_trace_counts_error_0_2[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__du_functor_desc_read_trace_counts_error_0_2 = {
  (MR_String) "rtce_syntax_error",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__field_types_read_trace_counts_error_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__field_types_read_trace_counts_error_0_3[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__du_functor_desc_read_trace_counts_error_0_3 = {
  (MR_String) "rtce_error_message",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(3),
  (MR_Integer) -1,
  INT32_C(3),
  mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__field_types_read_trace_counts_error_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__du_stag_ordered_read_trace_counts_error_0_0[1] = { &mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__du_functor_desc_read_trace_counts_error_0_0 };

static const MR_DuFunctorDescPtr mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__du_stag_ordered_read_trace_counts_error_0_1[1] = { &mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__du_functor_desc_read_trace_counts_error_0_1 };

static const MR_DuFunctorDescPtr mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__du_stag_ordered_read_trace_counts_error_0_2[1] = { &mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__du_functor_desc_read_trace_counts_error_0_2 };

static const MR_DuFunctorDescPtr mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__du_stag_ordered_read_trace_counts_error_0_3[1] = { &mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__du_functor_desc_read_trace_counts_error_0_3 };

static const MR_DuPtagLayout mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__du_ptag_ordered_read_trace_counts_error_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__du_stag_ordered_read_trace_counts_error_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__du_stag_ordered_read_trace_counts_error_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__du_stag_ordered_read_trace_counts_error_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__du_stag_ordered_read_trace_counts_error_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__du_name_ordered_read_trace_counts_error_0[4] = {
  &mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__du_functor_desc_read_trace_counts_error_0_3,
  &mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__du_functor_desc_read_trace_counts_error_0_1,
  &mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__du_functor_desc_read_trace_counts_error_0_0,
  &mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__du_functor_desc_read_trace_counts_error_0_2
};

static const MR_Integer mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__functor_number_map_read_trace_counts_error_0[4] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__type_ctor_info_read_trace_counts_error_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__read_trace_counts____Unify____read_trace_counts_error_0_0_10001)),
  ((MR_Box) (mdbcomp__read_trace_counts____Compare____read_trace_counts_error_0_0_10001)),
  (MR_String) "mdbcomp.read_trace_counts",
  (MR_String) "read_trace_counts_error",
  { mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__du_name_ordered_read_trace_counts_error_0 },
  { mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__du_ptag_ordered_read_trace_counts_error_0 },
  (MR_Integer) 4,
  UINT16_C(12),
  mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__functor_number_map_read_trace_counts_error_0,

};

static const MR_FA_TypeInfo_Struct2 mdbcomp__read_trace_counts__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0),
    (MR_TypeInfo) (&mdbcomp__read_trace_counts__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)
  }
};

static const MR_PseudoTypeInfo mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__field_types_read_trace_counts_file_result_0_0[2] = {
  (MR_PseudoTypeInfo) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0),
  (MR_PseudoTypeInfo) (&mdbcomp__read_trace_counts__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)
};

static const MR_DuFunctorDesc mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__du_functor_desc_read_trace_counts_file_result_0_0 = {
  (MR_String) "rtcf_ok",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__field_types_read_trace_counts_file_result_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__field_types_read_trace_counts_file_result_0_1[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__du_functor_desc_read_trace_counts_file_result_0_1 = {
  (MR_String) "rtcf_error_message",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__field_types_read_trace_counts_file_result_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__du_stag_ordered_read_trace_counts_file_result_0_0[1] = { &mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__du_functor_desc_read_trace_counts_file_result_0_0 };

static const MR_DuFunctorDescPtr mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__du_stag_ordered_read_trace_counts_file_result_0_1[1] = { &mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__du_functor_desc_read_trace_counts_file_result_0_1 };

static const MR_DuPtagLayout mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__du_ptag_ordered_read_trace_counts_file_result_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__du_stag_ordered_read_trace_counts_file_result_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__du_stag_ordered_read_trace_counts_file_result_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__du_name_ordered_read_trace_counts_file_result_0[2] = {
  &mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__du_functor_desc_read_trace_counts_file_result_0_1,
  &mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__du_functor_desc_read_trace_counts_file_result_0_0
};

static const MR_Integer mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__functor_number_map_read_trace_counts_file_result_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__type_ctor_info_read_trace_counts_file_result_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__read_trace_counts____Unify____read_trace_counts_file_result_0_0_10001)),
  ((MR_Box) (mdbcomp__read_trace_counts____Compare____read_trace_counts_file_result_0_0_10001)),
  (MR_String) "mdbcomp.read_trace_counts",
  (MR_String) "read_trace_counts_file_result",
  { mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__du_name_ordered_read_trace_counts_file_result_0 },
  { mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__du_ptag_ordered_read_trace_counts_file_result_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__functor_number_map_read_trace_counts_file_result_0,

};

static const MR_PseudoTypeInfo mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__field_types_read_trace_counts_result_0_0[2] = {
  (MR_PseudoTypeInfo) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0),
  (MR_PseudoTypeInfo) (&mdbcomp__read_trace_counts__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)
};

static const MR_DuFunctorDesc mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__du_functor_desc_read_trace_counts_result_0_0 = {
  (MR_String) "rtc_ok",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__field_types_read_trace_counts_result_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__field_types_read_trace_counts_result_0_1[1] = { (MR_PseudoTypeInfo) (&mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__type_ctor_info_read_trace_counts_error_0) };

static const MR_DuFunctorDesc mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__du_functor_desc_read_trace_counts_result_0_1 = {
  (MR_String) "rtc_error",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__field_types_read_trace_counts_result_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__du_stag_ordered_read_trace_counts_result_0_0[1] = { &mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__du_functor_desc_read_trace_counts_result_0_0 };

static const MR_DuFunctorDescPtr mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__du_stag_ordered_read_trace_counts_result_0_1[1] = { &mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__du_functor_desc_read_trace_counts_result_0_1 };

static const MR_DuPtagLayout mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__du_ptag_ordered_read_trace_counts_result_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__du_stag_ordered_read_trace_counts_result_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__du_stag_ordered_read_trace_counts_result_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__du_name_ordered_read_trace_counts_result_0[2] = {
  &mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__du_functor_desc_read_trace_counts_result_0_1,
  &mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__du_functor_desc_read_trace_counts_result_0_0
};

static const MR_Integer mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__functor_number_map_read_trace_counts_result_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__type_ctor_info_read_trace_counts_result_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__read_trace_counts____Unify____read_trace_counts_result_0_0_10001)),
  ((MR_Box) (mdbcomp__read_trace_counts____Compare____read_trace_counts_result_0_0_10001)),
  (MR_String) "mdbcomp.read_trace_counts",
  (MR_String) "read_trace_counts_result",
  { mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__du_name_ordered_read_trace_counts_result_0 },
  { mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__du_ptag_ordered_read_trace_counts_result_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__functor_number_map_read_trace_counts_result_0,

};

static const MR_Integer mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__functor_number_map_trace_count_syntax_error_0[1] = { (MR_Integer) 0 };

static const MR_NotagFunctorDesc mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__notag_functor_desc_trace_count_syntax_error_0 = {
  (MR_String) "trace_count_syntax_error",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__type_ctor_info_trace_count_syntax_error_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mdbcomp__read_trace_counts____Unify____trace_count_syntax_error_0_0_10001)),
  ((MR_Box) (mdbcomp__read_trace_counts____Compare____trace_count_syntax_error_0_0_10001)),
  (MR_String) "mdbcomp.read_trace_counts",
  (MR_String) "trace_count_syntax_error",
  { &mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__notag_functor_desc_trace_count_syntax_error_0 },
  { &mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__notag_functor_desc_trace_count_syntax_error_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__functor_number_map_trace_count_syntax_error_0,

};

static void MR_CALL 
mdbcomp__read_trace_counts____Compare____trace_count_syntax_error_0_0(
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
mdbcomp__read_trace_counts____Unify____trace_count_syntax_error_0_0(
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

static void MR_CALL 
mdbcomp__read_trace_counts____Compare____read_trace_counts_result_0_0(
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
      MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word ArgY1_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

      mdbcomp__read_trace_counts____Compare____read_trace_counts_error_0_0(HeadVar__1_1, ArgX1_9, ArgY1_10);
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
      mercury__builtin__compare_3_p_0((MR_Word) (&mdbcomp__read_trace_counts_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

static MR_bool MR_CALL 
mdbcomp__read_trace_counts____Unify____read_trace_counts_result_0_0(
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
    MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_8;
    MR_Integer CastX_21;
    MR_Integer CastY_22;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      CastX_21 = (MR_Integer) (ArgX1_7);
      CastY_22 = (MR_Integer) (ArgY1_8);
      succeeded = (CastX_21 == CastY_22);
      if (succeeded)
        succeeded = MR_TRUE;
      else
        switch (MR_tag((MR_Word) ArgX1_7)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgX1_13 = ((MR_Word) ((MR_hl_field(0, ArgX1_7, 0))));
              MR_Word ArgY1_14;

              succeeded = ((MR_tag((MR_Word) ArgY1_8)) == (MR_Integer) 0);
              if (succeeded)
              {
                ArgY1_14 = ((MR_Word) ((MR_hl_field(0, ArgY1_8, 0))));
                succeeded = mercury__io____Unify____error_0_0(ArgX1_13, ArgY1_14);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_15 = ((MR_Word) ((MR_hl_field(1, ArgX1_7, 0))));
              MR_Word ArgY1_16;

              succeeded = ((MR_tag((MR_Word) ArgY1_8)) == (MR_Integer) 1);
              if (succeeded)
              {
                ArgY1_16 = ((MR_Word) ((MR_hl_field(1, ArgY1_8, 0))));
                succeeded = mercury__io____Unify____error_0_0(ArgX1_15, ArgY1_16);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_String ArgX1_17 = ((MR_String) ((MR_hl_field(2, ArgX1_7, 0))));
              MR_String ArgY1_18;

              succeeded = ((MR_tag((MR_Word) ArgY1_8)) == (MR_Integer) 2);
              if (succeeded)
              {
                ArgY1_18 = ((MR_String) ((MR_hl_field(2, ArgY1_8, 0))));
                succeeded = (strcmp(ArgX1_17, ArgY1_18) == 0);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_String ArgX1_19 = ((MR_String) ((MR_hl_field(3, ArgX1_7, 0))));
              MR_String ArgY1_20;

              succeeded = ((MR_tag((MR_Word) ArgY1_8)) == (MR_Integer) 3);
              if (succeeded)
              {
                ArgY1_20 = ((MR_String) ((MR_hl_field(3, ArgY1_8, 0))));
                succeeded = (strcmp(ArgX1_19, ArgY1_20) == 0);
              }
            }
            break;
        }
    }
  }
  else
  {
    MR_Word TypeInfo_12_12;
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
        TypeInfo_12_12 = (MR_Word) (&mdbcomp__read_trace_counts_scalar_common_1[1]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
  }
  return succeeded;
}

void MR_CALL 
mdbcomp__read_trace_counts____Compare____read_trace_counts_file_result_0_0(
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
      mercury__builtin__compare_3_p_0((MR_Word) (&mdbcomp__read_trace_counts_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

MR_bool MR_CALL 
mdbcomp__read_trace_counts____Unify____read_trace_counts_file_result_0_0(
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
    MR_Word TypeInfo_12_12;
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
        TypeInfo_12_12 = (MR_Word) (&mdbcomp__read_trace_counts_scalar_common_1[1]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
mdbcomp__read_trace_counts____Compare____read_trace_counts_error_0_0(
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
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
              MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));

              mercury__io____Compare____error_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
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
              MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

              mercury__io____Compare____error_0_0(HeadVar__1_1, ArgX1_6, ArgY1_7);
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
              MR_String ArgX1_8 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, 0))));
              MR_String ArgY1_9 = ((MR_String) ((MR_hl_field(2, HeadVar__3_3, 0))));

              mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX1_8, ArgY1_9);
            }
            break;
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 3:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 3:
            {
              MR_String ArgX1_10 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 0))));
              MR_String ArgY1_11 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 0))));

              mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX1_10, ArgY1_11);
            }
            break;
        }
        break;
    }
}

static MR_bool MR_CALL 
mdbcomp__read_trace_counts____Unify____read_trace_counts_error_0_0(
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
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
            succeeded = mercury__io____Unify____error_0_0(ArgX1_3, ArgY1_4);
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
            succeeded = mercury__io____Unify____error_0_0(ArgX1_5, ArgY1_6);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String ArgX1_7 = ((MR_String) ((MR_hl_field(2, HeadVar__1_1, 0))));
          MR_String ArgY1_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_8 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, 0))));
            succeeded = (strcmp(ArgX1_7, ArgY1_8) == 0);
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_String ArgX1_9 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 0))));
          MR_String ArgY1_10;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3);
          if (succeeded)
          {
            ArgY1_10 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 0))));
            succeeded = (strcmp(ArgX1_9, ArgY1_10) == 0);
          }
        }
        break;
    }
  return succeeded;
}

static void MR_CALL 
mdbcomp__read_trace_counts__old_read_trace_counts_setup_5_p_0(
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

        mdbcomp__read_trace_counts__old_read_proc_trace_counts_9_p_0(InputStream_6, LineNumber_9, Line_11, (MR_Word) (&mdbcomp__read_trace_counts_scalar_common_3[4]), (MR_String) "", STATE_VARIABLE_TraceCounts_0_15, STATE_VARIABLE_TraceCounts_16);
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
mdbcomp__read_trace_counts__old_read_proc_trace_counts_9_p_0(
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

  // The code for TSCC PROC 1: pred mdbcomp.read_trace_counts.old_read_proc_trace_counts/9-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred mdbcomp.read_trace_counts.old_read_proc_trace_counts/9-0
  ;
  // proc 2 in TSCC: pred mdbcomp.read_trace_counts.old_read_proc_trace_counts_2/7-0
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
                    result_3 = MR_strcmp(TokenName_19, ((&mdbcomp__read_trace_counts_vector_common_5[4 + mid_2]))->mdbcomp__read_trace_counts__vector_common_type_5_0__vct_5_f_0);
                    if ((result_3 == (MR_Integer) 0))
                    {
                      switch (((&mdbcomp__read_trace_counts_vector_common_5[4 + mid_2]))->mdbcomp__read_trace_counts__vector_common_type_5_0__vct_5_f_1) {
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
                                succeeded = mdbcomp__read_trace_counts__decimal_token_to_int_2_p_0(Var_163, &Arity_131);
                                if (succeeded)
                                {
                                  succeeded = mdbcomp__read_trace_counts__decimal_token_to_int_2_p_0(Var_167, &Mode_132);
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
                                    succeeded = mdbcomp__read_trace_counts__decimal_token_to_int_2_p_0(Var_167, &Arity_141);
                                    if (succeeded)
                                    {
                                      succeeded = mdbcomp__read_trace_counts__decimal_token_to_int_2_p_0(ModeToken_140, &Mode_142);
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
                                succeeded = mdbcomp__read_trace_counts__decimal_token_to_int_2_p_0(Var_163, &Arity_37);
                                if (succeeded)
                                {
                                  succeeded = mdbcomp__read_trace_counts__decimal_token_to_int_2_p_0(Var_167, &Mode_38);
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
                                    succeeded = mdbcomp__read_trace_counts__decimal_token_to_int_2_p_0(Var_167, &Arity_136);
                                    if (succeeded)
                                    {
                                      succeeded = mdbcomp__read_trace_counts__decimal_token_to_int_2_p_0(ModeToken_135, &Mode_137);
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
            MR_Word STATE_VARIABLE_TraceCounts_4_105;
            MR_Word ProbeCounts_54;
            MR_Word STATE_VARIABLE_TraceCounts_3_104;
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
            succeeded = mercury__map__remove_4_p_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0), (MR_Word) (&mdbcomp__read_trace_counts_scalar_common_1[0]), ((MR_Box) (ProcLabelInContext_53)), &conv0_ProbeCounts_54, STATE_VARIABLE_TraceCounts_0_57, &STATE_VARIABLE_TraceCounts_3_104);
            if (succeeded)
            {
              ProbeCounts_54 = ((MR_Word) (conv0_ProbeCounts_54));
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              STATE_VARIABLE_TraceCounts_4_105 = STATE_VARIABLE_TraceCounts_3_104;
              StartCounts_55 = ProbeCounts_54;
            }
            else
            {
              StartCounts_55 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0), (MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0));
              STATE_VARIABLE_TraceCounts_4_105 = STATE_VARIABLE_TraceCounts_0_57;
            }
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_2_input_1_InputStream_8 = InputStream_10;
            next_value_of_tscc_proc_2_input_2_ProcLabelInContext_9 = ProcLabelInContext_53;
            next_value_of_tscc_proc_2_input_3_ProcCounts0_10 = StartCounts_55;
            next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_TraceCounts_0_24 = STATE_VARIABLE_TraceCounts_4_105;
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

            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mdbcomp__read_trace_counts_scalar_common_3[5]), HeaderLineNumber_11, &Var_169);
            Var_176 = mercury__string__f_43_43_2_f_0(Var_169, (MR_String) " of execution trace");
            Message_56 = mercury__string__f_43_43_2_f_0((MR_String) "parse error on line ", Var_176);
            Var_112 = (MR_Word) (Message_56);
            {
              mercury__exception__throw_1_p_0((MR_Word) (&mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__type_ctor_info_trace_count_syntax_error_0), ((MR_Box) (Var_112)));
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

      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mdbcomp__read_trace_counts_scalar_common_3[5]), HeaderLineNumber_11, &Var_179);
      Var_186 = mercury__string__f_43_43_2_f_0(Var_179, (MR_String) " of execution trace");
      Message_149 = mercury__string__f_43_43_2_f_0((MR_String) "parse error on line ", Var_186);
      Var_117 = (MR_Word) (Message_149);
      {
        mercury__exception__throw_1_p_0((MR_Word) (&mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__type_ctor_info_trace_count_syntax_error_0), ((MR_Box) (Var_117)));
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
        mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0), (MR_Word) (&mdbcomp__read_trace_counts_scalar_common_1[0]), ((MR_Box) (ProcLabelInContext_9)), ((MR_Box) (ProcCounts0_10)), STATE_VARIABLE_TraceCounts_0_24, &STATE_VARIABLE_TraceCounts_25);
        break;
      case (MR_Integer) 1:
        {
          MR_String Line_14 = ((MR_String) ((MR_hl_field(1, Result_13, 0))));
          MR_Word PathPort_15;
          MR_Integer LineNumber_16;
          MR_Integer ExecCount_17;
          MR_Integer NumTests_18;

          succeeded = mdbcomp__read_trace_counts__parse_path_port_line_5_p_0(Line_14, &PathPort_15, &LineNumber_16, &ExecCount_17, &NumTests_18);
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
            MR_Word STATE_VARIABLE_TraceCounts_2_31;
            MR_Integer LineNumber_36;
            MR_Word next_value_of_tscc_proc_1_input_1_InputStream_10;
            MR_Integer next_value_of_tscc_proc_1_input_2_HeaderLineNumber_11;
            MR_String next_value_of_tscc_proc_1_input_3_HeaderLine_12;
            MR_Word next_value_of_tscc_proc_1_input_4_CurModuleNameSym_13;
            MR_String next_value_of_tscc_proc_1_input_5_CurFileName_14;
            MR_Word next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_TraceCounts_0_57;

            mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0), (MR_Word) (&mdbcomp__read_trace_counts_scalar_common_1[0]), ((MR_Box) (ProcLabelInContext_9)), ((MR_Box) (ProcCounts0_10)), STATE_VARIABLE_TraceCounts_0_24, &STATE_VARIABLE_TraceCounts_2_31);
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
            next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_TraceCounts_0_57 = STATE_VARIABLE_TraceCounts_2_31;
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
mdbcomp__read_trace_counts__old_read_proc_trace_counts_2_7_p_0(
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

  // The code for TSCC PROC 2: pred mdbcomp.read_trace_counts.old_read_proc_trace_counts_2/7-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred mdbcomp.read_trace_counts.old_read_proc_trace_counts/9-0
  ;
  // proc 2 in TSCC: pred mdbcomp.read_trace_counts.old_read_proc_trace_counts_2/7-0
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
                    result_3 = MR_strcmp(TokenName_19, ((&mdbcomp__read_trace_counts_vector_common_5[4 + mid_2]))->mdbcomp__read_trace_counts__vector_common_type_5_0__vct_5_f_0);
                    if ((result_3 == (MR_Integer) 0))
                    {
                      switch (((&mdbcomp__read_trace_counts_vector_common_5[4 + mid_2]))->mdbcomp__read_trace_counts__vector_common_type_5_0__vct_5_f_1) {
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
                                succeeded = mdbcomp__read_trace_counts__decimal_token_to_int_2_p_0(Var_163, &Arity_131);
                                if (succeeded)
                                {
                                  succeeded = mdbcomp__read_trace_counts__decimal_token_to_int_2_p_0(Var_167, &Mode_132);
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
                                    succeeded = mdbcomp__read_trace_counts__decimal_token_to_int_2_p_0(Var_167, &Arity_141);
                                    if (succeeded)
                                    {
                                      succeeded = mdbcomp__read_trace_counts__decimal_token_to_int_2_p_0(ModeToken_140, &Mode_142);
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
                                succeeded = mdbcomp__read_trace_counts__decimal_token_to_int_2_p_0(Var_163, &Arity_37);
                                if (succeeded)
                                {
                                  succeeded = mdbcomp__read_trace_counts__decimal_token_to_int_2_p_0(Var_167, &Mode_38);
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
                                    succeeded = mdbcomp__read_trace_counts__decimal_token_to_int_2_p_0(Var_167, &Arity_136);
                                    if (succeeded)
                                    {
                                      succeeded = mdbcomp__read_trace_counts__decimal_token_to_int_2_p_0(ModeToken_135, &Mode_137);
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
            MR_Word STATE_VARIABLE_TraceCounts_4_105;
            MR_Word ProbeCounts_54;
            MR_Word STATE_VARIABLE_TraceCounts_3_104;
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
            succeeded = mercury__map__remove_4_p_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0), (MR_Word) (&mdbcomp__read_trace_counts_scalar_common_1[0]), ((MR_Box) (ProcLabelInContext_53)), &conv0_ProbeCounts_54, STATE_VARIABLE_TraceCounts_0_57, &STATE_VARIABLE_TraceCounts_3_104);
            if (succeeded)
            {
              ProbeCounts_54 = ((MR_Word) (conv0_ProbeCounts_54));
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              STATE_VARIABLE_TraceCounts_4_105 = STATE_VARIABLE_TraceCounts_3_104;
              StartCounts_55 = ProbeCounts_54;
            }
            else
            {
              StartCounts_55 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0), (MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0));
              STATE_VARIABLE_TraceCounts_4_105 = STATE_VARIABLE_TraceCounts_0_57;
            }
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_2_input_1_InputStream_8 = InputStream_10;
            next_value_of_tscc_proc_2_input_2_ProcLabelInContext_9 = ProcLabelInContext_53;
            next_value_of_tscc_proc_2_input_3_ProcCounts0_10 = StartCounts_55;
            next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_TraceCounts_0_24 = STATE_VARIABLE_TraceCounts_4_105;
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

            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mdbcomp__read_trace_counts_scalar_common_3[5]), HeaderLineNumber_11, &Var_169);
            Var_176 = mercury__string__f_43_43_2_f_0(Var_169, (MR_String) " of execution trace");
            Message_56 = mercury__string__f_43_43_2_f_0((MR_String) "parse error on line ", Var_176);
            Var_112 = (MR_Word) (Message_56);
            {
              mercury__exception__throw_1_p_0((MR_Word) (&mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__type_ctor_info_trace_count_syntax_error_0), ((MR_Box) (Var_112)));
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

      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mdbcomp__read_trace_counts_scalar_common_3[5]), HeaderLineNumber_11, &Var_179);
      Var_186 = mercury__string__f_43_43_2_f_0(Var_179, (MR_String) " of execution trace");
      Message_149 = mercury__string__f_43_43_2_f_0((MR_String) "parse error on line ", Var_186);
      Var_117 = (MR_Word) (Message_149);
      {
        mercury__exception__throw_1_p_0((MR_Word) (&mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__type_ctor_info_trace_count_syntax_error_0), ((MR_Box) (Var_117)));
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
        mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0), (MR_Word) (&mdbcomp__read_trace_counts_scalar_common_1[0]), ((MR_Box) (ProcLabelInContext_9)), ((MR_Box) (ProcCounts0_10)), STATE_VARIABLE_TraceCounts_0_24, &STATE_VARIABLE_TraceCounts_25);
        break;
      case (MR_Integer) 1:
        {
          MR_String Line_14 = ((MR_String) ((MR_hl_field(1, Result_13, 0))));
          MR_Word PathPort_15;
          MR_Integer LineNumber_16;
          MR_Integer ExecCount_17;
          MR_Integer NumTests_18;

          succeeded = mdbcomp__read_trace_counts__parse_path_port_line_5_p_0(Line_14, &PathPort_15, &LineNumber_16, &ExecCount_17, &NumTests_18);
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
            MR_Word STATE_VARIABLE_TraceCounts_2_31;
            MR_Integer LineNumber_36;
            MR_Word next_value_of_tscc_proc_1_input_1_InputStream_10;
            MR_Integer next_value_of_tscc_proc_1_input_2_HeaderLineNumber_11;
            MR_String next_value_of_tscc_proc_1_input_3_HeaderLine_12;
            MR_Word next_value_of_tscc_proc_1_input_4_CurModuleNameSym_13;
            MR_String next_value_of_tscc_proc_1_input_5_CurFileName_14;
            MR_Word next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_TraceCounts_0_57;

            mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0), (MR_Word) (&mdbcomp__read_trace_counts_scalar_common_1[0]), ((MR_Box) (ProcLabelInContext_9)), ((MR_Box) (ProcCounts0_10)), STATE_VARIABLE_TraceCounts_0_24, &STATE_VARIABLE_TraceCounts_2_31);
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
            next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_TraceCounts_0_57 = STATE_VARIABLE_TraceCounts_2_31;
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

void MR_CALL 
mdbcomp__read_trace_counts__read_and_union_trace_counts_8_p_0(
  MR_Word ShowProgress_9,
  MR_Word Files_10,
  MR_Integer * NumTests_11,
  MR_Word * TestKinds_12,
  MR_Word * TraceCounts_13,
  MR_Word * MaybeError_14)
{
  MR_Word FileType_16;
  MR_Word TestKindList_17;
  MR_Word Var_21;

  Var_21 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0), (MR_Word) (&mdbcomp__read_trace_counts_scalar_common_1[0]));
  mdbcomp__read_trace_counts__read_and_union_trace_counts_loop_9_p_0(ShowProgress_9, Files_10, (MR_Word) (MR_mkword(1, &mdbcomp__read_trace_counts_scalar_common_2[0])), &FileType_16, Var_21, TraceCounts_13, MaybeError_14);
  *NumTests_11 = ((MR_Integer) ((MR_hl_field(1, FileType_16, 0))));
  TestKindList_17 = ((MR_Word) ((MR_hl_field(1, FileType_16, 1))));
  mercury__set__list_to_set_2_p_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0), TestKindList_17, TestKinds_12);
}

static void MR_CALL 
mdbcomp__read_trace_counts__read_and_union_trace_counts_loop_9_p_0(
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
      mdbcomp__read_trace_counts__read_trace_counts_file_4_p_0(FileName_21, &TCResult_28);
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
        MR_Word STATE_VARIABLE_TraceCounts_1_41;
        MR_Word Var_42;
        MR_Word STATE_VARIABLE_FileType_1_44;
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
        mdbcomp__trace_counts__summarize_trace_counts_list_2_p_0(Var_40, &STATE_VARIABLE_TraceCounts_1_41);
        STATE_VARIABLE_FileType_1_44 = mdbcomp__trace_counts__sum_trace_count_file_type_2_f_0(STATE_VARIABLE_FileType_0_3, FileType_23);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = FileNames_22;
        next_value_of_STATE_VARIABLE_FileType_0_3 = STATE_VARIABLE_FileType_1_44;
        next_value_of_STATE_VARIABLE_TraceCounts_0_5 = STATE_VARIABLE_TraceCounts_1_41;
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
mdbcomp__read_trace_counts__read_trace_counts_file_4_p_0(
  MR_String FileName_5,
  MR_Word * Result_6)
{
  MR_bool succeeded;
  MR_Word ReadTCResult_8;
  MR_Word OldReadTCResult_9;
  MR_String ActualFileName_22;
  MR_String GzipCmd_23;
  MR_Word Result_24;
  MR_String BaseName_20;
  MR_Integer CastX_76;
  MR_Integer CastY_77;

  succeeded = mercury__string__remove_suffix_3_p_0(FileName_5, (MR_String) ".gz", &BaseName_20);
  if (succeeded)
  {
    MR_String Var_32;
    MR_Word _UnzipResult_21;

    Var_32 = mercury__string__f_43_43_2_f_0((MR_String) "gunzip ", FileName_5);
    mercury__io__call_system__call_system_4_p_0(Var_32, &_UnzipResult_21);
    ActualFileName_22 = BaseName_20;
    GzipCmd_23 = mercury__string__f_43_43_2_f_0((MR_String) "gzip ", BaseName_20);
  }
  else
  {
    ActualFileName_22 = FileName_5;
    GzipCmd_23 = (MR_String) "";
  }
  mercury__io__read_named_file_as_lines_wf_4_p_0(ActualFileName_22, &Result_24);
  if (((MR_tag((MR_Word) Result_24)) == (MR_Integer) 1))
  {
    MR_Word IOError_29 = ((MR_Word) ((MR_hl_field(1, Result_24, 0))));
    MR_Word ReadError_40;

    {
      ReadError_40 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ReadError_40, 0) = ((MR_Box) (IOError_29));
    }
    {
      ReadTCResult_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ReadTCResult_8, 0) = ((MR_Box) (ReadError_40));
    }
  }
  else
  {
    MR_Word Lines1_25 = ((MR_Word) ((MR_hl_field(0, Result_24, 0))));
    MR_Word Lines2_27;
    MR_String Line1_26;
    MR_String Var_41;

    succeeded = (Lines1_25 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Line1_26 = ((MR_String) ((MR_hl_field(1, Lines1_25, 0))));
      Lines2_27 = ((MR_Word) ((MR_hl_field(1, Lines1_25, 1))));
      Var_41 = mdbcomp__trace_counts__trace_count_file_id_0_f_0();
      succeeded = (strcmp(Line1_26, Var_41) == 0);
    }
    if (succeeded)
      if ((Lines2_27 == (MR_Word) ((MR_Unsigned) 0U)))
        ReadTCResult_8 = (MR_Word) (MR_mkword(1, &mdbcomp__read_trace_counts_scalar_common_3[3]));
      else
      {
        MR_String FileTypeLine_43 = ((MR_String) ((MR_hl_field(1, Lines2_27, 0))));
        MR_Word Lines1_44 = ((MR_Word) ((MR_hl_field(1, Lines2_27, 1))));
        MR_Integer FileTypeLineLen_45;
        MR_Word StartPos_46;
        MR_Word FileTypeTokens_47;
        MR_Word FileTypeResult_49;
        MR_Word _EndPos_48;
        MR_Word FileType_52;
        MR_Word TypeCtorInfo_42_67;
        MR_Word FileTypeTerm_51;
        MR_Box conv0_FileType_52;

        mercury__string__length_2_p_0(FileTypeLine_43, &FileTypeLineLen_45);
        StartPos_46 = mercury__io__init_posn_0_f_0();
        mercury__mercury_term_lexer__string_get_token_list_max_5_p_0(FileTypeLine_43, FileTypeLineLen_45, &FileTypeTokens_47, StartPos_46, &_EndPos_48);
        mercury__mercury_term_parser__parse_tokens_3_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), FileName_5, FileTypeTokens_47, &FileTypeResult_49);
        succeeded = ((MR_tag((MR_Word) FileTypeResult_49)) == (MR_Integer) 2);
        if (succeeded)
        {
          FileTypeTerm_51 = ((MR_Word) ((MR_hl_field(2, FileTypeResult_49, 1))));
          TypeCtorInfo_42_67 = (MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0);
          succeeded = mercury__term_conversion__term_to_type_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), TypeCtorInfo_42_67, FileTypeTerm_51, &conv0_FileType_52);
          if (succeeded)
          {
            FileType_52 = ((MR_Word) (conv0_FileType_52));
            succeeded = MR_TRUE;
          }
        }
        if (succeeded)
        {
          MR_Word TraceCounts0_55;
          MR_Word MaybeError_56;
          MR_Word TraceCounts_57;

          mercury__map__init_1_p_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0), (MR_Word) (&mdbcomp__read_trace_counts_scalar_common_1[0]), &TraceCounts0_55);
          mdbcomp__read_trace_counts__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_114_111_99_95_116_114_97_99_101_95_99_111_117_110_116_115_95_95_91_49_93_95_48_10_p_0((MR_Integer) ((MR_Unsigned) 2 + (MR_Unsigned) 1), Lines1_44, (MR_Word) (&mdbcomp__read_trace_counts_scalar_common_3[4]), (MR_String) "", &MaybeError_56, TraceCounts0_55, &TraceCounts_57);
          if ((MaybeError_56 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              ReadTCResult_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, ReadTCResult_8, 0) = ((MR_Box) (FileType_52));
              MR_hl_field(0, ReadTCResult_8, 1) = ((MR_Box) (TraceCounts_57));
            }
          else
          {
            MR_Word ReadError_64 = ((MR_Word) ((MR_hl_field(1, MaybeError_56, 0))));

            {
              ReadTCResult_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, ReadTCResult_8, 0) = ((MR_Box) (ReadError_64));
            }
          }
        }
        else
          ReadTCResult_8 = (MR_Word) (MR_mkword(1, &mdbcomp__read_trace_counts_scalar_common_3[3]));
      }
    else
      ReadTCResult_8 = (MR_Word) (MR_mkword(1, &mdbcomp__read_trace_counts_scalar_common_3[1]));
  }
  succeeded = (strcmp(GzipCmd_23, (MR_String) "") == 0);
  if (!(succeeded))
  {
    MR_Word _ZipResult_30;

    mercury__io__call_system__call_system_4_p_0(GzipCmd_23, &_ZipResult_30);
  }
  mdbcomp__read_trace_counts__old_read_trace_counts_base_4_p_0(FileName_5, &OldReadTCResult_9);
  CastX_76 = (MR_Integer) (ReadTCResult_8);
  CastY_77 = (MR_Integer) (OldReadTCResult_9);
  succeeded = (CastX_76 == CastY_77);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if (((MR_tag((MR_Word) ReadTCResult_8)) == (MR_Integer) 1))
  {
    MR_Word ArgX1_74 = ((MR_Word) ((MR_hl_field(1, ReadTCResult_8, 0))));
    MR_Word ArgY1_75;
    MR_Integer CastX_88;
    MR_Integer CastY_89;

    succeeded = ((MR_tag((MR_Word) OldReadTCResult_9)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_75 = ((MR_Word) ((MR_hl_field(1, OldReadTCResult_9, 0))));
      CastX_88 = (MR_Integer) (ArgX1_74);
      CastY_89 = (MR_Integer) (ArgY1_75);
      succeeded = (CastX_88 == CastY_89);
      if (succeeded)
        succeeded = MR_TRUE;
      else
        switch (MR_tag((MR_Word) ArgX1_74)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgX1_80 = ((MR_Word) ((MR_hl_field(0, ArgX1_74, 0))));
              MR_Word ArgY1_81;

              succeeded = ((MR_tag((MR_Word) ArgY1_75)) == (MR_Integer) 0);
              if (succeeded)
              {
                ArgY1_81 = ((MR_Word) ((MR_hl_field(0, ArgY1_75, 0))));
                succeeded = mercury__io____Unify____error_0_0(ArgX1_80, ArgY1_81);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_82 = ((MR_Word) ((MR_hl_field(1, ArgX1_74, 0))));
              MR_Word ArgY1_83;

              succeeded = ((MR_tag((MR_Word) ArgY1_75)) == (MR_Integer) 1);
              if (succeeded)
              {
                ArgY1_83 = ((MR_Word) ((MR_hl_field(1, ArgY1_75, 0))));
                succeeded = mercury__io____Unify____error_0_0(ArgX1_82, ArgY1_83);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_String ArgX1_84 = ((MR_String) ((MR_hl_field(2, ArgX1_74, 0))));
              MR_String ArgY1_85;

              succeeded = ((MR_tag((MR_Word) ArgY1_75)) == (MR_Integer) 2);
              if (succeeded)
              {
                ArgY1_85 = ((MR_String) ((MR_hl_field(2, ArgY1_75, 0))));
                succeeded = (strcmp(ArgX1_84, ArgY1_85) == 0);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_String ArgX1_86 = ((MR_String) ((MR_hl_field(3, ArgX1_74, 0))));
              MR_String ArgY1_87;

              succeeded = ((MR_tag((MR_Word) ArgY1_75)) == (MR_Integer) 3);
              if (succeeded)
              {
                ArgY1_87 = ((MR_String) ((MR_hl_field(3, ArgY1_75, 0))));
                succeeded = (strcmp(ArgX1_86, ArgY1_87) == 0);
              }
            }
            break;
        }
    }
  }
  else
  {
    MR_Word TypeInfo_12_79;
    MR_Word ArgX1_70 = ((MR_Word) ((MR_hl_field(0, ReadTCResult_8, 0))));
    MR_Word ArgY1_71;
    MR_Word ArgX2_72 = ((MR_Word) ((MR_hl_field(0, ReadTCResult_8, 1))));
    MR_Word ArgY2_73;

    succeeded = ((MR_tag((MR_Word) OldReadTCResult_9)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_71 = ((MR_Word) ((MR_hl_field(0, OldReadTCResult_9, 0))));
      ArgY2_73 = ((MR_Word) ((MR_hl_field(0, OldReadTCResult_9, 1))));
      succeeded = mdbcomp__trace_counts____Unify____trace_count_file_type_0_0(ArgX1_70, ArgY1_71);
      if (succeeded)
      {
        TypeInfo_12_79 = (MR_Word) (&mdbcomp__read_trace_counts_scalar_common_1[1]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_79, ((MR_Box) (ArgX2_72)), ((MR_Box) (ArgY2_73)));
      }
    }
  }
  if (succeeded)
    if (((MR_tag((MR_Word) ReadTCResult_8)) == (MR_Integer) 1))
    {
      MR_Word ReadTCError_12 = ((MR_Word) ((MR_hl_field(1, ReadTCResult_8, 0))));
      MR_String ErrorMsg_13;

      ErrorMsg_13 = mdbcomp__read_trace_counts__read_trace_counts_error_to_str_2_f_0(FileName_5, ReadTCError_12);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (ErrorMsg_13));
      }
    }
    else
    {
      MR_Word FileType_10 = ((MR_Word) ((MR_hl_field(0, ReadTCResult_8, 0))));
      MR_Word TraceCount_11 = ((MR_Word) ((MR_hl_field(0, ReadTCResult_8, 1))));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *Result_6 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (FileType_10));
        MR_hl_field(0, base, 1) = ((MR_Box) (TraceCount_11));
      }
    }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140mdbcomp.read_trace_counts.read_trace_counts_file\'/4", (MR_String) "ReadTCResult != OldReadTCResult");
      return;
    }
}

static void MR_CALL 
mdbcomp__read_trace_counts__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_114_111_99_95_116_114_97_99_101_95_99_111_117_110_116_115_95_95_91_49_93_95_48_10_p_0(
  MR_Integer LineNumber0_12,
  MR_Word Lines0_13,
  MR_Word TCModuleNameSym0_14,
  MR_String TCFileName0_15,
  MR_Word * MaybeError_16,
  MR_Word STATE_VARIABLE_TraceCounts_0_63,
  MR_Word * STATE_VARIABLE_TraceCounts_64)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((Lines0_13 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *MaybeError_16 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_TraceCounts_64 = STATE_VARIABLE_TraceCounts_0_63;
    }
    else
    {
      MR_String Line0_19 = ((MR_String) ((MR_hl_field(1, Lines0_13, 0))));
      MR_Word Lines1_20 = ((MR_Word) ((MR_hl_field(1, Lines0_13, 1))));
      MR_Integer LineNumber1_21 = (MR_Integer) ((MR_Unsigned) LineNumber0_12 + (MR_Unsigned) 1);
      MR_Integer Line0Len_22;
      MR_Word StartPos_23;
      MR_Word TokenList_24;
      MR_Word _EndPos_25;
      MR_String TokenName_26;
      MR_Word TokenListRest_28;
      MR_Word Var_70;

      mercury__string__length_2_p_0(Line0_19, &Line0Len_22);
      {
        StartPos_23 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, StartPos_23, 0) = ((MR_Box) (LineNumber0_12));
        MR_hl_field(0, StartPos_23, 1) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, StartPos_23, 2) = ((MR_Box) ((MR_Integer) 0));
      }
      mercury__mercury_term_lexer__string_get_token_list_max_5_p_0(Line0_19, Line0Len_22, &TokenList_24, StartPos_23, &_EndPos_25);
      succeeded = (TokenList_24 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_70 = ((MR_Word) ((MR_hl_field(1, TokenList_24, 0))));
        TokenListRest_28 = ((MR_Word) ((MR_hl_field(1, TokenList_24, 2))));
        succeeded = ((MR_tag((MR_Word) Var_70)) == (MR_Integer) 1);
        if (succeeded)
          TokenName_26 = ((MR_String) ((MR_hl_field(1, Var_70, 0))));
      }
      if (succeeded)
      {
        MR_String NextModuleName_29;
        MR_Word Var_71;
        MR_Word Var_72;

        succeeded = (strcmp(TokenName_26, (MR_String) "module") == 0);
        if (succeeded)
        {
          succeeded = (TokenListRest_28 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_71 = ((MR_Word) ((MR_hl_field(1, TokenListRest_28, 0))));
            Var_72 = ((MR_Word) ((MR_hl_field(1, TokenListRest_28, 2))));
            succeeded = (Var_72 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) Var_71)) == (MR_Integer) 1);
              if (succeeded)
                NextModuleName_29 = ((MR_String) ((MR_hl_field(1, Var_71, 0))));
            }
          }
        }
        if (succeeded)
        {
          MR_Word TCModuleNameSym1_31;
          MR_Integer next_value_of_LineNumber0_12;
          MR_Word next_value_of_Lines0_13;
          MR_Word next_value_of_TCModuleNameSym0_14;

          TCModuleNameSym1_31 = mdbcomp__sym_name__string_to_sym_name_1_f_0(NextModuleName_29);
          // direct tailcall eliminated
          ;
          next_value_of_LineNumber0_12 = LineNumber1_21;
          next_value_of_Lines0_13 = Lines1_20;
          next_value_of_TCModuleNameSym0_14 = TCModuleNameSym1_31;
          LineNumber0_12 = next_value_of_LineNumber0_12;
          Lines0_13 = next_value_of_Lines0_13;
          TCModuleNameSym0_14 = next_value_of_TCModuleNameSym0_14;
          continue;
        }
        else
        {
          MR_String TCFileName1_32;
          MR_Word Var_75;
          MR_Word Var_76;

          succeeded = (strcmp(TokenName_26, (MR_String) "file") == 0);
          if (succeeded)
          {
            succeeded = (TokenListRest_28 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_75 = ((MR_Word) ((MR_hl_field(1, TokenListRest_28, 0))));
              Var_76 = ((MR_Word) ((MR_hl_field(1, TokenListRest_28, 2))));
              succeeded = (Var_76 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) Var_75)) == (MR_Integer) 1);
                if (succeeded)
                  TCFileName1_32 = ((MR_String) ((MR_hl_field(1, Var_75, 0))));
              }
            }
          }
          if (succeeded)
          {
            MR_Integer next_value_of_LineNumber0_12 = LineNumber1_21;
            MR_Word next_value_of_Lines0_13 = Lines1_20;
            MR_String next_value_of_TCFileName0_15 = TCFileName1_32;

            // direct tailcall eliminated
            ;
            LineNumber0_12 = next_value_of_LineNumber0_12;
            Lines0_13 = next_value_of_Lines0_13;
            TCFileName0_15 = next_value_of_TCFileName0_15;
            continue;
          }
          else
          {
            MR_Word ProcLabel_42;
            MR_Word Var_145;
            MR_Word Var_147;
            MR_Word Var_148;
            MR_Word Var_150;
            MR_String Var_151;
            MR_Word Var_152;
            MR_Word Var_154;
            MR_Integer lo_0;
            MR_Integer hi_1;
            MR_Integer mid_2;
            MR_Integer result_3;

            succeeded = (TokenListRest_28 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_147 = ((MR_Word) ((MR_hl_field(1, TokenListRest_28, 0))));
              Var_145 = ((MR_Word) ((MR_hl_field(1, TokenListRest_28, 2))));
              succeeded = (Var_145 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_150 = ((MR_Word) ((MR_hl_field(1, Var_145, 0))));
                Var_148 = ((MR_Word) ((MR_hl_field(1, Var_145, 2))));
                succeeded = ((MR_tag((MR_Word) Var_147)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Var_151 = ((MR_String) ((MR_hl_field(1, Var_147, 0))));
                  succeeded = (Var_148 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_154 = ((MR_Word) ((MR_hl_field(1, Var_148, 0))));
                    Var_152 = ((MR_Word) ((MR_hl_field(1, Var_148, 2))));
                    // binary string jump switch
                    ;
                    lo_0 = (MR_Integer) 0;
                    hi_1 = (MR_Integer) 3;
                    do
                    {
                      mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
                      result_3 = MR_strcmp(TokenName_26, ((&mdbcomp__read_trace_counts_vector_common_5[0 + mid_2]))->mdbcomp__read_trace_counts__vector_common_type_5_0__vct_5_f_0);
                      if ((result_3 == (MR_Integer) 0))
                      {
                        switch (((&mdbcomp__read_trace_counts_vector_common_5[0 + mid_2]))->mdbcomp__read_trace_counts__vector_common_type_5_0__vct_5_f_1) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            {
                              // case "fproc"
                              ;
                              {
                                MR_Word Var_89;
                                MR_Integer Arity_124;
                                MR_Integer Mode_125;

                                succeeded = (Var_152 == (MR_Word) ((MR_Unsigned) 0U));
                                if (succeeded)
                                {
                                  succeeded = mdbcomp__read_trace_counts__decimal_token_to_int_2_p_0(Var_150, &Arity_124);
                                  if (succeeded)
                                  {
                                    succeeded = mdbcomp__read_trace_counts__decimal_token_to_int_2_p_0(Var_154, &Mode_125);
                                    if (succeeded)
                                    {
                                      Var_89 = (MR_Integer) 1;
                                      {
                                        ProcLabel_42 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                                        MR_hl_field(0, ProcLabel_42, 0) = ((MR_Box) (TCModuleNameSym0_14));
                                        MR_hl_field(0, ProcLabel_42, 1) = (MR_Box) ((MR_Unsigned) (Var_89));
                                        MR_hl_field(0, ProcLabel_42, 2) = ((MR_Box) (TCModuleNameSym0_14));
                                        MR_hl_field(0, ProcLabel_42, 3) = ((MR_Box) (Var_151));
                                        MR_hl_field(0, ProcLabel_42, 4) = ((MR_Box) (Arity_124));
                                        MR_hl_field(0, ProcLabel_42, 5) = ((MR_Box) (Mode_125));
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
                                MR_Word Var_103;
                                MR_Word Var_104;
                                MR_String Name_131;
                                MR_Word ModeToken_133;
                                MR_Integer Arity_134;
                                MR_Integer Mode_135;
                                MR_Word DeclModuleNameSym_137;

                                succeeded = ((MR_tag((MR_Word) Var_150)) == (MR_Integer) 1);
                                if (succeeded)
                                {
                                  Name_131 = ((MR_String) ((MR_hl_field(1, Var_150, 0))));
                                  succeeded = (Var_152 != (MR_Word) ((MR_Unsigned) 0U));
                                  if (succeeded)
                                  {
                                    ModeToken_133 = ((MR_Word) ((MR_hl_field(1, Var_152, 0))));
                                    Var_103 = ((MR_Word) ((MR_hl_field(1, Var_152, 2))));
                                    succeeded = (Var_103 == (MR_Word) ((MR_Unsigned) 0U));
                                    if (succeeded)
                                    {
                                      succeeded = mdbcomp__read_trace_counts__decimal_token_to_int_2_p_0(Var_154, &Arity_134);
                                      if (succeeded)
                                      {
                                        succeeded = mdbcomp__read_trace_counts__decimal_token_to_int_2_p_0(ModeToken_133, &Mode_135);
                                        if (succeeded)
                                        {
                                          DeclModuleNameSym_137 = mdbcomp__sym_name__string_to_sym_name_1_f_0(Var_151);
                                          Var_104 = (MR_Integer) 1;
                                          {
                                            ProcLabel_42 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                                            MR_hl_field(0, ProcLabel_42, 0) = ((MR_Box) (TCModuleNameSym0_14));
                                            MR_hl_field(0, ProcLabel_42, 1) = (MR_Box) ((MR_Unsigned) (Var_104));
                                            MR_hl_field(0, ProcLabel_42, 2) = ((MR_Box) (DeclModuleNameSym_137));
                                            MR_hl_field(0, ProcLabel_42, 3) = ((MR_Box) (Name_131));
                                            MR_hl_field(0, ProcLabel_42, 4) = ((MR_Box) (Arity_134));
                                            MR_hl_field(0, ProcLabel_42, 5) = ((MR_Box) (Mode_135));
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
                                MR_Integer Arity_40;
                                MR_Integer Mode_41;
                                MR_Word Var_83;

                                succeeded = (Var_152 == (MR_Word) ((MR_Unsigned) 0U));
                                if (succeeded)
                                {
                                  succeeded = mdbcomp__read_trace_counts__decimal_token_to_int_2_p_0(Var_150, &Arity_40);
                                  if (succeeded)
                                  {
                                    succeeded = mdbcomp__read_trace_counts__decimal_token_to_int_2_p_0(Var_154, &Mode_41);
                                    if (succeeded)
                                    {
                                      Var_83 = (MR_Integer) 0;
                                      {
                                        ProcLabel_42 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                                        MR_hl_field(0, ProcLabel_42, 0) = ((MR_Box) (TCModuleNameSym0_14));
                                        MR_hl_field(0, ProcLabel_42, 1) = (MR_Box) ((MR_Unsigned) (Var_83));
                                        MR_hl_field(0, ProcLabel_42, 2) = ((MR_Box) (TCModuleNameSym0_14));
                                        MR_hl_field(0, ProcLabel_42, 3) = ((MR_Box) (Var_151));
                                        MR_hl_field(0, ProcLabel_42, 4) = ((MR_Box) (Arity_40));
                                        MR_hl_field(0, ProcLabel_42, 5) = ((MR_Box) (Mode_41));
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
                                MR_Word DeclModuleNameSym_51;
                                MR_Word Var_96;
                                MR_Word Var_97;
                                MR_String Name_126;
                                MR_Word ModeToken_128;
                                MR_Integer Arity_129;
                                MR_Integer Mode_130;

                                succeeded = ((MR_tag((MR_Word) Var_150)) == (MR_Integer) 1);
                                if (succeeded)
                                {
                                  Name_126 = ((MR_String) ((MR_hl_field(1, Var_150, 0))));
                                  succeeded = (Var_152 != (MR_Word) ((MR_Unsigned) 0U));
                                  if (succeeded)
                                  {
                                    ModeToken_128 = ((MR_Word) ((MR_hl_field(1, Var_152, 0))));
                                    Var_96 = ((MR_Word) ((MR_hl_field(1, Var_152, 2))));
                                    succeeded = (Var_96 == (MR_Word) ((MR_Unsigned) 0U));
                                    if (succeeded)
                                    {
                                      succeeded = mdbcomp__read_trace_counts__decimal_token_to_int_2_p_0(Var_154, &Arity_129);
                                      if (succeeded)
                                      {
                                        succeeded = mdbcomp__read_trace_counts__decimal_token_to_int_2_p_0(ModeToken_128, &Mode_130);
                                        if (succeeded)
                                        {
                                          DeclModuleNameSym_51 = mdbcomp__sym_name__string_to_sym_name_1_f_0(Var_151);
                                          Var_97 = (MR_Integer) 0;
                                          {
                                            ProcLabel_42 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                                            MR_hl_field(0, ProcLabel_42, 0) = ((MR_Box) (TCModuleNameSym0_14));
                                            MR_hl_field(0, ProcLabel_42, 1) = (MR_Box) ((MR_Unsigned) (Var_97));
                                            MR_hl_field(0, ProcLabel_42, 2) = ((MR_Box) (DeclModuleNameSym_51));
                                            MR_hl_field(0, ProcLabel_42, 3) = ((MR_Box) (Name_126));
                                            MR_hl_field(0, ProcLabel_42, 4) = ((MR_Box) (Arity_129));
                                            MR_hl_field(0, ProcLabel_42, 5) = ((MR_Box) (Mode_130));
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
              MR_Word ProcLabelInContext_56;
              MR_Word ProcCounts1_58;
              MR_Integer LineNumber2_59;
              MR_Word Lines2_60;
              MR_Word ProcCounts_61;
              MR_Word STATE_VARIABLE_TraceCounts_4_106;
              MR_Word STATE_VARIABLE_TraceCounts_5_108;
              MR_Word ProbeCounts_57;
              MR_Word STATE_VARIABLE_TraceCounts_3_105;
              MR_Box conv0_ProbeCounts_57;
              MR_Integer next_value_of_LineNumber0_12;
              MR_Word next_value_of_Lines0_13;
              MR_Word next_value_of_STATE_VARIABLE_TraceCounts_0_63;

              {
                ProcLabelInContext_56 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, ProcLabelInContext_56, 0) = ((MR_Box) (TCModuleNameSym0_14));
                MR_hl_field(0, ProcLabelInContext_56, 1) = ((MR_Box) (TCFileName0_15));
                MR_hl_field(0, ProcLabelInContext_56, 2) = ((MR_Box) (ProcLabel_42));
              }
              succeeded = mercury__map__remove_4_p_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0), (MR_Word) (&mdbcomp__read_trace_counts_scalar_common_1[0]), ((MR_Box) (ProcLabelInContext_56)), &conv0_ProbeCounts_57, STATE_VARIABLE_TraceCounts_0_63, &STATE_VARIABLE_TraceCounts_3_105);
              if (succeeded)
              {
                ProbeCounts_57 = ((MR_Word) (conv0_ProbeCounts_57));
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                STATE_VARIABLE_TraceCounts_4_106 = STATE_VARIABLE_TraceCounts_3_105;
                ProcCounts1_58 = ProbeCounts_57;
              }
              else
              {
                ProcCounts1_58 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0), (MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0));
                STATE_VARIABLE_TraceCounts_4_106 = STATE_VARIABLE_TraceCounts_0_63;
              }
              mdbcomp__read_trace_counts__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_114_111_99_95_112_97_116_104_95_116_114_97_99_101_95_99_111_117_110_116_115_95_95_91_49_93_95_48_9_p_0(LineNumber1_21, &LineNumber2_59, Lines1_20, &Lines2_60, ProcCounts1_58, &ProcCounts_61);
              mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0), (MR_Word) (&mdbcomp__read_trace_counts_scalar_common_1[0]), ((MR_Box) (ProcLabelInContext_56)), ((MR_Box) (ProcCounts_61)), STATE_VARIABLE_TraceCounts_4_106, &STATE_VARIABLE_TraceCounts_5_108);
              // direct tailcall eliminated
              ;
              next_value_of_LineNumber0_12 = LineNumber2_59;
              next_value_of_Lines0_13 = Lines2_60;
              next_value_of_STATE_VARIABLE_TraceCounts_0_63 = STATE_VARIABLE_TraceCounts_5_108;
              LineNumber0_12 = next_value_of_LineNumber0_12;
              Lines0_13 = next_value_of_Lines0_13;
              STATE_VARIABLE_TraceCounts_0_63 = next_value_of_STATE_VARIABLE_TraceCounts_0_63;
              continue;
            }
            else
            {
              MR_String Message_62;
              MR_Word Var_115;
              MR_String Var_156;
              MR_String Var_163;

              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mdbcomp__read_trace_counts_scalar_common_3[5]), LineNumber0_12, &Var_156);
              Var_163 = mercury__string__f_43_43_2_f_0(Var_156, (MR_String) " of execution trace");
              Message_62 = mercury__string__f_43_43_2_f_0((MR_String) "parse error on line ", Var_163);
              {
                Var_115 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Var_115, 0) = ((MR_Box) (Message_62));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeError_16 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Var_115));
              }
              *STATE_VARIABLE_TraceCounts_64 = STATE_VARIABLE_TraceCounts_0_63;
            }
          }
        }
      }
      else
      {
        MR_Word Var_120;
        MR_String Message_138;
        MR_String Var_166;
        MR_String Var_173;

        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mdbcomp__read_trace_counts_scalar_common_3[5]), LineNumber0_12, &Var_166);
        Var_173 = mercury__string__f_43_43_2_f_0(Var_166, (MR_String) " of execution trace");
        Message_138 = mercury__string__f_43_43_2_f_0((MR_String) "parse error on line ", Var_173);
        {
          Var_120 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_120, 0) = ((MR_Box) (Message_138));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeError_16 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_120));
        }
        *STATE_VARIABLE_TraceCounts_64 = STATE_VARIABLE_TraceCounts_0_63;
      }
    }
    break;
  }
}

static void MR_CALL 
mdbcomp__read_trace_counts__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_114_111_99_95_112_97_116_104_95_116_114_97_99_101_95_99_111_117_110_116_115_95_95_91_49_93_95_48_9_p_0(
  MR_Integer LineNumber0_11,
  MR_Integer * LineNumber_12,
  MR_Word Lines0_13,
  MR_Word * Lines_14,
  MR_Word ProcCounts0_15,
  MR_Word * ProcCounts_16)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((Lines0_13 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *LineNumber_12 = LineNumber0_11;
      *Lines_14 = Lines0_13;
      *ProcCounts_16 = ProcCounts0_15;
    }
    else
    {
      MR_String Line0_18 = ((MR_String) ((MR_hl_field(1, Lines0_13, 0))));
      MR_Word Lines1_19 = ((MR_Word) ((MR_hl_field(1, Lines0_13, 1))));
      MR_Integer LineNumber1_20 = (MR_Integer) ((MR_Unsigned) LineNumber0_11 + (MR_Unsigned) 1);
      MR_Word PathPort_21;
      MR_Integer TCLineNumber_22;
      MR_Integer ExecCount_23;
      MR_Integer NumTests_24;

      succeeded = mdbcomp__read_trace_counts__parse_path_port_line_5_p_0(Line0_18, &PathPort_21, &TCLineNumber_22, &ExecCount_23, &NumTests_24);
      if (succeeded)
      {
        MR_Word LineNoAndCount_25;
        MR_Word ProcCounts1_26;
        MR_Integer next_value_of_LineNumber0_11;
        MR_Word next_value_of_Lines0_13;
        MR_Word next_value_of_ProcCounts0_15;

        {
          LineNoAndCount_25 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, LineNoAndCount_25, 0) = ((MR_Box) (TCLineNumber_22));
          MR_hl_field(0, LineNoAndCount_25, 1) = ((MR_Box) (ExecCount_23));
          MR_hl_field(0, LineNoAndCount_25, 2) = ((MR_Box) (NumTests_24));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0), (MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0), ((MR_Box) (PathPort_21)), ((MR_Box) (LineNoAndCount_25)), ProcCounts0_15, &ProcCounts1_26);
        // direct tailcall eliminated
        ;
        next_value_of_LineNumber0_11 = LineNumber1_20;
        next_value_of_Lines0_13 = Lines1_19;
        next_value_of_ProcCounts0_15 = ProcCounts1_26;
        LineNumber0_11 = next_value_of_LineNumber0_11;
        Lines0_13 = next_value_of_Lines0_13;
        ProcCounts0_15 = next_value_of_ProcCounts0_15;
        continue;
      }
      else
      {
        *LineNumber_12 = LineNumber0_11;
        *Lines_14 = Lines0_13;
        *ProcCounts_16 = ProcCounts0_15;
      }
    }
    break;
  }
}

static MR_bool MR_CALL 
mdbcomp__read_trace_counts__parse_path_port_line_5_p_0(
  MR_String Line_6,
  MR_Word * PathPort_7,
  MR_Integer * LineNumber_8,
  MR_Integer * ExecCount_9,
  MR_Integer * NumTests_10)
{
  MR_bool succeeded;
  MR_Word Words_11;
  MR_Word PathPortPrime_16;
  MR_Integer LineNumberPrime_18;
  MR_Integer ExecCountPrime_19;
  MR_Integer NumTestsPrime_20;
  MR_String Word1_12;
  MR_String LineNumberStr_13;
  MR_Word Rest_14;
  MR_Word Var_23;
  MR_Word Port_15;

  Words_11 = mercury__string__words_1_f_0(Line_6);
  succeeded = (Words_11 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    Word1_12 = ((MR_String) ((MR_hl_field(1, Words_11, 0))));
    Var_23 = ((MR_Word) ((MR_hl_field(1, Words_11, 1))));
    succeeded = (Var_23 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      LineNumberStr_13 = ((MR_String) ((MR_hl_field(1, Var_23, 0))));
      Rest_14 = ((MR_Word) ((MR_hl_field(1, Var_23, 1))));
      succeeded = mdbcomp__prim_data__string_to_trace_port_2_p_0(Word1_12, &Port_15);
      if (succeeded)
      {
        {
          PathPortPrime_16 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, PathPortPrime_16, 0) = (MR_Box) ((MR_Unsigned) (Port_15));
        }
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word Path_17;
        MR_Integer Length_30;
        MR_String SubString_31;
        MR_String Var_33;
        MR_Integer Var_34;
        MR_Integer Var_35;
        MR_Integer Var_36;

        succeeded = mercury__string__prefix_2_p_0(Word1_12, (MR_String) "<");
        if (succeeded)
        {
          Var_33 = (MR_String) ">";
          succeeded = mercury__string__suffix_2_p_0(Word1_12, Var_33);
          if (succeeded)
          {
            mercury__string__length_2_p_0(Word1_12, &Length_30);
            Var_34 = (MR_Integer) 1;
            Var_36 = (MR_Integer) 1;
            Var_35 = (MR_Integer) ((MR_Unsigned) Length_30 - (MR_Unsigned) Var_36);
            mercury__string__between_4_p_0(Word1_12, Var_34, Var_35, &SubString_31);
            succeeded = mdbcomp__goal_path__rev_goal_path_from_string_2_p_0(SubString_31, &Path_17);
            if (succeeded)
            {
              {
                PathPortPrime_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, PathPortPrime_16, 0) = ((MR_Box) (Path_17));
              }
              succeeded = MR_TRUE;
            }
          }
        }
      }
      if (succeeded)
      {
        succeeded = mercury__string__to_int_2_p_0(LineNumberStr_13, &LineNumberPrime_18);
        if (succeeded)
        {
          if ((Rest_14 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            ExecCountPrime_19 = (MR_Integer) 0;
            NumTestsPrime_20 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            MR_Word Var_43 = ((MR_Word) ((MR_hl_field(1, Rest_14, 1))));
            MR_String Var_44 = ((MR_String) ((MR_hl_field(1, Rest_14, 0))));

            if ((Var_43 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              succeeded = mercury__string__to_int_2_p_0(Var_44, &ExecCountPrime_19);
              if (succeeded)
              {
                NumTestsPrime_20 = (MR_Integer) 1;
                succeeded = MR_TRUE;
              }
            }
            else
            {
              MR_String NumTestsStr_38 = ((MR_String) ((MR_hl_field(1, Var_43, 0))));
              MR_Word Var_41 = ((MR_Word) ((MR_hl_field(1, Var_43, 1))));

              succeeded = (Var_41 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                succeeded = mercury__string__to_int_2_p_0(Var_44, &ExecCountPrime_19);
                if (succeeded)
                  succeeded = mercury__string__to_int_2_p_0(NumTestsStr_38, &NumTestsPrime_20);
              }
            }
          }
        }
      }
    }
  }
  if (succeeded)
  {
    *PathPort_7 = PathPortPrime_16;
    *LineNumber_8 = LineNumberPrime_18;
    *ExecCount_9 = ExecCountPrime_19;
    *NumTests_10 = NumTestsPrime_20;
    succeeded = MR_TRUE;
  }
  else
  {
    MR_String PortStr_21;
    MR_String PathStr_22;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_String LineNumberStr_26;
    MR_Word Rest_27;
    MR_Word Port_28;
    MR_Word Path_29;
    MR_Integer Length_45;
    MR_String SubString_46;
    MR_String Var_47;
    MR_String Var_48;
    MR_Integer Var_49;
    MR_Integer Var_50;
    MR_Integer Var_51;

    succeeded = (Words_11 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      PortStr_21 = ((MR_String) ((MR_hl_field(1, Words_11, 0))));
      Var_24 = ((MR_Word) ((MR_hl_field(1, Words_11, 1))));
      succeeded = (Var_24 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        PathStr_22 = ((MR_String) ((MR_hl_field(1, Var_24, 0))));
        Var_25 = ((MR_Word) ((MR_hl_field(1, Var_24, 1))));
        succeeded = (Var_25 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          LineNumberStr_26 = ((MR_String) ((MR_hl_field(1, Var_25, 0))));
          Rest_27 = ((MR_Word) ((MR_hl_field(1, Var_25, 1))));
          succeeded = mdbcomp__prim_data__string_to_trace_port_2_p_0(PortStr_21, &Port_28);
          if (succeeded)
          {
            Var_47 = (MR_String) "<";
            succeeded = mercury__string__prefix_2_p_0(PathStr_22, Var_47);
            if (succeeded)
            {
              Var_48 = (MR_String) ">";
              succeeded = mercury__string__suffix_2_p_0(PathStr_22, Var_48);
              if (succeeded)
              {
                mercury__string__length_2_p_0(PathStr_22, &Length_45);
                Var_49 = (MR_Integer) 1;
                Var_51 = (MR_Integer) 1;
                Var_50 = (MR_Integer) ((MR_Unsigned) Length_45 - (MR_Unsigned) Var_51);
                mercury__string__between_4_p_0(PathStr_22, Var_49, Var_50, &SubString_46);
                succeeded = mdbcomp__goal_path__rev_goal_path_from_string_2_p_0(SubString_46, &Path_29);
                if (succeeded)
                {
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *PathPort_7 = base;
                    MR_hl_field(2, base, 0) = (MR_Box) ((MR_Unsigned) (Port_28));
                    MR_hl_field(2, base, 1) = ((MR_Box) (Path_29));
                  }
                  succeeded = mercury__string__to_int_2_p_0(LineNumberStr_26, LineNumber_8);
                  if (succeeded)
                  {
                    if ((Rest_27 == (MR_Word) ((MR_Unsigned) 0U)))
                    {
                      *ExecCount_9 = (MR_Integer) 0;
                      *NumTests_10 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      MR_Word Var_58 = ((MR_Word) ((MR_hl_field(1, Rest_27, 1))));
                      MR_String Var_59 = ((MR_String) ((MR_hl_field(1, Rest_27, 0))));

                      if ((Var_58 == (MR_Word) ((MR_Unsigned) 0U)))
                      {
                        succeeded = mercury__string__to_int_2_p_0(Var_59, ExecCount_9);
                        if (succeeded)
                        {
                          *NumTests_10 = (MR_Integer) 1;
                          succeeded = MR_TRUE;
                        }
                      }
                      else
                      {
                        MR_String NumTestsStr_53 = ((MR_String) ((MR_hl_field(1, Var_58, 0))));
                        MR_Word Var_56 = ((MR_Word) ((MR_hl_field(1, Var_58, 1))));

                        succeeded = (Var_56 == (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          succeeded = mercury__string__to_int_2_p_0(Var_59, ExecCount_9);
                          if (succeeded)
                            succeeded = mercury__string__to_int_2_p_0(NumTestsStr_53, NumTests_10);
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

static MR_bool MR_CALL 
mdbcomp__read_trace_counts__decimal_token_to_int_2_p_0(
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
mdbcomp__read_trace_counts__old_read_trace_counts_base_4_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_TraceCounts_16;

  mdbcomp__read_trace_counts__old_read_trace_counts_setup_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), &conv0_STATE_VARIABLE_TraceCounts_16);
  *wrapper_arg_1 = ((MR_Box) (conv0_STATE_VARIABLE_TraceCounts_16));
}

static void MR_CALL 
mdbcomp__read_trace_counts__old_read_trace_counts_base_4_p_0(
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
    MR_String Var_22;
    MR_Word _UnzipResult_9;

    Var_22 = mercury__string__f_43_43_2_f_0((MR_String) "gunzip ", FileName_5);
    mercury__io__call_system__call_system_4_p_0(Var_22, &_UnzipResult_9);
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
    MR_Word IOError_17 = ((MR_Word) ((MR_hl_field(1, Result_12, 0))));
    MR_Word ReadError_33;

    {
      ReadError_33 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ReadError_33, 0) = ((MR_Box) (IOError_17));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *ReadResult_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ReadError_33));
    }
  }
  else
  {
    MR_Word FileStream_13 = ((MR_Word) ((MR_hl_field(0, Result_12, 0))));
    MR_Word IdReadResult_14;
    MR_String FirstLine_15;
    MR_String Var_28;
    MR_String Var_34;

    mercury__io__read_line_as_string_4_p_0(FileStream_13, &IdReadResult_14);
    succeeded = ((MR_tag((MR_Word) IdReadResult_14)) == (MR_Integer) 1);
    if (succeeded)
    {
      FirstLine_15 = ((MR_String) ((MR_hl_field(1, IdReadResult_14, 0))));
      Var_28 = mercury__string__rstrip_1_f_0(FirstLine_15);
      Var_34 = mdbcomp__trace_counts__trace_count_file_id_0_f_0();
      succeeded = (strcmp(Var_28, Var_34) == 0);
    }
    if (succeeded)
    {
      MR_Word FileTypeResult_35;

      mercury__io__read_4_p_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0), FileStream_13, &FileTypeResult_35);
      switch (MR_tag((MR_Word) FileTypeResult_35)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 2:
          *ReadResult_6 = (MR_Word) (MR_mkword(1, &mdbcomp__read_trace_counts_scalar_common_3[3]));
          break;
        case (MR_Integer) 1:
          {
            MR_Word FileType_36 = ((MR_Word) ((MR_hl_field(1, FileTypeResult_35, 0))));
            MR_Word NewlineResult_37;
            MR_String Var_47;

            mercury__io__read_line_as_string_4_p_0(FileStream_13, &NewlineResult_37);
            succeeded = ((MR_tag((MR_Word) NewlineResult_37)) == (MR_Integer) 1);
            if (succeeded)
            {
              Var_47 = ((MR_String) ((MR_hl_field(1, NewlineResult_37, 0))));
              succeeded = (strcmp(Var_47, (MR_String) "\n") == 0);
            }
            if (succeeded)
            {
              MR_Word Result_38;
              MR_Word Var_48;
              MR_Word Var_49;

              Var_49 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0), (MR_Word) (&mdbcomp__read_trace_counts_scalar_common_1[0]));
              {
                Var_48 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_48, 0) = ((MR_Box) (&mdbcomp__read_trace_counts_scalar_common_4[0]));
                MR_hl_field(0, Var_48, 1) = ((MR_Box) (mdbcomp__read_trace_counts__old_read_trace_counts_base_4_p_0_1));
                MR_hl_field(0, Var_48, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_48, 3) = ((MR_Box) (FileStream_13));
                MR_hl_field(0, Var_48, 4) = ((MR_Box) (Var_49));
              }
              mercury__exception__try_io_4_p_0((MR_Word) (&mdbcomp__read_trace_counts_scalar_common_1[1]), Var_48, &Result_38);
              if (((MR_tag((MR_Word) Result_38)) == (MR_Integer) 2))
              {
                MR_Word Exception_40 = ((MR_Word) ((MR_hl_field(2, Result_38, 0))));
                MR_Word ReadError_42;
                MR_Word IOError_41;
                MR_Box conv1_IOError_41;

                succeeded = mercury__univ__univ_1_f_2((MR_Word) (&mercury__io__io__type_ctor_info_error_0), &conv1_IOError_41, Exception_40);
                if (succeeded)
                {
                  IOError_41 = ((MR_Word) (conv1_IOError_41));
                  succeeded = MR_TRUE;
                }
                if (succeeded)
                  {
                    ReadError_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, ReadError_42, 0) = ((MR_Box) (IOError_41));
                  }
                else
                {
                  MR_String Message_43;
                  MR_Box conv2_Message_43;

                  succeeded = mercury__univ__univ_1_f_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), &conv2_Message_43, Exception_40);
                  if (succeeded)
                  {
                    Message_43 = ((MR_String) (conv2_Message_43));
                    succeeded = MR_TRUE;
                  }
                  if (succeeded)
                    {
                      ReadError_42 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, ReadError_42, 0) = ((MR_Box) (Message_43));
                    }
                  else
                  {
                    MR_String Error_44;
                    MR_Word Var_50;
                    MR_Box conv3_Var_50;

                    succeeded = mercury__univ__univ_1_f_2((MR_Word) (&mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__type_ctor_info_trace_count_syntax_error_0), &conv3_Var_50, Exception_40);
                    if (succeeded)
                    {
                      Var_50 = ((MR_Word) (conv3_Var_50));
                      succeeded = MR_TRUE;
                    }
                    if (succeeded)
                    {
                      Error_44 = (MR_String) (Var_50);
                      succeeded = MR_TRUE;
                    }
                    if (succeeded)
                      {
                        ReadError_42 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(2, ReadError_42, 0) = ((MR_Box) (Error_44));
                      }
                    else
                    {
                      MR_String Var_52;
                      MR_String Var_54;

                      Var_54 = mercury__string__string_1_f_0((MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), ((MR_Box) (Exception_40)));
                      Var_52 = mercury__string__f_43_43_2_f_0((MR_String) "unexpected exception type: ", Var_54);
                      {
                        mercury__require__unexpected_2_p_0((MR_String) "predicate \140mdbcomp.read_trace_counts.old_read_trace_counts_from_stream\'/4", Var_52);
                        return;
                      }
                    }
                  }
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *ReadResult_6 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (ReadError_42));
                }
              }
              else
              {
                MR_Word TraceCounts_39 = ((MR_Word) ((MR_hl_field(1, Result_38, 0))));

                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  *ReadResult_6 = base;
                  MR_hl_field(0, base, 0) = ((MR_Box) (FileType_36));
                  MR_hl_field(0, base, 1) = ((MR_Box) (TraceCounts_39));
                }
              }
            }
            else
              *ReadResult_6 = (MR_Word) (MR_mkword(1, &mdbcomp__read_trace_counts_scalar_common_3[3]));
          }
          break;
      }
    }
    else
      *ReadResult_6 = (MR_Word) (MR_mkword(1, &mdbcomp__read_trace_counts_scalar_common_3[1]));
    mercury__io__close_input_3_p_0(FileStream_13);
  }
  succeeded = (strcmp(GzipCmd_11, (MR_String) "") == 0);
  if (!(succeeded))
  {
    MR_Word _ZipResult_18;

    mercury__io__call_system__call_system_4_p_0(GzipCmd_11, &_ZipResult_18);
  }
}

static MR_String MR_CALL 
mdbcomp__read_trace_counts__read_trace_counts_error_to_str_2_f_0(
  MR_String FileName_4,
  MR_Word ReadTCError_5)
{
  MR_String ErrorMsg_6;

  switch (MR_tag((MR_Word) ReadTCError_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word IOError_7 = ((MR_Word) ((MR_hl_field(0, ReadTCError_5, 0))));
        MR_String IOErrorMsg_8;
        MR_String Var_42;
        MR_String Var_43;

        IOErrorMsg_8 = mercury__io__error_message_1_f_0(IOError_7);
        Var_42 = mercury__string__f_43_43_2_f_0((MR_String) "\': ", IOErrorMsg_8);
        Var_43 = mercury__string__f_43_43_2_f_0(FileName_4, Var_42);
        ErrorMsg_6 = mercury__string__f_43_43_2_f_0((MR_String) "I/O error opening file \140", Var_43);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word IOError_35 = ((MR_Word) ((MR_hl_field(1, ReadTCError_5, 0))));
        MR_String IOErrorMsg_36;
        MR_String Var_46;
        MR_String Var_47;

        IOErrorMsg_36 = mercury__io__error_message_1_f_0(IOError_35);
        Var_46 = mercury__string__f_43_43_2_f_0((MR_String) "\': ", IOErrorMsg_36);
        Var_47 = mercury__string__f_43_43_2_f_0(FileName_4, Var_46);
        ErrorMsg_6 = mercury__string__f_43_43_2_f_0((MR_String) "I/O error reading file \140", Var_47);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String SyntaxMsg_9 = ((MR_String) ((MR_hl_field(2, ReadTCError_5, 0))));
        MR_String Var_38;
        MR_String Var_39;

        Var_38 = mercury__string__f_43_43_2_f_0((MR_String) "\': ", SyntaxMsg_9);
        Var_39 = mercury__string__f_43_43_2_f_0(FileName_4, Var_38);
        ErrorMsg_6 = mercury__string__f_43_43_2_f_0((MR_String) "Syntax error in file \140", Var_39);
      }
      break;
    case (MR_Integer) 3:
      {
        MR_String ErrMsg_10 = ((MR_String) ((MR_hl_field(3, ReadTCError_5, 0))));
        MR_String Var_50;
        MR_String Var_51;

        Var_50 = mercury__string__f_43_43_2_f_0((MR_String) "\': ", ErrMsg_10);
        Var_51 = mercury__string__f_43_43_2_f_0(FileName_4, Var_50);
        ErrorMsg_6 = mercury__string__f_43_43_2_f_0((MR_String) "Error reading trace counts from in file \140", Var_51);
      }
      break;
  }
  return ErrorMsg_6;
}

static MR_bool MR_CALL 
mdbcomp__read_trace_counts____Unify____read_trace_counts_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdbcomp__read_trace_counts____Unify____read_trace_counts_error_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdbcomp__read_trace_counts____Compare____read_trace_counts_error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdbcomp__read_trace_counts____Compare____read_trace_counts_error_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdbcomp__read_trace_counts____Unify____read_trace_counts_file_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdbcomp__read_trace_counts____Unify____read_trace_counts_file_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdbcomp__read_trace_counts____Compare____read_trace_counts_file_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdbcomp__read_trace_counts____Compare____read_trace_counts_file_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdbcomp__read_trace_counts____Unify____read_trace_counts_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdbcomp__read_trace_counts____Unify____read_trace_counts_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdbcomp__read_trace_counts____Compare____read_trace_counts_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdbcomp__read_trace_counts____Compare____read_trace_counts_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdbcomp__read_trace_counts____Unify____trace_count_syntax_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdbcomp__read_trace_counts____Unify____trace_count_syntax_error_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdbcomp__read_trace_counts____Compare____trace_count_syntax_error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdbcomp__read_trace_counts____Compare____trace_count_syntax_error_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__mdbcomp__read_trace_counts__init(void)
{
}

void mercury__mdbcomp__read_trace_counts__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__type_ctor_info_read_trace_counts_error_0);
  MR_register_type_ctor_info(&mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__type_ctor_info_read_trace_counts_file_result_0);
  MR_register_type_ctor_info(&mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__type_ctor_info_read_trace_counts_result_0);
  MR_register_type_ctor_info(&mdbcomp__read_trace_counts__mdbcomp__read_trace_counts__type_ctor_info_trace_count_syntax_error_0);
}

void mercury__mdbcomp__read_trace_counts__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__mdbcomp__read_trace_counts__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module mdbcomp.read_trace_counts.
