/*
** Automatically generated from `edit_seq.m'
** by the Mercury compiler,
** version 20.01.1-beta-2020-02-09
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


// :- module edit_seq.
// :- implementation.

/*
INIT mercury__edit_seq__init
ENDINIT
*/

#include "edit_seq.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "benchmarking.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "calendar.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "dir.mih"
#include "enum.mih"
#include "erlang_rtti_implementation.mih"
#include "exception.mih"
#include "float.mih"
#include "int.mih"
#include "int16.mih"
#include "int32.mih"
#include "int64.mih"
#include "int8.mih"
#include "integer.mih"
#include "io.mih"
#include "lexer.mih"
#include "list.mih"
#include "map.mih"
#include "math.mih"
#include "maybe.mih"
#include "mutvar.mih"
#include "ops.mih"
#include "pair.mih"
#include "parser.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "solutions.mih"
#include "std_util.mih"
#include "stm_builtin.mih"
#include "store.mih"
#include "stream.mih"
#include "string.mih"
#include "table_builtin.mih"
#include "term.mih"
#include "term_conversion.mih"
#include "term_io.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "uint.mih"
#include "uint16.mih"
#include "uint32.mih"
#include "uint64.mih"
#include "uint8.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "stream.string_writer.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"




static const MR_FA_PseudoTypeInfo_Struct1 mercury__edit_seq__edit_seq__pti_diff_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 mercury__edit_seq__list__pti_list_1__pseudo_edit_seq__pti_diff_1__pseudo_1;

static const MR_PseudoTypeInfo mercury__edit_seq__edit_seq__field_types_change_hunk_1_0[5];

static const MR_ConstString mercury__edit_seq__edit_seq__field_names_change_hunk_1_0[5];

static const MR_DuFunctorDesc mercury__edit_seq__edit_seq__du_functor_desc_change_hunk_1_0;

static const MR_DuFunctorDescPtr mercury__edit_seq__edit_seq__du_stag_ordered_change_hunk_1_0[1];

static const MR_DuPtagLayout mercury__edit_seq__edit_seq__du_ptag_ordered_change_hunk_1[1];

static const MR_DuFunctorDescPtr mercury__edit_seq__edit_seq__du_name_ordered_change_hunk_1[1];

static const MR_Integer mercury__edit_seq__edit_seq__functor_number_map_change_hunk_1[1];

static const MR_PseudoTypeInfo mercury__edit_seq__edit_seq__field_types_diff_1_0[1];

static const MR_DuFunctorDesc mercury__edit_seq__edit_seq__du_functor_desc_diff_1_0;

static const MR_PseudoTypeInfo mercury__edit_seq__edit_seq__field_types_diff_1_1[1];

static const MR_DuFunctorDesc mercury__edit_seq__edit_seq__du_functor_desc_diff_1_1;

static const MR_PseudoTypeInfo mercury__edit_seq__edit_seq__field_types_diff_1_2[1];

static const MR_DuFunctorDesc mercury__edit_seq__edit_seq__du_functor_desc_diff_1_2;

static const MR_DuFunctorDescPtr mercury__edit_seq__edit_seq__du_stag_ordered_diff_1_0[1];

static const MR_DuFunctorDescPtr mercury__edit_seq__edit_seq__du_stag_ordered_diff_1_1[1];

static const MR_DuFunctorDescPtr mercury__edit_seq__edit_seq__du_stag_ordered_diff_1_2[1];

static const MR_DuPtagLayout mercury__edit_seq__edit_seq__du_ptag_ordered_diff_1[3];

static const MR_DuFunctorDescPtr mercury__edit_seq__edit_seq__du_name_ordered_diff_1[3];

static const MR_Integer mercury__edit_seq__edit_seq__functor_number_map_diff_1[3];

static const MR_FA_PseudoTypeInfo_Struct1 mercury__edit_seq__cord__pti_cord_1__pseudo_edit_seq__pti_diff_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 mercury__edit_seq__edit_seq__pti_edit_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 mercury__edit_seq__cord__pti_cord_1__pseudo_edit_seq__pti_edit_1__pseudo_1;

static const MR_PseudoTypeInfo mercury__edit_seq__edit_seq__field_types_dynprog_entry_1_0[2];

static const MR_ConstString mercury__edit_seq__edit_seq__field_names_dynprog_entry_1_0[2];

static const MR_DuFunctorDesc mercury__edit_seq__edit_seq__du_functor_desc_dynprog_entry_1_0;

static const MR_DuFunctorDescPtr mercury__edit_seq__edit_seq__du_stag_ordered_dynprog_entry_1_0[1];

static const MR_DuPtagLayout mercury__edit_seq__edit_seq__du_ptag_ordered_dynprog_entry_1[1];

static const MR_DuFunctorDescPtr mercury__edit_seq__edit_seq__du_name_ordered_dynprog_entry_1[1];

static const MR_Integer mercury__edit_seq__edit_seq__functor_number_map_dynprog_entry_1[1];

static const MR_FA_PseudoTypeInfo_Struct1 mercury__edit_seq__edit_seq__pti_dynprog_entry_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct2 mercury__edit_seq__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_edit_seq__pti_dynprog_entry_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct2 mercury__edit_seq__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_edit_seq__pti_dynprog_entry_1__pseudo_1;

static const MR_PseudoTypeInfo mercury__edit_seq__edit_seq__field_types_edit_1_0[1];

static const MR_DuFunctorDesc mercury__edit_seq__edit_seq__du_functor_desc_edit_1_0;

static const MR_PseudoTypeInfo mercury__edit_seq__edit_seq__field_types_edit_1_1[2];

static const MR_DuFunctorDesc mercury__edit_seq__edit_seq__du_functor_desc_edit_1_1;

static const MR_PseudoTypeInfo mercury__edit_seq__edit_seq__field_types_edit_1_2[2];

static const MR_DuFunctorDesc mercury__edit_seq__edit_seq__du_functor_desc_edit_1_2;

static const MR_DuFunctorDescPtr mercury__edit_seq__edit_seq__du_stag_ordered_edit_1_0[1];

static const MR_DuFunctorDescPtr mercury__edit_seq__edit_seq__du_stag_ordered_edit_1_1[1];

static const MR_DuFunctorDescPtr mercury__edit_seq__edit_seq__du_stag_ordered_edit_1_2[1];

static const MR_DuPtagLayout mercury__edit_seq__edit_seq__du_ptag_ordered_edit_1[3];

static const MR_DuFunctorDescPtr mercury__edit_seq__edit_seq__du_name_ordered_edit_1[3];

static const MR_Integer mercury__edit_seq__edit_seq__functor_number_map_edit_1[3];

static const MR_PseudoTypeInfo mercury__edit_seq__edit_seq__field_types_edit_params_0_0[3];

static const MR_ConstString mercury__edit_seq__edit_seq__field_names_edit_params_0_0[3];

static const MR_DuFunctorDesc mercury__edit_seq__edit_seq__du_functor_desc_edit_params_0_0;

static const MR_DuFunctorDescPtr mercury__edit_seq__edit_seq__du_stag_ordered_edit_params_0_0[1];

static const MR_DuPtagLayout mercury__edit_seq__edit_seq__du_ptag_ordered_edit_params_0[1];

static const MR_DuFunctorDescPtr mercury__edit_seq__edit_seq__du_name_ordered_edit_params_0[1];

static const MR_Integer mercury__edit_seq__edit_seq__functor_number_map_edit_params_0[1];

static const MR_FA_PseudoTypeInfo_Struct1 mercury__edit_seq__list__pti_list_1__pseudo_edit_seq__pti_edit_1__pseudo_1;

static MR_Integer MR_CALL 
mercury__edit_seq__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static void MR_CALL 
mercury__edit_seq__find_change_hunks_loop_6_p_0(
  MR_Word TypeInfo_for_T_49,
  MR_Integer ContextSize_7,
  MR_Word Diffs_8,
  MR_Integer InitPosA_9,
  MR_Integer InitPosB_10,
  MR_Word STATE_VARIABLE_RevCHunks_0_36,
  MR_Word * STATE_VARIABLE_RevCHunks_37);

static void MR_CALL 
mercury__edit_seq__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_99_97_110_95_99_104_97_110_103_101_95_104_117_110_107_95_100_105_102_102_115_95_95_91_49_93_95_48_13_p_0(
  MR_Integer ContextSize_14,
  MR_Word Diffs_15,
  MR_Word * LeftOverDiffs_16,
  MR_Word STATE_VARIABLE_RevCHunkDiffs_0_28,
  MR_Word * STATE_VARIABLE_RevCHunkDiffs_29,
  MR_Integer STATE_VARIABLE_NumDeleted_0_30,
  MR_Integer * STATE_VARIABLE_NumDeleted_31,
  MR_Integer STATE_VARIABLE_NumInserted_0_32,
  MR_Integer * STATE_VARIABLE_NumInserted_33,
  MR_Integer STATE_VARIABLE_NumUnchanged_0_34,
  MR_Integer * STATE_VARIABLE_NumUnchanged_35,
  MR_Integer STATE_VARIABLE_NumContigUnchanged_0_36,
  MR_Integer * STATE_VARIABLE_NumContigUnchanged_37);

static MR_bool MR_CALL 
mercury__edit_seq__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_99_97_110_95_106_111_105_110_101_100_95_99_111_110_116_101_120_116_95_95_91_49_93_95_48_7_p_0(
  MR_Integer MaxUnchanged_8,
  MR_Word Diffs_9,
  MR_Word * LeftOverDiffs_10,
  MR_Word STATE_VARIABLE_RevUnchangedDiffs_0_18,
  MR_Word * STATE_VARIABLE_RevUnchangedDiffs_19,
  MR_Integer STATE_VARIABLE_NumUnchanged_0_20,
  MR_Integer * STATE_VARIABLE_NumUnchanged_21);

static void MR_CALL 
mercury__edit_seq__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_99_97_110_95_105_110_105_116_105_97_108_95_117_110_99_104_97_110_103_101_100_95_100_105_102_102_115_95_95_91_49_93_95_48_6_p_0(
  MR_Word Diffs_7,
  MR_Word * LeftOverDiffs_8,
  MR_Word STATE_VARIABLE_RevUnchangedDiffs_0_16,
  MR_Word * STATE_VARIABLE_RevUnchangedDiffs_17,
  MR_Integer STATE_VARIABLE_NumUnchanged_0_18,
  MR_Integer * STATE_VARIABLE_NumUnchanged_19);

static MR_Word MR_CALL 
mercury__edit_seq__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_49_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_2_f_in__list_0(
  MR_Word Var_14,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
mercury__edit_seq__IntroducedFrom__func__find_diff_cord__419__1_2_f_0(
  MR_Word TypeInfo_for_T_121,
  MR_Box LambdaHeadVar__1_116);

static void MR_CALL 
mercury__edit_seq__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_99_111_110_115_95_95_91_49_93_95_48_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Box * Head_2,
  MR_Word * Tail_3);

static void MR_CALL 
mercury__edit_seq__flush_deletes_inserts_6_p_0(
  MR_Word TypeInfo_for_T_20,
  MR_Word STATE_VARIABLE_Deletes_0_10,
  MR_Word * STATE_VARIABLE_Deletes_11,
  MR_Word STATE_VARIABLE_Inserts_0_12,
  MR_Word * STATE_VARIABLE_Inserts_13,
  MR_Word STATE_VARIABLE_Diffs_0_14,
  MR_Word * STATE_VARIABLE_Diffs_15);

static void MR_CALL 
mercury__edit_seq__process_rows_6_p_0(
  MR_Word TypeInfo_for_T_26,
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Table_0_5,
  MR_Word * STATE_VARIABLE_Table_6);

static void MR_CALL 
mercury__edit_seq__process_columns_7_p_0(
  MR_Word TypeInfo_for_T_31,
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Integer HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_Table_0_6,
  MR_Word * STATE_VARIABLE_Table_7);

static void MR_CALL 
mercury__edit_seq__process_entry_7_p_0(
  MR_Word TypeInfo_for_T_58,
  MR_Word Params_8,
  MR_Integer RowNum_9,
  MR_Box A_10,
  MR_Integer ColNum_11,
  MR_Box B_12,
  MR_Word STATE_VARIABLE_Table_0_28,
  MR_Word * STATE_VARIABLE_Table_29);

static void MR_CALL 
mercury__edit_seq__add_entry_5_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Integer RowNum_6,
  MR_Integer ColNum_7,
  MR_Word Entry_8,
  MR_Word STATE_VARIABLE_Table_0_12,
  MR_Word * STATE_VARIABLE_Table_13);

static void MR_CALL 
mercury__edit_seq__lookup_entry_4_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word Table_5,
  MR_Integer RowNum_6,
  MR_Integer ColNum_7,
  MR_Word * Entry_8);

static void MR_CALL 
mercury__edit_seq__init_col_zero_deletes_6_p_0(
  MR_Word TypeInfo_for_T_33,
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Table_0_5,
  MR_Word * STATE_VARIABLE_Table_6);

static void MR_CALL 
mercury__edit_seq__init_row_zero_inserts_6_p_0(
  MR_Word TypeInfo_for_T_34,
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Table_0_5,
  MR_Word * STATE_VARIABLE_Table_6);

static MR_bool MR_CALL 
mercury__edit_seq____Unify____change_hunk_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__edit_seq____Compare____change_hunk_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__edit_seq____Unify____diff_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__edit_seq____Compare____diff_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__edit_seq____Unify____diff_cord_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__edit_seq____Compare____diff_cord_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__edit_seq____Unify____diff_seq_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__edit_seq____Compare____diff_seq_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__edit_seq____Unify____dynprog_entry_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__edit_seq____Compare____dynprog_entry_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__edit_seq____Unify____dynprog_table_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__edit_seq____Compare____dynprog_table_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__edit_seq____Unify____edit_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__edit_seq____Compare____edit_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__edit_seq____Unify____edit_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__edit_seq____Compare____edit_params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__edit_seq____Unify____edit_seq_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__edit_seq____Compare____edit_seq_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);


static /* final */ const MR_Box mercury__edit_seq_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__edit_seq_scalar_common_2[2][4];

static /* final */ const MR_Box mercury__edit_seq_scalar_common_3[2][5];

static /* final */ const MR_Box mercury__edit_seq_scalar_common_4[1][2];




static /* final */ const MR_Box mercury__edit_seq_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__edit_seq_scalar_common_2[2][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__edit_seq_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (&mercury__edit_seq_scalar_common_4[0])),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box mercury__edit_seq_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__edit_seq_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__edit_seq_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__edit_seq_scalar_common_4[1][2] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Integer) 0))
  },
};



#include "array.mh"
#include "benchmarking.mh"
#include "bitmap.mh"
#include "builtin.mh"
#include "char.mh"
#include "construct.mh"
#include "dir.mh"
#include "exception.mh"
#include "float.mh"
#include "int.mh"
#include "int16.mh"
#include "int32.mh"
#include "int64.mh"
#include "int8.mh"
#include "io.mh"
#include "math.mh"
#include "pretty_printer.mh"
#include "private_builtin.mh"
#include "rtti_implementation.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "string.mh"
#include "table_builtin.mh"
#include "time.mh"
#include "type_desc.mh"
#include "uint.mh"
#include "uint16.mh"
#include "uint32.mh"
#include "uint64.mh"
#include "uint8.mh"
#include "version_array.mh"



static const MR_FA_PseudoTypeInfo_Struct1 mercury__edit_seq__edit_seq__pti_diff_1__pseudo_1 = {
  &mercury__edit_seq__edit_seq__type_ctor_info_diff_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__edit_seq__list__pti_list_1__pseudo_edit_seq__pti_diff_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&mercury__edit_seq__edit_seq__pti_diff_1__pseudo_1)
  }
};

static const MR_PseudoTypeInfo mercury__edit_seq__edit_seq__field_types_change_hunk_1_0[5] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__edit_seq__list__pti_list_1__pseudo_edit_seq__pti_diff_1__pseudo_1)
};

static const MR_ConstString mercury__edit_seq__edit_seq__field_names_change_hunk_1_0[5] = {
  (MR_String) "ch_seq_a_start",
  (MR_String) "ch_seq_a_length",
  (MR_String) "ch_seq_b_start",
  (MR_String) "ch_seq_b_length",
  (MR_String) "ch_diff"
};

static const MR_DuFunctorDesc mercury__edit_seq__edit_seq__du_functor_desc_change_hunk_1_0 = {
  (MR_String) "change_hunk",
  INT16_C(5),
  UINT16_C(16),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__edit_seq__edit_seq__field_types_change_hunk_1_0,
  mercury__edit_seq__edit_seq__field_names_change_hunk_1_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__edit_seq__edit_seq__du_stag_ordered_change_hunk_1_0[1] = {
  &mercury__edit_seq__edit_seq__du_functor_desc_change_hunk_1_0
};

static const MR_DuPtagLayout mercury__edit_seq__edit_seq__du_ptag_ordered_change_hunk_1[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__edit_seq__edit_seq__du_stag_ordered_change_hunk_1_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr mercury__edit_seq__edit_seq__du_name_ordered_change_hunk_1[1] = {
  &mercury__edit_seq__edit_seq__du_functor_desc_change_hunk_1_0
};

static const MR_Integer mercury__edit_seq__edit_seq__functor_number_map_change_hunk_1[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__edit_seq__edit_seq__type_ctor_info_change_hunk_1 = {
  (MR_Integer) 1,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__edit_seq____Unify____change_hunk_1_0_10001)),
  ((MR_Box) (mercury__edit_seq____Compare____change_hunk_1_0_10001)),
  (MR_String) "edit_seq",
  (MR_String) "change_hunk",
  {     mercury__edit_seq__edit_seq__du_name_ordered_change_hunk_1 },
  {     mercury__edit_seq__edit_seq__du_ptag_ordered_change_hunk_1 },
  (MR_Integer) 1,
  UINT16_C(4),
  mercury__edit_seq__edit_seq__functor_number_map_change_hunk_1
};

static const MR_PseudoTypeInfo mercury__edit_seq__edit_seq__field_types_diff_1_0[1] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1)
};

static const MR_DuFunctorDesc mercury__edit_seq__edit_seq__du_functor_desc_diff_1_0 = {
  (MR_String) "unchanged",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__edit_seq__edit_seq__field_types_diff_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__edit_seq__edit_seq__field_types_diff_1_1[1] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1)
};

static const MR_DuFunctorDesc mercury__edit_seq__edit_seq__du_functor_desc_diff_1_1 = {
  (MR_String) "deleted",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__edit_seq__edit_seq__field_types_diff_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__edit_seq__edit_seq__field_types_diff_1_2[1] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1)
};

static const MR_DuFunctorDesc mercury__edit_seq__edit_seq__du_functor_desc_diff_1_2 = {
  (MR_String) "inserted",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  mercury__edit_seq__edit_seq__field_types_diff_1_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__edit_seq__edit_seq__du_stag_ordered_diff_1_0[1] = {
  &mercury__edit_seq__edit_seq__du_functor_desc_diff_1_0
};

static const MR_DuFunctorDescPtr mercury__edit_seq__edit_seq__du_stag_ordered_diff_1_1[1] = {
  &mercury__edit_seq__edit_seq__du_functor_desc_diff_1_1
};

static const MR_DuFunctorDescPtr mercury__edit_seq__edit_seq__du_stag_ordered_diff_1_2[1] = {
  &mercury__edit_seq__edit_seq__du_functor_desc_diff_1_2
};

static const MR_DuPtagLayout mercury__edit_seq__edit_seq__du_ptag_ordered_diff_1[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__edit_seq__edit_seq__du_stag_ordered_diff_1_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__edit_seq__edit_seq__du_stag_ordered_diff_1_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__edit_seq__edit_seq__du_stag_ordered_diff_1_2,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr mercury__edit_seq__edit_seq__du_name_ordered_diff_1[3] = {
  &mercury__edit_seq__edit_seq__du_functor_desc_diff_1_1,
  &mercury__edit_seq__edit_seq__du_functor_desc_diff_1_2,
  &mercury__edit_seq__edit_seq__du_functor_desc_diff_1_0
};

static const MR_Integer mercury__edit_seq__edit_seq__functor_number_map_diff_1[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__edit_seq__edit_seq__type_ctor_info_diff_1 = {
  (MR_Integer) 1,
  UINT8_C(17),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__edit_seq____Unify____diff_1_0_10001)),
  ((MR_Box) (mercury__edit_seq____Compare____diff_1_0_10001)),
  (MR_String) "edit_seq",
  (MR_String) "diff",
  {     mercury__edit_seq__edit_seq__du_name_ordered_diff_1 },
  {     mercury__edit_seq__edit_seq__du_ptag_ordered_diff_1 },
  (MR_Integer) 3,
  UINT16_C(4),
  mercury__edit_seq__edit_seq__functor_number_map_diff_1
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__edit_seq__cord__pti_cord_1__pseudo_edit_seq__pti_diff_1__pseudo_1 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) (&mercury__edit_seq__edit_seq__pti_diff_1__pseudo_1)
  }
};

const MR_TypeCtorInfo_Struct mercury__edit_seq__edit_seq__type_ctor_info_diff_cord_1 = {
  (MR_Integer) 1,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__edit_seq____Unify____diff_cord_1_0_10001)),
  ((MR_Box) (mercury__edit_seq____Compare____diff_cord_1_0_10001)),
  (MR_String) "edit_seq",
  (MR_String) "diff_cord",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__edit_seq__cord__pti_cord_1__pseudo_edit_seq__pti_diff_1__pseudo_1) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

const MR_TypeCtorInfo_Struct mercury__edit_seq__edit_seq__type_ctor_info_diff_seq_1 = {
  (MR_Integer) 1,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__edit_seq____Unify____diff_seq_1_0_10001)),
  ((MR_Box) (mercury__edit_seq____Compare____diff_seq_1_0_10001)),
  (MR_String) "edit_seq",
  (MR_String) "diff_seq",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__edit_seq__list__pti_list_1__pseudo_edit_seq__pti_diff_1__pseudo_1) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__edit_seq__edit_seq__pti_edit_1__pseudo_1 = {
  &mercury__edit_seq__edit_seq__type_ctor_info_edit_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__edit_seq__cord__pti_cord_1__pseudo_edit_seq__pti_edit_1__pseudo_1 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) (&mercury__edit_seq__edit_seq__pti_edit_1__pseudo_1)
  }
};

static const MR_PseudoTypeInfo mercury__edit_seq__edit_seq__field_types_dynprog_entry_1_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__edit_seq__cord__pti_cord_1__pseudo_edit_seq__pti_edit_1__pseudo_1),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_ConstString mercury__edit_seq__edit_seq__field_names_dynprog_entry_1_0[2] = {
  (MR_String) "e_edits",
  (MR_String) "e_cost"
};

static const MR_DuFunctorDesc mercury__edit_seq__edit_seq__du_functor_desc_dynprog_entry_1_0 = {
  (MR_String) "entry",
  INT16_C(2),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__edit_seq__edit_seq__field_types_dynprog_entry_1_0,
  mercury__edit_seq__edit_seq__field_names_dynprog_entry_1_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__edit_seq__edit_seq__du_stag_ordered_dynprog_entry_1_0[1] = {
  &mercury__edit_seq__edit_seq__du_functor_desc_dynprog_entry_1_0
};

static const MR_DuPtagLayout mercury__edit_seq__edit_seq__du_ptag_ordered_dynprog_entry_1[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__edit_seq__edit_seq__du_stag_ordered_dynprog_entry_1_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr mercury__edit_seq__edit_seq__du_name_ordered_dynprog_entry_1[1] = {
  &mercury__edit_seq__edit_seq__du_functor_desc_dynprog_entry_1_0
};

static const MR_Integer mercury__edit_seq__edit_seq__functor_number_map_dynprog_entry_1[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__edit_seq__edit_seq__type_ctor_info_dynprog_entry_1 = {
  (MR_Integer) 1,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__edit_seq____Unify____dynprog_entry_1_0_10001)),
  ((MR_Box) (mercury__edit_seq____Compare____dynprog_entry_1_0_10001)),
  (MR_String) "edit_seq",
  (MR_String) "dynprog_entry",
  {     mercury__edit_seq__edit_seq__du_name_ordered_dynprog_entry_1 },
  {     mercury__edit_seq__edit_seq__du_ptag_ordered_dynprog_entry_1 },
  (MR_Integer) 1,
  UINT16_C(4),
  mercury__edit_seq__edit_seq__functor_number_map_dynprog_entry_1
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__edit_seq__edit_seq__pti_dynprog_entry_1__pseudo_1 = {
  &mercury__edit_seq__edit_seq__type_ctor_info_dynprog_entry_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 mercury__edit_seq__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_edit_seq__pti_dynprog_entry_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&mercury__edit_seq__edit_seq__pti_dynprog_entry_1__pseudo_1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 mercury__edit_seq__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_edit_seq__pti_dynprog_entry_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&mercury__edit_seq__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_edit_seq__pti_dynprog_entry_1__pseudo_1)
  }
};

const MR_TypeCtorInfo_Struct mercury__edit_seq__edit_seq__type_ctor_info_dynprog_table_1 = {
  (MR_Integer) 1,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__edit_seq____Unify____dynprog_table_1_0_10001)),
  ((MR_Box) (mercury__edit_seq____Compare____dynprog_table_1_0_10001)),
  (MR_String) "edit_seq",
  (MR_String) "dynprog_table",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__edit_seq__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_edit_seq__pti_dynprog_entry_1__pseudo_1) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_PseudoTypeInfo mercury__edit_seq__edit_seq__field_types_edit_1_0[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc mercury__edit_seq__edit_seq__du_functor_desc_edit_1_0 = {
  (MR_String) "delete",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__edit_seq__edit_seq__field_types_edit_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__edit_seq__edit_seq__field_types_edit_1_1[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) ((MR_Integer) 1)
};

static const MR_DuFunctorDesc mercury__edit_seq__edit_seq__du_functor_desc_edit_1_1 = {
  (MR_String) "insert",
  INT16_C(2),
  UINT16_C(2),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__edit_seq__edit_seq__field_types_edit_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__edit_seq__edit_seq__field_types_edit_1_2[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) ((MR_Integer) 1)
};

static const MR_DuFunctorDesc mercury__edit_seq__edit_seq__du_functor_desc_edit_1_2 = {
  (MR_String) "replace",
  INT16_C(2),
  UINT16_C(2),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  mercury__edit_seq__edit_seq__field_types_edit_1_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__edit_seq__edit_seq__du_stag_ordered_edit_1_0[1] = {
  &mercury__edit_seq__edit_seq__du_functor_desc_edit_1_0
};

static const MR_DuFunctorDescPtr mercury__edit_seq__edit_seq__du_stag_ordered_edit_1_1[1] = {
  &mercury__edit_seq__edit_seq__du_functor_desc_edit_1_1
};

static const MR_DuFunctorDescPtr mercury__edit_seq__edit_seq__du_stag_ordered_edit_1_2[1] = {
  &mercury__edit_seq__edit_seq__du_functor_desc_edit_1_2
};

static const MR_DuPtagLayout mercury__edit_seq__edit_seq__du_ptag_ordered_edit_1[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__edit_seq__edit_seq__du_stag_ordered_edit_1_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__edit_seq__edit_seq__du_stag_ordered_edit_1_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__edit_seq__edit_seq__du_stag_ordered_edit_1_2,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr mercury__edit_seq__edit_seq__du_name_ordered_edit_1[3] = {
  &mercury__edit_seq__edit_seq__du_functor_desc_edit_1_0,
  &mercury__edit_seq__edit_seq__du_functor_desc_edit_1_1,
  &mercury__edit_seq__edit_seq__du_functor_desc_edit_1_2
};

static const MR_Integer mercury__edit_seq__edit_seq__functor_number_map_edit_1[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct mercury__edit_seq__edit_seq__type_ctor_info_edit_1 = {
  (MR_Integer) 1,
  UINT8_C(17),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__edit_seq____Unify____edit_1_0_10001)),
  ((MR_Box) (mercury__edit_seq____Compare____edit_1_0_10001)),
  (MR_String) "edit_seq",
  (MR_String) "edit",
  {     mercury__edit_seq__edit_seq__du_name_ordered_edit_1 },
  {     mercury__edit_seq__edit_seq__du_ptag_ordered_edit_1 },
  (MR_Integer) 3,
  UINT16_C(4),
  mercury__edit_seq__edit_seq__functor_number_map_edit_1
};

static const MR_PseudoTypeInfo mercury__edit_seq__edit_seq__field_types_edit_params_0_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_ConstString mercury__edit_seq__edit_seq__field_names_edit_params_0_0[3] = {
  (MR_String) "cost_of_delete",
  (MR_String) "cost_of_insert",
  (MR_String) "cost_of_replace"
};

static const MR_DuFunctorDesc mercury__edit_seq__edit_seq__du_functor_desc_edit_params_0_0 = {
  (MR_String) "edit_params",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__edit_seq__edit_seq__field_types_edit_params_0_0,
  mercury__edit_seq__edit_seq__field_names_edit_params_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__edit_seq__edit_seq__du_stag_ordered_edit_params_0_0[1] = {
  &mercury__edit_seq__edit_seq__du_functor_desc_edit_params_0_0
};

static const MR_DuPtagLayout mercury__edit_seq__edit_seq__du_ptag_ordered_edit_params_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__edit_seq__edit_seq__du_stag_ordered_edit_params_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr mercury__edit_seq__edit_seq__du_name_ordered_edit_params_0[1] = {
  &mercury__edit_seq__edit_seq__du_functor_desc_edit_params_0_0
};

static const MR_Integer mercury__edit_seq__edit_seq__functor_number_map_edit_params_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__edit_seq__edit_seq__type_ctor_info_edit_params_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__edit_seq____Unify____edit_params_0_0_10001)),
  ((MR_Box) (mercury__edit_seq____Compare____edit_params_0_0_10001)),
  (MR_String) "edit_seq",
  (MR_String) "edit_params",
  {     mercury__edit_seq__edit_seq__du_name_ordered_edit_params_0 },
  {     mercury__edit_seq__edit_seq__du_ptag_ordered_edit_params_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  mercury__edit_seq__edit_seq__functor_number_map_edit_params_0
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__edit_seq__list__pti_list_1__pseudo_edit_seq__pti_edit_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&mercury__edit_seq__edit_seq__pti_edit_1__pseudo_1)
  }
};

const MR_TypeCtorInfo_Struct mercury__edit_seq__edit_seq__type_ctor_info_edit_seq_1 = {
  (MR_Integer) 1,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__edit_seq____Unify____edit_seq_1_0_10001)),
  ((MR_Box) (mercury__edit_seq____Compare____edit_seq_1_0_10001)),
  (MR_String) "edit_seq",
  (MR_String) "edit_seq",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__edit_seq__list__pti_list_1__pseudo_edit_seq__pti_edit_1__pseudo_1) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static MR_Integer MR_CALL 
mercury__edit_seq__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  return (MR_Integer) 1200;
}

void MR_CALL 
mercury__edit_seq____Compare____edit_seq_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word TypeInfo_8_8;
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    {
      TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 0) = ((MR_Box) (&mercury__edit_seq__edit_seq__type_ctor_info_edit_1));
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for_T_6));
    }
    mercury__list____Compare____list_1_0(TypeInfo_8_8, HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
  }
}

MR_bool MR_CALL 
mercury__edit_seq____Unify____edit_seq_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_7_7;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    {
      TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_7_7, 0) = ((MR_Box) (&mercury__edit_seq__edit_seq__type_ctor_info_edit_1));
      MR_hl_field(MR_mktag(0), TypeInfo_7_7, 1) = ((MR_Box) (TypeInfo_for_T_5));
    }
    succeeded = mercury__list____Unify____list_1_0(TypeInfo_7_7, (MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
    return succeeded;
  }
}

void MR_CALL 
mercury__edit_seq____Compare____edit_params_0_0(
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
      MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word SubResult1_6;

      succeeded = (ArgX1_4 < ArgY1_5);
      if (succeeded)
        SubResult1_6 = (MR_Integer) 1;
      else
      {
        succeeded = (ArgX1_4 == ArgY1_5);
        if (succeeded)
          SubResult1_6 = (MR_Integer) 0;
        else
          SubResult1_6 = (MR_Integer) 2;
      }
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        succeeded = (ArgX2_7 < ArgY2_8);
        if (succeeded)
          SubResult2_9 = (MR_Integer) 1;
        else
        {
          succeeded = (ArgX2_7 == ArgY2_8);
          if (succeeded)
            SubResult2_9 = (MR_Integer) 0;
          else
            SubResult2_9 = (MR_Integer) 2;
        }
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          succeeded = (ArgX3_10 < ArgY3_11);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 1;
          else
          {
            succeeded = (ArgX3_10 == ArgY3_11);
            if (succeeded)
              *HeadVar__1_1 = (MR_Integer) 0;
            else
              *HeadVar__1_1 = (MR_Integer) 2;
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
mercury__edit_seq____Unify____edit_params_0_0(
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
      MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

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
}

void MR_CALL 
mercury__edit_seq____Compare____edit_1_0(
  MR_Word TypeInfo_for_T_38,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_36 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_37 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_36 == CastY_37);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer Var_42 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));

                  succeeded = (Var_42 < ArgY1_5);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_42 == ArgY1_5);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 0;
                    else
                      *HeadVar__1_1 = (MR_Integer) 2;
                  }
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Box Var_43 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
            MR_Integer Var_44 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer ArgY1_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Box ArgY2_19 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1));
                  MR_Word SubResult1_17;

                  succeeded = (Var_44 < ArgY1_16);
                  if (succeeded)
                    SubResult1_17 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_44 == ArgY1_16);
                    if (succeeded)
                      SubResult1_17 = (MR_Integer) 0;
                    else
                      SubResult1_17 = (MR_Integer) 2;
                  }
                  succeeded = (SubResult1_17 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_17;
                  else
                    mercury__builtin__compare_3_p_0(TypeInfo_for_T_38, HeadVar__1_1, Var_43, ArgY2_19);
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
            MR_Box Var_45 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1));
            MR_Integer Var_46 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Integer ArgY1_32 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Box ArgY2_35 = (MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1));
                  MR_Word SubResult1_33;

                  succeeded = (Var_46 < ArgY1_32);
                  if (succeeded)
                    SubResult1_33 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_46 == ArgY1_32);
                    if (succeeded)
                      SubResult1_33 = (MR_Integer) 0;
                    else
                      SubResult1_33 = (MR_Integer) 2;
                  }
                  succeeded = (SubResult1_33 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_33;
                  else
                    mercury__builtin__compare_3_p_0(TypeInfo_for_T_38, HeadVar__1_1, Var_45, ArgY2_35);
                }
                break;
            }
          }
          break;
      }
  }
}

MR_bool MR_CALL 
mercury__edit_seq____Unify____edit_1_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
          {
            MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
            MR_Integer ArgY1_4;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
            if (succeeded)
            {
              ArgY1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = (ArgX1_3 == ArgY1_4);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer ArgX1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Integer ArgY1_6;
            MR_Box ArgX2_7 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1));
            MR_Box ArgY2_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_8 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
              succeeded = (ArgX1_5 == ArgY1_6);
              if (succeeded)
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_15, ArgX2_7, ArgY2_8);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer ArgX1_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Integer ArgY1_10;
            MR_Box ArgX2_11 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1));
            MR_Box ArgY2_12;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_12 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1));
              succeeded = (ArgX1_9 == ArgY1_10);
              if (succeeded)
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_15, ArgX2_11, ArgY2_12);
            }
          }
          break;
      }
    return succeeded;
  }
}

void MR_CALL 
mercury__edit_seq____Compare____dynprog_table_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word TypeInfo_9_9;
    MR_Word TypeInfo_11_11;
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    {
      TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_9_9, 0) = ((MR_Box) (&mercury__edit_seq__edit_seq__type_ctor_info_dynprog_entry_1));
      MR_hl_field(MR_mktag(0), TypeInfo_9_9, 1) = ((MR_Box) (TypeInfo_for_T_6));
    }
    {
      TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_11_11, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
      MR_hl_field(MR_mktag(0), TypeInfo_11_11, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0));
      MR_hl_field(MR_mktag(0), TypeInfo_11_11, 2) = ((MR_Box) (TypeInfo_9_9));
    }
    mercury__tree234____Compare____tree234_2_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_11_11, HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
mercury__edit_seq____Unify____dynprog_table_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_8_8;
    MR_Word TypeInfo_10_10;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    {
      TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 0) = ((MR_Box) (&mercury__edit_seq__edit_seq__type_ctor_info_dynprog_entry_1));
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for_T_5));
    }
    {
      TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_10_10, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
      MR_hl_field(MR_mktag(0), TypeInfo_10_10, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0));
      MR_hl_field(MR_mktag(0), TypeInfo_10_10, 2) = ((MR_Box) (TypeInfo_8_8));
    }
    succeeded = mercury__tree234____Unify____tree234_2_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_10_10, Cast_HeadVar1_3, Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
mercury__edit_seq____Compare____dynprog_entry_1_0(
  MR_Word TypeInfo_for_T_11,
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
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_6;
      MR_Word TypeInfo_13_13;

      {
        TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_13_13, 0) = ((MR_Box) (&mercury__edit_seq__edit_seq__type_ctor_info_edit_1));
        MR_hl_field(MR_mktag(0), TypeInfo_13_13, 1) = ((MR_Box) (TypeInfo_for_T_11));
      }
      mercury__cord____Compare____cord_1_0(TypeInfo_13_13, &SubResult1_6, (MR_Word) (ArgX1_4), (MR_Word) (ArgY1_5));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        succeeded = (ArgX2_7 < ArgY2_8);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (ArgX2_7 == ArgY2_8);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 0;
          else
            *HeadVar__1_1 = (MR_Integer) 2;
        }
      }
    }
  }
}

MR_bool MR_CALL 
mercury__edit_seq____Unify____dynprog_entry_1_0(
  MR_Word TypeInfo_for_T_9,
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
      MR_Word TypeInfo_11_11;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      {
        TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_11_11, 0) = ((MR_Box) (&mercury__edit_seq__edit_seq__type_ctor_info_edit_1));
        MR_hl_field(MR_mktag(0), TypeInfo_11_11, 1) = ((MR_Box) (TypeInfo_for_T_9));
      }
      succeeded = mercury__cord____Unify____cord_1_0(TypeInfo_11_11, (MR_Word) (ArgX1_3), (MR_Word) (ArgY1_4));
      if (succeeded)
        succeeded = (ArgX2_5 == ArgY2_6);
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__edit_seq____Compare____diff_seq_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word TypeInfo_8_8;
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    {
      TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 0) = ((MR_Box) (&mercury__edit_seq__edit_seq__type_ctor_info_diff_1));
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for_T_6));
    }
    mercury__list____Compare____list_1_0(TypeInfo_8_8, HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
  }
}

MR_bool MR_CALL 
mercury__edit_seq____Unify____diff_seq_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_7_7;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    {
      TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_7_7, 0) = ((MR_Box) (&mercury__edit_seq__edit_seq__type_ctor_info_diff_1));
      MR_hl_field(MR_mktag(0), TypeInfo_7_7, 1) = ((MR_Box) (TypeInfo_for_T_5));
    }
    succeeded = mercury__list____Unify____list_1_0(TypeInfo_7_7, (MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
    return succeeded;
  }
}

void MR_CALL 
mercury__edit_seq____Compare____diff_cord_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word TypeInfo_8_8;
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    {
      TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 0) = ((MR_Box) (&mercury__edit_seq__edit_seq__type_ctor_info_diff_1));
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for_T_6));
    }
    mercury__cord____Compare____cord_1_0(TypeInfo_8_8, HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
  }
}

MR_bool MR_CALL 
mercury__edit_seq____Unify____diff_cord_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_7_7;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    {
      TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_7_7, 0) = ((MR_Box) (&mercury__edit_seq__edit_seq__type_ctor_info_diff_1));
      MR_hl_field(MR_mktag(0), TypeInfo_7_7, 1) = ((MR_Box) (TypeInfo_for_T_5));
    }
    succeeded = mercury__cord____Unify____cord_1_0(TypeInfo_7_7, (MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
    return succeeded;
  }
}

void MR_CALL 
mercury__edit_seq____Compare____diff_1_0(
  MR_Word TypeInfo_for_T_24,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_22 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_23 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_22 == CastY_23);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Box Var_27 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Box ArgY1_5 = (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0));

                  mercury__builtin__compare_3_p_0(TypeInfo_for_T_24, HeadVar__1_1, Var_27, ArgY1_5);
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Box Var_25 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Box ArgY1_13 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0));

                  mercury__builtin__compare_3_p_0(TypeInfo_for_T_24, HeadVar__1_1, Var_25, ArgY1_13);
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
            MR_Box Var_26 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Box ArgY1_21 = (MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0));

                  mercury__builtin__compare_3_p_0(TypeInfo_for_T_24, HeadVar__1_1, Var_26, ArgY1_21);
                }
                break;
            }
          }
          break;
      }
  }
}

MR_bool MR_CALL 
mercury__edit_seq____Unify____diff_1_0(
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
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
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
          break;
        case (MR_Integer) 1:
          {
            MR_Box ArgX1_5 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
            MR_Box ArgY1_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_6 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_11, ArgX1_5, ArgY1_6);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Box ArgX1_7 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0));
            MR_Box ArgY1_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_8 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0));
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_11, ArgX1_7, ArgY1_8);
            }
          }
          break;
      }
    return succeeded;
  }
}

void MR_CALL 
mercury__edit_seq____Compare____change_hunk_1_0(
  MR_Word TypeInfo_for_T_20,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_18 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_19 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_18 == CastY_19);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Integer ArgX4_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Integer ArgY4_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Word SubResult1_6;

      succeeded = (ArgX1_4 < ArgY1_5);
      if (succeeded)
        SubResult1_6 = (MR_Integer) 1;
      else
      {
        succeeded = (ArgX1_4 == ArgY1_5);
        if (succeeded)
          SubResult1_6 = (MR_Integer) 0;
        else
          SubResult1_6 = (MR_Integer) 2;
      }
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        succeeded = (ArgX2_7 < ArgY2_8);
        if (succeeded)
          SubResult2_9 = (MR_Integer) 1;
        else
        {
          succeeded = (ArgX2_7 == ArgY2_8);
          if (succeeded)
            SubResult2_9 = (MR_Integer) 0;
          else
            SubResult2_9 = (MR_Integer) 2;
        }
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          succeeded = (ArgX3_10 < ArgY3_11);
          if (succeeded)
            SubResult3_12 = (MR_Integer) 1;
          else
          {
            succeeded = (ArgX3_10 == ArgY3_11);
            if (succeeded)
              SubResult3_12 = (MR_Integer) 0;
            else
              SubResult3_12 = (MR_Integer) 2;
          }
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Word SubResult4_15;

            succeeded = (ArgX4_13 < ArgY4_14);
            if (succeeded)
              SubResult4_15 = (MR_Integer) 1;
            else
            {
              succeeded = (ArgX4_13 == ArgY4_14);
              if (succeeded)
                SubResult4_15 = (MR_Integer) 0;
              else
                SubResult4_15 = (MR_Integer) 2;
            }
            succeeded = (SubResult4_15 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
            {
              MR_Word TypeInfo_26_26;

              {
                TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), TypeInfo_26_26, 0) = ((MR_Box) (&mercury__edit_seq__edit_seq__type_ctor_info_diff_1));
                MR_hl_field(MR_mktag(0), TypeInfo_26_26, 1) = ((MR_Box) (TypeInfo_for_T_20));
              }
              mercury__list____Compare____list_1_0(TypeInfo_26_26, HeadVar__1_1, (MR_Word) (ArgX5_16), (MR_Word) (ArgY5_17));
            }
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
mercury__edit_seq____Unify____change_hunk_1_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_13 == CastY_14);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeCtorInfo_16_16;
      MR_Word TypeInfo_17_17;
      MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Integer ArgX4_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Integer ArgY4_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));

      succeeded = (ArgX1_3 == ArgY1_4);
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
              TypeCtorInfo_16_16 = (MR_Word) (&mercury__edit_seq__edit_seq__type_ctor_info_diff_1);
              {
                TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), TypeInfo_17_17, 0) = ((MR_Box) (TypeCtorInfo_16_16));
                MR_hl_field(MR_mktag(0), TypeInfo_17_17, 1) = ((MR_Box) (TypeInfo_for_T_15));
              }
              succeeded = mercury__list____Unify____list_1_0(TypeInfo_17_17, (MR_Word) (ArgX5_11), (MR_Word) (ArgY5_12));
            }
          }
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__edit_seq__find_change_hunks_3_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Integer ContextSize_4,
  MR_Word Diffs_5,
  MR_Word * CHunks_6)
{
  {
    MR_bool succeeded = (ContextSize_4 > (MR_Integer) 0);

    if (succeeded)
    {
      MR_Word TypeInfo_16_16;
      MR_Word RevCHunks_7;
      MR_Word conv0_CHunks_6;

      mercury__edit_seq__find_change_hunks_loop_6_p_0(TypeInfo_for_T_14, ContextSize_4, Diffs_5, (MR_Integer) 1, (MR_Integer) 1, (MR_Word) ((MR_Unsigned) 0U), &RevCHunks_7);
      {
        TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_16_16, 0) = ((MR_Box) (&mercury__edit_seq__edit_seq__type_ctor_info_change_hunk_1));
        MR_hl_field(MR_mktag(0), TypeInfo_16_16, 1) = ((MR_Box) (TypeInfo_for_T_14));
      }
      mercury__list__reverse_2_p_0(TypeInfo_16_16, (MR_Word) (RevCHunks_7), &conv0_CHunks_6);
      *CHunks_6 = (MR_Word) (conv0_CHunks_6);
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140edit_seq.find_change_hunks\'/3", (MR_String) "A context size must be strictly positive to make sense.");
        return;
      }
  }
}

static void MR_CALL 
mercury__edit_seq__find_change_hunks_loop_6_p_0(
  MR_Word TypeInfo_for_T_49,
  MR_Integer ContextSize_7,
  MR_Word Diffs_8,
  MR_Integer InitPosA_9,
  MR_Integer InitPosB_10,
  MR_Word STATE_VARIABLE_RevCHunks_0_36,
  MR_Word * STATE_VARIABLE_RevCHunks_37)
{
  while (MR_TRUE)
  {
    MR_Word AfterInitUnchangedsDiffs_12;
    MR_Word RevUnchangedDiffs_13;
    MR_Integer NumUnchangedDiffs_14;
    MR_Word LeftOverDiffs_15;
    MR_Word RevChangeTrailContextDiffs_16;
    MR_Integer NumCHunkDeleted_17;
    MR_Integer NumCHunkInserted_18;
    MR_Integer NumCHunkUnchanged_19;
    MR_Integer Var_20;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__edit_seq__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_99_97_110_95_105_110_105_116_105_97_108_95_117_110_99_104_97_110_103_101_100_95_100_105_102_102_115_95_95_91_49_93_95_48_6_p_0(Diffs_8, &AfterInitUnchangedsDiffs_12, (MR_Word) ((MR_Unsigned) 0U), &RevUnchangedDiffs_13, (MR_Integer) 0, &NumUnchangedDiffs_14);
    mercury__edit_seq__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_99_97_110_95_99_104_97_110_103_101_95_104_117_110_107_95_100_105_102_102_115_95_95_91_49_93_95_48_13_p_0(ContextSize_7, AfterInitUnchangedsDiffs_12, &LeftOverDiffs_15, (MR_Word) ((MR_Unsigned) 0U), &RevChangeTrailContextDiffs_16, (MR_Integer) 0, &NumCHunkDeleted_17, (MR_Integer) 0, &NumCHunkInserted_18, (MR_Integer) 0, &NumCHunkUnchanged_19, (MR_Integer) 0, &Var_20);
    if ((RevChangeTrailContextDiffs_16 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_RevCHunks_37 = STATE_VARIABLE_RevCHunks_0_36;
    else
    {
      MR_Word TypeInfo_51_51;
      MR_Word ChangeTrailContextDiffs_23;
      MR_Word RevInitContextDiffs_24;
      MR_Word InitContextDiffs_25;
      MR_Integer NumInitContextDiffs_26;
      MR_Word CHunkDiffs_27;
      MR_Integer NumSkippedUnchangedDiffs_28;
      MR_Integer StartA_29;
      MR_Integer StartB_30;
      MR_Integer LenA_31;
      MR_Integer LenB_32;
      MR_Word CHunk_33;
      MR_Integer NextPosA_34;
      MR_Integer NextPosB_35;
      MR_Integer Var_45;
      MR_Integer Var_46;
      MR_Word STATE_VARIABLE_RevCHunks_47_47;
      MR_Word conv0_ChangeTrailContextDiffs_23;
      MR_Word conv1_RevInitContextDiffs_24;
      MR_Word conv2_InitContextDiffs_25;
      MR_Word conv3_CHunkDiffs_27;
      MR_Word next_value_of_Diffs_8;
      MR_Integer next_value_of_InitPosA_9;
      MR_Integer next_value_of_InitPosB_10;
      MR_Word next_value_of_STATE_VARIABLE_RevCHunks_0_36;

      {
        TypeInfo_51_51 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_51_51, 0) = ((MR_Box) (&mercury__edit_seq__edit_seq__type_ctor_info_diff_1));
        MR_hl_field(MR_mktag(0), TypeInfo_51_51, 1) = ((MR_Box) (TypeInfo_for_T_49));
      }
      mercury__list__reverse_2_p_0(TypeInfo_51_51, (MR_Word) (RevChangeTrailContextDiffs_16), &conv0_ChangeTrailContextDiffs_23);
      ChangeTrailContextDiffs_23 = (MR_Word) (conv0_ChangeTrailContextDiffs_23);
      mercury__list__take_upto_3_p_0(TypeInfo_51_51, ContextSize_7, (MR_Word) (RevUnchangedDiffs_13), &conv1_RevInitContextDiffs_24);
      RevInitContextDiffs_24 = (MR_Word) (conv1_RevInitContextDiffs_24);
      mercury__list__reverse_2_p_0(TypeInfo_51_51, (MR_Word) (RevInitContextDiffs_24), &conv2_InitContextDiffs_25);
      InitContextDiffs_25 = (MR_Word) (conv2_InitContextDiffs_25);
      mercury__list__length_acc_3_p_0(TypeInfo_51_51, (MR_Word) (InitContextDiffs_25), (MR_Integer) 0, &NumInitContextDiffs_26);
      mercury__list__append_3_p_1(TypeInfo_51_51, (MR_Word) (InitContextDiffs_25), (MR_Word) (ChangeTrailContextDiffs_23), &conv3_CHunkDiffs_27);
      CHunkDiffs_27 = (MR_Word) (conv3_CHunkDiffs_27);
      NumSkippedUnchangedDiffs_28 = (MR_Integer) ((MR_Unsigned) NumUnchangedDiffs_14 - (MR_Unsigned) NumInitContextDiffs_26);
      StartA_29 = (MR_Integer) ((MR_Unsigned) InitPosA_9 + (MR_Unsigned) NumSkippedUnchangedDiffs_28);
      StartB_30 = (MR_Integer) ((MR_Unsigned) InitPosB_10 + (MR_Unsigned) NumSkippedUnchangedDiffs_28);
      Var_45 = (MR_Integer) ((MR_Unsigned) NumInitContextDiffs_26 + (MR_Unsigned) NumCHunkUnchanged_19);
      LenA_31 = (MR_Integer) ((MR_Unsigned) Var_45 + (MR_Unsigned) NumCHunkDeleted_17);
      Var_46 = (MR_Integer) ((MR_Unsigned) NumInitContextDiffs_26 + (MR_Unsigned) NumCHunkUnchanged_19);
      LenB_32 = (MR_Integer) ((MR_Unsigned) Var_46 + (MR_Unsigned) NumCHunkInserted_18);
      {
        CHunk_33 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), CHunk_33, 0) = ((MR_Box) (StartA_29));
        MR_hl_field(MR_mktag(0), CHunk_33, 1) = ((MR_Box) (LenA_31));
        MR_hl_field(MR_mktag(0), CHunk_33, 2) = ((MR_Box) (StartB_30));
        MR_hl_field(MR_mktag(0), CHunk_33, 3) = ((MR_Box) (LenB_32));
        MR_hl_field(MR_mktag(0), CHunk_33, 4) = ((MR_Box) (CHunkDiffs_27));
      }
      {
        STATE_VARIABLE_RevCHunks_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevCHunks_47_47, 0) = ((MR_Box) (CHunk_33));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevCHunks_47_47, 1) = ((MR_Box) (STATE_VARIABLE_RevCHunks_0_36));
      }
      NextPosA_34 = (MR_Integer) ((MR_Unsigned) StartA_29 + (MR_Unsigned) LenA_31);
      NextPosB_35 = (MR_Integer) ((MR_Unsigned) StartB_30 + (MR_Unsigned) LenB_32);
      // direct tailcall eliminated
      ;
      next_value_of_Diffs_8 = LeftOverDiffs_15;
      next_value_of_InitPosA_9 = NextPosA_34;
      next_value_of_InitPosB_10 = NextPosB_35;
      next_value_of_STATE_VARIABLE_RevCHunks_0_36 = STATE_VARIABLE_RevCHunks_47_47;
      Diffs_8 = next_value_of_Diffs_8;
      InitPosA_9 = next_value_of_InitPosA_9;
      InitPosB_10 = next_value_of_InitPosB_10;
      STATE_VARIABLE_RevCHunks_0_36 = next_value_of_STATE_VARIABLE_RevCHunks_0_36;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__edit_seq__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_99_97_110_95_99_104_97_110_103_101_95_104_117_110_107_95_100_105_102_102_115_95_95_91_49_93_95_48_13_p_0(
  MR_Integer ContextSize_14,
  MR_Word Diffs_15,
  MR_Word * LeftOverDiffs_16,
  MR_Word STATE_VARIABLE_RevCHunkDiffs_0_28,
  MR_Word * STATE_VARIABLE_RevCHunkDiffs_29,
  MR_Integer STATE_VARIABLE_NumDeleted_0_30,
  MR_Integer * STATE_VARIABLE_NumDeleted_31,
  MR_Integer STATE_VARIABLE_NumInserted_0_32,
  MR_Integer * STATE_VARIABLE_NumInserted_33,
  MR_Integer STATE_VARIABLE_NumUnchanged_0_34,
  MR_Integer * STATE_VARIABLE_NumUnchanged_35,
  MR_Integer STATE_VARIABLE_NumContigUnchanged_0_36,
  MR_Integer * STATE_VARIABLE_NumContigUnchanged_37)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((Diffs_15 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *LeftOverDiffs_16 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_RevCHunkDiffs_29 = STATE_VARIABLE_RevCHunkDiffs_0_28;
      *STATE_VARIABLE_NumDeleted_31 = STATE_VARIABLE_NumDeleted_0_30;
      *STATE_VARIABLE_NumInserted_33 = STATE_VARIABLE_NumInserted_0_32;
      *STATE_VARIABLE_NumUnchanged_35 = STATE_VARIABLE_NumUnchanged_0_34;
      *STATE_VARIABLE_NumContigUnchanged_37 = STATE_VARIABLE_NumContigUnchanged_0_36;
    }
    else
    {
      MR_Word HeadDiff_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Diffs_15, (MR_Integer) 0))));
      MR_Word TailDiffs_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Diffs_15, (MR_Integer) 1))));

      switch (MR_tag((MR_Word) HeadDiff_22)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            succeeded = (ContextSize_14 <= STATE_VARIABLE_NumContigUnchanged_0_36);
            if (succeeded)
            {
              MR_Word AfterContextDiffs_25;
              MR_Word STATE_VARIABLE_RevCHunkDiffs_56_56;
              MR_Integer STATE_VARIABLE_NumUnchanged_57_57;

              succeeded = mercury__edit_seq__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_99_97_110_95_106_111_105_110_101_100_95_99_111_110_116_101_120_116_95_95_91_49_93_95_48_7_p_0(ContextSize_14, Diffs_15, &AfterContextDiffs_25, STATE_VARIABLE_RevCHunkDiffs_0_28, &STATE_VARIABLE_RevCHunkDiffs_56_56, STATE_VARIABLE_NumUnchanged_0_34, &STATE_VARIABLE_NumUnchanged_57_57);
              if (succeeded)
              {
                MR_Word next_value_of_Diffs_15 = AfterContextDiffs_25;
                MR_Word next_value_of_STATE_VARIABLE_RevCHunkDiffs_0_28 = STATE_VARIABLE_RevCHunkDiffs_56_56;
                MR_Integer next_value_of_STATE_VARIABLE_NumUnchanged_0_34 = STATE_VARIABLE_NumUnchanged_57_57;

                // direct tailcall eliminated
                ;
                Diffs_15 = next_value_of_Diffs_15;
                STATE_VARIABLE_RevCHunkDiffs_0_28 = next_value_of_STATE_VARIABLE_RevCHunkDiffs_0_28;
                STATE_VARIABLE_NumUnchanged_0_34 = next_value_of_STATE_VARIABLE_NumUnchanged_0_34;
                STATE_VARIABLE_NumContigUnchanged_0_36 = (MR_Integer) 0;
                continue;
              }
              else
              {
                *LeftOverDiffs_16 = Diffs_15;
                *STATE_VARIABLE_NumContigUnchanged_37 = STATE_VARIABLE_NumContigUnchanged_0_36;
                *STATE_VARIABLE_NumUnchanged_35 = STATE_VARIABLE_NumUnchanged_0_34;
                *STATE_VARIABLE_NumInserted_33 = STATE_VARIABLE_NumInserted_0_32;
                *STATE_VARIABLE_NumDeleted_31 = STATE_VARIABLE_NumDeleted_0_30;
                *STATE_VARIABLE_RevCHunkDiffs_29 = STATE_VARIABLE_RevCHunkDiffs_0_28;
              }
            }
            else
            {
              MR_Word STATE_VARIABLE_RevCHunkDiffs_64_64;
              MR_Integer STATE_VARIABLE_NumUnchanged_65_65;
              MR_Integer STATE_VARIABLE_NumContigUnchanged_67_67;
              MR_Word next_value_of_Diffs_15;
              MR_Word next_value_of_STATE_VARIABLE_RevCHunkDiffs_0_28;
              MR_Integer next_value_of_STATE_VARIABLE_NumUnchanged_0_34;
              MR_Integer next_value_of_STATE_VARIABLE_NumContigUnchanged_0_36;

              {
                STATE_VARIABLE_RevCHunkDiffs_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevCHunkDiffs_64_64, 0) = ((MR_Box) (HeadDiff_22));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevCHunkDiffs_64_64, 1) = ((MR_Box) (STATE_VARIABLE_RevCHunkDiffs_0_28));
              }
              STATE_VARIABLE_NumUnchanged_65_65 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumUnchanged_0_34 + (MR_Unsigned) 1);
              STATE_VARIABLE_NumContigUnchanged_67_67 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumContigUnchanged_0_36 + (MR_Unsigned) 1);
              // direct tailcall eliminated
              ;
              next_value_of_Diffs_15 = TailDiffs_23;
              next_value_of_STATE_VARIABLE_RevCHunkDiffs_0_28 = STATE_VARIABLE_RevCHunkDiffs_64_64;
              next_value_of_STATE_VARIABLE_NumUnchanged_0_34 = STATE_VARIABLE_NumUnchanged_65_65;
              next_value_of_STATE_VARIABLE_NumContigUnchanged_0_36 = STATE_VARIABLE_NumContigUnchanged_67_67;
              Diffs_15 = next_value_of_Diffs_15;
              STATE_VARIABLE_RevCHunkDiffs_0_28 = next_value_of_STATE_VARIABLE_RevCHunkDiffs_0_28;
              STATE_VARIABLE_NumUnchanged_0_34 = next_value_of_STATE_VARIABLE_NumUnchanged_0_34;
              STATE_VARIABLE_NumContigUnchanged_0_36 = next_value_of_STATE_VARIABLE_NumContigUnchanged_0_36;
              continue;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word STATE_VARIABLE_RevCHunkDiffs_47_47;
            MR_Integer STATE_VARIABLE_NumDeleted_48_48;
            MR_Word next_value_of_Diffs_15;
            MR_Word next_value_of_STATE_VARIABLE_RevCHunkDiffs_0_28;
            MR_Integer next_value_of_STATE_VARIABLE_NumDeleted_0_30;

            {
              STATE_VARIABLE_RevCHunkDiffs_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevCHunkDiffs_47_47, 0) = ((MR_Box) (HeadDiff_22));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevCHunkDiffs_47_47, 1) = ((MR_Box) (STATE_VARIABLE_RevCHunkDiffs_0_28));
            }
            STATE_VARIABLE_NumDeleted_48_48 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumDeleted_0_30 + (MR_Unsigned) 1);
            // direct tailcall eliminated
            ;
            next_value_of_Diffs_15 = TailDiffs_23;
            next_value_of_STATE_VARIABLE_RevCHunkDiffs_0_28 = STATE_VARIABLE_RevCHunkDiffs_47_47;
            next_value_of_STATE_VARIABLE_NumDeleted_0_30 = STATE_VARIABLE_NumDeleted_48_48;
            Diffs_15 = next_value_of_Diffs_15;
            STATE_VARIABLE_RevCHunkDiffs_0_28 = next_value_of_STATE_VARIABLE_RevCHunkDiffs_0_28;
            STATE_VARIABLE_NumDeleted_0_30 = next_value_of_STATE_VARIABLE_NumDeleted_0_30;
            STATE_VARIABLE_NumContigUnchanged_0_36 = (MR_Integer) 0;
            continue;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word STATE_VARIABLE_RevCHunkDiffs_38_38;
            MR_Integer STATE_VARIABLE_NumInserted_39_39;
            MR_Word next_value_of_Diffs_15;
            MR_Word next_value_of_STATE_VARIABLE_RevCHunkDiffs_0_28;
            MR_Integer next_value_of_STATE_VARIABLE_NumInserted_0_32;

            {
              STATE_VARIABLE_RevCHunkDiffs_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevCHunkDiffs_38_38, 0) = ((MR_Box) (HeadDiff_22));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevCHunkDiffs_38_38, 1) = ((MR_Box) (STATE_VARIABLE_RevCHunkDiffs_0_28));
            }
            STATE_VARIABLE_NumInserted_39_39 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumInserted_0_32 + (MR_Unsigned) 1);
            // direct tailcall eliminated
            ;
            next_value_of_Diffs_15 = TailDiffs_23;
            next_value_of_STATE_VARIABLE_RevCHunkDiffs_0_28 = STATE_VARIABLE_RevCHunkDiffs_38_38;
            next_value_of_STATE_VARIABLE_NumInserted_0_32 = STATE_VARIABLE_NumInserted_39_39;
            Diffs_15 = next_value_of_Diffs_15;
            STATE_VARIABLE_RevCHunkDiffs_0_28 = next_value_of_STATE_VARIABLE_RevCHunkDiffs_0_28;
            STATE_VARIABLE_NumInserted_0_32 = next_value_of_STATE_VARIABLE_NumInserted_0_32;
            STATE_VARIABLE_NumContigUnchanged_0_36 = (MR_Integer) 0;
            continue;
          }
          break;
      }
    }
    break;
  }
}

static MR_bool MR_CALL 
mercury__edit_seq__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_99_97_110_95_106_111_105_110_101_100_95_99_111_110_116_101_120_116_95_95_91_49_93_95_48_7_p_0(
  MR_Integer MaxUnchanged_8,
  MR_Word Diffs_9,
  MR_Word * LeftOverDiffs_10,
  MR_Word STATE_VARIABLE_RevUnchangedDiffs_0_18,
  MR_Word * STATE_VARIABLE_RevUnchangedDiffs_19,
  MR_Integer STATE_VARIABLE_NumUnchanged_0_20,
  MR_Integer * STATE_VARIABLE_NumUnchanged_21)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Diffs_9 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word HeadDiff_13;
    MR_Word TailDiffs_14;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      HeadDiff_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Diffs_9, (MR_Integer) 0))));
      TailDiffs_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Diffs_9, (MR_Integer) 1))));
      switch (MR_tag((MR_Word) HeadDiff_13)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word STATE_VARIABLE_RevUnchangedDiffs_23_23;
            MR_Integer STATE_VARIABLE_NumUnchanged_24_24;
            MR_Integer Var_25;
            MR_Integer Var_26;
            MR_Integer Var_29;
            MR_Integer next_value_of_MaxUnchanged_8;
            MR_Word next_value_of_Diffs_9;
            MR_Word next_value_of_STATE_VARIABLE_RevUnchangedDiffs_0_18;
            MR_Integer next_value_of_STATE_VARIABLE_NumUnchanged_0_20;

            succeeded = (MaxUnchanged_8 > (MR_Integer) 0);
            if (succeeded)
            {
              Var_25 = (MR_Integer) 1;
              STATE_VARIABLE_NumUnchanged_24_24 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumUnchanged_0_20 + (MR_Unsigned) Var_25);
              Var_29 = (MR_Integer) 1;
              Var_26 = (MR_Integer) ((MR_Unsigned) MaxUnchanged_8 - (MR_Unsigned) Var_29);
              {
                STATE_VARIABLE_RevUnchangedDiffs_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevUnchangedDiffs_23_23, 0) = ((MR_Box) (HeadDiff_13));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevUnchangedDiffs_23_23, 1) = ((MR_Box) (STATE_VARIABLE_RevUnchangedDiffs_0_18));
              }
              // direct tailcall eliminated
              ;
              next_value_of_MaxUnchanged_8 = Var_26;
              next_value_of_Diffs_9 = TailDiffs_14;
              next_value_of_STATE_VARIABLE_RevUnchangedDiffs_0_18 = STATE_VARIABLE_RevUnchangedDiffs_23_23;
              next_value_of_STATE_VARIABLE_NumUnchanged_0_20 = STATE_VARIABLE_NumUnchanged_24_24;
              MaxUnchanged_8 = next_value_of_MaxUnchanged_8;
              Diffs_9 = next_value_of_Diffs_9;
              STATE_VARIABLE_RevUnchangedDiffs_0_18 = next_value_of_STATE_VARIABLE_RevUnchangedDiffs_0_18;
              STATE_VARIABLE_NumUnchanged_0_20 = next_value_of_STATE_VARIABLE_NumUnchanged_0_20;
              continue;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            *LeftOverDiffs_10 = Diffs_9;
            *STATE_VARIABLE_RevUnchangedDiffs_19 = STATE_VARIABLE_RevUnchangedDiffs_0_18;
            *STATE_VARIABLE_NumUnchanged_21 = STATE_VARIABLE_NumUnchanged_0_20;
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 2:
          {
            *LeftOverDiffs_10 = Diffs_9;
            *STATE_VARIABLE_RevUnchangedDiffs_19 = STATE_VARIABLE_RevUnchangedDiffs_0_18;
            *STATE_VARIABLE_NumUnchanged_21 = STATE_VARIABLE_NumUnchanged_0_20;
            succeeded = MR_TRUE;
          }
          break;
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
mercury__edit_seq__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_99_97_110_95_105_110_105_116_105_97_108_95_117_110_99_104_97_110_103_101_100_95_100_105_102_102_115_95_95_91_49_93_95_48_6_p_0(
  MR_Word Diffs_7,
  MR_Word * LeftOverDiffs_8,
  MR_Word STATE_VARIABLE_RevUnchangedDiffs_0_16,
  MR_Word * STATE_VARIABLE_RevUnchangedDiffs_17,
  MR_Integer STATE_VARIABLE_NumUnchanged_0_18,
  MR_Integer * STATE_VARIABLE_NumUnchanged_19)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((Diffs_7 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *LeftOverDiffs_8 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_RevUnchangedDiffs_17 = STATE_VARIABLE_RevUnchangedDiffs_0_16;
      *STATE_VARIABLE_NumUnchanged_19 = STATE_VARIABLE_NumUnchanged_0_18;
    }
    else
    {
      MR_Word HeadDiff_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Diffs_7, (MR_Integer) 0))));
      MR_Word TailDiffs_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Diffs_7, (MR_Integer) 1))));

      switch (MR_tag((MR_Word) HeadDiff_11)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word STATE_VARIABLE_RevUnchangedDiffs_20_20;
            MR_Integer STATE_VARIABLE_NumUnchanged_21_21;
            MR_Word next_value_of_Diffs_7;
            MR_Word next_value_of_STATE_VARIABLE_RevUnchangedDiffs_0_16;
            MR_Integer next_value_of_STATE_VARIABLE_NumUnchanged_0_18;

            {
              STATE_VARIABLE_RevUnchangedDiffs_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevUnchangedDiffs_20_20, 0) = ((MR_Box) (HeadDiff_11));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevUnchangedDiffs_20_20, 1) = ((MR_Box) (STATE_VARIABLE_RevUnchangedDiffs_0_16));
            }
            STATE_VARIABLE_NumUnchanged_21_21 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumUnchanged_0_18 + (MR_Unsigned) 1);
            // direct tailcall eliminated
            ;
            next_value_of_Diffs_7 = TailDiffs_12;
            next_value_of_STATE_VARIABLE_RevUnchangedDiffs_0_16 = STATE_VARIABLE_RevUnchangedDiffs_20_20;
            next_value_of_STATE_VARIABLE_NumUnchanged_0_18 = STATE_VARIABLE_NumUnchanged_21_21;
            Diffs_7 = next_value_of_Diffs_7;
            STATE_VARIABLE_RevUnchangedDiffs_0_16 = next_value_of_STATE_VARIABLE_RevUnchangedDiffs_0_16;
            STATE_VARIABLE_NumUnchanged_0_18 = next_value_of_STATE_VARIABLE_NumUnchanged_0_18;
            continue;
          }
          break;
        case (MR_Integer) 1:
          {
            *LeftOverDiffs_8 = Diffs_7;
            *STATE_VARIABLE_RevUnchangedDiffs_17 = STATE_VARIABLE_RevUnchangedDiffs_0_16;
            *STATE_VARIABLE_NumUnchanged_19 = STATE_VARIABLE_NumUnchanged_0_18;
          }
          break;
        case (MR_Integer) 2:
          {
            *LeftOverDiffs_8 = Diffs_7;
            *STATE_VARIABLE_RevUnchangedDiffs_17 = STATE_VARIABLE_RevUnchangedDiffs_0_16;
            *STATE_VARIABLE_NumUnchanged_19 = STATE_VARIABLE_NumUnchanged_0_18;
          }
          break;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__edit_seq__find_diff_seq_3_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word SeqA_4,
  MR_Word Edits_5,
  MR_Word * DiffSeq_6)
{
  {
    MR_Word TypeInfo_14_14;
    MR_Word DiffCord_10;
    MR_Word conv0_DiffSeq_6;

    {
      TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_14_14, 0) = ((MR_Box) (&mercury__edit_seq__edit_seq__type_ctor_info_diff_1));
      MR_hl_field(MR_mktag(0), TypeInfo_14_14, 1) = ((MR_Box) (TypeInfo_for_T_12));
    }
    mercury__edit_seq__find_diff_cord_7_p_0(TypeInfo_for_T_12, (MR_Integer) 1, SeqA_4, Edits_5, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &DiffCord_10);
    conv0_DiffSeq_6 = mercury__cord__to_list_1_f_0(TypeInfo_14_14, (MR_Word) (DiffCord_10));
    *DiffSeq_6 = (MR_Word) (conv0_DiffSeq_6);
  }
}

void MR_CALL 
mercury__edit_seq__find_diff_cord_7_p_0(
  MR_Word TypeInfo_for_T_121,
  MR_Integer CurA_1,
  MR_Word SeqA_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Deletes_0_4,
  MR_Word STATE_VARIABLE_Inserts_0_5,
  MR_Word STATE_VARIABLE_Diffs_0_6,
  MR_Word * STATE_VARIABLE_Diffs_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word TypeInfo_137_137;
      MR_Word LeftOvers_108;
      MR_Word STATE_VARIABLE_Diffs_114_114;
      MR_Word Var_119;
      MR_Word Var_106;
      MR_Word Var_107;
      MR_Word conv0_Var_119;
      MR_Word conv1_STATE_VARIABLE_Diffs_7;

      mercury__edit_seq__flush_deletes_inserts_6_p_0(TypeInfo_for_T_121, STATE_VARIABLE_Deletes_0_4, &Var_106, STATE_VARIABLE_Inserts_0_5, &Var_107, STATE_VARIABLE_Diffs_0_6, &STATE_VARIABLE_Diffs_114_114);
      {
        TypeInfo_137_137 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_137_137, 0) = ((MR_Box) (&mercury__edit_seq__edit_seq__type_ctor_info_diff_1));
        MR_hl_field(MR_mktag(0), TypeInfo_137_137, 1) = ((MR_Box) (TypeInfo_for_T_121));
      }
      LeftOvers_108 = mercury__edit_seq__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_49_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_2_f_in__list_0(TypeInfo_for_T_121, SeqA_2);
      conv0_Var_119 = mercury__cord__from_list_1_f_0(TypeInfo_137_137, (MR_Word) (LeftOvers_108));
      Var_119 = (MR_Word) (conv0_Var_119);
      conv1_STATE_VARIABLE_Diffs_7 = mercury__cord__f_43_43_2_f_0(TypeInfo_137_137, (MR_Word) (STATE_VARIABLE_Diffs_114_114), (MR_Word) (Var_119));
      *STATE_VARIABLE_Diffs_7 = (MR_Word) (conv1_STATE_VARIABLE_Diffs_7);
    }
    else
    {
      MR_Word Edit_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Edits_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));

      switch (MR_tag((MR_Word) Edit_10)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer A_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Edit_10, (MR_Integer) 0))));
            MR_Box HeadA_16;
            MR_Word TailA_17;

            mercury__edit_seq__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_99_111_110_115_95_95_91_49_93_95_48_3_p_0(SeqA_2, &HeadA_16, &TailA_17);
            succeeded = (A_15 == CurA_1);
            if (succeeded)
            {
              MR_Word TypeInfo_123_123;
              MR_Word STATE_VARIABLE_Deletes_55_55;
              MR_Word Var_56;
              MR_Integer Var_57;
              MR_Word conv2_STATE_VARIABLE_Deletes_55_55;
              MR_Integer next_value_of_CurA_1;
              MR_Word next_value_of_SeqA_2;
              MR_Word next_value_of_HeadVar__3_3;
              MR_Word next_value_of_STATE_VARIABLE_Deletes_0_4;

              {
                TypeInfo_123_123 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), TypeInfo_123_123, 0) = ((MR_Box) (&mercury__edit_seq__edit_seq__type_ctor_info_diff_1));
                MR_hl_field(MR_mktag(0), TypeInfo_123_123, 1) = ((MR_Box) (TypeInfo_for_T_121));
              }
              {
                Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_56, 0) = HeadA_16;
              }
              conv2_STATE_VARIABLE_Deletes_55_55 = mercury__cord__snoc_2_f_0(TypeInfo_123_123, (MR_Word) (STATE_VARIABLE_Deletes_0_4), ((MR_Box) (Var_56)));
              STATE_VARIABLE_Deletes_55_55 = (MR_Word) (conv2_STATE_VARIABLE_Deletes_55_55);
              Var_57 = (MR_Integer) ((MR_Unsigned) CurA_1 + (MR_Unsigned) 1);
              // direct tailcall eliminated
              ;
              next_value_of_CurA_1 = Var_57;
              next_value_of_SeqA_2 = TailA_17;
              next_value_of_HeadVar__3_3 = Edits_11;
              next_value_of_STATE_VARIABLE_Deletes_0_4 = STATE_VARIABLE_Deletes_55_55;
              CurA_1 = next_value_of_CurA_1;
              SeqA_2 = next_value_of_SeqA_2;
              HeadVar__3_3 = next_value_of_HeadVar__3_3;
              STATE_VARIABLE_Deletes_0_4 = next_value_of_STATE_VARIABLE_Deletes_0_4;
              continue;
            }
            else
            {
              MR_Word TypeInfo_125_125;
              MR_Word STATE_VARIABLE_Inserts_61_61;
              MR_Word STATE_VARIABLE_Diffs_62_62;
              MR_Word STATE_VARIABLE_Diffs_63_63;
              MR_Word Var_64;
              MR_Integer Var_65;
              MR_Word STATE_VARIABLE_Deletes_55_69;
              MR_Word conv3_STATE_VARIABLE_Diffs_63_63;
              MR_Integer next_value_of_CurA_1;
              MR_Word next_value_of_SeqA_2;
              MR_Word next_value_of_STATE_VARIABLE_Deletes_0_4;
              MR_Word next_value_of_STATE_VARIABLE_Inserts_0_5;
              MR_Word next_value_of_STATE_VARIABLE_Diffs_0_6;

              mercury__edit_seq__flush_deletes_inserts_6_p_0(TypeInfo_for_T_121, STATE_VARIABLE_Deletes_0_4, &STATE_VARIABLE_Deletes_55_69, STATE_VARIABLE_Inserts_0_5, &STATE_VARIABLE_Inserts_61_61, STATE_VARIABLE_Diffs_0_6, &STATE_VARIABLE_Diffs_62_62);
              {
                TypeInfo_125_125 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), TypeInfo_125_125, 0) = ((MR_Box) (&mercury__edit_seq__edit_seq__type_ctor_info_diff_1));
                MR_hl_field(MR_mktag(0), TypeInfo_125_125, 1) = ((MR_Box) (TypeInfo_for_T_121));
              }
              {
                Var_64 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_64, 0) = HeadA_16;
              }
              conv3_STATE_VARIABLE_Diffs_63_63 = mercury__cord__snoc_2_f_0(TypeInfo_125_125, (MR_Word) (STATE_VARIABLE_Diffs_62_62), ((MR_Box) (Var_64)));
              STATE_VARIABLE_Diffs_63_63 = (MR_Word) (conv3_STATE_VARIABLE_Diffs_63_63);
              Var_65 = (MR_Integer) ((MR_Unsigned) CurA_1 + (MR_Unsigned) 1);
              // direct tailcall eliminated
              ;
              next_value_of_CurA_1 = Var_65;
              next_value_of_SeqA_2 = TailA_17;
              next_value_of_STATE_VARIABLE_Deletes_0_4 = STATE_VARIABLE_Deletes_55_69;
              next_value_of_STATE_VARIABLE_Inserts_0_5 = STATE_VARIABLE_Inserts_61_61;
              next_value_of_STATE_VARIABLE_Diffs_0_6 = STATE_VARIABLE_Diffs_63_63;
              CurA_1 = next_value_of_CurA_1;
              SeqA_2 = next_value_of_SeqA_2;
              STATE_VARIABLE_Deletes_0_4 = next_value_of_STATE_VARIABLE_Deletes_0_4;
              STATE_VARIABLE_Inserts_0_5 = next_value_of_STATE_VARIABLE_Inserts_0_5;
              STATE_VARIABLE_Diffs_0_6 = next_value_of_STATE_VARIABLE_Diffs_0_6;
              continue;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Box Item_18 = (MR_hl_field(MR_mktag(1), Edit_10, (MR_Integer) 1));
            MR_Integer A_84 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Edit_10, (MR_Integer) 0))));
            MR_Integer Var_39 = (MR_Integer) ((MR_Unsigned) CurA_1 - (MR_Unsigned) A_84);

            succeeded = (Var_39 == (MR_Integer) 1);
            if (succeeded)
            {
              MR_Word TypeInfo_127_127;
              MR_Word Var_41;
              MR_Word STATE_VARIABLE_Inserts_61_70;
              MR_Word conv4_STATE_VARIABLE_Inserts_61_70;
              MR_Word next_value_of_HeadVar__3_3;
              MR_Word next_value_of_STATE_VARIABLE_Inserts_0_5;

              {
                TypeInfo_127_127 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), TypeInfo_127_127, 0) = ((MR_Box) (&mercury__edit_seq__edit_seq__type_ctor_info_diff_1));
                MR_hl_field(MR_mktag(0), TypeInfo_127_127, 1) = ((MR_Box) (TypeInfo_for_T_121));
              }
              {
                Var_41 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_41, 0) = Item_18;
              }
              conv4_STATE_VARIABLE_Inserts_61_70 = mercury__cord__snoc_2_f_0(TypeInfo_127_127, (MR_Word) (STATE_VARIABLE_Inserts_0_5), ((MR_Box) (Var_41)));
              STATE_VARIABLE_Inserts_61_70 = (MR_Word) (conv4_STATE_VARIABLE_Inserts_61_70);
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__3_3 = Edits_11;
              next_value_of_STATE_VARIABLE_Inserts_0_5 = STATE_VARIABLE_Inserts_61_70;
              HeadVar__3_3 = next_value_of_HeadVar__3_3;
              STATE_VARIABLE_Inserts_0_5 = next_value_of_STATE_VARIABLE_Inserts_0_5;
              continue;
            }
            else
            if ((SeqA_2 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word TypeInfo_129_129;
              MR_Word Var_53;
              MR_Word STATE_VARIABLE_Inserts_61_71;
              MR_Word conv5_STATE_VARIABLE_Inserts_61_71;
              MR_Word next_value_of_HeadVar__3_3;
              MR_Word next_value_of_STATE_VARIABLE_Inserts_0_5;

              {
                TypeInfo_129_129 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), TypeInfo_129_129, 0) = ((MR_Box) (&mercury__edit_seq__edit_seq__type_ctor_info_diff_1));
                MR_hl_field(MR_mktag(0), TypeInfo_129_129, 1) = ((MR_Box) (TypeInfo_for_T_121));
              }
              {
                Var_53 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_53, 0) = Item_18;
              }
              conv5_STATE_VARIABLE_Inserts_61_71 = mercury__cord__snoc_2_f_0(TypeInfo_129_129, (MR_Word) (STATE_VARIABLE_Inserts_0_5), ((MR_Box) (Var_53)));
              STATE_VARIABLE_Inserts_61_71 = (MR_Word) (conv5_STATE_VARIABLE_Inserts_61_71);
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__3_3 = Edits_11;
              next_value_of_STATE_VARIABLE_Inserts_0_5 = STATE_VARIABLE_Inserts_61_71;
              HeadVar__3_3 = next_value_of_HeadVar__3_3;
              STATE_VARIABLE_Inserts_0_5 = next_value_of_STATE_VARIABLE_Inserts_0_5;
              continue;
            }
            else
            {
              MR_Word TypeInfo_131_131;
              MR_Word STATE_VARIABLE_Diffs_45_45;
              MR_Word STATE_VARIABLE_Diffs_46_46;
              MR_Word Var_47;
              MR_Integer Var_48;
              MR_Box HeadA_72 = (MR_hl_field(MR_mktag(1), SeqA_2, (MR_Integer) 0));
              MR_Word TailA_73 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SeqA_2, (MR_Integer) 1))));
              MR_Word STATE_VARIABLE_Deletes_55_74;
              MR_Word STATE_VARIABLE_Inserts_61_75;
              MR_Word conv6_STATE_VARIABLE_Diffs_46_46;
              MR_Integer next_value_of_CurA_1;
              MR_Word next_value_of_SeqA_2;
              MR_Word next_value_of_STATE_VARIABLE_Deletes_0_4;
              MR_Word next_value_of_STATE_VARIABLE_Inserts_0_5;
              MR_Word next_value_of_STATE_VARIABLE_Diffs_0_6;

              mercury__edit_seq__flush_deletes_inserts_6_p_0(TypeInfo_for_T_121, STATE_VARIABLE_Deletes_0_4, &STATE_VARIABLE_Deletes_55_74, STATE_VARIABLE_Inserts_0_5, &STATE_VARIABLE_Inserts_61_75, STATE_VARIABLE_Diffs_0_6, &STATE_VARIABLE_Diffs_45_45);
              {
                TypeInfo_131_131 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), TypeInfo_131_131, 0) = ((MR_Box) (&mercury__edit_seq__edit_seq__type_ctor_info_diff_1));
                MR_hl_field(MR_mktag(0), TypeInfo_131_131, 1) = ((MR_Box) (TypeInfo_for_T_121));
              }
              {
                Var_47 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_47, 0) = HeadA_72;
              }
              conv6_STATE_VARIABLE_Diffs_46_46 = mercury__cord__snoc_2_f_0(TypeInfo_131_131, (MR_Word) (STATE_VARIABLE_Diffs_45_45), ((MR_Box) (Var_47)));
              STATE_VARIABLE_Diffs_46_46 = (MR_Word) (conv6_STATE_VARIABLE_Diffs_46_46);
              Var_48 = (MR_Integer) ((MR_Unsigned) CurA_1 + (MR_Unsigned) 1);
              // direct tailcall eliminated
              ;
              next_value_of_CurA_1 = Var_48;
              next_value_of_SeqA_2 = TailA_73;
              next_value_of_STATE_VARIABLE_Deletes_0_4 = STATE_VARIABLE_Deletes_55_74;
              next_value_of_STATE_VARIABLE_Inserts_0_5 = STATE_VARIABLE_Inserts_61_75;
              next_value_of_STATE_VARIABLE_Diffs_0_6 = STATE_VARIABLE_Diffs_46_46;
              CurA_1 = next_value_of_CurA_1;
              SeqA_2 = next_value_of_SeqA_2;
              STATE_VARIABLE_Deletes_0_4 = next_value_of_STATE_VARIABLE_Deletes_0_4;
              STATE_VARIABLE_Inserts_0_5 = next_value_of_STATE_VARIABLE_Inserts_0_5;
              STATE_VARIABLE_Diffs_0_6 = next_value_of_STATE_VARIABLE_Diffs_0_6;
              continue;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer A_95 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Edit_10, (MR_Integer) 0))));
            MR_Box HeadA_96;
            MR_Word TailA_97;
            MR_Box Item_98 = (MR_hl_field(MR_mktag(2), Edit_10, (MR_Integer) 1));

            mercury__edit_seq__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_99_111_110_115_95_95_91_49_93_95_48_3_p_0(SeqA_2, &HeadA_96, &TailA_97);
            succeeded = (CurA_1 == A_95);
            if (succeeded)
            {
              MR_Word TypeInfo_133_133;
              MR_Word Var_24;
              MR_Word Var_26;
              MR_Integer Var_27;
              MR_Word STATE_VARIABLE_Deletes_55_89;
              MR_Word STATE_VARIABLE_Inserts_61_90;
              MR_Word conv7_STATE_VARIABLE_Deletes_55_89;
              MR_Word conv8_STATE_VARIABLE_Inserts_61_90;
              MR_Integer next_value_of_CurA_1;
              MR_Word next_value_of_SeqA_2;
              MR_Word next_value_of_HeadVar__3_3;
              MR_Word next_value_of_STATE_VARIABLE_Deletes_0_4;
              MR_Word next_value_of_STATE_VARIABLE_Inserts_0_5;

              {
                TypeInfo_133_133 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), TypeInfo_133_133, 0) = ((MR_Box) (&mercury__edit_seq__edit_seq__type_ctor_info_diff_1));
                MR_hl_field(MR_mktag(0), TypeInfo_133_133, 1) = ((MR_Box) (TypeInfo_for_T_121));
              }
              {
                Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_24, 0) = HeadA_96;
              }
              conv7_STATE_VARIABLE_Deletes_55_89 = mercury__cord__snoc_2_f_0(TypeInfo_133_133, (MR_Word) (STATE_VARIABLE_Deletes_0_4), ((MR_Box) (Var_24)));
              STATE_VARIABLE_Deletes_55_89 = (MR_Word) (conv7_STATE_VARIABLE_Deletes_55_89);
              {
                Var_26 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_26, 0) = Item_98;
              }
              conv8_STATE_VARIABLE_Inserts_61_90 = mercury__cord__snoc_2_f_0(TypeInfo_133_133, (MR_Word) (STATE_VARIABLE_Inserts_0_5), ((MR_Box) (Var_26)));
              STATE_VARIABLE_Inserts_61_90 = (MR_Word) (conv8_STATE_VARIABLE_Inserts_61_90);
              Var_27 = (MR_Integer) ((MR_Unsigned) CurA_1 + (MR_Unsigned) 1);
              // direct tailcall eliminated
              ;
              next_value_of_CurA_1 = Var_27;
              next_value_of_SeqA_2 = TailA_97;
              next_value_of_HeadVar__3_3 = Edits_11;
              next_value_of_STATE_VARIABLE_Deletes_0_4 = STATE_VARIABLE_Deletes_55_89;
              next_value_of_STATE_VARIABLE_Inserts_0_5 = STATE_VARIABLE_Inserts_61_90;
              CurA_1 = next_value_of_CurA_1;
              SeqA_2 = next_value_of_SeqA_2;
              HeadVar__3_3 = next_value_of_HeadVar__3_3;
              STATE_VARIABLE_Deletes_0_4 = next_value_of_STATE_VARIABLE_Deletes_0_4;
              STATE_VARIABLE_Inserts_0_5 = next_value_of_STATE_VARIABLE_Inserts_0_5;
              continue;
            }
            else
            {
              MR_Word TypeInfo_135_135;
              MR_Word STATE_VARIABLE_Diffs_32_32;
              MR_Word STATE_VARIABLE_Diffs_33_33;
              MR_Word Var_34;
              MR_Integer Var_35;
              MR_Word STATE_VARIABLE_Deletes_55_91;
              MR_Word STATE_VARIABLE_Inserts_61_92;
              MR_Word conv9_STATE_VARIABLE_Diffs_33_33;
              MR_Integer next_value_of_CurA_1;
              MR_Word next_value_of_SeqA_2;
              MR_Word next_value_of_STATE_VARIABLE_Deletes_0_4;
              MR_Word next_value_of_STATE_VARIABLE_Inserts_0_5;
              MR_Word next_value_of_STATE_VARIABLE_Diffs_0_6;

              mercury__edit_seq__flush_deletes_inserts_6_p_0(TypeInfo_for_T_121, STATE_VARIABLE_Deletes_0_4, &STATE_VARIABLE_Deletes_55_91, STATE_VARIABLE_Inserts_0_5, &STATE_VARIABLE_Inserts_61_92, STATE_VARIABLE_Diffs_0_6, &STATE_VARIABLE_Diffs_32_32);
              {
                TypeInfo_135_135 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), TypeInfo_135_135, 0) = ((MR_Box) (&mercury__edit_seq__edit_seq__type_ctor_info_diff_1));
                MR_hl_field(MR_mktag(0), TypeInfo_135_135, 1) = ((MR_Box) (TypeInfo_for_T_121));
              }
              {
                Var_34 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_34, 0) = HeadA_96;
              }
              conv9_STATE_VARIABLE_Diffs_33_33 = mercury__cord__snoc_2_f_0(TypeInfo_135_135, (MR_Word) (STATE_VARIABLE_Diffs_32_32), ((MR_Box) (Var_34)));
              STATE_VARIABLE_Diffs_33_33 = (MR_Word) (conv9_STATE_VARIABLE_Diffs_33_33);
              Var_35 = (MR_Integer) ((MR_Unsigned) CurA_1 + (MR_Unsigned) 1);
              // direct tailcall eliminated
              ;
              next_value_of_CurA_1 = Var_35;
              next_value_of_SeqA_2 = TailA_97;
              next_value_of_STATE_VARIABLE_Deletes_0_4 = STATE_VARIABLE_Deletes_55_91;
              next_value_of_STATE_VARIABLE_Inserts_0_5 = STATE_VARIABLE_Inserts_61_92;
              next_value_of_STATE_VARIABLE_Diffs_0_6 = STATE_VARIABLE_Diffs_33_33;
              CurA_1 = next_value_of_CurA_1;
              SeqA_2 = next_value_of_SeqA_2;
              STATE_VARIABLE_Deletes_0_4 = next_value_of_STATE_VARIABLE_Deletes_0_4;
              STATE_VARIABLE_Inserts_0_5 = next_value_of_STATE_VARIABLE_Inserts_0_5;
              STATE_VARIABLE_Diffs_0_6 = next_value_of_STATE_VARIABLE_Diffs_0_6;
              continue;
            }
          }
          break;
      }
    }
    break;
  }
}

static MR_Word MR_CALL 
mercury__edit_seq__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_49_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_2_f_in__list_0(
  MR_Word Var_14,
  MR_Word HeadVar__2_2)
{
  {
    MR_Word HeadVar__3_3;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Box V_6_6 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      MR_Word V_7_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word V_8_8;
      MR_Word V_9_9;

      V_8_8 = mercury__edit_seq__IntroducedFrom__func__find_diff_cord__419__1_2_f_0(Var_14, V_6_6);
      V_9_9 = mercury__edit_seq__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_49_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_2_f_in__list_0(Var_14, V_7_7);
      {
        HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (V_8_8));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 1) = ((MR_Box) (V_9_9));
      }
    }
    return HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mercury__edit_seq__IntroducedFrom__func__find_diff_cord__419__1_2_f_0(
  MR_Word TypeInfo_for_T_121,
  MR_Box LambdaHeadVar__1_116)
{
  {
    MR_Word LambdaHeadVar__2_117;

    {
      LambdaHeadVar__2_117 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_117, 0) = LambdaHeadVar__1_116;
    }
    return LambdaHeadVar__2_117;
  }
}

static void MR_CALL 
mercury__edit_seq__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_99_111_110_115_95_95_91_49_93_95_48_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Box * Head_2,
  MR_Word * Tail_3)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140edit_seq.uncons\'/3", (MR_String) "empty list");
      return;
    }
  else
  {
    *Head_2 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
    *Tail_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
  }
}

static void MR_CALL 
mercury__edit_seq__flush_deletes_inserts_6_p_0(
  MR_Word TypeInfo_for_T_20,
  MR_Word STATE_VARIABLE_Deletes_0_10,
  MR_Word * STATE_VARIABLE_Deletes_11,
  MR_Word STATE_VARIABLE_Inserts_0_12,
  MR_Word * STATE_VARIABLE_Inserts_13,
  MR_Word STATE_VARIABLE_Diffs_0_14,
  MR_Word * STATE_VARIABLE_Diffs_15)
{
  {
    MR_Word TypeInfo_22_22;
    MR_Word Var_17;
    MR_Word conv0_Var_17;
    MR_Word conv1_STATE_VARIABLE_Diffs_15;

    {
      TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_22_22, 0) = ((MR_Box) (&mercury__edit_seq__edit_seq__type_ctor_info_diff_1));
      MR_hl_field(MR_mktag(0), TypeInfo_22_22, 1) = ((MR_Box) (TypeInfo_for_T_20));
    }
    conv0_Var_17 = mercury__cord__f_43_43_2_f_0(TypeInfo_22_22, (MR_Word) (STATE_VARIABLE_Deletes_0_10), (MR_Word) (STATE_VARIABLE_Inserts_0_12));
    Var_17 = (MR_Word) (conv0_Var_17);
    conv1_STATE_VARIABLE_Diffs_15 = mercury__cord__f_43_43_2_f_0(TypeInfo_22_22, (MR_Word) (STATE_VARIABLE_Diffs_0_14), (MR_Word) (Var_17));
    *STATE_VARIABLE_Diffs_15 = (MR_Word) (conv1_STATE_VARIABLE_Diffs_15);
    *STATE_VARIABLE_Deletes_11 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Inserts_13 = (MR_Word) ((MR_Unsigned) 0U);
  }
}

void MR_CALL 
mercury__edit_seq__find_shortest_edit_seq_4_p_0(
  MR_Word TypeInfo_for_T_30,
  MR_Word Params_5,
  MR_Word SeqA_6,
  MR_Word SeqB_7,
  MR_Word * Edits_8)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_32_32;
    MR_Word TypeInfo_13_92;
    MR_Word TypeInfo_15_94;
    MR_Integer LenA_9;
    MR_Integer LenB_10;
    MR_Word CornerEntry_12;
    MR_Word STATE_VARIABLE_Table_17_17;
    MR_Word STATE_VARIABLE_Table_22_22;
    MR_Word STATE_VARIABLE_Table_25_25;
    MR_Word STATE_VARIABLE_Table_27_27;
    MR_Word Var_28;
    MR_Word Row_89;
    MR_Word TypeInfo_20_59;
    MR_Word TypeInfo_22_61;
    MR_Word Row0_52;
    MR_Box conv0_Row0_52;
    MR_Box conv4_Row_89;
    MR_Box conv5_CornerEntry_12;
    MR_Word conv6_Edits_8;

    mercury__list__length_acc_3_p_0(TypeInfo_for_T_30, SeqA_6, (MR_Integer) 0, &LenA_9);
    mercury__list__length_acc_3_p_0(TypeInfo_for_T_30, SeqB_7, (MR_Integer) 0, &LenB_10);
    {
      TypeInfo_32_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_32_32, 0) = ((MR_Box) (&mercury__edit_seq__edit_seq__type_ctor_info_edit_1));
      MR_hl_field(MR_mktag(0), TypeInfo_32_32, 1) = ((MR_Box) (TypeInfo_for_T_30));
    }
    {
      TypeInfo_20_59 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_20_59, 0) = ((MR_Box) (&mercury__edit_seq__edit_seq__type_ctor_info_dynprog_entry_1));
      MR_hl_field(MR_mktag(0), TypeInfo_20_59, 1) = ((MR_Box) (TypeInfo_for_T_30));
    }
    {
      TypeInfo_22_61 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_22_61, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
      MR_hl_field(MR_mktag(0), TypeInfo_22_61, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0));
      MR_hl_field(MR_mktag(0), TypeInfo_22_61, 2) = ((MR_Box) (TypeInfo_20_59));
    }
    succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_22_61, (MR_Word) ((MR_Word) ((MR_Unsigned) 0U)), (MR_Integer) 0, &conv0_Row0_52);
    if (succeeded)
    {
      Row0_52 = ((MR_Word) (conv0_Row0_52));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Row_53;
      MR_Word conv1_Row_53;
      MR_Word conv2_STATE_VARIABLE_Table_17_17;

      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(TypeInfo_20_59, (MR_Integer) 0, ((MR_Box) (&mercury__edit_seq_scalar_common_4[0])), (MR_Word) (Row0_52), &conv1_Row_53);
      Row_53 = (MR_Word) (conv1_Row_53);
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(TypeInfo_22_61, (MR_Integer) 0, ((MR_Box) (Row_53)), (MR_Word) ((MR_Word) ((MR_Unsigned) 0U)), &conv2_STATE_VARIABLE_Table_17_17);
      STATE_VARIABLE_Table_17_17 = (MR_Word) (conv2_STATE_VARIABLE_Table_17_17);
    }
    else
    {
      MR_Word TypeInfo_30_69;
      MR_Word TypeInfo_32_71;
      MR_Word conv3_STATE_VARIABLE_Table_17_17;

      {
        TypeInfo_30_69 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_30_69, 0) = ((MR_Box) (&mercury__edit_seq__edit_seq__type_ctor_info_dynprog_entry_1));
        MR_hl_field(MR_mktag(0), TypeInfo_30_69, 1) = ((MR_Box) (TypeInfo_for_T_30));
      }
      {
        TypeInfo_32_71 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_32_71, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
        MR_hl_field(MR_mktag(0), TypeInfo_32_71, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0));
        MR_hl_field(MR_mktag(0), TypeInfo_32_71, 2) = ((MR_Box) (TypeInfo_30_69));
      }
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(TypeInfo_32_71, (MR_Integer) 0, ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__edit_seq_scalar_common_2[1]))), (MR_Word) ((MR_Word) ((MR_Unsigned) 0U)), &conv3_STATE_VARIABLE_Table_17_17);
      STATE_VARIABLE_Table_17_17 = (MR_Word) (conv3_STATE_VARIABLE_Table_17_17);
    }
    mercury__edit_seq__init_row_zero_inserts_6_p_0(TypeInfo_for_T_30, Params_5, (MR_Integer) 1, SeqB_7, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_Table_17_17, &STATE_VARIABLE_Table_22_22);
    mercury__edit_seq__init_col_zero_deletes_6_p_0(TypeInfo_for_T_30, Params_5, (MR_Integer) 1, SeqA_6, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_Table_22_22, &STATE_VARIABLE_Table_25_25);
    mercury__edit_seq__process_rows_6_p_0(TypeInfo_for_T_30, Params_5, (MR_Integer) 1, SeqA_6, SeqB_7, STATE_VARIABLE_Table_25_25, &STATE_VARIABLE_Table_27_27);
    {
      TypeInfo_13_92 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_13_92, 0) = ((MR_Box) (&mercury__edit_seq__edit_seq__type_ctor_info_dynprog_entry_1));
      MR_hl_field(MR_mktag(0), TypeInfo_13_92, 1) = ((MR_Box) (TypeInfo_for_T_30));
    }
    {
      TypeInfo_15_94 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_15_94, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
      MR_hl_field(MR_mktag(0), TypeInfo_15_94, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0));
      MR_hl_field(MR_mktag(0), TypeInfo_15_94, 2) = ((MR_Box) (TypeInfo_13_92));
    }
    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_15_94, (MR_Word) (STATE_VARIABLE_Table_27_27), LenA_9, &conv4_Row_89);
    Row_89 = ((MR_Word) (conv4_Row_89));
    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_13_92, (MR_Word) (Row_89), LenB_10, &conv5_CornerEntry_12);
    CornerEntry_12 = ((MR_Word) (conv5_CornerEntry_12));
    Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CornerEntry_12, (MR_Integer) 0))));
    conv6_Edits_8 = mercury__cord__to_list_1_f_0(TypeInfo_32_32, (MR_Word) (Var_28));
    *Edits_8 = (MR_Word) (conv6_Edits_8);
  }
}

static void MR_CALL 
mercury__edit_seq__process_rows_6_p_0(
  MR_Word TypeInfo_for_T_26,
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Table_0_5,
  MR_Word * STATE_VARIABLE_Table_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Table_6 = STATE_VARIABLE_Table_0_5;
    else
    {
      MR_Box HeadSeqA_15 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0));
      MR_Word TailSeqA_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Table_22_22;
      MR_Integer Var_23;
      MR_Integer next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_Table_0_5;

      mercury__edit_seq__process_columns_7_p_0(TypeInfo_for_T_26, HeadVar__1_1, HeadVar__2_2, HeadSeqA_15, (MR_Integer) 1, HeadVar__4_4, STATE_VARIABLE_Table_0_5, &STATE_VARIABLE_Table_22_22);
      Var_23 = (MR_Integer) ((MR_Unsigned) HeadVar__2_2 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_23;
      next_value_of_HeadVar__3_3 = TailSeqA_16;
      next_value_of_STATE_VARIABLE_Table_0_5 = STATE_VARIABLE_Table_22_22;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_Table_0_5 = next_value_of_STATE_VARIABLE_Table_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__edit_seq__process_columns_7_p_0(
  MR_Word TypeInfo_for_T_31,
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Integer HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_Table_0_6,
  MR_Word * STATE_VARIABLE_Table_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Table_7 = STATE_VARIABLE_Table_0_6;
    else
    {
      MR_Word TypeInfo_12_39;
      MR_Word TypeInfo_14_41;
      MR_Box HeadSeqB_19 = (MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0));
      MR_Word TailSeqB_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
      MR_Integer Var_24 = (MR_Integer) ((MR_Unsigned) HeadVar__2_2 - (MR_Unsigned) 2);
      MR_Word STATE_VARIABLE_Table_25_25;
      MR_Word STATE_VARIABLE_Table_27_27;
      MR_Integer Var_28;
      MR_Word V_7_48;
      MR_Integer next_value_of_HeadVar__4_4;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_Table_0_6;

      {
        TypeInfo_12_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_12_39, 0) = ((MR_Box) (&mercury__edit_seq__edit_seq__type_ctor_info_dynprog_entry_1));
        MR_hl_field(MR_mktag(0), TypeInfo_12_39, 1) = ((MR_Box) (TypeInfo_for_T_31));
      }
      {
        TypeInfo_14_41 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_14_41, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
        MR_hl_field(MR_mktag(0), TypeInfo_14_41, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0));
        MR_hl_field(MR_mktag(0), TypeInfo_14_41, 2) = ((MR_Box) (TypeInfo_12_39));
      }
      mercury__tree234__delete_2_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_14_41, STATE_VARIABLE_Table_0_6, ((MR_Box) (Var_24)), &STATE_VARIABLE_Table_25_25, &V_7_48);
      mercury__edit_seq__process_entry_7_p_0(TypeInfo_for_T_31, HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, HeadVar__4_4, HeadSeqB_19, STATE_VARIABLE_Table_25_25, &STATE_VARIABLE_Table_27_27);
      Var_28 = (MR_Integer) ((MR_Unsigned) HeadVar__4_4 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = Var_28;
      next_value_of_HeadVar__5_5 = TailSeqB_20;
      next_value_of_STATE_VARIABLE_Table_0_6 = STATE_VARIABLE_Table_27_27;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      STATE_VARIABLE_Table_0_6 = next_value_of_STATE_VARIABLE_Table_0_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__edit_seq__process_entry_7_p_0(
  MR_Word TypeInfo_for_T_58,
  MR_Word Params_8,
  MR_Integer RowNum_9,
  MR_Box A_10,
  MR_Integer ColNum_11,
  MR_Box B_12,
  MR_Word STATE_VARIABLE_Table_0_28,
  MR_Word * STATE_VARIABLE_Table_29)
{
  {
    MR_bool succeeded;
    MR_Word Entry_14;

    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_58, A_10, B_12);
    if (succeeded)
    {
      MR_Word TypeInfo_13_72;
      MR_Word TypeInfo_15_74;
      MR_Integer Var_30 = (MR_Integer) ((MR_Unsigned) RowNum_9 - (MR_Unsigned) 1);
      MR_Integer Var_31 = (MR_Integer) ((MR_Unsigned) ColNum_11 - (MR_Unsigned) 1);
      MR_Word Row_69;
      MR_Box conv0_Row_69;
      MR_Box conv1_Entry_14;

      {
        TypeInfo_13_72 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_13_72, 0) = ((MR_Box) (&mercury__edit_seq__edit_seq__type_ctor_info_dynprog_entry_1));
        MR_hl_field(MR_mktag(0), TypeInfo_13_72, 1) = ((MR_Box) (TypeInfo_for_T_58));
      }
      {
        TypeInfo_15_74 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_15_74, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
        MR_hl_field(MR_mktag(0), TypeInfo_15_74, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0));
        MR_hl_field(MR_mktag(0), TypeInfo_15_74, 2) = ((MR_Box) (TypeInfo_13_72));
      }
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_15_74, (MR_Word) (STATE_VARIABLE_Table_0_28), Var_30, &conv0_Row_69);
      Row_69 = ((MR_Word) (conv0_Row_69));
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_13_72, (MR_Word) (Row_69), Var_31, &conv1_Entry_14);
      Entry_14 = ((MR_Word) (conv1_Entry_14));
    }
    else
    {
      MR_Word TypeInfo_13_92;
      MR_Word TypeInfo_15_94;
      MR_Word EntryUp_15;
      MR_Word EntryLeft_16;
      MR_Word EntryDiag_17;
      MR_Word EditsUp_18;
      MR_Integer CostUp0_19;
      MR_Word EditsLeft_20;
      MR_Integer CostLeft0_21;
      MR_Word EditsDiag_22;
      MR_Integer CostDiag0_23;
      MR_Integer CostUp_24;
      MR_Integer CostLeft_25;
      MR_Integer CostDiag_26;
      MR_Integer Var_34 = (MR_Integer) ((MR_Unsigned) RowNum_9 - (MR_Unsigned) 1);
      MR_Integer Var_36;
      MR_Integer Var_38;
      MR_Integer Var_39;
      MR_Integer Var_42;
      MR_Integer Var_52;
      MR_Integer Var_53;
      MR_Word Row_79;
      MR_Word Row_89;
      MR_Box conv2_Row_79;
      MR_Box conv3_EntryUp_15;
      MR_Box conv4_Row_89;
      MR_Box conv5_EntryLeft_16;

      {
        TypeInfo_13_92 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_13_92, 0) = ((MR_Box) (&mercury__edit_seq__edit_seq__type_ctor_info_dynprog_entry_1));
        MR_hl_field(MR_mktag(0), TypeInfo_13_92, 1) = ((MR_Box) (TypeInfo_for_T_58));
      }
      {
        TypeInfo_15_94 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_15_94, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
        MR_hl_field(MR_mktag(0), TypeInfo_15_94, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0));
        MR_hl_field(MR_mktag(0), TypeInfo_15_94, 2) = ((MR_Box) (TypeInfo_13_92));
      }
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_15_94, (MR_Word) (STATE_VARIABLE_Table_0_28), Var_34, &conv2_Row_79);
      Row_79 = ((MR_Word) (conv2_Row_79));
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_13_92, (MR_Word) (Row_79), ColNum_11, &conv3_EntryUp_15);
      EntryUp_15 = ((MR_Word) (conv3_EntryUp_15));
      Var_36 = (MR_Integer) ((MR_Unsigned) ColNum_11 - (MR_Unsigned) 1);
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_15_94, (MR_Word) (STATE_VARIABLE_Table_0_28), RowNum_9, &conv4_Row_89);
      Row_89 = ((MR_Word) (conv4_Row_89));
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_13_92, (MR_Word) (Row_89), Var_36, &conv5_EntryLeft_16);
      EntryLeft_16 = ((MR_Word) (conv5_EntryLeft_16));
      Var_38 = (MR_Integer) ((MR_Unsigned) RowNum_9 - (MR_Unsigned) 1);
      Var_39 = (MR_Integer) ((MR_Unsigned) ColNum_11 - (MR_Unsigned) 1);
      mercury__edit_seq__lookup_entry_4_p_0(TypeInfo_for_T_58, STATE_VARIABLE_Table_0_28, Var_38, Var_39, &EntryDiag_17);
      EditsUp_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EntryUp_15, (MR_Integer) 0))));
      CostUp0_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), EntryUp_15, (MR_Integer) 1))));
      EditsLeft_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EntryLeft_16, (MR_Integer) 0))));
      CostLeft0_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), EntryLeft_16, (MR_Integer) 1))));
      EditsDiag_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EntryDiag_17, (MR_Integer) 0))));
      CostDiag0_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), EntryDiag_17, (MR_Integer) 1))));
      Var_42 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Params_8, (MR_Integer) 0))));
      Var_52 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Params_8, (MR_Integer) 1))));
      Var_53 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Params_8, (MR_Integer) 2))));
      CostUp_24 = (MR_Integer) ((MR_Unsigned) CostUp0_19 + (MR_Unsigned) Var_42);
      CostLeft_25 = (MR_Integer) ((MR_Unsigned) CostLeft0_21 + (MR_Unsigned) Var_52);
      CostDiag_26 = (MR_Integer) ((MR_Unsigned) CostDiag0_23 + (MR_Unsigned) Var_53);
      succeeded = (CostLeft_25 <= CostUp_24);
      if (succeeded)
        succeeded = (CostLeft_25 <= CostDiag_26);
      if (succeeded)
      {
        MR_Word TypeInfo_60_60;
        MR_Word Edits_27;
        MR_Word Var_45;
        MR_Word conv6_Edits_27;

        {
          TypeInfo_60_60 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfo_60_60, 0) = ((MR_Box) (&mercury__edit_seq__edit_seq__type_ctor_info_edit_1));
          MR_hl_field(MR_mktag(0), TypeInfo_60_60, 1) = ((MR_Box) (TypeInfo_for_T_58));
        }
        {
          Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (RowNum_9));
          MR_hl_field(MR_mktag(1), Var_45, 1) = B_12;
        }
        conv6_Edits_27 = mercury__cord__snoc_2_f_0(TypeInfo_60_60, (MR_Word) (EditsLeft_20), ((MR_Box) (Var_45)));
        Edits_27 = (MR_Word) (conv6_Edits_27);
        {
          Entry_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Entry_14, 0) = ((MR_Box) (Edits_27));
          MR_hl_field(MR_mktag(0), Entry_14, 1) = ((MR_Box) (CostLeft_25));
        }
      }
      else
      {
        succeeded = (CostUp_24 <= CostLeft_25);
        if (succeeded)
          succeeded = (CostUp_24 <= CostDiag_26);
        if (succeeded)
        {
          MR_Word TypeInfo_62_62;
          MR_Word Var_46;
          MR_Word Edits_49;
          MR_Word conv7_Edits_49;

          {
            TypeInfo_62_62 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TypeInfo_62_62, 0) = ((MR_Box) (&mercury__edit_seq__edit_seq__type_ctor_info_edit_1));
            MR_hl_field(MR_mktag(0), TypeInfo_62_62, 1) = ((MR_Box) (TypeInfo_for_T_58));
          }
          {
            Var_46 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_46, 0) = ((MR_Box) (RowNum_9));
          }
          conv7_Edits_49 = mercury__cord__snoc_2_f_0(TypeInfo_62_62, (MR_Word) (EditsUp_18), ((MR_Box) (Var_46)));
          Edits_49 = (MR_Word) (conv7_Edits_49);
          {
            Entry_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Entry_14, 0) = ((MR_Box) (Edits_49));
            MR_hl_field(MR_mktag(0), Entry_14, 1) = ((MR_Box) (CostUp_24));
          }
        }
        else
        {
          MR_Word TypeInfo_64_64;
          MR_Word Var_47;
          MR_Word Edits_50;
          MR_Word conv8_Edits_50;

          {
            TypeInfo_64_64 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TypeInfo_64_64, 0) = ((MR_Box) (&mercury__edit_seq__edit_seq__type_ctor_info_edit_1));
            MR_hl_field(MR_mktag(0), TypeInfo_64_64, 1) = ((MR_Box) (TypeInfo_for_T_58));
          }
          {
            Var_47 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_47, 0) = ((MR_Box) (RowNum_9));
            MR_hl_field(MR_mktag(2), Var_47, 1) = B_12;
          }
          conv8_Edits_50 = mercury__cord__snoc_2_f_0(TypeInfo_64_64, (MR_Word) (EditsDiag_22), ((MR_Box) (Var_47)));
          Edits_50 = (MR_Word) (conv8_Edits_50);
          {
            Entry_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Entry_14, 0) = ((MR_Box) (Edits_50));
            MR_hl_field(MR_mktag(0), Entry_14, 1) = ((MR_Box) (CostDiag_26));
          }
        }
      }
    }
    mercury__edit_seq__add_entry_5_p_0(TypeInfo_for_T_58, RowNum_9, ColNum_11, Entry_14, STATE_VARIABLE_Table_0_28, STATE_VARIABLE_Table_29);
  }
}

static void MR_CALL 
mercury__edit_seq__add_entry_5_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Integer RowNum_6,
  MR_Integer ColNum_7,
  MR_Word Entry_8,
  MR_Word STATE_VARIABLE_Table_0_12,
  MR_Word * STATE_VARIABLE_Table_13)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_20_20;
    MR_Word TypeInfo_22_22;
    MR_Word Row0_10;
    MR_Box conv0_Row0_10;

    {
      TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_20_20, 0) = ((MR_Box) (&mercury__edit_seq__edit_seq__type_ctor_info_dynprog_entry_1));
      MR_hl_field(MR_mktag(0), TypeInfo_20_20, 1) = ((MR_Box) (TypeInfo_for_T_17));
    }
    {
      TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_22_22, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
      MR_hl_field(MR_mktag(0), TypeInfo_22_22, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0));
      MR_hl_field(MR_mktag(0), TypeInfo_22_22, 2) = ((MR_Box) (TypeInfo_20_20));
    }
    succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_22_22, (MR_Word) (STATE_VARIABLE_Table_0_12), RowNum_6, &conv0_Row0_10);
    if (succeeded)
    {
      Row0_10 = ((MR_Word) (conv0_Row0_10));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Row_11;
      MR_Word conv1_Row_11;
      MR_Word conv2_STATE_VARIABLE_Table_13;

      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(TypeInfo_20_20, ColNum_7, ((MR_Box) (Entry_8)), (MR_Word) (Row0_10), &conv1_Row_11);
      Row_11 = (MR_Word) (conv1_Row_11);
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(TypeInfo_22_22, RowNum_6, ((MR_Box) (Row_11)), (MR_Word) (STATE_VARIABLE_Table_0_12), &conv2_STATE_VARIABLE_Table_13);
      *STATE_VARIABLE_Table_13 = (MR_Word) (conv2_STATE_VARIABLE_Table_13);
    }
    else
    {
      MR_Word TypeInfo_30_30;
      MR_Word TypeInfo_32_32;
      MR_Word Row_16;
      MR_Word conv3_STATE_VARIABLE_Table_13;

      {
        TypeInfo_30_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_30_30, 0) = ((MR_Box) (&mercury__edit_seq__edit_seq__type_ctor_info_dynprog_entry_1));
        MR_hl_field(MR_mktag(0), TypeInfo_30_30, 1) = ((MR_Box) (TypeInfo_for_T_17));
      }
      {
        Row_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Row_16, 0) = ((MR_Box) (ColNum_7));
        MR_hl_field(MR_mktag(1), Row_16, 1) = ((MR_Box) (Entry_8));
        MR_hl_field(MR_mktag(1), Row_16, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Row_16, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        TypeInfo_32_32 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_32_32, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
        MR_hl_field(MR_mktag(0), TypeInfo_32_32, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0));
        MR_hl_field(MR_mktag(0), TypeInfo_32_32, 2) = ((MR_Box) (TypeInfo_30_30));
      }
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(TypeInfo_32_32, RowNum_6, ((MR_Box) (Row_16)), (MR_Word) (STATE_VARIABLE_Table_0_12), &conv3_STATE_VARIABLE_Table_13);
      *STATE_VARIABLE_Table_13 = (MR_Word) (conv3_STATE_VARIABLE_Table_13);
    }
  }
}

static void MR_CALL 
mercury__edit_seq__lookup_entry_4_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word Table_5,
  MR_Integer RowNum_6,
  MR_Integer ColNum_7,
  MR_Word * Entry_8)
{
  {
    MR_Word TypeInfo_13_13;
    MR_Word TypeInfo_15_15;
    MR_Word Row_9;
    MR_Box conv0_Row_9;
    MR_Box conv1_Entry_8;

    {
      TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_13_13, 0) = ((MR_Box) (&mercury__edit_seq__edit_seq__type_ctor_info_dynprog_entry_1));
      MR_hl_field(MR_mktag(0), TypeInfo_13_13, 1) = ((MR_Box) (TypeInfo_for_T_10));
    }
    {
      TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_15_15, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
      MR_hl_field(MR_mktag(0), TypeInfo_15_15, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0));
      MR_hl_field(MR_mktag(0), TypeInfo_15_15, 2) = ((MR_Box) (TypeInfo_13_13));
    }
    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_15_15, (MR_Word) (Table_5), RowNum_6, &conv0_Row_9);
    Row_9 = ((MR_Word) (conv0_Row_9));
    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_13_13, (MR_Word) (Row_9), ColNum_7, &conv1_Entry_8);
    *Entry_8 = ((MR_Word) (conv1_Entry_8));
  }
}

static void MR_CALL 
mercury__edit_seq__init_col_zero_deletes_6_p_0(
  MR_Word TypeInfo_for_T_33,
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Table_0_5,
  MR_Word * STATE_VARIABLE_Table_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Table_6 = STATE_VARIABLE_Table_0_5;
    else
    {
      MR_Word TypeInfo_35_35;
      MR_Word TailSeqA_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word CurEdits_19;
      MR_Word Entry_20;
      MR_Word Var_23;
      MR_Integer Var_24;
      MR_Integer Var_25;
      MR_Word STATE_VARIABLE_Table_27_27;
      MR_Integer Var_28;
      MR_Word conv0_CurEdits_19;
      MR_Word TypeInfo_20_49;
      MR_Word TypeInfo_22_51;
      MR_Word Row0_42;
      MR_Box conv1_Row0_42;
      MR_Integer next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_Table_0_5;

      {
        TypeInfo_35_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_35_35, 0) = ((MR_Box) (&mercury__edit_seq__edit_seq__type_ctor_info_edit_1));
        MR_hl_field(MR_mktag(0), TypeInfo_35_35, 1) = ((MR_Box) (TypeInfo_for_T_33));
      }
      {
        Var_23 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (HeadVar__2_2));
      }
      conv0_CurEdits_19 = mercury__cord__snoc_2_f_0(TypeInfo_35_35, (MR_Word) (HeadVar__4_4), ((MR_Box) (Var_23)));
      CurEdits_19 = (MR_Word) (conv0_CurEdits_19);
      Var_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      Var_24 = (MR_Integer) ((MR_Unsigned) HeadVar__2_2 * (MR_Unsigned) Var_25);
      {
        Entry_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Entry_20, 0) = ((MR_Box) (CurEdits_19));
        MR_hl_field(MR_mktag(0), Entry_20, 1) = ((MR_Box) (Var_24));
      }
      {
        TypeInfo_20_49 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_20_49, 0) = ((MR_Box) (&mercury__edit_seq__edit_seq__type_ctor_info_dynprog_entry_1));
        MR_hl_field(MR_mktag(0), TypeInfo_20_49, 1) = ((MR_Box) (TypeInfo_for_T_33));
      }
      {
        TypeInfo_22_51 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_22_51, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
        MR_hl_field(MR_mktag(0), TypeInfo_22_51, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0));
        MR_hl_field(MR_mktag(0), TypeInfo_22_51, 2) = ((MR_Box) (TypeInfo_20_49));
      }
      succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_22_51, (MR_Word) (STATE_VARIABLE_Table_0_5), HeadVar__2_2, &conv1_Row0_42);
      if (succeeded)
      {
        Row0_42 = ((MR_Word) (conv1_Row0_42));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word Row_43;
        MR_Word conv2_Row_43;
        MR_Word conv3_STATE_VARIABLE_Table_27_27;

        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(TypeInfo_20_49, (MR_Integer) 0, ((MR_Box) (Entry_20)), (MR_Word) (Row0_42), &conv2_Row_43);
        Row_43 = (MR_Word) (conv2_Row_43);
        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(TypeInfo_22_51, HeadVar__2_2, ((MR_Box) (Row_43)), (MR_Word) (STATE_VARIABLE_Table_0_5), &conv3_STATE_VARIABLE_Table_27_27);
        STATE_VARIABLE_Table_27_27 = (MR_Word) (conv3_STATE_VARIABLE_Table_27_27);
      }
      else
      {
        MR_Word TypeInfo_30_59;
        MR_Word TypeInfo_32_61;
        MR_Word Row_46;
        MR_Word conv4_STATE_VARIABLE_Table_27_27;

        {
          TypeInfo_30_59 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfo_30_59, 0) = ((MR_Box) (&mercury__edit_seq__edit_seq__type_ctor_info_dynprog_entry_1));
          MR_hl_field(MR_mktag(0), TypeInfo_30_59, 1) = ((MR_Box) (TypeInfo_for_T_33));
        }
        {
          Row_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Row_46, 0) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(1), Row_46, 1) = ((MR_Box) (Entry_20));
          MR_hl_field(MR_mktag(1), Row_46, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Row_46, 3) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          TypeInfo_32_61 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfo_32_61, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
          MR_hl_field(MR_mktag(0), TypeInfo_32_61, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0));
          MR_hl_field(MR_mktag(0), TypeInfo_32_61, 2) = ((MR_Box) (TypeInfo_30_59));
        }
        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(TypeInfo_32_61, HeadVar__2_2, ((MR_Box) (Row_46)), (MR_Word) (STATE_VARIABLE_Table_0_5), &conv4_STATE_VARIABLE_Table_27_27);
        STATE_VARIABLE_Table_27_27 = (MR_Word) (conv4_STATE_VARIABLE_Table_27_27);
      }
      Var_28 = (MR_Integer) ((MR_Unsigned) HeadVar__2_2 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_28;
      next_value_of_HeadVar__3_3 = TailSeqA_16;
      next_value_of_HeadVar__4_4 = CurEdits_19;
      next_value_of_STATE_VARIABLE_Table_0_5 = STATE_VARIABLE_Table_27_27;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_Table_0_5 = next_value_of_STATE_VARIABLE_Table_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__edit_seq__init_row_zero_inserts_6_p_0(
  MR_Word TypeInfo_for_T_34,
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Table_0_5,
  MR_Word * STATE_VARIABLE_Table_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Table_6 = STATE_VARIABLE_Table_0_5;
    else
    {
      MR_Word TypeInfo_36_36;
      MR_Box HeadSeqB_15 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0));
      MR_Word TailSeqB_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word CurEdits_19;
      MR_Word Entry_20;
      MR_Word Var_23;
      MR_Integer Var_25;
      MR_Integer Var_26;
      MR_Word STATE_VARIABLE_Table_28_28;
      MR_Integer Var_29;
      MR_Word conv0_CurEdits_19;
      MR_Word TypeInfo_20_50;
      MR_Word TypeInfo_22_52;
      MR_Word Row0_43;
      MR_Box conv1_Row0_43;
      MR_Integer next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_Table_0_5;

      {
        TypeInfo_36_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_36_36, 0) = ((MR_Box) (&mercury__edit_seq__edit_seq__type_ctor_info_edit_1));
        MR_hl_field(MR_mktag(0), TypeInfo_36_36, 1) = ((MR_Box) (TypeInfo_for_T_34));
      }
      {
        Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(1), Var_23, 1) = HeadSeqB_15;
      }
      conv0_CurEdits_19 = mercury__cord__snoc_2_f_0(TypeInfo_36_36, (MR_Word) (HeadVar__4_4), ((MR_Box) (Var_23)));
      CurEdits_19 = (MR_Word) (conv0_CurEdits_19);
      Var_26 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      Var_25 = (MR_Integer) ((MR_Unsigned) HeadVar__2_2 * (MR_Unsigned) Var_26);
      {
        Entry_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Entry_20, 0) = ((MR_Box) (CurEdits_19));
        MR_hl_field(MR_mktag(0), Entry_20, 1) = ((MR_Box) (Var_25));
      }
      {
        TypeInfo_20_50 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_20_50, 0) = ((MR_Box) (&mercury__edit_seq__edit_seq__type_ctor_info_dynprog_entry_1));
        MR_hl_field(MR_mktag(0), TypeInfo_20_50, 1) = ((MR_Box) (TypeInfo_for_T_34));
      }
      {
        TypeInfo_22_52 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_22_52, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
        MR_hl_field(MR_mktag(0), TypeInfo_22_52, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0));
        MR_hl_field(MR_mktag(0), TypeInfo_22_52, 2) = ((MR_Box) (TypeInfo_20_50));
      }
      succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_22_52, (MR_Word) (STATE_VARIABLE_Table_0_5), (MR_Integer) 0, &conv1_Row0_43);
      if (succeeded)
      {
        Row0_43 = ((MR_Word) (conv1_Row0_43));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word Row_44;
        MR_Word conv2_Row_44;
        MR_Word conv3_STATE_VARIABLE_Table_28_28;

        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(TypeInfo_20_50, HeadVar__2_2, ((MR_Box) (Entry_20)), (MR_Word) (Row0_43), &conv2_Row_44);
        Row_44 = (MR_Word) (conv2_Row_44);
        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(TypeInfo_22_52, (MR_Integer) 0, ((MR_Box) (Row_44)), (MR_Word) (STATE_VARIABLE_Table_0_5), &conv3_STATE_VARIABLE_Table_28_28);
        STATE_VARIABLE_Table_28_28 = (MR_Word) (conv3_STATE_VARIABLE_Table_28_28);
      }
      else
      {
        MR_Word TypeInfo_30_60;
        MR_Word TypeInfo_32_62;
        MR_Word Row_47;
        MR_Word conv4_STATE_VARIABLE_Table_28_28;

        {
          TypeInfo_30_60 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfo_30_60, 0) = ((MR_Box) (&mercury__edit_seq__edit_seq__type_ctor_info_dynprog_entry_1));
          MR_hl_field(MR_mktag(0), TypeInfo_30_60, 1) = ((MR_Box) (TypeInfo_for_T_34));
        }
        {
          Row_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Row_47, 0) = ((MR_Box) (HeadVar__2_2));
          MR_hl_field(MR_mktag(1), Row_47, 1) = ((MR_Box) (Entry_20));
          MR_hl_field(MR_mktag(1), Row_47, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Row_47, 3) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          TypeInfo_32_62 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfo_32_62, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
          MR_hl_field(MR_mktag(0), TypeInfo_32_62, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0));
          MR_hl_field(MR_mktag(0), TypeInfo_32_62, 2) = ((MR_Box) (TypeInfo_30_60));
        }
        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(TypeInfo_32_62, (MR_Integer) 0, ((MR_Box) (Row_47)), (MR_Word) (STATE_VARIABLE_Table_0_5), &conv4_STATE_VARIABLE_Table_28_28);
        STATE_VARIABLE_Table_28_28 = (MR_Word) (conv4_STATE_VARIABLE_Table_28_28);
      }
      Var_29 = (MR_Integer) ((MR_Unsigned) HeadVar__2_2 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_29;
      next_value_of_HeadVar__3_3 = TailSeqB_16;
      next_value_of_HeadVar__4_4 = CurEdits_19;
      next_value_of_STATE_VARIABLE_Table_0_5 = STATE_VARIABLE_Table_28_28;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_Table_0_5 = next_value_of_STATE_VARIABLE_Table_0_5;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
mercury__edit_seq____Unify____change_hunk_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__edit_seq____Unify____change_hunk_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__edit_seq____Compare____change_hunk_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__edit_seq____Compare____change_hunk_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__edit_seq____Unify____diff_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__edit_seq____Unify____diff_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__edit_seq____Compare____diff_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__edit_seq____Compare____diff_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__edit_seq____Unify____diff_cord_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__edit_seq____Unify____diff_cord_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__edit_seq____Compare____diff_cord_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__edit_seq____Compare____diff_cord_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__edit_seq____Unify____diff_seq_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__edit_seq____Unify____diff_seq_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__edit_seq____Compare____diff_seq_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__edit_seq____Compare____diff_seq_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__edit_seq____Unify____dynprog_entry_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__edit_seq____Unify____dynprog_entry_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__edit_seq____Compare____dynprog_entry_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__edit_seq____Compare____dynprog_entry_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__edit_seq____Unify____dynprog_table_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__edit_seq____Unify____dynprog_table_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__edit_seq____Compare____dynprog_table_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__edit_seq____Compare____dynprog_table_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__edit_seq____Unify____edit_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__edit_seq____Unify____edit_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__edit_seq____Compare____edit_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__edit_seq____Compare____edit_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__edit_seq____Unify____edit_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__edit_seq____Unify____edit_params_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__edit_seq____Compare____edit_params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__edit_seq____Compare____edit_params_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__edit_seq____Unify____edit_seq_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__edit_seq____Unify____edit_seq_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__edit_seq____Compare____edit_seq_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__edit_seq____Compare____edit_seq_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__edit_seq__init(void)
{
}

void mercury__edit_seq__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__edit_seq__edit_seq__type_ctor_info_change_hunk_1);
	MR_register_type_ctor_info(&mercury__edit_seq__edit_seq__type_ctor_info_diff_1);
	MR_register_type_ctor_info(&mercury__edit_seq__edit_seq__type_ctor_info_diff_cord_1);
	MR_register_type_ctor_info(&mercury__edit_seq__edit_seq__type_ctor_info_diff_seq_1);
	MR_register_type_ctor_info(&mercury__edit_seq__edit_seq__type_ctor_info_dynprog_entry_1);
	MR_register_type_ctor_info(&mercury__edit_seq__edit_seq__type_ctor_info_dynprog_table_1);
	MR_register_type_ctor_info(&mercury__edit_seq__edit_seq__type_ctor_info_edit_1);
	MR_register_type_ctor_info(&mercury__edit_seq__edit_seq__type_ctor_info_edit_params_0);
	MR_register_type_ctor_info(&mercury__edit_seq__edit_seq__type_ctor_info_edit_seq_1);
}

void mercury__edit_seq__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__edit_seq__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module edit_seq.
