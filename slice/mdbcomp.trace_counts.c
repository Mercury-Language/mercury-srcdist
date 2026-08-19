/*
** Automatically generated from `trace_counts.m'
** by the Mercury compiler,
** version rotd-2026-08-19
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
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "enum.mih"
#include "int.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "term.mih"
#include "term_context.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"




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

static const MR_FA_TypeInfo_Struct2 mdbcomp__trace_counts__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0;

static void MR_CALL 
mdbcomp__trace_counts__restrict_trace_counts_2_5_p_0(
  MR_Word ModuleName_6,
  MR_Word ProcLabelInContext_7,
  MR_Word ProcCounts_8,
  MR_Word STATE_VARIABLE_TraceCounts_0_16,
  MR_Word * STATE_VARIABLE_TraceCounts_17);

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
mdbcomp__trace_counts____Unify____trace_count_file_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdbcomp__trace_counts____Compare____trace_count_file_type_0_0_10001(
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


static /* final */ const MR_Box mdbcomp__trace_counts_scalar_common_1[5][3];

static /* final */ const MR_Box mdbcomp__trace_counts_scalar_common_2[1][2];

static /* final */ const MR_Box mdbcomp__trace_counts_scalar_common_3[6][1];

static /* final */ const MR_Box mdbcomp__trace_counts_scalar_common_4[3][6];

static /* final */ const MR_Box mdbcomp__trace_counts_scalar_common_5[3][8];




static /* final */ const MR_Box mdbcomp__trace_counts_scalar_common_1[5][3] = {
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
    ((MR_Box) (&mdbcomp__trace_counts_scalar_common_4[0])),
    ((MR_Box) (mdbcomp__trace_counts__summarize_trace_counts_list_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mdbcomp__trace_counts_scalar_common_4[1])),
    ((MR_Box) (mdbcomp__trace_counts__sum_trace_counts_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mdbcomp__trace_counts_scalar_common_4[2])),
    ((MR_Box) (mdbcomp__trace_counts__sum_proc_trace_counts_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mdbcomp__trace_counts_scalar_common_2[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0))
  },
};

static /* final */ const MR_Box mdbcomp__trace_counts_scalar_common_3[6][1] = {
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
};

static /* final */ const MR_Box mdbcomp__trace_counts_scalar_common_4[3][6] = {
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

static /* final */ const MR_Box mdbcomp__trace_counts_scalar_common_5[3][8] = {
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
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0)),
    ((MR_Box) (&mdbcomp__trace_counts__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)),
    ((MR_Box) (&mdbcomp__trace_counts__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)),
    ((MR_Box) (&mdbcomp__trace_counts__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0))
  },
  /* row   2 */
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
};



#include "array.mh"
#include "mdbcomp.mh"


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

static const MR_FA_TypeInfo_Struct2 mdbcomp__trace_counts__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0),
    (MR_TypeInfo) (&mdbcomp__trace_counts__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)
  }
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
                }
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_8;
                else
                  mercury__builtin__compare_3_p_0((MR_Word) (&mdbcomp__trace_counts_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (ArgX2_9)), ((MR_Box) (ArgY2_10)));
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
                TypeInfo_15_15 = (MR_Word) (&mdbcomp__trace_counts_scalar_common_2[0]);
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
      MR_hl_field(0, Var_20, 0) = ((MR_Box) (&mdbcomp__trace_counts_scalar_common_5[2]));
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
  *ProcTraceCounts_6 = mercury__map__union_3_f_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0), (MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0), (MR_Word) (&mdbcomp__trace_counts_scalar_common_1[4]), ProcTraceCountsA_4, ProcTraceCountsB_5);
}

MR_String MR_CALL 
mdbcomp__trace_counts__trace_count_file_id_0_f_0(void)
{
  return (MR_String) "Mercury trace counts file";
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
    MR_hl_field(0, Var_7, 0) = ((MR_Box) (&mdbcomp__trace_counts_scalar_common_5[1]));
    MR_hl_field(0, Var_7, 1) = ((MR_Box) (mdbcomp__trace_counts__restrict_trace_counts_to_module_3_p_0_1));
    MR_hl_field(0, Var_7, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_7, 3) = ((MR_Box) (ModuleName_4));
  }
  Var_8 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0), (MR_Word) (&mdbcomp__trace_counts_scalar_common_1[0]));
  mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0), (MR_Word) (&mdbcomp__trace_counts_scalar_common_1[0]), (MR_Word) (&mdbcomp__trace_counts_scalar_common_1[1]), Var_7, TraceCounts0_5, ((MR_Box) (Var_8)), &conv1_TraceCounts_6);
  *TraceCounts_6 = ((MR_Word) (conv1_TraceCounts_6));
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
    MR_hl_field(0, Var_7, 0) = ((MR_Box) (&mdbcomp__trace_counts_scalar_common_5[0]));
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
  mercury__map__union_4_p_1((MR_Word) (&mdbcomp__trace_counts_scalar_common_1[0]), (MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0), (MR_Word) (&mdbcomp__trace_counts_scalar_common_1[3]), TraceCountsA_4, TraceCountsB_5, TraceCounts_6);
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
    mercury__list__foldl_4_p_0((MR_Word) (&mdbcomp__trace_counts_scalar_common_1[1]), (MR_Word) (&mdbcomp__trace_counts_scalar_common_1[1]), (MR_Word) (&mdbcomp__trace_counts_scalar_common_1[2]), TraceCountsList_3, ((MR_Box) (Var_8)), &conv1_TraceCounts_4);
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
      HeadVar__3_3 = (MR_Word) (&mdbcomp__trace_counts_scalar_common_3[0]);
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
      HeadVar__3_3 = (MR_Word) (&mdbcomp__trace_counts_scalar_common_3[1]);
      break;
    case (MR_Integer) 1:
      HeadVar__3_3 = (MR_Word) (&mdbcomp__trace_counts_scalar_common_3[2]);
      break;
    case (MR_Integer) 3:
      HeadVar__3_3 = (MR_Word) (&mdbcomp__trace_counts_scalar_common_3[3]);
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
      HeadVar__3_3 = (MR_Word) (&mdbcomp__trace_counts_scalar_common_3[4]);
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
      HeadVar__3_3 = (MR_Word) (&mdbcomp__trace_counts_scalar_common_3[5]);
      break;
  }
  return HeadVar__3_3;
}

MR_Word MR_CALL 
mdbcomp__trace_counts__sum_trace_count_file_type_2_f_1(
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

MR_Word MR_CALL 
mdbcomp__trace_counts__sum_trace_count_file_type_2_f_0(
  MR_Word Type1_4,
  MR_Word Type2_5)
{
  MR_Word UnionType_6;
  MR_Word Var_81 = ((MR_Word) ((MR_hl_field(1, Type1_4, 1))));
  MR_Integer Var_82 = ((MR_Integer) ((MR_hl_field(1, Type1_4, 0))));

  switch (MR_tag((MR_Word) Type2_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Integer Var_43 = (MR_Integer) ((MR_Unsigned) Var_82 + (MR_Unsigned) 1);
        MR_Word Var_45;
        MR_Word Set0_85;
        MR_Word Set_86;

        mercury__set__list_to_set_2_p_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0), Var_81, &Set0_85);
        mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0), ((MR_Box) (Type2_5)), Set0_85, &Set_86);
        mercury__set__to_sorted_list_2_p_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0), Set_86, &Var_45);
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
        MR_Integer Var_46 = (MR_Integer) ((MR_Unsigned) Var_82 + (MR_Unsigned) N2_18);
        MR_Word Var_47;
        MR_Word Var_48;
        MR_Word IncludedTypes2_66 = ((MR_Word) ((MR_hl_field(1, Type2_5, 1))));

        Var_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0), Var_81, IncludedTypes2_66);
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
        MR_Integer Var_49 = (MR_Integer) ((MR_Unsigned) Var_82 + (MR_Unsigned) 1);
        MR_Word Var_51;
        MR_Word Set0_83;
        MR_Word Set_84;

        mercury__set__list_to_set_2_p_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0), Var_81, &Set0_83);
        mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0), ((MR_Box) (Type2_5)), Set0_83, &Set_84);
        mercury__set__to_sorted_list_2_p_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0), Set_84, &Var_51);
        {
          UnionType_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, UnionType_6, 0) = ((MR_Box) (Var_49));
          MR_hl_field(1, UnionType_6, 1) = ((MR_Box) (Var_51));
        }
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
  MR_register_type_ctor_info(&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0);
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
