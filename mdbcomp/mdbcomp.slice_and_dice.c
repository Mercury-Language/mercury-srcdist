/*
** Automatically generated from `slice_and_dice.m'
** by the Mercury compiler,
** version rotd-2023-09-19
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


// :- module mdbcomp.slice_and_dice.
// :- implementation.

/*
INIT mercury__mdbcomp__slice_and_dice__init
ENDINIT
*/

#include "mdbcomp.slice_and_dice.mih"
#include "mdbcomp.slice_and_dice.mh"


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
#include "enum.mih"
#include "float.mih"
#include "int.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "ops.mih"
#include "pair.mih"
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
#include "univ.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct2 mdbcomp__slice_and_dice__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0;

static const MR_FA_TypeInfo_Struct2 mdbcomp__slice_and_dice__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0;

static const MR_FA_PseudoTypeInfo_Struct2 mdbcomp__slice_and_dice__tree234__pti_tree234_2__plain_mdbcomp__prim_data__type_ctor_info_proc_label_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0;

static const MR_FA_PseudoTypeInfo_Struct2 mdbcomp__slice_and_dice__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0;

static const MR_FA_PseudoTypeInfo_Struct1 mdbcomp__slice_and_dice__cord__pti_cord_1__plain_mdbcomp__slice_and_dice__type_ctor_info_slice_label_count_0;

static const MR_FA_TypeInfo_Struct2 mdbcomp__slice_and_dice__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0;

static const MR_FA_PseudoTypeInfo_Struct2 mdbcomp__slice_and_dice__tree234__pti_tree234_2__plain_mdbcomp__prim_data__type_ctor_info_proc_label_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0;

static const MR_FA_PseudoTypeInfo_Struct2 mdbcomp__slice_and_dice__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0;

static const MR_FA_PseudoTypeInfo_Struct1 mdbcomp__slice_and_dice__list__pti_list_1__plain_mdbcomp__slice_and_dice__type_ctor_info_dice_label_count_0;

static const MR_FA_PseudoTypeInfo_Struct2 mdbcomp__slice_and_dice__pair__pti_pair_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0;

static const MR_FA_PseudoTypeInfo_Struct2 mdbcomp__slice_and_dice__pair__pti_pair_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0;

static const MR_FA_TypeInfo_Struct2 mdbcomp__slice_and_dice__tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_proc_label_0tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0;

static const MR_PseudoTypeInfo mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_types_dice_0_0[3];

static const MR_ConstString mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_names_dice_0_0[3];

static const MR_DuFunctorDesc mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_functor_desc_dice_0_0;

static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_stag_ordered_dice_0_0[1];

static const MR_DuPtagLayout mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_ptag_ordered_dice_0[1];

static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_name_ordered_dice_0[1];

static const MR_Integer mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__functor_number_map_dice_0[1];

static const MR_PseudoTypeInfo mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_types_dice_exec_count_0_0[6];

static const MR_ConstString mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_names_dice_exec_count_0_0[6];

static const MR_DuFunctorDesc mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_functor_desc_dice_exec_count_0_0;

static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_stag_ordered_dice_exec_count_0_0[1];

static const MR_DuPtagLayout mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_ptag_ordered_dice_exec_count_0[1];

static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_name_ordered_dice_exec_count_0[1];

static const MR_Integer mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__functor_number_map_dice_exec_count_0[1];

static const MR_PseudoTypeInfo mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_types_dice_label_count_0_0[3];

static const MR_ConstString mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_names_dice_label_count_0_0[3];

static const MR_DuFunctorDesc mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_functor_desc_dice_label_count_0_0;

static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_stag_ordered_dice_label_count_0_0[1];

static const MR_DuPtagLayout mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_ptag_ordered_dice_label_count_0[1];

static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_name_ordered_dice_label_count_0[1];

static const MR_Integer mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__functor_number_map_dice_label_count_0[1];

static const MR_FA_TypeInfo_Struct2 mdbcomp__slice_and_dice__tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_proc_label_0tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0;

static const MR_PseudoTypeInfo mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_types_slice_0_0[2];

static const MR_ConstString mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_names_slice_0_0[2];

static const MR_DuFunctorDesc mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_functor_desc_slice_0_0;

static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_stag_ordered_slice_0_0[1];

static const MR_DuPtagLayout mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_ptag_ordered_slice_0[1];

static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_name_ordered_slice_0[1];

static const MR_Integer mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__functor_number_map_slice_0[1];

static const MR_PseudoTypeInfo mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_types_slice_exec_count_0_0[4];

static const MR_ConstString mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_names_slice_exec_count_0_0[4];

static const MR_DuFunctorDesc mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_functor_desc_slice_exec_count_0_0;

static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_stag_ordered_slice_exec_count_0_0[1];

static const MR_DuPtagLayout mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_ptag_ordered_slice_exec_count_0[1];

static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_name_ordered_slice_exec_count_0[1];

static const MR_Integer mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__functor_number_map_slice_exec_count_0[1];

static const MR_PseudoTypeInfo mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_types_slice_label_count_0_0[3];

static const MR_ConstString mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_names_slice_label_count_0_0[3];

static const MR_DuFunctorDesc mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_functor_desc_slice_label_count_0_0;

static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_stag_ordered_slice_label_count_0_0[1];

static const MR_DuPtagLayout mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_ptag_ordered_slice_label_count_0[1];

static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_name_ordered_slice_label_count_0[1];

static const MR_Integer mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__functor_number_map_slice_label_count_0[1];

static const MR_EnumFunctorDesc mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__enum_functor_desc_trace_counts_kind_0_0;

static const MR_EnumFunctorDesc mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__enum_functor_desc_trace_counts_kind_0_1;

static const MR_EnumFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__enum_ordinal_ordered_trace_counts_kind_0[2];

static const MR_EnumFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__enum_name_ordered_trace_counts_kind_0[2];

static const MR_Integer mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__functor_number_map_trace_counts_kind_0[2];

static MR_bool MR_CALL 
mdbcomp__slice_and_dice__IntroducedFrom__pred__format_slice_label_counts__634__1_2_p_0(
  MR_Integer HeadVar__1_55,
  MR_Integer HeadVar__2_87);

static void MR_CALL 
mdbcomp__slice_and_dice____Compare____trace_counts_kind_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____trace_counts_kind_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mdbcomp__slice_and_dice____Compare____slice_label_count_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____slice_label_count_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mdbcomp__slice_and_dice____Compare____dice_label_count_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____dice_label_count_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_String MR_CALL 
mdbcomp__slice_and_dice__format_path_port_1_f_0(
  MR_Word HeadVar__1_1);

static MR_String MR_CALL 
mdbcomp__slice_and_dice__format_proc_label_1_f_0(
  MR_Word ProcLabel_3);

static MR_String MR_CALL 
mdbcomp__slice_and_dice__format_float_2_f_0(
  MR_Integer DecimalPlaces_4,
  MR_Float Flt_5);

static MR_String MR_CALL 
mdbcomp__slice_and_dice__bracket_int_1_f_0(
  MR_Integer X_3);

static MR_Float MR_CALL 
mdbcomp__slice_and_dice__get_suspicion_for_label_layout_2_f_0(
  MR_Word Dice_4,
  MR_Box LabelLayout_5);

static void MR_CALL 
mdbcomp__slice_and_dice__deconstruct_dice_label_count_8_p_0(
  MR_Word DiceLabelCount_9,
  MR_Word * ProcLabel_10,
  MR_Word * PathPort_11,
  MR_String * FormattedContext_12,
  MR_Integer * PassCount_13,
  MR_Integer * PassTests_14,
  MR_Integer * FailCount_15,
  MR_Integer * FailTests_16);

static void MR_CALL 
mdbcomp__slice_and_dice__make_dice_label_count_3_p_0(
  MR_Word ProcLabel_4,
  MR_Word HeadVar__2_2,
  MR_Word * DiceLabelCount_7);

static void MR_CALL 
mdbcomp__slice_and_dice__append_dice_label_counts_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
mdbcomp__slice_and_dice__append_dice_label_counts_4_p_0(
  MR_Word ProcLabel_5,
  MR_Word ProcDice_6,
  MR_Word STATE_VARIABLE_LabelCounts_0_10,
  MR_Word * STATE_VARIABLE_LabelCounts_11);

static void MR_CALL 
mdbcomp__slice_and_dice__dice_label_count_compare_4_p_0(
  MR_String SortStr_5,
  MR_Word LabelCountA_6,
  MR_Word LabelCountB_7,
  MR_Word * Result_8);

static void MR_CALL 
mdbcomp__slice_and_dice__dice_exec_count_compare_4_p_0(
  MR_String SortStr_5,
  MR_Word ExecCount1_6,
  MR_Word ExecCount2_7,
  MR_Word * Result_8);

static MR_bool MR_CALL 
mdbcomp__slice_and_dice__dice_label_count_is_for_module_2_p_0(
  MR_String Module_3,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mdbcomp__slice_and_dice__read_dice_to_string_no_limit_9_p_0(
  MR_String PassFile_10,
  MR_String FailFile_11,
  MR_String SortStr_12,
  MR_Integer MaxRow_13,
  MR_String Module_14,
  MR_String * DiceStr_15,
  MR_String * Problem_16);

static void MR_CALL 
mdbcomp__slice_and_dice__deconstruct_slice_label_count_6_p_0(
  MR_Word SliceLabelCount_7,
  MR_Word * PathPort_8,
  MR_Word * ProcLabel_9,
  MR_String * FormattedContext_10,
  MR_Integer * Count_11,
  MR_Integer * Tests_12);

static void MR_CALL 
mdbcomp__slice_and_dice__make_slice_label_count_3_p_0(
  MR_Word ProcLabel_4,
  MR_Word HeadVar__2_2,
  MR_Word * SliceLabelCount_7);

static void MR_CALL 
mdbcomp__slice_and_dice__append_slice_label_counts_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
mdbcomp__slice_and_dice__append_slice_label_counts_4_p_0(
  MR_Word ProcLabel_5,
  MR_Word ProcSlice_6,
  MR_Word STATE_VARIABLE_LabelCounts_0_10,
  MR_Word * STATE_VARIABLE_LabelCounts_11);

static void MR_CALL 
mdbcomp__slice_and_dice__slice_label_count_compare_4_p_0(
  MR_String SortStr_5,
  MR_Word LabelCountA_6,
  MR_Word LabelCountB_7,
  MR_Word * Result_8);

static void MR_CALL 
mdbcomp__slice_and_dice__slice_exec_count_compare_4_p_0(
  MR_String SortStr_5,
  MR_Word ExecCount1_6,
  MR_Word ExecCount2_7,
  MR_Word * Result_8);

static MR_bool MR_CALL 
mdbcomp__slice_and_dice__slice_label_count_is_zero_1_p_0(
  MR_Word SliceLabelCount_2);

static MR_bool MR_CALL 
mdbcomp__slice_and_dice__slice_label_count_is_for_module_2_p_0(
  MR_String Module_3,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mdbcomp__slice_and_dice__dice_add_trace_count_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word LineNoAndCount_2,
  MR_Word ExecCounts0_3,
  MR_Word * ExecCounts_4);

static void MR_CALL 
mdbcomp__slice_and_dice__dice_merge_path_port_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
mdbcomp__slice_and_dice__dice_merge_path_port_6_p_0(
  MR_String FileName_7,
  MR_Word Kind_8,
  MR_Word PathPort_9,
  MR_Word LineNoAndCount_10,
  MR_Word STATE_VARIABLE_ProcDice_0_17,
  MR_Word * STATE_VARIABLE_ProcDice_18);

static void MR_CALL 
mdbcomp__slice_and_dice__dice_merge_proc_trace_counts_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mdbcomp__slice_and_dice__dice_merge_proc_trace_counts_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mdbcomp__slice_and_dice__dice_merge_proc_trace_counts_5_p_0(
  MR_Word Kind_6,
  MR_Word ProcLabelAndFile_7,
  MR_Word ProcTraceCounts_8,
  MR_Word STATE_VARIABLE_DiceProcMap_0_15,
  MR_Word * STATE_VARIABLE_DiceProcMap_16);

static void MR_CALL 
mdbcomp__slice_and_dice__det_maybe_dice_error_to_dice_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Dice_2);

static void MR_CALL 
mdbcomp__slice_and_dice__maybe_dice_error_to_problem_string_2_p_0(
  MR_Word HeadVar__1_1,
  MR_String * HeadVar__2_2);

static void MR_CALL 
mdbcomp__slice_and_dice__slice_add_trace_count_3_p_0(
  MR_Word LineNoAndCount_4,
  MR_Word ExecCounts0_5,
  MR_Word * ExecCounts_6);

static void MR_CALL 
mdbcomp__slice_and_dice__slice_merge_path_port_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
mdbcomp__slice_and_dice__slice_merge_path_port_5_p_0(
  MR_String FileName_6,
  MR_Word PathPort_7,
  MR_Word LineNoAndCount_8,
  MR_Word STATE_VARIABLE_ProcSlice_0_15,
  MR_Word * STATE_VARIABLE_ProcSlice_16);

static void MR_CALL 
mdbcomp__slice_and_dice__slice_merge_proc_trace_counts_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mdbcomp__slice_and_dice__slice_merge_proc_trace_counts_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mdbcomp__slice_and_dice__slice_merge_proc_trace_counts_4_p_0(
  MR_Word ProcLabelAndFile_5,
  MR_Word ProcTraceCounts_6,
  MR_Word STATE_VARIABLE_SliceProcMap_0_13,
  MR_Word * STATE_VARIABLE_SliceProcMap_14);

static void MR_CALL 
mdbcomp__slice_and_dice__read_dice_to_string_12_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__slice_and_dice__read_dice_to_string_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
mdbcomp__slice_and_dice__read_dice_to_string_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_Box MR_CALL 
mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static MR_String MR_CALL 
mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0(
  MR_Word LabelCounts_8,
  MR_Integer TotalPassTests_9,
  MR_Word MaybeMaxPredColumns_11,
  MR_Word MaybeMaxPathColumns_12,
  MR_Word MaybeMaxFileColumns_13);

static void MR_CALL 
mdbcomp__slice_and_dice__read_dice_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mdbcomp__slice_and_dice__read_dice_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mdbcomp__slice_and_dice__read_slice_to_string_11_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__slice_and_dice__read_slice_to_string_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
mdbcomp__slice_and_dice__read_slice_to_string_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
mdbcomp__slice_and_dice__read_slice_to_string_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_Box MR_CALL 
mdbcomp__slice_and_dice__format_slice_label_counts_5_f_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
mdbcomp__slice_and_dice__format_slice_label_counts_5_f_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
mdbcomp__slice_and_dice__format_slice_label_counts_5_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
mdbcomp__slice_and_dice__format_slice_label_counts_5_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
mdbcomp__slice_and_dice__format_slice_label_counts_5_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
mdbcomp__slice_and_dice__format_slice_label_counts_5_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static MR_String MR_CALL 
mdbcomp__slice_and_dice__format_slice_label_counts_5_f_0(
  MR_Word LabelCounts_7,
  MR_Integer TotalTests_8,
  MR_Word MaybeMaxPredColumns_9,
  MR_Word MaybePathColumns_10,
  MR_Word MaybeMaxFileColumns_11);

static void MR_CALL 
mdbcomp__slice_and_dice__read_slice_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____dice_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdbcomp__slice_and_dice____Compare____dice_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____dice_exec_count_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdbcomp__slice_and_dice____Compare____dice_exec_count_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____dice_label_count_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdbcomp__slice_and_dice____Compare____dice_label_count_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____dice_proc_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdbcomp__slice_and_dice____Compare____dice_proc_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____proc_dice_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdbcomp__slice_and_dice____Compare____proc_dice_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____proc_slice_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdbcomp__slice_and_dice____Compare____proc_slice_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____slice_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdbcomp__slice_and_dice____Compare____slice_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____slice_exec_count_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdbcomp__slice_and_dice____Compare____slice_exec_count_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____slice_label_count_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdbcomp__slice_and_dice____Compare____slice_label_count_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____slice_proc_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdbcomp__slice_and_dice____Compare____slice_proc_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____trace_counts_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdbcomp__slice_and_dice____Compare____trace_counts_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mdbcomp__slice_and_dice_scalar_common_1[24][3];

static /* final */ const MR_Box mdbcomp__slice_and_dice_scalar_common_2[15][2];

static /* final */ const MR_Box mdbcomp__slice_and_dice_scalar_common_3[1][1];

static /* final */ const MR_Box mdbcomp__slice_and_dice_scalar_common_4[6][7];

static /* final */ const MR_Box mdbcomp__slice_and_dice_scalar_common_5[2][9];

static /* final */ const MR_Box mdbcomp__slice_and_dice_scalar_common_6[6][5];

static /* final */ const MR_Box mdbcomp__slice_and_dice_scalar_common_7[5][4];

static /* final */ const MR_Box mdbcomp__slice_and_dice_scalar_common_8[2][8];

static /* final */ const MR_Box mdbcomp__slice_and_dice_scalar_common_9[1][11];

static /* final */ const MR_Box mdbcomp__slice_and_dice_scalar_common_10[5][6];




static /* final */ const MR_Box mdbcomp__slice_and_dice_scalar_common_1[24][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_1[0]))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_1[1]))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__string__string__type_ctor_info_justified_column_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_2[1]))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0))
  },
  /* row   8 */
  {
    ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_4[0])),
    ((MR_Box) (mdbcomp__slice_and_dice__read_slice_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_5[0])),
    ((MR_Box) (mdbcomp__slice_and_dice__format_slice_label_counts_5_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_6[0])),
    ((MR_Box) (mdbcomp__slice_and_dice__format_slice_label_counts_5_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_6[1])),
    ((MR_Box) (mdbcomp__slice_and_dice__format_slice_label_counts_5_f_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_6[2])),
    ((MR_Box) (mdbcomp__slice_and_dice__format_slice_label_counts_5_f_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  13 */
  {
    ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_6[2])),
    ((MR_Box) (mdbcomp__slice_and_dice__format_slice_label_counts_5_f_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  14 */
  {
    ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_4[1])),
    ((MR_Box) (mdbcomp__slice_and_dice__read_slice_to_string_11_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  15 */
  {
    ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_7[1])),
    ((MR_Box) (mdbcomp__slice_and_dice__read_slice_to_string_11_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  16 */
  {
    ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_9[0])),
    ((MR_Box) (mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  17 */
  {
    ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_6[0])),
    ((MR_Box) (mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  18 */
  {
    ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_6[1])),
    ((MR_Box) (mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  19 */
  {
    ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_6[2])),
    ((MR_Box) (mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  20 */
  {
    ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_6[2])),
    ((MR_Box) (mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  21 */
  {
    ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_6[2])),
    ((MR_Box) (mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  22 */
  {
    ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_10[0])),
    ((MR_Box) (mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  23 */
  {
    ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_4[3])),
    ((MR_Box) (mdbcomp__slice_and_dice__read_dice_to_string_12_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mdbcomp__slice_and_dice_scalar_common_2[15][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_label_count_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_label_count_0))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 84)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 116)),
    ((MR_Box) (MR_mkword(1, &mdbcomp__slice_and_dice_scalar_common_2[3])))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 67)),
    ((MR_Box) (MR_mkword(1, &mdbcomp__slice_and_dice_scalar_common_2[4])))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 99)),
    ((MR_Box) (MR_mkword(1, &mdbcomp__slice_and_dice_scalar_common_2[5])))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 68)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 100)),
    ((MR_Box) (MR_mkword(1, &mdbcomp__slice_and_dice_scalar_common_2[7])))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 83)),
    ((MR_Box) (MR_mkword(1, &mdbcomp__slice_and_dice_scalar_common_2[8])))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 115)),
    ((MR_Box) (MR_mkword(1, &mdbcomp__slice_and_dice_scalar_common_2[9])))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 70)),
    ((MR_Box) (MR_mkword(1, &mdbcomp__slice_and_dice_scalar_common_2[10])))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 102)),
    ((MR_Box) (MR_mkword(1, &mdbcomp__slice_and_dice_scalar_common_2[11])))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 80)),
    ((MR_Box) (MR_mkword(1, &mdbcomp__slice_and_dice_scalar_common_2[12])))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 112)),
    ((MR_Box) (MR_mkword(1, &mdbcomp__slice_and_dice_scalar_common_2[13])))
  },
};

static /* final */ const MR_Box mdbcomp__slice_and_dice_scalar_common_3[1][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};

static /* final */ const MR_Box mdbcomp__slice_and_dice_scalar_common_4[6][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__tree234__pti_tree234_2__plain_mdbcomp__prim_data__type_ctor_info_proc_label_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__tree234__pti_tree234_2__plain_mdbcomp__prim_data__type_ctor_info_proc_label_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__cord__pti_cord_1__plain_mdbcomp__slice_and_dice__type_ctor_info_slice_label_count_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__cord__pti_cord_1__plain_mdbcomp__slice_and_dice__type_ctor_info_slice_label_count_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_label_count_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_label_count_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_comparison_result_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__list__pti_list_1__plain_mdbcomp__slice_and_dice__type_ctor_info_dice_label_count_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__list__pti_list_1__plain_mdbcomp__slice_and_dice__type_ctor_info_dice_label_count_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_label_count_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_label_count_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_comparison_result_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_trace_counts_kind_0)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0))
  },
};

static /* final */ const MR_Box mdbcomp__slice_and_dice_scalar_common_5[2][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_label_count_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_trace_counts_kind_0)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0))
  },
};

static /* final */ const MR_Box mdbcomp__slice_and_dice_scalar_common_6[6][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
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
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_label_count_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_label_count_0))
  },
};

static /* final */ const MR_Box mdbcomp__slice_and_dice_scalar_common_7[5][4] = {
  /* row   0 */
  {
    ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_6[3])),
    ((MR_Box) (mdbcomp__slice_and_dice__format_slice_label_counts_5_f_0_5)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_label_count_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_8[0])),
    ((MR_Box) (mdbcomp__slice_and_dice__read_dice_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_8[0])),
    ((MR_Box) (mdbcomp__slice_and_dice__read_dice_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row   4 */
  {
    ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_10[1])),
    ((MR_Box) (mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0_8)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 2))
  },
};

static /* final */ const MR_Box mdbcomp__slice_and_dice_scalar_common_8[2][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_trace_counts_kind_0)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__tree234__pti_tree234_2__plain_mdbcomp__prim_data__type_ctor_info_proc_label_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__tree234__pti_tree234_2__plain_mdbcomp__prim_data__type_ctor_info_proc_label_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0))
  },
};

static /* final */ const MR_Box mdbcomp__slice_and_dice_scalar_common_9[1][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_label_count_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box mdbcomp__slice_and_dice_scalar_common_10[5][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__pair__pti_pair_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_label_count_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__pair__pti_pair_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_label_count_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "mdbcomp.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.slice_and_dice.mh"

#line 323 "slice_and_dice.m"
void 
MR_MDBCOMP_read_dice(
  MR_String PassFile_6,
  MR_String FailFile_7,
  MR_Word * Result_8)
#line 323 "slice_and_dice.m"
{
#line 323 "slice_and_dice.m"
	mdbcomp__slice_and_dice__read_dice_5_p_0((MR_String) PassFile_6, (MR_String) FailFile_7, (MR_Word *) Result_8);
}

#line 353 "slice_and_dice.m"
void 
MR_MDBCOMP_maybe_dice_error_to_problem_string(
  MR_Word HeadVar__1_1,
  MR_String * HeadVar__2_2)
#line 353 "slice_and_dice.m"
{
#line 353 "slice_and_dice.m"
	mdbcomp__slice_and_dice__maybe_dice_error_to_problem_string_2_p_0((MR_Word) HeadVar__1_1, (MR_String *) HeadVar__2_2);
}

#line 361 "slice_and_dice.m"
void 
MR_MDBCOMP_det_maybe_dice_error_to_dice(
  MR_Word HeadVar__1_1,
  MR_Word * Dice_2)
#line 361 "slice_and_dice.m"
{
#line 361 "slice_and_dice.m"
	mdbcomp__slice_and_dice__det_maybe_dice_error_to_dice_2_p_0((MR_Word) HeadVar__1_1, (MR_Word *) Dice_2);
}

#line 664 "slice_and_dice.m"
void 
MR_MDBCOMP_read_dice_to_string(
  MR_String PassFile_10,
  MR_String FailFile_11,
  MR_String SortStr_12,
  MR_Integer MaxRow_13,
  MR_String Module_14,
  MR_String * DiceStr_15,
  MR_String * Problem_16)
#line 664 "slice_and_dice.m"
{
#line 664 "slice_and_dice.m"
	mdbcomp__slice_and_dice__read_dice_to_string_no_limit_9_p_0((MR_String) PassFile_10, (MR_String) FailFile_11, (MR_String) SortStr_12, (MR_Integer) MaxRow_13, (MR_String) Module_14, (MR_String *) DiceStr_15, (MR_String *) Problem_16);
}

#line 944 "slice_and_dice.m"
MR_Float 
MR_MDBCOMP_get_suspicion_for_label_layout(
  MR_Word Dice_4,
  const MR_LabelLayout * LabelLayout_5)
#line 944 "slice_and_dice.m"
{
#line 944 "slice_and_dice.m"
	MR_Box boxed_LabelLayout_5;
	MR_Float ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, LabelLayout_5, boxed_LabelLayout_5);
	ret_value = (MR_Float)mdbcomp__slice_and_dice__get_suspicion_for_label_layout_2_f_0((MR_Word) Dice_4, boxed_LabelLayout_5);
	return ret_value;
}


static const MR_FA_PseudoTypeInfo_Struct2 mdbcomp__slice_and_dice__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0),
    (MR_PseudoTypeInfo) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)
  }
};

static const MR_FA_TypeInfo_Struct2 mdbcomp__slice_and_dice__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0),
    (MR_TypeInfo) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 mdbcomp__slice_and_dice__tree234__pti_tree234_2__plain_mdbcomp__prim_data__type_ctor_info_proc_label_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0),
    (MR_PseudoTypeInfo) (&mdbcomp__slice_and_dice__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 mdbcomp__slice_and_dice__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0),
    (MR_PseudoTypeInfo) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdbcomp__slice_and_dice__cord__pti_cord_1__plain_mdbcomp__slice_and_dice__type_ctor_info_slice_label_count_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_PseudoTypeInfo) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_label_count_0) }
};

static const MR_FA_TypeInfo_Struct2 mdbcomp__slice_and_dice__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0),
    (MR_TypeInfo) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 mdbcomp__slice_and_dice__tree234__pti_tree234_2__plain_mdbcomp__prim_data__type_ctor_info_proc_label_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0),
    (MR_PseudoTypeInfo) (&mdbcomp__slice_and_dice__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 mdbcomp__slice_and_dice__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0),
    (MR_PseudoTypeInfo) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdbcomp__slice_and_dice__list__pti_list_1__plain_mdbcomp__slice_and_dice__type_ctor_info_dice_label_count_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_label_count_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 mdbcomp__slice_and_dice__pair__pti_pair_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0),
    (MR_PseudoTypeInfo) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 mdbcomp__slice_and_dice__pair__pti_pair_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0),
    (MR_PseudoTypeInfo) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0)
  }
};

static const MR_FA_TypeInfo_Struct2 mdbcomp__slice_and_dice__tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_proc_label_0tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0),
    (MR_TypeInfo) (&mdbcomp__slice_and_dice__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0)
  }
};

static const MR_PseudoTypeInfo mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_types_dice_0_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mdbcomp__slice_and_dice__tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_proc_label_0tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0)
};

static const MR_ConstString mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_names_dice_0_0[3] = {
  (MR_String) "num_pass_tests",
  (MR_String) "num_fail_tests",
  (MR_String) "dice_proc_map"
};

static const MR_DuFunctorDesc mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_functor_desc_dice_0_0 = {
  (MR_String) "dice",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_types_dice_0_0,
  mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_names_dice_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_stag_ordered_dice_0_0[1] = { &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_functor_desc_dice_0_0 };

static const MR_DuPtagLayout mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_ptag_ordered_dice_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_stag_ordered_dice_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_name_ordered_dice_0[1] = { &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_functor_desc_dice_0_0 };

static const MR_Integer mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__functor_number_map_dice_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__slice_and_dice____Unify____dice_0_0_10001)),
  ((MR_Box) (mdbcomp__slice_and_dice____Compare____dice_0_0_10001)),
  (MR_String) "mdbcomp.slice_and_dice",
  (MR_String) "dice",
  { mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_name_ordered_dice_0 },
  { mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_ptag_ordered_dice_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__functor_number_map_dice_0,

};

static const MR_PseudoTypeInfo mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_types_dice_exec_count_0_0[6] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_ConstString mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_names_dice_exec_count_0_0[6] = {
  (MR_String) "dice_filename",
  (MR_String) "dice_linenumber",
  (MR_String) "pass_count",
  (MR_String) "pass_tests",
  (MR_String) "fail_count",
  (MR_String) "fail_tests"
};

static const MR_DuFunctorDesc mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_functor_desc_dice_exec_count_0_0 = {
  (MR_String) "dice_exec_count",
  INT16_C(6),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_types_dice_exec_count_0_0,
  mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_names_dice_exec_count_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_stag_ordered_dice_exec_count_0_0[1] = { &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_functor_desc_dice_exec_count_0_0 };

static const MR_DuPtagLayout mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_ptag_ordered_dice_exec_count_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_stag_ordered_dice_exec_count_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_name_ordered_dice_exec_count_0[1] = { &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_functor_desc_dice_exec_count_0_0 };

static const MR_Integer mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__functor_number_map_dice_exec_count_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__slice_and_dice____Unify____dice_exec_count_0_0_10001)),
  ((MR_Box) (mdbcomp__slice_and_dice____Compare____dice_exec_count_0_0_10001)),
  (MR_String) "mdbcomp.slice_and_dice",
  (MR_String) "dice_exec_count",
  { mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_name_ordered_dice_exec_count_0 },
  { mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_ptag_ordered_dice_exec_count_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__functor_number_map_dice_exec_count_0,

};

static const MR_PseudoTypeInfo mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_types_dice_label_count_0_0[3] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0),
  (MR_PseudoTypeInfo) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0),
  (MR_PseudoTypeInfo) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0)
};

static const MR_ConstString mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_names_dice_label_count_0_0[3] = {
  (MR_String) "dlc_proc_label",
  (MR_String) "dlc_path_port",
  (MR_String) "dlc_counts"
};

static const MR_DuFunctorDesc mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_functor_desc_dice_label_count_0_0 = {
  (MR_String) "dice_label_count",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_types_dice_label_count_0_0,
  mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_names_dice_label_count_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_stag_ordered_dice_label_count_0_0[1] = { &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_functor_desc_dice_label_count_0_0 };

static const MR_DuPtagLayout mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_ptag_ordered_dice_label_count_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_stag_ordered_dice_label_count_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_name_ordered_dice_label_count_0[1] = { &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_functor_desc_dice_label_count_0_0 };

static const MR_Integer mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__functor_number_map_dice_label_count_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_label_count_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__slice_and_dice____Unify____dice_label_count_0_0_10001)),
  ((MR_Box) (mdbcomp__slice_and_dice____Compare____dice_label_count_0_0_10001)),
  (MR_String) "mdbcomp.slice_and_dice",
  (MR_String) "dice_label_count",
  { mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_name_ordered_dice_label_count_0 },
  { mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_ptag_ordered_dice_label_count_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__functor_number_map_dice_label_count_0,

};

const MR_TypeCtorInfo_Struct mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_proc_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdbcomp__slice_and_dice____Unify____dice_proc_map_0_0_10001)),
  ((MR_Box) (mdbcomp__slice_and_dice____Compare____dice_proc_map_0_0_10001)),
  (MR_String) "mdbcomp.slice_and_dice",
  (MR_String) "dice_proc_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&mdbcomp__slice_and_dice__tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_proc_label_0tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_proc_dice_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdbcomp__slice_and_dice____Unify____proc_dice_0_0_10001)),
  ((MR_Box) (mdbcomp__slice_and_dice____Compare____proc_dice_0_0_10001)),
  (MR_String) "mdbcomp.slice_and_dice",
  (MR_String) "proc_dice",
  { NULL },
  { (MR_PseudoTypeInfo) (&mdbcomp__slice_and_dice__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_proc_slice_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdbcomp__slice_and_dice____Unify____proc_slice_0_0_10001)),
  ((MR_Box) (mdbcomp__slice_and_dice____Compare____proc_slice_0_0_10001)),
  (MR_String) "mdbcomp.slice_and_dice",
  (MR_String) "proc_slice",
  { NULL },
  { (MR_PseudoTypeInfo) (&mdbcomp__slice_and_dice__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct2 mdbcomp__slice_and_dice__tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_proc_label_0tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0),
    (MR_TypeInfo) (&mdbcomp__slice_and_dice__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0)
  }
};

static const MR_PseudoTypeInfo mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_types_slice_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mdbcomp__slice_and_dice__tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_proc_label_0tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0)
};

static const MR_ConstString mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_names_slice_0_0[2] = {
  (MR_String) "num_tests",
  (MR_String) "slice_proc_map"
};

static const MR_DuFunctorDesc mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_functor_desc_slice_0_0 = {
  (MR_String) "slice",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_types_slice_0_0,
  mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_names_slice_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_stag_ordered_slice_0_0[1] = { &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_functor_desc_slice_0_0 };

static const MR_DuPtagLayout mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_ptag_ordered_slice_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_stag_ordered_slice_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_name_ordered_slice_0[1] = { &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_functor_desc_slice_0_0 };

static const MR_Integer mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__functor_number_map_slice_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__slice_and_dice____Unify____slice_0_0_10001)),
  ((MR_Box) (mdbcomp__slice_and_dice____Compare____slice_0_0_10001)),
  (MR_String) "mdbcomp.slice_and_dice",
  (MR_String) "slice",
  { mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_name_ordered_slice_0 },
  { mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_ptag_ordered_slice_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__functor_number_map_slice_0,

};

static const MR_PseudoTypeInfo mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_types_slice_exec_count_0_0[4] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_ConstString mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_names_slice_exec_count_0_0[4] = {
  (MR_String) "slice_filename",
  (MR_String) "slice_linenumber",
  (MR_String) "slice_count",
  (MR_String) "slice_tests"
};

static const MR_DuFunctorDesc mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_functor_desc_slice_exec_count_0_0 = {
  (MR_String) "slice_exec_count",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_types_slice_exec_count_0_0,
  mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_names_slice_exec_count_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_stag_ordered_slice_exec_count_0_0[1] = { &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_functor_desc_slice_exec_count_0_0 };

static const MR_DuPtagLayout mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_ptag_ordered_slice_exec_count_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_stag_ordered_slice_exec_count_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_name_ordered_slice_exec_count_0[1] = { &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_functor_desc_slice_exec_count_0_0 };

static const MR_Integer mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__functor_number_map_slice_exec_count_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__slice_and_dice____Unify____slice_exec_count_0_0_10001)),
  ((MR_Box) (mdbcomp__slice_and_dice____Compare____slice_exec_count_0_0_10001)),
  (MR_String) "mdbcomp.slice_and_dice",
  (MR_String) "slice_exec_count",
  { mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_name_ordered_slice_exec_count_0 },
  { mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_ptag_ordered_slice_exec_count_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__functor_number_map_slice_exec_count_0,

};

static const MR_PseudoTypeInfo mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_types_slice_label_count_0_0[3] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0),
  (MR_PseudoTypeInfo) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0),
  (MR_PseudoTypeInfo) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0)
};

static const MR_ConstString mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_names_slice_label_count_0_0[3] = {
  (MR_String) "slc_proc_label",
  (MR_String) "slc_path_port",
  (MR_String) "slc_counts"
};

static const MR_DuFunctorDesc mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_functor_desc_slice_label_count_0_0 = {
  (MR_String) "slice_label_count",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_types_slice_label_count_0_0,
  mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_names_slice_label_count_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_stag_ordered_slice_label_count_0_0[1] = { &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_functor_desc_slice_label_count_0_0 };

static const MR_DuPtagLayout mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_ptag_ordered_slice_label_count_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_stag_ordered_slice_label_count_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_name_ordered_slice_label_count_0[1] = { &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_functor_desc_slice_label_count_0_0 };

static const MR_Integer mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__functor_number_map_slice_label_count_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_label_count_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__slice_and_dice____Unify____slice_label_count_0_0_10001)),
  ((MR_Box) (mdbcomp__slice_and_dice____Compare____slice_label_count_0_0_10001)),
  (MR_String) "mdbcomp.slice_and_dice",
  (MR_String) "slice_label_count",
  { mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_name_ordered_slice_label_count_0 },
  { mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_ptag_ordered_slice_label_count_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__functor_number_map_slice_label_count_0,

};

const MR_TypeCtorInfo_Struct mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_proc_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdbcomp__slice_and_dice____Unify____slice_proc_map_0_0_10001)),
  ((MR_Box) (mdbcomp__slice_and_dice____Compare____slice_proc_map_0_0_10001)),
  (MR_String) "mdbcomp.slice_and_dice",
  (MR_String) "slice_proc_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&mdbcomp__slice_and_dice__tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_proc_label_0tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_EnumFunctorDesc mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__enum_functor_desc_trace_counts_kind_0_0 = {
  (MR_String) "pass_slice",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__enum_functor_desc_trace_counts_kind_0_1 = {
  (MR_String) "fail_slice",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__enum_ordinal_ordered_trace_counts_kind_0[2] = {
  &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__enum_functor_desc_trace_counts_kind_0_0,
  &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__enum_functor_desc_trace_counts_kind_0_1
};

static const MR_EnumFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__enum_name_ordered_trace_counts_kind_0[2] = {
  &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__enum_functor_desc_trace_counts_kind_0_1,
  &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__enum_functor_desc_trace_counts_kind_0_0
};

static const MR_Integer mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__functor_number_map_trace_counts_kind_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_trace_counts_kind_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdbcomp__slice_and_dice____Unify____trace_counts_kind_0_0_10001)),
  ((MR_Box) (mdbcomp__slice_and_dice____Compare____trace_counts_kind_0_0_10001)),
  (MR_String) "mdbcomp.slice_and_dice",
  (MR_String) "trace_counts_kind",
  { mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__enum_name_ordered_trace_counts_kind_0 },
  { mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__enum_ordinal_ordered_trace_counts_kind_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__functor_number_map_trace_counts_kind_0,

};

static MR_bool MR_CALL 
mdbcomp__slice_and_dice__IntroducedFrom__pred__format_slice_label_counts__634__1_2_p_0(
  MR_Integer HeadVar__1_55,
  MR_Integer HeadVar__2_87)
{
  MR_bool succeeded = (HeadVar__1_55 == HeadVar__2_87);

  return succeeded;
}

static void MR_CALL 
mdbcomp__slice_and_dice____Compare____trace_counts_kind_0_0(
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
mdbcomp__slice_and_dice____Unify____trace_counts_kind_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
mdbcomp__slice_and_dice____Compare____slice_proc_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&mdbcomp__slice_and_dice_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____slice_proc_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&mdbcomp__slice_and_dice_scalar_common_1[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
mdbcomp__slice_and_dice____Compare____slice_label_count_0_0(
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

    mdbcomp__prim_data____Compare____proc_label_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mdbcomp__trace_counts____Compare____path_port_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        mdbcomp__slice_and_dice____Compare____slice_exec_count_0_0(HeadVar__1_1, ArgX3_10, ArgY3_11);
    }
  }
}

static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____slice_label_count_0_0(
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

    succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = mdbcomp__trace_counts____Unify____path_port_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
        succeeded = mdbcomp__slice_and_dice____Unify____slice_exec_count_0_0(ArgX3_7, ArgY3_8);
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____slice_exec_count_0_0(
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
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Integer ArgX4_9 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Integer ArgY4_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));

    succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
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

void MR_CALL 
mdbcomp__slice_and_dice____Compare____slice_0_0(
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
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
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
      mercury__builtin__compare_3_p_0((MR_Word) (&mdbcomp__slice_and_dice_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____slice_0_0(
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
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      TypeInfo_9_9 = (MR_Word) (&mdbcomp__slice_and_dice_scalar_common_1[3]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

void MR_CALL 
mdbcomp__slice_and_dice____Compare____proc_slice_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&mdbcomp__slice_and_dice_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____proc_slice_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&mdbcomp__slice_and_dice_scalar_common_1[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
mdbcomp__slice_and_dice____Compare____proc_dice_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&mdbcomp__slice_and_dice_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____proc_dice_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&mdbcomp__slice_and_dice_scalar_common_1[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
mdbcomp__slice_and_dice____Compare____dice_proc_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&mdbcomp__slice_and_dice_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____dice_proc_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&mdbcomp__slice_and_dice_scalar_common_1[4]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
mdbcomp__slice_and_dice____Compare____dice_label_count_0_0(
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

    mdbcomp__prim_data____Compare____proc_label_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mdbcomp__trace_counts____Compare____path_port_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        mdbcomp__slice_and_dice____Compare____dice_exec_count_0_0(HeadVar__1_1, ArgX3_10, ArgY3_11);
    }
  }
}

static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____dice_label_count_0_0(
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

    succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = mdbcomp__trace_counts____Unify____path_port_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
        succeeded = mdbcomp__slice_and_dice____Unify____dice_exec_count_0_0(ArgX3_7, ArgY3_8);
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____dice_exec_count_0_0(
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
  {
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Integer ArgX4_9 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Integer ArgY4_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Integer ArgX5_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
    MR_Integer ArgY5_12 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Integer ArgX6_13 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 5))));
    MR_Integer ArgY6_14 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));

    succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        succeeded = (ArgX3_7 == ArgY3_8);
        if (succeeded)
        {
          succeeded = (ArgX4_9 == ArgY4_10);
          if (succeeded)
          {
            succeeded = (ArgX5_11 == ArgY5_12);
            if (succeeded)
              succeeded = (ArgX6_13 == ArgY6_14);
          }
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
mdbcomp__slice_and_dice____Compare____dice_0_0(
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
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
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
        mercury__builtin__compare_3_p_0((MR_Word) (&mdbcomp__slice_and_dice_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
    }
  }
}

MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____dice_0_0(
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
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        TypeInfo_11_11 = (MR_Word) (&mdbcomp__slice_and_dice_scalar_common_1[4]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
      }
    }
  }
  return succeeded;
}

static MR_String MR_CALL 
mdbcomp__slice_and_dice__format_path_port_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2;

  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Port_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 15);

        mdbcomp__prim_data__string_to_trace_port_2_p_1(&HeadVar__2_2, Port_3);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Path_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
        MR_String Var_7;
        MR_String Var_8;

        Var_8 = mdbcomp__goal_path__rev_goal_path_to_string_1_f_0(Path_5);
        Var_7 = mercury__string__f_43_43_2_f_0(Var_8, (MR_String) ">");
        HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "<", Var_7);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Port_10 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 15);
        MR_Word Path_11 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 1))));
        MR_String Var_12;
        MR_Word Var_13;
        MR_String Var_14;
        MR_String Var_16;
        MR_Word Var_17;

        {
          Var_13 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_13, 0) = (MR_Box) ((MR_Unsigned) (Port_10));
        }
        Var_12 = mdbcomp__slice_and_dice__format_path_port_1_f_0(Var_13);
        {
          Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_17, 0) = ((MR_Box) (Path_11));
        }
        Var_16 = mdbcomp__slice_and_dice__format_path_port_1_f_0(Var_17);
        Var_14 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_16);
        HeadVar__2_2 = mercury__string__f_43_43_2_f_0(Var_12, Var_14);
      }
      break;
  }
  return HeadVar__2_2;
}

static MR_String MR_CALL 
mdbcomp__slice_and_dice__format_proc_label_1_f_0(
  MR_Word ProcLabel_3)
{
  MR_String Str_4;

  if (((MR_tag((MR_Word) ProcLabel_3)) == (MR_Integer) 0))
  {
    MR_Word PredOrFunc_6 = ((MR_Unsigned) ((MR_hl_field(0, ProcLabel_3, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word SymModule_7 = ((MR_Word) ((MR_hl_field(0, ProcLabel_3, (MR_Integer) 2))));
    MR_String Name_8 = ((MR_String) ((MR_hl_field(0, ProcLabel_3, (MR_Integer) 3))));
    MR_Integer Arity0_9 = ((MR_Integer) ((MR_hl_field(0, ProcLabel_3, (MR_Integer) 4))));
    MR_Integer ModeNum_10 = ((MR_Integer) ((MR_hl_field(0, ProcLabel_3, (MR_Integer) 5))));
    MR_String Module_11;
    MR_String PredOrFuncStr_12;
    MR_Integer Arity_13;
    MR_String Var_74;
    MR_String Var_82;
    MR_String Var_83;
    MR_String Var_90;
    MR_String Var_92;
    MR_String Var_93;
    MR_String Var_95;
    MR_String Var_96;
    MR_String Var_98;

    Module_11 = mdbcomp__sym_name__sym_name_to_string_1_f_0(SymModule_7);
    switch (PredOrFunc_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          PredOrFuncStr_12 = (MR_String) "func";
          Arity_13 = (MR_Integer) ((MR_Unsigned) Arity0_9 - (MR_Unsigned) 1);
        }
        break;
      case (MR_Integer) 0:
        {
          PredOrFuncStr_12 = (MR_String) "pred";
          Arity_13 = Arity0_9;
        }
        break;
    }
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mdbcomp__slice_and_dice_scalar_common_3[0]), ModeNum_10, &Var_74);
    Var_82 = mercury__string__f_43_43_2_f_0((MR_String) "-", Var_74);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mdbcomp__slice_and_dice_scalar_common_3[0]), Arity_13, &Var_83);
    Var_90 = mercury__string__f_43_43_2_f_0(Var_83, Var_82);
    Var_92 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_90);
    Var_93 = mercury__string__f_43_43_2_f_0(Name_8, Var_92);
    Var_95 = mercury__string__f_43_43_2_f_0((MR_String) ".", Var_93);
    Var_96 = mercury__string__f_43_43_2_f_0(Module_11, Var_95);
    Var_98 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_96);
    Str_4 = mercury__string__f_43_43_2_f_0(PredOrFuncStr_12, Var_98);
  }
  else
  {
    MR_Word SpecialPredId_15 = ((MR_Unsigned) ((MR_hl_field(1, ProcLabel_3, (MR_Integer) 1))) & (MR_Integer) 3);
    MR_String TypeName_16 = ((MR_String) ((MR_hl_field(1, ProcLabel_3, (MR_Integer) 3))));
    MR_Integer TypeArity_17 = ((MR_Integer) ((MR_hl_field(1, ProcLabel_3, (MR_Integer) 4))));
    MR_String OpName_18;
    MR_Word SymModule_46 = ((MR_Word) ((MR_hl_field(1, ProcLabel_3, (MR_Integer) 2))));
    MR_Integer ModeNum_47 = ((MR_Integer) ((MR_hl_field(1, ProcLabel_3, (MR_Integer) 5))));
    MR_String Module_48;
    MR_String Var_49;
    MR_String Var_57;
    MR_String Var_58;
    MR_String Var_65;
    MR_String Var_67;
    MR_String Var_68;
    MR_String Var_70;
    MR_String Var_71;
    MR_String Var_73;
    MR_String Var_19;
    MR_Integer _OpArity_20;

    Module_48 = mdbcomp__sym_name__sym_name_to_string_1_f_0(SymModule_46);
    mdbcomp__prim_data__special_pred_name_arity_4_p_0(SpecialPredId_15, &OpName_18, &Var_19, &_OpArity_20);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mdbcomp__slice_and_dice_scalar_common_3[0]), ModeNum_47, &Var_49);
    Var_57 = mercury__string__f_43_43_2_f_0((MR_String) "-", Var_49);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mdbcomp__slice_and_dice_scalar_common_3[0]), TypeArity_17, &Var_58);
    Var_65 = mercury__string__f_43_43_2_f_0(Var_58, Var_57);
    Var_67 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_65);
    Var_68 = mercury__string__f_43_43_2_f_0(TypeName_16, Var_67);
    Var_70 = mercury__string__f_43_43_2_f_0((MR_String) ".", Var_68);
    Var_71 = mercury__string__f_43_43_2_f_0(Module_48, Var_70);
    Var_73 = mercury__string__f_43_43_2_f_0((MR_String) " for ", Var_71);
    Str_4 = mercury__string__f_43_43_2_f_0(OpName_18, Var_73);
  }
  return Str_4;
}

static MR_String MR_CALL 
mdbcomp__slice_and_dice__format_float_2_f_0(
  MR_Integer DecimalPlaces_4,
  MR_Float Flt_5)
{
  MR_String HeadVar__3_3;

  mercury__string__format__format_float_component_nowidth_prec_5_p_0((MR_Word) (&mdbcomp__slice_and_dice_scalar_common_3[0]), DecimalPlaces_4, (MR_Integer) 2, Flt_5, &HeadVar__3_3);
  return HeadVar__3_3;
}

static MR_String MR_CALL 
mdbcomp__slice_and_dice__bracket_int_1_f_0(
  MR_Integer X_3)
{
  MR_String HeadVar__2_2;
  MR_String Var_5;
  MR_String Var_6;

  Var_6 = mercury__string__int_to_string_thousands_1_f_0(X_3);
  Var_5 = mercury__string__f_43_43_2_f_0(Var_6, (MR_String) ")");
  HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_5);
  return HeadVar__2_2;
}

static MR_Float MR_CALL 
mdbcomp__slice_and_dice__get_suspicion_for_label_layout_2_f_0(
  MR_Word Dice_4,
  MR_Box LabelLayout_5)
{
  MR_bool succeeded;
  MR_Float Suspicion_6;
  MR_Box ProcLayout_7;
  MR_Word ProcLabel_8;
  MR_Word PathPort_9;
  MR_Word PathPortMap_10;
  MR_Word Var_12;
  MR_Box conv0_PathPortMap_10;

  ProcLayout_7 = mdbcomp__rtti_access__get_proc_layout_from_label_layout_1_f_0(LabelLayout_5);
  ProcLabel_8 = mdbcomp__rtti_access__get_proc_label_from_layout_1_f_0(ProcLayout_7);
  PathPort_9 = mdbcomp__rtti_access__get_path_port_from_label_layout_1_f_0(LabelLayout_5);
  Var_12 = ((MR_Word) ((MR_hl_field(0, Dice_4, (MR_Integer) 2))));
  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0), (MR_Word) (&mdbcomp__slice_and_dice_scalar_common_1[1]), Var_12, ((MR_Box) (ProcLabel_8)), &conv0_PathPortMap_10);
  if (succeeded)
  {
    PathPortMap_10 = ((MR_Word) (conv0_PathPortMap_10));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word ExecCount_11;
    MR_Box conv1_ExecCount_11;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0), (MR_Word) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0), PathPortMap_10, ((MR_Box) (PathPort_9)), &conv1_ExecCount_11);
    if (succeeded)
    {
      ExecCount_11 = ((MR_Word) (conv1_ExecCount_11));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Integer Var_13 = ((MR_Integer) ((MR_hl_field(0, ExecCount_11, (MR_Integer) 2))));
      MR_Integer Var_20 = ((MR_Integer) ((MR_hl_field(0, ExecCount_11, (MR_Integer) 4))));

      succeeded = (Var_20 > (MR_Integer) 0);
      if (succeeded)
        succeeded = (Var_13 == (MR_Integer) 0);
      if (succeeded)
        Suspicion_6 = (MR_Float) 1.0000000000000000;
      else
        Suspicion_6 = (MR_Float) 0.0000000000000000;
    }
    else
      Suspicion_6 = (MR_Float) 0.0000000000000000;
  }
  else
    Suspicion_6 = (MR_Float) 0.0000000000000000;
  return Suspicion_6;
}

static void MR_CALL 
mdbcomp__slice_and_dice__deconstruct_dice_label_count_8_p_0(
  MR_Word DiceLabelCount_9,
  MR_Word * ProcLabel_10,
  MR_Word * PathPort_11,
  MR_String * FormattedContext_12,
  MR_Integer * PassCount_13,
  MR_Integer * PassTests_14,
  MR_Integer * FailCount_15,
  MR_Integer * FailTests_16)
{
  MR_Word ExecCounts_17;
  MR_String FileName_18;
  MR_Integer LineNumber_19;
  MR_String Var_20;
  MR_String Var_22;

  *ProcLabel_10 = ((MR_Word) ((MR_hl_field(0, DiceLabelCount_9, (MR_Integer) 0))));
  *PathPort_11 = ((MR_Word) ((MR_hl_field(0, DiceLabelCount_9, (MR_Integer) 1))));
  ExecCounts_17 = ((MR_Word) ((MR_hl_field(0, DiceLabelCount_9, (MR_Integer) 2))));
  FileName_18 = ((MR_String) ((MR_hl_field(0, ExecCounts_17, (MR_Integer) 0))));
  LineNumber_19 = ((MR_Integer) ((MR_hl_field(0, ExecCounts_17, (MR_Integer) 1))));
  *PassCount_13 = ((MR_Integer) ((MR_hl_field(0, ExecCounts_17, (MR_Integer) 2))));
  *PassTests_14 = ((MR_Integer) ((MR_hl_field(0, ExecCounts_17, (MR_Integer) 3))));
  *FailCount_15 = ((MR_Integer) ((MR_hl_field(0, ExecCounts_17, (MR_Integer) 4))));
  *FailTests_16 = ((MR_Integer) ((MR_hl_field(0, ExecCounts_17, (MR_Integer) 5))));
  Var_22 = mercury__string__int_to_string_1_f_0(LineNumber_19);
  Var_20 = mercury__string__f_43_43_2_f_0((MR_String) ":", Var_22);
  *FormattedContext_12 = mercury__string__f_43_43_2_f_0(FileName_18, Var_20);
}

static void MR_CALL 
mdbcomp__slice_and_dice__make_dice_label_count_3_p_0(
  MR_Word ProcLabel_4,
  MR_Word HeadVar__2_2,
  MR_Word * DiceLabelCount_7)
{
  MR_Word PathPort_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word ExecCount_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *DiceLabelCount_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ProcLabel_4));
    MR_hl_field(0, base, 1) = ((MR_Box) (PathPort_5));
    MR_hl_field(0, base, 2) = ((MR_Box) (ExecCount_6));
  }
}

static void MR_CALL 
mdbcomp__slice_and_dice__append_dice_label_counts_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_DiceLabelCount_7;

  mdbcomp__slice_and_dice__make_dice_label_count_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_DiceLabelCount_7);
  *wrapper_arg_2 = ((MR_Box) (conv0_DiceLabelCount_7));
}

static void MR_CALL 
mdbcomp__slice_and_dice__append_dice_label_counts_4_p_0(
  MR_Word ProcLabel_5,
  MR_Word ProcDice_6,
  MR_Word STATE_VARIABLE_LabelCounts_0_10,
  MR_Word * STATE_VARIABLE_LabelCounts_11)
{
  MR_Word ProcExecCounts_8;
  MR_Word NewLabelCounts_9;
  MR_Word Var_12;

  mercury__map__to_assoc_list_2_p_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0), (MR_Word) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0), ProcDice_6, &ProcExecCounts_8);
  {
    Var_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_12, 0) = ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_10[4]));
    MR_hl_field(0, Var_12, 1) = ((MR_Box) (mdbcomp__slice_and_dice__append_dice_label_counts_4_p_0_1));
    MR_hl_field(0, Var_12, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_12, 3) = ((MR_Box) (ProcLabel_5));
  }
  mercury__list__map_3_p_0((MR_Word) (&mdbcomp__slice_and_dice_scalar_common_1[7]), (MR_Word) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_label_count_0), Var_12, ProcExecCounts_8, &NewLabelCounts_9);
  mercury__list__append_3_p_1((MR_Word) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_label_count_0), STATE_VARIABLE_LabelCounts_0_10, NewLabelCounts_9, STATE_VARIABLE_LabelCounts_11);
}

static void MR_CALL 
mdbcomp__slice_and_dice__dice_label_count_compare_4_p_0(
  MR_String SortStr_5,
  MR_Word LabelCountA_6,
  MR_Word LabelCountB_7,
  MR_Word * Result_8)
{
  MR_bool succeeded = (strcmp(SortStr_5, (MR_String) "") == 0);
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, LabelCountA_6, (MR_Integer) 2))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, LabelCountA_6, (MR_Integer) 1))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, LabelCountA_6, (MR_Integer) 0))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, LabelCountB_7, (MR_Integer) 2))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, LabelCountB_7, (MR_Integer) 1))));
  MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, LabelCountB_7, (MR_Integer) 0))));

  if (succeeded)
  {
    MR_Word ProcLabelResult_15;

    mdbcomp__prim_data____Compare____proc_label_0_0(&ProcLabelResult_15, Var_27, Var_30);
    switch (ProcLabelResult_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        *Result_8 = (MR_Integer) 1;
        break;
      case (MR_Integer) 0:
        {
          MR_Word PathPortResult_16;
          MR_Word ResultPrime_33;

          switch (MR_tag((MR_Word) Var_26)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word PortA_31 = ((MR_Unsigned) ((MR_hl_field(0, Var_26, (MR_Integer) 0))) & (MR_Integer) 15);
                MR_Word PortB_32;
                MR_Integer Var_52;
                MR_Integer Var_53;

                succeeded = ((MR_tag((MR_Word) Var_29)) == (MR_Integer) 0);
                if (succeeded)
                {
                  PortB_32 = ((MR_Unsigned) ((MR_hl_field(0, Var_29, (MR_Integer) 0))) & (MR_Integer) 15);
                  Var_52 = (MR_Integer) (PortA_31);
                  Var_53 = (MR_Integer) (PortB_32);
                  succeeded = (Var_52 < Var_53);
                  if (succeeded)
                    ResultPrime_33 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_52 > Var_53);
                    if (succeeded)
                      ResultPrime_33 = (MR_Integer) 2;
                    else
                      ResultPrime_33 = (MR_Integer) 0;
                  }
                  succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word RevPathA_34 = ((MR_Word) ((MR_hl_field(1, Var_26, (MR_Integer) 0))));
                MR_Word RevPathB_35;
                MR_Word PathA_36;
                MR_Word PathB_37;

                succeeded = ((MR_tag((MR_Word) Var_29)) == (MR_Integer) 1);
                if (succeeded)
                {
                  RevPathB_35 = ((MR_Word) ((MR_hl_field(1, Var_29, (MR_Integer) 0))));
                  mdbcomp__goal_path__rgp_to_fgp_2_p_0(RevPathA_34, &PathA_36);
                  mdbcomp__goal_path__rgp_to_fgp_2_p_0(RevPathB_35, &PathB_37);
                  mdbcomp__goal_path____Compare____forward_goal_path_0_0(&ResultPrime_33, PathA_36, PathB_37);
                  succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word PortA_41 = ((MR_Unsigned) ((MR_hl_field(2, Var_26, (MR_Integer) 0))) & (MR_Integer) 15);
                MR_Word PortB_42;
                MR_Word RevPathA_43 = ((MR_Word) ((MR_hl_field(2, Var_26, (MR_Integer) 1))));
                MR_Word RevPathB_44;
                MR_Integer Var_50;
                MR_Integer Var_51;

                succeeded = ((MR_tag((MR_Word) Var_29)) == (MR_Integer) 2);
                if (succeeded)
                {
                  PortB_42 = ((MR_Unsigned) ((MR_hl_field(2, Var_29, (MR_Integer) 0))) & (MR_Integer) 15);
                  RevPathB_44 = ((MR_Word) ((MR_hl_field(2, Var_29, (MR_Integer) 1))));
                  Var_50 = (MR_Integer) (PortA_41);
                  Var_51 = (MR_Integer) (PortB_42);
                  succeeded = (Var_50 < Var_51);
                  if (succeeded)
                    ResultPrime_33 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_50 > Var_51);
                    if (succeeded)
                      ResultPrime_33 = (MR_Integer) 2;
                    else
                    {
                      MR_Word PathA_39;
                      MR_Word PathB_40;

                      mdbcomp__goal_path__rgp_to_fgp_2_p_0(RevPathA_43, &PathA_39);
                      mdbcomp__goal_path__rgp_to_fgp_2_p_0(RevPathB_44, &PathB_40);
                      mdbcomp__goal_path____Compare____forward_goal_path_0_0(&ResultPrime_33, PathA_39, PathB_40);
                    }
                  }
                  succeeded = MR_TRUE;
                }
              }
              break;
          }
          if (succeeded)
            PathPortResult_16 = ResultPrime_33;
          else
            mdbcomp__trace_counts____Compare____path_port_0_0(&PathPortResult_16, Var_26, Var_29);
          switch (PathPortResult_16) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              *Result_8 = (MR_Integer) 1;
              break;
            case (MR_Integer) 0:
              mdbcomp__slice_and_dice____Compare____dice_exec_count_0_0(Result_8, Var_25, Var_28);
              break;
            case (MR_Integer) 2:
              *Result_8 = (MR_Integer) 2;
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        *Result_8 = (MR_Integer) 2;
        break;
    }
  }
  else
    mdbcomp__slice_and_dice__dice_exec_count_compare_4_p_0(SortStr_5, Var_25, Var_28, Result_8);
}

void MR_CALL 
mdbcomp__slice_and_dice____Compare____dice_exec_count_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_21 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_22 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_21 == CastY_22);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Integer ArgX4_13 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Integer ArgY4_14 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Integer ArgX5_16 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Integer ArgY5_17 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))));
    MR_Integer ArgX6_19 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Integer ArgY6_20 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 5))));
    MR_Word SubResult1_6;

    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
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

            succeeded = (ArgX5_16 < ArgY5_17);
            if (succeeded)
            {
              SubResult5_18 = (MR_Integer) 1;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = (ArgX5_16 > ArgY5_17);
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
              succeeded = (ArgX6_19 < ArgY6_20);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 1;
              else
              {
                succeeded = (ArgX6_19 > ArgY6_20);
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

static void MR_CALL 
mdbcomp__slice_and_dice__dice_exec_count_compare_4_p_0(
  MR_String SortStr_5,
  MR_Word ExecCount1_6,
  MR_Word ExecCount2_7,
  MR_Word * Result_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Char C_9;
    MR_String SortStrTail_10;

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = mercury__string__first_char_3_p_3(SortStr_5, &C_9, &SortStrTail_10);
    if (succeeded)
    {
      MR_Word Result0_13;
      MR_Integer CntA_11;
      MR_Integer CntB_12;
      MR_Integer Var_161 = ((MR_Integer) ((MR_hl_field(0, ExecCount1_6, (MR_Integer) 4))));
      MR_Integer Var_163 = ((MR_Integer) ((MR_hl_field(0, ExecCount1_6, (MR_Integer) 2))));
      MR_Integer Var_34;
      MR_Integer Var_35;

      switch (C_9) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Char) 68:
          {
            MR_Integer Var_22;
            MR_Integer Var_111;

            CntA_11 = (MR_Integer) ((MR_Unsigned) Var_163 - (MR_Unsigned) Var_161);
            Var_22 = ((MR_Integer) ((MR_hl_field(0, ExecCount2_7, (MR_Integer) 2))));
            Var_111 = ((MR_Integer) ((MR_hl_field(0, ExecCount2_7, (MR_Integer) 4))));
            CntB_12 = (MR_Integer) ((MR_Unsigned) Var_22 - (MR_Unsigned) Var_111);
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Char) 70:
          {
            CntA_11 = ((MR_Integer) ((MR_hl_field(0, ExecCount2_7, (MR_Integer) 4))));
            CntB_12 = Var_161;
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Char) 80:
          {
            CntA_11 = ((MR_Integer) ((MR_hl_field(0, ExecCount2_7, (MR_Integer) 2))));
            CntB_12 = Var_163;
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Char) 100:
          {
            MR_Integer Var_18;
            MR_Integer Var_91;

            CntA_11 = (MR_Integer) ((MR_Unsigned) Var_163 - (MR_Unsigned) Var_161);
            Var_18 = ((MR_Integer) ((MR_hl_field(0, ExecCount2_7, (MR_Integer) 2))));
            Var_91 = ((MR_Integer) ((MR_hl_field(0, ExecCount2_7, (MR_Integer) 4))));
            CntB_12 = (MR_Integer) ((MR_Unsigned) Var_18 - (MR_Unsigned) Var_91);
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Char) 102:
          {
            CntA_11 = Var_161;
            CntB_12 = ((MR_Integer) ((MR_hl_field(0, ExecCount2_7, (MR_Integer) 4))));
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Char) 112:
          {
            CntA_11 = Var_163;
            CntB_12 = ((MR_Integer) ((MR_hl_field(0, ExecCount2_7, (MR_Integer) 2))));
            succeeded = MR_TRUE;
          }
          break;
      }
      if (succeeded)
      {
        succeeded = (CntA_11 < CntB_12);
        if (succeeded)
          Result0_13 = (MR_Integer) 1;
        else
        {
          succeeded = (CntA_11 > CntB_12);
          if (succeeded)
            Result0_13 = (MR_Integer) 2;
          else
            Result0_13 = (MR_Integer) 0;
        }
      }
      else
      {
        MR_Float RatioA_14;
        MR_Float RatioB_15;

        switch (C_9) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Char) 83:
            {
              MR_Integer Var_28 = ((MR_Integer) ((MR_hl_field(0, ExecCount2_7, (MR_Integer) 2))));
              MR_Integer Var_30;
              MR_Integer Var_141 = ((MR_Integer) ((MR_hl_field(0, ExecCount2_7, (MR_Integer) 4))));
              MR_Integer Var_151;

              RatioA_14 = mdbcomp__slice_and_dice__suspicion_ratio_2_f_0(Var_28, Var_141);
              Var_30 = ((MR_Integer) ((MR_hl_field(0, ExecCount1_6, (MR_Integer) 2))));
              Var_151 = ((MR_Integer) ((MR_hl_field(0, ExecCount1_6, (MR_Integer) 4))));
              RatioB_15 = mdbcomp__slice_and_dice__suspicion_ratio_2_f_0(Var_30, Var_151);
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Char) 115:
            {
              MR_Integer Var_24 = ((MR_Integer) ((MR_hl_field(0, ExecCount1_6, (MR_Integer) 2))));
              MR_Integer Var_26;
              MR_Integer Var_121 = ((MR_Integer) ((MR_hl_field(0, ExecCount1_6, (MR_Integer) 4))));
              MR_Integer Var_131;

              RatioA_14 = mdbcomp__slice_and_dice__suspicion_ratio_2_f_0(Var_24, Var_121);
              Var_26 = ((MR_Integer) ((MR_hl_field(0, ExecCount2_7, (MR_Integer) 2))));
              Var_131 = ((MR_Integer) ((MR_hl_field(0, ExecCount2_7, (MR_Integer) 4))));
              RatioB_15 = mdbcomp__slice_and_dice__suspicion_ratio_2_f_0(Var_26, Var_131);
              succeeded = MR_TRUE;
            }
            break;
        }
        if (succeeded)
          mercury__private_builtin__builtin_compare_float_3_p_0(&Result0_13, RatioA_14, RatioB_15);
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140mdbcomp.slice_and_dice.dice_exec_count_compare\'/4", (MR_String) "invalid sort string");
            return;
          }
      }
      succeeded = (Result0_13 == (MR_Integer) 0);
      if (succeeded)
      {
        Var_34 = mercury__string__length_1_f_0(SortStrTail_10);
        Var_35 = (MR_Integer) 0;
        succeeded = (Var_34 > Var_35);
      }
      if (succeeded)
      {
        MR_String next_value_of_SortStr_5 = SortStrTail_10;

        // direct tailcall eliminated
        ;
        SortStr_5 = next_value_of_SortStr_5;
        continue;
      }
      else
        *Result_8 = Result0_13;
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140mdbcomp.slice_and_dice.dice_exec_count_compare\'/4", (MR_String) "empty sort string");
        return;
      }
    break;
  }
}

static MR_bool MR_CALL 
mdbcomp__slice_and_dice__dice_label_count_is_for_module_2_p_0(
  MR_String Module_3,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Label_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word ProcSymModule_9;
  MR_Word SymModule_18;

  if (((MR_tag((MR_Word) Label_4)) == (MR_Integer) 0))
    ProcSymModule_9 = ((MR_Word) ((MR_hl_field(0, Label_4, (MR_Integer) 2))));
  else
    ProcSymModule_9 = ((MR_Word) ((MR_hl_field(1, Label_4, (MR_Integer) 2))));
  SymModule_18 = mdbcomp__sym_name__string_to_sym_name_1_f_0(Module_3);
  succeeded = mdbcomp__sym_name__is_submodule_2_p_0(ProcSymModule_9, SymModule_18);
  return succeeded;
}

static void MR_CALL 
mdbcomp__slice_and_dice__read_dice_to_string_no_limit_9_p_0(
  MR_String PassFile_10,
  MR_String FailFile_11,
  MR_String SortStr_12,
  MR_Integer MaxRow_13,
  MR_String Module_14,
  MR_String * DiceStr_15,
  MR_String * Problem_16)
{
  mdbcomp__slice_and_dice__read_dice_to_string_12_p_0(PassFile_10, FailFile_11, SortStr_12, MaxRow_13, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Module_14, DiceStr_15, Problem_16);
}

static void MR_CALL 
mdbcomp__slice_and_dice__deconstruct_slice_label_count_6_p_0(
  MR_Word SliceLabelCount_7,
  MR_Word * PathPort_8,
  MR_Word * ProcLabel_9,
  MR_String * FormattedContext_10,
  MR_Integer * Count_11,
  MR_Integer * Tests_12)
{
  MR_Word ExecCounts_13;
  MR_String FileName_14;
  MR_Integer LineNumber_15;
  MR_String Var_16;
  MR_String Var_18;

  *PathPort_8 = ((MR_Word) ((MR_hl_field(0, SliceLabelCount_7, (MR_Integer) 0))));
  *ProcLabel_9 = ((MR_Word) ((MR_hl_field(0, SliceLabelCount_7, (MR_Integer) 1))));
  ExecCounts_13 = ((MR_Word) ((MR_hl_field(0, SliceLabelCount_7, (MR_Integer) 2))));
  FileName_14 = ((MR_String) ((MR_hl_field(0, ExecCounts_13, (MR_Integer) 0))));
  LineNumber_15 = ((MR_Integer) ((MR_hl_field(0, ExecCounts_13, (MR_Integer) 1))));
  *Count_11 = ((MR_Integer) ((MR_hl_field(0, ExecCounts_13, (MR_Integer) 2))));
  *Tests_12 = ((MR_Integer) ((MR_hl_field(0, ExecCounts_13, (MR_Integer) 3))));
  Var_18 = mercury__string__int_to_string_1_f_0(LineNumber_15);
  Var_16 = mercury__string__f_43_43_2_f_0((MR_String) ":", Var_18);
  *FormattedContext_10 = mercury__string__f_43_43_2_f_0(FileName_14, Var_16);
}

static void MR_CALL 
mdbcomp__slice_and_dice__make_slice_label_count_3_p_0(
  MR_Word ProcLabel_4,
  MR_Word HeadVar__2_2,
  MR_Word * SliceLabelCount_7)
{
  MR_Word PathPort_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word ExecCount_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *SliceLabelCount_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ProcLabel_4));
    MR_hl_field(0, base, 1) = ((MR_Box) (PathPort_5));
    MR_hl_field(0, base, 2) = ((MR_Box) (ExecCount_6));
  }
}

static void MR_CALL 
mdbcomp__slice_and_dice__append_slice_label_counts_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_SliceLabelCount_7;

  mdbcomp__slice_and_dice__make_slice_label_count_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_SliceLabelCount_7);
  *wrapper_arg_2 = ((MR_Box) (conv0_SliceLabelCount_7));
}

static void MR_CALL 
mdbcomp__slice_and_dice__append_slice_label_counts_4_p_0(
  MR_Word ProcLabel_5,
  MR_Word ProcSlice_6,
  MR_Word STATE_VARIABLE_LabelCounts_0_10,
  MR_Word * STATE_VARIABLE_LabelCounts_11)
{
  MR_Word ProcExecCounts_8;
  MR_Word NewLabelCounts_9;
  MR_Word Var_12;
  MR_Word Var_14;

  mercury__map__to_assoc_list_2_p_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0), (MR_Word) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0), ProcSlice_6, &ProcExecCounts_8);
  {
    Var_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_12, 0) = ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_10[3]));
    MR_hl_field(0, Var_12, 1) = ((MR_Box) (mdbcomp__slice_and_dice__append_slice_label_counts_4_p_0_1));
    MR_hl_field(0, Var_12, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_12, 3) = ((MR_Box) (ProcLabel_5));
  }
  mercury__list__map_3_p_0((MR_Word) (&mdbcomp__slice_and_dice_scalar_common_1[5]), (MR_Word) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_label_count_0), Var_12, ProcExecCounts_8, &NewLabelCounts_9);
  Var_14 = mercury__cord__from_list_1_f_0((MR_Word) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_label_count_0), NewLabelCounts_9);
  *STATE_VARIABLE_LabelCounts_11 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_label_count_0), STATE_VARIABLE_LabelCounts_0_10, Var_14);
}

static void MR_CALL 
mdbcomp__slice_and_dice__slice_label_count_compare_4_p_0(
  MR_String SortStr_5,
  MR_Word LabelCountA_6,
  MR_Word LabelCountB_7,
  MR_Word * Result_8)
{
  MR_bool succeeded = (strcmp(SortStr_5, (MR_String) "") == 0);
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, LabelCountA_6, (MR_Integer) 2))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, LabelCountA_6, (MR_Integer) 1))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, LabelCountA_6, (MR_Integer) 0))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, LabelCountB_7, (MR_Integer) 2))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, LabelCountB_7, (MR_Integer) 1))));
  MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, LabelCountB_7, (MR_Integer) 0))));

  if (succeeded)
  {
    MR_Word ProcLabelResult_15;

    mdbcomp__prim_data____Compare____proc_label_0_0(&ProcLabelResult_15, Var_27, Var_30);
    switch (ProcLabelResult_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        *Result_8 = (MR_Integer) 1;
        break;
      case (MR_Integer) 0:
        {
          MR_Word PathPortResult_16;
          MR_Word ResultPrime_33;

          switch (MR_tag((MR_Word) Var_26)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word PortA_31 = ((MR_Unsigned) ((MR_hl_field(0, Var_26, (MR_Integer) 0))) & (MR_Integer) 15);
                MR_Word PortB_32;
                MR_Integer Var_52;
                MR_Integer Var_53;

                succeeded = ((MR_tag((MR_Word) Var_29)) == (MR_Integer) 0);
                if (succeeded)
                {
                  PortB_32 = ((MR_Unsigned) ((MR_hl_field(0, Var_29, (MR_Integer) 0))) & (MR_Integer) 15);
                  Var_52 = (MR_Integer) (PortA_31);
                  Var_53 = (MR_Integer) (PortB_32);
                  succeeded = (Var_52 < Var_53);
                  if (succeeded)
                    ResultPrime_33 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_52 > Var_53);
                    if (succeeded)
                      ResultPrime_33 = (MR_Integer) 2;
                    else
                      ResultPrime_33 = (MR_Integer) 0;
                  }
                  succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word RevPathA_34 = ((MR_Word) ((MR_hl_field(1, Var_26, (MR_Integer) 0))));
                MR_Word RevPathB_35;
                MR_Word PathA_36;
                MR_Word PathB_37;

                succeeded = ((MR_tag((MR_Word) Var_29)) == (MR_Integer) 1);
                if (succeeded)
                {
                  RevPathB_35 = ((MR_Word) ((MR_hl_field(1, Var_29, (MR_Integer) 0))));
                  mdbcomp__goal_path__rgp_to_fgp_2_p_0(RevPathA_34, &PathA_36);
                  mdbcomp__goal_path__rgp_to_fgp_2_p_0(RevPathB_35, &PathB_37);
                  mdbcomp__goal_path____Compare____forward_goal_path_0_0(&ResultPrime_33, PathA_36, PathB_37);
                  succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word PortA_41 = ((MR_Unsigned) ((MR_hl_field(2, Var_26, (MR_Integer) 0))) & (MR_Integer) 15);
                MR_Word PortB_42;
                MR_Word RevPathA_43 = ((MR_Word) ((MR_hl_field(2, Var_26, (MR_Integer) 1))));
                MR_Word RevPathB_44;
                MR_Integer Var_50;
                MR_Integer Var_51;

                succeeded = ((MR_tag((MR_Word) Var_29)) == (MR_Integer) 2);
                if (succeeded)
                {
                  PortB_42 = ((MR_Unsigned) ((MR_hl_field(2, Var_29, (MR_Integer) 0))) & (MR_Integer) 15);
                  RevPathB_44 = ((MR_Word) ((MR_hl_field(2, Var_29, (MR_Integer) 1))));
                  Var_50 = (MR_Integer) (PortA_41);
                  Var_51 = (MR_Integer) (PortB_42);
                  succeeded = (Var_50 < Var_51);
                  if (succeeded)
                    ResultPrime_33 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_50 > Var_51);
                    if (succeeded)
                      ResultPrime_33 = (MR_Integer) 2;
                    else
                    {
                      MR_Word PathA_39;
                      MR_Word PathB_40;

                      mdbcomp__goal_path__rgp_to_fgp_2_p_0(RevPathA_43, &PathA_39);
                      mdbcomp__goal_path__rgp_to_fgp_2_p_0(RevPathB_44, &PathB_40);
                      mdbcomp__goal_path____Compare____forward_goal_path_0_0(&ResultPrime_33, PathA_39, PathB_40);
                    }
                  }
                  succeeded = MR_TRUE;
                }
              }
              break;
          }
          if (succeeded)
            PathPortResult_16 = ResultPrime_33;
          else
            mdbcomp__trace_counts____Compare____path_port_0_0(&PathPortResult_16, Var_26, Var_29);
          switch (PathPortResult_16) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              *Result_8 = (MR_Integer) 1;
              break;
            case (MR_Integer) 0:
              mdbcomp__slice_and_dice____Compare____slice_exec_count_0_0(Result_8, Var_25, Var_28);
              break;
            case (MR_Integer) 2:
              *Result_8 = (MR_Integer) 2;
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        *Result_8 = (MR_Integer) 2;
        break;
    }
  }
  else
    mdbcomp__slice_and_dice__slice_exec_count_compare_4_p_0(SortStr_5, Var_25, Var_28, Result_8);
}

void MR_CALL 
mdbcomp__slice_and_dice____Compare____slice_exec_count_0_0(
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
    MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Integer ArgX4_13 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Integer ArgY4_14 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word SubResult1_6;

    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
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
          succeeded = (ArgX4_13 < ArgY4_14);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 1;
          else
          {
            succeeded = (ArgX4_13 > ArgY4_14);
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

static void MR_CALL 
mdbcomp__slice_and_dice__slice_exec_count_compare_4_p_0(
  MR_String SortStr_5,
  MR_Word ExecCount1_6,
  MR_Word ExecCount2_7,
  MR_Word * Result_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Char C_9;
    MR_String SortStrTail_10;

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = mercury__string__first_char_3_p_3(SortStr_5, &C_9, &SortStrTail_10);
    if (succeeded)
    {
      MR_Word Result0_13;
      MR_Integer CntA_11;
      MR_Integer CntB_12;
      MR_Integer Var_45 = ((MR_Integer) ((MR_hl_field(0, ExecCount1_6, (MR_Integer) 3))));
      MR_Integer Var_46 = ((MR_Integer) ((MR_hl_field(0, ExecCount1_6, (MR_Integer) 2))));
      MR_Integer Var_49 = ((MR_Integer) ((MR_hl_field(0, ExecCount2_7, (MR_Integer) 3))));
      MR_Integer Var_50 = ((MR_Integer) ((MR_hl_field(0, ExecCount2_7, (MR_Integer) 2))));
      MR_Integer Var_16;
      MR_Integer Var_17;

      switch (C_9) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Char) 67:
          {
            CntA_11 = Var_50;
            CntB_12 = Var_46;
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Char) 84:
          {
            CntA_11 = Var_49;
            CntB_12 = Var_45;
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Char) 99:
          {
            CntA_11 = Var_46;
            CntB_12 = Var_50;
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Char) 116:
          {
            CntA_11 = Var_45;
            CntB_12 = Var_49;
            succeeded = MR_TRUE;
          }
          break;
      }
      if (succeeded)
      {
        succeeded = (CntA_11 < CntB_12);
        if (succeeded)
          Result0_13 = (MR_Integer) 1;
        else
        {
          succeeded = (CntA_11 > CntB_12);
          if (succeeded)
            Result0_13 = (MR_Integer) 2;
          else
            Result0_13 = (MR_Integer) 0;
        }
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140mdbcomp.slice_and_dice.slice_exec_count_compare\'/4", (MR_String) "invalid sort string");
          return;
        }
      succeeded = (Result0_13 == (MR_Integer) 0);
      if (succeeded)
      {
        Var_16 = mercury__string__length_1_f_0(SortStrTail_10);
        Var_17 = (MR_Integer) 0;
        succeeded = (Var_16 > Var_17);
      }
      if (succeeded)
      {
        MR_String next_value_of_SortStr_5 = SortStrTail_10;

        // direct tailcall eliminated
        ;
        SortStr_5 = next_value_of_SortStr_5;
        continue;
      }
      else
        *Result_8 = Result0_13;
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140mdbcomp.slice_and_dice.slice_exec_count_compare\'/4", (MR_String) "empty sort string");
        return;
      }
    break;
  }
}

static MR_bool MR_CALL 
mdbcomp__slice_and_dice__slice_label_count_is_zero_1_p_0(
  MR_Word SliceLabelCount_2)
{
  MR_bool succeeded;
  MR_Integer Var_3;
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, SliceLabelCount_2, (MR_Integer) 2))));

  Var_3 = ((MR_Integer) ((MR_hl_field(0, Var_5, (MR_Integer) 2))));
  succeeded = (Var_3 > (MR_Integer) 0);
  return succeeded;
}

static MR_bool MR_CALL 
mdbcomp__slice_and_dice__slice_label_count_is_for_module_2_p_0(
  MR_String Module_3,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Label_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word ProcSymModule_9;
  MR_Word SymModule_18;

  if (((MR_tag((MR_Word) Label_4)) == (MR_Integer) 0))
    ProcSymModule_9 = ((MR_Word) ((MR_hl_field(0, Label_4, (MR_Integer) 2))));
  else
    ProcSymModule_9 = ((MR_Word) ((MR_hl_field(1, Label_4, (MR_Integer) 2))));
  SymModule_18 = mdbcomp__sym_name__string_to_sym_name_1_f_0(Module_3);
  succeeded = mdbcomp__sym_name__is_submodule_2_p_0(ProcSymModule_9, SymModule_18);
  return succeeded;
}

static void MR_CALL 
mdbcomp__slice_and_dice__dice_add_trace_count_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word LineNoAndCount_2,
  MR_Word ExecCounts0_3,
  MR_Word * ExecCounts_4)
{
  MR_Integer Var_33 = ((MR_Integer) ((MR_hl_field(0, LineNoAndCount_2, (MR_Integer) 2))));
  MR_Integer Var_34 = ((MR_Integer) ((MR_hl_field(0, LineNoAndCount_2, (MR_Integer) 1))));
  MR_Integer Var_36 = ((MR_Integer) ((MR_hl_field(0, ExecCounts0_3, (MR_Integer) 5))));
  MR_Integer Var_37 = ((MR_Integer) ((MR_hl_field(0, ExecCounts0_3, (MR_Integer) 4))));
  MR_Integer Var_38 = ((MR_Integer) ((MR_hl_field(0, ExecCounts0_3, (MR_Integer) 3))));
  MR_Integer Var_39 = ((MR_Integer) ((MR_hl_field(0, ExecCounts0_3, (MR_Integer) 2))));
  MR_Integer Var_40 = ((MR_Integer) ((MR_hl_field(0, ExecCounts0_3, (MR_Integer) 1))));
  MR_String Var_41 = ((MR_String) ((MR_hl_field(0, ExecCounts0_3, (MR_Integer) 0))));

  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Integer Var_31 = (MR_Integer) ((MR_Unsigned) Var_37 + (MR_Unsigned) Var_34);
        MR_Integer Var_32 = (MR_Integer) ((MR_Unsigned) Var_36 + (MR_Unsigned) Var_33);

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          *ExecCounts_4 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_41));
          MR_hl_field(0, base, 1) = ((MR_Box) (Var_40));
          MR_hl_field(0, base, 2) = ((MR_Box) (Var_39));
          MR_hl_field(0, base, 3) = ((MR_Box) (Var_38));
          MR_hl_field(0, base, 4) = ((MR_Box) (Var_31));
          MR_hl_field(0, base, 5) = ((MR_Box) (Var_32));
        }
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Integer Var_17 = (MR_Integer) ((MR_Unsigned) Var_39 + (MR_Unsigned) Var_34);
        MR_Integer Var_18 = (MR_Integer) ((MR_Unsigned) Var_38 + (MR_Unsigned) Var_33);

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          *ExecCounts_4 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_41));
          MR_hl_field(0, base, 1) = ((MR_Box) (Var_40));
          MR_hl_field(0, base, 2) = ((MR_Box) (Var_17));
          MR_hl_field(0, base, 3) = ((MR_Box) (Var_18));
          MR_hl_field(0, base, 4) = ((MR_Box) (Var_37));
          MR_hl_field(0, base, 5) = ((MR_Box) (Var_36));
        }
      }
      break;
  }
}

static void MR_CALL 
mdbcomp__slice_and_dice__dice_merge_path_port_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_ExecCounts_4;

  mdbcomp__slice_and_dice__dice_add_trace_count_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_ExecCounts_4);
  *wrapper_arg_2 = ((MR_Box) (conv0_ExecCounts_4));
}

static void MR_CALL 
mdbcomp__slice_and_dice__dice_merge_path_port_6_p_0(
  MR_String FileName_7,
  MR_Word Kind_8,
  MR_Word PathPort_9,
  MR_Word LineNoAndCount_10,
  MR_Word STATE_VARIABLE_ProcDice_0_17,
  MR_Word * STATE_VARIABLE_ProcDice_18)
{
  MR_bool succeeded;
  MR_Word UpdatedProcDice_12;
  MR_Word Var_19;

  {
    Var_19 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_19, 0) = ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_4[5]));
    MR_hl_field(0, Var_19, 1) = ((MR_Box) (mdbcomp__slice_and_dice__dice_merge_path_port_6_p_0_1));
    MR_hl_field(0, Var_19, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_19, 3) = ((MR_Box) (Kind_8));
    MR_hl_field(0, Var_19, 4) = ((MR_Box) (LineNoAndCount_10));
  }
  succeeded = mercury__map__transform_value_4_p_0((MR_Word) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0), (MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0), Var_19, ((MR_Box) (PathPort_9)), STATE_VARIABLE_ProcDice_0_17, &UpdatedProcDice_12);
  if (succeeded)
    *STATE_VARIABLE_ProcDice_18 = UpdatedProcDice_12;
  else
  {
    MR_Integer LineNumber_13 = ((MR_Integer) ((MR_hl_field(0, LineNoAndCount_10, (MR_Integer) 0))));
    MR_Integer ExecCount_14 = ((MR_Integer) ((MR_hl_field(0, LineNoAndCount_10, (MR_Integer) 1))));
    MR_Integer NumTests_15 = ((MR_Integer) ((MR_hl_field(0, LineNoAndCount_10, (MR_Integer) 2))));
    MR_Word InitCount_16;

    switch (Kind_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          InitCount_16 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, InitCount_16, 0) = ((MR_Box) (FileName_7));
          MR_hl_field(0, InitCount_16, 1) = ((MR_Box) (LineNumber_13));
          MR_hl_field(0, InitCount_16, 2) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(0, InitCount_16, 3) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(0, InitCount_16, 4) = ((MR_Box) (ExecCount_14));
          MR_hl_field(0, InitCount_16, 5) = ((MR_Box) (NumTests_15));
        }
        break;
      case (MR_Integer) 0:
        {
          InitCount_16 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, InitCount_16, 0) = ((MR_Box) (FileName_7));
          MR_hl_field(0, InitCount_16, 1) = ((MR_Box) (LineNumber_13));
          MR_hl_field(0, InitCount_16, 2) = ((MR_Box) (ExecCount_14));
          MR_hl_field(0, InitCount_16, 3) = ((MR_Box) (NumTests_15));
          MR_hl_field(0, InitCount_16, 4) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(0, InitCount_16, 5) = ((MR_Box) ((MR_Integer) 0));
        }
        break;
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0), (MR_Word) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0), ((MR_Box) (PathPort_9)), ((MR_Box) (InitCount_16)), STATE_VARIABLE_ProcDice_0_17, STATE_VARIABLE_ProcDice_18);
  }
}

static void MR_CALL 
mdbcomp__slice_and_dice__dice_merge_proc_trace_counts_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_ProcDice_18;

  mdbcomp__slice_and_dice__dice_merge_path_port_6_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv3_STATE_VARIABLE_ProcDice_18);
  *wrapper_arg_4 = ((MR_Box) (conv3_STATE_VARIABLE_ProcDice_18));
}

static void MR_CALL 
mdbcomp__slice_and_dice__dice_merge_proc_trace_counts_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_ProcDice_18;

  mdbcomp__slice_and_dice__dice_merge_path_port_6_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_ProcDice_18);
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_ProcDice_18));
}

static void MR_CALL 
mdbcomp__slice_and_dice__dice_merge_proc_trace_counts_5_p_0(
  MR_Word Kind_6,
  MR_Word ProcLabelAndFile_7,
  MR_Word ProcTraceCounts_8,
  MR_Word STATE_VARIABLE_DiceProcMap_0_15,
  MR_Word * STATE_VARIABLE_DiceProcMap_16)
{
  MR_bool succeeded;
  MR_String FileName_11 = ((MR_String) ((MR_hl_field(0, ProcLabelAndFile_7, (MR_Integer) 1))));
  MR_Word ProcLabel_12 = ((MR_Word) ((MR_hl_field(0, ProcLabelAndFile_7, (MR_Integer) 2))));
  MR_Word FoundProcDice_13;
  MR_Box conv0_FoundProcDice_13;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0), (MR_Word) (&mdbcomp__slice_and_dice_scalar_common_1[1]), STATE_VARIABLE_DiceProcMap_0_15, ((MR_Box) (ProcLabel_12)), &conv0_FoundProcDice_13);
  if (succeeded)
  {
    FoundProcDice_13 = ((MR_Word) (conv0_FoundProcDice_13));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word MergedProcDice_14;
    MR_Word Var_17;
    MR_Box conv2_MergedProcDice_14;

    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_17, 0) = ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_5[1]));
      MR_hl_field(0, Var_17, 1) = ((MR_Box) (mdbcomp__slice_and_dice__dice_merge_proc_trace_counts_5_p_0_1));
      MR_hl_field(0, Var_17, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_17, 3) = ((MR_Box) (FileName_11));
      MR_hl_field(0, Var_17, 4) = ((MR_Box) (Kind_6));
    }
    mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0), (MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0), (MR_Word) (&mdbcomp__slice_and_dice_scalar_common_1[1]), Var_17, ProcTraceCounts_8, ((MR_Box) (FoundProcDice_13)), &conv2_MergedProcDice_14);
    MergedProcDice_14 = ((MR_Word) (conv2_MergedProcDice_14));
    mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0), (MR_Word) (&mdbcomp__slice_and_dice_scalar_common_1[1]), ((MR_Box) (ProcLabel_12)), ((MR_Box) (MergedProcDice_14)), STATE_VARIABLE_DiceProcMap_0_15, STATE_VARIABLE_DiceProcMap_16);
  }
  else
  {
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word MergedProcDice_22;
    MR_Box conv4_MergedProcDice_22;

    {
      Var_19 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_19, 0) = ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_5[1]));
      MR_hl_field(0, Var_19, 1) = ((MR_Box) (mdbcomp__slice_and_dice__dice_merge_proc_trace_counts_5_p_0_2));
      MR_hl_field(0, Var_19, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_19, 3) = ((MR_Box) (FileName_11));
      MR_hl_field(0, Var_19, 4) = ((MR_Box) (Kind_6));
    }
    Var_20 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0), (MR_Word) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0));
    mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0), (MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0), (MR_Word) (&mdbcomp__slice_and_dice_scalar_common_1[1]), Var_19, ProcTraceCounts_8, ((MR_Box) (Var_20)), &conv4_MergedProcDice_22);
    MergedProcDice_22 = ((MR_Word) (conv4_MergedProcDice_22));
    mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0), (MR_Word) (&mdbcomp__slice_and_dice_scalar_common_1[1]), ((MR_Box) (ProcLabel_12)), ((MR_Box) (MergedProcDice_22)), STATE_VARIABLE_DiceProcMap_0_15, STATE_VARIABLE_DiceProcMap_16);
  }
}

static void MR_CALL 
mdbcomp__slice_and_dice__det_maybe_dice_error_to_dice_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Dice_2)
{
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
    {
      mercury__require__error_1_p_0((MR_String) "det_maybe_dice_error_to_dice: result is error");
      return;
    }
  else
    *Dice_2 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
}

static void MR_CALL 
mdbcomp__slice_and_dice__maybe_dice_error_to_problem_string_2_p_0(
  MR_Word HeadVar__1_1,
  MR_String * HeadVar__2_2)
{
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
    *HeadVar__2_2 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
  else
    *HeadVar__2_2 = (MR_String) "";
}

static void MR_CALL 
mdbcomp__slice_and_dice__slice_add_trace_count_3_p_0(
  MR_Word LineNoAndCount_4,
  MR_Word ExecCounts0_5,
  MR_Word * ExecCounts_6)
{
  MR_Integer ExecCount_8 = ((MR_Integer) ((MR_hl_field(0, LineNoAndCount_4, (MR_Integer) 1))));
  MR_Integer NumTests_9 = ((MR_Integer) ((MR_hl_field(0, LineNoAndCount_4, (MR_Integer) 2))));
  MR_String FileName_10 = ((MR_String) ((MR_hl_field(0, ExecCounts0_5, (MR_Integer) 0))));
  MR_Integer LineNumber_11 = ((MR_Integer) ((MR_hl_field(0, ExecCounts0_5, (MR_Integer) 1))));
  MR_Integer Exec_12 = ((MR_Integer) ((MR_hl_field(0, ExecCounts0_5, (MR_Integer) 2))));
  MR_Integer Tests_13 = ((MR_Integer) ((MR_hl_field(0, ExecCounts0_5, (MR_Integer) 3))));
  MR_Integer Var_14 = (MR_Integer) ((MR_Unsigned) Exec_12 + (MR_Unsigned) ExecCount_8);
  MR_Integer Var_15 = (MR_Integer) ((MR_Unsigned) Tests_13 + (MR_Unsigned) NumTests_9);

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *ExecCounts_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (FileName_10));
    MR_hl_field(0, base, 1) = ((MR_Box) (LineNumber_11));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_15));
  }
}

static void MR_CALL 
mdbcomp__slice_and_dice__slice_merge_path_port_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_ExecCounts_6;

  mdbcomp__slice_and_dice__slice_add_trace_count_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_ExecCounts_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_ExecCounts_6));
}

static void MR_CALL 
mdbcomp__slice_and_dice__slice_merge_path_port_5_p_0(
  MR_String FileName_6,
  MR_Word PathPort_7,
  MR_Word LineNoAndCount_8,
  MR_Word STATE_VARIABLE_ProcSlice_0_15,
  MR_Word * STATE_VARIABLE_ProcSlice_16)
{
  MR_bool succeeded;
  MR_Word UpdatedProcSlice_10;
  MR_Word Var_17;

  {
    Var_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_17, 0) = ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_10[2]));
    MR_hl_field(0, Var_17, 1) = ((MR_Box) (mdbcomp__slice_and_dice__slice_merge_path_port_5_p_0_1));
    MR_hl_field(0, Var_17, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_17, 3) = ((MR_Box) (LineNoAndCount_8));
  }
  succeeded = mercury__map__transform_value_4_p_0((MR_Word) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0), (MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0), Var_17, ((MR_Box) (PathPort_7)), STATE_VARIABLE_ProcSlice_0_15, &UpdatedProcSlice_10);
  if (succeeded)
    *STATE_VARIABLE_ProcSlice_16 = UpdatedProcSlice_10;
  else
  {
    MR_Integer LineNumber_11 = ((MR_Integer) ((MR_hl_field(0, LineNoAndCount_8, (MR_Integer) 0))));
    MR_Integer ExecCount_12 = ((MR_Integer) ((MR_hl_field(0, LineNoAndCount_8, (MR_Integer) 1))));
    MR_Integer NumTests_13 = ((MR_Integer) ((MR_hl_field(0, LineNoAndCount_8, (MR_Integer) 2))));
    MR_Word SliceExecCount_14;

    {
      SliceExecCount_14 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, SliceExecCount_14, 0) = ((MR_Box) (FileName_6));
      MR_hl_field(0, SliceExecCount_14, 1) = ((MR_Box) (LineNumber_11));
      MR_hl_field(0, SliceExecCount_14, 2) = ((MR_Box) (ExecCount_12));
      MR_hl_field(0, SliceExecCount_14, 3) = ((MR_Box) (NumTests_13));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0), (MR_Word) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0), ((MR_Box) (PathPort_7)), ((MR_Box) (SliceExecCount_14)), STATE_VARIABLE_ProcSlice_0_15, STATE_VARIABLE_ProcSlice_16);
  }
}

static void MR_CALL 
mdbcomp__slice_and_dice__slice_merge_proc_trace_counts_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_ProcSlice_16;

  mdbcomp__slice_and_dice__slice_merge_path_port_5_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv3_STATE_VARIABLE_ProcSlice_16);
  *wrapper_arg_4 = ((MR_Box) (conv3_STATE_VARIABLE_ProcSlice_16));
}

static void MR_CALL 
mdbcomp__slice_and_dice__slice_merge_proc_trace_counts_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_ProcSlice_16;

  mdbcomp__slice_and_dice__slice_merge_path_port_5_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_ProcSlice_16);
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_ProcSlice_16));
}

static void MR_CALL 
mdbcomp__slice_and_dice__slice_merge_proc_trace_counts_4_p_0(
  MR_Word ProcLabelAndFile_5,
  MR_Word ProcTraceCounts_6,
  MR_Word STATE_VARIABLE_SliceProcMap_0_13,
  MR_Word * STATE_VARIABLE_SliceProcMap_14)
{
  MR_bool succeeded;
  MR_String FileName_9 = ((MR_String) ((MR_hl_field(0, ProcLabelAndFile_5, (MR_Integer) 1))));
  MR_Word ProcLabel_10 = ((MR_Word) ((MR_hl_field(0, ProcLabelAndFile_5, (MR_Integer) 2))));
  MR_Word FoundProcSlice_11;
  MR_Box conv0_FoundProcSlice_11;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0), (MR_Word) (&mdbcomp__slice_and_dice_scalar_common_1[0]), STATE_VARIABLE_SliceProcMap_0_13, ((MR_Box) (ProcLabel_10)), &conv0_FoundProcSlice_11);
  if (succeeded)
  {
    FoundProcSlice_11 = ((MR_Word) (conv0_FoundProcSlice_11));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word MergedProcSlice_12;
    MR_Word Var_15;
    MR_Box conv2_MergedProcSlice_12;

    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_15, 0) = ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_8[1]));
      MR_hl_field(0, Var_15, 1) = ((MR_Box) (mdbcomp__slice_and_dice__slice_merge_proc_trace_counts_4_p_0_1));
      MR_hl_field(0, Var_15, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_15, 3) = ((MR_Box) (FileName_9));
    }
    mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0), (MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0), (MR_Word) (&mdbcomp__slice_and_dice_scalar_common_1[0]), Var_15, ProcTraceCounts_6, ((MR_Box) (FoundProcSlice_11)), &conv2_MergedProcSlice_12);
    MergedProcSlice_12 = ((MR_Word) (conv2_MergedProcSlice_12));
    mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0), (MR_Word) (&mdbcomp__slice_and_dice_scalar_common_1[0]), ((MR_Box) (ProcLabel_10)), ((MR_Box) (MergedProcSlice_12)), STATE_VARIABLE_SliceProcMap_0_13, STATE_VARIABLE_SliceProcMap_14);
  }
  else
  {
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word MergedProcSlice_20;
    MR_Box conv4_MergedProcSlice_20;

    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_17, 0) = ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_8[1]));
      MR_hl_field(0, Var_17, 1) = ((MR_Box) (mdbcomp__slice_and_dice__slice_merge_proc_trace_counts_4_p_0_2));
      MR_hl_field(0, Var_17, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_17, 3) = ((MR_Box) (FileName_9));
    }
    Var_18 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0), (MR_Word) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0));
    mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0), (MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0), (MR_Word) (&mdbcomp__slice_and_dice_scalar_common_1[0]), Var_17, ProcTraceCounts_6, ((MR_Box) (Var_18)), &conv4_MergedProcSlice_20);
    MergedProcSlice_20 = ((MR_Word) (conv4_MergedProcSlice_20));
    mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0), (MR_Word) (&mdbcomp__slice_and_dice_scalar_common_1[0]), ((MR_Box) (ProcLabel_10)), ((MR_Box) (MergedProcSlice_20)), STATE_VARIABLE_SliceProcMap_0_13, STATE_VARIABLE_SliceProcMap_14);
  }
}

MR_Float MR_CALL 
mdbcomp__slice_and_dice__suspicion_ratio_binary_2_f_0(
  MR_Integer PassCount_4,
  MR_Integer FailCount_5)
{
  MR_bool succeeded = (FailCount_5 > (MR_Integer) 0);
  MR_Float R_6;

  if (succeeded)
    succeeded = (PassCount_4 == (MR_Integer) 0);
  if (succeeded)
    R_6 = (MR_Float) 1.0000000000000000;
  else
    R_6 = (MR_Float) 0.0000000000000000;
  return R_6;
}

MR_Float MR_CALL 
mdbcomp__slice_and_dice__suspicion_ratio_normalised_4_f_0(
  MR_Integer PassCount_6,
  MR_Integer PassTests_7,
  MR_Integer FailCount_8,
  MR_Integer FailTests_9)
{
  MR_bool succeeded = (FailCount_8 == (MR_Integer) 0);
  MR_Float R_10;

  if (succeeded)
    R_10 = (MR_Float) 0.0000000000000000;
  else
  {
    MR_Float PassNorm_11;
    MR_Float FailNorm_12;
    MR_Float Var_15;
    MR_Float Var_16;
    MR_Float Var_17;
    MR_Float Var_18;

    succeeded = (PassTests_7 == (MR_Integer) 0);
    if (succeeded)
      PassNorm_11 = (MR_Float) 0.0000000000000000;
    else
    {
      MR_Float Var_13;
      MR_Float Var_14;

      Var_13 = mercury__float__float_1_f_0(PassCount_6);
      Var_14 = mercury__float__float_1_f_0(PassTests_7);
      PassNorm_11 = mercury__float__f_slash_2_f_0(Var_13, Var_14);
    }
    Var_15 = mercury__float__float_1_f_0(FailCount_8);
    Var_16 = mercury__float__float_1_f_0(FailTests_9);
    FailNorm_12 = mercury__float__f_slash_2_f_0(Var_15, Var_16);
    Var_18 = (FailNorm_12 - PassNorm_11);
    Var_17 = mercury__float__max_2_f_0(Var_18, (MR_Float) 0.0000000000000000);
    R_10 = mercury__float__f_slash_2_f_0(Var_17, FailNorm_12);
  }
  return R_10;
}

MR_Float MR_CALL 
mdbcomp__slice_and_dice__suspicion_ratio_2_f_0(
  MR_Integer PassCount_4,
  MR_Integer FailCount_5)
{
  MR_bool succeeded;
  MR_Float R1_6;
  MR_Integer Denominator_7 = (MR_Integer) ((MR_Unsigned) PassCount_4 + (MR_Unsigned) FailCount_5);

  succeeded = (Denominator_7 == (MR_Integer) 0);
  if (succeeded)
    R1_6 = (MR_Float) 0.0000000000000000;
  else
  {
    MR_Float R_8;
    MR_Float Var_9;
    MR_Float Var_10;

    Var_9 = mercury__float__float_1_f_0(FailCount_5);
    Var_10 = mercury__float__float_1_f_0(Denominator_7);
    R_8 = mercury__float__f_slash_2_f_0(Var_9, Var_10);
    succeeded = (R_8 >= ((MR_Float) 0.18750000000000000));
    if (succeeded)
      R1_6 = R_8;
    else
      R1_6 = (MR_Float) 0.0000000000000000;
  }
  return R1_6;
}

static void MR_CALL 
mdbcomp__slice_and_dice__read_dice_to_string_12_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_Result_8;

  mdbcomp__slice_and_dice__dice_label_count_compare_4_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_Result_8);
  *wrapper_arg_3 = ((MR_Box) (conv2_Result_8));
}

static MR_bool MR_CALL 
mdbcomp__slice_and_dice__read_dice_to_string_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = mdbcomp__slice_and_dice__dice_label_count_is_for_module_2_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
mdbcomp__slice_and_dice__read_dice_to_string_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_LabelCounts_11;

  mdbcomp__slice_and_dice__append_dice_label_counts_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_LabelCounts_11);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_LabelCounts_11));
}

void MR_CALL 
mdbcomp__slice_and_dice__read_dice_to_string_12_p_0(
  MR_String PassFile_13,
  MR_String FailFile_14,
  MR_String SortStr_15,
  MR_Integer MaxRow_16,
  MR_Word MaybeMaxPredColumns_17,
  MR_Word MaybeMaxPathColumns_18,
  MR_Word MaybeMaxFileColumns_19,
  MR_String Module_20,
  MR_String * DiceStr_21,
  MR_String * Problem_22)
{
  MR_bool succeeded;
  MR_Word Chrs_45;
  MR_Word ChrSet_46;
  MR_Word Var_47;

  Chrs_45 = mercury__string__to_char_list_1_f_0(SortStr_15);
  ChrSet_46 = mercury__set__list_to_set_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), Chrs_45);
  Var_47 = mercury__set__list_to_set_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), (MR_Word) (MR_mkword(1, &mdbcomp__slice_and_dice_scalar_common_2[14])));
  succeeded = mercury__set__subset_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), ChrSet_46, Var_47);
  if (succeeded)
  {
    MR_Word ReadDiceResult_24;

    mdbcomp__slice_and_dice__read_dice_5_p_0(PassFile_13, FailFile_14, &ReadDiceResult_24);
    if (((MR_tag((MR_Word) ReadDiceResult_24)) == (MR_Integer) 1))
    {
      *Problem_22 = ((MR_String) ((MR_hl_field(1, ReadDiceResult_24, (MR_Integer) 0))));
      *DiceStr_21 = (MR_String) "";
    }
    else
    {
      MR_Word Dice_25 = ((MR_Word) ((MR_hl_field(0, ReadDiceResult_24, (MR_Integer) 0))));
      MR_Integer TotalPassTests_26 = ((MR_Integer) ((MR_hl_field(0, Dice_25, (MR_Integer) 0))));
      MR_Word DiceProcMap_28 = ((MR_Word) ((MR_hl_field(0, Dice_25, (MR_Integer) 2))));
      MR_Word LabelCounts_29;
      MR_Word FilteredLabelCounts_30;
      MR_Word SortedLabelCounts_31;
      MR_Word TopNLabelCounts_33;
      MR_Word Var_38;
      MR_Box conv1_LabelCounts_29;
      MR_Word Taken_32;

      mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0), (MR_Word) (&mdbcomp__slice_and_dice_scalar_common_1[1]), (MR_Word) (&mdbcomp__slice_and_dice_scalar_common_2[2]), (MR_Word) (&mdbcomp__slice_and_dice_scalar_common_1[23]), DiceProcMap_28, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_LabelCounts_29);
      LabelCounts_29 = ((MR_Word) (conv1_LabelCounts_29));
      succeeded = (strcmp(Module_20, (MR_String) "") == 0);
      if (succeeded)
        FilteredLabelCounts_30 = LabelCounts_29;
      else
      {
        MR_Word Var_37;

        {
          Var_37 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_37, 0) = ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_6[5]));
          MR_hl_field(0, Var_37, 1) = ((MR_Box) (mdbcomp__slice_and_dice__read_dice_to_string_12_p_0_2));
          MR_hl_field(0, Var_37, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_37, 3) = ((MR_Box) (Module_20));
        }
        mercury__list__filter_3_p_0((MR_Word) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_label_count_0), Var_37, LabelCounts_29, &FilteredLabelCounts_30);
      }
      {
        Var_38 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_38, 0) = ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_4[4]));
        MR_hl_field(0, Var_38, 1) = ((MR_Box) (mdbcomp__slice_and_dice__read_dice_to_string_12_p_0_3));
        MR_hl_field(0, Var_38, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_38, 3) = ((MR_Box) (SortStr_15));
      }
      mercury__list__sort_3_p_0((MR_Word) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_label_count_0), Var_38, FilteredLabelCounts_30, &SortedLabelCounts_31);
      succeeded = mercury__list__take_3_p_0((MR_Word) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_label_count_0), MaxRow_16, SortedLabelCounts_31, &Taken_32);
      if (succeeded)
        TopNLabelCounts_33 = Taken_32;
      else
        TopNLabelCounts_33 = SortedLabelCounts_31;
      *Problem_22 = (MR_String) "";
      *DiceStr_21 = mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0(TopNLabelCounts_33, TotalPassTests_26, MaybeMaxPredColumns_17, MaybeMaxPathColumns_18, MaybeMaxFileColumns_19);
    }
  }
  else
  {
    *Problem_22 = (MR_String) "Invalid sort string";
    *DiceStr_21 = (MR_String) "";
  }
}

static MR_Box MR_CALL 
mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv13_HeadVar__3_3;

  conv13_HeadVar__3_3 = mdbcomp__slice_and_dice__format_float_2_f_0(((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 3)))), MR_unbox_float(wrapper_arg_1));
  wrapper_arg_2 = ((MR_Box) (conv13_HeadVar__3_3));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Float conv12_R1_6;

  conv12_R1_6 = mdbcomp__slice_and_dice__suspicion_ratio_2_f_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
  wrapper_arg_3 = MR_box_float(conv12_R1_6);
  return wrapper_arg_3;
}

static MR_Box MR_CALL 
mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv11_HeadVar__2_2;

  conv11_HeadVar__2_2 = mercury__string__int_to_string_thousands_1_f_0(((MR_Integer) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv11_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv10_HeadVar__2_2;

  conv10_HeadVar__2_2 = mdbcomp__slice_and_dice__bracket_int_1_f_0(((MR_Integer) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv10_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv9_HeadVar__2_2;

  conv9_HeadVar__2_2 = mercury__string__int_to_string_thousands_1_f_0(((MR_Integer) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv9_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv8_HeadVar__2_2;

  conv8_HeadVar__2_2 = mdbcomp__slice_and_dice__format_path_port_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv8_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv7_Str_4;

  conv7_Str_4 = mdbcomp__slice_and_dice__format_proc_label_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv7_Str_4));
  return wrapper_arg_2;
}

static void MR_CALL 
mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_ProcLabel_10;
  MR_Word conv5_PathPort_11;
  MR_String conv4_FormattedContext_12;
  MR_Integer conv3_PassCount_13;
  MR_Integer conv2_PassTests_14;
  MR_Integer conv1_FailCount_15;
  MR_Integer conv0_FailTests_16;

  mdbcomp__slice_and_dice__deconstruct_dice_label_count_8_p_0(((MR_Word) (wrapper_arg_1)), &conv6_ProcLabel_10, &conv5_PathPort_11, &conv4_FormattedContext_12, &conv3_PassCount_13, &conv2_PassTests_14, &conv1_FailCount_15, &conv0_FailTests_16);
  *wrapper_arg_2 = ((MR_Box) (conv6_ProcLabel_10));
  *wrapper_arg_3 = ((MR_Box) (conv5_PathPort_11));
  *wrapper_arg_4 = ((MR_Box) (conv4_FormattedContext_12));
  *wrapper_arg_5 = ((MR_Box) (conv3_PassCount_13));
  *wrapper_arg_6 = ((MR_Box) (conv2_PassTests_14));
  *wrapper_arg_7 = ((MR_Box) (conv1_FailCount_15));
  *wrapper_arg_8 = ((MR_Box) (conv0_FailTests_16));
}

static MR_String MR_CALL 
mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0(
  MR_Word LabelCounts_8,
  MR_Integer TotalPassTests_9,
  MR_Word MaybeMaxPredColumns_11,
  MR_Word MaybeMaxPathColumns_12,
  MR_Word MaybeMaxFileColumns_13)
{
  MR_String Str_14;
  MR_Word ProcLabels_15;
  MR_Word PathPorts_16;
  MR_Word FormattedContexts_17;
  MR_Word PassCounts_18;
  MR_Word PassTests_19;
  MR_Word FailCounts_20;
  MR_Word FormattedProcLabels_22;
  MR_Word FormattedPathPorts_23;
  MR_Word PassCountStrs_24;
  MR_Word PassTestsStrs_25;
  MR_Word FailCountStrs_26;
  MR_Word SuspicionIndices_27;
  MR_Word FormattedSuspicionIndices_28;
  MR_String TotalPassTestsStr_29;
  MR_Word Columns_30;
  MR_String Var_41;
  MR_String Var_42;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_46;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word Var_50;
  MR_Word Var_51;
  MR_Word Var_53;
  MR_Word Var_54;
  MR_Word Var_55;
  MR_Word Var_56;
  MR_Word Var_58;
  MR_Word Var_59;
  MR_Word Var_60;
  MR_Word Var_61;
  MR_Word Var_64;
  MR_Word Var_65;
  MR_Word Var_66;
  MR_Word Var_67;
  MR_Word Var_69;
  MR_Word Var_70;
  MR_Word Var_71;
  MR_Word Var_72;
  MR_Word Var_75;
  MR_Word Var_76;
  MR_Word Var_77;
  MR_Word Var_78;
  MR_String Var_82;
  MR_Word _FailTests_21;

  mercury__list__map7_9_p_0((MR_Word) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_label_count_0), (MR_Word) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0), (MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mdbcomp__slice_and_dice_scalar_common_1[16]), LabelCounts_8, &ProcLabels_15, &PathPorts_16, &FormattedContexts_17, &PassCounts_18, &PassTests_19, &FailCounts_20, &_FailTests_21);
  FormattedProcLabels_22 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mdbcomp__slice_and_dice_scalar_common_1[17]), ProcLabels_15);
  FormattedPathPorts_23 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mdbcomp__slice_and_dice_scalar_common_1[18]), PathPorts_16);
  PassCountStrs_24 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mdbcomp__slice_and_dice_scalar_common_1[19]), PassCounts_18);
  PassTestsStrs_25 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mdbcomp__slice_and_dice_scalar_common_1[20]), PassTests_19);
  FailCountStrs_26 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mdbcomp__slice_and_dice_scalar_common_1[21]), FailCounts_20);
  SuspicionIndices_27 = mercury__list__map_corresponding_3_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0), (MR_Word) (&mdbcomp__slice_and_dice_scalar_common_1[22]), PassCounts_18, FailCounts_20);
  FormattedSuspicionIndices_28 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mdbcomp__slice_and_dice_scalar_common_7[4]), SuspicionIndices_27);
  Var_42 = mercury__string__int_to_string_thousands_1_f_0(TotalPassTests_9);
  Var_41 = mercury__string__f_43_43_2_f_0(Var_42, (MR_String) ")");
  TotalPassTestsStr_29 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_41);
  {
    Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_46, 0) = ((MR_Box) ((MR_String) "Procedure"));
    MR_hl_field(1, Var_46, 1) = ((MR_Box) (FormattedProcLabels_22));
  }
  {
    Var_45 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_45, 0) = ((MR_Box) (Var_46));
  }
  {
    Var_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_44, 0) = ((MR_Box) (Var_45));
    MR_hl_field(0, Var_44, 1) = ((MR_Box) (MaybeMaxPredColumns_11));
  }
  {
    Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_51, 0) = ((MR_Box) ((MR_String) "Path/Port"));
    MR_hl_field(1, Var_51, 1) = ((MR_Box) (FormattedPathPorts_23));
  }
  {
    Var_50 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_50, 0) = ((MR_Box) (Var_51));
  }
  {
    Var_49 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_49, 0) = ((MR_Box) (Var_50));
    MR_hl_field(0, Var_49, 1) = ((MR_Box) (MaybeMaxPathColumns_12));
  }
  {
    Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_56, 0) = ((MR_Box) ((MR_String) "File:Line"));
    MR_hl_field(1, Var_56, 1) = ((MR_Box) (FormattedContexts_17));
  }
  {
    Var_55 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_55, 0) = ((MR_Box) (Var_56));
  }
  {
    Var_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_54, 0) = ((MR_Box) (Var_55));
    MR_hl_field(0, Var_54, 1) = ((MR_Box) (MaybeMaxFileColumns_13));
  }
  {
    Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_61, 0) = ((MR_Box) ((MR_String) "Pass"));
    MR_hl_field(1, Var_61, 1) = ((MR_Box) (PassCountStrs_24));
  }
  {
    Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_60, 0) = ((MR_Box) (Var_61));
  }
  {
    Var_59 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_59, 0) = ((MR_Box) (Var_60));
    MR_hl_field(0, Var_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_67, 0) = ((MR_Box) (TotalPassTestsStr_29));
    MR_hl_field(1, Var_67, 1) = ((MR_Box) (PassTestsStrs_25));
  }
  {
    Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_66, 0) = ((MR_Box) (Var_67));
  }
  {
    Var_65 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_65, 0) = ((MR_Box) (Var_66));
    MR_hl_field(0, Var_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_72, 0) = ((MR_Box) ((MR_String) "Fail"));
    MR_hl_field(1, Var_72, 1) = ((MR_Box) (FailCountStrs_26));
  }
  {
    Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_71, 0) = ((MR_Box) (Var_72));
  }
  {
    Var_70 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_70, 0) = ((MR_Box) (Var_71));
    MR_hl_field(0, Var_70, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_78, 0) = ((MR_Box) ((MR_String) "Suspicion"));
    MR_hl_field(1, Var_78, 1) = ((MR_Box) (FormattedSuspicionIndices_28));
  }
  {
    Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_77, 0) = ((MR_Box) (Var_78));
  }
  {
    Var_76 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_76, 0) = ((MR_Box) (Var_77));
    MR_hl_field(0, Var_76, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_75, 0) = ((MR_Box) (Var_76));
    MR_hl_field(1, Var_75, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_69, 0) = ((MR_Box) (Var_70));
    MR_hl_field(1, Var_69, 1) = ((MR_Box) (Var_75));
  }
  {
    Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_64, 0) = ((MR_Box) (Var_65));
    MR_hl_field(1, Var_64, 1) = ((MR_Box) (Var_69));
  }
  {
    Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_58, 0) = ((MR_Box) (Var_59));
    MR_hl_field(1, Var_58, 1) = ((MR_Box) (Var_64));
  }
  {
    Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_53, 0) = ((MR_Box) (Var_54));
    MR_hl_field(1, Var_53, 1) = ((MR_Box) (Var_58));
  }
  {
    Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_48, 0) = ((MR_Box) (Var_49));
    MR_hl_field(1, Var_48, 1) = ((MR_Box) (Var_53));
  }
  {
    Columns_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Columns_30, 0) = ((MR_Box) (Var_44));
    MR_hl_field(1, Columns_30, 1) = ((MR_Box) (Var_48));
  }
  Var_82 = mercury__string__format_table_max_2_f_0(Columns_30, (MR_String) " ");
  Str_14 = mercury__string__f_43_43_2_f_0(Var_82, (MR_String) "\n");
  return Str_14;
}

static void MR_CALL 
mdbcomp__slice_and_dice__read_dice_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_DiceProcMap_16;

  mdbcomp__slice_and_dice__dice_merge_proc_trace_counts_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_DiceProcMap_16);
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_DiceProcMap_16));
}

static void MR_CALL 
mdbcomp__slice_and_dice__read_dice_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_DiceProcMap_16;

  mdbcomp__slice_and_dice__dice_merge_proc_trace_counts_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_DiceProcMap_16);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_DiceProcMap_16));
}

void MR_CALL 
mdbcomp__slice_and_dice__read_dice_5_p_0(
  MR_String PassFile_6,
  MR_String FailFile_7,
  MR_Word * Result_8)
{
  MR_Word ReadPassResult_10;

  mdbcomp__trace_counts__read_trace_counts_source_4_p_0(PassFile_6, &ReadPassResult_10);
  if (((MR_tag((MR_Word) ReadPassResult_10)) == (MR_Integer) 1))
  {
    MR_String Problem_29 = ((MR_String) ((MR_hl_field(1, ReadPassResult_10, (MR_Integer) 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Result_8 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Problem_29));
    }
  }
  else
  {
    MR_Word PassFileType_11 = ((MR_Word) ((MR_hl_field(0, ReadPassResult_10, (MR_Integer) 0))));
    MR_Word PassTraceCounts_12 = ((MR_Word) ((MR_hl_field(0, ReadPassResult_10, (MR_Integer) 1))));
    MR_Word ReadFailResult_13;

    mdbcomp__trace_counts__read_trace_counts_source_4_p_0(FailFile_7, &ReadFailResult_13);
    if (((MR_tag((MR_Word) ReadFailResult_13)) == (MR_Integer) 1))
    {
      MR_String Problem_21 = ((MR_String) ((MR_hl_field(1, ReadFailResult_13, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_8 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Problem_21));
      }
    }
    else
    {
      MR_Word FailFileType_14 = ((MR_Word) ((MR_hl_field(0, ReadFailResult_13, (MR_Integer) 0))));
      MR_Word FailTraceCounts_15 = ((MR_Word) ((MR_hl_field(0, ReadFailResult_13, (MR_Integer) 1))));
      MR_Word PassDiceProcMap_16;
      MR_Word DiceProcMap_17;
      MR_Integer TotalPassTests_18;
      MR_Integer TotalFailTests_19;
      MR_Word Dice_20;
      MR_Word Var_27;
      MR_Box conv1_PassDiceProcMap_16;
      MR_Box conv3_DiceProcMap_17;

      Var_27 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0), (MR_Word) (&mdbcomp__slice_and_dice_scalar_common_1[1]));
      mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0), (MR_Word) (&mdbcomp__slice_and_dice_scalar_common_1[2]), (MR_Word) (&mdbcomp__slice_and_dice_scalar_common_1[4]), (MR_Word) (&mdbcomp__slice_and_dice_scalar_common_7[2]), PassTraceCounts_12, ((MR_Box) (Var_27)), &conv1_PassDiceProcMap_16);
      PassDiceProcMap_16 = ((MR_Word) (conv1_PassDiceProcMap_16));
      mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0), (MR_Word) (&mdbcomp__slice_and_dice_scalar_common_1[2]), (MR_Word) (&mdbcomp__slice_and_dice_scalar_common_1[4]), (MR_Word) (&mdbcomp__slice_and_dice_scalar_common_7[3]), FailTraceCounts_15, ((MR_Box) (PassDiceProcMap_16)), &conv3_DiceProcMap_17);
      DiceProcMap_17 = ((MR_Word) (conv3_DiceProcMap_17));
      TotalPassTests_18 = mdbcomp__trace_counts__num_tests_for_file_type_1_f_0(PassFileType_11);
      TotalFailTests_19 = mdbcomp__trace_counts__num_tests_for_file_type_1_f_0(FailFileType_14);
      {
        Dice_20 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Dice_20, 0) = ((MR_Box) (TotalPassTests_18));
        MR_hl_field(0, Dice_20, 1) = ((MR_Box) (TotalFailTests_19));
        MR_hl_field(0, Dice_20, 2) = ((MR_Box) (DiceProcMap_17));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *Result_8 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Dice_20));
      }
    }
  }
}

static void MR_CALL 
mdbcomp__slice_and_dice__read_slice_to_string_11_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_Result_8;

  mdbcomp__slice_and_dice__slice_label_count_compare_4_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_Result_8);
  *wrapper_arg_3 = ((MR_Box) (conv2_Result_8));
}

static MR_bool MR_CALL 
mdbcomp__slice_and_dice__read_slice_to_string_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = mdbcomp__slice_and_dice__slice_label_count_is_zero_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
mdbcomp__slice_and_dice__read_slice_to_string_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = mdbcomp__slice_and_dice__slice_label_count_is_for_module_2_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
mdbcomp__slice_and_dice__read_slice_to_string_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_LabelCounts_11;

  mdbcomp__slice_and_dice__append_slice_label_counts_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_LabelCounts_11);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_LabelCounts_11));
}

void MR_CALL 
mdbcomp__slice_and_dice__read_slice_to_string_11_p_0(
  MR_String File_12,
  MR_String SortStr0_13,
  MR_Integer MaxRows_14,
  MR_Word MaybeMaxPredColumns_15,
  MR_Word MaybeMaxPathColumns_16,
  MR_Word MaybeMaxFileColumns_17,
  MR_String Module_18,
  MR_String * SliceStr_19,
  MR_String * Problem_20)
{
  MR_bool succeeded;
  MR_Word Chrs0_49;
  MR_Word Chrs_51;
  MR_Word ChrSet_52;
  MR_Word Var_54;
  MR_Word ChrsPrime_50;
  MR_Char Var_53;

  Chrs0_49 = mercury__string__to_char_list_1_f_0(SortStr0_13);
  succeeded = (Chrs0_49 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    Var_53 = ((MR_Char) (MR_Word) (MR_hl_field(1, Chrs0_49, (MR_Integer) 0)));
    ChrsPrime_50 = ((MR_Word) ((MR_hl_field(1, Chrs0_49, (MR_Integer) 1))));
    succeeded = (Var_53 == (MR_Char) 122);
  }
  if (succeeded)
    Chrs_51 = ChrsPrime_50;
  else
    Chrs_51 = Chrs0_49;
  ChrSet_52 = mercury__set__list_to_set_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), Chrs_51);
  Var_54 = mercury__set__list_to_set_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), (MR_Word) (MR_mkword(1, &mdbcomp__slice_and_dice_scalar_common_2[6])));
  succeeded = mercury__set__subset_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), ChrSet_52, Var_54);
  if (succeeded)
  {
    MR_Word ReadSliceResult_22;

    mdbcomp__slice_and_dice__read_slice_4_p_0(File_12, &ReadSliceResult_22);
    if (((MR_tag((MR_Word) ReadSliceResult_22)) == (MR_Integer) 1))
    {
      *Problem_20 = ((MR_String) ((MR_hl_field(1, ReadSliceResult_22, (MR_Integer) 0))));
      *SliceStr_19 = (MR_String) "";
    }
    else
    {
      MR_Word Slice_23 = ((MR_Word) ((MR_hl_field(0, ReadSliceResult_22, (MR_Integer) 0))));
      MR_Integer TotalTests_24 = ((MR_Integer) ((MR_hl_field(0, Slice_23, (MR_Integer) 0))));
      MR_Word SliceProcMap_25 = ((MR_Word) ((MR_hl_field(0, Slice_23, (MR_Integer) 1))));
      MR_Word LabelCounts_26;
      MR_Word ModuleFilteredLabelCounts_27;
      MR_String SortStr_29;
      MR_Word FilteredLabelCounts_30;
      MR_Word SortedLabelCounts_31;
      MR_Word TopNLabelCounts_33;
      MR_Word Var_40;
      MR_Word LabelCountsCord_57;
      MR_Word Var_59;
      MR_Box conv1_LabelCountsCord_57;
      MR_String SortStrPrime_28;
      MR_Word Taken_32;

      Var_59 = mercury__cord__init_0_f_0((MR_Word) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_label_count_0));
      mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0), (MR_Word) (&mdbcomp__slice_and_dice_scalar_common_1[0]), (MR_Word) (&mdbcomp__slice_and_dice_scalar_common_2[0]), (MR_Word) (&mdbcomp__slice_and_dice_scalar_common_1[14]), SliceProcMap_25, ((MR_Box) (Var_59)), &conv1_LabelCountsCord_57);
      LabelCountsCord_57 = ((MR_Word) (conv1_LabelCountsCord_57));
      LabelCounts_26 = mercury__cord__list_1_f_0((MR_Word) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_label_count_0), LabelCountsCord_57);
      succeeded = (strcmp(Module_18, (MR_String) "") == 0);
      if (succeeded)
        ModuleFilteredLabelCounts_27 = LabelCounts_26;
      else
      {
        MR_Word Var_37;

        {
          Var_37 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_37, 0) = ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_6[4]));
          MR_hl_field(0, Var_37, 1) = ((MR_Box) (mdbcomp__slice_and_dice__read_slice_to_string_11_p_0_2));
          MR_hl_field(0, Var_37, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_37, 3) = ((MR_Box) (Module_18));
        }
        mercury__list__filter_3_p_0((MR_Word) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_label_count_0), Var_37, LabelCounts_26, &ModuleFilteredLabelCounts_27);
      }
      succeeded = mercury__string__append_3_p_1((MR_String) "z", &SortStrPrime_28, SortStr0_13);
      if (succeeded)
      {
        SortStr_29 = SortStrPrime_28;
        mercury__list__filter_3_p_0((MR_Word) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_label_count_0), (MR_Word) (&mdbcomp__slice_and_dice_scalar_common_1[15]), ModuleFilteredLabelCounts_27, &FilteredLabelCounts_30);
      }
      else
      {
        SortStr_29 = SortStr0_13;
        FilteredLabelCounts_30 = ModuleFilteredLabelCounts_27;
      }
      {
        Var_40 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_40, 0) = ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_4[2]));
        MR_hl_field(0, Var_40, 1) = ((MR_Box) (mdbcomp__slice_and_dice__read_slice_to_string_11_p_0_4));
        MR_hl_field(0, Var_40, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_40, 3) = ((MR_Box) (SortStr_29));
      }
      mercury__list__sort_3_p_0((MR_Word) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_label_count_0), Var_40, FilteredLabelCounts_30, &SortedLabelCounts_31);
      succeeded = mercury__list__take_3_p_0((MR_Word) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_label_count_0), MaxRows_14, SortedLabelCounts_31, &Taken_32);
      if (succeeded)
        TopNLabelCounts_33 = Taken_32;
      else
        TopNLabelCounts_33 = SortedLabelCounts_31;
      *Problem_20 = (MR_String) "";
      *SliceStr_19 = mdbcomp__slice_and_dice__format_slice_label_counts_5_f_0(TopNLabelCounts_33, TotalTests_24, MaybeMaxPredColumns_15, MaybeMaxPathColumns_16, MaybeMaxFileColumns_17);
    }
  }
  else
  {
    *Problem_20 = (MR_String) "Invalid sort string";
    *SliceStr_19 = (MR_String) "";
  }
}

static MR_Box MR_CALL 
mdbcomp__slice_and_dice__format_slice_label_counts_5_f_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv8_HeadVar__2_2;

  conv8_HeadVar__2_2 = mdbcomp__slice_and_dice__bracket_int_1_f_0(((MR_Integer) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv8_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
mdbcomp__slice_and_dice__format_slice_label_counts_5_f_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = mdbcomp__slice_and_dice__IntroducedFrom__pred__format_slice_label_counts__634__1_2_p_0(((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)));
  return succeeded;
}

static MR_Box MR_CALL 
mdbcomp__slice_and_dice__format_slice_label_counts_5_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv7_HeadVar__2_2;

  conv7_HeadVar__2_2 = mercury__string__int_to_string_thousands_1_f_0(((MR_Integer) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv7_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
mdbcomp__slice_and_dice__format_slice_label_counts_5_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv6_HeadVar__2_2;

  conv6_HeadVar__2_2 = mdbcomp__slice_and_dice__format_path_port_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv6_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
mdbcomp__slice_and_dice__format_slice_label_counts_5_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv5_Str_4;

  conv5_Str_4 = mdbcomp__slice_and_dice__format_proc_label_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv5_Str_4));
  return wrapper_arg_2;
}

static void MR_CALL 
mdbcomp__slice_and_dice__format_slice_label_counts_5_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_PathPort_8;
  MR_Word conv3_ProcLabel_9;
  MR_String conv2_FormattedContext_10;
  MR_Integer conv1_Count_11;
  MR_Integer conv0_Tests_12;

  mdbcomp__slice_and_dice__deconstruct_slice_label_count_6_p_0(((MR_Word) (wrapper_arg_1)), &conv4_PathPort_8, &conv3_ProcLabel_9, &conv2_FormattedContext_10, &conv1_Count_11, &conv0_Tests_12);
  *wrapper_arg_2 = ((MR_Box) (conv4_PathPort_8));
  *wrapper_arg_3 = ((MR_Box) (conv3_ProcLabel_9));
  *wrapper_arg_4 = ((MR_Box) (conv2_FormattedContext_10));
  *wrapper_arg_5 = ((MR_Box) (conv1_Count_11));
  *wrapper_arg_6 = ((MR_Box) (conv0_Tests_12));
}

static MR_String MR_CALL 
mdbcomp__slice_and_dice__format_slice_label_counts_5_f_0(
  MR_Word LabelCounts_7,
  MR_Integer TotalTests_8,
  MR_Word MaybeMaxPredColumns_9,
  MR_Word MaybePathColumns_10,
  MR_Word MaybeMaxFileColumns_11)
{
  MR_bool succeeded;
  MR_String Str_12;
  MR_Word ProcLabels_13;
  MR_Word PathPorts_14;
  MR_Word FormattedContexts_15;
  MR_Word Counts_16;
  MR_Word Tests_17;
  MR_Word FormattedProcLabels_18;
  MR_Word FormattedPathPorts_19;
  MR_Word CountStrs_20;
  MR_Word AlwaysColumns_21;
  MR_Word OtherTests_23;
  MR_Word Columns_24;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word Var_50;
  MR_String Var_67;
  MR_Word _OneTests_22;

  mercury__list__map5_7_p_0((MR_Word) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_label_count_0), (MR_Word) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0), (MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mdbcomp__slice_and_dice_scalar_common_1[9]), LabelCounts_7, &ProcLabels_13, &PathPorts_14, &FormattedContexts_15, &Counts_16, &Tests_17);
  FormattedProcLabels_18 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mdbcomp__slice_and_dice_scalar_common_1[10]), ProcLabels_13);
  FormattedPathPorts_19 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mdbcomp__slice_and_dice_scalar_common_1[11]), PathPorts_14);
  CountStrs_20 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mdbcomp__slice_and_dice_scalar_common_1[12]), Counts_16);
  {
    Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_35, 0) = ((MR_Box) ((MR_String) "Procedure"));
    MR_hl_field(1, Var_35, 1) = ((MR_Box) (FormattedProcLabels_18));
  }
  {
    Var_34 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_34, 0) = ((MR_Box) (Var_35));
  }
  {
    Var_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_33, 0) = ((MR_Box) (Var_34));
    MR_hl_field(0, Var_33, 1) = ((MR_Box) (MaybeMaxPredColumns_9));
  }
  {
    Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_40, 0) = ((MR_Box) ((MR_String) "Path/Port"));
    MR_hl_field(1, Var_40, 1) = ((MR_Box) (FormattedPathPorts_19));
  }
  {
    Var_39 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_39, 0) = ((MR_Box) (Var_40));
  }
  {
    Var_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_38, 0) = ((MR_Box) (Var_39));
    MR_hl_field(0, Var_38, 1) = ((MR_Box) (MaybePathColumns_10));
  }
  {
    Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_45, 0) = ((MR_Box) ((MR_String) "File:Line"));
    MR_hl_field(1, Var_45, 1) = ((MR_Box) (FormattedContexts_15));
  }
  {
    Var_44 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_44, 0) = ((MR_Box) (Var_45));
  }
  {
    Var_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_43, 0) = ((MR_Box) (Var_44));
    MR_hl_field(0, Var_43, 1) = ((MR_Box) (MaybeMaxFileColumns_11));
  }
  {
    Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_50, 0) = ((MR_Box) ((MR_String) "Count"));
    MR_hl_field(1, Var_50, 1) = ((MR_Box) (CountStrs_20));
  }
  {
    Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_49, 0) = ((MR_Box) (Var_50));
  }
  {
    Var_48 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_48, 0) = ((MR_Box) (Var_49));
    MR_hl_field(0, Var_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_47, 0) = ((MR_Box) (Var_48));
    MR_hl_field(1, Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_42, 0) = ((MR_Box) (Var_43));
    MR_hl_field(1, Var_42, 1) = ((MR_Box) (Var_47));
  }
  {
    Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_37, 0) = ((MR_Box) (Var_38));
    MR_hl_field(1, Var_37, 1) = ((MR_Box) (Var_42));
  }
  {
    AlwaysColumns_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, AlwaysColumns_21, 0) = ((MR_Box) (Var_33));
    MR_hl_field(1, AlwaysColumns_21, 1) = ((MR_Box) (Var_37));
  }
  mercury__list__filter_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mdbcomp__slice_and_dice_scalar_common_7[0]), Tests_17, &_OneTests_22, &OtherTests_23);
  if ((OtherTests_23 == (MR_Word) ((MR_Unsigned) 0U)))
    Columns_24 = AlwaysColumns_21;
  else
  {
    MR_Word TestsStrs_27;
    MR_String TotalTestsStr_28;
    MR_String Var_58;
    MR_String Var_59;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_Word Var_64;

    TestsStrs_27 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mdbcomp__slice_and_dice_scalar_common_1[13]), Tests_17);
    Var_59 = mercury__string__int_to_string_thousands_1_f_0(TotalTests_8);
    Var_58 = mercury__string__f_43_43_2_f_0(Var_59, (MR_String) ")");
    TotalTestsStr_28 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_58);
    {
      Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_64, 0) = ((MR_Box) (TotalTestsStr_28));
      MR_hl_field(1, Var_64, 1) = ((MR_Box) (TestsStrs_27));
    }
    {
      Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_63, 0) = ((MR_Box) (Var_64));
    }
    {
      Var_62 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_62, 0) = ((MR_Box) (Var_63));
      MR_hl_field(0, Var_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_61, 0) = ((MR_Box) (Var_62));
      MR_hl_field(1, Var_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Columns_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&mdbcomp__slice_and_dice_scalar_common_1[6]), AlwaysColumns_21, Var_61);
  }
  Var_67 = mercury__string__format_table_max_2_f_0(Columns_24, (MR_String) " ");
  Str_12 = mercury__string__f_43_43_2_f_0(Var_67, (MR_String) "\n");
  return Str_12;
}

static void MR_CALL 
mdbcomp__slice_and_dice__read_slice_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_SliceProcMap_14;

  mdbcomp__slice_and_dice__slice_merge_proc_trace_counts_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_SliceProcMap_14);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_SliceProcMap_14));
}

void MR_CALL 
mdbcomp__slice_and_dice__read_slice_4_p_0(
  MR_String File_5,
  MR_Word * Result_6)
{
  MR_Word ReadResult_8;

  mdbcomp__trace_counts__read_trace_counts_source_4_p_0(File_5, &ReadResult_8);
  if (((MR_tag((MR_Word) ReadResult_8)) == (MR_Integer) 1))
  {
    MR_String Problem_14 = ((MR_String) ((MR_hl_field(1, ReadResult_8, (MR_Integer) 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Result_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Problem_14));
    }
  }
  else
  {
    MR_Word FileType_9 = ((MR_Word) ((MR_hl_field(0, ReadResult_8, (MR_Integer) 0))));
    MR_Word TraceCounts_10 = ((MR_Word) ((MR_hl_field(0, ReadResult_8, (MR_Integer) 1))));
    MR_Word SliceProcMap_11;
    MR_Integer NumTests_12;
    MR_Word Slice_13;
    MR_Word Var_18;
    MR_Box conv1_SliceProcMap_11;

    Var_18 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0), (MR_Word) (&mdbcomp__slice_and_dice_scalar_common_1[0]));
    mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0), (MR_Word) (&mdbcomp__slice_and_dice_scalar_common_1[2]), (MR_Word) (&mdbcomp__slice_and_dice_scalar_common_1[3]), (MR_Word) (&mdbcomp__slice_and_dice_scalar_common_1[8]), TraceCounts_10, ((MR_Box) (Var_18)), &conv1_SliceProcMap_11);
    SliceProcMap_11 = ((MR_Word) (conv1_SliceProcMap_11));
    NumTests_12 = mdbcomp__trace_counts__num_tests_for_file_type_1_f_0(FileType_9);
    {
      Slice_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Slice_13, 0) = ((MR_Box) (NumTests_12));
      MR_hl_field(0, Slice_13, 1) = ((MR_Box) (SliceProcMap_11));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *Result_6 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Slice_13));
    }
  }
}

static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____dice_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdbcomp__slice_and_dice____Unify____dice_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdbcomp__slice_and_dice____Compare____dice_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdbcomp__slice_and_dice____Compare____dice_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____dice_exec_count_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdbcomp__slice_and_dice____Unify____dice_exec_count_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdbcomp__slice_and_dice____Compare____dice_exec_count_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdbcomp__slice_and_dice____Compare____dice_exec_count_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____dice_label_count_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdbcomp__slice_and_dice____Unify____dice_label_count_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdbcomp__slice_and_dice____Compare____dice_label_count_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdbcomp__slice_and_dice____Compare____dice_label_count_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____dice_proc_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdbcomp__slice_and_dice____Unify____dice_proc_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdbcomp__slice_and_dice____Compare____dice_proc_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdbcomp__slice_and_dice____Compare____dice_proc_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____proc_dice_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdbcomp__slice_and_dice____Unify____proc_dice_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdbcomp__slice_and_dice____Compare____proc_dice_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdbcomp__slice_and_dice____Compare____proc_dice_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____proc_slice_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdbcomp__slice_and_dice____Unify____proc_slice_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdbcomp__slice_and_dice____Compare____proc_slice_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdbcomp__slice_and_dice____Compare____proc_slice_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____slice_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdbcomp__slice_and_dice____Unify____slice_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdbcomp__slice_and_dice____Compare____slice_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdbcomp__slice_and_dice____Compare____slice_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____slice_exec_count_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdbcomp__slice_and_dice____Unify____slice_exec_count_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdbcomp__slice_and_dice____Compare____slice_exec_count_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdbcomp__slice_and_dice____Compare____slice_exec_count_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____slice_label_count_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdbcomp__slice_and_dice____Unify____slice_label_count_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdbcomp__slice_and_dice____Compare____slice_label_count_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdbcomp__slice_and_dice____Compare____slice_label_count_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____slice_proc_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdbcomp__slice_and_dice____Unify____slice_proc_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdbcomp__slice_and_dice____Compare____slice_proc_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdbcomp__slice_and_dice____Compare____slice_proc_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____trace_counts_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdbcomp__slice_and_dice____Unify____trace_counts_kind_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdbcomp__slice_and_dice____Compare____trace_counts_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdbcomp__slice_and_dice____Compare____trace_counts_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__mdbcomp__slice_and_dice__init(void)
{
}

void mercury__mdbcomp__slice_and_dice__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_0);
	MR_register_type_ctor_info(&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0);
	MR_register_type_ctor_info(&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_label_count_0);
	MR_register_type_ctor_info(&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_proc_map_0);
	MR_register_type_ctor_info(&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_proc_dice_0);
	MR_register_type_ctor_info(&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_proc_slice_0);
	MR_register_type_ctor_info(&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_0);
	MR_register_type_ctor_info(&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0);
	MR_register_type_ctor_info(&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_label_count_0);
	MR_register_type_ctor_info(&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_proc_map_0);
	MR_register_type_ctor_info(&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_trace_counts_kind_0);
}

void mercury__mdbcomp__slice_and_dice__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__mdbcomp__slice_and_dice__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module mdbcomp.slice_and_dice.
