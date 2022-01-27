/*
** Automatically generated from `table_statistics.m'
** by the Mercury compiler,
** version rotd-2016-05-13
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

static MR_Integer MR_CALL 
mercury__table_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static void MR_CALL 
mercury__table_statistics__foldl2__ho2_6_p_in__list_0(
  MR_Word mercury__table_statistics__HeadVar__2_2,
  MR_Integer mercury__table_statistics__HeadVar__3_3,
  MR_Integer * mercury__table_statistics__HeadVar__4_4);

static MR_String MR_CALL 
mercury__table_statistics__percentage_str_2_f_0(
  MR_Integer mercury__table_statistics__A_4,
  MR_Integer mercury__table_statistics__B_5);

static void MR_CALL 
mercury__table_statistics__write_table_step_stats_4_p_0(
  MR_Word mercury__table_statistics__Step_5,
  MR_Integer mercury__table_statistics__StepNum_6);

static void MR_CALL 
mercury__table_statistics__write_table_step_stats_du_6_p_0(
  MR_Integer mercury__table_statistics__DuNodeAllocs_7,
  MR_Integer mercury__table_statistics__DuNodeBytes_8,
  MR_Integer mercury__table_statistics__DuArgLookups_9,
  MR_Integer mercury__table_statistics__DuExistLookups_10);

static void MR_CALL 
mercury__table_statistics__write_table_step_stats_hash_11_p_0(
  MR_Integer mercury__table_statistics__HashTableAllocs_12,
  MR_Integer mercury__table_statistics__HashTableBytes_13,
  MR_Integer mercury__table_statistics__HashLinkChunkAllocs_14,
  MR_Integer mercury__table_statistics__HashLinkChunkBytes_15,
  MR_Integer mercury__table_statistics__HashKeyComparesNotDupl_16,
  MR_Integer mercury__table_statistics__HashKeyComparesIsDupl_17,
  MR_Integer mercury__table_statistics__HashResizes_18,
  MR_Integer mercury__table_statistics__HashResizeOldEntries_19,
  MR_Integer mercury__table_statistics__HashResizeNewEntries_20);

static void MR_CALL 
mercury__table_statistics__write_table_step_stats_enum_4_p_0(
  MR_Integer mercury__table_statistics__EnumNodeAllocs_5,
  MR_Integer mercury__table_statistics__EnumNodeBytes_6);

static void MR_CALL 
mercury__table_statistics__write_table_step_stats_start_4_p_0(
  MR_Integer mercury__table_statistics__StartAllocs_5,
  MR_Integer mercury__table_statistics__StartBytes_6);

static void MR_CALL 
mercury__table_statistics__write_table_step_stats_header_7_p_0(
  MR_String mercury__table_statistics__VarName_8,
  MR_Integer mercury__table_statistics__StepNum_9,
  MR_String mercury__table_statistics__KindStr_10,
  MR_Integer mercury__table_statistics__Lookups_11,
  MR_Integer mercury__table_statistics__LookupsIsDupl_12);

static MR_bool MR_CALL 
mercury__table_statistics__table_step_stats_detail_diff_3_p_0(
  MR_Word mercury__table_statistics__DetailsA_4,
  MR_Word mercury__table_statistics__DetailsB_5,
  MR_Word * mercury__table_statistics__DetailsDiff_6);

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
mercury__table_statistics__get_one_table_stats_step_loop_8_p_0(
  MR_Box mercury__table_statistics__StepDescsPtr_9,
  MR_Box mercury__table_statistics__StatsPtr_10,
  MR_Integer mercury__table_statistics__CurStep_11,
  MR_Integer mercury__table_statistics__NumSteps_12,
  MR_Word mercury__table_statistics__STATE_VARIABLE_StepStats_0_15,
  MR_Word * mercury__table_statistics__STATE_VARIABLE_StepStats_16);

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
    ((MR_Box) ((MR_Integer) 9))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 2))
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
#include "version_array.mh"

#line 158 "table_statistics.m"
void 
MR_get_tabling_stats(
  MR_ProcTableInfoPtr mercury__table_statistics__Info_5,
  MR_Word * mercury__table_statistics__Statistics_6)
#line 158 "table_statistics.m"
{
#line 158 "table_statistics.m"
	MR_Box mercury__table_statistics__boxed_Info_5;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ProcTableInfoPtr, mercury__table_statistics__Info_5, mercury__table_statistics__boxed_Info_5);
	mercury__table_statistics__get_tabling_stats_4_p_0(mercury__table_statistics__boxed_Info_5, (MR_Word *) mercury__table_statistics__Statistics_6);
}


const MR_TypeCtorInfo_Struct mercury__table_statistics__table_statistics__type_ctor_info_ml_table_stats_ptr_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_FOREIGN,
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
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_FOREIGN,
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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__table_statistics__table_statistics__field_types_proc_table_statistics_0_0,
  mercury__table_statistics__table_statistics__field_names_proc_table_statistics_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__table_statistics__table_statistics__du_stag_ordered_proc_table_statistics_0_0[1] = {
  &mercury__table_statistics__table_statistics__du_functor_desc_proc_table_statistics_0_0
};

static const MR_DuPtagLayout mercury__table_statistics__table_statistics__du_ptag_ordered_proc_table_statistics_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
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
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__table_statistics__table_statistics__field_types_table_stats_0_0,
  mercury__table_statistics__table_statistics__field_names_table_stats_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__table_statistics__table_statistics__du_stag_ordered_table_stats_0_0[1] = {
  &mercury__table_statistics__table_statistics__du_functor_desc_table_stats_0_0
};

static const MR_DuPtagLayout mercury__table_statistics__table_statistics__du_ptag_ordered_table_stats_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
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
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__table_statistics__table_statistics__field_types_table_stats_curr_prev_0_0,
  mercury__table_statistics__table_statistics__field_names_table_stats_curr_prev_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__table_statistics__table_statistics__du_stag_ordered_table_stats_curr_prev_0_0[1] = {
  &mercury__table_statistics__table_statistics__du_functor_desc_table_stats_curr_prev_0_0
};

static const MR_DuPtagLayout mercury__table_statistics__table_statistics__du_ptag_ordered_table_stats_curr_prev_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
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
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
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
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__table_statistics__table_statistics__field_types_table_step_stat_details_0_1,
  mercury__table_statistics__table_statistics__field_names_table_step_stat_details_0_1,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mercury__table_statistics__table_statistics__field_types_table_step_stat_details_0_2,
  mercury__table_statistics__table_statistics__field_names_table_step_stat_details_0_2,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 3,
  mercury__table_statistics__table_statistics__field_types_table_step_stat_details_0_3,
  mercury__table_statistics__table_statistics__field_names_table_step_stat_details_0_3,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__table_statistics__table_statistics__field_types_table_step_stat_details_0_4,
  mercury__table_statistics__table_statistics__field_names_table_step_stat_details_0_4,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 5,
  mercury__table_statistics__table_statistics__field_types_table_step_stat_details_0_5,
  mercury__table_statistics__table_statistics__field_names_table_step_stat_details_0_5,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mercury__table_statistics__table_statistics__du_stag_ordered_table_step_stat_details_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__table_statistics__table_statistics__du_stag_ordered_table_step_stat_details_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__table_statistics__table_statistics__du_stag_ordered_table_step_stat_details_0_2
  },
  {
    (MR_Integer) 3,
    mercury__private_builtin__MR_SECTAG_REMOTE,
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
  (MR_Integer) 16,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__table_statistics__table_statistics__field_types_table_step_stats_0_0,
  mercury__table_statistics__table_statistics__field_names_table_step_stats_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__table_statistics__table_statistics__du_stag_ordered_table_step_stats_0_0[1] = {
  &mercury__table_statistics__table_statistics__du_functor_desc_table_step_stats_0_0
};

static const MR_DuPtagLayout mercury__table_statistics__table_statistics__du_ptag_ordered_table_step_stats_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
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
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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

static MR_Integer MR_CALL 
mercury__table_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    MR_bool mercury__table_statistics__succeeded;

    return (MR_Integer) 1200;
  }
}

static void MR_CALL 
mercury__table_statistics__foldl2__ho2_6_p_in__list_0(
  MR_Word mercury__table_statistics__HeadVar__2_2,
  MR_Integer mercury__table_statistics__HeadVar__3_3,
  MR_Integer * mercury__table_statistics__HeadVar__4_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__table_statistics__succeeded;

        if ((mercury__table_statistics__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__table_statistics__HeadVar__4_4 = mercury__table_statistics__HeadVar__3_3;
        else
          {
            MR_Word mercury__table_statistics__V_15_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word mercury__table_statistics__V_16_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 1)));
            MR_Integer mercury__table_statistics__V_23_19;

            {
              mercury__table_statistics__write_table_step_stats_4_p_0(mercury__table_statistics__V_15_13, mercury__table_statistics__HeadVar__3_3);
            }
            mercury__table_statistics__V_23_19 = (mercury__table_statistics__HeadVar__3_3 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Word mercury__table_statistics__HeadVar__2__tmp_copy_2 = mercury__table_statistics__V_16_14;
              MR_Integer mercury__table_statistics__HeadVar__3__tmp_copy_3 = mercury__table_statistics__V_23_19;

              mercury__table_statistics__HeadVar__3_3 = mercury__table_statistics__HeadVar__3__tmp_copy_3;
              mercury__table_statistics__HeadVar__2_2 = mercury__table_statistics__HeadVar__2__tmp_copy_2;
            }
            continue;
          }
      }
      break;
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
        MR_String mercury__table_statistics__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer mercury__table_statistics__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer mercury__table_statistics__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word mercury__table_statistics__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 3)));
        MR_String mercury__table_statistics__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 0)));
        MR_Integer mercury__table_statistics__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 1)));
        MR_Integer mercury__table_statistics__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word mercury__table_statistics__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word mercury__table_statistics__V_12_12;
        MR_Integer mercury__table_statistics__V_7_24;

{
#define MR_PROC_LABEL mercury__table_statistics____Compare____table_step_stats_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__table_statistics__V_4_4 ;
	S2 =  mercury__table_statistics__V_8_8 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 mercury__table_statistics__V_7_24  = Res;
}
        mercury__table_statistics__succeeded = (mercury__table_statistics__V_7_24 < (MR_Integer) 0);
        if (mercury__table_statistics__succeeded)
          mercury__table_statistics__V_12_12 = (MR_Integer) 1;
        else
          {
            mercury__table_statistics__succeeded = (mercury__table_statistics__V_7_24 == (MR_Integer) 0);
            if (mercury__table_statistics__succeeded)
              mercury__table_statistics__V_12_12 = (MR_Integer) 0;
            else
              mercury__table_statistics__V_12_12 = (MR_Integer) 2;
          }
        mercury__table_statistics__succeeded = (mercury__table_statistics__V_12_12 == (MR_Integer) 0);
        mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
        if (mercury__table_statistics__succeeded)
          *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__V_12_12;
        else
          {
            MR_Word mercury__table_statistics__V_13_13;

            mercury__table_statistics__succeeded = (mercury__table_statistics__V_5_5 < mercury__table_statistics__V_9_9);
            if (mercury__table_statistics__succeeded)
              mercury__table_statistics__V_13_13 = (MR_Integer) 1;
            else
              {
                mercury__table_statistics__succeeded = (mercury__table_statistics__V_5_5 == mercury__table_statistics__V_9_9);
                if (mercury__table_statistics__succeeded)
                  mercury__table_statistics__V_13_13 = (MR_Integer) 0;
                else
                  mercury__table_statistics__V_13_13 = (MR_Integer) 2;
              }
            mercury__table_statistics__succeeded = (mercury__table_statistics__V_13_13 == (MR_Integer) 0);
            mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
            if (mercury__table_statistics__succeeded)
              *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__V_13_13;
            else
              {
                MR_Word mercury__table_statistics__V_14_14;

                mercury__table_statistics__succeeded = (mercury__table_statistics__V_6_6 < mercury__table_statistics__V_10_10);
                if (mercury__table_statistics__succeeded)
                  mercury__table_statistics__V_14_14 = (MR_Integer) 1;
                else
                  {
                    mercury__table_statistics__succeeded = (mercury__table_statistics__V_6_6 == mercury__table_statistics__V_10_10);
                    if (mercury__table_statistics__succeeded)
                      mercury__table_statistics__V_14_14 = (MR_Integer) 0;
                    else
                      mercury__table_statistics__V_14_14 = (MR_Integer) 2;
                  }
                mercury__table_statistics__succeeded = (mercury__table_statistics__V_14_14 == (MR_Integer) 0);
                mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
                if (mercury__table_statistics__succeeded)
                  *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__V_14_14;
                else
                  {
                    mercury__table_statistics____Compare____table_step_stat_details_0_0(mercury__table_statistics__HeadVar__1_1, mercury__table_statistics__V_7_7, mercury__table_statistics__V_11_11);
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
        MR_String mercury__table_statistics__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer mercury__table_statistics__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 1)));
        MR_Integer mercury__table_statistics__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word mercury__table_statistics__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 3)));
        MR_String mercury__table_statistics__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer mercury__table_statistics__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer mercury__table_statistics__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word mercury__table_statistics__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 3)));

        mercury__table_statistics__succeeded = (strcmp(mercury__table_statistics__V_3_3, mercury__table_statistics__V_7_7) == 0);
        if (mercury__table_statistics__succeeded)
          {
            mercury__table_statistics__succeeded = (mercury__table_statistics__V_4_4 == mercury__table_statistics__V_8_8);
            if (mercury__table_statistics__succeeded)
              {
                mercury__table_statistics__succeeded = (mercury__table_statistics__V_5_5 == mercury__table_statistics__V_9_9);
                if (mercury__table_statistics__succeeded)
                  {
                    mercury__table_statistics__succeeded = mercury__table_statistics____Unify____table_step_stat_details_0_0(mercury__table_statistics__V_6_6, mercury__table_statistics__V_10_10);
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
            MR_Integer mercury__table_statistics__V_644_644 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 1)));
            MR_Integer mercury__table_statistics__V_645_645 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mercury__table_statistics__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer mercury__table_statistics__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer mercury__table_statistics__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word mercury__table_statistics__V_53_53;

                  mercury__table_statistics__succeeded = (mercury__table_statistics__V_645_645 < mercury__table_statistics__V_51_51);
                  if (mercury__table_statistics__succeeded)
                    mercury__table_statistics__V_53_53 = (MR_Integer) 1;
                  else
                    {
                      mercury__table_statistics__succeeded = (mercury__table_statistics__V_645_645 == mercury__table_statistics__V_51_51);
                      if (mercury__table_statistics__succeeded)
                        mercury__table_statistics__V_53_53 = (MR_Integer) 0;
                      else
                        mercury__table_statistics__V_53_53 = (MR_Integer) 2;
                    }
                  mercury__table_statistics__succeeded = (mercury__table_statistics__V_53_53 == (MR_Integer) 0);
                  mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
                  if (mercury__table_statistics__succeeded)
                    *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__V_53_53;
                  else
                    {
                      mercury__table_statistics__succeeded = (mercury__table_statistics__V_644_644 < mercury__table_statistics__V_52_52);
                      if (mercury__table_statistics__succeeded)
                        *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 1;
                      else
                        {
                          mercury__table_statistics__succeeded = (mercury__table_statistics__V_644_644 == mercury__table_statistics__V_52_52);
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
            MR_Integer mercury__table_statistics__V_618_618 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 1)));
            MR_Integer mercury__table_statistics__V_619_619 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 0)));

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
                  MR_Integer mercury__table_statistics__V_111_111 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer mercury__table_statistics__V_112_112 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word mercury__table_statistics__V_113_113;

                  mercury__table_statistics__succeeded = (mercury__table_statistics__V_619_619 < mercury__table_statistics__V_111_111);
                  if (mercury__table_statistics__succeeded)
                    mercury__table_statistics__V_113_113 = (MR_Integer) 1;
                  else
                    {
                      mercury__table_statistics__succeeded = (mercury__table_statistics__V_619_619 == mercury__table_statistics__V_111_111);
                      if (mercury__table_statistics__succeeded)
                        mercury__table_statistics__V_113_113 = (MR_Integer) 0;
                      else
                        mercury__table_statistics__V_113_113 = (MR_Integer) 2;
                    }
                  mercury__table_statistics__succeeded = (mercury__table_statistics__V_113_113 == (MR_Integer) 0);
                  mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
                  if (mercury__table_statistics__succeeded)
                    *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__V_113_113;
                  else
                    {
                      mercury__table_statistics__succeeded = (mercury__table_statistics__V_618_618 < mercury__table_statistics__V_112_112);
                      if (mercury__table_statistics__succeeded)
                        *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 1;
                      else
                        {
                          mercury__table_statistics__succeeded = (mercury__table_statistics__V_618_618 == mercury__table_statistics__V_112_112);
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
                MR_Integer mercury__table_statistics__V_620_620 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 9)));
                MR_Integer mercury__table_statistics__V_621_621 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 8)));
                MR_Integer mercury__table_statistics__V_622_622 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 7)));
                MR_Integer mercury__table_statistics__V_623_623 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 6)));
                MR_Integer mercury__table_statistics__V_624_624 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 5)));
                MR_Integer mercury__table_statistics__V_625_625 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 4)));
                MR_Integer mercury__table_statistics__V_626_626 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 3)));
                MR_Integer mercury__table_statistics__V_627_627 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 2)));
                MR_Integer mercury__table_statistics__V_628_628 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 1)));

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
                          MR_Integer mercury__table_statistics__V_199_199 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 1)));
                          MR_Integer mercury__table_statistics__V_200_200 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 2)));
                          MR_Integer mercury__table_statistics__V_201_201 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 3)));
                          MR_Integer mercury__table_statistics__V_202_202 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 4)));
                          MR_Integer mercury__table_statistics__V_203_203 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 5)));
                          MR_Integer mercury__table_statistics__V_204_204 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 6)));
                          MR_Integer mercury__table_statistics__V_205_205 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 7)));
                          MR_Integer mercury__table_statistics__V_206_206 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 8)));
                          MR_Integer mercury__table_statistics__V_207_207 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 9)));
                          MR_Word mercury__table_statistics__V_208_208;

                          mercury__table_statistics__succeeded = (mercury__table_statistics__V_628_628 < mercury__table_statistics__V_199_199);
                          if (mercury__table_statistics__succeeded)
                            mercury__table_statistics__V_208_208 = (MR_Integer) 1;
                          else
                            {
                              mercury__table_statistics__succeeded = (mercury__table_statistics__V_628_628 == mercury__table_statistics__V_199_199);
                              if (mercury__table_statistics__succeeded)
                                mercury__table_statistics__V_208_208 = (MR_Integer) 0;
                              else
                                mercury__table_statistics__V_208_208 = (MR_Integer) 2;
                            }
                          mercury__table_statistics__succeeded = (mercury__table_statistics__V_208_208 == (MR_Integer) 0);
                          mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
                          if (mercury__table_statistics__succeeded)
                            *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__V_208_208;
                          else
                            {
                              MR_Word mercury__table_statistics__V_209_209;

                              mercury__table_statistics__succeeded = (mercury__table_statistics__V_627_627 < mercury__table_statistics__V_200_200);
                              if (mercury__table_statistics__succeeded)
                                mercury__table_statistics__V_209_209 = (MR_Integer) 1;
                              else
                                {
                                  mercury__table_statistics__succeeded = (mercury__table_statistics__V_627_627 == mercury__table_statistics__V_200_200);
                                  if (mercury__table_statistics__succeeded)
                                    mercury__table_statistics__V_209_209 = (MR_Integer) 0;
                                  else
                                    mercury__table_statistics__V_209_209 = (MR_Integer) 2;
                                }
                              mercury__table_statistics__succeeded = (mercury__table_statistics__V_209_209 == (MR_Integer) 0);
                              mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
                              if (mercury__table_statistics__succeeded)
                                *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__V_209_209;
                              else
                                {
                                  MR_Word mercury__table_statistics__V_210_210;

                                  mercury__table_statistics__succeeded = (mercury__table_statistics__V_626_626 < mercury__table_statistics__V_201_201);
                                  if (mercury__table_statistics__succeeded)
                                    mercury__table_statistics__V_210_210 = (MR_Integer) 1;
                                  else
                                    {
                                      mercury__table_statistics__succeeded = (mercury__table_statistics__V_626_626 == mercury__table_statistics__V_201_201);
                                      if (mercury__table_statistics__succeeded)
                                        mercury__table_statistics__V_210_210 = (MR_Integer) 0;
                                      else
                                        mercury__table_statistics__V_210_210 = (MR_Integer) 2;
                                    }
                                  mercury__table_statistics__succeeded = (mercury__table_statistics__V_210_210 == (MR_Integer) 0);
                                  mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
                                  if (mercury__table_statistics__succeeded)
                                    *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__V_210_210;
                                  else
                                    {
                                      MR_Word mercury__table_statistics__V_211_211;

                                      mercury__table_statistics__succeeded = (mercury__table_statistics__V_625_625 < mercury__table_statistics__V_202_202);
                                      if (mercury__table_statistics__succeeded)
                                        mercury__table_statistics__V_211_211 = (MR_Integer) 1;
                                      else
                                        {
                                          mercury__table_statistics__succeeded = (mercury__table_statistics__V_625_625 == mercury__table_statistics__V_202_202);
                                          if (mercury__table_statistics__succeeded)
                                            mercury__table_statistics__V_211_211 = (MR_Integer) 0;
                                          else
                                            mercury__table_statistics__V_211_211 = (MR_Integer) 2;
                                        }
                                      mercury__table_statistics__succeeded = (mercury__table_statistics__V_211_211 == (MR_Integer) 0);
                                      mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
                                      if (mercury__table_statistics__succeeded)
                                        *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__V_211_211;
                                      else
                                        {
                                          MR_Word mercury__table_statistics__V_212_212;

                                          mercury__table_statistics__succeeded = (mercury__table_statistics__V_624_624 < mercury__table_statistics__V_203_203);
                                          if (mercury__table_statistics__succeeded)
                                            mercury__table_statistics__V_212_212 = (MR_Integer) 1;
                                          else
                                            {
                                              mercury__table_statistics__succeeded = (mercury__table_statistics__V_624_624 == mercury__table_statistics__V_203_203);
                                              if (mercury__table_statistics__succeeded)
                                                mercury__table_statistics__V_212_212 = (MR_Integer) 0;
                                              else
                                                mercury__table_statistics__V_212_212 = (MR_Integer) 2;
                                            }
                                          mercury__table_statistics__succeeded = (mercury__table_statistics__V_212_212 == (MR_Integer) 0);
                                          mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
                                          if (mercury__table_statistics__succeeded)
                                            *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__V_212_212;
                                          else
                                            {
                                              MR_Word mercury__table_statistics__V_213_213;

                                              mercury__table_statistics__succeeded = (mercury__table_statistics__V_623_623 < mercury__table_statistics__V_204_204);
                                              if (mercury__table_statistics__succeeded)
                                                mercury__table_statistics__V_213_213 = (MR_Integer) 1;
                                              else
                                                {
                                                  mercury__table_statistics__succeeded = (mercury__table_statistics__V_623_623 == mercury__table_statistics__V_204_204);
                                                  if (mercury__table_statistics__succeeded)
                                                    mercury__table_statistics__V_213_213 = (MR_Integer) 0;
                                                  else
                                                    mercury__table_statistics__V_213_213 = (MR_Integer) 2;
                                                }
                                              mercury__table_statistics__succeeded = (mercury__table_statistics__V_213_213 == (MR_Integer) 0);
                                              mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
                                              if (mercury__table_statistics__succeeded)
                                                *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__V_213_213;
                                              else
                                                {
                                                  MR_Word mercury__table_statistics__V_214_214;

                                                  mercury__table_statistics__succeeded = (mercury__table_statistics__V_622_622 < mercury__table_statistics__V_205_205);
                                                  if (mercury__table_statistics__succeeded)
                                                    mercury__table_statistics__V_214_214 = (MR_Integer) 1;
                                                  else
                                                    {
                                                      mercury__table_statistics__succeeded = (mercury__table_statistics__V_622_622 == mercury__table_statistics__V_205_205);
                                                      if (mercury__table_statistics__succeeded)
                                                        mercury__table_statistics__V_214_214 = (MR_Integer) 0;
                                                      else
                                                        mercury__table_statistics__V_214_214 = (MR_Integer) 2;
                                                    }
                                                  mercury__table_statistics__succeeded = (mercury__table_statistics__V_214_214 == (MR_Integer) 0);
                                                  mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
                                                  if (mercury__table_statistics__succeeded)
                                                    *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__V_214_214;
                                                  else
                                                    {
                                                      MR_Word mercury__table_statistics__V_215_215;

                                                      mercury__table_statistics__succeeded = (mercury__table_statistics__V_621_621 < mercury__table_statistics__V_206_206);
                                                      if (mercury__table_statistics__succeeded)
                                                        mercury__table_statistics__V_215_215 = (MR_Integer) 1;
                                                      else
                                                        {
                                                          mercury__table_statistics__succeeded = (mercury__table_statistics__V_621_621 == mercury__table_statistics__V_206_206);
                                                          if (mercury__table_statistics__succeeded)
                                                            mercury__table_statistics__V_215_215 = (MR_Integer) 0;
                                                          else
                                                            mercury__table_statistics__V_215_215 = (MR_Integer) 2;
                                                        }
                                                      mercury__table_statistics__succeeded = (mercury__table_statistics__V_215_215 == (MR_Integer) 0);
                                                      mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
                                                      if (mercury__table_statistics__succeeded)
                                                        *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__V_215_215;
                                                      else
                                                        {
                                                          mercury__table_statistics__succeeded = (mercury__table_statistics__V_620_620 < mercury__table_statistics__V_207_207);
                                                          if (mercury__table_statistics__succeeded)
                                                            *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 1;
                                                          else
                                                            {
                                                              mercury__table_statistics__succeeded = (mercury__table_statistics__V_620_620 == mercury__table_statistics__V_207_207);
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
                MR_Integer mercury__table_statistics__V_603_603 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 15)));
                MR_Integer mercury__table_statistics__V_604_604 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 14)));
                MR_Integer mercury__table_statistics__V_605_605 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 13)));
                MR_Integer mercury__table_statistics__V_606_606 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 12)));
                MR_Integer mercury__table_statistics__V_607_607 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 11)));
                MR_Integer mercury__table_statistics__V_608_608 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 10)));
                MR_Integer mercury__table_statistics__V_609_609 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 9)));
                MR_Integer mercury__table_statistics__V_610_610 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 8)));
                MR_Integer mercury__table_statistics__V_611_611 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 7)));
                MR_Integer mercury__table_statistics__V_612_612 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 6)));
                MR_Integer mercury__table_statistics__V_613_613 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 5)));
                MR_Integer mercury__table_statistics__V_614_614 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 4)));
                MR_Integer mercury__table_statistics__V_615_615 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 3)));
                MR_Integer mercury__table_statistics__V_616_616 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 2)));
                MR_Integer mercury__table_statistics__V_617_617 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 1)));

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
                          MR_Integer mercury__table_statistics__V_352_352 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 1)));
                          MR_Integer mercury__table_statistics__V_353_353 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 2)));
                          MR_Integer mercury__table_statistics__V_354_354 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 3)));
                          MR_Integer mercury__table_statistics__V_355_355 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 4)));
                          MR_Integer mercury__table_statistics__V_356_356 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 5)));
                          MR_Integer mercury__table_statistics__V_357_357 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 6)));
                          MR_Integer mercury__table_statistics__V_358_358 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 7)));
                          MR_Integer mercury__table_statistics__V_359_359 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 8)));
                          MR_Integer mercury__table_statistics__V_360_360 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 9)));
                          MR_Integer mercury__table_statistics__V_361_361 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 10)));
                          MR_Integer mercury__table_statistics__V_362_362 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 11)));
                          MR_Integer mercury__table_statistics__V_363_363 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 12)));
                          MR_Integer mercury__table_statistics__V_364_364 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 13)));
                          MR_Integer mercury__table_statistics__V_365_365 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 14)));
                          MR_Integer mercury__table_statistics__V_366_366 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 15)));
                          MR_Word mercury__table_statistics__V_367_367;

                          mercury__table_statistics__succeeded = (mercury__table_statistics__V_617_617 < mercury__table_statistics__V_352_352);
                          if (mercury__table_statistics__succeeded)
                            mercury__table_statistics__V_367_367 = (MR_Integer) 1;
                          else
                            {
                              mercury__table_statistics__succeeded = (mercury__table_statistics__V_617_617 == mercury__table_statistics__V_352_352);
                              if (mercury__table_statistics__succeeded)
                                mercury__table_statistics__V_367_367 = (MR_Integer) 0;
                              else
                                mercury__table_statistics__V_367_367 = (MR_Integer) 2;
                            }
                          mercury__table_statistics__succeeded = (mercury__table_statistics__V_367_367 == (MR_Integer) 0);
                          mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
                          if (mercury__table_statistics__succeeded)
                            *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__V_367_367;
                          else
                            {
                              MR_Word mercury__table_statistics__V_368_368;

                              mercury__table_statistics__succeeded = (mercury__table_statistics__V_616_616 < mercury__table_statistics__V_353_353);
                              if (mercury__table_statistics__succeeded)
                                mercury__table_statistics__V_368_368 = (MR_Integer) 1;
                              else
                                {
                                  mercury__table_statistics__succeeded = (mercury__table_statistics__V_616_616 == mercury__table_statistics__V_353_353);
                                  if (mercury__table_statistics__succeeded)
                                    mercury__table_statistics__V_368_368 = (MR_Integer) 0;
                                  else
                                    mercury__table_statistics__V_368_368 = (MR_Integer) 2;
                                }
                              mercury__table_statistics__succeeded = (mercury__table_statistics__V_368_368 == (MR_Integer) 0);
                              mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
                              if (mercury__table_statistics__succeeded)
                                *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__V_368_368;
                              else
                                {
                                  MR_Word mercury__table_statistics__V_369_369;

                                  mercury__table_statistics__succeeded = (mercury__table_statistics__V_615_615 < mercury__table_statistics__V_354_354);
                                  if (mercury__table_statistics__succeeded)
                                    mercury__table_statistics__V_369_369 = (MR_Integer) 1;
                                  else
                                    {
                                      mercury__table_statistics__succeeded = (mercury__table_statistics__V_615_615 == mercury__table_statistics__V_354_354);
                                      if (mercury__table_statistics__succeeded)
                                        mercury__table_statistics__V_369_369 = (MR_Integer) 0;
                                      else
                                        mercury__table_statistics__V_369_369 = (MR_Integer) 2;
                                    }
                                  mercury__table_statistics__succeeded = (mercury__table_statistics__V_369_369 == (MR_Integer) 0);
                                  mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
                                  if (mercury__table_statistics__succeeded)
                                    *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__V_369_369;
                                  else
                                    {
                                      MR_Word mercury__table_statistics__V_370_370;

                                      mercury__table_statistics__succeeded = (mercury__table_statistics__V_614_614 < mercury__table_statistics__V_355_355);
                                      if (mercury__table_statistics__succeeded)
                                        mercury__table_statistics__V_370_370 = (MR_Integer) 1;
                                      else
                                        {
                                          mercury__table_statistics__succeeded = (mercury__table_statistics__V_614_614 == mercury__table_statistics__V_355_355);
                                          if (mercury__table_statistics__succeeded)
                                            mercury__table_statistics__V_370_370 = (MR_Integer) 0;
                                          else
                                            mercury__table_statistics__V_370_370 = (MR_Integer) 2;
                                        }
                                      mercury__table_statistics__succeeded = (mercury__table_statistics__V_370_370 == (MR_Integer) 0);
                                      mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
                                      if (mercury__table_statistics__succeeded)
                                        *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__V_370_370;
                                      else
                                        {
                                          MR_Word mercury__table_statistics__V_371_371;

                                          mercury__table_statistics__succeeded = (mercury__table_statistics__V_613_613 < mercury__table_statistics__V_356_356);
                                          if (mercury__table_statistics__succeeded)
                                            mercury__table_statistics__V_371_371 = (MR_Integer) 1;
                                          else
                                            {
                                              mercury__table_statistics__succeeded = (mercury__table_statistics__V_613_613 == mercury__table_statistics__V_356_356);
                                              if (mercury__table_statistics__succeeded)
                                                mercury__table_statistics__V_371_371 = (MR_Integer) 0;
                                              else
                                                mercury__table_statistics__V_371_371 = (MR_Integer) 2;
                                            }
                                          mercury__table_statistics__succeeded = (mercury__table_statistics__V_371_371 == (MR_Integer) 0);
                                          mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
                                          if (mercury__table_statistics__succeeded)
                                            *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__V_371_371;
                                          else
                                            {
                                              MR_Word mercury__table_statistics__V_372_372;

                                              mercury__table_statistics__succeeded = (mercury__table_statistics__V_612_612 < mercury__table_statistics__V_357_357);
                                              if (mercury__table_statistics__succeeded)
                                                mercury__table_statistics__V_372_372 = (MR_Integer) 1;
                                              else
                                                {
                                                  mercury__table_statistics__succeeded = (mercury__table_statistics__V_612_612 == mercury__table_statistics__V_357_357);
                                                  if (mercury__table_statistics__succeeded)
                                                    mercury__table_statistics__V_372_372 = (MR_Integer) 0;
                                                  else
                                                    mercury__table_statistics__V_372_372 = (MR_Integer) 2;
                                                }
                                              mercury__table_statistics__succeeded = (mercury__table_statistics__V_372_372 == (MR_Integer) 0);
                                              mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
                                              if (mercury__table_statistics__succeeded)
                                                *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__V_372_372;
                                              else
                                                {
                                                  MR_Word mercury__table_statistics__V_373_373;

                                                  mercury__table_statistics__succeeded = (mercury__table_statistics__V_611_611 < mercury__table_statistics__V_358_358);
                                                  if (mercury__table_statistics__succeeded)
                                                    mercury__table_statistics__V_373_373 = (MR_Integer) 1;
                                                  else
                                                    {
                                                      mercury__table_statistics__succeeded = (mercury__table_statistics__V_611_611 == mercury__table_statistics__V_358_358);
                                                      if (mercury__table_statistics__succeeded)
                                                        mercury__table_statistics__V_373_373 = (MR_Integer) 0;
                                                      else
                                                        mercury__table_statistics__V_373_373 = (MR_Integer) 2;
                                                    }
                                                  mercury__table_statistics__succeeded = (mercury__table_statistics__V_373_373 == (MR_Integer) 0);
                                                  mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
                                                  if (mercury__table_statistics__succeeded)
                                                    *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__V_373_373;
                                                  else
                                                    {
                                                      MR_Word mercury__table_statistics__V_374_374;

                                                      mercury__table_statistics__succeeded = (mercury__table_statistics__V_610_610 < mercury__table_statistics__V_359_359);
                                                      if (mercury__table_statistics__succeeded)
                                                        mercury__table_statistics__V_374_374 = (MR_Integer) 1;
                                                      else
                                                        {
                                                          mercury__table_statistics__succeeded = (mercury__table_statistics__V_610_610 == mercury__table_statistics__V_359_359);
                                                          if (mercury__table_statistics__succeeded)
                                                            mercury__table_statistics__V_374_374 = (MR_Integer) 0;
                                                          else
                                                            mercury__table_statistics__V_374_374 = (MR_Integer) 2;
                                                        }
                                                      mercury__table_statistics__succeeded = (mercury__table_statistics__V_374_374 == (MR_Integer) 0);
                                                      mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
                                                      if (mercury__table_statistics__succeeded)
                                                        *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__V_374_374;
                                                      else
                                                        {
                                                          MR_Word mercury__table_statistics__V_375_375;

                                                          mercury__table_statistics__succeeded = (mercury__table_statistics__V_609_609 < mercury__table_statistics__V_360_360);
                                                          if (mercury__table_statistics__succeeded)
                                                            mercury__table_statistics__V_375_375 = (MR_Integer) 1;
                                                          else
                                                            {
                                                              mercury__table_statistics__succeeded = (mercury__table_statistics__V_609_609 == mercury__table_statistics__V_360_360);
                                                              if (mercury__table_statistics__succeeded)
                                                                mercury__table_statistics__V_375_375 = (MR_Integer) 0;
                                                              else
                                                                mercury__table_statistics__V_375_375 = (MR_Integer) 2;
                                                            }
                                                          mercury__table_statistics__succeeded = (mercury__table_statistics__V_375_375 == (MR_Integer) 0);
                                                          mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
                                                          if (mercury__table_statistics__succeeded)
                                                            *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__V_375_375;
                                                          else
                                                            {
                                                              MR_Word mercury__table_statistics__V_376_376;

                                                              mercury__table_statistics__succeeded = (mercury__table_statistics__V_608_608 < mercury__table_statistics__V_361_361);
                                                              if (mercury__table_statistics__succeeded)
                                                                mercury__table_statistics__V_376_376 = (MR_Integer) 1;
                                                              else
                                                                {
                                                                  mercury__table_statistics__succeeded = (mercury__table_statistics__V_608_608 == mercury__table_statistics__V_361_361);
                                                                  if (mercury__table_statistics__succeeded)
                                                                    mercury__table_statistics__V_376_376 = (MR_Integer) 0;
                                                                  else
                                                                    mercury__table_statistics__V_376_376 = (MR_Integer) 2;
                                                                }
                                                              mercury__table_statistics__succeeded = (mercury__table_statistics__V_376_376 == (MR_Integer) 0);
                                                              mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
                                                              if (mercury__table_statistics__succeeded)
                                                                *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__V_376_376;
                                                              else
                                                                {
                                                                  MR_Word mercury__table_statistics__V_377_377;

                                                                  mercury__table_statistics__succeeded = (mercury__table_statistics__V_607_607 < mercury__table_statistics__V_362_362);
                                                                  if (mercury__table_statistics__succeeded)
                                                                    mercury__table_statistics__V_377_377 = (MR_Integer) 1;
                                                                  else
                                                                    {
                                                                      mercury__table_statistics__succeeded = (mercury__table_statistics__V_607_607 == mercury__table_statistics__V_362_362);
                                                                      if (mercury__table_statistics__succeeded)
                                                                        mercury__table_statistics__V_377_377 = (MR_Integer) 0;
                                                                      else
                                                                        mercury__table_statistics__V_377_377 = (MR_Integer) 2;
                                                                    }
                                                                  mercury__table_statistics__succeeded = (mercury__table_statistics__V_377_377 == (MR_Integer) 0);
                                                                  mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
                                                                  if (mercury__table_statistics__succeeded)
                                                                    *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__V_377_377;
                                                                  else
                                                                    {
                                                                      MR_Word mercury__table_statistics__V_378_378;

                                                                      mercury__table_statistics__succeeded = (mercury__table_statistics__V_606_606 < mercury__table_statistics__V_363_363);
                                                                      if (mercury__table_statistics__succeeded)
                                                                        mercury__table_statistics__V_378_378 = (MR_Integer) 1;
                                                                      else
                                                                        {
                                                                          mercury__table_statistics__succeeded = (mercury__table_statistics__V_606_606 == mercury__table_statistics__V_363_363);
                                                                          if (mercury__table_statistics__succeeded)
                                                                            mercury__table_statistics__V_378_378 = (MR_Integer) 0;
                                                                          else
                                                                            mercury__table_statistics__V_378_378 = (MR_Integer) 2;
                                                                        }
                                                                      mercury__table_statistics__succeeded = (mercury__table_statistics__V_378_378 == (MR_Integer) 0);
                                                                      mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
                                                                      if (mercury__table_statistics__succeeded)
                                                                        *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__V_378_378;
                                                                      else
                                                                        {
                                                                          MR_Word mercury__table_statistics__V_379_379;

                                                                          mercury__table_statistics__succeeded = (mercury__table_statistics__V_605_605 < mercury__table_statistics__V_364_364);
                                                                          if (mercury__table_statistics__succeeded)
                                                                            mercury__table_statistics__V_379_379 = (MR_Integer) 1;
                                                                          else
                                                                            {
                                                                              mercury__table_statistics__succeeded = (mercury__table_statistics__V_605_605 == mercury__table_statistics__V_364_364);
                                                                              if (mercury__table_statistics__succeeded)
                                                                                mercury__table_statistics__V_379_379 = (MR_Integer) 0;
                                                                              else
                                                                                mercury__table_statistics__V_379_379 = (MR_Integer) 2;
                                                                            }
                                                                          mercury__table_statistics__succeeded = (mercury__table_statistics__V_379_379 == (MR_Integer) 0);
                                                                          mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
                                                                          if (mercury__table_statistics__succeeded)
                                                                            *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__V_379_379;
                                                                          else
                                                                            {
                                                                              MR_Word mercury__table_statistics__V_380_380;

                                                                              mercury__table_statistics__succeeded = (mercury__table_statistics__V_604_604 < mercury__table_statistics__V_365_365);
                                                                              if (mercury__table_statistics__succeeded)
                                                                                mercury__table_statistics__V_380_380 = (MR_Integer) 1;
                                                                              else
                                                                                {
                                                                                  mercury__table_statistics__succeeded = (mercury__table_statistics__V_604_604 == mercury__table_statistics__V_365_365);
                                                                                  if (mercury__table_statistics__succeeded)
                                                                                    mercury__table_statistics__V_380_380 = (MR_Integer) 0;
                                                                                  else
                                                                                    mercury__table_statistics__V_380_380 = (MR_Integer) 2;
                                                                                }
                                                                              mercury__table_statistics__succeeded = (mercury__table_statistics__V_380_380 == (MR_Integer) 0);
                                                                              mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
                                                                              if (mercury__table_statistics__succeeded)
                                                                                *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__V_380_380;
                                                                              else
                                                                                {
                                                                                  mercury__table_statistics__succeeded = (mercury__table_statistics__V_603_603 < mercury__table_statistics__V_366_366);
                                                                                  if (mercury__table_statistics__succeeded)
                                                                                    *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 1;
                                                                                  else
                                                                                    {
                                                                                      mercury__table_statistics__succeeded = (mercury__table_statistics__V_603_603 == mercury__table_statistics__V_366_366);
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
                MR_Integer mercury__table_statistics__V_629_629 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 15)));
                MR_Integer mercury__table_statistics__V_630_630 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 14)));
                MR_Integer mercury__table_statistics__V_631_631 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 13)));
                MR_Integer mercury__table_statistics__V_632_632 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 12)));
                MR_Integer mercury__table_statistics__V_633_633 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 11)));
                MR_Integer mercury__table_statistics__V_634_634 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 10)));
                MR_Integer mercury__table_statistics__V_635_635 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 9)));
                MR_Integer mercury__table_statistics__V_636_636 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 8)));
                MR_Integer mercury__table_statistics__V_637_637 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 7)));
                MR_Integer mercury__table_statistics__V_638_638 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 6)));
                MR_Integer mercury__table_statistics__V_639_639 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 5)));
                MR_Integer mercury__table_statistics__V_640_640 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 4)));
                MR_Integer mercury__table_statistics__V_641_641 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 3)));
                MR_Integer mercury__table_statistics__V_642_642 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 2)));
                MR_Integer mercury__table_statistics__V_643_643 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 1)));

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
                          MR_Integer mercury__table_statistics__V_529_529 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 1)));
                          MR_Integer mercury__table_statistics__V_530_530 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 2)));
                          MR_Integer mercury__table_statistics__V_531_531 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 3)));
                          MR_Integer mercury__table_statistics__V_532_532 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 4)));
                          MR_Integer mercury__table_statistics__V_533_533 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 5)));
                          MR_Integer mercury__table_statistics__V_534_534 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 6)));
                          MR_Integer mercury__table_statistics__V_535_535 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 7)));
                          MR_Integer mercury__table_statistics__V_536_536 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 8)));
                          MR_Integer mercury__table_statistics__V_537_537 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 9)));
                          MR_Integer mercury__table_statistics__V_538_538 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 10)));
                          MR_Integer mercury__table_statistics__V_539_539 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 11)));
                          MR_Integer mercury__table_statistics__V_540_540 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 12)));
                          MR_Integer mercury__table_statistics__V_541_541 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 13)));
                          MR_Integer mercury__table_statistics__V_542_542 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 14)));
                          MR_Integer mercury__table_statistics__V_543_543 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 15)));
                          MR_Word mercury__table_statistics__V_544_544;

                          mercury__table_statistics__succeeded = (mercury__table_statistics__V_643_643 < mercury__table_statistics__V_529_529);
                          if (mercury__table_statistics__succeeded)
                            mercury__table_statistics__V_544_544 = (MR_Integer) 1;
                          else
                            {
                              mercury__table_statistics__succeeded = (mercury__table_statistics__V_643_643 == mercury__table_statistics__V_529_529);
                              if (mercury__table_statistics__succeeded)
                                mercury__table_statistics__V_544_544 = (MR_Integer) 0;
                              else
                                mercury__table_statistics__V_544_544 = (MR_Integer) 2;
                            }
                          mercury__table_statistics__succeeded = (mercury__table_statistics__V_544_544 == (MR_Integer) 0);
                          mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
                          if (mercury__table_statistics__succeeded)
                            *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__V_544_544;
                          else
                            {
                              MR_Word mercury__table_statistics__V_545_545;

                              mercury__table_statistics__succeeded = (mercury__table_statistics__V_642_642 < mercury__table_statistics__V_530_530);
                              if (mercury__table_statistics__succeeded)
                                mercury__table_statistics__V_545_545 = (MR_Integer) 1;
                              else
                                {
                                  mercury__table_statistics__succeeded = (mercury__table_statistics__V_642_642 == mercury__table_statistics__V_530_530);
                                  if (mercury__table_statistics__succeeded)
                                    mercury__table_statistics__V_545_545 = (MR_Integer) 0;
                                  else
                                    mercury__table_statistics__V_545_545 = (MR_Integer) 2;
                                }
                              mercury__table_statistics__succeeded = (mercury__table_statistics__V_545_545 == (MR_Integer) 0);
                              mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
                              if (mercury__table_statistics__succeeded)
                                *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__V_545_545;
                              else
                                {
                                  MR_Word mercury__table_statistics__V_546_546;

                                  mercury__table_statistics__succeeded = (mercury__table_statistics__V_641_641 < mercury__table_statistics__V_531_531);
                                  if (mercury__table_statistics__succeeded)
                                    mercury__table_statistics__V_546_546 = (MR_Integer) 1;
                                  else
                                    {
                                      mercury__table_statistics__succeeded = (mercury__table_statistics__V_641_641 == mercury__table_statistics__V_531_531);
                                      if (mercury__table_statistics__succeeded)
                                        mercury__table_statistics__V_546_546 = (MR_Integer) 0;
                                      else
                                        mercury__table_statistics__V_546_546 = (MR_Integer) 2;
                                    }
                                  mercury__table_statistics__succeeded = (mercury__table_statistics__V_546_546 == (MR_Integer) 0);
                                  mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
                                  if (mercury__table_statistics__succeeded)
                                    *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__V_546_546;
                                  else
                                    {
                                      MR_Word mercury__table_statistics__V_547_547;

                                      mercury__table_statistics__succeeded = (mercury__table_statistics__V_640_640 < mercury__table_statistics__V_532_532);
                                      if (mercury__table_statistics__succeeded)
                                        mercury__table_statistics__V_547_547 = (MR_Integer) 1;
                                      else
                                        {
                                          mercury__table_statistics__succeeded = (mercury__table_statistics__V_640_640 == mercury__table_statistics__V_532_532);
                                          if (mercury__table_statistics__succeeded)
                                            mercury__table_statistics__V_547_547 = (MR_Integer) 0;
                                          else
                                            mercury__table_statistics__V_547_547 = (MR_Integer) 2;
                                        }
                                      mercury__table_statistics__succeeded = (mercury__table_statistics__V_547_547 == (MR_Integer) 0);
                                      mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
                                      if (mercury__table_statistics__succeeded)
                                        *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__V_547_547;
                                      else
                                        {
                                          MR_Word mercury__table_statistics__V_548_548;

                                          mercury__table_statistics__succeeded = (mercury__table_statistics__V_639_639 < mercury__table_statistics__V_533_533);
                                          if (mercury__table_statistics__succeeded)
                                            mercury__table_statistics__V_548_548 = (MR_Integer) 1;
                                          else
                                            {
                                              mercury__table_statistics__succeeded = (mercury__table_statistics__V_639_639 == mercury__table_statistics__V_533_533);
                                              if (mercury__table_statistics__succeeded)
                                                mercury__table_statistics__V_548_548 = (MR_Integer) 0;
                                              else
                                                mercury__table_statistics__V_548_548 = (MR_Integer) 2;
                                            }
                                          mercury__table_statistics__succeeded = (mercury__table_statistics__V_548_548 == (MR_Integer) 0);
                                          mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
                                          if (mercury__table_statistics__succeeded)
                                            *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__V_548_548;
                                          else
                                            {
                                              MR_Word mercury__table_statistics__V_549_549;

                                              mercury__table_statistics__succeeded = (mercury__table_statistics__V_638_638 < mercury__table_statistics__V_534_534);
                                              if (mercury__table_statistics__succeeded)
                                                mercury__table_statistics__V_549_549 = (MR_Integer) 1;
                                              else
                                                {
                                                  mercury__table_statistics__succeeded = (mercury__table_statistics__V_638_638 == mercury__table_statistics__V_534_534);
                                                  if (mercury__table_statistics__succeeded)
                                                    mercury__table_statistics__V_549_549 = (MR_Integer) 0;
                                                  else
                                                    mercury__table_statistics__V_549_549 = (MR_Integer) 2;
                                                }
                                              mercury__table_statistics__succeeded = (mercury__table_statistics__V_549_549 == (MR_Integer) 0);
                                              mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
                                              if (mercury__table_statistics__succeeded)
                                                *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__V_549_549;
                                              else
                                                {
                                                  MR_Word mercury__table_statistics__V_550_550;

                                                  mercury__table_statistics__succeeded = (mercury__table_statistics__V_637_637 < mercury__table_statistics__V_535_535);
                                                  if (mercury__table_statistics__succeeded)
                                                    mercury__table_statistics__V_550_550 = (MR_Integer) 1;
                                                  else
                                                    {
                                                      mercury__table_statistics__succeeded = (mercury__table_statistics__V_637_637 == mercury__table_statistics__V_535_535);
                                                      if (mercury__table_statistics__succeeded)
                                                        mercury__table_statistics__V_550_550 = (MR_Integer) 0;
                                                      else
                                                        mercury__table_statistics__V_550_550 = (MR_Integer) 2;
                                                    }
                                                  mercury__table_statistics__succeeded = (mercury__table_statistics__V_550_550 == (MR_Integer) 0);
                                                  mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
                                                  if (mercury__table_statistics__succeeded)
                                                    *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__V_550_550;
                                                  else
                                                    {
                                                      MR_Word mercury__table_statistics__V_551_551;

                                                      mercury__table_statistics__succeeded = (mercury__table_statistics__V_636_636 < mercury__table_statistics__V_536_536);
                                                      if (mercury__table_statistics__succeeded)
                                                        mercury__table_statistics__V_551_551 = (MR_Integer) 1;
                                                      else
                                                        {
                                                          mercury__table_statistics__succeeded = (mercury__table_statistics__V_636_636 == mercury__table_statistics__V_536_536);
                                                          if (mercury__table_statistics__succeeded)
                                                            mercury__table_statistics__V_551_551 = (MR_Integer) 0;
                                                          else
                                                            mercury__table_statistics__V_551_551 = (MR_Integer) 2;
                                                        }
                                                      mercury__table_statistics__succeeded = (mercury__table_statistics__V_551_551 == (MR_Integer) 0);
                                                      mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
                                                      if (mercury__table_statistics__succeeded)
                                                        *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__V_551_551;
                                                      else
                                                        {
                                                          MR_Word mercury__table_statistics__V_552_552;

                                                          mercury__table_statistics__succeeded = (mercury__table_statistics__V_635_635 < mercury__table_statistics__V_537_537);
                                                          if (mercury__table_statistics__succeeded)
                                                            mercury__table_statistics__V_552_552 = (MR_Integer) 1;
                                                          else
                                                            {
                                                              mercury__table_statistics__succeeded = (mercury__table_statistics__V_635_635 == mercury__table_statistics__V_537_537);
                                                              if (mercury__table_statistics__succeeded)
                                                                mercury__table_statistics__V_552_552 = (MR_Integer) 0;
                                                              else
                                                                mercury__table_statistics__V_552_552 = (MR_Integer) 2;
                                                            }
                                                          mercury__table_statistics__succeeded = (mercury__table_statistics__V_552_552 == (MR_Integer) 0);
                                                          mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
                                                          if (mercury__table_statistics__succeeded)
                                                            *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__V_552_552;
                                                          else
                                                            {
                                                              MR_Word mercury__table_statistics__V_553_553;

                                                              mercury__table_statistics__succeeded = (mercury__table_statistics__V_634_634 < mercury__table_statistics__V_538_538);
                                                              if (mercury__table_statistics__succeeded)
                                                                mercury__table_statistics__V_553_553 = (MR_Integer) 1;
                                                              else
                                                                {
                                                                  mercury__table_statistics__succeeded = (mercury__table_statistics__V_634_634 == mercury__table_statistics__V_538_538);
                                                                  if (mercury__table_statistics__succeeded)
                                                                    mercury__table_statistics__V_553_553 = (MR_Integer) 0;
                                                                  else
                                                                    mercury__table_statistics__V_553_553 = (MR_Integer) 2;
                                                                }
                                                              mercury__table_statistics__succeeded = (mercury__table_statistics__V_553_553 == (MR_Integer) 0);
                                                              mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
                                                              if (mercury__table_statistics__succeeded)
                                                                *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__V_553_553;
                                                              else
                                                                {
                                                                  MR_Word mercury__table_statistics__V_554_554;

                                                                  mercury__table_statistics__succeeded = (mercury__table_statistics__V_633_633 < mercury__table_statistics__V_539_539);
                                                                  if (mercury__table_statistics__succeeded)
                                                                    mercury__table_statistics__V_554_554 = (MR_Integer) 1;
                                                                  else
                                                                    {
                                                                      mercury__table_statistics__succeeded = (mercury__table_statistics__V_633_633 == mercury__table_statistics__V_539_539);
                                                                      if (mercury__table_statistics__succeeded)
                                                                        mercury__table_statistics__V_554_554 = (MR_Integer) 0;
                                                                      else
                                                                        mercury__table_statistics__V_554_554 = (MR_Integer) 2;
                                                                    }
                                                                  mercury__table_statistics__succeeded = (mercury__table_statistics__V_554_554 == (MR_Integer) 0);
                                                                  mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
                                                                  if (mercury__table_statistics__succeeded)
                                                                    *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__V_554_554;
                                                                  else
                                                                    {
                                                                      MR_Word mercury__table_statistics__V_555_555;

                                                                      mercury__table_statistics__succeeded = (mercury__table_statistics__V_632_632 < mercury__table_statistics__V_540_540);
                                                                      if (mercury__table_statistics__succeeded)
                                                                        mercury__table_statistics__V_555_555 = (MR_Integer) 1;
                                                                      else
                                                                        {
                                                                          mercury__table_statistics__succeeded = (mercury__table_statistics__V_632_632 == mercury__table_statistics__V_540_540);
                                                                          if (mercury__table_statistics__succeeded)
                                                                            mercury__table_statistics__V_555_555 = (MR_Integer) 0;
                                                                          else
                                                                            mercury__table_statistics__V_555_555 = (MR_Integer) 2;
                                                                        }
                                                                      mercury__table_statistics__succeeded = (mercury__table_statistics__V_555_555 == (MR_Integer) 0);
                                                                      mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
                                                                      if (mercury__table_statistics__succeeded)
                                                                        *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__V_555_555;
                                                                      else
                                                                        {
                                                                          MR_Word mercury__table_statistics__V_556_556;

                                                                          mercury__table_statistics__succeeded = (mercury__table_statistics__V_631_631 < mercury__table_statistics__V_541_541);
                                                                          if (mercury__table_statistics__succeeded)
                                                                            mercury__table_statistics__V_556_556 = (MR_Integer) 1;
                                                                          else
                                                                            {
                                                                              mercury__table_statistics__succeeded = (mercury__table_statistics__V_631_631 == mercury__table_statistics__V_541_541);
                                                                              if (mercury__table_statistics__succeeded)
                                                                                mercury__table_statistics__V_556_556 = (MR_Integer) 0;
                                                                              else
                                                                                mercury__table_statistics__V_556_556 = (MR_Integer) 2;
                                                                            }
                                                                          mercury__table_statistics__succeeded = (mercury__table_statistics__V_556_556 == (MR_Integer) 0);
                                                                          mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
                                                                          if (mercury__table_statistics__succeeded)
                                                                            *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__V_556_556;
                                                                          else
                                                                            {
                                                                              MR_Word mercury__table_statistics__V_557_557;

                                                                              mercury__table_statistics__succeeded = (mercury__table_statistics__V_630_630 < mercury__table_statistics__V_542_542);
                                                                              if (mercury__table_statistics__succeeded)
                                                                                mercury__table_statistics__V_557_557 = (MR_Integer) 1;
                                                                              else
                                                                                {
                                                                                  mercury__table_statistics__succeeded = (mercury__table_statistics__V_630_630 == mercury__table_statistics__V_542_542);
                                                                                  if (mercury__table_statistics__succeeded)
                                                                                    mercury__table_statistics__V_557_557 = (MR_Integer) 0;
                                                                                  else
                                                                                    mercury__table_statistics__V_557_557 = (MR_Integer) 2;
                                                                                }
                                                                              mercury__table_statistics__succeeded = (mercury__table_statistics__V_557_557 == (MR_Integer) 0);
                                                                              mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
                                                                              if (mercury__table_statistics__succeeded)
                                                                                *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__V_557_557;
                                                                              else
                                                                                {
                                                                                  mercury__table_statistics__succeeded = (mercury__table_statistics__V_629_629 < mercury__table_statistics__V_543_543);
                                                                                  if (mercury__table_statistics__succeeded)
                                                                                    *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 1;
                                                                                  else
                                                                                    {
                                                                                      mercury__table_statistics__succeeded = (mercury__table_statistics__V_629_629 == mercury__table_statistics__V_543_543);
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
            MR_Integer mercury__table_statistics__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer mercury__table_statistics__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 1)));
            MR_Integer mercury__table_statistics__V_7_7;
            MR_Integer mercury__table_statistics__V_8_8;

            mercury__table_statistics__succeeded = ((MR_tag((MR_Word) mercury__table_statistics__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__table_statistics__succeeded)
              {
                mercury__table_statistics__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 0)));
                mercury__table_statistics__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 1)));
                mercury__table_statistics__succeeded = (mercury__table_statistics__V_5_5 == mercury__table_statistics__V_7_7);
                if (mercury__table_statistics__succeeded)
                  mercury__table_statistics__succeeded = (mercury__table_statistics__V_6_6 == mercury__table_statistics__V_8_8);
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer mercury__table_statistics__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer mercury__table_statistics__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 1)));
            MR_Integer mercury__table_statistics__V_11_11;
            MR_Integer mercury__table_statistics__V_12_12;

            mercury__table_statistics__succeeded = ((MR_tag((MR_Word) mercury__table_statistics__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (mercury__table_statistics__succeeded)
              {
                mercury__table_statistics__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 0)));
                mercury__table_statistics__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 1)));
                mercury__table_statistics__succeeded = (mercury__table_statistics__V_9_9 == mercury__table_statistics__V_11_11);
                if (mercury__table_statistics__succeeded)
                  mercury__table_statistics__succeeded = (mercury__table_statistics__V_10_10 == mercury__table_statistics__V_12_12);
              }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer mercury__table_statistics__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 1)));
                MR_Integer mercury__table_statistics__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 2)));
                MR_Integer mercury__table_statistics__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 3)));
                MR_Integer mercury__table_statistics__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 4)));
                MR_Integer mercury__table_statistics__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 5)));
                MR_Integer mercury__table_statistics__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 6)));
                MR_Integer mercury__table_statistics__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 7)));
                MR_Integer mercury__table_statistics__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 8)));
                MR_Integer mercury__table_statistics__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 9)));
                MR_Integer mercury__table_statistics__V_22_22;
                MR_Integer mercury__table_statistics__V_23_23;
                MR_Integer mercury__table_statistics__V_24_24;
                MR_Integer mercury__table_statistics__V_25_25;
                MR_Integer mercury__table_statistics__V_26_26;
                MR_Integer mercury__table_statistics__V_27_27;
                MR_Integer mercury__table_statistics__V_28_28;
                MR_Integer mercury__table_statistics__V_29_29;
                MR_Integer mercury__table_statistics__V_30_30;

                mercury__table_statistics__succeeded = ((((MR_tag((MR_Word) mercury__table_statistics__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (mercury__table_statistics__succeeded)
                  {
                    mercury__table_statistics__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 1)));
                    mercury__table_statistics__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 2)));
                    mercury__table_statistics__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 3)));
                    mercury__table_statistics__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 4)));
                    mercury__table_statistics__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 5)));
                    mercury__table_statistics__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 6)));
                    mercury__table_statistics__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 7)));
                    mercury__table_statistics__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 8)));
                    mercury__table_statistics__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 9)));
                    mercury__table_statistics__succeeded = (mercury__table_statistics__V_13_13 == mercury__table_statistics__V_22_22);
                    if (mercury__table_statistics__succeeded)
                      {
                        mercury__table_statistics__succeeded = (mercury__table_statistics__V_14_14 == mercury__table_statistics__V_23_23);
                        if (mercury__table_statistics__succeeded)
                          {
                            mercury__table_statistics__succeeded = (mercury__table_statistics__V_15_15 == mercury__table_statistics__V_24_24);
                            if (mercury__table_statistics__succeeded)
                              {
                                mercury__table_statistics__succeeded = (mercury__table_statistics__V_16_16 == mercury__table_statistics__V_25_25);
                                if (mercury__table_statistics__succeeded)
                                  {
                                    mercury__table_statistics__succeeded = (mercury__table_statistics__V_17_17 == mercury__table_statistics__V_26_26);
                                    if (mercury__table_statistics__succeeded)
                                      {
                                        mercury__table_statistics__succeeded = (mercury__table_statistics__V_18_18 == mercury__table_statistics__V_27_27);
                                        if (mercury__table_statistics__succeeded)
                                          {
                                            mercury__table_statistics__succeeded = (mercury__table_statistics__V_19_19 == mercury__table_statistics__V_28_28);
                                            if (mercury__table_statistics__succeeded)
                                              {
                                                mercury__table_statistics__succeeded = (mercury__table_statistics__V_20_20 == mercury__table_statistics__V_29_29);
                                                if (mercury__table_statistics__succeeded)
                                                  mercury__table_statistics__succeeded = (mercury__table_statistics__V_21_21 == mercury__table_statistics__V_30_30);
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
                MR_Integer mercury__table_statistics__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 1)));
                MR_Integer mercury__table_statistics__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 2)));
                MR_Integer mercury__table_statistics__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 3)));
                MR_Integer mercury__table_statistics__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 4)));
                MR_Integer mercury__table_statistics__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 5)));
                MR_Integer mercury__table_statistics__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 6)));
                MR_Integer mercury__table_statistics__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 7)));
                MR_Integer mercury__table_statistics__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 8)));
                MR_Integer mercury__table_statistics__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 9)));
                MR_Integer mercury__table_statistics__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 10)));
                MR_Integer mercury__table_statistics__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 11)));
                MR_Integer mercury__table_statistics__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 12)));
                MR_Integer mercury__table_statistics__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 13)));
                MR_Integer mercury__table_statistics__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 14)));
                MR_Integer mercury__table_statistics__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 15)));
                MR_Integer mercury__table_statistics__V_46_46;
                MR_Integer mercury__table_statistics__V_47_47;
                MR_Integer mercury__table_statistics__V_48_48;
                MR_Integer mercury__table_statistics__V_49_49;
                MR_Integer mercury__table_statistics__V_50_50;
                MR_Integer mercury__table_statistics__V_51_51;
                MR_Integer mercury__table_statistics__V_52_52;
                MR_Integer mercury__table_statistics__V_53_53;
                MR_Integer mercury__table_statistics__V_54_54;
                MR_Integer mercury__table_statistics__V_55_55;
                MR_Integer mercury__table_statistics__V_56_56;
                MR_Integer mercury__table_statistics__V_57_57;
                MR_Integer mercury__table_statistics__V_58_58;
                MR_Integer mercury__table_statistics__V_59_59;
                MR_Integer mercury__table_statistics__V_60_60;

                mercury__table_statistics__succeeded = ((((MR_tag((MR_Word) mercury__table_statistics__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (mercury__table_statistics__succeeded)
                  {
                    mercury__table_statistics__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 1)));
                    mercury__table_statistics__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 2)));
                    mercury__table_statistics__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 3)));
                    mercury__table_statistics__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 4)));
                    mercury__table_statistics__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 5)));
                    mercury__table_statistics__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 6)));
                    mercury__table_statistics__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 7)));
                    mercury__table_statistics__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 8)));
                    mercury__table_statistics__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 9)));
                    mercury__table_statistics__V_55_55 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 10)));
                    mercury__table_statistics__V_56_56 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 11)));
                    mercury__table_statistics__V_57_57 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 12)));
                    mercury__table_statistics__V_58_58 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 13)));
                    mercury__table_statistics__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 14)));
                    mercury__table_statistics__V_60_60 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 15)));
                    mercury__table_statistics__succeeded = (mercury__table_statistics__V_31_31 == mercury__table_statistics__V_46_46);
                    if (mercury__table_statistics__succeeded)
                      {
                        mercury__table_statistics__succeeded = (mercury__table_statistics__V_32_32 == mercury__table_statistics__V_47_47);
                        if (mercury__table_statistics__succeeded)
                          {
                            mercury__table_statistics__succeeded = (mercury__table_statistics__V_33_33 == mercury__table_statistics__V_48_48);
                            if (mercury__table_statistics__succeeded)
                              {
                                mercury__table_statistics__succeeded = (mercury__table_statistics__V_34_34 == mercury__table_statistics__V_49_49);
                                if (mercury__table_statistics__succeeded)
                                  {
                                    mercury__table_statistics__succeeded = (mercury__table_statistics__V_35_35 == mercury__table_statistics__V_50_50);
                                    if (mercury__table_statistics__succeeded)
                                      {
                                        mercury__table_statistics__succeeded = (mercury__table_statistics__V_36_36 == mercury__table_statistics__V_51_51);
                                        if (mercury__table_statistics__succeeded)
                                          {
                                            mercury__table_statistics__succeeded = (mercury__table_statistics__V_37_37 == mercury__table_statistics__V_52_52);
                                            if (mercury__table_statistics__succeeded)
                                              {
                                                mercury__table_statistics__succeeded = (mercury__table_statistics__V_38_38 == mercury__table_statistics__V_53_53);
                                                if (mercury__table_statistics__succeeded)
                                                  {
                                                    mercury__table_statistics__succeeded = (mercury__table_statistics__V_39_39 == mercury__table_statistics__V_54_54);
                                                    if (mercury__table_statistics__succeeded)
                                                      {
                                                        mercury__table_statistics__succeeded = (mercury__table_statistics__V_40_40 == mercury__table_statistics__V_55_55);
                                                        if (mercury__table_statistics__succeeded)
                                                          {
                                                            mercury__table_statistics__succeeded = (mercury__table_statistics__V_41_41 == mercury__table_statistics__V_56_56);
                                                            if (mercury__table_statistics__succeeded)
                                                              {
                                                                mercury__table_statistics__succeeded = (mercury__table_statistics__V_42_42 == mercury__table_statistics__V_57_57);
                                                                if (mercury__table_statistics__succeeded)
                                                                  {
                                                                    mercury__table_statistics__succeeded = (mercury__table_statistics__V_43_43 == mercury__table_statistics__V_58_58);
                                                                    if (mercury__table_statistics__succeeded)
                                                                      {
                                                                        mercury__table_statistics__succeeded = (mercury__table_statistics__V_44_44 == mercury__table_statistics__V_59_59);
                                                                        if (mercury__table_statistics__succeeded)
                                                                          mercury__table_statistics__succeeded = (mercury__table_statistics__V_45_45 == mercury__table_statistics__V_60_60);
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
                MR_Integer mercury__table_statistics__V_61_61 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 1)));
                MR_Integer mercury__table_statistics__V_62_62 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 2)));
                MR_Integer mercury__table_statistics__V_63_63 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 3)));
                MR_Integer mercury__table_statistics__V_64_64 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 4)));
                MR_Integer mercury__table_statistics__V_65_65 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 5)));
                MR_Integer mercury__table_statistics__V_66_66 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 6)));
                MR_Integer mercury__table_statistics__V_67_67 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 7)));
                MR_Integer mercury__table_statistics__V_68_68 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 8)));
                MR_Integer mercury__table_statistics__V_69_69 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 9)));
                MR_Integer mercury__table_statistics__V_70_70 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 10)));
                MR_Integer mercury__table_statistics__V_71_71 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 11)));
                MR_Integer mercury__table_statistics__V_72_72 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 12)));
                MR_Integer mercury__table_statistics__V_73_73 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 13)));
                MR_Integer mercury__table_statistics__V_74_74 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 14)));
                MR_Integer mercury__table_statistics__V_75_75 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 15)));
                MR_Integer mercury__table_statistics__V_76_76;
                MR_Integer mercury__table_statistics__V_77_77;
                MR_Integer mercury__table_statistics__V_78_78;
                MR_Integer mercury__table_statistics__V_79_79;
                MR_Integer mercury__table_statistics__V_80_80;
                MR_Integer mercury__table_statistics__V_81_81;
                MR_Integer mercury__table_statistics__V_82_82;
                MR_Integer mercury__table_statistics__V_83_83;
                MR_Integer mercury__table_statistics__V_84_84;
                MR_Integer mercury__table_statistics__V_85_85;
                MR_Integer mercury__table_statistics__V_86_86;
                MR_Integer mercury__table_statistics__V_87_87;
                MR_Integer mercury__table_statistics__V_88_88;
                MR_Integer mercury__table_statistics__V_89_89;
                MR_Integer mercury__table_statistics__V_90_90;

                mercury__table_statistics__succeeded = ((((MR_tag((MR_Word) mercury__table_statistics__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (mercury__table_statistics__succeeded)
                  {
                    mercury__table_statistics__V_76_76 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 1)));
                    mercury__table_statistics__V_77_77 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 2)));
                    mercury__table_statistics__V_78_78 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 3)));
                    mercury__table_statistics__V_79_79 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 4)));
                    mercury__table_statistics__V_80_80 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 5)));
                    mercury__table_statistics__V_81_81 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 6)));
                    mercury__table_statistics__V_82_82 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 7)));
                    mercury__table_statistics__V_83_83 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 8)));
                    mercury__table_statistics__V_84_84 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 9)));
                    mercury__table_statistics__V_85_85 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 10)));
                    mercury__table_statistics__V_86_86 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 11)));
                    mercury__table_statistics__V_87_87 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 12)));
                    mercury__table_statistics__V_88_88 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 13)));
                    mercury__table_statistics__V_89_89 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 14)));
                    mercury__table_statistics__V_90_90 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 15)));
                    mercury__table_statistics__succeeded = (mercury__table_statistics__V_61_61 == mercury__table_statistics__V_76_76);
                    if (mercury__table_statistics__succeeded)
                      {
                        mercury__table_statistics__succeeded = (mercury__table_statistics__V_62_62 == mercury__table_statistics__V_77_77);
                        if (mercury__table_statistics__succeeded)
                          {
                            mercury__table_statistics__succeeded = (mercury__table_statistics__V_63_63 == mercury__table_statistics__V_78_78);
                            if (mercury__table_statistics__succeeded)
                              {
                                mercury__table_statistics__succeeded = (mercury__table_statistics__V_64_64 == mercury__table_statistics__V_79_79);
                                if (mercury__table_statistics__succeeded)
                                  {
                                    mercury__table_statistics__succeeded = (mercury__table_statistics__V_65_65 == mercury__table_statistics__V_80_80);
                                    if (mercury__table_statistics__succeeded)
                                      {
                                        mercury__table_statistics__succeeded = (mercury__table_statistics__V_66_66 == mercury__table_statistics__V_81_81);
                                        if (mercury__table_statistics__succeeded)
                                          {
                                            mercury__table_statistics__succeeded = (mercury__table_statistics__V_67_67 == mercury__table_statistics__V_82_82);
                                            if (mercury__table_statistics__succeeded)
                                              {
                                                mercury__table_statistics__succeeded = (mercury__table_statistics__V_68_68 == mercury__table_statistics__V_83_83);
                                                if (mercury__table_statistics__succeeded)
                                                  {
                                                    mercury__table_statistics__succeeded = (mercury__table_statistics__V_69_69 == mercury__table_statistics__V_84_84);
                                                    if (mercury__table_statistics__succeeded)
                                                      {
                                                        mercury__table_statistics__succeeded = (mercury__table_statistics__V_70_70 == mercury__table_statistics__V_85_85);
                                                        if (mercury__table_statistics__succeeded)
                                                          {
                                                            mercury__table_statistics__succeeded = (mercury__table_statistics__V_71_71 == mercury__table_statistics__V_86_86);
                                                            if (mercury__table_statistics__succeeded)
                                                              {
                                                                mercury__table_statistics__succeeded = (mercury__table_statistics__V_72_72 == mercury__table_statistics__V_87_87);
                                                                if (mercury__table_statistics__succeeded)
                                                                  {
                                                                    mercury__table_statistics__succeeded = (mercury__table_statistics__V_73_73 == mercury__table_statistics__V_88_88);
                                                                    if (mercury__table_statistics__succeeded)
                                                                      {
                                                                        mercury__table_statistics__succeeded = (mercury__table_statistics__V_74_74 == mercury__table_statistics__V_89_89);
                                                                        if (mercury__table_statistics__succeeded)
                                                                          mercury__table_statistics__succeeded = (mercury__table_statistics__V_75_75 == mercury__table_statistics__V_90_90);
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
        MR_Word mercury__table_statistics__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__table_statistics__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mercury__table_statistics__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word mercury__table_statistics__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word mercury__table_statistics__V_8_8;

        {
          mercury__table_statistics____Compare____table_stats_0_0(&mercury__table_statistics__V_8_8, mercury__table_statistics__V_4_4, mercury__table_statistics__V_6_6);
        }
        mercury__table_statistics__succeeded = (mercury__table_statistics__V_8_8 == (MR_Integer) 0);
        mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
        if (mercury__table_statistics__succeeded)
          *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__V_8_8;
        else
          {
            mercury__table_statistics____Compare____table_stats_0_0(mercury__table_statistics__HeadVar__1_1, mercury__table_statistics__V_5_5, mercury__table_statistics__V_7_7);
          }
      }
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
        MR_Word mercury__table_statistics__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mercury__table_statistics__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mercury__table_statistics__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__table_statistics__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 1)));

        {
          mercury__table_statistics__succeeded = mercury__table_statistics____Unify____table_stats_0_0(mercury__table_statistics__V_3_3, mercury__table_statistics__V_5_5);
        }
        if (mercury__table_statistics__succeeded)
          {
            mercury__table_statistics__succeeded = mercury__table_statistics____Unify____table_stats_0_0(mercury__table_statistics__V_4_4, mercury__table_statistics__V_6_6);
          }
      }
    return mercury__table_statistics__succeeded;
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
        MR_Integer mercury__table_statistics__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer mercury__table_statistics__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mercury__table_statistics__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 2)));
        MR_Integer mercury__table_statistics__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 0)));
        MR_Integer mercury__table_statistics__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word mercury__table_statistics__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word mercury__table_statistics__V_10_10;

        mercury__table_statistics__succeeded = (mercury__table_statistics__V_4_4 < mercury__table_statistics__V_7_7);
        if (mercury__table_statistics__succeeded)
          mercury__table_statistics__V_10_10 = (MR_Integer) 1;
        else
          {
            mercury__table_statistics__succeeded = (mercury__table_statistics__V_4_4 == mercury__table_statistics__V_7_7);
            if (mercury__table_statistics__succeeded)
              mercury__table_statistics__V_10_10 = (MR_Integer) 0;
            else
              mercury__table_statistics__V_10_10 = (MR_Integer) 2;
          }
        mercury__table_statistics__succeeded = (mercury__table_statistics__V_10_10 == (MR_Integer) 0);
        mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
        if (mercury__table_statistics__succeeded)
          *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__V_10_10;
        else
          {
            MR_Word mercury__table_statistics__V_11_11;

            mercury__table_statistics__succeeded = (mercury__table_statistics__V_5_5 < mercury__table_statistics__V_8_8);
            if (mercury__table_statistics__succeeded)
              mercury__table_statistics__V_11_11 = (MR_Integer) 1;
            else
              {
                mercury__table_statistics__succeeded = (mercury__table_statistics__V_5_5 == mercury__table_statistics__V_8_8);
                if (mercury__table_statistics__succeeded)
                  mercury__table_statistics__V_11_11 = (MR_Integer) 0;
                else
                  mercury__table_statistics__V_11_11 = (MR_Integer) 2;
              }
            mercury__table_statistics__succeeded = (mercury__table_statistics__V_11_11 == (MR_Integer) 0);
            mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
            if (mercury__table_statistics__succeeded)
              *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__V_11_11;
            else
              {
                MR_Word mercury__table_statistics__TypeInfo_16_16 = (MR_Word) &mercury__table_statistics_scalar_common_1[0];

                {
                  mercury__builtin__compare_3_p_0(mercury__table_statistics__TypeInfo_16_16, mercury__table_statistics__HeadVar__1_1, ((MR_Box) (mercury__table_statistics__V_6_6)), ((MR_Box) (mercury__table_statistics__V_9_9)));
                }
              }
          }
      }
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
        MR_Integer mercury__table_statistics__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer mercury__table_statistics__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mercury__table_statistics__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 2)));
        MR_Integer mercury__table_statistics__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer mercury__table_statistics__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mercury__table_statistics__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 2)));

        mercury__table_statistics__succeeded = (mercury__table_statistics__V_3_3 == mercury__table_statistics__V_6_6);
        if (mercury__table_statistics__succeeded)
          {
            mercury__table_statistics__succeeded = (mercury__table_statistics__V_4_4 == mercury__table_statistics__V_7_7);
            if (mercury__table_statistics__succeeded)
              {
                mercury__table_statistics__TypeInfo_11_11 = (MR_Word) &mercury__table_statistics_scalar_common_1[0];
                {
                  mercury__table_statistics__succeeded = mercury__builtin__unify_2_p_0(mercury__table_statistics__TypeInfo_11_11, ((MR_Box) (mercury__table_statistics__V_5_5)), ((MR_Box) (mercury__table_statistics__V_8_8)));
                }
              }
          }
      }
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
        MR_Word mercury__table_statistics__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__table_statistics__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mercury__table_statistics__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word mercury__table_statistics__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word mercury__table_statistics__V_8_8;

        {
          mercury__table_statistics____Compare____table_stats_curr_prev_0_0(&mercury__table_statistics__V_8_8, mercury__table_statistics__V_4_4, mercury__table_statistics__V_6_6);
        }
        mercury__table_statistics__succeeded = (mercury__table_statistics__V_8_8 == (MR_Integer) 0);
        mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
        if (mercury__table_statistics__succeeded)
          *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__V_8_8;
        else
          {
            MR_Word mercury__table_statistics__TypeInfo_12_12 = (MR_Word) &mercury__table_statistics_scalar_common_1[1];

            {
              mercury__builtin__compare_3_p_0(mercury__table_statistics__TypeInfo_12_12, mercury__table_statistics__HeadVar__1_1, ((MR_Box) (mercury__table_statistics__V_5_5)), ((MR_Box) (mercury__table_statistics__V_7_7)));
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
        MR_Word mercury__table_statistics__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mercury__table_statistics__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mercury__table_statistics__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__table_statistics__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 1)));

        {
          mercury__table_statistics__succeeded = mercury__table_statistics____Unify____table_stats_curr_prev_0_0(mercury__table_statistics__V_3_3, mercury__table_statistics__V_5_5);
        }
        if (mercury__table_statistics__succeeded)
          {
            mercury__table_statistics__TypeInfo_9_9 = (MR_Word) &mercury__table_statistics_scalar_common_1[1];
            {
              mercury__table_statistics__succeeded = mercury__builtin__unify_2_p_0(mercury__table_statistics__TypeInfo_9_9, ((MR_Box) (mercury__table_statistics__V_4_4)), ((MR_Box) (mercury__table_statistics__V_6_6)));
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
    MR_bool mercury__table_statistics__succeeded;
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
    MR_bool mercury__table_statistics__succeeded;
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

static MR_String MR_CALL 
mercury__table_statistics__percentage_str_2_f_0(
  MR_Integer mercury__table_statistics__A_4,
  MR_Integer mercury__table_statistics__B_5)
{
  {
    MR_bool mercury__table_statistics__succeeded;
    MR_String mercury__table_statistics__PercentageStr_6;
    MR_Float mercury__table_statistics__Percentage_7;
    MR_Float mercury__table_statistics__V_8_8;
    MR_Float mercury__table_statistics__V_9_9;
    MR_Float mercury__table_statistics__V_11_11;
    MR_Float mercury__table_statistics__V_12_12;
    MR_String mercury__table_statistics__V_18_18;
    MR_Word mercury__table_statistics__V_24_24;
    MR_String mercury__table_statistics__V_27_27;
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
	 mercury__table_statistics__V_9_9  = FloatVal;
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
	 mercury__table_statistics__V_11_11  = FloatVal;
}
    mercury__table_statistics__V_8_8 = (mercury__table_statistics__V_9_9 * mercury__table_statistics__V_11_11);
{
#define MR_PROC_LABEL mercury__table_statistics__percentage_str_2_f_0

	MR_Integer IntVal;
	MR_Float FloatVal;

	IntVal =  mercury__table_statistics__B_5 ;
		{

    FloatVal = IntVal;


		;}
#undef MR_PROC_LABEL
	 mercury__table_statistics__V_12_12  = FloatVal;
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
      mercury__table_statistics__succeeded = (mercury__table_statistics__V_12_12 == ((MR_Float) 0.0000000000000000));
    if (mercury__table_statistics__succeeded)
      {
        MR_Word mercury__table_statistics__TypeCtorInfo_9_34 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
        MR_Word mercury__table_statistics__V_7_32 = (MR_Word) ((MR_Box) ((MR_String) "float.\'/\': division by zero"));

        {
          mercury__exception__throw_1_p_0(mercury__table_statistics__TypeCtorInfo_9_34, ((MR_Box) (mercury__table_statistics__V_7_32)));
        }
      }
    else
      mercury__table_statistics__Percentage_7 = (mercury__table_statistics__V_8_8 / mercury__table_statistics__V_12_12);
    mercury__table_statistics__V_24_24 = (MR_Word) &mercury__table_statistics_scalar_common_5[0];
    mercury__table_statistics__V_11_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__table_statistics__V_12_41 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__table_statistics_scalar_common_5[2]);
    {
      mercury__string__format__format_float_component_6_p_0(mercury__table_statistics__V_24_24, mercury__table_statistics__V_11_40, mercury__table_statistics__V_12_41, (MR_Integer) 2, mercury__table_statistics__Percentage_7, &mercury__table_statistics__V_18_18);
    }
    {
      mercury__string__append_3_p_2(mercury__table_statistics__V_18_18, (MR_String) "%)", &mercury__table_statistics__V_27_27);
    }
    {
      mercury__string__append_3_p_2((MR_String) "(", mercury__table_statistics__V_27_27, &mercury__table_statistics__PercentageStr_6);
    }
    return mercury__table_statistics__PercentageStr_6;
  }
}

static void MR_CALL 
mercury__table_statistics__write_table_step_stats_4_p_0(
  MR_Word mercury__table_statistics__Step_5,
  MR_Integer mercury__table_statistics__StepNum_6)
{
  {
    MR_bool mercury__table_statistics__succeeded;
    MR_String mercury__table_statistics__VarName_8 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__table_statistics__Step_5, (MR_Integer) 0)));
    MR_Integer mercury__table_statistics__Lookups_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__table_statistics__Step_5, (MR_Integer) 1)));
    MR_Integer mercury__table_statistics__LookupsIsDupl_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__table_statistics__Step_5, (MR_Integer) 2)));
    MR_Word mercury__table_statistics__Details_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__table_statistics__Step_5, (MR_Integer) 3)));

    switch (MR_tag((MR_Word) mercury__table_statistics__Details_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__table_statistics__write_table_step_stats_header_7_p_0(mercury__table_statistics__VarName_8, mercury__table_statistics__StepNum_6, (MR_String) "none", mercury__table_statistics__Lookups_9, mercury__table_statistics__LookupsIsDupl_10);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer mercury__table_statistics__StartAllocs_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__table_statistics__Details_11, (MR_Integer) 0)));
          MR_Integer mercury__table_statistics__StartBytes_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__table_statistics__Details_11, (MR_Integer) 1)));

          {
            mercury__table_statistics__write_table_step_stats_header_7_p_0(mercury__table_statistics__VarName_8, mercury__table_statistics__StepNum_6, (MR_String) "expandable array", mercury__table_statistics__Lookups_9, mercury__table_statistics__LookupsIsDupl_10);
          }
          mercury__table_statistics__succeeded = (mercury__table_statistics__Lookups_9 > (MR_Integer) 0);
          if (mercury__table_statistics__succeeded)
            {
              mercury__table_statistics__write_table_step_stats_start_4_p_0(mercury__table_statistics__StartAllocs_12, mercury__table_statistics__StartBytes_13);
            }
          else
            {
            }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer mercury__table_statistics__EnumNodeAllocs_14 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__table_statistics__Details_11, (MR_Integer) 0)));
          MR_Integer mercury__table_statistics__EnumNodeBytes_15 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__table_statistics__Details_11, (MR_Integer) 1)));

          {
            mercury__table_statistics__write_table_step_stats_header_7_p_0(mercury__table_statistics__VarName_8, mercury__table_statistics__StepNum_6, (MR_String) "enum trie", mercury__table_statistics__Lookups_9, mercury__table_statistics__LookupsIsDupl_10);
          }
          mercury__table_statistics__succeeded = (mercury__table_statistics__Lookups_9 > (MR_Integer) 0);
          if (mercury__table_statistics__succeeded)
            {
              mercury__table_statistics__write_table_step_stats_enum_4_p_0(mercury__table_statistics__EnumNodeAllocs_14, mercury__table_statistics__EnumNodeBytes_15);
            }
          else
            {
            }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_11, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer mercury__table_statistics__HashTableAllocs_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_11, (MR_Integer) 1)));
              MR_Integer mercury__table_statistics__HashTableBytes_17 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_11, (MR_Integer) 2)));
              MR_Integer mercury__table_statistics__HashLinkChunkAllocs_18 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_11, (MR_Integer) 3)));
              MR_Integer mercury__table_statistics__HashLinkChunkBytes_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_11, (MR_Integer) 4)));
              MR_Integer mercury__table_statistics__HashKeyComparesNotDupl_20 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_11, (MR_Integer) 5)));
              MR_Integer mercury__table_statistics__HashKeyComparesIsDupl_21 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_11, (MR_Integer) 6)));
              MR_Integer mercury__table_statistics__HashResizes_22 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_11, (MR_Integer) 7)));
              MR_Integer mercury__table_statistics__HashResizeOldEntries_23 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_11, (MR_Integer) 8)));
              MR_Integer mercury__table_statistics__HashResizeNewEntries_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_11, (MR_Integer) 9)));

              {
                mercury__table_statistics__write_table_step_stats_header_7_p_0(mercury__table_statistics__VarName_8, mercury__table_statistics__StepNum_6, (MR_String) "hash table", mercury__table_statistics__Lookups_9, mercury__table_statistics__LookupsIsDupl_10);
              }
              mercury__table_statistics__succeeded = (mercury__table_statistics__Lookups_9 > (MR_Integer) 0);
              if (mercury__table_statistics__succeeded)
                {
                  mercury__table_statistics__write_table_step_stats_hash_11_p_0(mercury__table_statistics__HashTableAllocs_16, mercury__table_statistics__HashTableBytes_17, mercury__table_statistics__HashLinkChunkAllocs_18, mercury__table_statistics__HashLinkChunkBytes_19, mercury__table_statistics__HashKeyComparesNotDupl_20, mercury__table_statistics__HashKeyComparesIsDupl_21, mercury__table_statistics__HashResizes_22, mercury__table_statistics__HashResizeOldEntries_23, mercury__table_statistics__HashResizeNewEntries_24);
                }
              else
                {
                }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer mercury__table_statistics__DuNodeAllocs_25 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_11, (MR_Integer) 1)));
              MR_Integer mercury__table_statistics__DuNodeBytes_26 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_11, (MR_Integer) 2)));
              MR_Integer mercury__table_statistics__DuArgLookups_27 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_11, (MR_Integer) 3)));
              MR_Integer mercury__table_statistics__DuExistLookups_28 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_11, (MR_Integer) 4)));
              MR_Integer mercury__table_statistics__EnumNodeAllocs_56 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_11, (MR_Integer) 5)));
              MR_Integer mercury__table_statistics__EnumNodeBytes_57 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_11, (MR_Integer) 6)));
              MR_Integer mercury__table_statistics__HashTableAllocs_58 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_11, (MR_Integer) 7)));
              MR_Integer mercury__table_statistics__HashTableBytes_59 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_11, (MR_Integer) 8)));
              MR_Integer mercury__table_statistics__HashLinkChunkAllocs_60 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_11, (MR_Integer) 9)));
              MR_Integer mercury__table_statistics__HashLinkChunkBytes_61 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_11, (MR_Integer) 10)));
              MR_Integer mercury__table_statistics__HashKeyComparesNotDupl_62 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_11, (MR_Integer) 11)));
              MR_Integer mercury__table_statistics__HashKeyComparesIsDupl_63 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_11, (MR_Integer) 12)));
              MR_Integer mercury__table_statistics__HashResizes_64 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_11, (MR_Integer) 13)));
              MR_Integer mercury__table_statistics__HashResizeOldEntries_65 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_11, (MR_Integer) 14)));
              MR_Integer mercury__table_statistics__HashResizeNewEntries_66 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_11, (MR_Integer) 15)));

              {
                mercury__table_statistics__write_table_step_stats_header_7_p_0(mercury__table_statistics__VarName_8, mercury__table_statistics__StepNum_6, (MR_String) "discriminated union nested trie", mercury__table_statistics__Lookups_9, mercury__table_statistics__LookupsIsDupl_10);
              }
              mercury__table_statistics__succeeded = (mercury__table_statistics__Lookups_9 > (MR_Integer) 0);
              if (mercury__table_statistics__succeeded)
                {
                  mercury__table_statistics__succeeded = (mercury__table_statistics__DuNodeAllocs_25 > (MR_Integer) 0);
                  if (mercury__table_statistics__succeeded)
                    {
                      mercury__table_statistics__write_table_step_stats_du_6_p_0(mercury__table_statistics__DuNodeAllocs_25, mercury__table_statistics__DuNodeBytes_26, mercury__table_statistics__DuArgLookups_27, mercury__table_statistics__DuExistLookups_28);
                    }
                  else
                    {
                      {
                        mercury__require__error_1_p_0((MR_String) "write_table_step_stats: no du stats");
                        return;
                      }
                    }
                  mercury__table_statistics__succeeded = (mercury__table_statistics__EnumNodeAllocs_56 > (MR_Integer) 0);
                  if (mercury__table_statistics__succeeded)
                    {
                      mercury__table_statistics__write_table_step_stats_enum_4_p_0(mercury__table_statistics__EnumNodeAllocs_56, mercury__table_statistics__EnumNodeBytes_57);
                    }
                  else
                    {
                    }
                  mercury__table_statistics__succeeded = (mercury__table_statistics__HashTableAllocs_58 > (MR_Integer) 0);
                  if (mercury__table_statistics__succeeded)
                    {
                      mercury__table_statistics__write_table_step_stats_hash_11_p_0(mercury__table_statistics__HashTableAllocs_58, mercury__table_statistics__HashTableBytes_59, mercury__table_statistics__HashLinkChunkAllocs_60, mercury__table_statistics__HashLinkChunkBytes_61, mercury__table_statistics__HashKeyComparesNotDupl_62, mercury__table_statistics__HashKeyComparesIsDupl_63, mercury__table_statistics__HashResizes_64, mercury__table_statistics__HashResizeOldEntries_65, mercury__table_statistics__HashResizeNewEntries_66);
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
              MR_Integer mercury__table_statistics__DuNodeAllocs_85 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_11, (MR_Integer) 1)));
              MR_Integer mercury__table_statistics__DuNodeBytes_86 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_11, (MR_Integer) 2)));
              MR_Integer mercury__table_statistics__DuArgLookups_87 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_11, (MR_Integer) 3)));
              MR_Integer mercury__table_statistics__DuExistLookups_88 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_11, (MR_Integer) 4)));
              MR_Integer mercury__table_statistics__EnumNodeAllocs_98 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_11, (MR_Integer) 5)));
              MR_Integer mercury__table_statistics__EnumNodeBytes_99 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_11, (MR_Integer) 6)));
              MR_Integer mercury__table_statistics__HashTableAllocs_100 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_11, (MR_Integer) 7)));
              MR_Integer mercury__table_statistics__HashTableBytes_101 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_11, (MR_Integer) 8)));
              MR_Integer mercury__table_statistics__HashLinkChunkAllocs_102 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_11, (MR_Integer) 9)));
              MR_Integer mercury__table_statistics__HashLinkChunkBytes_103 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_11, (MR_Integer) 10)));
              MR_Integer mercury__table_statistics__HashKeyComparesNotDupl_104 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_11, (MR_Integer) 11)));
              MR_Integer mercury__table_statistics__HashKeyComparesIsDupl_105 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_11, (MR_Integer) 12)));
              MR_Integer mercury__table_statistics__HashResizes_106 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_11, (MR_Integer) 13)));
              MR_Integer mercury__table_statistics__HashResizeOldEntries_107 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_11, (MR_Integer) 14)));
              MR_Integer mercury__table_statistics__HashResizeNewEntries_108 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_11, (MR_Integer) 15)));

              {
                mercury__table_statistics__write_table_step_stats_header_7_p_0(mercury__table_statistics__VarName_8, mercury__table_statistics__StepNum_6, (MR_String) "polymorphic table", mercury__table_statistics__Lookups_9, mercury__table_statistics__LookupsIsDupl_10);
              }
              mercury__table_statistics__succeeded = (mercury__table_statistics__Lookups_9 > (MR_Integer) 0);
              if (mercury__table_statistics__succeeded)
                {
                  mercury__table_statistics__succeeded = (mercury__table_statistics__DuNodeAllocs_85 > (MR_Integer) 0);
                  if (mercury__table_statistics__succeeded)
                    {
                      mercury__table_statistics__write_table_step_stats_du_6_p_0(mercury__table_statistics__DuNodeAllocs_85, mercury__table_statistics__DuNodeBytes_86, mercury__table_statistics__DuArgLookups_87, mercury__table_statistics__DuExistLookups_88);
                    }
                  else
                    {
                    }
                  mercury__table_statistics__succeeded = (mercury__table_statistics__EnumNodeAllocs_98 > (MR_Integer) 0);
                  if (mercury__table_statistics__succeeded)
                    {
                      mercury__table_statistics__write_table_step_stats_enum_4_p_0(mercury__table_statistics__EnumNodeAllocs_98, mercury__table_statistics__EnumNodeBytes_99);
                    }
                  else
                    {
                    }
                  mercury__table_statistics__succeeded = (mercury__table_statistics__HashTableAllocs_100 > (MR_Integer) 0);
                  if (mercury__table_statistics__succeeded)
                    {
                      mercury__table_statistics__write_table_step_stats_hash_11_p_0(mercury__table_statistics__HashTableAllocs_100, mercury__table_statistics__HashTableBytes_101, mercury__table_statistics__HashLinkChunkAllocs_102, mercury__table_statistics__HashLinkChunkBytes_103, mercury__table_statistics__HashKeyComparesNotDupl_104, mercury__table_statistics__HashKeyComparesIsDupl_105, mercury__table_statistics__HashResizes_106, mercury__table_statistics__HashResizeOldEntries_107, mercury__table_statistics__HashResizeNewEntries_108);
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
mercury__table_statistics__write_table_step_stats_du_6_p_0(
  MR_Integer mercury__table_statistics__DuNodeAllocs_7,
  MR_Integer mercury__table_statistics__DuNodeBytes_8,
  MR_Integer mercury__table_statistics__DuArgLookups_9,
  MR_Integer mercury__table_statistics__DuExistLookups_10)
{
  {
    MR_bool mercury__table_statistics__succeeded;
    MR_String mercury__table_statistics__DuNodeAllocsStr_12;
    MR_String mercury__table_statistics__DuNodeBytesStr_13;
    MR_String mercury__table_statistics__DuArgLookupsStr_14;
    MR_String mercury__table_statistics__DuExistLookupsStr_15;
    MR_String mercury__table_statistics__V_42_42;
    MR_Word mercury__table_statistics__V_48_48;
    MR_String mercury__table_statistics__V_54_54;
    MR_String mercury__table_statistics__V_66_66;

    {
      mercury__table_statistics__DuNodeAllocsStr_12 = mercury__string__int_to_base_string_group_4_f_0(mercury__table_statistics__DuNodeAllocs_7, (MR_Integer) 10, (MR_Integer) 3, (MR_String) ",");
    }
    {
      mercury__table_statistics__DuNodeBytesStr_13 = mercury__string__int_to_base_string_group_4_f_0(mercury__table_statistics__DuNodeBytes_8, (MR_Integer) 10, (MR_Integer) 3, (MR_String) ",");
    }
    {
      mercury__table_statistics__DuArgLookupsStr_14 = mercury__string__int_to_string_thousands_1_f_0(mercury__table_statistics__DuArgLookups_9);
    }
    {
      mercury__table_statistics__DuExistLookupsStr_15 = mercury__string__int_to_string_thousands_1_f_0(mercury__table_statistics__DuExistLookups_10);
    }
{
#define MR_PROC_LABEL mercury__table_statistics__write_table_step_stats_du_6_p_0

	MR_String Message;

	Message =  (MR_String) "  number of du functor node allocations:      " ;
		{

    mercury_print_string(mercury_current_text_output(), Message);


		;}
#undef MR_PROC_LABEL
}
    mercury__table_statistics__V_48_48 = (MR_Word) &mercury__table_statistics_scalar_common_5[0];
    {
      mercury__string__format__format_string_component_width_noprec_4_p_0(mercury__table_statistics__V_48_48, (MR_Integer) 9, mercury__table_statistics__DuNodeAllocsStr_12, &mercury__table_statistics__V_42_42);
    }
{
#define MR_PROC_LABEL mercury__table_statistics__write_table_step_stats_du_6_p_0

	MR_String Message;

	Message =  mercury__table_statistics__V_42_42 ;
		{

    mercury_print_string(mercury_current_text_output(), Message);


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__table_statistics__write_table_step_stats_du_6_p_0

	MR_String Message;

	Message =  (MR_String) "\n" ;
		{

    mercury_print_string(mercury_current_text_output(), Message);


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__table_statistics__write_table_step_stats_du_6_p_0

	MR_String Message;

	Message =  (MR_String) "  number of bytes allocated for du functors:  " ;
		{

    mercury_print_string(mercury_current_text_output(), Message);


		;}
#undef MR_PROC_LABEL
}
    {
      mercury__string__format__format_string_component_width_noprec_4_p_0(mercury__table_statistics__V_48_48, (MR_Integer) 9, mercury__table_statistics__DuNodeBytesStr_13, &mercury__table_statistics__V_54_54);
    }
{
#define MR_PROC_LABEL mercury__table_statistics__write_table_step_stats_du_6_p_0

	MR_String Message;

	Message =  mercury__table_statistics__V_54_54 ;
		{

    mercury_print_string(mercury_current_text_output(), Message);


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__table_statistics__write_table_step_stats_du_6_p_0

	MR_String Message;

	Message =  (MR_String) "\n" ;
		{

    mercury_print_string(mercury_current_text_output(), Message);


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__table_statistics__write_table_step_stats_du_6_p_0

	MR_String Message;

	Message =  (MR_String) "  number of du functor argument lookups:      " ;
		{

    mercury_print_string(mercury_current_text_output(), Message);


		;}
#undef MR_PROC_LABEL
}
    {
      mercury__string__format__format_string_component_width_noprec_4_p_0(mercury__table_statistics__V_48_48, (MR_Integer) 9, mercury__table_statistics__DuArgLookupsStr_14, &mercury__table_statistics__V_66_66);
    }
{
#define MR_PROC_LABEL mercury__table_statistics__write_table_step_stats_du_6_p_0

	MR_String Message;

	Message =  mercury__table_statistics__V_66_66 ;
		{

    mercury_print_string(mercury_current_text_output(), Message);


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__table_statistics__write_table_step_stats_du_6_p_0

	MR_String Message;

	Message =  (MR_String) "\n" ;
		{

    mercury_print_string(mercury_current_text_output(), Message);


		;}
#undef MR_PROC_LABEL
}
    mercury__table_statistics__succeeded = (mercury__table_statistics__DuExistLookups_10 > (MR_Integer) 0);
    if (mercury__table_statistics__succeeded)
      {
        MR_String mercury__table_statistics__V_78_78;

{
#define MR_PROC_LABEL mercury__table_statistics__write_table_step_stats_du_6_p_0

	MR_String Message;

	Message =  (MR_String) "  number of du existential type lookups:      " ;
		{

    mercury_print_string(mercury_current_text_output(), Message);


		;}
#undef MR_PROC_LABEL
}
        {
          mercury__string__format__format_string_component_width_noprec_4_p_0(mercury__table_statistics__V_48_48, (MR_Integer) 9, mercury__table_statistics__DuExistLookupsStr_15, &mercury__table_statistics__V_78_78);
        }
{
#define MR_PROC_LABEL mercury__table_statistics__write_table_step_stats_du_6_p_0

	MR_String Message;

	Message =  mercury__table_statistics__V_78_78 ;
		{

    mercury_print_string(mercury_current_text_output(), Message);


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__table_statistics__write_table_step_stats_du_6_p_0

	MR_String Message;

	Message =  (MR_String) "\n" ;
		{

    mercury_print_string(mercury_current_text_output(), Message);


		;}
#undef MR_PROC_LABEL
}
      }
    else
      {
      }
  }
}

static void MR_CALL 
mercury__table_statistics__write_table_step_stats_hash_11_p_0(
  MR_Integer mercury__table_statistics__HashTableAllocs_12,
  MR_Integer mercury__table_statistics__HashTableBytes_13,
  MR_Integer mercury__table_statistics__HashLinkChunkAllocs_14,
  MR_Integer mercury__table_statistics__HashLinkChunkBytes_15,
  MR_Integer mercury__table_statistics__HashKeyComparesNotDupl_16,
  MR_Integer mercury__table_statistics__HashKeyComparesIsDupl_17,
  MR_Integer mercury__table_statistics__HashResizes_18,
  MR_Integer mercury__table_statistics__HashResizeOldEntries_19,
  MR_Integer mercury__table_statistics__HashResizeNewEntries_20)
{
  {
    MR_bool mercury__table_statistics__succeeded;
    MR_String mercury__table_statistics__HashTableAllocsStr_22;
    MR_String mercury__table_statistics__HashTableBytesStr_23;
    MR_String mercury__table_statistics__HashLinkChunkAllocsStr_24;
    MR_String mercury__table_statistics__HashLinkChunkBytesStr_25;
    MR_String mercury__table_statistics__HashKeyComparesNotDuplStr_26;
    MR_String mercury__table_statistics__HashKeyComparesIsDuplStr_27;
    MR_String mercury__table_statistics__HashResizesStr_28;
    MR_String mercury__table_statistics__HashResizeOldEntriesStr_29;
    MR_String mercury__table_statistics__HashResizeNewEntriesStr_30;
    MR_String mercury__table_statistics__V_82_82;
    MR_Word mercury__table_statistics__V_88_88;
    MR_String mercury__table_statistics__V_94_94;
    MR_String mercury__table_statistics__V_106_106;
    MR_String mercury__table_statistics__V_118_118;
    MR_String mercury__table_statistics__V_130_130;
    MR_String mercury__table_statistics__V_142_142;
    MR_String mercury__table_statistics__V_154_154;

    {
      mercury__table_statistics__HashTableAllocsStr_22 = mercury__string__int_to_string_thousands_1_f_0(mercury__table_statistics__HashTableAllocs_12);
    }
    {
      mercury__table_statistics__HashTableBytesStr_23 = mercury__string__int_to_string_thousands_1_f_0(mercury__table_statistics__HashTableBytes_13);
    }
    {
      mercury__table_statistics__HashLinkChunkAllocsStr_24 = mercury__string__int_to_string_thousands_1_f_0(mercury__table_statistics__HashLinkChunkAllocs_14);
    }
    {
      mercury__table_statistics__HashLinkChunkBytesStr_25 = mercury__string__int_to_string_thousands_1_f_0(mercury__table_statistics__HashLinkChunkBytes_15);
    }
    {
      mercury__table_statistics__HashKeyComparesNotDuplStr_26 = mercury__string__int_to_string_thousands_1_f_0(mercury__table_statistics__HashKeyComparesNotDupl_16);
    }
    {
      mercury__table_statistics__HashKeyComparesIsDuplStr_27 = mercury__string__int_to_string_thousands_1_f_0(mercury__table_statistics__HashKeyComparesIsDupl_17);
    }
    {
      mercury__table_statistics__HashResizesStr_28 = mercury__string__int_to_string_thousands_1_f_0(mercury__table_statistics__HashResizes_18);
    }
    {
      mercury__table_statistics__HashResizeOldEntriesStr_29 = mercury__string__int_to_string_thousands_1_f_0(mercury__table_statistics__HashResizeOldEntries_19);
    }
    {
      mercury__table_statistics__HashResizeNewEntriesStr_30 = mercury__string__int_to_string_thousands_1_f_0(mercury__table_statistics__HashResizeNewEntries_20);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "  number of hash table allocations:           ");
    }
    mercury__table_statistics__V_88_88 = (MR_Word) &mercury__table_statistics_scalar_common_5[0];
    {
      mercury__string__format__format_string_component_width_noprec_4_p_0(mercury__table_statistics__V_88_88, (MR_Integer) 9, mercury__table_statistics__HashTableAllocsStr_22, &mercury__table_statistics__V_82_82);
    }
    {
      mercury__io__write_string_3_p_0(mercury__table_statistics__V_82_82);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "  number of bytes allocated for hash tables:  ");
    }
    {
      mercury__string__format__format_string_component_width_noprec_4_p_0(mercury__table_statistics__V_88_88, (MR_Integer) 9, mercury__table_statistics__HashTableBytesStr_23, &mercury__table_statistics__V_94_94);
    }
    {
      mercury__io__write_string_3_p_0(mercury__table_statistics__V_94_94);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "  number of bulk hash link allocations:       ");
    }
    {
      mercury__string__format__format_string_component_width_noprec_4_p_0(mercury__table_statistics__V_88_88, (MR_Integer) 9, mercury__table_statistics__HashLinkChunkAllocsStr_24, &mercury__table_statistics__V_106_106);
    }
    {
      mercury__io__write_string_3_p_0(mercury__table_statistics__V_106_106);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "  number of bytes allocated for hash links:   ");
    }
    {
      mercury__string__format__format_string_component_width_noprec_4_p_0(mercury__table_statistics__V_88_88, (MR_Integer) 9, mercury__table_statistics__HashLinkChunkBytesStr_25, &mercury__table_statistics__V_118_118);
    }
    {
      mercury__io__write_string_3_p_0(mercury__table_statistics__V_118_118);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "  number of key compares when unsuccessful:   ");
    }
    {
      mercury__string__format__format_string_component_width_noprec_4_p_0(mercury__table_statistics__V_88_88, (MR_Integer) 9, mercury__table_statistics__HashKeyComparesNotDuplStr_26, &mercury__table_statistics__V_130_130);
    }
    {
      mercury__io__write_string_3_p_0(mercury__table_statistics__V_130_130);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "  number of key compares when successful:     ");
    }
    {
      mercury__string__format__format_string_component_width_noprec_4_p_0(mercury__table_statistics__V_88_88, (MR_Integer) 9, mercury__table_statistics__HashKeyComparesIsDuplStr_27, &mercury__table_statistics__V_142_142);
    }
    {
      mercury__io__write_string_3_p_0(mercury__table_statistics__V_142_142);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "  number of hash table resizes:               ");
    }
    {
      mercury__string__format__format_string_component_width_noprec_4_p_0(mercury__table_statistics__V_88_88, (MR_Integer) 9, mercury__table_statistics__HashResizesStr_28, &mercury__table_statistics__V_154_154);
    }
    {
      mercury__io__write_string_3_p_0(mercury__table_statistics__V_154_154);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    mercury__table_statistics__succeeded = (mercury__table_statistics__HashResizes_18 > (MR_Integer) 0);
    if (mercury__table_statistics__succeeded)
      {
        MR_String mercury__table_statistics__V_166_166;
        MR_String mercury__table_statistics__V_178_178;

        {
          mercury__io__write_string_3_p_0((MR_String) "  number of old entries in resizes:           ");
        }
        {
          mercury__string__format__format_string_component_width_noprec_4_p_0(mercury__table_statistics__V_88_88, (MR_Integer) 9, mercury__table_statistics__HashResizeOldEntriesStr_29, &mercury__table_statistics__V_166_166);
        }
        {
          mercury__io__write_string_3_p_0(mercury__table_statistics__V_166_166);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "  number of new entries in resizes:           ");
        }
        {
          mercury__string__format__format_string_component_width_noprec_4_p_0(mercury__table_statistics__V_88_88, (MR_Integer) 9, mercury__table_statistics__HashResizeNewEntriesStr_30, &mercury__table_statistics__V_178_178);
        }
        {
          mercury__io__write_string_3_p_0(mercury__table_statistics__V_178_178);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
      }
    else
      {
      }
  }
}

static void MR_CALL 
mercury__table_statistics__write_table_step_stats_enum_4_p_0(
  MR_Integer mercury__table_statistics__EnumNodeAllocs_5,
  MR_Integer mercury__table_statistics__EnumNodeBytes_6)
{
  {
    MR_bool mercury__table_statistics__succeeded;
    MR_String mercury__table_statistics__EnumNodeAllocsStr_8;
    MR_String mercury__table_statistics__EnumNodeBytesStr_9;
    MR_String mercury__table_statistics__V_25_25;
    MR_Word mercury__table_statistics__V_31_31;
    MR_String mercury__table_statistics__V_37_37;
    MR_Word mercury__table_statistics__V_10_61;
    MR_Word mercury__table_statistics__V_9_66;
    MR_Word mercury__table_statistics__V_10_67;

    {
      mercury__table_statistics__EnumNodeAllocsStr_8 = mercury__string__int_to_base_string_group_4_f_0(mercury__table_statistics__EnumNodeAllocs_5, (MR_Integer) 10, (MR_Integer) 3, (MR_String) ",");
    }
    {
      mercury__table_statistics__EnumNodeBytesStr_9 = mercury__string__int_to_base_string_group_4_f_0(mercury__table_statistics__EnumNodeBytes_6, (MR_Integer) 10, (MR_Integer) 3, (MR_String) ",");
    }
{
#define MR_PROC_LABEL mercury__table_statistics__write_table_step_stats_enum_4_p_0

	MR_String Message;

	Message =  (MR_String) "  number of enum node allocations:            " ;
		{

    mercury_print_string(mercury_current_text_output(), Message);


		;}
#undef MR_PROC_LABEL
}
    mercury__table_statistics__V_31_31 = (MR_Word) &mercury__table_statistics_scalar_common_5[0];
    mercury__table_statistics__V_9_66 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__table_statistics_scalar_common_5[1]);
    mercury__table_statistics__V_10_61 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__string__format__format_string_component_5_p_0(mercury__table_statistics__V_31_31, mercury__table_statistics__V_9_66, mercury__table_statistics__V_10_61, mercury__table_statistics__EnumNodeAllocsStr_8, &mercury__table_statistics__V_25_25);
    }
{
#define MR_PROC_LABEL mercury__table_statistics__write_table_step_stats_enum_4_p_0

	MR_String Message;

	Message =  mercury__table_statistics__V_25_25 ;
		{

    mercury_print_string(mercury_current_text_output(), Message);


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__table_statistics__write_table_step_stats_enum_4_p_0

	MR_String Message;

	Message =  (MR_String) "\n" ;
		{

    mercury_print_string(mercury_current_text_output(), Message);


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__table_statistics__write_table_step_stats_enum_4_p_0

	MR_String Message;

	Message =  (MR_String) "  number of bytes allocated for enum nodes:   " ;
		{

    mercury_print_string(mercury_current_text_output(), Message);


		;}
#undef MR_PROC_LABEL
}
    mercury__table_statistics__V_10_67 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__string__format__format_string_component_5_p_0(mercury__table_statistics__V_31_31, mercury__table_statistics__V_9_66, mercury__table_statistics__V_10_67, mercury__table_statistics__EnumNodeBytesStr_9, &mercury__table_statistics__V_37_37);
    }
{
#define MR_PROC_LABEL mercury__table_statistics__write_table_step_stats_enum_4_p_0

	MR_String Message;

	Message =  mercury__table_statistics__V_37_37 ;
		{

    mercury_print_string(mercury_current_text_output(), Message);


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__table_statistics__write_table_step_stats_enum_4_p_0

	MR_String Message;

	Message =  (MR_String) "\n" ;
		{

    mercury_print_string(mercury_current_text_output(), Message);


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
mercury__table_statistics__write_table_step_stats_start_4_p_0(
  MR_Integer mercury__table_statistics__StartAllocs_5,
  MR_Integer mercury__table_statistics__StartBytes_6)
{
  {
    MR_bool mercury__table_statistics__succeeded;
    MR_String mercury__table_statistics__StartAllocsStr_8;
    MR_String mercury__table_statistics__StartBytesStr_9;
    MR_String mercury__table_statistics__V_25_25;
    MR_Word mercury__table_statistics__V_31_31;
    MR_String mercury__table_statistics__V_37_37;
    MR_Word mercury__table_statistics__V_10_61;
    MR_Word mercury__table_statistics__V_9_66;
    MR_Word mercury__table_statistics__V_10_67;

    {
      mercury__table_statistics__StartAllocsStr_8 = mercury__string__int_to_base_string_group_4_f_0(mercury__table_statistics__StartAllocs_5, (MR_Integer) 10, (MR_Integer) 3, (MR_String) ",");
    }
    {
      mercury__table_statistics__StartBytesStr_9 = mercury__string__int_to_base_string_group_4_f_0(mercury__table_statistics__StartBytes_6, (MR_Integer) 10, (MR_Integer) 3, (MR_String) ",");
    }
{
#define MR_PROC_LABEL mercury__table_statistics__write_table_step_stats_start_4_p_0

	MR_String Message;

	Message =  (MR_String) "  number of array (re)allocations:            " ;
		{

    mercury_print_string(mercury_current_text_output(), Message);


		;}
#undef MR_PROC_LABEL
}
    mercury__table_statistics__V_31_31 = (MR_Word) &mercury__table_statistics_scalar_common_5[0];
    mercury__table_statistics__V_9_66 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__table_statistics_scalar_common_5[1]);
    mercury__table_statistics__V_10_61 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__string__format__format_string_component_5_p_0(mercury__table_statistics__V_31_31, mercury__table_statistics__V_9_66, mercury__table_statistics__V_10_61, mercury__table_statistics__StartAllocsStr_8, &mercury__table_statistics__V_25_25);
    }
{
#define MR_PROC_LABEL mercury__table_statistics__write_table_step_stats_start_4_p_0

	MR_String Message;

	Message =  mercury__table_statistics__V_25_25 ;
		{

    mercury_print_string(mercury_current_text_output(), Message);


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__table_statistics__write_table_step_stats_start_4_p_0

	MR_String Message;

	Message =  (MR_String) "\n" ;
		{

    mercury_print_string(mercury_current_text_output(), Message);


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__table_statistics__write_table_step_stats_start_4_p_0

	MR_String Message;

	Message =  (MR_String) "  number of bytes (re)allocationed:           " ;
		{

    mercury_print_string(mercury_current_text_output(), Message);


		;}
#undef MR_PROC_LABEL
}
    mercury__table_statistics__V_10_67 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__string__format__format_string_component_5_p_0(mercury__table_statistics__V_31_31, mercury__table_statistics__V_9_66, mercury__table_statistics__V_10_67, mercury__table_statistics__StartBytesStr_9, &mercury__table_statistics__V_37_37);
    }
{
#define MR_PROC_LABEL mercury__table_statistics__write_table_step_stats_start_4_p_0

	MR_String Message;

	Message =  mercury__table_statistics__V_37_37 ;
		{

    mercury_print_string(mercury_current_text_output(), Message);


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__table_statistics__write_table_step_stats_start_4_p_0

	MR_String Message;

	Message =  (MR_String) "\n" ;
		{

    mercury_print_string(mercury_current_text_output(), Message);


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
mercury__table_statistics__write_table_step_stats_header_7_p_0(
  MR_String mercury__table_statistics__VarName_8,
  MR_Integer mercury__table_statistics__StepNum_9,
  MR_String mercury__table_statistics__KindStr_10,
  MR_Integer mercury__table_statistics__Lookups_11,
  MR_Integer mercury__table_statistics__LookupsIsDupl_12)
{
  {
    MR_bool mercury__table_statistics__succeeded;
    MR_Integer mercury__table_statistics__LookupsNotDupl_14;
    MR_String mercury__table_statistics__LookupsStr_15;
    MR_String mercury__table_statistics__LookupsIsDuplStr_16;
    MR_String mercury__table_statistics__LookupsNotDuplStr_17;
    MR_String mercury__table_statistics__V_54_54;
    MR_Word mercury__table_statistics__V_60_60;
    MR_String mercury__table_statistics__V_71_71;

    {
      mercury__io__write_string_3_p_0((MR_String) "\nstep ");
    }
    mercury__table_statistics__V_60_60 = (MR_Word) &mercury__table_statistics_scalar_common_5[0];
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(mercury__table_statistics__V_60_60, mercury__table_statistics__StepNum_9, &mercury__table_statistics__V_54_54);
    }
    {
      mercury__io__write_string_3_p_0(mercury__table_statistics__V_54_54);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ", variable ");
    }
    {
      mercury__io__write_string_3_p_0(mercury__table_statistics__VarName_8);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ": ");
    }
    {
      mercury__io__write_string_3_p_0(mercury__table_statistics__KindStr_10);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    mercury__table_statistics__LookupsNotDupl_14 = (mercury__table_statistics__Lookups_11 - mercury__table_statistics__LookupsIsDupl_12);
    {
      mercury__table_statistics__LookupsStr_15 = mercury__string__int_to_string_thousands_1_f_0(mercury__table_statistics__Lookups_11);
    }
    {
      mercury__table_statistics__LookupsIsDuplStr_16 = mercury__string__int_to_string_thousands_1_f_0(mercury__table_statistics__LookupsIsDupl_12);
    }
    {
      mercury__table_statistics__LookupsNotDuplStr_17 = mercury__string__int_to_string_thousands_1_f_0(mercury__table_statistics__LookupsNotDupl_14);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "  number of lookups:                          ");
    }
    {
      mercury__string__format__format_string_component_width_noprec_4_p_0(mercury__table_statistics__V_60_60, (MR_Integer) 9, mercury__table_statistics__LookupsStr_15, &mercury__table_statistics__V_71_71);
    }
    {
      mercury__io__write_string_3_p_0(mercury__table_statistics__V_71_71);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    mercury__table_statistics__succeeded = (mercury__table_statistics__Lookups_11 > (MR_Integer) 0);
    if (mercury__table_statistics__succeeded)
      {
        MR_String mercury__table_statistics__FractionIsDuplStr_18;
        MR_String mercury__table_statistics__FractionNotDuplStr_19;
        MR_String mercury__table_statistics__V_83_83;
        MR_String mercury__table_statistics__V_94_94;
        MR_String mercury__table_statistics__V_106_106;
        MR_String mercury__table_statistics__V_117_117;

        {
          mercury__table_statistics__FractionIsDuplStr_18 = mercury__table_statistics__percentage_str_2_f_0(mercury__table_statistics__LookupsIsDupl_12, mercury__table_statistics__Lookups_11);
        }
        {
          mercury__table_statistics__FractionNotDuplStr_19 = mercury__table_statistics__percentage_str_2_f_0(mercury__table_statistics__LookupsNotDupl_14, mercury__table_statistics__Lookups_11);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "  number of successful lookups:               ");
        }
        {
          mercury__string__format__format_string_component_width_noprec_4_p_0(mercury__table_statistics__V_60_60, (MR_Integer) 9, mercury__table_statistics__LookupsIsDuplStr_16, &mercury__table_statistics__V_83_83);
        }
        {
          mercury__io__write_string_3_p_0(mercury__table_statistics__V_83_83);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) " ");
        }
        {
          mercury__string__format__format_string_component_width_noprec_4_p_0(mercury__table_statistics__V_60_60, (MR_Integer) 9, mercury__table_statistics__FractionIsDuplStr_18, &mercury__table_statistics__V_94_94);
        }
        {
          mercury__io__write_string_3_p_0(mercury__table_statistics__V_94_94);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "  number of unsuccessful lookups:             ");
        }
        {
          mercury__string__format__format_string_component_width_noprec_4_p_0(mercury__table_statistics__V_60_60, (MR_Integer) 9, mercury__table_statistics__LookupsNotDuplStr_17, &mercury__table_statistics__V_106_106);
        }
        {
          mercury__io__write_string_3_p_0(mercury__table_statistics__V_106_106);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) " ");
        }
        {
          mercury__string__format__format_string_component_width_noprec_4_p_0(mercury__table_statistics__V_60_60, (MR_Integer) 9, mercury__table_statistics__FractionNotDuplStr_19, &mercury__table_statistics__V_117_117);
        }
        {
          mercury__io__write_string_3_p_0(mercury__table_statistics__V_117_117);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
      }
    else
      {
      }
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
          MR_Integer mercury__table_statistics__V_82_82;
          MR_Integer mercury__table_statistics__V_83_83;

          mercury__table_statistics__succeeded = ((MR_tag((MR_Word) mercury__table_statistics__DetailsB_5)) == (MR_mktag((MR_Integer) 1)));
          if (mercury__table_statistics__succeeded)
            {
              mercury__table_statistics__StartAllocsB_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__table_statistics__DetailsB_5, (MR_Integer) 0)));
              mercury__table_statistics__StartBytesB_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__table_statistics__DetailsB_5, (MR_Integer) 1)));
              mercury__table_statistics__V_82_82 = (mercury__table_statistics__StartAllocsA_7 - mercury__table_statistics__StartAllocsB_9);
              mercury__table_statistics__V_83_83 = (mercury__table_statistics__StartBytesA_8 - mercury__table_statistics__StartBytesB_10);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *mercury__table_statistics__DetailsDiff_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__table_statistics__V_82_82));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__table_statistics__V_83_83));
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
          MR_Integer mercury__table_statistics__V_80_80;
          MR_Integer mercury__table_statistics__V_81_81;

          mercury__table_statistics__succeeded = ((MR_tag((MR_Word) mercury__table_statistics__DetailsB_5)) == (MR_mktag((MR_Integer) 2)));
          if (mercury__table_statistics__succeeded)
            {
              mercury__table_statistics__EnumNodeAllocsB_13 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__table_statistics__DetailsB_5, (MR_Integer) 0)));
              mercury__table_statistics__EnumNodeBytesB_14 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__table_statistics__DetailsB_5, (MR_Integer) 1)));
              mercury__table_statistics__V_80_80 = (mercury__table_statistics__EnumNodeAllocsA_11 - mercury__table_statistics__EnumNodeAllocsB_13);
              mercury__table_statistics__V_81_81 = (mercury__table_statistics__EnumNodeBytesA_12 - mercury__table_statistics__EnumNodeBytesB_14);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *mercury__table_statistics__DetailsDiff_6 = base;
                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__table_statistics__V_80_80));
                MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mercury__table_statistics__V_81_81));
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
              MR_Integer mercury__table_statistics__V_71_71;
              MR_Integer mercury__table_statistics__V_72_72;
              MR_Integer mercury__table_statistics__V_73_73;
              MR_Integer mercury__table_statistics__V_74_74;
              MR_Integer mercury__table_statistics__V_75_75;
              MR_Integer mercury__table_statistics__V_76_76;
              MR_Integer mercury__table_statistics__V_77_77;
              MR_Integer mercury__table_statistics__V_78_78;
              MR_Integer mercury__table_statistics__V_79_79;

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
                  mercury__table_statistics__V_71_71 = (mercury__table_statistics__HashTableAllocsA_15 - mercury__table_statistics__HashTableAllocsB_24);
                  mercury__table_statistics__V_72_72 = (mercury__table_statistics__HashTableBytesA_16 - mercury__table_statistics__HashTableBytesB_25);
                  mercury__table_statistics__V_73_73 = (mercury__table_statistics__HashLinkChunkAllocsA_17 - mercury__table_statistics__HashLinkChunkAllocsB_26);
                  mercury__table_statistics__V_74_74 = (mercury__table_statistics__HashLinkChunkBytesA_18 - mercury__table_statistics__HashLinkChunkBytesB_27);
                  mercury__table_statistics__V_75_75 = (mercury__table_statistics__HashKeyComparesNotDuplA_19 - mercury__table_statistics__HashKeyComparesNotDuplB_28);
                  mercury__table_statistics__V_76_76 = (mercury__table_statistics__HashKeyComparesIsDuplA_20 - mercury__table_statistics__HashKeyComparesIsDuplB_29);
                  mercury__table_statistics__V_77_77 = (mercury__table_statistics__HashResizesA_21 - mercury__table_statistics__HashResizesB_30);
                  mercury__table_statistics__V_78_78 = (mercury__table_statistics__HashResizeOldEntriesA_22 - mercury__table_statistics__HashResizeOldEntriesB_31);
                  mercury__table_statistics__V_79_79 = (mercury__table_statistics__HashResizeNewEntriesA_23 - mercury__table_statistics__HashResizeNewEntriesB_32);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL));
                    *mercury__table_statistics__DetailsDiff_6 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mercury__table_statistics__V_71_71));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (mercury__table_statistics__V_72_72));
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (mercury__table_statistics__V_73_73));
                    MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (mercury__table_statistics__V_74_74));
                    MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (mercury__table_statistics__V_75_75));
                    MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (mercury__table_statistics__V_76_76));
                    MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (mercury__table_statistics__V_77_77));
                    MR_hl_field(MR_mktag(3), base, 8) = ((MR_Box) (mercury__table_statistics__V_78_78));
                    MR_hl_field(MR_mktag(3), base, 9) = ((MR_Box) (mercury__table_statistics__V_79_79));
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
              MR_Integer mercury__table_statistics__V_56_56;
              MR_Integer mercury__table_statistics__V_57_57;
              MR_Integer mercury__table_statistics__V_58_58;
              MR_Integer mercury__table_statistics__V_59_59;
              MR_Integer mercury__table_statistics__V_60_60;
              MR_Integer mercury__table_statistics__V_61_61;
              MR_Integer mercury__table_statistics__V_62_62;
              MR_Integer mercury__table_statistics__V_63_63;
              MR_Integer mercury__table_statistics__V_64_64;
              MR_Integer mercury__table_statistics__V_65_65;
              MR_Integer mercury__table_statistics__V_66_66;
              MR_Integer mercury__table_statistics__V_67_67;
              MR_Integer mercury__table_statistics__V_68_68;
              MR_Integer mercury__table_statistics__V_69_69;
              MR_Integer mercury__table_statistics__V_70_70;
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
                  mercury__table_statistics__V_56_56 = (mercury__table_statistics__DuNodeAllocsA_33 - mercury__table_statistics__DuNodeAllocsB_37);
                  mercury__table_statistics__V_57_57 = (mercury__table_statistics__DuNodeBytesA_34 - mercury__table_statistics__DuNodeBytesB_38);
                  mercury__table_statistics__V_58_58 = (mercury__table_statistics__DuArgLookupsA_35 - mercury__table_statistics__DuArgLookupsB_39);
                  mercury__table_statistics__V_59_59 = (mercury__table_statistics__DuExistLookupsA_36 - mercury__table_statistics__DuExistLookupsB_40);
                  mercury__table_statistics__V_60_60 = (mercury__table_statistics__EnumNodeAllocsA_84 - mercury__table_statistics__EnumNodeAllocsB_86);
                  mercury__table_statistics__V_61_61 = (mercury__table_statistics__EnumNodeBytesA_85 - mercury__table_statistics__EnumNodeBytesB_87);
                  mercury__table_statistics__V_62_62 = (mercury__table_statistics__HashTableAllocsA_88 - mercury__table_statistics__HashTableAllocsB_97);
                  mercury__table_statistics__V_63_63 = (mercury__table_statistics__HashTableBytesA_89 - mercury__table_statistics__HashTableBytesB_98);
                  mercury__table_statistics__V_64_64 = (mercury__table_statistics__HashLinkChunkAllocsA_90 - mercury__table_statistics__HashLinkChunkAllocsB_99);
                  mercury__table_statistics__V_65_65 = (mercury__table_statistics__HashLinkChunkBytesA_91 - mercury__table_statistics__HashLinkChunkBytesB_100);
                  mercury__table_statistics__V_66_66 = (mercury__table_statistics__HashKeyComparesNotDuplA_92 - mercury__table_statistics__HashKeyComparesNotDuplB_101);
                  mercury__table_statistics__V_67_67 = (mercury__table_statistics__HashKeyComparesIsDuplA_93 - mercury__table_statistics__HashKeyComparesIsDuplB_102);
                  mercury__table_statistics__V_68_68 = (mercury__table_statistics__HashResizesA_94 - mercury__table_statistics__HashResizesB_103);
                  mercury__table_statistics__V_69_69 = (mercury__table_statistics__HashResizeOldEntriesA_95 - mercury__table_statistics__HashResizeOldEntriesB_104);
                  mercury__table_statistics__V_70_70 = (mercury__table_statistics__HashResizeNewEntriesA_96 - mercury__table_statistics__HashResizeNewEntriesB_105);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL));
                    *mercury__table_statistics__DetailsDiff_6 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mercury__table_statistics__V_56_56));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (mercury__table_statistics__V_57_57));
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (mercury__table_statistics__V_58_58));
                    MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (mercury__table_statistics__V_59_59));
                    MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (mercury__table_statistics__V_60_60));
                    MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (mercury__table_statistics__V_61_61));
                    MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (mercury__table_statistics__V_62_62));
                    MR_hl_field(MR_mktag(3), base, 8) = ((MR_Box) (mercury__table_statistics__V_63_63));
                    MR_hl_field(MR_mktag(3), base, 9) = ((MR_Box) (mercury__table_statistics__V_64_64));
                    MR_hl_field(MR_mktag(3), base, 10) = ((MR_Box) (mercury__table_statistics__V_65_65));
                    MR_hl_field(MR_mktag(3), base, 11) = ((MR_Box) (mercury__table_statistics__V_66_66));
                    MR_hl_field(MR_mktag(3), base, 12) = ((MR_Box) (mercury__table_statistics__V_67_67));
                    MR_hl_field(MR_mktag(3), base, 13) = ((MR_Box) (mercury__table_statistics__V_68_68));
                    MR_hl_field(MR_mktag(3), base, 14) = ((MR_Box) (mercury__table_statistics__V_69_69));
                    MR_hl_field(MR_mktag(3), base, 15) = ((MR_Box) (mercury__table_statistics__V_70_70));
                  }
                  mercury__table_statistics__succeeded = MR_TRUE;
                }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer mercury__table_statistics__V_41_41;
              MR_Integer mercury__table_statistics__V_42_42;
              MR_Integer mercury__table_statistics__V_43_43;
              MR_Integer mercury__table_statistics__V_44_44;
              MR_Integer mercury__table_statistics__V_45_45;
              MR_Integer mercury__table_statistics__V_46_46;
              MR_Integer mercury__table_statistics__V_47_47;
              MR_Integer mercury__table_statistics__V_48_48;
              MR_Integer mercury__table_statistics__V_49_49;
              MR_Integer mercury__table_statistics__V_50_50;
              MR_Integer mercury__table_statistics__V_51_51;
              MR_Integer mercury__table_statistics__V_52_52;
              MR_Integer mercury__table_statistics__V_53_53;
              MR_Integer mercury__table_statistics__V_54_54;
              MR_Integer mercury__table_statistics__V_55_55;
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
                  mercury__table_statistics__V_41_41 = (mercury__table_statistics__DuNodeAllocsA_128 - mercury__table_statistics__DuNodeAllocsB_132);
                  mercury__table_statistics__V_42_42 = (mercury__table_statistics__DuNodeBytesA_129 - mercury__table_statistics__DuNodeBytesB_133);
                  mercury__table_statistics__V_43_43 = (mercury__table_statistics__DuArgLookupsA_130 - mercury__table_statistics__DuArgLookupsB_134);
                  mercury__table_statistics__V_44_44 = (mercury__table_statistics__DuExistLookupsA_131 - mercury__table_statistics__DuExistLookupsB_135);
                  mercury__table_statistics__V_45_45 = (mercury__table_statistics__EnumNodeAllocsA_106 - mercury__table_statistics__EnumNodeAllocsB_108);
                  mercury__table_statistics__V_46_46 = (mercury__table_statistics__EnumNodeBytesA_107 - mercury__table_statistics__EnumNodeBytesB_109);
                  mercury__table_statistics__V_47_47 = (mercury__table_statistics__HashTableAllocsA_110 - mercury__table_statistics__HashTableAllocsB_119);
                  mercury__table_statistics__V_48_48 = (mercury__table_statistics__HashTableBytesA_111 - mercury__table_statistics__HashTableBytesB_120);
                  mercury__table_statistics__V_49_49 = (mercury__table_statistics__HashLinkChunkAllocsA_112 - mercury__table_statistics__HashLinkChunkAllocsB_121);
                  mercury__table_statistics__V_50_50 = (mercury__table_statistics__HashLinkChunkBytesA_113 - mercury__table_statistics__HashLinkChunkBytesB_122);
                  mercury__table_statistics__V_51_51 = (mercury__table_statistics__HashKeyComparesNotDuplA_114 - mercury__table_statistics__HashKeyComparesNotDuplB_123);
                  mercury__table_statistics__V_52_52 = (mercury__table_statistics__HashKeyComparesIsDuplA_115 - mercury__table_statistics__HashKeyComparesIsDuplB_124);
                  mercury__table_statistics__V_53_53 = (mercury__table_statistics__HashResizesA_116 - mercury__table_statistics__HashResizesB_125);
                  mercury__table_statistics__V_54_54 = (mercury__table_statistics__HashResizeOldEntriesA_117 - mercury__table_statistics__HashResizeOldEntriesB_126);
                  mercury__table_statistics__V_55_55 = (mercury__table_statistics__HashResizeNewEntriesA_118 - mercury__table_statistics__HashResizeNewEntriesB_127);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL));
                    *mercury__table_statistics__DetailsDiff_6 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mercury__table_statistics__V_41_41));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (mercury__table_statistics__V_42_42));
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (mercury__table_statistics__V_43_43));
                    MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (mercury__table_statistics__V_44_44));
                    MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (mercury__table_statistics__V_45_45));
                    MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (mercury__table_statistics__V_46_46));
                    MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (mercury__table_statistics__V_47_47));
                    MR_hl_field(MR_mktag(3), base, 8) = ((MR_Box) (mercury__table_statistics__V_48_48));
                    MR_hl_field(MR_mktag(3), base, 9) = ((MR_Box) (mercury__table_statistics__V_49_49));
                    MR_hl_field(MR_mktag(3), base, 10) = ((MR_Box) (mercury__table_statistics__V_50_50));
                    MR_hl_field(MR_mktag(3), base, 11) = ((MR_Box) (mercury__table_statistics__V_51_51));
                    MR_hl_field(MR_mktag(3), base, 12) = ((MR_Box) (mercury__table_statistics__V_52_52));
                    MR_hl_field(MR_mktag(3), base, 13) = ((MR_Box) (mercury__table_statistics__V_53_53));
                    MR_hl_field(MR_mktag(3), base, 14) = ((MR_Box) (mercury__table_statistics__V_54_54));
                    MR_hl_field(MR_mktag(3), base, 15) = ((MR_Box) (mercury__table_statistics__V_55_55));
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
        MR_Word mercury__table_statistics__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mercury__table_statistics__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 0)));

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
            MR_String mercury__table_statistics__VarNameA_16 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__table_statistics__V_37_37, (MR_Integer) 0)));
            MR_Integer mercury__table_statistics__LookupsA_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__table_statistics__V_37_37, (MR_Integer) 1)));
            MR_Integer mercury__table_statistics__LookupsIsDuplA_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__table_statistics__V_37_37, (MR_Integer) 2)));
            MR_Word mercury__table_statistics__DetailsA_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__table_statistics__V_37_37, (MR_Integer) 3)));
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
              mercury__table_statistics__StepDiffs_15 = mercury__table_statistics__table_step_stats_diff_2_f_0(mercury__table_statistics__V_36_36, mercury__table_statistics__StepsB_13);
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

static void MR_CALL 
mercury__table_statistics__copy_current_stats_to_prev_5_p_0(
  MR_Box mercury__table_statistics__CurPtr_1,
  MR_Box mercury__table_statistics__PrevPtr_2,
  MR_Integer mercury__table_statistics__NumSteps_3)
{
  {
    MR_bool mercury__table_statistics__succeeded;

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
    MR_bool mercury__table_statistics__succeeded;

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
        MR_Integer mercury__table_statistics__V_19_19 = (mercury__table_statistics__CurStep_11 + (MR_Integer) 1);
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
          mercury__table_statistics__get_one_table_stats_step_loop_8_p_0(mercury__table_statistics__StepDescsPtr_9, mercury__table_statistics__StatsPtr_10, mercury__table_statistics__V_19_19, mercury__table_statistics__NumSteps_12, mercury__table_statistics__STATE_VARIABLE_StepStats_0_15, &mercury__table_statistics__STATE_VARIABLE_StepStats_20_20);
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

static void MR_CALL 
mercury__table_statistics__get_one_table_overall_stats_5_p_0(
  MR_Box mercury__table_statistics__StatsPtr_1,
  MR_Integer * mercury__table_statistics__NumLookups_2,
  MR_Integer * mercury__table_statistics__NumLookupsIsDupl_3)
{
  {
    MR_bool mercury__table_statistics__succeeded;

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
    MR_bool mercury__table_statistics__succeeded;

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
    MR_Word mercury__table_statistics__V_46_46;
    MR_Integer mercury__table_statistics__NumLookups_55;
    MR_Integer mercury__table_statistics__NumLookupsIsDupl_56;
    MR_Word mercury__table_statistics__StepStats_57;
    MR_Word mercury__table_statistics__V_60_60;

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
    mercury__table_statistics__V_46_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__table_statistics__get_one_table_stats_step_loop_8_p_0(mercury__table_statistics__InputStepDescsPtr_11, mercury__table_statistics__CurCallStatsPtr_13, (MR_Integer) 0, mercury__table_statistics__NumInputs_9, mercury__table_statistics__V_46_46, &mercury__table_statistics__StepStats_43);
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
    mercury__table_statistics__V_60_60 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__table_statistics__get_one_table_stats_step_loop_8_p_0(mercury__table_statistics__InputStepDescsPtr_11, mercury__table_statistics__PrevCallStatsPtr_14, (MR_Integer) 0, mercury__table_statistics__NumInputs_9, mercury__table_statistics__V_60_60, &mercury__table_statistics__StepStats_57);
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
        MR_Word mercury__table_statistics__V_74_74;
        MR_Integer mercury__table_statistics__NumLookups_83;
        MR_Integer mercury__table_statistics__NumLookupsIsDupl_84;
        MR_Word mercury__table_statistics__StepStats_85;
        MR_Word mercury__table_statistics__V_88_88;

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
        mercury__table_statistics__V_74_74 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          mercury__table_statistics__get_one_table_stats_step_loop_8_p_0(mercury__table_statistics__OutputStepDescsPtr_12, mercury__table_statistics__CurAnswerStatsPtr_15, (MR_Integer) 0, mercury__table_statistics__NumOutputs_10, mercury__table_statistics__V_74_74, &mercury__table_statistics__StepStats_71);
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
        mercury__table_statistics__V_88_88 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          mercury__table_statistics__get_one_table_stats_step_loop_8_p_0(mercury__table_statistics__OutputStepDescsPtr_12, mercury__table_statistics__PrevAnswerStatsPtr_16, (MR_Integer) 0, mercury__table_statistics__NumOutputs_10, mercury__table_statistics__V_88_88, &mercury__table_statistics__StepStats_85);
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

MR_Word MR_CALL 
mercury__table_statistics__dummy_proc_table_statistics_0_f_0(void)
{
  {
    MR_bool mercury__table_statistics__succeeded;
    MR_Word mercury__table_statistics__ProcTableStatistics_2 = (MR_Word) &mercury__table_statistics_scalar_common_1[3];
    MR_Word mercury__table_statistics__TableStats_3 = (MR_Word) &mercury__table_statistics_scalar_common_2[1];
    MR_Word mercury__table_statistics__CallTableStats_4 = (MR_Word) &mercury__table_statistics_scalar_common_1[2];
    MR_Word mercury__table_statistics__V_7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__table_statistics__V_9_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    return mercury__table_statistics__ProcTableStatistics_2;
  }
}

void MR_CALL 
mercury__table_statistics__write_table_stats_3_p_0(
  MR_Word mercury__table_statistics__Stats_4)
{
  {
    MR_bool mercury__table_statistics__succeeded;
    MR_Integer mercury__table_statistics__Lookups_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__table_statistics__Stats_4, (MR_Integer) 0)));
    MR_Integer mercury__table_statistics__LookupsIsDupl_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__table_statistics__Stats_4, (MR_Integer) 1)));
    MR_Word mercury__table_statistics__Steps_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__table_statistics__Stats_4, (MR_Integer) 2)));
    MR_Integer mercury__table_statistics__LookupsNotDupl_9 = (mercury__table_statistics__Lookups_6 - mercury__table_statistics__LookupsIsDupl_7);
    MR_String mercury__table_statistics__LookupsStr_10;
    MR_String mercury__table_statistics__LookupsIsDuplStr_11;
    MR_String mercury__table_statistics__LookupsNotDuplStr_12;
    MR_String mercury__table_statistics__V_54_54;
    MR_Word mercury__table_statistics__V_60_60;

    {
      mercury__table_statistics__LookupsStr_10 = mercury__string__int_to_string_thousands_1_f_0(mercury__table_statistics__Lookups_6);
    }
    {
      mercury__table_statistics__LookupsIsDuplStr_11 = mercury__string__int_to_string_thousands_1_f_0(mercury__table_statistics__LookupsIsDupl_7);
    }
    {
      mercury__table_statistics__LookupsNotDuplStr_12 = mercury__string__int_to_string_thousands_1_f_0(mercury__table_statistics__LookupsNotDupl_9);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "number of lookups:                            ");
    }
    mercury__table_statistics__V_60_60 = (MR_Word) &mercury__table_statistics_scalar_common_5[0];
    {
      mercury__string__format__format_string_component_width_noprec_4_p_0(mercury__table_statistics__V_60_60, (MR_Integer) 9, mercury__table_statistics__LookupsStr_10, &mercury__table_statistics__V_54_54);
    }
    {
      mercury__io__write_string_3_p_0(mercury__table_statistics__V_54_54);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    mercury__table_statistics__succeeded = (mercury__table_statistics__Lookups_6 > (MR_Integer) 0);
    if (mercury__table_statistics__succeeded)
      {
        MR_String mercury__table_statistics__FractionIsDuplStr_13;
        MR_String mercury__table_statistics__FractionNotDuplStr_14;
        MR_String mercury__table_statistics__V_66_66;
        MR_String mercury__table_statistics__V_77_77;
        MR_String mercury__table_statistics__V_89_89;
        MR_String mercury__table_statistics__V_100_100;
        MR_Integer mercury__table_statistics__V_15_15;

        {
          mercury__table_statistics__FractionIsDuplStr_13 = mercury__table_statistics__percentage_str_2_f_0(mercury__table_statistics__LookupsIsDupl_7, mercury__table_statistics__Lookups_6);
        }
        {
          mercury__table_statistics__FractionNotDuplStr_14 = mercury__table_statistics__percentage_str_2_f_0(mercury__table_statistics__LookupsNotDupl_9, mercury__table_statistics__Lookups_6);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "number of successful lookups (old calls):     ");
        }
        {
          mercury__string__format__format_string_component_width_noprec_4_p_0(mercury__table_statistics__V_60_60, (MR_Integer) 9, mercury__table_statistics__LookupsIsDuplStr_11, &mercury__table_statistics__V_66_66);
        }
        {
          mercury__io__write_string_3_p_0(mercury__table_statistics__V_66_66);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) " ");
        }
        {
          mercury__string__format__format_string_component_width_noprec_4_p_0(mercury__table_statistics__V_60_60, (MR_Integer) 9, mercury__table_statistics__FractionIsDuplStr_13, &mercury__table_statistics__V_77_77);
        }
        {
          mercury__io__write_string_3_p_0(mercury__table_statistics__V_77_77);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "number of unsuccessful lookups (new calls):   ");
        }
        {
          mercury__string__format__format_string_component_width_noprec_4_p_0(mercury__table_statistics__V_60_60, (MR_Integer) 9, mercury__table_statistics__LookupsNotDuplStr_12, &mercury__table_statistics__V_89_89);
        }
        {
          mercury__io__write_string_3_p_0(mercury__table_statistics__V_89_89);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) " ");
        }
        {
          mercury__string__format__format_string_component_width_noprec_4_p_0(mercury__table_statistics__V_60_60, (MR_Integer) 9, mercury__table_statistics__FractionNotDuplStr_14, &mercury__table_statistics__V_100_100);
        }
        {
          mercury__io__write_string_3_p_0(mercury__table_statistics__V_100_100);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "statistics for the individual steps:\n");
        }
        {
          mercury__table_statistics__foldl2__ho2_6_p_in__list_0(mercury__table_statistics__Steps_8, (MR_Integer) 1, &mercury__table_statistics__V_15_15);
        }
      }
    else
      {
      }
  }
}

MR_Word MR_CALL 
mercury__table_statistics__table_stats_difference_2_f_0(
  MR_Word mercury__table_statistics__StatsA_4,
  MR_Word mercury__table_statistics__StatsB_5)
{
  {
    MR_bool mercury__table_statistics__succeeded;
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module table_statistics. */
