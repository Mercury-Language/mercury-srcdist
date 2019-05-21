/*
** Automatically generated from `table_statistics.m'
** by the Mercury compiler,
** version rotd-2017-07-31
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


/* :- module table_statistics. */
/* :- implementation. */

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
#include "erlang_rtti_implementation.mih"
#include "exception.mih"
#include "float.mih"
#include "int.mih"
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
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
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

static const MR_EnumFunctorDescPtr mercury__table_statistics__table_statistics__enum_value_ordered_table_step_kind_0[14];

static const MR_EnumFunctorDescPtr mercury__table_statistics__table_statistics__enum_name_ordered_table_step_kind_0[14];

static const MR_Integer mercury__table_statistics__table_statistics__functor_number_map_table_step_kind_0[14];

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

static MR_Integer MR_CALL 
mercury__table_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static void MR_CALL 
mercury__table_statistics__copy_current_stats_to_prev_5_p_0(
  MR_Box mercury__table_statistics__CurPtr_1,
  MR_Box mercury__table_statistics__PrevPtr_2,
  MR_Integer mercury__table_statistics__NumSteps_3);

static void MR_CALL 
mercury__table_statistics__get_one_table_step_stat_details_26_p_0(
  MR_Box mercury__table_statistics__StepDescsPtr_1,
  MR_Box mercury__table_statistics__StatsStructPtr_2,
  MR_Integer mercury__table_statistics__StepNum_3,
  MR_String * mercury__table_statistics__VarName_4,
  MR_Integer * mercury__table_statistics__NumLookups_5,
  MR_Integer * mercury__table_statistics__NumLookupsIsDupl_6,
  MR_Integer * mercury__table_statistics__KindInt_7,
  MR_Integer * mercury__table_statistics__HashTableAllocs_8,
  MR_Integer * mercury__table_statistics__HashTableBytes_9,
  MR_Integer * mercury__table_statistics__HashLinkChunkAllocs_10,
  MR_Integer * mercury__table_statistics__HashLinkChunkBytes_11,
  MR_Integer * mercury__table_statistics__HashKeyComparesNotDupl_12,
  MR_Integer * mercury__table_statistics__HashKeyComparesIsDupl_13,
  MR_Integer * mercury__table_statistics__HashResizes_14,
  MR_Integer * mercury__table_statistics__HashResizeOldEntries_15,
  MR_Integer * mercury__table_statistics__HashResizeNewEntries_16,
  MR_Integer * mercury__table_statistics__EnumNodeAllocs_17,
  MR_Integer * mercury__table_statistics__EnumNodeBytes_18,
  MR_Integer * mercury__table_statistics__DuNodeAllocs_19,
  MR_Integer * mercury__table_statistics__DuNodeBytes_20,
  MR_Integer * mercury__table_statistics__DuArgLookups_21,
  MR_Integer * mercury__table_statistics__DuExistLookups_22,
  MR_Integer * mercury__table_statistics__StartAllocs_23,
  MR_Integer * mercury__table_statistics__StartBytes_24);

static void MR_CALL 
mercury__table_statistics__get_one_table_overall_stats_5_p_0(
  MR_Box mercury__table_statistics__StatsPtr_1,
  MR_Integer * mercury__table_statistics__NumLookups_2,
  MR_Integer * mercury__table_statistics__NumLookupsIsDupl_3);

static void MR_CALL 
mercury__table_statistics__get_proc_info_direct_fields_12_p_0(
  MR_Box mercury__table_statistics__Info_1,
  MR_Integer * mercury__table_statistics__HasAnswerTable_2,
  MR_Integer * mercury__table_statistics__NumInputs_3,
  MR_Integer * mercury__table_statistics__NumOutputs_4,
  MR_Box * mercury__table_statistics__InputStepDescsPtr_5,
  MR_Box * mercury__table_statistics__OutputStepDescsPtr_6,
  MR_Box * mercury__table_statistics__CurCallStatsPtr_7,
  MR_Box * mercury__table_statistics__PrevCallStatsPtr_8,
  MR_Box * mercury__table_statistics__CurAnswerStatsPtr_9,
  MR_Box * mercury__table_statistics__PrevAnswerStatsPtr_10);

static void MR_CALL 
mercury__table_statistics__get_tabling_stats_4_p_0(
  MR_Box mercury__table_statistics__Info_5,
  MR_Word * mercury__table_statistics__Statistics_6);

static void MR_CALL 
mercury__table_statistics__get_one_table_stats_step_loop_8_p_0(
  MR_Box mercury__table_statistics__StepDescsPtr_9,
  MR_Box mercury__table_statistics__StatsPtr_10,
  MR_Integer mercury__table_statistics__CurStep_11,
  MR_Integer mercury__table_statistics__NumSteps_12,
  MR_Word mercury__table_statistics__STATE_VARIABLE_StepStats_0_15,
  MR_Word * mercury__table_statistics__STATE_VARIABLE_StepStats_16);

static void MR_CALL 
mercury__table_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_50_95_95_91_50_93_95_48_6_p_in__list_0(
  MR_Word mercury__table_statistics__Var_24,
  MR_Word mercury__table_statistics__HeadVar__2_2,
  MR_Integer mercury__table_statistics__HeadVar__3_3,
  MR_Integer * mercury__table_statistics__HeadVar__4_4);

static void MR_CALL 
mercury__table_statistics__write_table_step_stats_5_p_0(
  MR_Word mercury__table_statistics__OutStream_6,
  MR_Word mercury__table_statistics__Step_7,
  MR_Integer mercury__table_statistics__StepNum_8);

static void MR_CALL 
mercury__table_statistics__write_table_step_stats_du_7_p_0(
  MR_Word mercury__table_statistics__OutStream_8,
  MR_Integer mercury__table_statistics__DuNodeAllocs_9,
  MR_Integer mercury__table_statistics__DuNodeBytes_10,
  MR_Integer mercury__table_statistics__DuArgLookups_11,
  MR_Integer mercury__table_statistics__DuExistLookups_12);

static void MR_CALL 
mercury__table_statistics__write_table_step_stats_hash_12_p_0(
  MR_Word mercury__table_statistics__OutStream_13,
  MR_Integer mercury__table_statistics__HashTableAllocs_14,
  MR_Integer mercury__table_statistics__HashTableBytes_15,
  MR_Integer mercury__table_statistics__HashLinkChunkAllocs_16,
  MR_Integer mercury__table_statistics__HashLinkChunkBytes_17,
  MR_Integer mercury__table_statistics__HashKeyComparesNotDupl_18,
  MR_Integer mercury__table_statistics__HashKeyComparesIsDupl_19,
  MR_Integer mercury__table_statistics__HashResizes_20,
  MR_Integer mercury__table_statistics__HashResizeOldEntries_21,
  MR_Integer mercury__table_statistics__HashResizeNewEntries_22);

static void MR_CALL 
mercury__table_statistics__write_table_step_stats_enum_5_p_0(
  MR_Word mercury__table_statistics__OutStream_6,
  MR_Integer mercury__table_statistics__EnumNodeAllocs_7,
  MR_Integer mercury__table_statistics__EnumNodeBytes_8);

static void MR_CALL 
mercury__table_statistics__write_table_step_stats_start_5_p_0(
  MR_Word mercury__table_statistics__OutStream_6,
  MR_Integer mercury__table_statistics__StartAllocs_7,
  MR_Integer mercury__table_statistics__StartBytes_8);

static void MR_CALL 
mercury__table_statistics__write_table_step_stats_header_8_p_0(
  MR_Word mercury__table_statistics__OutStream_9,
  MR_String mercury__table_statistics__VarName_10,
  MR_Integer mercury__table_statistics__StepNum_11,
  MR_String mercury__table_statistics__KindStr_12,
  MR_Integer mercury__table_statistics__Lookups_13,
  MR_Integer mercury__table_statistics__LookupsIsDupl_14);

static MR_String MR_CALL 
mercury__table_statistics__percentage_str_2_f_0(
  MR_Integer mercury__table_statistics__A_4,
  MR_Integer mercury__table_statistics__B_5);

static MR_bool MR_CALL 
mercury__table_statistics__table_step_stats_detail_diff_3_p_0(
  MR_Word mercury__table_statistics__DetailsA_4,
  MR_Word mercury__table_statistics__DetailsB_5,
  MR_Word * mercury__table_statistics__DetailsDiff_6);

static MR_bool MR_CALL 
mercury__table_statistics____Unify____ml_table_stats_ptr_0_0_10001(
  MR_Box mercury__table_statistics__wrapper_arg_1,
  MR_Box mercury__table_statistics__wrapper_arg_2);

static void MR_CALL 
mercury__table_statistics____Compare____ml_table_stats_ptr_0_0_10001(
  MR_Box * mercury__table_statistics__wrapper_arg_1,
  MR_Box mercury__table_statistics__wrapper_arg_2,
  MR_Box mercury__table_statistics__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__table_statistics____Unify____ml_table_step_desc_ptr_0_0_10001(
  MR_Box mercury__table_statistics__wrapper_arg_1,
  MR_Box mercury__table_statistics__wrapper_arg_2);

static void MR_CALL 
mercury__table_statistics____Compare____ml_table_step_desc_ptr_0_0_10001(
  MR_Box * mercury__table_statistics__wrapper_arg_1,
  MR_Box mercury__table_statistics__wrapper_arg_2,
  MR_Box mercury__table_statistics__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__table_statistics____Unify____proc_table_statistics_0_0_10001(
  MR_Box mercury__table_statistics__wrapper_arg_1,
  MR_Box mercury__table_statistics__wrapper_arg_2);

static void MR_CALL 
mercury__table_statistics____Compare____proc_table_statistics_0_0_10001(
  MR_Box * mercury__table_statistics__wrapper_arg_1,
  MR_Box mercury__table_statistics__wrapper_arg_2,
  MR_Box mercury__table_statistics__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__table_statistics____Unify____table_stats_0_0_10001(
  MR_Box mercury__table_statistics__wrapper_arg_1,
  MR_Box mercury__table_statistics__wrapper_arg_2);

static void MR_CALL 
mercury__table_statistics____Compare____table_stats_0_0_10001(
  MR_Box * mercury__table_statistics__wrapper_arg_1,
  MR_Box mercury__table_statistics__wrapper_arg_2,
  MR_Box mercury__table_statistics__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__table_statistics____Unify____table_stats_curr_prev_0_0_10001(
  MR_Box mercury__table_statistics__wrapper_arg_1,
  MR_Box mercury__table_statistics__wrapper_arg_2);

static void MR_CALL 
mercury__table_statistics____Compare____table_stats_curr_prev_0_0_10001(
  MR_Box * mercury__table_statistics__wrapper_arg_1,
  MR_Box mercury__table_statistics__wrapper_arg_2,
  MR_Box mercury__table_statistics__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__table_statistics____Unify____table_step_kind_0_0_10001(
  MR_Box mercury__table_statistics__wrapper_arg_1,
  MR_Box mercury__table_statistics__wrapper_arg_2);

static void MR_CALL 
mercury__table_statistics____Compare____table_step_kind_0_0_10001(
  MR_Box * mercury__table_statistics__wrapper_arg_1,
  MR_Box mercury__table_statistics__wrapper_arg_2,
  MR_Box mercury__table_statistics__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__table_statistics____Unify____table_step_stat_details_0_0_10001(
  MR_Box mercury__table_statistics__wrapper_arg_1,
  MR_Box mercury__table_statistics__wrapper_arg_2);

static void MR_CALL 
mercury__table_statistics____Compare____table_step_stat_details_0_0_10001(
  MR_Box * mercury__table_statistics__wrapper_arg_1,
  MR_Box mercury__table_statistics__wrapper_arg_2,
  MR_Box mercury__table_statistics__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__table_statistics____Unify____table_step_stats_0_0_10001(
  MR_Box mercury__table_statistics__wrapper_arg_1,
  MR_Box mercury__table_statistics__wrapper_arg_2);

static void MR_CALL 
mercury__table_statistics____Compare____table_step_stats_0_0_10001(
  MR_Box * mercury__table_statistics__wrapper_arg_1,
  MR_Box mercury__table_statistics__wrapper_arg_2,
  MR_Box mercury__table_statistics__wrapper_arg_3);


static /* final */ const MR_Box mercury__table_statistics_scalar_common_1[4][2];

static /* final */ const MR_Box mercury__table_statistics_scalar_common_2[2][3];

static /* final */ const MR_Box mercury__table_statistics_scalar_common_3[1][4];

static /* final */ const MR_Box mercury__table_statistics_scalar_common_4[2][5];

static /* final */ const MR_Box mercury__table_statistics_scalar_common_5[3][1];




static /* final */ const MR_Box mercury__table_statistics_scalar_common_1[4][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__table_statistics__table_statistics__type_ctor_info_table_step_stats_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__table_statistics__table_statistics__type_ctor_info_table_stats_curr_prev_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__table_statistics_scalar_common_2[1])),
    ((MR_Box) (&mercury__table_statistics_scalar_common_2[1]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__table_statistics_scalar_common_1[2])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box mercury__table_statistics_scalar_common_2[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box mercury__table_statistics_scalar_common_3[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__table_statistics_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__table_statistics_scalar_common_4[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__table_statistics_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__table_statistics_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__table_statistics_scalar_common_5[3][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 2 */
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
#include "io.mh"
#include "math.mh"
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
#include "version_array.mh"

#line 160 "table_statistics.m"
void 
MR_get_tabling_stats(
  MR_ProcTableInfoPtr mercury__table_statistics__Info_5,
  MR_Word * mercury__table_statistics__Statistics_6)
#line 160 "table_statistics.m"
{
#line 160 "table_statistics.m"
	MR_Box mercury__table_statistics__boxed_Info_5;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ProcTableInfoPtr, mercury__table_statistics__Info_5, mercury__table_statistics__boxed_Info_5);
	mercury__table_statistics__get_tabling_stats_4_p_0(mercury__table_statistics__boxed_Info_5, (MR_Word *) mercury__table_statistics__Statistics_6);
}


const MR_TypeCtorInfo_Struct mercury__table_statistics__table_statistics__type_ctor_info_ml_table_stats_ptr_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_FOREIGN,
  ((MR_Box) (mercury__table_statistics____Unify____ml_table_stats_ptr_0_0_10001)),
  ((MR_Box) (mercury__table_statistics____Compare____ml_table_stats_ptr_0_0_10001)),
  (MR_String) "table_statistics",
  (MR_String) "ml_table_stats_ptr",
  {     NULL },
  {     NULL },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct mercury__table_statistics__table_statistics__type_ctor_info_ml_table_step_desc_ptr_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_FOREIGN,
  ((MR_Box) (mercury__table_statistics____Unify____ml_table_step_desc_ptr_0_0_10001)),
  ((MR_Box) (mercury__table_statistics____Compare____ml_table_step_desc_ptr_0_0_10001)),
  (MR_String) "table_statistics",
  (MR_String) "ml_table_step_desc_ptr",
  {     NULL },
  {     NULL },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 mercury__table_statistics__maybe__ti_maybe_1table_statistics__type_ctor_info_table_stats_curr_prev_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__table_statistics__table_statistics__type_ctor_info_table_stats_curr_prev_0
  }
};

static const MR_PseudoTypeInfo mercury__table_statistics__table_statistics__field_types_proc_table_statistics_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__table_statistics__table_statistics__type_ctor_info_table_stats_curr_prev_0,
  (MR_PseudoTypeInfo) &mercury__table_statistics__maybe__ti_maybe_1table_statistics__type_ctor_info_table_stats_curr_prev_0
};

static const MR_ConstString mercury__table_statistics__table_statistics__field_names_proc_table_statistics_0_0[2] = {
  (MR_String) "call_table_stats",
  (MR_String) "maybe_answer_table_stats"
};

static const MR_DuFunctorDesc mercury__table_statistics__table_statistics__du_functor_desc_proc_table_statistics_0_0 = {
  (MR_String) "proc_table_statistics",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__table_statistics__table_statistics__field_types_proc_table_statistics_0_0,
  mercury__table_statistics__table_statistics__field_names_proc_table_statistics_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__table_statistics__table_statistics__du_stag_ordered_proc_table_statistics_0_0[1] = {
  &mercury__table_statistics__table_statistics__du_functor_desc_proc_table_statistics_0_0
};

static const MR_DuPtagLayout mercury__table_statistics__table_statistics__du_ptag_ordered_proc_table_statistics_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__table_statistics__table_statistics__du_stag_ordered_proc_table_statistics_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__table_statistics____Unify____proc_table_statistics_0_0_10001)),
  ((MR_Box) (mercury__table_statistics____Compare____proc_table_statistics_0_0_10001)),
  (MR_String) "table_statistics",
  (MR_String) "proc_table_statistics",
  {     mercury__table_statistics__table_statistics__du_name_ordered_proc_table_statistics_0 },
  {     mercury__table_statistics__table_statistics__du_ptag_ordered_proc_table_statistics_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__table_statistics__table_statistics__functor_number_map_proc_table_statistics_0
};

static const MR_FA_TypeInfo_Struct1 mercury__table_statistics__list__ti_list_1table_statistics__type_ctor_info_table_step_stats_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__table_statistics__table_statistics__type_ctor_info_table_step_stats_0
  }
};

static const MR_PseudoTypeInfo mercury__table_statistics__table_statistics__field_types_table_stats_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__table_statistics__list__ti_list_1table_statistics__type_ctor_info_table_step_stats_0
};

static const MR_ConstString mercury__table_statistics__table_statistics__field_names_table_stats_0_0[3] = {
  (MR_String) "num_lookups",
  (MR_String) "num_lookups_is_dupl",
  (MR_String) "step_statistics"
};

static const MR_DuFunctorDesc mercury__table_statistics__table_statistics__du_functor_desc_table_stats_0_0 = {
  (MR_String) "table_stats",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__table_statistics__table_statistics__field_types_table_stats_0_0,
  mercury__table_statistics__table_statistics__field_names_table_stats_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__table_statistics__table_statistics__du_stag_ordered_table_stats_0_0[1] = {
  &mercury__table_statistics__table_statistics__du_functor_desc_table_stats_0_0
};

static const MR_DuPtagLayout mercury__table_statistics__table_statistics__du_ptag_ordered_table_stats_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__table_statistics__table_statistics__du_stag_ordered_table_stats_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__table_statistics____Unify____table_stats_0_0_10001)),
  ((MR_Box) (mercury__table_statistics____Compare____table_stats_0_0_10001)),
  (MR_String) "table_statistics",
  (MR_String) "table_stats",
  {     mercury__table_statistics__table_statistics__du_name_ordered_table_stats_0 },
  {     mercury__table_statistics__table_statistics__du_ptag_ordered_table_stats_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__table_statistics__table_statistics__functor_number_map_table_stats_0
};

static const MR_PseudoTypeInfo mercury__table_statistics__table_statistics__field_types_table_stats_curr_prev_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__table_statistics__table_statistics__type_ctor_info_table_stats_0,
  (MR_PseudoTypeInfo) &mercury__table_statistics__table_statistics__type_ctor_info_table_stats_0
};

static const MR_ConstString mercury__table_statistics__table_statistics__field_names_table_stats_curr_prev_0_0[2] = {
  (MR_String) "current_stats",
  (MR_String) "stats_at_last_call"
};

static const MR_DuFunctorDesc mercury__table_statistics__table_statistics__du_functor_desc_table_stats_curr_prev_0_0 = {
  (MR_String) "table_stats_curr_prev",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__table_statistics__table_statistics__field_types_table_stats_curr_prev_0_0,
  mercury__table_statistics__table_statistics__field_names_table_stats_curr_prev_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__table_statistics__table_statistics__du_stag_ordered_table_stats_curr_prev_0_0[1] = {
  &mercury__table_statistics__table_statistics__du_functor_desc_table_stats_curr_prev_0_0
};

static const MR_DuPtagLayout mercury__table_statistics__table_statistics__du_ptag_ordered_table_stats_curr_prev_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__table_statistics__table_statistics__du_stag_ordered_table_stats_curr_prev_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__table_statistics____Unify____table_stats_curr_prev_0_0_10001)),
  ((MR_Box) (mercury__table_statistics____Compare____table_stats_curr_prev_0_0_10001)),
  (MR_String) "table_statistics",
  (MR_String) "table_stats_curr_prev",
  {     mercury__table_statistics__table_statistics__du_name_ordered_table_stats_curr_prev_0 },
  {     mercury__table_statistics__table_statistics__du_ptag_ordered_table_stats_curr_prev_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__table_statistics__table_statistics__functor_number_map_table_stats_curr_prev_0
};

static const MR_EnumFunctorDesc mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_0 = {
  (MR_String) "table_step_dummy",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_1 = {
  (MR_String) "table_step_int",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_2 = {
  (MR_String) "table_step_char",
  (MR_Integer) 2
};

static const MR_EnumFunctorDesc mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_3 = {
  (MR_String) "table_step_string",
  (MR_Integer) 3
};

static const MR_EnumFunctorDesc mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_4 = {
  (MR_String) "table_step_float",
  (MR_Integer) 4
};

static const MR_EnumFunctorDesc mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_5 = {
  (MR_String) "table_step_enum",
  (MR_Integer) 5
};

static const MR_EnumFunctorDesc mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_6 = {
  (MR_String) "table_step_foreign_enum",
  (MR_Integer) 6
};

static const MR_EnumFunctorDesc mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_7 = {
  (MR_String) "table_step_general",
  (MR_Integer) 7
};

static const MR_EnumFunctorDesc mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_8 = {
  (MR_String) "table_step_general_addr",
  (MR_Integer) 8
};

static const MR_EnumFunctorDesc mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_9 = {
  (MR_String) "table_step_general_poly",
  (MR_Integer) 9
};

static const MR_EnumFunctorDesc mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_10 = {
  (MR_String) "table_step_general_poly_addr",
  (MR_Integer) 10
};

static const MR_EnumFunctorDesc mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_11 = {
  (MR_String) "table_step_typeinfo",
  (MR_Integer) 11
};

static const MR_EnumFunctorDesc mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_12 = {
  (MR_String) "table_step_typeclassinfo",
  (MR_Integer) 12
};

static const MR_EnumFunctorDesc mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_13 = {
  (MR_String) "table_step_promise_implied",
  (MR_Integer) 13
};

static const MR_EnumFunctorDescPtr mercury__table_statistics__table_statistics__enum_value_ordered_table_step_kind_0[14] = {
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
  &mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_13
};

static const MR_EnumFunctorDescPtr mercury__table_statistics__table_statistics__enum_name_ordered_table_step_kind_0[14] = {
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
  &mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_13,
  &mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_3,
  &mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_12,
  &mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_11
};

static const MR_Integer mercury__table_statistics__table_statistics__functor_number_map_table_step_kind_0[14] = {
  (MR_Integer) 1,
  (MR_Integer) 9,
  (MR_Integer) 0,
  (MR_Integer) 11,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 4,
  (MR_Integer) 5,
  (MR_Integer) 6,
  (MR_Integer) 7,
  (MR_Integer) 8,
  (MR_Integer) 13,
  (MR_Integer) 12,
  (MR_Integer) 10
};

const MR_TypeCtorInfo_Struct mercury__table_statistics__table_statistics__type_ctor_info_table_step_kind_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__table_statistics____Unify____table_step_kind_0_0_10001)),
  ((MR_Box) (mercury__table_statistics____Compare____table_step_kind_0_0_10001)),
  (MR_String) "table_statistics",
  (MR_String) "table_step_kind",
  {     mercury__table_statistics__table_statistics__enum_name_ordered_table_step_kind_0 },
  {     mercury__table_statistics__table_statistics__enum_value_ordered_table_step_kind_0 },
  (MR_Integer) 14,
  (MR_Integer) 4,
  mercury__table_statistics__table_statistics__functor_number_map_table_step_kind_0
};

static const MR_DuFunctorDesc mercury__table_statistics__table_statistics__du_functor_desc_table_step_stat_details_0_0 = {
  (MR_String) "step_stats_none",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__table_statistics__table_statistics__field_types_table_step_stat_details_0_1[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_ConstString mercury__table_statistics__table_statistics__field_names_table_step_stat_details_0_1[2] = {
  (MR_String) "start_num_node_allocs",
  (MR_String) "start_num_node_bytes"
};

static const MR_DuFunctorDesc mercury__table_statistics__table_statistics__du_functor_desc_table_step_stat_details_0_1 = {
  (MR_String) "step_stats_start",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__table_statistics__table_statistics__field_types_table_step_stat_details_0_1,
  mercury__table_statistics__table_statistics__field_names_table_step_stat_details_0_1,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__table_statistics__table_statistics__field_types_table_step_stat_details_0_2[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_ConstString mercury__table_statistics__table_statistics__field_names_table_step_stat_details_0_2[2] = {
  (MR_String) "enum_num_node_allocs",
  (MR_String) "enum_num_node_bytes"
};

static const MR_DuFunctorDesc mercury__table_statistics__table_statistics__du_functor_desc_table_step_stat_details_0_2 = {
  (MR_String) "step_stats_enum",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mercury__table_statistics__table_statistics__field_types_table_step_stat_details_0_2,
  mercury__table_statistics__table_statistics__field_names_table_step_stat_details_0_2,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__table_statistics__table_statistics__field_types_table_step_stat_details_0_3[9] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
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
  (MR_Integer) 9,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 3,
  mercury__table_statistics__table_statistics__field_types_table_step_stat_details_0_3,
  mercury__table_statistics__table_statistics__field_names_table_step_stat_details_0_3,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__table_statistics__table_statistics__field_types_table_step_stat_details_0_4[15] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
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
  (MR_Integer) 15,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__table_statistics__table_statistics__field_types_table_step_stat_details_0_4,
  mercury__table_statistics__table_statistics__field_names_table_step_stat_details_0_4,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__table_statistics__table_statistics__field_types_table_step_stat_details_0_5[15] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
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
  (MR_Integer) 15,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 5,
  mercury__table_statistics__table_statistics__field_types_table_step_stat_details_0_5,
  mercury__table_statistics__table_statistics__field_names_table_step_stat_details_0_5,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
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
    (MR_Integer) 1,
    MR_SECTAG_LOCAL,
    mercury__table_statistics__table_statistics__du_stag_ordered_table_step_stat_details_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__table_statistics__table_statistics__du_stag_ordered_table_step_stat_details_0_1
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__table_statistics__table_statistics__du_stag_ordered_table_step_stat_details_0_2
  },
  {
    (MR_Integer) 3,
    MR_SECTAG_REMOTE,
    mercury__table_statistics__table_statistics__du_stag_ordered_table_step_stat_details_0_3
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
  (MR_Integer) 17,
  (MR_Integer) 4,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__table_statistics____Unify____table_step_stat_details_0_0_10001)),
  ((MR_Box) (mercury__table_statistics____Compare____table_step_stat_details_0_0_10001)),
  (MR_String) "table_statistics",
  (MR_String) "table_step_stat_details",
  {     mercury__table_statistics__table_statistics__du_name_ordered_table_step_stat_details_0 },
  {     mercury__table_statistics__table_statistics__du_ptag_ordered_table_step_stat_details_0 },
  (MR_Integer) 6,
  (MR_Integer) 4,
  mercury__table_statistics__table_statistics__functor_number_map_table_step_stat_details_0
};

static const MR_PseudoTypeInfo mercury__table_statistics__table_statistics__field_types_table_step_stats_0_0[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__table_statistics__table_statistics__type_ctor_info_table_step_stat_details_0
};

static const MR_ConstString mercury__table_statistics__table_statistics__field_names_table_step_stats_0_0[4] = {
  (MR_String) "table_step_var_name",
  (MR_String) "table_step_num_lookups",
  (MR_String) "table_step_num_lookups_is_dupl",
  (MR_String) "table_step_detail"
};

static const MR_DuFunctorDesc mercury__table_statistics__table_statistics__du_functor_desc_table_step_stats_0_0 = {
  (MR_String) "table_step_stats",
  (MR_Integer) 4,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__table_statistics__table_statistics__field_types_table_step_stats_0_0,
  mercury__table_statistics__table_statistics__field_names_table_step_stats_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__table_statistics__table_statistics__du_stag_ordered_table_step_stats_0_0[1] = {
  &mercury__table_statistics__table_statistics__du_functor_desc_table_step_stats_0_0
};

static const MR_DuPtagLayout mercury__table_statistics__table_statistics__du_ptag_ordered_table_step_stats_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__table_statistics__table_statistics__du_stag_ordered_table_step_stats_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__table_statistics____Unify____table_step_stats_0_0_10001)),
  ((MR_Box) (mercury__table_statistics____Compare____table_step_stats_0_0_10001)),
  (MR_String) "table_statistics",
  (MR_String) "table_step_stats",
  {     mercury__table_statistics__table_statistics__du_name_ordered_table_step_stats_0 },
  {     mercury__table_statistics__table_statistics__du_ptag_ordered_table_step_stats_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__table_statistics__table_statistics__functor_number_map_table_step_stats_0
};

static MR_Integer MR_CALL 
mercury__table_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    return (MR_Integer) 1200;
  }
}

void MR_CALL 
mercury__table_statistics____Compare____table_step_stats_0_0(
  MR_Word * mercury__table_statistics__HeadVar__1_1,
  MR_Word mercury__table_statistics__HeadVar__2_2,
  MR_Word mercury__table_statistics__HeadVar__3_3)
{
  {
    MR_bool mercury__table_statistics__succeeded;
    MR_Integer mercury__table_statistics__CastX_15 = (MR_Integer) mercury__table_statistics__HeadVar__2_2;
    MR_Integer mercury__table_statistics__CastY_16 = (MR_Integer) mercury__table_statistics__HeadVar__3_3;

    mercury__table_statistics__succeeded = (mercury__table_statistics__CastX_15 == mercury__table_statistics__CastY_16);
    if (mercury__table_statistics__succeeded)
      *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_String mercury__table_statistics__ArgX1_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 0)));
      MR_String mercury__table_statistics__ArgY1_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 0)));
      MR_Integer mercury__table_statistics__ArgX2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 1)));
      MR_Integer mercury__table_statistics__ArgY2_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 1)));
      MR_Integer mercury__table_statistics__ArgX3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 2)));
      MR_Integer mercury__table_statistics__ArgY3_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 2)));
      MR_Word mercury__table_statistics__ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 3)));
      MR_Word mercury__table_statistics__ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 3)));
      MR_Word mercury__table_statistics__Var_12;
      MR_Integer mercury__table_statistics__V_7_24;

{
#define MR_PROC_LABEL mercury__table_statistics____Compare____table_step_stats_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__table_statistics__ArgX1_4 ;
	S2 =  mercury__table_statistics__ArgY1_5 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 mercury__table_statistics__V_7_24  = Res;
}
      mercury__table_statistics__succeeded = (mercury__table_statistics__V_7_24 < (MR_Integer) 0);
      if (mercury__table_statistics__succeeded)
        mercury__table_statistics__Var_12 = (MR_Integer) 1;
      else
      {
        mercury__table_statistics__succeeded = (mercury__table_statistics__V_7_24 == (MR_Integer) 0);
        if (mercury__table_statistics__succeeded)
          mercury__table_statistics__Var_12 = (MR_Integer) 0;
        else
          mercury__table_statistics__Var_12 = (MR_Integer) 2;
      }
      mercury__table_statistics__succeeded = (mercury__table_statistics__Var_12 == (MR_Integer) 0);
      mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
      if (mercury__table_statistics__succeeded)
        *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__Var_12;
      else
      {
        MR_Word mercury__table_statistics__Var_13;

        mercury__table_statistics__succeeded = (mercury__table_statistics__ArgX2_6 < mercury__table_statistics__ArgY2_7);
        if (mercury__table_statistics__succeeded)
          mercury__table_statistics__Var_13 = (MR_Integer) 1;
        else
        {
          mercury__table_statistics__succeeded = (mercury__table_statistics__ArgX2_6 == mercury__table_statistics__ArgY2_7);
          if (mercury__table_statistics__succeeded)
            mercury__table_statistics__Var_13 = (MR_Integer) 0;
          else
            mercury__table_statistics__Var_13 = (MR_Integer) 2;
        }
        mercury__table_statistics__succeeded = (mercury__table_statistics__Var_13 == (MR_Integer) 0);
        mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
        if (mercury__table_statistics__succeeded)
          *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__Var_13;
        else
        {
          MR_Word mercury__table_statistics__Var_14;

          mercury__table_statistics__succeeded = (mercury__table_statistics__ArgX3_8 < mercury__table_statistics__ArgY3_9);
          if (mercury__table_statistics__succeeded)
            mercury__table_statistics__Var_14 = (MR_Integer) 1;
          else
          {
            mercury__table_statistics__succeeded = (mercury__table_statistics__ArgX3_8 == mercury__table_statistics__ArgY3_9);
            if (mercury__table_statistics__succeeded)
              mercury__table_statistics__Var_14 = (MR_Integer) 0;
            else
              mercury__table_statistics__Var_14 = (MR_Integer) 2;
          }
          mercury__table_statistics__succeeded = (mercury__table_statistics__Var_14 == (MR_Integer) 0);
          mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
          if (mercury__table_statistics__succeeded)
            *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__Var_14;
          else
            {
              mercury__table_statistics____Compare____table_step_stat_details_0_0(mercury__table_statistics__HeadVar__1_1, mercury__table_statistics__ArgX4_10, mercury__table_statistics__ArgY4_11);
            }
        }
      }
    }
  }
}

MR_bool MR_CALL 
mercury__table_statistics____Unify____table_step_stats_0_0(
  MR_Word mercury__table_statistics__HeadVar__1_1,
  MR_Word mercury__table_statistics__HeadVar__2_2)
{
  {
    MR_bool mercury__table_statistics__succeeded;
    MR_Integer mercury__table_statistics__CastX_11 = (MR_Integer) mercury__table_statistics__HeadVar__1_1;
    MR_Integer mercury__table_statistics__CastY_12 = (MR_Integer) mercury__table_statistics__HeadVar__2_2;

    mercury__table_statistics__succeeded = (mercury__table_statistics__CastX_11 == mercury__table_statistics__CastY_12);
    if (mercury__table_statistics__succeeded)
      mercury__table_statistics__succeeded = MR_TRUE;
    else
    {
      MR_String mercury__table_statistics__ArgX1_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 0)));
      MR_String mercury__table_statistics__ArgY1_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 0)));
      MR_Integer mercury__table_statistics__ArgX2_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 1)));
      MR_Integer mercury__table_statistics__ArgY2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 1)));
      MR_Integer mercury__table_statistics__ArgX3_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 2)));
      MR_Integer mercury__table_statistics__ArgY3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 2)));
      MR_Word mercury__table_statistics__ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 3)));
      MR_Word mercury__table_statistics__ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 3)));

      mercury__table_statistics__succeeded = (strcmp(mercury__table_statistics__ArgX1_3, mercury__table_statistics__ArgY1_4) == 0);
      if (mercury__table_statistics__succeeded)
      {
        mercury__table_statistics__succeeded = (mercury__table_statistics__ArgX2_5 == mercury__table_statistics__ArgY2_6);
        if (mercury__table_statistics__succeeded)
        {
          mercury__table_statistics__succeeded = (mercury__table_statistics__ArgX3_7 == mercury__table_statistics__ArgY3_8);
          if (mercury__table_statistics__succeeded)
            {
              mercury__table_statistics__succeeded = mercury__table_statistics____Unify____table_step_stat_details_0_0(mercury__table_statistics__ArgX4_9, mercury__table_statistics__ArgY4_10);
            }
        }
      }
    }
    return mercury__table_statistics__succeeded;
  }
}

void MR_CALL 
mercury__table_statistics____Compare____table_step_stat_details_0_0(
  MR_Word * mercury__table_statistics__HeadVar__1_1,
  MR_Word mercury__table_statistics__HeadVar__2_2,
  MR_Word mercury__table_statistics__HeadVar__3_3)
{
  {
    MR_bool mercury__table_statistics__succeeded;
    MR_Integer mercury__table_statistics__CastX_558 = (MR_Integer) mercury__table_statistics__HeadVar__2_2;
    MR_Integer mercury__table_statistics__CastY_559 = (MR_Integer) mercury__table_statistics__HeadVar__3_3;

    mercury__table_statistics__succeeded = (mercury__table_statistics__CastX_558 == mercury__table_statistics__CastY_559);
    if (mercury__table_statistics__succeeded)
      *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) mercury__table_statistics__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_tag((MR_Word) mercury__table_statistics__HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer mercury__table_statistics__Var_644 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 1)));
            MR_Integer mercury__table_statistics__Var_645 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mercury__table_statistics__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer mercury__table_statistics__ArgY1_50 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer mercury__table_statistics__ArgY2_52 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word mercury__table_statistics__Var_53;

                  mercury__table_statistics__succeeded = (mercury__table_statistics__Var_645 < mercury__table_statistics__ArgY1_50);
                  if (mercury__table_statistics__succeeded)
                    mercury__table_statistics__Var_53 = (MR_Integer) 1;
                  else
                  {
                    mercury__table_statistics__succeeded = (mercury__table_statistics__Var_645 == mercury__table_statistics__ArgY1_50);
                    if (mercury__table_statistics__succeeded)
                      mercury__table_statistics__Var_53 = (MR_Integer) 0;
                    else
                      mercury__table_statistics__Var_53 = (MR_Integer) 2;
                  }
                  mercury__table_statistics__succeeded = (mercury__table_statistics__Var_53 == (MR_Integer) 0);
                  mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
                  if (mercury__table_statistics__succeeded)
                    *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__Var_53;
                  else
                  {
                    mercury__table_statistics__succeeded = (mercury__table_statistics__Var_644 < mercury__table_statistics__ArgY2_52);
                    if (mercury__table_statistics__succeeded)
                      *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 1;
                    else
                    {
                      mercury__table_statistics__succeeded = (mercury__table_statistics__Var_644 == mercury__table_statistics__ArgY2_52);
                      if (mercury__table_statistics__succeeded)
                        *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 0;
                      else
                        *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 2;
                    }
                  }
                }
                break;
              case (MR_Integer) 2:
                *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer mercury__table_statistics__Var_618 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 1)));
            MR_Integer mercury__table_statistics__Var_619 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mercury__table_statistics__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Integer mercury__table_statistics__ArgY1_110 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer mercury__table_statistics__ArgY2_112 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word mercury__table_statistics__Var_113;

                  mercury__table_statistics__succeeded = (mercury__table_statistics__Var_619 < mercury__table_statistics__ArgY1_110);
                  if (mercury__table_statistics__succeeded)
                    mercury__table_statistics__Var_113 = (MR_Integer) 1;
                  else
                  {
                    mercury__table_statistics__succeeded = (mercury__table_statistics__Var_619 == mercury__table_statistics__ArgY1_110);
                    if (mercury__table_statistics__succeeded)
                      mercury__table_statistics__Var_113 = (MR_Integer) 0;
                    else
                      mercury__table_statistics__Var_113 = (MR_Integer) 2;
                  }
                  mercury__table_statistics__succeeded = (mercury__table_statistics__Var_113 == (MR_Integer) 0);
                  mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
                  if (mercury__table_statistics__succeeded)
                    *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__Var_113;
                  else
                  {
                    mercury__table_statistics__succeeded = (mercury__table_statistics__Var_618 < mercury__table_statistics__ArgY2_112);
                    if (mercury__table_statistics__succeeded)
                      *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 1;
                    else
                    {
                      mercury__table_statistics__succeeded = (mercury__table_statistics__Var_618 == mercury__table_statistics__ArgY2_112);
                      if (mercury__table_statistics__succeeded)
                        *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 0;
                      else
                        *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 2;
                    }
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer mercury__table_statistics__Var_620 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 9)));
                MR_Integer mercury__table_statistics__Var_621 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 8)));
                MR_Integer mercury__table_statistics__Var_622 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 7)));
                MR_Integer mercury__table_statistics__Var_623 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 6)));
                MR_Integer mercury__table_statistics__Var_624 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 5)));
                MR_Integer mercury__table_statistics__Var_625 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 4)));
                MR_Integer mercury__table_statistics__Var_626 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 3)));
                MR_Integer mercury__table_statistics__Var_627 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 2)));
                MR_Integer mercury__table_statistics__Var_628 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) mercury__table_statistics__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Integer mercury__table_statistics__ArgY1_191 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 1)));
                          MR_Integer mercury__table_statistics__ArgY2_193 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 2)));
                          MR_Integer mercury__table_statistics__ArgY3_195 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 3)));
                          MR_Integer mercury__table_statistics__ArgY4_197 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 4)));
                          MR_Integer mercury__table_statistics__ArgY5_199 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 5)));
                          MR_Integer mercury__table_statistics__ArgY6_201 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 6)));
                          MR_Integer mercury__table_statistics__ArgY7_203 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 7)));
                          MR_Integer mercury__table_statistics__ArgY8_205 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 8)));
                          MR_Integer mercury__table_statistics__ArgY9_207 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 9)));
                          MR_Word mercury__table_statistics__Var_208;

                          mercury__table_statistics__succeeded = (mercury__table_statistics__Var_628 < mercury__table_statistics__ArgY1_191);
                          if (mercury__table_statistics__succeeded)
                            mercury__table_statistics__Var_208 = (MR_Integer) 1;
                          else
                          {
                            mercury__table_statistics__succeeded = (mercury__table_statistics__Var_628 == mercury__table_statistics__ArgY1_191);
                            if (mercury__table_statistics__succeeded)
                              mercury__table_statistics__Var_208 = (MR_Integer) 0;
                            else
                              mercury__table_statistics__Var_208 = (MR_Integer) 2;
                          }
                          mercury__table_statistics__succeeded = (mercury__table_statistics__Var_208 == (MR_Integer) 0);
                          mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
                          if (mercury__table_statistics__succeeded)
                            *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__Var_208;
                          else
                          {
                            MR_Word mercury__table_statistics__Var_209;

                            mercury__table_statistics__succeeded = (mercury__table_statistics__Var_627 < mercury__table_statistics__ArgY2_193);
                            if (mercury__table_statistics__succeeded)
                              mercury__table_statistics__Var_209 = (MR_Integer) 1;
                            else
                            {
                              mercury__table_statistics__succeeded = (mercury__table_statistics__Var_627 == mercury__table_statistics__ArgY2_193);
                              if (mercury__table_statistics__succeeded)
                                mercury__table_statistics__Var_209 = (MR_Integer) 0;
                              else
                                mercury__table_statistics__Var_209 = (MR_Integer) 2;
                            }
                            mercury__table_statistics__succeeded = (mercury__table_statistics__Var_209 == (MR_Integer) 0);
                            mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
                            if (mercury__table_statistics__succeeded)
                              *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__Var_209;
                            else
                            {
                              MR_Word mercury__table_statistics__Var_210;

                              mercury__table_statistics__succeeded = (mercury__table_statistics__Var_626 < mercury__table_statistics__ArgY3_195);
                              if (mercury__table_statistics__succeeded)
                                mercury__table_statistics__Var_210 = (MR_Integer) 1;
                              else
                              {
                                mercury__table_statistics__succeeded = (mercury__table_statistics__Var_626 == mercury__table_statistics__ArgY3_195);
                                if (mercury__table_statistics__succeeded)
                                  mercury__table_statistics__Var_210 = (MR_Integer) 0;
                                else
                                  mercury__table_statistics__Var_210 = (MR_Integer) 2;
                              }
                              mercury__table_statistics__succeeded = (mercury__table_statistics__Var_210 == (MR_Integer) 0);
                              mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
                              if (mercury__table_statistics__succeeded)
                                *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__Var_210;
                              else
                              {
                                MR_Word mercury__table_statistics__Var_211;

                                mercury__table_statistics__succeeded = (mercury__table_statistics__Var_625 < mercury__table_statistics__ArgY4_197);
                                if (mercury__table_statistics__succeeded)
                                  mercury__table_statistics__Var_211 = (MR_Integer) 1;
                                else
                                {
                                  mercury__table_statistics__succeeded = (mercury__table_statistics__Var_625 == mercury__table_statistics__ArgY4_197);
                                  if (mercury__table_statistics__succeeded)
                                    mercury__table_statistics__Var_211 = (MR_Integer) 0;
                                  else
                                    mercury__table_statistics__Var_211 = (MR_Integer) 2;
                                }
                                mercury__table_statistics__succeeded = (mercury__table_statistics__Var_211 == (MR_Integer) 0);
                                mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
                                if (mercury__table_statistics__succeeded)
                                  *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__Var_211;
                                else
                                {
                                  MR_Word mercury__table_statistics__Var_212;

                                  mercury__table_statistics__succeeded = (mercury__table_statistics__Var_624 < mercury__table_statistics__ArgY5_199);
                                  if (mercury__table_statistics__succeeded)
                                    mercury__table_statistics__Var_212 = (MR_Integer) 1;
                                  else
                                  {
                                    mercury__table_statistics__succeeded = (mercury__table_statistics__Var_624 == mercury__table_statistics__ArgY5_199);
                                    if (mercury__table_statistics__succeeded)
                                      mercury__table_statistics__Var_212 = (MR_Integer) 0;
                                    else
                                      mercury__table_statistics__Var_212 = (MR_Integer) 2;
                                  }
                                  mercury__table_statistics__succeeded = (mercury__table_statistics__Var_212 == (MR_Integer) 0);
                                  mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
                                  if (mercury__table_statistics__succeeded)
                                    *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__Var_212;
                                  else
                                  {
                                    MR_Word mercury__table_statistics__Var_213;

                                    mercury__table_statistics__succeeded = (mercury__table_statistics__Var_623 < mercury__table_statistics__ArgY6_201);
                                    if (mercury__table_statistics__succeeded)
                                      mercury__table_statistics__Var_213 = (MR_Integer) 1;
                                    else
                                    {
                                      mercury__table_statistics__succeeded = (mercury__table_statistics__Var_623 == mercury__table_statistics__ArgY6_201);
                                      if (mercury__table_statistics__succeeded)
                                        mercury__table_statistics__Var_213 = (MR_Integer) 0;
                                      else
                                        mercury__table_statistics__Var_213 = (MR_Integer) 2;
                                    }
                                    mercury__table_statistics__succeeded = (mercury__table_statistics__Var_213 == (MR_Integer) 0);
                                    mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
                                    if (mercury__table_statistics__succeeded)
                                      *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__Var_213;
                                    else
                                    {
                                      MR_Word mercury__table_statistics__Var_214;

                                      mercury__table_statistics__succeeded = (mercury__table_statistics__Var_622 < mercury__table_statistics__ArgY7_203);
                                      if (mercury__table_statistics__succeeded)
                                        mercury__table_statistics__Var_214 = (MR_Integer) 1;
                                      else
                                      {
                                        mercury__table_statistics__succeeded = (mercury__table_statistics__Var_622 == mercury__table_statistics__ArgY7_203);
                                        if (mercury__table_statistics__succeeded)
                                          mercury__table_statistics__Var_214 = (MR_Integer) 0;
                                        else
                                          mercury__table_statistics__Var_214 = (MR_Integer) 2;
                                      }
                                      mercury__table_statistics__succeeded = (mercury__table_statistics__Var_214 == (MR_Integer) 0);
                                      mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
                                      if (mercury__table_statistics__succeeded)
                                        *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__Var_214;
                                      else
                                      {
                                        MR_Word mercury__table_statistics__Var_215;

                                        mercury__table_statistics__succeeded = (mercury__table_statistics__Var_621 < mercury__table_statistics__ArgY8_205);
                                        if (mercury__table_statistics__succeeded)
                                          mercury__table_statistics__Var_215 = (MR_Integer) 1;
                                        else
                                        {
                                          mercury__table_statistics__succeeded = (mercury__table_statistics__Var_621 == mercury__table_statistics__ArgY8_205);
                                          if (mercury__table_statistics__succeeded)
                                            mercury__table_statistics__Var_215 = (MR_Integer) 0;
                                          else
                                            mercury__table_statistics__Var_215 = (MR_Integer) 2;
                                        }
                                        mercury__table_statistics__succeeded = (mercury__table_statistics__Var_215 == (MR_Integer) 0);
                                        mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
                                        if (mercury__table_statistics__succeeded)
                                          *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__Var_215;
                                        else
                                        {
                                          mercury__table_statistics__succeeded = (mercury__table_statistics__Var_620 < mercury__table_statistics__ArgY9_207);
                                          if (mercury__table_statistics__succeeded)
                                            *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 1;
                                          else
                                          {
                                            mercury__table_statistics__succeeded = (mercury__table_statistics__Var_620 == mercury__table_statistics__ArgY9_207);
                                            if (mercury__table_statistics__succeeded)
                                              *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 0;
                                            else
                                              *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 2;
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
                        *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 2:
                        *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer mercury__table_statistics__Var_603 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 15)));
                MR_Integer mercury__table_statistics__Var_604 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 14)));
                MR_Integer mercury__table_statistics__Var_605 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 13)));
                MR_Integer mercury__table_statistics__Var_606 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 12)));
                MR_Integer mercury__table_statistics__Var_607 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 11)));
                MR_Integer mercury__table_statistics__Var_608 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 10)));
                MR_Integer mercury__table_statistics__Var_609 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 9)));
                MR_Integer mercury__table_statistics__Var_610 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 8)));
                MR_Integer mercury__table_statistics__Var_611 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 7)));
                MR_Integer mercury__table_statistics__Var_612 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 6)));
                MR_Integer mercury__table_statistics__Var_613 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 5)));
                MR_Integer mercury__table_statistics__Var_614 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 4)));
                MR_Integer mercury__table_statistics__Var_615 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 3)));
                MR_Integer mercury__table_statistics__Var_616 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 2)));
                MR_Integer mercury__table_statistics__Var_617 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) mercury__table_statistics__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Integer mercury__table_statistics__ArgY1_338 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 1)));
                          MR_Integer mercury__table_statistics__ArgY2_340 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 2)));
                          MR_Integer mercury__table_statistics__ArgY3_342 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 3)));
                          MR_Integer mercury__table_statistics__ArgY4_344 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 4)));
                          MR_Integer mercury__table_statistics__ArgY5_346 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 5)));
                          MR_Integer mercury__table_statistics__ArgY6_348 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 6)));
                          MR_Integer mercury__table_statistics__ArgY7_350 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 7)));
                          MR_Integer mercury__table_statistics__ArgY8_352 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 8)));
                          MR_Integer mercury__table_statistics__ArgY9_354 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 9)));
                          MR_Integer mercury__table_statistics__ArgY10_356 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 10)));
                          MR_Integer mercury__table_statistics__ArgY11_358 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 11)));
                          MR_Integer mercury__table_statistics__ArgY12_360 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 12)));
                          MR_Integer mercury__table_statistics__ArgY13_362 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 13)));
                          MR_Integer mercury__table_statistics__ArgY14_364 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 14)));
                          MR_Integer mercury__table_statistics__ArgY15_366 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 15)));
                          MR_Word mercury__table_statistics__Var_367;

                          mercury__table_statistics__succeeded = (mercury__table_statistics__Var_617 < mercury__table_statistics__ArgY1_338);
                          if (mercury__table_statistics__succeeded)
                            mercury__table_statistics__Var_367 = (MR_Integer) 1;
                          else
                          {
                            mercury__table_statistics__succeeded = (mercury__table_statistics__Var_617 == mercury__table_statistics__ArgY1_338);
                            if (mercury__table_statistics__succeeded)
                              mercury__table_statistics__Var_367 = (MR_Integer) 0;
                            else
                              mercury__table_statistics__Var_367 = (MR_Integer) 2;
                          }
                          mercury__table_statistics__succeeded = (mercury__table_statistics__Var_367 == (MR_Integer) 0);
                          mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
                          if (mercury__table_statistics__succeeded)
                            *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__Var_367;
                          else
                          {
                            MR_Word mercury__table_statistics__Var_368;

                            mercury__table_statistics__succeeded = (mercury__table_statistics__Var_616 < mercury__table_statistics__ArgY2_340);
                            if (mercury__table_statistics__succeeded)
                              mercury__table_statistics__Var_368 = (MR_Integer) 1;
                            else
                            {
                              mercury__table_statistics__succeeded = (mercury__table_statistics__Var_616 == mercury__table_statistics__ArgY2_340);
                              if (mercury__table_statistics__succeeded)
                                mercury__table_statistics__Var_368 = (MR_Integer) 0;
                              else
                                mercury__table_statistics__Var_368 = (MR_Integer) 2;
                            }
                            mercury__table_statistics__succeeded = (mercury__table_statistics__Var_368 == (MR_Integer) 0);
                            mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
                            if (mercury__table_statistics__succeeded)
                              *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__Var_368;
                            else
                            {
                              MR_Word mercury__table_statistics__Var_369;

                              mercury__table_statistics__succeeded = (mercury__table_statistics__Var_615 < mercury__table_statistics__ArgY3_342);
                              if (mercury__table_statistics__succeeded)
                                mercury__table_statistics__Var_369 = (MR_Integer) 1;
                              else
                              {
                                mercury__table_statistics__succeeded = (mercury__table_statistics__Var_615 == mercury__table_statistics__ArgY3_342);
                                if (mercury__table_statistics__succeeded)
                                  mercury__table_statistics__Var_369 = (MR_Integer) 0;
                                else
                                  mercury__table_statistics__Var_369 = (MR_Integer) 2;
                              }
                              mercury__table_statistics__succeeded = (mercury__table_statistics__Var_369 == (MR_Integer) 0);
                              mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
                              if (mercury__table_statistics__succeeded)
                                *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__Var_369;
                              else
                              {
                                MR_Word mercury__table_statistics__Var_370;

                                mercury__table_statistics__succeeded = (mercury__table_statistics__Var_614 < mercury__table_statistics__ArgY4_344);
                                if (mercury__table_statistics__succeeded)
                                  mercury__table_statistics__Var_370 = (MR_Integer) 1;
                                else
                                {
                                  mercury__table_statistics__succeeded = (mercury__table_statistics__Var_614 == mercury__table_statistics__ArgY4_344);
                                  if (mercury__table_statistics__succeeded)
                                    mercury__table_statistics__Var_370 = (MR_Integer) 0;
                                  else
                                    mercury__table_statistics__Var_370 = (MR_Integer) 2;
                                }
                                mercury__table_statistics__succeeded = (mercury__table_statistics__Var_370 == (MR_Integer) 0);
                                mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
                                if (mercury__table_statistics__succeeded)
                                  *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__Var_370;
                                else
                                {
                                  MR_Word mercury__table_statistics__Var_371;

                                  mercury__table_statistics__succeeded = (mercury__table_statistics__Var_613 < mercury__table_statistics__ArgY5_346);
                                  if (mercury__table_statistics__succeeded)
                                    mercury__table_statistics__Var_371 = (MR_Integer) 1;
                                  else
                                  {
                                    mercury__table_statistics__succeeded = (mercury__table_statistics__Var_613 == mercury__table_statistics__ArgY5_346);
                                    if (mercury__table_statistics__succeeded)
                                      mercury__table_statistics__Var_371 = (MR_Integer) 0;
                                    else
                                      mercury__table_statistics__Var_371 = (MR_Integer) 2;
                                  }
                                  mercury__table_statistics__succeeded = (mercury__table_statistics__Var_371 == (MR_Integer) 0);
                                  mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
                                  if (mercury__table_statistics__succeeded)
                                    *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__Var_371;
                                  else
                                  {
                                    MR_Word mercury__table_statistics__Var_372;

                                    mercury__table_statistics__succeeded = (mercury__table_statistics__Var_612 < mercury__table_statistics__ArgY6_348);
                                    if (mercury__table_statistics__succeeded)
                                      mercury__table_statistics__Var_372 = (MR_Integer) 1;
                                    else
                                    {
                                      mercury__table_statistics__succeeded = (mercury__table_statistics__Var_612 == mercury__table_statistics__ArgY6_348);
                                      if (mercury__table_statistics__succeeded)
                                        mercury__table_statistics__Var_372 = (MR_Integer) 0;
                                      else
                                        mercury__table_statistics__Var_372 = (MR_Integer) 2;
                                    }
                                    mercury__table_statistics__succeeded = (mercury__table_statistics__Var_372 == (MR_Integer) 0);
                                    mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
                                    if (mercury__table_statistics__succeeded)
                                      *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__Var_372;
                                    else
                                    {
                                      MR_Word mercury__table_statistics__Var_373;

                                      mercury__table_statistics__succeeded = (mercury__table_statistics__Var_611 < mercury__table_statistics__ArgY7_350);
                                      if (mercury__table_statistics__succeeded)
                                        mercury__table_statistics__Var_373 = (MR_Integer) 1;
                                      else
                                      {
                                        mercury__table_statistics__succeeded = (mercury__table_statistics__Var_611 == mercury__table_statistics__ArgY7_350);
                                        if (mercury__table_statistics__succeeded)
                                          mercury__table_statistics__Var_373 = (MR_Integer) 0;
                                        else
                                          mercury__table_statistics__Var_373 = (MR_Integer) 2;
                                      }
                                      mercury__table_statistics__succeeded = (mercury__table_statistics__Var_373 == (MR_Integer) 0);
                                      mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
                                      if (mercury__table_statistics__succeeded)
                                        *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__Var_373;
                                      else
                                      {
                                        MR_Word mercury__table_statistics__Var_374;

                                        mercury__table_statistics__succeeded = (mercury__table_statistics__Var_610 < mercury__table_statistics__ArgY8_352);
                                        if (mercury__table_statistics__succeeded)
                                          mercury__table_statistics__Var_374 = (MR_Integer) 1;
                                        else
                                        {
                                          mercury__table_statistics__succeeded = (mercury__table_statistics__Var_610 == mercury__table_statistics__ArgY8_352);
                                          if (mercury__table_statistics__succeeded)
                                            mercury__table_statistics__Var_374 = (MR_Integer) 0;
                                          else
                                            mercury__table_statistics__Var_374 = (MR_Integer) 2;
                                        }
                                        mercury__table_statistics__succeeded = (mercury__table_statistics__Var_374 == (MR_Integer) 0);
                                        mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
                                        if (mercury__table_statistics__succeeded)
                                          *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__Var_374;
                                        else
                                        {
                                          MR_Word mercury__table_statistics__Var_375;

                                          mercury__table_statistics__succeeded = (mercury__table_statistics__Var_609 < mercury__table_statistics__ArgY9_354);
                                          if (mercury__table_statistics__succeeded)
                                            mercury__table_statistics__Var_375 = (MR_Integer) 1;
                                          else
                                          {
                                            mercury__table_statistics__succeeded = (mercury__table_statistics__Var_609 == mercury__table_statistics__ArgY9_354);
                                            if (mercury__table_statistics__succeeded)
                                              mercury__table_statistics__Var_375 = (MR_Integer) 0;
                                            else
                                              mercury__table_statistics__Var_375 = (MR_Integer) 2;
                                          }
                                          mercury__table_statistics__succeeded = (mercury__table_statistics__Var_375 == (MR_Integer) 0);
                                          mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
                                          if (mercury__table_statistics__succeeded)
                                            *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__Var_375;
                                          else
                                          {
                                            MR_Word mercury__table_statistics__Var_376;

                                            mercury__table_statistics__succeeded = (mercury__table_statistics__Var_608 < mercury__table_statistics__ArgY10_356);
                                            if (mercury__table_statistics__succeeded)
                                              mercury__table_statistics__Var_376 = (MR_Integer) 1;
                                            else
                                            {
                                              mercury__table_statistics__succeeded = (mercury__table_statistics__Var_608 == mercury__table_statistics__ArgY10_356);
                                              if (mercury__table_statistics__succeeded)
                                                mercury__table_statistics__Var_376 = (MR_Integer) 0;
                                              else
                                                mercury__table_statistics__Var_376 = (MR_Integer) 2;
                                            }
                                            mercury__table_statistics__succeeded = (mercury__table_statistics__Var_376 == (MR_Integer) 0);
                                            mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
                                            if (mercury__table_statistics__succeeded)
                                              *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__Var_376;
                                            else
                                            {
                                              MR_Word mercury__table_statistics__Var_377;

                                              mercury__table_statistics__succeeded = (mercury__table_statistics__Var_607 < mercury__table_statistics__ArgY11_358);
                                              if (mercury__table_statistics__succeeded)
                                                mercury__table_statistics__Var_377 = (MR_Integer) 1;
                                              else
                                              {
                                                mercury__table_statistics__succeeded = (mercury__table_statistics__Var_607 == mercury__table_statistics__ArgY11_358);
                                                if (mercury__table_statistics__succeeded)
                                                  mercury__table_statistics__Var_377 = (MR_Integer) 0;
                                                else
                                                  mercury__table_statistics__Var_377 = (MR_Integer) 2;
                                              }
                                              mercury__table_statistics__succeeded = (mercury__table_statistics__Var_377 == (MR_Integer) 0);
                                              mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
                                              if (mercury__table_statistics__succeeded)
                                                *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__Var_377;
                                              else
                                              {
                                                MR_Word mercury__table_statistics__Var_378;

                                                mercury__table_statistics__succeeded = (mercury__table_statistics__Var_606 < mercury__table_statistics__ArgY12_360);
                                                if (mercury__table_statistics__succeeded)
                                                  mercury__table_statistics__Var_378 = (MR_Integer) 1;
                                                else
                                                {
                                                  mercury__table_statistics__succeeded = (mercury__table_statistics__Var_606 == mercury__table_statistics__ArgY12_360);
                                                  if (mercury__table_statistics__succeeded)
                                                    mercury__table_statistics__Var_378 = (MR_Integer) 0;
                                                  else
                                                    mercury__table_statistics__Var_378 = (MR_Integer) 2;
                                                }
                                                mercury__table_statistics__succeeded = (mercury__table_statistics__Var_378 == (MR_Integer) 0);
                                                mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
                                                if (mercury__table_statistics__succeeded)
                                                  *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__Var_378;
                                                else
                                                {
                                                  MR_Word mercury__table_statistics__Var_379;

                                                  mercury__table_statistics__succeeded = (mercury__table_statistics__Var_605 < mercury__table_statistics__ArgY13_362);
                                                  if (mercury__table_statistics__succeeded)
                                                    mercury__table_statistics__Var_379 = (MR_Integer) 1;
                                                  else
                                                  {
                                                    mercury__table_statistics__succeeded = (mercury__table_statistics__Var_605 == mercury__table_statistics__ArgY13_362);
                                                    if (mercury__table_statistics__succeeded)
                                                      mercury__table_statistics__Var_379 = (MR_Integer) 0;
                                                    else
                                                      mercury__table_statistics__Var_379 = (MR_Integer) 2;
                                                  }
                                                  mercury__table_statistics__succeeded = (mercury__table_statistics__Var_379 == (MR_Integer) 0);
                                                  mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
                                                  if (mercury__table_statistics__succeeded)
                                                    *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__Var_379;
                                                  else
                                                  {
                                                    MR_Word mercury__table_statistics__Var_380;

                                                    mercury__table_statistics__succeeded = (mercury__table_statistics__Var_604 < mercury__table_statistics__ArgY14_364);
                                                    if (mercury__table_statistics__succeeded)
                                                      mercury__table_statistics__Var_380 = (MR_Integer) 1;
                                                    else
                                                    {
                                                      mercury__table_statistics__succeeded = (mercury__table_statistics__Var_604 == mercury__table_statistics__ArgY14_364);
                                                      if (mercury__table_statistics__succeeded)
                                                        mercury__table_statistics__Var_380 = (MR_Integer) 0;
                                                      else
                                                        mercury__table_statistics__Var_380 = (MR_Integer) 2;
                                                    }
                                                    mercury__table_statistics__succeeded = (mercury__table_statistics__Var_380 == (MR_Integer) 0);
                                                    mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
                                                    if (mercury__table_statistics__succeeded)
                                                      *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__Var_380;
                                                    else
                                                    {
                                                      mercury__table_statistics__succeeded = (mercury__table_statistics__Var_603 < mercury__table_statistics__ArgY15_366);
                                                      if (mercury__table_statistics__succeeded)
                                                        *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 1;
                                                      else
                                                      {
                                                        mercury__table_statistics__succeeded = (mercury__table_statistics__Var_603 == mercury__table_statistics__ArgY15_366);
                                                        if (mercury__table_statistics__succeeded)
                                                          *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 0;
                                                        else
                                                          *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 2;
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
                        *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer mercury__table_statistics__Var_629 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 15)));
                MR_Integer mercury__table_statistics__Var_630 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 14)));
                MR_Integer mercury__table_statistics__Var_631 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 13)));
                MR_Integer mercury__table_statistics__Var_632 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 12)));
                MR_Integer mercury__table_statistics__Var_633 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 11)));
                MR_Integer mercury__table_statistics__Var_634 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 10)));
                MR_Integer mercury__table_statistics__Var_635 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 9)));
                MR_Integer mercury__table_statistics__Var_636 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 8)));
                MR_Integer mercury__table_statistics__Var_637 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 7)));
                MR_Integer mercury__table_statistics__Var_638 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 6)));
                MR_Integer mercury__table_statistics__Var_639 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 5)));
                MR_Integer mercury__table_statistics__Var_640 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 4)));
                MR_Integer mercury__table_statistics__Var_641 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 3)));
                MR_Integer mercury__table_statistics__Var_642 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 2)));
                MR_Integer mercury__table_statistics__Var_643 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) mercury__table_statistics__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Integer mercury__table_statistics__ArgY1_515 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 1)));
                          MR_Integer mercury__table_statistics__ArgY2_517 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 2)));
                          MR_Integer mercury__table_statistics__ArgY3_519 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 3)));
                          MR_Integer mercury__table_statistics__ArgY4_521 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 4)));
                          MR_Integer mercury__table_statistics__ArgY5_523 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 5)));
                          MR_Integer mercury__table_statistics__ArgY6_525 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 6)));
                          MR_Integer mercury__table_statistics__ArgY7_527 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 7)));
                          MR_Integer mercury__table_statistics__ArgY8_529 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 8)));
                          MR_Integer mercury__table_statistics__ArgY9_531 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 9)));
                          MR_Integer mercury__table_statistics__ArgY10_533 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 10)));
                          MR_Integer mercury__table_statistics__ArgY11_535 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 11)));
                          MR_Integer mercury__table_statistics__ArgY12_537 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 12)));
                          MR_Integer mercury__table_statistics__ArgY13_539 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 13)));
                          MR_Integer mercury__table_statistics__ArgY14_541 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 14)));
                          MR_Integer mercury__table_statistics__ArgY15_543 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 15)));
                          MR_Word mercury__table_statistics__Var_544;

                          mercury__table_statistics__succeeded = (mercury__table_statistics__Var_643 < mercury__table_statistics__ArgY1_515);
                          if (mercury__table_statistics__succeeded)
                            mercury__table_statistics__Var_544 = (MR_Integer) 1;
                          else
                          {
                            mercury__table_statistics__succeeded = (mercury__table_statistics__Var_643 == mercury__table_statistics__ArgY1_515);
                            if (mercury__table_statistics__succeeded)
                              mercury__table_statistics__Var_544 = (MR_Integer) 0;
                            else
                              mercury__table_statistics__Var_544 = (MR_Integer) 2;
                          }
                          mercury__table_statistics__succeeded = (mercury__table_statistics__Var_544 == (MR_Integer) 0);
                          mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
                          if (mercury__table_statistics__succeeded)
                            *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__Var_544;
                          else
                          {
                            MR_Word mercury__table_statistics__Var_545;

                            mercury__table_statistics__succeeded = (mercury__table_statistics__Var_642 < mercury__table_statistics__ArgY2_517);
                            if (mercury__table_statistics__succeeded)
                              mercury__table_statistics__Var_545 = (MR_Integer) 1;
                            else
                            {
                              mercury__table_statistics__succeeded = (mercury__table_statistics__Var_642 == mercury__table_statistics__ArgY2_517);
                              if (mercury__table_statistics__succeeded)
                                mercury__table_statistics__Var_545 = (MR_Integer) 0;
                              else
                                mercury__table_statistics__Var_545 = (MR_Integer) 2;
                            }
                            mercury__table_statistics__succeeded = (mercury__table_statistics__Var_545 == (MR_Integer) 0);
                            mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
                            if (mercury__table_statistics__succeeded)
                              *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__Var_545;
                            else
                            {
                              MR_Word mercury__table_statistics__Var_546;

                              mercury__table_statistics__succeeded = (mercury__table_statistics__Var_641 < mercury__table_statistics__ArgY3_519);
                              if (mercury__table_statistics__succeeded)
                                mercury__table_statistics__Var_546 = (MR_Integer) 1;
                              else
                              {
                                mercury__table_statistics__succeeded = (mercury__table_statistics__Var_641 == mercury__table_statistics__ArgY3_519);
                                if (mercury__table_statistics__succeeded)
                                  mercury__table_statistics__Var_546 = (MR_Integer) 0;
                                else
                                  mercury__table_statistics__Var_546 = (MR_Integer) 2;
                              }
                              mercury__table_statistics__succeeded = (mercury__table_statistics__Var_546 == (MR_Integer) 0);
                              mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
                              if (mercury__table_statistics__succeeded)
                                *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__Var_546;
                              else
                              {
                                MR_Word mercury__table_statistics__Var_547;

                                mercury__table_statistics__succeeded = (mercury__table_statistics__Var_640 < mercury__table_statistics__ArgY4_521);
                                if (mercury__table_statistics__succeeded)
                                  mercury__table_statistics__Var_547 = (MR_Integer) 1;
                                else
                                {
                                  mercury__table_statistics__succeeded = (mercury__table_statistics__Var_640 == mercury__table_statistics__ArgY4_521);
                                  if (mercury__table_statistics__succeeded)
                                    mercury__table_statistics__Var_547 = (MR_Integer) 0;
                                  else
                                    mercury__table_statistics__Var_547 = (MR_Integer) 2;
                                }
                                mercury__table_statistics__succeeded = (mercury__table_statistics__Var_547 == (MR_Integer) 0);
                                mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
                                if (mercury__table_statistics__succeeded)
                                  *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__Var_547;
                                else
                                {
                                  MR_Word mercury__table_statistics__Var_548;

                                  mercury__table_statistics__succeeded = (mercury__table_statistics__Var_639 < mercury__table_statistics__ArgY5_523);
                                  if (mercury__table_statistics__succeeded)
                                    mercury__table_statistics__Var_548 = (MR_Integer) 1;
                                  else
                                  {
                                    mercury__table_statistics__succeeded = (mercury__table_statistics__Var_639 == mercury__table_statistics__ArgY5_523);
                                    if (mercury__table_statistics__succeeded)
                                      mercury__table_statistics__Var_548 = (MR_Integer) 0;
                                    else
                                      mercury__table_statistics__Var_548 = (MR_Integer) 2;
                                  }
                                  mercury__table_statistics__succeeded = (mercury__table_statistics__Var_548 == (MR_Integer) 0);
                                  mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
                                  if (mercury__table_statistics__succeeded)
                                    *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__Var_548;
                                  else
                                  {
                                    MR_Word mercury__table_statistics__Var_549;

                                    mercury__table_statistics__succeeded = (mercury__table_statistics__Var_638 < mercury__table_statistics__ArgY6_525);
                                    if (mercury__table_statistics__succeeded)
                                      mercury__table_statistics__Var_549 = (MR_Integer) 1;
                                    else
                                    {
                                      mercury__table_statistics__succeeded = (mercury__table_statistics__Var_638 == mercury__table_statistics__ArgY6_525);
                                      if (mercury__table_statistics__succeeded)
                                        mercury__table_statistics__Var_549 = (MR_Integer) 0;
                                      else
                                        mercury__table_statistics__Var_549 = (MR_Integer) 2;
                                    }
                                    mercury__table_statistics__succeeded = (mercury__table_statistics__Var_549 == (MR_Integer) 0);
                                    mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
                                    if (mercury__table_statistics__succeeded)
                                      *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__Var_549;
                                    else
                                    {
                                      MR_Word mercury__table_statistics__Var_550;

                                      mercury__table_statistics__succeeded = (mercury__table_statistics__Var_637 < mercury__table_statistics__ArgY7_527);
                                      if (mercury__table_statistics__succeeded)
                                        mercury__table_statistics__Var_550 = (MR_Integer) 1;
                                      else
                                      {
                                        mercury__table_statistics__succeeded = (mercury__table_statistics__Var_637 == mercury__table_statistics__ArgY7_527);
                                        if (mercury__table_statistics__succeeded)
                                          mercury__table_statistics__Var_550 = (MR_Integer) 0;
                                        else
                                          mercury__table_statistics__Var_550 = (MR_Integer) 2;
                                      }
                                      mercury__table_statistics__succeeded = (mercury__table_statistics__Var_550 == (MR_Integer) 0);
                                      mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
                                      if (mercury__table_statistics__succeeded)
                                        *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__Var_550;
                                      else
                                      {
                                        MR_Word mercury__table_statistics__Var_551;

                                        mercury__table_statistics__succeeded = (mercury__table_statistics__Var_636 < mercury__table_statistics__ArgY8_529);
                                        if (mercury__table_statistics__succeeded)
                                          mercury__table_statistics__Var_551 = (MR_Integer) 1;
                                        else
                                        {
                                          mercury__table_statistics__succeeded = (mercury__table_statistics__Var_636 == mercury__table_statistics__ArgY8_529);
                                          if (mercury__table_statistics__succeeded)
                                            mercury__table_statistics__Var_551 = (MR_Integer) 0;
                                          else
                                            mercury__table_statistics__Var_551 = (MR_Integer) 2;
                                        }
                                        mercury__table_statistics__succeeded = (mercury__table_statistics__Var_551 == (MR_Integer) 0);
                                        mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
                                        if (mercury__table_statistics__succeeded)
                                          *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__Var_551;
                                        else
                                        {
                                          MR_Word mercury__table_statistics__Var_552;

                                          mercury__table_statistics__succeeded = (mercury__table_statistics__Var_635 < mercury__table_statistics__ArgY9_531);
                                          if (mercury__table_statistics__succeeded)
                                            mercury__table_statistics__Var_552 = (MR_Integer) 1;
                                          else
                                          {
                                            mercury__table_statistics__succeeded = (mercury__table_statistics__Var_635 == mercury__table_statistics__ArgY9_531);
                                            if (mercury__table_statistics__succeeded)
                                              mercury__table_statistics__Var_552 = (MR_Integer) 0;
                                            else
                                              mercury__table_statistics__Var_552 = (MR_Integer) 2;
                                          }
                                          mercury__table_statistics__succeeded = (mercury__table_statistics__Var_552 == (MR_Integer) 0);
                                          mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
                                          if (mercury__table_statistics__succeeded)
                                            *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__Var_552;
                                          else
                                          {
                                            MR_Word mercury__table_statistics__Var_553;

                                            mercury__table_statistics__succeeded = (mercury__table_statistics__Var_634 < mercury__table_statistics__ArgY10_533);
                                            if (mercury__table_statistics__succeeded)
                                              mercury__table_statistics__Var_553 = (MR_Integer) 1;
                                            else
                                            {
                                              mercury__table_statistics__succeeded = (mercury__table_statistics__Var_634 == mercury__table_statistics__ArgY10_533);
                                              if (mercury__table_statistics__succeeded)
                                                mercury__table_statistics__Var_553 = (MR_Integer) 0;
                                              else
                                                mercury__table_statistics__Var_553 = (MR_Integer) 2;
                                            }
                                            mercury__table_statistics__succeeded = (mercury__table_statistics__Var_553 == (MR_Integer) 0);
                                            mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
                                            if (mercury__table_statistics__succeeded)
                                              *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__Var_553;
                                            else
                                            {
                                              MR_Word mercury__table_statistics__Var_554;

                                              mercury__table_statistics__succeeded = (mercury__table_statistics__Var_633 < mercury__table_statistics__ArgY11_535);
                                              if (mercury__table_statistics__succeeded)
                                                mercury__table_statistics__Var_554 = (MR_Integer) 1;
                                              else
                                              {
                                                mercury__table_statistics__succeeded = (mercury__table_statistics__Var_633 == mercury__table_statistics__ArgY11_535);
                                                if (mercury__table_statistics__succeeded)
                                                  mercury__table_statistics__Var_554 = (MR_Integer) 0;
                                                else
                                                  mercury__table_statistics__Var_554 = (MR_Integer) 2;
                                              }
                                              mercury__table_statistics__succeeded = (mercury__table_statistics__Var_554 == (MR_Integer) 0);
                                              mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
                                              if (mercury__table_statistics__succeeded)
                                                *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__Var_554;
                                              else
                                              {
                                                MR_Word mercury__table_statistics__Var_555;

                                                mercury__table_statistics__succeeded = (mercury__table_statistics__Var_632 < mercury__table_statistics__ArgY12_537);
                                                if (mercury__table_statistics__succeeded)
                                                  mercury__table_statistics__Var_555 = (MR_Integer) 1;
                                                else
                                                {
                                                  mercury__table_statistics__succeeded = (mercury__table_statistics__Var_632 == mercury__table_statistics__ArgY12_537);
                                                  if (mercury__table_statistics__succeeded)
                                                    mercury__table_statistics__Var_555 = (MR_Integer) 0;
                                                  else
                                                    mercury__table_statistics__Var_555 = (MR_Integer) 2;
                                                }
                                                mercury__table_statistics__succeeded = (mercury__table_statistics__Var_555 == (MR_Integer) 0);
                                                mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
                                                if (mercury__table_statistics__succeeded)
                                                  *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__Var_555;
                                                else
                                                {
                                                  MR_Word mercury__table_statistics__Var_556;

                                                  mercury__table_statistics__succeeded = (mercury__table_statistics__Var_631 < mercury__table_statistics__ArgY13_539);
                                                  if (mercury__table_statistics__succeeded)
                                                    mercury__table_statistics__Var_556 = (MR_Integer) 1;
                                                  else
                                                  {
                                                    mercury__table_statistics__succeeded = (mercury__table_statistics__Var_631 == mercury__table_statistics__ArgY13_539);
                                                    if (mercury__table_statistics__succeeded)
                                                      mercury__table_statistics__Var_556 = (MR_Integer) 0;
                                                    else
                                                      mercury__table_statistics__Var_556 = (MR_Integer) 2;
                                                  }
                                                  mercury__table_statistics__succeeded = (mercury__table_statistics__Var_556 == (MR_Integer) 0);
                                                  mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
                                                  if (mercury__table_statistics__succeeded)
                                                    *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__Var_556;
                                                  else
                                                  {
                                                    MR_Word mercury__table_statistics__Var_557;

                                                    mercury__table_statistics__succeeded = (mercury__table_statistics__Var_630 < mercury__table_statistics__ArgY14_541);
                                                    if (mercury__table_statistics__succeeded)
                                                      mercury__table_statistics__Var_557 = (MR_Integer) 1;
                                                    else
                                                    {
                                                      mercury__table_statistics__succeeded = (mercury__table_statistics__Var_630 == mercury__table_statistics__ArgY14_541);
                                                      if (mercury__table_statistics__succeeded)
                                                        mercury__table_statistics__Var_557 = (MR_Integer) 0;
                                                      else
                                                        mercury__table_statistics__Var_557 = (MR_Integer) 2;
                                                    }
                                                    mercury__table_statistics__succeeded = (mercury__table_statistics__Var_557 == (MR_Integer) 0);
                                                    mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
                                                    if (mercury__table_statistics__succeeded)
                                                      *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__Var_557;
                                                    else
                                                    {
                                                      mercury__table_statistics__succeeded = (mercury__table_statistics__Var_629 < mercury__table_statistics__ArgY15_543);
                                                      if (mercury__table_statistics__succeeded)
                                                        *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 1;
                                                      else
                                                      {
                                                        mercury__table_statistics__succeeded = (mercury__table_statistics__Var_629 == mercury__table_statistics__ArgY15_543);
                                                        if (mercury__table_statistics__succeeded)
                                                          *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 0;
                                                        else
                                                          *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 2;
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
}

MR_bool MR_CALL 
mercury__table_statistics____Unify____table_step_stat_details_0_0(
  MR_Word mercury__table_statistics__HeadVar__1_1,
  MR_Word mercury__table_statistics__HeadVar__2_2)
{
  {
    MR_bool mercury__table_statistics__succeeded;
    MR_Integer mercury__table_statistics__CastX_91 = (MR_Integer) mercury__table_statistics__HeadVar__1_1;
    MR_Integer mercury__table_statistics__CastY_92 = (MR_Integer) mercury__table_statistics__HeadVar__2_2;

    mercury__table_statistics__succeeded = (mercury__table_statistics__CastX_91 == mercury__table_statistics__CastY_92);
    if (mercury__table_statistics__succeeded)
      mercury__table_statistics__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) mercury__table_statistics__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer mercury__table_statistics__CastX_3 = (MR_Integer) mercury__table_statistics__HeadVar__1_1;
            MR_Integer mercury__table_statistics__CastY_4 = (MR_Integer) mercury__table_statistics__HeadVar__2_2;

            mercury__table_statistics__succeeded = (mercury__table_statistics__CastY_4 == mercury__table_statistics__CastX_3);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer mercury__table_statistics__ArgX1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer mercury__table_statistics__ArgY1_6;
            MR_Integer mercury__table_statistics__ArgX2_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 1)));
            MR_Integer mercury__table_statistics__ArgY2_8;

            mercury__table_statistics__succeeded = ((MR_tag((MR_Word) mercury__table_statistics__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__table_statistics__succeeded)
            {
              mercury__table_statistics__ArgY1_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 0)));
              mercury__table_statistics__ArgY2_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 1)));
              mercury__table_statistics__succeeded = (mercury__table_statistics__ArgX1_5 == mercury__table_statistics__ArgY1_6);
              if (mercury__table_statistics__succeeded)
                mercury__table_statistics__succeeded = (mercury__table_statistics__ArgX2_7 == mercury__table_statistics__ArgY2_8);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer mercury__table_statistics__ArgX1_9 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer mercury__table_statistics__ArgY1_10;
            MR_Integer mercury__table_statistics__ArgX2_11 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 1)));
            MR_Integer mercury__table_statistics__ArgY2_12;

            mercury__table_statistics__succeeded = ((MR_tag((MR_Word) mercury__table_statistics__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (mercury__table_statistics__succeeded)
            {
              mercury__table_statistics__ArgY1_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 0)));
              mercury__table_statistics__ArgY2_12 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 1)));
              mercury__table_statistics__succeeded = (mercury__table_statistics__ArgX1_9 == mercury__table_statistics__ArgY1_10);
              if (mercury__table_statistics__succeeded)
                mercury__table_statistics__succeeded = (mercury__table_statistics__ArgX2_11 == mercury__table_statistics__ArgY2_12);
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer mercury__table_statistics__ArgX1_13 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 1)));
                MR_Integer mercury__table_statistics__ArgY1_14;
                MR_Integer mercury__table_statistics__ArgX2_15 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 2)));
                MR_Integer mercury__table_statistics__ArgY2_16;
                MR_Integer mercury__table_statistics__ArgX3_17 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 3)));
                MR_Integer mercury__table_statistics__ArgY3_18;
                MR_Integer mercury__table_statistics__ArgX4_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 4)));
                MR_Integer mercury__table_statistics__ArgY4_20;
                MR_Integer mercury__table_statistics__ArgX5_21 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 5)));
                MR_Integer mercury__table_statistics__ArgY5_22;
                MR_Integer mercury__table_statistics__ArgX6_23 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 6)));
                MR_Integer mercury__table_statistics__ArgY6_24;
                MR_Integer mercury__table_statistics__ArgX7_25 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 7)));
                MR_Integer mercury__table_statistics__ArgY7_26;
                MR_Integer mercury__table_statistics__ArgX8_27 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 8)));
                MR_Integer mercury__table_statistics__ArgY8_28;
                MR_Integer mercury__table_statistics__ArgX9_29 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 9)));
                MR_Integer mercury__table_statistics__ArgY9_30;

                mercury__table_statistics__succeeded = ((((MR_tag((MR_Word) mercury__table_statistics__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (mercury__table_statistics__succeeded)
                {
                  mercury__table_statistics__ArgY1_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 1)));
                  mercury__table_statistics__ArgY2_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 2)));
                  mercury__table_statistics__ArgY3_18 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 3)));
                  mercury__table_statistics__ArgY4_20 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 4)));
                  mercury__table_statistics__ArgY5_22 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 5)));
                  mercury__table_statistics__ArgY6_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 6)));
                  mercury__table_statistics__ArgY7_26 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 7)));
                  mercury__table_statistics__ArgY8_28 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 8)));
                  mercury__table_statistics__ArgY9_30 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 9)));
                  mercury__table_statistics__succeeded = (mercury__table_statistics__ArgX1_13 == mercury__table_statistics__ArgY1_14);
                  if (mercury__table_statistics__succeeded)
                  {
                    mercury__table_statistics__succeeded = (mercury__table_statistics__ArgX2_15 == mercury__table_statistics__ArgY2_16);
                    if (mercury__table_statistics__succeeded)
                    {
                      mercury__table_statistics__succeeded = (mercury__table_statistics__ArgX3_17 == mercury__table_statistics__ArgY3_18);
                      if (mercury__table_statistics__succeeded)
                      {
                        mercury__table_statistics__succeeded = (mercury__table_statistics__ArgX4_19 == mercury__table_statistics__ArgY4_20);
                        if (mercury__table_statistics__succeeded)
                        {
                          mercury__table_statistics__succeeded = (mercury__table_statistics__ArgX5_21 == mercury__table_statistics__ArgY5_22);
                          if (mercury__table_statistics__succeeded)
                          {
                            mercury__table_statistics__succeeded = (mercury__table_statistics__ArgX6_23 == mercury__table_statistics__ArgY6_24);
                            if (mercury__table_statistics__succeeded)
                            {
                              mercury__table_statistics__succeeded = (mercury__table_statistics__ArgX7_25 == mercury__table_statistics__ArgY7_26);
                              if (mercury__table_statistics__succeeded)
                              {
                                mercury__table_statistics__succeeded = (mercury__table_statistics__ArgX8_27 == mercury__table_statistics__ArgY8_28);
                                if (mercury__table_statistics__succeeded)
                                  mercury__table_statistics__succeeded = (mercury__table_statistics__ArgX9_29 == mercury__table_statistics__ArgY9_30);
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
                MR_Integer mercury__table_statistics__ArgX1_31 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 1)));
                MR_Integer mercury__table_statistics__ArgY1_32;
                MR_Integer mercury__table_statistics__ArgX2_33 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 2)));
                MR_Integer mercury__table_statistics__ArgY2_34;
                MR_Integer mercury__table_statistics__ArgX3_35 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 3)));
                MR_Integer mercury__table_statistics__ArgY3_36;
                MR_Integer mercury__table_statistics__ArgX4_37 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 4)));
                MR_Integer mercury__table_statistics__ArgY4_38;
                MR_Integer mercury__table_statistics__ArgX5_39 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 5)));
                MR_Integer mercury__table_statistics__ArgY5_40;
                MR_Integer mercury__table_statistics__ArgX6_41 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 6)));
                MR_Integer mercury__table_statistics__ArgY6_42;
                MR_Integer mercury__table_statistics__ArgX7_43 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 7)));
                MR_Integer mercury__table_statistics__ArgY7_44;
                MR_Integer mercury__table_statistics__ArgX8_45 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 8)));
                MR_Integer mercury__table_statistics__ArgY8_46;
                MR_Integer mercury__table_statistics__ArgX9_47 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 9)));
                MR_Integer mercury__table_statistics__ArgY9_48;
                MR_Integer mercury__table_statistics__ArgX10_49 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 10)));
                MR_Integer mercury__table_statistics__ArgY10_50;
                MR_Integer mercury__table_statistics__ArgX11_51 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 11)));
                MR_Integer mercury__table_statistics__ArgY11_52;
                MR_Integer mercury__table_statistics__ArgX12_53 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 12)));
                MR_Integer mercury__table_statistics__ArgY12_54;
                MR_Integer mercury__table_statistics__ArgX13_55 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 13)));
                MR_Integer mercury__table_statistics__ArgY13_56;
                MR_Integer mercury__table_statistics__ArgX14_57 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 14)));
                MR_Integer mercury__table_statistics__ArgY14_58;
                MR_Integer mercury__table_statistics__ArgX15_59 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 15)));
                MR_Integer mercury__table_statistics__ArgY15_60;

                mercury__table_statistics__succeeded = ((((MR_tag((MR_Word) mercury__table_statistics__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (mercury__table_statistics__succeeded)
                {
                  mercury__table_statistics__ArgY1_32 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 1)));
                  mercury__table_statistics__ArgY2_34 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 2)));
                  mercury__table_statistics__ArgY3_36 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 3)));
                  mercury__table_statistics__ArgY4_38 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 4)));
                  mercury__table_statistics__ArgY5_40 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 5)));
                  mercury__table_statistics__ArgY6_42 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 6)));
                  mercury__table_statistics__ArgY7_44 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 7)));
                  mercury__table_statistics__ArgY8_46 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 8)));
                  mercury__table_statistics__ArgY9_48 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 9)));
                  mercury__table_statistics__ArgY10_50 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 10)));
                  mercury__table_statistics__ArgY11_52 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 11)));
                  mercury__table_statistics__ArgY12_54 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 12)));
                  mercury__table_statistics__ArgY13_56 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 13)));
                  mercury__table_statistics__ArgY14_58 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 14)));
                  mercury__table_statistics__ArgY15_60 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 15)));
                  mercury__table_statistics__succeeded = (mercury__table_statistics__ArgX1_31 == mercury__table_statistics__ArgY1_32);
                  if (mercury__table_statistics__succeeded)
                  {
                    mercury__table_statistics__succeeded = (mercury__table_statistics__ArgX2_33 == mercury__table_statistics__ArgY2_34);
                    if (mercury__table_statistics__succeeded)
                    {
                      mercury__table_statistics__succeeded = (mercury__table_statistics__ArgX3_35 == mercury__table_statistics__ArgY3_36);
                      if (mercury__table_statistics__succeeded)
                      {
                        mercury__table_statistics__succeeded = (mercury__table_statistics__ArgX4_37 == mercury__table_statistics__ArgY4_38);
                        if (mercury__table_statistics__succeeded)
                        {
                          mercury__table_statistics__succeeded = (mercury__table_statistics__ArgX5_39 == mercury__table_statistics__ArgY5_40);
                          if (mercury__table_statistics__succeeded)
                          {
                            mercury__table_statistics__succeeded = (mercury__table_statistics__ArgX6_41 == mercury__table_statistics__ArgY6_42);
                            if (mercury__table_statistics__succeeded)
                            {
                              mercury__table_statistics__succeeded = (mercury__table_statistics__ArgX7_43 == mercury__table_statistics__ArgY7_44);
                              if (mercury__table_statistics__succeeded)
                              {
                                mercury__table_statistics__succeeded = (mercury__table_statistics__ArgX8_45 == mercury__table_statistics__ArgY8_46);
                                if (mercury__table_statistics__succeeded)
                                {
                                  mercury__table_statistics__succeeded = (mercury__table_statistics__ArgX9_47 == mercury__table_statistics__ArgY9_48);
                                  if (mercury__table_statistics__succeeded)
                                  {
                                    mercury__table_statistics__succeeded = (mercury__table_statistics__ArgX10_49 == mercury__table_statistics__ArgY10_50);
                                    if (mercury__table_statistics__succeeded)
                                    {
                                      mercury__table_statistics__succeeded = (mercury__table_statistics__ArgX11_51 == mercury__table_statistics__ArgY11_52);
                                      if (mercury__table_statistics__succeeded)
                                      {
                                        mercury__table_statistics__succeeded = (mercury__table_statistics__ArgX12_53 == mercury__table_statistics__ArgY12_54);
                                        if (mercury__table_statistics__succeeded)
                                        {
                                          mercury__table_statistics__succeeded = (mercury__table_statistics__ArgX13_55 == mercury__table_statistics__ArgY13_56);
                                          if (mercury__table_statistics__succeeded)
                                          {
                                            mercury__table_statistics__succeeded = (mercury__table_statistics__ArgX14_57 == mercury__table_statistics__ArgY14_58);
                                            if (mercury__table_statistics__succeeded)
                                              mercury__table_statistics__succeeded = (mercury__table_statistics__ArgX15_59 == mercury__table_statistics__ArgY15_60);
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
                MR_Integer mercury__table_statistics__ArgX1_61 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 1)));
                MR_Integer mercury__table_statistics__ArgY1_62;
                MR_Integer mercury__table_statistics__ArgX2_63 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 2)));
                MR_Integer mercury__table_statistics__ArgY2_64;
                MR_Integer mercury__table_statistics__ArgX3_65 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 3)));
                MR_Integer mercury__table_statistics__ArgY3_66;
                MR_Integer mercury__table_statistics__ArgX4_67 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 4)));
                MR_Integer mercury__table_statistics__ArgY4_68;
                MR_Integer mercury__table_statistics__ArgX5_69 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 5)));
                MR_Integer mercury__table_statistics__ArgY5_70;
                MR_Integer mercury__table_statistics__ArgX6_71 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 6)));
                MR_Integer mercury__table_statistics__ArgY6_72;
                MR_Integer mercury__table_statistics__ArgX7_73 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 7)));
                MR_Integer mercury__table_statistics__ArgY7_74;
                MR_Integer mercury__table_statistics__ArgX8_75 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 8)));
                MR_Integer mercury__table_statistics__ArgY8_76;
                MR_Integer mercury__table_statistics__ArgX9_77 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 9)));
                MR_Integer mercury__table_statistics__ArgY9_78;
                MR_Integer mercury__table_statistics__ArgX10_79 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 10)));
                MR_Integer mercury__table_statistics__ArgY10_80;
                MR_Integer mercury__table_statistics__ArgX11_81 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 11)));
                MR_Integer mercury__table_statistics__ArgY11_82;
                MR_Integer mercury__table_statistics__ArgX12_83 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 12)));
                MR_Integer mercury__table_statistics__ArgY12_84;
                MR_Integer mercury__table_statistics__ArgX13_85 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 13)));
                MR_Integer mercury__table_statistics__ArgY13_86;
                MR_Integer mercury__table_statistics__ArgX14_87 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 14)));
                MR_Integer mercury__table_statistics__ArgY14_88;
                MR_Integer mercury__table_statistics__ArgX15_89 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 15)));
                MR_Integer mercury__table_statistics__ArgY15_90;

                mercury__table_statistics__succeeded = ((((MR_tag((MR_Word) mercury__table_statistics__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (mercury__table_statistics__succeeded)
                {
                  mercury__table_statistics__ArgY1_62 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 1)));
                  mercury__table_statistics__ArgY2_64 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 2)));
                  mercury__table_statistics__ArgY3_66 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 3)));
                  mercury__table_statistics__ArgY4_68 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 4)));
                  mercury__table_statistics__ArgY5_70 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 5)));
                  mercury__table_statistics__ArgY6_72 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 6)));
                  mercury__table_statistics__ArgY7_74 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 7)));
                  mercury__table_statistics__ArgY8_76 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 8)));
                  mercury__table_statistics__ArgY9_78 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 9)));
                  mercury__table_statistics__ArgY10_80 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 10)));
                  mercury__table_statistics__ArgY11_82 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 11)));
                  mercury__table_statistics__ArgY12_84 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 12)));
                  mercury__table_statistics__ArgY13_86 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 13)));
                  mercury__table_statistics__ArgY14_88 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 14)));
                  mercury__table_statistics__ArgY15_90 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 15)));
                  mercury__table_statistics__succeeded = (mercury__table_statistics__ArgX1_61 == mercury__table_statistics__ArgY1_62);
                  if (mercury__table_statistics__succeeded)
                  {
                    mercury__table_statistics__succeeded = (mercury__table_statistics__ArgX2_63 == mercury__table_statistics__ArgY2_64);
                    if (mercury__table_statistics__succeeded)
                    {
                      mercury__table_statistics__succeeded = (mercury__table_statistics__ArgX3_65 == mercury__table_statistics__ArgY3_66);
                      if (mercury__table_statistics__succeeded)
                      {
                        mercury__table_statistics__succeeded = (mercury__table_statistics__ArgX4_67 == mercury__table_statistics__ArgY4_68);
                        if (mercury__table_statistics__succeeded)
                        {
                          mercury__table_statistics__succeeded = (mercury__table_statistics__ArgX5_69 == mercury__table_statistics__ArgY5_70);
                          if (mercury__table_statistics__succeeded)
                          {
                            mercury__table_statistics__succeeded = (mercury__table_statistics__ArgX6_71 == mercury__table_statistics__ArgY6_72);
                            if (mercury__table_statistics__succeeded)
                            {
                              mercury__table_statistics__succeeded = (mercury__table_statistics__ArgX7_73 == mercury__table_statistics__ArgY7_74);
                              if (mercury__table_statistics__succeeded)
                              {
                                mercury__table_statistics__succeeded = (mercury__table_statistics__ArgX8_75 == mercury__table_statistics__ArgY8_76);
                                if (mercury__table_statistics__succeeded)
                                {
                                  mercury__table_statistics__succeeded = (mercury__table_statistics__ArgX9_77 == mercury__table_statistics__ArgY9_78);
                                  if (mercury__table_statistics__succeeded)
                                  {
                                    mercury__table_statistics__succeeded = (mercury__table_statistics__ArgX10_79 == mercury__table_statistics__ArgY10_80);
                                    if (mercury__table_statistics__succeeded)
                                    {
                                      mercury__table_statistics__succeeded = (mercury__table_statistics__ArgX11_81 == mercury__table_statistics__ArgY11_82);
                                      if (mercury__table_statistics__succeeded)
                                      {
                                        mercury__table_statistics__succeeded = (mercury__table_statistics__ArgX12_83 == mercury__table_statistics__ArgY12_84);
                                        if (mercury__table_statistics__succeeded)
                                        {
                                          mercury__table_statistics__succeeded = (mercury__table_statistics__ArgX13_85 == mercury__table_statistics__ArgY13_86);
                                          if (mercury__table_statistics__succeeded)
                                          {
                                            mercury__table_statistics__succeeded = (mercury__table_statistics__ArgX14_87 == mercury__table_statistics__ArgY14_88);
                                            if (mercury__table_statistics__succeeded)
                                              mercury__table_statistics__succeeded = (mercury__table_statistics__ArgX15_89 == mercury__table_statistics__ArgY15_90);
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
    return mercury__table_statistics__succeeded;
  }
}

void MR_CALL 
mercury__table_statistics____Compare____table_step_kind_0_0(
  MR_Word * mercury__table_statistics__HeadVar__1_1,
  MR_Word mercury__table_statistics__HeadVar__2_2,
  MR_Word mercury__table_statistics__HeadVar__3_3)
{
  {
    MR_bool mercury__table_statistics__succeeded;
    MR_Integer mercury__table_statistics__Cast_HeadVar1_4 = (MR_Integer) mercury__table_statistics__HeadVar__2_2;
    MR_Integer mercury__table_statistics__Cast_HeadVar2_5 = (MR_Integer) mercury__table_statistics__HeadVar__3_3;

    mercury__table_statistics__succeeded = (mercury__table_statistics__Cast_HeadVar1_4 < mercury__table_statistics__Cast_HeadVar2_5);
    if (mercury__table_statistics__succeeded)
      *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      mercury__table_statistics__succeeded = (mercury__table_statistics__Cast_HeadVar1_4 == mercury__table_statistics__Cast_HeadVar2_5);
      if (mercury__table_statistics__succeeded)
        *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 0;
      else
        *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 2;
    }
  }
}

MR_bool MR_CALL 
mercury__table_statistics____Unify____table_step_kind_0_0(
  MR_Word mercury__table_statistics__HeadVar__2_1,
  MR_Word mercury__table_statistics__HeadVar__2_2)
{
  {
    MR_bool mercury__table_statistics__succeeded = (mercury__table_statistics__HeadVar__2_1 == mercury__table_statistics__HeadVar__2_2);

    return mercury__table_statistics__succeeded;
  }
}

void MR_CALL 
mercury__table_statistics____Compare____proc_table_statistics_0_0(
  MR_Word * mercury__table_statistics__HeadVar__1_1,
  MR_Word mercury__table_statistics__HeadVar__2_2,
  MR_Word mercury__table_statistics__HeadVar__3_3)
{
  {
    MR_bool mercury__table_statistics__succeeded;
    MR_Integer mercury__table_statistics__CastX_9 = (MR_Integer) mercury__table_statistics__HeadVar__2_2;
    MR_Integer mercury__table_statistics__CastY_10 = (MR_Integer) mercury__table_statistics__HeadVar__3_3;

    mercury__table_statistics__succeeded = (mercury__table_statistics__CastX_9 == mercury__table_statistics__CastY_10);
    if (mercury__table_statistics__succeeded)
      *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word mercury__table_statistics__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word mercury__table_statistics__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 0)));
      MR_Word mercury__table_statistics__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word mercury__table_statistics__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 1)));
      MR_Word mercury__table_statistics__Var_8;

      {
        mercury__table_statistics____Compare____table_stats_curr_prev_0_0(&mercury__table_statistics__Var_8, mercury__table_statistics__ArgX1_4, mercury__table_statistics__ArgY1_5);
      }
      mercury__table_statistics__succeeded = (mercury__table_statistics__Var_8 == (MR_Integer) 0);
      mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
      if (mercury__table_statistics__succeeded)
        *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__Var_8;
      else
      {
        MR_Word mercury__table_statistics__TypeInfo_12_12 = (MR_Word) &mercury__table_statistics_scalar_common_1[1];

        {
          mercury__builtin__compare_3_p_0(mercury__table_statistics__TypeInfo_12_12, mercury__table_statistics__HeadVar__1_1, ((MR_Box) (mercury__table_statistics__ArgX2_6)), ((MR_Box) (mercury__table_statistics__ArgY2_7)));
        }
      }
    }
  }
}

void MR_CALL 
mercury__table_statistics____Compare____table_stats_curr_prev_0_0(
  MR_Word * mercury__table_statistics__HeadVar__1_1,
  MR_Word mercury__table_statistics__HeadVar__2_2,
  MR_Word mercury__table_statistics__HeadVar__3_3)
{
  {
    MR_bool mercury__table_statistics__succeeded;
    MR_Integer mercury__table_statistics__CastX_9 = (MR_Integer) mercury__table_statistics__HeadVar__2_2;
    MR_Integer mercury__table_statistics__CastY_10 = (MR_Integer) mercury__table_statistics__HeadVar__3_3;

    mercury__table_statistics__succeeded = (mercury__table_statistics__CastX_9 == mercury__table_statistics__CastY_10);
    if (mercury__table_statistics__succeeded)
      *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word mercury__table_statistics__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word mercury__table_statistics__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 0)));
      MR_Word mercury__table_statistics__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word mercury__table_statistics__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 1)));
      MR_Word mercury__table_statistics__Var_8;

      {
        mercury__table_statistics____Compare____table_stats_0_0(&mercury__table_statistics__Var_8, mercury__table_statistics__ArgX1_4, mercury__table_statistics__ArgY1_5);
      }
      mercury__table_statistics__succeeded = (mercury__table_statistics__Var_8 == (MR_Integer) 0);
      mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
      if (mercury__table_statistics__succeeded)
        *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__Var_8;
      else
        {
          mercury__table_statistics____Compare____table_stats_0_0(mercury__table_statistics__HeadVar__1_1, mercury__table_statistics__ArgX2_6, mercury__table_statistics__ArgY2_7);
        }
    }
  }
}

void MR_CALL 
mercury__table_statistics____Compare____table_stats_0_0(
  MR_Word * mercury__table_statistics__HeadVar__1_1,
  MR_Word mercury__table_statistics__HeadVar__2_2,
  MR_Word mercury__table_statistics__HeadVar__3_3)
{
  {
    MR_bool mercury__table_statistics__succeeded;
    MR_Integer mercury__table_statistics__CastX_12 = (MR_Integer) mercury__table_statistics__HeadVar__2_2;
    MR_Integer mercury__table_statistics__CastY_13 = (MR_Integer) mercury__table_statistics__HeadVar__3_3;

    mercury__table_statistics__succeeded = (mercury__table_statistics__CastX_12 == mercury__table_statistics__CastY_13);
    if (mercury__table_statistics__succeeded)
      *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer mercury__table_statistics__ArgX1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 0)));
      MR_Integer mercury__table_statistics__ArgY1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 0)));
      MR_Integer mercury__table_statistics__ArgX2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 1)));
      MR_Integer mercury__table_statistics__ArgY2_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 1)));
      MR_Word mercury__table_statistics__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 2)));
      MR_Word mercury__table_statistics__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 2)));
      MR_Word mercury__table_statistics__Var_10;

      mercury__table_statistics__succeeded = (mercury__table_statistics__ArgX1_4 < mercury__table_statistics__ArgY1_5);
      if (mercury__table_statistics__succeeded)
        mercury__table_statistics__Var_10 = (MR_Integer) 1;
      else
      {
        mercury__table_statistics__succeeded = (mercury__table_statistics__ArgX1_4 == mercury__table_statistics__ArgY1_5);
        if (mercury__table_statistics__succeeded)
          mercury__table_statistics__Var_10 = (MR_Integer) 0;
        else
          mercury__table_statistics__Var_10 = (MR_Integer) 2;
      }
      mercury__table_statistics__succeeded = (mercury__table_statistics__Var_10 == (MR_Integer) 0);
      mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
      if (mercury__table_statistics__succeeded)
        *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__Var_10;
      else
      {
        MR_Word mercury__table_statistics__Var_11;

        mercury__table_statistics__succeeded = (mercury__table_statistics__ArgX2_6 < mercury__table_statistics__ArgY2_7);
        if (mercury__table_statistics__succeeded)
          mercury__table_statistics__Var_11 = (MR_Integer) 1;
        else
        {
          mercury__table_statistics__succeeded = (mercury__table_statistics__ArgX2_6 == mercury__table_statistics__ArgY2_7);
          if (mercury__table_statistics__succeeded)
            mercury__table_statistics__Var_11 = (MR_Integer) 0;
          else
            mercury__table_statistics__Var_11 = (MR_Integer) 2;
        }
        mercury__table_statistics__succeeded = (mercury__table_statistics__Var_11 == (MR_Integer) 0);
        mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
        if (mercury__table_statistics__succeeded)
          *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__Var_11;
        else
        {
          MR_Word mercury__table_statistics__TypeInfo_16_16 = (MR_Word) &mercury__table_statistics_scalar_common_1[0];

          {
            mercury__builtin__compare_3_p_0(mercury__table_statistics__TypeInfo_16_16, mercury__table_statistics__HeadVar__1_1, ((MR_Box) (mercury__table_statistics__ArgX3_8)), ((MR_Box) (mercury__table_statistics__ArgY3_9)));
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
mercury__table_statistics____Unify____proc_table_statistics_0_0(
  MR_Word mercury__table_statistics__HeadVar__1_1,
  MR_Word mercury__table_statistics__HeadVar__2_2)
{
  {
    MR_bool mercury__table_statistics__succeeded;
    MR_Integer mercury__table_statistics__CastX_7 = (MR_Integer) mercury__table_statistics__HeadVar__1_1;
    MR_Integer mercury__table_statistics__CastY_8 = (MR_Integer) mercury__table_statistics__HeadVar__2_2;

    mercury__table_statistics__succeeded = (mercury__table_statistics__CastX_7 == mercury__table_statistics__CastY_8);
    if (mercury__table_statistics__succeeded)
      mercury__table_statistics__succeeded = MR_TRUE;
    else
    {
      MR_Word mercury__table_statistics__TypeInfo_9_9;
      MR_Word mercury__table_statistics__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word mercury__table_statistics__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word mercury__table_statistics__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word mercury__table_statistics__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 1)));

      {
        mercury__table_statistics__succeeded = mercury__table_statistics____Unify____table_stats_curr_prev_0_0(mercury__table_statistics__ArgX1_3, mercury__table_statistics__ArgY1_4);
      }
      if (mercury__table_statistics__succeeded)
      {
        mercury__table_statistics__TypeInfo_9_9 = (MR_Word) &mercury__table_statistics_scalar_common_1[1];
        {
          mercury__table_statistics__succeeded = mercury__builtin__unify_2_p_0(mercury__table_statistics__TypeInfo_9_9, ((MR_Box) (mercury__table_statistics__ArgX2_5)), ((MR_Box) (mercury__table_statistics__ArgY2_6)));
        }
      }
    }
    return mercury__table_statistics__succeeded;
  }
}

MR_bool MR_CALL 
mercury__table_statistics____Unify____table_stats_curr_prev_0_0(
  MR_Word mercury__table_statistics__HeadVar__1_1,
  MR_Word mercury__table_statistics__HeadVar__2_2)
{
  {
    MR_bool mercury__table_statistics__succeeded;
    MR_Integer mercury__table_statistics__CastX_7 = (MR_Integer) mercury__table_statistics__HeadVar__1_1;
    MR_Integer mercury__table_statistics__CastY_8 = (MR_Integer) mercury__table_statistics__HeadVar__2_2;

    mercury__table_statistics__succeeded = (mercury__table_statistics__CastX_7 == mercury__table_statistics__CastY_8);
    if (mercury__table_statistics__succeeded)
      mercury__table_statistics__succeeded = MR_TRUE;
    else
    {
      MR_Word mercury__table_statistics__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word mercury__table_statistics__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word mercury__table_statistics__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word mercury__table_statistics__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 1)));

      {
        mercury__table_statistics__succeeded = mercury__table_statistics____Unify____table_stats_0_0(mercury__table_statistics__ArgX1_3, mercury__table_statistics__ArgY1_4);
      }
      if (mercury__table_statistics__succeeded)
        {
          mercury__table_statistics__succeeded = mercury__table_statistics____Unify____table_stats_0_0(mercury__table_statistics__ArgX2_5, mercury__table_statistics__ArgY2_6);
        }
    }
    return mercury__table_statistics__succeeded;
  }
}

MR_bool MR_CALL 
mercury__table_statistics____Unify____table_stats_0_0(
  MR_Word mercury__table_statistics__HeadVar__1_1,
  MR_Word mercury__table_statistics__HeadVar__2_2)
{
  {
    MR_bool mercury__table_statistics__succeeded;
    MR_Integer mercury__table_statistics__CastX_9 = (MR_Integer) mercury__table_statistics__HeadVar__1_1;
    MR_Integer mercury__table_statistics__CastY_10 = (MR_Integer) mercury__table_statistics__HeadVar__2_2;

    mercury__table_statistics__succeeded = (mercury__table_statistics__CastX_9 == mercury__table_statistics__CastY_10);
    if (mercury__table_statistics__succeeded)
      mercury__table_statistics__succeeded = MR_TRUE;
    else
    {
      MR_Word mercury__table_statistics__TypeInfo_11_11;
      MR_Integer mercury__table_statistics__ArgX1_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 0)));
      MR_Integer mercury__table_statistics__ArgY1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 0)));
      MR_Integer mercury__table_statistics__ArgX2_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 1)));
      MR_Integer mercury__table_statistics__ArgY2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word mercury__table_statistics__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 2)));
      MR_Word mercury__table_statistics__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 2)));

      mercury__table_statistics__succeeded = (mercury__table_statistics__ArgX1_3 == mercury__table_statistics__ArgY1_4);
      if (mercury__table_statistics__succeeded)
      {
        mercury__table_statistics__succeeded = (mercury__table_statistics__ArgX2_5 == mercury__table_statistics__ArgY2_6);
        if (mercury__table_statistics__succeeded)
        {
          mercury__table_statistics__TypeInfo_11_11 = (MR_Word) &mercury__table_statistics_scalar_common_1[0];
          {
            mercury__table_statistics__succeeded = mercury__builtin__unify_2_p_0(mercury__table_statistics__TypeInfo_11_11, ((MR_Box) (mercury__table_statistics__ArgX3_7)), ((MR_Box) (mercury__table_statistics__ArgY3_8)));
          }
        }
      }
    }
    return mercury__table_statistics__succeeded;
  }
}

void MR_CALL 
mercury__table_statistics____Compare____ml_table_step_desc_ptr_0_0(
  MR_Word * mercury__table_statistics__HeadVar__1_1,
  MR_Box mercury__table_statistics__HeadVar__2_2,
  MR_Box mercury__table_statistics__HeadVar__3_3)
{
  {
    MR_Word mercury__table_statistics__Cast_HeadVar1_4 = (MR_Word) mercury__table_statistics__HeadVar__2_2;
    MR_Word mercury__table_statistics__Cast_HeadVar2_5 = (MR_Word) mercury__table_statistics__HeadVar__3_3;

    {
      mercury__builtin____Compare____c_pointer_0_0(mercury__table_statistics__HeadVar__1_1, mercury__table_statistics__Cast_HeadVar1_4, mercury__table_statistics__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
mercury__table_statistics____Unify____ml_table_step_desc_ptr_0_0(
  MR_Box mercury__table_statistics__HeadVar__1_1,
  MR_Box mercury__table_statistics__HeadVar__2_2)
{
  {
    MR_bool mercury__table_statistics__succeeded;
    MR_Word mercury__table_statistics__Cast_HeadVar1_3 = (MR_Word) mercury__table_statistics__HeadVar__1_1;
    MR_Word mercury__table_statistics__Cast_HeadVar2_4 = (MR_Word) mercury__table_statistics__HeadVar__2_2;

    {
      mercury__table_statistics__succeeded = mercury__builtin____Unify____c_pointer_0_0(mercury__table_statistics__Cast_HeadVar1_3, mercury__table_statistics__Cast_HeadVar2_4);
    }
    return mercury__table_statistics__succeeded;
  }
}

void MR_CALL 
mercury__table_statistics____Compare____ml_table_stats_ptr_0_0(
  MR_Word * mercury__table_statistics__HeadVar__1_1,
  MR_Box mercury__table_statistics__HeadVar__2_2,
  MR_Box mercury__table_statistics__HeadVar__3_3)
{
  {
    MR_Word mercury__table_statistics__Cast_HeadVar1_4 = (MR_Word) mercury__table_statistics__HeadVar__2_2;
    MR_Word mercury__table_statistics__Cast_HeadVar2_5 = (MR_Word) mercury__table_statistics__HeadVar__3_3;

    {
      mercury__builtin____Compare____c_pointer_0_0(mercury__table_statistics__HeadVar__1_1, mercury__table_statistics__Cast_HeadVar1_4, mercury__table_statistics__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
mercury__table_statistics____Unify____ml_table_stats_ptr_0_0(
  MR_Box mercury__table_statistics__HeadVar__1_1,
  MR_Box mercury__table_statistics__HeadVar__2_2)
{
  {
    MR_bool mercury__table_statistics__succeeded;
    MR_Word mercury__table_statistics__Cast_HeadVar1_3 = (MR_Word) mercury__table_statistics__HeadVar__1_1;
    MR_Word mercury__table_statistics__Cast_HeadVar2_4 = (MR_Word) mercury__table_statistics__HeadVar__2_2;

    {
      mercury__table_statistics__succeeded = mercury__builtin____Unify____c_pointer_0_0(mercury__table_statistics__Cast_HeadVar1_3, mercury__table_statistics__Cast_HeadVar2_4);
    }
    return mercury__table_statistics__succeeded;
  }
}

static void MR_CALL 
mercury__table_statistics__copy_current_stats_to_prev_5_p_0(
  MR_Box mercury__table_statistics__CurPtr_1,
  MR_Box mercury__table_statistics__PrevPtr_2,
  MR_Integer mercury__table_statistics__NumSteps_3)
{
  {
{
#define MR_PROC_LABEL mercury__table_statistics__copy_current_stats_to_prev_5_p_0

	MR_TableStats * CurPtr;
	MR_TableStats * PrevPtr;
	MR_Integer NumSteps;

	CurPtr = (MR_TableStats *) mercury__table_statistics__CurPtr_1 ;
	PrevPtr = (MR_TableStats *) mercury__table_statistics__PrevPtr_2 ;
	NumSteps =  mercury__table_statistics__NumSteps_3 ;
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
}

static void MR_CALL 
mercury__table_statistics__get_one_table_step_stat_details_26_p_0(
  MR_Box mercury__table_statistics__StepDescsPtr_1,
  MR_Box mercury__table_statistics__StatsStructPtr_2,
  MR_Integer mercury__table_statistics__StepNum_3,
  MR_String * mercury__table_statistics__VarName_4,
  MR_Integer * mercury__table_statistics__NumLookups_5,
  MR_Integer * mercury__table_statistics__NumLookupsIsDupl_6,
  MR_Integer * mercury__table_statistics__KindInt_7,
  MR_Integer * mercury__table_statistics__HashTableAllocs_8,
  MR_Integer * mercury__table_statistics__HashTableBytes_9,
  MR_Integer * mercury__table_statistics__HashLinkChunkAllocs_10,
  MR_Integer * mercury__table_statistics__HashLinkChunkBytes_11,
  MR_Integer * mercury__table_statistics__HashKeyComparesNotDupl_12,
  MR_Integer * mercury__table_statistics__HashKeyComparesIsDupl_13,
  MR_Integer * mercury__table_statistics__HashResizes_14,
  MR_Integer * mercury__table_statistics__HashResizeOldEntries_15,
  MR_Integer * mercury__table_statistics__HashResizeNewEntries_16,
  MR_Integer * mercury__table_statistics__EnumNodeAllocs_17,
  MR_Integer * mercury__table_statistics__EnumNodeBytes_18,
  MR_Integer * mercury__table_statistics__DuNodeAllocs_19,
  MR_Integer * mercury__table_statistics__DuNodeBytes_20,
  MR_Integer * mercury__table_statistics__DuArgLookups_21,
  MR_Integer * mercury__table_statistics__DuExistLookups_22,
  MR_Integer * mercury__table_statistics__StartAllocs_23,
  MR_Integer * mercury__table_statistics__StartBytes_24)
{
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

	StepDescsPtr = (const MR_TableStepDesc *) mercury__table_statistics__StepDescsPtr_1 ;
	StatsStructPtr = (MR_TableStats *) mercury__table_statistics__StatsStructPtr_2 ;
	StepNum =  mercury__table_statistics__StepNum_3 ;
		{

    const MR_TableStepStats *ptr;

    ptr = &(StatsStructPtr->MR_ts_steps[StepNum]);

    /* The casts are to discard const. */
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
	 *mercury__table_statistics__VarName_4  = VarName;
	 *mercury__table_statistics__NumLookups_5  = NumLookups;
	 *mercury__table_statistics__NumLookupsIsDupl_6  = NumLookupsIsDupl;
	 *mercury__table_statistics__KindInt_7  = KindInt;
	 *mercury__table_statistics__HashTableAllocs_8  = HashTableAllocs;
	 *mercury__table_statistics__HashTableBytes_9  = HashTableBytes;
	 *mercury__table_statistics__HashLinkChunkAllocs_10  = HashLinkChunkAllocs;
	 *mercury__table_statistics__HashLinkChunkBytes_11  = HashLinkChunkBytes;
	 *mercury__table_statistics__HashKeyComparesNotDupl_12  = HashKeyComparesNotDupl;
	 *mercury__table_statistics__HashKeyComparesIsDupl_13  = HashKeyComparesIsDupl;
	 *mercury__table_statistics__HashResizes_14  = HashResizes;
	 *mercury__table_statistics__HashResizeOldEntries_15  = HashResizeOldEntries;
	 *mercury__table_statistics__HashResizeNewEntries_16  = HashResizeNewEntries;
	 *mercury__table_statistics__EnumNodeAllocs_17  = EnumNodeAllocs;
	 *mercury__table_statistics__EnumNodeBytes_18  = EnumNodeBytes;
	 *mercury__table_statistics__DuNodeAllocs_19  = DuNodeAllocs;
	 *mercury__table_statistics__DuNodeBytes_20  = DuNodeBytes;
	 *mercury__table_statistics__DuArgLookups_21  = DuArgLookups;
	 *mercury__table_statistics__DuExistLookups_22  = DuExistLookups;
	 *mercury__table_statistics__StartAllocs_23  = StartAllocs;
	 *mercury__table_statistics__StartBytes_24  = StartBytes;
}
  }
}

static void MR_CALL 
mercury__table_statistics__get_one_table_overall_stats_5_p_0(
  MR_Box mercury__table_statistics__StatsPtr_1,
  MR_Integer * mercury__table_statistics__NumLookups_2,
  MR_Integer * mercury__table_statistics__NumLookupsIsDupl_3)
{
  {
{
#define MR_PROC_LABEL mercury__table_statistics__get_one_table_overall_stats_5_p_0

	MR_TableStats * StatsPtr;
	MR_Integer NumLookups;
	MR_Integer NumLookupsIsDupl;

	StatsPtr = (MR_TableStats *) mercury__table_statistics__StatsPtr_1 ;
		{

    NumLookups = StatsPtr->MR_ts_num_lookups;
    NumLookupsIsDupl = StatsPtr->MR_ts_num_lookups_is_dupl;


		;}
#undef MR_PROC_LABEL
	 *mercury__table_statistics__NumLookups_2  = NumLookups;
	 *mercury__table_statistics__NumLookupsIsDupl_3  = NumLookupsIsDupl;
}
  }
}

static void MR_CALL 
mercury__table_statistics__get_proc_info_direct_fields_12_p_0(
  MR_Box mercury__table_statistics__Info_1,
  MR_Integer * mercury__table_statistics__HasAnswerTable_2,
  MR_Integer * mercury__table_statistics__NumInputs_3,
  MR_Integer * mercury__table_statistics__NumOutputs_4,
  MR_Box * mercury__table_statistics__InputStepDescsPtr_5,
  MR_Box * mercury__table_statistics__OutputStepDescsPtr_6,
  MR_Box * mercury__table_statistics__CurCallStatsPtr_7,
  MR_Box * mercury__table_statistics__PrevCallStatsPtr_8,
  MR_Box * mercury__table_statistics__CurAnswerStatsPtr_9,
  MR_Box * mercury__table_statistics__PrevAnswerStatsPtr_10)
{
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

	Info = (MR_ProcTableInfoPtr) mercury__table_statistics__Info_1 ;
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
	 *mercury__table_statistics__HasAnswerTable_2  = HasAnswerTable;
	 *mercury__table_statistics__NumInputs_3  = NumInputs;
	 *mercury__table_statistics__NumOutputs_4  = NumOutputs;
	 *mercury__table_statistics__InputStepDescsPtr_5  = (MR_Box) InputStepDescsPtr;
	 *mercury__table_statistics__OutputStepDescsPtr_6  = (MR_Box) OutputStepDescsPtr;
	 *mercury__table_statistics__CurCallStatsPtr_7  = (MR_Box) CurCallStatsPtr;
	 *mercury__table_statistics__PrevCallStatsPtr_8  = (MR_Box) PrevCallStatsPtr;
	 *mercury__table_statistics__CurAnswerStatsPtr_9  = (MR_Box) CurAnswerStatsPtr;
	 *mercury__table_statistics__PrevAnswerStatsPtr_10  = (MR_Box) PrevAnswerStatsPtr;
}
  }
}

static void MR_CALL 
mercury__table_statistics__get_tabling_stats_4_p_0(
  MR_Box mercury__table_statistics__Info_5,
  MR_Word * mercury__table_statistics__Statistics_6)
{
  {
    MR_bool mercury__table_statistics__succeeded;
    MR_Integer mercury__table_statistics__HasAnswerTable_8;
    MR_Integer mercury__table_statistics__NumInputs_9;
    MR_Integer mercury__table_statistics__NumOutputs_10;
    MR_Box mercury__table_statistics__InputStepDescsPtr_11;
    MR_Box mercury__table_statistics__OutputStepDescsPtr_12;
    MR_Box mercury__table_statistics__CurCallStatsPtr_13;
    MR_Box mercury__table_statistics__PrevCallStatsPtr_14;
    MR_Box mercury__table_statistics__CurAnswerStatsPtr_15;
    MR_Box mercury__table_statistics__PrevAnswerStatsPtr_16;
    MR_Word mercury__table_statistics__CurCallStats_17;
    MR_Word mercury__table_statistics__PrevCallStats_18;
    MR_Word mercury__table_statistics__CallStats_19;
    MR_Word mercury__table_statistics__MaybeAnswerStats_23;
    MR_Integer mercury__table_statistics__NumLookups_41;
    MR_Integer mercury__table_statistics__NumLookupsIsDupl_42;
    MR_Word mercury__table_statistics__StepStats_43;
    MR_Word mercury__table_statistics__Var_46;
    MR_Integer mercury__table_statistics__NumLookups_55;
    MR_Integer mercury__table_statistics__NumLookupsIsDupl_56;
    MR_Word mercury__table_statistics__StepStats_57;
    MR_Word mercury__table_statistics__Var_60;

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

	Info = (MR_ProcTableInfoPtr) mercury__table_statistics__Info_5 ;
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
	 mercury__table_statistics__HasAnswerTable_8  = HasAnswerTable;
	 mercury__table_statistics__NumInputs_9  = NumInputs;
	 mercury__table_statistics__NumOutputs_10  = NumOutputs;
	 mercury__table_statistics__InputStepDescsPtr_11  = (MR_Box) InputStepDescsPtr;
	 mercury__table_statistics__OutputStepDescsPtr_12  = (MR_Box) OutputStepDescsPtr;
	 mercury__table_statistics__CurCallStatsPtr_13  = (MR_Box) CurCallStatsPtr;
	 mercury__table_statistics__PrevCallStatsPtr_14  = (MR_Box) PrevCallStatsPtr;
	 mercury__table_statistics__CurAnswerStatsPtr_15  = (MR_Box) CurAnswerStatsPtr;
	 mercury__table_statistics__PrevAnswerStatsPtr_16  = (MR_Box) PrevAnswerStatsPtr;
}
{
#define MR_PROC_LABEL mercury__table_statistics__get_tabling_stats_4_p_0

	MR_TableStats * StatsPtr;
	MR_Integer NumLookups;
	MR_Integer NumLookupsIsDupl;

	StatsPtr = (MR_TableStats *) mercury__table_statistics__CurCallStatsPtr_13 ;
		{

    NumLookups = StatsPtr->MR_ts_num_lookups;
    NumLookupsIsDupl = StatsPtr->MR_ts_num_lookups_is_dupl;


		;}
#undef MR_PROC_LABEL
	 mercury__table_statistics__NumLookups_41  = NumLookups;
	 mercury__table_statistics__NumLookupsIsDupl_42  = NumLookupsIsDupl;
}
    mercury__table_statistics__Var_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__table_statistics__get_one_table_stats_step_loop_8_p_0(mercury__table_statistics__InputStepDescsPtr_11, mercury__table_statistics__CurCallStatsPtr_13, (MR_Integer) 0, mercury__table_statistics__NumInputs_9, mercury__table_statistics__Var_46, &mercury__table_statistics__StepStats_43);
    }
    {
      mercury__table_statistics__CurCallStats_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__table_statistics__CurCallStats_17, 0) = ((MR_Box) (mercury__table_statistics__NumLookups_41));
      MR_hl_field(MR_mktag(0), mercury__table_statistics__CurCallStats_17, 1) = ((MR_Box) (mercury__table_statistics__NumLookupsIsDupl_42));
      MR_hl_field(MR_mktag(0), mercury__table_statistics__CurCallStats_17, 2) = ((MR_Box) (mercury__table_statistics__StepStats_43));
    }
{
#define MR_PROC_LABEL mercury__table_statistics__get_tabling_stats_4_p_0

	MR_TableStats * StatsPtr;
	MR_Integer NumLookups;
	MR_Integer NumLookupsIsDupl;

	StatsPtr = (MR_TableStats *) mercury__table_statistics__PrevCallStatsPtr_14 ;
		{

    NumLookups = StatsPtr->MR_ts_num_lookups;
    NumLookupsIsDupl = StatsPtr->MR_ts_num_lookups_is_dupl;


		;}
#undef MR_PROC_LABEL
	 mercury__table_statistics__NumLookups_55  = NumLookups;
	 mercury__table_statistics__NumLookupsIsDupl_56  = NumLookupsIsDupl;
}
    mercury__table_statistics__Var_60 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__table_statistics__get_one_table_stats_step_loop_8_p_0(mercury__table_statistics__InputStepDescsPtr_11, mercury__table_statistics__PrevCallStatsPtr_14, (MR_Integer) 0, mercury__table_statistics__NumInputs_9, mercury__table_statistics__Var_60, &mercury__table_statistics__StepStats_57);
    }
    {
      mercury__table_statistics__PrevCallStats_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__table_statistics__PrevCallStats_18, 0) = ((MR_Box) (mercury__table_statistics__NumLookups_55));
      MR_hl_field(MR_mktag(0), mercury__table_statistics__PrevCallStats_18, 1) = ((MR_Box) (mercury__table_statistics__NumLookupsIsDupl_56));
      MR_hl_field(MR_mktag(0), mercury__table_statistics__PrevCallStats_18, 2) = ((MR_Box) (mercury__table_statistics__StepStats_57));
    }
    {
      mercury__table_statistics__CallStats_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__table_statistics__CallStats_19, 0) = ((MR_Box) (mercury__table_statistics__CurCallStats_17));
      MR_hl_field(MR_mktag(0), mercury__table_statistics__CallStats_19, 1) = ((MR_Box) (mercury__table_statistics__PrevCallStats_18));
    }
{
#define MR_PROC_LABEL mercury__table_statistics__get_tabling_stats_4_p_0

	MR_TableStats * CurPtr;
	MR_TableStats * PrevPtr;
	MR_Integer NumSteps;

	CurPtr = (MR_TableStats *) mercury__table_statistics__CurCallStatsPtr_13 ;
	PrevPtr = (MR_TableStats *) mercury__table_statistics__PrevCallStatsPtr_14 ;
	NumSteps =  mercury__table_statistics__NumInputs_9 ;
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
    mercury__table_statistics__succeeded = (mercury__table_statistics__HasAnswerTable_8 > (MR_Integer) 0);
    if (mercury__table_statistics__succeeded)
    {
      MR_Word mercury__table_statistics__CurAnswerStats_20;
      MR_Word mercury__table_statistics__PrevAnswerStats_21;
      MR_Word mercury__table_statistics__AnswerStats_22;
      MR_Integer mercury__table_statistics__NumLookups_69;
      MR_Integer mercury__table_statistics__NumLookupsIsDupl_70;
      MR_Word mercury__table_statistics__StepStats_71;
      MR_Word mercury__table_statistics__Var_74;
      MR_Integer mercury__table_statistics__NumLookups_83;
      MR_Integer mercury__table_statistics__NumLookupsIsDupl_84;
      MR_Word mercury__table_statistics__StepStats_85;
      MR_Word mercury__table_statistics__Var_88;

{
#define MR_PROC_LABEL mercury__table_statistics__get_tabling_stats_4_p_0

	MR_TableStats * StatsPtr;
	MR_Integer NumLookups;
	MR_Integer NumLookupsIsDupl;

	StatsPtr = (MR_TableStats *) mercury__table_statistics__CurAnswerStatsPtr_15 ;
		{

    NumLookups = StatsPtr->MR_ts_num_lookups;
    NumLookupsIsDupl = StatsPtr->MR_ts_num_lookups_is_dupl;


		;}
#undef MR_PROC_LABEL
	 mercury__table_statistics__NumLookups_69  = NumLookups;
	 mercury__table_statistics__NumLookupsIsDupl_70  = NumLookupsIsDupl;
}
      mercury__table_statistics__Var_74 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      {
        mercury__table_statistics__get_one_table_stats_step_loop_8_p_0(mercury__table_statistics__OutputStepDescsPtr_12, mercury__table_statistics__CurAnswerStatsPtr_15, (MR_Integer) 0, mercury__table_statistics__NumOutputs_10, mercury__table_statistics__Var_74, &mercury__table_statistics__StepStats_71);
      }
      {
        mercury__table_statistics__CurAnswerStats_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), mercury__table_statistics__CurAnswerStats_20, 0) = ((MR_Box) (mercury__table_statistics__NumLookups_69));
        MR_hl_field(MR_mktag(0), mercury__table_statistics__CurAnswerStats_20, 1) = ((MR_Box) (mercury__table_statistics__NumLookupsIsDupl_70));
        MR_hl_field(MR_mktag(0), mercury__table_statistics__CurAnswerStats_20, 2) = ((MR_Box) (mercury__table_statistics__StepStats_71));
      }
{
#define MR_PROC_LABEL mercury__table_statistics__get_tabling_stats_4_p_0

	MR_TableStats * StatsPtr;
	MR_Integer NumLookups;
	MR_Integer NumLookupsIsDupl;

	StatsPtr = (MR_TableStats *) mercury__table_statistics__PrevAnswerStatsPtr_16 ;
		{

    NumLookups = StatsPtr->MR_ts_num_lookups;
    NumLookupsIsDupl = StatsPtr->MR_ts_num_lookups_is_dupl;


		;}
#undef MR_PROC_LABEL
	 mercury__table_statistics__NumLookups_83  = NumLookups;
	 mercury__table_statistics__NumLookupsIsDupl_84  = NumLookupsIsDupl;
}
      mercury__table_statistics__Var_88 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      {
        mercury__table_statistics__get_one_table_stats_step_loop_8_p_0(mercury__table_statistics__OutputStepDescsPtr_12, mercury__table_statistics__PrevAnswerStatsPtr_16, (MR_Integer) 0, mercury__table_statistics__NumOutputs_10, mercury__table_statistics__Var_88, &mercury__table_statistics__StepStats_85);
      }
      {
        mercury__table_statistics__PrevAnswerStats_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), mercury__table_statistics__PrevAnswerStats_21, 0) = ((MR_Box) (mercury__table_statistics__NumLookups_83));
        MR_hl_field(MR_mktag(0), mercury__table_statistics__PrevAnswerStats_21, 1) = ((MR_Box) (mercury__table_statistics__NumLookupsIsDupl_84));
        MR_hl_field(MR_mktag(0), mercury__table_statistics__PrevAnswerStats_21, 2) = ((MR_Box) (mercury__table_statistics__StepStats_85));
      }
      {
        mercury__table_statistics__AnswerStats_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), mercury__table_statistics__AnswerStats_22, 0) = ((MR_Box) (mercury__table_statistics__CurAnswerStats_20));
        MR_hl_field(MR_mktag(0), mercury__table_statistics__AnswerStats_22, 1) = ((MR_Box) (mercury__table_statistics__PrevAnswerStats_21));
      }
{
#define MR_PROC_LABEL mercury__table_statistics__get_tabling_stats_4_p_0

	MR_TableStats * CurPtr;
	MR_TableStats * PrevPtr;
	MR_Integer NumSteps;

	CurPtr = (MR_TableStats *) mercury__table_statistics__CurAnswerStatsPtr_15 ;
	PrevPtr = (MR_TableStats *) mercury__table_statistics__PrevAnswerStatsPtr_16 ;
	NumSteps =  mercury__table_statistics__NumOutputs_10 ;
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
        mercury__table_statistics__MaybeAnswerStats_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), mercury__table_statistics__MaybeAnswerStats_23, 0) = ((MR_Box) (mercury__table_statistics__AnswerStats_22));
      }
    }
    else
      mercury__table_statistics__MaybeAnswerStats_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *mercury__table_statistics__Statistics_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__table_statistics__CallStats_19));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__table_statistics__MaybeAnswerStats_23));
    }
  }
}

static void MR_CALL 
mercury__table_statistics__get_one_table_stats_step_loop_8_p_0(
  MR_Box mercury__table_statistics__StepDescsPtr_9,
  MR_Box mercury__table_statistics__StatsPtr_10,
  MR_Integer mercury__table_statistics__CurStep_11,
  MR_Integer mercury__table_statistics__NumSteps_12,
  MR_Word mercury__table_statistics__STATE_VARIABLE_StepStats_0_15,
  MR_Word * mercury__table_statistics__STATE_VARIABLE_StepStats_16)
{
  {
    MR_bool mercury__table_statistics__succeeded = (mercury__table_statistics__CurStep_11 >= mercury__table_statistics__NumSteps_12);

    if (mercury__table_statistics__succeeded)
      *mercury__table_statistics__STATE_VARIABLE_StepStats_16 = mercury__table_statistics__STATE_VARIABLE_StepStats_0_15;
    else
    {
      MR_Word mercury__table_statistics__StepStats_13;
      MR_Integer mercury__table_statistics__Var_19 = (mercury__table_statistics__CurStep_11 + (MR_Integer) 1);
      MR_Word mercury__table_statistics__STATE_VARIABLE_StepStats_20_20;
      MR_String mercury__table_statistics__VarName_32;
      MR_Integer mercury__table_statistics__NumLookups_33;
      MR_Integer mercury__table_statistics__NumLookupsIsDupl_34;
      MR_Integer mercury__table_statistics__KindInt_35;
      MR_Integer mercury__table_statistics__HashTableAllocs_36;
      MR_Integer mercury__table_statistics__HashTableBytes_37;
      MR_Integer mercury__table_statistics__HashLinkChunkAllocs_38;
      MR_Integer mercury__table_statistics__HashLinkChunkBytes_39;
      MR_Integer mercury__table_statistics__HashKeyComparesNotDupl_40;
      MR_Integer mercury__table_statistics__HashKeyComparesIsDupl_41;
      MR_Integer mercury__table_statistics__HashResizes_42;
      MR_Integer mercury__table_statistics__HashResizeOldEntries_43;
      MR_Integer mercury__table_statistics__HashResizeNewEntries_44;
      MR_Integer mercury__table_statistics__EnumNodeAllocs_45;
      MR_Integer mercury__table_statistics__EnumNodeBytes_46;
      MR_Integer mercury__table_statistics__DuNodeAllocs_47;
      MR_Integer mercury__table_statistics__DuNodeBytes_48;
      MR_Integer mercury__table_statistics__DuArgLookups_49;
      MR_Integer mercury__table_statistics__DuExistLookups_50;
      MR_Integer mercury__table_statistics__StartAllocs_51;
      MR_Integer mercury__table_statistics__StartBytes_52;
      MR_Word mercury__table_statistics__Details_53;

      {
        mercury__table_statistics__get_one_table_stats_step_loop_8_p_0(mercury__table_statistics__StepDescsPtr_9, mercury__table_statistics__StatsPtr_10, mercury__table_statistics__Var_19, mercury__table_statistics__NumSteps_12, mercury__table_statistics__STATE_VARIABLE_StepStats_0_15, &mercury__table_statistics__STATE_VARIABLE_StepStats_20_20);
      }
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

	StepDescsPtr = (const MR_TableStepDesc *) mercury__table_statistics__StepDescsPtr_9 ;
	StatsStructPtr = (MR_TableStats *) mercury__table_statistics__StatsPtr_10 ;
	StepNum =  mercury__table_statistics__CurStep_11 ;
		{

    const MR_TableStepStats *ptr;

    ptr = &(StatsStructPtr->MR_ts_steps[StepNum]);

    /* The casts are to discard const. */
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
	 mercury__table_statistics__VarName_32  = VarName;
	 mercury__table_statistics__NumLookups_33  = NumLookups;
	 mercury__table_statistics__NumLookupsIsDupl_34  = NumLookupsIsDupl;
	 mercury__table_statistics__KindInt_35  = KindInt;
	 mercury__table_statistics__HashTableAllocs_36  = HashTableAllocs;
	 mercury__table_statistics__HashTableBytes_37  = HashTableBytes;
	 mercury__table_statistics__HashLinkChunkAllocs_38  = HashLinkChunkAllocs;
	 mercury__table_statistics__HashLinkChunkBytes_39  = HashLinkChunkBytes;
	 mercury__table_statistics__HashKeyComparesNotDupl_40  = HashKeyComparesNotDupl;
	 mercury__table_statistics__HashKeyComparesIsDupl_41  = HashKeyComparesIsDupl;
	 mercury__table_statistics__HashResizes_42  = HashResizes;
	 mercury__table_statistics__HashResizeOldEntries_43  = HashResizeOldEntries;
	 mercury__table_statistics__HashResizeNewEntries_44  = HashResizeNewEntries;
	 mercury__table_statistics__EnumNodeAllocs_45  = EnumNodeAllocs;
	 mercury__table_statistics__EnumNodeBytes_46  = EnumNodeBytes;
	 mercury__table_statistics__DuNodeAllocs_47  = DuNodeAllocs;
	 mercury__table_statistics__DuNodeBytes_48  = DuNodeBytes;
	 mercury__table_statistics__DuArgLookups_49  = DuArgLookups;
	 mercury__table_statistics__DuExistLookups_50  = DuExistLookups;
	 mercury__table_statistics__StartAllocs_51  = StartAllocs;
	 mercury__table_statistics__StartBytes_52  = StartBytes;
}
      mercury__table_statistics__succeeded = (mercury__table_statistics__KindInt_35 == (MR_Integer) 0);
      if (mercury__table_statistics__succeeded)
      {
        mercury__table_statistics__succeeded = (mercury__table_statistics__EnumNodeAllocs_45 == (MR_Integer) 0);
        if (mercury__table_statistics__succeeded)
        {
          mercury__table_statistics__succeeded = (mercury__table_statistics__EnumNodeBytes_46 == (MR_Integer) 0);
          if (mercury__table_statistics__succeeded)
          {
            mercury__table_statistics__succeeded = (mercury__table_statistics__DuNodeAllocs_47 == (MR_Integer) 0);
            if (mercury__table_statistics__succeeded)
            {
              mercury__table_statistics__succeeded = (mercury__table_statistics__DuNodeBytes_48 == (MR_Integer) 0);
              if (mercury__table_statistics__succeeded)
              {
                mercury__table_statistics__succeeded = (mercury__table_statistics__DuArgLookups_49 == (MR_Integer) 0);
                if (mercury__table_statistics__succeeded)
                {
                  mercury__table_statistics__succeeded = (mercury__table_statistics__DuExistLookups_50 == (MR_Integer) 0);
                  if (mercury__table_statistics__succeeded)
                  {
                    mercury__table_statistics__succeeded = (mercury__table_statistics__StartAllocs_51 == (MR_Integer) 0);
                    if (mercury__table_statistics__succeeded)
                      mercury__table_statistics__succeeded = (mercury__table_statistics__StartBytes_52 == (MR_Integer) 0);
                  }
                }
              }
            }
          }
        }
        if (mercury__table_statistics__succeeded)
          {
            mercury__table_statistics__Details_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_53, 1) = ((MR_Box) (mercury__table_statistics__HashTableAllocs_36));
            MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_53, 2) = ((MR_Box) (mercury__table_statistics__HashTableBytes_37));
            MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_53, 3) = ((MR_Box) (mercury__table_statistics__HashLinkChunkAllocs_38));
            MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_53, 4) = ((MR_Box) (mercury__table_statistics__HashLinkChunkBytes_39));
            MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_53, 5) = ((MR_Box) (mercury__table_statistics__HashKeyComparesNotDupl_40));
            MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_53, 6) = ((MR_Box) (mercury__table_statistics__HashKeyComparesIsDupl_41));
            MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_53, 7) = ((MR_Box) (mercury__table_statistics__HashResizes_42));
            MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_53, 8) = ((MR_Box) (mercury__table_statistics__HashResizeOldEntries_43));
            MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_53, 9) = ((MR_Box) (mercury__table_statistics__HashResizeNewEntries_44));
          }
        else
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "table_statistics", (MR_String) "predicate \140table_statistics.get_one_table_step_stats\'/6", (MR_String) "extra counts for hash");
            return;
          }
        }
      }
      else
      {
        mercury__table_statistics__succeeded = (mercury__table_statistics__KindInt_35 == (MR_Integer) 1);
        if (mercury__table_statistics__succeeded)
        {
          mercury__table_statistics__succeeded = (mercury__table_statistics__HashTableAllocs_36 == (MR_Integer) 0);
          if (mercury__table_statistics__succeeded)
          {
            mercury__table_statistics__succeeded = (mercury__table_statistics__HashTableBytes_37 == (MR_Integer) 0);
            if (mercury__table_statistics__succeeded)
            {
              mercury__table_statistics__succeeded = (mercury__table_statistics__HashLinkChunkAllocs_38 == (MR_Integer) 0);
              if (mercury__table_statistics__succeeded)
              {
                mercury__table_statistics__succeeded = (mercury__table_statistics__HashLinkChunkBytes_39 == (MR_Integer) 0);
                if (mercury__table_statistics__succeeded)
                {
                  mercury__table_statistics__succeeded = (mercury__table_statistics__HashKeyComparesNotDupl_40 == (MR_Integer) 0);
                  if (mercury__table_statistics__succeeded)
                  {
                    mercury__table_statistics__succeeded = (mercury__table_statistics__HashKeyComparesIsDupl_41 == (MR_Integer) 0);
                    if (mercury__table_statistics__succeeded)
                    {
                      mercury__table_statistics__succeeded = (mercury__table_statistics__HashResizes_42 == (MR_Integer) 0);
                      if (mercury__table_statistics__succeeded)
                      {
                        mercury__table_statistics__succeeded = (mercury__table_statistics__HashResizeOldEntries_43 == (MR_Integer) 0);
                        if (mercury__table_statistics__succeeded)
                        {
                          mercury__table_statistics__succeeded = (mercury__table_statistics__HashResizeNewEntries_44 == (MR_Integer) 0);
                          if (mercury__table_statistics__succeeded)
                          {
                            mercury__table_statistics__succeeded = (mercury__table_statistics__DuNodeAllocs_47 == (MR_Integer) 0);
                            if (mercury__table_statistics__succeeded)
                            {
                              mercury__table_statistics__succeeded = (mercury__table_statistics__DuNodeBytes_48 == (MR_Integer) 0);
                              if (mercury__table_statistics__succeeded)
                              {
                                mercury__table_statistics__succeeded = (mercury__table_statistics__DuArgLookups_49 == (MR_Integer) 0);
                                if (mercury__table_statistics__succeeded)
                                {
                                  mercury__table_statistics__succeeded = (mercury__table_statistics__DuExistLookups_50 == (MR_Integer) 0);
                                  if (mercury__table_statistics__succeeded)
                                  {
                                    mercury__table_statistics__succeeded = (mercury__table_statistics__StartAllocs_51 == (MR_Integer) 0);
                                    if (mercury__table_statistics__succeeded)
                                      mercury__table_statistics__succeeded = (mercury__table_statistics__StartBytes_52 == (MR_Integer) 0);
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
          if (mercury__table_statistics__succeeded)
            {
              mercury__table_statistics__Details_53 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), mercury__table_statistics__Details_53, 0) = ((MR_Box) (mercury__table_statistics__EnumNodeAllocs_45));
              MR_hl_field(MR_mktag(2), mercury__table_statistics__Details_53, 1) = ((MR_Box) (mercury__table_statistics__EnumNodeBytes_46));
            }
          else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "table_statistics", (MR_String) "predicate \140table_statistics.get_one_table_step_stats\'/6", (MR_String) "extra counts for enum");
              return;
            }
          }
        }
        else
        {
          mercury__table_statistics__succeeded = (mercury__table_statistics__KindInt_35 == (MR_Integer) 2);
          if (mercury__table_statistics__succeeded)
          {
            mercury__table_statistics__succeeded = (mercury__table_statistics__HashTableAllocs_36 == (MR_Integer) 0);
            if (mercury__table_statistics__succeeded)
            {
              mercury__table_statistics__succeeded = (mercury__table_statistics__HashTableBytes_37 == (MR_Integer) 0);
              if (mercury__table_statistics__succeeded)
              {
                mercury__table_statistics__succeeded = (mercury__table_statistics__HashLinkChunkAllocs_38 == (MR_Integer) 0);
                if (mercury__table_statistics__succeeded)
                {
                  mercury__table_statistics__succeeded = (mercury__table_statistics__HashLinkChunkBytes_39 == (MR_Integer) 0);
                  if (mercury__table_statistics__succeeded)
                  {
                    mercury__table_statistics__succeeded = (mercury__table_statistics__HashKeyComparesNotDupl_40 == (MR_Integer) 0);
                    if (mercury__table_statistics__succeeded)
                    {
                      mercury__table_statistics__succeeded = (mercury__table_statistics__HashKeyComparesIsDupl_41 == (MR_Integer) 0);
                      if (mercury__table_statistics__succeeded)
                      {
                        mercury__table_statistics__succeeded = (mercury__table_statistics__HashResizes_42 == (MR_Integer) 0);
                        if (mercury__table_statistics__succeeded)
                        {
                          mercury__table_statistics__succeeded = (mercury__table_statistics__HashResizeOldEntries_43 == (MR_Integer) 0);
                          if (mercury__table_statistics__succeeded)
                          {
                            mercury__table_statistics__succeeded = (mercury__table_statistics__HashResizeNewEntries_44 == (MR_Integer) 0);
                            if (mercury__table_statistics__succeeded)
                            {
                              mercury__table_statistics__succeeded = (mercury__table_statistics__EnumNodeAllocs_45 == (MR_Integer) 0);
                              if (mercury__table_statistics__succeeded)
                              {
                                mercury__table_statistics__succeeded = (mercury__table_statistics__EnumNodeBytes_46 == (MR_Integer) 0);
                                if (mercury__table_statistics__succeeded)
                                {
                                  mercury__table_statistics__succeeded = (mercury__table_statistics__DuNodeAllocs_47 == (MR_Integer) 0);
                                  if (mercury__table_statistics__succeeded)
                                  {
                                    mercury__table_statistics__succeeded = (mercury__table_statistics__DuNodeBytes_48 == (MR_Integer) 0);
                                    if (mercury__table_statistics__succeeded)
                                    {
                                      mercury__table_statistics__succeeded = (mercury__table_statistics__DuArgLookups_49 == (MR_Integer) 0);
                                      if (mercury__table_statistics__succeeded)
                                        mercury__table_statistics__succeeded = (mercury__table_statistics__DuExistLookups_50 == (MR_Integer) 0);
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
            if (mercury__table_statistics__succeeded)
              {
                mercury__table_statistics__Details_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__table_statistics__Details_53, 0) = ((MR_Box) (mercury__table_statistics__StartAllocs_51));
                MR_hl_field(MR_mktag(1), mercury__table_statistics__Details_53, 1) = ((MR_Box) (mercury__table_statistics__StartBytes_52));
              }
            else
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "table_statistics", (MR_String) "predicate \140table_statistics.get_one_table_step_stats\'/6", (MR_String) "extra counts for start");
                return;
              }
            }
          }
          else
          {
            mercury__table_statistics__succeeded = (mercury__table_statistics__KindInt_35 == (MR_Integer) 3);
            if (mercury__table_statistics__succeeded)
            {
              mercury__table_statistics__succeeded = (mercury__table_statistics__StartAllocs_51 == (MR_Integer) 0);
              if (mercury__table_statistics__succeeded)
                mercury__table_statistics__succeeded = (mercury__table_statistics__StartBytes_52 == (MR_Integer) 0);
              if (mercury__table_statistics__succeeded)
                {
                  mercury__table_statistics__Details_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_53, 1) = ((MR_Box) (mercury__table_statistics__DuNodeAllocs_47));
                  MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_53, 2) = ((MR_Box) (mercury__table_statistics__DuNodeBytes_48));
                  MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_53, 3) = ((MR_Box) (mercury__table_statistics__DuArgLookups_49));
                  MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_53, 4) = ((MR_Box) (mercury__table_statistics__DuExistLookups_50));
                  MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_53, 5) = ((MR_Box) (mercury__table_statistics__EnumNodeAllocs_45));
                  MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_53, 6) = ((MR_Box) (mercury__table_statistics__EnumNodeBytes_46));
                  MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_53, 7) = ((MR_Box) (mercury__table_statistics__HashTableAllocs_36));
                  MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_53, 8) = ((MR_Box) (mercury__table_statistics__HashTableBytes_37));
                  MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_53, 9) = ((MR_Box) (mercury__table_statistics__HashLinkChunkAllocs_38));
                  MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_53, 10) = ((MR_Box) (mercury__table_statistics__HashLinkChunkBytes_39));
                  MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_53, 11) = ((MR_Box) (mercury__table_statistics__HashKeyComparesNotDupl_40));
                  MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_53, 12) = ((MR_Box) (mercury__table_statistics__HashKeyComparesIsDupl_41));
                  MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_53, 13) = ((MR_Box) (mercury__table_statistics__HashResizes_42));
                  MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_53, 14) = ((MR_Box) (mercury__table_statistics__HashResizeOldEntries_43));
                  MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_53, 15) = ((MR_Box) (mercury__table_statistics__HashResizeNewEntries_44));
                }
              else
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "table_statistics", (MR_String) "predicate \140table_statistics.get_one_table_step_stats\'/6", (MR_String) "extra counts for du");
                  return;
                }
              }
            }
            else
            {
              mercury__table_statistics__succeeded = (mercury__table_statistics__KindInt_35 == (MR_Integer) 4);
              if (mercury__table_statistics__succeeded)
              {
                mercury__table_statistics__succeeded = (mercury__table_statistics__StartAllocs_51 == (MR_Integer) 0);
                if (mercury__table_statistics__succeeded)
                  mercury__table_statistics__succeeded = (mercury__table_statistics__StartBytes_52 == (MR_Integer) 0);
                if (mercury__table_statistics__succeeded)
                  {
                    mercury__table_statistics__Details_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_53, 1) = ((MR_Box) (mercury__table_statistics__DuNodeAllocs_47));
                    MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_53, 2) = ((MR_Box) (mercury__table_statistics__DuNodeBytes_48));
                    MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_53, 3) = ((MR_Box) (mercury__table_statistics__DuArgLookups_49));
                    MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_53, 4) = ((MR_Box) (mercury__table_statistics__DuExistLookups_50));
                    MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_53, 5) = ((MR_Box) (mercury__table_statistics__EnumNodeAllocs_45));
                    MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_53, 6) = ((MR_Box) (mercury__table_statistics__EnumNodeBytes_46));
                    MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_53, 7) = ((MR_Box) (mercury__table_statistics__HashTableAllocs_36));
                    MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_53, 8) = ((MR_Box) (mercury__table_statistics__HashTableBytes_37));
                    MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_53, 9) = ((MR_Box) (mercury__table_statistics__HashLinkChunkAllocs_38));
                    MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_53, 10) = ((MR_Box) (mercury__table_statistics__HashLinkChunkBytes_39));
                    MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_53, 11) = ((MR_Box) (mercury__table_statistics__HashKeyComparesNotDupl_40));
                    MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_53, 12) = ((MR_Box) (mercury__table_statistics__HashKeyComparesIsDupl_41));
                    MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_53, 13) = ((MR_Box) (mercury__table_statistics__HashResizes_42));
                    MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_53, 14) = ((MR_Box) (mercury__table_statistics__HashResizeOldEntries_43));
                    MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_53, 15) = ((MR_Box) (mercury__table_statistics__HashResizeNewEntries_44));
                  }
                else
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "table_statistics", (MR_String) "predicate \140table_statistics.get_one_table_step_stats\'/6", (MR_String) "extra counts for poly");
                    return;
                  }
                }
              }
              else
              {
                mercury__table_statistics__succeeded = (mercury__table_statistics__KindInt_35 == (MR_Integer) 5);
                if (mercury__table_statistics__succeeded)
                {
                  mercury__table_statistics__succeeded = (mercury__table_statistics__HashTableAllocs_36 == (MR_Integer) 0);
                  if (mercury__table_statistics__succeeded)
                  {
                    mercury__table_statistics__succeeded = (mercury__table_statistics__HashTableBytes_37 == (MR_Integer) 0);
                    if (mercury__table_statistics__succeeded)
                    {
                      mercury__table_statistics__succeeded = (mercury__table_statistics__HashLinkChunkAllocs_38 == (MR_Integer) 0);
                      if (mercury__table_statistics__succeeded)
                      {
                        mercury__table_statistics__succeeded = (mercury__table_statistics__HashKeyComparesNotDupl_40 == (MR_Integer) 0);
                        if (mercury__table_statistics__succeeded)
                        {
                          mercury__table_statistics__succeeded = (mercury__table_statistics__HashKeyComparesIsDupl_41 == (MR_Integer) 0);
                          if (mercury__table_statistics__succeeded)
                          {
                            mercury__table_statistics__succeeded = (mercury__table_statistics__HashResizes_42 == (MR_Integer) 0);
                            if (mercury__table_statistics__succeeded)
                            {
                              mercury__table_statistics__succeeded = (mercury__table_statistics__HashResizeOldEntries_43 == (MR_Integer) 0);
                              if (mercury__table_statistics__succeeded)
                              {
                                mercury__table_statistics__succeeded = (mercury__table_statistics__HashResizeNewEntries_44 == (MR_Integer) 0);
                                if (mercury__table_statistics__succeeded)
                                {
                                  mercury__table_statistics__succeeded = (mercury__table_statistics__EnumNodeAllocs_45 == (MR_Integer) 0);
                                  if (mercury__table_statistics__succeeded)
                                  {
                                    mercury__table_statistics__succeeded = (mercury__table_statistics__EnumNodeBytes_46 == (MR_Integer) 0);
                                    if (mercury__table_statistics__succeeded)
                                    {
                                      mercury__table_statistics__succeeded = (mercury__table_statistics__DuNodeAllocs_47 == (MR_Integer) 0);
                                      if (mercury__table_statistics__succeeded)
                                      {
                                        mercury__table_statistics__succeeded = (mercury__table_statistics__DuNodeBytes_48 == (MR_Integer) 0);
                                        if (mercury__table_statistics__succeeded)
                                        {
                                          mercury__table_statistics__succeeded = (mercury__table_statistics__DuArgLookups_49 == (MR_Integer) 0);
                                          if (mercury__table_statistics__succeeded)
                                          {
                                            mercury__table_statistics__succeeded = (mercury__table_statistics__DuExistLookups_50 == (MR_Integer) 0);
                                            if (mercury__table_statistics__succeeded)
                                            {
                                              mercury__table_statistics__succeeded = (mercury__table_statistics__StartAllocs_51 == (MR_Integer) 0);
                                              if (mercury__table_statistics__succeeded)
                                                mercury__table_statistics__succeeded = (mercury__table_statistics__StartBytes_52 == (MR_Integer) 0);
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
                  if (mercury__table_statistics__succeeded)
                    mercury__table_statistics__Details_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  else
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "table_statistics", (MR_String) "predicate \140table_statistics.get_one_table_step_stats\'/6", (MR_String) "extra counts for none");
                      return;
                    }
                  }
                }
                else
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "table_statistics", (MR_String) "predicate \140table_statistics.get_one_table_step_stats\'/6", (MR_String) "unexpected detail kind");
                    return;
                  }
                }
              }
            }
          }
        }
      }
      {
        mercury__table_statistics__StepStats_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), mercury__table_statistics__StepStats_13, 0) = ((MR_Box) (mercury__table_statistics__VarName_32));
        MR_hl_field(MR_mktag(0), mercury__table_statistics__StepStats_13, 1) = ((MR_Box) (mercury__table_statistics__NumLookups_33));
        MR_hl_field(MR_mktag(0), mercury__table_statistics__StepStats_13, 2) = ((MR_Box) (mercury__table_statistics__NumLookupsIsDupl_34));
        MR_hl_field(MR_mktag(0), mercury__table_statistics__StepStats_13, 3) = ((MR_Box) (mercury__table_statistics__Details_53));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *mercury__table_statistics__STATE_VARIABLE_StepStats_16 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__table_statistics__StepStats_13));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__table_statistics__STATE_VARIABLE_StepStats_20_20));
      }
    }
  }
}

MR_Word MR_CALL 
mercury__table_statistics__dummy_proc_table_statistics_0_f_0(void)
{
  {
    MR_Word mercury__table_statistics__ProcTableStatistics_2 = (MR_Word) &mercury__table_statistics_scalar_common_1[3];
    MR_Word mercury__table_statistics__TableStats_3 = (MR_Word) &mercury__table_statistics_scalar_common_2[1];
    MR_Word mercury__table_statistics__CallTableStats_4 = (MR_Word) &mercury__table_statistics_scalar_common_1[2];
    MR_Word mercury__table_statistics__Var_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__table_statistics__Var_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    return mercury__table_statistics__ProcTableStatistics_2;
  }
}

void MR_CALL 
mercury__table_statistics__write_table_stats_3_p_0(
  MR_Word mercury__table_statistics__Stats_4)
{
  {
    MR_Word mercury__table_statistics__OutStream_6;
    MR_Box mercury__table_statistics__V_4_13;

{
#define MR_PROC_LABEL mercury__table_statistics__write_table_stats_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	 mercury__table_statistics__V_4_13  = (MR_Box) Stream;
}
    mercury__table_statistics__OutStream_6 = (MR_Word) mercury__table_statistics__V_4_13;
    {
      mercury__table_statistics__write_table_stats_4_p_0(mercury__table_statistics__OutStream_6, mercury__table_statistics__Stats_4);
    }
  }
}

void MR_CALL 
mercury__table_statistics__write_table_stats_4_p_0(
  MR_Word mercury__table_statistics__OutStream_5,
  MR_Word mercury__table_statistics__Stats_6)
{
  {
    MR_bool mercury__table_statistics__succeeded;
    MR_Integer mercury__table_statistics__Lookups_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__table_statistics__Stats_6, (MR_Integer) 0)));
    MR_Integer mercury__table_statistics__LookupsIsDupl_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__table_statistics__Stats_6, (MR_Integer) 1)));
    MR_Word mercury__table_statistics__Steps_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__table_statistics__Stats_6, (MR_Integer) 2)));
    MR_Integer mercury__table_statistics__LookupsNotDupl_11 = (mercury__table_statistics__Lookups_8 - mercury__table_statistics__LookupsIsDupl_9);
    MR_String mercury__table_statistics__LookupsStr_12;
    MR_String mercury__table_statistics__LookupsIsDuplStr_13;
    MR_String mercury__table_statistics__LookupsNotDuplStr_14;
    MR_String mercury__table_statistics__Var_56;
    MR_Word mercury__table_statistics__Var_62;

    {
      mercury__table_statistics__LookupsStr_12 = mercury__string__int_to_string_thousands_1_f_0(mercury__table_statistics__Lookups_8);
    }
    {
      mercury__table_statistics__LookupsIsDuplStr_13 = mercury__string__int_to_string_thousands_1_f_0(mercury__table_statistics__LookupsIsDupl_9);
    }
    {
      mercury__table_statistics__LookupsNotDuplStr_14 = mercury__string__int_to_string_thousands_1_f_0(mercury__table_statistics__LookupsNotDupl_11);
    }
    {
      mercury__io__write_string_4_p_0(mercury__table_statistics__OutStream_5, (MR_String) "number of lookups:                            ");
    }
    mercury__table_statistics__Var_62 = (MR_Word) &mercury__table_statistics_scalar_common_5[0];
    {
      mercury__string__format__format_string_component_width_noprec_4_p_0(mercury__table_statistics__Var_62, (MR_Integer) 9, mercury__table_statistics__LookupsStr_12, &mercury__table_statistics__Var_56);
    }
    {
      mercury__io__write_string_4_p_0(mercury__table_statistics__OutStream_5, mercury__table_statistics__Var_56);
    }
    {
      mercury__io__write_string_4_p_0(mercury__table_statistics__OutStream_5, (MR_String) "\n");
    }
    mercury__table_statistics__succeeded = (mercury__table_statistics__Lookups_8 > (MR_Integer) 0);
    if (mercury__table_statistics__succeeded)
    {
      MR_String mercury__table_statistics__FractionIsDuplStr_15;
      MR_String mercury__table_statistics__FractionNotDuplStr_16;
      MR_String mercury__table_statistics__Var_68;
      MR_String mercury__table_statistics__Var_79;
      MR_String mercury__table_statistics__Var_91;
      MR_String mercury__table_statistics__Var_102;
      MR_Integer mercury__table_statistics__Var_17;

      {
        mercury__table_statistics__FractionIsDuplStr_15 = mercury__table_statistics__percentage_str_2_f_0(mercury__table_statistics__LookupsIsDupl_9, mercury__table_statistics__Lookups_8);
      }
      {
        mercury__table_statistics__FractionNotDuplStr_16 = mercury__table_statistics__percentage_str_2_f_0(mercury__table_statistics__LookupsNotDupl_11, mercury__table_statistics__Lookups_8);
      }
      {
        mercury__io__write_string_4_p_0(mercury__table_statistics__OutStream_5, (MR_String) "number of successful lookups (old calls):     ");
      }
      {
        mercury__string__format__format_string_component_width_noprec_4_p_0(mercury__table_statistics__Var_62, (MR_Integer) 9, mercury__table_statistics__LookupsIsDuplStr_13, &mercury__table_statistics__Var_68);
      }
      {
        mercury__io__write_string_4_p_0(mercury__table_statistics__OutStream_5, mercury__table_statistics__Var_68);
      }
      {
        mercury__io__write_string_4_p_0(mercury__table_statistics__OutStream_5, (MR_String) " ");
      }
      {
        mercury__string__format__format_string_component_width_noprec_4_p_0(mercury__table_statistics__Var_62, (MR_Integer) 9, mercury__table_statistics__FractionIsDuplStr_15, &mercury__table_statistics__Var_79);
      }
      {
        mercury__io__write_string_4_p_0(mercury__table_statistics__OutStream_5, mercury__table_statistics__Var_79);
      }
      {
        mercury__io__write_string_4_p_0(mercury__table_statistics__OutStream_5, (MR_String) "\n");
      }
      {
        mercury__io__write_string_4_p_0(mercury__table_statistics__OutStream_5, (MR_String) "number of unsuccessful lookups (new calls):   ");
      }
      {
        mercury__string__format__format_string_component_width_noprec_4_p_0(mercury__table_statistics__Var_62, (MR_Integer) 9, mercury__table_statistics__LookupsNotDuplStr_14, &mercury__table_statistics__Var_91);
      }
      {
        mercury__io__write_string_4_p_0(mercury__table_statistics__OutStream_5, mercury__table_statistics__Var_91);
      }
      {
        mercury__io__write_string_4_p_0(mercury__table_statistics__OutStream_5, (MR_String) " ");
      }
      {
        mercury__string__format__format_string_component_width_noprec_4_p_0(mercury__table_statistics__Var_62, (MR_Integer) 9, mercury__table_statistics__FractionNotDuplStr_16, &mercury__table_statistics__Var_102);
      }
      {
        mercury__io__write_string_4_p_0(mercury__table_statistics__OutStream_5, mercury__table_statistics__Var_102);
      }
      {
        mercury__io__write_string_4_p_0(mercury__table_statistics__OutStream_5, (MR_String) "\n");
      }
      {
        mercury__io__write_string_4_p_0(mercury__table_statistics__OutStream_5, (MR_String) "statistics for the individual steps:\n");
      }
      {
        mercury__table_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_50_95_95_91_50_93_95_48_6_p_in__list_0(mercury__table_statistics__OutStream_5, mercury__table_statistics__Steps_10, (MR_Integer) 1, &mercury__table_statistics__Var_17);
      }
    }
    else
    {
    }
  }
}

static void MR_CALL 
mercury__table_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_50_95_95_91_50_93_95_48_6_p_in__list_0(
  MR_Word mercury__table_statistics__Var_24,
  MR_Word mercury__table_statistics__HeadVar__2_2,
  MR_Integer mercury__table_statistics__HeadVar__3_3,
  MR_Integer * mercury__table_statistics__HeadVar__4_4)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((mercury__table_statistics__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__table_statistics__HeadVar__4_4 = mercury__table_statistics__HeadVar__3_3;
    else
    {
      MR_Word mercury__table_statistics__V_15_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word mercury__table_statistics__V_16_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 1)));
      MR_Integer mercury__table_statistics__V_23_19;

      {
        mercury__table_statistics__write_table_step_stats_5_p_0(mercury__table_statistics__Var_24, mercury__table_statistics__V_15_13, mercury__table_statistics__HeadVar__3_3);
      }
      mercury__table_statistics__V_23_19 = (mercury__table_statistics__HeadVar__3_3 + (MR_Integer) 1);
      /* direct tailcall eliminated */
      {
        MR_Word mercury__table_statistics__next_value_of_HeadVar__2_2 = mercury__table_statistics__V_16_14;
        MR_Integer mercury__table_statistics__next_value_of_HeadVar__3_3 = mercury__table_statistics__V_23_19;

        mercury__table_statistics__HeadVar__3_3 = mercury__table_statistics__next_value_of_HeadVar__3_3;
        mercury__table_statistics__HeadVar__2_2 = mercury__table_statistics__next_value_of_HeadVar__2_2;
      }
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__table_statistics__write_table_step_stats_5_p_0(
  MR_Word mercury__table_statistics__OutStream_6,
  MR_Word mercury__table_statistics__Step_7,
  MR_Integer mercury__table_statistics__StepNum_8)
{
  {
    MR_bool mercury__table_statistics__succeeded;
    MR_String mercury__table_statistics__VarName_10 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__table_statistics__Step_7, (MR_Integer) 0)));
    MR_Integer mercury__table_statistics__Lookups_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__table_statistics__Step_7, (MR_Integer) 1)));
    MR_Integer mercury__table_statistics__LookupsIsDupl_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__table_statistics__Step_7, (MR_Integer) 2)));
    MR_Word mercury__table_statistics__Details_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__table_statistics__Step_7, (MR_Integer) 3)));

    switch (MR_tag((MR_Word) mercury__table_statistics__Details_13)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__table_statistics__write_table_step_stats_header_8_p_0(mercury__table_statistics__OutStream_6, mercury__table_statistics__VarName_10, mercury__table_statistics__StepNum_8, (MR_String) "none", mercury__table_statistics__Lookups_11, mercury__table_statistics__LookupsIsDupl_12);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer mercury__table_statistics__StartAllocs_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__table_statistics__Details_13, (MR_Integer) 0)));
          MR_Integer mercury__table_statistics__StartBytes_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__table_statistics__Details_13, (MR_Integer) 1)));

          {
            mercury__table_statistics__write_table_step_stats_header_8_p_0(mercury__table_statistics__OutStream_6, mercury__table_statistics__VarName_10, mercury__table_statistics__StepNum_8, (MR_String) "expandable array", mercury__table_statistics__Lookups_11, mercury__table_statistics__LookupsIsDupl_12);
          }
          mercury__table_statistics__succeeded = (mercury__table_statistics__Lookups_11 > (MR_Integer) 0);
          if (mercury__table_statistics__succeeded)
            {
              mercury__table_statistics__write_table_step_stats_start_5_p_0(mercury__table_statistics__OutStream_6, mercury__table_statistics__StartAllocs_14, mercury__table_statistics__StartBytes_15);
            }
          else
          {
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer mercury__table_statistics__EnumNodeAllocs_16 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__table_statistics__Details_13, (MR_Integer) 0)));
          MR_Integer mercury__table_statistics__EnumNodeBytes_17 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__table_statistics__Details_13, (MR_Integer) 1)));

          {
            mercury__table_statistics__write_table_step_stats_header_8_p_0(mercury__table_statistics__OutStream_6, mercury__table_statistics__VarName_10, mercury__table_statistics__StepNum_8, (MR_String) "enum trie", mercury__table_statistics__Lookups_11, mercury__table_statistics__LookupsIsDupl_12);
          }
          mercury__table_statistics__succeeded = (mercury__table_statistics__Lookups_11 > (MR_Integer) 0);
          if (mercury__table_statistics__succeeded)
            {
              mercury__table_statistics__write_table_step_stats_enum_5_p_0(mercury__table_statistics__OutStream_6, mercury__table_statistics__EnumNodeAllocs_16, mercury__table_statistics__EnumNodeBytes_17);
            }
          else
          {
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_13, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer mercury__table_statistics__HashTableAllocs_18 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_13, (MR_Integer) 1)));
              MR_Integer mercury__table_statistics__HashTableBytes_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_13, (MR_Integer) 2)));
              MR_Integer mercury__table_statistics__HashLinkChunkAllocs_20 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_13, (MR_Integer) 3)));
              MR_Integer mercury__table_statistics__HashLinkChunkBytes_21 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_13, (MR_Integer) 4)));
              MR_Integer mercury__table_statistics__HashKeyComparesNotDupl_22 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_13, (MR_Integer) 5)));
              MR_Integer mercury__table_statistics__HashKeyComparesIsDupl_23 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_13, (MR_Integer) 6)));
              MR_Integer mercury__table_statistics__HashResizes_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_13, (MR_Integer) 7)));
              MR_Integer mercury__table_statistics__HashResizeOldEntries_25 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_13, (MR_Integer) 8)));
              MR_Integer mercury__table_statistics__HashResizeNewEntries_26 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_13, (MR_Integer) 9)));

              {
                mercury__table_statistics__write_table_step_stats_header_8_p_0(mercury__table_statistics__OutStream_6, mercury__table_statistics__VarName_10, mercury__table_statistics__StepNum_8, (MR_String) "hash table", mercury__table_statistics__Lookups_11, mercury__table_statistics__LookupsIsDupl_12);
              }
              mercury__table_statistics__succeeded = (mercury__table_statistics__Lookups_11 > (MR_Integer) 0);
              if (mercury__table_statistics__succeeded)
                {
                  mercury__table_statistics__write_table_step_stats_hash_12_p_0(mercury__table_statistics__OutStream_6, mercury__table_statistics__HashTableAllocs_18, mercury__table_statistics__HashTableBytes_19, mercury__table_statistics__HashLinkChunkAllocs_20, mercury__table_statistics__HashLinkChunkBytes_21, mercury__table_statistics__HashKeyComparesNotDupl_22, mercury__table_statistics__HashKeyComparesIsDupl_23, mercury__table_statistics__HashResizes_24, mercury__table_statistics__HashResizeOldEntries_25, mercury__table_statistics__HashResizeNewEntries_26);
                }
              else
              {
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer mercury__table_statistics__DuNodeAllocs_27 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_13, (MR_Integer) 1)));
              MR_Integer mercury__table_statistics__DuNodeBytes_28 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_13, (MR_Integer) 2)));
              MR_Integer mercury__table_statistics__DuArgLookups_29 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_13, (MR_Integer) 3)));
              MR_Integer mercury__table_statistics__DuExistLookups_30 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_13, (MR_Integer) 4)));
              MR_Integer mercury__table_statistics__EnumNodeAllocs_58 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_13, (MR_Integer) 5)));
              MR_Integer mercury__table_statistics__EnumNodeBytes_59 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_13, (MR_Integer) 6)));
              MR_Integer mercury__table_statistics__HashTableAllocs_60 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_13, (MR_Integer) 7)));
              MR_Integer mercury__table_statistics__HashTableBytes_61 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_13, (MR_Integer) 8)));
              MR_Integer mercury__table_statistics__HashLinkChunkAllocs_62 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_13, (MR_Integer) 9)));
              MR_Integer mercury__table_statistics__HashLinkChunkBytes_63 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_13, (MR_Integer) 10)));
              MR_Integer mercury__table_statistics__HashKeyComparesNotDupl_64 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_13, (MR_Integer) 11)));
              MR_Integer mercury__table_statistics__HashKeyComparesIsDupl_65 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_13, (MR_Integer) 12)));
              MR_Integer mercury__table_statistics__HashResizes_66 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_13, (MR_Integer) 13)));
              MR_Integer mercury__table_statistics__HashResizeOldEntries_67 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_13, (MR_Integer) 14)));
              MR_Integer mercury__table_statistics__HashResizeNewEntries_68 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_13, (MR_Integer) 15)));

              {
                mercury__table_statistics__write_table_step_stats_header_8_p_0(mercury__table_statistics__OutStream_6, mercury__table_statistics__VarName_10, mercury__table_statistics__StepNum_8, (MR_String) "discriminated union nested trie", mercury__table_statistics__Lookups_11, mercury__table_statistics__LookupsIsDupl_12);
              }
              mercury__table_statistics__succeeded = (mercury__table_statistics__Lookups_11 > (MR_Integer) 0);
              if (mercury__table_statistics__succeeded)
              {
                mercury__table_statistics__succeeded = (mercury__table_statistics__DuNodeAllocs_27 > (MR_Integer) 0);
                if (mercury__table_statistics__succeeded)
                  {
                    mercury__table_statistics__write_table_step_stats_du_7_p_0(mercury__table_statistics__OutStream_6, mercury__table_statistics__DuNodeAllocs_27, mercury__table_statistics__DuNodeBytes_28, mercury__table_statistics__DuArgLookups_29, mercury__table_statistics__DuExistLookups_30);
                  }
                else
                {
                  {
                    mercury__require__error_1_p_0((MR_String) "write_table_step_stats: no du stats");
                    return;
                  }
                }
                mercury__table_statistics__succeeded = (mercury__table_statistics__EnumNodeAllocs_58 > (MR_Integer) 0);
                if (mercury__table_statistics__succeeded)
                  {
                    mercury__table_statistics__write_table_step_stats_enum_5_p_0(mercury__table_statistics__OutStream_6, mercury__table_statistics__EnumNodeAllocs_58, mercury__table_statistics__EnumNodeBytes_59);
                  }
                else
                {
                }
                mercury__table_statistics__succeeded = (mercury__table_statistics__HashTableAllocs_60 > (MR_Integer) 0);
                if (mercury__table_statistics__succeeded)
                  {
                    mercury__table_statistics__write_table_step_stats_hash_12_p_0(mercury__table_statistics__OutStream_6, mercury__table_statistics__HashTableAllocs_60, mercury__table_statistics__HashTableBytes_61, mercury__table_statistics__HashLinkChunkAllocs_62, mercury__table_statistics__HashLinkChunkBytes_63, mercury__table_statistics__HashKeyComparesNotDupl_64, mercury__table_statistics__HashKeyComparesIsDupl_65, mercury__table_statistics__HashResizes_66, mercury__table_statistics__HashResizeOldEntries_67, mercury__table_statistics__HashResizeNewEntries_68);
                  }
                else
                {
                }
              }
              else
              {
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer mercury__table_statistics__DuNodeAllocs_87 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_13, (MR_Integer) 1)));
              MR_Integer mercury__table_statistics__DuNodeBytes_88 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_13, (MR_Integer) 2)));
              MR_Integer mercury__table_statistics__DuArgLookups_89 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_13, (MR_Integer) 3)));
              MR_Integer mercury__table_statistics__DuExistLookups_90 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_13, (MR_Integer) 4)));
              MR_Integer mercury__table_statistics__EnumNodeAllocs_100 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_13, (MR_Integer) 5)));
              MR_Integer mercury__table_statistics__EnumNodeBytes_101 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_13, (MR_Integer) 6)));
              MR_Integer mercury__table_statistics__HashTableAllocs_102 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_13, (MR_Integer) 7)));
              MR_Integer mercury__table_statistics__HashTableBytes_103 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_13, (MR_Integer) 8)));
              MR_Integer mercury__table_statistics__HashLinkChunkAllocs_104 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_13, (MR_Integer) 9)));
              MR_Integer mercury__table_statistics__HashLinkChunkBytes_105 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_13, (MR_Integer) 10)));
              MR_Integer mercury__table_statistics__HashKeyComparesNotDupl_106 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_13, (MR_Integer) 11)));
              MR_Integer mercury__table_statistics__HashKeyComparesIsDupl_107 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_13, (MR_Integer) 12)));
              MR_Integer mercury__table_statistics__HashResizes_108 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_13, (MR_Integer) 13)));
              MR_Integer mercury__table_statistics__HashResizeOldEntries_109 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_13, (MR_Integer) 14)));
              MR_Integer mercury__table_statistics__HashResizeNewEntries_110 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_13, (MR_Integer) 15)));

              {
                mercury__table_statistics__write_table_step_stats_header_8_p_0(mercury__table_statistics__OutStream_6, mercury__table_statistics__VarName_10, mercury__table_statistics__StepNum_8, (MR_String) "polymorphic table", mercury__table_statistics__Lookups_11, mercury__table_statistics__LookupsIsDupl_12);
              }
              mercury__table_statistics__succeeded = (mercury__table_statistics__Lookups_11 > (MR_Integer) 0);
              if (mercury__table_statistics__succeeded)
              {
                mercury__table_statistics__succeeded = (mercury__table_statistics__DuNodeAllocs_87 > (MR_Integer) 0);
                if (mercury__table_statistics__succeeded)
                  {
                    mercury__table_statistics__write_table_step_stats_du_7_p_0(mercury__table_statistics__OutStream_6, mercury__table_statistics__DuNodeAllocs_87, mercury__table_statistics__DuNodeBytes_88, mercury__table_statistics__DuArgLookups_89, mercury__table_statistics__DuExistLookups_90);
                  }
                else
                {
                }
                mercury__table_statistics__succeeded = (mercury__table_statistics__EnumNodeAllocs_100 > (MR_Integer) 0);
                if (mercury__table_statistics__succeeded)
                  {
                    mercury__table_statistics__write_table_step_stats_enum_5_p_0(mercury__table_statistics__OutStream_6, mercury__table_statistics__EnumNodeAllocs_100, mercury__table_statistics__EnumNodeBytes_101);
                  }
                else
                {
                }
                mercury__table_statistics__succeeded = (mercury__table_statistics__HashTableAllocs_102 > (MR_Integer) 0);
                if (mercury__table_statistics__succeeded)
                  {
                    mercury__table_statistics__write_table_step_stats_hash_12_p_0(mercury__table_statistics__OutStream_6, mercury__table_statistics__HashTableAllocs_102, mercury__table_statistics__HashTableBytes_103, mercury__table_statistics__HashLinkChunkAllocs_104, mercury__table_statistics__HashLinkChunkBytes_105, mercury__table_statistics__HashKeyComparesNotDupl_106, mercury__table_statistics__HashKeyComparesIsDupl_107, mercury__table_statistics__HashResizes_108, mercury__table_statistics__HashResizeOldEntries_109, mercury__table_statistics__HashResizeNewEntries_110);
                  }
                else
                {
                }
              }
              else
              {
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
mercury__table_statistics__write_table_step_stats_du_7_p_0(
  MR_Word mercury__table_statistics__OutStream_8,
  MR_Integer mercury__table_statistics__DuNodeAllocs_9,
  MR_Integer mercury__table_statistics__DuNodeBytes_10,
  MR_Integer mercury__table_statistics__DuArgLookups_11,
  MR_Integer mercury__table_statistics__DuExistLookups_12)
{
  {
    MR_bool mercury__table_statistics__succeeded;
    MR_String mercury__table_statistics__DuNodeAllocsStr_14;
    MR_String mercury__table_statistics__DuNodeBytesStr_15;
    MR_String mercury__table_statistics__DuArgLookupsStr_16;
    MR_String mercury__table_statistics__DuExistLookupsStr_17;
    MR_String mercury__table_statistics__Var_44;
    MR_Word mercury__table_statistics__Var_50;
    MR_String mercury__table_statistics__Var_56;
    MR_String mercury__table_statistics__Var_68;

    {
      mercury__table_statistics__DuNodeAllocsStr_14 = mercury__string__int_to_base_string_group_4_f_0(mercury__table_statistics__DuNodeAllocs_9, (MR_Integer) 10, (MR_Integer) 3, (MR_String) ",");
    }
    {
      mercury__table_statistics__DuNodeBytesStr_15 = mercury__string__int_to_base_string_group_4_f_0(mercury__table_statistics__DuNodeBytes_10, (MR_Integer) 10, (MR_Integer) 3, (MR_String) ",");
    }
    {
      mercury__table_statistics__DuArgLookupsStr_16 = mercury__string__int_to_string_thousands_1_f_0(mercury__table_statistics__DuArgLookups_11);
    }
    {
      mercury__table_statistics__DuExistLookupsStr_17 = mercury__string__int_to_string_thousands_1_f_0(mercury__table_statistics__DuExistLookups_12);
    }
    {
      mercury__io__write_string_4_p_0(mercury__table_statistics__OutStream_8, (MR_String) "  number of du functor node allocations:      ");
    }
    mercury__table_statistics__Var_50 = (MR_Word) &mercury__table_statistics_scalar_common_5[0];
    {
      mercury__string__format__format_string_component_width_noprec_4_p_0(mercury__table_statistics__Var_50, (MR_Integer) 9, mercury__table_statistics__DuNodeAllocsStr_14, &mercury__table_statistics__Var_44);
    }
    {
      mercury__io__write_string_4_p_0(mercury__table_statistics__OutStream_8, mercury__table_statistics__Var_44);
    }
    {
      mercury__io__write_string_4_p_0(mercury__table_statistics__OutStream_8, (MR_String) "\n");
    }
    {
      mercury__io__write_string_4_p_0(mercury__table_statistics__OutStream_8, (MR_String) "  number of bytes allocated for du functors:  ");
    }
    {
      mercury__string__format__format_string_component_width_noprec_4_p_0(mercury__table_statistics__Var_50, (MR_Integer) 9, mercury__table_statistics__DuNodeBytesStr_15, &mercury__table_statistics__Var_56);
    }
    {
      mercury__io__write_string_4_p_0(mercury__table_statistics__OutStream_8, mercury__table_statistics__Var_56);
    }
    {
      mercury__io__write_string_4_p_0(mercury__table_statistics__OutStream_8, (MR_String) "\n");
    }
    {
      mercury__io__write_string_4_p_0(mercury__table_statistics__OutStream_8, (MR_String) "  number of du functor argument lookups:      ");
    }
    {
      mercury__string__format__format_string_component_width_noprec_4_p_0(mercury__table_statistics__Var_50, (MR_Integer) 9, mercury__table_statistics__DuArgLookupsStr_16, &mercury__table_statistics__Var_68);
    }
    {
      mercury__io__write_string_4_p_0(mercury__table_statistics__OutStream_8, mercury__table_statistics__Var_68);
    }
    {
      mercury__io__write_string_4_p_0(mercury__table_statistics__OutStream_8, (MR_String) "\n");
    }
    mercury__table_statistics__succeeded = (mercury__table_statistics__DuExistLookups_12 > (MR_Integer) 0);
    if (mercury__table_statistics__succeeded)
    {
      MR_String mercury__table_statistics__Var_80;

      {
        mercury__io__write_string_4_p_0(mercury__table_statistics__OutStream_8, (MR_String) "  number of du existential type lookups:      ");
      }
      {
        mercury__string__format__format_string_component_width_noprec_4_p_0(mercury__table_statistics__Var_50, (MR_Integer) 9, mercury__table_statistics__DuExistLookupsStr_17, &mercury__table_statistics__Var_80);
      }
      {
        mercury__io__write_string_4_p_0(mercury__table_statistics__OutStream_8, mercury__table_statistics__Var_80);
      }
      {
        mercury__io__write_string_4_p_0(mercury__table_statistics__OutStream_8, (MR_String) "\n");
      }
    }
    else
    {
    }
  }
}

static void MR_CALL 
mercury__table_statistics__write_table_step_stats_hash_12_p_0(
  MR_Word mercury__table_statistics__OutStream_13,
  MR_Integer mercury__table_statistics__HashTableAllocs_14,
  MR_Integer mercury__table_statistics__HashTableBytes_15,
  MR_Integer mercury__table_statistics__HashLinkChunkAllocs_16,
  MR_Integer mercury__table_statistics__HashLinkChunkBytes_17,
  MR_Integer mercury__table_statistics__HashKeyComparesNotDupl_18,
  MR_Integer mercury__table_statistics__HashKeyComparesIsDupl_19,
  MR_Integer mercury__table_statistics__HashResizes_20,
  MR_Integer mercury__table_statistics__HashResizeOldEntries_21,
  MR_Integer mercury__table_statistics__HashResizeNewEntries_22)
{
  {
    MR_bool mercury__table_statistics__succeeded;
    MR_String mercury__table_statistics__HashTableAllocsStr_24;
    MR_String mercury__table_statistics__HashTableBytesStr_25;
    MR_String mercury__table_statistics__HashLinkChunkAllocsStr_26;
    MR_String mercury__table_statistics__HashLinkChunkBytesStr_27;
    MR_String mercury__table_statistics__HashKeyComparesNotDuplStr_28;
    MR_String mercury__table_statistics__HashKeyComparesIsDuplStr_29;
    MR_String mercury__table_statistics__HashResizesStr_30;
    MR_String mercury__table_statistics__HashResizeOldEntriesStr_31;
    MR_String mercury__table_statistics__HashResizeNewEntriesStr_32;
    MR_String mercury__table_statistics__Var_84;
    MR_Word mercury__table_statistics__Var_90;
    MR_String mercury__table_statistics__Var_96;
    MR_String mercury__table_statistics__Var_108;
    MR_String mercury__table_statistics__Var_120;
    MR_String mercury__table_statistics__Var_132;
    MR_String mercury__table_statistics__Var_144;
    MR_String mercury__table_statistics__Var_156;

    {
      mercury__table_statistics__HashTableAllocsStr_24 = mercury__string__int_to_string_thousands_1_f_0(mercury__table_statistics__HashTableAllocs_14);
    }
    {
      mercury__table_statistics__HashTableBytesStr_25 = mercury__string__int_to_string_thousands_1_f_0(mercury__table_statistics__HashTableBytes_15);
    }
    {
      mercury__table_statistics__HashLinkChunkAllocsStr_26 = mercury__string__int_to_string_thousands_1_f_0(mercury__table_statistics__HashLinkChunkAllocs_16);
    }
    {
      mercury__table_statistics__HashLinkChunkBytesStr_27 = mercury__string__int_to_string_thousands_1_f_0(mercury__table_statistics__HashLinkChunkBytes_17);
    }
    {
      mercury__table_statistics__HashKeyComparesNotDuplStr_28 = mercury__string__int_to_string_thousands_1_f_0(mercury__table_statistics__HashKeyComparesNotDupl_18);
    }
    {
      mercury__table_statistics__HashKeyComparesIsDuplStr_29 = mercury__string__int_to_string_thousands_1_f_0(mercury__table_statistics__HashKeyComparesIsDupl_19);
    }
    {
      mercury__table_statistics__HashResizesStr_30 = mercury__string__int_to_string_thousands_1_f_0(mercury__table_statistics__HashResizes_20);
    }
    {
      mercury__table_statistics__HashResizeOldEntriesStr_31 = mercury__string__int_to_string_thousands_1_f_0(mercury__table_statistics__HashResizeOldEntries_21);
    }
    {
      mercury__table_statistics__HashResizeNewEntriesStr_32 = mercury__string__int_to_string_thousands_1_f_0(mercury__table_statistics__HashResizeNewEntries_22);
    }
    {
      mercury__io__write_string_4_p_0(mercury__table_statistics__OutStream_13, (MR_String) "  number of hash table allocations:           ");
    }
    mercury__table_statistics__Var_90 = (MR_Word) &mercury__table_statistics_scalar_common_5[0];
    {
      mercury__string__format__format_string_component_width_noprec_4_p_0(mercury__table_statistics__Var_90, (MR_Integer) 9, mercury__table_statistics__HashTableAllocsStr_24, &mercury__table_statistics__Var_84);
    }
    {
      mercury__io__write_string_4_p_0(mercury__table_statistics__OutStream_13, mercury__table_statistics__Var_84);
    }
    {
      mercury__io__write_string_4_p_0(mercury__table_statistics__OutStream_13, (MR_String) "\n");
    }
    {
      mercury__io__write_string_4_p_0(mercury__table_statistics__OutStream_13, (MR_String) "  number of bytes allocated for hash tables:  ");
    }
    {
      mercury__string__format__format_string_component_width_noprec_4_p_0(mercury__table_statistics__Var_90, (MR_Integer) 9, mercury__table_statistics__HashTableBytesStr_25, &mercury__table_statistics__Var_96);
    }
    {
      mercury__io__write_string_4_p_0(mercury__table_statistics__OutStream_13, mercury__table_statistics__Var_96);
    }
    {
      mercury__io__write_string_4_p_0(mercury__table_statistics__OutStream_13, (MR_String) "\n");
    }
    {
      mercury__io__write_string_4_p_0(mercury__table_statistics__OutStream_13, (MR_String) "  number of bulk hash link allocations:       ");
    }
    {
      mercury__string__format__format_string_component_width_noprec_4_p_0(mercury__table_statistics__Var_90, (MR_Integer) 9, mercury__table_statistics__HashLinkChunkAllocsStr_26, &mercury__table_statistics__Var_108);
    }
    {
      mercury__io__write_string_4_p_0(mercury__table_statistics__OutStream_13, mercury__table_statistics__Var_108);
    }
    {
      mercury__io__write_string_4_p_0(mercury__table_statistics__OutStream_13, (MR_String) "\n");
    }
    {
      mercury__io__write_string_4_p_0(mercury__table_statistics__OutStream_13, (MR_String) "  number of bytes allocated for hash links:   ");
    }
    {
      mercury__string__format__format_string_component_width_noprec_4_p_0(mercury__table_statistics__Var_90, (MR_Integer) 9, mercury__table_statistics__HashLinkChunkBytesStr_27, &mercury__table_statistics__Var_120);
    }
    {
      mercury__io__write_string_4_p_0(mercury__table_statistics__OutStream_13, mercury__table_statistics__Var_120);
    }
    {
      mercury__io__write_string_4_p_0(mercury__table_statistics__OutStream_13, (MR_String) "\n");
    }
    {
      mercury__io__write_string_4_p_0(mercury__table_statistics__OutStream_13, (MR_String) "  number of key compares when unsuccessful:   ");
    }
    {
      mercury__string__format__format_string_component_width_noprec_4_p_0(mercury__table_statistics__Var_90, (MR_Integer) 9, mercury__table_statistics__HashKeyComparesNotDuplStr_28, &mercury__table_statistics__Var_132);
    }
    {
      mercury__io__write_string_4_p_0(mercury__table_statistics__OutStream_13, mercury__table_statistics__Var_132);
    }
    {
      mercury__io__write_string_4_p_0(mercury__table_statistics__OutStream_13, (MR_String) "\n");
    }
    {
      mercury__io__write_string_4_p_0(mercury__table_statistics__OutStream_13, (MR_String) "  number of key compares when successful:     ");
    }
    {
      mercury__string__format__format_string_component_width_noprec_4_p_0(mercury__table_statistics__Var_90, (MR_Integer) 9, mercury__table_statistics__HashKeyComparesIsDuplStr_29, &mercury__table_statistics__Var_144);
    }
    {
      mercury__io__write_string_4_p_0(mercury__table_statistics__OutStream_13, mercury__table_statistics__Var_144);
    }
    {
      mercury__io__write_string_4_p_0(mercury__table_statistics__OutStream_13, (MR_String) "\n");
    }
    {
      mercury__io__write_string_4_p_0(mercury__table_statistics__OutStream_13, (MR_String) "  number of hash table resizes:               ");
    }
    {
      mercury__string__format__format_string_component_width_noprec_4_p_0(mercury__table_statistics__Var_90, (MR_Integer) 9, mercury__table_statistics__HashResizesStr_30, &mercury__table_statistics__Var_156);
    }
    {
      mercury__io__write_string_4_p_0(mercury__table_statistics__OutStream_13, mercury__table_statistics__Var_156);
    }
    {
      mercury__io__write_string_4_p_0(mercury__table_statistics__OutStream_13, (MR_String) "\n");
    }
    mercury__table_statistics__succeeded = (mercury__table_statistics__HashResizes_20 > (MR_Integer) 0);
    if (mercury__table_statistics__succeeded)
    {
      MR_String mercury__table_statistics__Var_168;
      MR_String mercury__table_statistics__Var_180;

      {
        mercury__io__write_string_4_p_0(mercury__table_statistics__OutStream_13, (MR_String) "  number of old entries in resizes:           ");
      }
      {
        mercury__string__format__format_string_component_width_noprec_4_p_0(mercury__table_statistics__Var_90, (MR_Integer) 9, mercury__table_statistics__HashResizeOldEntriesStr_31, &mercury__table_statistics__Var_168);
      }
      {
        mercury__io__write_string_4_p_0(mercury__table_statistics__OutStream_13, mercury__table_statistics__Var_168);
      }
      {
        mercury__io__write_string_4_p_0(mercury__table_statistics__OutStream_13, (MR_String) "\n");
      }
      {
        mercury__io__write_string_4_p_0(mercury__table_statistics__OutStream_13, (MR_String) "  number of new entries in resizes:           ");
      }
      {
        mercury__string__format__format_string_component_width_noprec_4_p_0(mercury__table_statistics__Var_90, (MR_Integer) 9, mercury__table_statistics__HashResizeNewEntriesStr_32, &mercury__table_statistics__Var_180);
      }
      {
        mercury__io__write_string_4_p_0(mercury__table_statistics__OutStream_13, mercury__table_statistics__Var_180);
      }
      {
        mercury__io__write_string_4_p_0(mercury__table_statistics__OutStream_13, (MR_String) "\n");
      }
    }
    else
    {
    }
  }
}

static void MR_CALL 
mercury__table_statistics__write_table_step_stats_enum_5_p_0(
  MR_Word mercury__table_statistics__OutStream_6,
  MR_Integer mercury__table_statistics__EnumNodeAllocs_7,
  MR_Integer mercury__table_statistics__EnumNodeBytes_8)
{
  {
    MR_String mercury__table_statistics__EnumNodeAllocsStr_10;
    MR_String mercury__table_statistics__EnumNodeBytesStr_11;
    MR_String mercury__table_statistics__Var_27;
    MR_Word mercury__table_statistics__Var_33;
    MR_String mercury__table_statistics__Var_39;
    MR_Word mercury__table_statistics__V_10_63;
    MR_Word mercury__table_statistics__V_9_68;
    MR_Word mercury__table_statistics__V_10_69;

    {
      mercury__table_statistics__EnumNodeAllocsStr_10 = mercury__string__int_to_base_string_group_4_f_0(mercury__table_statistics__EnumNodeAllocs_7, (MR_Integer) 10, (MR_Integer) 3, (MR_String) ",");
    }
    {
      mercury__table_statistics__EnumNodeBytesStr_11 = mercury__string__int_to_base_string_group_4_f_0(mercury__table_statistics__EnumNodeBytes_8, (MR_Integer) 10, (MR_Integer) 3, (MR_String) ",");
    }
    {
      mercury__io__write_string_4_p_0(mercury__table_statistics__OutStream_6, (MR_String) "  number of enum node allocations:            ");
    }
    mercury__table_statistics__Var_33 = (MR_Word) &mercury__table_statistics_scalar_common_5[0];
    mercury__table_statistics__V_9_68 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__table_statistics_scalar_common_5[2]);
    mercury__table_statistics__V_10_63 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__string__format__format_string_component_5_p_0(mercury__table_statistics__Var_33, mercury__table_statistics__V_9_68, mercury__table_statistics__V_10_63, mercury__table_statistics__EnumNodeAllocsStr_10, &mercury__table_statistics__Var_27);
    }
    {
      mercury__io__write_string_4_p_0(mercury__table_statistics__OutStream_6, mercury__table_statistics__Var_27);
    }
    {
      mercury__io__write_string_4_p_0(mercury__table_statistics__OutStream_6, (MR_String) "\n");
    }
    {
      mercury__io__write_string_4_p_0(mercury__table_statistics__OutStream_6, (MR_String) "  number of bytes allocated for enum nodes:   ");
    }
    mercury__table_statistics__V_10_69 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__string__format__format_string_component_5_p_0(mercury__table_statistics__Var_33, mercury__table_statistics__V_9_68, mercury__table_statistics__V_10_69, mercury__table_statistics__EnumNodeBytesStr_11, &mercury__table_statistics__Var_39);
    }
    {
      mercury__io__write_string_4_p_0(mercury__table_statistics__OutStream_6, mercury__table_statistics__Var_39);
    }
    {
      mercury__io__write_string_4_p_0(mercury__table_statistics__OutStream_6, (MR_String) "\n");
    }
  }
}

static void MR_CALL 
mercury__table_statistics__write_table_step_stats_start_5_p_0(
  MR_Word mercury__table_statistics__OutStream_6,
  MR_Integer mercury__table_statistics__StartAllocs_7,
  MR_Integer mercury__table_statistics__StartBytes_8)
{
  {
    MR_String mercury__table_statistics__StartAllocsStr_10;
    MR_String mercury__table_statistics__StartBytesStr_11;
    MR_String mercury__table_statistics__Var_27;
    MR_Word mercury__table_statistics__Var_33;
    MR_String mercury__table_statistics__Var_39;
    MR_Word mercury__table_statistics__V_10_63;
    MR_Word mercury__table_statistics__V_9_68;
    MR_Word mercury__table_statistics__V_10_69;

    {
      mercury__table_statistics__StartAllocsStr_10 = mercury__string__int_to_base_string_group_4_f_0(mercury__table_statistics__StartAllocs_7, (MR_Integer) 10, (MR_Integer) 3, (MR_String) ",");
    }
    {
      mercury__table_statistics__StartBytesStr_11 = mercury__string__int_to_base_string_group_4_f_0(mercury__table_statistics__StartBytes_8, (MR_Integer) 10, (MR_Integer) 3, (MR_String) ",");
    }
    {
      mercury__io__write_string_4_p_0(mercury__table_statistics__OutStream_6, (MR_String) "  number of array (re)allocations:            ");
    }
    mercury__table_statistics__Var_33 = (MR_Word) &mercury__table_statistics_scalar_common_5[0];
    mercury__table_statistics__V_9_68 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__table_statistics_scalar_common_5[2]);
    mercury__table_statistics__V_10_63 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__string__format__format_string_component_5_p_0(mercury__table_statistics__Var_33, mercury__table_statistics__V_9_68, mercury__table_statistics__V_10_63, mercury__table_statistics__StartAllocsStr_10, &mercury__table_statistics__Var_27);
    }
    {
      mercury__io__write_string_4_p_0(mercury__table_statistics__OutStream_6, mercury__table_statistics__Var_27);
    }
    {
      mercury__io__write_string_4_p_0(mercury__table_statistics__OutStream_6, (MR_String) "\n");
    }
    {
      mercury__io__write_string_4_p_0(mercury__table_statistics__OutStream_6, (MR_String) "  number of bytes (re)allocationed:           ");
    }
    mercury__table_statistics__V_10_69 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__string__format__format_string_component_5_p_0(mercury__table_statistics__Var_33, mercury__table_statistics__V_9_68, mercury__table_statistics__V_10_69, mercury__table_statistics__StartBytesStr_11, &mercury__table_statistics__Var_39);
    }
    {
      mercury__io__write_string_4_p_0(mercury__table_statistics__OutStream_6, mercury__table_statistics__Var_39);
    }
    {
      mercury__io__write_string_4_p_0(mercury__table_statistics__OutStream_6, (MR_String) "\n");
    }
  }
}

static void MR_CALL 
mercury__table_statistics__write_table_step_stats_header_8_p_0(
  MR_Word mercury__table_statistics__OutStream_9,
  MR_String mercury__table_statistics__VarName_10,
  MR_Integer mercury__table_statistics__StepNum_11,
  MR_String mercury__table_statistics__KindStr_12,
  MR_Integer mercury__table_statistics__Lookups_13,
  MR_Integer mercury__table_statistics__LookupsIsDupl_14)
{
  {
    MR_bool mercury__table_statistics__succeeded;
    MR_Integer mercury__table_statistics__LookupsNotDupl_16;
    MR_String mercury__table_statistics__LookupsStr_17;
    MR_String mercury__table_statistics__LookupsIsDuplStr_18;
    MR_String mercury__table_statistics__LookupsNotDuplStr_19;
    MR_String mercury__table_statistics__Var_56;
    MR_Word mercury__table_statistics__Var_62;
    MR_String mercury__table_statistics__Var_73;

    {
      mercury__io__write_string_4_p_0(mercury__table_statistics__OutStream_9, (MR_String) "\nstep ");
    }
    mercury__table_statistics__Var_62 = (MR_Word) &mercury__table_statistics_scalar_common_5[0];
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(mercury__table_statistics__Var_62, mercury__table_statistics__StepNum_11, &mercury__table_statistics__Var_56);
    }
    {
      mercury__io__write_string_4_p_0(mercury__table_statistics__OutStream_9, mercury__table_statistics__Var_56);
    }
    {
      mercury__io__write_string_4_p_0(mercury__table_statistics__OutStream_9, (MR_String) ", variable ");
    }
    {
      mercury__io__write_string_4_p_0(mercury__table_statistics__OutStream_9, mercury__table_statistics__VarName_10);
    }
    {
      mercury__io__write_string_4_p_0(mercury__table_statistics__OutStream_9, (MR_String) ": ");
    }
    {
      mercury__io__write_string_4_p_0(mercury__table_statistics__OutStream_9, mercury__table_statistics__KindStr_12);
    }
    {
      mercury__io__write_string_4_p_0(mercury__table_statistics__OutStream_9, (MR_String) "\n");
    }
    mercury__table_statistics__LookupsNotDupl_16 = (mercury__table_statistics__Lookups_13 - mercury__table_statistics__LookupsIsDupl_14);
    {
      mercury__table_statistics__LookupsStr_17 = mercury__string__int_to_string_thousands_1_f_0(mercury__table_statistics__Lookups_13);
    }
    {
      mercury__table_statistics__LookupsIsDuplStr_18 = mercury__string__int_to_string_thousands_1_f_0(mercury__table_statistics__LookupsIsDupl_14);
    }
    {
      mercury__table_statistics__LookupsNotDuplStr_19 = mercury__string__int_to_string_thousands_1_f_0(mercury__table_statistics__LookupsNotDupl_16);
    }
    {
      mercury__io__write_string_4_p_0(mercury__table_statistics__OutStream_9, (MR_String) "  number of lookups:                          ");
    }
    {
      mercury__string__format__format_string_component_width_noprec_4_p_0(mercury__table_statistics__Var_62, (MR_Integer) 9, mercury__table_statistics__LookupsStr_17, &mercury__table_statistics__Var_73);
    }
    {
      mercury__io__write_string_4_p_0(mercury__table_statistics__OutStream_9, mercury__table_statistics__Var_73);
    }
    {
      mercury__io__write_string_4_p_0(mercury__table_statistics__OutStream_9, (MR_String) "\n");
    }
    mercury__table_statistics__succeeded = (mercury__table_statistics__Lookups_13 > (MR_Integer) 0);
    if (mercury__table_statistics__succeeded)
    {
      MR_String mercury__table_statistics__FractionIsDuplStr_20;
      MR_String mercury__table_statistics__FractionNotDuplStr_21;
      MR_String mercury__table_statistics__Var_85;
      MR_String mercury__table_statistics__Var_96;
      MR_String mercury__table_statistics__Var_108;
      MR_String mercury__table_statistics__Var_119;

      {
        mercury__table_statistics__FractionIsDuplStr_20 = mercury__table_statistics__percentage_str_2_f_0(mercury__table_statistics__LookupsIsDupl_14, mercury__table_statistics__Lookups_13);
      }
      {
        mercury__table_statistics__FractionNotDuplStr_21 = mercury__table_statistics__percentage_str_2_f_0(mercury__table_statistics__LookupsNotDupl_16, mercury__table_statistics__Lookups_13);
      }
      {
        mercury__io__write_string_4_p_0(mercury__table_statistics__OutStream_9, (MR_String) "  number of successful lookups:               ");
      }
      {
        mercury__string__format__format_string_component_width_noprec_4_p_0(mercury__table_statistics__Var_62, (MR_Integer) 9, mercury__table_statistics__LookupsIsDuplStr_18, &mercury__table_statistics__Var_85);
      }
      {
        mercury__io__write_string_4_p_0(mercury__table_statistics__OutStream_9, mercury__table_statistics__Var_85);
      }
      {
        mercury__io__write_string_4_p_0(mercury__table_statistics__OutStream_9, (MR_String) " ");
      }
      {
        mercury__string__format__format_string_component_width_noprec_4_p_0(mercury__table_statistics__Var_62, (MR_Integer) 9, mercury__table_statistics__FractionIsDuplStr_20, &mercury__table_statistics__Var_96);
      }
      {
        mercury__io__write_string_4_p_0(mercury__table_statistics__OutStream_9, mercury__table_statistics__Var_96);
      }
      {
        mercury__io__write_string_4_p_0(mercury__table_statistics__OutStream_9, (MR_String) "\n");
      }
      {
        mercury__io__write_string_4_p_0(mercury__table_statistics__OutStream_9, (MR_String) "  number of unsuccessful lookups:             ");
      }
      {
        mercury__string__format__format_string_component_width_noprec_4_p_0(mercury__table_statistics__Var_62, (MR_Integer) 9, mercury__table_statistics__LookupsNotDuplStr_19, &mercury__table_statistics__Var_108);
      }
      {
        mercury__io__write_string_4_p_0(mercury__table_statistics__OutStream_9, mercury__table_statistics__Var_108);
      }
      {
        mercury__io__write_string_4_p_0(mercury__table_statistics__OutStream_9, (MR_String) " ");
      }
      {
        mercury__string__format__format_string_component_width_noprec_4_p_0(mercury__table_statistics__Var_62, (MR_Integer) 9, mercury__table_statistics__FractionNotDuplStr_21, &mercury__table_statistics__Var_119);
      }
      {
        mercury__io__write_string_4_p_0(mercury__table_statistics__OutStream_9, mercury__table_statistics__Var_119);
      }
      {
        mercury__io__write_string_4_p_0(mercury__table_statistics__OutStream_9, (MR_String) "\n");
      }
    }
    else
    {
    }
  }
}

static MR_String MR_CALL 
mercury__table_statistics__percentage_str_2_f_0(
  MR_Integer mercury__table_statistics__A_4,
  MR_Integer mercury__table_statistics__B_5)
{
  {
    MR_bool mercury__table_statistics__succeeded;
    MR_String mercury__table_statistics__PercentageStr_6;
    MR_Float mercury__table_statistics__Percentage_7;
    MR_Float mercury__table_statistics__Var_8;
    MR_Float mercury__table_statistics__Var_9;
    MR_Float mercury__table_statistics__Var_11;
    MR_Float mercury__table_statistics__Var_12;
    MR_String mercury__table_statistics__Var_18;
    MR_Word mercury__table_statistics__Var_24;
    MR_String mercury__table_statistics__Var_27;
    MR_Word mercury__table_statistics__V_11_40;
    MR_Word mercury__table_statistics__V_12_41;

{
#define MR_PROC_LABEL mercury__table_statistics__percentage_str_2_f_0

	MR_Integer IntVal;
	MR_Float FloatVal;

	IntVal =  (MR_Integer) 100 ;
		{

    FloatVal = IntVal;


		;}
#undef MR_PROC_LABEL
	 mercury__table_statistics__Var_9  = FloatVal;
}
{
#define MR_PROC_LABEL mercury__table_statistics__percentage_str_2_f_0

	MR_Integer IntVal;
	MR_Float FloatVal;

	IntVal =  mercury__table_statistics__A_4 ;
		{

    FloatVal = IntVal;


		;}
#undef MR_PROC_LABEL
	 mercury__table_statistics__Var_11  = FloatVal;
}
    mercury__table_statistics__Var_8 = (mercury__table_statistics__Var_9 * mercury__table_statistics__Var_11);
{
#define MR_PROC_LABEL mercury__table_statistics__percentage_str_2_f_0

	MR_Integer IntVal;
	MR_Float FloatVal;

	IntVal =  mercury__table_statistics__B_5 ;
		{

    FloatVal = IntVal;


		;}
#undef MR_PROC_LABEL
	 mercury__table_statistics__Var_12  = FloatVal;
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
	if (SUCCESS_INDICATOR) {
	}
mercury__table_statistics__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__table_statistics__succeeded)
      mercury__table_statistics__succeeded = (mercury__table_statistics__Var_12 == ((MR_Float) 0.0000000000000000));
    if (mercury__table_statistics__succeeded)
    {
      MR_Word mercury__table_statistics__TypeCtorInfo_9_34 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
      MR_Word mercury__table_statistics__V_7_32 = (MR_Word) ((MR_Box) ((MR_String) "float.\'/\': division by zero"));

      {
        mercury__exception__throw_1_p_0(mercury__table_statistics__TypeCtorInfo_9_34, ((MR_Box) (mercury__table_statistics__V_7_32)));
      }
    }
    else
      mercury__table_statistics__Percentage_7 = (mercury__table_statistics__Var_8 / mercury__table_statistics__Var_12);
    mercury__table_statistics__Var_24 = (MR_Word) &mercury__table_statistics_scalar_common_5[0];
    mercury__table_statistics__V_11_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__table_statistics__V_12_41 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__table_statistics_scalar_common_5[1]);
    {
      mercury__string__format__format_float_component_6_p_0(mercury__table_statistics__Var_24, mercury__table_statistics__V_11_40, mercury__table_statistics__V_12_41, (MR_Integer) 2, mercury__table_statistics__Percentage_7, &mercury__table_statistics__Var_18);
    }
    {
      mercury__string__append_3_p_2(mercury__table_statistics__Var_18, (MR_String) "%)", &mercury__table_statistics__Var_27);
    }
    {
      mercury__string__append_3_p_2((MR_String) "(", mercury__table_statistics__Var_27, &mercury__table_statistics__PercentageStr_6);
    }
    return mercury__table_statistics__PercentageStr_6;
  }
}

MR_Word MR_CALL 
mercury__table_statistics__table_stats_difference_2_f_0(
  MR_Word mercury__table_statistics__StatsA_4,
  MR_Word mercury__table_statistics__StatsB_5)
{
  {
    MR_Word mercury__table_statistics__StatsDiff_6;
    MR_Integer mercury__table_statistics__LookupsA_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__table_statistics__StatsA_4, (MR_Integer) 0)));
    MR_Integer mercury__table_statistics__LookupsIsDuplA_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__table_statistics__StatsA_4, (MR_Integer) 1)));
    MR_Word mercury__table_statistics__StepsA_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__table_statistics__StatsA_4, (MR_Integer) 2)));
    MR_Integer mercury__table_statistics__LookupsB_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__table_statistics__StatsB_5, (MR_Integer) 0)));
    MR_Integer mercury__table_statistics__LookupsIsDuplB_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__table_statistics__StatsB_5, (MR_Integer) 1)));
    MR_Word mercury__table_statistics__StepsB_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__table_statistics__StatsB_5, (MR_Integer) 2)));
    MR_Integer mercury__table_statistics__LookupsDiff_13 = (mercury__table_statistics__LookupsA_7 - mercury__table_statistics__LookupsB_10);
    MR_Integer mercury__table_statistics__LookupsIsDuplDiff_14 = (mercury__table_statistics__LookupsIsDuplA_8 - mercury__table_statistics__LookupsIsDuplB_11);
    MR_Word mercury__table_statistics__StepsDiff_15;

    {
      mercury__table_statistics__StepsDiff_15 = mercury__table_statistics__table_step_stats_diff_2_f_0(mercury__table_statistics__StepsA_9, mercury__table_statistics__StepsB_12);
    }
    {
      mercury__table_statistics__StatsDiff_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__table_statistics__StatsDiff_6, 0) = ((MR_Box) (mercury__table_statistics__LookupsDiff_13));
      MR_hl_field(MR_mktag(0), mercury__table_statistics__StatsDiff_6, 1) = ((MR_Box) (mercury__table_statistics__LookupsIsDuplDiff_14));
      MR_hl_field(MR_mktag(0), mercury__table_statistics__StatsDiff_6, 2) = ((MR_Box) (mercury__table_statistics__StepsDiff_15));
    }
    return mercury__table_statistics__StatsDiff_6;
  }
}

MR_Word MR_CALL 
mercury__table_statistics__table_step_stats_diff_2_f_0(
  MR_Word mercury__table_statistics__HeadVar__1_1,
  MR_Word mercury__table_statistics__HeadVar__2_2)
{
  {
    MR_bool mercury__table_statistics__succeeded;
    MR_Word mercury__table_statistics__HeadVar__3_3;

    if ((mercury__table_statistics__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((mercury__table_statistics__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        mercury__table_statistics__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
      {
        MR_Word mercury__table_statistics__TypeInfo_34_34 = (MR_Word) &mercury__table_statistics_scalar_common_1[0];
        MR_Box mercury__table_statistics__conv0_HeadVar__3_3;

        {
          mercury__table_statistics__conv0_HeadVar__3_3 = mercury__require__func_error_1_f_0(mercury__table_statistics__TypeInfo_34_34, (MR_String) "mismatched table stats");
        }
        mercury__table_statistics__HeadVar__3_3 = ((MR_Word) mercury__table_statistics__conv0_HeadVar__3_3);
      }
    else
    {
      MR_Word mercury__table_statistics__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word mercury__table_statistics__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 0)));

      if ((mercury__table_statistics__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word mercury__table_statistics__TypeInfo_33_33 = (MR_Word) &mercury__table_statistics_scalar_common_1[0];
        MR_Box mercury__table_statistics__conv1_HeadVar__3_3;

        {
          mercury__table_statistics__conv1_HeadVar__3_3 = mercury__require__func_error_1_f_0(mercury__table_statistics__TypeInfo_33_33, (MR_String) "mismatched table stats");
        }
        mercury__table_statistics__HeadVar__3_3 = ((MR_Word) mercury__table_statistics__conv1_HeadVar__3_3);
      }
      else
      {
        MR_Word mercury__table_statistics__StepB_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__table_statistics__StepsB_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mercury__table_statistics__StepDiff_14;
        MR_Word mercury__table_statistics__StepDiffs_15;
        MR_String mercury__table_statistics__VarNameA_16 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__table_statistics__Var_37, (MR_Integer) 0)));
        MR_Integer mercury__table_statistics__LookupsA_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__table_statistics__Var_37, (MR_Integer) 1)));
        MR_Integer mercury__table_statistics__LookupsIsDuplA_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__table_statistics__Var_37, (MR_Integer) 2)));
        MR_Word mercury__table_statistics__DetailsA_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__table_statistics__Var_37, (MR_Integer) 3)));
        MR_String mercury__table_statistics__VarNameB_20 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__table_statistics__StepB_12, (MR_Integer) 0)));
        MR_Integer mercury__table_statistics__LookupsB_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__table_statistics__StepB_12, (MR_Integer) 1)));
        MR_Integer mercury__table_statistics__LookupsIsDuplB_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__table_statistics__StepB_12, (MR_Integer) 2)));
        MR_Word mercury__table_statistics__DetailsB_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__table_statistics__StepB_12, (MR_Integer) 3)));
        MR_Integer mercury__table_statistics__LookupsDiff_24;
        MR_Integer mercury__table_statistics__LookupsIsDuplDiff_25;
        MR_Word mercury__table_statistics__DetailsDiff_27;
        MR_Word mercury__table_statistics__DetailsDiffPrime_26;

        mercury__table_statistics__succeeded = (strcmp(mercury__table_statistics__VarNameA_16, mercury__table_statistics__VarNameB_20) == 0);
        if (mercury__table_statistics__succeeded)
        {
        }
        else
          {
            mercury__require__error_1_p_0((MR_String) "table_step_stats_diff: mismatches in variable name");
          }
        mercury__table_statistics__LookupsDiff_24 = (mercury__table_statistics__LookupsA_17 - mercury__table_statistics__LookupsB_21);
        mercury__table_statistics__LookupsIsDuplDiff_25 = (mercury__table_statistics__LookupsIsDuplA_18 - mercury__table_statistics__LookupsIsDuplB_22);
        {
          mercury__table_statistics__succeeded = mercury__table_statistics__table_step_stats_detail_diff_3_p_0(mercury__table_statistics__DetailsA_19, mercury__table_statistics__DetailsB_23, &mercury__table_statistics__DetailsDiffPrime_26);
        }
        if (mercury__table_statistics__succeeded)
          mercury__table_statistics__DetailsDiff_27 = mercury__table_statistics__DetailsDiffPrime_26;
        else
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "table_statistics", (MR_String) "function \140table_statistics.table_step_stats_diff\'/2", (MR_String) "mismatches in details");
          }
        }
        {
          mercury__table_statistics__StepDiff_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__table_statistics__StepDiff_14, 0) = ((MR_Box) (mercury__table_statistics__VarNameA_16));
          MR_hl_field(MR_mktag(0), mercury__table_statistics__StepDiff_14, 1) = ((MR_Box) (mercury__table_statistics__LookupsDiff_24));
          MR_hl_field(MR_mktag(0), mercury__table_statistics__StepDiff_14, 2) = ((MR_Box) (mercury__table_statistics__LookupsIsDuplDiff_25));
          MR_hl_field(MR_mktag(0), mercury__table_statistics__StepDiff_14, 3) = ((MR_Box) (mercury__table_statistics__DetailsDiff_27));
        }
        {
          mercury__table_statistics__StepDiffs_15 = mercury__table_statistics__table_step_stats_diff_2_f_0(mercury__table_statistics__Var_36, mercury__table_statistics__StepsB_13);
        }
        {
          mercury__table_statistics__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__table_statistics__HeadVar__3_3, 0) = ((MR_Box) (mercury__table_statistics__StepDiff_14));
          MR_hl_field(MR_mktag(1), mercury__table_statistics__HeadVar__3_3, 1) = ((MR_Box) (mercury__table_statistics__StepDiffs_15));
        }
      }
    }
    return mercury__table_statistics__HeadVar__3_3;
  }
}

static MR_bool MR_CALL 
mercury__table_statistics__table_step_stats_detail_diff_3_p_0(
  MR_Word mercury__table_statistics__DetailsA_4,
  MR_Word mercury__table_statistics__DetailsB_5,
  MR_Word * mercury__table_statistics__DetailsDiff_6)
{
  {
    MR_bool mercury__table_statistics__succeeded;

    switch (MR_tag((MR_Word) mercury__table_statistics__DetailsA_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__table_statistics__succeeded = (mercury__table_statistics__DetailsB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          if (mercury__table_statistics__succeeded)
          {
            *mercury__table_statistics__DetailsDiff_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            mercury__table_statistics__succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer mercury__table_statistics__StartAllocsA_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__table_statistics__DetailsA_4, (MR_Integer) 0)));
          MR_Integer mercury__table_statistics__StartBytesA_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__table_statistics__DetailsA_4, (MR_Integer) 1)));
          MR_Integer mercury__table_statistics__StartAllocsB_9;
          MR_Integer mercury__table_statistics__StartBytesB_10;
          MR_Integer mercury__table_statistics__Var_82;
          MR_Integer mercury__table_statistics__Var_83;

          mercury__table_statistics__succeeded = ((MR_tag((MR_Word) mercury__table_statistics__DetailsB_5)) == (MR_mktag((MR_Integer) 1)));
          if (mercury__table_statistics__succeeded)
          {
            mercury__table_statistics__StartAllocsB_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__table_statistics__DetailsB_5, (MR_Integer) 0)));
            mercury__table_statistics__StartBytesB_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__table_statistics__DetailsB_5, (MR_Integer) 1)));
            mercury__table_statistics__Var_82 = (mercury__table_statistics__StartAllocsA_7 - mercury__table_statistics__StartAllocsB_9);
            mercury__table_statistics__Var_83 = (mercury__table_statistics__StartBytesA_8 - mercury__table_statistics__StartBytesB_10);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *mercury__table_statistics__DetailsDiff_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__table_statistics__Var_82));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__table_statistics__Var_83));
            }
            mercury__table_statistics__succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer mercury__table_statistics__EnumNodeAllocsA_11 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__table_statistics__DetailsA_4, (MR_Integer) 0)));
          MR_Integer mercury__table_statistics__EnumNodeBytesA_12 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__table_statistics__DetailsA_4, (MR_Integer) 1)));
          MR_Integer mercury__table_statistics__EnumNodeAllocsB_13;
          MR_Integer mercury__table_statistics__EnumNodeBytesB_14;
          MR_Integer mercury__table_statistics__Var_80;
          MR_Integer mercury__table_statistics__Var_81;

          mercury__table_statistics__succeeded = ((MR_tag((MR_Word) mercury__table_statistics__DetailsB_5)) == (MR_mktag((MR_Integer) 2)));
          if (mercury__table_statistics__succeeded)
          {
            mercury__table_statistics__EnumNodeAllocsB_13 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__table_statistics__DetailsB_5, (MR_Integer) 0)));
            mercury__table_statistics__EnumNodeBytesB_14 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__table_statistics__DetailsB_5, (MR_Integer) 1)));
            mercury__table_statistics__Var_80 = (mercury__table_statistics__EnumNodeAllocsA_11 - mercury__table_statistics__EnumNodeAllocsB_13);
            mercury__table_statistics__Var_81 = (mercury__table_statistics__EnumNodeBytesA_12 - mercury__table_statistics__EnumNodeBytesB_14);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *mercury__table_statistics__DetailsDiff_6 = base;
              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__table_statistics__Var_80));
              MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mercury__table_statistics__Var_81));
            }
            mercury__table_statistics__succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsA_4, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer mercury__table_statistics__HashTableAllocsA_15 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsA_4, (MR_Integer) 1)));
              MR_Integer mercury__table_statistics__HashTableBytesA_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsA_4, (MR_Integer) 2)));
              MR_Integer mercury__table_statistics__HashLinkChunkAllocsA_17 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsA_4, (MR_Integer) 3)));
              MR_Integer mercury__table_statistics__HashLinkChunkBytesA_18 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsA_4, (MR_Integer) 4)));
              MR_Integer mercury__table_statistics__HashKeyComparesNotDuplA_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsA_4, (MR_Integer) 5)));
              MR_Integer mercury__table_statistics__HashKeyComparesIsDuplA_20 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsA_4, (MR_Integer) 6)));
              MR_Integer mercury__table_statistics__HashResizesA_21 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsA_4, (MR_Integer) 7)));
              MR_Integer mercury__table_statistics__HashResizeOldEntriesA_22 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsA_4, (MR_Integer) 8)));
              MR_Integer mercury__table_statistics__HashResizeNewEntriesA_23 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsA_4, (MR_Integer) 9)));
              MR_Integer mercury__table_statistics__HashTableAllocsB_24;
              MR_Integer mercury__table_statistics__HashTableBytesB_25;
              MR_Integer mercury__table_statistics__HashLinkChunkAllocsB_26;
              MR_Integer mercury__table_statistics__HashLinkChunkBytesB_27;
              MR_Integer mercury__table_statistics__HashKeyComparesNotDuplB_28;
              MR_Integer mercury__table_statistics__HashKeyComparesIsDuplB_29;
              MR_Integer mercury__table_statistics__HashResizesB_30;
              MR_Integer mercury__table_statistics__HashResizeOldEntriesB_31;
              MR_Integer mercury__table_statistics__HashResizeNewEntriesB_32;
              MR_Integer mercury__table_statistics__Var_71;
              MR_Integer mercury__table_statistics__Var_72;
              MR_Integer mercury__table_statistics__Var_73;
              MR_Integer mercury__table_statistics__Var_74;
              MR_Integer mercury__table_statistics__Var_75;
              MR_Integer mercury__table_statistics__Var_76;
              MR_Integer mercury__table_statistics__Var_77;
              MR_Integer mercury__table_statistics__Var_78;
              MR_Integer mercury__table_statistics__Var_79;

              mercury__table_statistics__succeeded = ((((MR_tag((MR_Word) mercury__table_statistics__DetailsB_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsB_5, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (mercury__table_statistics__succeeded)
              {
                mercury__table_statistics__HashTableAllocsB_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsB_5, (MR_Integer) 1)));
                mercury__table_statistics__HashTableBytesB_25 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsB_5, (MR_Integer) 2)));
                mercury__table_statistics__HashLinkChunkAllocsB_26 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsB_5, (MR_Integer) 3)));
                mercury__table_statistics__HashLinkChunkBytesB_27 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsB_5, (MR_Integer) 4)));
                mercury__table_statistics__HashKeyComparesNotDuplB_28 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsB_5, (MR_Integer) 5)));
                mercury__table_statistics__HashKeyComparesIsDuplB_29 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsB_5, (MR_Integer) 6)));
                mercury__table_statistics__HashResizesB_30 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsB_5, (MR_Integer) 7)));
                mercury__table_statistics__HashResizeOldEntriesB_31 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsB_5, (MR_Integer) 8)));
                mercury__table_statistics__HashResizeNewEntriesB_32 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsB_5, (MR_Integer) 9)));
                mercury__table_statistics__Var_71 = (mercury__table_statistics__HashTableAllocsA_15 - mercury__table_statistics__HashTableAllocsB_24);
                mercury__table_statistics__Var_72 = (mercury__table_statistics__HashTableBytesA_16 - mercury__table_statistics__HashTableBytesB_25);
                mercury__table_statistics__Var_73 = (mercury__table_statistics__HashLinkChunkAllocsA_17 - mercury__table_statistics__HashLinkChunkAllocsB_26);
                mercury__table_statistics__Var_74 = (mercury__table_statistics__HashLinkChunkBytesA_18 - mercury__table_statistics__HashLinkChunkBytesB_27);
                mercury__table_statistics__Var_75 = (mercury__table_statistics__HashKeyComparesNotDuplA_19 - mercury__table_statistics__HashKeyComparesNotDuplB_28);
                mercury__table_statistics__Var_76 = (mercury__table_statistics__HashKeyComparesIsDuplA_20 - mercury__table_statistics__HashKeyComparesIsDuplB_29);
                mercury__table_statistics__Var_77 = (mercury__table_statistics__HashResizesA_21 - mercury__table_statistics__HashResizesB_30);
                mercury__table_statistics__Var_78 = (mercury__table_statistics__HashResizeOldEntriesA_22 - mercury__table_statistics__HashResizeOldEntriesB_31);
                mercury__table_statistics__Var_79 = (mercury__table_statistics__HashResizeNewEntriesA_23 - mercury__table_statistics__HashResizeNewEntriesB_32);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL));
                  *mercury__table_statistics__DetailsDiff_6 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mercury__table_statistics__Var_71));
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (mercury__table_statistics__Var_72));
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (mercury__table_statistics__Var_73));
                  MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (mercury__table_statistics__Var_74));
                  MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (mercury__table_statistics__Var_75));
                  MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (mercury__table_statistics__Var_76));
                  MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (mercury__table_statistics__Var_77));
                  MR_hl_field(MR_mktag(3), base, 8) = ((MR_Box) (mercury__table_statistics__Var_78));
                  MR_hl_field(MR_mktag(3), base, 9) = ((MR_Box) (mercury__table_statistics__Var_79));
                }
                mercury__table_statistics__succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer mercury__table_statistics__DuNodeAllocsA_33 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsA_4, (MR_Integer) 1)));
              MR_Integer mercury__table_statistics__DuNodeBytesA_34 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsA_4, (MR_Integer) 2)));
              MR_Integer mercury__table_statistics__DuArgLookupsA_35 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsA_4, (MR_Integer) 3)));
              MR_Integer mercury__table_statistics__DuExistLookupsA_36 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsA_4, (MR_Integer) 4)));
              MR_Integer mercury__table_statistics__DuNodeAllocsB_37;
              MR_Integer mercury__table_statistics__DuNodeBytesB_38;
              MR_Integer mercury__table_statistics__DuArgLookupsB_39;
              MR_Integer mercury__table_statistics__DuExistLookupsB_40;
              MR_Integer mercury__table_statistics__Var_56;
              MR_Integer mercury__table_statistics__Var_57;
              MR_Integer mercury__table_statistics__Var_58;
              MR_Integer mercury__table_statistics__Var_59;
              MR_Integer mercury__table_statistics__Var_60;
              MR_Integer mercury__table_statistics__Var_61;
              MR_Integer mercury__table_statistics__Var_62;
              MR_Integer mercury__table_statistics__Var_63;
              MR_Integer mercury__table_statistics__Var_64;
              MR_Integer mercury__table_statistics__Var_65;
              MR_Integer mercury__table_statistics__Var_66;
              MR_Integer mercury__table_statistics__Var_67;
              MR_Integer mercury__table_statistics__Var_68;
              MR_Integer mercury__table_statistics__Var_69;
              MR_Integer mercury__table_statistics__Var_70;
              MR_Integer mercury__table_statistics__EnumNodeAllocsA_84 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsA_4, (MR_Integer) 5)));
              MR_Integer mercury__table_statistics__EnumNodeBytesA_85 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsA_4, (MR_Integer) 6)));
              MR_Integer mercury__table_statistics__EnumNodeAllocsB_86;
              MR_Integer mercury__table_statistics__EnumNodeBytesB_87;
              MR_Integer mercury__table_statistics__HashTableAllocsA_88 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsA_4, (MR_Integer) 7)));
              MR_Integer mercury__table_statistics__HashTableBytesA_89 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsA_4, (MR_Integer) 8)));
              MR_Integer mercury__table_statistics__HashLinkChunkAllocsA_90 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsA_4, (MR_Integer) 9)));
              MR_Integer mercury__table_statistics__HashLinkChunkBytesA_91 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsA_4, (MR_Integer) 10)));
              MR_Integer mercury__table_statistics__HashKeyComparesNotDuplA_92 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsA_4, (MR_Integer) 11)));
              MR_Integer mercury__table_statistics__HashKeyComparesIsDuplA_93 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsA_4, (MR_Integer) 12)));
              MR_Integer mercury__table_statistics__HashResizesA_94 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsA_4, (MR_Integer) 13)));
              MR_Integer mercury__table_statistics__HashResizeOldEntriesA_95 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsA_4, (MR_Integer) 14)));
              MR_Integer mercury__table_statistics__HashResizeNewEntriesA_96 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsA_4, (MR_Integer) 15)));
              MR_Integer mercury__table_statistics__HashTableAllocsB_97;
              MR_Integer mercury__table_statistics__HashTableBytesB_98;
              MR_Integer mercury__table_statistics__HashLinkChunkAllocsB_99;
              MR_Integer mercury__table_statistics__HashLinkChunkBytesB_100;
              MR_Integer mercury__table_statistics__HashKeyComparesNotDuplB_101;
              MR_Integer mercury__table_statistics__HashKeyComparesIsDuplB_102;
              MR_Integer mercury__table_statistics__HashResizesB_103;
              MR_Integer mercury__table_statistics__HashResizeOldEntriesB_104;
              MR_Integer mercury__table_statistics__HashResizeNewEntriesB_105;

              mercury__table_statistics__succeeded = ((((MR_tag((MR_Word) mercury__table_statistics__DetailsB_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsB_5, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (mercury__table_statistics__succeeded)
              {
                mercury__table_statistics__DuNodeAllocsB_37 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsB_5, (MR_Integer) 1)));
                mercury__table_statistics__DuNodeBytesB_38 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsB_5, (MR_Integer) 2)));
                mercury__table_statistics__DuArgLookupsB_39 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsB_5, (MR_Integer) 3)));
                mercury__table_statistics__DuExistLookupsB_40 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsB_5, (MR_Integer) 4)));
                mercury__table_statistics__EnumNodeAllocsB_86 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsB_5, (MR_Integer) 5)));
                mercury__table_statistics__EnumNodeBytesB_87 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsB_5, (MR_Integer) 6)));
                mercury__table_statistics__HashTableAllocsB_97 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsB_5, (MR_Integer) 7)));
                mercury__table_statistics__HashTableBytesB_98 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsB_5, (MR_Integer) 8)));
                mercury__table_statistics__HashLinkChunkAllocsB_99 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsB_5, (MR_Integer) 9)));
                mercury__table_statistics__HashLinkChunkBytesB_100 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsB_5, (MR_Integer) 10)));
                mercury__table_statistics__HashKeyComparesNotDuplB_101 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsB_5, (MR_Integer) 11)));
                mercury__table_statistics__HashKeyComparesIsDuplB_102 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsB_5, (MR_Integer) 12)));
                mercury__table_statistics__HashResizesB_103 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsB_5, (MR_Integer) 13)));
                mercury__table_statistics__HashResizeOldEntriesB_104 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsB_5, (MR_Integer) 14)));
                mercury__table_statistics__HashResizeNewEntriesB_105 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsB_5, (MR_Integer) 15)));
                mercury__table_statistics__Var_56 = (mercury__table_statistics__DuNodeAllocsA_33 - mercury__table_statistics__DuNodeAllocsB_37);
                mercury__table_statistics__Var_57 = (mercury__table_statistics__DuNodeBytesA_34 - mercury__table_statistics__DuNodeBytesB_38);
                mercury__table_statistics__Var_58 = (mercury__table_statistics__DuArgLookupsA_35 - mercury__table_statistics__DuArgLookupsB_39);
                mercury__table_statistics__Var_59 = (mercury__table_statistics__DuExistLookupsA_36 - mercury__table_statistics__DuExistLookupsB_40);
                mercury__table_statistics__Var_60 = (mercury__table_statistics__EnumNodeAllocsA_84 - mercury__table_statistics__EnumNodeAllocsB_86);
                mercury__table_statistics__Var_61 = (mercury__table_statistics__EnumNodeBytesA_85 - mercury__table_statistics__EnumNodeBytesB_87);
                mercury__table_statistics__Var_62 = (mercury__table_statistics__HashTableAllocsA_88 - mercury__table_statistics__HashTableAllocsB_97);
                mercury__table_statistics__Var_63 = (mercury__table_statistics__HashTableBytesA_89 - mercury__table_statistics__HashTableBytesB_98);
                mercury__table_statistics__Var_64 = (mercury__table_statistics__HashLinkChunkAllocsA_90 - mercury__table_statistics__HashLinkChunkAllocsB_99);
                mercury__table_statistics__Var_65 = (mercury__table_statistics__HashLinkChunkBytesA_91 - mercury__table_statistics__HashLinkChunkBytesB_100);
                mercury__table_statistics__Var_66 = (mercury__table_statistics__HashKeyComparesNotDuplA_92 - mercury__table_statistics__HashKeyComparesNotDuplB_101);
                mercury__table_statistics__Var_67 = (mercury__table_statistics__HashKeyComparesIsDuplA_93 - mercury__table_statistics__HashKeyComparesIsDuplB_102);
                mercury__table_statistics__Var_68 = (mercury__table_statistics__HashResizesA_94 - mercury__table_statistics__HashResizesB_103);
                mercury__table_statistics__Var_69 = (mercury__table_statistics__HashResizeOldEntriesA_95 - mercury__table_statistics__HashResizeOldEntriesB_104);
                mercury__table_statistics__Var_70 = (mercury__table_statistics__HashResizeNewEntriesA_96 - mercury__table_statistics__HashResizeNewEntriesB_105);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL));
                  *mercury__table_statistics__DetailsDiff_6 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mercury__table_statistics__Var_56));
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (mercury__table_statistics__Var_57));
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (mercury__table_statistics__Var_58));
                  MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (mercury__table_statistics__Var_59));
                  MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (mercury__table_statistics__Var_60));
                  MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (mercury__table_statistics__Var_61));
                  MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (mercury__table_statistics__Var_62));
                  MR_hl_field(MR_mktag(3), base, 8) = ((MR_Box) (mercury__table_statistics__Var_63));
                  MR_hl_field(MR_mktag(3), base, 9) = ((MR_Box) (mercury__table_statistics__Var_64));
                  MR_hl_field(MR_mktag(3), base, 10) = ((MR_Box) (mercury__table_statistics__Var_65));
                  MR_hl_field(MR_mktag(3), base, 11) = ((MR_Box) (mercury__table_statistics__Var_66));
                  MR_hl_field(MR_mktag(3), base, 12) = ((MR_Box) (mercury__table_statistics__Var_67));
                  MR_hl_field(MR_mktag(3), base, 13) = ((MR_Box) (mercury__table_statistics__Var_68));
                  MR_hl_field(MR_mktag(3), base, 14) = ((MR_Box) (mercury__table_statistics__Var_69));
                  MR_hl_field(MR_mktag(3), base, 15) = ((MR_Box) (mercury__table_statistics__Var_70));
                }
                mercury__table_statistics__succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer mercury__table_statistics__Var_41;
              MR_Integer mercury__table_statistics__Var_42;
              MR_Integer mercury__table_statistics__Var_43;
              MR_Integer mercury__table_statistics__Var_44;
              MR_Integer mercury__table_statistics__Var_45;
              MR_Integer mercury__table_statistics__Var_46;
              MR_Integer mercury__table_statistics__Var_47;
              MR_Integer mercury__table_statistics__Var_48;
              MR_Integer mercury__table_statistics__Var_49;
              MR_Integer mercury__table_statistics__Var_50;
              MR_Integer mercury__table_statistics__Var_51;
              MR_Integer mercury__table_statistics__Var_52;
              MR_Integer mercury__table_statistics__Var_53;
              MR_Integer mercury__table_statistics__Var_54;
              MR_Integer mercury__table_statistics__Var_55;
              MR_Integer mercury__table_statistics__EnumNodeAllocsA_106 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsA_4, (MR_Integer) 5)));
              MR_Integer mercury__table_statistics__EnumNodeBytesA_107 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsA_4, (MR_Integer) 6)));
              MR_Integer mercury__table_statistics__EnumNodeAllocsB_108;
              MR_Integer mercury__table_statistics__EnumNodeBytesB_109;
              MR_Integer mercury__table_statistics__HashTableAllocsA_110 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsA_4, (MR_Integer) 7)));
              MR_Integer mercury__table_statistics__HashTableBytesA_111 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsA_4, (MR_Integer) 8)));
              MR_Integer mercury__table_statistics__HashLinkChunkAllocsA_112 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsA_4, (MR_Integer) 9)));
              MR_Integer mercury__table_statistics__HashLinkChunkBytesA_113 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsA_4, (MR_Integer) 10)));
              MR_Integer mercury__table_statistics__HashKeyComparesNotDuplA_114 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsA_4, (MR_Integer) 11)));
              MR_Integer mercury__table_statistics__HashKeyComparesIsDuplA_115 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsA_4, (MR_Integer) 12)));
              MR_Integer mercury__table_statistics__HashResizesA_116 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsA_4, (MR_Integer) 13)));
              MR_Integer mercury__table_statistics__HashResizeOldEntriesA_117 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsA_4, (MR_Integer) 14)));
              MR_Integer mercury__table_statistics__HashResizeNewEntriesA_118 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsA_4, (MR_Integer) 15)));
              MR_Integer mercury__table_statistics__HashTableAllocsB_119;
              MR_Integer mercury__table_statistics__HashTableBytesB_120;
              MR_Integer mercury__table_statistics__HashLinkChunkAllocsB_121;
              MR_Integer mercury__table_statistics__HashLinkChunkBytesB_122;
              MR_Integer mercury__table_statistics__HashKeyComparesNotDuplB_123;
              MR_Integer mercury__table_statistics__HashKeyComparesIsDuplB_124;
              MR_Integer mercury__table_statistics__HashResizesB_125;
              MR_Integer mercury__table_statistics__HashResizeOldEntriesB_126;
              MR_Integer mercury__table_statistics__HashResizeNewEntriesB_127;
              MR_Integer mercury__table_statistics__DuNodeAllocsA_128 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsA_4, (MR_Integer) 1)));
              MR_Integer mercury__table_statistics__DuNodeBytesA_129 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsA_4, (MR_Integer) 2)));
              MR_Integer mercury__table_statistics__DuArgLookupsA_130 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsA_4, (MR_Integer) 3)));
              MR_Integer mercury__table_statistics__DuExistLookupsA_131 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsA_4, (MR_Integer) 4)));
              MR_Integer mercury__table_statistics__DuNodeAllocsB_132;
              MR_Integer mercury__table_statistics__DuNodeBytesB_133;
              MR_Integer mercury__table_statistics__DuArgLookupsB_134;
              MR_Integer mercury__table_statistics__DuExistLookupsB_135;

              mercury__table_statistics__succeeded = ((((MR_tag((MR_Word) mercury__table_statistics__DetailsB_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsB_5, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if (mercury__table_statistics__succeeded)
              {
                mercury__table_statistics__DuNodeAllocsB_132 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsB_5, (MR_Integer) 1)));
                mercury__table_statistics__DuNodeBytesB_133 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsB_5, (MR_Integer) 2)));
                mercury__table_statistics__DuArgLookupsB_134 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsB_5, (MR_Integer) 3)));
                mercury__table_statistics__DuExistLookupsB_135 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsB_5, (MR_Integer) 4)));
                mercury__table_statistics__EnumNodeAllocsB_108 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsB_5, (MR_Integer) 5)));
                mercury__table_statistics__EnumNodeBytesB_109 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsB_5, (MR_Integer) 6)));
                mercury__table_statistics__HashTableAllocsB_119 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsB_5, (MR_Integer) 7)));
                mercury__table_statistics__HashTableBytesB_120 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsB_5, (MR_Integer) 8)));
                mercury__table_statistics__HashLinkChunkAllocsB_121 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsB_5, (MR_Integer) 9)));
                mercury__table_statistics__HashLinkChunkBytesB_122 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsB_5, (MR_Integer) 10)));
                mercury__table_statistics__HashKeyComparesNotDuplB_123 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsB_5, (MR_Integer) 11)));
                mercury__table_statistics__HashKeyComparesIsDuplB_124 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsB_5, (MR_Integer) 12)));
                mercury__table_statistics__HashResizesB_125 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsB_5, (MR_Integer) 13)));
                mercury__table_statistics__HashResizeOldEntriesB_126 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsB_5, (MR_Integer) 14)));
                mercury__table_statistics__HashResizeNewEntriesB_127 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsB_5, (MR_Integer) 15)));
                mercury__table_statistics__Var_41 = (mercury__table_statistics__DuNodeAllocsA_128 - mercury__table_statistics__DuNodeAllocsB_132);
                mercury__table_statistics__Var_42 = (mercury__table_statistics__DuNodeBytesA_129 - mercury__table_statistics__DuNodeBytesB_133);
                mercury__table_statistics__Var_43 = (mercury__table_statistics__DuArgLookupsA_130 - mercury__table_statistics__DuArgLookupsB_134);
                mercury__table_statistics__Var_44 = (mercury__table_statistics__DuExistLookupsA_131 - mercury__table_statistics__DuExistLookupsB_135);
                mercury__table_statistics__Var_45 = (mercury__table_statistics__EnumNodeAllocsA_106 - mercury__table_statistics__EnumNodeAllocsB_108);
                mercury__table_statistics__Var_46 = (mercury__table_statistics__EnumNodeBytesA_107 - mercury__table_statistics__EnumNodeBytesB_109);
                mercury__table_statistics__Var_47 = (mercury__table_statistics__HashTableAllocsA_110 - mercury__table_statistics__HashTableAllocsB_119);
                mercury__table_statistics__Var_48 = (mercury__table_statistics__HashTableBytesA_111 - mercury__table_statistics__HashTableBytesB_120);
                mercury__table_statistics__Var_49 = (mercury__table_statistics__HashLinkChunkAllocsA_112 - mercury__table_statistics__HashLinkChunkAllocsB_121);
                mercury__table_statistics__Var_50 = (mercury__table_statistics__HashLinkChunkBytesA_113 - mercury__table_statistics__HashLinkChunkBytesB_122);
                mercury__table_statistics__Var_51 = (mercury__table_statistics__HashKeyComparesNotDuplA_114 - mercury__table_statistics__HashKeyComparesNotDuplB_123);
                mercury__table_statistics__Var_52 = (mercury__table_statistics__HashKeyComparesIsDuplA_115 - mercury__table_statistics__HashKeyComparesIsDuplB_124);
                mercury__table_statistics__Var_53 = (mercury__table_statistics__HashResizesA_116 - mercury__table_statistics__HashResizesB_125);
                mercury__table_statistics__Var_54 = (mercury__table_statistics__HashResizeOldEntriesA_117 - mercury__table_statistics__HashResizeOldEntriesB_126);
                mercury__table_statistics__Var_55 = (mercury__table_statistics__HashResizeNewEntriesA_118 - mercury__table_statistics__HashResizeNewEntriesB_127);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL));
                  *mercury__table_statistics__DetailsDiff_6 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mercury__table_statistics__Var_41));
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (mercury__table_statistics__Var_42));
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (mercury__table_statistics__Var_43));
                  MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (mercury__table_statistics__Var_44));
                  MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (mercury__table_statistics__Var_45));
                  MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (mercury__table_statistics__Var_46));
                  MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (mercury__table_statistics__Var_47));
                  MR_hl_field(MR_mktag(3), base, 8) = ((MR_Box) (mercury__table_statistics__Var_48));
                  MR_hl_field(MR_mktag(3), base, 9) = ((MR_Box) (mercury__table_statistics__Var_49));
                  MR_hl_field(MR_mktag(3), base, 10) = ((MR_Box) (mercury__table_statistics__Var_50));
                  MR_hl_field(MR_mktag(3), base, 11) = ((MR_Box) (mercury__table_statistics__Var_51));
                  MR_hl_field(MR_mktag(3), base, 12) = ((MR_Box) (mercury__table_statistics__Var_52));
                  MR_hl_field(MR_mktag(3), base, 13) = ((MR_Box) (mercury__table_statistics__Var_53));
                  MR_hl_field(MR_mktag(3), base, 14) = ((MR_Box) (mercury__table_statistics__Var_54));
                  MR_hl_field(MR_mktag(3), base, 15) = ((MR_Box) (mercury__table_statistics__Var_55));
                }
                mercury__table_statistics__succeeded = MR_TRUE;
              }
            }
            break;
        }
        break;
    }
    return mercury__table_statistics__succeeded;
  }
}

static MR_bool MR_CALL 
mercury__table_statistics____Unify____ml_table_stats_ptr_0_0_10001(
  MR_Box mercury__table_statistics__wrapper_arg_1,
  MR_Box mercury__table_statistics__wrapper_arg_2)
{
  {
    MR_bool mercury__table_statistics__succeeded;

    {
      mercury__table_statistics__succeeded = mercury__table_statistics____Unify____ml_table_stats_ptr_0_0(((MR_Box) mercury__table_statistics__wrapper_arg_1), ((MR_Box) mercury__table_statistics__wrapper_arg_2));
    }
    return mercury__table_statistics__succeeded;
  }
}

static void MR_CALL 
mercury__table_statistics____Compare____ml_table_stats_ptr_0_0_10001(
  MR_Box * mercury__table_statistics__wrapper_arg_1,
  MR_Box mercury__table_statistics__wrapper_arg_2,
  MR_Box mercury__table_statistics__wrapper_arg_3)
{
  {
    MR_Word mercury__table_statistics__conv0_HeadVar__1_1;

    {
      mercury__table_statistics____Compare____ml_table_stats_ptr_0_0(&mercury__table_statistics__conv0_HeadVar__1_1, ((MR_Box) mercury__table_statistics__wrapper_arg_2), ((MR_Box) mercury__table_statistics__wrapper_arg_3));
    }
    *mercury__table_statistics__wrapper_arg_1 = ((MR_Box) (mercury__table_statistics__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__table_statistics____Unify____ml_table_step_desc_ptr_0_0_10001(
  MR_Box mercury__table_statistics__wrapper_arg_1,
  MR_Box mercury__table_statistics__wrapper_arg_2)
{
  {
    MR_bool mercury__table_statistics__succeeded;

    {
      mercury__table_statistics__succeeded = mercury__table_statistics____Unify____ml_table_step_desc_ptr_0_0(((MR_Box) mercury__table_statistics__wrapper_arg_1), ((MR_Box) mercury__table_statistics__wrapper_arg_2));
    }
    return mercury__table_statistics__succeeded;
  }
}

static void MR_CALL 
mercury__table_statistics____Compare____ml_table_step_desc_ptr_0_0_10001(
  MR_Box * mercury__table_statistics__wrapper_arg_1,
  MR_Box mercury__table_statistics__wrapper_arg_2,
  MR_Box mercury__table_statistics__wrapper_arg_3)
{
  {
    MR_Word mercury__table_statistics__conv0_HeadVar__1_1;

    {
      mercury__table_statistics____Compare____ml_table_step_desc_ptr_0_0(&mercury__table_statistics__conv0_HeadVar__1_1, ((MR_Box) mercury__table_statistics__wrapper_arg_2), ((MR_Box) mercury__table_statistics__wrapper_arg_3));
    }
    *mercury__table_statistics__wrapper_arg_1 = ((MR_Box) (mercury__table_statistics__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__table_statistics____Unify____proc_table_statistics_0_0_10001(
  MR_Box mercury__table_statistics__wrapper_arg_1,
  MR_Box mercury__table_statistics__wrapper_arg_2)
{
  {
    MR_bool mercury__table_statistics__succeeded;

    {
      mercury__table_statistics__succeeded = mercury__table_statistics____Unify____proc_table_statistics_0_0(((MR_Word) mercury__table_statistics__wrapper_arg_1), ((MR_Word) mercury__table_statistics__wrapper_arg_2));
    }
    return mercury__table_statistics__succeeded;
  }
}

static void MR_CALL 
mercury__table_statistics____Compare____proc_table_statistics_0_0_10001(
  MR_Box * mercury__table_statistics__wrapper_arg_1,
  MR_Box mercury__table_statistics__wrapper_arg_2,
  MR_Box mercury__table_statistics__wrapper_arg_3)
{
  {
    MR_Word mercury__table_statistics__conv0_HeadVar__1_1;

    {
      mercury__table_statistics____Compare____proc_table_statistics_0_0(&mercury__table_statistics__conv0_HeadVar__1_1, ((MR_Word) mercury__table_statistics__wrapper_arg_2), ((MR_Word) mercury__table_statistics__wrapper_arg_3));
    }
    *mercury__table_statistics__wrapper_arg_1 = ((MR_Box) (mercury__table_statistics__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__table_statistics____Unify____table_stats_0_0_10001(
  MR_Box mercury__table_statistics__wrapper_arg_1,
  MR_Box mercury__table_statistics__wrapper_arg_2)
{
  {
    MR_bool mercury__table_statistics__succeeded;

    {
      mercury__table_statistics__succeeded = mercury__table_statistics____Unify____table_stats_0_0(((MR_Word) mercury__table_statistics__wrapper_arg_1), ((MR_Word) mercury__table_statistics__wrapper_arg_2));
    }
    return mercury__table_statistics__succeeded;
  }
}

static void MR_CALL 
mercury__table_statistics____Compare____table_stats_0_0_10001(
  MR_Box * mercury__table_statistics__wrapper_arg_1,
  MR_Box mercury__table_statistics__wrapper_arg_2,
  MR_Box mercury__table_statistics__wrapper_arg_3)
{
  {
    MR_Word mercury__table_statistics__conv0_HeadVar__1_1;

    {
      mercury__table_statistics____Compare____table_stats_0_0(&mercury__table_statistics__conv0_HeadVar__1_1, ((MR_Word) mercury__table_statistics__wrapper_arg_2), ((MR_Word) mercury__table_statistics__wrapper_arg_3));
    }
    *mercury__table_statistics__wrapper_arg_1 = ((MR_Box) (mercury__table_statistics__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__table_statistics____Unify____table_stats_curr_prev_0_0_10001(
  MR_Box mercury__table_statistics__wrapper_arg_1,
  MR_Box mercury__table_statistics__wrapper_arg_2)
{
  {
    MR_bool mercury__table_statistics__succeeded;

    {
      mercury__table_statistics__succeeded = mercury__table_statistics____Unify____table_stats_curr_prev_0_0(((MR_Word) mercury__table_statistics__wrapper_arg_1), ((MR_Word) mercury__table_statistics__wrapper_arg_2));
    }
    return mercury__table_statistics__succeeded;
  }
}

static void MR_CALL 
mercury__table_statistics____Compare____table_stats_curr_prev_0_0_10001(
  MR_Box * mercury__table_statistics__wrapper_arg_1,
  MR_Box mercury__table_statistics__wrapper_arg_2,
  MR_Box mercury__table_statistics__wrapper_arg_3)
{
  {
    MR_Word mercury__table_statistics__conv0_HeadVar__1_1;

    {
      mercury__table_statistics____Compare____table_stats_curr_prev_0_0(&mercury__table_statistics__conv0_HeadVar__1_1, ((MR_Word) mercury__table_statistics__wrapper_arg_2), ((MR_Word) mercury__table_statistics__wrapper_arg_3));
    }
    *mercury__table_statistics__wrapper_arg_1 = ((MR_Box) (mercury__table_statistics__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__table_statistics____Unify____table_step_kind_0_0_10001(
  MR_Box mercury__table_statistics__wrapper_arg_1,
  MR_Box mercury__table_statistics__wrapper_arg_2)
{
  {
    MR_bool mercury__table_statistics__succeeded;

    {
      mercury__table_statistics__succeeded = mercury__table_statistics____Unify____table_step_kind_0_0(((MR_Word) mercury__table_statistics__wrapper_arg_1), ((MR_Word) mercury__table_statistics__wrapper_arg_2));
    }
    return mercury__table_statistics__succeeded;
  }
}

static void MR_CALL 
mercury__table_statistics____Compare____table_step_kind_0_0_10001(
  MR_Box * mercury__table_statistics__wrapper_arg_1,
  MR_Box mercury__table_statistics__wrapper_arg_2,
  MR_Box mercury__table_statistics__wrapper_arg_3)
{
  {
    MR_Word mercury__table_statistics__conv0_HeadVar__1_1;

    {
      mercury__table_statistics____Compare____table_step_kind_0_0(&mercury__table_statistics__conv0_HeadVar__1_1, ((MR_Word) mercury__table_statistics__wrapper_arg_2), ((MR_Word) mercury__table_statistics__wrapper_arg_3));
    }
    *mercury__table_statistics__wrapper_arg_1 = ((MR_Box) (mercury__table_statistics__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__table_statistics____Unify____table_step_stat_details_0_0_10001(
  MR_Box mercury__table_statistics__wrapper_arg_1,
  MR_Box mercury__table_statistics__wrapper_arg_2)
{
  {
    MR_bool mercury__table_statistics__succeeded;

    {
      mercury__table_statistics__succeeded = mercury__table_statistics____Unify____table_step_stat_details_0_0(((MR_Word) mercury__table_statistics__wrapper_arg_1), ((MR_Word) mercury__table_statistics__wrapper_arg_2));
    }
    return mercury__table_statistics__succeeded;
  }
}

static void MR_CALL 
mercury__table_statistics____Compare____table_step_stat_details_0_0_10001(
  MR_Box * mercury__table_statistics__wrapper_arg_1,
  MR_Box mercury__table_statistics__wrapper_arg_2,
  MR_Box mercury__table_statistics__wrapper_arg_3)
{
  {
    MR_Word mercury__table_statistics__conv0_HeadVar__1_1;

    {
      mercury__table_statistics____Compare____table_step_stat_details_0_0(&mercury__table_statistics__conv0_HeadVar__1_1, ((MR_Word) mercury__table_statistics__wrapper_arg_2), ((MR_Word) mercury__table_statistics__wrapper_arg_3));
    }
    *mercury__table_statistics__wrapper_arg_1 = ((MR_Box) (mercury__table_statistics__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__table_statistics____Unify____table_step_stats_0_0_10001(
  MR_Box mercury__table_statistics__wrapper_arg_1,
  MR_Box mercury__table_statistics__wrapper_arg_2)
{
  {
    MR_bool mercury__table_statistics__succeeded;

    {
      mercury__table_statistics__succeeded = mercury__table_statistics____Unify____table_step_stats_0_0(((MR_Word) mercury__table_statistics__wrapper_arg_1), ((MR_Word) mercury__table_statistics__wrapper_arg_2));
    }
    return mercury__table_statistics__succeeded;
  }
}

static void MR_CALL 
mercury__table_statistics____Compare____table_step_stats_0_0_10001(
  MR_Box * mercury__table_statistics__wrapper_arg_1,
  MR_Box mercury__table_statistics__wrapper_arg_2,
  MR_Box mercury__table_statistics__wrapper_arg_3)
{
  {
    MR_Word mercury__table_statistics__conv0_HeadVar__1_1;

    {
      mercury__table_statistics____Compare____table_step_stats_0_0(&mercury__table_statistics__conv0_HeadVar__1_1, ((MR_Word) mercury__table_statistics__wrapper_arg_2), ((MR_Word) mercury__table_statistics__wrapper_arg_3));
    }
    *mercury__table_statistics__wrapper_arg_1 = ((MR_Box) (mercury__table_statistics__conv0_HeadVar__1_1));
  }
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

/* :- end_module table_statistics. */
