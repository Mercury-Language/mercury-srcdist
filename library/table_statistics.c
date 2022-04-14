/*
** Automatically generated from `table_statistics.m'
** by the Mercury compiler,
** version rotd-2022-04-14
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


// :- module table_statistics.
// :- implementation.

/*
INIT mercury__table_statistics__init
ENDINIT
*/

#include "table_statistics.mih"
#include "table_statistics.mh"


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
#include "exception.mih"
#include "float.mih"
#include "int.mih"
#include "int16.mih"
#include "int32.mih"
#include "int64.mih"
#include "int8.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mercury_term_lexer.mih"
#include "mercury_term_parser.mih"
#include "mutvar.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
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
#include "io.call_system.mih"
#include "io.environment.mih"
#include "io.file.mih"
#include "io.primitives_read.mih"
#include "io.primitives_write.mih"
#include "io.stream_db.mih"
#include "io.stream_ops.mih"
#include "io.text_read.mih"
#include "stream.string_writer.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"




static const MR_FA_TypeInfo_Struct1 mercury__table_statistics__maybe__ti_maybe_1table_statistics__type_ctor_info_table_stats_curr_prev_0;

static const MR_PseudoTypeInfo mercury__table_statistics__table_statistics__field_types_proc_table_statistics_0_0[2];

static const MR_ConstString mercury__table_statistics__table_statistics__field_names_proc_table_statistics_0_0[2];

static const MR_DuFunctorDesc mercury__table_statistics__table_statistics__du_functor_desc_proc_table_statistics_0_0;

static const MR_DuFunctorDescPtr mercury__table_statistics__table_statistics__du_stag_ordered_proc_table_statistics_0_0[1];

static const MR_DuPtagLayout mercury__table_statistics__table_statistics__du_ptag_ordered_proc_table_statistics_0[1];

static const MR_DuFunctorDescPtr mercury__table_statistics__table_statistics__du_name_ordered_proc_table_statistics_0[1];

static const MR_Integer mercury__table_statistics__table_statistics__functor_number_map_proc_table_statistics_0[1];

static const MR_FA_TypeInfo_Struct1 mercury__table_statistics__list__ti_list_1table_statistics__type_ctor_info_table_step_stats_0;

static const MR_PseudoTypeInfo mercury__table_statistics__table_statistics__field_types_table_stats_0_0[3];

static const MR_ConstString mercury__table_statistics__table_statistics__field_names_table_stats_0_0[3];

static const MR_DuFunctorDesc mercury__table_statistics__table_statistics__du_functor_desc_table_stats_0_0;

static const MR_DuFunctorDescPtr mercury__table_statistics__table_statistics__du_stag_ordered_table_stats_0_0[1];

static const MR_DuPtagLayout mercury__table_statistics__table_statistics__du_ptag_ordered_table_stats_0[1];

static const MR_DuFunctorDescPtr mercury__table_statistics__table_statistics__du_name_ordered_table_stats_0[1];

static const MR_Integer mercury__table_statistics__table_statistics__functor_number_map_table_stats_0[1];

static const MR_PseudoTypeInfo mercury__table_statistics__table_statistics__field_types_table_stats_curr_prev_0_0[2];

static const MR_ConstString mercury__table_statistics__table_statistics__field_names_table_stats_curr_prev_0_0[2];

static const MR_DuFunctorDesc mercury__table_statistics__table_statistics__du_functor_desc_table_stats_curr_prev_0_0;

static const MR_DuFunctorDescPtr mercury__table_statistics__table_statistics__du_stag_ordered_table_stats_curr_prev_0_0[1];

static const MR_DuPtagLayout mercury__table_statistics__table_statistics__du_ptag_ordered_table_stats_curr_prev_0[1];

static const MR_DuFunctorDescPtr mercury__table_statistics__table_statistics__du_name_ordered_table_stats_curr_prev_0[1];

static const MR_Integer mercury__table_statistics__table_statistics__functor_number_map_table_stats_curr_prev_0[1];

static const MR_EnumFunctorDesc mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_0;

static const MR_EnumFunctorDesc mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_1;

static const MR_EnumFunctorDesc mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_2;

static const MR_EnumFunctorDesc mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_3;

static const MR_EnumFunctorDesc mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_4;

static const MR_EnumFunctorDesc mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_5;

static const MR_EnumFunctorDesc mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_6;

static const MR_EnumFunctorDesc mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_7;

static const MR_EnumFunctorDesc mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_8;

static const MR_EnumFunctorDesc mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_9;

static const MR_EnumFunctorDesc mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_10;

static const MR_EnumFunctorDesc mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_11;

static const MR_EnumFunctorDesc mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_12;

static const MR_EnumFunctorDesc mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_13;

static const MR_EnumFunctorDesc mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_14;

static const MR_EnumFunctorDesc mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_15;

static const MR_EnumFunctorDesc mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_16;

static const MR_EnumFunctorDesc mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_17;

static const MR_EnumFunctorDesc mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_18;

static const MR_EnumFunctorDesc mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_19;

static const MR_EnumFunctorDesc mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_20;

static const MR_EnumFunctorDesc mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_21;

static const MR_EnumFunctorDescPtr mercury__table_statistics__table_statistics__enum_ordinal_ordered_table_step_kind_0[22];

static const MR_EnumFunctorDescPtr mercury__table_statistics__table_statistics__enum_name_ordered_table_step_kind_0[22];

static const MR_Integer mercury__table_statistics__table_statistics__functor_number_map_table_step_kind_0[22];

static const MR_DuFunctorDesc mercury__table_statistics__table_statistics__du_functor_desc_table_step_stat_details_0_0;

static const MR_PseudoTypeInfo mercury__table_statistics__table_statistics__field_types_table_step_stat_details_0_1[2];

static const MR_ConstString mercury__table_statistics__table_statistics__field_names_table_step_stat_details_0_1[2];

static const MR_DuFunctorDesc mercury__table_statistics__table_statistics__du_functor_desc_table_step_stat_details_0_1;

static const MR_PseudoTypeInfo mercury__table_statistics__table_statistics__field_types_table_step_stat_details_0_2[2];

static const MR_ConstString mercury__table_statistics__table_statistics__field_names_table_step_stat_details_0_2[2];

static const MR_DuFunctorDesc mercury__table_statistics__table_statistics__du_functor_desc_table_step_stat_details_0_2;

static const MR_PseudoTypeInfo mercury__table_statistics__table_statistics__field_types_table_step_stat_details_0_3[9];

static const MR_ConstString mercury__table_statistics__table_statistics__field_names_table_step_stat_details_0_3[9];

static const MR_DuFunctorDesc mercury__table_statistics__table_statistics__du_functor_desc_table_step_stat_details_0_3;

static const MR_PseudoTypeInfo mercury__table_statistics__table_statistics__field_types_table_step_stat_details_0_4[15];

static const MR_ConstString mercury__table_statistics__table_statistics__field_names_table_step_stat_details_0_4[15];

static const MR_DuFunctorDesc mercury__table_statistics__table_statistics__du_functor_desc_table_step_stat_details_0_4;

static const MR_PseudoTypeInfo mercury__table_statistics__table_statistics__field_types_table_step_stat_details_0_5[15];

static const MR_ConstString mercury__table_statistics__table_statistics__field_names_table_step_stat_details_0_5[15];

static const MR_DuFunctorDesc mercury__table_statistics__table_statistics__du_functor_desc_table_step_stat_details_0_5;

static const MR_DuFunctorDescPtr mercury__table_statistics__table_statistics__du_stag_ordered_table_step_stat_details_0_0[1];

static const MR_DuFunctorDescPtr mercury__table_statistics__table_statistics__du_stag_ordered_table_step_stat_details_0_1[1];

static const MR_DuFunctorDescPtr mercury__table_statistics__table_statistics__du_stag_ordered_table_step_stat_details_0_2[1];

static const MR_DuFunctorDescPtr mercury__table_statistics__table_statistics__du_stag_ordered_table_step_stat_details_0_3[3];

static const MR_DuPtagLayout mercury__table_statistics__table_statistics__du_ptag_ordered_table_step_stat_details_0[4];

static const MR_DuFunctorDescPtr mercury__table_statistics__table_statistics__du_name_ordered_table_step_stat_details_0[6];

static const MR_Integer mercury__table_statistics__table_statistics__functor_number_map_table_step_stat_details_0[6];

static const MR_PseudoTypeInfo mercury__table_statistics__table_statistics__field_types_table_step_stats_0_0[4];

static const MR_ConstString mercury__table_statistics__table_statistics__field_names_table_step_stats_0_0[4];

static const MR_DuFunctorDesc mercury__table_statistics__table_statistics__du_functor_desc_table_step_stats_0_0;

static const MR_DuFunctorDescPtr mercury__table_statistics__table_statistics__du_stag_ordered_table_step_stats_0_0[1];

static const MR_DuPtagLayout mercury__table_statistics__table_statistics__du_ptag_ordered_table_step_stats_0[1];

static const MR_DuFunctorDescPtr mercury__table_statistics__table_statistics__du_name_ordered_table_step_stats_0[1];

static const MR_Integer mercury__table_statistics__table_statistics__functor_number_map_table_step_stats_0[1];

static void MR_CALL 
mercury__table_statistics__copy_current_stats_to_prev_5_p_0(
  MR_Box CurPtr_1,
  MR_Box PrevPtr_2,
  MR_Integer NumSteps_3);

static void MR_CALL 
mercury__table_statistics__get_one_table_step_stat_details_26_p_0(
  MR_Box StepDescsPtr_1,
  MR_Box StatsStructPtr_2,
  MR_Integer StepNum_3,
  MR_String * VarName_4,
  MR_Integer * NumLookups_5,
  MR_Integer * NumLookupsIsDupl_6,
  MR_Integer * KindInt_7,
  MR_Integer * HashTableAllocs_8,
  MR_Integer * HashTableBytes_9,
  MR_Integer * HashLinkChunkAllocs_10,
  MR_Integer * HashLinkChunkBytes_11,
  MR_Integer * HashKeyComparesNotDupl_12,
  MR_Integer * HashKeyComparesIsDupl_13,
  MR_Integer * HashResizes_14,
  MR_Integer * HashResizeOldEntries_15,
  MR_Integer * HashResizeNewEntries_16,
  MR_Integer * EnumNodeAllocs_17,
  MR_Integer * EnumNodeBytes_18,
  MR_Integer * DuNodeAllocs_19,
  MR_Integer * DuNodeBytes_20,
  MR_Integer * DuArgLookups_21,
  MR_Integer * DuExistLookups_22,
  MR_Integer * StartAllocs_23,
  MR_Integer * StartBytes_24);

static void MR_CALL 
mercury__table_statistics__get_one_table_overall_stats_5_p_0(
  MR_Box StatsPtr_1,
  MR_Integer * NumLookups_2,
  MR_Integer * NumLookupsIsDupl_3);

static void MR_CALL 
mercury__table_statistics__get_proc_info_direct_fields_12_p_0(
  MR_Box Info_1,
  MR_Integer * HasAnswerTable_2,
  MR_Integer * NumInputs_3,
  MR_Integer * NumOutputs_4,
  MR_Box * InputStepDescsPtr_5,
  MR_Box * OutputStepDescsPtr_6,
  MR_Box * CurCallStatsPtr_7,
  MR_Box * PrevCallStatsPtr_8,
  MR_Box * CurAnswerStatsPtr_9,
  MR_Box * PrevAnswerStatsPtr_10);

static void MR_CALL 
mercury__table_statistics__get_tabling_stats_4_p_0(
  MR_Box Info_5,
  MR_Word * Statistics_6);

static void MR_CALL 
mercury__table_statistics__get_one_table_stats_step_loop_8_p_0(
  MR_Box StepDescsPtr_9,
  MR_Box StatsPtr_10,
  MR_Integer CurStep_11,
  MR_Integer NumSteps_12,
  MR_Word STATE_VARIABLE_StepStats_0_15,
  MR_Word * STATE_VARIABLE_StepStats_16);

static void MR_CALL 
mercury__table_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_50_95_95_91_50_93_95_48_6_p_in__list_0(
  MR_Word Var_24,
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Integer * HeadVar__4_4);

static void MR_CALL 
mercury__table_statistics__write_table_step_stats_5_p_0(
  MR_Word OutStream_6,
  MR_Word Step_7,
  MR_Integer StepNum_8);

static void MR_CALL 
mercury__table_statistics__write_table_step_stats_du_7_p_0(
  MR_Word OutStream_8,
  MR_Integer DuNodeAllocs_9,
  MR_Integer DuNodeBytes_10,
  MR_Integer DuArgLookups_11,
  MR_Integer DuExistLookups_12);

static void MR_CALL 
mercury__table_statistics__write_table_step_stats_hash_12_p_0(
  MR_Word OutStream_13,
  MR_Integer HashTableAllocs_14,
  MR_Integer HashTableBytes_15,
  MR_Integer HashLinkChunkAllocs_16,
  MR_Integer HashLinkChunkBytes_17,
  MR_Integer HashKeyComparesNotDupl_18,
  MR_Integer HashKeyComparesIsDupl_19,
  MR_Integer HashResizes_20,
  MR_Integer HashResizeOldEntries_21,
  MR_Integer HashResizeNewEntries_22);

static void MR_CALL 
mercury__table_statistics__write_table_step_stats_enum_5_p_0(
  MR_Word OutStream_6,
  MR_Integer EnumNodeAllocs_7,
  MR_Integer EnumNodeBytes_8);

static void MR_CALL 
mercury__table_statistics__write_table_step_stats_start_5_p_0(
  MR_Word OutStream_6,
  MR_Integer StartAllocs_7,
  MR_Integer StartBytes_8);

static void MR_CALL 
mercury__table_statistics__write_table_step_stats_header_8_p_0(
  MR_Word OutStream_9,
  MR_String VarName_10,
  MR_Integer StepNum_11,
  MR_String KindStr_12,
  MR_Integer Lookups_13,
  MR_Integer LookupsIsDupl_14);

static MR_String MR_CALL 
mercury__table_statistics__percentage_str_2_f_0(
  MR_Integer A_4,
  MR_Integer B_5);

static MR_bool MR_CALL 
mercury__table_statistics__table_step_stats_detail_diff_3_p_0(
  MR_Word DetailsA_4,
  MR_Word DetailsB_5,
  MR_Word * DetailsDiff_6);

static MR_bool MR_CALL 
mercury__table_statistics____Unify____ml_table_stats_ptr_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__table_statistics____Compare____ml_table_stats_ptr_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__table_statistics____Unify____ml_table_step_desc_ptr_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__table_statistics____Compare____ml_table_step_desc_ptr_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__table_statistics____Unify____proc_table_statistics_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__table_statistics____Compare____proc_table_statistics_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__table_statistics____Unify____table_stats_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__table_statistics____Compare____table_stats_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__table_statistics____Unify____table_stats_curr_prev_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__table_statistics____Compare____table_stats_curr_prev_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__table_statistics____Unify____table_step_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__table_statistics____Compare____table_step_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__table_statistics____Unify____table_step_stat_details_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__table_statistics____Compare____table_step_stat_details_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__table_statistics____Unify____table_step_stats_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__table_statistics____Compare____table_step_stats_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mercury__table_statistics_scalar_common_1[4][2];

static /* final */ const MR_Box mercury__table_statistics_scalar_common_2[2][3];

static /* final */ const MR_Box mercury__table_statistics_scalar_common_3[1][4];

static /* final */ const MR_Box mercury__table_statistics_scalar_common_4[2][5];

static /* final */ const MR_Box mercury__table_statistics_scalar_common_5[3][1];




static /* final */ const MR_Box mercury__table_statistics_scalar_common_1[4][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__table_statistics__table_statistics__type_ctor_info_table_step_stats_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__table_statistics__table_statistics__type_ctor_info_table_stats_curr_prev_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__table_statistics_scalar_common_2[1])),
    ((MR_Box) (&mercury__table_statistics_scalar_common_2[1]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__table_statistics_scalar_common_1[2])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box mercury__table_statistics_scalar_common_2[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box mercury__table_statistics_scalar_common_3[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__table_statistics_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__table_statistics_scalar_common_4[2][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__table_statistics_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__table_statistics_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__table_statistics_scalar_common_5[3][1] = {
  /* row   0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_Integer) 9))
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
#include "pretty_printer.mh"
#include "private_builtin.mh"
#include "rtti_implementation.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "string.mh"
#include "table_builtin.mh"
#include "table_statistics.mh"
#include "time.mh"
#include "type_desc.mh"
#include "uint.mh"
#include "uint16.mh"
#include "uint32.mh"
#include "uint64.mh"
#include "uint8.mh"
#include "version_array.mh"
#include "io.environment.mh"
#include "io.file.mh"
#include "io.primitives_read.mh"
#include "io.primitives_write.mh"
#include "io.stream_db.mh"
#include "io.stream_ops.mh"
#include "io.text_read.mh"

#line 184 "table_statistics.m"
void 
MR_get_tabling_stats(
  MR_ProcTableInfoPtr Info_5,
  MR_Word * Statistics_6)
#line 184 "table_statistics.m"
{
#line 184 "table_statistics.m"
	MR_Box boxed_Info_5;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ProcTableInfoPtr, Info_5, boxed_Info_5);
	mercury__table_statistics__get_tabling_stats_4_p_0(boxed_Info_5, (MR_Word *) Statistics_6);
}


const MR_TypeCtorInfo_Struct mercury__table_statistics__table_statistics__type_ctor_info_ml_table_stats_ptr_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_FOREIGN,
  ((MR_Box) (mercury__table_statistics____Unify____ml_table_stats_ptr_0_0_10001)),
  ((MR_Box) (mercury__table_statistics____Compare____ml_table_stats_ptr_0_0_10001)),
  (MR_String) "table_statistics",
  (MR_String) "ml_table_stats_ptr",
  { NULL },
  { NULL },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct mercury__table_statistics__table_statistics__type_ctor_info_ml_table_step_desc_ptr_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_FOREIGN,
  ((MR_Box) (mercury__table_statistics____Unify____ml_table_step_desc_ptr_0_0_10001)),
  ((MR_Box) (mercury__table_statistics____Compare____ml_table_step_desc_ptr_0_0_10001)),
  (MR_String) "table_statistics",
  (MR_String) "ml_table_step_desc_ptr",
  { NULL },
  { NULL },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 mercury__table_statistics__maybe__ti_maybe_1table_statistics__type_ctor_info_table_stats_curr_prev_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&mercury__table_statistics__table_statistics__type_ctor_info_table_stats_curr_prev_0)
  }
};

static const MR_PseudoTypeInfo mercury__table_statistics__table_statistics__field_types_proc_table_statistics_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__table_statistics__table_statistics__type_ctor_info_table_stats_curr_prev_0),
  (MR_PseudoTypeInfo) (&mercury__table_statistics__maybe__ti_maybe_1table_statistics__type_ctor_info_table_stats_curr_prev_0)
};

static const MR_ConstString mercury__table_statistics__table_statistics__field_names_proc_table_statistics_0_0[2] = {
  (MR_String) "call_table_stats",
  (MR_String) "maybe_answer_table_stats"
};

static const MR_DuFunctorDesc mercury__table_statistics__table_statistics__du_functor_desc_proc_table_statistics_0_0 = {
  (MR_String) "proc_table_statistics",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__table_statistics__table_statistics__field_types_proc_table_statistics_0_0,
  mercury__table_statistics__table_statistics__field_names_proc_table_statistics_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__table_statistics__table_statistics__du_stag_ordered_proc_table_statistics_0_0[1] = {
  &mercury__table_statistics__table_statistics__du_functor_desc_proc_table_statistics_0_0
};

static const MR_DuPtagLayout mercury__table_statistics__table_statistics__du_ptag_ordered_proc_table_statistics_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__table_statistics__table_statistics__du_stag_ordered_proc_table_statistics_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__table_statistics__table_statistics__du_name_ordered_proc_table_statistics_0[1] = {
  &mercury__table_statistics__table_statistics__du_functor_desc_proc_table_statistics_0_0
};

static const MR_Integer mercury__table_statistics__table_statistics__functor_number_map_proc_table_statistics_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__table_statistics__table_statistics__type_ctor_info_proc_table_statistics_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__table_statistics____Unify____proc_table_statistics_0_0_10001)),
  ((MR_Box) (mercury__table_statistics____Compare____proc_table_statistics_0_0_10001)),
  (MR_String) "table_statistics",
  (MR_String) "proc_table_statistics",
  { mercury__table_statistics__table_statistics__du_name_ordered_proc_table_statistics_0 },
  { mercury__table_statistics__table_statistics__du_ptag_ordered_proc_table_statistics_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mercury__table_statistics__table_statistics__functor_number_map_proc_table_statistics_0,

};

static const MR_FA_TypeInfo_Struct1 mercury__table_statistics__list__ti_list_1table_statistics__type_ctor_info_table_step_stats_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mercury__table_statistics__table_statistics__type_ctor_info_table_step_stats_0)
  }
};

static const MR_PseudoTypeInfo mercury__table_statistics__table_statistics__field_types_table_stats_0_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__table_statistics__list__ti_list_1table_statistics__type_ctor_info_table_step_stats_0)
};

static const MR_ConstString mercury__table_statistics__table_statistics__field_names_table_stats_0_0[3] = {
  (MR_String) "num_lookups",
  (MR_String) "num_lookups_is_dupl",
  (MR_String) "step_statistics"
};

static const MR_DuFunctorDesc mercury__table_statistics__table_statistics__du_functor_desc_table_stats_0_0 = {
  (MR_String) "table_stats",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__table_statistics__table_statistics__field_types_table_stats_0_0,
  mercury__table_statistics__table_statistics__field_names_table_stats_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__table_statistics__table_statistics__du_stag_ordered_table_stats_0_0[1] = {
  &mercury__table_statistics__table_statistics__du_functor_desc_table_stats_0_0
};

static const MR_DuPtagLayout mercury__table_statistics__table_statistics__du_ptag_ordered_table_stats_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__table_statistics__table_statistics__du_stag_ordered_table_stats_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__table_statistics__table_statistics__du_name_ordered_table_stats_0[1] = {
  &mercury__table_statistics__table_statistics__du_functor_desc_table_stats_0_0
};

static const MR_Integer mercury__table_statistics__table_statistics__functor_number_map_table_stats_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__table_statistics__table_statistics__type_ctor_info_table_stats_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__table_statistics____Unify____table_stats_0_0_10001)),
  ((MR_Box) (mercury__table_statistics____Compare____table_stats_0_0_10001)),
  (MR_String) "table_statistics",
  (MR_String) "table_stats",
  { mercury__table_statistics__table_statistics__du_name_ordered_table_stats_0 },
  { mercury__table_statistics__table_statistics__du_ptag_ordered_table_stats_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mercury__table_statistics__table_statistics__functor_number_map_table_stats_0,

};

static const MR_PseudoTypeInfo mercury__table_statistics__table_statistics__field_types_table_stats_curr_prev_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__table_statistics__table_statistics__type_ctor_info_table_stats_0),
  (MR_PseudoTypeInfo) (&mercury__table_statistics__table_statistics__type_ctor_info_table_stats_0)
};

static const MR_ConstString mercury__table_statistics__table_statistics__field_names_table_stats_curr_prev_0_0[2] = {
  (MR_String) "current_stats",
  (MR_String) "stats_at_last_call"
};

static const MR_DuFunctorDesc mercury__table_statistics__table_statistics__du_functor_desc_table_stats_curr_prev_0_0 = {
  (MR_String) "table_stats_curr_prev",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__table_statistics__table_statistics__field_types_table_stats_curr_prev_0_0,
  mercury__table_statistics__table_statistics__field_names_table_stats_curr_prev_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__table_statistics__table_statistics__du_stag_ordered_table_stats_curr_prev_0_0[1] = {
  &mercury__table_statistics__table_statistics__du_functor_desc_table_stats_curr_prev_0_0
};

static const MR_DuPtagLayout mercury__table_statistics__table_statistics__du_ptag_ordered_table_stats_curr_prev_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__table_statistics__table_statistics__du_stag_ordered_table_stats_curr_prev_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__table_statistics__table_statistics__du_name_ordered_table_stats_curr_prev_0[1] = {
  &mercury__table_statistics__table_statistics__du_functor_desc_table_stats_curr_prev_0_0
};

static const MR_Integer mercury__table_statistics__table_statistics__functor_number_map_table_stats_curr_prev_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__table_statistics__table_statistics__type_ctor_info_table_stats_curr_prev_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__table_statistics____Unify____table_stats_curr_prev_0_0_10001)),
  ((MR_Box) (mercury__table_statistics____Compare____table_stats_curr_prev_0_0_10001)),
  (MR_String) "table_statistics",
  (MR_String) "table_stats_curr_prev",
  { mercury__table_statistics__table_statistics__du_name_ordered_table_stats_curr_prev_0 },
  { mercury__table_statistics__table_statistics__du_ptag_ordered_table_stats_curr_prev_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mercury__table_statistics__table_statistics__functor_number_map_table_stats_curr_prev_0,

};

static const MR_EnumFunctorDesc mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_0 = {
  (MR_String) "table_step_dummy",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_1 = {
  (MR_String) "table_step_int",
  INT32_C(1)
};

static const MR_EnumFunctorDesc mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_2 = {
  (MR_String) "table_step_char",
  INT32_C(2)
};

static const MR_EnumFunctorDesc mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_3 = {
  (MR_String) "table_step_string",
  INT32_C(3)
};

static const MR_EnumFunctorDesc mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_4 = {
  (MR_String) "table_step_float",
  INT32_C(4)
};

static const MR_EnumFunctorDesc mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_5 = {
  (MR_String) "table_step_enum",
  INT32_C(5)
};

static const MR_EnumFunctorDesc mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_6 = {
  (MR_String) "table_step_foreign_enum",
  INT32_C(6)
};

static const MR_EnumFunctorDesc mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_7 = {
  (MR_String) "table_step_general",
  INT32_C(7)
};

static const MR_EnumFunctorDesc mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_8 = {
  (MR_String) "table_step_general_addr",
  INT32_C(8)
};

static const MR_EnumFunctorDesc mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_9 = {
  (MR_String) "table_step_general_poly",
  INT32_C(9)
};

static const MR_EnumFunctorDesc mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_10 = {
  (MR_String) "table_step_general_poly_addr",
  INT32_C(10)
};

static const MR_EnumFunctorDesc mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_11 = {
  (MR_String) "table_step_typeinfo",
  INT32_C(11)
};

static const MR_EnumFunctorDesc mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_12 = {
  (MR_String) "table_step_typeclassinfo",
  INT32_C(12)
};

static const MR_EnumFunctorDesc mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_13 = {
  (MR_String) "table_step_promise_implied",
  INT32_C(13)
};

static const MR_EnumFunctorDesc mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_14 = {
  (MR_String) "table_step_int8",
  INT32_C(14)
};

static const MR_EnumFunctorDesc mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_15 = {
  (MR_String) "table_step_uint8",
  INT32_C(15)
};

static const MR_EnumFunctorDesc mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_16 = {
  (MR_String) "table_step_int16",
  INT32_C(16)
};

static const MR_EnumFunctorDesc mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_17 = {
  (MR_String) "table_step_uint16",
  INT32_C(17)
};

static const MR_EnumFunctorDesc mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_18 = {
  (MR_String) "table_step_int32",
  INT32_C(18)
};

static const MR_EnumFunctorDesc mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_19 = {
  (MR_String) "table_step_uint32",
  INT32_C(19)
};

static const MR_EnumFunctorDesc mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_20 = {
  (MR_String) "table_step_int64",
  INT32_C(20)
};

static const MR_EnumFunctorDesc mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_21 = {
  (MR_String) "table_step_uint64",
  INT32_C(21)
};

static const MR_EnumFunctorDescPtr mercury__table_statistics__table_statistics__enum_ordinal_ordered_table_step_kind_0[22] = {
  &mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_0,
  &mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_1,
  &mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_2,
  &mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_3,
  &mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_4,
  &mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_5,
  &mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_6,
  &mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_7,
  &mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_8,
  &mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_9,
  &mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_10,
  &mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_11,
  &mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_12,
  &mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_13,
  &mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_14,
  &mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_15,
  &mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_16,
  &mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_17,
  &mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_18,
  &mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_19,
  &mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_20,
  &mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_21
};

static const MR_EnumFunctorDescPtr mercury__table_statistics__table_statistics__enum_name_ordered_table_step_kind_0[22] = {
  &mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_2,
  &mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_0,
  &mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_5,
  &mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_4,
  &mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_6,
  &mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_7,
  &mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_8,
  &mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_9,
  &mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_10,
  &mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_1,
  &mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_16,
  &mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_18,
  &mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_20,
  &mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_14,
  &mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_13,
  &mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_3,
  &mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_12,
  &mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_11,
  &mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_17,
  &mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_19,
  &mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_21,
  &mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_15
};

static const MR_Integer mercury__table_statistics__table_statistics__functor_number_map_table_step_kind_0[22] = {
  (MR_Integer) 1,
  (MR_Integer) 9,
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 4,
  (MR_Integer) 5,
  (MR_Integer) 6,
  (MR_Integer) 7,
  (MR_Integer) 8,
  (MR_Integer) 17,
  (MR_Integer) 16,
  (MR_Integer) 14,
  (MR_Integer) 13,
  (MR_Integer) 21,
  (MR_Integer) 10,
  (MR_Integer) 18,
  (MR_Integer) 11,
  (MR_Integer) 19,
  (MR_Integer) 12,
  (MR_Integer) 20
};

const MR_TypeCtorInfo_Struct mercury__table_statistics__table_statistics__type_ctor_info_table_step_kind_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__table_statistics____Unify____table_step_kind_0_0_10001)),
  ((MR_Box) (mercury__table_statistics____Compare____table_step_kind_0_0_10001)),
  (MR_String) "table_statistics",
  (MR_String) "table_step_kind",
  { mercury__table_statistics__table_statistics__enum_name_ordered_table_step_kind_0 },
  { mercury__table_statistics__table_statistics__enum_ordinal_ordered_table_step_kind_0 },
  (MR_Integer) 22,
  UINT16_C(12),
  mercury__table_statistics__table_statistics__functor_number_map_table_step_kind_0,

};

static const MR_DuFunctorDesc mercury__table_statistics__table_statistics__du_functor_desc_table_step_stat_details_0_0 = {
  (MR_String) "step_stats_none",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__table_statistics__table_statistics__field_types_table_step_stat_details_0_1[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_ConstString mercury__table_statistics__table_statistics__field_names_table_step_stat_details_0_1[2] = {
  (MR_String) "start_num_node_allocs",
  (MR_String) "start_num_node_bytes"
};

static const MR_DuFunctorDesc mercury__table_statistics__table_statistics__du_functor_desc_table_step_stat_details_0_1 = {
  (MR_String) "step_stats_start",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__table_statistics__table_statistics__field_types_table_step_stat_details_0_1,
  mercury__table_statistics__table_statistics__field_names_table_step_stat_details_0_1,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__table_statistics__table_statistics__field_types_table_step_stat_details_0_2[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_ConstString mercury__table_statistics__table_statistics__field_names_table_step_stat_details_0_2[2] = {
  (MR_String) "enum_num_node_allocs",
  (MR_String) "enum_num_node_bytes"
};

static const MR_DuFunctorDesc mercury__table_statistics__table_statistics__du_functor_desc_table_step_stat_details_0_2 = {
  (MR_String) "step_stats_enum",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  mercury__table_statistics__table_statistics__field_types_table_step_stat_details_0_2,
  mercury__table_statistics__table_statistics__field_names_table_step_stat_details_0_2,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__table_statistics__table_statistics__field_types_table_step_stat_details_0_3[9] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_ConstString mercury__table_statistics__table_statistics__field_names_table_step_stat_details_0_3[9] = {
  (MR_String) "hash_num_table_allocs",
  (MR_String) "hash_num_table_bytes",
  (MR_String) "hash_num_link_chunk_allocs",
  (MR_String) "hash_num_link_chunk_bytes",
  (MR_String) "hash_num_num_key_compares_not_dupl",
  (MR_String) "hash_num_num_key_compares_dupl",
  (MR_String) "hash_num_resizes",
  (MR_String) "hash_resizes_num_old_entries",
  (MR_String) "hash_resizes_num_new_entries"
};

static const MR_DuFunctorDesc mercury__table_statistics__table_statistics__du_functor_desc_table_step_stat_details_0_3 = {
  (MR_String) "step_stats_hash",
  INT16_C(9),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(3),
  mercury__table_statistics__table_statistics__field_types_table_step_stat_details_0_3,
  mercury__table_statistics__table_statistics__field_names_table_step_stat_details_0_3,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__table_statistics__table_statistics__field_types_table_step_stat_details_0_4[15] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_ConstString mercury__table_statistics__table_statistics__field_names_table_step_stat_details_0_4[15] = {
  (MR_String) "du_num_node_allocs",
  (MR_String) "du_num_node_bytes",
  (MR_String) "du_num_arg_lookups",
  (MR_String) "du_num_exist_lookups",
  (MR_String) "du_enum_num_node_allocs",
  (MR_String) "du_enum_num_node_bytes",
  (MR_String) "du_hash_num_table_allocs",
  (MR_String) "du_hash_num_table_bytes",
  (MR_String) "du_hash_num_link_chunk_allocs",
  (MR_String) "du_hash_num_link_chunk_bytes",
  (MR_String) "du_hash_num_num_key_compares_not_dupl",
  (MR_String) "du_hash_num_num_key_compares_dupl",
  (MR_String) "du_hash_num_resizes",
  (MR_String) "du_hash_resizes_num_old_entries",
  (MR_String) "du_hash_resizes_num_new_entries"
};

static const MR_DuFunctorDesc mercury__table_statistics__table_statistics__du_functor_desc_table_step_stat_details_0_4 = {
  (MR_String) "step_stats_du",
  INT16_C(15),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(4),
  mercury__table_statistics__table_statistics__field_types_table_step_stat_details_0_4,
  mercury__table_statistics__table_statistics__field_names_table_step_stat_details_0_4,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__table_statistics__table_statistics__field_types_table_step_stat_details_0_5[15] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_ConstString mercury__table_statistics__table_statistics__field_names_table_step_stat_details_0_5[15] = {
  (MR_String) "poly_du_num_node_allocs",
  (MR_String) "poly_du_num_node_bytes",
  (MR_String) "poly_du_num_arg_lookups",
  (MR_String) "poly_du_num_exist_lookups",
  (MR_String) "poly_enum_num_node_allocs",
  (MR_String) "poly_enum_num_node_bytes",
  (MR_String) "poly_hash_num_table_allocs",
  (MR_String) "poly_hash_num_table_bytes",
  (MR_String) "poly_hash_num_link_chunk_allocs",
  (MR_String) "poly_hash_num_link_chunk_bytes",
  (MR_String) "poly_hash_num_num_key_compares_not_dupl",
  (MR_String) "poly_hash_num_num_key_compares_dupl",
  (MR_String) "poly_hash_num_resizes",
  (MR_String) "poly_hash_resizes_num_old_entries",
  (MR_String) "poly_hash_resizes_num_new_entries"
};

static const MR_DuFunctorDesc mercury__table_statistics__table_statistics__du_functor_desc_table_step_stat_details_0_5 = {
  (MR_String) "step_stats_poly",
  INT16_C(15),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 2,
  INT32_C(5),
  mercury__table_statistics__table_statistics__field_types_table_step_stat_details_0_5,
  mercury__table_statistics__table_statistics__field_names_table_step_stat_details_0_5,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__table_statistics__table_statistics__du_stag_ordered_table_step_stat_details_0_0[1] = {
  &mercury__table_statistics__table_statistics__du_functor_desc_table_step_stat_details_0_0
};

static const MR_DuFunctorDescPtr mercury__table_statistics__table_statistics__du_stag_ordered_table_step_stat_details_0_1[1] = {
  &mercury__table_statistics__table_statistics__du_functor_desc_table_step_stat_details_0_1
};

static const MR_DuFunctorDescPtr mercury__table_statistics__table_statistics__du_stag_ordered_table_step_stat_details_0_2[1] = {
  &mercury__table_statistics__table_statistics__du_functor_desc_table_step_stat_details_0_2
};

static const MR_DuFunctorDescPtr mercury__table_statistics__table_statistics__du_stag_ordered_table_step_stat_details_0_3[3] = {
  &mercury__table_statistics__table_statistics__du_functor_desc_table_step_stat_details_0_3,
  &mercury__table_statistics__table_statistics__du_functor_desc_table_step_stat_details_0_4,
  &mercury__table_statistics__table_statistics__du_functor_desc_table_step_stat_details_0_5
};

static const MR_DuPtagLayout mercury__table_statistics__table_statistics__du_ptag_ordered_table_step_stat_details_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mercury__table_statistics__table_statistics__du_stag_ordered_table_step_stat_details_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__table_statistics__table_statistics__du_stag_ordered_table_step_stat_details_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__table_statistics__table_statistics__du_stag_ordered_table_step_stat_details_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(3),
    MR_SECTAG_REMOTE_FULL_WORD,
    mercury__table_statistics__table_statistics__du_stag_ordered_table_step_stat_details_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__table_statistics__table_statistics__du_name_ordered_table_step_stat_details_0[6] = {
  &mercury__table_statistics__table_statistics__du_functor_desc_table_step_stat_details_0_4,
  &mercury__table_statistics__table_statistics__du_functor_desc_table_step_stat_details_0_2,
  &mercury__table_statistics__table_statistics__du_functor_desc_table_step_stat_details_0_3,
  &mercury__table_statistics__table_statistics__du_functor_desc_table_step_stat_details_0_0,
  &mercury__table_statistics__table_statistics__du_functor_desc_table_step_stat_details_0_5,
  &mercury__table_statistics__table_statistics__du_functor_desc_table_step_stat_details_0_1
};

static const MR_Integer mercury__table_statistics__table_statistics__functor_number_map_table_step_stat_details_0[6] = {
  (MR_Integer) 3,
  (MR_Integer) 5,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 4
};

const MR_TypeCtorInfo_Struct mercury__table_statistics__table_statistics__type_ctor_info_table_step_stat_details_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__table_statistics____Unify____table_step_stat_details_0_0_10001)),
  ((MR_Box) (mercury__table_statistics____Compare____table_step_stat_details_0_0_10001)),
  (MR_String) "table_statistics",
  (MR_String) "table_step_stat_details",
  { mercury__table_statistics__table_statistics__du_name_ordered_table_step_stat_details_0 },
  { mercury__table_statistics__table_statistics__du_ptag_ordered_table_step_stat_details_0 },
  (MR_Integer) 6,
  UINT16_C(12),
  mercury__table_statistics__table_statistics__functor_number_map_table_step_stat_details_0,

};

static const MR_PseudoTypeInfo mercury__table_statistics__table_statistics__field_types_table_step_stats_0_0[4] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__table_statistics__table_statistics__type_ctor_info_table_step_stat_details_0)
};

static const MR_ConstString mercury__table_statistics__table_statistics__field_names_table_step_stats_0_0[4] = {
  (MR_String) "table_step_var_name",
  (MR_String) "table_step_num_lookups",
  (MR_String) "table_step_num_lookups_is_dupl",
  (MR_String) "table_step_detail"
};

static const MR_DuFunctorDesc mercury__table_statistics__table_statistics__du_functor_desc_table_step_stats_0_0 = {
  (MR_String) "table_step_stats",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__table_statistics__table_statistics__field_types_table_step_stats_0_0,
  mercury__table_statistics__table_statistics__field_names_table_step_stats_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__table_statistics__table_statistics__du_stag_ordered_table_step_stats_0_0[1] = {
  &mercury__table_statistics__table_statistics__du_functor_desc_table_step_stats_0_0
};

static const MR_DuPtagLayout mercury__table_statistics__table_statistics__du_ptag_ordered_table_step_stats_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__table_statistics__table_statistics__du_stag_ordered_table_step_stats_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__table_statistics__table_statistics__du_name_ordered_table_step_stats_0[1] = {
  &mercury__table_statistics__table_statistics__du_functor_desc_table_step_stats_0_0
};

static const MR_Integer mercury__table_statistics__table_statistics__functor_number_map_table_step_stats_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__table_statistics__table_statistics__type_ctor_info_table_step_stats_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__table_statistics____Unify____table_step_stats_0_0_10001)),
  ((MR_Box) (mercury__table_statistics____Compare____table_step_stats_0_0_10001)),
  (MR_String) "table_statistics",
  (MR_String) "table_step_stats",
  { mercury__table_statistics__table_statistics__du_name_ordered_table_step_stats_0 },
  { mercury__table_statistics__table_statistics__du_ptag_ordered_table_step_stats_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mercury__table_statistics__table_statistics__functor_number_map_table_step_stats_0,

};

void MR_CALL 
mercury__table_statistics____Compare____table_step_stats_0_0(
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
    MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
    MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
    MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
    MR_Word SubResult1_6;
    MR_Integer Var_24;

{
#define MR_PROC_LABEL mercury__table_statistics____Compare____table_step_stats_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = ArgX1_4 ;
	S2 = ArgY1_5 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_24  = Res;
}
    succeeded = (Var_24 < (MR_Integer) 0);
    if (succeeded)
      SubResult1_6 = (MR_Integer) 1;
    else
    {
      succeeded = (Var_24 == (MR_Integer) 0);
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
          mercury__table_statistics____Compare____table_step_stat_details_0_0(HeadVar__1_1, ArgX4_13, ArgY4_14);
      }
    }
  }
}

MR_bool MR_CALL 
mercury__table_statistics____Unify____table_step_stats_0_0(
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
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
    MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));

    succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        succeeded = (ArgX3_7 == ArgY3_8);
        if (succeeded)
          succeeded = mercury__table_statistics____Unify____table_step_stat_details_0_0(ArgX4_9, ArgY4_10);
      }
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__table_statistics____Compare____table_step_stat_details_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_558 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_559 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_558 == CastY_559);
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
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer Var_644 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
          MR_Integer Var_645 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              {
                MR_Integer ArgY1_50 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
                MR_Integer ArgY2_53 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
                MR_Word SubResult1_51;

                succeeded = (Var_645 < ArgY1_50);
                if (succeeded)
                  SubResult1_51 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_645 == ArgY1_50);
                  if (succeeded)
                    SubResult1_51 = (MR_Integer) 0;
                  else
                    SubResult1_51 = (MR_Integer) 2;
                }
                succeeded = (SubResult1_51 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_51;
                else
                {
                  succeeded = (Var_644 < ArgY2_53);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_644 == ArgY2_53);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 0;
                    else
                      *HeadVar__1_1 = (MR_Integer) 2;
                  }
                }
              }
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer Var_618 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
          MR_Integer Var_619 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

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
                MR_Integer ArgY1_110 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));
                MR_Integer ArgY2_113 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1))));
                MR_Word SubResult1_111;

                succeeded = (Var_619 < ArgY1_110);
                if (succeeded)
                  SubResult1_111 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_619 == ArgY1_110);
                  if (succeeded)
                    SubResult1_111 = (MR_Integer) 0;
                  else
                    SubResult1_111 = (MR_Integer) 2;
                }
                succeeded = (SubResult1_111 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_111;
                else
                {
                  succeeded = (Var_618 < ArgY2_113);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_618 == ArgY2_113);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 0;
                    else
                      *HeadVar__1_1 = (MR_Integer) 2;
                  }
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer Var_620 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 9))));
              MR_Integer Var_621 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 8))));
              MR_Integer Var_622 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 7))));
              MR_Integer Var_623 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 6))));
              MR_Integer Var_624 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5))));
              MR_Integer Var_625 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4))));
              MR_Integer Var_626 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
              MR_Integer Var_627 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
              MR_Integer Var_628 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Integer ArgY1_191 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                        MR_Integer ArgY2_194 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                        MR_Integer ArgY3_197 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                        MR_Integer ArgY4_200 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 4))));
                        MR_Integer ArgY5_203 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 5))));
                        MR_Integer ArgY6_206 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 6))));
                        MR_Integer ArgY7_209 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 7))));
                        MR_Integer ArgY8_212 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 8))));
                        MR_Integer ArgY9_215 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 9))));
                        MR_Word SubResult1_192;

                        succeeded = (Var_628 < ArgY1_191);
                        if (succeeded)
                          SubResult1_192 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (Var_628 == ArgY1_191);
                          if (succeeded)
                            SubResult1_192 = (MR_Integer) 0;
                          else
                            SubResult1_192 = (MR_Integer) 2;
                        }
                        succeeded = (SubResult1_192 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult1_192;
                        else
                        {
                          MR_Word SubResult2_195;

                          succeeded = (Var_627 < ArgY2_194);
                          if (succeeded)
                            SubResult2_195 = (MR_Integer) 1;
                          else
                          {
                            succeeded = (Var_627 == ArgY2_194);
                            if (succeeded)
                              SubResult2_195 = (MR_Integer) 0;
                            else
                              SubResult2_195 = (MR_Integer) 2;
                          }
                          succeeded = (SubResult2_195 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult2_195;
                          else
                          {
                            MR_Word SubResult3_198;

                            succeeded = (Var_626 < ArgY3_197);
                            if (succeeded)
                              SubResult3_198 = (MR_Integer) 1;
                            else
                            {
                              succeeded = (Var_626 == ArgY3_197);
                              if (succeeded)
                                SubResult3_198 = (MR_Integer) 0;
                              else
                                SubResult3_198 = (MR_Integer) 2;
                            }
                            succeeded = (SubResult3_198 != (MR_Integer) 0);
                            if (succeeded)
                              *HeadVar__1_1 = SubResult3_198;
                            else
                            {
                              MR_Word SubResult4_201;

                              succeeded = (Var_625 < ArgY4_200);
                              if (succeeded)
                                SubResult4_201 = (MR_Integer) 1;
                              else
                              {
                                succeeded = (Var_625 == ArgY4_200);
                                if (succeeded)
                                  SubResult4_201 = (MR_Integer) 0;
                                else
                                  SubResult4_201 = (MR_Integer) 2;
                              }
                              succeeded = (SubResult4_201 != (MR_Integer) 0);
                              if (succeeded)
                                *HeadVar__1_1 = SubResult4_201;
                              else
                              {
                                MR_Word SubResult5_204;

                                succeeded = (Var_624 < ArgY5_203);
                                if (succeeded)
                                  SubResult5_204 = (MR_Integer) 1;
                                else
                                {
                                  succeeded = (Var_624 == ArgY5_203);
                                  if (succeeded)
                                    SubResult5_204 = (MR_Integer) 0;
                                  else
                                    SubResult5_204 = (MR_Integer) 2;
                                }
                                succeeded = (SubResult5_204 != (MR_Integer) 0);
                                if (succeeded)
                                  *HeadVar__1_1 = SubResult5_204;
                                else
                                {
                                  MR_Word SubResult6_207;

                                  succeeded = (Var_623 < ArgY6_206);
                                  if (succeeded)
                                    SubResult6_207 = (MR_Integer) 1;
                                  else
                                  {
                                    succeeded = (Var_623 == ArgY6_206);
                                    if (succeeded)
                                      SubResult6_207 = (MR_Integer) 0;
                                    else
                                      SubResult6_207 = (MR_Integer) 2;
                                  }
                                  succeeded = (SubResult6_207 != (MR_Integer) 0);
                                  if (succeeded)
                                    *HeadVar__1_1 = SubResult6_207;
                                  else
                                  {
                                    MR_Word SubResult7_210;

                                    succeeded = (Var_622 < ArgY7_209);
                                    if (succeeded)
                                      SubResult7_210 = (MR_Integer) 1;
                                    else
                                    {
                                      succeeded = (Var_622 == ArgY7_209);
                                      if (succeeded)
                                        SubResult7_210 = (MR_Integer) 0;
                                      else
                                        SubResult7_210 = (MR_Integer) 2;
                                    }
                                    succeeded = (SubResult7_210 != (MR_Integer) 0);
                                    if (succeeded)
                                      *HeadVar__1_1 = SubResult7_210;
                                    else
                                    {
                                      MR_Word SubResult8_213;

                                      succeeded = (Var_621 < ArgY8_212);
                                      if (succeeded)
                                        SubResult8_213 = (MR_Integer) 1;
                                      else
                                      {
                                        succeeded = (Var_621 == ArgY8_212);
                                        if (succeeded)
                                          SubResult8_213 = (MR_Integer) 0;
                                        else
                                          SubResult8_213 = (MR_Integer) 2;
                                      }
                                      succeeded = (SubResult8_213 != (MR_Integer) 0);
                                      if (succeeded)
                                        *HeadVar__1_1 = SubResult8_213;
                                      else
                                      {
                                        succeeded = (Var_620 < ArgY9_215);
                                        if (succeeded)
                                          *HeadVar__1_1 = (MR_Integer) 1;
                                        else
                                        {
                                          succeeded = (Var_620 == ArgY9_215);
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
                            }
                          }
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
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer Var_603 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 15))));
              MR_Integer Var_604 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 14))));
              MR_Integer Var_605 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 13))));
              MR_Integer Var_606 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 12))));
              MR_Integer Var_607 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 11))));
              MR_Integer Var_608 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 10))));
              MR_Integer Var_609 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 9))));
              MR_Integer Var_610 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 8))));
              MR_Integer Var_611 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 7))));
              MR_Integer Var_612 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 6))));
              MR_Integer Var_613 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5))));
              MR_Integer Var_614 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4))));
              MR_Integer Var_615 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
              MR_Integer Var_616 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
              MR_Integer Var_617 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Integer ArgY1_338 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                        MR_Integer ArgY2_341 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                        MR_Integer ArgY3_344 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                        MR_Integer ArgY4_347 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 4))));
                        MR_Integer ArgY5_350 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 5))));
                        MR_Integer ArgY6_353 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 6))));
                        MR_Integer ArgY7_356 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 7))));
                        MR_Integer ArgY8_359 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 8))));
                        MR_Integer ArgY9_362 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 9))));
                        MR_Integer ArgY10_365 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 10))));
                        MR_Integer ArgY11_368 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 11))));
                        MR_Integer ArgY12_371 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 12))));
                        MR_Integer ArgY13_374 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 13))));
                        MR_Integer ArgY14_377 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 14))));
                        MR_Integer ArgY15_380 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 15))));
                        MR_Word SubResult1_339;

                        succeeded = (Var_617 < ArgY1_338);
                        if (succeeded)
                          SubResult1_339 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (Var_617 == ArgY1_338);
                          if (succeeded)
                            SubResult1_339 = (MR_Integer) 0;
                          else
                            SubResult1_339 = (MR_Integer) 2;
                        }
                        succeeded = (SubResult1_339 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult1_339;
                        else
                        {
                          MR_Word SubResult2_342;

                          succeeded = (Var_616 < ArgY2_341);
                          if (succeeded)
                            SubResult2_342 = (MR_Integer) 1;
                          else
                          {
                            succeeded = (Var_616 == ArgY2_341);
                            if (succeeded)
                              SubResult2_342 = (MR_Integer) 0;
                            else
                              SubResult2_342 = (MR_Integer) 2;
                          }
                          succeeded = (SubResult2_342 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult2_342;
                          else
                          {
                            MR_Word SubResult3_345;

                            succeeded = (Var_615 < ArgY3_344);
                            if (succeeded)
                              SubResult3_345 = (MR_Integer) 1;
                            else
                            {
                              succeeded = (Var_615 == ArgY3_344);
                              if (succeeded)
                                SubResult3_345 = (MR_Integer) 0;
                              else
                                SubResult3_345 = (MR_Integer) 2;
                            }
                            succeeded = (SubResult3_345 != (MR_Integer) 0);
                            if (succeeded)
                              *HeadVar__1_1 = SubResult3_345;
                            else
                            {
                              MR_Word SubResult4_348;

                              succeeded = (Var_614 < ArgY4_347);
                              if (succeeded)
                                SubResult4_348 = (MR_Integer) 1;
                              else
                              {
                                succeeded = (Var_614 == ArgY4_347);
                                if (succeeded)
                                  SubResult4_348 = (MR_Integer) 0;
                                else
                                  SubResult4_348 = (MR_Integer) 2;
                              }
                              succeeded = (SubResult4_348 != (MR_Integer) 0);
                              if (succeeded)
                                *HeadVar__1_1 = SubResult4_348;
                              else
                              {
                                MR_Word SubResult5_351;

                                succeeded = (Var_613 < ArgY5_350);
                                if (succeeded)
                                  SubResult5_351 = (MR_Integer) 1;
                                else
                                {
                                  succeeded = (Var_613 == ArgY5_350);
                                  if (succeeded)
                                    SubResult5_351 = (MR_Integer) 0;
                                  else
                                    SubResult5_351 = (MR_Integer) 2;
                                }
                                succeeded = (SubResult5_351 != (MR_Integer) 0);
                                if (succeeded)
                                  *HeadVar__1_1 = SubResult5_351;
                                else
                                {
                                  MR_Word SubResult6_354;

                                  succeeded = (Var_612 < ArgY6_353);
                                  if (succeeded)
                                    SubResult6_354 = (MR_Integer) 1;
                                  else
                                  {
                                    succeeded = (Var_612 == ArgY6_353);
                                    if (succeeded)
                                      SubResult6_354 = (MR_Integer) 0;
                                    else
                                      SubResult6_354 = (MR_Integer) 2;
                                  }
                                  succeeded = (SubResult6_354 != (MR_Integer) 0);
                                  if (succeeded)
                                    *HeadVar__1_1 = SubResult6_354;
                                  else
                                  {
                                    MR_Word SubResult7_357;

                                    succeeded = (Var_611 < ArgY7_356);
                                    if (succeeded)
                                      SubResult7_357 = (MR_Integer) 1;
                                    else
                                    {
                                      succeeded = (Var_611 == ArgY7_356);
                                      if (succeeded)
                                        SubResult7_357 = (MR_Integer) 0;
                                      else
                                        SubResult7_357 = (MR_Integer) 2;
                                    }
                                    succeeded = (SubResult7_357 != (MR_Integer) 0);
                                    if (succeeded)
                                      *HeadVar__1_1 = SubResult7_357;
                                    else
                                    {
                                      MR_Word SubResult8_360;

                                      succeeded = (Var_610 < ArgY8_359);
                                      if (succeeded)
                                        SubResult8_360 = (MR_Integer) 1;
                                      else
                                      {
                                        succeeded = (Var_610 == ArgY8_359);
                                        if (succeeded)
                                          SubResult8_360 = (MR_Integer) 0;
                                        else
                                          SubResult8_360 = (MR_Integer) 2;
                                      }
                                      succeeded = (SubResult8_360 != (MR_Integer) 0);
                                      if (succeeded)
                                        *HeadVar__1_1 = SubResult8_360;
                                      else
                                      {
                                        MR_Word SubResult9_363;

                                        succeeded = (Var_609 < ArgY9_362);
                                        if (succeeded)
                                          SubResult9_363 = (MR_Integer) 1;
                                        else
                                        {
                                          succeeded = (Var_609 == ArgY9_362);
                                          if (succeeded)
                                            SubResult9_363 = (MR_Integer) 0;
                                          else
                                            SubResult9_363 = (MR_Integer) 2;
                                        }
                                        succeeded = (SubResult9_363 != (MR_Integer) 0);
                                        if (succeeded)
                                          *HeadVar__1_1 = SubResult9_363;
                                        else
                                        {
                                          MR_Word SubResult10_366;

                                          succeeded = (Var_608 < ArgY10_365);
                                          if (succeeded)
                                            SubResult10_366 = (MR_Integer) 1;
                                          else
                                          {
                                            succeeded = (Var_608 == ArgY10_365);
                                            if (succeeded)
                                              SubResult10_366 = (MR_Integer) 0;
                                            else
                                              SubResult10_366 = (MR_Integer) 2;
                                          }
                                          succeeded = (SubResult10_366 != (MR_Integer) 0);
                                          if (succeeded)
                                            *HeadVar__1_1 = SubResult10_366;
                                          else
                                          {
                                            MR_Word SubResult11_369;

                                            succeeded = (Var_607 < ArgY11_368);
                                            if (succeeded)
                                              SubResult11_369 = (MR_Integer) 1;
                                            else
                                            {
                                              succeeded = (Var_607 == ArgY11_368);
                                              if (succeeded)
                                                SubResult11_369 = (MR_Integer) 0;
                                              else
                                                SubResult11_369 = (MR_Integer) 2;
                                            }
                                            succeeded = (SubResult11_369 != (MR_Integer) 0);
                                            if (succeeded)
                                              *HeadVar__1_1 = SubResult11_369;
                                            else
                                            {
                                              MR_Word SubResult12_372;

                                              succeeded = (Var_606 < ArgY12_371);
                                              if (succeeded)
                                                SubResult12_372 = (MR_Integer) 1;
                                              else
                                              {
                                                succeeded = (Var_606 == ArgY12_371);
                                                if (succeeded)
                                                  SubResult12_372 = (MR_Integer) 0;
                                                else
                                                  SubResult12_372 = (MR_Integer) 2;
                                              }
                                              succeeded = (SubResult12_372 != (MR_Integer) 0);
                                              if (succeeded)
                                                *HeadVar__1_1 = SubResult12_372;
                                              else
                                              {
                                                MR_Word SubResult13_375;

                                                succeeded = (Var_605 < ArgY13_374);
                                                if (succeeded)
                                                  SubResult13_375 = (MR_Integer) 1;
                                                else
                                                {
                                                  succeeded = (Var_605 == ArgY13_374);
                                                  if (succeeded)
                                                    SubResult13_375 = (MR_Integer) 0;
                                                  else
                                                    SubResult13_375 = (MR_Integer) 2;
                                                }
                                                succeeded = (SubResult13_375 != (MR_Integer) 0);
                                                if (succeeded)
                                                  *HeadVar__1_1 = SubResult13_375;
                                                else
                                                {
                                                  MR_Word SubResult14_378;

                                                  succeeded = (Var_604 < ArgY14_377);
                                                  if (succeeded)
                                                    SubResult14_378 = (MR_Integer) 1;
                                                  else
                                                  {
                                                    succeeded = (Var_604 == ArgY14_377);
                                                    if (succeeded)
                                                      SubResult14_378 = (MR_Integer) 0;
                                                    else
                                                      SubResult14_378 = (MR_Integer) 2;
                                                  }
                                                  succeeded = (SubResult14_378 != (MR_Integer) 0);
                                                  if (succeeded)
                                                    *HeadVar__1_1 = SubResult14_378;
                                                  else
                                                  {
                                                    succeeded = (Var_603 < ArgY15_380);
                                                    if (succeeded)
                                                      *HeadVar__1_1 = (MR_Integer) 1;
                                                    else
                                                    {
                                                      succeeded = (Var_603 == ArgY15_380);
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
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer Var_629 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 15))));
              MR_Integer Var_630 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 14))));
              MR_Integer Var_631 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 13))));
              MR_Integer Var_632 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 12))));
              MR_Integer Var_633 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 11))));
              MR_Integer Var_634 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 10))));
              MR_Integer Var_635 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 9))));
              MR_Integer Var_636 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 8))));
              MR_Integer Var_637 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 7))));
              MR_Integer Var_638 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 6))));
              MR_Integer Var_639 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5))));
              MR_Integer Var_640 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4))));
              MR_Integer Var_641 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
              MR_Integer Var_642 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
              MR_Integer Var_643 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Integer ArgY1_515 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                        MR_Integer ArgY2_518 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                        MR_Integer ArgY3_521 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                        MR_Integer ArgY4_524 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 4))));
                        MR_Integer ArgY5_527 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 5))));
                        MR_Integer ArgY6_530 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 6))));
                        MR_Integer ArgY7_533 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 7))));
                        MR_Integer ArgY8_536 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 8))));
                        MR_Integer ArgY9_539 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 9))));
                        MR_Integer ArgY10_542 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 10))));
                        MR_Integer ArgY11_545 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 11))));
                        MR_Integer ArgY12_548 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 12))));
                        MR_Integer ArgY13_551 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 13))));
                        MR_Integer ArgY14_554 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 14))));
                        MR_Integer ArgY15_557 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 15))));
                        MR_Word SubResult1_516;

                        succeeded = (Var_643 < ArgY1_515);
                        if (succeeded)
                          SubResult1_516 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (Var_643 == ArgY1_515);
                          if (succeeded)
                            SubResult1_516 = (MR_Integer) 0;
                          else
                            SubResult1_516 = (MR_Integer) 2;
                        }
                        succeeded = (SubResult1_516 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult1_516;
                        else
                        {
                          MR_Word SubResult2_519;

                          succeeded = (Var_642 < ArgY2_518);
                          if (succeeded)
                            SubResult2_519 = (MR_Integer) 1;
                          else
                          {
                            succeeded = (Var_642 == ArgY2_518);
                            if (succeeded)
                              SubResult2_519 = (MR_Integer) 0;
                            else
                              SubResult2_519 = (MR_Integer) 2;
                          }
                          succeeded = (SubResult2_519 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult2_519;
                          else
                          {
                            MR_Word SubResult3_522;

                            succeeded = (Var_641 < ArgY3_521);
                            if (succeeded)
                              SubResult3_522 = (MR_Integer) 1;
                            else
                            {
                              succeeded = (Var_641 == ArgY3_521);
                              if (succeeded)
                                SubResult3_522 = (MR_Integer) 0;
                              else
                                SubResult3_522 = (MR_Integer) 2;
                            }
                            succeeded = (SubResult3_522 != (MR_Integer) 0);
                            if (succeeded)
                              *HeadVar__1_1 = SubResult3_522;
                            else
                            {
                              MR_Word SubResult4_525;

                              succeeded = (Var_640 < ArgY4_524);
                              if (succeeded)
                                SubResult4_525 = (MR_Integer) 1;
                              else
                              {
                                succeeded = (Var_640 == ArgY4_524);
                                if (succeeded)
                                  SubResult4_525 = (MR_Integer) 0;
                                else
                                  SubResult4_525 = (MR_Integer) 2;
                              }
                              succeeded = (SubResult4_525 != (MR_Integer) 0);
                              if (succeeded)
                                *HeadVar__1_1 = SubResult4_525;
                              else
                              {
                                MR_Word SubResult5_528;

                                succeeded = (Var_639 < ArgY5_527);
                                if (succeeded)
                                  SubResult5_528 = (MR_Integer) 1;
                                else
                                {
                                  succeeded = (Var_639 == ArgY5_527);
                                  if (succeeded)
                                    SubResult5_528 = (MR_Integer) 0;
                                  else
                                    SubResult5_528 = (MR_Integer) 2;
                                }
                                succeeded = (SubResult5_528 != (MR_Integer) 0);
                                if (succeeded)
                                  *HeadVar__1_1 = SubResult5_528;
                                else
                                {
                                  MR_Word SubResult6_531;

                                  succeeded = (Var_638 < ArgY6_530);
                                  if (succeeded)
                                    SubResult6_531 = (MR_Integer) 1;
                                  else
                                  {
                                    succeeded = (Var_638 == ArgY6_530);
                                    if (succeeded)
                                      SubResult6_531 = (MR_Integer) 0;
                                    else
                                      SubResult6_531 = (MR_Integer) 2;
                                  }
                                  succeeded = (SubResult6_531 != (MR_Integer) 0);
                                  if (succeeded)
                                    *HeadVar__1_1 = SubResult6_531;
                                  else
                                  {
                                    MR_Word SubResult7_534;

                                    succeeded = (Var_637 < ArgY7_533);
                                    if (succeeded)
                                      SubResult7_534 = (MR_Integer) 1;
                                    else
                                    {
                                      succeeded = (Var_637 == ArgY7_533);
                                      if (succeeded)
                                        SubResult7_534 = (MR_Integer) 0;
                                      else
                                        SubResult7_534 = (MR_Integer) 2;
                                    }
                                    succeeded = (SubResult7_534 != (MR_Integer) 0);
                                    if (succeeded)
                                      *HeadVar__1_1 = SubResult7_534;
                                    else
                                    {
                                      MR_Word SubResult8_537;

                                      succeeded = (Var_636 < ArgY8_536);
                                      if (succeeded)
                                        SubResult8_537 = (MR_Integer) 1;
                                      else
                                      {
                                        succeeded = (Var_636 == ArgY8_536);
                                        if (succeeded)
                                          SubResult8_537 = (MR_Integer) 0;
                                        else
                                          SubResult8_537 = (MR_Integer) 2;
                                      }
                                      succeeded = (SubResult8_537 != (MR_Integer) 0);
                                      if (succeeded)
                                        *HeadVar__1_1 = SubResult8_537;
                                      else
                                      {
                                        MR_Word SubResult9_540;

                                        succeeded = (Var_635 < ArgY9_539);
                                        if (succeeded)
                                          SubResult9_540 = (MR_Integer) 1;
                                        else
                                        {
                                          succeeded = (Var_635 == ArgY9_539);
                                          if (succeeded)
                                            SubResult9_540 = (MR_Integer) 0;
                                          else
                                            SubResult9_540 = (MR_Integer) 2;
                                        }
                                        succeeded = (SubResult9_540 != (MR_Integer) 0);
                                        if (succeeded)
                                          *HeadVar__1_1 = SubResult9_540;
                                        else
                                        {
                                          MR_Word SubResult10_543;

                                          succeeded = (Var_634 < ArgY10_542);
                                          if (succeeded)
                                            SubResult10_543 = (MR_Integer) 1;
                                          else
                                          {
                                            succeeded = (Var_634 == ArgY10_542);
                                            if (succeeded)
                                              SubResult10_543 = (MR_Integer) 0;
                                            else
                                              SubResult10_543 = (MR_Integer) 2;
                                          }
                                          succeeded = (SubResult10_543 != (MR_Integer) 0);
                                          if (succeeded)
                                            *HeadVar__1_1 = SubResult10_543;
                                          else
                                          {
                                            MR_Word SubResult11_546;

                                            succeeded = (Var_633 < ArgY11_545);
                                            if (succeeded)
                                              SubResult11_546 = (MR_Integer) 1;
                                            else
                                            {
                                              succeeded = (Var_633 == ArgY11_545);
                                              if (succeeded)
                                                SubResult11_546 = (MR_Integer) 0;
                                              else
                                                SubResult11_546 = (MR_Integer) 2;
                                            }
                                            succeeded = (SubResult11_546 != (MR_Integer) 0);
                                            if (succeeded)
                                              *HeadVar__1_1 = SubResult11_546;
                                            else
                                            {
                                              MR_Word SubResult12_549;

                                              succeeded = (Var_632 < ArgY12_548);
                                              if (succeeded)
                                                SubResult12_549 = (MR_Integer) 1;
                                              else
                                              {
                                                succeeded = (Var_632 == ArgY12_548);
                                                if (succeeded)
                                                  SubResult12_549 = (MR_Integer) 0;
                                                else
                                                  SubResult12_549 = (MR_Integer) 2;
                                              }
                                              succeeded = (SubResult12_549 != (MR_Integer) 0);
                                              if (succeeded)
                                                *HeadVar__1_1 = SubResult12_549;
                                              else
                                              {
                                                MR_Word SubResult13_552;

                                                succeeded = (Var_631 < ArgY13_551);
                                                if (succeeded)
                                                  SubResult13_552 = (MR_Integer) 1;
                                                else
                                                {
                                                  succeeded = (Var_631 == ArgY13_551);
                                                  if (succeeded)
                                                    SubResult13_552 = (MR_Integer) 0;
                                                  else
                                                    SubResult13_552 = (MR_Integer) 2;
                                                }
                                                succeeded = (SubResult13_552 != (MR_Integer) 0);
                                                if (succeeded)
                                                  *HeadVar__1_1 = SubResult13_552;
                                                else
                                                {
                                                  MR_Word SubResult14_555;

                                                  succeeded = (Var_630 < ArgY14_554);
                                                  if (succeeded)
                                                    SubResult14_555 = (MR_Integer) 1;
                                                  else
                                                  {
                                                    succeeded = (Var_630 == ArgY14_554);
                                                    if (succeeded)
                                                      SubResult14_555 = (MR_Integer) 0;
                                                    else
                                                      SubResult14_555 = (MR_Integer) 2;
                                                  }
                                                  succeeded = (SubResult14_555 != (MR_Integer) 0);
                                                  if (succeeded)
                                                    *HeadVar__1_1 = SubResult14_555;
                                                  else
                                                  {
                                                    succeeded = (Var_629 < ArgY15_557);
                                                    if (succeeded)
                                                      *HeadVar__1_1 = (MR_Integer) 1;
                                                    else
                                                    {
                                                      succeeded = (Var_629 == ArgY15_557);
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

MR_bool MR_CALL 
mercury__table_statistics____Unify____table_step_stat_details_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_91 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_92 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_91 == CastY_92);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_4 == CastX_3);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer ArgX1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
          MR_Integer ArgY1_6;
          MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
          MR_Integer ArgY2_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
            succeeded = (ArgX1_5 == ArgY1_6);
            if (succeeded)
              succeeded = (ArgX2_7 == ArgY2_8);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer ArgX1_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
          MR_Integer ArgY1_10;
          MR_Integer ArgX2_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
          MR_Integer ArgY2_12;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
            succeeded = (ArgX1_9 == ArgY1_10);
            if (succeeded)
              succeeded = (ArgX2_11 == ArgY2_12);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer ArgX1_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Integer ArgY1_14;
              MR_Integer ArgX2_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Integer ArgY2_16;
              MR_Integer ArgX3_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
              MR_Integer ArgY3_18;
              MR_Integer ArgX4_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 4))));
              MR_Integer ArgY4_20;
              MR_Integer ArgX5_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 5))));
              MR_Integer ArgY5_22;
              MR_Integer ArgX6_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 6))));
              MR_Integer ArgY6_24;
              MR_Integer ArgX7_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 7))));
              MR_Integer ArgY7_26;
              MR_Integer ArgX8_27 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 8))));
              MR_Integer ArgY8_28;
              MR_Integer ArgX9_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 9))));
              MR_Integer ArgY9_30;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                ArgY3_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                ArgY4_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4))));
                ArgY5_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5))));
                ArgY6_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 6))));
                ArgY7_26 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 7))));
                ArgY8_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 8))));
                ArgY9_30 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 9))));
                succeeded = (ArgX1_13 == ArgY1_14);
                if (succeeded)
                {
                  succeeded = (ArgX2_15 == ArgY2_16);
                  if (succeeded)
                  {
                    succeeded = (ArgX3_17 == ArgY3_18);
                    if (succeeded)
                    {
                      succeeded = (ArgX4_19 == ArgY4_20);
                      if (succeeded)
                      {
                        succeeded = (ArgX5_21 == ArgY5_22);
                        if (succeeded)
                        {
                          succeeded = (ArgX6_23 == ArgY6_24);
                          if (succeeded)
                          {
                            succeeded = (ArgX7_25 == ArgY7_26);
                            if (succeeded)
                            {
                              succeeded = (ArgX8_27 == ArgY8_28);
                              if (succeeded)
                                succeeded = (ArgX9_29 == ArgY9_30);
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer ArgX1_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Integer ArgY1_32;
              MR_Integer ArgX2_33 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Integer ArgY2_34;
              MR_Integer ArgX3_35 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
              MR_Integer ArgY3_36;
              MR_Integer ArgX4_37 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 4))));
              MR_Integer ArgY4_38;
              MR_Integer ArgX5_39 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 5))));
              MR_Integer ArgY5_40;
              MR_Integer ArgX6_41 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 6))));
              MR_Integer ArgY6_42;
              MR_Integer ArgX7_43 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 7))));
              MR_Integer ArgY7_44;
              MR_Integer ArgX8_45 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 8))));
              MR_Integer ArgY8_46;
              MR_Integer ArgX9_47 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 9))));
              MR_Integer ArgY9_48;
              MR_Integer ArgX10_49 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 10))));
              MR_Integer ArgY10_50;
              MR_Integer ArgX11_51 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 11))));
              MR_Integer ArgY11_52;
              MR_Integer ArgX12_53 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 12))));
              MR_Integer ArgY12_54;
              MR_Integer ArgX13_55 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 13))));
              MR_Integer ArgY13_56;
              MR_Integer ArgX14_57 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 14))));
              MR_Integer ArgY14_58;
              MR_Integer ArgX15_59 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 15))));
              MR_Integer ArgY15_60;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_32 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                ArgY3_36 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                ArgY4_38 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4))));
                ArgY5_40 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5))));
                ArgY6_42 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 6))));
                ArgY7_44 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 7))));
                ArgY8_46 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 8))));
                ArgY9_48 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 9))));
                ArgY10_50 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 10))));
                ArgY11_52 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 11))));
                ArgY12_54 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 12))));
                ArgY13_56 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 13))));
                ArgY14_58 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 14))));
                ArgY15_60 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 15))));
                succeeded = (ArgX1_31 == ArgY1_32);
                if (succeeded)
                {
                  succeeded = (ArgX2_33 == ArgY2_34);
                  if (succeeded)
                  {
                    succeeded = (ArgX3_35 == ArgY3_36);
                    if (succeeded)
                    {
                      succeeded = (ArgX4_37 == ArgY4_38);
                      if (succeeded)
                      {
                        succeeded = (ArgX5_39 == ArgY5_40);
                        if (succeeded)
                        {
                          succeeded = (ArgX6_41 == ArgY6_42);
                          if (succeeded)
                          {
                            succeeded = (ArgX7_43 == ArgY7_44);
                            if (succeeded)
                            {
                              succeeded = (ArgX8_45 == ArgY8_46);
                              if (succeeded)
                              {
                                succeeded = (ArgX9_47 == ArgY9_48);
                                if (succeeded)
                                {
                                  succeeded = (ArgX10_49 == ArgY10_50);
                                  if (succeeded)
                                  {
                                    succeeded = (ArgX11_51 == ArgY11_52);
                                    if (succeeded)
                                    {
                                      succeeded = (ArgX12_53 == ArgY12_54);
                                      if (succeeded)
                                      {
                                        succeeded = (ArgX13_55 == ArgY13_56);
                                        if (succeeded)
                                        {
                                          succeeded = (ArgX14_57 == ArgY14_58);
                                          if (succeeded)
                                            succeeded = (ArgX15_59 == ArgY15_60);
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
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer ArgX1_61 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Integer ArgY1_62;
              MR_Integer ArgX2_63 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Integer ArgY2_64;
              MR_Integer ArgX3_65 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
              MR_Integer ArgY3_66;
              MR_Integer ArgX4_67 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 4))));
              MR_Integer ArgY4_68;
              MR_Integer ArgX5_69 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 5))));
              MR_Integer ArgY5_70;
              MR_Integer ArgX6_71 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 6))));
              MR_Integer ArgY6_72;
              MR_Integer ArgX7_73 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 7))));
              MR_Integer ArgY7_74;
              MR_Integer ArgX8_75 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 8))));
              MR_Integer ArgY8_76;
              MR_Integer ArgX9_77 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 9))));
              MR_Integer ArgY9_78;
              MR_Integer ArgX10_79 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 10))));
              MR_Integer ArgY10_80;
              MR_Integer ArgX11_81 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 11))));
              MR_Integer ArgY11_82;
              MR_Integer ArgX12_83 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 12))));
              MR_Integer ArgY12_84;
              MR_Integer ArgX13_85 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 13))));
              MR_Integer ArgY13_86;
              MR_Integer ArgX14_87 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 14))));
              MR_Integer ArgY14_88;
              MR_Integer ArgX15_89 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 15))));
              MR_Integer ArgY15_90;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                ArgY1_62 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_64 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                ArgY3_66 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                ArgY4_68 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4))));
                ArgY5_70 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5))));
                ArgY6_72 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 6))));
                ArgY7_74 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 7))));
                ArgY8_76 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 8))));
                ArgY9_78 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 9))));
                ArgY10_80 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 10))));
                ArgY11_82 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 11))));
                ArgY12_84 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 12))));
                ArgY13_86 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 13))));
                ArgY14_88 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 14))));
                ArgY15_90 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 15))));
                succeeded = (ArgX1_61 == ArgY1_62);
                if (succeeded)
                {
                  succeeded = (ArgX2_63 == ArgY2_64);
                  if (succeeded)
                  {
                    succeeded = (ArgX3_65 == ArgY3_66);
                    if (succeeded)
                    {
                      succeeded = (ArgX4_67 == ArgY4_68);
                      if (succeeded)
                      {
                        succeeded = (ArgX5_69 == ArgY5_70);
                        if (succeeded)
                        {
                          succeeded = (ArgX6_71 == ArgY6_72);
                          if (succeeded)
                          {
                            succeeded = (ArgX7_73 == ArgY7_74);
                            if (succeeded)
                            {
                              succeeded = (ArgX8_75 == ArgY8_76);
                              if (succeeded)
                              {
                                succeeded = (ArgX9_77 == ArgY9_78);
                                if (succeeded)
                                {
                                  succeeded = (ArgX10_79 == ArgY10_80);
                                  if (succeeded)
                                  {
                                    succeeded = (ArgX11_81 == ArgY11_82);
                                    if (succeeded)
                                    {
                                      succeeded = (ArgX12_83 == ArgY12_84);
                                      if (succeeded)
                                      {
                                        succeeded = (ArgX13_85 == ArgY13_86);
                                        if (succeeded)
                                        {
                                          succeeded = (ArgX14_87 == ArgY14_88);
                                          if (succeeded)
                                            succeeded = (ArgX15_89 == ArgY15_90);
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
              }
            }
            break;
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
mercury__table_statistics____Compare____table_step_kind_0_0(
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
mercury__table_statistics____Unify____table_step_kind_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
mercury__table_statistics____Compare____proc_table_statistics_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    mercury__table_statistics____Compare____table_stats_curr_prev_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&mercury__table_statistics_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

void MR_CALL 
mercury__table_statistics____Compare____table_stats_curr_prev_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    mercury__table_statistics____Compare____table_stats_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__table_statistics____Compare____table_stats_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

void MR_CALL 
mercury__table_statistics____Compare____table_stats_0_0(
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
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
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
        mercury__builtin__compare_3_p_0((MR_Word) (&mercury__table_statistics_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
    }
  }
}

MR_bool MR_CALL 
mercury__table_statistics____Unify____proc_table_statistics_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

    succeeded = mercury__table_statistics____Unify____table_stats_curr_prev_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_9_9 = (MR_Word) (&mercury__table_statistics_scalar_common_1[1]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__table_statistics____Unify____table_stats_curr_prev_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

    succeeded = mercury__table_statistics____Unify____table_stats_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
      succeeded = mercury__table_statistics____Unify____table_stats_0_0(ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__table_statistics____Unify____table_stats_0_0(
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
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        TypeInfo_11_11 = (MR_Word) (&mercury__table_statistics_scalar_common_1[0]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
      }
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__table_statistics____Compare____ml_table_step_desc_ptr_0_0(
  MR_Word * HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = (MR_Word) (HeadVar__2_2);
  MR_Word Cast_HeadVar2_5 = (MR_Word) (HeadVar__3_3);

  mercury__builtin____Compare____c_pointer_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

MR_bool MR_CALL 
mercury__table_statistics____Unify____ml_table_step_desc_ptr_0_0(
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = (MR_Word) (HeadVar__1_1);
  MR_Word Cast_HeadVar2_4 = (MR_Word) (HeadVar__2_2);

  succeeded = mercury__builtin____Unify____c_pointer_0_0(Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
mercury__table_statistics____Compare____ml_table_stats_ptr_0_0(
  MR_Word * HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = (MR_Word) (HeadVar__2_2);
  MR_Word Cast_HeadVar2_5 = (MR_Word) (HeadVar__3_3);

  mercury__builtin____Compare____c_pointer_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

MR_bool MR_CALL 
mercury__table_statistics____Unify____ml_table_stats_ptr_0_0(
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = (MR_Word) (HeadVar__1_1);
  MR_Word Cast_HeadVar2_4 = (MR_Word) (HeadVar__2_2);

  succeeded = mercury__builtin____Unify____c_pointer_0_0(Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

static void MR_CALL 
mercury__table_statistics__copy_current_stats_to_prev_5_p_0(
  MR_Box CurPtr_1,
  MR_Box PrevPtr_2,
  MR_Integer NumSteps_3)
{
{
#define MR_PROC_LABEL mercury__table_statistics__copy_current_stats_to_prev_5_p_0

	MR_TableStats * CurPtr;
	MR_TableStats * PrevPtr;
	MR_Integer NumSteps;

	CurPtr = (MR_TableStats *)CurPtr_1 ;
	PrevPtr = (MR_TableStats *)PrevPtr_2 ;
	NumSteps = NumSteps_3 ;
		{

    MR_TableStepStats   *cur;
    MR_TableStepStats   *prev;
    int                 i;

    PrevPtr->MR_ts_num_lookups = CurPtr->MR_ts_num_lookups;
    PrevPtr->MR_ts_num_lookups_is_dupl = CurPtr->MR_ts_num_lookups_is_dupl;

    for (i = 0; i < NumSteps; i++) {
        cur = &(CurPtr->MR_ts_steps[i]);
        prev = &(PrevPtr->MR_ts_steps[i]);

        prev->MR_tss_num_lookups =
            cur->MR_tss_num_lookups;
        prev->MR_tss_num_lookups_is_dupl =
            cur->MR_tss_num_lookups_is_dupl;

        prev->MR_tss_hash_num_table_allocs =
            cur->MR_tss_hash_num_table_allocs;
        prev->MR_tss_hash_num_table_alloc_bytes =
            cur->MR_tss_hash_num_table_alloc_bytes;
        prev->MR_tss_hash_num_link_chunk_allocs =
            cur->MR_tss_hash_num_link_chunk_allocs;
        prev->MR_tss_hash_num_link_chunk_alloc_bytes =
            cur->MR_tss_hash_num_link_chunk_alloc_bytes;
        prev->MR_tss_hash_num_key_compares_not_dupl =
            cur->MR_tss_hash_num_key_compares_not_dupl;
        prev->MR_tss_hash_num_key_compares_dupl =
            cur->MR_tss_hash_num_key_compares_dupl;
        prev->MR_tss_hash_num_resizes =
            cur->MR_tss_hash_num_resizes;
        prev->MR_tss_hash_resize_old_entries =
            cur->MR_tss_hash_resize_old_entries;
        prev->MR_tss_hash_resize_new_entries =
            cur->MR_tss_hash_resize_new_entries;

        prev->MR_tss_enum_num_node_allocs =
            cur->MR_tss_enum_num_node_allocs;
        prev->MR_tss_enum_num_node_alloc_bytes =
            cur->MR_tss_enum_num_node_alloc_bytes;

        prev->MR_tss_du_num_node_allocs =
            cur->MR_tss_du_num_node_allocs;
        prev->MR_tss_du_num_node_alloc_bytes =
            cur->MR_tss_du_num_node_alloc_bytes;
        prev->MR_tss_du_num_arg_lookups =
            cur->MR_tss_du_num_arg_lookups;
        prev->MR_tss_du_num_exist_lookups =
            cur->MR_tss_du_num_exist_lookups;

        prev->MR_tss_start_num_allocs =
            cur->MR_tss_start_num_allocs;
        prev->MR_tss_start_num_alloc_bytes =
            cur->MR_tss_start_num_alloc_bytes;
    }


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
mercury__table_statistics__get_one_table_step_stat_details_26_p_0(
  MR_Box StepDescsPtr_1,
  MR_Box StatsStructPtr_2,
  MR_Integer StepNum_3,
  MR_String * VarName_4,
  MR_Integer * NumLookups_5,
  MR_Integer * NumLookupsIsDupl_6,
  MR_Integer * KindInt_7,
  MR_Integer * HashTableAllocs_8,
  MR_Integer * HashTableBytes_9,
  MR_Integer * HashLinkChunkAllocs_10,
  MR_Integer * HashLinkChunkBytes_11,
  MR_Integer * HashKeyComparesNotDupl_12,
  MR_Integer * HashKeyComparesIsDupl_13,
  MR_Integer * HashResizes_14,
  MR_Integer * HashResizeOldEntries_15,
  MR_Integer * HashResizeNewEntries_16,
  MR_Integer * EnumNodeAllocs_17,
  MR_Integer * EnumNodeBytes_18,
  MR_Integer * DuNodeAllocs_19,
  MR_Integer * DuNodeBytes_20,
  MR_Integer * DuArgLookups_21,
  MR_Integer * DuExistLookups_22,
  MR_Integer * StartAllocs_23,
  MR_Integer * StartBytes_24)
{
{
#define MR_PROC_LABEL mercury__table_statistics__get_one_table_step_stat_details_26_p_0

	const MR_TableStepDesc * StepDescsPtr;
	MR_TableStats * StatsStructPtr;
	MR_Integer StepNum;
	MR_String VarName;
	MR_Integer NumLookups;
	MR_Integer NumLookupsIsDupl;
	MR_Integer KindInt;
	MR_Integer HashTableAllocs;
	MR_Integer HashTableBytes;
	MR_Integer HashLinkChunkAllocs;
	MR_Integer HashLinkChunkBytes;
	MR_Integer HashKeyComparesNotDupl;
	MR_Integer HashKeyComparesIsDupl;
	MR_Integer HashResizes;
	MR_Integer HashResizeOldEntries;
	MR_Integer HashResizeNewEntries;
	MR_Integer EnumNodeAllocs;
	MR_Integer EnumNodeBytes;
	MR_Integer DuNodeAllocs;
	MR_Integer DuNodeBytes;
	MR_Integer DuArgLookups;
	MR_Integer DuExistLookups;
	MR_Integer StartAllocs;
	MR_Integer StartBytes;

	StepDescsPtr = (const MR_TableStepDesc *)StepDescsPtr_1 ;
	StatsStructPtr = (MR_TableStats *)StatsStructPtr_2 ;
	StepNum = StepNum_3 ;
		{

    const MR_TableStepStats *ptr;

    ptr = &(StatsStructPtr->MR_ts_steps[StepNum]);

    // The casts are to discard const.
    VarName = (MR_String) (MR_Integer) StepDescsPtr[StepNum].MR_tsd_var_name;

    NumLookups =                ptr->MR_tss_num_lookups;
    NumLookupsIsDupl =          ptr->MR_tss_num_lookups_is_dupl;

    KindInt = (MR_Integer)      ptr->MR_tss_detail_kind;

    HashTableAllocs =           ptr->MR_tss_hash_num_table_allocs;
    HashTableBytes =            ptr->MR_tss_hash_num_table_alloc_bytes;
    HashLinkChunkAllocs =       ptr->MR_tss_hash_num_link_chunk_allocs;
    HashLinkChunkBytes =        ptr->MR_tss_hash_num_link_chunk_alloc_bytes;
    HashKeyComparesNotDupl =    ptr->MR_tss_hash_num_key_compares_not_dupl;
    HashKeyComparesIsDupl =     ptr->MR_tss_hash_num_key_compares_dupl;
    HashResizes =               ptr->MR_tss_hash_num_resizes;
    HashResizeOldEntries =      ptr->MR_tss_hash_resize_old_entries;
    HashResizeNewEntries =      ptr->MR_tss_hash_resize_new_entries;

    EnumNodeAllocs =            ptr->MR_tss_enum_num_node_allocs;
    EnumNodeBytes =             ptr->MR_tss_enum_num_node_alloc_bytes;

    DuNodeAllocs =              ptr->MR_tss_du_num_node_allocs;
    DuNodeBytes =               ptr->MR_tss_du_num_node_alloc_bytes;
    DuArgLookups =              ptr->MR_tss_du_num_arg_lookups;
    DuExistLookups =            ptr->MR_tss_du_num_exist_lookups;

    StartAllocs =               ptr->MR_tss_start_num_allocs;
    StartBytes =                ptr->MR_tss_start_num_alloc_bytes;


		;}
#undef MR_PROC_LABEL
	*VarName_4  = VarName;
	*NumLookups_5  = NumLookups;
	*NumLookupsIsDupl_6  = NumLookupsIsDupl;
	*KindInt_7  = KindInt;
	*HashTableAllocs_8  = HashTableAllocs;
	*HashTableBytes_9  = HashTableBytes;
	*HashLinkChunkAllocs_10  = HashLinkChunkAllocs;
	*HashLinkChunkBytes_11  = HashLinkChunkBytes;
	*HashKeyComparesNotDupl_12  = HashKeyComparesNotDupl;
	*HashKeyComparesIsDupl_13  = HashKeyComparesIsDupl;
	*HashResizes_14  = HashResizes;
	*HashResizeOldEntries_15  = HashResizeOldEntries;
	*HashResizeNewEntries_16  = HashResizeNewEntries;
	*EnumNodeAllocs_17  = EnumNodeAllocs;
	*EnumNodeBytes_18  = EnumNodeBytes;
	*DuNodeAllocs_19  = DuNodeAllocs;
	*DuNodeBytes_20  = DuNodeBytes;
	*DuArgLookups_21  = DuArgLookups;
	*DuExistLookups_22  = DuExistLookups;
	*StartAllocs_23  = StartAllocs;
	*StartBytes_24  = StartBytes;
}
}

static void MR_CALL 
mercury__table_statistics__get_one_table_overall_stats_5_p_0(
  MR_Box StatsPtr_1,
  MR_Integer * NumLookups_2,
  MR_Integer * NumLookupsIsDupl_3)
{
{
#define MR_PROC_LABEL mercury__table_statistics__get_one_table_overall_stats_5_p_0

	MR_TableStats * StatsPtr;
	MR_Integer NumLookups;
	MR_Integer NumLookupsIsDupl;

	StatsPtr = (MR_TableStats *)StatsPtr_1 ;
		{

    NumLookups = StatsPtr->MR_ts_num_lookups;
    NumLookupsIsDupl = StatsPtr->MR_ts_num_lookups_is_dupl;


		;}
#undef MR_PROC_LABEL
	*NumLookups_2  = NumLookups;
	*NumLookupsIsDupl_3  = NumLookupsIsDupl;
}
}

static void MR_CALL 
mercury__table_statistics__get_proc_info_direct_fields_12_p_0(
  MR_Box Info_1,
  MR_Integer * HasAnswerTable_2,
  MR_Integer * NumInputs_3,
  MR_Integer * NumOutputs_4,
  MR_Box * InputStepDescsPtr_5,
  MR_Box * OutputStepDescsPtr_6,
  MR_Box * CurCallStatsPtr_7,
  MR_Box * PrevCallStatsPtr_8,
  MR_Box * CurAnswerStatsPtr_9,
  MR_Box * PrevAnswerStatsPtr_10)
{
{
#define MR_PROC_LABEL mercury__table_statistics__get_proc_info_direct_fields_12_p_0

	MR_ProcTableInfoPtr Info;
	MR_Integer HasAnswerTable;
	MR_Integer NumInputs;
	MR_Integer NumOutputs;
	const MR_TableStepDesc * InputStepDescsPtr;
	const MR_TableStepDesc * OutputStepDescsPtr;
	MR_TableStats * CurCallStatsPtr;
	MR_TableStats * PrevCallStatsPtr;
	MR_TableStats * CurAnswerStatsPtr;
	MR_TableStats * PrevAnswerStatsPtr;

	Info = (MR_ProcTableInfoPtr)Info_1 ;
		{

    HasAnswerTable = ( Info->MR_pt_has_answer_table ? 1 : 0 );
    NumInputs = Info->MR_pt_num_inputs;
    NumOutputs = Info->MR_pt_num_outputs;
    InputStepDescsPtr = Info->MR_pt_steps_desc[MR_TABLE_CALL_TABLE];
    OutputStepDescsPtr = Info->MR_pt_steps_desc[MR_TABLE_ANSWER_TABLE];
    CurCallStatsPtr = &(Info->
        MR_pt_stats[MR_TABLE_CALL_TABLE][MR_TABLE_STATS_CURR]);
    PrevCallStatsPtr = &(Info->
        MR_pt_stats[MR_TABLE_CALL_TABLE][MR_TABLE_STATS_PREV]);
    CurAnswerStatsPtr = &(Info->
        MR_pt_stats[MR_TABLE_ANSWER_TABLE][MR_TABLE_STATS_CURR]);
    PrevAnswerStatsPtr = &(Info->
        MR_pt_stats[MR_TABLE_ANSWER_TABLE][MR_TABLE_STATS_PREV]);


		;}
#undef MR_PROC_LABEL
	*HasAnswerTable_2  = HasAnswerTable;
	*NumInputs_3  = NumInputs;
	*NumOutputs_4  = NumOutputs;
	*InputStepDescsPtr_5  = (MR_Box) InputStepDescsPtr;
	*OutputStepDescsPtr_6  = (MR_Box) OutputStepDescsPtr;
	*CurCallStatsPtr_7  = (MR_Box) CurCallStatsPtr;
	*PrevCallStatsPtr_8  = (MR_Box) PrevCallStatsPtr;
	*CurAnswerStatsPtr_9  = (MR_Box) CurAnswerStatsPtr;
	*PrevAnswerStatsPtr_10  = (MR_Box) PrevAnswerStatsPtr;
}
}

static void MR_CALL 
mercury__table_statistics__get_tabling_stats_4_p_0(
  MR_Box Info_5,
  MR_Word * Statistics_6)
{
  MR_bool succeeded;
  MR_Integer HasAnswerTable_8;
  MR_Integer NumInputs_9;
  MR_Integer NumOutputs_10;
  MR_Box InputStepDescsPtr_11;
  MR_Box OutputStepDescsPtr_12;
  MR_Box CurCallStatsPtr_13;
  MR_Box PrevCallStatsPtr_14;
  MR_Box CurAnswerStatsPtr_15;
  MR_Box PrevAnswerStatsPtr_16;
  MR_Word CurCallStats_17;
  MR_Word PrevCallStats_18;
  MR_Word CallStats_19;
  MR_Word MaybeAnswerStats_23;
  MR_Integer NumLookups_41;
  MR_Integer NumLookupsIsDupl_42;
  MR_Word StepStats_43;
  MR_Integer NumLookups_55;
  MR_Integer NumLookupsIsDupl_56;
  MR_Word StepStats_57;

{
#define MR_PROC_LABEL mercury__table_statistics__get_tabling_stats_4_p_0

	MR_ProcTableInfoPtr Info;
	MR_Integer HasAnswerTable;
	MR_Integer NumInputs;
	MR_Integer NumOutputs;
	const MR_TableStepDesc * InputStepDescsPtr;
	const MR_TableStepDesc * OutputStepDescsPtr;
	MR_TableStats * CurCallStatsPtr;
	MR_TableStats * PrevCallStatsPtr;
	MR_TableStats * CurAnswerStatsPtr;
	MR_TableStats * PrevAnswerStatsPtr;

	Info = (MR_ProcTableInfoPtr)Info_5 ;
		{

    HasAnswerTable = ( Info->MR_pt_has_answer_table ? 1 : 0 );
    NumInputs = Info->MR_pt_num_inputs;
    NumOutputs = Info->MR_pt_num_outputs;
    InputStepDescsPtr = Info->MR_pt_steps_desc[MR_TABLE_CALL_TABLE];
    OutputStepDescsPtr = Info->MR_pt_steps_desc[MR_TABLE_ANSWER_TABLE];
    CurCallStatsPtr = &(Info->
        MR_pt_stats[MR_TABLE_CALL_TABLE][MR_TABLE_STATS_CURR]);
    PrevCallStatsPtr = &(Info->
        MR_pt_stats[MR_TABLE_CALL_TABLE][MR_TABLE_STATS_PREV]);
    CurAnswerStatsPtr = &(Info->
        MR_pt_stats[MR_TABLE_ANSWER_TABLE][MR_TABLE_STATS_CURR]);
    PrevAnswerStatsPtr = &(Info->
        MR_pt_stats[MR_TABLE_ANSWER_TABLE][MR_TABLE_STATS_PREV]);


		;}
#undef MR_PROC_LABEL
	HasAnswerTable_8  = HasAnswerTable;
	NumInputs_9  = NumInputs;
	NumOutputs_10  = NumOutputs;
	InputStepDescsPtr_11  = (MR_Box) InputStepDescsPtr;
	OutputStepDescsPtr_12  = (MR_Box) OutputStepDescsPtr;
	CurCallStatsPtr_13  = (MR_Box) CurCallStatsPtr;
	PrevCallStatsPtr_14  = (MR_Box) PrevCallStatsPtr;
	CurAnswerStatsPtr_15  = (MR_Box) CurAnswerStatsPtr;
	PrevAnswerStatsPtr_16  = (MR_Box) PrevAnswerStatsPtr;
}
{
#define MR_PROC_LABEL mercury__table_statistics__get_tabling_stats_4_p_0

	MR_TableStats * StatsPtr;
	MR_Integer NumLookups;
	MR_Integer NumLookupsIsDupl;

	StatsPtr = (MR_TableStats *)CurCallStatsPtr_13 ;
		{

    NumLookups = StatsPtr->MR_ts_num_lookups;
    NumLookupsIsDupl = StatsPtr->MR_ts_num_lookups_is_dupl;


		;}
#undef MR_PROC_LABEL
	NumLookups_41  = NumLookups;
	NumLookupsIsDupl_42  = NumLookupsIsDupl;
}
  mercury__table_statistics__get_one_table_stats_step_loop_8_p_0(InputStepDescsPtr_11, CurCallStatsPtr_13, (MR_Integer) 0, NumInputs_9, (MR_Word) ((MR_Unsigned) 0U), &StepStats_43);
  {
    CurCallStats_17 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), CurCallStats_17, 0) = ((MR_Box) (NumLookups_41));
    MR_hl_field(MR_mktag(0), CurCallStats_17, 1) = ((MR_Box) (NumLookupsIsDupl_42));
    MR_hl_field(MR_mktag(0), CurCallStats_17, 2) = ((MR_Box) (StepStats_43));
  }
{
#define MR_PROC_LABEL mercury__table_statistics__get_tabling_stats_4_p_0

	MR_TableStats * StatsPtr;
	MR_Integer NumLookups;
	MR_Integer NumLookupsIsDupl;

	StatsPtr = (MR_TableStats *)PrevCallStatsPtr_14 ;
		{

    NumLookups = StatsPtr->MR_ts_num_lookups;
    NumLookupsIsDupl = StatsPtr->MR_ts_num_lookups_is_dupl;


		;}
#undef MR_PROC_LABEL
	NumLookups_55  = NumLookups;
	NumLookupsIsDupl_56  = NumLookupsIsDupl;
}
  mercury__table_statistics__get_one_table_stats_step_loop_8_p_0(InputStepDescsPtr_11, PrevCallStatsPtr_14, (MR_Integer) 0, NumInputs_9, (MR_Word) ((MR_Unsigned) 0U), &StepStats_57);
  {
    PrevCallStats_18 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), PrevCallStats_18, 0) = ((MR_Box) (NumLookups_55));
    MR_hl_field(MR_mktag(0), PrevCallStats_18, 1) = ((MR_Box) (NumLookupsIsDupl_56));
    MR_hl_field(MR_mktag(0), PrevCallStats_18, 2) = ((MR_Box) (StepStats_57));
  }
  {
    CallStats_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), CallStats_19, 0) = ((MR_Box) (CurCallStats_17));
    MR_hl_field(MR_mktag(0), CallStats_19, 1) = ((MR_Box) (PrevCallStats_18));
  }
{
#define MR_PROC_LABEL mercury__table_statistics__get_tabling_stats_4_p_0

	MR_TableStats * CurPtr;
	MR_TableStats * PrevPtr;
	MR_Integer NumSteps;

	CurPtr = (MR_TableStats *)CurCallStatsPtr_13 ;
	PrevPtr = (MR_TableStats *)PrevCallStatsPtr_14 ;
	NumSteps = NumInputs_9 ;
		{

    MR_TableStepStats   *cur;
    MR_TableStepStats   *prev;
    int                 i;

    PrevPtr->MR_ts_num_lookups = CurPtr->MR_ts_num_lookups;
    PrevPtr->MR_ts_num_lookups_is_dupl = CurPtr->MR_ts_num_lookups_is_dupl;

    for (i = 0; i < NumSteps; i++) {
        cur = &(CurPtr->MR_ts_steps[i]);
        prev = &(PrevPtr->MR_ts_steps[i]);

        prev->MR_tss_num_lookups =
            cur->MR_tss_num_lookups;
        prev->MR_tss_num_lookups_is_dupl =
            cur->MR_tss_num_lookups_is_dupl;

        prev->MR_tss_hash_num_table_allocs =
            cur->MR_tss_hash_num_table_allocs;
        prev->MR_tss_hash_num_table_alloc_bytes =
            cur->MR_tss_hash_num_table_alloc_bytes;
        prev->MR_tss_hash_num_link_chunk_allocs =
            cur->MR_tss_hash_num_link_chunk_allocs;
        prev->MR_tss_hash_num_link_chunk_alloc_bytes =
            cur->MR_tss_hash_num_link_chunk_alloc_bytes;
        prev->MR_tss_hash_num_key_compares_not_dupl =
            cur->MR_tss_hash_num_key_compares_not_dupl;
        prev->MR_tss_hash_num_key_compares_dupl =
            cur->MR_tss_hash_num_key_compares_dupl;
        prev->MR_tss_hash_num_resizes =
            cur->MR_tss_hash_num_resizes;
        prev->MR_tss_hash_resize_old_entries =
            cur->MR_tss_hash_resize_old_entries;
        prev->MR_tss_hash_resize_new_entries =
            cur->MR_tss_hash_resize_new_entries;

        prev->MR_tss_enum_num_node_allocs =
            cur->MR_tss_enum_num_node_allocs;
        prev->MR_tss_enum_num_node_alloc_bytes =
            cur->MR_tss_enum_num_node_alloc_bytes;

        prev->MR_tss_du_num_node_allocs =
            cur->MR_tss_du_num_node_allocs;
        prev->MR_tss_du_num_node_alloc_bytes =
            cur->MR_tss_du_num_node_alloc_bytes;
        prev->MR_tss_du_num_arg_lookups =
            cur->MR_tss_du_num_arg_lookups;
        prev->MR_tss_du_num_exist_lookups =
            cur->MR_tss_du_num_exist_lookups;

        prev->MR_tss_start_num_allocs =
            cur->MR_tss_start_num_allocs;
        prev->MR_tss_start_num_alloc_bytes =
            cur->MR_tss_start_num_alloc_bytes;
    }


		;}
#undef MR_PROC_LABEL
}
  succeeded = (HasAnswerTable_8 > (MR_Integer) 0);
  if (succeeded)
  {
    MR_Word CurAnswerStats_20;
    MR_Word PrevAnswerStats_21;
    MR_Word AnswerStats_22;
    MR_Integer NumLookups_69;
    MR_Integer NumLookupsIsDupl_70;
    MR_Word StepStats_71;
    MR_Integer NumLookups_83;
    MR_Integer NumLookupsIsDupl_84;
    MR_Word StepStats_85;

{
#define MR_PROC_LABEL mercury__table_statistics__get_tabling_stats_4_p_0

	MR_TableStats * StatsPtr;
	MR_Integer NumLookups;
	MR_Integer NumLookupsIsDupl;

	StatsPtr = (MR_TableStats *)CurAnswerStatsPtr_15 ;
		{

    NumLookups = StatsPtr->MR_ts_num_lookups;
    NumLookupsIsDupl = StatsPtr->MR_ts_num_lookups_is_dupl;


		;}
#undef MR_PROC_LABEL
	NumLookups_69  = NumLookups;
	NumLookupsIsDupl_70  = NumLookupsIsDupl;
}
    mercury__table_statistics__get_one_table_stats_step_loop_8_p_0(OutputStepDescsPtr_12, CurAnswerStatsPtr_15, (MR_Integer) 0, NumOutputs_10, (MR_Word) ((MR_Unsigned) 0U), &StepStats_71);
    {
      CurAnswerStats_20 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), CurAnswerStats_20, 0) = ((MR_Box) (NumLookups_69));
      MR_hl_field(MR_mktag(0), CurAnswerStats_20, 1) = ((MR_Box) (NumLookupsIsDupl_70));
      MR_hl_field(MR_mktag(0), CurAnswerStats_20, 2) = ((MR_Box) (StepStats_71));
    }
{
#define MR_PROC_LABEL mercury__table_statistics__get_tabling_stats_4_p_0

	MR_TableStats * StatsPtr;
	MR_Integer NumLookups;
	MR_Integer NumLookupsIsDupl;

	StatsPtr = (MR_TableStats *)PrevAnswerStatsPtr_16 ;
		{

    NumLookups = StatsPtr->MR_ts_num_lookups;
    NumLookupsIsDupl = StatsPtr->MR_ts_num_lookups_is_dupl;


		;}
#undef MR_PROC_LABEL
	NumLookups_83  = NumLookups;
	NumLookupsIsDupl_84  = NumLookupsIsDupl;
}
    mercury__table_statistics__get_one_table_stats_step_loop_8_p_0(OutputStepDescsPtr_12, PrevAnswerStatsPtr_16, (MR_Integer) 0, NumOutputs_10, (MR_Word) ((MR_Unsigned) 0U), &StepStats_85);
    {
      PrevAnswerStats_21 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PrevAnswerStats_21, 0) = ((MR_Box) (NumLookups_83));
      MR_hl_field(MR_mktag(0), PrevAnswerStats_21, 1) = ((MR_Box) (NumLookupsIsDupl_84));
      MR_hl_field(MR_mktag(0), PrevAnswerStats_21, 2) = ((MR_Box) (StepStats_85));
    }
    {
      AnswerStats_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), AnswerStats_22, 0) = ((MR_Box) (CurAnswerStats_20));
      MR_hl_field(MR_mktag(0), AnswerStats_22, 1) = ((MR_Box) (PrevAnswerStats_21));
    }
{
#define MR_PROC_LABEL mercury__table_statistics__get_tabling_stats_4_p_0

	MR_TableStats * CurPtr;
	MR_TableStats * PrevPtr;
	MR_Integer NumSteps;

	CurPtr = (MR_TableStats *)CurAnswerStatsPtr_15 ;
	PrevPtr = (MR_TableStats *)PrevAnswerStatsPtr_16 ;
	NumSteps = NumOutputs_10 ;
		{

    MR_TableStepStats   *cur;
    MR_TableStepStats   *prev;
    int                 i;

    PrevPtr->MR_ts_num_lookups = CurPtr->MR_ts_num_lookups;
    PrevPtr->MR_ts_num_lookups_is_dupl = CurPtr->MR_ts_num_lookups_is_dupl;

    for (i = 0; i < NumSteps; i++) {
        cur = &(CurPtr->MR_ts_steps[i]);
        prev = &(PrevPtr->MR_ts_steps[i]);

        prev->MR_tss_num_lookups =
            cur->MR_tss_num_lookups;
        prev->MR_tss_num_lookups_is_dupl =
            cur->MR_tss_num_lookups_is_dupl;

        prev->MR_tss_hash_num_table_allocs =
            cur->MR_tss_hash_num_table_allocs;
        prev->MR_tss_hash_num_table_alloc_bytes =
            cur->MR_tss_hash_num_table_alloc_bytes;
        prev->MR_tss_hash_num_link_chunk_allocs =
            cur->MR_tss_hash_num_link_chunk_allocs;
        prev->MR_tss_hash_num_link_chunk_alloc_bytes =
            cur->MR_tss_hash_num_link_chunk_alloc_bytes;
        prev->MR_tss_hash_num_key_compares_not_dupl =
            cur->MR_tss_hash_num_key_compares_not_dupl;
        prev->MR_tss_hash_num_key_compares_dupl =
            cur->MR_tss_hash_num_key_compares_dupl;
        prev->MR_tss_hash_num_resizes =
            cur->MR_tss_hash_num_resizes;
        prev->MR_tss_hash_resize_old_entries =
            cur->MR_tss_hash_resize_old_entries;
        prev->MR_tss_hash_resize_new_entries =
            cur->MR_tss_hash_resize_new_entries;

        prev->MR_tss_enum_num_node_allocs =
            cur->MR_tss_enum_num_node_allocs;
        prev->MR_tss_enum_num_node_alloc_bytes =
            cur->MR_tss_enum_num_node_alloc_bytes;

        prev->MR_tss_du_num_node_allocs =
            cur->MR_tss_du_num_node_allocs;
        prev->MR_tss_du_num_node_alloc_bytes =
            cur->MR_tss_du_num_node_alloc_bytes;
        prev->MR_tss_du_num_arg_lookups =
            cur->MR_tss_du_num_arg_lookups;
        prev->MR_tss_du_num_exist_lookups =
            cur->MR_tss_du_num_exist_lookups;

        prev->MR_tss_start_num_allocs =
            cur->MR_tss_start_num_allocs;
        prev->MR_tss_start_num_alloc_bytes =
            cur->MR_tss_start_num_alloc_bytes;
    }


		;}
#undef MR_PROC_LABEL
}
    {
      MaybeAnswerStats_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybeAnswerStats_23, 0) = ((MR_Box) (AnswerStats_22));
    }
  }
  else
    MaybeAnswerStats_23 = (MR_Word) ((MR_Unsigned) 0U);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Statistics_6 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (CallStats_19));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MaybeAnswerStats_23));
  }
}

static void MR_CALL 
mercury__table_statistics__get_one_table_stats_step_loop_8_p_0(
  MR_Box StepDescsPtr_9,
  MR_Box StatsPtr_10,
  MR_Integer CurStep_11,
  MR_Integer NumSteps_12,
  MR_Word STATE_VARIABLE_StepStats_0_15,
  MR_Word * STATE_VARIABLE_StepStats_16)
{
  MR_bool succeeded = (CurStep_11 >= NumSteps_12);

  if (succeeded)
    *STATE_VARIABLE_StepStats_16 = STATE_VARIABLE_StepStats_0_15;
  else
  {
    MR_Word StepStats_13;
    MR_Integer Var_19 = (MR_Integer) ((MR_Unsigned) CurStep_11 + (MR_Unsigned) 1);
    MR_Word STATE_VARIABLE_StepStats_20_20;
    MR_String VarName_32;
    MR_Integer NumLookups_33;
    MR_Integer NumLookupsIsDupl_34;
    MR_Integer KindInt_35;
    MR_Integer HashTableAllocs_36;
    MR_Integer HashTableBytes_37;
    MR_Integer HashLinkChunkAllocs_38;
    MR_Integer HashLinkChunkBytes_39;
    MR_Integer HashKeyComparesNotDupl_40;
    MR_Integer HashKeyComparesIsDupl_41;
    MR_Integer HashResizes_42;
    MR_Integer HashResizeOldEntries_43;
    MR_Integer HashResizeNewEntries_44;
    MR_Integer EnumNodeAllocs_45;
    MR_Integer EnumNodeBytes_46;
    MR_Integer DuNodeAllocs_47;
    MR_Integer DuNodeBytes_48;
    MR_Integer DuArgLookups_49;
    MR_Integer DuExistLookups_50;
    MR_Integer StartAllocs_51;
    MR_Integer StartBytes_52;
    MR_Word Details_53;

    mercury__table_statistics__get_one_table_stats_step_loop_8_p_0(StepDescsPtr_9, StatsPtr_10, Var_19, NumSteps_12, STATE_VARIABLE_StepStats_0_15, &STATE_VARIABLE_StepStats_20_20);
{
#define MR_PROC_LABEL mercury__table_statistics__get_one_table_stats_step_loop_8_p_0

	const MR_TableStepDesc * StepDescsPtr;
	MR_TableStats * StatsStructPtr;
	MR_Integer StepNum;
	MR_String VarName;
	MR_Integer NumLookups;
	MR_Integer NumLookupsIsDupl;
	MR_Integer KindInt;
	MR_Integer HashTableAllocs;
	MR_Integer HashTableBytes;
	MR_Integer HashLinkChunkAllocs;
	MR_Integer HashLinkChunkBytes;
	MR_Integer HashKeyComparesNotDupl;
	MR_Integer HashKeyComparesIsDupl;
	MR_Integer HashResizes;
	MR_Integer HashResizeOldEntries;
	MR_Integer HashResizeNewEntries;
	MR_Integer EnumNodeAllocs;
	MR_Integer EnumNodeBytes;
	MR_Integer DuNodeAllocs;
	MR_Integer DuNodeBytes;
	MR_Integer DuArgLookups;
	MR_Integer DuExistLookups;
	MR_Integer StartAllocs;
	MR_Integer StartBytes;

	StepDescsPtr = (const MR_TableStepDesc *)StepDescsPtr_9 ;
	StatsStructPtr = (MR_TableStats *)StatsPtr_10 ;
	StepNum = CurStep_11 ;
		{

    const MR_TableStepStats *ptr;

    ptr = &(StatsStructPtr->MR_ts_steps[StepNum]);

    // The casts are to discard const.
    VarName = (MR_String) (MR_Integer) StepDescsPtr[StepNum].MR_tsd_var_name;

    NumLookups =                ptr->MR_tss_num_lookups;
    NumLookupsIsDupl =          ptr->MR_tss_num_lookups_is_dupl;

    KindInt = (MR_Integer)      ptr->MR_tss_detail_kind;

    HashTableAllocs =           ptr->MR_tss_hash_num_table_allocs;
    HashTableBytes =            ptr->MR_tss_hash_num_table_alloc_bytes;
    HashLinkChunkAllocs =       ptr->MR_tss_hash_num_link_chunk_allocs;
    HashLinkChunkBytes =        ptr->MR_tss_hash_num_link_chunk_alloc_bytes;
    HashKeyComparesNotDupl =    ptr->MR_tss_hash_num_key_compares_not_dupl;
    HashKeyComparesIsDupl =     ptr->MR_tss_hash_num_key_compares_dupl;
    HashResizes =               ptr->MR_tss_hash_num_resizes;
    HashResizeOldEntries =      ptr->MR_tss_hash_resize_old_entries;
    HashResizeNewEntries =      ptr->MR_tss_hash_resize_new_entries;

    EnumNodeAllocs =            ptr->MR_tss_enum_num_node_allocs;
    EnumNodeBytes =             ptr->MR_tss_enum_num_node_alloc_bytes;

    DuNodeAllocs =              ptr->MR_tss_du_num_node_allocs;
    DuNodeBytes =               ptr->MR_tss_du_num_node_alloc_bytes;
    DuArgLookups =              ptr->MR_tss_du_num_arg_lookups;
    DuExistLookups =            ptr->MR_tss_du_num_exist_lookups;

    StartAllocs =               ptr->MR_tss_start_num_allocs;
    StartBytes =                ptr->MR_tss_start_num_alloc_bytes;


		;}
#undef MR_PROC_LABEL
	VarName_32  = VarName;
	NumLookups_33  = NumLookups;
	NumLookupsIsDupl_34  = NumLookupsIsDupl;
	KindInt_35  = KindInt;
	HashTableAllocs_36  = HashTableAllocs;
	HashTableBytes_37  = HashTableBytes;
	HashLinkChunkAllocs_38  = HashLinkChunkAllocs;
	HashLinkChunkBytes_39  = HashLinkChunkBytes;
	HashKeyComparesNotDupl_40  = HashKeyComparesNotDupl;
	HashKeyComparesIsDupl_41  = HashKeyComparesIsDupl;
	HashResizes_42  = HashResizes;
	HashResizeOldEntries_43  = HashResizeOldEntries;
	HashResizeNewEntries_44  = HashResizeNewEntries;
	EnumNodeAllocs_45  = EnumNodeAllocs;
	EnumNodeBytes_46  = EnumNodeBytes;
	DuNodeAllocs_47  = DuNodeAllocs;
	DuNodeBytes_48  = DuNodeBytes;
	DuArgLookups_49  = DuArgLookups;
	DuExistLookups_50  = DuExistLookups;
	StartAllocs_51  = StartAllocs;
	StartBytes_52  = StartBytes;
}
    succeeded = (KindInt_35 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = (EnumNodeAllocs_45 == (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = (EnumNodeBytes_46 == (MR_Integer) 0);
        if (succeeded)
        {
          succeeded = (DuNodeAllocs_47 == (MR_Integer) 0);
          if (succeeded)
          {
            succeeded = (DuNodeBytes_48 == (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = (DuArgLookups_49 == (MR_Integer) 0);
              if (succeeded)
              {
                succeeded = (DuExistLookups_50 == (MR_Integer) 0);
                if (succeeded)
                {
                  succeeded = (StartAllocs_51 == (MR_Integer) 0);
                  if (succeeded)
                    succeeded = (StartBytes_52 == (MR_Integer) 0);
                }
              }
            }
          }
        }
      }
      if (succeeded)
        {
          Details_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Details_53, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Details_53, 1) = ((MR_Box) (HashTableAllocs_36));
          MR_hl_field(MR_mktag(3), Details_53, 2) = ((MR_Box) (HashTableBytes_37));
          MR_hl_field(MR_mktag(3), Details_53, 3) = ((MR_Box) (HashLinkChunkAllocs_38));
          MR_hl_field(MR_mktag(3), Details_53, 4) = ((MR_Box) (HashLinkChunkBytes_39));
          MR_hl_field(MR_mktag(3), Details_53, 5) = ((MR_Box) (HashKeyComparesNotDupl_40));
          MR_hl_field(MR_mktag(3), Details_53, 6) = ((MR_Box) (HashKeyComparesIsDupl_41));
          MR_hl_field(MR_mktag(3), Details_53, 7) = ((MR_Box) (HashResizes_42));
          MR_hl_field(MR_mktag(3), Details_53, 8) = ((MR_Box) (HashResizeOldEntries_43));
          MR_hl_field(MR_mktag(3), Details_53, 9) = ((MR_Box) (HashResizeNewEntries_44));
        }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140table_statistics.get_one_table_step_stats\'/6", (MR_String) "extra counts for hash");
          return;
        }
    }
    else
    {
      succeeded = (KindInt_35 == (MR_Integer) 1);
      if (succeeded)
      {
        succeeded = (HashTableAllocs_36 == (MR_Integer) 0);
        if (succeeded)
        {
          succeeded = (HashTableBytes_37 == (MR_Integer) 0);
          if (succeeded)
          {
            succeeded = (HashLinkChunkAllocs_38 == (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = (HashLinkChunkBytes_39 == (MR_Integer) 0);
              if (succeeded)
              {
                succeeded = (HashKeyComparesNotDupl_40 == (MR_Integer) 0);
                if (succeeded)
                {
                  succeeded = (HashKeyComparesIsDupl_41 == (MR_Integer) 0);
                  if (succeeded)
                  {
                    succeeded = (HashResizes_42 == (MR_Integer) 0);
                    if (succeeded)
                    {
                      succeeded = (HashResizeOldEntries_43 == (MR_Integer) 0);
                      if (succeeded)
                      {
                        succeeded = (HashResizeNewEntries_44 == (MR_Integer) 0);
                        if (succeeded)
                        {
                          succeeded = (DuNodeAllocs_47 == (MR_Integer) 0);
                          if (succeeded)
                          {
                            succeeded = (DuNodeBytes_48 == (MR_Integer) 0);
                            if (succeeded)
                            {
                              succeeded = (DuArgLookups_49 == (MR_Integer) 0);
                              if (succeeded)
                              {
                                succeeded = (DuExistLookups_50 == (MR_Integer) 0);
                                if (succeeded)
                                {
                                  succeeded = (StartAllocs_51 == (MR_Integer) 0);
                                  if (succeeded)
                                    succeeded = (StartBytes_52 == (MR_Integer) 0);
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
        if (succeeded)
          {
            Details_53 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Details_53, 0) = ((MR_Box) (EnumNodeAllocs_45));
            MR_hl_field(MR_mktag(2), Details_53, 1) = ((MR_Box) (EnumNodeBytes_46));
          }
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140table_statistics.get_one_table_step_stats\'/6", (MR_String) "extra counts for enum");
            return;
          }
      }
      else
      {
        succeeded = (KindInt_35 == (MR_Integer) 2);
        if (succeeded)
        {
          succeeded = (HashTableAllocs_36 == (MR_Integer) 0);
          if (succeeded)
          {
            succeeded = (HashTableBytes_37 == (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = (HashLinkChunkAllocs_38 == (MR_Integer) 0);
              if (succeeded)
              {
                succeeded = (HashLinkChunkBytes_39 == (MR_Integer) 0);
                if (succeeded)
                {
                  succeeded = (HashKeyComparesNotDupl_40 == (MR_Integer) 0);
                  if (succeeded)
                  {
                    succeeded = (HashKeyComparesIsDupl_41 == (MR_Integer) 0);
                    if (succeeded)
                    {
                      succeeded = (HashResizes_42 == (MR_Integer) 0);
                      if (succeeded)
                      {
                        succeeded = (HashResizeOldEntries_43 == (MR_Integer) 0);
                        if (succeeded)
                        {
                          succeeded = (HashResizeNewEntries_44 == (MR_Integer) 0);
                          if (succeeded)
                          {
                            succeeded = (EnumNodeAllocs_45 == (MR_Integer) 0);
                            if (succeeded)
                            {
                              succeeded = (EnumNodeBytes_46 == (MR_Integer) 0);
                              if (succeeded)
                              {
                                succeeded = (DuNodeAllocs_47 == (MR_Integer) 0);
                                if (succeeded)
                                {
                                  succeeded = (DuNodeBytes_48 == (MR_Integer) 0);
                                  if (succeeded)
                                  {
                                    succeeded = (DuArgLookups_49 == (MR_Integer) 0);
                                    if (succeeded)
                                      succeeded = (DuExistLookups_50 == (MR_Integer) 0);
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
          if (succeeded)
            {
              Details_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Details_53, 0) = ((MR_Box) (StartAllocs_51));
              MR_hl_field(MR_mktag(1), Details_53, 1) = ((MR_Box) (StartBytes_52));
            }
          else
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140table_statistics.get_one_table_step_stats\'/6", (MR_String) "extra counts for start");
              return;
            }
        }
        else
        {
          succeeded = (KindInt_35 == (MR_Integer) 3);
          if (succeeded)
          {
            succeeded = (StartAllocs_51 == (MR_Integer) 0);
            if (succeeded)
              succeeded = (StartBytes_52 == (MR_Integer) 0);
            if (succeeded)
              {
                Details_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Details_53, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), Details_53, 1) = ((MR_Box) (DuNodeAllocs_47));
                MR_hl_field(MR_mktag(3), Details_53, 2) = ((MR_Box) (DuNodeBytes_48));
                MR_hl_field(MR_mktag(3), Details_53, 3) = ((MR_Box) (DuArgLookups_49));
                MR_hl_field(MR_mktag(3), Details_53, 4) = ((MR_Box) (DuExistLookups_50));
                MR_hl_field(MR_mktag(3), Details_53, 5) = ((MR_Box) (EnumNodeAllocs_45));
                MR_hl_field(MR_mktag(3), Details_53, 6) = ((MR_Box) (EnumNodeBytes_46));
                MR_hl_field(MR_mktag(3), Details_53, 7) = ((MR_Box) (HashTableAllocs_36));
                MR_hl_field(MR_mktag(3), Details_53, 8) = ((MR_Box) (HashTableBytes_37));
                MR_hl_field(MR_mktag(3), Details_53, 9) = ((MR_Box) (HashLinkChunkAllocs_38));
                MR_hl_field(MR_mktag(3), Details_53, 10) = ((MR_Box) (HashLinkChunkBytes_39));
                MR_hl_field(MR_mktag(3), Details_53, 11) = ((MR_Box) (HashKeyComparesNotDupl_40));
                MR_hl_field(MR_mktag(3), Details_53, 12) = ((MR_Box) (HashKeyComparesIsDupl_41));
                MR_hl_field(MR_mktag(3), Details_53, 13) = ((MR_Box) (HashResizes_42));
                MR_hl_field(MR_mktag(3), Details_53, 14) = ((MR_Box) (HashResizeOldEntries_43));
                MR_hl_field(MR_mktag(3), Details_53, 15) = ((MR_Box) (HashResizeNewEntries_44));
              }
            else
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140table_statistics.get_one_table_step_stats\'/6", (MR_String) "extra counts for du");
                return;
              }
          }
          else
          {
            succeeded = (KindInt_35 == (MR_Integer) 4);
            if (succeeded)
            {
              succeeded = (StartAllocs_51 == (MR_Integer) 0);
              if (succeeded)
                succeeded = (StartBytes_52 == (MR_Integer) 0);
              if (succeeded)
                {
                  Details_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Details_53, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                  MR_hl_field(MR_mktag(3), Details_53, 1) = ((MR_Box) (DuNodeAllocs_47));
                  MR_hl_field(MR_mktag(3), Details_53, 2) = ((MR_Box) (DuNodeBytes_48));
                  MR_hl_field(MR_mktag(3), Details_53, 3) = ((MR_Box) (DuArgLookups_49));
                  MR_hl_field(MR_mktag(3), Details_53, 4) = ((MR_Box) (DuExistLookups_50));
                  MR_hl_field(MR_mktag(3), Details_53, 5) = ((MR_Box) (EnumNodeAllocs_45));
                  MR_hl_field(MR_mktag(3), Details_53, 6) = ((MR_Box) (EnumNodeBytes_46));
                  MR_hl_field(MR_mktag(3), Details_53, 7) = ((MR_Box) (HashTableAllocs_36));
                  MR_hl_field(MR_mktag(3), Details_53, 8) = ((MR_Box) (HashTableBytes_37));
                  MR_hl_field(MR_mktag(3), Details_53, 9) = ((MR_Box) (HashLinkChunkAllocs_38));
                  MR_hl_field(MR_mktag(3), Details_53, 10) = ((MR_Box) (HashLinkChunkBytes_39));
                  MR_hl_field(MR_mktag(3), Details_53, 11) = ((MR_Box) (HashKeyComparesNotDupl_40));
                  MR_hl_field(MR_mktag(3), Details_53, 12) = ((MR_Box) (HashKeyComparesIsDupl_41));
                  MR_hl_field(MR_mktag(3), Details_53, 13) = ((MR_Box) (HashResizes_42));
                  MR_hl_field(MR_mktag(3), Details_53, 14) = ((MR_Box) (HashResizeOldEntries_43));
                  MR_hl_field(MR_mktag(3), Details_53, 15) = ((MR_Box) (HashResizeNewEntries_44));
                }
              else
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140table_statistics.get_one_table_step_stats\'/6", (MR_String) "extra counts for poly");
                  return;
                }
            }
            else
            {
              succeeded = (KindInt_35 == (MR_Integer) 5);
              if (succeeded)
              {
                succeeded = (HashTableAllocs_36 == (MR_Integer) 0);
                if (succeeded)
                {
                  succeeded = (HashTableBytes_37 == (MR_Integer) 0);
                  if (succeeded)
                  {
                    succeeded = (HashLinkChunkAllocs_38 == (MR_Integer) 0);
                    if (succeeded)
                    {
                      succeeded = (HashKeyComparesNotDupl_40 == (MR_Integer) 0);
                      if (succeeded)
                      {
                        succeeded = (HashKeyComparesIsDupl_41 == (MR_Integer) 0);
                        if (succeeded)
                        {
                          succeeded = (HashResizes_42 == (MR_Integer) 0);
                          if (succeeded)
                          {
                            succeeded = (HashResizeOldEntries_43 == (MR_Integer) 0);
                            if (succeeded)
                            {
                              succeeded = (HashResizeNewEntries_44 == (MR_Integer) 0);
                              if (succeeded)
                              {
                                succeeded = (EnumNodeAllocs_45 == (MR_Integer) 0);
                                if (succeeded)
                                {
                                  succeeded = (EnumNodeBytes_46 == (MR_Integer) 0);
                                  if (succeeded)
                                  {
                                    succeeded = (DuNodeAllocs_47 == (MR_Integer) 0);
                                    if (succeeded)
                                    {
                                      succeeded = (DuNodeBytes_48 == (MR_Integer) 0);
                                      if (succeeded)
                                      {
                                        succeeded = (DuArgLookups_49 == (MR_Integer) 0);
                                        if (succeeded)
                                        {
                                          succeeded = (DuExistLookups_50 == (MR_Integer) 0);
                                          if (succeeded)
                                          {
                                            succeeded = (StartAllocs_51 == (MR_Integer) 0);
                                            if (succeeded)
                                              succeeded = (StartBytes_52 == (MR_Integer) 0);
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
                }
                if (succeeded)
                  Details_53 = (MR_Word) ((MR_Unsigned) 0U);
                else
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140table_statistics.get_one_table_step_stats\'/6", (MR_String) "extra counts for none");
                    return;
                  }
              }
              else
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140table_statistics.get_one_table_step_stats\'/6", (MR_String) "unexpected detail kind");
                  return;
                }
            }
          }
        }
      }
    }
    {
      StepStats_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), StepStats_13, 0) = ((MR_Box) (VarName_32));
      MR_hl_field(MR_mktag(0), StepStats_13, 1) = ((MR_Box) (NumLookups_33));
      MR_hl_field(MR_mktag(0), StepStats_13, 2) = ((MR_Box) (NumLookupsIsDupl_34));
      MR_hl_field(MR_mktag(0), StepStats_13, 3) = ((MR_Box) (Details_53));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_StepStats_16 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (StepStats_13));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_StepStats_20_20));
    }
  }
}

MR_Word MR_CALL 
mercury__table_statistics__dummy_proc_table_statistics_0_f_0(void)
{
  return (MR_Word) (&mercury__table_statistics_scalar_common_1[3]);
}

void MR_CALL 
mercury__table_statistics__write_table_stats_3_p_0(
  MR_Word Stats_4)
{
  MR_Word OutStream_6;
  MR_Box Var_13;

{
#define MR_PROC_LABEL mercury__table_statistics__write_table_stats_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Var_13  = (MR_Box) Stream;
}
  OutStream_6 = (MR_Word) (Var_13);
  mercury__table_statistics__write_table_stats_4_p_0(OutStream_6, Stats_4);
}

void MR_CALL 
mercury__table_statistics__write_table_stats_4_p_0(
  MR_Word OutStream_5,
  MR_Word Stats_6)
{
  MR_bool succeeded;
  MR_Integer Lookups_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Stats_6, (MR_Integer) 0))));
  MR_Integer LookupsIsDupl_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Stats_6, (MR_Integer) 1))));
  MR_Word Steps_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Stats_6, (MR_Integer) 2))));
  MR_Integer LookupsNotDupl_11 = (MR_Integer) ((MR_Unsigned) Lookups_8 - (MR_Unsigned) LookupsIsDupl_9);
  MR_String LookupsStr_12;
  MR_String LookupsIsDuplStr_13;
  MR_String LookupsNotDuplStr_14;
  MR_String Var_56;

  LookupsStr_12 = mercury__string__int_to_string_thousands_1_f_0(Lookups_8);
  LookupsIsDuplStr_13 = mercury__string__int_to_string_thousands_1_f_0(LookupsIsDupl_9);
  LookupsNotDuplStr_14 = mercury__string__int_to_string_thousands_1_f_0(LookupsNotDupl_11);
  mercury__io__write_string_4_p_0(OutStream_5, (MR_String) "number of lookups:                            ");
  mercury__string__format__format_string_component_width_noprec_4_p_0((MR_Word) (&mercury__table_statistics_scalar_common_5[0]), (MR_Integer) 9, LookupsStr_12, &Var_56);
  mercury__io__write_string_4_p_0(OutStream_5, Var_56);
  mercury__io__write_string_4_p_0(OutStream_5, (MR_String) "\n");
  succeeded = (Lookups_8 > (MR_Integer) 0);
  if (succeeded)
  {
    MR_String FractionIsDuplStr_15;
    MR_String FractionNotDuplStr_16;
    MR_String Var_68;
    MR_String Var_79;
    MR_String Var_91;
    MR_String Var_102;
    MR_Integer Var_17;

    FractionIsDuplStr_15 = mercury__table_statistics__percentage_str_2_f_0(LookupsIsDupl_9, Lookups_8);
    FractionNotDuplStr_16 = mercury__table_statistics__percentage_str_2_f_0(LookupsNotDupl_11, Lookups_8);
    mercury__io__write_string_4_p_0(OutStream_5, (MR_String) "number of successful lookups (old calls):     ");
    mercury__string__format__format_string_component_width_noprec_4_p_0((MR_Word) (&mercury__table_statistics_scalar_common_5[0]), (MR_Integer) 9, LookupsIsDuplStr_13, &Var_68);
    mercury__io__write_string_4_p_0(OutStream_5, Var_68);
    mercury__io__write_string_4_p_0(OutStream_5, (MR_String) " ");
    mercury__string__format__format_string_component_width_noprec_4_p_0((MR_Word) (&mercury__table_statistics_scalar_common_5[0]), (MR_Integer) 9, FractionIsDuplStr_15, &Var_79);
    mercury__io__write_string_4_p_0(OutStream_5, Var_79);
    mercury__io__write_string_4_p_0(OutStream_5, (MR_String) "\n");
    mercury__io__write_string_4_p_0(OutStream_5, (MR_String) "number of unsuccessful lookups (new calls):   ");
    mercury__string__format__format_string_component_width_noprec_4_p_0((MR_Word) (&mercury__table_statistics_scalar_common_5[0]), (MR_Integer) 9, LookupsNotDuplStr_14, &Var_91);
    mercury__io__write_string_4_p_0(OutStream_5, Var_91);
    mercury__io__write_string_4_p_0(OutStream_5, (MR_String) " ");
    mercury__string__format__format_string_component_width_noprec_4_p_0((MR_Word) (&mercury__table_statistics_scalar_common_5[0]), (MR_Integer) 9, FractionNotDuplStr_16, &Var_102);
    mercury__io__write_string_4_p_0(OutStream_5, Var_102);
    mercury__io__write_string_4_p_0(OutStream_5, (MR_String) "\n");
    mercury__io__write_string_4_p_0(OutStream_5, (MR_String) "statistics for the individual steps:\n");
    mercury__table_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_50_95_95_91_50_93_95_48_6_p_in__list_0(OutStream_5, Steps_10, (MR_Integer) 1, &Var_17);
  }
}

static void MR_CALL 
mercury__table_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_50_95_95_91_50_93_95_48_6_p_in__list_0(
  MR_Word Var_24,
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Integer * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__4_4 = HeadVar__3_3;
    else
    {
      MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer Var_19;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Integer next_value_of_HeadVar__3_3;

      mercury__table_statistics__write_table_step_stats_5_p_0(Var_24, Var_13, HeadVar__3_3);
      Var_19 = (MR_Integer) ((MR_Unsigned) HeadVar__3_3 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_14;
      next_value_of_HeadVar__3_3 = Var_19;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__table_statistics__write_table_step_stats_5_p_0(
  MR_Word OutStream_6,
  MR_Word Step_7,
  MR_Integer StepNum_8)
{
  MR_bool succeeded;
  MR_String VarName_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), Step_7, (MR_Integer) 0))));
  MR_Integer Lookups_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Step_7, (MR_Integer) 1))));
  MR_Integer LookupsIsDupl_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Step_7, (MR_Integer) 2))));
  MR_Word Details_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Step_7, (MR_Integer) 3))));

  switch (MR_tag((MR_Word) Details_13)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      mercury__table_statistics__write_table_step_stats_header_8_p_0(OutStream_6, VarName_10, StepNum_8, (MR_String) "none", Lookups_11, LookupsIsDupl_12);
      break;
    case (MR_Integer) 1:
      {
        MR_Integer StartAllocs_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Details_13, (MR_Integer) 0))));
        MR_Integer StartBytes_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Details_13, (MR_Integer) 1))));

        mercury__table_statistics__write_table_step_stats_header_8_p_0(OutStream_6, VarName_10, StepNum_8, (MR_String) "expandable array", Lookups_11, LookupsIsDupl_12);
        succeeded = (Lookups_11 > (MR_Integer) 0);
        if (succeeded)
          mercury__table_statistics__write_table_step_stats_start_5_p_0(OutStream_6, StartAllocs_14, StartBytes_15);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Integer EnumNodeAllocs_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Details_13, (MR_Integer) 0))));
        MR_Integer EnumNodeBytes_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Details_13, (MR_Integer) 1))));

        mercury__table_statistics__write_table_step_stats_header_8_p_0(OutStream_6, VarName_10, StepNum_8, (MR_String) "enum trie", Lookups_11, LookupsIsDupl_12);
        succeeded = (Lookups_11 > (MR_Integer) 0);
        if (succeeded)
          mercury__table_statistics__write_table_step_stats_enum_5_p_0(OutStream_6, EnumNodeAllocs_16, EnumNodeBytes_17);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Details_13, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer HashTableAllocs_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Details_13, (MR_Integer) 1))));
            MR_Integer HashTableBytes_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Details_13, (MR_Integer) 2))));
            MR_Integer HashLinkChunkAllocs_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Details_13, (MR_Integer) 3))));
            MR_Integer HashLinkChunkBytes_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Details_13, (MR_Integer) 4))));
            MR_Integer HashKeyComparesNotDupl_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Details_13, (MR_Integer) 5))));
            MR_Integer HashKeyComparesIsDupl_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Details_13, (MR_Integer) 6))));
            MR_Integer HashResizes_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Details_13, (MR_Integer) 7))));
            MR_Integer HashResizeOldEntries_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Details_13, (MR_Integer) 8))));
            MR_Integer HashResizeNewEntries_26 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Details_13, (MR_Integer) 9))));

            mercury__table_statistics__write_table_step_stats_header_8_p_0(OutStream_6, VarName_10, StepNum_8, (MR_String) "hash table", Lookups_11, LookupsIsDupl_12);
            succeeded = (Lookups_11 > (MR_Integer) 0);
            if (succeeded)
              mercury__table_statistics__write_table_step_stats_hash_12_p_0(OutStream_6, HashTableAllocs_18, HashTableBytes_19, HashLinkChunkAllocs_20, HashLinkChunkBytes_21, HashKeyComparesNotDupl_22, HashKeyComparesIsDupl_23, HashResizes_24, HashResizeOldEntries_25, HashResizeNewEntries_26);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer DuNodeAllocs_27 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Details_13, (MR_Integer) 1))));
            MR_Integer DuNodeBytes_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Details_13, (MR_Integer) 2))));
            MR_Integer DuArgLookups_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Details_13, (MR_Integer) 3))));
            MR_Integer DuExistLookups_30 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Details_13, (MR_Integer) 4))));
            MR_Integer EnumNodeAllocs_58 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Details_13, (MR_Integer) 5))));
            MR_Integer EnumNodeBytes_59 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Details_13, (MR_Integer) 6))));
            MR_Integer HashTableAllocs_60 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Details_13, (MR_Integer) 7))));
            MR_Integer HashTableBytes_61 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Details_13, (MR_Integer) 8))));
            MR_Integer HashLinkChunkAllocs_62 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Details_13, (MR_Integer) 9))));
            MR_Integer HashLinkChunkBytes_63 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Details_13, (MR_Integer) 10))));
            MR_Integer HashKeyComparesNotDupl_64 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Details_13, (MR_Integer) 11))));
            MR_Integer HashKeyComparesIsDupl_65 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Details_13, (MR_Integer) 12))));
            MR_Integer HashResizes_66 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Details_13, (MR_Integer) 13))));
            MR_Integer HashResizeOldEntries_67 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Details_13, (MR_Integer) 14))));
            MR_Integer HashResizeNewEntries_68 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Details_13, (MR_Integer) 15))));

            mercury__table_statistics__write_table_step_stats_header_8_p_0(OutStream_6, VarName_10, StepNum_8, (MR_String) "discriminated union nested trie", Lookups_11, LookupsIsDupl_12);
            succeeded = (Lookups_11 > (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = (DuNodeAllocs_27 > (MR_Integer) 0);
              if (succeeded)
                mercury__table_statistics__write_table_step_stats_du_7_p_0(OutStream_6, DuNodeAllocs_27, DuNodeBytes_28, DuArgLookups_29, DuExistLookups_30);
              else
                {
                  mercury__require__error_1_p_0((MR_String) "write_table_step_stats: no du stats");
                  return;
                }
              succeeded = (EnumNodeAllocs_58 > (MR_Integer) 0);
              if (succeeded)
                mercury__table_statistics__write_table_step_stats_enum_5_p_0(OutStream_6, EnumNodeAllocs_58, EnumNodeBytes_59);
              succeeded = (HashTableAllocs_60 > (MR_Integer) 0);
              if (succeeded)
                mercury__table_statistics__write_table_step_stats_hash_12_p_0(OutStream_6, HashTableAllocs_60, HashTableBytes_61, HashLinkChunkAllocs_62, HashLinkChunkBytes_63, HashKeyComparesNotDupl_64, HashKeyComparesIsDupl_65, HashResizes_66, HashResizeOldEntries_67, HashResizeNewEntries_68);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer DuNodeAllocs_87 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Details_13, (MR_Integer) 1))));
            MR_Integer DuNodeBytes_88 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Details_13, (MR_Integer) 2))));
            MR_Integer DuArgLookups_89 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Details_13, (MR_Integer) 3))));
            MR_Integer DuExistLookups_90 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Details_13, (MR_Integer) 4))));
            MR_Integer EnumNodeAllocs_100 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Details_13, (MR_Integer) 5))));
            MR_Integer EnumNodeBytes_101 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Details_13, (MR_Integer) 6))));
            MR_Integer HashTableAllocs_102 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Details_13, (MR_Integer) 7))));
            MR_Integer HashTableBytes_103 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Details_13, (MR_Integer) 8))));
            MR_Integer HashLinkChunkAllocs_104 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Details_13, (MR_Integer) 9))));
            MR_Integer HashLinkChunkBytes_105 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Details_13, (MR_Integer) 10))));
            MR_Integer HashKeyComparesNotDupl_106 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Details_13, (MR_Integer) 11))));
            MR_Integer HashKeyComparesIsDupl_107 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Details_13, (MR_Integer) 12))));
            MR_Integer HashResizes_108 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Details_13, (MR_Integer) 13))));
            MR_Integer HashResizeOldEntries_109 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Details_13, (MR_Integer) 14))));
            MR_Integer HashResizeNewEntries_110 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Details_13, (MR_Integer) 15))));

            mercury__table_statistics__write_table_step_stats_header_8_p_0(OutStream_6, VarName_10, StepNum_8, (MR_String) "polymorphic table", Lookups_11, LookupsIsDupl_12);
            succeeded = (Lookups_11 > (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = (DuNodeAllocs_87 > (MR_Integer) 0);
              if (succeeded)
                mercury__table_statistics__write_table_step_stats_du_7_p_0(OutStream_6, DuNodeAllocs_87, DuNodeBytes_88, DuArgLookups_89, DuExistLookups_90);
              succeeded = (EnumNodeAllocs_100 > (MR_Integer) 0);
              if (succeeded)
                mercury__table_statistics__write_table_step_stats_enum_5_p_0(OutStream_6, EnumNodeAllocs_100, EnumNodeBytes_101);
              succeeded = (HashTableAllocs_102 > (MR_Integer) 0);
              if (succeeded)
                mercury__table_statistics__write_table_step_stats_hash_12_p_0(OutStream_6, HashTableAllocs_102, HashTableBytes_103, HashLinkChunkAllocs_104, HashLinkChunkBytes_105, HashKeyComparesNotDupl_106, HashKeyComparesIsDupl_107, HashResizes_108, HashResizeOldEntries_109, HashResizeNewEntries_110);
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
mercury__table_statistics__write_table_step_stats_du_7_p_0(
  MR_Word OutStream_8,
  MR_Integer DuNodeAllocs_9,
  MR_Integer DuNodeBytes_10,
  MR_Integer DuArgLookups_11,
  MR_Integer DuExistLookups_12)
{
  MR_bool succeeded;
  MR_String DuNodeAllocsStr_14;
  MR_String DuNodeBytesStr_15;
  MR_String DuArgLookupsStr_16;
  MR_String DuExistLookupsStr_17;
  MR_String Var_44;
  MR_String Var_56;
  MR_String Var_68;

  DuNodeAllocsStr_14 = mercury__string__int_to_base_string_group_4_f_0(DuNodeAllocs_9, (MR_Integer) 10, (MR_Integer) 3, (MR_String) ",");
  DuNodeBytesStr_15 = mercury__string__int_to_base_string_group_4_f_0(DuNodeBytes_10, (MR_Integer) 10, (MR_Integer) 3, (MR_String) ",");
  DuArgLookupsStr_16 = mercury__string__int_to_string_thousands_1_f_0(DuArgLookups_11);
  DuExistLookupsStr_17 = mercury__string__int_to_string_thousands_1_f_0(DuExistLookups_12);
  mercury__io__write_string_4_p_0(OutStream_8, (MR_String) "  number of du functor node allocations:      ");
  mercury__string__format__format_string_component_width_noprec_4_p_0((MR_Word) (&mercury__table_statistics_scalar_common_5[0]), (MR_Integer) 9, DuNodeAllocsStr_14, &Var_44);
  mercury__io__write_string_4_p_0(OutStream_8, Var_44);
  mercury__io__write_string_4_p_0(OutStream_8, (MR_String) "\n");
  mercury__io__write_string_4_p_0(OutStream_8, (MR_String) "  number of bytes allocated for du functors:  ");
  mercury__string__format__format_string_component_width_noprec_4_p_0((MR_Word) (&mercury__table_statistics_scalar_common_5[0]), (MR_Integer) 9, DuNodeBytesStr_15, &Var_56);
  mercury__io__write_string_4_p_0(OutStream_8, Var_56);
  mercury__io__write_string_4_p_0(OutStream_8, (MR_String) "\n");
  mercury__io__write_string_4_p_0(OutStream_8, (MR_String) "  number of du functor argument lookups:      ");
  mercury__string__format__format_string_component_width_noprec_4_p_0((MR_Word) (&mercury__table_statistics_scalar_common_5[0]), (MR_Integer) 9, DuArgLookupsStr_16, &Var_68);
  mercury__io__write_string_4_p_0(OutStream_8, Var_68);
  mercury__io__write_string_4_p_0(OutStream_8, (MR_String) "\n");
  succeeded = (DuExistLookups_12 > (MR_Integer) 0);
  if (succeeded)
  {
    MR_String Var_80;

    mercury__io__write_string_4_p_0(OutStream_8, (MR_String) "  number of du existential type lookups:      ");
    mercury__string__format__format_string_component_width_noprec_4_p_0((MR_Word) (&mercury__table_statistics_scalar_common_5[0]), (MR_Integer) 9, DuExistLookupsStr_17, &Var_80);
    mercury__io__write_string_4_p_0(OutStream_8, Var_80);
    mercury__io__write_string_4_p_0(OutStream_8, (MR_String) "\n");
  }
}

static void MR_CALL 
mercury__table_statistics__write_table_step_stats_hash_12_p_0(
  MR_Word OutStream_13,
  MR_Integer HashTableAllocs_14,
  MR_Integer HashTableBytes_15,
  MR_Integer HashLinkChunkAllocs_16,
  MR_Integer HashLinkChunkBytes_17,
  MR_Integer HashKeyComparesNotDupl_18,
  MR_Integer HashKeyComparesIsDupl_19,
  MR_Integer HashResizes_20,
  MR_Integer HashResizeOldEntries_21,
  MR_Integer HashResizeNewEntries_22)
{
  MR_bool succeeded;
  MR_String HashTableAllocsStr_24;
  MR_String HashTableBytesStr_25;
  MR_String HashLinkChunkAllocsStr_26;
  MR_String HashLinkChunkBytesStr_27;
  MR_String HashKeyComparesNotDuplStr_28;
  MR_String HashKeyComparesIsDuplStr_29;
  MR_String HashResizesStr_30;
  MR_String HashResizeOldEntriesStr_31;
  MR_String HashResizeNewEntriesStr_32;
  MR_String Var_84;
  MR_String Var_96;
  MR_String Var_108;
  MR_String Var_120;
  MR_String Var_132;
  MR_String Var_144;
  MR_String Var_156;

  HashTableAllocsStr_24 = mercury__string__int_to_string_thousands_1_f_0(HashTableAllocs_14);
  HashTableBytesStr_25 = mercury__string__int_to_string_thousands_1_f_0(HashTableBytes_15);
  HashLinkChunkAllocsStr_26 = mercury__string__int_to_string_thousands_1_f_0(HashLinkChunkAllocs_16);
  HashLinkChunkBytesStr_27 = mercury__string__int_to_string_thousands_1_f_0(HashLinkChunkBytes_17);
  HashKeyComparesNotDuplStr_28 = mercury__string__int_to_string_thousands_1_f_0(HashKeyComparesNotDupl_18);
  HashKeyComparesIsDuplStr_29 = mercury__string__int_to_string_thousands_1_f_0(HashKeyComparesIsDupl_19);
  HashResizesStr_30 = mercury__string__int_to_string_thousands_1_f_0(HashResizes_20);
  HashResizeOldEntriesStr_31 = mercury__string__int_to_string_thousands_1_f_0(HashResizeOldEntries_21);
  HashResizeNewEntriesStr_32 = mercury__string__int_to_string_thousands_1_f_0(HashResizeNewEntries_22);
  mercury__io__write_string_4_p_0(OutStream_13, (MR_String) "  number of hash table allocations:           ");
  mercury__string__format__format_string_component_width_noprec_4_p_0((MR_Word) (&mercury__table_statistics_scalar_common_5[0]), (MR_Integer) 9, HashTableAllocsStr_24, &Var_84);
  mercury__io__write_string_4_p_0(OutStream_13, Var_84);
  mercury__io__write_string_4_p_0(OutStream_13, (MR_String) "\n");
  mercury__io__write_string_4_p_0(OutStream_13, (MR_String) "  number of bytes allocated for hash tables:  ");
  mercury__string__format__format_string_component_width_noprec_4_p_0((MR_Word) (&mercury__table_statistics_scalar_common_5[0]), (MR_Integer) 9, HashTableBytesStr_25, &Var_96);
  mercury__io__write_string_4_p_0(OutStream_13, Var_96);
  mercury__io__write_string_4_p_0(OutStream_13, (MR_String) "\n");
  mercury__io__write_string_4_p_0(OutStream_13, (MR_String) "  number of bulk hash link allocations:       ");
  mercury__string__format__format_string_component_width_noprec_4_p_0((MR_Word) (&mercury__table_statistics_scalar_common_5[0]), (MR_Integer) 9, HashLinkChunkAllocsStr_26, &Var_108);
  mercury__io__write_string_4_p_0(OutStream_13, Var_108);
  mercury__io__write_string_4_p_0(OutStream_13, (MR_String) "\n");
  mercury__io__write_string_4_p_0(OutStream_13, (MR_String) "  number of bytes allocated for hash links:   ");
  mercury__string__format__format_string_component_width_noprec_4_p_0((MR_Word) (&mercury__table_statistics_scalar_common_5[0]), (MR_Integer) 9, HashLinkChunkBytesStr_27, &Var_120);
  mercury__io__write_string_4_p_0(OutStream_13, Var_120);
  mercury__io__write_string_4_p_0(OutStream_13, (MR_String) "\n");
  mercury__io__write_string_4_p_0(OutStream_13, (MR_String) "  number of key compares when unsuccessful:   ");
  mercury__string__format__format_string_component_width_noprec_4_p_0((MR_Word) (&mercury__table_statistics_scalar_common_5[0]), (MR_Integer) 9, HashKeyComparesNotDuplStr_28, &Var_132);
  mercury__io__write_string_4_p_0(OutStream_13, Var_132);
  mercury__io__write_string_4_p_0(OutStream_13, (MR_String) "\n");
  mercury__io__write_string_4_p_0(OutStream_13, (MR_String) "  number of key compares when successful:     ");
  mercury__string__format__format_string_component_width_noprec_4_p_0((MR_Word) (&mercury__table_statistics_scalar_common_5[0]), (MR_Integer) 9, HashKeyComparesIsDuplStr_29, &Var_144);
  mercury__io__write_string_4_p_0(OutStream_13, Var_144);
  mercury__io__write_string_4_p_0(OutStream_13, (MR_String) "\n");
  mercury__io__write_string_4_p_0(OutStream_13, (MR_String) "  number of hash table resizes:               ");
  mercury__string__format__format_string_component_width_noprec_4_p_0((MR_Word) (&mercury__table_statistics_scalar_common_5[0]), (MR_Integer) 9, HashResizesStr_30, &Var_156);
  mercury__io__write_string_4_p_0(OutStream_13, Var_156);
  mercury__io__write_string_4_p_0(OutStream_13, (MR_String) "\n");
  succeeded = (HashResizes_20 > (MR_Integer) 0);
  if (succeeded)
  {
    MR_String Var_168;
    MR_String Var_180;

    mercury__io__write_string_4_p_0(OutStream_13, (MR_String) "  number of old entries in resizes:           ");
    mercury__string__format__format_string_component_width_noprec_4_p_0((MR_Word) (&mercury__table_statistics_scalar_common_5[0]), (MR_Integer) 9, HashResizeOldEntriesStr_31, &Var_168);
    mercury__io__write_string_4_p_0(OutStream_13, Var_168);
    mercury__io__write_string_4_p_0(OutStream_13, (MR_String) "\n");
    mercury__io__write_string_4_p_0(OutStream_13, (MR_String) "  number of new entries in resizes:           ");
    mercury__string__format__format_string_component_width_noprec_4_p_0((MR_Word) (&mercury__table_statistics_scalar_common_5[0]), (MR_Integer) 9, HashResizeNewEntriesStr_32, &Var_180);
    mercury__io__write_string_4_p_0(OutStream_13, Var_180);
    mercury__io__write_string_4_p_0(OutStream_13, (MR_String) "\n");
  }
}

static void MR_CALL 
mercury__table_statistics__write_table_step_stats_enum_5_p_0(
  MR_Word OutStream_6,
  MR_Integer EnumNodeAllocs_7,
  MR_Integer EnumNodeBytes_8)
{
  MR_String EnumNodeAllocsStr_10;
  MR_String EnumNodeBytesStr_11;
  MR_String Var_27;
  MR_String Var_39;
  MR_Box Var_61;
  MR_Box Var_62;
  MR_Box Var_77;
  MR_Box Var_78;
  MR_Box Var_87;
  MR_Box Var_88;

  EnumNodeAllocsStr_10 = mercury__string__int_to_base_string_group_4_f_0(EnumNodeAllocs_7, (MR_Integer) 10, (MR_Integer) 3, (MR_String) ",");
  EnumNodeBytesStr_11 = mercury__string__int_to_base_string_group_4_f_0(EnumNodeBytes_8, (MR_Integer) 10, (MR_Integer) 3, (MR_String) ",");
  Var_61 = (MR_Box) (OutStream_6);
{
#define MR_PROC_LABEL mercury__table_statistics__write_table_step_stats_enum_5_p_0

	MercuryFilePtr Stream;
	MR_String Message;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Var_61 ;
	Message = (MR_String) "  number of enum node allocations:            " ;
		{

    const char *s = Message;
    if (ML_fprintf(Stream, "%s", s) < 0) {
        Error = errno;
    } else {
        Error = 0;
        while (*s) {
            if (*s++ == '\n') {
                MR_line_number(*Stream)++;
            }
        }
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Var_62 );
}
  mercury__io__throw_on_error_4_p_0(Var_62, (MR_String) "error writing to output file: ");
  mercury__string__format__format_string_component_5_p_0((MR_Word) (&mercury__table_statistics_scalar_common_5[0]), (MR_Word) (MR_mkword(MR_mktag(1), &mercury__table_statistics_scalar_common_5[2])), (MR_Word) ((MR_Unsigned) 0U), EnumNodeAllocsStr_10, &Var_27);
  Var_77 = (MR_Box) (OutStream_6);
{
#define MR_PROC_LABEL mercury__table_statistics__write_table_step_stats_enum_5_p_0

	MercuryFilePtr Stream;
	MR_String Message;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Var_77 ;
	Message = Var_27 ;
		{

    const char *s = Message;
    if (ML_fprintf(Stream, "%s", s) < 0) {
        Error = errno;
    } else {
        Error = 0;
        while (*s) {
            if (*s++ == '\n') {
                MR_line_number(*Stream)++;
            }
        }
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Var_78 );
}
  mercury__io__throw_on_error_4_p_0(Var_78, (MR_String) "error writing to output file: ");
  Var_87 = (MR_Box) (OutStream_6);
{
#define MR_PROC_LABEL mercury__table_statistics__write_table_step_stats_enum_5_p_0

	MercuryFilePtr Stream;
	MR_String Message;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Var_87 ;
	Message = (MR_String) "\n" ;
		{

    const char *s = Message;
    if (ML_fprintf(Stream, "%s", s) < 0) {
        Error = errno;
    } else {
        Error = 0;
        while (*s) {
            if (*s++ == '\n') {
                MR_line_number(*Stream)++;
            }
        }
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Var_88 );
}
  mercury__io__throw_on_error_4_p_0(Var_88, (MR_String) "error writing to output file: ");
  mercury__io__write_string_4_p_0(OutStream_6, (MR_String) "  number of bytes allocated for enum nodes:   ");
  mercury__string__format__format_string_component_width_noprec_4_p_0((MR_Word) (&mercury__table_statistics_scalar_common_5[0]), (MR_Integer) 9, EnumNodeBytesStr_11, &Var_39);
  mercury__io__write_string_4_p_0(OutStream_6, Var_39);
  mercury__io__write_string_4_p_0(OutStream_6, (MR_String) "\n");
}

static void MR_CALL 
mercury__table_statistics__write_table_step_stats_start_5_p_0(
  MR_Word OutStream_6,
  MR_Integer StartAllocs_7,
  MR_Integer StartBytes_8)
{
  MR_String StartAllocsStr_10;
  MR_String StartBytesStr_11;
  MR_String Var_27;
  MR_String Var_39;
  MR_Box Var_61;
  MR_Box Var_62;
  MR_Box Var_77;
  MR_Box Var_78;
  MR_Box Var_87;
  MR_Box Var_88;

  StartAllocsStr_10 = mercury__string__int_to_base_string_group_4_f_0(StartAllocs_7, (MR_Integer) 10, (MR_Integer) 3, (MR_String) ",");
  StartBytesStr_11 = mercury__string__int_to_base_string_group_4_f_0(StartBytes_8, (MR_Integer) 10, (MR_Integer) 3, (MR_String) ",");
  Var_61 = (MR_Box) (OutStream_6);
{
#define MR_PROC_LABEL mercury__table_statistics__write_table_step_stats_start_5_p_0

	MercuryFilePtr Stream;
	MR_String Message;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Var_61 ;
	Message = (MR_String) "  number of array (re)allocations:            " ;
		{

    const char *s = Message;
    if (ML_fprintf(Stream, "%s", s) < 0) {
        Error = errno;
    } else {
        Error = 0;
        while (*s) {
            if (*s++ == '\n') {
                MR_line_number(*Stream)++;
            }
        }
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Var_62 );
}
  mercury__io__throw_on_error_4_p_0(Var_62, (MR_String) "error writing to output file: ");
  mercury__string__format__format_string_component_5_p_0((MR_Word) (&mercury__table_statistics_scalar_common_5[0]), (MR_Word) (MR_mkword(MR_mktag(1), &mercury__table_statistics_scalar_common_5[2])), (MR_Word) ((MR_Unsigned) 0U), StartAllocsStr_10, &Var_27);
  Var_77 = (MR_Box) (OutStream_6);
{
#define MR_PROC_LABEL mercury__table_statistics__write_table_step_stats_start_5_p_0

	MercuryFilePtr Stream;
	MR_String Message;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Var_77 ;
	Message = Var_27 ;
		{

    const char *s = Message;
    if (ML_fprintf(Stream, "%s", s) < 0) {
        Error = errno;
    } else {
        Error = 0;
        while (*s) {
            if (*s++ == '\n') {
                MR_line_number(*Stream)++;
            }
        }
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Var_78 );
}
  mercury__io__throw_on_error_4_p_0(Var_78, (MR_String) "error writing to output file: ");
  Var_87 = (MR_Box) (OutStream_6);
{
#define MR_PROC_LABEL mercury__table_statistics__write_table_step_stats_start_5_p_0

	MercuryFilePtr Stream;
	MR_String Message;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Var_87 ;
	Message = (MR_String) "\n" ;
		{

    const char *s = Message;
    if (ML_fprintf(Stream, "%s", s) < 0) {
        Error = errno;
    } else {
        Error = 0;
        while (*s) {
            if (*s++ == '\n') {
                MR_line_number(*Stream)++;
            }
        }
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Var_88 );
}
  mercury__io__throw_on_error_4_p_0(Var_88, (MR_String) "error writing to output file: ");
  mercury__io__write_string_4_p_0(OutStream_6, (MR_String) "  number of bytes (re)allocationed:           ");
  mercury__string__format__format_string_component_width_noprec_4_p_0((MR_Word) (&mercury__table_statistics_scalar_common_5[0]), (MR_Integer) 9, StartBytesStr_11, &Var_39);
  mercury__io__write_string_4_p_0(OutStream_6, Var_39);
  mercury__io__write_string_4_p_0(OutStream_6, (MR_String) "\n");
}

static void MR_CALL 
mercury__table_statistics__write_table_step_stats_header_8_p_0(
  MR_Word OutStream_9,
  MR_String VarName_10,
  MR_Integer StepNum_11,
  MR_String KindStr_12,
  MR_Integer Lookups_13,
  MR_Integer LookupsIsDupl_14)
{
  MR_bool succeeded;
  MR_Integer LookupsNotDupl_16;
  MR_String LookupsStr_17;
  MR_String LookupsIsDuplStr_18;
  MR_String LookupsNotDuplStr_19;
  MR_String Var_56;
  MR_String Var_73;

  mercury__io__write_string_4_p_0(OutStream_9, (MR_String) "\nstep ");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mercury__table_statistics_scalar_common_5[0]), StepNum_11, &Var_56);
  mercury__io__write_string_4_p_0(OutStream_9, Var_56);
  mercury__io__write_string_4_p_0(OutStream_9, (MR_String) ", variable ");
  mercury__io__write_string_4_p_0(OutStream_9, VarName_10);
  mercury__io__write_string_4_p_0(OutStream_9, (MR_String) ": ");
  mercury__io__write_string_4_p_0(OutStream_9, KindStr_12);
  mercury__io__write_string_4_p_0(OutStream_9, (MR_String) "\n");
  LookupsNotDupl_16 = (MR_Integer) ((MR_Unsigned) Lookups_13 - (MR_Unsigned) LookupsIsDupl_14);
  LookupsStr_17 = mercury__string__int_to_string_thousands_1_f_0(Lookups_13);
  LookupsIsDuplStr_18 = mercury__string__int_to_string_thousands_1_f_0(LookupsIsDupl_14);
  LookupsNotDuplStr_19 = mercury__string__int_to_string_thousands_1_f_0(LookupsNotDupl_16);
  mercury__io__write_string_4_p_0(OutStream_9, (MR_String) "  number of lookups:                          ");
  mercury__string__format__format_string_component_width_noprec_4_p_0((MR_Word) (&mercury__table_statistics_scalar_common_5[0]), (MR_Integer) 9, LookupsStr_17, &Var_73);
  mercury__io__write_string_4_p_0(OutStream_9, Var_73);
  mercury__io__write_string_4_p_0(OutStream_9, (MR_String) "\n");
  succeeded = (Lookups_13 > (MR_Integer) 0);
  if (succeeded)
  {
    MR_String FractionIsDuplStr_20;
    MR_String FractionNotDuplStr_21;
    MR_String Var_85;
    MR_String Var_96;
    MR_String Var_108;
    MR_String Var_119;

    FractionIsDuplStr_20 = mercury__table_statistics__percentage_str_2_f_0(LookupsIsDupl_14, Lookups_13);
    FractionNotDuplStr_21 = mercury__table_statistics__percentage_str_2_f_0(LookupsNotDupl_16, Lookups_13);
    mercury__io__write_string_4_p_0(OutStream_9, (MR_String) "  number of successful lookups:               ");
    mercury__string__format__format_string_component_width_noprec_4_p_0((MR_Word) (&mercury__table_statistics_scalar_common_5[0]), (MR_Integer) 9, LookupsIsDuplStr_18, &Var_85);
    mercury__io__write_string_4_p_0(OutStream_9, Var_85);
    mercury__io__write_string_4_p_0(OutStream_9, (MR_String) " ");
    mercury__string__format__format_string_component_width_noprec_4_p_0((MR_Word) (&mercury__table_statistics_scalar_common_5[0]), (MR_Integer) 9, FractionIsDuplStr_20, &Var_96);
    mercury__io__write_string_4_p_0(OutStream_9, Var_96);
    mercury__io__write_string_4_p_0(OutStream_9, (MR_String) "\n");
    mercury__io__write_string_4_p_0(OutStream_9, (MR_String) "  number of unsuccessful lookups:             ");
    mercury__string__format__format_string_component_width_noprec_4_p_0((MR_Word) (&mercury__table_statistics_scalar_common_5[0]), (MR_Integer) 9, LookupsNotDuplStr_19, &Var_108);
    mercury__io__write_string_4_p_0(OutStream_9, Var_108);
    mercury__io__write_string_4_p_0(OutStream_9, (MR_String) " ");
    mercury__string__format__format_string_component_width_noprec_4_p_0((MR_Word) (&mercury__table_statistics_scalar_common_5[0]), (MR_Integer) 9, FractionNotDuplStr_21, &Var_119);
    mercury__io__write_string_4_p_0(OutStream_9, Var_119);
    mercury__io__write_string_4_p_0(OutStream_9, (MR_String) "\n");
  }
}

static MR_String MR_CALL 
mercury__table_statistics__percentage_str_2_f_0(
  MR_Integer A_4,
  MR_Integer B_5)
{
  MR_bool succeeded;
  MR_String PercentageStr_6;
  MR_Float Percentage_7;
  MR_Float Var_8;
  MR_Float Var_9;
  MR_Float Var_11;
  MR_Float Var_12;
  MR_String Var_18;
  MR_String Var_27;

{
#define MR_PROC_LABEL mercury__table_statistics__percentage_str_2_f_0

	MR_Integer IntVal;
	MR_Float FloatVal;

	IntVal = (MR_Integer) 100 ;
		{

    FloatVal = IntVal;


		;}
#undef MR_PROC_LABEL
	Var_9  = FloatVal;
}
{
#define MR_PROC_LABEL mercury__table_statistics__percentage_str_2_f_0

	MR_Integer IntVal;
	MR_Float FloatVal;

	IntVal = A_4 ;
		{

    FloatVal = IntVal;


		;}
#undef MR_PROC_LABEL
	Var_11  = FloatVal;
}
  Var_8 = (Var_9 * Var_11);
{
#define MR_PROC_LABEL mercury__table_statistics__percentage_str_2_f_0

	MR_Integer IntVal;
	MR_Float FloatVal;

	IntVal = B_5 ;
		{

    FloatVal = IntVal;


		;}
#undef MR_PROC_LABEL
	Var_12  = FloatVal;
}
{
#define MR_PROC_LABEL mercury__table_statistics__percentage_str_2_f_0

	MR_bool SUCCESS_INDICATOR;

		{

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
    succeeded = (Var_12 == ((MR_Float) 0.0000000000000000));
  if (succeeded)
    mercury__exception__throw_1_p_0((MR_Word) (&mercury__exception__exception__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "float.\'/\': division by zero")))));
  else
    Percentage_7 = (Var_8 / Var_12);
  mercury__string__format__format_float_component_6_p_0((MR_Word) (&mercury__table_statistics_scalar_common_5[0]), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &mercury__table_statistics_scalar_common_5[1])), (MR_Integer) 2, Percentage_7, &Var_18);
  mercury__string__append_3_p_2(Var_18, (MR_String) "%)", &Var_27);
  mercury__string__append_3_p_2((MR_String) "(", Var_27, &PercentageStr_6);
  return PercentageStr_6;
}

MR_Word MR_CALL 
mercury__table_statistics__table_stats_difference_2_f_0(
  MR_Word StatsA_4,
  MR_Word StatsB_5)
{
  MR_Word StatsDiff_6;
  MR_Integer LookupsA_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), StatsA_4, (MR_Integer) 0))));
  MR_Integer LookupsIsDuplA_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), StatsA_4, (MR_Integer) 1))));
  MR_Word StepsA_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StatsA_4, (MR_Integer) 2))));
  MR_Integer LookupsB_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), StatsB_5, (MR_Integer) 0))));
  MR_Integer LookupsIsDuplB_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), StatsB_5, (MR_Integer) 1))));
  MR_Word StepsB_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StatsB_5, (MR_Integer) 2))));
  MR_Integer LookupsDiff_13 = (MR_Integer) ((MR_Unsigned) LookupsA_7 - (MR_Unsigned) LookupsB_10);
  MR_Integer LookupsIsDuplDiff_14 = (MR_Integer) ((MR_Unsigned) LookupsIsDuplA_8 - (MR_Unsigned) LookupsIsDuplB_11);
  MR_Word StepsDiff_15;

  StepsDiff_15 = mercury__table_statistics__table_step_stats_diff_2_f_0(StepsA_9, StepsB_12);
  {
    StatsDiff_6 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), StatsDiff_6, 0) = ((MR_Box) (LookupsDiff_13));
    MR_hl_field(MR_mktag(0), StatsDiff_6, 1) = ((MR_Box) (LookupsIsDuplDiff_14));
    MR_hl_field(MR_mktag(0), StatsDiff_6, 2) = ((MR_Box) (StepsDiff_15));
  }
  return StatsDiff_6;
}

MR_Word MR_CALL 
mercury__table_statistics__table_step_stats_diff_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word HeadVar__3_3;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Box conv0_HeadVar__3_3;

      conv0_HeadVar__3_3 = mercury__require__func_error_1_f_0((MR_Word) (&mercury__table_statistics_scalar_common_1[0]), (MR_String) "mismatched table stats");
      HeadVar__3_3 = ((MR_Word) (conv0_HeadVar__3_3));
    }
  else
  {
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Box conv1_HeadVar__3_3;

      conv1_HeadVar__3_3 = mercury__require__func_error_1_f_0((MR_Word) (&mercury__table_statistics_scalar_common_1[0]), (MR_String) "mismatched table stats");
      HeadVar__3_3 = ((MR_Word) (conv1_HeadVar__3_3));
    }
    else
    {
      MR_Word StepB_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word StepsB_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word StepDiff_14;
      MR_String VarNameA_16 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_36, (MR_Integer) 0))));
      MR_Integer LookupsA_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_36, (MR_Integer) 1))));
      MR_Integer LookupsIsDuplA_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_36, (MR_Integer) 2))));
      MR_Word DetailsA_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_36, (MR_Integer) 3))));
      MR_String VarNameB_20 = ((MR_String) ((MR_hl_field(MR_mktag(0), StepB_12, (MR_Integer) 0))));
      MR_Integer LookupsB_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), StepB_12, (MR_Integer) 1))));
      MR_Integer LookupsIsDuplB_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), StepB_12, (MR_Integer) 2))));
      MR_Word DetailsB_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StepB_12, (MR_Integer) 3))));
      MR_Integer LookupsDiff_24;
      MR_Integer LookupsIsDuplDiff_25;
      MR_Word DetailsDiff_27;
      MR_Word DetailsDiffPrime_26;
      MR_Word * AddrStepDiffs_73;

      succeeded = (strcmp(VarNameA_16, VarNameB_20) == 0);
      if (!(succeeded))
        mercury__require__error_1_p_0((MR_String) "table_step_stats_diff: mismatches in variable name");
      LookupsDiff_24 = (MR_Integer) ((MR_Unsigned) LookupsA_17 - (MR_Unsigned) LookupsB_21);
      LookupsIsDuplDiff_25 = (MR_Integer) ((MR_Unsigned) LookupsIsDuplA_18 - (MR_Unsigned) LookupsIsDuplB_22);
      succeeded = mercury__table_statistics__table_step_stats_detail_diff_3_p_0(DetailsA_19, DetailsB_23, &DetailsDiffPrime_26);
      if (succeeded)
        DetailsDiff_27 = DetailsDiffPrime_26;
      else
        mercury__require__unexpected_2_p_0((MR_String) "function \140table_statistics.table_step_stats_diff\'/2", (MR_String) "mismatches in details");
      {
        StepDiff_14 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), StepDiff_14, 0) = ((MR_Box) (VarNameA_16));
        MR_hl_field(MR_mktag(0), StepDiff_14, 1) = ((MR_Box) (LookupsDiff_24));
        MR_hl_field(MR_mktag(0), StepDiff_14, 2) = ((MR_Box) (LookupsIsDuplDiff_25));
        MR_hl_field(MR_mktag(0), StepDiff_14, 3) = ((MR_Box) (DetailsDiff_27));
      }
      {
        HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (StepDiff_14));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 1) = NULL;
      }
      AddrStepDiffs_73 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
      mercury__table_statistics__LCMC__func__table_step_stats_diff__1_3_p_0(Var_35, StepsB_13, AddrStepDiffs_73);
    }
  }
  return HeadVar__3_3;
}

void MR_CALL 
mercury__table_statistics__LCMC__func__table_step_stats_diff__1_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_74)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        *AddrOfHeadVar__3_74 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Box conv0_HeadVar__3_75;

        {
          conv0_HeadVar__3_75 = mercury__require__func_error_1_f_0((MR_Word) (&mercury__table_statistics_scalar_common_1[0]), (MR_String) "mismatched table stats");
          return;
        }
      }
    else
    {
      MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Box conv1_HeadVar__3_77;

        {
          conv1_HeadVar__3_77 = mercury__require__func_error_1_f_0((MR_Word) (&mercury__table_statistics_scalar_common_1[0]), (MR_String) "mismatched table stats");
          return;
        }
      }
      else
      {
        MR_Word StepB_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        MR_Word StepsB_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        MR_Word StepDiff_14;
        MR_String VarNameA_16 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_36, (MR_Integer) 0))));
        MR_Integer LookupsA_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_36, (MR_Integer) 1))));
        MR_Integer LookupsIsDuplA_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_36, (MR_Integer) 2))));
        MR_Word DetailsA_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_36, (MR_Integer) 3))));
        MR_String VarNameB_20 = ((MR_String) ((MR_hl_field(MR_mktag(0), StepB_12, (MR_Integer) 0))));
        MR_Integer LookupsB_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), StepB_12, (MR_Integer) 1))));
        MR_Integer LookupsIsDuplB_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), StepB_12, (MR_Integer) 2))));
        MR_Word DetailsB_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StepB_12, (MR_Integer) 3))));
        MR_Integer LookupsDiff_24;
        MR_Integer LookupsIsDuplDiff_25;
        MR_Word DetailsDiff_27;
        MR_Word DetailsDiffPrime_26;
        MR_Word * AddrStepDiffs_73;
        MR_Word HeadVar__3_79;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word * next_value_of_AddrOfHeadVar__3_74;

        succeeded = (strcmp(VarNameA_16, VarNameB_20) == 0);
        if (!(succeeded))
          {
            mercury__require__error_1_p_0((MR_String) "table_step_stats_diff: mismatches in variable name");
            return;
          }
        LookupsDiff_24 = (MR_Integer) ((MR_Unsigned) LookupsA_17 - (MR_Unsigned) LookupsB_21);
        LookupsIsDuplDiff_25 = (MR_Integer) ((MR_Unsigned) LookupsIsDuplA_18 - (MR_Unsigned) LookupsIsDuplB_22);
        succeeded = mercury__table_statistics__table_step_stats_detail_diff_3_p_0(DetailsA_19, DetailsB_23, &DetailsDiffPrime_26);
        if (succeeded)
          DetailsDiff_27 = DetailsDiffPrime_26;
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "function \140table_statistics.table_step_stats_diff\'/2", (MR_String) "mismatches in details");
            return;
          }
        {
          StepDiff_14 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), StepDiff_14, 0) = ((MR_Box) (VarNameA_16));
          MR_hl_field(MR_mktag(0), StepDiff_14, 1) = ((MR_Box) (LookupsDiff_24));
          MR_hl_field(MR_mktag(0), StepDiff_14, 2) = ((MR_Box) (LookupsIsDuplDiff_25));
          MR_hl_field(MR_mktag(0), StepDiff_14, 3) = ((MR_Box) (DetailsDiff_27));
        }
        {
          HeadVar__3_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), HeadVar__3_79, 0) = ((MR_Box) (StepDiff_14));
          MR_hl_field(MR_mktag(1), HeadVar__3_79, 1) = NULL;
        }
        AddrStepDiffs_73 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__3_79, (MR_Integer) 1)));
        *AddrOfHeadVar__3_74 = HeadVar__3_79;
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Var_35;
        next_value_of_HeadVar__2_2 = StepsB_13;
        next_value_of_AddrOfHeadVar__3_74 = AddrStepDiffs_73;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        AddrOfHeadVar__3_74 = next_value_of_AddrOfHeadVar__3_74;
        continue;
      }
    }
    break;
  }
}

static MR_bool MR_CALL 
mercury__table_statistics__table_step_stats_detail_diff_3_p_0(
  MR_Word DetailsA_4,
  MR_Word DetailsB_5,
  MR_Word * DetailsDiff_6)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) DetailsA_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        succeeded = (DetailsB_5 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          *DetailsDiff_6 = (MR_Word) ((MR_Unsigned) 0U);
          succeeded = MR_TRUE;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Integer StartAllocsA_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), DetailsA_4, (MR_Integer) 0))));
        MR_Integer StartBytesA_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), DetailsA_4, (MR_Integer) 1))));
        MR_Integer StartAllocsB_9;
        MR_Integer StartBytesB_10;
        MR_Integer Var_82;
        MR_Integer Var_83;

        succeeded = ((MR_tag((MR_Word) DetailsB_5)) == (MR_Integer) 1);
        if (succeeded)
        {
          StartAllocsB_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), DetailsB_5, (MR_Integer) 0))));
          StartBytesB_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), DetailsB_5, (MR_Integer) 1))));
          Var_82 = (MR_Integer) ((MR_Unsigned) StartAllocsA_7 - (MR_Unsigned) StartAllocsB_9);
          Var_83 = (MR_Integer) ((MR_Unsigned) StartBytesA_8 - (MR_Unsigned) StartBytesB_10);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *DetailsDiff_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_82));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_83));
          }
          succeeded = MR_TRUE;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Integer EnumNodeAllocsA_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), DetailsA_4, (MR_Integer) 0))));
        MR_Integer EnumNodeBytesA_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), DetailsA_4, (MR_Integer) 1))));
        MR_Integer EnumNodeAllocsB_13;
        MR_Integer EnumNodeBytesB_14;
        MR_Integer Var_80;
        MR_Integer Var_81;

        succeeded = ((MR_tag((MR_Word) DetailsB_5)) == (MR_Integer) 2);
        if (succeeded)
        {
          EnumNodeAllocsB_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), DetailsB_5, (MR_Integer) 0))));
          EnumNodeBytesB_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), DetailsB_5, (MR_Integer) 1))));
          Var_80 = (MR_Integer) ((MR_Unsigned) EnumNodeAllocsA_11 - (MR_Unsigned) EnumNodeAllocsB_13);
          Var_81 = (MR_Integer) ((MR_Unsigned) EnumNodeBytesA_12 - (MR_Unsigned) EnumNodeBytesB_14);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *DetailsDiff_6 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Var_80));
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (Var_81));
          }
          succeeded = MR_TRUE;
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), DetailsA_4, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer HashTableAllocsA_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), DetailsA_4, (MR_Integer) 1))));
            MR_Integer HashTableBytesA_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), DetailsA_4, (MR_Integer) 2))));
            MR_Integer HashLinkChunkAllocsA_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), DetailsA_4, (MR_Integer) 3))));
            MR_Integer HashLinkChunkBytesA_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), DetailsA_4, (MR_Integer) 4))));
            MR_Integer HashKeyComparesNotDuplA_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), DetailsA_4, (MR_Integer) 5))));
            MR_Integer HashKeyComparesIsDuplA_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), DetailsA_4, (MR_Integer) 6))));
            MR_Integer HashResizesA_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), DetailsA_4, (MR_Integer) 7))));
            MR_Integer HashResizeOldEntriesA_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), DetailsA_4, (MR_Integer) 8))));
            MR_Integer HashResizeNewEntriesA_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), DetailsA_4, (MR_Integer) 9))));
            MR_Integer HashTableAllocsB_24;
            MR_Integer HashTableBytesB_25;
            MR_Integer HashLinkChunkAllocsB_26;
            MR_Integer HashLinkChunkBytesB_27;
            MR_Integer HashKeyComparesNotDuplB_28;
            MR_Integer HashKeyComparesIsDuplB_29;
            MR_Integer HashResizesB_30;
            MR_Integer HashResizeOldEntriesB_31;
            MR_Integer HashResizeNewEntriesB_32;
            MR_Integer Var_71;
            MR_Integer Var_72;
            MR_Integer Var_73;
            MR_Integer Var_74;
            MR_Integer Var_75;
            MR_Integer Var_76;
            MR_Integer Var_77;
            MR_Integer Var_78;
            MR_Integer Var_79;

            succeeded = ((((MR_tag((MR_Word) DetailsB_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), DetailsB_5, (MR_Integer) 0)))) == (MR_Integer) 0)));
            if (succeeded)
            {
              HashTableAllocsB_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), DetailsB_5, (MR_Integer) 1))));
              HashTableBytesB_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), DetailsB_5, (MR_Integer) 2))));
              HashLinkChunkAllocsB_26 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), DetailsB_5, (MR_Integer) 3))));
              HashLinkChunkBytesB_27 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), DetailsB_5, (MR_Integer) 4))));
              HashKeyComparesNotDuplB_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), DetailsB_5, (MR_Integer) 5))));
              HashKeyComparesIsDuplB_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), DetailsB_5, (MR_Integer) 6))));
              HashResizesB_30 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), DetailsB_5, (MR_Integer) 7))));
              HashResizeOldEntriesB_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), DetailsB_5, (MR_Integer) 8))));
              HashResizeNewEntriesB_32 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), DetailsB_5, (MR_Integer) 9))));
              Var_71 = (MR_Integer) ((MR_Unsigned) HashTableAllocsA_15 - (MR_Unsigned) HashTableAllocsB_24);
              Var_72 = (MR_Integer) ((MR_Unsigned) HashTableBytesA_16 - (MR_Unsigned) HashTableBytesB_25);
              Var_73 = (MR_Integer) ((MR_Unsigned) HashLinkChunkAllocsA_17 - (MR_Unsigned) HashLinkChunkAllocsB_26);
              Var_74 = (MR_Integer) ((MR_Unsigned) HashLinkChunkBytesA_18 - (MR_Unsigned) HashLinkChunkBytesB_27);
              Var_75 = (MR_Integer) ((MR_Unsigned) HashKeyComparesNotDuplA_19 - (MR_Unsigned) HashKeyComparesNotDuplB_28);
              Var_76 = (MR_Integer) ((MR_Unsigned) HashKeyComparesIsDuplA_20 - (MR_Unsigned) HashKeyComparesIsDuplB_29);
              Var_77 = (MR_Integer) ((MR_Unsigned) HashResizesA_21 - (MR_Unsigned) HashResizesB_30);
              Var_78 = (MR_Integer) ((MR_Unsigned) HashResizeOldEntriesA_22 - (MR_Unsigned) HashResizeOldEntriesB_31);
              Var_79 = (MR_Integer) ((MR_Unsigned) HashResizeNewEntriesA_23 - (MR_Unsigned) HashResizeNewEntriesB_32);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL));
                *DetailsDiff_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_71));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_72));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Var_73));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (Var_74));
                MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (Var_75));
                MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (Var_76));
                MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (Var_77));
                MR_hl_field(MR_mktag(3), base, 8) = ((MR_Box) (Var_78));
                MR_hl_field(MR_mktag(3), base, 9) = ((MR_Box) (Var_79));
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer DuNodeAllocsA_33 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), DetailsA_4, (MR_Integer) 1))));
            MR_Integer DuNodeBytesA_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), DetailsA_4, (MR_Integer) 2))));
            MR_Integer DuArgLookupsA_35 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), DetailsA_4, (MR_Integer) 3))));
            MR_Integer DuExistLookupsA_36 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), DetailsA_4, (MR_Integer) 4))));
            MR_Integer DuNodeAllocsB_37;
            MR_Integer DuNodeBytesB_38;
            MR_Integer DuArgLookupsB_39;
            MR_Integer DuExistLookupsB_40;
            MR_Integer Var_56;
            MR_Integer Var_57;
            MR_Integer Var_58;
            MR_Integer Var_59;
            MR_Integer Var_60;
            MR_Integer Var_61;
            MR_Integer Var_62;
            MR_Integer Var_63;
            MR_Integer Var_64;
            MR_Integer Var_65;
            MR_Integer Var_66;
            MR_Integer Var_67;
            MR_Integer Var_68;
            MR_Integer Var_69;
            MR_Integer Var_70;
            MR_Integer EnumNodeAllocsA_84 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), DetailsA_4, (MR_Integer) 5))));
            MR_Integer EnumNodeBytesA_85 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), DetailsA_4, (MR_Integer) 6))));
            MR_Integer EnumNodeAllocsB_86;
            MR_Integer EnumNodeBytesB_87;
            MR_Integer HashTableAllocsA_88 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), DetailsA_4, (MR_Integer) 7))));
            MR_Integer HashTableBytesA_89 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), DetailsA_4, (MR_Integer) 8))));
            MR_Integer HashLinkChunkAllocsA_90 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), DetailsA_4, (MR_Integer) 9))));
            MR_Integer HashLinkChunkBytesA_91 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), DetailsA_4, (MR_Integer) 10))));
            MR_Integer HashKeyComparesNotDuplA_92 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), DetailsA_4, (MR_Integer) 11))));
            MR_Integer HashKeyComparesIsDuplA_93 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), DetailsA_4, (MR_Integer) 12))));
            MR_Integer HashResizesA_94 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), DetailsA_4, (MR_Integer) 13))));
            MR_Integer HashResizeOldEntriesA_95 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), DetailsA_4, (MR_Integer) 14))));
            MR_Integer HashResizeNewEntriesA_96 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), DetailsA_4, (MR_Integer) 15))));
            MR_Integer HashTableAllocsB_97;
            MR_Integer HashTableBytesB_98;
            MR_Integer HashLinkChunkAllocsB_99;
            MR_Integer HashLinkChunkBytesB_100;
            MR_Integer HashKeyComparesNotDuplB_101;
            MR_Integer HashKeyComparesIsDuplB_102;
            MR_Integer HashResizesB_103;
            MR_Integer HashResizeOldEntriesB_104;
            MR_Integer HashResizeNewEntriesB_105;

            succeeded = ((((MR_tag((MR_Word) DetailsB_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), DetailsB_5, (MR_Integer) 0)))) == (MR_Integer) 1)));
            if (succeeded)
            {
              DuNodeAllocsB_37 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), DetailsB_5, (MR_Integer) 1))));
              DuNodeBytesB_38 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), DetailsB_5, (MR_Integer) 2))));
              DuArgLookupsB_39 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), DetailsB_5, (MR_Integer) 3))));
              DuExistLookupsB_40 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), DetailsB_5, (MR_Integer) 4))));
              EnumNodeAllocsB_86 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), DetailsB_5, (MR_Integer) 5))));
              EnumNodeBytesB_87 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), DetailsB_5, (MR_Integer) 6))));
              HashTableAllocsB_97 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), DetailsB_5, (MR_Integer) 7))));
              HashTableBytesB_98 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), DetailsB_5, (MR_Integer) 8))));
              HashLinkChunkAllocsB_99 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), DetailsB_5, (MR_Integer) 9))));
              HashLinkChunkBytesB_100 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), DetailsB_5, (MR_Integer) 10))));
              HashKeyComparesNotDuplB_101 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), DetailsB_5, (MR_Integer) 11))));
              HashKeyComparesIsDuplB_102 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), DetailsB_5, (MR_Integer) 12))));
              HashResizesB_103 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), DetailsB_5, (MR_Integer) 13))));
              HashResizeOldEntriesB_104 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), DetailsB_5, (MR_Integer) 14))));
              HashResizeNewEntriesB_105 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), DetailsB_5, (MR_Integer) 15))));
              Var_56 = (MR_Integer) ((MR_Unsigned) DuNodeAllocsA_33 - (MR_Unsigned) DuNodeAllocsB_37);
              Var_57 = (MR_Integer) ((MR_Unsigned) DuNodeBytesA_34 - (MR_Unsigned) DuNodeBytesB_38);
              Var_58 = (MR_Integer) ((MR_Unsigned) DuArgLookupsA_35 - (MR_Unsigned) DuArgLookupsB_39);
              Var_59 = (MR_Integer) ((MR_Unsigned) DuExistLookupsA_36 - (MR_Unsigned) DuExistLookupsB_40);
              Var_60 = (MR_Integer) ((MR_Unsigned) EnumNodeAllocsA_84 - (MR_Unsigned) EnumNodeAllocsB_86);
              Var_61 = (MR_Integer) ((MR_Unsigned) EnumNodeBytesA_85 - (MR_Unsigned) EnumNodeBytesB_87);
              Var_62 = (MR_Integer) ((MR_Unsigned) HashTableAllocsA_88 - (MR_Unsigned) HashTableAllocsB_97);
              Var_63 = (MR_Integer) ((MR_Unsigned) HashTableBytesA_89 - (MR_Unsigned) HashTableBytesB_98);
              Var_64 = (MR_Integer) ((MR_Unsigned) HashLinkChunkAllocsA_90 - (MR_Unsigned) HashLinkChunkAllocsB_99);
              Var_65 = (MR_Integer) ((MR_Unsigned) HashLinkChunkBytesA_91 - (MR_Unsigned) HashLinkChunkBytesB_100);
              Var_66 = (MR_Integer) ((MR_Unsigned) HashKeyComparesNotDuplA_92 - (MR_Unsigned) HashKeyComparesNotDuplB_101);
              Var_67 = (MR_Integer) ((MR_Unsigned) HashKeyComparesIsDuplA_93 - (MR_Unsigned) HashKeyComparesIsDuplB_102);
              Var_68 = (MR_Integer) ((MR_Unsigned) HashResizesA_94 - (MR_Unsigned) HashResizesB_103);
              Var_69 = (MR_Integer) ((MR_Unsigned) HashResizeOldEntriesA_95 - (MR_Unsigned) HashResizeOldEntriesB_104);
              Var_70 = (MR_Integer) ((MR_Unsigned) HashResizeNewEntriesA_96 - (MR_Unsigned) HashResizeNewEntriesB_105);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL));
                *DetailsDiff_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_56));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_57));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Var_58));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (Var_59));
                MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (Var_60));
                MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (Var_61));
                MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (Var_62));
                MR_hl_field(MR_mktag(3), base, 8) = ((MR_Box) (Var_63));
                MR_hl_field(MR_mktag(3), base, 9) = ((MR_Box) (Var_64));
                MR_hl_field(MR_mktag(3), base, 10) = ((MR_Box) (Var_65));
                MR_hl_field(MR_mktag(3), base, 11) = ((MR_Box) (Var_66));
                MR_hl_field(MR_mktag(3), base, 12) = ((MR_Box) (Var_67));
                MR_hl_field(MR_mktag(3), base, 13) = ((MR_Box) (Var_68));
                MR_hl_field(MR_mktag(3), base, 14) = ((MR_Box) (Var_69));
                MR_hl_field(MR_mktag(3), base, 15) = ((MR_Box) (Var_70));
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer Var_41;
            MR_Integer Var_42;
            MR_Integer Var_43;
            MR_Integer Var_44;
            MR_Integer Var_45;
            MR_Integer Var_46;
            MR_Integer Var_47;
            MR_Integer Var_48;
            MR_Integer Var_49;
            MR_Integer Var_50;
            MR_Integer Var_51;
            MR_Integer Var_52;
            MR_Integer Var_53;
            MR_Integer Var_54;
            MR_Integer Var_55;
            MR_Integer EnumNodeAllocsA_106 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), DetailsA_4, (MR_Integer) 5))));
            MR_Integer EnumNodeBytesA_107 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), DetailsA_4, (MR_Integer) 6))));
            MR_Integer EnumNodeAllocsB_108;
            MR_Integer EnumNodeBytesB_109;
            MR_Integer HashTableAllocsA_110 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), DetailsA_4, (MR_Integer) 7))));
            MR_Integer HashTableBytesA_111 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), DetailsA_4, (MR_Integer) 8))));
            MR_Integer HashLinkChunkAllocsA_112 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), DetailsA_4, (MR_Integer) 9))));
            MR_Integer HashLinkChunkBytesA_113 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), DetailsA_4, (MR_Integer) 10))));
            MR_Integer HashKeyComparesNotDuplA_114 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), DetailsA_4, (MR_Integer) 11))));
            MR_Integer HashKeyComparesIsDuplA_115 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), DetailsA_4, (MR_Integer) 12))));
            MR_Integer HashResizesA_116 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), DetailsA_4, (MR_Integer) 13))));
            MR_Integer HashResizeOldEntriesA_117 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), DetailsA_4, (MR_Integer) 14))));
            MR_Integer HashResizeNewEntriesA_118 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), DetailsA_4, (MR_Integer) 15))));
            MR_Integer HashTableAllocsB_119;
            MR_Integer HashTableBytesB_120;
            MR_Integer HashLinkChunkAllocsB_121;
            MR_Integer HashLinkChunkBytesB_122;
            MR_Integer HashKeyComparesNotDuplB_123;
            MR_Integer HashKeyComparesIsDuplB_124;
            MR_Integer HashResizesB_125;
            MR_Integer HashResizeOldEntriesB_126;
            MR_Integer HashResizeNewEntriesB_127;
            MR_Integer DuNodeAllocsA_128 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), DetailsA_4, (MR_Integer) 1))));
            MR_Integer DuNodeBytesA_129 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), DetailsA_4, (MR_Integer) 2))));
            MR_Integer DuArgLookupsA_130 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), DetailsA_4, (MR_Integer) 3))));
            MR_Integer DuExistLookupsA_131 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), DetailsA_4, (MR_Integer) 4))));
            MR_Integer DuNodeAllocsB_132;
            MR_Integer DuNodeBytesB_133;
            MR_Integer DuArgLookupsB_134;
            MR_Integer DuExistLookupsB_135;

            succeeded = ((((MR_tag((MR_Word) DetailsB_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), DetailsB_5, (MR_Integer) 0)))) == (MR_Integer) 2)));
            if (succeeded)
            {
              DuNodeAllocsB_132 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), DetailsB_5, (MR_Integer) 1))));
              DuNodeBytesB_133 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), DetailsB_5, (MR_Integer) 2))));
              DuArgLookupsB_134 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), DetailsB_5, (MR_Integer) 3))));
              DuExistLookupsB_135 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), DetailsB_5, (MR_Integer) 4))));
              EnumNodeAllocsB_108 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), DetailsB_5, (MR_Integer) 5))));
              EnumNodeBytesB_109 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), DetailsB_5, (MR_Integer) 6))));
              HashTableAllocsB_119 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), DetailsB_5, (MR_Integer) 7))));
              HashTableBytesB_120 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), DetailsB_5, (MR_Integer) 8))));
              HashLinkChunkAllocsB_121 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), DetailsB_5, (MR_Integer) 9))));
              HashLinkChunkBytesB_122 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), DetailsB_5, (MR_Integer) 10))));
              HashKeyComparesNotDuplB_123 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), DetailsB_5, (MR_Integer) 11))));
              HashKeyComparesIsDuplB_124 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), DetailsB_5, (MR_Integer) 12))));
              HashResizesB_125 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), DetailsB_5, (MR_Integer) 13))));
              HashResizeOldEntriesB_126 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), DetailsB_5, (MR_Integer) 14))));
              HashResizeNewEntriesB_127 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), DetailsB_5, (MR_Integer) 15))));
              Var_41 = (MR_Integer) ((MR_Unsigned) DuNodeAllocsA_128 - (MR_Unsigned) DuNodeAllocsB_132);
              Var_42 = (MR_Integer) ((MR_Unsigned) DuNodeBytesA_129 - (MR_Unsigned) DuNodeBytesB_133);
              Var_43 = (MR_Integer) ((MR_Unsigned) DuArgLookupsA_130 - (MR_Unsigned) DuArgLookupsB_134);
              Var_44 = (MR_Integer) ((MR_Unsigned) DuExistLookupsA_131 - (MR_Unsigned) DuExistLookupsB_135);
              Var_45 = (MR_Integer) ((MR_Unsigned) EnumNodeAllocsA_106 - (MR_Unsigned) EnumNodeAllocsB_108);
              Var_46 = (MR_Integer) ((MR_Unsigned) EnumNodeBytesA_107 - (MR_Unsigned) EnumNodeBytesB_109);
              Var_47 = (MR_Integer) ((MR_Unsigned) HashTableAllocsA_110 - (MR_Unsigned) HashTableAllocsB_119);
              Var_48 = (MR_Integer) ((MR_Unsigned) HashTableBytesA_111 - (MR_Unsigned) HashTableBytesB_120);
              Var_49 = (MR_Integer) ((MR_Unsigned) HashLinkChunkAllocsA_112 - (MR_Unsigned) HashLinkChunkAllocsB_121);
              Var_50 = (MR_Integer) ((MR_Unsigned) HashLinkChunkBytesA_113 - (MR_Unsigned) HashLinkChunkBytesB_122);
              Var_51 = (MR_Integer) ((MR_Unsigned) HashKeyComparesNotDuplA_114 - (MR_Unsigned) HashKeyComparesNotDuplB_123);
              Var_52 = (MR_Integer) ((MR_Unsigned) HashKeyComparesIsDuplA_115 - (MR_Unsigned) HashKeyComparesIsDuplB_124);
              Var_53 = (MR_Integer) ((MR_Unsigned) HashResizesA_116 - (MR_Unsigned) HashResizesB_125);
              Var_54 = (MR_Integer) ((MR_Unsigned) HashResizeOldEntriesA_117 - (MR_Unsigned) HashResizeOldEntriesB_126);
              Var_55 = (MR_Integer) ((MR_Unsigned) HashResizeNewEntriesA_118 - (MR_Unsigned) HashResizeNewEntriesB_127);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL));
                *DetailsDiff_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_41));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_42));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Var_43));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (Var_44));
                MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (Var_45));
                MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (Var_46));
                MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (Var_47));
                MR_hl_field(MR_mktag(3), base, 8) = ((MR_Box) (Var_48));
                MR_hl_field(MR_mktag(3), base, 9) = ((MR_Box) (Var_49));
                MR_hl_field(MR_mktag(3), base, 10) = ((MR_Box) (Var_50));
                MR_hl_field(MR_mktag(3), base, 11) = ((MR_Box) (Var_51));
                MR_hl_field(MR_mktag(3), base, 12) = ((MR_Box) (Var_52));
                MR_hl_field(MR_mktag(3), base, 13) = ((MR_Box) (Var_53));
                MR_hl_field(MR_mktag(3), base, 14) = ((MR_Box) (Var_54));
                MR_hl_field(MR_mktag(3), base, 15) = ((MR_Box) (Var_55));
              }
              succeeded = MR_TRUE;
            }
          }
          break;
      }
      break;
  }
  return succeeded;
}

static MR_bool MR_CALL 
mercury__table_statistics____Unify____ml_table_stats_ptr_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__table_statistics____Unify____ml_table_stats_ptr_0_0(((MR_Box) (wrapper_arg_1)), ((MR_Box) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__table_statistics____Compare____ml_table_stats_ptr_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__table_statistics____Compare____ml_table_stats_ptr_0_0(&conv0_HeadVar__1_1, ((MR_Box) (wrapper_arg_2)), ((MR_Box) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__table_statistics____Unify____ml_table_step_desc_ptr_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__table_statistics____Unify____ml_table_step_desc_ptr_0_0(((MR_Box) (wrapper_arg_1)), ((MR_Box) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__table_statistics____Compare____ml_table_step_desc_ptr_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__table_statistics____Compare____ml_table_step_desc_ptr_0_0(&conv0_HeadVar__1_1, ((MR_Box) (wrapper_arg_2)), ((MR_Box) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__table_statistics____Unify____proc_table_statistics_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__table_statistics____Unify____proc_table_statistics_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__table_statistics____Compare____proc_table_statistics_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__table_statistics____Compare____proc_table_statistics_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__table_statistics____Unify____table_stats_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__table_statistics____Unify____table_stats_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__table_statistics____Compare____table_stats_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__table_statistics____Compare____table_stats_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__table_statistics____Unify____table_stats_curr_prev_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__table_statistics____Unify____table_stats_curr_prev_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__table_statistics____Compare____table_stats_curr_prev_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__table_statistics____Compare____table_stats_curr_prev_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__table_statistics____Unify____table_step_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__table_statistics____Unify____table_step_kind_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__table_statistics____Compare____table_step_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__table_statistics____Compare____table_step_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__table_statistics____Unify____table_step_stat_details_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__table_statistics____Unify____table_step_stat_details_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__table_statistics____Compare____table_step_stat_details_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__table_statistics____Compare____table_step_stat_details_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__table_statistics____Unify____table_step_stats_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__table_statistics____Unify____table_step_stats_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__table_statistics____Compare____table_step_stats_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__table_statistics____Compare____table_step_stats_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__table_statistics__init(void)
{
}

void mercury__table_statistics__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__table_statistics__table_statistics__type_ctor_info_ml_table_stats_ptr_0);
	MR_register_type_ctor_info(&mercury__table_statistics__table_statistics__type_ctor_info_ml_table_step_desc_ptr_0);
	MR_register_type_ctor_info(&mercury__table_statistics__table_statistics__type_ctor_info_proc_table_statistics_0);
	MR_register_type_ctor_info(&mercury__table_statistics__table_statistics__type_ctor_info_table_stats_0);
	MR_register_type_ctor_info(&mercury__table_statistics__table_statistics__type_ctor_info_table_stats_curr_prev_0);
	MR_register_type_ctor_info(&mercury__table_statistics__table_statistics__type_ctor_info_table_step_kind_0);
	MR_register_type_ctor_info(&mercury__table_statistics__table_statistics__type_ctor_info_table_step_stat_details_0);
	MR_register_type_ctor_info(&mercury__table_statistics__table_statistics__type_ctor_info_table_step_stats_0);
}

void mercury__table_statistics__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__table_statistics__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module table_statistics.
