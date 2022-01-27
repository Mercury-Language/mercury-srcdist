/*
** Automatically generated from `trace_counts.m'
** by the Mercury compiler,
** version DEV
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


/* :- module mdbcomp.trace_counts. */
/* :- implementation. */

/*
INIT mercury__mdbcomp__trace_counts__init
ENDINIT
*/

#include "mdbcomp.trace_counts.mih"


#include "mdbcomp.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
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
#include "lexer.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stm_builtin.mih"
#include "store.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_io.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "varset.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_TypeInfo_Struct2 mdbcomp__trace_counts__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0;

static const MR_FA_PseudoTypeInfo_Struct2 mdbcomp__trace_counts__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0;

static const MR_FA_PseudoTypeInfo_Struct2 mdbcomp__trace_counts__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0;

static const MR_EnumFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__enum_functor_desc_all_or_nonzero_0_0;

static const MR_EnumFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__enum_functor_desc_all_or_nonzero_0_1;

static const MR_EnumFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__enum_value_ordered_all_or_nonzero_0[2];

static const MR_EnumFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__enum_name_ordered_all_or_nonzero_0[2];

static const MR_Integer mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_all_or_nonzero_0[2];

static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_base_count_file_type_0_0[2];

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

static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_path_port_0_0;

static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_path_port_0_1[1];

static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_path_port_0_1;

static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_path_port_0_2[2];

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
mdbcomp__trace_counts____Unify____all_or_nonzero_0_0_10001(
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
  MR_Box mdbcomp__trace_counts__wrapper_arg_2);

static void MR_CALL 
mdbcomp__trace_counts____Compare____all_or_nonzero_0_0_10001(
  MR_Box * mdbcomp__trace_counts__wrapper_arg_1,
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
  MR_Box mdbcomp__trace_counts__wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____base_count_file_type_0_0_10001(
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
  MR_Box mdbcomp__trace_counts__wrapper_arg_2);

static void MR_CALL 
mdbcomp__trace_counts____Compare____base_count_file_type_0_0_10001(
  MR_Box * mdbcomp__trace_counts__wrapper_arg_1,
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
  MR_Box mdbcomp__trace_counts__wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____line_no_and_count_0_0_10001(
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
  MR_Box mdbcomp__trace_counts__wrapper_arg_2);

static void MR_CALL 
mdbcomp__trace_counts____Compare____line_no_and_count_0_0_10001(
  MR_Box * mdbcomp__trace_counts__wrapper_arg_1,
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
  MR_Box mdbcomp__trace_counts__wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____path_port_0_0_10001(
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
  MR_Box mdbcomp__trace_counts__wrapper_arg_2);

static void MR_CALL 
mdbcomp__trace_counts____Compare____path_port_0_0_10001(
  MR_Box * mdbcomp__trace_counts__wrapper_arg_1,
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
  MR_Box mdbcomp__trace_counts__wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____proc_label_in_context_0_0_10001(
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
  MR_Box mdbcomp__trace_counts__wrapper_arg_2);

static void MR_CALL 
mdbcomp__trace_counts____Compare____proc_label_in_context_0_0_10001(
  MR_Box * mdbcomp__trace_counts__wrapper_arg_1,
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
  MR_Box mdbcomp__trace_counts__wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____proc_trace_counts_0_0_10001(
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
  MR_Box mdbcomp__trace_counts__wrapper_arg_2);

static void MR_CALL 
mdbcomp__trace_counts____Compare____proc_trace_counts_0_0_10001(
  MR_Box * mdbcomp__trace_counts__wrapper_arg_1,
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
  MR_Box mdbcomp__trace_counts__wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____read_trace_counts_list_result_0_0_10001(
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
  MR_Box mdbcomp__trace_counts__wrapper_arg_2);

static void MR_CALL 
mdbcomp__trace_counts____Compare____read_trace_counts_list_result_0_0_10001(
  MR_Box * mdbcomp__trace_counts__wrapper_arg_1,
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
  MR_Box mdbcomp__trace_counts__wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____read_trace_counts_result_0_0_10001(
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
  MR_Box mdbcomp__trace_counts__wrapper_arg_2);

static void MR_CALL 
mdbcomp__trace_counts____Compare____read_trace_counts_result_0_0_10001(
  MR_Box * mdbcomp__trace_counts__wrapper_arg_1,
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
  MR_Box mdbcomp__trace_counts__wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____trace_count_file_type_0_0_10001(
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
  MR_Box mdbcomp__trace_counts__wrapper_arg_2);

static void MR_CALL 
mdbcomp__trace_counts____Compare____trace_count_file_type_0_0_10001(
  MR_Box * mdbcomp__trace_counts__wrapper_arg_1,
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
  MR_Box mdbcomp__trace_counts__wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____trace_count_syntax_error_0_0_10001(
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
  MR_Box mdbcomp__trace_counts__wrapper_arg_2);

static void MR_CALL 
mdbcomp__trace_counts____Compare____trace_count_syntax_error_0_0_10001(
  MR_Box * mdbcomp__trace_counts__wrapper_arg_1,
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
  MR_Box mdbcomp__trace_counts__wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____trace_counts_0_0_10001(
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
  MR_Box mdbcomp__trace_counts__wrapper_arg_2);

static void MR_CALL 
mdbcomp__trace_counts____Compare____trace_counts_0_0_10001(
  MR_Box * mdbcomp__trace_counts__wrapper_arg_1,
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
  MR_Box mdbcomp__trace_counts__wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__trace_counts__IntroducedFrom__pred__write_proc_label_and_check__845__1_2_p_0(
  MR_Word mdbcomp__trace_counts__ModuleNameSym_5,
  MR_Word mdbcomp__trace_counts__DefModuleSym_8);

static void MR_CALL 
mdbcomp__trace_counts____Compare____trace_count_syntax_error_0_0(
  MR_Word * mdbcomp__trace_counts__HeadVar__1_1,
  MR_Word mdbcomp__trace_counts__HeadVar__2_2,
  MR_Word mdbcomp__trace_counts__HeadVar__3_3);

static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____trace_count_syntax_error_0_0(
  MR_Word mdbcomp__trace_counts__HeadVar__1_1,
  MR_Word mdbcomp__trace_counts__HeadVar__2_2);

static MR_Word MR_CALL 
mdbcomp__trace_counts__insert_into_list_as_set_2_f_0(
  MR_Word mdbcomp__trace_counts__TypeInfo_for_T_9,
  MR_Word mdbcomp__trace_counts__List0_4,
  MR_Box mdbcomp__trace_counts__Item_5);

static void MR_CALL 
mdbcomp__trace_counts__restrict_trace_counts_2_5_p_0(
  MR_Word mdbcomp__trace_counts__ModuleName_6,
  MR_Word mdbcomp__trace_counts__ProcLabelInContext_7,
  MR_Word mdbcomp__trace_counts__ProcCounts_8,
  MR_Word mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_0_16,
  MR_Word * mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_17);

static void MR_CALL 
mdbcomp__trace_counts__write_path_port_count_4_p_0(
  MR_Word mdbcomp__trace_counts__HeadVar__1_1,
  MR_Word mdbcomp__trace_counts__HeadVar__2_2);

static void MR_CALL 
mdbcomp__trace_counts__write_proc_label_and_file_trace_counts_8_p_0_2(
  MR_Box mdbcomp__trace_counts__closure_arg,
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
  MR_Box mdbcomp__trace_counts__wrapper_arg_3,
  MR_Box * mdbcomp__trace_counts__wrapper_arg_4);

static MR_bool MR_CALL 
mdbcomp__trace_counts__write_proc_label_and_file_trace_counts_8_p_0_1(
  MR_Box mdbcomp__trace_counts__closure_arg);

static void MR_CALL 
mdbcomp__trace_counts__write_proc_label_and_file_trace_counts_8_p_0(
  MR_Word mdbcomp__trace_counts__ProcLabelInContext_9,
  MR_Word mdbcomp__trace_counts__PathPortCounts_10,
  MR_Word mdbcomp__trace_counts__STATE_VARIABLE_CurModuleNameSym_0_18,
  MR_Word * mdbcomp__trace_counts__STATE_VARIABLE_CurModuleNameSym_19,
  MR_String mdbcomp__trace_counts__STATE_VARIABLE_CurFileName_0_20,
  MR_String * mdbcomp__trace_counts__STATE_VARIABLE_CurFileName_21);

static void MR_CALL 
mdbcomp__trace_counts__read_and_union_trace_counts_2_9_p_0(
  MR_Word mdbcomp__trace_counts__ShowProgress_1,
  MR_Word mdbcomp__trace_counts__HeadVar__2_2,
  MR_Word mdbcomp__trace_counts__STATE_VARIABLE_FileType_0_3,
  MR_Word * mdbcomp__trace_counts__STATE_VARIABLE_FileType_4,
  MR_Word mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_0_5,
  MR_Word * mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_6,
  MR_Word * mdbcomp__trace_counts__HeadVar__7_7);

static MR_bool MR_CALL 
mdbcomp__trace_counts__parse_path_port_line_5_p_0(
  MR_String mdbcomp__trace_counts__Line_6,
  MR_Word * mdbcomp__trace_counts__PathPort_7,
  MR_Integer * mdbcomp__trace_counts__LineNumber_8,
  MR_Integer * mdbcomp__trace_counts__ExecCount_9,
  MR_Integer * mdbcomp__trace_counts__NumTests_10);

static void MR_CALL 
mdbcomp__trace_counts__read_proc_trace_counts_2_6_p_0(
  MR_Word mdbcomp__trace_counts__ProcLabelInContext_7,
  MR_Word mdbcomp__trace_counts__ProcCounts0_8,
  MR_Word mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_0_22,
  MR_Word * mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_23);

static void MR_CALL 
mdbcomp__trace_counts__read_proc_trace_counts_8_p_0(
  MR_Integer mdbcomp__trace_counts__HeaderLineNumber_9,
  MR_String mdbcomp__trace_counts__HeaderLine_10,
  MR_Word mdbcomp__trace_counts__CurModuleNameSym_11,
  MR_String mdbcomp__trace_counts__CurFileName_12,
  MR_Word mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_0_53,
  MR_Word * mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_54);

static void MR_CALL 
mdbcomp__trace_counts__read_trace_counts_setup_4_p_0(
  MR_Word mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_0_13,
  MR_Word * mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_14);

static void MR_CALL 
mdbcomp__trace_counts__read_trace_counts_list_stream_8_p_0(
  MR_Word mdbcomp__trace_counts__ShowProgress_9,
  MR_Word mdbcomp__trace_counts__FileType0_10,
  MR_Word mdbcomp__trace_counts__TraceCounts0_11,
  MR_String mdbcomp__trace_counts__MainFileName_12,
  MR_Word mdbcomp__trace_counts__Stream_13,
  MR_Word * mdbcomp__trace_counts__Result_14);

static void MR_CALL 
mdbcomp__trace_counts__diff_proc_counts_acc_5_p_0(
  MR_Word mdbcomp__trace_counts__ProcTraceCountsB_6,
  MR_Word mdbcomp__trace_counts__PathPortA_7,
  MR_Word mdbcomp__trace_counts__LineNoCountA_8,
  MR_Word mdbcomp__trace_counts__STATE_VARIABLE_ProcTraceCounts_0_12,
  MR_Word * mdbcomp__trace_counts__STATE_VARIABLE_ProcTraceCounts_13);

static void MR_CALL 
mdbcomp__trace_counts__diff_trace_counts_acc_5_p_0_1(
  MR_Box mdbcomp__trace_counts__closure_arg,
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
  MR_Box mdbcomp__trace_counts__wrapper_arg_3,
  MR_Box * mdbcomp__trace_counts__wrapper_arg_4);

static void MR_CALL 
mdbcomp__trace_counts__diff_trace_counts_acc_5_p_0(
  MR_Word mdbcomp__trace_counts__TraceCountsB_6,
  MR_Word mdbcomp__trace_counts__ProcLabelInContextA_7,
  MR_Word mdbcomp__trace_counts__ProcTraceCountsA_8,
  MR_Word mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_0_12,
  MR_Word * mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_13);

static MR_Word MR_CALL 
mdbcomp__trace_counts__sum_counts_on_line_2_f_0(
  MR_Word mdbcomp__trace_counts__LC1_4,
  MR_Word mdbcomp__trace_counts__LC2_5);

static MR_Box MR_CALL 
mdbcomp__trace_counts__sum_proc_trace_counts_3_p_0_1(
  MR_Box mdbcomp__trace_counts__closure_arg,
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
  MR_Box mdbcomp__trace_counts__wrapper_arg_2);

static void MR_CALL 
mdbcomp__trace_counts__sum_proc_trace_counts_3_p_0(
  MR_Word mdbcomp__trace_counts__ProcTraceCountsA_4,
  MR_Word mdbcomp__trace_counts__ProcTraceCountsB_5,
  MR_Word * mdbcomp__trace_counts__ProcTraceCounts_6);

static void MR_CALL 
mdbcomp__trace_counts__restrict_trace_counts_to_module_3_p_0_1(
  MR_Box mdbcomp__trace_counts__closure_arg,
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
  MR_Box mdbcomp__trace_counts__wrapper_arg_3,
  MR_Box * mdbcomp__trace_counts__wrapper_arg_4);

static void MR_CALL 
mdbcomp__trace_counts__write_trace_counts_to_file_6_p_0_1(
  MR_Box mdbcomp__trace_counts__closure_arg,
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
  MR_Box mdbcomp__trace_counts__wrapper_arg_3,
  MR_Box * mdbcomp__trace_counts__wrapper_arg_4,
  MR_Box mdbcomp__trace_counts__wrapper_arg_5,
  MR_Box * mdbcomp__trace_counts__wrapper_arg_6,
  MR_Box mdbcomp__trace_counts__wrapper_arg_7,
  MR_Box * mdbcomp__trace_counts__wrapper_arg_8);

static void MR_CALL 
mdbcomp__trace_counts__read_trace_counts_4_p_0_1(
  MR_Box mdbcomp__trace_counts__closure_arg,
  MR_Box * mdbcomp__trace_counts__wrapper_arg_1,
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
  MR_Box * mdbcomp__trace_counts__wrapper_arg_3);

static void MR_CALL 
mdbcomp__trace_counts__diff_trace_counts_3_p_0_1(
  MR_Box mdbcomp__trace_counts__closure_arg,
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
  MR_Box mdbcomp__trace_counts__wrapper_arg_3,
  MR_Box * mdbcomp__trace_counts__wrapper_arg_4);

static void MR_CALL 
mdbcomp__trace_counts__sum_trace_counts_3_p_0_1(
  MR_Box mdbcomp__trace_counts__closure_arg,
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
  MR_Box * mdbcomp__trace_counts__wrapper_arg_3);

static void MR_CALL 
mdbcomp__trace_counts__summarize_trace_counts_list_2_p_0_1(
  MR_Box mdbcomp__trace_counts__closure_arg,
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
  MR_Box * mdbcomp__trace_counts__wrapper_arg_3);


static /* final */ const MR_Box mdbcomp__trace_counts_scalar_common_1[7][3];

static /* final */ const MR_Box mdbcomp__trace_counts_scalar_common_2[3][2];

static /* final */ const MR_Box mdbcomp__trace_counts_scalar_common_3[10][1];

static /* final */ const MR_Box mdbcomp__trace_counts_scalar_common_4[3][6];

static /* final */ const MR_Box mdbcomp__trace_counts_scalar_common_5[3][8];

static /* final */ const MR_Box mdbcomp__trace_counts_scalar_common_6[2][7];

static /* final */ const MR_Box mdbcomp__trace_counts_scalar_common_7[1][11];

static /* final */ const MR_Box mdbcomp__trace_counts_scalar_common_11[1][5];


/* sealed */ struct mdbcomp__trace_counts__vector_common_type_8_0_s {
  const MR_Word mdbcomp__trace_counts__vector_common_type_8_0__vct_8_f_0;
};

static /* final */ const struct mdbcomp__trace_counts__vector_common_type_8_0_s mdbcomp__trace_counts_vector_common_8[16];

/* sealed */ struct mdbcomp__trace_counts__vector_common_type_9_0_s {
  const MR_String mdbcomp__trace_counts__vector_common_type_9_0__vct_9_f_0;
};

static /* final */ const struct mdbcomp__trace_counts__vector_common_type_9_0_s mdbcomp__trace_counts_vector_common_9[16];

/* sealed */ struct mdbcomp__trace_counts__vector_common_type_10_0_s {
  const MR_String mdbcomp__trace_counts__vector_common_type_10_0__vct_10_f_0;
  const MR_Integer mdbcomp__trace_counts__vector_common_type_10_0__vct_10_f_1;
};

static /* final */ const struct mdbcomp__trace_counts__vector_common_type_10_0_s mdbcomp__trace_counts_vector_common_10[4];



static /* final */ const MR_Box mdbcomp__trace_counts_scalar_common_1[7][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0)),
    ((MR_Box) (&mdbcomp__trace_counts_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mdbcomp__trace_counts_scalar_common_4[0])),
    ((MR_Box) (mdbcomp__trace_counts__summarize_trace_counts_list_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mdbcomp__trace_counts_scalar_common_4[1])),
    ((MR_Box) (mdbcomp__trace_counts__sum_trace_counts_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mdbcomp__trace_counts_scalar_common_7[0])),
    ((MR_Box) (mdbcomp__trace_counts__write_trace_counts_to_file_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mdbcomp__trace_counts_scalar_common_4[2])),
    ((MR_Box) (mdbcomp__trace_counts__sum_proc_trace_counts_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mdbcomp__trace_counts_scalar_common_6[1])),
    ((MR_Box) (mdbcomp__trace_counts__write_proc_label_and_file_trace_counts_8_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mdbcomp__trace_counts_scalar_common_2[3][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box mdbcomp__trace_counts_scalar_common_3[10][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 5))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Integer) 15))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "no info on trace count file type"))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "no trace count file id"))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) ""))
  },
  /* row 9 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};

static /* final */ const MR_Box mdbcomp__trace_counts_scalar_common_4[3][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__trace_counts__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)),
    ((MR_Box) (&mdbcomp__trace_counts__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)),
    ((MR_Box) (&mdbcomp__trace_counts__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__trace_counts__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)),
    ((MR_Box) (&mdbcomp__trace_counts__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)),
    ((MR_Box) (&mdbcomp__trace_counts__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0))
  },
};

static /* final */ const MR_Box mdbcomp__trace_counts_scalar_common_5[3][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mdbcomp__trace_counts__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0)),
    ((MR_Box) (&mdbcomp__trace_counts__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)),
    ((MR_Box) (&mdbcomp__trace_counts__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)),
    ((MR_Box) (&mdbcomp__trace_counts__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0)),
    ((MR_Box) (&mdbcomp__trace_counts__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)),
    ((MR_Box) (&mdbcomp__trace_counts__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)),
    ((MR_Box) (&mdbcomp__trace_counts__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mdbcomp__trace_counts__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)),
    ((MR_Box) (&mdbcomp__trace_counts__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)),
    ((MR_Box) (&mdbcomp__trace_counts__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0))
  },
};

static /* final */ const MR_Box mdbcomp__trace_counts_scalar_common_6[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__trace_counts__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)),
    ((MR_Box) (&mdbcomp__trace_counts__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mdbcomp__trace_counts_scalar_common_7[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
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

static /* final */ const MR_Box mdbcomp__trace_counts_scalar_common_11[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};


static /* final */ const struct mdbcomp__trace_counts__vector_common_type_8_0_s mdbcomp__trace_counts_vector_common_8[16] = {
  /* row 0 */   {     (MR_Integer) 0 },
  /* row 1 */   {     (MR_Integer) 6 },
  /* row 2 */   {     (MR_Integer) 12 },
  /* row 3 */   {     (MR_Integer) 13 },
  /* row 4 */   {     (MR_Integer) 8 },
  /* row 5 */   {     (MR_Integer) 5 },
  /* row 6 */   {     (MR_Integer) 1 },
  /* row 7 */   {     (MR_Integer) 3 },
  /* row 8 */   {     (MR_Integer) 9 },
  /* row 9 */   {     (MR_Integer) 11 },
  /* row 10 */   {     (MR_Integer) 10 },
  /* row 11 */   {     (MR_Integer) 2 },
  /* row 12 */   {     (MR_Integer) 14 },
  /* row 13 */   {     (MR_Integer) 4 },
  /* row 14 */   {     (MR_Integer) 7 },
  /* row 15 */   {     (MR_Integer) 15 },
};

static /* final */ const struct mdbcomp__trace_counts__vector_common_type_9_0_s mdbcomp__trace_counts_vector_common_9[16] = {
  /* row 0 */   {     (MR_String) "CALL" },
  /* row 1 */   {     (MR_String) "EXIT" },
  /* row 2 */   {     (MR_String) "REDO" },
  /* row 3 */   {     (MR_String) "FAIL" },
  /* row 4 */   {     (MR_String) "TAIL" },
  /* row 5 */   {     (MR_String) "EXCP" },
  /* row 6 */   {     (MR_String) "COND" },
  /* row 7 */   {     (MR_String) "THEN" },
  /* row 8 */   {     (MR_String) "ELSE" },
  /* row 9 */   {     (MR_String) "NEGE" },
  /* row 10 */   {     (MR_String) "NEGS" },
  /* row 11 */   {     (MR_String) "NEGF" },
  /* row 12 */   {     (MR_String) "DSJF" },
  /* row 13 */   {     (MR_String) "DSJL" },
  /* row 14 */   {     (MR_String) "SWTC" },
  /* row 15 */   {     (MR_String) "USER" },
};

static /* final */ const struct mdbcomp__trace_counts__vector_common_type_10_0_s mdbcomp__trace_counts_vector_common_10[4] = {
  /* row 0 */
  {
    (MR_String) "fproc",
    (MR_Integer) 0
  },
  /* row 1 */
  {
    (MR_String) "fprocdecl",
    (MR_Integer) 1
  },
  /* row 2 */
  {
    (MR_String) "pproc",
    (MR_Integer) 2
  },
  /* row 3 */
  {
    (MR_String) "pprocdecl",
    (MR_Integer) 3
  },
};


#include "io.mh"
#include "mdbcomp.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_TypeInfo_Struct2 mdbcomp__trace_counts__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0,
    (MR_TypeInfo) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 mdbcomp__trace_counts__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0,
    (MR_PseudoTypeInfo) &mdbcomp__trace_counts__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 mdbcomp__trace_counts__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0,
    (MR_PseudoTypeInfo) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0
  }
};

static const MR_EnumFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__enum_functor_desc_all_or_nonzero_0_0 = {
  (MR_String) "user_all",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__enum_functor_desc_all_or_nonzero_0_1 = {
  (MR_String) "user_nonzero",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__enum_value_ordered_all_or_nonzero_0[2] = {
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
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdbcomp__trace_counts____Unify____all_or_nonzero_0_0_10001)),
  ((MR_Box) (mdbcomp__trace_counts____Compare____all_or_nonzero_0_0_10001)),
  (MR_String) "mdbcomp.trace_counts",
  (MR_String) "all_or_nonzero",
  {     mdbcomp__trace_counts__mdbcomp__trace_counts__enum_name_ordered_all_or_nonzero_0 },
  {     mdbcomp__trace_counts__mdbcomp__trace_counts__enum_value_ordered_all_or_nonzero_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_all_or_nonzero_0
};

static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_base_count_file_type_0_0[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_all_or_nonzero_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_base_count_file_type_0_0 = {
  (MR_String) "base_count_file_type",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_base_count_file_type_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_base_count_file_type_0_0[1] = {
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_base_count_file_type_0_0
};

static const MR_DuPtagLayout mdbcomp__trace_counts__mdbcomp__trace_counts__du_ptag_ordered_base_count_file_type_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_base_count_file_type_0_0
  }
};

static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_name_ordered_base_count_file_type_0[1] = {
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_base_count_file_type_0_0
};

static const MR_Integer mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_base_count_file_type_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_base_count_file_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__trace_counts____Unify____base_count_file_type_0_0_10001)),
  ((MR_Box) (mdbcomp__trace_counts____Compare____base_count_file_type_0_0_10001)),
  (MR_String) "mdbcomp.trace_counts",
  (MR_String) "base_count_file_type",
  {     mdbcomp__trace_counts__mdbcomp__trace_counts__du_name_ordered_base_count_file_type_0 },
  {     mdbcomp__trace_counts__mdbcomp__trace_counts__du_ptag_ordered_base_count_file_type_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_base_count_file_type_0
};

static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_line_no_and_count_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_ConstString mdbcomp__trace_counts__mdbcomp__trace_counts__field_names_line_no_and_count_0_0[3] = {
  (MR_String) "line_number",
  (MR_String) "exec_count",
  (MR_String) "num_tests"
};

static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_line_no_and_count_0_0 = {
  (MR_String) "line_no_and_count",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_line_no_and_count_0_0,
  mdbcomp__trace_counts__mdbcomp__trace_counts__field_names_line_no_and_count_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_line_no_and_count_0_0[1] = {
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_line_no_and_count_0_0
};

static const MR_DuPtagLayout mdbcomp__trace_counts__mdbcomp__trace_counts__du_ptag_ordered_line_no_and_count_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_line_no_and_count_0_0
  }
};

static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_name_ordered_line_no_and_count_0[1] = {
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_line_no_and_count_0_0
};

static const MR_Integer mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_line_no_and_count_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__trace_counts____Unify____line_no_and_count_0_0_10001)),
  ((MR_Box) (mdbcomp__trace_counts____Compare____line_no_and_count_0_0_10001)),
  (MR_String) "mdbcomp.trace_counts",
  (MR_String) "line_no_and_count",
  {     mdbcomp__trace_counts__mdbcomp__trace_counts__du_name_ordered_line_no_and_count_0 },
  {     mdbcomp__trace_counts__mdbcomp__trace_counts__du_ptag_ordered_line_no_and_count_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_line_no_and_count_0
};

static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_path_port_0_0[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_trace_port_0
};

static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_path_port_0_0 = {
  (MR_String) "port_only",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_path_port_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_path_port_0_1[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0
};

static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_path_port_0_1 = {
  (MR_String) "path_only",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_path_port_0_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_path_port_0_2[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_trace_port_0,
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0
};

static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_path_port_0_2 = {
  (MR_String) "port_and_path",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_path_port_0_2,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_path_port_0_0[1] = {
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_path_port_0_0
};

static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_path_port_0_1[1] = {
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_path_port_0_1
};

static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_path_port_0_2[1] = {
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_path_port_0_2
};

static const MR_DuPtagLayout mdbcomp__trace_counts__mdbcomp__trace_counts__du_ptag_ordered_path_port_0[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_path_port_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_path_port_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_path_port_0_2
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
  (MR_Integer) 16,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__trace_counts____Unify____path_port_0_0_10001)),
  ((MR_Box) (mdbcomp__trace_counts____Compare____path_port_0_0_10001)),
  (MR_String) "mdbcomp.trace_counts",
  (MR_String) "path_port",
  {     mdbcomp__trace_counts__mdbcomp__trace_counts__du_name_ordered_path_port_0 },
  {     mdbcomp__trace_counts__mdbcomp__trace_counts__du_ptag_ordered_path_port_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_path_port_0
};

static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_proc_label_in_context_0_0[3] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0
};

static const MR_ConstString mdbcomp__trace_counts__mdbcomp__trace_counts__field_names_proc_label_in_context_0_0[3] = {
  (MR_String) "context_module_symname",
  (MR_String) "context_filename",
  (MR_String) "proc_label"
};

static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_proc_label_in_context_0_0 = {
  (MR_String) "proc_label_in_context",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_proc_label_in_context_0_0,
  mdbcomp__trace_counts__mdbcomp__trace_counts__field_names_proc_label_in_context_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_proc_label_in_context_0_0[1] = {
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_proc_label_in_context_0_0
};

static const MR_DuPtagLayout mdbcomp__trace_counts__mdbcomp__trace_counts__du_ptag_ordered_proc_label_in_context_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_proc_label_in_context_0_0
  }
};

static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_name_ordered_proc_label_in_context_0[1] = {
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_proc_label_in_context_0_0
};

static const MR_Integer mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_proc_label_in_context_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__trace_counts____Unify____proc_label_in_context_0_0_10001)),
  ((MR_Box) (mdbcomp__trace_counts____Compare____proc_label_in_context_0_0_10001)),
  (MR_String) "mdbcomp.trace_counts",
  (MR_String) "proc_label_in_context",
  {     mdbcomp__trace_counts__mdbcomp__trace_counts__du_name_ordered_proc_label_in_context_0 },
  {     mdbcomp__trace_counts__mdbcomp__trace_counts__du_ptag_ordered_proc_label_in_context_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_proc_label_in_context_0
};

const MR_TypeCtorInfo_Struct mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_trace_counts_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdbcomp__trace_counts____Unify____proc_trace_counts_0_0_10001)),
  ((MR_Box) (mdbcomp__trace_counts____Compare____proc_trace_counts_0_0_10001)),
  (MR_String) "mdbcomp.trace_counts",
  (MR_String) "proc_trace_counts",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mdbcomp__trace_counts__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct2 mdbcomp__trace_counts__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0,
    (MR_TypeInfo) &mdbcomp__trace_counts__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0
  }
};

static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_read_trace_counts_list_result_0_0[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0,
  (MR_PseudoTypeInfo) &mdbcomp__trace_counts__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0
};

static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_list_result_0_0 = {
  (MR_String) "list_ok",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_read_trace_counts_list_result_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_read_trace_counts_list_result_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_list_result_0_1 = {
  (MR_String) "list_error_message",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_read_trace_counts_list_result_0_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_read_trace_counts_list_result_0_0[1] = {
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_list_result_0_0
};

static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_read_trace_counts_list_result_0_1[1] = {
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_list_result_0_1
};

static const MR_DuPtagLayout mdbcomp__trace_counts__mdbcomp__trace_counts__du_ptag_ordered_read_trace_counts_list_result_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_read_trace_counts_list_result_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_read_trace_counts_list_result_0_1
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
  (MR_Integer) 16,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__trace_counts____Unify____read_trace_counts_list_result_0_0_10001)),
  ((MR_Box) (mdbcomp__trace_counts____Compare____read_trace_counts_list_result_0_0_10001)),
  (MR_String) "mdbcomp.trace_counts",
  (MR_String) "read_trace_counts_list_result",
  {     mdbcomp__trace_counts__mdbcomp__trace_counts__du_name_ordered_read_trace_counts_list_result_0 },
  {     mdbcomp__trace_counts__mdbcomp__trace_counts__du_ptag_ordered_read_trace_counts_list_result_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_read_trace_counts_list_result_0
};

static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_read_trace_counts_result_0_0[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0,
  (MR_PseudoTypeInfo) &mdbcomp__trace_counts__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0
};

static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_result_0_0 = {
  (MR_String) "ok",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_read_trace_counts_result_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_read_trace_counts_result_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_result_0_1 = {
  (MR_String) "syntax_error",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_read_trace_counts_result_0_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_read_trace_counts_result_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_result_0_2 = {
  (MR_String) "error_message",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_read_trace_counts_result_0_2,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_read_trace_counts_result_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_error_0
};

static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_result_0_3 = {
  (MR_String) "open_error",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 3,
  mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_read_trace_counts_result_0_3,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_read_trace_counts_result_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_error_0
};

static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_result_0_4 = {
  (MR_String) "io_error",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_read_trace_counts_result_0_4,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_read_trace_counts_result_0_0[1] = {
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_result_0_0
};

static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_read_trace_counts_result_0_1[1] = {
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_result_0_1
};

static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_read_trace_counts_result_0_2[1] = {
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_result_0_2
};

static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_read_trace_counts_result_0_3[2] = {
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_result_0_3,
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_result_0_4
};

static const MR_DuPtagLayout mdbcomp__trace_counts__mdbcomp__trace_counts__du_ptag_ordered_read_trace_counts_result_0[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_read_trace_counts_result_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_read_trace_counts_result_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_read_trace_counts_result_0_2
  },
  {
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_read_trace_counts_result_0_3
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
  (MR_Integer) 16,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__trace_counts____Unify____read_trace_counts_result_0_0_10001)),
  ((MR_Box) (mdbcomp__trace_counts____Compare____read_trace_counts_result_0_0_10001)),
  (MR_String) "mdbcomp.trace_counts",
  (MR_String) "read_trace_counts_result",
  {     mdbcomp__trace_counts__mdbcomp__trace_counts__du_name_ordered_read_trace_counts_result_0 },
  {     mdbcomp__trace_counts__mdbcomp__trace_counts__du_ptag_ordered_read_trace_counts_result_0 },
  (MR_Integer) 5,
  (MR_Integer) 4,
  mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_read_trace_counts_result_0
};

static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_trace_count_file_type_0_0[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_base_count_file_type_0
};

static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_trace_count_file_type_0_0 = {
  (MR_String) "single_file",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_trace_count_file_type_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_TypeInfo_Struct1 mdbcomp__trace_counts__list__ti_list_1mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0
  }
};

static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_trace_count_file_type_0_1[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdbcomp__trace_counts__list__ti_list_1mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0
};

static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_trace_count_file_type_0_1 = {
  (MR_String) "union_file",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_trace_count_file_type_0_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_trace_count_file_type_0_2[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0,
  (MR_PseudoTypeInfo) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0
};

static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_trace_count_file_type_0_2 = {
  (MR_String) "diff_file",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_trace_count_file_type_0_2,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_trace_count_file_type_0_0[1] = {
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_trace_count_file_type_0_0
};

static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_trace_count_file_type_0_1[1] = {
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_trace_count_file_type_0_1
};

static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_trace_count_file_type_0_2[1] = {
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_trace_count_file_type_0_2
};

static const MR_DuPtagLayout mdbcomp__trace_counts__mdbcomp__trace_counts__du_ptag_ordered_trace_count_file_type_0[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
    mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_trace_count_file_type_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_trace_count_file_type_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_trace_count_file_type_0_2
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
  (MR_Integer) 16,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__trace_counts____Unify____trace_count_file_type_0_0_10001)),
  ((MR_Box) (mdbcomp__trace_counts____Compare____trace_count_file_type_0_0_10001)),
  (MR_String) "mdbcomp.trace_counts",
  (MR_String) "trace_count_file_type",
  {     mdbcomp__trace_counts__mdbcomp__trace_counts__du_name_ordered_trace_count_file_type_0 },
  {     mdbcomp__trace_counts__mdbcomp__trace_counts__du_ptag_ordered_trace_count_file_type_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_trace_count_file_type_0
};

static const MR_Integer mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_trace_count_syntax_error_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__notag_functor_desc_trace_count_syntax_error_0 = {
  (MR_String) "trace_count_syntax_error",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_syntax_error_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mdbcomp__trace_counts____Unify____trace_count_syntax_error_0_0_10001)),
  ((MR_Box) (mdbcomp__trace_counts____Compare____trace_count_syntax_error_0_0_10001)),
  (MR_String) "mdbcomp.trace_counts",
  (MR_String) "trace_count_syntax_error",
  {     &mdbcomp__trace_counts__mdbcomp__trace_counts__notag_functor_desc_trace_count_syntax_error_0 },
  {     &mdbcomp__trace_counts__mdbcomp__trace_counts__notag_functor_desc_trace_count_syntax_error_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_trace_count_syntax_error_0
};

const MR_TypeCtorInfo_Struct mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_counts_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdbcomp__trace_counts____Unify____trace_counts_0_0_10001)),
  ((MR_Box) (mdbcomp__trace_counts____Compare____trace_counts_0_0_10001)),
  (MR_String) "mdbcomp.trace_counts",
  (MR_String) "trace_counts",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mdbcomp__trace_counts__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____all_or_nonzero_0_0_10001(
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
  MR_Box mdbcomp__trace_counts__wrapper_arg_2)
{
  {
    MR_bool mdbcomp__trace_counts__succeeded;

    {
      mdbcomp__trace_counts__succeeded = mdbcomp__trace_counts____Unify____all_or_nonzero_0_0(((MR_Word) mdbcomp__trace_counts__wrapper_arg_1), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_2));
    }
    return mdbcomp__trace_counts__succeeded;
  }
}

static void MR_CALL 
mdbcomp__trace_counts____Compare____all_or_nonzero_0_0_10001(
  MR_Box * mdbcomp__trace_counts__wrapper_arg_1,
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
  MR_Box mdbcomp__trace_counts__wrapper_arg_3)
{
  {
    MR_Word mdbcomp__trace_counts__conv0_HeadVar__1_1;

    {
      mdbcomp__trace_counts____Compare____all_or_nonzero_0_0(&mdbcomp__trace_counts__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__trace_counts__wrapper_arg_2), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_3));
    }
    *mdbcomp__trace_counts__wrapper_arg_1 = ((MR_Box) (mdbcomp__trace_counts__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____base_count_file_type_0_0_10001(
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
  MR_Box mdbcomp__trace_counts__wrapper_arg_2)
{
  {
    MR_bool mdbcomp__trace_counts__succeeded;

    {
      mdbcomp__trace_counts__succeeded = mdbcomp__trace_counts____Unify____base_count_file_type_0_0(((MR_Word) mdbcomp__trace_counts__wrapper_arg_1), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_2));
    }
    return mdbcomp__trace_counts__succeeded;
  }
}

static void MR_CALL 
mdbcomp__trace_counts____Compare____base_count_file_type_0_0_10001(
  MR_Box * mdbcomp__trace_counts__wrapper_arg_1,
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
  MR_Box mdbcomp__trace_counts__wrapper_arg_3)
{
  {
    MR_Word mdbcomp__trace_counts__conv0_HeadVar__1_1;

    {
      mdbcomp__trace_counts____Compare____base_count_file_type_0_0(&mdbcomp__trace_counts__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__trace_counts__wrapper_arg_2), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_3));
    }
    *mdbcomp__trace_counts__wrapper_arg_1 = ((MR_Box) (mdbcomp__trace_counts__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____line_no_and_count_0_0_10001(
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
  MR_Box mdbcomp__trace_counts__wrapper_arg_2)
{
  {
    MR_bool mdbcomp__trace_counts__succeeded;

    {
      mdbcomp__trace_counts__succeeded = mdbcomp__trace_counts____Unify____line_no_and_count_0_0(((MR_Word) mdbcomp__trace_counts__wrapper_arg_1), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_2));
    }
    return mdbcomp__trace_counts__succeeded;
  }
}

static void MR_CALL 
mdbcomp__trace_counts____Compare____line_no_and_count_0_0_10001(
  MR_Box * mdbcomp__trace_counts__wrapper_arg_1,
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
  MR_Box mdbcomp__trace_counts__wrapper_arg_3)
{
  {
    MR_Word mdbcomp__trace_counts__conv0_HeadVar__1_1;

    {
      mdbcomp__trace_counts____Compare____line_no_and_count_0_0(&mdbcomp__trace_counts__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__trace_counts__wrapper_arg_2), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_3));
    }
    *mdbcomp__trace_counts__wrapper_arg_1 = ((MR_Box) (mdbcomp__trace_counts__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____path_port_0_0_10001(
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
  MR_Box mdbcomp__trace_counts__wrapper_arg_2)
{
  {
    MR_bool mdbcomp__trace_counts__succeeded;

    {
      mdbcomp__trace_counts__succeeded = mdbcomp__trace_counts____Unify____path_port_0_0(((MR_Word) mdbcomp__trace_counts__wrapper_arg_1), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_2));
    }
    return mdbcomp__trace_counts__succeeded;
  }
}

static void MR_CALL 
mdbcomp__trace_counts____Compare____path_port_0_0_10001(
  MR_Box * mdbcomp__trace_counts__wrapper_arg_1,
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
  MR_Box mdbcomp__trace_counts__wrapper_arg_3)
{
  {
    MR_Word mdbcomp__trace_counts__conv0_HeadVar__1_1;

    {
      mdbcomp__trace_counts____Compare____path_port_0_0(&mdbcomp__trace_counts__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__trace_counts__wrapper_arg_2), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_3));
    }
    *mdbcomp__trace_counts__wrapper_arg_1 = ((MR_Box) (mdbcomp__trace_counts__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____proc_label_in_context_0_0_10001(
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
  MR_Box mdbcomp__trace_counts__wrapper_arg_2)
{
  {
    MR_bool mdbcomp__trace_counts__succeeded;

    {
      mdbcomp__trace_counts__succeeded = mdbcomp__trace_counts____Unify____proc_label_in_context_0_0(((MR_Word) mdbcomp__trace_counts__wrapper_arg_1), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_2));
    }
    return mdbcomp__trace_counts__succeeded;
  }
}

static void MR_CALL 
mdbcomp__trace_counts____Compare____proc_label_in_context_0_0_10001(
  MR_Box * mdbcomp__trace_counts__wrapper_arg_1,
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
  MR_Box mdbcomp__trace_counts__wrapper_arg_3)
{
  {
    MR_Word mdbcomp__trace_counts__conv0_HeadVar__1_1;

    {
      mdbcomp__trace_counts____Compare____proc_label_in_context_0_0(&mdbcomp__trace_counts__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__trace_counts__wrapper_arg_2), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_3));
    }
    *mdbcomp__trace_counts__wrapper_arg_1 = ((MR_Box) (mdbcomp__trace_counts__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____proc_trace_counts_0_0_10001(
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
  MR_Box mdbcomp__trace_counts__wrapper_arg_2)
{
  {
    MR_bool mdbcomp__trace_counts__succeeded;

    {
      mdbcomp__trace_counts__succeeded = mdbcomp__trace_counts____Unify____proc_trace_counts_0_0(((MR_Word) mdbcomp__trace_counts__wrapper_arg_1), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_2));
    }
    return mdbcomp__trace_counts__succeeded;
  }
}

static void MR_CALL 
mdbcomp__trace_counts____Compare____proc_trace_counts_0_0_10001(
  MR_Box * mdbcomp__trace_counts__wrapper_arg_1,
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
  MR_Box mdbcomp__trace_counts__wrapper_arg_3)
{
  {
    MR_Word mdbcomp__trace_counts__conv0_HeadVar__1_1;

    {
      mdbcomp__trace_counts____Compare____proc_trace_counts_0_0(&mdbcomp__trace_counts__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__trace_counts__wrapper_arg_2), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_3));
    }
    *mdbcomp__trace_counts__wrapper_arg_1 = ((MR_Box) (mdbcomp__trace_counts__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____read_trace_counts_list_result_0_0_10001(
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
  MR_Box mdbcomp__trace_counts__wrapper_arg_2)
{
  {
    MR_bool mdbcomp__trace_counts__succeeded;

    {
      mdbcomp__trace_counts__succeeded = mdbcomp__trace_counts____Unify____read_trace_counts_list_result_0_0(((MR_Word) mdbcomp__trace_counts__wrapper_arg_1), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_2));
    }
    return mdbcomp__trace_counts__succeeded;
  }
}

static void MR_CALL 
mdbcomp__trace_counts____Compare____read_trace_counts_list_result_0_0_10001(
  MR_Box * mdbcomp__trace_counts__wrapper_arg_1,
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
  MR_Box mdbcomp__trace_counts__wrapper_arg_3)
{
  {
    MR_Word mdbcomp__trace_counts__conv0_HeadVar__1_1;

    {
      mdbcomp__trace_counts____Compare____read_trace_counts_list_result_0_0(&mdbcomp__trace_counts__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__trace_counts__wrapper_arg_2), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_3));
    }
    *mdbcomp__trace_counts__wrapper_arg_1 = ((MR_Box) (mdbcomp__trace_counts__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____read_trace_counts_result_0_0_10001(
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
  MR_Box mdbcomp__trace_counts__wrapper_arg_2)
{
  {
    MR_bool mdbcomp__trace_counts__succeeded;

    {
      mdbcomp__trace_counts__succeeded = mdbcomp__trace_counts____Unify____read_trace_counts_result_0_0(((MR_Word) mdbcomp__trace_counts__wrapper_arg_1), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_2));
    }
    return mdbcomp__trace_counts__succeeded;
  }
}

static void MR_CALL 
mdbcomp__trace_counts____Compare____read_trace_counts_result_0_0_10001(
  MR_Box * mdbcomp__trace_counts__wrapper_arg_1,
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
  MR_Box mdbcomp__trace_counts__wrapper_arg_3)
{
  {
    MR_Word mdbcomp__trace_counts__conv0_HeadVar__1_1;

    {
      mdbcomp__trace_counts____Compare____read_trace_counts_result_0_0(&mdbcomp__trace_counts__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__trace_counts__wrapper_arg_2), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_3));
    }
    *mdbcomp__trace_counts__wrapper_arg_1 = ((MR_Box) (mdbcomp__trace_counts__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____trace_count_file_type_0_0_10001(
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
  MR_Box mdbcomp__trace_counts__wrapper_arg_2)
{
  {
    MR_bool mdbcomp__trace_counts__succeeded;

    {
      mdbcomp__trace_counts__succeeded = mdbcomp__trace_counts____Unify____trace_count_file_type_0_0(((MR_Word) mdbcomp__trace_counts__wrapper_arg_1), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_2));
    }
    return mdbcomp__trace_counts__succeeded;
  }
}

static void MR_CALL 
mdbcomp__trace_counts____Compare____trace_count_file_type_0_0_10001(
  MR_Box * mdbcomp__trace_counts__wrapper_arg_1,
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
  MR_Box mdbcomp__trace_counts__wrapper_arg_3)
{
  {
    MR_Word mdbcomp__trace_counts__conv0_HeadVar__1_1;

    {
      mdbcomp__trace_counts____Compare____trace_count_file_type_0_0(&mdbcomp__trace_counts__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__trace_counts__wrapper_arg_2), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_3));
    }
    *mdbcomp__trace_counts__wrapper_arg_1 = ((MR_Box) (mdbcomp__trace_counts__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____trace_count_syntax_error_0_0_10001(
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
  MR_Box mdbcomp__trace_counts__wrapper_arg_2)
{
  {
    MR_bool mdbcomp__trace_counts__succeeded;

    {
      mdbcomp__trace_counts__succeeded = mdbcomp__trace_counts____Unify____trace_count_syntax_error_0_0(((MR_Word) mdbcomp__trace_counts__wrapper_arg_1), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_2));
    }
    return mdbcomp__trace_counts__succeeded;
  }
}

static void MR_CALL 
mdbcomp__trace_counts____Compare____trace_count_syntax_error_0_0_10001(
  MR_Box * mdbcomp__trace_counts__wrapper_arg_1,
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
  MR_Box mdbcomp__trace_counts__wrapper_arg_3)
{
  {
    MR_Word mdbcomp__trace_counts__conv0_HeadVar__1_1;

    {
      mdbcomp__trace_counts____Compare____trace_count_syntax_error_0_0(&mdbcomp__trace_counts__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__trace_counts__wrapper_arg_2), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_3));
    }
    *mdbcomp__trace_counts__wrapper_arg_1 = ((MR_Box) (mdbcomp__trace_counts__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____trace_counts_0_0_10001(
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
  MR_Box mdbcomp__trace_counts__wrapper_arg_2)
{
  {
    MR_bool mdbcomp__trace_counts__succeeded;

    {
      mdbcomp__trace_counts__succeeded = mdbcomp__trace_counts____Unify____trace_counts_0_0(((MR_Word) mdbcomp__trace_counts__wrapper_arg_1), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_2));
    }
    return mdbcomp__trace_counts__succeeded;
  }
}

static void MR_CALL 
mdbcomp__trace_counts____Compare____trace_counts_0_0_10001(
  MR_Box * mdbcomp__trace_counts__wrapper_arg_1,
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
  MR_Box mdbcomp__trace_counts__wrapper_arg_3)
{
  {
    MR_Word mdbcomp__trace_counts__conv0_HeadVar__1_1;

    {
      mdbcomp__trace_counts____Compare____trace_counts_0_0(&mdbcomp__trace_counts__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__trace_counts__wrapper_arg_2), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_3));
    }
    *mdbcomp__trace_counts__wrapper_arg_1 = ((MR_Box) (mdbcomp__trace_counts__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdbcomp__trace_counts__IntroducedFrom__pred__write_proc_label_and_check__845__1_2_p_0(
  MR_Word mdbcomp__trace_counts__ModuleNameSym_5,
  MR_Word mdbcomp__trace_counts__DefModuleSym_8)
{
  {
    MR_bool mdbcomp__trace_counts__succeeded;

    {
      mdbcomp__trace_counts__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(mdbcomp__trace_counts__ModuleNameSym_5, mdbcomp__trace_counts__DefModuleSym_8);
    }
    return mdbcomp__trace_counts__succeeded;
  }
}

void MR_CALL 
mdbcomp__trace_counts____Compare____trace_counts_0_0(
  MR_Word * mdbcomp__trace_counts__HeadVar__1_1,
  MR_Word mdbcomp__trace_counts__HeadVar__2_2,
  MR_Word mdbcomp__trace_counts__HeadVar__3_3)
{
  {
    MR_bool mdbcomp__trace_counts__succeeded;
    MR_Word mdbcomp__trace_counts__Cast_HeadVar1_4 = mdbcomp__trace_counts__HeadVar__2_2;
    MR_Word mdbcomp__trace_counts__Cast_HeadVar2_5 = mdbcomp__trace_counts__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &mdbcomp__trace_counts_scalar_common_1[1], mdbcomp__trace_counts__HeadVar__1_1, ((MR_Box) (mdbcomp__trace_counts__Cast_HeadVar1_4)), ((MR_Box) (mdbcomp__trace_counts__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____trace_counts_0_0(
  MR_Word mdbcomp__trace_counts__HeadVar__1_1,
  MR_Word mdbcomp__trace_counts__HeadVar__2_2)
{
  {
    MR_bool mdbcomp__trace_counts__succeeded;
    MR_Word mdbcomp__trace_counts__Cast_HeadVar1_3 = mdbcomp__trace_counts__HeadVar__1_1;
    MR_Word mdbcomp__trace_counts__Cast_HeadVar2_4 = mdbcomp__trace_counts__HeadVar__2_2;

    {
      mdbcomp__trace_counts__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdbcomp__trace_counts_scalar_common_1[1], ((MR_Box) (mdbcomp__trace_counts__Cast_HeadVar1_3)), ((MR_Box) (mdbcomp__trace_counts__Cast_HeadVar2_4)));
    }
    return mdbcomp__trace_counts__succeeded;
  }
}

static void MR_CALL 
mdbcomp__trace_counts____Compare____trace_count_syntax_error_0_0(
  MR_Word * mdbcomp__trace_counts__HeadVar__1_1,
  MR_Word mdbcomp__trace_counts__HeadVar__2_2,
  MR_Word mdbcomp__trace_counts__HeadVar__3_3)
{
  {
    MR_bool mdbcomp__trace_counts__succeeded;
    MR_Integer mdbcomp__trace_counts__CastX_6 = (MR_Integer) mdbcomp__trace_counts__HeadVar__2_2;
    MR_Integer mdbcomp__trace_counts__CastY_7 = (MR_Integer) mdbcomp__trace_counts__HeadVar__3_3;

    mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__CastX_6 == mdbcomp__trace_counts__CastY_7);
    if (mdbcomp__trace_counts__succeeded)
      *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_String mdbcomp__trace_counts__V_4_4 = (MR_String) mdbcomp__trace_counts__HeadVar__2_2;
        MR_String mdbcomp__trace_counts__V_5_5 = (MR_String) mdbcomp__trace_counts__HeadVar__3_3;

        {
          mercury__private_builtin__builtin_compare_string_3_p_0(mdbcomp__trace_counts__HeadVar__1_1, mdbcomp__trace_counts__V_4_4, mdbcomp__trace_counts__V_5_5);
        }
      }
  }
}

static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____trace_count_syntax_error_0_0(
  MR_Word mdbcomp__trace_counts__HeadVar__1_1,
  MR_Word mdbcomp__trace_counts__HeadVar__2_2)
{
  {
    MR_bool mdbcomp__trace_counts__succeeded;
    MR_Integer mdbcomp__trace_counts__CastX_5 = (MR_Integer) mdbcomp__trace_counts__HeadVar__1_1;
    MR_Integer mdbcomp__trace_counts__CastY_6 = (MR_Integer) mdbcomp__trace_counts__HeadVar__2_2;

    mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__CastX_5 == mdbcomp__trace_counts__CastY_6);
    if (mdbcomp__trace_counts__succeeded)
      mdbcomp__trace_counts__succeeded = MR_TRUE;
    else
      {
        MR_String mdbcomp__trace_counts__V_3_3 = (MR_String) mdbcomp__trace_counts__HeadVar__1_1;
        MR_String mdbcomp__trace_counts__V_4_4 = (MR_String) mdbcomp__trace_counts__HeadVar__2_2;

        mdbcomp__trace_counts__succeeded = (strcmp(mdbcomp__trace_counts__V_3_3, mdbcomp__trace_counts__V_4_4) == 0);
      }
    return mdbcomp__trace_counts__succeeded;
  }
}

void MR_CALL 
mdbcomp__trace_counts____Compare____trace_count_file_type_0_0(
  MR_Word * mdbcomp__trace_counts__HeadVar__1_1,
  MR_Word mdbcomp__trace_counts__HeadVar__2_2,
  MR_Word mdbcomp__trace_counts__HeadVar__3_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mdbcomp__trace_counts__succeeded;
        MR_Integer mdbcomp__trace_counts__CastX_36 = (MR_Integer) mdbcomp__trace_counts__HeadVar__2_2;
        MR_Integer mdbcomp__trace_counts__CastY_37 = (MR_Integer) mdbcomp__trace_counts__HeadVar__3_3;

        mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__CastX_36 == mdbcomp__trace_counts__CastY_37);
        if (mdbcomp__trace_counts__succeeded)
          *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 0;
        else
          switch (MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word mdbcomp__trace_counts__V_45_45 = (MR_Word) MR_body(((MR_Word) mdbcomp__trace_counts__HeadVar__2_2), (MR_Integer) 0);

                switch (MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word mdbcomp__trace_counts__V_5_5 = (MR_Word) MR_body(((MR_Word) mdbcomp__trace_counts__HeadVar__3_3), (MR_Integer) 0);

                      {
                        mdbcomp__trace_counts____Compare____base_count_file_type_0_0(mdbcomp__trace_counts__HeadVar__1_1, mdbcomp__trace_counts__V_45_45, mdbcomp__trace_counts__V_5_5);
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word mdbcomp__trace_counts__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 1)));
                MR_Integer mdbcomp__trace_counts__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 0)));

                switch (MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Integer mdbcomp__trace_counts__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__HeadVar__3_3, (MR_Integer) 0)));
                      MR_Word mdbcomp__trace_counts__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__HeadVar__3_3, (MR_Integer) 1)));
                      MR_Word mdbcomp__trace_counts__V_19_19;

                      {
                        mercury__private_builtin__builtin_compare_int_3_p_0(&mdbcomp__trace_counts__V_19_19, mdbcomp__trace_counts__V_47_47, mdbcomp__trace_counts__V_17_17);
                      }
                      mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__V_19_19 == (MR_Integer) 0);
                      mdbcomp__trace_counts__succeeded = !(mdbcomp__trace_counts__succeeded);
                      if (mdbcomp__trace_counts__succeeded)
                        *mdbcomp__trace_counts__HeadVar__1_1 = mdbcomp__trace_counts__V_19_19;
                      else
                        {
                          {
                            mercury__builtin__compare_3_p_0((MR_Word) &mdbcomp__trace_counts_scalar_common_2[0], mdbcomp__trace_counts__HeadVar__1_1, ((MR_Box) (mdbcomp__trace_counts__V_46_46)), ((MR_Box) (mdbcomp__trace_counts__V_18_18)));
                          }
                        }
                    }
                    break;
                  case (MR_Integer) 2:
                    *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word mdbcomp__trace_counts__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 1)));
                MR_Word mdbcomp__trace_counts__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 0)));

                switch (MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word mdbcomp__trace_counts__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__HeadVar__3_3, (MR_Integer) 0)));
                      MR_Word mdbcomp__trace_counts__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__HeadVar__3_3, (MR_Integer) 1)));
                      MR_Word mdbcomp__trace_counts__V_35_35;

                      {
                        mdbcomp__trace_counts____Compare____trace_count_file_type_0_0(&mdbcomp__trace_counts__V_35_35, mdbcomp__trace_counts__V_44_44, mdbcomp__trace_counts__V_33_33);
                      }
                      mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__V_35_35 == (MR_Integer) 0);
                      mdbcomp__trace_counts__succeeded = !(mdbcomp__trace_counts__succeeded);
                      if (mdbcomp__trace_counts__succeeded)
                        *mdbcomp__trace_counts__HeadVar__1_1 = mdbcomp__trace_counts__V_35_35;
                      else
                        {
                          /* direct tailcall eliminated */
                          {
                            MR_Word mdbcomp__trace_counts__HeadVar__2__tmp_copy_2 = mdbcomp__trace_counts__V_43_43;
                            MR_Word mdbcomp__trace_counts__HeadVar__3__tmp_copy_3 = mdbcomp__trace_counts__V_34_34;

                            mdbcomp__trace_counts__HeadVar__3_3 = mdbcomp__trace_counts__HeadVar__3__tmp_copy_3;
                            mdbcomp__trace_counts__HeadVar__2_2 = mdbcomp__trace_counts__HeadVar__2__tmp_copy_2;
                          }
                          continue;
                        }
                    }
                    break;
                }
              }
              break;
          }
      }
      break;
    }
}

MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____trace_count_file_type_0_0(
  MR_Word mdbcomp__trace_counts__HeadVar__1_1,
  MR_Word mdbcomp__trace_counts__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mdbcomp__trace_counts__succeeded;
        MR_Integer mdbcomp__trace_counts__CastX_13 = (MR_Integer) mdbcomp__trace_counts__HeadVar__1_1;
        MR_Integer mdbcomp__trace_counts__CastY_14 = (MR_Integer) mdbcomp__trace_counts__HeadVar__2_2;

        mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__CastX_13 == mdbcomp__trace_counts__CastY_14);
        if (mdbcomp__trace_counts__succeeded)
          mdbcomp__trace_counts__succeeded = MR_TRUE;
        else
          switch (MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word mdbcomp__trace_counts__V_3_3 = (MR_Word) MR_body(((MR_Word) mdbcomp__trace_counts__HeadVar__1_1), (MR_Integer) 0);
                MR_Word mdbcomp__trace_counts__V_4_4;

                mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
                if (mdbcomp__trace_counts__succeeded)
                  {
                    mdbcomp__trace_counts__V_4_4 = (MR_Word) MR_body(((MR_Word) mdbcomp__trace_counts__HeadVar__2_2), (MR_Integer) 0);
                    {
                      mdbcomp__trace_counts__succeeded = mdbcomp__trace_counts____Unify____base_count_file_type_0_0(mdbcomp__trace_counts__V_3_3, mdbcomp__trace_counts__V_4_4);
                    }
                  }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word mdbcomp__trace_counts__TypeInfo_15_15;
                MR_Integer mdbcomp__trace_counts__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__HeadVar__1_1, (MR_Integer) 0)));
                MR_Word mdbcomp__trace_counts__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__HeadVar__1_1, (MR_Integer) 1)));
                MR_Integer mdbcomp__trace_counts__V_7_7;
                MR_Word mdbcomp__trace_counts__V_8_8;

                mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
                if (mdbcomp__trace_counts__succeeded)
                  {
                    mdbcomp__trace_counts__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 0)));
                    mdbcomp__trace_counts__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 1)));
                    mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__V_5_5 == mdbcomp__trace_counts__V_7_7);
                    if (mdbcomp__trace_counts__succeeded)
                      {
                        mdbcomp__trace_counts__TypeInfo_15_15 = (MR_Word) &mdbcomp__trace_counts_scalar_common_2[0];
                        {
                          mdbcomp__trace_counts__succeeded = mercury__builtin__unify_2_p_0(mdbcomp__trace_counts__TypeInfo_15_15, ((MR_Box) (mdbcomp__trace_counts__V_6_6)), ((MR_Box) (mdbcomp__trace_counts__V_8_8)));
                        }
                      }
                  }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word mdbcomp__trace_counts__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__HeadVar__1_1, (MR_Integer) 0)));
                MR_Word mdbcomp__trace_counts__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word mdbcomp__trace_counts__V_11_11;
                MR_Word mdbcomp__trace_counts__V_12_12;

                mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
                if (mdbcomp__trace_counts__succeeded)
                  {
                    mdbcomp__trace_counts__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 0)));
                    mdbcomp__trace_counts__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 1)));
                    {
                      mdbcomp__trace_counts__succeeded = mdbcomp__trace_counts____Unify____trace_count_file_type_0_0(mdbcomp__trace_counts__V_9_9, mdbcomp__trace_counts__V_11_11);
                    }
                    if (mdbcomp__trace_counts__succeeded)
                      {
                        /* direct tailcall eliminated */
                        {
                          MR_Word mdbcomp__trace_counts__HeadVar__1__tmp_copy_1 = mdbcomp__trace_counts__V_10_10;
                          MR_Word mdbcomp__trace_counts__HeadVar__2__tmp_copy_2 = mdbcomp__trace_counts__V_12_12;

                          mdbcomp__trace_counts__HeadVar__2_2 = mdbcomp__trace_counts__HeadVar__2__tmp_copy_2;
                          mdbcomp__trace_counts__HeadVar__1_1 = mdbcomp__trace_counts__HeadVar__1__tmp_copy_1;
                        }
                        continue;
                      }
                  }
              }
              break;
          }
        return mdbcomp__trace_counts__succeeded;
      }
      break;
    }
}

void MR_CALL 
mdbcomp__trace_counts____Compare____read_trace_counts_result_0_0(
  MR_Word * mdbcomp__trace_counts__HeadVar__1_1,
  MR_Word mdbcomp__trace_counts__HeadVar__2_2,
  MR_Word mdbcomp__trace_counts__HeadVar__3_3)
{
  {
    MR_bool mdbcomp__trace_counts__succeeded;
    MR_Integer mdbcomp__trace_counts__CastX_65 = (MR_Integer) mdbcomp__trace_counts__HeadVar__2_2;
    MR_Integer mdbcomp__trace_counts__CastY_66 = (MR_Integer) mdbcomp__trace_counts__HeadVar__3_3;

    mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__CastX_65 == mdbcomp__trace_counts__CastY_66);
    if (mdbcomp__trace_counts__succeeded)
      *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word mdbcomp__trace_counts__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word mdbcomp__trace_counts__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word mdbcomp__trace_counts__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word mdbcomp__trace_counts__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word mdbcomp__trace_counts__V_8_8;

                  {
                    mdbcomp__trace_counts____Compare____trace_count_file_type_0_0(&mdbcomp__trace_counts__V_8_8, mdbcomp__trace_counts__V_76_76, mdbcomp__trace_counts__V_6_6);
                  }
                  mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__V_8_8 == (MR_Integer) 0);
                  mdbcomp__trace_counts__succeeded = !(mdbcomp__trace_counts__succeeded);
                  if (mdbcomp__trace_counts__succeeded)
                    *mdbcomp__trace_counts__HeadVar__1_1 = mdbcomp__trace_counts__V_8_8;
                  else
                    {
                      {
                        mercury__builtin__compare_3_p_0((MR_Word) &mdbcomp__trace_counts_scalar_common_1[1], mdbcomp__trace_counts__HeadVar__1_1, ((MR_Box) (mdbcomp__trace_counts__V_75_75)), ((MR_Box) (mdbcomp__trace_counts__V_7_7)));
                      }
                    }
                }
                break;
              case (MR_Integer) 1:
                *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String mdbcomp__trace_counts__V_78_78 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_String mdbcomp__trace_counts__V_25_25 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__private_builtin__builtin_compare_string_3_p_0(mdbcomp__trace_counts__HeadVar__1_1, mdbcomp__trace_counts__V_78_78, mdbcomp__trace_counts__V_25_25);
                  }
                }
                break;
              case (MR_Integer) 2:
                *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String mdbcomp__trace_counts__V_73_73 = ((MR_String) (MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_String mdbcomp__trace_counts__V_38_38 = ((MR_String) (MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__private_builtin__builtin_compare_string_3_p_0(mdbcomp__trace_counts__HeadVar__1_1, mdbcomp__trace_counts__V_73_73, mdbcomp__trace_counts__V_38_38);
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word mdbcomp__trace_counts__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word mdbcomp__trace_counts__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__HeadVar__3_3, (MR_Integer) 1)));

                          {
                            mercury__io____Compare____error_0_0(mdbcomp__trace_counts__HeadVar__1_1, mdbcomp__trace_counts__V_77_77, mdbcomp__trace_counts__V_51_51);
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word mdbcomp__trace_counts__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word mdbcomp__trace_counts__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__HeadVar__3_3, (MR_Integer) 1)));

                          {
                            mercury__io____Compare____error_0_0(mdbcomp__trace_counts__HeadVar__1_1, mdbcomp__trace_counts__V_74_74, mdbcomp__trace_counts__V_64_64);
                          }
                        }
                        break;
                    }
                    break;
                }
              }
              break;
          }
          break;
      }
  }
}

MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____read_trace_counts_result_0_0(
  MR_Word mdbcomp__trace_counts__HeadVar__1_1,
  MR_Word mdbcomp__trace_counts__HeadVar__2_2)
{
  {
    MR_bool mdbcomp__trace_counts__succeeded;
    MR_Integer mdbcomp__trace_counts__CastX_15 = (MR_Integer) mdbcomp__trace_counts__HeadVar__1_1;
    MR_Integer mdbcomp__trace_counts__CastY_16 = (MR_Integer) mdbcomp__trace_counts__HeadVar__2_2;

    mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__CastX_15 == mdbcomp__trace_counts__CastY_16);
    if (mdbcomp__trace_counts__succeeded)
      mdbcomp__trace_counts__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word mdbcomp__trace_counts__TypeInfo_18_18;
            MR_Word mdbcomp__trace_counts__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mdbcomp__trace_counts__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mdbcomp__trace_counts__V_5_5;
            MR_Word mdbcomp__trace_counts__V_6_6;

            mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
            if (mdbcomp__trace_counts__succeeded)
              {
                mdbcomp__trace_counts__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 0)));
                mdbcomp__trace_counts__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 1)));
                {
                  mdbcomp__trace_counts__succeeded = mdbcomp__trace_counts____Unify____trace_count_file_type_0_0(mdbcomp__trace_counts__V_3_3, mdbcomp__trace_counts__V_5_5);
                }
                if (mdbcomp__trace_counts__succeeded)
                  {
                    mdbcomp__trace_counts__TypeInfo_18_18 = (MR_Word) &mdbcomp__trace_counts_scalar_common_1[1];
                    {
                      mdbcomp__trace_counts__succeeded = mercury__builtin__unify_2_p_0(mdbcomp__trace_counts__TypeInfo_18_18, ((MR_Box) (mdbcomp__trace_counts__V_4_4)), ((MR_Box) (mdbcomp__trace_counts__V_6_6)));
                    }
                  }
              }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String mdbcomp__trace_counts__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__HeadVar__1_1, (MR_Integer) 0)));
            MR_String mdbcomp__trace_counts__V_8_8;

            mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (mdbcomp__trace_counts__succeeded)
              {
                mdbcomp__trace_counts__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 0)));
                mdbcomp__trace_counts__succeeded = (strcmp(mdbcomp__trace_counts__V_7_7, mdbcomp__trace_counts__V_8_8) == 0);
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String mdbcomp__trace_counts__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__HeadVar__1_1, (MR_Integer) 0)));
            MR_String mdbcomp__trace_counts__V_10_10;

            mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (mdbcomp__trace_counts__succeeded)
              {
                mdbcomp__trace_counts__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 0)));
                mdbcomp__trace_counts__succeeded = (strcmp(mdbcomp__trace_counts__V_9_9, mdbcomp__trace_counts__V_10_10) == 0);
              }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__HeadVar__1_1, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word mdbcomp__trace_counts__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word mdbcomp__trace_counts__V_12_12;

                mdbcomp__trace_counts__succeeded = ((((MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (mdbcomp__trace_counts__succeeded)
                  {
                    mdbcomp__trace_counts__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 1)));
                    {
                      mdbcomp__trace_counts__succeeded = mercury__io____Unify____error_0_0(mdbcomp__trace_counts__V_11_11, mdbcomp__trace_counts__V_12_12);
                    }
                  }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word mdbcomp__trace_counts__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word mdbcomp__trace_counts__V_14_14;

                mdbcomp__trace_counts__succeeded = ((((MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (mdbcomp__trace_counts__succeeded)
                  {
                    mdbcomp__trace_counts__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 1)));
                    {
                      mdbcomp__trace_counts__succeeded = mercury__io____Unify____error_0_0(mdbcomp__trace_counts__V_13_13, mdbcomp__trace_counts__V_14_14);
                    }
                  }
              }
              break;
          }
          break;
      }
    return mdbcomp__trace_counts__succeeded;
  }
}

void MR_CALL 
mdbcomp__trace_counts____Compare____read_trace_counts_list_result_0_0(
  MR_Word * mdbcomp__trace_counts__HeadVar__1_1,
  MR_Word mdbcomp__trace_counts__HeadVar__2_2,
  MR_Word mdbcomp__trace_counts__HeadVar__3_3)
{
  {
    MR_bool mdbcomp__trace_counts__succeeded;
    MR_Integer mdbcomp__trace_counts__CastX_17 = (MR_Integer) mdbcomp__trace_counts__HeadVar__2_2;
    MR_Integer mdbcomp__trace_counts__CastY_18 = (MR_Integer) mdbcomp__trace_counts__HeadVar__3_3;

    mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__CastX_17 == mdbcomp__trace_counts__CastY_18);
    if (mdbcomp__trace_counts__succeeded)
      *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String mdbcomp__trace_counts__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_String mdbcomp__trace_counts__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__HeadVar__3_3, (MR_Integer) 0)));

            {
              mercury__private_builtin__builtin_compare_string_3_p_0(mdbcomp__trace_counts__HeadVar__1_1, mdbcomp__trace_counts__V_22_22, mdbcomp__trace_counts__V_16_16);
            }
          }
        else
          *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 2;
      }
    else
      {
        MR_Word mdbcomp__trace_counts__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mdbcomp__trace_counts__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
          *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 1;
        else
          {
            MR_Word mdbcomp__trace_counts__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word mdbcomp__trace_counts__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word mdbcomp__trace_counts__V_8_8;

            {
              mdbcomp__trace_counts____Compare____trace_count_file_type_0_0(&mdbcomp__trace_counts__V_8_8, mdbcomp__trace_counts__V_24_24, mdbcomp__trace_counts__V_6_6);
            }
            mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__V_8_8 == (MR_Integer) 0);
            mdbcomp__trace_counts__succeeded = !(mdbcomp__trace_counts__succeeded);
            if (mdbcomp__trace_counts__succeeded)
              *mdbcomp__trace_counts__HeadVar__1_1 = mdbcomp__trace_counts__V_8_8;
            else
              {
                {
                  mercury__builtin__compare_3_p_0((MR_Word) &mdbcomp__trace_counts_scalar_common_1[1], mdbcomp__trace_counts__HeadVar__1_1, ((MR_Box) (mdbcomp__trace_counts__V_23_23)), ((MR_Box) (mdbcomp__trace_counts__V_7_7)));
                }
              }
          }
      }
  }
}

MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____read_trace_counts_list_result_0_0(
  MR_Word mdbcomp__trace_counts__HeadVar__1_1,
  MR_Word mdbcomp__trace_counts__HeadVar__2_2)
{
  {
    MR_bool mdbcomp__trace_counts__succeeded;
    MR_Integer mdbcomp__trace_counts__CastX_9 = (MR_Integer) mdbcomp__trace_counts__HeadVar__1_1;
    MR_Integer mdbcomp__trace_counts__CastY_10 = (MR_Integer) mdbcomp__trace_counts__HeadVar__2_2;

    mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__CastX_9 == mdbcomp__trace_counts__CastY_10);
    if (mdbcomp__trace_counts__succeeded)
      mdbcomp__trace_counts__succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String mdbcomp__trace_counts__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__HeadVar__1_1, (MR_Integer) 0)));
        MR_String mdbcomp__trace_counts__V_8_8;

        mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (mdbcomp__trace_counts__succeeded)
          {
            mdbcomp__trace_counts__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 0)));
            mdbcomp__trace_counts__succeeded = (strcmp(mdbcomp__trace_counts__V_7_7, mdbcomp__trace_counts__V_8_8) == 0);
          }
      }
    else
      {
        MR_Word mdbcomp__trace_counts__TypeInfo_11_11;
        MR_Word mdbcomp__trace_counts__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mdbcomp__trace_counts__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mdbcomp__trace_counts__V_5_5;
        MR_Word mdbcomp__trace_counts__V_6_6;

        mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
        if (mdbcomp__trace_counts__succeeded)
          {
            mdbcomp__trace_counts__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 0)));
            mdbcomp__trace_counts__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 1)));
            {
              mdbcomp__trace_counts__succeeded = mdbcomp__trace_counts____Unify____trace_count_file_type_0_0(mdbcomp__trace_counts__V_3_3, mdbcomp__trace_counts__V_5_5);
            }
            if (mdbcomp__trace_counts__succeeded)
              {
                mdbcomp__trace_counts__TypeInfo_11_11 = (MR_Word) &mdbcomp__trace_counts_scalar_common_1[1];
                {
                  mdbcomp__trace_counts__succeeded = mercury__builtin__unify_2_p_0(mdbcomp__trace_counts__TypeInfo_11_11, ((MR_Box) (mdbcomp__trace_counts__V_4_4)), ((MR_Box) (mdbcomp__trace_counts__V_6_6)));
                }
              }
          }
      }
    return mdbcomp__trace_counts__succeeded;
  }
}

void MR_CALL 
mdbcomp__trace_counts____Compare____proc_trace_counts_0_0(
  MR_Word * mdbcomp__trace_counts__HeadVar__1_1,
  MR_Word mdbcomp__trace_counts__HeadVar__2_2,
  MR_Word mdbcomp__trace_counts__HeadVar__3_3)
{
  {
    MR_bool mdbcomp__trace_counts__succeeded;
    MR_Word mdbcomp__trace_counts__Cast_HeadVar1_4 = mdbcomp__trace_counts__HeadVar__2_2;
    MR_Word mdbcomp__trace_counts__Cast_HeadVar2_5 = mdbcomp__trace_counts__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &mdbcomp__trace_counts_scalar_common_1[0], mdbcomp__trace_counts__HeadVar__1_1, ((MR_Box) (mdbcomp__trace_counts__Cast_HeadVar1_4)), ((MR_Box) (mdbcomp__trace_counts__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____proc_trace_counts_0_0(
  MR_Word mdbcomp__trace_counts__HeadVar__1_1,
  MR_Word mdbcomp__trace_counts__HeadVar__2_2)
{
  {
    MR_bool mdbcomp__trace_counts__succeeded;
    MR_Word mdbcomp__trace_counts__Cast_HeadVar1_3 = mdbcomp__trace_counts__HeadVar__1_1;
    MR_Word mdbcomp__trace_counts__Cast_HeadVar2_4 = mdbcomp__trace_counts__HeadVar__2_2;

    {
      mdbcomp__trace_counts__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdbcomp__trace_counts_scalar_common_1[0], ((MR_Box) (mdbcomp__trace_counts__Cast_HeadVar1_3)), ((MR_Box) (mdbcomp__trace_counts__Cast_HeadVar2_4)));
    }
    return mdbcomp__trace_counts__succeeded;
  }
}

void MR_CALL 
mdbcomp__trace_counts____Compare____proc_label_in_context_0_0(
  MR_Word * mdbcomp__trace_counts__HeadVar__1_1,
  MR_Word mdbcomp__trace_counts__HeadVar__2_2,
  MR_Word mdbcomp__trace_counts__HeadVar__3_3)
{
  {
    MR_bool mdbcomp__trace_counts__succeeded;
    MR_Integer mdbcomp__trace_counts__CastX_12 = (MR_Integer) mdbcomp__trace_counts__HeadVar__2_2;
    MR_Integer mdbcomp__trace_counts__CastY_13 = (MR_Integer) mdbcomp__trace_counts__HeadVar__3_3;

    mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__CastX_12 == mdbcomp__trace_counts__CastY_13);
    if (mdbcomp__trace_counts__succeeded)
      *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word mdbcomp__trace_counts__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 0)));
        MR_String mdbcomp__trace_counts__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mdbcomp__trace_counts__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word mdbcomp__trace_counts__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__3_3, (MR_Integer) 0)));
        MR_String mdbcomp__trace_counts__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word mdbcomp__trace_counts__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word mdbcomp__trace_counts__V_10_10;

        {
          mdbcomp__sym_name____Compare____sym_name_0_0(&mdbcomp__trace_counts__V_10_10, mdbcomp__trace_counts__V_4_4, mdbcomp__trace_counts__V_7_7);
        }
        mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__V_10_10 == (MR_Integer) 0);
        mdbcomp__trace_counts__succeeded = !(mdbcomp__trace_counts__succeeded);
        if (mdbcomp__trace_counts__succeeded)
          *mdbcomp__trace_counts__HeadVar__1_1 = mdbcomp__trace_counts__V_10_10;
        else
          {
            MR_Word mdbcomp__trace_counts__V_11_11;

            {
              mercury__private_builtin__builtin_compare_string_3_p_0(&mdbcomp__trace_counts__V_11_11, mdbcomp__trace_counts__V_5_5, mdbcomp__trace_counts__V_8_8);
            }
            mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__V_11_11 == (MR_Integer) 0);
            mdbcomp__trace_counts__succeeded = !(mdbcomp__trace_counts__succeeded);
            if (mdbcomp__trace_counts__succeeded)
              *mdbcomp__trace_counts__HeadVar__1_1 = mdbcomp__trace_counts__V_11_11;
            else
              {
                mdbcomp__prim_data____Compare____proc_label_0_0(mdbcomp__trace_counts__HeadVar__1_1, mdbcomp__trace_counts__V_6_6, mdbcomp__trace_counts__V_9_9);
              }
          }
      }
  }
}

MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____proc_label_in_context_0_0(
  MR_Word mdbcomp__trace_counts__HeadVar__1_1,
  MR_Word mdbcomp__trace_counts__HeadVar__2_2)
{
  {
    MR_bool mdbcomp__trace_counts__succeeded;
    MR_Integer mdbcomp__trace_counts__CastX_9 = (MR_Integer) mdbcomp__trace_counts__HeadVar__1_1;
    MR_Integer mdbcomp__trace_counts__CastY_10 = (MR_Integer) mdbcomp__trace_counts__HeadVar__2_2;

    mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__CastX_9 == mdbcomp__trace_counts__CastY_10);
    if (mdbcomp__trace_counts__succeeded)
      mdbcomp__trace_counts__succeeded = MR_TRUE;
    else
      {
        MR_Word mdbcomp__trace_counts__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__1_1, (MR_Integer) 0)));
        MR_String mdbcomp__trace_counts__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mdbcomp__trace_counts__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word mdbcomp__trace_counts__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 0)));
        MR_String mdbcomp__trace_counts__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mdbcomp__trace_counts__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 2)));

        {
          mdbcomp__trace_counts__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(mdbcomp__trace_counts__V_3_3, mdbcomp__trace_counts__V_6_6);
        }
        if (mdbcomp__trace_counts__succeeded)
          {
            mdbcomp__trace_counts__succeeded = (strcmp(mdbcomp__trace_counts__V_4_4, mdbcomp__trace_counts__V_7_7) == 0);
            if (mdbcomp__trace_counts__succeeded)
              {
                mdbcomp__trace_counts__succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(mdbcomp__trace_counts__V_5_5, mdbcomp__trace_counts__V_8_8);
              }
          }
      }
    return mdbcomp__trace_counts__succeeded;
  }
}

void MR_CALL 
mdbcomp__trace_counts____Compare____path_port_0_0(
  MR_Word * mdbcomp__trace_counts__HeadVar__1_1,
  MR_Word mdbcomp__trace_counts__HeadVar__2_2,
  MR_Word mdbcomp__trace_counts__HeadVar__3_3)
{
  {
    MR_bool mdbcomp__trace_counts__succeeded;
    MR_Integer mdbcomp__trace_counts__CastX_29 = (MR_Integer) mdbcomp__trace_counts__HeadVar__2_2;
    MR_Integer mdbcomp__trace_counts__CastY_30 = (MR_Integer) mdbcomp__trace_counts__HeadVar__3_3;

    mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__CastX_29 == mdbcomp__trace_counts__CastY_30);
    if (mdbcomp__trace_counts__succeeded)
      *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word mdbcomp__trace_counts__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word mdbcomp__trace_counts__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer mdbcomp__trace_counts__V_41_41 = (MR_Integer) mdbcomp__trace_counts__V_38_38;
                  MR_Integer mdbcomp__trace_counts__V_42_42 = (MR_Integer) mdbcomp__trace_counts__V_5_5;

                  {
                    mercury__private_builtin__builtin_compare_int_3_p_0(mdbcomp__trace_counts__HeadVar__1_1, mdbcomp__trace_counts__V_41_41, mdbcomp__trace_counts__V_42_42);
                  }
                }
                break;
              case (MR_Integer) 1:
                *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word mdbcomp__trace_counts__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word mdbcomp__trace_counts__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mdbcomp__goal_path____Compare____reverse_goal_path_0_0(mdbcomp__trace_counts__HeadVar__1_1, mdbcomp__trace_counts__V_35_35, mdbcomp__trace_counts__V_14_14);
                  }
                }
                break;
              case (MR_Integer) 2:
                *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word mdbcomp__trace_counts__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word mdbcomp__trace_counts__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word mdbcomp__trace_counts__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word mdbcomp__trace_counts__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word mdbcomp__trace_counts__V_28_28;
                  MR_Integer mdbcomp__trace_counts__V_39_39 = (MR_Integer) mdbcomp__trace_counts__V_37_37;
                  MR_Integer mdbcomp__trace_counts__V_40_40 = (MR_Integer) mdbcomp__trace_counts__V_26_26;

                  {
                    mercury__private_builtin__builtin_compare_int_3_p_0(&mdbcomp__trace_counts__V_28_28, mdbcomp__trace_counts__V_39_39, mdbcomp__trace_counts__V_40_40);
                  }
                  mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__V_28_28 == (MR_Integer) 0);
                  mdbcomp__trace_counts__succeeded = !(mdbcomp__trace_counts__succeeded);
                  if (mdbcomp__trace_counts__succeeded)
                    *mdbcomp__trace_counts__HeadVar__1_1 = mdbcomp__trace_counts__V_28_28;
                  else
                    {
                      mdbcomp__goal_path____Compare____reverse_goal_path_0_0(mdbcomp__trace_counts__HeadVar__1_1, mdbcomp__trace_counts__V_36_36, mdbcomp__trace_counts__V_27_27);
                    }
                }
                break;
            }
          }
          break;
      }
  }
}

MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____path_port_0_0(
  MR_Word mdbcomp__trace_counts__HeadVar__1_1,
  MR_Word mdbcomp__trace_counts__HeadVar__2_2)
{
  {
    MR_bool mdbcomp__trace_counts__succeeded;
    MR_Integer mdbcomp__trace_counts__CastX_11 = (MR_Integer) mdbcomp__trace_counts__HeadVar__1_1;
    MR_Integer mdbcomp__trace_counts__CastY_12 = (MR_Integer) mdbcomp__trace_counts__HeadVar__2_2;

    mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__CastX_11 == mdbcomp__trace_counts__CastY_12);
    if (mdbcomp__trace_counts__succeeded)
      mdbcomp__trace_counts__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word mdbcomp__trace_counts__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mdbcomp__trace_counts__V_4_4;

            mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
            if (mdbcomp__trace_counts__succeeded)
              {
                mdbcomp__trace_counts__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 0)));
                mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__V_3_3 == mdbcomp__trace_counts__V_4_4);
              }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word mdbcomp__trace_counts__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mdbcomp__trace_counts__V_6_6;

            mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (mdbcomp__trace_counts__succeeded)
              {
                mdbcomp__trace_counts__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 0)));
                {
                  mdbcomp__trace_counts__succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(mdbcomp__trace_counts__V_5_5, mdbcomp__trace_counts__V_6_6);
                }
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word mdbcomp__trace_counts__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mdbcomp__trace_counts__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mdbcomp__trace_counts__V_9_9;
            MR_Word mdbcomp__trace_counts__V_10_10;

            mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (mdbcomp__trace_counts__succeeded)
              {
                mdbcomp__trace_counts__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 0)));
                mdbcomp__trace_counts__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 1)));
                mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__V_7_7 == mdbcomp__trace_counts__V_9_9);
                if (mdbcomp__trace_counts__succeeded)
                  {
                    mdbcomp__trace_counts__succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(mdbcomp__trace_counts__V_8_8, mdbcomp__trace_counts__V_10_10);
                  }
              }
          }
          break;
      }
    return mdbcomp__trace_counts__succeeded;
  }
}

void MR_CALL 
mdbcomp__trace_counts____Compare____line_no_and_count_0_0(
  MR_Word * mdbcomp__trace_counts__HeadVar__1_1,
  MR_Word mdbcomp__trace_counts__HeadVar__2_2,
  MR_Word mdbcomp__trace_counts__HeadVar__3_3)
{
  {
    MR_bool mdbcomp__trace_counts__succeeded;
    MR_Integer mdbcomp__trace_counts__CastX_12 = (MR_Integer) mdbcomp__trace_counts__HeadVar__2_2;
    MR_Integer mdbcomp__trace_counts__CastY_13 = (MR_Integer) mdbcomp__trace_counts__HeadVar__3_3;

    mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__CastX_12 == mdbcomp__trace_counts__CastY_13);
    if (mdbcomp__trace_counts__succeeded)
      *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Integer mdbcomp__trace_counts__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer mdbcomp__trace_counts__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer mdbcomp__trace_counts__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 2)));
        MR_Integer mdbcomp__trace_counts__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__3_3, (MR_Integer) 0)));
        MR_Integer mdbcomp__trace_counts__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__3_3, (MR_Integer) 1)));
        MR_Integer mdbcomp__trace_counts__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word mdbcomp__trace_counts__V_10_10;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(&mdbcomp__trace_counts__V_10_10, mdbcomp__trace_counts__V_4_4, mdbcomp__trace_counts__V_7_7);
        }
        mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__V_10_10 == (MR_Integer) 0);
        mdbcomp__trace_counts__succeeded = !(mdbcomp__trace_counts__succeeded);
        if (mdbcomp__trace_counts__succeeded)
          *mdbcomp__trace_counts__HeadVar__1_1 = mdbcomp__trace_counts__V_10_10;
        else
          {
            MR_Word mdbcomp__trace_counts__V_11_11;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(&mdbcomp__trace_counts__V_11_11, mdbcomp__trace_counts__V_5_5, mdbcomp__trace_counts__V_8_8);
            }
            mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__V_11_11 == (MR_Integer) 0);
            mdbcomp__trace_counts__succeeded = !(mdbcomp__trace_counts__succeeded);
            if (mdbcomp__trace_counts__succeeded)
              *mdbcomp__trace_counts__HeadVar__1_1 = mdbcomp__trace_counts__V_11_11;
            else
              {
                mercury__private_builtin__builtin_compare_int_3_p_0(mdbcomp__trace_counts__HeadVar__1_1, mdbcomp__trace_counts__V_6_6, mdbcomp__trace_counts__V_9_9);
              }
          }
      }
  }
}

MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____line_no_and_count_0_0(
  MR_Word mdbcomp__trace_counts__HeadVar__1_1,
  MR_Word mdbcomp__trace_counts__HeadVar__2_2)
{
  {
    MR_bool mdbcomp__trace_counts__succeeded;
    MR_Integer mdbcomp__trace_counts__CastX_9 = (MR_Integer) mdbcomp__trace_counts__HeadVar__1_1;
    MR_Integer mdbcomp__trace_counts__CastY_10 = (MR_Integer) mdbcomp__trace_counts__HeadVar__2_2;

    mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__CastX_9 == mdbcomp__trace_counts__CastY_10);
    if (mdbcomp__trace_counts__succeeded)
      mdbcomp__trace_counts__succeeded = MR_TRUE;
    else
      {
        MR_Integer mdbcomp__trace_counts__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer mdbcomp__trace_counts__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__1_1, (MR_Integer) 1)));
        MR_Integer mdbcomp__trace_counts__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__1_1, (MR_Integer) 2)));
        MR_Integer mdbcomp__trace_counts__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer mdbcomp__trace_counts__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer mdbcomp__trace_counts__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 2)));

        mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__V_3_3 == mdbcomp__trace_counts__V_6_6);
        if (mdbcomp__trace_counts__succeeded)
          {
            mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__V_4_4 == mdbcomp__trace_counts__V_7_7);
            if (mdbcomp__trace_counts__succeeded)
              mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__V_5_5 == mdbcomp__trace_counts__V_8_8);
          }
      }
    return mdbcomp__trace_counts__succeeded;
  }
}

void MR_CALL 
mdbcomp__trace_counts____Compare____base_count_file_type_0_0(
  MR_Word * mdbcomp__trace_counts__HeadVar__1_1,
  MR_Word mdbcomp__trace_counts__HeadVar__2_2,
  MR_Word mdbcomp__trace_counts__HeadVar__3_3)
{
  {
    MR_bool mdbcomp__trace_counts__succeeded;
    MR_Integer mdbcomp__trace_counts__CastX_9 = (MR_Integer) mdbcomp__trace_counts__HeadVar__2_2;
    MR_Integer mdbcomp__trace_counts__CastY_10 = (MR_Integer) mdbcomp__trace_counts__HeadVar__3_3;

    mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__CastX_9 == mdbcomp__trace_counts__CastY_10);
    if (mdbcomp__trace_counts__succeeded)
      *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word mdbcomp__trace_counts__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 0)));
        MR_String mdbcomp__trace_counts__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mdbcomp__trace_counts__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__3_3, (MR_Integer) 0)));
        MR_String mdbcomp__trace_counts__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word mdbcomp__trace_counts__V_8_8;
        MR_Integer mdbcomp__trace_counts__V_13_13 = (MR_Integer) mdbcomp__trace_counts__V_4_4;
        MR_Integer mdbcomp__trace_counts__V_14_14 = (MR_Integer) mdbcomp__trace_counts__V_6_6;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(&mdbcomp__trace_counts__V_8_8, mdbcomp__trace_counts__V_13_13, mdbcomp__trace_counts__V_14_14);
        }
        mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__V_8_8 == (MR_Integer) 0);
        mdbcomp__trace_counts__succeeded = !(mdbcomp__trace_counts__succeeded);
        if (mdbcomp__trace_counts__succeeded)
          *mdbcomp__trace_counts__HeadVar__1_1 = mdbcomp__trace_counts__V_8_8;
        else
          {
            mercury__private_builtin__builtin_compare_string_3_p_0(mdbcomp__trace_counts__HeadVar__1_1, mdbcomp__trace_counts__V_5_5, mdbcomp__trace_counts__V_7_7);
          }
      }
  }
}

MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____base_count_file_type_0_0(
  MR_Word mdbcomp__trace_counts__HeadVar__1_1,
  MR_Word mdbcomp__trace_counts__HeadVar__2_2)
{
  {
    MR_bool mdbcomp__trace_counts__succeeded;
    MR_Integer mdbcomp__trace_counts__CastX_7 = (MR_Integer) mdbcomp__trace_counts__HeadVar__1_1;
    MR_Integer mdbcomp__trace_counts__CastY_8 = (MR_Integer) mdbcomp__trace_counts__HeadVar__2_2;

    mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__CastX_7 == mdbcomp__trace_counts__CastY_8);
    if (mdbcomp__trace_counts__succeeded)
      mdbcomp__trace_counts__succeeded = MR_TRUE;
    else
      {
        MR_Word mdbcomp__trace_counts__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__1_1, (MR_Integer) 0)));
        MR_String mdbcomp__trace_counts__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mdbcomp__trace_counts__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 0)));
        MR_String mdbcomp__trace_counts__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 1)));

        mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__V_3_3 == mdbcomp__trace_counts__V_5_5);
        if (mdbcomp__trace_counts__succeeded)
          mdbcomp__trace_counts__succeeded = (strcmp(mdbcomp__trace_counts__V_4_4, mdbcomp__trace_counts__V_6_6) == 0);
      }
    return mdbcomp__trace_counts__succeeded;
  }
}

void MR_CALL 
mdbcomp__trace_counts____Compare____all_or_nonzero_0_0(
  MR_Word * mdbcomp__trace_counts__HeadVar__1_1,
  MR_Word mdbcomp__trace_counts__HeadVar__2_2,
  MR_Word mdbcomp__trace_counts__HeadVar__3_3)
{
  {
    MR_bool mdbcomp__trace_counts__succeeded;
    MR_Integer mdbcomp__trace_counts__Cast_HeadVar1_4 = (MR_Integer) mdbcomp__trace_counts__HeadVar__2_2;
    MR_Integer mdbcomp__trace_counts__Cast_HeadVar2_5 = (MR_Integer) mdbcomp__trace_counts__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(mdbcomp__trace_counts__HeadVar__1_1, mdbcomp__trace_counts__Cast_HeadVar1_4, mdbcomp__trace_counts__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____all_or_nonzero_0_0(
  MR_Word mdbcomp__trace_counts__HeadVar__2_1,
  MR_Word mdbcomp__trace_counts__HeadVar__2_2)
{
  {
    MR_bool mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__HeadVar__2_1 == mdbcomp__trace_counts__HeadVar__2_2);

    return mdbcomp__trace_counts__succeeded;
  }
}

static MR_Word MR_CALL 
mdbcomp__trace_counts__insert_into_list_as_set_2_f_0(
  MR_Word mdbcomp__trace_counts__TypeInfo_for_T_9,
  MR_Word mdbcomp__trace_counts__List0_4,
  MR_Box mdbcomp__trace_counts__Item_5)
{
  {
    MR_bool mdbcomp__trace_counts__succeeded;
    MR_Word mdbcomp__trace_counts__List_6;
    MR_Word mdbcomp__trace_counts__Set0_7;
    MR_Word mdbcomp__trace_counts__Set_8;

    {
      mercury__set__list_to_set_2_p_0(mdbcomp__trace_counts__TypeInfo_for_T_9, mdbcomp__trace_counts__List0_4, &mdbcomp__trace_counts__Set0_7);
    }
    {
      mercury__set__insert_3_p_0(mdbcomp__trace_counts__TypeInfo_for_T_9, mdbcomp__trace_counts__Item_5, mdbcomp__trace_counts__Set0_7, &mdbcomp__trace_counts__Set_8);
    }
    {
      mercury__set__to_sorted_list_2_p_0(mdbcomp__trace_counts__TypeInfo_for_T_9, mdbcomp__trace_counts__Set_8, &mdbcomp__trace_counts__List_6);
    }
    return mdbcomp__trace_counts__List_6;
  }
}

static void MR_CALL 
mdbcomp__trace_counts__restrict_trace_counts_2_5_p_0(
  MR_Word mdbcomp__trace_counts__ModuleName_6,
  MR_Word mdbcomp__trace_counts__ProcLabelInContext_7,
  MR_Word mdbcomp__trace_counts__ProcCounts_8,
  MR_Word mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_0_16,
  MR_Word * mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_17)
{
  {
    MR_bool mdbcomp__trace_counts__succeeded;
    MR_Word mdbcomp__trace_counts__ProcLabel_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabelInContext_7, (MR_Integer) 2)));
    MR_Word mdbcomp__trace_counts__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabelInContext_7, (MR_Integer) 0)));
    MR_String mdbcomp__trace_counts__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabelInContext_7, (MR_Integer) 1)));
    MR_Word mdbcomp__trace_counts__V_23_23;
    MR_Word mdbcomp__trace_counts__V_11_11;
    MR_Word mdbcomp__trace_counts__V_12_12;
    MR_String mdbcomp__trace_counts__V_13_13;
    MR_Integer mdbcomp__trace_counts__V_14_14;
    MR_Integer mdbcomp__trace_counts__V_15_15;

    mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__ProcLabel_10)) == (MR_mktag((MR_Integer) 0)));
    if (mdbcomp__trace_counts__succeeded)
      {
        mdbcomp__trace_counts__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_10, (MR_Integer) 0)));
        mdbcomp__trace_counts__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_10, (MR_Integer) 1)));
        mdbcomp__trace_counts__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_10, (MR_Integer) 2)));
        mdbcomp__trace_counts__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_10, (MR_Integer) 3)));
        mdbcomp__trace_counts__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_10, (MR_Integer) 4)));
        mdbcomp__trace_counts__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_10, (MR_Integer) 5)));
        {
          mdbcomp__trace_counts__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(mdbcomp__trace_counts__ModuleName_6, mdbcomp__trace_counts__V_23_23);
        }
      }
    if (mdbcomp__trace_counts__succeeded)
      {
        {
          mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0, (MR_Word) &mdbcomp__trace_counts_scalar_common_1[0], ((MR_Box) (mdbcomp__trace_counts__ProcLabelInContext_7)), ((MR_Box) (mdbcomp__trace_counts__ProcCounts_8)), mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_0_16, mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_17);
        }
      }
    else
      *mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_17 = mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_0_16;
  }
}

static void MR_CALL 
mdbcomp__trace_counts__write_path_port_count_4_p_0(
  MR_Word mdbcomp__trace_counts__HeadVar__1_1,
  MR_Word mdbcomp__trace_counts__HeadVar__2_2)
{
  {
    MR_bool mdbcomp__trace_counts__succeeded;
    MR_Integer mdbcomp__trace_counts__V_87_87 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 2)));
    MR_Integer mdbcomp__trace_counts__V_88_88 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 1)));
    MR_Integer mdbcomp__trace_counts__V_89_89 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 0)));

    switch (MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word mdbcomp__trace_counts__Port_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__1_1, (MR_Integer) 0)));
          MR_String mdbcomp__trace_counts__PortStr_10;
          MR_Word mdbcomp__trace_counts__V_13_13;
          MR_Word mdbcomp__trace_counts__V_15_15;
          MR_Word mdbcomp__trace_counts__V_17_17;
          MR_String mdbcomp__trace_counts__V_18_18;
          MR_Word mdbcomp__trace_counts__V_19_19;
          MR_Word mdbcomp__trace_counts__V_21_21;
          MR_String mdbcomp__trace_counts__V_22_22;
          MR_Word mdbcomp__trace_counts__V_23_23;
          MR_Word mdbcomp__trace_counts__V_25_25;
          MR_String mdbcomp__trace_counts__V_26_26;

          {
            mdbcomp__trace_counts__string_to_trace_port_2_p_1(&mdbcomp__trace_counts__PortStr_10, mdbcomp__trace_counts__Port_5);
          }
          {
            mdbcomp__trace_counts__V_18_18 = mercury__string__int_to_string_1_f_0(mdbcomp__trace_counts__V_89_89);
          }
          {
            mdbcomp__trace_counts__V_22_22 = mercury__string__int_to_string_1_f_0(mdbcomp__trace_counts__V_88_88);
          }
          {
            mdbcomp__trace_counts__V_26_26 = mercury__string__int_to_string_1_f_0(mdbcomp__trace_counts__V_87_87);
          }
          {
            mdbcomp__trace_counts__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_25_25, 0) = ((MR_Box) (mdbcomp__trace_counts__V_26_26));
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_25_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdbcomp__trace_counts_scalar_common_2[2])));
          }
          {
            mdbcomp__trace_counts__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_23_23, 0) = ((MR_Box) ((MR_String) " "));
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_23_23, 1) = ((MR_Box) (mdbcomp__trace_counts__V_25_25));
          }
          {
            mdbcomp__trace_counts__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_21_21, 0) = ((MR_Box) (mdbcomp__trace_counts__V_22_22));
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_21_21, 1) = ((MR_Box) (mdbcomp__trace_counts__V_23_23));
          }
          {
            mdbcomp__trace_counts__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_19_19, 0) = ((MR_Box) ((MR_String) " "));
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_19_19, 1) = ((MR_Box) (mdbcomp__trace_counts__V_21_21));
          }
          {
            mdbcomp__trace_counts__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_17_17, 0) = ((MR_Box) (mdbcomp__trace_counts__V_18_18));
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_17_17, 1) = ((MR_Box) (mdbcomp__trace_counts__V_19_19));
          }
          {
            mdbcomp__trace_counts__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_15_15, 0) = ((MR_Box) ((MR_String) " "));
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_15_15, 1) = ((MR_Box) (mdbcomp__trace_counts__V_17_17));
          }
          {
            mdbcomp__trace_counts__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_13_13, 0) = ((MR_Box) (mdbcomp__trace_counts__PortStr_10));
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_13_13, 1) = ((MR_Box) (mdbcomp__trace_counts__V_15_15));
          }
          {
            mercury__io__write_strings_3_p_0(mdbcomp__trace_counts__V_13_13);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word mdbcomp__trace_counts__Path_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__HeadVar__1_1, (MR_Integer) 0)));
          MR_Word mdbcomp__trace_counts__V_37_37;
          MR_Word mdbcomp__trace_counts__V_40_40;
          MR_String mdbcomp__trace_counts__V_41_41;
          MR_Word mdbcomp__trace_counts__V_42_42;
          MR_Word mdbcomp__trace_counts__V_44_44;
          MR_String mdbcomp__trace_counts__V_45_45;
          MR_Word mdbcomp__trace_counts__V_46_46;
          MR_Word mdbcomp__trace_counts__V_48_48;
          MR_String mdbcomp__trace_counts__V_49_49;
          MR_Word mdbcomp__trace_counts__V_50_50;
          MR_Word mdbcomp__trace_counts__V_52_52;
          MR_String mdbcomp__trace_counts__V_53_53;

          {
            mdbcomp__trace_counts__V_41_41 = mdbcomp__goal_path__rev_goal_path_to_string_1_f_0(mdbcomp__trace_counts__Path_30);
          }
          {
            mdbcomp__trace_counts__V_45_45 = mercury__string__int_to_string_1_f_0(mdbcomp__trace_counts__V_89_89);
          }
          {
            mdbcomp__trace_counts__V_49_49 = mercury__string__int_to_string_1_f_0(mdbcomp__trace_counts__V_88_88);
          }
          {
            mdbcomp__trace_counts__V_53_53 = mercury__string__int_to_string_1_f_0(mdbcomp__trace_counts__V_87_87);
          }
          {
            mdbcomp__trace_counts__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_52_52, 0) = ((MR_Box) (mdbcomp__trace_counts__V_53_53));
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdbcomp__trace_counts_scalar_common_2[2])));
          }
          {
            mdbcomp__trace_counts__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_50_50, 0) = ((MR_Box) ((MR_String) " "));
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_50_50, 1) = ((MR_Box) (mdbcomp__trace_counts__V_52_52));
          }
          {
            mdbcomp__trace_counts__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_48_48, 0) = ((MR_Box) (mdbcomp__trace_counts__V_49_49));
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_48_48, 1) = ((MR_Box) (mdbcomp__trace_counts__V_50_50));
          }
          {
            mdbcomp__trace_counts__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_46_46, 0) = ((MR_Box) ((MR_String) " "));
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_46_46, 1) = ((MR_Box) (mdbcomp__trace_counts__V_48_48));
          }
          {
            mdbcomp__trace_counts__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_44_44, 0) = ((MR_Box) (mdbcomp__trace_counts__V_45_45));
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_44_44, 1) = ((MR_Box) (mdbcomp__trace_counts__V_46_46));
          }
          {
            mdbcomp__trace_counts__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_42_42, 0) = ((MR_Box) ((MR_String) "> "));
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_42_42, 1) = ((MR_Box) (mdbcomp__trace_counts__V_44_44));
          }
          {
            mdbcomp__trace_counts__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_40_40, 0) = ((MR_Box) (mdbcomp__trace_counts__V_41_41));
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_40_40, 1) = ((MR_Box) (mdbcomp__trace_counts__V_42_42));
          }
          {
            mdbcomp__trace_counts__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_37_37, 0) = ((MR_Box) ((MR_String) "<"));
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_37_37, 1) = ((MR_Box) (mdbcomp__trace_counts__V_40_40));
          }
          {
            mercury__io__write_strings_3_p_0(mdbcomp__trace_counts__V_37_37);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word mdbcomp__trace_counts__Port_57 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__HeadVar__1_1, (MR_Integer) 0)));
          MR_Word mdbcomp__trace_counts__Path_58 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__HeadVar__1_1, (MR_Integer) 1)));
          MR_String mdbcomp__trace_counts__PortStr_63;
          MR_Word mdbcomp__trace_counts__V_66_66;
          MR_Word mdbcomp__trace_counts__V_68_68;
          MR_Word mdbcomp__trace_counts__V_70_70;
          MR_String mdbcomp__trace_counts__V_71_71;
          MR_Word mdbcomp__trace_counts__V_72_72;
          MR_Word mdbcomp__trace_counts__V_74_74;
          MR_String mdbcomp__trace_counts__V_75_75;
          MR_Word mdbcomp__trace_counts__V_76_76;
          MR_Word mdbcomp__trace_counts__V_78_78;
          MR_String mdbcomp__trace_counts__V_79_79;
          MR_Word mdbcomp__trace_counts__V_80_80;
          MR_Word mdbcomp__trace_counts__V_82_82;
          MR_String mdbcomp__trace_counts__V_83_83;

          {
            mdbcomp__trace_counts__string_to_trace_port_2_p_1(&mdbcomp__trace_counts__PortStr_63, mdbcomp__trace_counts__Port_57);
          }
          {
            mdbcomp__trace_counts__V_71_71 = mdbcomp__goal_path__rev_goal_path_to_string_1_f_0(mdbcomp__trace_counts__Path_58);
          }
          {
            mdbcomp__trace_counts__V_75_75 = mercury__string__int_to_string_1_f_0(mdbcomp__trace_counts__V_89_89);
          }
          {
            mdbcomp__trace_counts__V_79_79 = mercury__string__int_to_string_1_f_0(mdbcomp__trace_counts__V_88_88);
          }
          {
            mdbcomp__trace_counts__V_83_83 = mercury__string__int_to_string_1_f_0(mdbcomp__trace_counts__V_87_87);
          }
          {
            mdbcomp__trace_counts__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_82_82, 0) = ((MR_Box) (mdbcomp__trace_counts__V_83_83));
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_82_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdbcomp__trace_counts_scalar_common_2[2])));
          }
          {
            mdbcomp__trace_counts__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_80_80, 0) = ((MR_Box) ((MR_String) " "));
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_80_80, 1) = ((MR_Box) (mdbcomp__trace_counts__V_82_82));
          }
          {
            mdbcomp__trace_counts__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_78_78, 0) = ((MR_Box) (mdbcomp__trace_counts__V_79_79));
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_78_78, 1) = ((MR_Box) (mdbcomp__trace_counts__V_80_80));
          }
          {
            mdbcomp__trace_counts__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_76_76, 0) = ((MR_Box) ((MR_String) " "));
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_76_76, 1) = ((MR_Box) (mdbcomp__trace_counts__V_78_78));
          }
          {
            mdbcomp__trace_counts__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_74_74, 0) = ((MR_Box) (mdbcomp__trace_counts__V_75_75));
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_74_74, 1) = ((MR_Box) (mdbcomp__trace_counts__V_76_76));
          }
          {
            mdbcomp__trace_counts__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_72_72, 0) = ((MR_Box) ((MR_String) "> "));
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_72_72, 1) = ((MR_Box) (mdbcomp__trace_counts__V_74_74));
          }
          {
            mdbcomp__trace_counts__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_70_70, 0) = ((MR_Box) (mdbcomp__trace_counts__V_71_71));
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_70_70, 1) = ((MR_Box) (mdbcomp__trace_counts__V_72_72));
          }
          {
            mdbcomp__trace_counts__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_68_68, 0) = ((MR_Box) ((MR_String) " <"));
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_68_68, 1) = ((MR_Box) (mdbcomp__trace_counts__V_70_70));
          }
          {
            mdbcomp__trace_counts__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_66_66, 0) = ((MR_Box) (mdbcomp__trace_counts__PortStr_63));
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_66_66, 1) = ((MR_Box) (mdbcomp__trace_counts__V_68_68));
          }
          {
            mercury__io__write_strings_3_p_0(mdbcomp__trace_counts__V_66_66);
          }
        }
        break;
    }
  }
}

static void MR_CALL 
mdbcomp__trace_counts__write_proc_label_and_file_trace_counts_8_p_0_2(
  MR_Box mdbcomp__trace_counts__closure_arg,
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
  MR_Box mdbcomp__trace_counts__wrapper_arg_3,
  MR_Box * mdbcomp__trace_counts__wrapper_arg_4)
{
  {
    MR_Box mdbcomp__trace_counts__closure = mdbcomp__trace_counts__closure_arg;

    {
      mdbcomp__trace_counts__write_path_port_count_4_p_0(((MR_Word) mdbcomp__trace_counts__wrapper_arg_1), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_2));
    }
  }
}

static MR_bool MR_CALL 
mdbcomp__trace_counts__write_proc_label_and_file_trace_counts_8_p_0_1(
  MR_Box mdbcomp__trace_counts__closure_arg)
{
  {
    MR_bool mdbcomp__trace_counts__succeeded;
    MR_Box mdbcomp__trace_counts__closure = mdbcomp__trace_counts__closure_arg;

    {
      mdbcomp__trace_counts__succeeded = mdbcomp__trace_counts__IntroducedFrom__pred__write_proc_label_and_check__845__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__closure, (MR_Integer) 4))));
    }
    return mdbcomp__trace_counts__succeeded;
  }
}

static void MR_CALL 
mdbcomp__trace_counts__write_proc_label_and_file_trace_counts_8_p_0(
  MR_Word mdbcomp__trace_counts__ProcLabelInContext_9,
  MR_Word mdbcomp__trace_counts__PathPortCounts_10,
  MR_Word mdbcomp__trace_counts__STATE_VARIABLE_CurModuleNameSym_0_18,
  MR_Word * mdbcomp__trace_counts__STATE_VARIABLE_CurModuleNameSym_19,
  MR_String mdbcomp__trace_counts__STATE_VARIABLE_CurFileName_0_20,
  MR_String * mdbcomp__trace_counts__STATE_VARIABLE_CurFileName_21)
{
  {
    MR_bool mdbcomp__trace_counts__succeeded;
    MR_Word mdbcomp__trace_counts__ModuleNameSym_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabelInContext_9, (MR_Integer) 0)));
    MR_String mdbcomp__trace_counts__FileName_15 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabelInContext_9, (MR_Integer) 1)));
    MR_Word mdbcomp__trace_counts__ProcLabel_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabelInContext_9, (MR_Integer) 2)));
    MR_Box mdbcomp__trace_counts__conv0_STATE_VARIABLE_IO_23;

    {
      mdbcomp__trace_counts__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(mdbcomp__trace_counts__ModuleNameSym_14, mdbcomp__trace_counts__STATE_VARIABLE_CurModuleNameSym_0_18);
    }
    if (mdbcomp__trace_counts__succeeded)
      *mdbcomp__trace_counts__STATE_VARIABLE_CurModuleNameSym_19 = mdbcomp__trace_counts__STATE_VARIABLE_CurModuleNameSym_0_18;
    else
      {
        MR_String mdbcomp__trace_counts__ModuleName_17;

        {
          mdbcomp__trace_counts__ModuleName_17 = mdbcomp__sym_name__sym_name_to_string_1_f_0(mdbcomp__trace_counts__ModuleNameSym_14);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "module ");
        }
        {
          mercury__term_io__quote_atom_3_p_0(mdbcomp__trace_counts__ModuleName_17);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
        *mdbcomp__trace_counts__STATE_VARIABLE_CurModuleNameSym_19 = mdbcomp__trace_counts__ModuleNameSym_14;
      }
    mdbcomp__trace_counts__succeeded = (strcmp(mdbcomp__trace_counts__FileName_15, mdbcomp__trace_counts__STATE_VARIABLE_CurFileName_0_20) == 0);
    if (mdbcomp__trace_counts__succeeded)
      *mdbcomp__trace_counts__STATE_VARIABLE_CurFileName_21 = mdbcomp__trace_counts__STATE_VARIABLE_CurFileName_0_20;
    else
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "file ");
        }
        {
          mercury__term_io__quote_atom_3_p_0(mdbcomp__trace_counts__FileName_15);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
        *mdbcomp__trace_counts__STATE_VARIABLE_CurFileName_21 = mdbcomp__trace_counts__FileName_15;
      }
    if (((MR_tag((MR_Word) mdbcomp__trace_counts__ProcLabel_16)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word mdbcomp__trace_counts__DefModuleSym_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_16, (MR_Integer) 0)));
        MR_Word mdbcomp__trace_counts__V_65_65;
        MR_Word mdbcomp__trace_counts__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_16, (MR_Integer) 1)));
        MR_Word mdbcomp__trace_counts__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_16, (MR_Integer) 2)));
        MR_String mdbcomp__trace_counts__V_55_55 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_16, (MR_Integer) 3)));
        MR_Integer mdbcomp__trace_counts__V_56_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_16, (MR_Integer) 4)));
        MR_Integer mdbcomp__trace_counts__V_57_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_16, (MR_Integer) 5)));

        {
          mdbcomp__trace_counts__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__V_65_65, 0) = ((MR_Box) (&mdbcomp__trace_counts_scalar_common_11[0]));
          MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__V_65_65, 1) = ((MR_Box) (mdbcomp__trace_counts__write_proc_label_and_file_trace_counts_8_p_0_1));
          MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__V_65_65, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__V_65_65, 3) = ((MR_Box) (mdbcomp__trace_counts__ModuleNameSym_14));
          MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__V_65_65, 4) = ((MR_Box) (mdbcomp__trace_counts__DefModuleSym_52));
        }
        {
          mercury__require__require_2_p_0(mdbcomp__trace_counts__V_65_65, (MR_String) "write_proc_label_and_check: module mismatch");
        }
      }
    else
      {
        {
          mercury__require__error_1_p_0((MR_String) "write_proc_label: special_pred");
          return;
        }
      }
    {
      mdbcomp__trace_counts__write_proc_label_3_p_0(mdbcomp__trace_counts__ProcLabel_16);
    }
    {
      mercury__map__foldl_4_p_2((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0, (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &mdbcomp__trace_counts_scalar_common_1[6], mdbcomp__trace_counts__PathPortCounts_10, ((MR_Box) ((MR_Integer) 0)), &mdbcomp__trace_counts__conv0_STATE_VARIABLE_IO_23);
    }
  }
}

static void MR_CALL 
mdbcomp__trace_counts__read_and_union_trace_counts_2_9_p_0(
  MR_Word mdbcomp__trace_counts__ShowProgress_1,
  MR_Word mdbcomp__trace_counts__HeadVar__2_2,
  MR_Word mdbcomp__trace_counts__STATE_VARIABLE_FileType_0_3,
  MR_Word * mdbcomp__trace_counts__STATE_VARIABLE_FileType_4,
  MR_Word mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_0_5,
  MR_Word * mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_6,
  MR_Word * mdbcomp__trace_counts__HeadVar__7_7)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mdbcomp__trace_counts__succeeded;

        if ((mdbcomp__trace_counts__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *mdbcomp__trace_counts__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_6 = mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_0_5;
            *mdbcomp__trace_counts__STATE_VARIABLE_FileType_4 = mdbcomp__trace_counts__STATE_VARIABLE_FileType_0_3;
          }
        else
          {
            MR_String mdbcomp__trace_counts__FileName_21 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word mdbcomp__trace_counts__FileNames_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word mdbcomp__trace_counts__TCResult_27;

            switch (mdbcomp__trace_counts__ShowProgress_1) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                }
                break;
              case (MR_Integer) 1:
                {
                  {
                    mercury__io__write_string_3_p_0(mdbcomp__trace_counts__FileName_21);
                  }
                  {
                    mercury__io__nl_2_p_0();
                  }
                }
                break;
            }
            {
              mdbcomp__trace_counts__read_trace_counts_source_4_p_0(mdbcomp__trace_counts__FileName_21, &mdbcomp__trace_counts__TCResult_27);
            }
            if (((MR_tag((MR_Word) mdbcomp__trace_counts__TCResult_27)) == (MR_mktag((MR_Integer) 1))))
              {
                MR_String mdbcomp__trace_counts__Message_29 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__TCResult_27, (MR_Integer) 0)));

                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *mdbcomp__trace_counts__HeadVar__7_7 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__trace_counts__Message_29));
                }
                *mdbcomp__trace_counts__STATE_VARIABLE_FileType_4 = mdbcomp__trace_counts__STATE_VARIABLE_FileType_0_3;
                *mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_6 = mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_0_5;
              }
            else
              {
                MR_Word mdbcomp__trace_counts__FileType_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__TCResult_27, (MR_Integer) 0)));
                MR_Word mdbcomp__trace_counts__NewTraceCounts_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__TCResult_27, (MR_Integer) 1)));
                MR_Word mdbcomp__trace_counts__V_39_39;
                MR_Word mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_40_40;
                MR_Word mdbcomp__trace_counts__V_41_41;
                MR_Word mdbcomp__trace_counts__STATE_VARIABLE_FileType_43_43;

                {
                  mdbcomp__trace_counts__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_41_41, 0) = ((MR_Box) (mdbcomp__trace_counts__NewTraceCounts_28));
                  MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  mdbcomp__trace_counts__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_39_39, 0) = ((MR_Box) (mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_0_5));
                  MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_39_39, 1) = ((MR_Box) (mdbcomp__trace_counts__V_41_41));
                }
                {
                  mdbcomp__trace_counts__summarize_trace_counts_list_2_p_0(mdbcomp__trace_counts__V_39_39, &mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_40_40);
                }
                {
                  mdbcomp__trace_counts__STATE_VARIABLE_FileType_43_43 = mdbcomp__trace_counts__sum_trace_count_file_type_2_f_0(mdbcomp__trace_counts__STATE_VARIABLE_FileType_0_3, mdbcomp__trace_counts__FileType_23);
                }
                /* direct tailcall eliminated */
                {
                  MR_Word mdbcomp__trace_counts__HeadVar__2__tmp_copy_2 = mdbcomp__trace_counts__FileNames_22;
                  MR_Word mdbcomp__trace_counts__STATE_VARIABLE_FileType_0__tmp_copy_3 = mdbcomp__trace_counts__STATE_VARIABLE_FileType_43_43;
                  MR_Word mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_0__tmp_copy_5 = mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_40_40;

                  mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_0_5 = mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_0__tmp_copy_5;
                  mdbcomp__trace_counts__STATE_VARIABLE_FileType_0_3 = mdbcomp__trace_counts__STATE_VARIABLE_FileType_0__tmp_copy_3;
                  mdbcomp__trace_counts__HeadVar__2_2 = mdbcomp__trace_counts__HeadVar__2__tmp_copy_2;
                }
                continue;
              }
          }
      }
      break;
    }
}

static MR_bool MR_CALL 
mdbcomp__trace_counts__parse_path_port_line_5_p_0(
  MR_String mdbcomp__trace_counts__Line_6,
  MR_Word * mdbcomp__trace_counts__PathPort_7,
  MR_Integer * mdbcomp__trace_counts__LineNumber_8,
  MR_Integer * mdbcomp__trace_counts__ExecCount_9,
  MR_Integer * mdbcomp__trace_counts__NumTests_10)
{
  {
    MR_bool mdbcomp__trace_counts__succeeded;
    MR_Word mdbcomp__trace_counts__Words_11;
    MR_Word mdbcomp__trace_counts__PathPortPrime_16;
    MR_Integer mdbcomp__trace_counts__LineNumberPrime_18;
    MR_Integer mdbcomp__trace_counts__ExecCountPrime_19;
    MR_Integer mdbcomp__trace_counts__NumTestsPrime_20;
    MR_String mdbcomp__trace_counts__Word1_12;
    MR_String mdbcomp__trace_counts__LineNumberStr_13;
    MR_Word mdbcomp__trace_counts__Rest_14;
    MR_Word mdbcomp__trace_counts__V_23_23;
    MR_Word mdbcomp__trace_counts__Port_15;

    {
      mdbcomp__trace_counts__Words_11 = mercury__string__words_1_f_0(mdbcomp__trace_counts__Line_6);
    }
    mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__Words_11)) == (MR_mktag((MR_Integer) 1)));
    if (mdbcomp__trace_counts__succeeded)
      {
        mdbcomp__trace_counts__Word1_12 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__Words_11, (MR_Integer) 0)));
        mdbcomp__trace_counts__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__Words_11, (MR_Integer) 1)));
        mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__V_23_23)) == (MR_mktag((MR_Integer) 1)));
        if (mdbcomp__trace_counts__succeeded)
          {
            mdbcomp__trace_counts__LineNumberStr_13 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_23_23, (MR_Integer) 0)));
            mdbcomp__trace_counts__Rest_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_23_23, (MR_Integer) 1)));
            {
              mdbcomp__trace_counts__succeeded = mdbcomp__trace_counts__string_to_trace_port_2_p_0(mdbcomp__trace_counts__Word1_12, &mdbcomp__trace_counts__Port_15);
            }
            if (mdbcomp__trace_counts__succeeded)
              {
                {
                  mdbcomp__trace_counts__PathPortPrime_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__PathPortPrime_16, 0) = ((MR_Box) (mdbcomp__trace_counts__Port_15));
                }
                mdbcomp__trace_counts__succeeded = MR_TRUE;
              }
            else
              {
                MR_Word mdbcomp__trace_counts__Path_17;
                MR_Integer mdbcomp__trace_counts__Length_32;
                MR_String mdbcomp__trace_counts__SubString_33;
                MR_String mdbcomp__trace_counts__V_35_35;
                MR_Integer mdbcomp__trace_counts__V_36_36;
                MR_Integer mdbcomp__trace_counts__V_37_37;
                MR_Integer mdbcomp__trace_counts__V_38_38;

                {
                  mdbcomp__trace_counts__succeeded = mercury__string__prefix_2_p_0(mdbcomp__trace_counts__Word1_12, (MR_String) "<");
                }
                if (mdbcomp__trace_counts__succeeded)
                  {
                    mdbcomp__trace_counts__V_35_35 = (MR_String) ">";
                    {
                      mdbcomp__trace_counts__succeeded = mercury__string__suffix_2_p_0(mdbcomp__trace_counts__Word1_12, mdbcomp__trace_counts__V_35_35);
                    }
                    if (mdbcomp__trace_counts__succeeded)
                      {
                        {
                          mercury__string__length_2_p_0(mdbcomp__trace_counts__Word1_12, &mdbcomp__trace_counts__Length_32);
                        }
                        mdbcomp__trace_counts__V_36_36 = (MR_Integer) 1;
                        mdbcomp__trace_counts__V_38_38 = (MR_Integer) 1;
                        mdbcomp__trace_counts__V_37_37 = (mdbcomp__trace_counts__Length_32 - mdbcomp__trace_counts__V_38_38);
                        {
                          mercury__string__between_4_p_0(mdbcomp__trace_counts__Word1_12, mdbcomp__trace_counts__V_36_36, mdbcomp__trace_counts__V_37_37, &mdbcomp__trace_counts__SubString_33);
                        }
                        {
                          mdbcomp__trace_counts__succeeded = mdbcomp__goal_path__rev_goal_path_from_string_2_p_0(mdbcomp__trace_counts__SubString_33, &mdbcomp__trace_counts__Path_17);
                        }
                        if (mdbcomp__trace_counts__succeeded)
                          {
                            {
                              mdbcomp__trace_counts__PathPortPrime_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__PathPortPrime_16, 0) = ((MR_Box) (mdbcomp__trace_counts__Path_17));
                            }
                            mdbcomp__trace_counts__succeeded = MR_TRUE;
                          }
                      }
                  }
              }
            if (mdbcomp__trace_counts__succeeded)
              {
                {
                  mdbcomp__trace_counts__succeeded = mercury__string__to_int_2_p_0(mdbcomp__trace_counts__LineNumberStr_13, &mdbcomp__trace_counts__LineNumberPrime_18);
                }
                if (mdbcomp__trace_counts__succeeded)
                  {
                    if ((mdbcomp__trace_counts__Rest_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      {
                        mdbcomp__trace_counts__ExecCountPrime_19 = (MR_Integer) 0;
                        mdbcomp__trace_counts__NumTestsPrime_20 = (MR_Integer) 1;
                        mdbcomp__trace_counts__succeeded = MR_TRUE;
                      }
                    else
                      {
                        MR_Word mdbcomp__trace_counts__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__Rest_14, (MR_Integer) 1)));
                        MR_String mdbcomp__trace_counts__V_49_49 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__Rest_14, (MR_Integer) 0)));

                        if ((mdbcomp__trace_counts__V_48_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                          {
                            {
                              mdbcomp__trace_counts__succeeded = mercury__string__to_int_2_p_0(mdbcomp__trace_counts__V_49_49, &mdbcomp__trace_counts__ExecCountPrime_19);
                            }
                            if (mdbcomp__trace_counts__succeeded)
                              {
                                mdbcomp__trace_counts__NumTestsPrime_20 = (MR_Integer) 1;
                                mdbcomp__trace_counts__succeeded = MR_TRUE;
                              }
                          }
                        else
                          {
                            MR_String mdbcomp__trace_counts__NumTestsStr_43 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_48_48, (MR_Integer) 0)));
                            MR_Word mdbcomp__trace_counts__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_48_48, (MR_Integer) 1)));

                            mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__V_45_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            if (mdbcomp__trace_counts__succeeded)
                              {
                                {
                                  mdbcomp__trace_counts__succeeded = mercury__string__to_int_2_p_0(mdbcomp__trace_counts__V_49_49, &mdbcomp__trace_counts__ExecCountPrime_19);
                                }
                                if (mdbcomp__trace_counts__succeeded)
                                  {
                                    mdbcomp__trace_counts__succeeded = mercury__string__to_int_2_p_0(mdbcomp__trace_counts__NumTestsStr_43, &mdbcomp__trace_counts__NumTestsPrime_20);
                                  }
                              }
                          }
                      }
                  }
              }
          }
      }
    if (mdbcomp__trace_counts__succeeded)
      {
        *mdbcomp__trace_counts__PathPort_7 = mdbcomp__trace_counts__PathPortPrime_16;
        *mdbcomp__trace_counts__LineNumber_8 = mdbcomp__trace_counts__LineNumberPrime_18;
        *mdbcomp__trace_counts__ExecCount_9 = mdbcomp__trace_counts__ExecCountPrime_19;
        *mdbcomp__trace_counts__NumTests_10 = mdbcomp__trace_counts__NumTestsPrime_20;
        mdbcomp__trace_counts__succeeded = MR_TRUE;
      }
    else
      {
        MR_String mdbcomp__trace_counts__PortStr_21;
        MR_String mdbcomp__trace_counts__PathStr_22;
        MR_Word mdbcomp__trace_counts__V_24_24;
        MR_Word mdbcomp__trace_counts__V_25_25;
        MR_String mdbcomp__trace_counts__LineNumberStr_26;
        MR_Word mdbcomp__trace_counts__Rest_27;
        MR_Word mdbcomp__trace_counts__Port_28;
        MR_Word mdbcomp__trace_counts__Path_29;
        MR_Integer mdbcomp__trace_counts__Length_52;
        MR_String mdbcomp__trace_counts__SubString_53;
        MR_String mdbcomp__trace_counts__V_54_54;
        MR_String mdbcomp__trace_counts__V_55_55;
        MR_Integer mdbcomp__trace_counts__V_56_56;
        MR_Integer mdbcomp__trace_counts__V_57_57;
        MR_Integer mdbcomp__trace_counts__V_58_58;

        mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__Words_11)) == (MR_mktag((MR_Integer) 1)));
        if (mdbcomp__trace_counts__succeeded)
          {
            mdbcomp__trace_counts__PortStr_21 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__Words_11, (MR_Integer) 0)));
            mdbcomp__trace_counts__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__Words_11, (MR_Integer) 1)));
            mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__V_24_24)) == (MR_mktag((MR_Integer) 1)));
            if (mdbcomp__trace_counts__succeeded)
              {
                mdbcomp__trace_counts__PathStr_22 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_24_24, (MR_Integer) 0)));
                mdbcomp__trace_counts__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_24_24, (MR_Integer) 1)));
                mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__V_25_25)) == (MR_mktag((MR_Integer) 1)));
                if (mdbcomp__trace_counts__succeeded)
                  {
                    mdbcomp__trace_counts__LineNumberStr_26 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_25_25, (MR_Integer) 0)));
                    mdbcomp__trace_counts__Rest_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_25_25, (MR_Integer) 1)));
                    {
                      mdbcomp__trace_counts__succeeded = mdbcomp__trace_counts__string_to_trace_port_2_p_0(mdbcomp__trace_counts__PortStr_21, &mdbcomp__trace_counts__Port_28);
                    }
                    if (mdbcomp__trace_counts__succeeded)
                      {
                        mdbcomp__trace_counts__V_54_54 = (MR_String) "<";
                        {
                          mdbcomp__trace_counts__succeeded = mercury__string__prefix_2_p_0(mdbcomp__trace_counts__PathStr_22, mdbcomp__trace_counts__V_54_54);
                        }
                        if (mdbcomp__trace_counts__succeeded)
                          {
                            mdbcomp__trace_counts__V_55_55 = (MR_String) ">";
                            {
                              mdbcomp__trace_counts__succeeded = mercury__string__suffix_2_p_0(mdbcomp__trace_counts__PathStr_22, mdbcomp__trace_counts__V_55_55);
                            }
                            if (mdbcomp__trace_counts__succeeded)
                              {
                                {
                                  mercury__string__length_2_p_0(mdbcomp__trace_counts__PathStr_22, &mdbcomp__trace_counts__Length_52);
                                }
                                mdbcomp__trace_counts__V_56_56 = (MR_Integer) 1;
                                mdbcomp__trace_counts__V_58_58 = (MR_Integer) 1;
                                mdbcomp__trace_counts__V_57_57 = (mdbcomp__trace_counts__Length_52 - mdbcomp__trace_counts__V_58_58);
                                {
                                  mercury__string__between_4_p_0(mdbcomp__trace_counts__PathStr_22, mdbcomp__trace_counts__V_56_56, mdbcomp__trace_counts__V_57_57, &mdbcomp__trace_counts__SubString_53);
                                }
                                {
                                  mdbcomp__trace_counts__succeeded = mdbcomp__goal_path__rev_goal_path_from_string_2_p_0(mdbcomp__trace_counts__SubString_53, &mdbcomp__trace_counts__Path_29);
                                }
                                if (mdbcomp__trace_counts__succeeded)
                                  {
                                    {
                                      MR_Word base;
                                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                      *mdbcomp__trace_counts__PathPort_7 = base;
                                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mdbcomp__trace_counts__Port_28));
                                      MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mdbcomp__trace_counts__Path_29));
                                    }
                                    {
                                      mdbcomp__trace_counts__succeeded = mercury__string__to_int_2_p_0(mdbcomp__trace_counts__LineNumberStr_26, mdbcomp__trace_counts__LineNumber_8);
                                    }
                                    if (mdbcomp__trace_counts__succeeded)
                                      {
                                        if ((mdbcomp__trace_counts__Rest_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                                          {
                                            *mdbcomp__trace_counts__ExecCount_9 = (MR_Integer) 0;
                                            *mdbcomp__trace_counts__NumTests_10 = (MR_Integer) 1;
                                            mdbcomp__trace_counts__succeeded = MR_TRUE;
                                          }
                                        else
                                          {
                                            MR_Word mdbcomp__trace_counts__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__Rest_27, (MR_Integer) 1)));
                                            MR_String mdbcomp__trace_counts__V_69_69 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__Rest_27, (MR_Integer) 0)));

                                            if ((mdbcomp__trace_counts__V_68_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                                              {
                                                {
                                                  mdbcomp__trace_counts__succeeded = mercury__string__to_int_2_p_0(mdbcomp__trace_counts__V_69_69, mdbcomp__trace_counts__ExecCount_9);
                                                }
                                                if (mdbcomp__trace_counts__succeeded)
                                                  {
                                                    *mdbcomp__trace_counts__NumTests_10 = (MR_Integer) 1;
                                                    mdbcomp__trace_counts__succeeded = MR_TRUE;
                                                  }
                                              }
                                            else
                                              {
                                                MR_String mdbcomp__trace_counts__NumTestsStr_63 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_68_68, (MR_Integer) 0)));
                                                MR_Word mdbcomp__trace_counts__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_68_68, (MR_Integer) 1)));

                                                mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__V_65_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                if (mdbcomp__trace_counts__succeeded)
                                                  {
                                                    {
                                                      mdbcomp__trace_counts__succeeded = mercury__string__to_int_2_p_0(mdbcomp__trace_counts__V_69_69, mdbcomp__trace_counts__ExecCount_9);
                                                    }
                                                    if (mdbcomp__trace_counts__succeeded)
                                                      {
                                                        mdbcomp__trace_counts__succeeded = mercury__string__to_int_2_p_0(mdbcomp__trace_counts__NumTestsStr_63, mdbcomp__trace_counts__NumTests_10);
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
      }
    return mdbcomp__trace_counts__succeeded;
  }
}

static void MR_CALL 
mdbcomp__trace_counts__read_proc_trace_counts_2_6_p_0(
  MR_Word mdbcomp__trace_counts__ProcLabelInContext_7,
  MR_Word mdbcomp__trace_counts__ProcCounts0_8,
  MR_Word mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_0_22,
  MR_Word * mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_23)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mdbcomp__trace_counts__succeeded;
        MR_Word mdbcomp__trace_counts__Result_11;

        {
          mercury__io__read_line_as_string_3_p_0(&mdbcomp__trace_counts__Result_11);
        }
        switch (MR_tag((MR_Word) mdbcomp__trace_counts__Result_11)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0, (MR_Word) &mdbcomp__trace_counts_scalar_common_1[0], ((MR_Box) (mdbcomp__trace_counts__ProcLabelInContext_7)), ((MR_Box) (mdbcomp__trace_counts__ProcCounts0_8)), mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_0_22, mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_23);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String mdbcomp__trace_counts__Line_12 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__Result_11, (MR_Integer) 0)));
              MR_Word mdbcomp__trace_counts__PathPort_13;
              MR_Integer mdbcomp__trace_counts__LineNumber_14;
              MR_Integer mdbcomp__trace_counts__ExecCount_15;
              MR_Integer mdbcomp__trace_counts__NumTests_16;

              {
                mdbcomp__trace_counts__succeeded = mdbcomp__trace_counts__parse_path_port_line_5_p_0(mdbcomp__trace_counts__Line_12, &mdbcomp__trace_counts__PathPort_13, &mdbcomp__trace_counts__LineNumber_14, &mdbcomp__trace_counts__ExecCount_15, &mdbcomp__trace_counts__NumTests_16);
              }
              if (mdbcomp__trace_counts__succeeded)
                {
                  MR_Word mdbcomp__trace_counts__LineNoAndCount_17;
                  MR_Word mdbcomp__trace_counts__ProcCounts_18;

                  {
                    mdbcomp__trace_counts__LineNoAndCount_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__LineNoAndCount_17, 0) = ((MR_Box) (mdbcomp__trace_counts__LineNumber_14));
                    MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__LineNoAndCount_17, 1) = ((MR_Box) (mdbcomp__trace_counts__ExecCount_15));
                    MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__LineNoAndCount_17, 2) = ((MR_Box) (mdbcomp__trace_counts__NumTests_16));
                  }
                  {
                    mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0, (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0, ((MR_Box) (mdbcomp__trace_counts__PathPort_13)), ((MR_Box) (mdbcomp__trace_counts__LineNoAndCount_17)), mdbcomp__trace_counts__ProcCounts0_8, &mdbcomp__trace_counts__ProcCounts_18);
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word mdbcomp__trace_counts__ProcCounts0__tmp_copy_8 = mdbcomp__trace_counts__ProcCounts_18;

                    mdbcomp__trace_counts__ProcCounts0_8 = mdbcomp__trace_counts__ProcCounts0__tmp_copy_8;
                  }
                  continue;
                }
              else
                {
                  MR_Word mdbcomp__trace_counts__CurModuleNameSym_19;
                  MR_String mdbcomp__trace_counts__CurFileName_20;
                  MR_Word mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_30_30;
                  MR_Integer mdbcomp__trace_counts__LineNumber_34;
                  MR_Word mdbcomp__trace_counts__V_36_36;

                  {
                    mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0, (MR_Word) &mdbcomp__trace_counts_scalar_common_1[0], ((MR_Box) (mdbcomp__trace_counts__ProcLabelInContext_7)), ((MR_Box) (mdbcomp__trace_counts__ProcCounts0_8)), mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_0_22, &mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_30_30);
                  }
                  {
                    mercury__io__get_line_number_3_p_0(&mdbcomp__trace_counts__LineNumber_34);
                  }
                  mdbcomp__trace_counts__CurModuleNameSym_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabelInContext_7, (MR_Integer) 0)));
                  mdbcomp__trace_counts__CurFileName_20 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabelInContext_7, (MR_Integer) 1)));
                  mdbcomp__trace_counts__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabelInContext_7, (MR_Integer) 2)));
                  {
                    mdbcomp__trace_counts__read_proc_trace_counts_8_p_0(mdbcomp__trace_counts__LineNumber_34, mdbcomp__trace_counts__Line_12, mdbcomp__trace_counts__CurModuleNameSym_19, mdbcomp__trace_counts__CurFileName_20, mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_30_30, mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_23);
                  }
                }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mdbcomp__trace_counts__Error_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__Result_11, (MR_Integer) 0)));

              {
                mercury__exception__throw_1_p_0((MR_Word) &mercury__io__io__type_ctor_info_error_0, ((MR_Box) (mdbcomp__trace_counts__Error_21)));
                return;
              }
            }
            break;
        }
      }
      break;
    }
}

static void MR_CALL 
mdbcomp__trace_counts__read_proc_trace_counts_8_p_0(
  MR_Integer mdbcomp__trace_counts__HeaderLineNumber_9,
  MR_String mdbcomp__trace_counts__HeaderLine_10,
  MR_Word mdbcomp__trace_counts__CurModuleNameSym_11,
  MR_String mdbcomp__trace_counts__CurFileName_12,
  MR_Word mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_0_53,
  MR_Word * mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_54)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mdbcomp__trace_counts__succeeded;
        MR_Word mdbcomp__trace_counts__TokenList_15;
        MR_Integer mdbcomp__trace_counts__V_57_57;
        MR_Word mdbcomp__trace_counts__V_58_58;
        MR_Word mdbcomp__trace_counts__V_16_16;
        MR_String mdbcomp__trace_counts__TokenName_17;
        MR_Word mdbcomp__trace_counts__TokenListRest_19;
        MR_Word mdbcomp__trace_counts__V_61_61;
        MR_Integer mdbcomp__trace_counts__V_18_18;

        {
          mdbcomp__trace_counts__V_57_57 = mercury__string__length_1_f_0(mdbcomp__trace_counts__HeaderLine_10);
        }
        {
          mdbcomp__trace_counts__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__V_58_58, 0) = ((MR_Box) (mdbcomp__trace_counts__HeaderLineNumber_9));
          MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__V_58_58, 1) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__V_58_58, 2) = ((MR_Box) ((MR_Integer) 0));
        }
        {
          mercury__lexer__string_get_token_list_max_5_p_0(mdbcomp__trace_counts__HeaderLine_10, mdbcomp__trace_counts__V_57_57, &mdbcomp__trace_counts__TokenList_15, mdbcomp__trace_counts__V_58_58, &mdbcomp__trace_counts__V_16_16);
        }
        mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__TokenList_15)) == (MR_mktag((MR_Integer) 1)));
        if (mdbcomp__trace_counts__succeeded)
          {
            mdbcomp__trace_counts__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__TokenList_15, (MR_Integer) 0)));
            mdbcomp__trace_counts__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__TokenList_15, (MR_Integer) 1)));
            mdbcomp__trace_counts__TokenListRest_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__TokenList_15, (MR_Integer) 2)));
            mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__V_61_61)) == (MR_mktag((MR_Integer) 1)));
            if (mdbcomp__trace_counts__succeeded)
              mdbcomp__trace_counts__TokenName_17 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_61_61, (MR_Integer) 0)));
          }
        if (mdbcomp__trace_counts__succeeded)
          {
            MR_String mdbcomp__trace_counts__NextModuleName_20;
            MR_Word mdbcomp__trace_counts__V_62_62;
            MR_Word mdbcomp__trace_counts__V_63_63;
            MR_Integer mdbcomp__trace_counts__V_21_21;

            mdbcomp__trace_counts__succeeded = (strcmp(mdbcomp__trace_counts__TokenName_17, (MR_String) "module") == 0);
            if (mdbcomp__trace_counts__succeeded)
              {
                mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__TokenListRest_19)) == (MR_mktag((MR_Integer) 1)));
                if (mdbcomp__trace_counts__succeeded)
                  {
                    mdbcomp__trace_counts__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__TokenListRest_19, (MR_Integer) 0)));
                    mdbcomp__trace_counts__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__TokenListRest_19, (MR_Integer) 1)));
                    mdbcomp__trace_counts__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__TokenListRest_19, (MR_Integer) 2)));
                    mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__V_63_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (mdbcomp__trace_counts__succeeded)
                      {
                        mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__V_62_62)) == (MR_mktag((MR_Integer) 1)));
                        if (mdbcomp__trace_counts__succeeded)
                          mdbcomp__trace_counts__NextModuleName_20 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_62_62, (MR_Integer) 0)));
                      }
                  }
              }
            if (mdbcomp__trace_counts__succeeded)
              {
                MR_Word mdbcomp__trace_counts__NextModuleNameSym_22;
                MR_Word mdbcomp__trace_counts__Result_23;

                {
                  mdbcomp__trace_counts__NextModuleNameSym_22 = mdbcomp__sym_name__string_to_sym_name_1_f_0(mdbcomp__trace_counts__NextModuleName_20);
                }
                {
                  mercury__io__read_line_as_string_3_p_0(&mdbcomp__trace_counts__Result_23);
                }
                switch (MR_tag((MR_Word) mdbcomp__trace_counts__Result_23)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_54 = mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_0_53;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_String mdbcomp__trace_counts__Line_24 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__Result_23, (MR_Integer) 0)));
                      MR_Integer mdbcomp__trace_counts__LineNumber_25;

                      {
                        mercury__io__get_line_number_3_p_0(&mdbcomp__trace_counts__LineNumber_25);
                      }
                      /* direct tailcall eliminated */
                      {
                        MR_Integer mdbcomp__trace_counts__HeaderLineNumber__tmp_copy_9 = mdbcomp__trace_counts__LineNumber_25;
                        MR_String mdbcomp__trace_counts__HeaderLine__tmp_copy_10 = mdbcomp__trace_counts__Line_24;
                        MR_Word mdbcomp__trace_counts__CurModuleNameSym__tmp_copy_11 = mdbcomp__trace_counts__NextModuleNameSym_22;

                        mdbcomp__trace_counts__CurModuleNameSym_11 = mdbcomp__trace_counts__CurModuleNameSym__tmp_copy_11;
                        mdbcomp__trace_counts__HeaderLine_10 = mdbcomp__trace_counts__HeaderLine__tmp_copy_10;
                        mdbcomp__trace_counts__HeaderLineNumber_9 = mdbcomp__trace_counts__HeaderLineNumber__tmp_copy_9;
                      }
                      continue;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word mdbcomp__trace_counts__Error_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__Result_23, (MR_Integer) 0)));

                      {
                        mercury__exception__throw_1_p_0((MR_Word) &mercury__io__io__type_ctor_info_error_0, ((MR_Box) (mdbcomp__trace_counts__Error_26)));
                        return;
                      }
                    }
                    break;
                }
              }
            else
              {
                MR_String mdbcomp__trace_counts__NextFileName_27;
                MR_Word mdbcomp__trace_counts__V_68_68;
                MR_Word mdbcomp__trace_counts__V_69_69;
                MR_Integer mdbcomp__trace_counts__V_28_28;

                mdbcomp__trace_counts__succeeded = (strcmp(mdbcomp__trace_counts__TokenName_17, (MR_String) "file") == 0);
                if (mdbcomp__trace_counts__succeeded)
                  {
                    mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__TokenListRest_19)) == (MR_mktag((MR_Integer) 1)));
                    if (mdbcomp__trace_counts__succeeded)
                      {
                        mdbcomp__trace_counts__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__TokenListRest_19, (MR_Integer) 0)));
                        mdbcomp__trace_counts__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__TokenListRest_19, (MR_Integer) 1)));
                        mdbcomp__trace_counts__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__TokenListRest_19, (MR_Integer) 2)));
                        mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__V_69_69 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (mdbcomp__trace_counts__succeeded)
                          {
                            mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__V_68_68)) == (MR_mktag((MR_Integer) 1)));
                            if (mdbcomp__trace_counts__succeeded)
                              mdbcomp__trace_counts__NextFileName_27 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_68_68, (MR_Integer) 0)));
                          }
                      }
                  }
                if (mdbcomp__trace_counts__succeeded)
                  {
                    MR_Word mdbcomp__trace_counts__Result_128;

                    {
                      mercury__io__read_line_as_string_3_p_0(&mdbcomp__trace_counts__Result_128);
                    }
                    switch (MR_tag((MR_Word) mdbcomp__trace_counts__Result_128)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_54 = mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_0_53;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_String mdbcomp__trace_counts__Line_122 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__Result_128, (MR_Integer) 0)));
                          MR_Integer mdbcomp__trace_counts__LineNumber_123;

                          {
                            mercury__io__get_line_number_3_p_0(&mdbcomp__trace_counts__LineNumber_123);
                          }
                          /* direct tailcall eliminated */
                          {
                            MR_Integer mdbcomp__trace_counts__HeaderLineNumber__tmp_copy_9 = mdbcomp__trace_counts__LineNumber_123;
                            MR_String mdbcomp__trace_counts__HeaderLine__tmp_copy_10 = mdbcomp__trace_counts__Line_122;
                            MR_String mdbcomp__trace_counts__CurFileName__tmp_copy_12 = mdbcomp__trace_counts__NextFileName_27;

                            mdbcomp__trace_counts__CurFileName_12 = mdbcomp__trace_counts__CurFileName__tmp_copy_12;
                            mdbcomp__trace_counts__HeaderLine_10 = mdbcomp__trace_counts__HeaderLine__tmp_copy_10;
                            mdbcomp__trace_counts__HeaderLineNumber_9 = mdbcomp__trace_counts__HeaderLineNumber__tmp_copy_9;
                          }
                          continue;
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Word mdbcomp__trace_counts__Error_124 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__Result_128, (MR_Integer) 0)));

                          {
                            mercury__exception__throw_1_p_0((MR_Word) &mercury__io__io__type_ctor_info_error_0, ((MR_Box) (mdbcomp__trace_counts__Error_124)));
                            return;
                          }
                        }
                        break;
                    }
                  }
                else
                  {
                    MR_Word mdbcomp__trace_counts__ProcLabel_35;
                    MR_Word mdbcomp__trace_counts__V_156_156;
                    MR_Word mdbcomp__trace_counts__V_158_158;
                    MR_Word mdbcomp__trace_counts__V_159_159;
                    MR_Word mdbcomp__trace_counts__V_161_161;
                    MR_String mdbcomp__trace_counts__V_162_162;
                    MR_Word mdbcomp__trace_counts__V_163_163;
                    MR_Word mdbcomp__trace_counts__V_165_165;
                    MR_Integer mdbcomp__trace_counts__V_166_166;
                    MR_Integer mdbcomp__trace_counts__V_157_157;
                    MR_Integer mdbcomp__trace_counts__V_160_160;
                    MR_Integer mdbcomp__trace_counts__V_164_164;
                    MR_Integer mdbcomp__trace_counts__lo_0;
                    MR_Integer mdbcomp__trace_counts__hi_1;
                    MR_Integer mdbcomp__trace_counts__mid_2;
                    MR_Integer mdbcomp__trace_counts__result_3;

                    mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__TokenListRest_19)) == (MR_mktag((MR_Integer) 1)));
                    if (mdbcomp__trace_counts__succeeded)
                      {
                        mdbcomp__trace_counts__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__TokenListRest_19, (MR_Integer) 0)));
                        mdbcomp__trace_counts__V_157_157 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__TokenListRest_19, (MR_Integer) 1)));
                        mdbcomp__trace_counts__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__TokenListRest_19, (MR_Integer) 2)));
                        mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__V_156_156)) == (MR_mktag((MR_Integer) 1)));
                        if (mdbcomp__trace_counts__succeeded)
                          {
                            mdbcomp__trace_counts__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_156_156, (MR_Integer) 0)));
                            mdbcomp__trace_counts__V_160_160 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_156_156, (MR_Integer) 1)));
                            mdbcomp__trace_counts__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_156_156, (MR_Integer) 2)));
                            mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__V_158_158)) == (MR_mktag((MR_Integer) 1)));
                            if (mdbcomp__trace_counts__succeeded)
                              {
                                mdbcomp__trace_counts__V_162_162 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_158_158, (MR_Integer) 0)));
                                mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__V_159_159)) == (MR_mktag((MR_Integer) 1)));
                                if (mdbcomp__trace_counts__succeeded)
                                  {
                                    mdbcomp__trace_counts__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_159_159, (MR_Integer) 0)));
                                    mdbcomp__trace_counts__V_164_164 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_159_159, (MR_Integer) 1)));
                                    mdbcomp__trace_counts__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_159_159, (MR_Integer) 2)));
                                    mdbcomp__trace_counts__succeeded = ((((MR_tag((MR_Word) mdbcomp__trace_counts__V_165_165)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__V_165_165, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                    if (mdbcomp__trace_counts__succeeded)
                                      {
                                        mdbcomp__trace_counts__V_166_166 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__V_165_165, (MR_Integer) 1)));
                                        /* binary string jump switch */
                                        mdbcomp__trace_counts__lo_0 = (MR_Integer) 0;
                                        mdbcomp__trace_counts__hi_1 = (MR_Integer) 3;
                                        do
                                          {
                                            mdbcomp__trace_counts__mid_2 = (((mdbcomp__trace_counts__lo_0 + mdbcomp__trace_counts__hi_1)) / (MR_Integer) 2);
                                            mdbcomp__trace_counts__result_3 = MR_strcmp(mdbcomp__trace_counts__TokenName_17, ((&mdbcomp__trace_counts_vector_common_10[0 + mdbcomp__trace_counts__mid_2]))->mdbcomp__trace_counts__vector_common_type_10_0__vct_10_f_0);
                                            if ((mdbcomp__trace_counts__result_3 == (MR_Integer) 0))
                                              {
                                                switch (((&mdbcomp__trace_counts_vector_common_10[0 + mdbcomp__trace_counts__mid_2]))->mdbcomp__trace_counts__vector_common_type_10_0__vct_10_f_1) {
                                                  default: /*NOTREACHED*/ MR_assert(0);
                                                  case (MR_Integer) 0:
                                                    {
                                                      /* case "fproc" */
                                                      {
                                                        MR_Word mdbcomp__trace_counts__V_98_98;
                                                        MR_Integer mdbcomp__trace_counts__Arity_133;

                                                        mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__V_163_163 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                        if (mdbcomp__trace_counts__succeeded)
                                                          {
                                                            mdbcomp__trace_counts__succeeded = ((((MR_tag((MR_Word) mdbcomp__trace_counts__V_161_161)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__V_161_161, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                                            if (mdbcomp__trace_counts__succeeded)
                                                              {
                                                                mdbcomp__trace_counts__Arity_133 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__V_161_161, (MR_Integer) 1)));
                                                                mdbcomp__trace_counts__V_98_98 = (MR_Integer) 1;
                                                                {
                                                                  mdbcomp__trace_counts__ProcLabel_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                                                                  MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_35, 0) = ((MR_Box) (mdbcomp__trace_counts__CurModuleNameSym_11));
                                                                  MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_35, 1) = ((MR_Box) (mdbcomp__trace_counts__V_98_98));
                                                                  MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_35, 2) = ((MR_Box) (mdbcomp__trace_counts__CurModuleNameSym_11));
                                                                  MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_35, 3) = ((MR_Box) (mdbcomp__trace_counts__V_162_162));
                                                                  MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_35, 4) = ((MR_Box) (mdbcomp__trace_counts__Arity_133));
                                                                  MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_35, 5) = ((MR_Box) (mdbcomp__trace_counts__V_166_166));
                                                                }
                                                                mdbcomp__trace_counts__succeeded = MR_TRUE;
                                                              }
                                                          }
                                                      }
                                                    }
                                                    break;
                                                  case (MR_Integer) 1:
                                                    {
                                                      /* case "fprocdecl" */
                                                      {
                                                        MR_Word mdbcomp__trace_counts__V_80_80;
                                                        MR_Word mdbcomp__trace_counts__V_81_81;
                                                        MR_Word mdbcomp__trace_counts__V_82_82;
                                                        MR_String mdbcomp__trace_counts__Name_138;
                                                        MR_Integer mdbcomp__trace_counts__Mode_140;
                                                        MR_Word mdbcomp__trace_counts__DeclModuleNameSym_142;
                                                        MR_Integer mdbcomp__trace_counts__V_48_48;

                                                        mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__V_161_161)) == (MR_mktag((MR_Integer) 1)));
                                                        if (mdbcomp__trace_counts__succeeded)
                                                          {
                                                            mdbcomp__trace_counts__Name_138 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_161_161, (MR_Integer) 0)));
                                                            mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__V_163_163)) == (MR_mktag((MR_Integer) 1)));
                                                            if (mdbcomp__trace_counts__succeeded)
                                                              {
                                                                mdbcomp__trace_counts__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_163_163, (MR_Integer) 0)));
                                                                mdbcomp__trace_counts__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_163_163, (MR_Integer) 1)));
                                                                mdbcomp__trace_counts__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_163_163, (MR_Integer) 2)));
                                                                mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__V_81_81 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                                if (mdbcomp__trace_counts__succeeded)
                                                                  {
                                                                    mdbcomp__trace_counts__succeeded = ((((MR_tag((MR_Word) mdbcomp__trace_counts__V_80_80)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__V_80_80, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                                                    if (mdbcomp__trace_counts__succeeded)
                                                                      {
                                                                        mdbcomp__trace_counts__Mode_140 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__V_80_80, (MR_Integer) 1)));
                                                                        {
                                                                          mdbcomp__trace_counts__DeclModuleNameSym_142 = mdbcomp__sym_name__string_to_sym_name_1_f_0(mdbcomp__trace_counts__V_162_162);
                                                                        }
                                                                        mdbcomp__trace_counts__V_82_82 = (MR_Integer) 1;
                                                                        {
                                                                          mdbcomp__trace_counts__ProcLabel_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                                                                          MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_35, 0) = ((MR_Box) (mdbcomp__trace_counts__CurModuleNameSym_11));
                                                                          MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_35, 1) = ((MR_Box) (mdbcomp__trace_counts__V_82_82));
                                                                          MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_35, 2) = ((MR_Box) (mdbcomp__trace_counts__DeclModuleNameSym_142));
                                                                          MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_35, 3) = ((MR_Box) (mdbcomp__trace_counts__Name_138));
                                                                          MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_35, 4) = ((MR_Box) (mdbcomp__trace_counts__V_166_166));
                                                                          MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_35, 5) = ((MR_Box) (mdbcomp__trace_counts__Mode_140));
                                                                        }
                                                                        mdbcomp__trace_counts__succeeded = MR_TRUE;
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                    }
                                                    break;
                                                  case (MR_Integer) 2:
                                                    {
                                                      /* case "pproc" */
                                                      {
                                                        MR_Integer mdbcomp__trace_counts__Arity_31;
                                                        MR_Word mdbcomp__trace_counts__V_106_106;

                                                        mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__V_163_163 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                        if (mdbcomp__trace_counts__succeeded)
                                                          {
                                                            mdbcomp__trace_counts__succeeded = ((((MR_tag((MR_Word) mdbcomp__trace_counts__V_161_161)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__V_161_161, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                                            if (mdbcomp__trace_counts__succeeded)
                                                              {
                                                                mdbcomp__trace_counts__Arity_31 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__V_161_161, (MR_Integer) 1)));
                                                                mdbcomp__trace_counts__V_106_106 = (MR_Integer) 0;
                                                                {
                                                                  mdbcomp__trace_counts__ProcLabel_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                                                                  MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_35, 0) = ((MR_Box) (mdbcomp__trace_counts__CurModuleNameSym_11));
                                                                  MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_35, 1) = ((MR_Box) (mdbcomp__trace_counts__V_106_106));
                                                                  MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_35, 2) = ((MR_Box) (mdbcomp__trace_counts__CurModuleNameSym_11));
                                                                  MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_35, 3) = ((MR_Box) (mdbcomp__trace_counts__V_162_162));
                                                                  MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_35, 4) = ((MR_Box) (mdbcomp__trace_counts__Arity_31));
                                                                  MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_35, 5) = ((MR_Box) (mdbcomp__trace_counts__V_166_166));
                                                                }
                                                                mdbcomp__trace_counts__succeeded = MR_TRUE;
                                                              }
                                                          }
                                                      }
                                                    }
                                                    break;
                                                  case (MR_Integer) 3:
                                                    {
                                                      /* case "pprocdecl" */
                                                      {
                                                        MR_Word mdbcomp__trace_counts__DeclModuleNameSym_44;
                                                        MR_Word mdbcomp__trace_counts__V_89_89;
                                                        MR_Word mdbcomp__trace_counts__V_90_90;
                                                        MR_Word mdbcomp__trace_counts__V_91_91;
                                                        MR_String mdbcomp__trace_counts__Name_135;
                                                        MR_Integer mdbcomp__trace_counts__Mode_137;
                                                        MR_Integer mdbcomp__trace_counts__V_43_43;

                                                        mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__V_161_161)) == (MR_mktag((MR_Integer) 1)));
                                                        if (mdbcomp__trace_counts__succeeded)
                                                          {
                                                            mdbcomp__trace_counts__Name_135 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_161_161, (MR_Integer) 0)));
                                                            mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__V_163_163)) == (MR_mktag((MR_Integer) 1)));
                                                            if (mdbcomp__trace_counts__succeeded)
                                                              {
                                                                mdbcomp__trace_counts__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_163_163, (MR_Integer) 0)));
                                                                mdbcomp__trace_counts__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_163_163, (MR_Integer) 1)));
                                                                mdbcomp__trace_counts__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_163_163, (MR_Integer) 2)));
                                                                mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__V_90_90 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                                if (mdbcomp__trace_counts__succeeded)
                                                                  {
                                                                    mdbcomp__trace_counts__succeeded = ((((MR_tag((MR_Word) mdbcomp__trace_counts__V_89_89)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__V_89_89, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                                                    if (mdbcomp__trace_counts__succeeded)
                                                                      {
                                                                        mdbcomp__trace_counts__Mode_137 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__V_89_89, (MR_Integer) 1)));
                                                                        {
                                                                          mdbcomp__trace_counts__DeclModuleNameSym_44 = mdbcomp__sym_name__string_to_sym_name_1_f_0(mdbcomp__trace_counts__V_162_162);
                                                                        }
                                                                        mdbcomp__trace_counts__V_91_91 = (MR_Integer) 0;
                                                                        {
                                                                          mdbcomp__trace_counts__ProcLabel_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                                                                          MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_35, 0) = ((MR_Box) (mdbcomp__trace_counts__CurModuleNameSym_11));
                                                                          MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_35, 1) = ((MR_Box) (mdbcomp__trace_counts__V_91_91));
                                                                          MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_35, 2) = ((MR_Box) (mdbcomp__trace_counts__DeclModuleNameSym_44));
                                                                          MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_35, 3) = ((MR_Box) (mdbcomp__trace_counts__Name_135));
                                                                          MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_35, 4) = ((MR_Box) (mdbcomp__trace_counts__V_166_166));
                                                                          MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_35, 5) = ((MR_Box) (mdbcomp__trace_counts__Mode_137));
                                                                        }
                                                                        mdbcomp__trace_counts__succeeded = MR_TRUE;
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                    }
                                                    break;
                                                }
                                                /* jump out of search loop */
                                                goto label_0;
                                              }
                                            else
                                            if ((mdbcomp__trace_counts__result_3 < (MR_Integer) 0))
                                              mdbcomp__trace_counts__hi_1 = (mdbcomp__trace_counts__mid_2 - (MR_Integer) 1);
                                            else
                                              mdbcomp__trace_counts__lo_0 = (mdbcomp__trace_counts__mid_2 + (MR_Integer) 1);
                                          }
                                        while ((mdbcomp__trace_counts__lo_0 <= mdbcomp__trace_counts__hi_1));
                                        mdbcomp__trace_counts__succeeded = MR_FALSE;
                                      label_0:;
                                      }
                                  }
                              }
                          }
                      }
                    if (mdbcomp__trace_counts__succeeded)
                      {
                        MR_Word mdbcomp__trace_counts__ProcLabelInContext_49;
                        MR_Word mdbcomp__trace_counts__StartCounts_51;
                        MR_Word mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_109_109;
                        MR_Word mdbcomp__trace_counts__ProbeCounts_50;
                        MR_Word mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_108_108;
                        MR_Box mdbcomp__trace_counts__conv0_ProbeCounts_50;

                        {
                          mdbcomp__trace_counts__ProcLabelInContext_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabelInContext_49, 0) = ((MR_Box) (mdbcomp__trace_counts__CurModuleNameSym_11));
                          MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabelInContext_49, 1) = ((MR_Box) (mdbcomp__trace_counts__CurFileName_12));
                          MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabelInContext_49, 2) = ((MR_Box) (mdbcomp__trace_counts__ProcLabel_35));
                        }
                        {
                          mdbcomp__trace_counts__succeeded = mercury__map__remove_4_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0, (MR_Word) &mdbcomp__trace_counts_scalar_common_1[0], ((MR_Box) (mdbcomp__trace_counts__ProcLabelInContext_49)), &mdbcomp__trace_counts__conv0_ProbeCounts_50, mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_0_53, &mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_108_108);
                        }
                        if (mdbcomp__trace_counts__succeeded)
                          {
                            mdbcomp__trace_counts__ProbeCounts_50 = ((MR_Word) mdbcomp__trace_counts__conv0_ProbeCounts_50);
                            mdbcomp__trace_counts__succeeded = MR_TRUE;
                          }
                        if (mdbcomp__trace_counts__succeeded)
                          {
                            mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_109_109 = mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_108_108;
                            mdbcomp__trace_counts__StartCounts_51 = mdbcomp__trace_counts__ProbeCounts_50;
                          }
                        else
                          {
                            {
                              mdbcomp__trace_counts__StartCounts_51 = mercury__map__init_0_f_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0, (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0);
                            }
                            mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_109_109 = mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_0_53;
                          }
                        {
                          mdbcomp__trace_counts__read_proc_trace_counts_2_6_p_0(mdbcomp__trace_counts__ProcLabelInContext_49, mdbcomp__trace_counts__StartCounts_51, mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_109_109, mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_54);
                        }
                      }
                    else
                      {
                        MR_String mdbcomp__trace_counts__Message_52;
                        MR_Word mdbcomp__trace_counts__V_116_116;
                        MR_String mdbcomp__trace_counts__V_168_168;
                        MR_String mdbcomp__trace_counts__V_175_175;

                        {
                          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &mdbcomp__trace_counts_scalar_common_3[9], mdbcomp__trace_counts__HeaderLineNumber_9, &mdbcomp__trace_counts__V_168_168);
                        }
                        {
                          mdbcomp__trace_counts__V_175_175 = mercury__string__f_43_43_2_f_0(mdbcomp__trace_counts__V_168_168, (MR_String) " of execution trace");
                        }
                        {
                          mdbcomp__trace_counts__Message_52 = mercury__string__f_43_43_2_f_0((MR_String) "parse error on line ", mdbcomp__trace_counts__V_175_175);
                        }
                        mdbcomp__trace_counts__V_116_116 = (MR_Word) mdbcomp__trace_counts__Message_52;
                        {
                          mercury__exception__throw_1_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_syntax_error_0, ((MR_Box) (mdbcomp__trace_counts__V_116_116)));
                          return;
                        }
                      }
                  }
              }
          }
        else
          {
            MR_Word mdbcomp__trace_counts__V_121_121;
            MR_String mdbcomp__trace_counts__Message_147;
            MR_String mdbcomp__trace_counts__V_178_178;
            MR_String mdbcomp__trace_counts__V_185_185;

            {
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &mdbcomp__trace_counts_scalar_common_3[9], mdbcomp__trace_counts__HeaderLineNumber_9, &mdbcomp__trace_counts__V_178_178);
            }
            {
              mdbcomp__trace_counts__V_185_185 = mercury__string__f_43_43_2_f_0(mdbcomp__trace_counts__V_178_178, (MR_String) " of execution trace");
            }
            {
              mdbcomp__trace_counts__Message_147 = mercury__string__f_43_43_2_f_0((MR_String) "parse error on line ", mdbcomp__trace_counts__V_185_185);
            }
            mdbcomp__trace_counts__V_121_121 = (MR_Word) mdbcomp__trace_counts__Message_147;
            {
              mercury__exception__throw_1_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_syntax_error_0, ((MR_Box) (mdbcomp__trace_counts__V_121_121)));
              return;
            }
          }
      }
      break;
    }
}

static void MR_CALL 
mdbcomp__trace_counts__read_trace_counts_setup_4_p_0(
  MR_Word mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_0_13,
  MR_Word * mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_14)
{
  {
    MR_bool mdbcomp__trace_counts__succeeded;
    MR_Integer mdbcomp__trace_counts__LineNumber_7;
    MR_Word mdbcomp__trace_counts__Result_8;

    {
      mercury__io__get_line_number_3_p_0(&mdbcomp__trace_counts__LineNumber_7);
    }
    {
      mercury__io__read_line_as_string_3_p_0(&mdbcomp__trace_counts__Result_8);
    }
    switch (MR_tag((MR_Word) mdbcomp__trace_counts__Result_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_14 = mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_0_13;
        break;
      case (MR_Integer) 1:
        {
          MR_String mdbcomp__trace_counts__Line_9 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__Result_8, (MR_Integer) 0)));

          {
            mdbcomp__trace_counts__read_proc_trace_counts_8_p_0(mdbcomp__trace_counts__LineNumber_7, mdbcomp__trace_counts__Line_9, (MR_Word) &mdbcomp__trace_counts_scalar_common_3[8], (MR_String) "", mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_0_13, mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_14);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word mdbcomp__trace_counts__Error_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__Result_8, (MR_Integer) 0)));

          {
            mercury__exception__throw_1_p_0((MR_Word) &mercury__io__io__type_ctor_info_error_0, ((MR_Box) (mdbcomp__trace_counts__Error_12)));
            return;
          }
        }
        break;
    }
  }
}

static void MR_CALL 
mdbcomp__trace_counts__read_trace_counts_list_stream_8_p_0(
  MR_Word mdbcomp__trace_counts__ShowProgress_9,
  MR_Word mdbcomp__trace_counts__FileType0_10,
  MR_Word mdbcomp__trace_counts__TraceCounts0_11,
  MR_String mdbcomp__trace_counts__MainFileName_12,
  MR_Word mdbcomp__trace_counts__Stream_13,
  MR_Word * mdbcomp__trace_counts__Result_14)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mdbcomp__trace_counts__succeeded;
        MR_Word mdbcomp__trace_counts__ReadResult_16;

        {
          mercury__io__read_line_as_string_4_p_0(mdbcomp__trace_counts__Stream_13, &mdbcomp__trace_counts__ReadResult_16);
        }
        switch (MR_tag((MR_Word) mdbcomp__trace_counts__ReadResult_16)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              *mdbcomp__trace_counts__Result_14 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdbcomp__trace_counts__FileType0_10));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdbcomp__trace_counts__TraceCounts0_11));
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String mdbcomp__trace_counts__Line_17 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__ReadResult_16, (MR_Integer) 0)));
              MR_String mdbcomp__trace_counts__FileName_18;

              {
                mdbcomp__trace_counts__FileName_18 = mercury__string__rstrip_1_f_0(mdbcomp__trace_counts__Line_17);
              }
              mdbcomp__trace_counts__succeeded = (strcmp(mdbcomp__trace_counts__FileName_18, (MR_String) "") == 0);
              if (mdbcomp__trace_counts__succeeded)
                {
                  /* direct tailcall eliminated */
                  continue;
                }
              else
                {
                  MR_Word mdbcomp__trace_counts__ReadTCResult_19;

                  switch (mdbcomp__trace_counts__ShowProgress_9) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        {
                          mercury__io__write_string_3_p_0(mdbcomp__trace_counts__FileName_18);
                        }
                        {
                          mercury__io__nl_2_p_0();
                        }
                      }
                      break;
                  }
                  {
                    mdbcomp__trace_counts__read_trace_counts_4_p_0(mdbcomp__trace_counts__FileName_18, &mdbcomp__trace_counts__ReadTCResult_19);
                  }
                  switch (MR_tag((MR_Word) mdbcomp__trace_counts__ReadTCResult_19)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word mdbcomp__trace_counts__FileType1_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ReadTCResult_19, (MR_Integer) 0)));
                        MR_Word mdbcomp__trace_counts__TraceCounts1_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ReadTCResult_19, (MR_Integer) 1)));
                        MR_Word mdbcomp__trace_counts__TraceCounts_22;
                        MR_Word mdbcomp__trace_counts__FileType_23;
                        MR_Word mdbcomp__trace_counts__V_68_68;
                        MR_Word mdbcomp__trace_counts__V_69_69;

                        {
                          mdbcomp__trace_counts__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_69_69, 0) = ((MR_Box) (mdbcomp__trace_counts__TraceCounts1_21));
                          MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          mdbcomp__trace_counts__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_68_68, 0) = ((MR_Box) (mdbcomp__trace_counts__TraceCounts0_11));
                          MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_68_68, 1) = ((MR_Box) (mdbcomp__trace_counts__V_69_69));
                        }
                        {
                          mdbcomp__trace_counts__summarize_trace_counts_list_2_p_0(mdbcomp__trace_counts__V_68_68, &mdbcomp__trace_counts__TraceCounts_22);
                        }
                        {
                          mdbcomp__trace_counts__FileType_23 = mdbcomp__trace_counts__sum_trace_count_file_type_2_f_0(mdbcomp__trace_counts__FileType0_10, mdbcomp__trace_counts__FileType1_20);
                        }
                        /* direct tailcall eliminated */
                        {
                          MR_Word mdbcomp__trace_counts__FileType0__tmp_copy_10 = mdbcomp__trace_counts__FileType_23;
                          MR_Word mdbcomp__trace_counts__TraceCounts0__tmp_copy_11 = mdbcomp__trace_counts__TraceCounts_22;

                          mdbcomp__trace_counts__TraceCounts0_11 = mdbcomp__trace_counts__TraceCounts0__tmp_copy_11;
                          mdbcomp__trace_counts__FileType0_10 = mdbcomp__trace_counts__FileType0__tmp_copy_10;
                        }
                        continue;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_String mdbcomp__trace_counts__V_49_49;
                        MR_String mdbcomp__trace_counts__V_51_51;
                        MR_String mdbcomp__trace_counts__V_52_52;
                        MR_String mdbcomp__trace_counts__ErrMsg_74 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__ReadTCResult_19, (MR_Integer) 0)));

                        {
                          mdbcomp__trace_counts__V_52_52 = mercury__string__f_43_43_2_f_0((MR_String) "\': ", mdbcomp__trace_counts__ErrMsg_74);
                        }
                        {
                          mdbcomp__trace_counts__V_51_51 = mercury__string__f_43_43_2_f_0(mdbcomp__trace_counts__FileName_18, mdbcomp__trace_counts__V_52_52);
                        }
                        {
                          mdbcomp__trace_counts__V_49_49 = mercury__string__f_43_43_2_f_0((MR_String) "Syntax error in file \140", mdbcomp__trace_counts__V_51_51);
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          *mdbcomp__trace_counts__Result_14 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__trace_counts__V_49_49));
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_String mdbcomp__trace_counts__V_42_42;
                        MR_String mdbcomp__trace_counts__V_44_44;
                        MR_String mdbcomp__trace_counts__V_46_46;
                        MR_String mdbcomp__trace_counts__V_47_47;
                        MR_String mdbcomp__trace_counts__ErrMsg_75 = ((MR_String) (MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__ReadTCResult_19, (MR_Integer) 0)));

                        {
                          mdbcomp__trace_counts__V_47_47 = mercury__string__f_43_43_2_f_0((MR_String) "\': ", mdbcomp__trace_counts__ErrMsg_75);
                        }
                        {
                          mdbcomp__trace_counts__V_46_46 = mercury__string__f_43_43_2_f_0(mdbcomp__trace_counts__FileName_18, mdbcomp__trace_counts__V_47_47);
                        }
                        {
                          mdbcomp__trace_counts__V_44_44 = mercury__string__f_43_43_2_f_0((MR_String) "from file \140", mdbcomp__trace_counts__V_46_46);
                        }
                        {
                          mdbcomp__trace_counts__V_42_42 = mercury__string__f_43_43_2_f_0((MR_String) "Error reading trace counts ", mdbcomp__trace_counts__V_44_44);
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          *mdbcomp__trace_counts__Result_14 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__trace_counts__V_42_42));
                        }
                      }
                      break;
                    case (MR_Integer) 3:
                      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__ReadTCResult_19, (MR_Integer) 0)))) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            MR_String mdbcomp__trace_counts__V_54_54;
                            MR_String mdbcomp__trace_counts__V_56_56;
                            MR_String mdbcomp__trace_counts__V_58_58;
                            MR_String mdbcomp__trace_counts__V_59_59;
                            MR_Word mdbcomp__trace_counts__IOError_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__ReadTCResult_19, (MR_Integer) 1)));
                            MR_String mdbcomp__trace_counts__ErrMsg_73;

                            {
                              mdbcomp__trace_counts__ErrMsg_73 = mercury__io__error_message_1_f_0(mdbcomp__trace_counts__IOError_72);
                            }
                            {
                              mdbcomp__trace_counts__V_59_59 = mercury__string__f_43_43_2_f_0((MR_String) "\': ", mdbcomp__trace_counts__ErrMsg_73);
                            }
                            {
                              mdbcomp__trace_counts__V_58_58 = mercury__string__f_43_43_2_f_0(mdbcomp__trace_counts__FileName_18, mdbcomp__trace_counts__V_59_59);
                            }
                            {
                              mdbcomp__trace_counts__V_56_56 = mercury__string__f_43_43_2_f_0((MR_String) "\140", mdbcomp__trace_counts__V_58_58);
                            }
                            {
                              mdbcomp__trace_counts__V_54_54 = mercury__string__f_43_43_2_f_0((MR_String) "I/O error opening file ", mdbcomp__trace_counts__V_56_56);
                            }
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                              *mdbcomp__trace_counts__Result_14 = base;
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__trace_counts__V_54_54));
                            }
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_Word mdbcomp__trace_counts__IOError_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__ReadTCResult_19, (MR_Integer) 1)));
                            MR_String mdbcomp__trace_counts__ErrMsg_25;
                            MR_String mdbcomp__trace_counts__V_61_61;
                            MR_String mdbcomp__trace_counts__V_63_63;
                            MR_String mdbcomp__trace_counts__V_65_65;
                            MR_String mdbcomp__trace_counts__V_66_66;

                            {
                              mdbcomp__trace_counts__ErrMsg_25 = mercury__io__error_message_1_f_0(mdbcomp__trace_counts__IOError_24);
                            }
                            {
                              mdbcomp__trace_counts__V_66_66 = mercury__string__f_43_43_2_f_0((MR_String) "\': ", mdbcomp__trace_counts__ErrMsg_25);
                            }
                            {
                              mdbcomp__trace_counts__V_65_65 = mercury__string__f_43_43_2_f_0(mdbcomp__trace_counts__FileName_18, mdbcomp__trace_counts__V_66_66);
                            }
                            {
                              mdbcomp__trace_counts__V_63_63 = mercury__string__f_43_43_2_f_0((MR_String) "\140", mdbcomp__trace_counts__V_65_65);
                            }
                            {
                              mdbcomp__trace_counts__V_61_61 = mercury__string__f_43_43_2_f_0((MR_String) "I/O error reading file ", mdbcomp__trace_counts__V_63_63);
                            }
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                              *mdbcomp__trace_counts__Result_14 = base;
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__trace_counts__V_61_61));
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
              MR_Word mdbcomp__trace_counts__Error_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__ReadResult_16, (MR_Integer) 0)));
              MR_String mdbcomp__trace_counts__V_30_30;
              MR_String mdbcomp__trace_counts__V_32_32;
              MR_String mdbcomp__trace_counts__V_34_34;
              MR_String mdbcomp__trace_counts__V_35_35;
              MR_String mdbcomp__trace_counts__V_37_37;

              {
                mdbcomp__trace_counts__V_37_37 = mercury__string__string_1_f_0((MR_Word) &mercury__io__io__type_ctor_info_error_0, ((MR_Box) (mdbcomp__trace_counts__Error_26)));
              }
              {
                mdbcomp__trace_counts__V_35_35 = mercury__string__f_43_43_2_f_0((MR_String) "\': ", mdbcomp__trace_counts__V_37_37);
              }
              {
                mdbcomp__trace_counts__V_34_34 = mercury__string__f_43_43_2_f_0(mdbcomp__trace_counts__MainFileName_12, mdbcomp__trace_counts__V_35_35);
              }
              {
                mdbcomp__trace_counts__V_32_32 = mercury__string__f_43_43_2_f_0((MR_String) "\140", mdbcomp__trace_counts__V_34_34);
              }
              {
                mdbcomp__trace_counts__V_30_30 = mercury__string__f_43_43_2_f_0((MR_String) "IO error reading file ", mdbcomp__trace_counts__V_32_32);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *mdbcomp__trace_counts__Result_14 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__trace_counts__V_30_30));
              }
            }
            break;
        }
      }
      break;
    }
}

static void MR_CALL 
mdbcomp__trace_counts__diff_proc_counts_acc_5_p_0(
  MR_Word mdbcomp__trace_counts__ProcTraceCountsB_6,
  MR_Word mdbcomp__trace_counts__PathPortA_7,
  MR_Word mdbcomp__trace_counts__LineNoCountA_8,
  MR_Word mdbcomp__trace_counts__STATE_VARIABLE_ProcTraceCounts_0_12,
  MR_Word * mdbcomp__trace_counts__STATE_VARIABLE_ProcTraceCounts_13)
{
  {
    MR_bool mdbcomp__trace_counts__succeeded;
    MR_Word mdbcomp__trace_counts__LineNoCountB_10;
    MR_Box mdbcomp__trace_counts__conv0_LineNoCountB_10;

    {
      mdbcomp__trace_counts__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0, (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0, mdbcomp__trace_counts__ProcTraceCountsB_6, ((MR_Box) (mdbcomp__trace_counts__PathPortA_7)), &mdbcomp__trace_counts__conv0_LineNoCountB_10);
    }
    if (mdbcomp__trace_counts__succeeded)
      {
        mdbcomp__trace_counts__LineNoCountB_10 = ((MR_Word) mdbcomp__trace_counts__conv0_LineNoCountB_10);
        mdbcomp__trace_counts__succeeded = MR_TRUE;
      }
    if (mdbcomp__trace_counts__succeeded)
      {
        MR_Word mdbcomp__trace_counts__LineNoCount_11;
        MR_Integer mdbcomp__trace_counts__LineNumber1_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__LineNoCountA_8, (MR_Integer) 0)));
        MR_Integer mdbcomp__trace_counts__Count1_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__LineNoCountA_8, (MR_Integer) 1)));
        MR_Integer mdbcomp__trace_counts__Count2_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__LineNoCountB_10, (MR_Integer) 1)));
        MR_Integer mdbcomp__trace_counts__V_31_31 = (mdbcomp__trace_counts__Count1_26 - mdbcomp__trace_counts__Count2_29);
        MR_Integer mdbcomp__trace_counts___NumTests1_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__LineNoCountA_8, (MR_Integer) 2)));
        MR_Integer mdbcomp__trace_counts___LineNumber_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__LineNoCountB_10, (MR_Integer) 0)));
        MR_Integer mdbcomp__trace_counts___NumTests2_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__LineNoCountB_10, (MR_Integer) 2)));

        {
          mdbcomp__trace_counts__LineNoCount_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__LineNoCount_11, 0) = ((MR_Box) (mdbcomp__trace_counts__LineNumber1_25));
          MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__LineNoCount_11, 1) = ((MR_Box) (mdbcomp__trace_counts__V_31_31));
          MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__LineNoCount_11, 2) = ((MR_Box) ((MR_Integer) -1));
        }
        {
          mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0, (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0, ((MR_Box) (mdbcomp__trace_counts__PathPortA_7)), ((MR_Box) (mdbcomp__trace_counts__LineNoCount_11)), mdbcomp__trace_counts__STATE_VARIABLE_ProcTraceCounts_0_12, mdbcomp__trace_counts__STATE_VARIABLE_ProcTraceCounts_13);
        }
      }
    else
      {
        {
          mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0, (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0, ((MR_Box) (mdbcomp__trace_counts__PathPortA_7)), ((MR_Box) (mdbcomp__trace_counts__LineNoCountA_8)), mdbcomp__trace_counts__STATE_VARIABLE_ProcTraceCounts_0_12, mdbcomp__trace_counts__STATE_VARIABLE_ProcTraceCounts_13);
        }
      }
  }
}

static void MR_CALL 
mdbcomp__trace_counts__diff_trace_counts_acc_5_p_0_1(
  MR_Box mdbcomp__trace_counts__closure_arg,
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
  MR_Box mdbcomp__trace_counts__wrapper_arg_3,
  MR_Box * mdbcomp__trace_counts__wrapper_arg_4)
{
  {
    MR_Box mdbcomp__trace_counts__closure = mdbcomp__trace_counts__closure_arg;
    MR_Word mdbcomp__trace_counts__conv1_STATE_VARIABLE_ProcTraceCounts_13;

    {
      mdbcomp__trace_counts__diff_proc_counts_acc_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__closure, (MR_Integer) 3))), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_1), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_2), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_3), &mdbcomp__trace_counts__conv1_STATE_VARIABLE_ProcTraceCounts_13);
    }
    *mdbcomp__trace_counts__wrapper_arg_4 = ((MR_Box) (mdbcomp__trace_counts__conv1_STATE_VARIABLE_ProcTraceCounts_13));
  }
}

static void MR_CALL 
mdbcomp__trace_counts__diff_trace_counts_acc_5_p_0(
  MR_Word mdbcomp__trace_counts__TraceCountsB_6,
  MR_Word mdbcomp__trace_counts__ProcLabelInContextA_7,
  MR_Word mdbcomp__trace_counts__ProcTraceCountsA_8,
  MR_Word mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_0_12,
  MR_Word * mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_13)
{
  {
    MR_bool mdbcomp__trace_counts__succeeded;
    MR_Word mdbcomp__trace_counts__ProcTraceCountsB_10;
    MR_Box mdbcomp__trace_counts__conv0_ProcTraceCountsB_10;

    {
      mdbcomp__trace_counts__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0, (MR_Word) &mdbcomp__trace_counts_scalar_common_1[0], mdbcomp__trace_counts__TraceCountsB_6, ((MR_Box) (mdbcomp__trace_counts__ProcLabelInContextA_7)), &mdbcomp__trace_counts__conv0_ProcTraceCountsB_10);
    }
    if (mdbcomp__trace_counts__succeeded)
      {
        mdbcomp__trace_counts__ProcTraceCountsB_10 = ((MR_Word) mdbcomp__trace_counts__conv0_ProcTraceCountsB_10);
        mdbcomp__trace_counts__succeeded = MR_TRUE;
      }
    if (mdbcomp__trace_counts__succeeded)
      {
        MR_Word mdbcomp__trace_counts__TypeCtorInfo_13_31;
        MR_Word mdbcomp__trace_counts__TypeCtorInfo_14_32;
        MR_Word mdbcomp__trace_counts__ProcTraceCounts_11;
        MR_Word mdbcomp__trace_counts__V_25_25;
        MR_Word mdbcomp__trace_counts__V_26_26;
        MR_Box mdbcomp__trace_counts__conv2_ProcTraceCounts_11;

        {
          mdbcomp__trace_counts__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__V_25_25, 0) = ((MR_Box) (&mdbcomp__trace_counts_scalar_common_5[2]));
          MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__V_25_25, 1) = ((MR_Box) (mdbcomp__trace_counts__diff_trace_counts_acc_5_p_0_1));
          MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__V_25_25, 3) = ((MR_Box) (mdbcomp__trace_counts__ProcTraceCountsB_10));
        }
        mdbcomp__trace_counts__TypeCtorInfo_13_31 = (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0;
        mdbcomp__trace_counts__TypeCtorInfo_14_32 = (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0;
        {
          mdbcomp__trace_counts__V_26_26 = mercury__map__init_0_f_0(mdbcomp__trace_counts__TypeCtorInfo_13_31, mdbcomp__trace_counts__TypeCtorInfo_14_32);
        }
        {
          mercury__map__foldl_4_p_0(mdbcomp__trace_counts__TypeCtorInfo_13_31, mdbcomp__trace_counts__TypeCtorInfo_14_32, (MR_Word) &mdbcomp__trace_counts_scalar_common_1[0], mdbcomp__trace_counts__V_25_25, mdbcomp__trace_counts__ProcTraceCountsA_8, ((MR_Box) (mdbcomp__trace_counts__V_26_26)), &mdbcomp__trace_counts__conv2_ProcTraceCounts_11);
        }
        mdbcomp__trace_counts__ProcTraceCounts_11 = ((MR_Word) mdbcomp__trace_counts__conv2_ProcTraceCounts_11);
        {
          mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0, (MR_Word) &mdbcomp__trace_counts_scalar_common_1[0], ((MR_Box) (mdbcomp__trace_counts__ProcLabelInContextA_7)), ((MR_Box) (mdbcomp__trace_counts__ProcTraceCounts_11)), mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_0_12, mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_13);
        }
      }
    else
      {
        {
          mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0, (MR_Word) &mdbcomp__trace_counts_scalar_common_1[0], ((MR_Box) (mdbcomp__trace_counts__ProcLabelInContextA_7)), ((MR_Box) (mdbcomp__trace_counts__ProcTraceCountsA_8)), mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_0_12, mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_13);
        }
      }
  }
}

static MR_Word MR_CALL 
mdbcomp__trace_counts__sum_counts_on_line_2_f_0(
  MR_Word mdbcomp__trace_counts__LC1_4,
  MR_Word mdbcomp__trace_counts__LC2_5)
{
  {
    MR_bool mdbcomp__trace_counts__succeeded;
    MR_Word mdbcomp__trace_counts__LC_6;
    MR_Integer mdbcomp__trace_counts__LineNumber1_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__LC1_4, (MR_Integer) 0)));
    MR_Integer mdbcomp__trace_counts__Count1_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__LC1_4, (MR_Integer) 1)));
    MR_Integer mdbcomp__trace_counts__NumTests1_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__LC1_4, (MR_Integer) 2)));
    MR_Integer mdbcomp__trace_counts__Count2_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__LC2_5, (MR_Integer) 1)));
    MR_Integer mdbcomp__trace_counts__NumTests2_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__LC2_5, (MR_Integer) 2)));
    MR_Integer mdbcomp__trace_counts__V_13_13 = (mdbcomp__trace_counts__Count1_8 + mdbcomp__trace_counts__Count2_11);
    MR_Integer mdbcomp__trace_counts__V_14_14 = (mdbcomp__trace_counts__NumTests1_9 + mdbcomp__trace_counts__NumTests2_12);
    MR_Integer mdbcomp__trace_counts___LineNumber_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__LC2_5, (MR_Integer) 0)));

    {
      mdbcomp__trace_counts__LC_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__LC_6, 0) = ((MR_Box) (mdbcomp__trace_counts__LineNumber1_7));
      MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__LC_6, 1) = ((MR_Box) (mdbcomp__trace_counts__V_13_13));
      MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__LC_6, 2) = ((MR_Box) (mdbcomp__trace_counts__V_14_14));
    }
    return mdbcomp__trace_counts__LC_6;
  }
}

static MR_Box MR_CALL 
mdbcomp__trace_counts__sum_proc_trace_counts_3_p_0_1(
  MR_Box mdbcomp__trace_counts__closure_arg,
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
  MR_Box mdbcomp__trace_counts__wrapper_arg_2)
{
  {
    MR_Box mdbcomp__trace_counts__wrapper_arg_3;
    MR_Box mdbcomp__trace_counts__closure = mdbcomp__trace_counts__closure_arg;
    MR_Word mdbcomp__trace_counts__conv0_LC_6;

    {
      mdbcomp__trace_counts__conv0_LC_6 = mdbcomp__trace_counts__sum_counts_on_line_2_f_0(((MR_Word) mdbcomp__trace_counts__wrapper_arg_1), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_2));
    }
    mdbcomp__trace_counts__wrapper_arg_3 = ((MR_Box) (mdbcomp__trace_counts__conv0_LC_6));
    return mdbcomp__trace_counts__wrapper_arg_3;
  }
}

static void MR_CALL 
mdbcomp__trace_counts__sum_proc_trace_counts_3_p_0(
  MR_Word mdbcomp__trace_counts__ProcTraceCountsA_4,
  MR_Word mdbcomp__trace_counts__ProcTraceCountsB_5,
  MR_Word * mdbcomp__trace_counts__ProcTraceCounts_6)
{
  {
    MR_bool mdbcomp__trace_counts__succeeded;

    {
      *mdbcomp__trace_counts__ProcTraceCounts_6 = mercury__map__union_3_f_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0, (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0, (MR_Word) &mdbcomp__trace_counts_scalar_common_1[5], mdbcomp__trace_counts__ProcTraceCountsA_4, mdbcomp__trace_counts__ProcTraceCountsB_5);
    }
  }
}

MR_Integer MR_CALL 
mdbcomp__trace_counts__num_tests_for_file_type_1_f_0(
  MR_Word mdbcomp__trace_counts__HeadVar__1_1)
{
  {
    MR_bool mdbcomp__trace_counts__succeeded;
    MR_Integer mdbcomp__trace_counts__HeadVar__2_2;

    switch (MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        mdbcomp__trace_counts__HeadVar__2_2 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        {
          MR_Word mdbcomp__trace_counts__V_4_4;

          mdbcomp__trace_counts__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__HeadVar__1_1, (MR_Integer) 0)));
          mdbcomp__trace_counts__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__HeadVar__1_1, (MR_Integer) 1)));
        }
        break;
      case (MR_Integer) 2:
        mdbcomp__trace_counts__HeadVar__2_2 = (MR_Integer) -1;
        break;
    }
    return mdbcomp__trace_counts__HeadVar__2_2;
  }
}

MR_Integer MR_CALL 
mdbcomp__trace_counts__calc_num_tests_1_f_0(
  MR_Word mdbcomp__trace_counts__HeadVar__1_1)
{
  {
    MR_bool mdbcomp__trace_counts__succeeded;
    MR_Integer mdbcomp__trace_counts__HeadVar__2_2;

    if ((mdbcomp__trace_counts__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mdbcomp__trace_counts__HeadVar__2_2 = (MR_Integer) 0;
    else
      {
        MR_Word mdbcomp__trace_counts__FileType_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mdbcomp__trace_counts__Rest_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__HeadVar__1_1, (MR_Integer) 1)));
        MR_Integer mdbcomp__trace_counts__V_5_5;
        MR_Integer mdbcomp__trace_counts__V_6_6;

        switch (MR_tag((MR_Word) mdbcomp__trace_counts__FileType_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            mdbcomp__trace_counts__V_5_5 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            {
              MR_Word mdbcomp__trace_counts__V_8_8;

              mdbcomp__trace_counts__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__FileType_3, (MR_Integer) 0)));
              mdbcomp__trace_counts__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__FileType_3, (MR_Integer) 1)));
            }
            break;
          case (MR_Integer) 2:
            mdbcomp__trace_counts__V_5_5 = (MR_Integer) -1;
            break;
        }
        {
          mdbcomp__trace_counts__V_6_6 = mdbcomp__trace_counts__calc_num_tests_1_f_0(mdbcomp__trace_counts__Rest_4);
        }
        mdbcomp__trace_counts__HeadVar__2_2 = (mdbcomp__trace_counts__V_5_5 + mdbcomp__trace_counts__V_6_6);
      }
    return mdbcomp__trace_counts__HeadVar__2_2;
  }
}

static void MR_CALL 
mdbcomp__trace_counts__restrict_trace_counts_to_module_3_p_0_1(
  MR_Box mdbcomp__trace_counts__closure_arg,
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
  MR_Box mdbcomp__trace_counts__wrapper_arg_3,
  MR_Box * mdbcomp__trace_counts__wrapper_arg_4)
{
  {
    MR_Box mdbcomp__trace_counts__closure = mdbcomp__trace_counts__closure_arg;
    MR_Word mdbcomp__trace_counts__conv0_STATE_VARIABLE_TraceCounts_17;

    {
      mdbcomp__trace_counts__restrict_trace_counts_2_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__closure, (MR_Integer) 3))), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_1), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_2), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_3), &mdbcomp__trace_counts__conv0_STATE_VARIABLE_TraceCounts_17);
    }
    *mdbcomp__trace_counts__wrapper_arg_4 = ((MR_Box) (mdbcomp__trace_counts__conv0_STATE_VARIABLE_TraceCounts_17));
  }
}

void MR_CALL 
mdbcomp__trace_counts__restrict_trace_counts_to_module_3_p_0(
  MR_Word mdbcomp__trace_counts__ModuleName_4,
  MR_Word mdbcomp__trace_counts__TraceCounts0_5,
  MR_Word * mdbcomp__trace_counts__TraceCounts_6)
{
  {
    MR_bool mdbcomp__trace_counts__succeeded;
    MR_Word mdbcomp__trace_counts__TypeCtorInfo_13_13;
    MR_Word mdbcomp__trace_counts__TypeInfo_14_14;
    MR_Word mdbcomp__trace_counts__V_7_7;
    MR_Word mdbcomp__trace_counts__V_8_8;
    MR_Box mdbcomp__trace_counts__conv1_TraceCounts_6;

    {
      mdbcomp__trace_counts__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__V_7_7, 0) = ((MR_Box) (&mdbcomp__trace_counts_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__V_7_7, 1) = ((MR_Box) (mdbcomp__trace_counts__restrict_trace_counts_to_module_3_p_0_1));
      MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__V_7_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__V_7_7, 3) = ((MR_Box) (mdbcomp__trace_counts__ModuleName_4));
    }
    mdbcomp__trace_counts__TypeCtorInfo_13_13 = (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0;
    mdbcomp__trace_counts__TypeInfo_14_14 = (MR_Word) &mdbcomp__trace_counts_scalar_common_1[0];
    {
      mdbcomp__trace_counts__V_8_8 = mercury__map__init_0_f_0(mdbcomp__trace_counts__TypeCtorInfo_13_13, mdbcomp__trace_counts__TypeInfo_14_14);
    }
    {
      mercury__map__foldl_4_p_0(mdbcomp__trace_counts__TypeCtorInfo_13_13, mdbcomp__trace_counts__TypeInfo_14_14, (MR_Word) &mdbcomp__trace_counts_scalar_common_1[1], mdbcomp__trace_counts__V_7_7, mdbcomp__trace_counts__TraceCounts0_5, ((MR_Box) (mdbcomp__trace_counts__V_8_8)), &mdbcomp__trace_counts__conv1_TraceCounts_6);
    }
    *mdbcomp__trace_counts__TraceCounts_6 = ((MR_Word) mdbcomp__trace_counts__conv1_TraceCounts_6);
  }
}

void MR_CALL 
mdbcomp__trace_counts__string_to_trace_port_2_p_1(
  MR_String * mdbcomp__trace_counts__HeadVar__1_1,
  MR_Word mdbcomp__trace_counts__HeadVar__2_2)
{
  {
    MR_bool mdbcomp__trace_counts__succeeded;

    *mdbcomp__trace_counts__HeadVar__1_1 = ((&mdbcomp__trace_counts_vector_common_9[0 + mdbcomp__trace_counts__HeadVar__2_2]))->mdbcomp__trace_counts__vector_common_type_9_0__vct_9_f_0;
  }
}

MR_bool MR_CALL 
mdbcomp__trace_counts__string_to_trace_port_2_p_0(
  MR_String mdbcomp__trace_counts__HeadVar__1_1,
  MR_Word * mdbcomp__trace_counts__HeadVar__2_2)
{
  {
    MR_bool mdbcomp__trace_counts__succeeded;

    {
      MR_Integer mdbcomp__trace_counts__case_num_0 = (MR_Integer) -1;

      switch (MR_nth_code_unit(mdbcomp__trace_counts__HeadVar__1_1, 0)) {
        case (MR_Integer) 67:
          switch (MR_nth_code_unit(mdbcomp__trace_counts__HeadVar__1_1, 1)) {
            case (MR_Integer) 65:
              if (MR_offset_streq(2, mdbcomp__trace_counts__HeadVar__1_1, (MR_String) "CALL"))
                mdbcomp__trace_counts__case_num_0 = (MR_Integer) 0;
              break;
            case (MR_Integer) 79:
              if (MR_offset_streq(2, mdbcomp__trace_counts__HeadVar__1_1, (MR_String) "COND"))
                mdbcomp__trace_counts__case_num_0 = (MR_Integer) 1;
              break;
          }
          break;
        case (MR_Integer) 68:
          if (((((MR_nth_code_unit(mdbcomp__trace_counts__HeadVar__1_1, 1)) == (MR_Integer) 83)) && (((MR_nth_code_unit(mdbcomp__trace_counts__HeadVar__1_1, 2)) == (MR_Integer) 74))))
            switch (MR_nth_code_unit(mdbcomp__trace_counts__HeadVar__1_1, 3)) {
              case (MR_Integer) 70:
                if (MR_offset_streq(4, mdbcomp__trace_counts__HeadVar__1_1, (MR_String) "DSJF"))
                  mdbcomp__trace_counts__case_num_0 = (MR_Integer) 2;
                break;
              case (MR_Integer) 76:
                if (MR_offset_streq(4, mdbcomp__trace_counts__HeadVar__1_1, (MR_String) "DSJL"))
                  mdbcomp__trace_counts__case_num_0 = (MR_Integer) 3;
                break;
            }
          break;
        case (MR_Integer) 69:
          switch (MR_nth_code_unit(mdbcomp__trace_counts__HeadVar__1_1, 1)) {
            case (MR_Integer) 76:
              if (MR_offset_streq(2, mdbcomp__trace_counts__HeadVar__1_1, (MR_String) "ELSE"))
                mdbcomp__trace_counts__case_num_0 = (MR_Integer) 4;
              break;
            case (MR_Integer) 88:
              switch (MR_nth_code_unit(mdbcomp__trace_counts__HeadVar__1_1, 2)) {
                case (MR_Integer) 67:
                  if (MR_offset_streq(3, mdbcomp__trace_counts__HeadVar__1_1, (MR_String) "EXCP"))
                    mdbcomp__trace_counts__case_num_0 = (MR_Integer) 5;
                  break;
                case (MR_Integer) 73:
                  if (MR_offset_streq(3, mdbcomp__trace_counts__HeadVar__1_1, (MR_String) "EXIT"))
                    mdbcomp__trace_counts__case_num_0 = (MR_Integer) 6;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 70:
          if (MR_offset_streq(1, mdbcomp__trace_counts__HeadVar__1_1, (MR_String) "FAIL"))
            mdbcomp__trace_counts__case_num_0 = (MR_Integer) 7;
          break;
        case (MR_Integer) 78:
          if (((((MR_nth_code_unit(mdbcomp__trace_counts__HeadVar__1_1, 1)) == (MR_Integer) 69)) && (((MR_nth_code_unit(mdbcomp__trace_counts__HeadVar__1_1, 2)) == (MR_Integer) 71))))
            switch (MR_nth_code_unit(mdbcomp__trace_counts__HeadVar__1_1, 3)) {
              case (MR_Integer) 69:
                if (MR_offset_streq(4, mdbcomp__trace_counts__HeadVar__1_1, (MR_String) "NEGE"))
                  mdbcomp__trace_counts__case_num_0 = (MR_Integer) 8;
                break;
              case (MR_Integer) 70:
                if (MR_offset_streq(4, mdbcomp__trace_counts__HeadVar__1_1, (MR_String) "NEGF"))
                  mdbcomp__trace_counts__case_num_0 = (MR_Integer) 9;
                break;
              case (MR_Integer) 83:
                if (MR_offset_streq(4, mdbcomp__trace_counts__HeadVar__1_1, (MR_String) "NEGS"))
                  mdbcomp__trace_counts__case_num_0 = (MR_Integer) 10;
                break;
            }
          break;
        case (MR_Integer) 82:
          if (MR_offset_streq(1, mdbcomp__trace_counts__HeadVar__1_1, (MR_String) "REDO"))
            mdbcomp__trace_counts__case_num_0 = (MR_Integer) 11;
          break;
        case (MR_Integer) 83:
          if (MR_offset_streq(1, mdbcomp__trace_counts__HeadVar__1_1, (MR_String) "SWTC"))
            mdbcomp__trace_counts__case_num_0 = (MR_Integer) 12;
          break;
        case (MR_Integer) 84:
          switch (MR_nth_code_unit(mdbcomp__trace_counts__HeadVar__1_1, 1)) {
            case (MR_Integer) 65:
              if (MR_offset_streq(2, mdbcomp__trace_counts__HeadVar__1_1, (MR_String) "TAIL"))
                mdbcomp__trace_counts__case_num_0 = (MR_Integer) 13;
              break;
            case (MR_Integer) 72:
              if (MR_offset_streq(2, mdbcomp__trace_counts__HeadVar__1_1, (MR_String) "THEN"))
                mdbcomp__trace_counts__case_num_0 = (MR_Integer) 14;
              break;
          }
          break;
        case (MR_Integer) 85:
          if (MR_offset_streq(1, mdbcomp__trace_counts__HeadVar__1_1, (MR_String) "USER"))
            mdbcomp__trace_counts__case_num_0 = (MR_Integer) 15;
          break;
      }
      if ((mdbcomp__trace_counts__case_num_0 < (MR_Integer) 0))
        mdbcomp__trace_counts__succeeded = MR_FALSE;
      else
        {
          /* we found a match; look up the results */
          *mdbcomp__trace_counts__HeadVar__2_2 = ((&mdbcomp__trace_counts_vector_common_8[0 + mdbcomp__trace_counts__case_num_0]))->mdbcomp__trace_counts__vector_common_type_8_0__vct_8_f_0;
          mdbcomp__trace_counts__succeeded = MR_TRUE;
        }
    }
    return mdbcomp__trace_counts__succeeded;
  }
}

void MR_CALL 
mdbcomp__trace_counts__write_proc_label_3_p_0(
  MR_Word mdbcomp__trace_counts__ProcLabel_4)
{
  {
    MR_bool mdbcomp__trace_counts__succeeded;

    if (((MR_tag((MR_Word) mdbcomp__trace_counts__ProcLabel_4)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word mdbcomp__trace_counts__DefModuleSym_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_4, (MR_Integer) 0)));
        MR_Word mdbcomp__trace_counts__PredOrFunc_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_4, (MR_Integer) 1)));
        MR_Word mdbcomp__trace_counts__DeclModuleSym_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_4, (MR_Integer) 2)));
        MR_String mdbcomp__trace_counts__Name_9 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_4, (MR_Integer) 3)));
        MR_Integer mdbcomp__trace_counts__Arity_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_4, (MR_Integer) 4)));
        MR_Integer mdbcomp__trace_counts__Mode_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_4, (MR_Integer) 5)));

        switch (mdbcomp__trace_counts__PredOrFunc_7) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              {
                mdbcomp__trace_counts__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(mdbcomp__trace_counts__DeclModuleSym_8, mdbcomp__trace_counts__DefModuleSym_6);
              }
              if (mdbcomp__trace_counts__succeeded)
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "fproc ");
                  }
                }
              else
                {
                  MR_String mdbcomp__trace_counts__DeclModule_44;

                  {
                    mdbcomp__trace_counts__DeclModule_44 = mdbcomp__sym_name__sym_name_to_string_1_f_0(mdbcomp__trace_counts__DeclModuleSym_8);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) "fprocdecl ");
                  }
                  {
                    mercury__term_io__quote_atom_3_p_0(mdbcomp__trace_counts__DeclModule_44);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                }
            }
            break;
          case (MR_Integer) 0:
            {
              {
                mdbcomp__trace_counts__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(mdbcomp__trace_counts__DeclModuleSym_8, mdbcomp__trace_counts__DefModuleSym_6);
              }
              if (mdbcomp__trace_counts__succeeded)
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "pproc ");
                  }
                }
              else
                {
                  MR_String mdbcomp__trace_counts__DeclModule_12;

                  {
                    mdbcomp__trace_counts__DeclModule_12 = mdbcomp__sym_name__sym_name_to_string_1_f_0(mdbcomp__trace_counts__DeclModuleSym_8);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) "pprocdecl ");
                  }
                  {
                    mercury__term_io__quote_atom_3_p_0(mdbcomp__trace_counts__DeclModule_12);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                }
            }
            break;
        }
        {
          mercury__term_io__quote_atom_3_p_0(mdbcomp__trace_counts__Name_9);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) " ");
        }
        {
          mercury__io__write_int_3_p_0(mdbcomp__trace_counts__Arity_10);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) " ");
        }
        {
          mercury__io__write_int_3_p_0(mdbcomp__trace_counts__Mode_11);
        }
        {
          mercury__io__nl_2_p_0();
        }
      }
    else
      {
        {
          mercury__require__error_1_p_0((MR_String) "write_proc_label: special_pred");
          return;
        }
      }
  }
}

static void MR_CALL 
mdbcomp__trace_counts__write_trace_counts_to_file_6_p_0_1(
  MR_Box mdbcomp__trace_counts__closure_arg,
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
  MR_Box mdbcomp__trace_counts__wrapper_arg_3,
  MR_Box * mdbcomp__trace_counts__wrapper_arg_4,
  MR_Box mdbcomp__trace_counts__wrapper_arg_5,
  MR_Box * mdbcomp__trace_counts__wrapper_arg_6,
  MR_Box mdbcomp__trace_counts__wrapper_arg_7,
  MR_Box * mdbcomp__trace_counts__wrapper_arg_8)
{
  {
    MR_Box mdbcomp__trace_counts__closure = mdbcomp__trace_counts__closure_arg;
    MR_Word mdbcomp__trace_counts__conv1_STATE_VARIABLE_CurModuleNameSym_19;
    MR_String mdbcomp__trace_counts__conv0_STATE_VARIABLE_CurFileName_21;

    {
      mdbcomp__trace_counts__write_proc_label_and_file_trace_counts_8_p_0(((MR_Word) mdbcomp__trace_counts__wrapper_arg_1), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_2), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_3), &mdbcomp__trace_counts__conv1_STATE_VARIABLE_CurModuleNameSym_19, ((MR_String) mdbcomp__trace_counts__wrapper_arg_5), &mdbcomp__trace_counts__conv0_STATE_VARIABLE_CurFileName_21);
    }
    *mdbcomp__trace_counts__wrapper_arg_4 = ((MR_Box) (mdbcomp__trace_counts__conv1_STATE_VARIABLE_CurModuleNameSym_19));
    *mdbcomp__trace_counts__wrapper_arg_6 = ((MR_Box) (mdbcomp__trace_counts__conv0_STATE_VARIABLE_CurFileName_21));
  }
}

void MR_CALL 
mdbcomp__trace_counts__write_trace_counts_to_file_6_p_0(
  MR_Word mdbcomp__trace_counts__FileType_7,
  MR_Word mdbcomp__trace_counts__TraceCounts_8,
  MR_String mdbcomp__trace_counts__FileName_9,
  MR_Word * mdbcomp__trace_counts__Result_10)
{
  {
    MR_bool mdbcomp__trace_counts__succeeded;
    MR_Word mdbcomp__trace_counts__TellResult_12;

    {
      mercury__io__tell_4_p_0(mdbcomp__trace_counts__FileName_9, &mdbcomp__trace_counts__TellResult_12);
    }
    if ((mdbcomp__trace_counts__TellResult_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word mdbcomp__trace_counts__V_27_27;
        MR_String mdbcomp__trace_counts__V_28_28;
        MR_Box mdbcomp__trace_counts__conv4_V_27_27;
        MR_Box mdbcomp__trace_counts__conv3_V_28_28;
        MR_Box mdbcomp__trace_counts__conv2_STATE_VARIABLE_IO_20_20;

        *mdbcomp__trace_counts__Result_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          mercury__io__write_string_3_p_0((MR_String) "Mercury trace counts file");
        }
        {
          mercury__io__nl_2_p_0();
        }
        {
          mercury__io__write_3_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0, ((MR_Box) (mdbcomp__trace_counts__FileType_7)));
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ".");
        }
        {
          mercury__io__nl_2_p_0();
        }
        {
          mercury__map__foldl3_8_p_2((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0, (MR_Word) &mdbcomp__trace_counts_scalar_common_1[0], (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &mdbcomp__trace_counts_scalar_common_1[4], mdbcomp__trace_counts__TraceCounts_8, ((MR_Box) (&mdbcomp__trace_counts_scalar_common_3[8])), &mdbcomp__trace_counts__conv4_V_27_27, ((MR_Box) ((MR_String) "")), &mdbcomp__trace_counts__conv3_V_28_28, ((MR_Box) ((MR_Integer) 0)), &mdbcomp__trace_counts__conv2_STATE_VARIABLE_IO_20_20);
        }
        mdbcomp__trace_counts__V_27_27 = ((MR_Word) mdbcomp__trace_counts__conv4_V_27_27);
        mdbcomp__trace_counts__V_28_28 = ((MR_String) mdbcomp__trace_counts__conv3_V_28_28);
        {
          mercury__io__told_2_p_0();
        }
      }
    else
      *mdbcomp__trace_counts__Result_10 = mdbcomp__trace_counts__TellResult_12;
  }
}

void MR_CALL 
mdbcomp__trace_counts__read_and_union_trace_counts_8_p_0(
  MR_Word mdbcomp__trace_counts__ShowProgress_9,
  MR_Word mdbcomp__trace_counts__Files_10,
  MR_Integer * mdbcomp__trace_counts__NumTests_11,
  MR_Word * mdbcomp__trace_counts__TestKinds_12,
  MR_Word * mdbcomp__trace_counts__TraceCounts_13,
  MR_Word * mdbcomp__trace_counts__MaybeError_14)
{
  {
    MR_bool mdbcomp__trace_counts__succeeded;
    MR_Word mdbcomp__trace_counts__FileType_16;
    MR_Word mdbcomp__trace_counts__V_24_24;

    {
      mdbcomp__trace_counts__V_24_24 = mercury__map__init_0_f_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0, (MR_Word) &mdbcomp__trace_counts_scalar_common_1[0]);
    }
    {
      mdbcomp__trace_counts__read_and_union_trace_counts_2_9_p_0(mdbcomp__trace_counts__ShowProgress_9, mdbcomp__trace_counts__Files_10, (MR_Word) MR_mkword(MR_mktag(1), &mdbcomp__trace_counts_scalar_common_2[1]), &mdbcomp__trace_counts__FileType_16, mdbcomp__trace_counts__V_24_24, mdbcomp__trace_counts__TraceCounts_13, mdbcomp__trace_counts__MaybeError_14);
    }
    switch (MR_tag((MR_Word) mdbcomp__trace_counts__FileType_16)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__require__error_1_p_0((MR_String) "read_and_union_trace_counts: single_file");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word mdbcomp__trace_counts__TestKindList_17;

          *mdbcomp__trace_counts__NumTests_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__FileType_16, (MR_Integer) 0)));
          mdbcomp__trace_counts__TestKindList_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__FileType_16, (MR_Integer) 1)));
          {
            mercury__set__list_to_set_2_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0, mdbcomp__trace_counts__TestKindList_17, mdbcomp__trace_counts__TestKinds_12);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__require__error_1_p_0((MR_String) "read_and_union_trace_counts: diff_file");
            return;
          }
        }
        break;
    }
  }
}

void MR_CALL 
mdbcomp__trace_counts__read_trace_counts_source_4_p_0(
  MR_String mdbcomp__trace_counts__FileName_5,
  MR_Word * mdbcomp__trace_counts__Result_6)
{
  {
    MR_bool mdbcomp__trace_counts__succeeded;
    MR_Word mdbcomp__trace_counts__ReadTCResult_8;

    {
      mdbcomp__trace_counts__read_trace_counts_4_p_0(mdbcomp__trace_counts__FileName_5, &mdbcomp__trace_counts__ReadTCResult_8);
    }
    switch (MR_tag((MR_Word) mdbcomp__trace_counts__ReadTCResult_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word mdbcomp__trace_counts__FileType_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ReadTCResult_8, (MR_Integer) 0)));
          MR_Word mdbcomp__trace_counts__TraceCount_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ReadTCResult_8, (MR_Integer) 1)));

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            *mdbcomp__trace_counts__Result_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdbcomp__trace_counts__FileType_9));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdbcomp__trace_counts__TraceCount_10));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String mdbcomp__trace_counts__V_23_23;
          MR_String mdbcomp__trace_counts__V_25_25;
          MR_String mdbcomp__trace_counts__V_26_26;
          MR_String mdbcomp__trace_counts__ErrMsg_44 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__ReadTCResult_8, (MR_Integer) 0)));

          {
            mdbcomp__trace_counts__V_26_26 = mercury__string__f_43_43_2_f_0((MR_String) "\': ", mdbcomp__trace_counts__ErrMsg_44);
          }
          {
            mdbcomp__trace_counts__V_25_25 = mercury__string__f_43_43_2_f_0(mdbcomp__trace_counts__FileName_5, mdbcomp__trace_counts__V_26_26);
          }
          {
            mdbcomp__trace_counts__V_23_23 = mercury__string__f_43_43_2_f_0((MR_String) "Syntax error in file \140", mdbcomp__trace_counts__V_25_25);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *mdbcomp__trace_counts__Result_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__trace_counts__V_23_23));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String mdbcomp__trace_counts__V_16_16;
          MR_String mdbcomp__trace_counts__V_18_18;
          MR_String mdbcomp__trace_counts__V_20_20;
          MR_String mdbcomp__trace_counts__V_21_21;
          MR_String mdbcomp__trace_counts__ErrMsg_45 = ((MR_String) (MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__ReadTCResult_8, (MR_Integer) 0)));

          {
            mdbcomp__trace_counts__V_21_21 = mercury__string__f_43_43_2_f_0((MR_String) "\': ", mdbcomp__trace_counts__ErrMsg_45);
          }
          {
            mdbcomp__trace_counts__V_20_20 = mercury__string__f_43_43_2_f_0(mdbcomp__trace_counts__FileName_5, mdbcomp__trace_counts__V_21_21);
          }
          {
            mdbcomp__trace_counts__V_18_18 = mercury__string__f_43_43_2_f_0((MR_String) "from file \140", mdbcomp__trace_counts__V_20_20);
          }
          {
            mdbcomp__trace_counts__V_16_16 = mercury__string__f_43_43_2_f_0((MR_String) "Error reading trace counts ", mdbcomp__trace_counts__V_18_18);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *mdbcomp__trace_counts__Result_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__trace_counts__V_16_16));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__ReadTCResult_8, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String mdbcomp__trace_counts__V_28_28;
              MR_String mdbcomp__trace_counts__V_30_30;
              MR_String mdbcomp__trace_counts__V_32_32;
              MR_String mdbcomp__trace_counts__V_33_33;
              MR_Word mdbcomp__trace_counts__IOError_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__ReadTCResult_8, (MR_Integer) 1)));
              MR_String mdbcomp__trace_counts__ErrMsg_43;

              {
                mdbcomp__trace_counts__ErrMsg_43 = mercury__io__error_message_1_f_0(mdbcomp__trace_counts__IOError_42);
              }
              {
                mdbcomp__trace_counts__V_33_33 = mercury__string__f_43_43_2_f_0((MR_String) "\': ", mdbcomp__trace_counts__ErrMsg_43);
              }
              {
                mdbcomp__trace_counts__V_32_32 = mercury__string__f_43_43_2_f_0(mdbcomp__trace_counts__FileName_5, mdbcomp__trace_counts__V_33_33);
              }
              {
                mdbcomp__trace_counts__V_30_30 = mercury__string__f_43_43_2_f_0((MR_String) "\140", mdbcomp__trace_counts__V_32_32);
              }
              {
                mdbcomp__trace_counts__V_28_28 = mercury__string__f_43_43_2_f_0((MR_String) "I/O error opening file ", mdbcomp__trace_counts__V_30_30);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *mdbcomp__trace_counts__Result_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__trace_counts__V_28_28));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word mdbcomp__trace_counts__IOError_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__ReadTCResult_8, (MR_Integer) 1)));
              MR_String mdbcomp__trace_counts__ErrMsg_12;
              MR_String mdbcomp__trace_counts__V_35_35;
              MR_String mdbcomp__trace_counts__V_37_37;
              MR_String mdbcomp__trace_counts__V_39_39;
              MR_String mdbcomp__trace_counts__V_40_40;

              {
                mdbcomp__trace_counts__ErrMsg_12 = mercury__io__error_message_1_f_0(mdbcomp__trace_counts__IOError_11);
              }
              {
                mdbcomp__trace_counts__V_40_40 = mercury__string__f_43_43_2_f_0((MR_String) "\': ", mdbcomp__trace_counts__ErrMsg_12);
              }
              {
                mdbcomp__trace_counts__V_39_39 = mercury__string__f_43_43_2_f_0(mdbcomp__trace_counts__FileName_5, mdbcomp__trace_counts__V_40_40);
              }
              {
                mdbcomp__trace_counts__V_37_37 = mercury__string__f_43_43_2_f_0((MR_String) "\140", mdbcomp__trace_counts__V_39_39);
              }
              {
                mdbcomp__trace_counts__V_35_35 = mercury__string__f_43_43_2_f_0((MR_String) "I/O error reading file ", mdbcomp__trace_counts__V_37_37);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *mdbcomp__trace_counts__Result_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__trace_counts__V_35_35));
              }
            }
            break;
        }
        break;
    }
  }
}

void MR_CALL 
mdbcomp__trace_counts__read_trace_counts_list_5_p_0(
  MR_Word mdbcomp__trace_counts__ShowProgress_6,
  MR_String mdbcomp__trace_counts__FileName_7,
  MR_Word * mdbcomp__trace_counts__Result_8)
{
  {
    MR_bool mdbcomp__trace_counts__succeeded;
    MR_Word mdbcomp__trace_counts__OpenResult_10;

    {
      mercury__io__open_input_4_p_0(mdbcomp__trace_counts__FileName_7, &mdbcomp__trace_counts__OpenResult_10);
    }
    if (((MR_tag((MR_Word) mdbcomp__trace_counts__OpenResult_10)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word mdbcomp__trace_counts__IOError_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__OpenResult_10, (MR_Integer) 0)));
        MR_String mdbcomp__trace_counts__V_16_16;
        MR_String mdbcomp__trace_counts__V_18_18;
        MR_String mdbcomp__trace_counts__V_19_19;
        MR_String mdbcomp__trace_counts__V_21_21;

        {
          mdbcomp__trace_counts__V_21_21 = mercury__string__string_1_f_0((MR_Word) &mercury__io__io__type_ctor_info_error_0, ((MR_Box) (mdbcomp__trace_counts__IOError_12)));
        }
        {
          mdbcomp__trace_counts__V_19_19 = mercury__string__f_43_43_2_f_0((MR_String) "\': ", mdbcomp__trace_counts__V_21_21);
        }
        {
          mdbcomp__trace_counts__V_18_18 = mercury__string__f_43_43_2_f_0(mdbcomp__trace_counts__FileName_7, mdbcomp__trace_counts__V_19_19);
        }
        {
          mdbcomp__trace_counts__V_16_16 = mercury__string__f_43_43_2_f_0((MR_String) "Error opening file \140", mdbcomp__trace_counts__V_18_18);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *mdbcomp__trace_counts__Result_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__trace_counts__V_16_16));
        }
      }
    else
      {
        MR_Word mdbcomp__trace_counts__FileStream_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__OpenResult_10, (MR_Integer) 0)));
        MR_Word mdbcomp__trace_counts__V_23_23;

        {
          mdbcomp__trace_counts__V_23_23 = mercury__map__init_0_f_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0, (MR_Word) &mdbcomp__trace_counts_scalar_common_1[0]);
        }
        {
          mdbcomp__trace_counts__read_trace_counts_list_stream_8_p_0(mdbcomp__trace_counts__ShowProgress_6, (MR_Word) MR_mkword(MR_mktag(1), &mdbcomp__trace_counts_scalar_common_2[1]), mdbcomp__trace_counts__V_23_23, mdbcomp__trace_counts__FileName_7, mdbcomp__trace_counts__FileStream_11, mdbcomp__trace_counts__Result_8);
        }
      }
  }
}

static void MR_CALL 
mdbcomp__trace_counts__read_trace_counts_4_p_0_1(
  MR_Box mdbcomp__trace_counts__closure_arg,
  MR_Box * mdbcomp__trace_counts__wrapper_arg_1,
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
  MR_Box * mdbcomp__trace_counts__wrapper_arg_3)
{
  {
    MR_Box mdbcomp__trace_counts__closure = mdbcomp__trace_counts__closure_arg;
    MR_Word mdbcomp__trace_counts__conv0_STATE_VARIABLE_TraceCounts_14;

    {
      mdbcomp__trace_counts__read_trace_counts_setup_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__closure, (MR_Integer) 3))), &mdbcomp__trace_counts__conv0_STATE_VARIABLE_TraceCounts_14);
    }
    *mdbcomp__trace_counts__wrapper_arg_1 = ((MR_Box) (mdbcomp__trace_counts__conv0_STATE_VARIABLE_TraceCounts_14));
  }
}

void MR_CALL 
mdbcomp__trace_counts__read_trace_counts_4_p_0(
  MR_String mdbcomp__trace_counts__FileName_5,
  MR_Word * mdbcomp__trace_counts__ReadResult_6)
{
  {
    MR_bool mdbcomp__trace_counts__succeeded;
    MR_String mdbcomp__trace_counts__ActualFileName_10;
    MR_String mdbcomp__trace_counts__GzipCmd_11;
    MR_Word mdbcomp__trace_counts__Result_12;
    MR_String mdbcomp__trace_counts__BaseName_8;

    {
      mdbcomp__trace_counts__succeeded = mercury__string__remove_suffix_3_p_0(mdbcomp__trace_counts__FileName_5, (MR_String) ".gz", &mdbcomp__trace_counts__BaseName_8);
    }
    if (mdbcomp__trace_counts__succeeded)
      {
        MR_String mdbcomp__trace_counts__V_23_23;
        MR_Word mdbcomp__trace_counts___UnzipResult_9;

        {
          mdbcomp__trace_counts__V_23_23 = mercury__string__f_43_43_2_f_0((MR_String) "gunzip ", mdbcomp__trace_counts__FileName_5);
        }
        {
          mercury__io__call_system_4_p_0(mdbcomp__trace_counts__V_23_23, &mdbcomp__trace_counts___UnzipResult_9);
        }
        mdbcomp__trace_counts__ActualFileName_10 = mdbcomp__trace_counts__BaseName_8;
        {
          mdbcomp__trace_counts__GzipCmd_11 = mercury__string__f_43_43_2_f_0((MR_String) "gzip ", mdbcomp__trace_counts__BaseName_8);
        }
      }
    else
      {
        mdbcomp__trace_counts__ActualFileName_10 = mdbcomp__trace_counts__FileName_5;
        mdbcomp__trace_counts__GzipCmd_11 = (MR_String) "";
      }
    {
      mercury__io__open_input_4_p_0(mdbcomp__trace_counts__ActualFileName_10, &mdbcomp__trace_counts__Result_12);
    }
    if (((MR_tag((MR_Word) mdbcomp__trace_counts__Result_12)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word mdbcomp__trace_counts__IOError_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__Result_12, (MR_Integer) 0)));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *mdbcomp__trace_counts__ReadResult_6 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdbcomp__trace_counts__IOError_18));
        }
      }
    else
      {
        MR_Word mdbcomp__trace_counts__FileStream_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__Result_12, (MR_Integer) 0)));
        MR_Word mdbcomp__trace_counts__OldInputStream_14;
        MR_Word mdbcomp__trace_counts__IdReadResult_15;
        MR_String mdbcomp__trace_counts__FirstLine_16;
        MR_String mdbcomp__trace_counts__V_30_30;
        MR_String mdbcomp__trace_counts__V_77_77;
        MR_Word mdbcomp__trace_counts__V_17_17;

        {
          mercury__io__set_input_stream_4_p_0(mdbcomp__trace_counts__FileStream_13, &mdbcomp__trace_counts__OldInputStream_14);
        }
        {
          mercury__io__read_line_as_string_3_p_0(&mdbcomp__trace_counts__IdReadResult_15);
        }
        mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__IdReadResult_15)) == (MR_mktag((MR_Integer) 1)));
        if (mdbcomp__trace_counts__succeeded)
          {
            mdbcomp__trace_counts__FirstLine_16 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__IdReadResult_15, (MR_Integer) 0)));
            {
              mdbcomp__trace_counts__V_30_30 = mercury__string__rstrip_1_f_0(mdbcomp__trace_counts__FirstLine_16);
            }
            mdbcomp__trace_counts__V_77_77 = (MR_String) "Mercury trace counts file";
            mdbcomp__trace_counts__succeeded = (strcmp(mdbcomp__trace_counts__V_30_30, mdbcomp__trace_counts__V_77_77) == 0);
          }
        if (mdbcomp__trace_counts__succeeded)
          {
            MR_Word mdbcomp__trace_counts__FileTypeResult_41;

            {
              mercury__io__read_3_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0, &mdbcomp__trace_counts__FileTypeResult_41);
            }
            switch (MR_tag((MR_Word) mdbcomp__trace_counts__FileTypeResult_41)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  *mdbcomp__trace_counts__ReadResult_6 = (MR_Word) MR_mkword(MR_mktag(1), &mdbcomp__trace_counts_scalar_common_3[6]);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word mdbcomp__trace_counts__FileType_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__FileTypeResult_41, (MR_Integer) 0)));
                  MR_Word mdbcomp__trace_counts__NewlineResult_43;
                  MR_String mdbcomp__trace_counts__V_55_55;

                  {
                    mercury__io__read_line_as_string_3_p_0(&mdbcomp__trace_counts__NewlineResult_43);
                  }
                  mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__NewlineResult_43)) == (MR_mktag((MR_Integer) 1)));
                  if (mdbcomp__trace_counts__succeeded)
                    {
                      mdbcomp__trace_counts__V_55_55 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__NewlineResult_43, (MR_Integer) 0)));
                      mdbcomp__trace_counts__succeeded = (strcmp(mdbcomp__trace_counts__V_55_55, (MR_String) "\n") == 0);
                    }
                  if (mdbcomp__trace_counts__succeeded)
                    {
                      MR_Word mdbcomp__trace_counts__Result_44;
                      MR_Word mdbcomp__trace_counts__V_56_56;
                      MR_Word mdbcomp__trace_counts__V_58_58;

                      {
                        mdbcomp__trace_counts__V_58_58 = mercury__map__init_0_f_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0, (MR_Word) &mdbcomp__trace_counts_scalar_common_1[0]);
                      }
                      {
                        mdbcomp__trace_counts__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__V_56_56, 0) = ((MR_Box) (&mdbcomp__trace_counts_scalar_common_6[0]));
                        MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__V_56_56, 1) = ((MR_Box) (mdbcomp__trace_counts__read_trace_counts_4_p_0_1));
                        MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__V_56_56, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                        MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__V_56_56, 3) = ((MR_Box) (mdbcomp__trace_counts__V_58_58));
                      }
                      {
                        mercury__exception__try_io_4_p_0((MR_Word) &mdbcomp__trace_counts_scalar_common_1[1], mdbcomp__trace_counts__V_56_56, &mdbcomp__trace_counts__Result_44);
                      }
                      if (((MR_tag((MR_Word) mdbcomp__trace_counts__Result_44)) == (MR_mktag((MR_Integer) 2))))
                        {
                          MR_Word mdbcomp__trace_counts__Exception_46 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__Result_44, (MR_Integer) 0)));
                          MR_Word mdbcomp__trace_counts__IOError_47;
                          MR_Box mdbcomp__trace_counts__conv1_IOError_47;

                          {
                            mdbcomp__trace_counts__succeeded = mercury__univ__univ_1_f_2((MR_Word) &mercury__io__io__type_ctor_info_error_0, &mdbcomp__trace_counts__conv1_IOError_47, mdbcomp__trace_counts__Exception_46);
                          }
                          if (mdbcomp__trace_counts__succeeded)
                            {
                              mdbcomp__trace_counts__IOError_47 = ((MR_Word) mdbcomp__trace_counts__conv1_IOError_47);
                              mdbcomp__trace_counts__succeeded = MR_TRUE;
                            }
                          if (mdbcomp__trace_counts__succeeded)
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              *mdbcomp__trace_counts__ReadResult_6 = base;
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdbcomp__trace_counts__IOError_47));
                            }
                          else
                            {
                              MR_String mdbcomp__trace_counts__Message_48;
                              MR_Box mdbcomp__trace_counts__conv2_Message_48;

                              {
                                mdbcomp__trace_counts__succeeded = mercury__univ__univ_1_f_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, &mdbcomp__trace_counts__conv2_Message_48, mdbcomp__trace_counts__Exception_46);
                              }
                              if (mdbcomp__trace_counts__succeeded)
                                {
                                  mdbcomp__trace_counts__Message_48 = ((MR_String) mdbcomp__trace_counts__conv2_Message_48);
                                  mdbcomp__trace_counts__succeeded = MR_TRUE;
                                }
                              if (mdbcomp__trace_counts__succeeded)
                                {
                                  MR_Word base;
                                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                  *mdbcomp__trace_counts__ReadResult_6 = base;
                                  MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mdbcomp__trace_counts__Message_48));
                                }
                              else
                                {
                                  MR_String mdbcomp__trace_counts__Error_49;
                                  MR_Word mdbcomp__trace_counts__V_59_59;
                                  MR_Box mdbcomp__trace_counts__conv3_V_59_59;

                                  {
                                    mdbcomp__trace_counts__succeeded = mercury__univ__univ_1_f_2((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_syntax_error_0, &mdbcomp__trace_counts__conv3_V_59_59, mdbcomp__trace_counts__Exception_46);
                                  }
                                  if (mdbcomp__trace_counts__succeeded)
                                    {
                                      mdbcomp__trace_counts__V_59_59 = ((MR_Word) mdbcomp__trace_counts__conv3_V_59_59);
                                      mdbcomp__trace_counts__succeeded = MR_TRUE;
                                    }
                                  if (mdbcomp__trace_counts__succeeded)
                                    {
                                      mdbcomp__trace_counts__Error_49 = (MR_String) mdbcomp__trace_counts__V_59_59;
                                      mdbcomp__trace_counts__succeeded = MR_TRUE;
                                    }
                                  if (mdbcomp__trace_counts__succeeded)
                                    {
                                      MR_Word base;
                                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                      *mdbcomp__trace_counts__ReadResult_6 = base;
                                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__trace_counts__Error_49));
                                    }
                                  else
                                    {
                                      MR_String mdbcomp__trace_counts__V_62_62;
                                      MR_String mdbcomp__trace_counts__V_64_64;

                                      {
                                        mdbcomp__trace_counts__V_64_64 = mercury__string__string_1_f_0((MR_Word) &mercury__univ__univ__type_ctor_info_univ_0, ((MR_Box) (mdbcomp__trace_counts__Exception_46)));
                                      }
                                      {
                                        mdbcomp__trace_counts__V_62_62 = mercury__string__f_43_43_2_f_0((MR_String) "unexpected exception type: ", mdbcomp__trace_counts__V_64_64);
                                      }
                                      {
                                        mercury__require__unexpected_3_p_0((MR_String) "mdbcomp.trace_counts", (MR_String) "predicate \140mdbcomp.trace_counts.read_trace_counts_from_cur_stream\'/3", mdbcomp__trace_counts__V_62_62);
                                        return;
                                      }
                                    }
                                }
                            }
                        }
                      else
                        {
                          MR_Word mdbcomp__trace_counts__TraceCounts_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__Result_44, (MR_Integer) 0)));

                          {
                            MR_Word base;
                            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                            *mdbcomp__trace_counts__ReadResult_6 = base;
                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdbcomp__trace_counts__FileType_42));
                            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdbcomp__trace_counts__TraceCounts_45));
                          }
                        }
                    }
                  else
                    {
                      *mdbcomp__trace_counts__ReadResult_6 = (MR_Word) MR_mkword(MR_mktag(1), &mdbcomp__trace_counts_scalar_common_3[6]);
                    }
                }
                break;
              case (MR_Integer) 2:
                {
                  *mdbcomp__trace_counts__ReadResult_6 = (MR_Word) MR_mkword(MR_mktag(1), &mdbcomp__trace_counts_scalar_common_3[6]);
                }
                break;
            }
          }
        else
          {
            *mdbcomp__trace_counts__ReadResult_6 = (MR_Word) MR_mkword(MR_mktag(1), &mdbcomp__trace_counts_scalar_common_3[7]);
          }
        {
          mercury__io__set_input_stream_4_p_0(mdbcomp__trace_counts__OldInputStream_14, &mdbcomp__trace_counts__V_17_17);
        }
        {
          mercury__io__close_input_3_p_0(mdbcomp__trace_counts__FileStream_13);
        }
      }
    mdbcomp__trace_counts__succeeded = (strcmp(mdbcomp__trace_counts__GzipCmd_11, (MR_String) "") == 0);
    if (mdbcomp__trace_counts__succeeded)
      {
      }
    else
      {
        MR_Word mdbcomp__trace_counts___ZipResult_19;

        {
          mercury__io__call_system_4_p_0(mdbcomp__trace_counts__GzipCmd_11, &mdbcomp__trace_counts___ZipResult_19);
        }
      }
  }
}

static void MR_CALL 
mdbcomp__trace_counts__diff_trace_counts_3_p_0_1(
  MR_Box mdbcomp__trace_counts__closure_arg,
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
  MR_Box mdbcomp__trace_counts__wrapper_arg_3,
  MR_Box * mdbcomp__trace_counts__wrapper_arg_4)
{
  {
    MR_Box mdbcomp__trace_counts__closure = mdbcomp__trace_counts__closure_arg;
    MR_Word mdbcomp__trace_counts__conv0_STATE_VARIABLE_TraceCounts_13;

    {
      mdbcomp__trace_counts__diff_trace_counts_acc_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__closure, (MR_Integer) 3))), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_1), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_2), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_3), &mdbcomp__trace_counts__conv0_STATE_VARIABLE_TraceCounts_13);
    }
    *mdbcomp__trace_counts__wrapper_arg_4 = ((MR_Box) (mdbcomp__trace_counts__conv0_STATE_VARIABLE_TraceCounts_13));
  }
}

void MR_CALL 
mdbcomp__trace_counts__diff_trace_counts_3_p_0(
  MR_Word mdbcomp__trace_counts__TraceCountsA_4,
  MR_Word mdbcomp__trace_counts__TraceCountsB_5,
  MR_Word * mdbcomp__trace_counts__TraceCounts_6)
{
  {
    MR_bool mdbcomp__trace_counts__succeeded;
    MR_Word mdbcomp__trace_counts__TypeCtorInfo_13_13;
    MR_Word mdbcomp__trace_counts__TypeInfo_14_14;
    MR_Word mdbcomp__trace_counts__V_7_7;
    MR_Word mdbcomp__trace_counts__V_8_8;
    MR_Box mdbcomp__trace_counts__conv1_TraceCounts_6;

    {
      mdbcomp__trace_counts__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__V_7_7, 0) = ((MR_Box) (&mdbcomp__trace_counts_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__V_7_7, 1) = ((MR_Box) (mdbcomp__trace_counts__diff_trace_counts_3_p_0_1));
      MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__V_7_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__V_7_7, 3) = ((MR_Box) (mdbcomp__trace_counts__TraceCountsB_5));
    }
    mdbcomp__trace_counts__TypeCtorInfo_13_13 = (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0;
    mdbcomp__trace_counts__TypeInfo_14_14 = (MR_Word) &mdbcomp__trace_counts_scalar_common_1[0];
    {
      mdbcomp__trace_counts__V_8_8 = mercury__map__init_0_f_0(mdbcomp__trace_counts__TypeCtorInfo_13_13, mdbcomp__trace_counts__TypeInfo_14_14);
    }
    {
      mercury__map__foldl_4_p_0(mdbcomp__trace_counts__TypeCtorInfo_13_13, mdbcomp__trace_counts__TypeInfo_14_14, (MR_Word) &mdbcomp__trace_counts_scalar_common_1[1], mdbcomp__trace_counts__V_7_7, mdbcomp__trace_counts__TraceCountsA_4, ((MR_Box) (mdbcomp__trace_counts__V_8_8)), &mdbcomp__trace_counts__conv1_TraceCounts_6);
    }
    *mdbcomp__trace_counts__TraceCounts_6 = ((MR_Word) mdbcomp__trace_counts__conv1_TraceCounts_6);
  }
}

static void MR_CALL 
mdbcomp__trace_counts__sum_trace_counts_3_p_0_1(
  MR_Box mdbcomp__trace_counts__closure_arg,
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
  MR_Box * mdbcomp__trace_counts__wrapper_arg_3)
{
  {
    MR_Box mdbcomp__trace_counts__closure = mdbcomp__trace_counts__closure_arg;
    MR_Word mdbcomp__trace_counts__conv0_ProcTraceCounts_6;

    {
      mdbcomp__trace_counts__sum_proc_trace_counts_3_p_0(((MR_Word) mdbcomp__trace_counts__wrapper_arg_1), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_2), &mdbcomp__trace_counts__conv0_ProcTraceCounts_6);
    }
    *mdbcomp__trace_counts__wrapper_arg_3 = ((MR_Box) (mdbcomp__trace_counts__conv0_ProcTraceCounts_6));
  }
}

void MR_CALL 
mdbcomp__trace_counts__sum_trace_counts_3_p_0(
  MR_Word mdbcomp__trace_counts__TraceCountsA_4,
  MR_Word mdbcomp__trace_counts__TraceCountsB_5,
  MR_Word * mdbcomp__trace_counts__TraceCounts_6)
{
  {
    MR_bool mdbcomp__trace_counts__succeeded;

    {
      mercury__map__union_4_p_1((MR_Word) &mdbcomp__trace_counts_scalar_common_1[0], (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0, (MR_Word) &mdbcomp__trace_counts_scalar_common_1[3], mdbcomp__trace_counts__TraceCountsA_4, mdbcomp__trace_counts__TraceCountsB_5, mdbcomp__trace_counts__TraceCounts_6);
    }
  }
}

static void MR_CALL 
mdbcomp__trace_counts__summarize_trace_counts_list_2_p_0_1(
  MR_Box mdbcomp__trace_counts__closure_arg,
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
  MR_Box * mdbcomp__trace_counts__wrapper_arg_3)
{
  {
    MR_Box mdbcomp__trace_counts__closure = mdbcomp__trace_counts__closure_arg;
    MR_Word mdbcomp__trace_counts__conv0_TraceCounts_6;

    {
      mdbcomp__trace_counts__sum_trace_counts_3_p_0(((MR_Word) mdbcomp__trace_counts__wrapper_arg_1), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_2), &mdbcomp__trace_counts__conv0_TraceCounts_6);
    }
    *mdbcomp__trace_counts__wrapper_arg_3 = ((MR_Box) (mdbcomp__trace_counts__conv0_TraceCounts_6));
  }
}

void MR_CALL 
mdbcomp__trace_counts__summarize_trace_counts_list_2_p_0(
  MR_Word mdbcomp__trace_counts__TraceCountsList_3,
  MR_Word * mdbcomp__trace_counts__TraceCounts_4)
{
  {
    MR_bool mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__TraceCountsList_3)) == (MR_mktag((MR_Integer) 1)));
    MR_Word mdbcomp__trace_counts__TraceCountsPrime_5;
    MR_Word mdbcomp__trace_counts__V_6_6;

    if (mdbcomp__trace_counts__succeeded)
      {
        mdbcomp__trace_counts__TraceCountsPrime_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__TraceCountsList_3, (MR_Integer) 0)));
        mdbcomp__trace_counts__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__TraceCountsList_3, (MR_Integer) 1)));
        mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__V_6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    if (mdbcomp__trace_counts__succeeded)
      *mdbcomp__trace_counts__TraceCounts_4 = mdbcomp__trace_counts__TraceCountsPrime_5;
    else
      {
        MR_Word mdbcomp__trace_counts__TypeInfo_14_14;
        MR_Word mdbcomp__trace_counts__V_8_8;
        MR_Box mdbcomp__trace_counts__conv1_TraceCounts_4;

        {
          mdbcomp__trace_counts__V_8_8 = mercury__map__init_0_f_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0, (MR_Word) &mdbcomp__trace_counts_scalar_common_1[0]);
        }
        mdbcomp__trace_counts__TypeInfo_14_14 = (MR_Word) &mdbcomp__trace_counts_scalar_common_1[1];
        {
          mercury__list__foldl_4_p_0(mdbcomp__trace_counts__TypeInfo_14_14, mdbcomp__trace_counts__TypeInfo_14_14, (MR_Word) &mdbcomp__trace_counts_scalar_common_1[2], mdbcomp__trace_counts__TraceCountsList_3, ((MR_Box) (mdbcomp__trace_counts__V_8_8)), &mdbcomp__trace_counts__conv1_TraceCounts_4);
        }
        *mdbcomp__trace_counts__TraceCounts_4 = ((MR_Word) mdbcomp__trace_counts__conv1_TraceCounts_4);
      }
  }
}

MR_Word MR_CALL 
mdbcomp__trace_counts__make_path_port_2_f_0(
  MR_Word mdbcomp__trace_counts__HeadVar__1_1,
  MR_Word mdbcomp__trace_counts__HeadVar__2_2)
{
  {
    MR_bool mdbcomp__trace_counts__succeeded;
    MR_Word mdbcomp__trace_counts__HeadVar__3_3;

    switch (mdbcomp__trace_counts__HeadVar__2_2) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mdbcomp__trace_counts__HeadVar__3_3 = (MR_Word) &mdbcomp__trace_counts_scalar_common_3[0];
        }
        break;
      case (MR_Integer) 12:
        {
          mdbcomp__trace_counts__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__HeadVar__3_3, 0) = ((MR_Box) (mdbcomp__trace_counts__HeadVar__1_1));
        }
        break;
      case (MR_Integer) 13:
        {
          mdbcomp__trace_counts__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__HeadVar__3_3, 0) = ((MR_Box) (mdbcomp__trace_counts__HeadVar__1_1));
        }
        break;
      case (MR_Integer) 5:
        {
          mdbcomp__trace_counts__HeadVar__3_3 = (MR_Word) &mdbcomp__trace_counts_scalar_common_3[1];
        }
        break;
      case (MR_Integer) 1:
        {
          mdbcomp__trace_counts__HeadVar__3_3 = (MR_Word) &mdbcomp__trace_counts_scalar_common_3[2];
        }
        break;
      case (MR_Integer) 3:
        {
          mdbcomp__trace_counts__HeadVar__3_3 = (MR_Word) &mdbcomp__trace_counts_scalar_common_3[3];
        }
        break;
      case (MR_Integer) 6:
        {
          mdbcomp__trace_counts__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__HeadVar__3_3, 0) = ((MR_Box) (mdbcomp__trace_counts__HeadVar__1_1));
        }
        break;
      case (MR_Integer) 8:
        {
          mdbcomp__trace_counts__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__HeadVar__3_3, 0) = ((MR_Box) (mdbcomp__trace_counts__HeadVar__1_1));
        }
        break;
      case (MR_Integer) 7:
        {
          mdbcomp__trace_counts__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__HeadVar__3_3, 0) = ((MR_Box) (mdbcomp__trace_counts__HeadVar__1_1));
        }
        break;
      case (MR_Integer) 9:
        {
          {
            mdbcomp__trace_counts__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__HeadVar__3_3, 0) = ((MR_Box) ((MR_Integer) 9));
            MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__HeadVar__3_3, 1) = ((MR_Box) (mdbcomp__trace_counts__HeadVar__1_1));
          }
        }
        break;
      case (MR_Integer) 11:
        {
          {
            mdbcomp__trace_counts__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__HeadVar__3_3, 0) = ((MR_Box) ((MR_Integer) 11));
            MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__HeadVar__3_3, 1) = ((MR_Box) (mdbcomp__trace_counts__HeadVar__1_1));
          }
        }
        break;
      case (MR_Integer) 10:
        {
          {
            mdbcomp__trace_counts__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__HeadVar__3_3, 0) = ((MR_Box) ((MR_Integer) 10));
            MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__HeadVar__3_3, 1) = ((MR_Box) (mdbcomp__trace_counts__HeadVar__1_1));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          mdbcomp__trace_counts__HeadVar__3_3 = (MR_Word) &mdbcomp__trace_counts_scalar_common_3[4];
        }
        break;
      case (MR_Integer) 14:
        {
          mdbcomp__trace_counts__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__HeadVar__3_3, 0) = ((MR_Box) (mdbcomp__trace_counts__HeadVar__1_1));
        }
        break;
      case (MR_Integer) 4:
        {
          mdbcomp__trace_counts__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__HeadVar__3_3, 0) = ((MR_Box) (mdbcomp__trace_counts__HeadVar__1_1));
        }
        break;
      case (MR_Integer) 15:
        {
          mdbcomp__trace_counts__HeadVar__3_3 = (MR_Word) &mdbcomp__trace_counts_scalar_common_3[5];
        }
        break;
    }
    return mdbcomp__trace_counts__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mdbcomp__trace_counts__sum_trace_count_file_type_2_f_0(
  MR_Word mdbcomp__trace_counts__Type1_4,
  MR_Word mdbcomp__trace_counts__Type2_5)
{
  {
    MR_bool mdbcomp__trace_counts__succeeded;
    MR_Word mdbcomp__trace_counts__UnionType_6;

    switch (MR_tag((MR_Word) mdbcomp__trace_counts__Type1_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_tag((MR_Word) mdbcomp__trace_counts__Type2_5)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word mdbcomp__trace_counts__V_61_61;
              MR_Word mdbcomp__trace_counts__V_62_62;
              MR_Word mdbcomp__trace_counts__V_63_63;

              {
                mdbcomp__trace_counts__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_63_63, 0) = ((MR_Box) (mdbcomp__trace_counts__Type2_5));
                MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                mdbcomp__trace_counts__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_62_62, 0) = ((MR_Box) (mdbcomp__trace_counts__Type1_4));
                MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_62_62, 1) = ((MR_Box) (mdbcomp__trace_counts__V_63_63));
              }
              {
                mdbcomp__trace_counts__V_61_61 = mercury__list__sort_and_remove_dups_1_f_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0, mdbcomp__trace_counts__V_62_62);
              }
              {
                mdbcomp__trace_counts__UnionType_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__UnionType_6, 0) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__UnionType_6, 1) = ((MR_Box) (mdbcomp__trace_counts__V_61_61));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word mdbcomp__trace_counts__TypeCtorInfo_73_73 = (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0;
              MR_Integer mdbcomp__trace_counts__N_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__Type2_5, (MR_Integer) 0)));
              MR_Word mdbcomp__trace_counts__IncludedTypes2_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__Type2_5, (MR_Integer) 1)));
              MR_Integer mdbcomp__trace_counts__V_57_57 = (mdbcomp__trace_counts__N_10 + (MR_Integer) 1);
              MR_Word mdbcomp__trace_counts__V_59_59;
              MR_Word mdbcomp__trace_counts__Set0_94;
              MR_Word mdbcomp__trace_counts__Set_95;

              {
                mercury__set__list_to_set_2_p_0(mdbcomp__trace_counts__TypeCtorInfo_73_73, mdbcomp__trace_counts__IncludedTypes2_11, &mdbcomp__trace_counts__Set0_94);
              }
              {
                mercury__set__insert_3_p_0(mdbcomp__trace_counts__TypeCtorInfo_73_73, ((MR_Box) (mdbcomp__trace_counts__Type1_4)), mdbcomp__trace_counts__Set0_94, &mdbcomp__trace_counts__Set_95);
              }
              {
                mercury__set__to_sorted_list_2_p_0(mdbcomp__trace_counts__TypeCtorInfo_73_73, mdbcomp__trace_counts__Set_95, &mdbcomp__trace_counts__V_59_59);
              }
              {
                mdbcomp__trace_counts__UnionType_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__UnionType_6, 0) = ((MR_Box) (mdbcomp__trace_counts__V_57_57));
                MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__UnionType_6, 1) = ((MR_Box) (mdbcomp__trace_counts__V_59_59));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mdbcomp__trace_counts__V_53_53;
              MR_Word mdbcomp__trace_counts__V_54_54;
              MR_Word mdbcomp__trace_counts__V_55_55;

              {
                mdbcomp__trace_counts__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_55_55, 0) = ((MR_Box) (mdbcomp__trace_counts__Type2_5));
                MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                mdbcomp__trace_counts__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_54_54, 0) = ((MR_Box) (mdbcomp__trace_counts__Type1_4));
                MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_54_54, 1) = ((MR_Box) (mdbcomp__trace_counts__V_55_55));
              }
              {
                mdbcomp__trace_counts__V_53_53 = mercury__list__sort_and_remove_dups_1_f_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0, mdbcomp__trace_counts__V_54_54);
              }
              {
                mdbcomp__trace_counts__UnionType_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__UnionType_6, 0) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__UnionType_6, 1) = ((MR_Box) (mdbcomp__trace_counts__V_53_53));
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word mdbcomp__trace_counts__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__Type1_4, (MR_Integer) 1)));
          MR_Integer mdbcomp__trace_counts__V_85_85 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__Type1_4, (MR_Integer) 0)));

          switch (MR_tag((MR_Word) mdbcomp__trace_counts__Type2_5)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer mdbcomp__trace_counts__V_49_49 = (mdbcomp__trace_counts__V_85_85 + (MR_Integer) 1);
                MR_Word mdbcomp__trace_counts__V_51_51;

                {
                  mdbcomp__trace_counts__V_51_51 = mdbcomp__trace_counts__insert_into_list_as_set_2_f_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0, mdbcomp__trace_counts__V_84_84, ((MR_Box) (mdbcomp__trace_counts__Type2_5)));
                }
                {
                  mdbcomp__trace_counts__UnionType_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__UnionType_6, 0) = ((MR_Box) (mdbcomp__trace_counts__V_49_49));
                  MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__UnionType_6, 1) = ((MR_Box) (mdbcomp__trace_counts__V_51_51));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word mdbcomp__trace_counts__TypeCtorInfo_76_76 = (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0;
                MR_Integer mdbcomp__trace_counts__N2_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__Type2_5, (MR_Integer) 0)));
                MR_Integer mdbcomp__trace_counts__V_46_46 = (mdbcomp__trace_counts__V_85_85 + mdbcomp__trace_counts__N2_18);
                MR_Word mdbcomp__trace_counts__V_47_47;
                MR_Word mdbcomp__trace_counts__V_48_48;
                MR_Word mdbcomp__trace_counts__IncludedTypes2_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__Type2_5, (MR_Integer) 1)));

                {
                  mdbcomp__trace_counts__V_48_48 = mercury__list__f_43_43_2_f_0(mdbcomp__trace_counts__TypeCtorInfo_76_76, mdbcomp__trace_counts__V_84_84, mdbcomp__trace_counts__IncludedTypes2_66);
                }
                {
                  mdbcomp__trace_counts__V_47_47 = mercury__list__sort_and_remove_dups_1_f_0(mdbcomp__trace_counts__TypeCtorInfo_76_76, mdbcomp__trace_counts__V_48_48);
                }
                {
                  mdbcomp__trace_counts__UnionType_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__UnionType_6, 0) = ((MR_Box) (mdbcomp__trace_counts__V_46_46));
                  MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__UnionType_6, 1) = ((MR_Box) (mdbcomp__trace_counts__V_47_47));
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer mdbcomp__trace_counts__V_43_43 = (mdbcomp__trace_counts__V_85_85 + (MR_Integer) 1);
                MR_Word mdbcomp__trace_counts__V_45_45;

                {
                  mdbcomp__trace_counts__V_45_45 = mdbcomp__trace_counts__insert_into_list_as_set_2_f_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0, mdbcomp__trace_counts__V_84_84, ((MR_Box) (mdbcomp__trace_counts__Type2_5)));
                }
                {
                  mdbcomp__trace_counts__UnionType_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__UnionType_6, 0) = ((MR_Box) (mdbcomp__trace_counts__V_43_43));
                  MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__UnionType_6, 1) = ((MR_Box) (mdbcomp__trace_counts__V_45_45));
                }
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        switch (MR_tag((MR_Word) mdbcomp__trace_counts__Type2_5)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word mdbcomp__trace_counts__V_39_39;
              MR_Word mdbcomp__trace_counts__V_40_40;
              MR_Word mdbcomp__trace_counts__V_41_41;

              {
                mdbcomp__trace_counts__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_41_41, 0) = ((MR_Box) (mdbcomp__trace_counts__Type2_5));
                MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                mdbcomp__trace_counts__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_40_40, 0) = ((MR_Box) (mdbcomp__trace_counts__Type1_4));
                MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_40_40, 1) = ((MR_Box) (mdbcomp__trace_counts__V_41_41));
              }
              {
                mdbcomp__trace_counts__V_39_39 = mercury__list__sort_and_remove_dups_1_f_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0, mdbcomp__trace_counts__V_40_40);
              }
              {
                mdbcomp__trace_counts__UnionType_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__UnionType_6, 0) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__UnionType_6, 1) = ((MR_Box) (mdbcomp__trace_counts__V_39_39));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word mdbcomp__trace_counts__TypeCtorInfo_79_79;
              MR_Integer mdbcomp__trace_counts__V_35_35;
              MR_Word mdbcomp__trace_counts__V_37_37;
              MR_Integer mdbcomp__trace_counts__N_70 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__Type2_5, (MR_Integer) 0)));
              MR_Word mdbcomp__trace_counts__IncludedTypes2_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__Type2_5, (MR_Integer) 1)));
              MR_Word mdbcomp__trace_counts__Set0_89;
              MR_Word mdbcomp__trace_counts__Set_90;

              mdbcomp__trace_counts__V_35_35 = (mdbcomp__trace_counts__N_70 + (MR_Integer) 1);
              mdbcomp__trace_counts__TypeCtorInfo_79_79 = (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0;
              {
                mercury__set__list_to_set_2_p_0(mdbcomp__trace_counts__TypeCtorInfo_79_79, mdbcomp__trace_counts__IncludedTypes2_71, &mdbcomp__trace_counts__Set0_89);
              }
              {
                mercury__set__insert_3_p_0(mdbcomp__trace_counts__TypeCtorInfo_79_79, ((MR_Box) (mdbcomp__trace_counts__Type1_4)), mdbcomp__trace_counts__Set0_89, &mdbcomp__trace_counts__Set_90);
              }
              {
                mercury__set__to_sorted_list_2_p_0(mdbcomp__trace_counts__TypeCtorInfo_79_79, mdbcomp__trace_counts__Set_90, &mdbcomp__trace_counts__V_37_37);
              }
              {
                mdbcomp__trace_counts__UnionType_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__UnionType_6, 0) = ((MR_Box) (mdbcomp__trace_counts__V_35_35));
                MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__UnionType_6, 1) = ((MR_Box) (mdbcomp__trace_counts__V_37_37));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mdbcomp__trace_counts__V_31_31;
              MR_Word mdbcomp__trace_counts__V_32_32;
              MR_Word mdbcomp__trace_counts__V_33_33;

              {
                mdbcomp__trace_counts__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_33_33, 0) = ((MR_Box) (mdbcomp__trace_counts__Type2_5));
                MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                mdbcomp__trace_counts__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_32_32, 0) = ((MR_Box) (mdbcomp__trace_counts__Type1_4));
                MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_32_32, 1) = ((MR_Box) (mdbcomp__trace_counts__V_33_33));
              }
              {
                mdbcomp__trace_counts__V_31_31 = mercury__list__sort_and_remove_dups_1_f_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0, mdbcomp__trace_counts__V_32_32);
              }
              {
                mdbcomp__trace_counts__UnionType_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__UnionType_6, 0) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__UnionType_6, 1) = ((MR_Box) (mdbcomp__trace_counts__V_31_31));
              }
            }
            break;
        }
        break;
    }
    return mdbcomp__trace_counts__UnionType_6;
  }
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

/* :- end_module mdbcomp.trace_counts. */
