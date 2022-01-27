/*
** Automatically generated from `table_statistics.m'
** by the Mercury compiler,
** version rotd-2015-02-04
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




#line 95 "table_statistics.c"
static const MR_FA_TypeInfo_Struct1 mercury__table_statistics__maybe__ti_maybe_1table_statistics__type_ctor_info_table_stats_curr_prev_0;

#line 98 "table_statistics.c"
static const MR_PseudoTypeInfo mercury__table_statistics__table_statistics__field_types_proc_table_statistics_0_0[2];

#line 101 "table_statistics.c"
static const MR_ConstString mercury__table_statistics__table_statistics__field_names_proc_table_statistics_0_0[2];

#line 104 "table_statistics.c"
static const MR_DuFunctorDesc mercury__table_statistics__table_statistics__du_functor_desc_proc_table_statistics_0_0;

#line 107 "table_statistics.c"
static const MR_DuFunctorDescPtr mercury__table_statistics__table_statistics__du_stag_ordered_proc_table_statistics_0_0[1];

#line 110 "table_statistics.c"
static const MR_DuPtagLayout mercury__table_statistics__table_statistics__du_ptag_ordered_proc_table_statistics_0[1];

#line 113 "table_statistics.c"
static const MR_DuFunctorDescPtr mercury__table_statistics__table_statistics__du_name_ordered_proc_table_statistics_0[1];

#line 116 "table_statistics.c"
static const MR_Integer mercury__table_statistics__table_statistics__functor_number_map_proc_table_statistics_0[1];

#line 119 "table_statistics.c"
static const MR_FA_TypeInfo_Struct1 mercury__table_statistics__list__ti_list_1table_statistics__type_ctor_info_table_step_stats_0;

#line 122 "table_statistics.c"
static const MR_PseudoTypeInfo mercury__table_statistics__table_statistics__field_types_table_stats_0_0[3];

#line 125 "table_statistics.c"
static const MR_ConstString mercury__table_statistics__table_statistics__field_names_table_stats_0_0[3];

#line 128 "table_statistics.c"
static const MR_DuFunctorDesc mercury__table_statistics__table_statistics__du_functor_desc_table_stats_0_0;

#line 131 "table_statistics.c"
static const MR_DuFunctorDescPtr mercury__table_statistics__table_statistics__du_stag_ordered_table_stats_0_0[1];

#line 134 "table_statistics.c"
static const MR_DuPtagLayout mercury__table_statistics__table_statistics__du_ptag_ordered_table_stats_0[1];

#line 137 "table_statistics.c"
static const MR_DuFunctorDescPtr mercury__table_statistics__table_statistics__du_name_ordered_table_stats_0[1];

#line 140 "table_statistics.c"
static const MR_Integer mercury__table_statistics__table_statistics__functor_number_map_table_stats_0[1];

#line 143 "table_statistics.c"
static const MR_PseudoTypeInfo mercury__table_statistics__table_statistics__field_types_table_stats_curr_prev_0_0[2];

#line 146 "table_statistics.c"
static const MR_ConstString mercury__table_statistics__table_statistics__field_names_table_stats_curr_prev_0_0[2];

#line 149 "table_statistics.c"
static const MR_DuFunctorDesc mercury__table_statistics__table_statistics__du_functor_desc_table_stats_curr_prev_0_0;

#line 152 "table_statistics.c"
static const MR_DuFunctorDescPtr mercury__table_statistics__table_statistics__du_stag_ordered_table_stats_curr_prev_0_0[1];

#line 155 "table_statistics.c"
static const MR_DuPtagLayout mercury__table_statistics__table_statistics__du_ptag_ordered_table_stats_curr_prev_0[1];

#line 158 "table_statistics.c"
static const MR_DuFunctorDescPtr mercury__table_statistics__table_statistics__du_name_ordered_table_stats_curr_prev_0[1];

#line 161 "table_statistics.c"
static const MR_Integer mercury__table_statistics__table_statistics__functor_number_map_table_stats_curr_prev_0[1];

#line 164 "table_statistics.c"
static const MR_EnumFunctorDesc mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_0;

#line 167 "table_statistics.c"
static const MR_EnumFunctorDesc mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_1;

#line 170 "table_statistics.c"
static const MR_EnumFunctorDesc mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_2;

#line 173 "table_statistics.c"
static const MR_EnumFunctorDesc mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_3;

#line 176 "table_statistics.c"
static const MR_EnumFunctorDesc mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_4;

#line 179 "table_statistics.c"
static const MR_EnumFunctorDesc mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_5;

#line 182 "table_statistics.c"
static const MR_EnumFunctorDesc mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_6;

#line 185 "table_statistics.c"
static const MR_EnumFunctorDesc mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_7;

#line 188 "table_statistics.c"
static const MR_EnumFunctorDesc mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_8;

#line 191 "table_statistics.c"
static const MR_EnumFunctorDesc mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_9;

#line 194 "table_statistics.c"
static const MR_EnumFunctorDesc mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_10;

#line 197 "table_statistics.c"
static const MR_EnumFunctorDesc mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_11;

#line 200 "table_statistics.c"
static const MR_EnumFunctorDesc mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_12;

#line 203 "table_statistics.c"
static const MR_EnumFunctorDesc mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_13;

#line 206 "table_statistics.c"
static const MR_EnumFunctorDescPtr mercury__table_statistics__table_statistics__enum_value_ordered_table_step_kind_0[14];

#line 209 "table_statistics.c"
static const MR_EnumFunctorDescPtr mercury__table_statistics__table_statistics__enum_name_ordered_table_step_kind_0[14];

#line 212 "table_statistics.c"
static const MR_Integer mercury__table_statistics__table_statistics__functor_number_map_table_step_kind_0[14];

#line 215 "table_statistics.c"
static const MR_DuFunctorDesc mercury__table_statistics__table_statistics__du_functor_desc_table_step_stat_details_0_0;

#line 218 "table_statistics.c"
static const MR_PseudoTypeInfo mercury__table_statistics__table_statistics__field_types_table_step_stat_details_0_1[2];

#line 221 "table_statistics.c"
static const MR_ConstString mercury__table_statistics__table_statistics__field_names_table_step_stat_details_0_1[2];

#line 224 "table_statistics.c"
static const MR_DuFunctorDesc mercury__table_statistics__table_statistics__du_functor_desc_table_step_stat_details_0_1;

#line 227 "table_statistics.c"
static const MR_PseudoTypeInfo mercury__table_statistics__table_statistics__field_types_table_step_stat_details_0_2[2];

#line 230 "table_statistics.c"
static const MR_ConstString mercury__table_statistics__table_statistics__field_names_table_step_stat_details_0_2[2];

#line 233 "table_statistics.c"
static const MR_DuFunctorDesc mercury__table_statistics__table_statistics__du_functor_desc_table_step_stat_details_0_2;

#line 236 "table_statistics.c"
static const MR_PseudoTypeInfo mercury__table_statistics__table_statistics__field_types_table_step_stat_details_0_3[9];

#line 239 "table_statistics.c"
static const MR_ConstString mercury__table_statistics__table_statistics__field_names_table_step_stat_details_0_3[9];

#line 242 "table_statistics.c"
static const MR_DuFunctorDesc mercury__table_statistics__table_statistics__du_functor_desc_table_step_stat_details_0_3;

#line 245 "table_statistics.c"
static const MR_PseudoTypeInfo mercury__table_statistics__table_statistics__field_types_table_step_stat_details_0_4[15];

#line 248 "table_statistics.c"
static const MR_ConstString mercury__table_statistics__table_statistics__field_names_table_step_stat_details_0_4[15];

#line 251 "table_statistics.c"
static const MR_DuFunctorDesc mercury__table_statistics__table_statistics__du_functor_desc_table_step_stat_details_0_4;

#line 254 "table_statistics.c"
static const MR_PseudoTypeInfo mercury__table_statistics__table_statistics__field_types_table_step_stat_details_0_5[15];

#line 257 "table_statistics.c"
static const MR_ConstString mercury__table_statistics__table_statistics__field_names_table_step_stat_details_0_5[15];

#line 260 "table_statistics.c"
static const MR_DuFunctorDesc mercury__table_statistics__table_statistics__du_functor_desc_table_step_stat_details_0_5;

#line 263 "table_statistics.c"
static const MR_DuFunctorDescPtr mercury__table_statistics__table_statistics__du_stag_ordered_table_step_stat_details_0_0[1];

#line 266 "table_statistics.c"
static const MR_DuFunctorDescPtr mercury__table_statistics__table_statistics__du_stag_ordered_table_step_stat_details_0_1[1];

#line 269 "table_statistics.c"
static const MR_DuFunctorDescPtr mercury__table_statistics__table_statistics__du_stag_ordered_table_step_stat_details_0_2[1];

#line 272 "table_statistics.c"
static const MR_DuFunctorDescPtr mercury__table_statistics__table_statistics__du_stag_ordered_table_step_stat_details_0_3[3];

#line 275 "table_statistics.c"
static const MR_DuPtagLayout mercury__table_statistics__table_statistics__du_ptag_ordered_table_step_stat_details_0[4];

#line 278 "table_statistics.c"
static const MR_DuFunctorDescPtr mercury__table_statistics__table_statistics__du_name_ordered_table_step_stat_details_0[6];

#line 281 "table_statistics.c"
static const MR_Integer mercury__table_statistics__table_statistics__functor_number_map_table_step_stat_details_0[6];

#line 284 "table_statistics.c"
static const MR_PseudoTypeInfo mercury__table_statistics__table_statistics__field_types_table_step_stats_0_0[4];

#line 287 "table_statistics.c"
static const MR_ConstString mercury__table_statistics__table_statistics__field_names_table_step_stats_0_0[4];

#line 290 "table_statistics.c"
static const MR_DuFunctorDesc mercury__table_statistics__table_statistics__du_functor_desc_table_step_stats_0_0;

#line 293 "table_statistics.c"
static const MR_DuFunctorDescPtr mercury__table_statistics__table_statistics__du_stag_ordered_table_step_stats_0_0[1];

#line 296 "table_statistics.c"
static const MR_DuPtagLayout mercury__table_statistics__table_statistics__du_ptag_ordered_table_step_stats_0[1];

#line 299 "table_statistics.c"
static const MR_DuFunctorDescPtr mercury__table_statistics__table_statistics__du_name_ordered_table_step_stats_0[1];

#line 302 "table_statistics.c"
static const MR_Integer mercury__table_statistics__table_statistics__functor_number_map_table_step_stats_0[1];

#line 305 "table_statistics.c"
static MR_bool MR_CALL 
mercury__table_statistics____Unify____ml_table_stats_ptr_0_0_10001(
#line 308 "table_statistics.c"
  MR_Box mercury__table_statistics__wrapper_arg_1,
#line 310 "table_statistics.c"
  MR_Box mercury__table_statistics__wrapper_arg_2);

#line 313 "table_statistics.c"
static void MR_CALL 
mercury__table_statistics____Compare____ml_table_stats_ptr_0_0_10001(
#line 316 "table_statistics.c"
  MR_Box * mercury__table_statistics__wrapper_arg_1,
#line 318 "table_statistics.c"
  MR_Box mercury__table_statistics__wrapper_arg_2,
#line 320 "table_statistics.c"
  MR_Box mercury__table_statistics__wrapper_arg_3);

#line 323 "table_statistics.c"
static MR_bool MR_CALL 
mercury__table_statistics____Unify____ml_table_step_desc_ptr_0_0_10001(
#line 326 "table_statistics.c"
  MR_Box mercury__table_statistics__wrapper_arg_1,
#line 328 "table_statistics.c"
  MR_Box mercury__table_statistics__wrapper_arg_2);

#line 331 "table_statistics.c"
static void MR_CALL 
mercury__table_statistics____Compare____ml_table_step_desc_ptr_0_0_10001(
#line 334 "table_statistics.c"
  MR_Box * mercury__table_statistics__wrapper_arg_1,
#line 336 "table_statistics.c"
  MR_Box mercury__table_statistics__wrapper_arg_2,
#line 338 "table_statistics.c"
  MR_Box mercury__table_statistics__wrapper_arg_3);

#line 341 "table_statistics.c"
static MR_bool MR_CALL 
mercury__table_statistics____Unify____proc_table_statistics_0_0_10001(
#line 344 "table_statistics.c"
  MR_Box mercury__table_statistics__wrapper_arg_1,
#line 346 "table_statistics.c"
  MR_Box mercury__table_statistics__wrapper_arg_2);

#line 349 "table_statistics.c"
static void MR_CALL 
mercury__table_statistics____Compare____proc_table_statistics_0_0_10001(
#line 352 "table_statistics.c"
  MR_Box * mercury__table_statistics__wrapper_arg_1,
#line 354 "table_statistics.c"
  MR_Box mercury__table_statistics__wrapper_arg_2,
#line 356 "table_statistics.c"
  MR_Box mercury__table_statistics__wrapper_arg_3);

#line 359 "table_statistics.c"
static MR_bool MR_CALL 
mercury__table_statistics____Unify____table_stats_0_0_10001(
#line 362 "table_statistics.c"
  MR_Box mercury__table_statistics__wrapper_arg_1,
#line 364 "table_statistics.c"
  MR_Box mercury__table_statistics__wrapper_arg_2);

#line 367 "table_statistics.c"
static void MR_CALL 
mercury__table_statistics____Compare____table_stats_0_0_10001(
#line 370 "table_statistics.c"
  MR_Box * mercury__table_statistics__wrapper_arg_1,
#line 372 "table_statistics.c"
  MR_Box mercury__table_statistics__wrapper_arg_2,
#line 374 "table_statistics.c"
  MR_Box mercury__table_statistics__wrapper_arg_3);

#line 377 "table_statistics.c"
static MR_bool MR_CALL 
mercury__table_statistics____Unify____table_stats_curr_prev_0_0_10001(
#line 380 "table_statistics.c"
  MR_Box mercury__table_statistics__wrapper_arg_1,
#line 382 "table_statistics.c"
  MR_Box mercury__table_statistics__wrapper_arg_2);

#line 385 "table_statistics.c"
static void MR_CALL 
mercury__table_statistics____Compare____table_stats_curr_prev_0_0_10001(
#line 388 "table_statistics.c"
  MR_Box * mercury__table_statistics__wrapper_arg_1,
#line 390 "table_statistics.c"
  MR_Box mercury__table_statistics__wrapper_arg_2,
#line 392 "table_statistics.c"
  MR_Box mercury__table_statistics__wrapper_arg_3);

#line 395 "table_statistics.c"
static MR_bool MR_CALL 
mercury__table_statistics____Unify____table_step_kind_0_0_10001(
#line 398 "table_statistics.c"
  MR_Box mercury__table_statistics__wrapper_arg_1,
#line 400 "table_statistics.c"
  MR_Box mercury__table_statistics__wrapper_arg_2);

#line 403 "table_statistics.c"
static void MR_CALL 
mercury__table_statistics____Compare____table_step_kind_0_0_10001(
#line 406 "table_statistics.c"
  MR_Box * mercury__table_statistics__wrapper_arg_1,
#line 408 "table_statistics.c"
  MR_Box mercury__table_statistics__wrapper_arg_2,
#line 410 "table_statistics.c"
  MR_Box mercury__table_statistics__wrapper_arg_3);

#line 413 "table_statistics.c"
static MR_bool MR_CALL 
mercury__table_statistics____Unify____table_step_stat_details_0_0_10001(
#line 416 "table_statistics.c"
  MR_Box mercury__table_statistics__wrapper_arg_1,
#line 418 "table_statistics.c"
  MR_Box mercury__table_statistics__wrapper_arg_2);

#line 421 "table_statistics.c"
static void MR_CALL 
mercury__table_statistics____Compare____table_step_stat_details_0_0_10001(
#line 424 "table_statistics.c"
  MR_Box * mercury__table_statistics__wrapper_arg_1,
#line 426 "table_statistics.c"
  MR_Box mercury__table_statistics__wrapper_arg_2,
#line 428 "table_statistics.c"
  MR_Box mercury__table_statistics__wrapper_arg_3);

#line 431 "table_statistics.c"
static MR_bool MR_CALL 
mercury__table_statistics____Unify____table_step_stats_0_0_10001(
#line 434 "table_statistics.c"
  MR_Box mercury__table_statistics__wrapper_arg_1,
#line 436 "table_statistics.c"
  MR_Box mercury__table_statistics__wrapper_arg_2);

#line 439 "table_statistics.c"
static void MR_CALL 
mercury__table_statistics____Compare____table_step_stats_0_0_10001(
#line 442 "table_statistics.c"
  MR_Box * mercury__table_statistics__wrapper_arg_1,
#line 444 "table_statistics.c"
  MR_Box mercury__table_statistics__wrapper_arg_2,
#line 446 "table_statistics.c"
  MR_Box mercury__table_statistics__wrapper_arg_3);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__table_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 148 "list.int"
static void MR_CALL 
mercury__table_statistics__foldl2__ho2_6_p_in__list_0(
#line 148 "list.int"
  MR_Word mercury__table_statistics__HeadVar__2_2,
#line 148 "list.int"
  MR_Integer mercury__table_statistics__HeadVar__3_3,
#line 148 "list.int"
  MR_Integer * mercury__table_statistics__HeadVar__4_4);

#line 894 "table_statistics.m"
static MR_String MR_CALL 
mercury__table_statistics__percentage_str_2_f_0(
#line 894 "table_statistics.m"
  MR_Integer mercury__table_statistics__A_4,
#line 894 "table_statistics.m"
  MR_Integer mercury__table_statistics__B_5);

#line 799 "table_statistics.m"
static void MR_CALL 
mercury__table_statistics__write_table_step_stats_4_p_0(
#line 799 "table_statistics.m"
  MR_Word mercury__table_statistics__Step_5,
#line 799 "table_statistics.m"
  MR_Integer mercury__table_statistics__StepNum_6);

#line 777 "table_statistics.m"
static void MR_CALL 
mercury__table_statistics__write_table_step_stats_du_6_p_0(
#line 777 "table_statistics.m"
  MR_Integer mercury__table_statistics__DuNodeAllocs_7,
#line 777 "table_statistics.m"
  MR_Integer mercury__table_statistics__DuNodeBytes_8,
#line 777 "table_statistics.m"
  MR_Integer mercury__table_statistics__DuArgLookups_9,
#line 777 "table_statistics.m"
  MR_Integer mercury__table_statistics__DuExistLookups_10);

#line 729 "table_statistics.m"
static void MR_CALL 
mercury__table_statistics__write_table_step_stats_hash_11_p_0(
#line 729 "table_statistics.m"
  MR_Integer mercury__table_statistics__HashTableAllocs_12,
#line 729 "table_statistics.m"
  MR_Integer mercury__table_statistics__HashTableBytes_13,
#line 729 "table_statistics.m"
  MR_Integer mercury__table_statistics__HashLinkChunkAllocs_14,
#line 729 "table_statistics.m"
  MR_Integer mercury__table_statistics__HashLinkChunkBytes_15,
#line 729 "table_statistics.m"
  MR_Integer mercury__table_statistics__HashKeyComparesNotDupl_16,
#line 729 "table_statistics.m"
  MR_Integer mercury__table_statistics__HashKeyComparesIsDupl_17,
#line 729 "table_statistics.m"
  MR_Integer mercury__table_statistics__HashResizes_18,
#line 729 "table_statistics.m"
  MR_Integer mercury__table_statistics__HashResizeOldEntries_19,
#line 729 "table_statistics.m"
  MR_Integer mercury__table_statistics__HashResizeNewEntries_20);

#line 719 "table_statistics.m"
static void MR_CALL 
mercury__table_statistics__write_table_step_stats_enum_4_p_0(
#line 719 "table_statistics.m"
  MR_Integer mercury__table_statistics__EnumNodeAllocs_5,
#line 719 "table_statistics.m"
  MR_Integer mercury__table_statistics__EnumNodeBytes_6);

#line 709 "table_statistics.m"
static void MR_CALL 
mercury__table_statistics__write_table_step_stats_start_4_p_0(
#line 709 "table_statistics.m"
  MR_Integer mercury__table_statistics__StartAllocs_5,
#line 709 "table_statistics.m"
  MR_Integer mercury__table_statistics__StartBytes_6);

#line 682 "table_statistics.m"
static void MR_CALL 
mercury__table_statistics__write_table_step_stats_header_7_p_0(
#line 682 "table_statistics.m"
  MR_String mercury__table_statistics__VarName_8,
#line 682 "table_statistics.m"
  MR_Integer mercury__table_statistics__StepNum_9,
#line 682 "table_statistics.m"
  MR_String mercury__table_statistics__KindStr_10,
#line 682 "table_statistics.m"
  MR_Integer mercury__table_statistics__Lookups_11,
#line 682 "table_statistics.m"
  MR_Integer mercury__table_statistics__LookupsIsDupl_12);

#line 555 "table_statistics.m"
static MR_bool MR_CALL 
mercury__table_statistics__table_step_stats_detail_diff_3_p_0(
#line 555 "table_statistics.m"
  MR_Word mercury__table_statistics__DetailsA_4,
#line 555 "table_statistics.m"
  MR_Word mercury__table_statistics__DetailsB_5,
#line 555 "table_statistics.m"
  MR_Word * mercury__table_statistics__DetailsDiff_6);

#line 454 "table_statistics.m"
static void MR_CALL 
mercury__table_statistics__copy_current_stats_to_prev_5_p_0(
#line 454 "table_statistics.m"
  MR_Box mercury__table_statistics__CurPtr_1,
#line 454 "table_statistics.m"
  MR_Box mercury__table_statistics__PrevPtr_2,
#line 454 "table_statistics.m"
  MR_Integer mercury__table_statistics__NumSteps_3);

#line 397 "table_statistics.m"
static void MR_CALL 
mercury__table_statistics__get_one_table_step_stat_details_26_p_0(
#line 397 "table_statistics.m"
  MR_Box mercury__table_statistics__StepDescsPtr_1,
#line 397 "table_statistics.m"
  MR_Box mercury__table_statistics__StatsStructPtr_2,
#line 397 "table_statistics.m"
  MR_Integer mercury__table_statistics__StepNum_3,
#line 397 "table_statistics.m"
  MR_String * mercury__table_statistics__VarName_4,
#line 397 "table_statistics.m"
  MR_Integer * mercury__table_statistics__NumLookups_5,
#line 397 "table_statistics.m"
  MR_Integer * mercury__table_statistics__NumLookupsIsDupl_6,
#line 397 "table_statistics.m"
  MR_Integer * mercury__table_statistics__KindInt_7,
#line 397 "table_statistics.m"
  MR_Integer * mercury__table_statistics__HashTableAllocs_8,
#line 397 "table_statistics.m"
  MR_Integer * mercury__table_statistics__HashTableBytes_9,
#line 397 "table_statistics.m"
  MR_Integer * mercury__table_statistics__HashLinkChunkAllocs_10,
#line 397 "table_statistics.m"
  MR_Integer * mercury__table_statistics__HashLinkChunkBytes_11,
#line 397 "table_statistics.m"
  MR_Integer * mercury__table_statistics__HashKeyComparesNotDupl_12,
#line 397 "table_statistics.m"
  MR_Integer * mercury__table_statistics__HashKeyComparesIsDupl_13,
#line 397 "table_statistics.m"
  MR_Integer * mercury__table_statistics__HashResizes_14,
#line 397 "table_statistics.m"
  MR_Integer * mercury__table_statistics__HashResizeOldEntries_15,
#line 397 "table_statistics.m"
  MR_Integer * mercury__table_statistics__HashResizeNewEntries_16,
#line 397 "table_statistics.m"
  MR_Integer * mercury__table_statistics__EnumNodeAllocs_17,
#line 397 "table_statistics.m"
  MR_Integer * mercury__table_statistics__EnumNodeBytes_18,
#line 397 "table_statistics.m"
  MR_Integer * mercury__table_statistics__DuNodeAllocs_19,
#line 397 "table_statistics.m"
  MR_Integer * mercury__table_statistics__DuNodeBytes_20,
#line 397 "table_statistics.m"
  MR_Integer * mercury__table_statistics__DuArgLookups_21,
#line 397 "table_statistics.m"
  MR_Integer * mercury__table_statistics__DuExistLookups_22,
#line 397 "table_statistics.m"
  MR_Integer * mercury__table_statistics__StartAllocs_23,
#line 397 "table_statistics.m"
  MR_Integer * mercury__table_statistics__StartBytes_24);

#line 248 "table_statistics.m"
static void MR_CALL 
mercury__table_statistics__get_one_table_stats_step_loop_8_p_0(
#line 248 "table_statistics.m"
  MR_Box mercury__table_statistics__StepDescsPtr_9,
#line 248 "table_statistics.m"
  MR_Box mercury__table_statistics__StatsPtr_10,
#line 248 "table_statistics.m"
  MR_Integer mercury__table_statistics__CurStep_11,
#line 248 "table_statistics.m"
  MR_Integer mercury__table_statistics__NumSteps_12,
#line 248 "table_statistics.m"
  MR_Word mercury__table_statistics__STATE_VARIABLE_StepStats_0_15,
#line 248 "table_statistics.m"
  MR_Word * mercury__table_statistics__STATE_VARIABLE_StepStats_16);

#line 236 "table_statistics.m"
static void MR_CALL 
mercury__table_statistics__get_one_table_overall_stats_5_p_0(
#line 236 "table_statistics.m"
  MR_Box mercury__table_statistics__StatsPtr_1,
#line 236 "table_statistics.m"
  MR_Integer * mercury__table_statistics__NumLookups_2,
#line 236 "table_statistics.m"
  MR_Integer * mercury__table_statistics__NumLookupsIsDupl_3);

#line 197 "table_statistics.m"
static void MR_CALL 
mercury__table_statistics__get_proc_info_direct_fields_12_p_0(
#line 197 "table_statistics.m"
  MR_Box mercury__table_statistics__Info_1,
#line 197 "table_statistics.m"
  MR_Integer * mercury__table_statistics__HasAnswerTable_2,
#line 197 "table_statistics.m"
  MR_Integer * mercury__table_statistics__NumInputs_3,
#line 197 "table_statistics.m"
  MR_Integer * mercury__table_statistics__NumOutputs_4,
#line 197 "table_statistics.m"
  MR_Box * mercury__table_statistics__InputStepDescsPtr_5,
#line 197 "table_statistics.m"
  MR_Box * mercury__table_statistics__OutputStepDescsPtr_6,
#line 197 "table_statistics.m"
  MR_Box * mercury__table_statistics__CurCallStatsPtr_7,
#line 197 "table_statistics.m"
  MR_Box * mercury__table_statistics__PrevCallStatsPtr_8,
#line 197 "table_statistics.m"
  MR_Box * mercury__table_statistics__CurAnswerStatsPtr_9,
#line 197 "table_statistics.m"
  MR_Box * mercury__table_statistics__PrevAnswerStatsPtr_10);

#line 152 "table_statistics.m"
static void MR_CALL 
mercury__table_statistics__get_tabling_stats_4_p_0(
#line 152 "table_statistics.m"
  MR_Box mercury__table_statistics__Info_5,
#line 152 "table_statistics.m"
  MR_Word * mercury__table_statistics__Statistics_6);


static /* final */ const MR_Box mercury__table_statistics_scalar_common_1[2][2];

static /* final */ const MR_Box mercury__table_statistics_scalar_common_2[1][3];

static /* final */ const MR_Box mercury__table_statistics_scalar_common_3[1][4];

static /* final */ const MR_Box mercury__table_statistics_scalar_common_4[2][5];

static /* final */ const MR_Box mercury__table_statistics_scalar_common_5[3][1];




static /* final */ const MR_Box mercury__table_statistics_scalar_common_1[2][2] = {
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
};

static /* final */ const MR_Box mercury__table_statistics_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
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



#include "table_statistics.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "table_builtin.mh"
#include "table_builtin.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "builtin.mh"
#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "float.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "exception.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "char.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "time.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "rtti_implementation.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "time.mh"
#include "time.mh"
#include "type_desc.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "bitmap.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "construct.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "version_array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "stm_builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "store.mh"
#include "store.mh"
#include "store.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "math.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "pretty_printer.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "version_array.mh"
#include "version_array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "int.mh"
#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "dir.mh"
#include "dir.mh"
#include "table_builtin.mh"
#include "table_builtin.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "benchmarking.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "dir.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "private_builtin.mh"
#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "version_array.mh"
#include "version_array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "time.mh"
#include "time.mh"
#include "table_builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "dir.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "time.mh"
#include "time.mh"
#include "version_array.mh"
#include "version_array.mh"

#line 154 "table_statistics.m"
void 
MR_get_tabling_stats(
#line 154 "table_statistics.m"
  MR_ProcTableInfoPtr mercury__table_statistics__Info_5,
#line 154 "table_statistics.m"
  MR_Word * mercury__table_statistics__Statistics_6)
#line 154 "table_statistics.m"
{
#line 154 "table_statistics.m"
	MR_Box mercury__table_statistics__boxed_Info_5;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ProcTableInfoPtr, mercury__table_statistics__Info_5, mercury__table_statistics__boxed_Info_5);
	mercury__table_statistics__get_tabling_stats_4_p_0(mercury__table_statistics__boxed_Info_5, (MR_Word *) mercury__table_statistics__Statistics_6);
}


#line 1081 "table_statistics.c"
const MR_TypeCtorInfo_Struct mercury__table_statistics__table_statistics__type_ctor_info_ml_table_stats_ptr_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_FOREIGN,
  ((MR_Box) (mercury__table_statistics____Unify____ml_table_stats_ptr_0_0_10001)),
  ((MR_Box) (mercury__table_statistics____Compare____ml_table_stats_ptr_0_0_10001)),
  (MR_String) "table_statistics",
  (MR_String) "ml_table_stats_ptr",
  {
    NULL
  },
  {
    NULL
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1102 "table_statistics.c"
const MR_TypeCtorInfo_Struct mercury__table_statistics__table_statistics__type_ctor_info_ml_table_step_desc_ptr_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_FOREIGN,
  ((MR_Box) (mercury__table_statistics____Unify____ml_table_step_desc_ptr_0_0_10001)),
  ((MR_Box) (mercury__table_statistics____Compare____ml_table_step_desc_ptr_0_0_10001)),
  (MR_String) "table_statistics",
  (MR_String) "ml_table_step_desc_ptr",
  {
    NULL
  },
  {
    NULL
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1123 "table_statistics.c"
static const MR_FA_TypeInfo_Struct1 mercury__table_statistics__maybe__ti_maybe_1table_statistics__type_ctor_info_table_stats_curr_prev_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__table_statistics__table_statistics__type_ctor_info_table_stats_curr_prev_0
  }
};

#line 1131 "table_statistics.c"
static const MR_PseudoTypeInfo mercury__table_statistics__table_statistics__field_types_proc_table_statistics_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__table_statistics__table_statistics__type_ctor_info_table_stats_curr_prev_0,
  (MR_PseudoTypeInfo) &mercury__table_statistics__maybe__ti_maybe_1table_statistics__type_ctor_info_table_stats_curr_prev_0
};

#line 1137 "table_statistics.c"
static const MR_ConstString mercury__table_statistics__table_statistics__field_names_proc_table_statistics_0_0[2] = {
  (MR_String) "call_table_stats",
  (MR_String) "maybe_answer_table_stats"
};

#line 1143 "table_statistics.c"
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
  NULL
};

#line 1158 "table_statistics.c"
static const MR_DuFunctorDescPtr mercury__table_statistics__table_statistics__du_stag_ordered_proc_table_statistics_0_0[1] = {
  &mercury__table_statistics__table_statistics__du_functor_desc_proc_table_statistics_0_0
};

#line 1163 "table_statistics.c"
static const MR_DuPtagLayout mercury__table_statistics__table_statistics__du_ptag_ordered_proc_table_statistics_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__table_statistics__table_statistics__du_stag_ordered_proc_table_statistics_0_0
  }
};

#line 1172 "table_statistics.c"
static const MR_DuFunctorDescPtr mercury__table_statistics__table_statistics__du_name_ordered_proc_table_statistics_0[1] = {
  &mercury__table_statistics__table_statistics__du_functor_desc_proc_table_statistics_0_0
};

#line 1177 "table_statistics.c"
static const MR_Integer mercury__table_statistics__table_statistics__functor_number_map_proc_table_statistics_0[1] = {
  (MR_Integer) 0
};

#line 1182 "table_statistics.c"
const MR_TypeCtorInfo_Struct mercury__table_statistics__table_statistics__type_ctor_info_proc_table_statistics_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__table_statistics____Unify____proc_table_statistics_0_0_10001)),
  ((MR_Box) (mercury__table_statistics____Compare____proc_table_statistics_0_0_10001)),
  (MR_String) "table_statistics",
  (MR_String) "proc_table_statistics",
  {
    mercury__table_statistics__table_statistics__du_name_ordered_proc_table_statistics_0
  },
  {
    mercury__table_statistics__table_statistics__du_ptag_ordered_proc_table_statistics_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__table_statistics__table_statistics__functor_number_map_proc_table_statistics_0
};

#line 1203 "table_statistics.c"
static const MR_FA_TypeInfo_Struct1 mercury__table_statistics__list__ti_list_1table_statistics__type_ctor_info_table_step_stats_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__table_statistics__table_statistics__type_ctor_info_table_step_stats_0
  }
};

#line 1211 "table_statistics.c"
static const MR_PseudoTypeInfo mercury__table_statistics__table_statistics__field_types_table_stats_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__table_statistics__list__ti_list_1table_statistics__type_ctor_info_table_step_stats_0
};

#line 1218 "table_statistics.c"
static const MR_ConstString mercury__table_statistics__table_statistics__field_names_table_stats_0_0[3] = {
  (MR_String) "num_lookups",
  (MR_String) "num_lookups_is_dupl",
  (MR_String) "step_statistics"
};

#line 1225 "table_statistics.c"
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
  NULL
};

#line 1240 "table_statistics.c"
static const MR_DuFunctorDescPtr mercury__table_statistics__table_statistics__du_stag_ordered_table_stats_0_0[1] = {
  &mercury__table_statistics__table_statistics__du_functor_desc_table_stats_0_0
};

#line 1245 "table_statistics.c"
static const MR_DuPtagLayout mercury__table_statistics__table_statistics__du_ptag_ordered_table_stats_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__table_statistics__table_statistics__du_stag_ordered_table_stats_0_0
  }
};

#line 1254 "table_statistics.c"
static const MR_DuFunctorDescPtr mercury__table_statistics__table_statistics__du_name_ordered_table_stats_0[1] = {
  &mercury__table_statistics__table_statistics__du_functor_desc_table_stats_0_0
};

#line 1259 "table_statistics.c"
static const MR_Integer mercury__table_statistics__table_statistics__functor_number_map_table_stats_0[1] = {
  (MR_Integer) 0
};

#line 1264 "table_statistics.c"
const MR_TypeCtorInfo_Struct mercury__table_statistics__table_statistics__type_ctor_info_table_stats_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__table_statistics____Unify____table_stats_0_0_10001)),
  ((MR_Box) (mercury__table_statistics____Compare____table_stats_0_0_10001)),
  (MR_String) "table_statistics",
  (MR_String) "table_stats",
  {
    mercury__table_statistics__table_statistics__du_name_ordered_table_stats_0
  },
  {
    mercury__table_statistics__table_statistics__du_ptag_ordered_table_stats_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__table_statistics__table_statistics__functor_number_map_table_stats_0
};

#line 1285 "table_statistics.c"
static const MR_PseudoTypeInfo mercury__table_statistics__table_statistics__field_types_table_stats_curr_prev_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__table_statistics__table_statistics__type_ctor_info_table_stats_0,
  (MR_PseudoTypeInfo) &mercury__table_statistics__table_statistics__type_ctor_info_table_stats_0
};

#line 1291 "table_statistics.c"
static const MR_ConstString mercury__table_statistics__table_statistics__field_names_table_stats_curr_prev_0_0[2] = {
  (MR_String) "current_stats",
  (MR_String) "stats_at_last_call"
};

#line 1297 "table_statistics.c"
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
  NULL
};

#line 1312 "table_statistics.c"
static const MR_DuFunctorDescPtr mercury__table_statistics__table_statistics__du_stag_ordered_table_stats_curr_prev_0_0[1] = {
  &mercury__table_statistics__table_statistics__du_functor_desc_table_stats_curr_prev_0_0
};

#line 1317 "table_statistics.c"
static const MR_DuPtagLayout mercury__table_statistics__table_statistics__du_ptag_ordered_table_stats_curr_prev_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__table_statistics__table_statistics__du_stag_ordered_table_stats_curr_prev_0_0
  }
};

#line 1326 "table_statistics.c"
static const MR_DuFunctorDescPtr mercury__table_statistics__table_statistics__du_name_ordered_table_stats_curr_prev_0[1] = {
  &mercury__table_statistics__table_statistics__du_functor_desc_table_stats_curr_prev_0_0
};

#line 1331 "table_statistics.c"
static const MR_Integer mercury__table_statistics__table_statistics__functor_number_map_table_stats_curr_prev_0[1] = {
  (MR_Integer) 0
};

#line 1336 "table_statistics.c"
const MR_TypeCtorInfo_Struct mercury__table_statistics__table_statistics__type_ctor_info_table_stats_curr_prev_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__table_statistics____Unify____table_stats_curr_prev_0_0_10001)),
  ((MR_Box) (mercury__table_statistics____Compare____table_stats_curr_prev_0_0_10001)),
  (MR_String) "table_statistics",
  (MR_String) "table_stats_curr_prev",
  {
    mercury__table_statistics__table_statistics__du_name_ordered_table_stats_curr_prev_0
  },
  {
    mercury__table_statistics__table_statistics__du_ptag_ordered_table_stats_curr_prev_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__table_statistics__table_statistics__functor_number_map_table_stats_curr_prev_0
};

#line 1357 "table_statistics.c"
static const MR_EnumFunctorDesc mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_0 = {
  (MR_String) "table_step_dummy",
  (MR_Integer) 0
};

#line 1363 "table_statistics.c"
static const MR_EnumFunctorDesc mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_1 = {
  (MR_String) "table_step_int",
  (MR_Integer) 1
};

#line 1369 "table_statistics.c"
static const MR_EnumFunctorDesc mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_2 = {
  (MR_String) "table_step_char",
  (MR_Integer) 2
};

#line 1375 "table_statistics.c"
static const MR_EnumFunctorDesc mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_3 = {
  (MR_String) "table_step_string",
  (MR_Integer) 3
};

#line 1381 "table_statistics.c"
static const MR_EnumFunctorDesc mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_4 = {
  (MR_String) "table_step_float",
  (MR_Integer) 4
};

#line 1387 "table_statistics.c"
static const MR_EnumFunctorDesc mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_5 = {
  (MR_String) "table_step_enum",
  (MR_Integer) 5
};

#line 1393 "table_statistics.c"
static const MR_EnumFunctorDesc mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_6 = {
  (MR_String) "table_step_foreign_enum",
  (MR_Integer) 6
};

#line 1399 "table_statistics.c"
static const MR_EnumFunctorDesc mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_7 = {
  (MR_String) "table_step_general",
  (MR_Integer) 7
};

#line 1405 "table_statistics.c"
static const MR_EnumFunctorDesc mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_8 = {
  (MR_String) "table_step_general_addr",
  (MR_Integer) 8
};

#line 1411 "table_statistics.c"
static const MR_EnumFunctorDesc mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_9 = {
  (MR_String) "table_step_general_poly",
  (MR_Integer) 9
};

#line 1417 "table_statistics.c"
static const MR_EnumFunctorDesc mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_10 = {
  (MR_String) "table_step_general_poly_addr",
  (MR_Integer) 10
};

#line 1423 "table_statistics.c"
static const MR_EnumFunctorDesc mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_11 = {
  (MR_String) "table_step_typeinfo",
  (MR_Integer) 11
};

#line 1429 "table_statistics.c"
static const MR_EnumFunctorDesc mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_12 = {
  (MR_String) "table_step_typeclassinfo",
  (MR_Integer) 12
};

#line 1435 "table_statistics.c"
static const MR_EnumFunctorDesc mercury__table_statistics__table_statistics__enum_functor_desc_table_step_kind_0_13 = {
  (MR_String) "table_step_promise_implied",
  (MR_Integer) 13
};

#line 1441 "table_statistics.c"
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

#line 1459 "table_statistics.c"
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

#line 1477 "table_statistics.c"
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

#line 1495 "table_statistics.c"
const MR_TypeCtorInfo_Struct mercury__table_statistics__table_statistics__type_ctor_info_table_step_kind_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__table_statistics____Unify____table_step_kind_0_0_10001)),
  ((MR_Box) (mercury__table_statistics____Compare____table_step_kind_0_0_10001)),
  (MR_String) "table_statistics",
  (MR_String) "table_step_kind",
  {
    mercury__table_statistics__table_statistics__enum_name_ordered_table_step_kind_0
  },
  {
    mercury__table_statistics__table_statistics__enum_value_ordered_table_step_kind_0
  },
  (MR_Integer) 14,
  (MR_Integer) 4,
  mercury__table_statistics__table_statistics__functor_number_map_table_step_kind_0
};

#line 1516 "table_statistics.c"
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
  NULL
};

#line 1531 "table_statistics.c"
static const MR_PseudoTypeInfo mercury__table_statistics__table_statistics__field_types_table_step_stat_details_0_1[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1537 "table_statistics.c"
static const MR_ConstString mercury__table_statistics__table_statistics__field_names_table_step_stat_details_0_1[2] = {
  (MR_String) "start_num_node_allocs",
  (MR_String) "start_num_node_bytes"
};

#line 1543 "table_statistics.c"
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
  NULL
};

#line 1558 "table_statistics.c"
static const MR_PseudoTypeInfo mercury__table_statistics__table_statistics__field_types_table_step_stat_details_0_2[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1564 "table_statistics.c"
static const MR_ConstString mercury__table_statistics__table_statistics__field_names_table_step_stat_details_0_2[2] = {
  (MR_String) "enum_num_node_allocs",
  (MR_String) "enum_num_node_bytes"
};

#line 1570 "table_statistics.c"
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
  NULL
};

#line 1585 "table_statistics.c"
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

#line 1598 "table_statistics.c"
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

#line 1611 "table_statistics.c"
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
  NULL
};

#line 1626 "table_statistics.c"
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

#line 1645 "table_statistics.c"
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

#line 1664 "table_statistics.c"
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
  NULL
};

#line 1679 "table_statistics.c"
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

#line 1698 "table_statistics.c"
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

#line 1717 "table_statistics.c"
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
  NULL
};

#line 1732 "table_statistics.c"
static const MR_DuFunctorDescPtr mercury__table_statistics__table_statistics__du_stag_ordered_table_step_stat_details_0_0[1] = {
  &mercury__table_statistics__table_statistics__du_functor_desc_table_step_stat_details_0_0
};

#line 1737 "table_statistics.c"
static const MR_DuFunctorDescPtr mercury__table_statistics__table_statistics__du_stag_ordered_table_step_stat_details_0_1[1] = {
  &mercury__table_statistics__table_statistics__du_functor_desc_table_step_stat_details_0_1
};

#line 1742 "table_statistics.c"
static const MR_DuFunctorDescPtr mercury__table_statistics__table_statistics__du_stag_ordered_table_step_stat_details_0_2[1] = {
  &mercury__table_statistics__table_statistics__du_functor_desc_table_step_stat_details_0_2
};

#line 1747 "table_statistics.c"
static const MR_DuFunctorDescPtr mercury__table_statistics__table_statistics__du_stag_ordered_table_step_stat_details_0_3[3] = {
  &mercury__table_statistics__table_statistics__du_functor_desc_table_step_stat_details_0_3,
  &mercury__table_statistics__table_statistics__du_functor_desc_table_step_stat_details_0_4,
  &mercury__table_statistics__table_statistics__du_functor_desc_table_step_stat_details_0_5
};

#line 1754 "table_statistics.c"
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

#line 1778 "table_statistics.c"
static const MR_DuFunctorDescPtr mercury__table_statistics__table_statistics__du_name_ordered_table_step_stat_details_0[6] = {
  &mercury__table_statistics__table_statistics__du_functor_desc_table_step_stat_details_0_4,
  &mercury__table_statistics__table_statistics__du_functor_desc_table_step_stat_details_0_2,
  &mercury__table_statistics__table_statistics__du_functor_desc_table_step_stat_details_0_3,
  &mercury__table_statistics__table_statistics__du_functor_desc_table_step_stat_details_0_0,
  &mercury__table_statistics__table_statistics__du_functor_desc_table_step_stat_details_0_5,
  &mercury__table_statistics__table_statistics__du_functor_desc_table_step_stat_details_0_1
};

#line 1788 "table_statistics.c"
static const MR_Integer mercury__table_statistics__table_statistics__functor_number_map_table_step_stat_details_0[6] = {
  (MR_Integer) 3,
  (MR_Integer) 5,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 4
};

#line 1798 "table_statistics.c"
const MR_TypeCtorInfo_Struct mercury__table_statistics__table_statistics__type_ctor_info_table_step_stat_details_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__table_statistics____Unify____table_step_stat_details_0_0_10001)),
  ((MR_Box) (mercury__table_statistics____Compare____table_step_stat_details_0_0_10001)),
  (MR_String) "table_statistics",
  (MR_String) "table_step_stat_details",
  {
    mercury__table_statistics__table_statistics__du_name_ordered_table_step_stat_details_0
  },
  {
    mercury__table_statistics__table_statistics__du_ptag_ordered_table_step_stat_details_0
  },
  (MR_Integer) 6,
  (MR_Integer) 4,
  mercury__table_statistics__table_statistics__functor_number_map_table_step_stat_details_0
};

#line 1819 "table_statistics.c"
static const MR_PseudoTypeInfo mercury__table_statistics__table_statistics__field_types_table_step_stats_0_0[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__table_statistics__table_statistics__type_ctor_info_table_step_stat_details_0
};

#line 1827 "table_statistics.c"
static const MR_ConstString mercury__table_statistics__table_statistics__field_names_table_step_stats_0_0[4] = {
  (MR_String) "table_step_var_name",
  (MR_String) "table_step_num_lookups",
  (MR_String) "table_step_num_lookups_is_dupl",
  (MR_String) "table_step_detail"
};

#line 1835 "table_statistics.c"
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
  NULL
};

#line 1850 "table_statistics.c"
static const MR_DuFunctorDescPtr mercury__table_statistics__table_statistics__du_stag_ordered_table_step_stats_0_0[1] = {
  &mercury__table_statistics__table_statistics__du_functor_desc_table_step_stats_0_0
};

#line 1855 "table_statistics.c"
static const MR_DuPtagLayout mercury__table_statistics__table_statistics__du_ptag_ordered_table_step_stats_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__table_statistics__table_statistics__du_stag_ordered_table_step_stats_0_0
  }
};

#line 1864 "table_statistics.c"
static const MR_DuFunctorDescPtr mercury__table_statistics__table_statistics__du_name_ordered_table_step_stats_0[1] = {
  &mercury__table_statistics__table_statistics__du_functor_desc_table_step_stats_0_0
};

#line 1869 "table_statistics.c"
static const MR_Integer mercury__table_statistics__table_statistics__functor_number_map_table_step_stats_0[1] = {
  (MR_Integer) 0
};

#line 1874 "table_statistics.c"
const MR_TypeCtorInfo_Struct mercury__table_statistics__table_statistics__type_ctor_info_table_step_stats_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__table_statistics____Unify____table_step_stats_0_0_10001)),
  ((MR_Box) (mercury__table_statistics____Compare____table_step_stats_0_0_10001)),
  (MR_String) "table_statistics",
  (MR_String) "table_step_stats",
  {
    mercury__table_statistics__table_statistics__du_name_ordered_table_step_stats_0
  },
  {
    mercury__table_statistics__table_statistics__du_ptag_ordered_table_step_stats_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__table_statistics__table_statistics__functor_number_map_table_step_stats_0
};

#line 1895 "table_statistics.c"
static MR_bool MR_CALL 
mercury__table_statistics____Unify____ml_table_stats_ptr_0_0_10001(
#line 1898 "table_statistics.c"
  MR_Box mercury__table_statistics__wrapper_arg_1,
#line 1900 "table_statistics.c"
  MR_Box mercury__table_statistics__wrapper_arg_2)
#line 1902 "table_statistics.c"
{
#line 1904 "table_statistics.c"
  {
#line 1906 "table_statistics.c"
    MR_bool mercury__table_statistics__succeeded;

#line 1909 "table_statistics.c"
    {
#line 1911 "table_statistics.c"
      mercury__table_statistics__succeeded = mercury__table_statistics____Unify____ml_table_stats_ptr_0_0(((MR_Box) mercury__table_statistics__wrapper_arg_1), ((MR_Box) mercury__table_statistics__wrapper_arg_2));
    }
#line 1914 "table_statistics.c"
    return mercury__table_statistics__succeeded;
#line 1916 "table_statistics.c"
  }
#line 1918 "table_statistics.c"
}

#line 1921 "table_statistics.c"
static void MR_CALL 
mercury__table_statistics____Compare____ml_table_stats_ptr_0_0_10001(
#line 1924 "table_statistics.c"
  MR_Box * mercury__table_statistics__wrapper_arg_1,
#line 1926 "table_statistics.c"
  MR_Box mercury__table_statistics__wrapper_arg_2,
#line 1928 "table_statistics.c"
  MR_Box mercury__table_statistics__wrapper_arg_3)
#line 1930 "table_statistics.c"
{
#line 1932 "table_statistics.c"
  {
#line 1934 "table_statistics.c"
    MR_Word mercury__table_statistics__conv0_HeadVar__1_1;

#line 1937 "table_statistics.c"
    {
#line 1939 "table_statistics.c"
      mercury__table_statistics____Compare____ml_table_stats_ptr_0_0(&mercury__table_statistics__conv0_HeadVar__1_1, ((MR_Box) mercury__table_statistics__wrapper_arg_2), ((MR_Box) mercury__table_statistics__wrapper_arg_3));
    }
#line 1942 "table_statistics.c"
    *mercury__table_statistics__wrapper_arg_1 = ((MR_Box) (mercury__table_statistics__conv0_HeadVar__1_1));
#line 1944 "table_statistics.c"
  }
#line 1946 "table_statistics.c"
}

#line 1949 "table_statistics.c"
static MR_bool MR_CALL 
mercury__table_statistics____Unify____ml_table_step_desc_ptr_0_0_10001(
#line 1952 "table_statistics.c"
  MR_Box mercury__table_statistics__wrapper_arg_1,
#line 1954 "table_statistics.c"
  MR_Box mercury__table_statistics__wrapper_arg_2)
#line 1956 "table_statistics.c"
{
#line 1958 "table_statistics.c"
  {
#line 1960 "table_statistics.c"
    MR_bool mercury__table_statistics__succeeded;

#line 1963 "table_statistics.c"
    {
#line 1965 "table_statistics.c"
      mercury__table_statistics__succeeded = mercury__table_statistics____Unify____ml_table_step_desc_ptr_0_0(((MR_Box) mercury__table_statistics__wrapper_arg_1), ((MR_Box) mercury__table_statistics__wrapper_arg_2));
    }
#line 1968 "table_statistics.c"
    return mercury__table_statistics__succeeded;
#line 1970 "table_statistics.c"
  }
#line 1972 "table_statistics.c"
}

#line 1975 "table_statistics.c"
static void MR_CALL 
mercury__table_statistics____Compare____ml_table_step_desc_ptr_0_0_10001(
#line 1978 "table_statistics.c"
  MR_Box * mercury__table_statistics__wrapper_arg_1,
#line 1980 "table_statistics.c"
  MR_Box mercury__table_statistics__wrapper_arg_2,
#line 1982 "table_statistics.c"
  MR_Box mercury__table_statistics__wrapper_arg_3)
#line 1984 "table_statistics.c"
{
#line 1986 "table_statistics.c"
  {
#line 1988 "table_statistics.c"
    MR_Word mercury__table_statistics__conv0_HeadVar__1_1;

#line 1991 "table_statistics.c"
    {
#line 1993 "table_statistics.c"
      mercury__table_statistics____Compare____ml_table_step_desc_ptr_0_0(&mercury__table_statistics__conv0_HeadVar__1_1, ((MR_Box) mercury__table_statistics__wrapper_arg_2), ((MR_Box) mercury__table_statistics__wrapper_arg_3));
    }
#line 1996 "table_statistics.c"
    *mercury__table_statistics__wrapper_arg_1 = ((MR_Box) (mercury__table_statistics__conv0_HeadVar__1_1));
#line 1998 "table_statistics.c"
  }
#line 2000 "table_statistics.c"
}

#line 2003 "table_statistics.c"
static MR_bool MR_CALL 
mercury__table_statistics____Unify____proc_table_statistics_0_0_10001(
#line 2006 "table_statistics.c"
  MR_Box mercury__table_statistics__wrapper_arg_1,
#line 2008 "table_statistics.c"
  MR_Box mercury__table_statistics__wrapper_arg_2)
#line 2010 "table_statistics.c"
{
#line 2012 "table_statistics.c"
  {
#line 2014 "table_statistics.c"
    MR_bool mercury__table_statistics__succeeded;

#line 2017 "table_statistics.c"
    {
#line 2019 "table_statistics.c"
      mercury__table_statistics__succeeded = mercury__table_statistics____Unify____proc_table_statistics_0_0(((MR_Word) mercury__table_statistics__wrapper_arg_1), ((MR_Word) mercury__table_statistics__wrapper_arg_2));
    }
#line 2022 "table_statistics.c"
    return mercury__table_statistics__succeeded;
#line 2024 "table_statistics.c"
  }
#line 2026 "table_statistics.c"
}

#line 2029 "table_statistics.c"
static void MR_CALL 
mercury__table_statistics____Compare____proc_table_statistics_0_0_10001(
#line 2032 "table_statistics.c"
  MR_Box * mercury__table_statistics__wrapper_arg_1,
#line 2034 "table_statistics.c"
  MR_Box mercury__table_statistics__wrapper_arg_2,
#line 2036 "table_statistics.c"
  MR_Box mercury__table_statistics__wrapper_arg_3)
#line 2038 "table_statistics.c"
{
#line 2040 "table_statistics.c"
  {
#line 2042 "table_statistics.c"
    MR_Word mercury__table_statistics__conv0_HeadVar__1_1;

#line 2045 "table_statistics.c"
    {
#line 2047 "table_statistics.c"
      mercury__table_statistics____Compare____proc_table_statistics_0_0(&mercury__table_statistics__conv0_HeadVar__1_1, ((MR_Word) mercury__table_statistics__wrapper_arg_2), ((MR_Word) mercury__table_statistics__wrapper_arg_3));
    }
#line 2050 "table_statistics.c"
    *mercury__table_statistics__wrapper_arg_1 = ((MR_Box) (mercury__table_statistics__conv0_HeadVar__1_1));
#line 2052 "table_statistics.c"
  }
#line 2054 "table_statistics.c"
}

#line 2057 "table_statistics.c"
static MR_bool MR_CALL 
mercury__table_statistics____Unify____table_stats_0_0_10001(
#line 2060 "table_statistics.c"
  MR_Box mercury__table_statistics__wrapper_arg_1,
#line 2062 "table_statistics.c"
  MR_Box mercury__table_statistics__wrapper_arg_2)
#line 2064 "table_statistics.c"
{
#line 2066 "table_statistics.c"
  {
#line 2068 "table_statistics.c"
    MR_bool mercury__table_statistics__succeeded;

#line 2071 "table_statistics.c"
    {
#line 2073 "table_statistics.c"
      mercury__table_statistics__succeeded = mercury__table_statistics____Unify____table_stats_0_0(((MR_Word) mercury__table_statistics__wrapper_arg_1), ((MR_Word) mercury__table_statistics__wrapper_arg_2));
    }
#line 2076 "table_statistics.c"
    return mercury__table_statistics__succeeded;
#line 2078 "table_statistics.c"
  }
#line 2080 "table_statistics.c"
}

#line 2083 "table_statistics.c"
static void MR_CALL 
mercury__table_statistics____Compare____table_stats_0_0_10001(
#line 2086 "table_statistics.c"
  MR_Box * mercury__table_statistics__wrapper_arg_1,
#line 2088 "table_statistics.c"
  MR_Box mercury__table_statistics__wrapper_arg_2,
#line 2090 "table_statistics.c"
  MR_Box mercury__table_statistics__wrapper_arg_3)
#line 2092 "table_statistics.c"
{
#line 2094 "table_statistics.c"
  {
#line 2096 "table_statistics.c"
    MR_Word mercury__table_statistics__conv0_HeadVar__1_1;

#line 2099 "table_statistics.c"
    {
#line 2101 "table_statistics.c"
      mercury__table_statistics____Compare____table_stats_0_0(&mercury__table_statistics__conv0_HeadVar__1_1, ((MR_Word) mercury__table_statistics__wrapper_arg_2), ((MR_Word) mercury__table_statistics__wrapper_arg_3));
    }
#line 2104 "table_statistics.c"
    *mercury__table_statistics__wrapper_arg_1 = ((MR_Box) (mercury__table_statistics__conv0_HeadVar__1_1));
#line 2106 "table_statistics.c"
  }
#line 2108 "table_statistics.c"
}

#line 2111 "table_statistics.c"
static MR_bool MR_CALL 
mercury__table_statistics____Unify____table_stats_curr_prev_0_0_10001(
#line 2114 "table_statistics.c"
  MR_Box mercury__table_statistics__wrapper_arg_1,
#line 2116 "table_statistics.c"
  MR_Box mercury__table_statistics__wrapper_arg_2)
#line 2118 "table_statistics.c"
{
#line 2120 "table_statistics.c"
  {
#line 2122 "table_statistics.c"
    MR_bool mercury__table_statistics__succeeded;

#line 2125 "table_statistics.c"
    {
#line 2127 "table_statistics.c"
      mercury__table_statistics__succeeded = mercury__table_statistics____Unify____table_stats_curr_prev_0_0(((MR_Word) mercury__table_statistics__wrapper_arg_1), ((MR_Word) mercury__table_statistics__wrapper_arg_2));
    }
#line 2130 "table_statistics.c"
    return mercury__table_statistics__succeeded;
#line 2132 "table_statistics.c"
  }
#line 2134 "table_statistics.c"
}

#line 2137 "table_statistics.c"
static void MR_CALL 
mercury__table_statistics____Compare____table_stats_curr_prev_0_0_10001(
#line 2140 "table_statistics.c"
  MR_Box * mercury__table_statistics__wrapper_arg_1,
#line 2142 "table_statistics.c"
  MR_Box mercury__table_statistics__wrapper_arg_2,
#line 2144 "table_statistics.c"
  MR_Box mercury__table_statistics__wrapper_arg_3)
#line 2146 "table_statistics.c"
{
#line 2148 "table_statistics.c"
  {
#line 2150 "table_statistics.c"
    MR_Word mercury__table_statistics__conv0_HeadVar__1_1;

#line 2153 "table_statistics.c"
    {
#line 2155 "table_statistics.c"
      mercury__table_statistics____Compare____table_stats_curr_prev_0_0(&mercury__table_statistics__conv0_HeadVar__1_1, ((MR_Word) mercury__table_statistics__wrapper_arg_2), ((MR_Word) mercury__table_statistics__wrapper_arg_3));
    }
#line 2158 "table_statistics.c"
    *mercury__table_statistics__wrapper_arg_1 = ((MR_Box) (mercury__table_statistics__conv0_HeadVar__1_1));
#line 2160 "table_statistics.c"
  }
#line 2162 "table_statistics.c"
}

#line 2165 "table_statistics.c"
static MR_bool MR_CALL 
mercury__table_statistics____Unify____table_step_kind_0_0_10001(
#line 2168 "table_statistics.c"
  MR_Box mercury__table_statistics__wrapper_arg_1,
#line 2170 "table_statistics.c"
  MR_Box mercury__table_statistics__wrapper_arg_2)
#line 2172 "table_statistics.c"
{
#line 2174 "table_statistics.c"
  {
#line 2176 "table_statistics.c"
    MR_bool mercury__table_statistics__succeeded;

#line 2179 "table_statistics.c"
    {
#line 2181 "table_statistics.c"
      mercury__table_statistics__succeeded = mercury__table_statistics____Unify____table_step_kind_0_0(((MR_Word) mercury__table_statistics__wrapper_arg_1), ((MR_Word) mercury__table_statistics__wrapper_arg_2));
    }
#line 2184 "table_statistics.c"
    return mercury__table_statistics__succeeded;
#line 2186 "table_statistics.c"
  }
#line 2188 "table_statistics.c"
}

#line 2191 "table_statistics.c"
static void MR_CALL 
mercury__table_statistics____Compare____table_step_kind_0_0_10001(
#line 2194 "table_statistics.c"
  MR_Box * mercury__table_statistics__wrapper_arg_1,
#line 2196 "table_statistics.c"
  MR_Box mercury__table_statistics__wrapper_arg_2,
#line 2198 "table_statistics.c"
  MR_Box mercury__table_statistics__wrapper_arg_3)
#line 2200 "table_statistics.c"
{
#line 2202 "table_statistics.c"
  {
#line 2204 "table_statistics.c"
    MR_Word mercury__table_statistics__conv0_HeadVar__1_1;

#line 2207 "table_statistics.c"
    {
#line 2209 "table_statistics.c"
      mercury__table_statistics____Compare____table_step_kind_0_0(&mercury__table_statistics__conv0_HeadVar__1_1, ((MR_Word) mercury__table_statistics__wrapper_arg_2), ((MR_Word) mercury__table_statistics__wrapper_arg_3));
    }
#line 2212 "table_statistics.c"
    *mercury__table_statistics__wrapper_arg_1 = ((MR_Box) (mercury__table_statistics__conv0_HeadVar__1_1));
#line 2214 "table_statistics.c"
  }
#line 2216 "table_statistics.c"
}

#line 2219 "table_statistics.c"
static MR_bool MR_CALL 
mercury__table_statistics____Unify____table_step_stat_details_0_0_10001(
#line 2222 "table_statistics.c"
  MR_Box mercury__table_statistics__wrapper_arg_1,
#line 2224 "table_statistics.c"
  MR_Box mercury__table_statistics__wrapper_arg_2)
#line 2226 "table_statistics.c"
{
#line 2228 "table_statistics.c"
  {
#line 2230 "table_statistics.c"
    MR_bool mercury__table_statistics__succeeded;

#line 2233 "table_statistics.c"
    {
#line 2235 "table_statistics.c"
      mercury__table_statistics__succeeded = mercury__table_statistics____Unify____table_step_stat_details_0_0(((MR_Word) mercury__table_statistics__wrapper_arg_1), ((MR_Word) mercury__table_statistics__wrapper_arg_2));
    }
#line 2238 "table_statistics.c"
    return mercury__table_statistics__succeeded;
#line 2240 "table_statistics.c"
  }
#line 2242 "table_statistics.c"
}

#line 2245 "table_statistics.c"
static void MR_CALL 
mercury__table_statistics____Compare____table_step_stat_details_0_0_10001(
#line 2248 "table_statistics.c"
  MR_Box * mercury__table_statistics__wrapper_arg_1,
#line 2250 "table_statistics.c"
  MR_Box mercury__table_statistics__wrapper_arg_2,
#line 2252 "table_statistics.c"
  MR_Box mercury__table_statistics__wrapper_arg_3)
#line 2254 "table_statistics.c"
{
#line 2256 "table_statistics.c"
  {
#line 2258 "table_statistics.c"
    MR_Word mercury__table_statistics__conv0_HeadVar__1_1;

#line 2261 "table_statistics.c"
    {
#line 2263 "table_statistics.c"
      mercury__table_statistics____Compare____table_step_stat_details_0_0(&mercury__table_statistics__conv0_HeadVar__1_1, ((MR_Word) mercury__table_statistics__wrapper_arg_2), ((MR_Word) mercury__table_statistics__wrapper_arg_3));
    }
#line 2266 "table_statistics.c"
    *mercury__table_statistics__wrapper_arg_1 = ((MR_Box) (mercury__table_statistics__conv0_HeadVar__1_1));
#line 2268 "table_statistics.c"
  }
#line 2270 "table_statistics.c"
}

#line 2273 "table_statistics.c"
static MR_bool MR_CALL 
mercury__table_statistics____Unify____table_step_stats_0_0_10001(
#line 2276 "table_statistics.c"
  MR_Box mercury__table_statistics__wrapper_arg_1,
#line 2278 "table_statistics.c"
  MR_Box mercury__table_statistics__wrapper_arg_2)
#line 2280 "table_statistics.c"
{
#line 2282 "table_statistics.c"
  {
#line 2284 "table_statistics.c"
    MR_bool mercury__table_statistics__succeeded;

#line 2287 "table_statistics.c"
    {
#line 2289 "table_statistics.c"
      mercury__table_statistics__succeeded = mercury__table_statistics____Unify____table_step_stats_0_0(((MR_Word) mercury__table_statistics__wrapper_arg_1), ((MR_Word) mercury__table_statistics__wrapper_arg_2));
    }
#line 2292 "table_statistics.c"
    return mercury__table_statistics__succeeded;
#line 2294 "table_statistics.c"
  }
#line 2296 "table_statistics.c"
}

#line 2299 "table_statistics.c"
static void MR_CALL 
mercury__table_statistics____Compare____table_step_stats_0_0_10001(
#line 2302 "table_statistics.c"
  MR_Box * mercury__table_statistics__wrapper_arg_1,
#line 2304 "table_statistics.c"
  MR_Box mercury__table_statistics__wrapper_arg_2,
#line 2306 "table_statistics.c"
  MR_Box mercury__table_statistics__wrapper_arg_3)
#line 2308 "table_statistics.c"
{
#line 2310 "table_statistics.c"
  {
#line 2312 "table_statistics.c"
    MR_Word mercury__table_statistics__conv0_HeadVar__1_1;

#line 2315 "table_statistics.c"
    {
#line 2317 "table_statistics.c"
      mercury__table_statistics____Compare____table_step_stats_0_0(&mercury__table_statistics__conv0_HeadVar__1_1, ((MR_Word) mercury__table_statistics__wrapper_arg_2), ((MR_Word) mercury__table_statistics__wrapper_arg_3));
    }
#line 2320 "table_statistics.c"
    *mercury__table_statistics__wrapper_arg_1 = ((MR_Box) (mercury__table_statistics__conv0_HeadVar__1_1));
#line 2322 "table_statistics.c"
  }
#line 2324 "table_statistics.c"
}

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__table_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 13 "ops.opt"
{
#line 38 "ops.opt"
  {
#line 38 "ops.opt"
    MR_bool mercury__table_statistics__succeeded;

#line 38 "ops.opt"
    return (MR_Integer) 1200;
#line 38 "ops.opt"
  }
#line 13 "ops.opt"
}

#line 148 "list.int"
static void MR_CALL 
mercury__table_statistics__foldl2__ho2_6_p_in__list_0(
#line 148 "list.int"
  MR_Word mercury__table_statistics__HeadVar__2_2,
#line 148 "list.int"
  MR_Integer mercury__table_statistics__HeadVar__3_3,
#line 148 "list.int"
  MR_Integer * mercury__table_statistics__HeadVar__4_4)
#line 148 "list.int"
{
#line 396 "list.opt"
  while (MR_TRUE)
#line 396 "list.opt"
    {
#line 396 "list.opt"
      /* tailcall optimized into a loop */
#line 396 "list.opt"
      {
#line 396 "list.opt"
        MR_bool mercury__table_statistics__succeeded;

#line 396 "list.opt"
        if ((mercury__table_statistics__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 396 "list.opt"
          *mercury__table_statistics__HeadVar__4_4 = mercury__table_statistics__HeadVar__3_3;
#line 396 "list.opt"
        else
#line 399 "list.opt"
          {
#line 399 "list.opt"
            MR_Word mercury__table_statistics__H_15_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 0)));
#line 399 "list.opt"
            MR_Word mercury__table_statistics__T_16_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 1)));
#line 399 "list.opt"
            MR_Integer mercury__table_statistics__STATE_VARIABLE_A_23_23_19;

#line 679 "table_statistics.m"
            {
#line 679 "table_statistics.m"
              mercury__table_statistics__write_table_step_stats_4_p_0(mercury__table_statistics__H_15_13, mercury__table_statistics__HeadVar__3_3);
            }
#line 680 "table_statistics.m"
            mercury__table_statistics__STATE_VARIABLE_A_23_23_19 = (mercury__table_statistics__HeadVar__3_3 + (MR_Integer) 1);
#line 401 "list.opt"
            /* direct tailcall eliminated */
#line 401 "list.opt"
            {
#line 401 "list.opt"
              MR_Word mercury__table_statistics__HeadVar__2__tmp_copy_2 = mercury__table_statistics__T_16_14;
#line 401 "list.opt"
              MR_Integer mercury__table_statistics__HeadVar__3__tmp_copy_3 = mercury__table_statistics__STATE_VARIABLE_A_23_23_19;

#line 401 "list.opt"
              mercury__table_statistics__HeadVar__3_3 = mercury__table_statistics__HeadVar__3__tmp_copy_3;
#line 401 "list.opt"
              mercury__table_statistics__HeadVar__2_2 = mercury__table_statistics__HeadVar__2__tmp_copy_2;
#line 401 "list.opt"
            }
#line 401 "list.opt"
            continue;
#line 399 "list.opt"
          }
#line 396 "list.opt"
      }
#line 396 "list.opt"
      break;
#line 396 "list.opt"
    }
#line 148 "list.int"
}

#line 68 "table_statistics.m"
void MR_CALL 
mercury__table_statistics____Compare____table_step_stats_0_0(
#line 68 "table_statistics.m"
  MR_Word * mercury__table_statistics__HeadVar__1_1,
#line 68 "table_statistics.m"
  MR_Word mercury__table_statistics__HeadVar__2_2,
#line 68 "table_statistics.m"
  MR_Word mercury__table_statistics__HeadVar__3_3)
#line 68 "table_statistics.m"
{
#line 68 "table_statistics.m"
  {
#line 68 "table_statistics.m"
    MR_bool mercury__table_statistics__succeeded;
#line 68 "table_statistics.m"
    MR_Integer mercury__table_statistics__CastX_15 = (MR_Integer) mercury__table_statistics__HeadVar__2_2;
#line 68 "table_statistics.m"
    MR_Integer mercury__table_statistics__CastY_16 = (MR_Integer) mercury__table_statistics__HeadVar__3_3;

#line 68 "table_statistics.m"
    mercury__table_statistics__succeeded = (mercury__table_statistics__CastX_15 == mercury__table_statistics__CastY_16);
#line 68 "table_statistics.m"
    if (mercury__table_statistics__succeeded)
#line 2440 "table_statistics.c"
      *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 0;
#line 68 "table_statistics.m"
    else
#line 68 "table_statistics.m"
      {
#line 68 "table_statistics.m"
        MR_String mercury__table_statistics__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 0)));
#line 68 "table_statistics.m"
        MR_Integer mercury__table_statistics__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 1)));
#line 68 "table_statistics.m"
        MR_Integer mercury__table_statistics__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 2)));
#line 68 "table_statistics.m"
        MR_Word mercury__table_statistics__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 3)));
#line 68 "table_statistics.m"
        MR_String mercury__table_statistics__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 0)));
#line 68 "table_statistics.m"
        MR_Integer mercury__table_statistics__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 1)));
#line 68 "table_statistics.m"
        MR_Integer mercury__table_statistics__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 2)));
#line 68 "table_statistics.m"
        MR_Word mercury__table_statistics__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 3)));
#line 68 "table_statistics.m"
        MR_Word mercury__table_statistics__V_12_12;
#line 68 "table_statistics.m"
        MR_Integer mercury__table_statistics__Res_7_24;

#line 130 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__table_statistics____Compare____table_step_stats_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__table_statistics__V_4_4 ;
	S2 =  mercury__table_statistics__V_8_8 ;
		{
#line 130 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 2482 "table_statistics.c"

		;}
#undef MR_PROC_LABEL
	 mercury__table_statistics__Res_7_24  = Res;
#line 130 "private_builtin.opt"
}
#line 102 "private_builtin.opt"
        mercury__table_statistics__succeeded = (mercury__table_statistics__Res_7_24 < (MR_Integer) 0);
#line 105 "private_builtin.opt"
        if (mercury__table_statistics__succeeded)
#line 104 "private_builtin.opt"
          mercury__table_statistics__V_12_12 = (MR_Integer) 1;
#line 105 "private_builtin.opt"
        else
#line 110 "private_builtin.opt"
          {
#line 107 "private_builtin.opt"
            mercury__table_statistics__succeeded = (mercury__table_statistics__Res_7_24 == (MR_Integer) 0);
#line 110 "private_builtin.opt"
            if (mercury__table_statistics__succeeded)
#line 109 "private_builtin.opt"
              mercury__table_statistics__V_12_12 = (MR_Integer) 0;
#line 110 "private_builtin.opt"
            else
#line 111 "private_builtin.opt"
              mercury__table_statistics__V_12_12 = (MR_Integer) 2;
#line 110 "private_builtin.opt"
          }
#line 2511 "table_statistics.c"
        mercury__table_statistics__succeeded = (mercury__table_statistics__V_12_12 == (MR_Integer) 0);
#line 68 "table_statistics.m"
        mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
#line 68 "table_statistics.m"
        if (mercury__table_statistics__succeeded)
#line 68 "table_statistics.m"
          *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__V_12_12;
#line 68 "table_statistics.m"
        else
#line 68 "table_statistics.m"
          {
#line 68 "table_statistics.m"
            MR_Word mercury__table_statistics__V_13_13;

#line 66 "private_builtin.opt"
            mercury__table_statistics__succeeded = (mercury__table_statistics__V_5_5 < mercury__table_statistics__V_9_9);
#line 69 "private_builtin.opt"
            if (mercury__table_statistics__succeeded)
#line 68 "private_builtin.opt"
              mercury__table_statistics__V_13_13 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
            else
#line 74 "private_builtin.opt"
              {
#line 71 "private_builtin.opt"
                mercury__table_statistics__succeeded = (mercury__table_statistics__V_5_5 == mercury__table_statistics__V_9_9);
#line 74 "private_builtin.opt"
                if (mercury__table_statistics__succeeded)
#line 73 "private_builtin.opt"
                  mercury__table_statistics__V_13_13 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                else
#line 75 "private_builtin.opt"
                  mercury__table_statistics__V_13_13 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
              }
#line 2548 "table_statistics.c"
            mercury__table_statistics__succeeded = (mercury__table_statistics__V_13_13 == (MR_Integer) 0);
#line 68 "table_statistics.m"
            mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
#line 68 "table_statistics.m"
            if (mercury__table_statistics__succeeded)
#line 68 "table_statistics.m"
              *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__V_13_13;
#line 68 "table_statistics.m"
            else
#line 68 "table_statistics.m"
              {
#line 68 "table_statistics.m"
                MR_Word mercury__table_statistics__V_14_14;

#line 66 "private_builtin.opt"
                mercury__table_statistics__succeeded = (mercury__table_statistics__V_6_6 < mercury__table_statistics__V_10_10);
#line 69 "private_builtin.opt"
                if (mercury__table_statistics__succeeded)
#line 68 "private_builtin.opt"
                  mercury__table_statistics__V_14_14 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                else
#line 74 "private_builtin.opt"
                  {
#line 71 "private_builtin.opt"
                    mercury__table_statistics__succeeded = (mercury__table_statistics__V_6_6 == mercury__table_statistics__V_10_10);
#line 74 "private_builtin.opt"
                    if (mercury__table_statistics__succeeded)
#line 73 "private_builtin.opt"
                      mercury__table_statistics__V_14_14 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                    else
#line 75 "private_builtin.opt"
                      mercury__table_statistics__V_14_14 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                  }
#line 2585 "table_statistics.c"
                mercury__table_statistics__succeeded = (mercury__table_statistics__V_14_14 == (MR_Integer) 0);
#line 68 "table_statistics.m"
                mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
#line 68 "table_statistics.m"
                if (mercury__table_statistics__succeeded)
#line 68 "table_statistics.m"
                  *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__V_14_14;
#line 68 "table_statistics.m"
                else
#line 68 "table_statistics.m"
                  {
#line 68 "table_statistics.m"
                    mercury__table_statistics____Compare____table_step_stat_details_0_0(mercury__table_statistics__HeadVar__1_1, mercury__table_statistics__V_7_7, mercury__table_statistics__V_11_11);
#line 68 "table_statistics.m"
                    return;
                  }
#line 68 "table_statistics.m"
              }
#line 68 "table_statistics.m"
          }
#line 68 "table_statistics.m"
      }
#line 68 "table_statistics.m"
  }
#line 68 "table_statistics.m"
}

#line 68 "table_statistics.m"
MR_bool MR_CALL 
mercury__table_statistics____Unify____table_step_stats_0_0(
#line 68 "table_statistics.m"
  MR_Word mercury__table_statistics__HeadVar__1_1,
#line 68 "table_statistics.m"
  MR_Word mercury__table_statistics__HeadVar__2_2)
#line 68 "table_statistics.m"
{
#line 68 "table_statistics.m"
  {
#line 68 "table_statistics.m"
    MR_bool mercury__table_statistics__succeeded;
#line 68 "table_statistics.m"
    MR_Integer mercury__table_statistics__CastX_11 = (MR_Integer) mercury__table_statistics__HeadVar__1_1;
#line 68 "table_statistics.m"
    MR_Integer mercury__table_statistics__CastY_12 = (MR_Integer) mercury__table_statistics__HeadVar__2_2;

#line 68 "table_statistics.m"
    mercury__table_statistics__succeeded = (mercury__table_statistics__CastX_11 == mercury__table_statistics__CastY_12);
#line 68 "table_statistics.m"
    if (mercury__table_statistics__succeeded)
#line 68 "table_statistics.m"
      mercury__table_statistics__succeeded = MR_TRUE;
#line 68 "table_statistics.m"
    else
#line 68 "table_statistics.m"
      {
#line 68 "table_statistics.m"
        MR_String mercury__table_statistics__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 0)));
#line 68 "table_statistics.m"
        MR_Integer mercury__table_statistics__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 1)));
#line 68 "table_statistics.m"
        MR_Integer mercury__table_statistics__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 2)));
#line 68 "table_statistics.m"
        MR_Word mercury__table_statistics__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 3)));
#line 68 "table_statistics.m"
        MR_String mercury__table_statistics__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 0)));
#line 68 "table_statistics.m"
        MR_Integer mercury__table_statistics__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 1)));
#line 68 "table_statistics.m"
        MR_Integer mercury__table_statistics__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 2)));
#line 68 "table_statistics.m"
        MR_Word mercury__table_statistics__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 3)));

#line 2658 "table_statistics.c"
        mercury__table_statistics__succeeded = (strcmp(mercury__table_statistics__V_3_3, mercury__table_statistics__V_7_7) == 0);
#line 68 "table_statistics.m"
        if (mercury__table_statistics__succeeded)
#line 68 "table_statistics.m"
          {
#line 2664 "table_statistics.c"
            mercury__table_statistics__succeeded = (mercury__table_statistics__V_4_4 == mercury__table_statistics__V_8_8);
#line 68 "table_statistics.m"
            if (mercury__table_statistics__succeeded)
#line 68 "table_statistics.m"
              {
#line 2670 "table_statistics.c"
                mercury__table_statistics__succeeded = (mercury__table_statistics__V_5_5 == mercury__table_statistics__V_9_9);
#line 68 "table_statistics.m"
                if (mercury__table_statistics__succeeded)
#line 2674 "table_statistics.c"
                  {
#line 2676 "table_statistics.c"
                    return mercury__table_statistics__succeeded = mercury__table_statistics____Unify____table_step_stat_details_0_0(mercury__table_statistics__V_6_6, mercury__table_statistics__V_10_10);
                  }
#line 68 "table_statistics.m"
              }
#line 68 "table_statistics.m"
          }
#line 68 "table_statistics.m"
      }
#line 68 "table_statistics.m"
    return mercury__table_statistics__succeeded;
#line 68 "table_statistics.m"
  }
#line 68 "table_statistics.m"
}

#line 76 "table_statistics.m"
void MR_CALL 
mercury__table_statistics____Compare____table_step_stat_details_0_0(
#line 76 "table_statistics.m"
  MR_Word * mercury__table_statistics__HeadVar__1_1,
#line 76 "table_statistics.m"
  MR_Word mercury__table_statistics__HeadVar__2_2,
#line 76 "table_statistics.m"
  MR_Word mercury__table_statistics__HeadVar__3_3)
#line 76 "table_statistics.m"
{
#line 76 "table_statistics.m"
  {
#line 76 "table_statistics.m"
    MR_bool mercury__table_statistics__succeeded;
#line 76 "table_statistics.m"
    MR_Integer mercury__table_statistics__CastX_558 = (MR_Integer) mercury__table_statistics__HeadVar__2_2;
#line 76 "table_statistics.m"
    MR_Integer mercury__table_statistics__CastY_559 = (MR_Integer) mercury__table_statistics__HeadVar__3_3;

#line 76 "table_statistics.m"
    mercury__table_statistics__succeeded = (mercury__table_statistics__CastX_558 == mercury__table_statistics__CastY_559);
#line 76 "table_statistics.m"
    if (mercury__table_statistics__succeeded)
#line 2716 "table_statistics.c"
      *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 0;
#line 76 "table_statistics.m"
    else
#line 76 "table_statistics.m"
      if ((mercury__table_statistics__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 76 "table_statistics.m"
        if ((mercury__table_statistics__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 76 "table_statistics.m"
          *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 0;
#line 76 "table_statistics.m"
        else
#line 76 "table_statistics.m"
          if (((MR_tag((MR_Word) mercury__table_statistics__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 2730 "table_statistics.c"
            *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 1;
#line 76 "table_statistics.m"
          else
#line 76 "table_statistics.m"
            if (((MR_tag((MR_Word) mercury__table_statistics__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2736 "table_statistics.c"
              *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 1;
#line 76 "table_statistics.m"
            else
#line 76 "table_statistics.m"
              if (((((MR_tag((MR_Word) mercury__table_statistics__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 2742 "table_statistics.c"
                *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 1;
#line 76 "table_statistics.m"
              else
#line 76 "table_statistics.m"
                if (((((MR_tag((MR_Word) mercury__table_statistics__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 2748 "table_statistics.c"
                  *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 1;
#line 76 "table_statistics.m"
                else
#line 2752 "table_statistics.c"
                  *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 1;
#line 76 "table_statistics.m"
      else
#line 76 "table_statistics.m"
        if (((MR_tag((MR_Word) mercury__table_statistics__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 76 "table_statistics.m"
          {
#line 76 "table_statistics.m"
            MR_Integer mercury__table_statistics__V_618_618 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 1)));
#line 76 "table_statistics.m"
            MR_Integer mercury__table_statistics__V_619_619 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 0)));

#line 76 "table_statistics.m"
            if ((mercury__table_statistics__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2767 "table_statistics.c"
              *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 2;
#line 76 "table_statistics.m"
            else
#line 76 "table_statistics.m"
              if (((MR_tag((MR_Word) mercury__table_statistics__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 76 "table_statistics.m"
                {
#line 76 "table_statistics.m"
                  MR_Integer mercury__table_statistics__V_111_111 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 0)));
#line 76 "table_statistics.m"
                  MR_Integer mercury__table_statistics__V_112_112 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 1)));
#line 76 "table_statistics.m"
                  MR_Word mercury__table_statistics__V_113_113;

#line 66 "private_builtin.opt"
                  mercury__table_statistics__succeeded = (mercury__table_statistics__V_619_619 < mercury__table_statistics__V_111_111);
#line 69 "private_builtin.opt"
                  if (mercury__table_statistics__succeeded)
#line 68 "private_builtin.opt"
                    mercury__table_statistics__V_113_113 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                  else
#line 74 "private_builtin.opt"
                    {
#line 71 "private_builtin.opt"
                      mercury__table_statistics__succeeded = (mercury__table_statistics__V_619_619 == mercury__table_statistics__V_111_111);
#line 74 "private_builtin.opt"
                      if (mercury__table_statistics__succeeded)
#line 73 "private_builtin.opt"
                        mercury__table_statistics__V_113_113 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                      else
#line 75 "private_builtin.opt"
                        mercury__table_statistics__V_113_113 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                    }
#line 2804 "table_statistics.c"
                  mercury__table_statistics__succeeded = (mercury__table_statistics__V_113_113 == (MR_Integer) 0);
#line 76 "table_statistics.m"
                  mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
#line 76 "table_statistics.m"
                  if (mercury__table_statistics__succeeded)
#line 76 "table_statistics.m"
                    *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__V_113_113;
#line 76 "table_statistics.m"
                  else
#line 69 "private_builtin.opt"
                    {
#line 66 "private_builtin.opt"
                      mercury__table_statistics__succeeded = (mercury__table_statistics__V_618_618 < mercury__table_statistics__V_112_112);
#line 69 "private_builtin.opt"
                      if (mercury__table_statistics__succeeded)
#line 68 "private_builtin.opt"
                        *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                      else
#line 74 "private_builtin.opt"
                        {
#line 71 "private_builtin.opt"
                          mercury__table_statistics__succeeded = (mercury__table_statistics__V_618_618 == mercury__table_statistics__V_112_112);
#line 74 "private_builtin.opt"
                          if (mercury__table_statistics__succeeded)
#line 73 "private_builtin.opt"
                            *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                          else
#line 75 "private_builtin.opt"
                            *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                        }
#line 69 "private_builtin.opt"
                    }
#line 76 "table_statistics.m"
                }
#line 76 "table_statistics.m"
              else
#line 76 "table_statistics.m"
                if (((MR_tag((MR_Word) mercury__table_statistics__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2846 "table_statistics.c"
                  *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 2;
#line 76 "table_statistics.m"
                else
#line 76 "table_statistics.m"
                  if (((((MR_tag((MR_Word) mercury__table_statistics__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 2852 "table_statistics.c"
                    *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 1;
#line 76 "table_statistics.m"
                  else
#line 76 "table_statistics.m"
                    if (((((MR_tag((MR_Word) mercury__table_statistics__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 2858 "table_statistics.c"
                      *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 1;
#line 76 "table_statistics.m"
                    else
#line 2862 "table_statistics.c"
                      *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 1;
#line 76 "table_statistics.m"
          }
#line 76 "table_statistics.m"
        else
#line 76 "table_statistics.m"
          if (((MR_tag((MR_Word) mercury__table_statistics__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 76 "table_statistics.m"
            {
#line 76 "table_statistics.m"
              MR_Integer mercury__table_statistics__V_644_644 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 1)));
#line 76 "table_statistics.m"
              MR_Integer mercury__table_statistics__V_645_645 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 0)));

#line 76 "table_statistics.m"
              if ((mercury__table_statistics__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2879 "table_statistics.c"
                *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 2;
#line 76 "table_statistics.m"
              else
#line 76 "table_statistics.m"
                if (((MR_tag((MR_Word) mercury__table_statistics__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 2885 "table_statistics.c"
                  *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 1;
#line 76 "table_statistics.m"
                else
#line 76 "table_statistics.m"
                  if (((MR_tag((MR_Word) mercury__table_statistics__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 76 "table_statistics.m"
                    {
#line 76 "table_statistics.m"
                      MR_Integer mercury__table_statistics__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 0)));
#line 76 "table_statistics.m"
                      MR_Integer mercury__table_statistics__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 1)));
#line 76 "table_statistics.m"
                      MR_Word mercury__table_statistics__V_53_53;

#line 66 "private_builtin.opt"
                      mercury__table_statistics__succeeded = (mercury__table_statistics__V_645_645 < mercury__table_statistics__V_51_51);
#line 69 "private_builtin.opt"
                      if (mercury__table_statistics__succeeded)
#line 68 "private_builtin.opt"
                        mercury__table_statistics__V_53_53 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                      else
#line 74 "private_builtin.opt"
                        {
#line 71 "private_builtin.opt"
                          mercury__table_statistics__succeeded = (mercury__table_statistics__V_645_645 == mercury__table_statistics__V_51_51);
#line 74 "private_builtin.opt"
                          if (mercury__table_statistics__succeeded)
#line 73 "private_builtin.opt"
                            mercury__table_statistics__V_53_53 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                          else
#line 75 "private_builtin.opt"
                            mercury__table_statistics__V_53_53 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                        }
#line 2922 "table_statistics.c"
                      mercury__table_statistics__succeeded = (mercury__table_statistics__V_53_53 == (MR_Integer) 0);
#line 76 "table_statistics.m"
                      mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
#line 76 "table_statistics.m"
                      if (mercury__table_statistics__succeeded)
#line 76 "table_statistics.m"
                        *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__V_53_53;
#line 76 "table_statistics.m"
                      else
#line 69 "private_builtin.opt"
                        {
#line 66 "private_builtin.opt"
                          mercury__table_statistics__succeeded = (mercury__table_statistics__V_644_644 < mercury__table_statistics__V_52_52);
#line 69 "private_builtin.opt"
                          if (mercury__table_statistics__succeeded)
#line 68 "private_builtin.opt"
                            *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                          else
#line 74 "private_builtin.opt"
                            {
#line 71 "private_builtin.opt"
                              mercury__table_statistics__succeeded = (mercury__table_statistics__V_644_644 == mercury__table_statistics__V_52_52);
#line 74 "private_builtin.opt"
                              if (mercury__table_statistics__succeeded)
#line 73 "private_builtin.opt"
                                *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                              else
#line 75 "private_builtin.opt"
                                *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                            }
#line 69 "private_builtin.opt"
                        }
#line 76 "table_statistics.m"
                    }
#line 76 "table_statistics.m"
                  else
#line 76 "table_statistics.m"
                    if (((((MR_tag((MR_Word) mercury__table_statistics__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 2964 "table_statistics.c"
                      *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 1;
#line 76 "table_statistics.m"
                    else
#line 76 "table_statistics.m"
                      if (((((MR_tag((MR_Word) mercury__table_statistics__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 2970 "table_statistics.c"
                        *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 1;
#line 76 "table_statistics.m"
                      else
#line 2974 "table_statistics.c"
                        *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 1;
#line 76 "table_statistics.m"
            }
#line 76 "table_statistics.m"
          else
#line 76 "table_statistics.m"
            if (((((MR_tag((MR_Word) mercury__table_statistics__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 76 "table_statistics.m"
              {
#line 76 "table_statistics.m"
                MR_Integer mercury__table_statistics__V_603_603 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 15)));
#line 76 "table_statistics.m"
                MR_Integer mercury__table_statistics__V_604_604 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 14)));
#line 76 "table_statistics.m"
                MR_Integer mercury__table_statistics__V_605_605 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 13)));
#line 76 "table_statistics.m"
                MR_Integer mercury__table_statistics__V_606_606 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 12)));
#line 76 "table_statistics.m"
                MR_Integer mercury__table_statistics__V_607_607 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 11)));
#line 76 "table_statistics.m"
                MR_Integer mercury__table_statistics__V_608_608 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 10)));
#line 76 "table_statistics.m"
                MR_Integer mercury__table_statistics__V_609_609 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 9)));
#line 76 "table_statistics.m"
                MR_Integer mercury__table_statistics__V_610_610 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 8)));
#line 76 "table_statistics.m"
                MR_Integer mercury__table_statistics__V_611_611 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 7)));
#line 76 "table_statistics.m"
                MR_Integer mercury__table_statistics__V_612_612 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 6)));
#line 76 "table_statistics.m"
                MR_Integer mercury__table_statistics__V_613_613 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 5)));
#line 76 "table_statistics.m"
                MR_Integer mercury__table_statistics__V_614_614 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 4)));
#line 76 "table_statistics.m"
                MR_Integer mercury__table_statistics__V_615_615 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 3)));
#line 76 "table_statistics.m"
                MR_Integer mercury__table_statistics__V_616_616 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 2)));
#line 76 "table_statistics.m"
                MR_Integer mercury__table_statistics__V_617_617 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 1)));

#line 76 "table_statistics.m"
                if ((mercury__table_statistics__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3017 "table_statistics.c"
                  *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 2;
#line 76 "table_statistics.m"
                else
#line 76 "table_statistics.m"
                  if (((MR_tag((MR_Word) mercury__table_statistics__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 3023 "table_statistics.c"
                    *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 2;
#line 76 "table_statistics.m"
                  else
#line 76 "table_statistics.m"
                    if (((MR_tag((MR_Word) mercury__table_statistics__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3029 "table_statistics.c"
                      *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 2;
#line 76 "table_statistics.m"
                    else
#line 76 "table_statistics.m"
                      if (((((MR_tag((MR_Word) mercury__table_statistics__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 76 "table_statistics.m"
                        {
#line 76 "table_statistics.m"
                          MR_Integer mercury__table_statistics__V_352_352 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 1)));
#line 76 "table_statistics.m"
                          MR_Integer mercury__table_statistics__V_353_353 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 2)));
#line 76 "table_statistics.m"
                          MR_Integer mercury__table_statistics__V_354_354 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 3)));
#line 76 "table_statistics.m"
                          MR_Integer mercury__table_statistics__V_355_355 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 4)));
#line 76 "table_statistics.m"
                          MR_Integer mercury__table_statistics__V_356_356 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 5)));
#line 76 "table_statistics.m"
                          MR_Integer mercury__table_statistics__V_357_357 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 6)));
#line 76 "table_statistics.m"
                          MR_Integer mercury__table_statistics__V_358_358 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 7)));
#line 76 "table_statistics.m"
                          MR_Integer mercury__table_statistics__V_359_359 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 8)));
#line 76 "table_statistics.m"
                          MR_Integer mercury__table_statistics__V_360_360 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 9)));
#line 76 "table_statistics.m"
                          MR_Integer mercury__table_statistics__V_361_361 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 10)));
#line 76 "table_statistics.m"
                          MR_Integer mercury__table_statistics__V_362_362 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 11)));
#line 76 "table_statistics.m"
                          MR_Integer mercury__table_statistics__V_363_363 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 12)));
#line 76 "table_statistics.m"
                          MR_Integer mercury__table_statistics__V_364_364 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 13)));
#line 76 "table_statistics.m"
                          MR_Integer mercury__table_statistics__V_365_365 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 14)));
#line 76 "table_statistics.m"
                          MR_Integer mercury__table_statistics__V_366_366 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 15)));
#line 76 "table_statistics.m"
                          MR_Word mercury__table_statistics__V_367_367;

#line 66 "private_builtin.opt"
                          mercury__table_statistics__succeeded = (mercury__table_statistics__V_617_617 < mercury__table_statistics__V_352_352);
#line 69 "private_builtin.opt"
                          if (mercury__table_statistics__succeeded)
#line 68 "private_builtin.opt"
                            mercury__table_statistics__V_367_367 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                          else
#line 74 "private_builtin.opt"
                            {
#line 71 "private_builtin.opt"
                              mercury__table_statistics__succeeded = (mercury__table_statistics__V_617_617 == mercury__table_statistics__V_352_352);
#line 74 "private_builtin.opt"
                              if (mercury__table_statistics__succeeded)
#line 73 "private_builtin.opt"
                                mercury__table_statistics__V_367_367 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                              else
#line 75 "private_builtin.opt"
                                mercury__table_statistics__V_367_367 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                            }
#line 3092 "table_statistics.c"
                          mercury__table_statistics__succeeded = (mercury__table_statistics__V_367_367 == (MR_Integer) 0);
#line 76 "table_statistics.m"
                          mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
#line 76 "table_statistics.m"
                          if (mercury__table_statistics__succeeded)
#line 76 "table_statistics.m"
                            *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__V_367_367;
#line 76 "table_statistics.m"
                          else
#line 76 "table_statistics.m"
                            {
#line 76 "table_statistics.m"
                              MR_Word mercury__table_statistics__V_368_368;

#line 66 "private_builtin.opt"
                              mercury__table_statistics__succeeded = (mercury__table_statistics__V_616_616 < mercury__table_statistics__V_353_353);
#line 69 "private_builtin.opt"
                              if (mercury__table_statistics__succeeded)
#line 68 "private_builtin.opt"
                                mercury__table_statistics__V_368_368 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                              else
#line 74 "private_builtin.opt"
                                {
#line 71 "private_builtin.opt"
                                  mercury__table_statistics__succeeded = (mercury__table_statistics__V_616_616 == mercury__table_statistics__V_353_353);
#line 74 "private_builtin.opt"
                                  if (mercury__table_statistics__succeeded)
#line 73 "private_builtin.opt"
                                    mercury__table_statistics__V_368_368 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                                  else
#line 75 "private_builtin.opt"
                                    mercury__table_statistics__V_368_368 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                                }
#line 3129 "table_statistics.c"
                              mercury__table_statistics__succeeded = (mercury__table_statistics__V_368_368 == (MR_Integer) 0);
#line 76 "table_statistics.m"
                              mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
#line 76 "table_statistics.m"
                              if (mercury__table_statistics__succeeded)
#line 76 "table_statistics.m"
                                *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__V_368_368;
#line 76 "table_statistics.m"
                              else
#line 76 "table_statistics.m"
                                {
#line 76 "table_statistics.m"
                                  MR_Word mercury__table_statistics__V_369_369;

#line 66 "private_builtin.opt"
                                  mercury__table_statistics__succeeded = (mercury__table_statistics__V_615_615 < mercury__table_statistics__V_354_354);
#line 69 "private_builtin.opt"
                                  if (mercury__table_statistics__succeeded)
#line 68 "private_builtin.opt"
                                    mercury__table_statistics__V_369_369 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                                  else
#line 74 "private_builtin.opt"
                                    {
#line 71 "private_builtin.opt"
                                      mercury__table_statistics__succeeded = (mercury__table_statistics__V_615_615 == mercury__table_statistics__V_354_354);
#line 74 "private_builtin.opt"
                                      if (mercury__table_statistics__succeeded)
#line 73 "private_builtin.opt"
                                        mercury__table_statistics__V_369_369 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                                      else
#line 75 "private_builtin.opt"
                                        mercury__table_statistics__V_369_369 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                                    }
#line 3166 "table_statistics.c"
                                  mercury__table_statistics__succeeded = (mercury__table_statistics__V_369_369 == (MR_Integer) 0);
#line 76 "table_statistics.m"
                                  mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
#line 76 "table_statistics.m"
                                  if (mercury__table_statistics__succeeded)
#line 76 "table_statistics.m"
                                    *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__V_369_369;
#line 76 "table_statistics.m"
                                  else
#line 76 "table_statistics.m"
                                    {
#line 76 "table_statistics.m"
                                      MR_Word mercury__table_statistics__V_370_370;

#line 66 "private_builtin.opt"
                                      mercury__table_statistics__succeeded = (mercury__table_statistics__V_614_614 < mercury__table_statistics__V_355_355);
#line 69 "private_builtin.opt"
                                      if (mercury__table_statistics__succeeded)
#line 68 "private_builtin.opt"
                                        mercury__table_statistics__V_370_370 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                                      else
#line 74 "private_builtin.opt"
                                        {
#line 71 "private_builtin.opt"
                                          mercury__table_statistics__succeeded = (mercury__table_statistics__V_614_614 == mercury__table_statistics__V_355_355);
#line 74 "private_builtin.opt"
                                          if (mercury__table_statistics__succeeded)
#line 73 "private_builtin.opt"
                                            mercury__table_statistics__V_370_370 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                                          else
#line 75 "private_builtin.opt"
                                            mercury__table_statistics__V_370_370 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                                        }
#line 3203 "table_statistics.c"
                                      mercury__table_statistics__succeeded = (mercury__table_statistics__V_370_370 == (MR_Integer) 0);
#line 76 "table_statistics.m"
                                      mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
#line 76 "table_statistics.m"
                                      if (mercury__table_statistics__succeeded)
#line 76 "table_statistics.m"
                                        *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__V_370_370;
#line 76 "table_statistics.m"
                                      else
#line 76 "table_statistics.m"
                                        {
#line 76 "table_statistics.m"
                                          MR_Word mercury__table_statistics__V_371_371;

#line 66 "private_builtin.opt"
                                          mercury__table_statistics__succeeded = (mercury__table_statistics__V_613_613 < mercury__table_statistics__V_356_356);
#line 69 "private_builtin.opt"
                                          if (mercury__table_statistics__succeeded)
#line 68 "private_builtin.opt"
                                            mercury__table_statistics__V_371_371 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                                          else
#line 74 "private_builtin.opt"
                                            {
#line 71 "private_builtin.opt"
                                              mercury__table_statistics__succeeded = (mercury__table_statistics__V_613_613 == mercury__table_statistics__V_356_356);
#line 74 "private_builtin.opt"
                                              if (mercury__table_statistics__succeeded)
#line 73 "private_builtin.opt"
                                                mercury__table_statistics__V_371_371 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                                              else
#line 75 "private_builtin.opt"
                                                mercury__table_statistics__V_371_371 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                                            }
#line 3240 "table_statistics.c"
                                          mercury__table_statistics__succeeded = (mercury__table_statistics__V_371_371 == (MR_Integer) 0);
#line 76 "table_statistics.m"
                                          mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
#line 76 "table_statistics.m"
                                          if (mercury__table_statistics__succeeded)
#line 76 "table_statistics.m"
                                            *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__V_371_371;
#line 76 "table_statistics.m"
                                          else
#line 76 "table_statistics.m"
                                            {
#line 76 "table_statistics.m"
                                              MR_Word mercury__table_statistics__V_372_372;

#line 66 "private_builtin.opt"
                                              mercury__table_statistics__succeeded = (mercury__table_statistics__V_612_612 < mercury__table_statistics__V_357_357);
#line 69 "private_builtin.opt"
                                              if (mercury__table_statistics__succeeded)
#line 68 "private_builtin.opt"
                                                mercury__table_statistics__V_372_372 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                                              else
#line 74 "private_builtin.opt"
                                                {
#line 71 "private_builtin.opt"
                                                  mercury__table_statistics__succeeded = (mercury__table_statistics__V_612_612 == mercury__table_statistics__V_357_357);
#line 74 "private_builtin.opt"
                                                  if (mercury__table_statistics__succeeded)
#line 73 "private_builtin.opt"
                                                    mercury__table_statistics__V_372_372 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                                                  else
#line 75 "private_builtin.opt"
                                                    mercury__table_statistics__V_372_372 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                                                }
#line 3277 "table_statistics.c"
                                              mercury__table_statistics__succeeded = (mercury__table_statistics__V_372_372 == (MR_Integer) 0);
#line 76 "table_statistics.m"
                                              mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
#line 76 "table_statistics.m"
                                              if (mercury__table_statistics__succeeded)
#line 76 "table_statistics.m"
                                                *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__V_372_372;
#line 76 "table_statistics.m"
                                              else
#line 76 "table_statistics.m"
                                                {
#line 76 "table_statistics.m"
                                                  MR_Word mercury__table_statistics__V_373_373;

#line 66 "private_builtin.opt"
                                                  mercury__table_statistics__succeeded = (mercury__table_statistics__V_611_611 < mercury__table_statistics__V_358_358);
#line 69 "private_builtin.opt"
                                                  if (mercury__table_statistics__succeeded)
#line 68 "private_builtin.opt"
                                                    mercury__table_statistics__V_373_373 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                                                  else
#line 74 "private_builtin.opt"
                                                    {
#line 71 "private_builtin.opt"
                                                      mercury__table_statistics__succeeded = (mercury__table_statistics__V_611_611 == mercury__table_statistics__V_358_358);
#line 74 "private_builtin.opt"
                                                      if (mercury__table_statistics__succeeded)
#line 73 "private_builtin.opt"
                                                        mercury__table_statistics__V_373_373 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                                                      else
#line 75 "private_builtin.opt"
                                                        mercury__table_statistics__V_373_373 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                                                    }
#line 3314 "table_statistics.c"
                                                  mercury__table_statistics__succeeded = (mercury__table_statistics__V_373_373 == (MR_Integer) 0);
#line 76 "table_statistics.m"
                                                  mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
#line 76 "table_statistics.m"
                                                  if (mercury__table_statistics__succeeded)
#line 76 "table_statistics.m"
                                                    *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__V_373_373;
#line 76 "table_statistics.m"
                                                  else
#line 76 "table_statistics.m"
                                                    {
#line 76 "table_statistics.m"
                                                      MR_Word mercury__table_statistics__V_374_374;

#line 66 "private_builtin.opt"
                                                      mercury__table_statistics__succeeded = (mercury__table_statistics__V_610_610 < mercury__table_statistics__V_359_359);
#line 69 "private_builtin.opt"
                                                      if (mercury__table_statistics__succeeded)
#line 68 "private_builtin.opt"
                                                        mercury__table_statistics__V_374_374 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                                                      else
#line 74 "private_builtin.opt"
                                                        {
#line 71 "private_builtin.opt"
                                                          mercury__table_statistics__succeeded = (mercury__table_statistics__V_610_610 == mercury__table_statistics__V_359_359);
#line 74 "private_builtin.opt"
                                                          if (mercury__table_statistics__succeeded)
#line 73 "private_builtin.opt"
                                                            mercury__table_statistics__V_374_374 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                                                          else
#line 75 "private_builtin.opt"
                                                            mercury__table_statistics__V_374_374 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                                                        }
#line 3351 "table_statistics.c"
                                                      mercury__table_statistics__succeeded = (mercury__table_statistics__V_374_374 == (MR_Integer) 0);
#line 76 "table_statistics.m"
                                                      mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
#line 76 "table_statistics.m"
                                                      if (mercury__table_statistics__succeeded)
#line 76 "table_statistics.m"
                                                        *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__V_374_374;
#line 76 "table_statistics.m"
                                                      else
#line 76 "table_statistics.m"
                                                        {
#line 76 "table_statistics.m"
                                                          MR_Word mercury__table_statistics__V_375_375;

#line 66 "private_builtin.opt"
                                                          mercury__table_statistics__succeeded = (mercury__table_statistics__V_609_609 < mercury__table_statistics__V_360_360);
#line 69 "private_builtin.opt"
                                                          if (mercury__table_statistics__succeeded)
#line 68 "private_builtin.opt"
                                                            mercury__table_statistics__V_375_375 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                                                          else
#line 74 "private_builtin.opt"
                                                            {
#line 71 "private_builtin.opt"
                                                              mercury__table_statistics__succeeded = (mercury__table_statistics__V_609_609 == mercury__table_statistics__V_360_360);
#line 74 "private_builtin.opt"
                                                              if (mercury__table_statistics__succeeded)
#line 73 "private_builtin.opt"
                                                                mercury__table_statistics__V_375_375 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                                                              else
#line 75 "private_builtin.opt"
                                                                mercury__table_statistics__V_375_375 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                                                            }
#line 3388 "table_statistics.c"
                                                          mercury__table_statistics__succeeded = (mercury__table_statistics__V_375_375 == (MR_Integer) 0);
#line 76 "table_statistics.m"
                                                          mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
#line 76 "table_statistics.m"
                                                          if (mercury__table_statistics__succeeded)
#line 76 "table_statistics.m"
                                                            *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__V_375_375;
#line 76 "table_statistics.m"
                                                          else
#line 76 "table_statistics.m"
                                                            {
#line 76 "table_statistics.m"
                                                              MR_Word mercury__table_statistics__V_376_376;

#line 66 "private_builtin.opt"
                                                              mercury__table_statistics__succeeded = (mercury__table_statistics__V_608_608 < mercury__table_statistics__V_361_361);
#line 69 "private_builtin.opt"
                                                              if (mercury__table_statistics__succeeded)
#line 68 "private_builtin.opt"
                                                                mercury__table_statistics__V_376_376 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                                                              else
#line 74 "private_builtin.opt"
                                                                {
#line 71 "private_builtin.opt"
                                                                  mercury__table_statistics__succeeded = (mercury__table_statistics__V_608_608 == mercury__table_statistics__V_361_361);
#line 74 "private_builtin.opt"
                                                                  if (mercury__table_statistics__succeeded)
#line 73 "private_builtin.opt"
                                                                    mercury__table_statistics__V_376_376 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                                                                  else
#line 75 "private_builtin.opt"
                                                                    mercury__table_statistics__V_376_376 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                                                                }
#line 3425 "table_statistics.c"
                                                              mercury__table_statistics__succeeded = (mercury__table_statistics__V_376_376 == (MR_Integer) 0);
#line 76 "table_statistics.m"
                                                              mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
#line 76 "table_statistics.m"
                                                              if (mercury__table_statistics__succeeded)
#line 76 "table_statistics.m"
                                                                *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__V_376_376;
#line 76 "table_statistics.m"
                                                              else
#line 76 "table_statistics.m"
                                                                {
#line 76 "table_statistics.m"
                                                                  MR_Word mercury__table_statistics__V_377_377;

#line 66 "private_builtin.opt"
                                                                  mercury__table_statistics__succeeded = (mercury__table_statistics__V_607_607 < mercury__table_statistics__V_362_362);
#line 69 "private_builtin.opt"
                                                                  if (mercury__table_statistics__succeeded)
#line 68 "private_builtin.opt"
                                                                    mercury__table_statistics__V_377_377 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                                                                  else
#line 74 "private_builtin.opt"
                                                                    {
#line 71 "private_builtin.opt"
                                                                      mercury__table_statistics__succeeded = (mercury__table_statistics__V_607_607 == mercury__table_statistics__V_362_362);
#line 74 "private_builtin.opt"
                                                                      if (mercury__table_statistics__succeeded)
#line 73 "private_builtin.opt"
                                                                        mercury__table_statistics__V_377_377 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                                                                      else
#line 75 "private_builtin.opt"
                                                                        mercury__table_statistics__V_377_377 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                                                                    }
#line 3462 "table_statistics.c"
                                                                  mercury__table_statistics__succeeded = (mercury__table_statistics__V_377_377 == (MR_Integer) 0);
#line 76 "table_statistics.m"
                                                                  mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
#line 76 "table_statistics.m"
                                                                  if (mercury__table_statistics__succeeded)
#line 76 "table_statistics.m"
                                                                    *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__V_377_377;
#line 76 "table_statistics.m"
                                                                  else
#line 76 "table_statistics.m"
                                                                    {
#line 76 "table_statistics.m"
                                                                      MR_Word mercury__table_statistics__V_378_378;

#line 66 "private_builtin.opt"
                                                                      mercury__table_statistics__succeeded = (mercury__table_statistics__V_606_606 < mercury__table_statistics__V_363_363);
#line 69 "private_builtin.opt"
                                                                      if (mercury__table_statistics__succeeded)
#line 68 "private_builtin.opt"
                                                                        mercury__table_statistics__V_378_378 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                                                                      else
#line 74 "private_builtin.opt"
                                                                        {
#line 71 "private_builtin.opt"
                                                                          mercury__table_statistics__succeeded = (mercury__table_statistics__V_606_606 == mercury__table_statistics__V_363_363);
#line 74 "private_builtin.opt"
                                                                          if (mercury__table_statistics__succeeded)
#line 73 "private_builtin.opt"
                                                                            mercury__table_statistics__V_378_378 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                                                                          else
#line 75 "private_builtin.opt"
                                                                            mercury__table_statistics__V_378_378 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                                                                        }
#line 3499 "table_statistics.c"
                                                                      mercury__table_statistics__succeeded = (mercury__table_statistics__V_378_378 == (MR_Integer) 0);
#line 76 "table_statistics.m"
                                                                      mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
#line 76 "table_statistics.m"
                                                                      if (mercury__table_statistics__succeeded)
#line 76 "table_statistics.m"
                                                                        *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__V_378_378;
#line 76 "table_statistics.m"
                                                                      else
#line 76 "table_statistics.m"
                                                                        {
#line 76 "table_statistics.m"
                                                                          MR_Word mercury__table_statistics__V_379_379;

#line 66 "private_builtin.opt"
                                                                          mercury__table_statistics__succeeded = (mercury__table_statistics__V_605_605 < mercury__table_statistics__V_364_364);
#line 69 "private_builtin.opt"
                                                                          if (mercury__table_statistics__succeeded)
#line 68 "private_builtin.opt"
                                                                            mercury__table_statistics__V_379_379 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                                                                          else
#line 74 "private_builtin.opt"
                                                                            {
#line 71 "private_builtin.opt"
                                                                              mercury__table_statistics__succeeded = (mercury__table_statistics__V_605_605 == mercury__table_statistics__V_364_364);
#line 74 "private_builtin.opt"
                                                                              if (mercury__table_statistics__succeeded)
#line 73 "private_builtin.opt"
                                                                                mercury__table_statistics__V_379_379 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                                                                              else
#line 75 "private_builtin.opt"
                                                                                mercury__table_statistics__V_379_379 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                                                                            }
#line 3536 "table_statistics.c"
                                                                          mercury__table_statistics__succeeded = (mercury__table_statistics__V_379_379 == (MR_Integer) 0);
#line 76 "table_statistics.m"
                                                                          mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
#line 76 "table_statistics.m"
                                                                          if (mercury__table_statistics__succeeded)
#line 76 "table_statistics.m"
                                                                            *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__V_379_379;
#line 76 "table_statistics.m"
                                                                          else
#line 76 "table_statistics.m"
                                                                            {
#line 76 "table_statistics.m"
                                                                              MR_Word mercury__table_statistics__V_380_380;

#line 66 "private_builtin.opt"
                                                                              mercury__table_statistics__succeeded = (mercury__table_statistics__V_604_604 < mercury__table_statistics__V_365_365);
#line 69 "private_builtin.opt"
                                                                              if (mercury__table_statistics__succeeded)
#line 68 "private_builtin.opt"
                                                                                mercury__table_statistics__V_380_380 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                                                                              else
#line 74 "private_builtin.opt"
                                                                                {
#line 71 "private_builtin.opt"
                                                                                  mercury__table_statistics__succeeded = (mercury__table_statistics__V_604_604 == mercury__table_statistics__V_365_365);
#line 74 "private_builtin.opt"
                                                                                  if (mercury__table_statistics__succeeded)
#line 73 "private_builtin.opt"
                                                                                    mercury__table_statistics__V_380_380 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                                                                                  else
#line 75 "private_builtin.opt"
                                                                                    mercury__table_statistics__V_380_380 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                                                                                }
#line 3573 "table_statistics.c"
                                                                              mercury__table_statistics__succeeded = (mercury__table_statistics__V_380_380 == (MR_Integer) 0);
#line 76 "table_statistics.m"
                                                                              mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
#line 76 "table_statistics.m"
                                                                              if (mercury__table_statistics__succeeded)
#line 76 "table_statistics.m"
                                                                                *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__V_380_380;
#line 76 "table_statistics.m"
                                                                              else
#line 69 "private_builtin.opt"
                                                                                {
#line 66 "private_builtin.opt"
                                                                                  mercury__table_statistics__succeeded = (mercury__table_statistics__V_603_603 < mercury__table_statistics__V_366_366);
#line 69 "private_builtin.opt"
                                                                                  if (mercury__table_statistics__succeeded)
#line 68 "private_builtin.opt"
                                                                                    *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                                                                                  else
#line 74 "private_builtin.opt"
                                                                                    {
#line 71 "private_builtin.opt"
                                                                                      mercury__table_statistics__succeeded = (mercury__table_statistics__V_603_603 == mercury__table_statistics__V_366_366);
#line 74 "private_builtin.opt"
                                                                                      if (mercury__table_statistics__succeeded)
#line 73 "private_builtin.opt"
                                                                                        *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                                                                                      else
#line 75 "private_builtin.opt"
                                                                                        *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                                                                                    }
#line 69 "private_builtin.opt"
                                                                                }
#line 76 "table_statistics.m"
                                                                            }
#line 76 "table_statistics.m"
                                                                        }
#line 76 "table_statistics.m"
                                                                    }
#line 76 "table_statistics.m"
                                                                }
#line 76 "table_statistics.m"
                                                            }
#line 76 "table_statistics.m"
                                                        }
#line 76 "table_statistics.m"
                                                    }
#line 76 "table_statistics.m"
                                                }
#line 76 "table_statistics.m"
                                            }
#line 76 "table_statistics.m"
                                        }
#line 76 "table_statistics.m"
                                    }
#line 76 "table_statistics.m"
                                }
#line 76 "table_statistics.m"
                            }
#line 76 "table_statistics.m"
                        }
#line 76 "table_statistics.m"
                      else
#line 76 "table_statistics.m"
                        if (((((MR_tag((MR_Word) mercury__table_statistics__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 3641 "table_statistics.c"
                          *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 2;
#line 76 "table_statistics.m"
                        else
#line 3645 "table_statistics.c"
                          *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 1;
#line 76 "table_statistics.m"
              }
#line 76 "table_statistics.m"
            else
#line 76 "table_statistics.m"
              if (((((MR_tag((MR_Word) mercury__table_statistics__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 76 "table_statistics.m"
                {
#line 76 "table_statistics.m"
                  MR_Integer mercury__table_statistics__V_620_620 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 9)));
#line 76 "table_statistics.m"
                  MR_Integer mercury__table_statistics__V_621_621 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 8)));
#line 76 "table_statistics.m"
                  MR_Integer mercury__table_statistics__V_622_622 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 7)));
#line 76 "table_statistics.m"
                  MR_Integer mercury__table_statistics__V_623_623 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 6)));
#line 76 "table_statistics.m"
                  MR_Integer mercury__table_statistics__V_624_624 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 5)));
#line 76 "table_statistics.m"
                  MR_Integer mercury__table_statistics__V_625_625 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 4)));
#line 76 "table_statistics.m"
                  MR_Integer mercury__table_statistics__V_626_626 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 3)));
#line 76 "table_statistics.m"
                  MR_Integer mercury__table_statistics__V_627_627 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 2)));
#line 76 "table_statistics.m"
                  MR_Integer mercury__table_statistics__V_628_628 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 1)));

#line 76 "table_statistics.m"
                  if ((mercury__table_statistics__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3676 "table_statistics.c"
                    *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 2;
#line 76 "table_statistics.m"
                  else
#line 76 "table_statistics.m"
                    if (((MR_tag((MR_Word) mercury__table_statistics__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 3682 "table_statistics.c"
                      *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 2;
#line 76 "table_statistics.m"
                    else
#line 76 "table_statistics.m"
                      if (((MR_tag((MR_Word) mercury__table_statistics__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3688 "table_statistics.c"
                        *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 2;
#line 76 "table_statistics.m"
                      else
#line 76 "table_statistics.m"
                        if (((((MR_tag((MR_Word) mercury__table_statistics__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 3694 "table_statistics.c"
                          *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 1;
#line 76 "table_statistics.m"
                        else
#line 76 "table_statistics.m"
                          if (((((MR_tag((MR_Word) mercury__table_statistics__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 76 "table_statistics.m"
                            {
#line 76 "table_statistics.m"
                              MR_Integer mercury__table_statistics__V_199_199 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 1)));
#line 76 "table_statistics.m"
                              MR_Integer mercury__table_statistics__V_200_200 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 2)));
#line 76 "table_statistics.m"
                              MR_Integer mercury__table_statistics__V_201_201 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 3)));
#line 76 "table_statistics.m"
                              MR_Integer mercury__table_statistics__V_202_202 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 4)));
#line 76 "table_statistics.m"
                              MR_Integer mercury__table_statistics__V_203_203 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 5)));
#line 76 "table_statistics.m"
                              MR_Integer mercury__table_statistics__V_204_204 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 6)));
#line 76 "table_statistics.m"
                              MR_Integer mercury__table_statistics__V_205_205 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 7)));
#line 76 "table_statistics.m"
                              MR_Integer mercury__table_statistics__V_206_206 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 8)));
#line 76 "table_statistics.m"
                              MR_Integer mercury__table_statistics__V_207_207 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 9)));
#line 76 "table_statistics.m"
                              MR_Word mercury__table_statistics__V_208_208;

#line 66 "private_builtin.opt"
                              mercury__table_statistics__succeeded = (mercury__table_statistics__V_628_628 < mercury__table_statistics__V_199_199);
#line 69 "private_builtin.opt"
                              if (mercury__table_statistics__succeeded)
#line 68 "private_builtin.opt"
                                mercury__table_statistics__V_208_208 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                              else
#line 74 "private_builtin.opt"
                                {
#line 71 "private_builtin.opt"
                                  mercury__table_statistics__succeeded = (mercury__table_statistics__V_628_628 == mercury__table_statistics__V_199_199);
#line 74 "private_builtin.opt"
                                  if (mercury__table_statistics__succeeded)
#line 73 "private_builtin.opt"
                                    mercury__table_statistics__V_208_208 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                                  else
#line 75 "private_builtin.opt"
                                    mercury__table_statistics__V_208_208 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                                }
#line 3745 "table_statistics.c"
                              mercury__table_statistics__succeeded = (mercury__table_statistics__V_208_208 == (MR_Integer) 0);
#line 76 "table_statistics.m"
                              mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
#line 76 "table_statistics.m"
                              if (mercury__table_statistics__succeeded)
#line 76 "table_statistics.m"
                                *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__V_208_208;
#line 76 "table_statistics.m"
                              else
#line 76 "table_statistics.m"
                                {
#line 76 "table_statistics.m"
                                  MR_Word mercury__table_statistics__V_209_209;

#line 66 "private_builtin.opt"
                                  mercury__table_statistics__succeeded = (mercury__table_statistics__V_627_627 < mercury__table_statistics__V_200_200);
#line 69 "private_builtin.opt"
                                  if (mercury__table_statistics__succeeded)
#line 68 "private_builtin.opt"
                                    mercury__table_statistics__V_209_209 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                                  else
#line 74 "private_builtin.opt"
                                    {
#line 71 "private_builtin.opt"
                                      mercury__table_statistics__succeeded = (mercury__table_statistics__V_627_627 == mercury__table_statistics__V_200_200);
#line 74 "private_builtin.opt"
                                      if (mercury__table_statistics__succeeded)
#line 73 "private_builtin.opt"
                                        mercury__table_statistics__V_209_209 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                                      else
#line 75 "private_builtin.opt"
                                        mercury__table_statistics__V_209_209 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                                    }
#line 3782 "table_statistics.c"
                                  mercury__table_statistics__succeeded = (mercury__table_statistics__V_209_209 == (MR_Integer) 0);
#line 76 "table_statistics.m"
                                  mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
#line 76 "table_statistics.m"
                                  if (mercury__table_statistics__succeeded)
#line 76 "table_statistics.m"
                                    *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__V_209_209;
#line 76 "table_statistics.m"
                                  else
#line 76 "table_statistics.m"
                                    {
#line 76 "table_statistics.m"
                                      MR_Word mercury__table_statistics__V_210_210;

#line 66 "private_builtin.opt"
                                      mercury__table_statistics__succeeded = (mercury__table_statistics__V_626_626 < mercury__table_statistics__V_201_201);
#line 69 "private_builtin.opt"
                                      if (mercury__table_statistics__succeeded)
#line 68 "private_builtin.opt"
                                        mercury__table_statistics__V_210_210 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                                      else
#line 74 "private_builtin.opt"
                                        {
#line 71 "private_builtin.opt"
                                          mercury__table_statistics__succeeded = (mercury__table_statistics__V_626_626 == mercury__table_statistics__V_201_201);
#line 74 "private_builtin.opt"
                                          if (mercury__table_statistics__succeeded)
#line 73 "private_builtin.opt"
                                            mercury__table_statistics__V_210_210 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                                          else
#line 75 "private_builtin.opt"
                                            mercury__table_statistics__V_210_210 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                                        }
#line 3819 "table_statistics.c"
                                      mercury__table_statistics__succeeded = (mercury__table_statistics__V_210_210 == (MR_Integer) 0);
#line 76 "table_statistics.m"
                                      mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
#line 76 "table_statistics.m"
                                      if (mercury__table_statistics__succeeded)
#line 76 "table_statistics.m"
                                        *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__V_210_210;
#line 76 "table_statistics.m"
                                      else
#line 76 "table_statistics.m"
                                        {
#line 76 "table_statistics.m"
                                          MR_Word mercury__table_statistics__V_211_211;

#line 66 "private_builtin.opt"
                                          mercury__table_statistics__succeeded = (mercury__table_statistics__V_625_625 < mercury__table_statistics__V_202_202);
#line 69 "private_builtin.opt"
                                          if (mercury__table_statistics__succeeded)
#line 68 "private_builtin.opt"
                                            mercury__table_statistics__V_211_211 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                                          else
#line 74 "private_builtin.opt"
                                            {
#line 71 "private_builtin.opt"
                                              mercury__table_statistics__succeeded = (mercury__table_statistics__V_625_625 == mercury__table_statistics__V_202_202);
#line 74 "private_builtin.opt"
                                              if (mercury__table_statistics__succeeded)
#line 73 "private_builtin.opt"
                                                mercury__table_statistics__V_211_211 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                                              else
#line 75 "private_builtin.opt"
                                                mercury__table_statistics__V_211_211 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                                            }
#line 3856 "table_statistics.c"
                                          mercury__table_statistics__succeeded = (mercury__table_statistics__V_211_211 == (MR_Integer) 0);
#line 76 "table_statistics.m"
                                          mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
#line 76 "table_statistics.m"
                                          if (mercury__table_statistics__succeeded)
#line 76 "table_statistics.m"
                                            *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__V_211_211;
#line 76 "table_statistics.m"
                                          else
#line 76 "table_statistics.m"
                                            {
#line 76 "table_statistics.m"
                                              MR_Word mercury__table_statistics__V_212_212;

#line 66 "private_builtin.opt"
                                              mercury__table_statistics__succeeded = (mercury__table_statistics__V_624_624 < mercury__table_statistics__V_203_203);
#line 69 "private_builtin.opt"
                                              if (mercury__table_statistics__succeeded)
#line 68 "private_builtin.opt"
                                                mercury__table_statistics__V_212_212 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                                              else
#line 74 "private_builtin.opt"
                                                {
#line 71 "private_builtin.opt"
                                                  mercury__table_statistics__succeeded = (mercury__table_statistics__V_624_624 == mercury__table_statistics__V_203_203);
#line 74 "private_builtin.opt"
                                                  if (mercury__table_statistics__succeeded)
#line 73 "private_builtin.opt"
                                                    mercury__table_statistics__V_212_212 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                                                  else
#line 75 "private_builtin.opt"
                                                    mercury__table_statistics__V_212_212 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                                                }
#line 3893 "table_statistics.c"
                                              mercury__table_statistics__succeeded = (mercury__table_statistics__V_212_212 == (MR_Integer) 0);
#line 76 "table_statistics.m"
                                              mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
#line 76 "table_statistics.m"
                                              if (mercury__table_statistics__succeeded)
#line 76 "table_statistics.m"
                                                *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__V_212_212;
#line 76 "table_statistics.m"
                                              else
#line 76 "table_statistics.m"
                                                {
#line 76 "table_statistics.m"
                                                  MR_Word mercury__table_statistics__V_213_213;

#line 66 "private_builtin.opt"
                                                  mercury__table_statistics__succeeded = (mercury__table_statistics__V_623_623 < mercury__table_statistics__V_204_204);
#line 69 "private_builtin.opt"
                                                  if (mercury__table_statistics__succeeded)
#line 68 "private_builtin.opt"
                                                    mercury__table_statistics__V_213_213 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                                                  else
#line 74 "private_builtin.opt"
                                                    {
#line 71 "private_builtin.opt"
                                                      mercury__table_statistics__succeeded = (mercury__table_statistics__V_623_623 == mercury__table_statistics__V_204_204);
#line 74 "private_builtin.opt"
                                                      if (mercury__table_statistics__succeeded)
#line 73 "private_builtin.opt"
                                                        mercury__table_statistics__V_213_213 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                                                      else
#line 75 "private_builtin.opt"
                                                        mercury__table_statistics__V_213_213 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                                                    }
#line 3930 "table_statistics.c"
                                                  mercury__table_statistics__succeeded = (mercury__table_statistics__V_213_213 == (MR_Integer) 0);
#line 76 "table_statistics.m"
                                                  mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
#line 76 "table_statistics.m"
                                                  if (mercury__table_statistics__succeeded)
#line 76 "table_statistics.m"
                                                    *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__V_213_213;
#line 76 "table_statistics.m"
                                                  else
#line 76 "table_statistics.m"
                                                    {
#line 76 "table_statistics.m"
                                                      MR_Word mercury__table_statistics__V_214_214;

#line 66 "private_builtin.opt"
                                                      mercury__table_statistics__succeeded = (mercury__table_statistics__V_622_622 < mercury__table_statistics__V_205_205);
#line 69 "private_builtin.opt"
                                                      if (mercury__table_statistics__succeeded)
#line 68 "private_builtin.opt"
                                                        mercury__table_statistics__V_214_214 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                                                      else
#line 74 "private_builtin.opt"
                                                        {
#line 71 "private_builtin.opt"
                                                          mercury__table_statistics__succeeded = (mercury__table_statistics__V_622_622 == mercury__table_statistics__V_205_205);
#line 74 "private_builtin.opt"
                                                          if (mercury__table_statistics__succeeded)
#line 73 "private_builtin.opt"
                                                            mercury__table_statistics__V_214_214 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                                                          else
#line 75 "private_builtin.opt"
                                                            mercury__table_statistics__V_214_214 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                                                        }
#line 3967 "table_statistics.c"
                                                      mercury__table_statistics__succeeded = (mercury__table_statistics__V_214_214 == (MR_Integer) 0);
#line 76 "table_statistics.m"
                                                      mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
#line 76 "table_statistics.m"
                                                      if (mercury__table_statistics__succeeded)
#line 76 "table_statistics.m"
                                                        *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__V_214_214;
#line 76 "table_statistics.m"
                                                      else
#line 76 "table_statistics.m"
                                                        {
#line 76 "table_statistics.m"
                                                          MR_Word mercury__table_statistics__V_215_215;

#line 66 "private_builtin.opt"
                                                          mercury__table_statistics__succeeded = (mercury__table_statistics__V_621_621 < mercury__table_statistics__V_206_206);
#line 69 "private_builtin.opt"
                                                          if (mercury__table_statistics__succeeded)
#line 68 "private_builtin.opt"
                                                            mercury__table_statistics__V_215_215 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                                                          else
#line 74 "private_builtin.opt"
                                                            {
#line 71 "private_builtin.opt"
                                                              mercury__table_statistics__succeeded = (mercury__table_statistics__V_621_621 == mercury__table_statistics__V_206_206);
#line 74 "private_builtin.opt"
                                                              if (mercury__table_statistics__succeeded)
#line 73 "private_builtin.opt"
                                                                mercury__table_statistics__V_215_215 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                                                              else
#line 75 "private_builtin.opt"
                                                                mercury__table_statistics__V_215_215 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                                                            }
#line 4004 "table_statistics.c"
                                                          mercury__table_statistics__succeeded = (mercury__table_statistics__V_215_215 == (MR_Integer) 0);
#line 76 "table_statistics.m"
                                                          mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
#line 76 "table_statistics.m"
                                                          if (mercury__table_statistics__succeeded)
#line 76 "table_statistics.m"
                                                            *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__V_215_215;
#line 76 "table_statistics.m"
                                                          else
#line 69 "private_builtin.opt"
                                                            {
#line 66 "private_builtin.opt"
                                                              mercury__table_statistics__succeeded = (mercury__table_statistics__V_620_620 < mercury__table_statistics__V_207_207);
#line 69 "private_builtin.opt"
                                                              if (mercury__table_statistics__succeeded)
#line 68 "private_builtin.opt"
                                                                *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                                                              else
#line 74 "private_builtin.opt"
                                                                {
#line 71 "private_builtin.opt"
                                                                  mercury__table_statistics__succeeded = (mercury__table_statistics__V_620_620 == mercury__table_statistics__V_207_207);
#line 74 "private_builtin.opt"
                                                                  if (mercury__table_statistics__succeeded)
#line 73 "private_builtin.opt"
                                                                    *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                                                                  else
#line 75 "private_builtin.opt"
                                                                    *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                                                                }
#line 69 "private_builtin.opt"
                                                            }
#line 76 "table_statistics.m"
                                                        }
#line 76 "table_statistics.m"
                                                    }
#line 76 "table_statistics.m"
                                                }
#line 76 "table_statistics.m"
                                            }
#line 76 "table_statistics.m"
                                        }
#line 76 "table_statistics.m"
                                    }
#line 76 "table_statistics.m"
                                }
#line 76 "table_statistics.m"
                            }
#line 76 "table_statistics.m"
                          else
#line 4058 "table_statistics.c"
                            *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 1;
#line 76 "table_statistics.m"
                }
#line 76 "table_statistics.m"
              else
#line 76 "table_statistics.m"
                {
#line 76 "table_statistics.m"
                  MR_Integer mercury__table_statistics__V_629_629 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 15)));
#line 76 "table_statistics.m"
                  MR_Integer mercury__table_statistics__V_630_630 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 14)));
#line 76 "table_statistics.m"
                  MR_Integer mercury__table_statistics__V_631_631 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 13)));
#line 76 "table_statistics.m"
                  MR_Integer mercury__table_statistics__V_632_632 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 12)));
#line 76 "table_statistics.m"
                  MR_Integer mercury__table_statistics__V_633_633 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 11)));
#line 76 "table_statistics.m"
                  MR_Integer mercury__table_statistics__V_634_634 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 10)));
#line 76 "table_statistics.m"
                  MR_Integer mercury__table_statistics__V_635_635 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 9)));
#line 76 "table_statistics.m"
                  MR_Integer mercury__table_statistics__V_636_636 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 8)));
#line 76 "table_statistics.m"
                  MR_Integer mercury__table_statistics__V_637_637 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 7)));
#line 76 "table_statistics.m"
                  MR_Integer mercury__table_statistics__V_638_638 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 6)));
#line 76 "table_statistics.m"
                  MR_Integer mercury__table_statistics__V_639_639 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 5)));
#line 76 "table_statistics.m"
                  MR_Integer mercury__table_statistics__V_640_640 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 4)));
#line 76 "table_statistics.m"
                  MR_Integer mercury__table_statistics__V_641_641 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 3)));
#line 76 "table_statistics.m"
                  MR_Integer mercury__table_statistics__V_642_642 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 2)));
#line 76 "table_statistics.m"
                  MR_Integer mercury__table_statistics__V_643_643 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 1)));

#line 76 "table_statistics.m"
                  if ((mercury__table_statistics__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4099 "table_statistics.c"
                    *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 2;
#line 76 "table_statistics.m"
                  else
#line 76 "table_statistics.m"
                    if (((MR_tag((MR_Word) mercury__table_statistics__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4105 "table_statistics.c"
                      *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 2;
#line 76 "table_statistics.m"
                    else
#line 76 "table_statistics.m"
                      if (((MR_tag((MR_Word) mercury__table_statistics__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4111 "table_statistics.c"
                        *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 2;
#line 76 "table_statistics.m"
                      else
#line 76 "table_statistics.m"
                        if (((((MR_tag((MR_Word) mercury__table_statistics__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4117 "table_statistics.c"
                          *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 2;
#line 76 "table_statistics.m"
                        else
#line 76 "table_statistics.m"
                          if (((((MR_tag((MR_Word) mercury__table_statistics__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 4123 "table_statistics.c"
                            *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 2;
#line 76 "table_statistics.m"
                          else
#line 76 "table_statistics.m"
                            {
#line 76 "table_statistics.m"
                              MR_Integer mercury__table_statistics__V_529_529 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 1)));
#line 76 "table_statistics.m"
                              MR_Integer mercury__table_statistics__V_530_530 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 2)));
#line 76 "table_statistics.m"
                              MR_Integer mercury__table_statistics__V_531_531 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 3)));
#line 76 "table_statistics.m"
                              MR_Integer mercury__table_statistics__V_532_532 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 4)));
#line 76 "table_statistics.m"
                              MR_Integer mercury__table_statistics__V_533_533 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 5)));
#line 76 "table_statistics.m"
                              MR_Integer mercury__table_statistics__V_534_534 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 6)));
#line 76 "table_statistics.m"
                              MR_Integer mercury__table_statistics__V_535_535 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 7)));
#line 76 "table_statistics.m"
                              MR_Integer mercury__table_statistics__V_536_536 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 8)));
#line 76 "table_statistics.m"
                              MR_Integer mercury__table_statistics__V_537_537 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 9)));
#line 76 "table_statistics.m"
                              MR_Integer mercury__table_statistics__V_538_538 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 10)));
#line 76 "table_statistics.m"
                              MR_Integer mercury__table_statistics__V_539_539 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 11)));
#line 76 "table_statistics.m"
                              MR_Integer mercury__table_statistics__V_540_540 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 12)));
#line 76 "table_statistics.m"
                              MR_Integer mercury__table_statistics__V_541_541 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 13)));
#line 76 "table_statistics.m"
                              MR_Integer mercury__table_statistics__V_542_542 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 14)));
#line 76 "table_statistics.m"
                              MR_Integer mercury__table_statistics__V_543_543 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 15)));
#line 76 "table_statistics.m"
                              MR_Word mercury__table_statistics__V_544_544;

#line 66 "private_builtin.opt"
                              mercury__table_statistics__succeeded = (mercury__table_statistics__V_643_643 < mercury__table_statistics__V_529_529);
#line 69 "private_builtin.opt"
                              if (mercury__table_statistics__succeeded)
#line 68 "private_builtin.opt"
                                mercury__table_statistics__V_544_544 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                              else
#line 74 "private_builtin.opt"
                                {
#line 71 "private_builtin.opt"
                                  mercury__table_statistics__succeeded = (mercury__table_statistics__V_643_643 == mercury__table_statistics__V_529_529);
#line 74 "private_builtin.opt"
                                  if (mercury__table_statistics__succeeded)
#line 73 "private_builtin.opt"
                                    mercury__table_statistics__V_544_544 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                                  else
#line 75 "private_builtin.opt"
                                    mercury__table_statistics__V_544_544 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                                }
#line 4184 "table_statistics.c"
                              mercury__table_statistics__succeeded = (mercury__table_statistics__V_544_544 == (MR_Integer) 0);
#line 76 "table_statistics.m"
                              mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
#line 76 "table_statistics.m"
                              if (mercury__table_statistics__succeeded)
#line 76 "table_statistics.m"
                                *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__V_544_544;
#line 76 "table_statistics.m"
                              else
#line 76 "table_statistics.m"
                                {
#line 76 "table_statistics.m"
                                  MR_Word mercury__table_statistics__V_545_545;

#line 66 "private_builtin.opt"
                                  mercury__table_statistics__succeeded = (mercury__table_statistics__V_642_642 < mercury__table_statistics__V_530_530);
#line 69 "private_builtin.opt"
                                  if (mercury__table_statistics__succeeded)
#line 68 "private_builtin.opt"
                                    mercury__table_statistics__V_545_545 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                                  else
#line 74 "private_builtin.opt"
                                    {
#line 71 "private_builtin.opt"
                                      mercury__table_statistics__succeeded = (mercury__table_statistics__V_642_642 == mercury__table_statistics__V_530_530);
#line 74 "private_builtin.opt"
                                      if (mercury__table_statistics__succeeded)
#line 73 "private_builtin.opt"
                                        mercury__table_statistics__V_545_545 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                                      else
#line 75 "private_builtin.opt"
                                        mercury__table_statistics__V_545_545 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                                    }
#line 4221 "table_statistics.c"
                                  mercury__table_statistics__succeeded = (mercury__table_statistics__V_545_545 == (MR_Integer) 0);
#line 76 "table_statistics.m"
                                  mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
#line 76 "table_statistics.m"
                                  if (mercury__table_statistics__succeeded)
#line 76 "table_statistics.m"
                                    *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__V_545_545;
#line 76 "table_statistics.m"
                                  else
#line 76 "table_statistics.m"
                                    {
#line 76 "table_statistics.m"
                                      MR_Word mercury__table_statistics__V_546_546;

#line 66 "private_builtin.opt"
                                      mercury__table_statistics__succeeded = (mercury__table_statistics__V_641_641 < mercury__table_statistics__V_531_531);
#line 69 "private_builtin.opt"
                                      if (mercury__table_statistics__succeeded)
#line 68 "private_builtin.opt"
                                        mercury__table_statistics__V_546_546 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                                      else
#line 74 "private_builtin.opt"
                                        {
#line 71 "private_builtin.opt"
                                          mercury__table_statistics__succeeded = (mercury__table_statistics__V_641_641 == mercury__table_statistics__V_531_531);
#line 74 "private_builtin.opt"
                                          if (mercury__table_statistics__succeeded)
#line 73 "private_builtin.opt"
                                            mercury__table_statistics__V_546_546 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                                          else
#line 75 "private_builtin.opt"
                                            mercury__table_statistics__V_546_546 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                                        }
#line 4258 "table_statistics.c"
                                      mercury__table_statistics__succeeded = (mercury__table_statistics__V_546_546 == (MR_Integer) 0);
#line 76 "table_statistics.m"
                                      mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
#line 76 "table_statistics.m"
                                      if (mercury__table_statistics__succeeded)
#line 76 "table_statistics.m"
                                        *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__V_546_546;
#line 76 "table_statistics.m"
                                      else
#line 76 "table_statistics.m"
                                        {
#line 76 "table_statistics.m"
                                          MR_Word mercury__table_statistics__V_547_547;

#line 66 "private_builtin.opt"
                                          mercury__table_statistics__succeeded = (mercury__table_statistics__V_640_640 < mercury__table_statistics__V_532_532);
#line 69 "private_builtin.opt"
                                          if (mercury__table_statistics__succeeded)
#line 68 "private_builtin.opt"
                                            mercury__table_statistics__V_547_547 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                                          else
#line 74 "private_builtin.opt"
                                            {
#line 71 "private_builtin.opt"
                                              mercury__table_statistics__succeeded = (mercury__table_statistics__V_640_640 == mercury__table_statistics__V_532_532);
#line 74 "private_builtin.opt"
                                              if (mercury__table_statistics__succeeded)
#line 73 "private_builtin.opt"
                                                mercury__table_statistics__V_547_547 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                                              else
#line 75 "private_builtin.opt"
                                                mercury__table_statistics__V_547_547 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                                            }
#line 4295 "table_statistics.c"
                                          mercury__table_statistics__succeeded = (mercury__table_statistics__V_547_547 == (MR_Integer) 0);
#line 76 "table_statistics.m"
                                          mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
#line 76 "table_statistics.m"
                                          if (mercury__table_statistics__succeeded)
#line 76 "table_statistics.m"
                                            *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__V_547_547;
#line 76 "table_statistics.m"
                                          else
#line 76 "table_statistics.m"
                                            {
#line 76 "table_statistics.m"
                                              MR_Word mercury__table_statistics__V_548_548;

#line 66 "private_builtin.opt"
                                              mercury__table_statistics__succeeded = (mercury__table_statistics__V_639_639 < mercury__table_statistics__V_533_533);
#line 69 "private_builtin.opt"
                                              if (mercury__table_statistics__succeeded)
#line 68 "private_builtin.opt"
                                                mercury__table_statistics__V_548_548 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                                              else
#line 74 "private_builtin.opt"
                                                {
#line 71 "private_builtin.opt"
                                                  mercury__table_statistics__succeeded = (mercury__table_statistics__V_639_639 == mercury__table_statistics__V_533_533);
#line 74 "private_builtin.opt"
                                                  if (mercury__table_statistics__succeeded)
#line 73 "private_builtin.opt"
                                                    mercury__table_statistics__V_548_548 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                                                  else
#line 75 "private_builtin.opt"
                                                    mercury__table_statistics__V_548_548 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                                                }
#line 4332 "table_statistics.c"
                                              mercury__table_statistics__succeeded = (mercury__table_statistics__V_548_548 == (MR_Integer) 0);
#line 76 "table_statistics.m"
                                              mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
#line 76 "table_statistics.m"
                                              if (mercury__table_statistics__succeeded)
#line 76 "table_statistics.m"
                                                *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__V_548_548;
#line 76 "table_statistics.m"
                                              else
#line 76 "table_statistics.m"
                                                {
#line 76 "table_statistics.m"
                                                  MR_Word mercury__table_statistics__V_549_549;

#line 66 "private_builtin.opt"
                                                  mercury__table_statistics__succeeded = (mercury__table_statistics__V_638_638 < mercury__table_statistics__V_534_534);
#line 69 "private_builtin.opt"
                                                  if (mercury__table_statistics__succeeded)
#line 68 "private_builtin.opt"
                                                    mercury__table_statistics__V_549_549 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                                                  else
#line 74 "private_builtin.opt"
                                                    {
#line 71 "private_builtin.opt"
                                                      mercury__table_statistics__succeeded = (mercury__table_statistics__V_638_638 == mercury__table_statistics__V_534_534);
#line 74 "private_builtin.opt"
                                                      if (mercury__table_statistics__succeeded)
#line 73 "private_builtin.opt"
                                                        mercury__table_statistics__V_549_549 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                                                      else
#line 75 "private_builtin.opt"
                                                        mercury__table_statistics__V_549_549 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                                                    }
#line 4369 "table_statistics.c"
                                                  mercury__table_statistics__succeeded = (mercury__table_statistics__V_549_549 == (MR_Integer) 0);
#line 76 "table_statistics.m"
                                                  mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
#line 76 "table_statistics.m"
                                                  if (mercury__table_statistics__succeeded)
#line 76 "table_statistics.m"
                                                    *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__V_549_549;
#line 76 "table_statistics.m"
                                                  else
#line 76 "table_statistics.m"
                                                    {
#line 76 "table_statistics.m"
                                                      MR_Word mercury__table_statistics__V_550_550;

#line 66 "private_builtin.opt"
                                                      mercury__table_statistics__succeeded = (mercury__table_statistics__V_637_637 < mercury__table_statistics__V_535_535);
#line 69 "private_builtin.opt"
                                                      if (mercury__table_statistics__succeeded)
#line 68 "private_builtin.opt"
                                                        mercury__table_statistics__V_550_550 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                                                      else
#line 74 "private_builtin.opt"
                                                        {
#line 71 "private_builtin.opt"
                                                          mercury__table_statistics__succeeded = (mercury__table_statistics__V_637_637 == mercury__table_statistics__V_535_535);
#line 74 "private_builtin.opt"
                                                          if (mercury__table_statistics__succeeded)
#line 73 "private_builtin.opt"
                                                            mercury__table_statistics__V_550_550 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                                                          else
#line 75 "private_builtin.opt"
                                                            mercury__table_statistics__V_550_550 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                                                        }
#line 4406 "table_statistics.c"
                                                      mercury__table_statistics__succeeded = (mercury__table_statistics__V_550_550 == (MR_Integer) 0);
#line 76 "table_statistics.m"
                                                      mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
#line 76 "table_statistics.m"
                                                      if (mercury__table_statistics__succeeded)
#line 76 "table_statistics.m"
                                                        *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__V_550_550;
#line 76 "table_statistics.m"
                                                      else
#line 76 "table_statistics.m"
                                                        {
#line 76 "table_statistics.m"
                                                          MR_Word mercury__table_statistics__V_551_551;

#line 66 "private_builtin.opt"
                                                          mercury__table_statistics__succeeded = (mercury__table_statistics__V_636_636 < mercury__table_statistics__V_536_536);
#line 69 "private_builtin.opt"
                                                          if (mercury__table_statistics__succeeded)
#line 68 "private_builtin.opt"
                                                            mercury__table_statistics__V_551_551 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                                                          else
#line 74 "private_builtin.opt"
                                                            {
#line 71 "private_builtin.opt"
                                                              mercury__table_statistics__succeeded = (mercury__table_statistics__V_636_636 == mercury__table_statistics__V_536_536);
#line 74 "private_builtin.opt"
                                                              if (mercury__table_statistics__succeeded)
#line 73 "private_builtin.opt"
                                                                mercury__table_statistics__V_551_551 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                                                              else
#line 75 "private_builtin.opt"
                                                                mercury__table_statistics__V_551_551 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                                                            }
#line 4443 "table_statistics.c"
                                                          mercury__table_statistics__succeeded = (mercury__table_statistics__V_551_551 == (MR_Integer) 0);
#line 76 "table_statistics.m"
                                                          mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
#line 76 "table_statistics.m"
                                                          if (mercury__table_statistics__succeeded)
#line 76 "table_statistics.m"
                                                            *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__V_551_551;
#line 76 "table_statistics.m"
                                                          else
#line 76 "table_statistics.m"
                                                            {
#line 76 "table_statistics.m"
                                                              MR_Word mercury__table_statistics__V_552_552;

#line 66 "private_builtin.opt"
                                                              mercury__table_statistics__succeeded = (mercury__table_statistics__V_635_635 < mercury__table_statistics__V_537_537);
#line 69 "private_builtin.opt"
                                                              if (mercury__table_statistics__succeeded)
#line 68 "private_builtin.opt"
                                                                mercury__table_statistics__V_552_552 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                                                              else
#line 74 "private_builtin.opt"
                                                                {
#line 71 "private_builtin.opt"
                                                                  mercury__table_statistics__succeeded = (mercury__table_statistics__V_635_635 == mercury__table_statistics__V_537_537);
#line 74 "private_builtin.opt"
                                                                  if (mercury__table_statistics__succeeded)
#line 73 "private_builtin.opt"
                                                                    mercury__table_statistics__V_552_552 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                                                                  else
#line 75 "private_builtin.opt"
                                                                    mercury__table_statistics__V_552_552 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                                                                }
#line 4480 "table_statistics.c"
                                                              mercury__table_statistics__succeeded = (mercury__table_statistics__V_552_552 == (MR_Integer) 0);
#line 76 "table_statistics.m"
                                                              mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
#line 76 "table_statistics.m"
                                                              if (mercury__table_statistics__succeeded)
#line 76 "table_statistics.m"
                                                                *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__V_552_552;
#line 76 "table_statistics.m"
                                                              else
#line 76 "table_statistics.m"
                                                                {
#line 76 "table_statistics.m"
                                                                  MR_Word mercury__table_statistics__V_553_553;

#line 66 "private_builtin.opt"
                                                                  mercury__table_statistics__succeeded = (mercury__table_statistics__V_634_634 < mercury__table_statistics__V_538_538);
#line 69 "private_builtin.opt"
                                                                  if (mercury__table_statistics__succeeded)
#line 68 "private_builtin.opt"
                                                                    mercury__table_statistics__V_553_553 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                                                                  else
#line 74 "private_builtin.opt"
                                                                    {
#line 71 "private_builtin.opt"
                                                                      mercury__table_statistics__succeeded = (mercury__table_statistics__V_634_634 == mercury__table_statistics__V_538_538);
#line 74 "private_builtin.opt"
                                                                      if (mercury__table_statistics__succeeded)
#line 73 "private_builtin.opt"
                                                                        mercury__table_statistics__V_553_553 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                                                                      else
#line 75 "private_builtin.opt"
                                                                        mercury__table_statistics__V_553_553 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                                                                    }
#line 4517 "table_statistics.c"
                                                                  mercury__table_statistics__succeeded = (mercury__table_statistics__V_553_553 == (MR_Integer) 0);
#line 76 "table_statistics.m"
                                                                  mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
#line 76 "table_statistics.m"
                                                                  if (mercury__table_statistics__succeeded)
#line 76 "table_statistics.m"
                                                                    *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__V_553_553;
#line 76 "table_statistics.m"
                                                                  else
#line 76 "table_statistics.m"
                                                                    {
#line 76 "table_statistics.m"
                                                                      MR_Word mercury__table_statistics__V_554_554;

#line 66 "private_builtin.opt"
                                                                      mercury__table_statistics__succeeded = (mercury__table_statistics__V_633_633 < mercury__table_statistics__V_539_539);
#line 69 "private_builtin.opt"
                                                                      if (mercury__table_statistics__succeeded)
#line 68 "private_builtin.opt"
                                                                        mercury__table_statistics__V_554_554 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                                                                      else
#line 74 "private_builtin.opt"
                                                                        {
#line 71 "private_builtin.opt"
                                                                          mercury__table_statistics__succeeded = (mercury__table_statistics__V_633_633 == mercury__table_statistics__V_539_539);
#line 74 "private_builtin.opt"
                                                                          if (mercury__table_statistics__succeeded)
#line 73 "private_builtin.opt"
                                                                            mercury__table_statistics__V_554_554 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                                                                          else
#line 75 "private_builtin.opt"
                                                                            mercury__table_statistics__V_554_554 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                                                                        }
#line 4554 "table_statistics.c"
                                                                      mercury__table_statistics__succeeded = (mercury__table_statistics__V_554_554 == (MR_Integer) 0);
#line 76 "table_statistics.m"
                                                                      mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
#line 76 "table_statistics.m"
                                                                      if (mercury__table_statistics__succeeded)
#line 76 "table_statistics.m"
                                                                        *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__V_554_554;
#line 76 "table_statistics.m"
                                                                      else
#line 76 "table_statistics.m"
                                                                        {
#line 76 "table_statistics.m"
                                                                          MR_Word mercury__table_statistics__V_555_555;

#line 66 "private_builtin.opt"
                                                                          mercury__table_statistics__succeeded = (mercury__table_statistics__V_632_632 < mercury__table_statistics__V_540_540);
#line 69 "private_builtin.opt"
                                                                          if (mercury__table_statistics__succeeded)
#line 68 "private_builtin.opt"
                                                                            mercury__table_statistics__V_555_555 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                                                                          else
#line 74 "private_builtin.opt"
                                                                            {
#line 71 "private_builtin.opt"
                                                                              mercury__table_statistics__succeeded = (mercury__table_statistics__V_632_632 == mercury__table_statistics__V_540_540);
#line 74 "private_builtin.opt"
                                                                              if (mercury__table_statistics__succeeded)
#line 73 "private_builtin.opt"
                                                                                mercury__table_statistics__V_555_555 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                                                                              else
#line 75 "private_builtin.opt"
                                                                                mercury__table_statistics__V_555_555 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                                                                            }
#line 4591 "table_statistics.c"
                                                                          mercury__table_statistics__succeeded = (mercury__table_statistics__V_555_555 == (MR_Integer) 0);
#line 76 "table_statistics.m"
                                                                          mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
#line 76 "table_statistics.m"
                                                                          if (mercury__table_statistics__succeeded)
#line 76 "table_statistics.m"
                                                                            *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__V_555_555;
#line 76 "table_statistics.m"
                                                                          else
#line 76 "table_statistics.m"
                                                                            {
#line 76 "table_statistics.m"
                                                                              MR_Word mercury__table_statistics__V_556_556;

#line 66 "private_builtin.opt"
                                                                              mercury__table_statistics__succeeded = (mercury__table_statistics__V_631_631 < mercury__table_statistics__V_541_541);
#line 69 "private_builtin.opt"
                                                                              if (mercury__table_statistics__succeeded)
#line 68 "private_builtin.opt"
                                                                                mercury__table_statistics__V_556_556 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                                                                              else
#line 74 "private_builtin.opt"
                                                                                {
#line 71 "private_builtin.opt"
                                                                                  mercury__table_statistics__succeeded = (mercury__table_statistics__V_631_631 == mercury__table_statistics__V_541_541);
#line 74 "private_builtin.opt"
                                                                                  if (mercury__table_statistics__succeeded)
#line 73 "private_builtin.opt"
                                                                                    mercury__table_statistics__V_556_556 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                                                                                  else
#line 75 "private_builtin.opt"
                                                                                    mercury__table_statistics__V_556_556 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                                                                                }
#line 4628 "table_statistics.c"
                                                                              mercury__table_statistics__succeeded = (mercury__table_statistics__V_556_556 == (MR_Integer) 0);
#line 76 "table_statistics.m"
                                                                              mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
#line 76 "table_statistics.m"
                                                                              if (mercury__table_statistics__succeeded)
#line 76 "table_statistics.m"
                                                                                *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__V_556_556;
#line 76 "table_statistics.m"
                                                                              else
#line 76 "table_statistics.m"
                                                                                {
#line 76 "table_statistics.m"
                                                                                  MR_Word mercury__table_statistics__V_557_557;

#line 66 "private_builtin.opt"
                                                                                  mercury__table_statistics__succeeded = (mercury__table_statistics__V_630_630 < mercury__table_statistics__V_542_542);
#line 69 "private_builtin.opt"
                                                                                  if (mercury__table_statistics__succeeded)
#line 68 "private_builtin.opt"
                                                                                    mercury__table_statistics__V_557_557 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                                                                                  else
#line 74 "private_builtin.opt"
                                                                                    {
#line 71 "private_builtin.opt"
                                                                                      mercury__table_statistics__succeeded = (mercury__table_statistics__V_630_630 == mercury__table_statistics__V_542_542);
#line 74 "private_builtin.opt"
                                                                                      if (mercury__table_statistics__succeeded)
#line 73 "private_builtin.opt"
                                                                                        mercury__table_statistics__V_557_557 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                                                                                      else
#line 75 "private_builtin.opt"
                                                                                        mercury__table_statistics__V_557_557 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                                                                                    }
#line 4665 "table_statistics.c"
                                                                                  mercury__table_statistics__succeeded = (mercury__table_statistics__V_557_557 == (MR_Integer) 0);
#line 76 "table_statistics.m"
                                                                                  mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
#line 76 "table_statistics.m"
                                                                                  if (mercury__table_statistics__succeeded)
#line 76 "table_statistics.m"
                                                                                    *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__V_557_557;
#line 76 "table_statistics.m"
                                                                                  else
#line 69 "private_builtin.opt"
                                                                                    {
#line 66 "private_builtin.opt"
                                                                                      mercury__table_statistics__succeeded = (mercury__table_statistics__V_629_629 < mercury__table_statistics__V_543_543);
#line 69 "private_builtin.opt"
                                                                                      if (mercury__table_statistics__succeeded)
#line 68 "private_builtin.opt"
                                                                                        *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                                                                                      else
#line 74 "private_builtin.opt"
                                                                                        {
#line 71 "private_builtin.opt"
                                                                                          mercury__table_statistics__succeeded = (mercury__table_statistics__V_629_629 == mercury__table_statistics__V_543_543);
#line 74 "private_builtin.opt"
                                                                                          if (mercury__table_statistics__succeeded)
#line 73 "private_builtin.opt"
                                                                                            *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                                                                                          else
#line 75 "private_builtin.opt"
                                                                                            *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                                                                                        }
#line 69 "private_builtin.opt"
                                                                                    }
#line 76 "table_statistics.m"
                                                                                }
#line 76 "table_statistics.m"
                                                                            }
#line 76 "table_statistics.m"
                                                                        }
#line 76 "table_statistics.m"
                                                                    }
#line 76 "table_statistics.m"
                                                                }
#line 76 "table_statistics.m"
                                                            }
#line 76 "table_statistics.m"
                                                        }
#line 76 "table_statistics.m"
                                                    }
#line 76 "table_statistics.m"
                                                }
#line 76 "table_statistics.m"
                                            }
#line 76 "table_statistics.m"
                                        }
#line 76 "table_statistics.m"
                                    }
#line 76 "table_statistics.m"
                                }
#line 76 "table_statistics.m"
                            }
#line 76 "table_statistics.m"
                }
#line 76 "table_statistics.m"
  }
#line 76 "table_statistics.m"
}

#line 76 "table_statistics.m"
MR_bool MR_CALL 
mercury__table_statistics____Unify____table_step_stat_details_0_0(
#line 76 "table_statistics.m"
  MR_Word mercury__table_statistics__HeadVar__1_1,
#line 76 "table_statistics.m"
  MR_Word mercury__table_statistics__HeadVar__2_2)
#line 76 "table_statistics.m"
{
#line 76 "table_statistics.m"
  {
#line 76 "table_statistics.m"
    MR_bool mercury__table_statistics__succeeded;
#line 76 "table_statistics.m"
    MR_Integer mercury__table_statistics__CastX_91 = (MR_Integer) mercury__table_statistics__HeadVar__1_1;
#line 76 "table_statistics.m"
    MR_Integer mercury__table_statistics__CastY_92 = (MR_Integer) mercury__table_statistics__HeadVar__2_2;

#line 76 "table_statistics.m"
    mercury__table_statistics__succeeded = (mercury__table_statistics__CastX_91 == mercury__table_statistics__CastY_92);
#line 76 "table_statistics.m"
    if (mercury__table_statistics__succeeded)
#line 76 "table_statistics.m"
      mercury__table_statistics__succeeded = MR_TRUE;
#line 76 "table_statistics.m"
    else
#line 76 "table_statistics.m"
      if ((mercury__table_statistics__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 76 "table_statistics.m"
        {
#line 76 "table_statistics.m"
          MR_Integer mercury__table_statistics__CastX_3 = (MR_Integer) mercury__table_statistics__HeadVar__1_1;
#line 76 "table_statistics.m"
          MR_Integer mercury__table_statistics__CastY_4 = (MR_Integer) mercury__table_statistics__HeadVar__2_2;

#line 76 "table_statistics.m"
          mercury__table_statistics__succeeded = (mercury__table_statistics__CastY_4 == mercury__table_statistics__CastX_3);
#line 76 "table_statistics.m"
        }
#line 76 "table_statistics.m"
      else
#line 76 "table_statistics.m"
        if (((MR_tag((MR_Word) mercury__table_statistics__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 76 "table_statistics.m"
          {
#line 76 "table_statistics.m"
            MR_Integer mercury__table_statistics__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 0)));
#line 76 "table_statistics.m"
            MR_Integer mercury__table_statistics__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 1)));
#line 76 "table_statistics.m"
            MR_Integer mercury__table_statistics__V_11_11;
#line 76 "table_statistics.m"
            MR_Integer mercury__table_statistics__V_12_12;

#line 76 "table_statistics.m"
            mercury__table_statistics__succeeded = ((MR_tag((MR_Word) mercury__table_statistics__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 76 "table_statistics.m"
            if (mercury__table_statistics__succeeded)
#line 76 "table_statistics.m"
              {
#line 76 "table_statistics.m"
                mercury__table_statistics__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 0)));
#line 76 "table_statistics.m"
                mercury__table_statistics__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 1)));
#line 4800 "table_statistics.c"
                mercury__table_statistics__succeeded = (mercury__table_statistics__V_9_9 == mercury__table_statistics__V_11_11);
#line 76 "table_statistics.m"
                if (mercury__table_statistics__succeeded)
#line 4804 "table_statistics.c"
                  mercury__table_statistics__succeeded = (mercury__table_statistics__V_10_10 == mercury__table_statistics__V_12_12);
#line 76 "table_statistics.m"
              }
#line 76 "table_statistics.m"
          }
#line 76 "table_statistics.m"
        else
#line 76 "table_statistics.m"
          if (((MR_tag((MR_Word) mercury__table_statistics__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 76 "table_statistics.m"
            {
#line 76 "table_statistics.m"
              MR_Integer mercury__table_statistics__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 0)));
#line 76 "table_statistics.m"
              MR_Integer mercury__table_statistics__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 1)));
#line 76 "table_statistics.m"
              MR_Integer mercury__table_statistics__V_7_7;
#line 76 "table_statistics.m"
              MR_Integer mercury__table_statistics__V_8_8;

#line 76 "table_statistics.m"
              mercury__table_statistics__succeeded = ((MR_tag((MR_Word) mercury__table_statistics__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 76 "table_statistics.m"
              if (mercury__table_statistics__succeeded)
#line 76 "table_statistics.m"
                {
#line 76 "table_statistics.m"
                  mercury__table_statistics__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 0)));
#line 76 "table_statistics.m"
                  mercury__table_statistics__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 1)));
#line 4835 "table_statistics.c"
                  mercury__table_statistics__succeeded = (mercury__table_statistics__V_5_5 == mercury__table_statistics__V_7_7);
#line 76 "table_statistics.m"
                  if (mercury__table_statistics__succeeded)
#line 4839 "table_statistics.c"
                    mercury__table_statistics__succeeded = (mercury__table_statistics__V_6_6 == mercury__table_statistics__V_8_8);
#line 76 "table_statistics.m"
                }
#line 76 "table_statistics.m"
            }
#line 76 "table_statistics.m"
          else
#line 76 "table_statistics.m"
            if (((((MR_tag((MR_Word) mercury__table_statistics__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 76 "table_statistics.m"
              {
#line 76 "table_statistics.m"
                MR_Integer mercury__table_statistics__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 1)));
#line 76 "table_statistics.m"
                MR_Integer mercury__table_statistics__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 2)));
#line 76 "table_statistics.m"
                MR_Integer mercury__table_statistics__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 3)));
#line 76 "table_statistics.m"
                MR_Integer mercury__table_statistics__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 4)));
#line 76 "table_statistics.m"
                MR_Integer mercury__table_statistics__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 5)));
#line 76 "table_statistics.m"
                MR_Integer mercury__table_statistics__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 6)));
#line 76 "table_statistics.m"
                MR_Integer mercury__table_statistics__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 7)));
#line 76 "table_statistics.m"
                MR_Integer mercury__table_statistics__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 8)));
#line 76 "table_statistics.m"
                MR_Integer mercury__table_statistics__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 9)));
#line 76 "table_statistics.m"
                MR_Integer mercury__table_statistics__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 10)));
#line 76 "table_statistics.m"
                MR_Integer mercury__table_statistics__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 11)));
#line 76 "table_statistics.m"
                MR_Integer mercury__table_statistics__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 12)));
#line 76 "table_statistics.m"
                MR_Integer mercury__table_statistics__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 13)));
#line 76 "table_statistics.m"
                MR_Integer mercury__table_statistics__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 14)));
#line 76 "table_statistics.m"
                MR_Integer mercury__table_statistics__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 15)));
#line 76 "table_statistics.m"
                MR_Integer mercury__table_statistics__V_46_46;
#line 76 "table_statistics.m"
                MR_Integer mercury__table_statistics__V_47_47;
#line 76 "table_statistics.m"
                MR_Integer mercury__table_statistics__V_48_48;
#line 76 "table_statistics.m"
                MR_Integer mercury__table_statistics__V_49_49;
#line 76 "table_statistics.m"
                MR_Integer mercury__table_statistics__V_50_50;
#line 76 "table_statistics.m"
                MR_Integer mercury__table_statistics__V_51_51;
#line 76 "table_statistics.m"
                MR_Integer mercury__table_statistics__V_52_52;
#line 76 "table_statistics.m"
                MR_Integer mercury__table_statistics__V_53_53;
#line 76 "table_statistics.m"
                MR_Integer mercury__table_statistics__V_54_54;
#line 76 "table_statistics.m"
                MR_Integer mercury__table_statistics__V_55_55;
#line 76 "table_statistics.m"
                MR_Integer mercury__table_statistics__V_56_56;
#line 76 "table_statistics.m"
                MR_Integer mercury__table_statistics__V_57_57;
#line 76 "table_statistics.m"
                MR_Integer mercury__table_statistics__V_58_58;
#line 76 "table_statistics.m"
                MR_Integer mercury__table_statistics__V_59_59;
#line 76 "table_statistics.m"
                MR_Integer mercury__table_statistics__V_60_60;

#line 76 "table_statistics.m"
                mercury__table_statistics__succeeded = ((((MR_tag((MR_Word) mercury__table_statistics__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 76 "table_statistics.m"
                if (mercury__table_statistics__succeeded)
#line 76 "table_statistics.m"
                  {
#line 76 "table_statistics.m"
                    mercury__table_statistics__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 1)));
#line 76 "table_statistics.m"
                    mercury__table_statistics__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 2)));
#line 76 "table_statistics.m"
                    mercury__table_statistics__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 3)));
#line 76 "table_statistics.m"
                    mercury__table_statistics__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 4)));
#line 76 "table_statistics.m"
                    mercury__table_statistics__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 5)));
#line 76 "table_statistics.m"
                    mercury__table_statistics__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 6)));
#line 76 "table_statistics.m"
                    mercury__table_statistics__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 7)));
#line 76 "table_statistics.m"
                    mercury__table_statistics__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 8)));
#line 76 "table_statistics.m"
                    mercury__table_statistics__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 9)));
#line 76 "table_statistics.m"
                    mercury__table_statistics__V_55_55 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 10)));
#line 76 "table_statistics.m"
                    mercury__table_statistics__V_56_56 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 11)));
#line 76 "table_statistics.m"
                    mercury__table_statistics__V_57_57 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 12)));
#line 76 "table_statistics.m"
                    mercury__table_statistics__V_58_58 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 13)));
#line 76 "table_statistics.m"
                    mercury__table_statistics__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 14)));
#line 76 "table_statistics.m"
                    mercury__table_statistics__V_60_60 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 15)));
#line 4948 "table_statistics.c"
                    mercury__table_statistics__succeeded = (mercury__table_statistics__V_31_31 == mercury__table_statistics__V_46_46);
#line 76 "table_statistics.m"
                    if (mercury__table_statistics__succeeded)
#line 76 "table_statistics.m"
                      {
#line 4954 "table_statistics.c"
                        mercury__table_statistics__succeeded = (mercury__table_statistics__V_32_32 == mercury__table_statistics__V_47_47);
#line 76 "table_statistics.m"
                        if (mercury__table_statistics__succeeded)
#line 76 "table_statistics.m"
                          {
#line 4960 "table_statistics.c"
                            mercury__table_statistics__succeeded = (mercury__table_statistics__V_33_33 == mercury__table_statistics__V_48_48);
#line 76 "table_statistics.m"
                            if (mercury__table_statistics__succeeded)
#line 76 "table_statistics.m"
                              {
#line 4966 "table_statistics.c"
                                mercury__table_statistics__succeeded = (mercury__table_statistics__V_34_34 == mercury__table_statistics__V_49_49);
#line 76 "table_statistics.m"
                                if (mercury__table_statistics__succeeded)
#line 76 "table_statistics.m"
                                  {
#line 4972 "table_statistics.c"
                                    mercury__table_statistics__succeeded = (mercury__table_statistics__V_35_35 == mercury__table_statistics__V_50_50);
#line 76 "table_statistics.m"
                                    if (mercury__table_statistics__succeeded)
#line 76 "table_statistics.m"
                                      {
#line 4978 "table_statistics.c"
                                        mercury__table_statistics__succeeded = (mercury__table_statistics__V_36_36 == mercury__table_statistics__V_51_51);
#line 76 "table_statistics.m"
                                        if (mercury__table_statistics__succeeded)
#line 76 "table_statistics.m"
                                          {
#line 4984 "table_statistics.c"
                                            mercury__table_statistics__succeeded = (mercury__table_statistics__V_37_37 == mercury__table_statistics__V_52_52);
#line 76 "table_statistics.m"
                                            if (mercury__table_statistics__succeeded)
#line 76 "table_statistics.m"
                                              {
#line 4990 "table_statistics.c"
                                                mercury__table_statistics__succeeded = (mercury__table_statistics__V_38_38 == mercury__table_statistics__V_53_53);
#line 76 "table_statistics.m"
                                                if (mercury__table_statistics__succeeded)
#line 76 "table_statistics.m"
                                                  {
#line 4996 "table_statistics.c"
                                                    mercury__table_statistics__succeeded = (mercury__table_statistics__V_39_39 == mercury__table_statistics__V_54_54);
#line 76 "table_statistics.m"
                                                    if (mercury__table_statistics__succeeded)
#line 76 "table_statistics.m"
                                                      {
#line 5002 "table_statistics.c"
                                                        mercury__table_statistics__succeeded = (mercury__table_statistics__V_40_40 == mercury__table_statistics__V_55_55);
#line 76 "table_statistics.m"
                                                        if (mercury__table_statistics__succeeded)
#line 76 "table_statistics.m"
                                                          {
#line 5008 "table_statistics.c"
                                                            mercury__table_statistics__succeeded = (mercury__table_statistics__V_41_41 == mercury__table_statistics__V_56_56);
#line 76 "table_statistics.m"
                                                            if (mercury__table_statistics__succeeded)
#line 76 "table_statistics.m"
                                                              {
#line 5014 "table_statistics.c"
                                                                mercury__table_statistics__succeeded = (mercury__table_statistics__V_42_42 == mercury__table_statistics__V_57_57);
#line 76 "table_statistics.m"
                                                                if (mercury__table_statistics__succeeded)
#line 76 "table_statistics.m"
                                                                  {
#line 5020 "table_statistics.c"
                                                                    mercury__table_statistics__succeeded = (mercury__table_statistics__V_43_43 == mercury__table_statistics__V_58_58);
#line 76 "table_statistics.m"
                                                                    if (mercury__table_statistics__succeeded)
#line 76 "table_statistics.m"
                                                                      {
#line 5026 "table_statistics.c"
                                                                        mercury__table_statistics__succeeded = (mercury__table_statistics__V_44_44 == mercury__table_statistics__V_59_59);
#line 76 "table_statistics.m"
                                                                        if (mercury__table_statistics__succeeded)
#line 5030 "table_statistics.c"
                                                                          mercury__table_statistics__succeeded = (mercury__table_statistics__V_45_45 == mercury__table_statistics__V_60_60);
#line 76 "table_statistics.m"
                                                                      }
#line 76 "table_statistics.m"
                                                                  }
#line 76 "table_statistics.m"
                                                              }
#line 76 "table_statistics.m"
                                                          }
#line 76 "table_statistics.m"
                                                      }
#line 76 "table_statistics.m"
                                                  }
#line 76 "table_statistics.m"
                                              }
#line 76 "table_statistics.m"
                                          }
#line 76 "table_statistics.m"
                                      }
#line 76 "table_statistics.m"
                                  }
#line 76 "table_statistics.m"
                              }
#line 76 "table_statistics.m"
                          }
#line 76 "table_statistics.m"
                      }
#line 76 "table_statistics.m"
                  }
#line 76 "table_statistics.m"
              }
#line 76 "table_statistics.m"
            else
#line 76 "table_statistics.m"
              if (((((MR_tag((MR_Word) mercury__table_statistics__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 76 "table_statistics.m"
                {
#line 76 "table_statistics.m"
                  MR_Integer mercury__table_statistics__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 1)));
#line 76 "table_statistics.m"
                  MR_Integer mercury__table_statistics__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 2)));
#line 76 "table_statistics.m"
                  MR_Integer mercury__table_statistics__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 3)));
#line 76 "table_statistics.m"
                  MR_Integer mercury__table_statistics__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 4)));
#line 76 "table_statistics.m"
                  MR_Integer mercury__table_statistics__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 5)));
#line 76 "table_statistics.m"
                  MR_Integer mercury__table_statistics__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 6)));
#line 76 "table_statistics.m"
                  MR_Integer mercury__table_statistics__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 7)));
#line 76 "table_statistics.m"
                  MR_Integer mercury__table_statistics__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 8)));
#line 76 "table_statistics.m"
                  MR_Integer mercury__table_statistics__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 9)));
#line 76 "table_statistics.m"
                  MR_Integer mercury__table_statistics__V_22_22;
#line 76 "table_statistics.m"
                  MR_Integer mercury__table_statistics__V_23_23;
#line 76 "table_statistics.m"
                  MR_Integer mercury__table_statistics__V_24_24;
#line 76 "table_statistics.m"
                  MR_Integer mercury__table_statistics__V_25_25;
#line 76 "table_statistics.m"
                  MR_Integer mercury__table_statistics__V_26_26;
#line 76 "table_statistics.m"
                  MR_Integer mercury__table_statistics__V_27_27;
#line 76 "table_statistics.m"
                  MR_Integer mercury__table_statistics__V_28_28;
#line 76 "table_statistics.m"
                  MR_Integer mercury__table_statistics__V_29_29;
#line 76 "table_statistics.m"
                  MR_Integer mercury__table_statistics__V_30_30;

#line 76 "table_statistics.m"
                  mercury__table_statistics__succeeded = ((((MR_tag((MR_Word) mercury__table_statistics__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 76 "table_statistics.m"
                  if (mercury__table_statistics__succeeded)
#line 76 "table_statistics.m"
                    {
#line 76 "table_statistics.m"
                      mercury__table_statistics__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 1)));
#line 76 "table_statistics.m"
                      mercury__table_statistics__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 2)));
#line 76 "table_statistics.m"
                      mercury__table_statistics__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 3)));
#line 76 "table_statistics.m"
                      mercury__table_statistics__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 4)));
#line 76 "table_statistics.m"
                      mercury__table_statistics__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 5)));
#line 76 "table_statistics.m"
                      mercury__table_statistics__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 6)));
#line 76 "table_statistics.m"
                      mercury__table_statistics__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 7)));
#line 76 "table_statistics.m"
                      mercury__table_statistics__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 8)));
#line 76 "table_statistics.m"
                      mercury__table_statistics__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 9)));
#line 5129 "table_statistics.c"
                      mercury__table_statistics__succeeded = (mercury__table_statistics__V_13_13 == mercury__table_statistics__V_22_22);
#line 76 "table_statistics.m"
                      if (mercury__table_statistics__succeeded)
#line 76 "table_statistics.m"
                        {
#line 5135 "table_statistics.c"
                          mercury__table_statistics__succeeded = (mercury__table_statistics__V_14_14 == mercury__table_statistics__V_23_23);
#line 76 "table_statistics.m"
                          if (mercury__table_statistics__succeeded)
#line 76 "table_statistics.m"
                            {
#line 5141 "table_statistics.c"
                              mercury__table_statistics__succeeded = (mercury__table_statistics__V_15_15 == mercury__table_statistics__V_24_24);
#line 76 "table_statistics.m"
                              if (mercury__table_statistics__succeeded)
#line 76 "table_statistics.m"
                                {
#line 5147 "table_statistics.c"
                                  mercury__table_statistics__succeeded = (mercury__table_statistics__V_16_16 == mercury__table_statistics__V_25_25);
#line 76 "table_statistics.m"
                                  if (mercury__table_statistics__succeeded)
#line 76 "table_statistics.m"
                                    {
#line 5153 "table_statistics.c"
                                      mercury__table_statistics__succeeded = (mercury__table_statistics__V_17_17 == mercury__table_statistics__V_26_26);
#line 76 "table_statistics.m"
                                      if (mercury__table_statistics__succeeded)
#line 76 "table_statistics.m"
                                        {
#line 5159 "table_statistics.c"
                                          mercury__table_statistics__succeeded = (mercury__table_statistics__V_18_18 == mercury__table_statistics__V_27_27);
#line 76 "table_statistics.m"
                                          if (mercury__table_statistics__succeeded)
#line 76 "table_statistics.m"
                                            {
#line 5165 "table_statistics.c"
                                              mercury__table_statistics__succeeded = (mercury__table_statistics__V_19_19 == mercury__table_statistics__V_28_28);
#line 76 "table_statistics.m"
                                              if (mercury__table_statistics__succeeded)
#line 76 "table_statistics.m"
                                                {
#line 5171 "table_statistics.c"
                                                  mercury__table_statistics__succeeded = (mercury__table_statistics__V_20_20 == mercury__table_statistics__V_29_29);
#line 76 "table_statistics.m"
                                                  if (mercury__table_statistics__succeeded)
#line 5175 "table_statistics.c"
                                                    mercury__table_statistics__succeeded = (mercury__table_statistics__V_21_21 == mercury__table_statistics__V_30_30);
#line 76 "table_statistics.m"
                                                }
#line 76 "table_statistics.m"
                                            }
#line 76 "table_statistics.m"
                                        }
#line 76 "table_statistics.m"
                                    }
#line 76 "table_statistics.m"
                                }
#line 76 "table_statistics.m"
                            }
#line 76 "table_statistics.m"
                        }
#line 76 "table_statistics.m"
                    }
#line 76 "table_statistics.m"
                }
#line 76 "table_statistics.m"
              else
#line 76 "table_statistics.m"
                {
#line 76 "table_statistics.m"
                  MR_Integer mercury__table_statistics__V_61_61 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 1)));
#line 76 "table_statistics.m"
                  MR_Integer mercury__table_statistics__V_62_62 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 2)));
#line 76 "table_statistics.m"
                  MR_Integer mercury__table_statistics__V_63_63 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 3)));
#line 76 "table_statistics.m"
                  MR_Integer mercury__table_statistics__V_64_64 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 4)));
#line 76 "table_statistics.m"
                  MR_Integer mercury__table_statistics__V_65_65 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 5)));
#line 76 "table_statistics.m"
                  MR_Integer mercury__table_statistics__V_66_66 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 6)));
#line 76 "table_statistics.m"
                  MR_Integer mercury__table_statistics__V_67_67 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 7)));
#line 76 "table_statistics.m"
                  MR_Integer mercury__table_statistics__V_68_68 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 8)));
#line 76 "table_statistics.m"
                  MR_Integer mercury__table_statistics__V_69_69 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 9)));
#line 76 "table_statistics.m"
                  MR_Integer mercury__table_statistics__V_70_70 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 10)));
#line 76 "table_statistics.m"
                  MR_Integer mercury__table_statistics__V_71_71 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 11)));
#line 76 "table_statistics.m"
                  MR_Integer mercury__table_statistics__V_72_72 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 12)));
#line 76 "table_statistics.m"
                  MR_Integer mercury__table_statistics__V_73_73 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 13)));
#line 76 "table_statistics.m"
                  MR_Integer mercury__table_statistics__V_74_74 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 14)));
#line 76 "table_statistics.m"
                  MR_Integer mercury__table_statistics__V_75_75 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 15)));
#line 76 "table_statistics.m"
                  MR_Integer mercury__table_statistics__V_76_76;
#line 76 "table_statistics.m"
                  MR_Integer mercury__table_statistics__V_77_77;
#line 76 "table_statistics.m"
                  MR_Integer mercury__table_statistics__V_78_78;
#line 76 "table_statistics.m"
                  MR_Integer mercury__table_statistics__V_79_79;
#line 76 "table_statistics.m"
                  MR_Integer mercury__table_statistics__V_80_80;
#line 76 "table_statistics.m"
                  MR_Integer mercury__table_statistics__V_81_81;
#line 76 "table_statistics.m"
                  MR_Integer mercury__table_statistics__V_82_82;
#line 76 "table_statistics.m"
                  MR_Integer mercury__table_statistics__V_83_83;
#line 76 "table_statistics.m"
                  MR_Integer mercury__table_statistics__V_84_84;
#line 76 "table_statistics.m"
                  MR_Integer mercury__table_statistics__V_85_85;
#line 76 "table_statistics.m"
                  MR_Integer mercury__table_statistics__V_86_86;
#line 76 "table_statistics.m"
                  MR_Integer mercury__table_statistics__V_87_87;
#line 76 "table_statistics.m"
                  MR_Integer mercury__table_statistics__V_88_88;
#line 76 "table_statistics.m"
                  MR_Integer mercury__table_statistics__V_89_89;
#line 76 "table_statistics.m"
                  MR_Integer mercury__table_statistics__V_90_90;

#line 76 "table_statistics.m"
                  mercury__table_statistics__succeeded = ((((MR_tag((MR_Word) mercury__table_statistics__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 76 "table_statistics.m"
                  if (mercury__table_statistics__succeeded)
#line 76 "table_statistics.m"
                    {
#line 76 "table_statistics.m"
                      mercury__table_statistics__V_76_76 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 1)));
#line 76 "table_statistics.m"
                      mercury__table_statistics__V_77_77 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 2)));
#line 76 "table_statistics.m"
                      mercury__table_statistics__V_78_78 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 3)));
#line 76 "table_statistics.m"
                      mercury__table_statistics__V_79_79 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 4)));
#line 76 "table_statistics.m"
                      mercury__table_statistics__V_80_80 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 5)));
#line 76 "table_statistics.m"
                      mercury__table_statistics__V_81_81 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 6)));
#line 76 "table_statistics.m"
                      mercury__table_statistics__V_82_82 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 7)));
#line 76 "table_statistics.m"
                      mercury__table_statistics__V_83_83 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 8)));
#line 76 "table_statistics.m"
                      mercury__table_statistics__V_84_84 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 9)));
#line 76 "table_statistics.m"
                      mercury__table_statistics__V_85_85 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 10)));
#line 76 "table_statistics.m"
                      mercury__table_statistics__V_86_86 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 11)));
#line 76 "table_statistics.m"
                      mercury__table_statistics__V_87_87 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 12)));
#line 76 "table_statistics.m"
                      mercury__table_statistics__V_88_88 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 13)));
#line 76 "table_statistics.m"
                      mercury__table_statistics__V_89_89 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 14)));
#line 76 "table_statistics.m"
                      mercury__table_statistics__V_90_90 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 15)));
#line 5296 "table_statistics.c"
                      mercury__table_statistics__succeeded = (mercury__table_statistics__V_61_61 == mercury__table_statistics__V_76_76);
#line 76 "table_statistics.m"
                      if (mercury__table_statistics__succeeded)
#line 76 "table_statistics.m"
                        {
#line 5302 "table_statistics.c"
                          mercury__table_statistics__succeeded = (mercury__table_statistics__V_62_62 == mercury__table_statistics__V_77_77);
#line 76 "table_statistics.m"
                          if (mercury__table_statistics__succeeded)
#line 76 "table_statistics.m"
                            {
#line 5308 "table_statistics.c"
                              mercury__table_statistics__succeeded = (mercury__table_statistics__V_63_63 == mercury__table_statistics__V_78_78);
#line 76 "table_statistics.m"
                              if (mercury__table_statistics__succeeded)
#line 76 "table_statistics.m"
                                {
#line 5314 "table_statistics.c"
                                  mercury__table_statistics__succeeded = (mercury__table_statistics__V_64_64 == mercury__table_statistics__V_79_79);
#line 76 "table_statistics.m"
                                  if (mercury__table_statistics__succeeded)
#line 76 "table_statistics.m"
                                    {
#line 5320 "table_statistics.c"
                                      mercury__table_statistics__succeeded = (mercury__table_statistics__V_65_65 == mercury__table_statistics__V_80_80);
#line 76 "table_statistics.m"
                                      if (mercury__table_statistics__succeeded)
#line 76 "table_statistics.m"
                                        {
#line 5326 "table_statistics.c"
                                          mercury__table_statistics__succeeded = (mercury__table_statistics__V_66_66 == mercury__table_statistics__V_81_81);
#line 76 "table_statistics.m"
                                          if (mercury__table_statistics__succeeded)
#line 76 "table_statistics.m"
                                            {
#line 5332 "table_statistics.c"
                                              mercury__table_statistics__succeeded = (mercury__table_statistics__V_67_67 == mercury__table_statistics__V_82_82);
#line 76 "table_statistics.m"
                                              if (mercury__table_statistics__succeeded)
#line 76 "table_statistics.m"
                                                {
#line 5338 "table_statistics.c"
                                                  mercury__table_statistics__succeeded = (mercury__table_statistics__V_68_68 == mercury__table_statistics__V_83_83);
#line 76 "table_statistics.m"
                                                  if (mercury__table_statistics__succeeded)
#line 76 "table_statistics.m"
                                                    {
#line 5344 "table_statistics.c"
                                                      mercury__table_statistics__succeeded = (mercury__table_statistics__V_69_69 == mercury__table_statistics__V_84_84);
#line 76 "table_statistics.m"
                                                      if (mercury__table_statistics__succeeded)
#line 76 "table_statistics.m"
                                                        {
#line 5350 "table_statistics.c"
                                                          mercury__table_statistics__succeeded = (mercury__table_statistics__V_70_70 == mercury__table_statistics__V_85_85);
#line 76 "table_statistics.m"
                                                          if (mercury__table_statistics__succeeded)
#line 76 "table_statistics.m"
                                                            {
#line 5356 "table_statistics.c"
                                                              mercury__table_statistics__succeeded = (mercury__table_statistics__V_71_71 == mercury__table_statistics__V_86_86);
#line 76 "table_statistics.m"
                                                              if (mercury__table_statistics__succeeded)
#line 76 "table_statistics.m"
                                                                {
#line 5362 "table_statistics.c"
                                                                  mercury__table_statistics__succeeded = (mercury__table_statistics__V_72_72 == mercury__table_statistics__V_87_87);
#line 76 "table_statistics.m"
                                                                  if (mercury__table_statistics__succeeded)
#line 76 "table_statistics.m"
                                                                    {
#line 5368 "table_statistics.c"
                                                                      mercury__table_statistics__succeeded = (mercury__table_statistics__V_73_73 == mercury__table_statistics__V_88_88);
#line 76 "table_statistics.m"
                                                                      if (mercury__table_statistics__succeeded)
#line 76 "table_statistics.m"
                                                                        {
#line 5374 "table_statistics.c"
                                                                          mercury__table_statistics__succeeded = (mercury__table_statistics__V_74_74 == mercury__table_statistics__V_89_89);
#line 76 "table_statistics.m"
                                                                          if (mercury__table_statistics__succeeded)
#line 5378 "table_statistics.c"
                                                                            mercury__table_statistics__succeeded = (mercury__table_statistics__V_75_75 == mercury__table_statistics__V_90_90);
#line 76 "table_statistics.m"
                                                                        }
#line 76 "table_statistics.m"
                                                                    }
#line 76 "table_statistics.m"
                                                                }
#line 76 "table_statistics.m"
                                                            }
#line 76 "table_statistics.m"
                                                        }
#line 76 "table_statistics.m"
                                                    }
#line 76 "table_statistics.m"
                                                }
#line 76 "table_statistics.m"
                                            }
#line 76 "table_statistics.m"
                                        }
#line 76 "table_statistics.m"
                                    }
#line 76 "table_statistics.m"
                                }
#line 76 "table_statistics.m"
                            }
#line 76 "table_statistics.m"
                        }
#line 76 "table_statistics.m"
                    }
#line 76 "table_statistics.m"
                }
#line 76 "table_statistics.m"
    return mercury__table_statistics__succeeded;
#line 76 "table_statistics.m"
  }
#line 76 "table_statistics.m"
}

#line 52 "table_statistics.m"
void MR_CALL 
mercury__table_statistics____Compare____table_step_kind_0_0(
#line 52 "table_statistics.m"
  MR_Word * mercury__table_statistics__HeadVar__1_1,
#line 52 "table_statistics.m"
  MR_Word mercury__table_statistics__HeadVar__2_2,
#line 52 "table_statistics.m"
  MR_Word mercury__table_statistics__HeadVar__3_3)
#line 52 "table_statistics.m"
{
#line 52 "table_statistics.m"
  {
#line 52 "table_statistics.m"
    MR_bool mercury__table_statistics__succeeded;
#line 52 "table_statistics.m"
    MR_Integer mercury__table_statistics__Cast_HeadVar1_4 = (MR_Integer) mercury__table_statistics__HeadVar__2_2;
#line 52 "table_statistics.m"
    MR_Integer mercury__table_statistics__Cast_HeadVar2_5 = (MR_Integer) mercury__table_statistics__HeadVar__3_3;

#line 66 "private_builtin.opt"
    mercury__table_statistics__succeeded = (mercury__table_statistics__Cast_HeadVar1_4 < mercury__table_statistics__Cast_HeadVar2_5);
#line 69 "private_builtin.opt"
    if (mercury__table_statistics__succeeded)
#line 68 "private_builtin.opt"
      *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
    else
#line 74 "private_builtin.opt"
      {
#line 71 "private_builtin.opt"
        mercury__table_statistics__succeeded = (mercury__table_statistics__Cast_HeadVar1_4 == mercury__table_statistics__Cast_HeadVar2_5);
#line 74 "private_builtin.opt"
        if (mercury__table_statistics__succeeded)
#line 73 "private_builtin.opt"
          *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
        else
#line 75 "private_builtin.opt"
          *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
      }
#line 52 "table_statistics.m"
  }
#line 52 "table_statistics.m"
}

#line 52 "table_statistics.m"
MR_bool MR_CALL 
mercury__table_statistics____Unify____table_step_kind_0_0(
#line 52 "table_statistics.m"
  MR_Word mercury__table_statistics__HeadVar__2_1,
#line 52 "table_statistics.m"
  MR_Word mercury__table_statistics__HeadVar__2_2)
#line 52 "table_statistics.m"
{
#line 5473 "table_statistics.c"
  {
#line 5475 "table_statistics.c"
    MR_bool mercury__table_statistics__succeeded = (mercury__table_statistics__HeadVar__2_1 == mercury__table_statistics__HeadVar__2_2);

#line 5478 "table_statistics.c"
    return mercury__table_statistics__succeeded;
#line 5480 "table_statistics.c"
  }
#line 52 "table_statistics.m"
}

#line 35 "table_statistics.m"
void MR_CALL 
mercury__table_statistics____Compare____table_stats_curr_prev_0_0(
#line 35 "table_statistics.m"
  MR_Word * mercury__table_statistics__HeadVar__1_1,
#line 35 "table_statistics.m"
  MR_Word mercury__table_statistics__HeadVar__2_2,
#line 35 "table_statistics.m"
  MR_Word mercury__table_statistics__HeadVar__3_3)
#line 35 "table_statistics.m"
{
#line 35 "table_statistics.m"
  {
#line 35 "table_statistics.m"
    MR_bool mercury__table_statistics__succeeded;
#line 35 "table_statistics.m"
    MR_Integer mercury__table_statistics__CastX_9 = (MR_Integer) mercury__table_statistics__HeadVar__2_2;
#line 35 "table_statistics.m"
    MR_Integer mercury__table_statistics__CastY_10 = (MR_Integer) mercury__table_statistics__HeadVar__3_3;

#line 35 "table_statistics.m"
    mercury__table_statistics__succeeded = (mercury__table_statistics__CastX_9 == mercury__table_statistics__CastY_10);
#line 35 "table_statistics.m"
    if (mercury__table_statistics__succeeded)
#line 5509 "table_statistics.c"
      *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 0;
#line 35 "table_statistics.m"
    else
#line 35 "table_statistics.m"
      {
#line 35 "table_statistics.m"
        MR_Word mercury__table_statistics__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 0)));
#line 35 "table_statistics.m"
        MR_Word mercury__table_statistics__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 1)));
#line 35 "table_statistics.m"
        MR_Word mercury__table_statistics__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 0)));
#line 35 "table_statistics.m"
        MR_Word mercury__table_statistics__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 1)));
#line 35 "table_statistics.m"
        MR_Word mercury__table_statistics__V_8_8;

#line 35 "table_statistics.m"
        {
#line 35 "table_statistics.m"
          mercury__table_statistics____Compare____table_stats_0_0(&mercury__table_statistics__V_8_8, mercury__table_statistics__V_4_4, mercury__table_statistics__V_6_6);
        }
#line 5531 "table_statistics.c"
        mercury__table_statistics__succeeded = (mercury__table_statistics__V_8_8 == (MR_Integer) 0);
#line 35 "table_statistics.m"
        mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
#line 35 "table_statistics.m"
        if (mercury__table_statistics__succeeded)
#line 35 "table_statistics.m"
          *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__V_8_8;
#line 35 "table_statistics.m"
        else
#line 35 "table_statistics.m"
          {
#line 35 "table_statistics.m"
            mercury__table_statistics____Compare____table_stats_0_0(mercury__table_statistics__HeadVar__1_1, mercury__table_statistics__V_5_5, mercury__table_statistics__V_7_7);
#line 35 "table_statistics.m"
            return;
          }
#line 35 "table_statistics.m"
      }
#line 35 "table_statistics.m"
  }
#line 35 "table_statistics.m"
}

#line 35 "table_statistics.m"
MR_bool MR_CALL 
mercury__table_statistics____Unify____table_stats_curr_prev_0_0(
#line 35 "table_statistics.m"
  MR_Word mercury__table_statistics__HeadVar__1_1,
#line 35 "table_statistics.m"
  MR_Word mercury__table_statistics__HeadVar__2_2)
#line 35 "table_statistics.m"
{
#line 35 "table_statistics.m"
  {
#line 35 "table_statistics.m"
    MR_bool mercury__table_statistics__succeeded;
#line 35 "table_statistics.m"
    MR_Integer mercury__table_statistics__CastX_7 = (MR_Integer) mercury__table_statistics__HeadVar__1_1;
#line 35 "table_statistics.m"
    MR_Integer mercury__table_statistics__CastY_8 = (MR_Integer) mercury__table_statistics__HeadVar__2_2;

#line 35 "table_statistics.m"
    mercury__table_statistics__succeeded = (mercury__table_statistics__CastX_7 == mercury__table_statistics__CastY_8);
#line 35 "table_statistics.m"
    if (mercury__table_statistics__succeeded)
#line 35 "table_statistics.m"
      mercury__table_statistics__succeeded = MR_TRUE;
#line 35 "table_statistics.m"
    else
#line 35 "table_statistics.m"
      {
#line 35 "table_statistics.m"
        MR_Word mercury__table_statistics__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 0)));
#line 35 "table_statistics.m"
        MR_Word mercury__table_statistics__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 1)));
#line 35 "table_statistics.m"
        MR_Word mercury__table_statistics__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 0)));
#line 35 "table_statistics.m"
        MR_Word mercury__table_statistics__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 1)));

#line 5592 "table_statistics.c"
        {
#line 5594 "table_statistics.c"
          mercury__table_statistics__succeeded = mercury__table_statistics____Unify____table_stats_0_0(mercury__table_statistics__V_3_3, mercury__table_statistics__V_5_5);
        }
#line 35 "table_statistics.m"
        if (mercury__table_statistics__succeeded)
#line 5599 "table_statistics.c"
          {
#line 5601 "table_statistics.c"
            return mercury__table_statistics__succeeded = mercury__table_statistics____Unify____table_stats_0_0(mercury__table_statistics__V_4_4, mercury__table_statistics__V_6_6);
          }
#line 35 "table_statistics.m"
      }
#line 35 "table_statistics.m"
    return mercury__table_statistics__succeeded;
#line 35 "table_statistics.m"
  }
#line 35 "table_statistics.m"
}

#line 41 "table_statistics.m"
void MR_CALL 
mercury__table_statistics____Compare____table_stats_0_0(
#line 41 "table_statistics.m"
  MR_Word * mercury__table_statistics__HeadVar__1_1,
#line 41 "table_statistics.m"
  MR_Word mercury__table_statistics__HeadVar__2_2,
#line 41 "table_statistics.m"
  MR_Word mercury__table_statistics__HeadVar__3_3)
#line 41 "table_statistics.m"
{
#line 41 "table_statistics.m"
  {
#line 41 "table_statistics.m"
    MR_bool mercury__table_statistics__succeeded;
#line 41 "table_statistics.m"
    MR_Integer mercury__table_statistics__CastX_12 = (MR_Integer) mercury__table_statistics__HeadVar__2_2;
#line 41 "table_statistics.m"
    MR_Integer mercury__table_statistics__CastY_13 = (MR_Integer) mercury__table_statistics__HeadVar__3_3;

#line 41 "table_statistics.m"
    mercury__table_statistics__succeeded = (mercury__table_statistics__CastX_12 == mercury__table_statistics__CastY_13);
#line 41 "table_statistics.m"
    if (mercury__table_statistics__succeeded)
#line 5637 "table_statistics.c"
      *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 0;
#line 41 "table_statistics.m"
    else
#line 41 "table_statistics.m"
      {
#line 41 "table_statistics.m"
        MR_Integer mercury__table_statistics__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 0)));
#line 41 "table_statistics.m"
        MR_Integer mercury__table_statistics__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 1)));
#line 41 "table_statistics.m"
        MR_Word mercury__table_statistics__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 2)));
#line 41 "table_statistics.m"
        MR_Integer mercury__table_statistics__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 0)));
#line 41 "table_statistics.m"
        MR_Integer mercury__table_statistics__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 1)));
#line 41 "table_statistics.m"
        MR_Word mercury__table_statistics__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 2)));
#line 41 "table_statistics.m"
        MR_Word mercury__table_statistics__V_10_10;

#line 66 "private_builtin.opt"
        mercury__table_statistics__succeeded = (mercury__table_statistics__V_4_4 < mercury__table_statistics__V_7_7);
#line 69 "private_builtin.opt"
        if (mercury__table_statistics__succeeded)
#line 68 "private_builtin.opt"
          mercury__table_statistics__V_10_10 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
        else
#line 74 "private_builtin.opt"
          {
#line 71 "private_builtin.opt"
            mercury__table_statistics__succeeded = (mercury__table_statistics__V_4_4 == mercury__table_statistics__V_7_7);
#line 74 "private_builtin.opt"
            if (mercury__table_statistics__succeeded)
#line 73 "private_builtin.opt"
              mercury__table_statistics__V_10_10 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
            else
#line 75 "private_builtin.opt"
              mercury__table_statistics__V_10_10 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
          }
#line 5680 "table_statistics.c"
        mercury__table_statistics__succeeded = (mercury__table_statistics__V_10_10 == (MR_Integer) 0);
#line 41 "table_statistics.m"
        mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
#line 41 "table_statistics.m"
        if (mercury__table_statistics__succeeded)
#line 41 "table_statistics.m"
          *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__V_10_10;
#line 41 "table_statistics.m"
        else
#line 41 "table_statistics.m"
          {
#line 41 "table_statistics.m"
            MR_Word mercury__table_statistics__V_11_11;

#line 66 "private_builtin.opt"
            mercury__table_statistics__succeeded = (mercury__table_statistics__V_5_5 < mercury__table_statistics__V_8_8);
#line 69 "private_builtin.opt"
            if (mercury__table_statistics__succeeded)
#line 68 "private_builtin.opt"
              mercury__table_statistics__V_11_11 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
            else
#line 74 "private_builtin.opt"
              {
#line 71 "private_builtin.opt"
                mercury__table_statistics__succeeded = (mercury__table_statistics__V_5_5 == mercury__table_statistics__V_8_8);
#line 74 "private_builtin.opt"
                if (mercury__table_statistics__succeeded)
#line 73 "private_builtin.opt"
                  mercury__table_statistics__V_11_11 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                else
#line 75 "private_builtin.opt"
                  mercury__table_statistics__V_11_11 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
              }
#line 5717 "table_statistics.c"
            mercury__table_statistics__succeeded = (mercury__table_statistics__V_11_11 == (MR_Integer) 0);
#line 41 "table_statistics.m"
            mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
#line 41 "table_statistics.m"
            if (mercury__table_statistics__succeeded)
#line 41 "table_statistics.m"
              *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__V_11_11;
#line 41 "table_statistics.m"
            else
#line 41 "table_statistics.m"
              {
#line 41 "table_statistics.m"
                MR_Word mercury__table_statistics__TypeInfo_16_16 = (MR_Word) &mercury__table_statistics_scalar_common_1[0];

#line 41 "table_statistics.m"
                {
#line 41 "table_statistics.m"
                  mercury__builtin__compare_3_p_0(mercury__table_statistics__TypeInfo_16_16, mercury__table_statistics__HeadVar__1_1, ((MR_Box) (mercury__table_statistics__V_6_6)), ((MR_Box) (mercury__table_statistics__V_9_9)));
#line 41 "table_statistics.m"
                  return;
                }
#line 41 "table_statistics.m"
              }
#line 41 "table_statistics.m"
          }
#line 41 "table_statistics.m"
      }
#line 41 "table_statistics.m"
  }
#line 41 "table_statistics.m"
}

#line 41 "table_statistics.m"
MR_bool MR_CALL 
mercury__table_statistics____Unify____table_stats_0_0(
#line 41 "table_statistics.m"
  MR_Word mercury__table_statistics__HeadVar__1_1,
#line 41 "table_statistics.m"
  MR_Word mercury__table_statistics__HeadVar__2_2)
#line 41 "table_statistics.m"
{
#line 41 "table_statistics.m"
  {
#line 41 "table_statistics.m"
    MR_bool mercury__table_statistics__succeeded;
#line 41 "table_statistics.m"
    MR_Integer mercury__table_statistics__CastX_9 = (MR_Integer) mercury__table_statistics__HeadVar__1_1;
#line 41 "table_statistics.m"
    MR_Integer mercury__table_statistics__CastY_10 = (MR_Integer) mercury__table_statistics__HeadVar__2_2;

#line 41 "table_statistics.m"
    mercury__table_statistics__succeeded = (mercury__table_statistics__CastX_9 == mercury__table_statistics__CastY_10);
#line 41 "table_statistics.m"
    if (mercury__table_statistics__succeeded)
#line 41 "table_statistics.m"
      mercury__table_statistics__succeeded = MR_TRUE;
#line 41 "table_statistics.m"
    else
#line 41 "table_statistics.m"
      {
#line 41 "table_statistics.m"
        MR_Word mercury__table_statistics__TypeInfo_11_11;
#line 41 "table_statistics.m"
        MR_Integer mercury__table_statistics__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 0)));
#line 41 "table_statistics.m"
        MR_Integer mercury__table_statistics__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 1)));
#line 41 "table_statistics.m"
        MR_Word mercury__table_statistics__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 2)));
#line 41 "table_statistics.m"
        MR_Integer mercury__table_statistics__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 0)));
#line 41 "table_statistics.m"
        MR_Integer mercury__table_statistics__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 1)));
#line 41 "table_statistics.m"
        MR_Word mercury__table_statistics__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 2)));

#line 5793 "table_statistics.c"
        mercury__table_statistics__succeeded = (mercury__table_statistics__V_3_3 == mercury__table_statistics__V_6_6);
#line 41 "table_statistics.m"
        if (mercury__table_statistics__succeeded)
#line 41 "table_statistics.m"
          {
#line 5799 "table_statistics.c"
            mercury__table_statistics__succeeded = (mercury__table_statistics__V_4_4 == mercury__table_statistics__V_7_7);
#line 41 "table_statistics.m"
            if (mercury__table_statistics__succeeded)
#line 41 "table_statistics.m"
              {
#line 5805 "table_statistics.c"
                mercury__table_statistics__TypeInfo_11_11 = (MR_Word) &mercury__table_statistics_scalar_common_1[0];
#line 5807 "table_statistics.c"
                {
#line 5809 "table_statistics.c"
                  return mercury__table_statistics__succeeded = mercury__builtin__unify_2_p_0(mercury__table_statistics__TypeInfo_11_11, ((MR_Box) (mercury__table_statistics__V_5_5)), ((MR_Box) (mercury__table_statistics__V_8_8)));
                }
#line 41 "table_statistics.m"
              }
#line 41 "table_statistics.m"
          }
#line 41 "table_statistics.m"
      }
#line 41 "table_statistics.m"
    return mercury__table_statistics__succeeded;
#line 41 "table_statistics.m"
  }
#line 41 "table_statistics.m"
}

#line 29 "table_statistics.m"
void MR_CALL 
mercury__table_statistics____Compare____proc_table_statistics_0_0(
#line 29 "table_statistics.m"
  MR_Word * mercury__table_statistics__HeadVar__1_1,
#line 29 "table_statistics.m"
  MR_Word mercury__table_statistics__HeadVar__2_2,
#line 29 "table_statistics.m"
  MR_Word mercury__table_statistics__HeadVar__3_3)
#line 29 "table_statistics.m"
{
#line 29 "table_statistics.m"
  {
#line 29 "table_statistics.m"
    MR_bool mercury__table_statistics__succeeded;
#line 29 "table_statistics.m"
    MR_Integer mercury__table_statistics__CastX_9 = (MR_Integer) mercury__table_statistics__HeadVar__2_2;
#line 29 "table_statistics.m"
    MR_Integer mercury__table_statistics__CastY_10 = (MR_Integer) mercury__table_statistics__HeadVar__3_3;

#line 29 "table_statistics.m"
    mercury__table_statistics__succeeded = (mercury__table_statistics__CastX_9 == mercury__table_statistics__CastY_10);
#line 29 "table_statistics.m"
    if (mercury__table_statistics__succeeded)
#line 5849 "table_statistics.c"
      *mercury__table_statistics__HeadVar__1_1 = (MR_Integer) 0;
#line 29 "table_statistics.m"
    else
#line 29 "table_statistics.m"
      {
#line 29 "table_statistics.m"
        MR_Word mercury__table_statistics__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 0)));
#line 29 "table_statistics.m"
        MR_Word mercury__table_statistics__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 1)));
#line 29 "table_statistics.m"
        MR_Word mercury__table_statistics__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 0)));
#line 29 "table_statistics.m"
        MR_Word mercury__table_statistics__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__3_3, (MR_Integer) 1)));
#line 29 "table_statistics.m"
        MR_Word mercury__table_statistics__V_8_8;

#line 29 "table_statistics.m"
        {
#line 29 "table_statistics.m"
          mercury__table_statistics____Compare____table_stats_curr_prev_0_0(&mercury__table_statistics__V_8_8, mercury__table_statistics__V_4_4, mercury__table_statistics__V_6_6);
        }
#line 5871 "table_statistics.c"
        mercury__table_statistics__succeeded = (mercury__table_statistics__V_8_8 == (MR_Integer) 0);
#line 29 "table_statistics.m"
        mercury__table_statistics__succeeded = !(mercury__table_statistics__succeeded);
#line 29 "table_statistics.m"
        if (mercury__table_statistics__succeeded)
#line 29 "table_statistics.m"
          *mercury__table_statistics__HeadVar__1_1 = mercury__table_statistics__V_8_8;
#line 29 "table_statistics.m"
        else
#line 29 "table_statistics.m"
          {
#line 29 "table_statistics.m"
            MR_Word mercury__table_statistics__TypeInfo_12_12 = (MR_Word) &mercury__table_statistics_scalar_common_1[1];

#line 29 "table_statistics.m"
            {
#line 29 "table_statistics.m"
              mercury__builtin__compare_3_p_0(mercury__table_statistics__TypeInfo_12_12, mercury__table_statistics__HeadVar__1_1, ((MR_Box) (mercury__table_statistics__V_5_5)), ((MR_Box) (mercury__table_statistics__V_7_7)));
#line 29 "table_statistics.m"
              return;
            }
#line 29 "table_statistics.m"
          }
#line 29 "table_statistics.m"
      }
#line 29 "table_statistics.m"
  }
#line 29 "table_statistics.m"
}

#line 29 "table_statistics.m"
MR_bool MR_CALL 
mercury__table_statistics____Unify____proc_table_statistics_0_0(
#line 29 "table_statistics.m"
  MR_Word mercury__table_statistics__HeadVar__1_1,
#line 29 "table_statistics.m"
  MR_Word mercury__table_statistics__HeadVar__2_2)
#line 29 "table_statistics.m"
{
#line 29 "table_statistics.m"
  {
#line 29 "table_statistics.m"
    MR_bool mercury__table_statistics__succeeded;
#line 29 "table_statistics.m"
    MR_Integer mercury__table_statistics__CastX_7 = (MR_Integer) mercury__table_statistics__HeadVar__1_1;
#line 29 "table_statistics.m"
    MR_Integer mercury__table_statistics__CastY_8 = (MR_Integer) mercury__table_statistics__HeadVar__2_2;

#line 29 "table_statistics.m"
    mercury__table_statistics__succeeded = (mercury__table_statistics__CastX_7 == mercury__table_statistics__CastY_8);
#line 29 "table_statistics.m"
    if (mercury__table_statistics__succeeded)
#line 29 "table_statistics.m"
      mercury__table_statistics__succeeded = MR_TRUE;
#line 29 "table_statistics.m"
    else
#line 29 "table_statistics.m"
      {
#line 29 "table_statistics.m"
        MR_Word mercury__table_statistics__TypeInfo_9_9;
#line 29 "table_statistics.m"
        MR_Word mercury__table_statistics__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 0)));
#line 29 "table_statistics.m"
        MR_Word mercury__table_statistics__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 1)));
#line 29 "table_statistics.m"
        MR_Word mercury__table_statistics__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 0)));
#line 29 "table_statistics.m"
        MR_Word mercury__table_statistics__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 1)));

#line 5941 "table_statistics.c"
        {
#line 5943 "table_statistics.c"
          mercury__table_statistics__succeeded = mercury__table_statistics____Unify____table_stats_curr_prev_0_0(mercury__table_statistics__V_3_3, mercury__table_statistics__V_5_5);
        }
#line 29 "table_statistics.m"
        if (mercury__table_statistics__succeeded)
#line 29 "table_statistics.m"
          {
#line 5950 "table_statistics.c"
            mercury__table_statistics__TypeInfo_9_9 = (MR_Word) &mercury__table_statistics_scalar_common_1[1];
#line 5952 "table_statistics.c"
            {
#line 5954 "table_statistics.c"
              return mercury__table_statistics__succeeded = mercury__builtin__unify_2_p_0(mercury__table_statistics__TypeInfo_9_9, ((MR_Box) (mercury__table_statistics__V_4_4)), ((MR_Box) (mercury__table_statistics__V_6_6)));
            }
#line 29 "table_statistics.m"
          }
#line 29 "table_statistics.m"
      }
#line 29 "table_statistics.m"
    return mercury__table_statistics__succeeded;
#line 29 "table_statistics.m"
  }
#line 29 "table_statistics.m"
}

#line 188 "table_statistics.m"
void MR_CALL 
mercury__table_statistics____Compare____ml_table_step_desc_ptr_0_0(
#line 188 "table_statistics.m"
  MR_Word * mercury__table_statistics__HeadVar__1_1,
#line 188 "table_statistics.m"
  MR_Box mercury__table_statistics__HeadVar__2_2,
#line 188 "table_statistics.m"
  MR_Box mercury__table_statistics__HeadVar__3_3)
#line 188 "table_statistics.m"
{
#line 188 "table_statistics.m"
  {
#line 188 "table_statistics.m"
    MR_bool mercury__table_statistics__succeeded;
#line 188 "table_statistics.m"
    MR_Word mercury__table_statistics__Cast_HeadVar1_4 = (MR_Word) mercury__table_statistics__HeadVar__2_2;
#line 188 "table_statistics.m"
    MR_Word mercury__table_statistics__Cast_HeadVar2_5 = (MR_Word) mercury__table_statistics__HeadVar__3_3;

#line 188 "table_statistics.m"
    {
#line 188 "table_statistics.m"
      mercury__builtin____Compare____c_pointer_0_0(mercury__table_statistics__HeadVar__1_1, mercury__table_statistics__Cast_HeadVar1_4, mercury__table_statistics__Cast_HeadVar2_5);
#line 188 "table_statistics.m"
      return;
    }
#line 188 "table_statistics.m"
  }
#line 188 "table_statistics.m"
}

#line 188 "table_statistics.m"
MR_bool MR_CALL 
mercury__table_statistics____Unify____ml_table_step_desc_ptr_0_0(
#line 188 "table_statistics.m"
  MR_Box mercury__table_statistics__HeadVar__1_1,
#line 188 "table_statistics.m"
  MR_Box mercury__table_statistics__HeadVar__2_2)
#line 188 "table_statistics.m"
{
#line 188 "table_statistics.m"
  {
#line 188 "table_statistics.m"
    MR_bool mercury__table_statistics__succeeded;
#line 188 "table_statistics.m"
    MR_Word mercury__table_statistics__Cast_HeadVar1_3 = (MR_Word) mercury__table_statistics__HeadVar__1_1;
#line 188 "table_statistics.m"
    MR_Word mercury__table_statistics__Cast_HeadVar2_4 = (MR_Word) mercury__table_statistics__HeadVar__2_2;

#line 188 "table_statistics.m"
    {
#line 188 "table_statistics.m"
      return mercury__table_statistics__succeeded = mercury__builtin____Unify____c_pointer_0_0(mercury__table_statistics__Cast_HeadVar1_3, mercury__table_statistics__Cast_HeadVar2_4);
    }
#line 188 "table_statistics.m"
    return mercury__table_statistics__succeeded;
#line 188 "table_statistics.m"
  }
#line 188 "table_statistics.m"
}

#line 194 "table_statistics.m"
void MR_CALL 
mercury__table_statistics____Compare____ml_table_stats_ptr_0_0(
#line 194 "table_statistics.m"
  MR_Word * mercury__table_statistics__HeadVar__1_1,
#line 194 "table_statistics.m"
  MR_Box mercury__table_statistics__HeadVar__2_2,
#line 194 "table_statistics.m"
  MR_Box mercury__table_statistics__HeadVar__3_3)
#line 194 "table_statistics.m"
{
#line 194 "table_statistics.m"
  {
#line 194 "table_statistics.m"
    MR_bool mercury__table_statistics__succeeded;
#line 194 "table_statistics.m"
    MR_Word mercury__table_statistics__Cast_HeadVar1_4 = (MR_Word) mercury__table_statistics__HeadVar__2_2;
#line 194 "table_statistics.m"
    MR_Word mercury__table_statistics__Cast_HeadVar2_5 = (MR_Word) mercury__table_statistics__HeadVar__3_3;

#line 194 "table_statistics.m"
    {
#line 194 "table_statistics.m"
      mercury__builtin____Compare____c_pointer_0_0(mercury__table_statistics__HeadVar__1_1, mercury__table_statistics__Cast_HeadVar1_4, mercury__table_statistics__Cast_HeadVar2_5);
#line 194 "table_statistics.m"
      return;
    }
#line 194 "table_statistics.m"
  }
#line 194 "table_statistics.m"
}

#line 194 "table_statistics.m"
MR_bool MR_CALL 
mercury__table_statistics____Unify____ml_table_stats_ptr_0_0(
#line 194 "table_statistics.m"
  MR_Box mercury__table_statistics__HeadVar__1_1,
#line 194 "table_statistics.m"
  MR_Box mercury__table_statistics__HeadVar__2_2)
#line 194 "table_statistics.m"
{
#line 194 "table_statistics.m"
  {
#line 194 "table_statistics.m"
    MR_bool mercury__table_statistics__succeeded;
#line 194 "table_statistics.m"
    MR_Word mercury__table_statistics__Cast_HeadVar1_3 = (MR_Word) mercury__table_statistics__HeadVar__1_1;
#line 194 "table_statistics.m"
    MR_Word mercury__table_statistics__Cast_HeadVar2_4 = (MR_Word) mercury__table_statistics__HeadVar__2_2;

#line 194 "table_statistics.m"
    {
#line 194 "table_statistics.m"
      return mercury__table_statistics__succeeded = mercury__builtin____Unify____c_pointer_0_0(mercury__table_statistics__Cast_HeadVar1_3, mercury__table_statistics__Cast_HeadVar2_4);
    }
#line 194 "table_statistics.m"
    return mercury__table_statistics__succeeded;
#line 194 "table_statistics.m"
  }
#line 194 "table_statistics.m"
}

#line 894 "table_statistics.m"
static MR_String MR_CALL 
mercury__table_statistics__percentage_str_2_f_0(
#line 894 "table_statistics.m"
  MR_Integer mercury__table_statistics__A_4,
#line 894 "table_statistics.m"
  MR_Integer mercury__table_statistics__B_5)
#line 894 "table_statistics.m"
{
#line 896 "table_statistics.m"
  {
#line 896 "table_statistics.m"
    MR_bool mercury__table_statistics__succeeded;
#line 896 "table_statistics.m"
    MR_String mercury__table_statistics__PercentageStr_6;
#line 896 "table_statistics.m"
    MR_Float mercury__table_statistics__Percentage_7;
#line 896 "table_statistics.m"
    MR_Float mercury__table_statistics__V_8_8;
#line 896 "table_statistics.m"
    MR_Float mercury__table_statistics__V_9_9;
#line 896 "table_statistics.m"
    MR_Float mercury__table_statistics__V_11_11;
#line 896 "table_statistics.m"
    MR_Float mercury__table_statistics__V_12_12;
#line 896 "table_statistics.m"
    MR_String mercury__table_statistics__V_18_18;
#line 896 "table_statistics.m"
    MR_Word mercury__table_statistics__V_24_24;
#line 896 "table_statistics.m"
    MR_String mercury__table_statistics__V_27_27;
#line 896 "table_statistics.m"
    MR_Word mercury__table_statistics__MaybeWidth_11_40;
#line 896 "table_statistics.m"
    MR_Word mercury__table_statistics__MaybePrec_12_41;

#line 81 "float.opt"
{
#define MR_PROC_LABEL mercury__table_statistics__percentage_str_2_f_0

	MR_Integer IntVal;
	MR_Float FloatVal;

	IntVal =  (MR_Integer) 100 ;
		{
#line 81 "float.opt"

    FloatVal = IntVal;

#line 6141 "table_statistics.c"

		;}
#undef MR_PROC_LABEL
	 mercury__table_statistics__V_9_9  = FloatVal;
#line 81 "float.opt"
}
#line 81 "float.opt"
{
#define MR_PROC_LABEL mercury__table_statistics__percentage_str_2_f_0

	MR_Integer IntVal;
	MR_Float FloatVal;

	IntVal =  mercury__table_statistics__A_4 ;
		{
#line 81 "float.opt"

    FloatVal = IntVal;

#line 6161 "table_statistics.c"

		;}
#undef MR_PROC_LABEL
	 mercury__table_statistics__V_11_11  = FloatVal;
#line 81 "float.opt"
}
#line 897 "table_statistics.m"
    mercury__table_statistics__V_8_8 = (mercury__table_statistics__V_9_9 * mercury__table_statistics__V_11_11);
#line 81 "float.opt"
{
#define MR_PROC_LABEL mercury__table_statistics__percentage_str_2_f_0

	MR_Integer IntVal;
	MR_Float FloatVal;

	IntVal =  mercury__table_statistics__B_5 ;
		{
#line 81 "float.opt"

    FloatVal = IntVal;

#line 6183 "table_statistics.c"

		;}
#undef MR_PROC_LABEL
	 mercury__table_statistics__V_12_12  = FloatVal;
#line 81 "float.opt"
}
#line 212 "float.opt"
{
#define MR_PROC_LABEL mercury__table_statistics__percentage_str_2_f_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 212 "float.opt"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif

#line 6205 "table_statistics.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 212 "float.opt"
	}
mercury__table_statistics__succeeded  = SUCCESS_INDICATOR;
}
#line 72 "float.opt"
    if (mercury__table_statistics__succeeded)
#line 73 "float.opt"
      mercury__table_statistics__succeeded = (mercury__table_statistics__V_12_12 == ((MR_Float) 0.0000000000000000));
#line 78 "float.opt"
    if (mercury__table_statistics__succeeded)
#line 75 "float.opt"
      {
#line 75 "float.opt"
        MR_Word mercury__table_statistics__TypeCtorInfo_9_34 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
#line 75 "float.opt"
        MR_Word mercury__table_statistics__V_7_32 = (MR_Word) ((MR_Box) ((MR_String) "float.\'/\': division by zero"));

#line 77 "float.opt"
        {
#line 77 "float.opt"
          mercury__exception__throw_1_p_0(mercury__table_statistics__TypeCtorInfo_9_34, ((MR_Box) (mercury__table_statistics__V_7_32)));
        }
#line 75 "float.opt"
      }
#line 78 "float.opt"
    else
#line 79 "float.opt"
      mercury__table_statistics__Percentage_7 = (mercury__table_statistics__V_8_8 / mercury__table_statistics__V_12_12);
#line 6238 "table_statistics.c"
    mercury__table_statistics__V_24_24 = (MR_Word) &mercury__table_statistics_scalar_common_5[0];
#line 72 "string.format.opt"
    mercury__table_statistics__MaybeWidth_11_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 73 "string.format.opt"
    mercury__table_statistics__MaybePrec_12_41 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__table_statistics_scalar_common_5[2]);
#line 74 "string.format.opt"
    {
#line 74 "string.format.opt"
      mercury__string__format__format_float_component_6_p_0(mercury__table_statistics__V_24_24, mercury__table_statistics__MaybeWidth_11_40, mercury__table_statistics__MaybePrec_12_41, (MR_Integer) 2, mercury__table_statistics__Percentage_7, &mercury__table_statistics__V_18_18);
    }
#line 406 "string.opt"
    {
#line 406 "string.opt"
      mercury__string__append_3_p_2(mercury__table_statistics__V_18_18, (MR_String) "%)", &mercury__table_statistics__V_27_27);
    }
#line 406 "string.opt"
    {
#line 406 "string.opt"
      mercury__string__append_3_p_2((MR_String) "(", mercury__table_statistics__V_27_27, &mercury__table_statistics__PercentageStr_6);
    }
#line 896 "table_statistics.m"
    return mercury__table_statistics__PercentageStr_6;
#line 896 "table_statistics.m"
  }
#line 894 "table_statistics.m"
}

#line 799 "table_statistics.m"
static void MR_CALL 
mercury__table_statistics__write_table_step_stats_4_p_0(
#line 799 "table_statistics.m"
  MR_Word mercury__table_statistics__Step_5,
#line 799 "table_statistics.m"
  MR_Integer mercury__table_statistics__StepNum_6)
#line 799 "table_statistics.m"
{
#line 802 "table_statistics.m"
  {
#line 802 "table_statistics.m"
    MR_bool mercury__table_statistics__succeeded;
#line 802 "table_statistics.m"
    MR_String mercury__table_statistics__VarName_8 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__table_statistics__Step_5, (MR_Integer) 0)));
#line 802 "table_statistics.m"
    MR_Integer mercury__table_statistics__Lookups_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__table_statistics__Step_5, (MR_Integer) 1)));
#line 802 "table_statistics.m"
    MR_Integer mercury__table_statistics__LookupsIsDupl_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__table_statistics__Step_5, (MR_Integer) 2)));
#line 802 "table_statistics.m"
    MR_Word mercury__table_statistics__Details_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__table_statistics__Step_5, (MR_Integer) 3)));

#line 808 "table_statistics.m"
    if ((mercury__table_statistics__Details_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 805 "table_statistics.m"
      {
#line 806 "table_statistics.m"
        {
#line 806 "table_statistics.m"
          mercury__table_statistics__write_table_step_stats_header_7_p_0(mercury__table_statistics__VarName_8, mercury__table_statistics__StepNum_6, (MR_String) "none", mercury__table_statistics__Lookups_9, mercury__table_statistics__LookupsIsDupl_10);
#line 806 "table_statistics.m"
          return;
        }
#line 805 "table_statistics.m"
      }
#line 808 "table_statistics.m"
    else
#line 808 "table_statistics.m"
      if (((MR_tag((MR_Word) mercury__table_statistics__Details_11)) == (MR_mktag((MR_Integer) 2))))
#line 818 "table_statistics.m"
        {
#line 818 "table_statistics.m"
          MR_Integer mercury__table_statistics__EnumNodeAllocs_14 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__table_statistics__Details_11, (MR_Integer) 0)));
#line 818 "table_statistics.m"
          MR_Integer mercury__table_statistics__EnumNodeBytes_15 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__table_statistics__Details_11, (MR_Integer) 1)));

#line 819 "table_statistics.m"
          {
#line 819 "table_statistics.m"
            mercury__table_statistics__write_table_step_stats_header_7_p_0(mercury__table_statistics__VarName_8, mercury__table_statistics__StepNum_6, (MR_String) "enum trie", mercury__table_statistics__Lookups_9, mercury__table_statistics__LookupsIsDupl_10);
          }
#line 821 "table_statistics.m"
          mercury__table_statistics__succeeded = (mercury__table_statistics__Lookups_9 > (MR_Integer) 0);
#line 823 "table_statistics.m"
          if (mercury__table_statistics__succeeded)
#line 822 "table_statistics.m"
            {
#line 822 "table_statistics.m"
              mercury__table_statistics__write_table_step_stats_enum_4_p_0(mercury__table_statistics__EnumNodeAllocs_14, mercury__table_statistics__EnumNodeBytes_15);
#line 822 "table_statistics.m"
              return;
            }
#line 823 "table_statistics.m"
          else
#line 823 "table_statistics.m"
            {
#line 823 "table_statistics.m"
            }
#line 818 "table_statistics.m"
        }
#line 808 "table_statistics.m"
      else
#line 808 "table_statistics.m"
        if (((MR_tag((MR_Word) mercury__table_statistics__Details_11)) == (MR_mktag((MR_Integer) 1))))
#line 809 "table_statistics.m"
          {
#line 809 "table_statistics.m"
            MR_Integer mercury__table_statistics__StartAllocs_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__table_statistics__Details_11, (MR_Integer) 0)));
#line 809 "table_statistics.m"
            MR_Integer mercury__table_statistics__StartBytes_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__table_statistics__Details_11, (MR_Integer) 1)));

#line 810 "table_statistics.m"
            {
#line 810 "table_statistics.m"
              mercury__table_statistics__write_table_step_stats_header_7_p_0(mercury__table_statistics__VarName_8, mercury__table_statistics__StepNum_6, (MR_String) "expandable array", mercury__table_statistics__Lookups_9, mercury__table_statistics__LookupsIsDupl_10);
            }
#line 812 "table_statistics.m"
            mercury__table_statistics__succeeded = (mercury__table_statistics__Lookups_9 > (MR_Integer) 0);
#line 814 "table_statistics.m"
            if (mercury__table_statistics__succeeded)
#line 813 "table_statistics.m"
              {
#line 813 "table_statistics.m"
                mercury__table_statistics__write_table_step_stats_start_4_p_0(mercury__table_statistics__StartAllocs_12, mercury__table_statistics__StartBytes_13);
#line 813 "table_statistics.m"
                return;
              }
#line 814 "table_statistics.m"
            else
#line 814 "table_statistics.m"
              {
#line 814 "table_statistics.m"
              }
#line 809 "table_statistics.m"
          }
#line 808 "table_statistics.m"
        else
#line 808 "table_statistics.m"
          if (((((MR_tag((MR_Word) mercury__table_statistics__Details_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_11, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 860 "table_statistics.m"
            {
#line 860 "table_statistics.m"
              MR_Integer mercury__table_statistics__DuNodeAllocs_25 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_11, (MR_Integer) 1)));
#line 860 "table_statistics.m"
              MR_Integer mercury__table_statistics__DuNodeBytes_26 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_11, (MR_Integer) 2)));
#line 860 "table_statistics.m"
              MR_Integer mercury__table_statistics__DuArgLookups_27 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_11, (MR_Integer) 3)));
#line 860 "table_statistics.m"
              MR_Integer mercury__table_statistics__DuExistLookups_28 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_11, (MR_Integer) 4)));
#line 860 "table_statistics.m"
              MR_Integer mercury__table_statistics__EnumNodeAllocs_56 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_11, (MR_Integer) 5)));
#line 860 "table_statistics.m"
              MR_Integer mercury__table_statistics__EnumNodeBytes_57 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_11, (MR_Integer) 6)));
#line 860 "table_statistics.m"
              MR_Integer mercury__table_statistics__HashTableAllocs_58 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_11, (MR_Integer) 7)));
#line 860 "table_statistics.m"
              MR_Integer mercury__table_statistics__HashTableBytes_59 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_11, (MR_Integer) 8)));
#line 860 "table_statistics.m"
              MR_Integer mercury__table_statistics__HashLinkChunkAllocs_60 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_11, (MR_Integer) 9)));
#line 860 "table_statistics.m"
              MR_Integer mercury__table_statistics__HashLinkChunkBytes_61 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_11, (MR_Integer) 10)));
#line 860 "table_statistics.m"
              MR_Integer mercury__table_statistics__HashKeyComparesNotDupl_62 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_11, (MR_Integer) 11)));
#line 860 "table_statistics.m"
              MR_Integer mercury__table_statistics__HashKeyComparesIsDupl_63 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_11, (MR_Integer) 12)));
#line 860 "table_statistics.m"
              MR_Integer mercury__table_statistics__HashResizes_64 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_11, (MR_Integer) 13)));
#line 860 "table_statistics.m"
              MR_Integer mercury__table_statistics__HashResizeOldEntries_65 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_11, (MR_Integer) 14)));
#line 860 "table_statistics.m"
              MR_Integer mercury__table_statistics__HashResizeNewEntries_66 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_11, (MR_Integer) 15)));

#line 861 "table_statistics.m"
              {
#line 861 "table_statistics.m"
                mercury__table_statistics__write_table_step_stats_header_7_p_0(mercury__table_statistics__VarName_8, mercury__table_statistics__StepNum_6, (MR_String) "discriminated union nested trie", mercury__table_statistics__Lookups_9, mercury__table_statistics__LookupsIsDupl_10);
              }
#line 863 "table_statistics.m"
              mercury__table_statistics__succeeded = (mercury__table_statistics__Lookups_9 > (MR_Integer) 0);
#line 889 "table_statistics.m"
              if (mercury__table_statistics__succeeded)
#line 874 "table_statistics.m"
                {
#line 864 "table_statistics.m"
                  mercury__table_statistics__succeeded = (mercury__table_statistics__DuNodeAllocs_25 > (MR_Integer) 0);
#line 867 "table_statistics.m"
                  if (mercury__table_statistics__succeeded)
#line 865 "table_statistics.m"
                    {
#line 865 "table_statistics.m"
                      mercury__table_statistics__write_table_step_stats_du_6_p_0(mercury__table_statistics__DuNodeAllocs_25, mercury__table_statistics__DuNodeBytes_26, mercury__table_statistics__DuArgLookups_27, mercury__table_statistics__DuExistLookups_28);
                    }
#line 867 "table_statistics.m"
                  else
#line 870 "table_statistics.m"
                    {
#line 872 "table_statistics.m"
                      {
#line 872 "table_statistics.m"
                        mercury__require__error_1_p_0((MR_String) "write_table_step_stats: no du stats");
#line 872 "table_statistics.m"
                        return;
                      }
#line 870 "table_statistics.m"
                    }
#line 875 "table_statistics.m"
                  mercury__table_statistics__succeeded = (mercury__table_statistics__EnumNodeAllocs_56 > (MR_Integer) 0);
#line 877 "table_statistics.m"
                  if (mercury__table_statistics__succeeded)
#line 876 "table_statistics.m"
                    {
#line 876 "table_statistics.m"
                      mercury__table_statistics__write_table_step_stats_enum_4_p_0(mercury__table_statistics__EnumNodeAllocs_56, mercury__table_statistics__EnumNodeBytes_57);
                    }
#line 877 "table_statistics.m"
                  else
#line 877 "table_statistics.m"
                    {
#line 877 "table_statistics.m"
                    }
#line 880 "table_statistics.m"
                  mercury__table_statistics__succeeded = (mercury__table_statistics__HashTableAllocs_58 > (MR_Integer) 0);
#line 886 "table_statistics.m"
                  if (mercury__table_statistics__succeeded)
#line 881 "table_statistics.m"
                    {
#line 881 "table_statistics.m"
                      mercury__table_statistics__write_table_step_stats_hash_11_p_0(mercury__table_statistics__HashTableAllocs_58, mercury__table_statistics__HashTableBytes_59, mercury__table_statistics__HashLinkChunkAllocs_60, mercury__table_statistics__HashLinkChunkBytes_61, mercury__table_statistics__HashKeyComparesNotDupl_62, mercury__table_statistics__HashKeyComparesIsDupl_63, mercury__table_statistics__HashResizes_64, mercury__table_statistics__HashResizeOldEntries_65, mercury__table_statistics__HashResizeNewEntries_66);
#line 881 "table_statistics.m"
                      return;
                    }
#line 886 "table_statistics.m"
                  else
#line 886 "table_statistics.m"
                    {
#line 886 "table_statistics.m"
                    }
#line 874 "table_statistics.m"
                }
#line 889 "table_statistics.m"
              else
#line 889 "table_statistics.m"
                {
#line 889 "table_statistics.m"
                }
#line 860 "table_statistics.m"
            }
#line 808 "table_statistics.m"
          else
#line 808 "table_statistics.m"
            if (((((MR_tag((MR_Word) mercury__table_statistics__Details_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_11, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 830 "table_statistics.m"
              {
#line 830 "table_statistics.m"
                MR_Integer mercury__table_statistics__HashTableAllocs_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_11, (MR_Integer) 1)));
#line 830 "table_statistics.m"
                MR_Integer mercury__table_statistics__HashTableBytes_17 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_11, (MR_Integer) 2)));
#line 830 "table_statistics.m"
                MR_Integer mercury__table_statistics__HashLinkChunkAllocs_18 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_11, (MR_Integer) 3)));
#line 830 "table_statistics.m"
                MR_Integer mercury__table_statistics__HashLinkChunkBytes_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_11, (MR_Integer) 4)));
#line 830 "table_statistics.m"
                MR_Integer mercury__table_statistics__HashKeyComparesNotDupl_20 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_11, (MR_Integer) 5)));
#line 830 "table_statistics.m"
                MR_Integer mercury__table_statistics__HashKeyComparesIsDupl_21 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_11, (MR_Integer) 6)));
#line 830 "table_statistics.m"
                MR_Integer mercury__table_statistics__HashResizes_22 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_11, (MR_Integer) 7)));
#line 830 "table_statistics.m"
                MR_Integer mercury__table_statistics__HashResizeOldEntries_23 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_11, (MR_Integer) 8)));
#line 830 "table_statistics.m"
                MR_Integer mercury__table_statistics__HashResizeNewEntries_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_11, (MR_Integer) 9)));

#line 831 "table_statistics.m"
                {
#line 831 "table_statistics.m"
                  mercury__table_statistics__write_table_step_stats_header_7_p_0(mercury__table_statistics__VarName_8, mercury__table_statistics__StepNum_6, (MR_String) "hash table", mercury__table_statistics__Lookups_9, mercury__table_statistics__LookupsIsDupl_10);
                }
#line 833 "table_statistics.m"
                mercury__table_statistics__succeeded = (mercury__table_statistics__Lookups_9 > (MR_Integer) 0);
#line 838 "table_statistics.m"
                if (mercury__table_statistics__succeeded)
#line 834 "table_statistics.m"
                  {
#line 834 "table_statistics.m"
                    mercury__table_statistics__write_table_step_stats_hash_11_p_0(mercury__table_statistics__HashTableAllocs_16, mercury__table_statistics__HashTableBytes_17, mercury__table_statistics__HashLinkChunkAllocs_18, mercury__table_statistics__HashLinkChunkBytes_19, mercury__table_statistics__HashKeyComparesNotDupl_20, mercury__table_statistics__HashKeyComparesIsDupl_21, mercury__table_statistics__HashResizes_22, mercury__table_statistics__HashResizeOldEntries_23, mercury__table_statistics__HashResizeNewEntries_24);
#line 834 "table_statistics.m"
                    return;
                  }
#line 838 "table_statistics.m"
                else
#line 838 "table_statistics.m"
                  {
#line 838 "table_statistics.m"
                  }
#line 830 "table_statistics.m"
              }
#line 808 "table_statistics.m"
            else
#line 860 "table_statistics.m"
              {
#line 860 "table_statistics.m"
                MR_Integer mercury__table_statistics__DuNodeAllocs_85 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_11, (MR_Integer) 1)));
#line 860 "table_statistics.m"
                MR_Integer mercury__table_statistics__DuNodeBytes_86 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_11, (MR_Integer) 2)));
#line 860 "table_statistics.m"
                MR_Integer mercury__table_statistics__DuArgLookups_87 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_11, (MR_Integer) 3)));
#line 860 "table_statistics.m"
                MR_Integer mercury__table_statistics__DuExistLookups_88 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_11, (MR_Integer) 4)));
#line 860 "table_statistics.m"
                MR_Integer mercury__table_statistics__EnumNodeAllocs_98 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_11, (MR_Integer) 5)));
#line 860 "table_statistics.m"
                MR_Integer mercury__table_statistics__EnumNodeBytes_99 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_11, (MR_Integer) 6)));
#line 860 "table_statistics.m"
                MR_Integer mercury__table_statistics__HashTableAllocs_100 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_11, (MR_Integer) 7)));
#line 860 "table_statistics.m"
                MR_Integer mercury__table_statistics__HashTableBytes_101 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_11, (MR_Integer) 8)));
#line 860 "table_statistics.m"
                MR_Integer mercury__table_statistics__HashLinkChunkAllocs_102 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_11, (MR_Integer) 9)));
#line 860 "table_statistics.m"
                MR_Integer mercury__table_statistics__HashLinkChunkBytes_103 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_11, (MR_Integer) 10)));
#line 860 "table_statistics.m"
                MR_Integer mercury__table_statistics__HashKeyComparesNotDupl_104 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_11, (MR_Integer) 11)));
#line 860 "table_statistics.m"
                MR_Integer mercury__table_statistics__HashKeyComparesIsDupl_105 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_11, (MR_Integer) 12)));
#line 860 "table_statistics.m"
                MR_Integer mercury__table_statistics__HashResizes_106 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_11, (MR_Integer) 13)));
#line 860 "table_statistics.m"
                MR_Integer mercury__table_statistics__HashResizeOldEntries_107 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_11, (MR_Integer) 14)));
#line 860 "table_statistics.m"
                MR_Integer mercury__table_statistics__HashResizeNewEntries_108 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_11, (MR_Integer) 15)));

#line 861 "table_statistics.m"
                {
#line 861 "table_statistics.m"
                  mercury__table_statistics__write_table_step_stats_header_7_p_0(mercury__table_statistics__VarName_8, mercury__table_statistics__StepNum_6, (MR_String) "polymorphic table", mercury__table_statistics__Lookups_9, mercury__table_statistics__LookupsIsDupl_10);
                }
#line 863 "table_statistics.m"
                mercury__table_statistics__succeeded = (mercury__table_statistics__Lookups_9 > (MR_Integer) 0);
#line 889 "table_statistics.m"
                if (mercury__table_statistics__succeeded)
#line 874 "table_statistics.m"
                  {
#line 864 "table_statistics.m"
                    mercury__table_statistics__succeeded = (mercury__table_statistics__DuNodeAllocs_85 > (MR_Integer) 0);
#line 867 "table_statistics.m"
                    if (mercury__table_statistics__succeeded)
#line 865 "table_statistics.m"
                      {
#line 865 "table_statistics.m"
                        mercury__table_statistics__write_table_step_stats_du_6_p_0(mercury__table_statistics__DuNodeAllocs_85, mercury__table_statistics__DuNodeBytes_86, mercury__table_statistics__DuArgLookups_87, mercury__table_statistics__DuExistLookups_88);
                      }
#line 867 "table_statistics.m"
                    else
#line 870 "table_statistics.m"
                      {
#line 870 "table_statistics.m"
                      }
#line 875 "table_statistics.m"
                    mercury__table_statistics__succeeded = (mercury__table_statistics__EnumNodeAllocs_98 > (MR_Integer) 0);
#line 877 "table_statistics.m"
                    if (mercury__table_statistics__succeeded)
#line 876 "table_statistics.m"
                      {
#line 876 "table_statistics.m"
                        mercury__table_statistics__write_table_step_stats_enum_4_p_0(mercury__table_statistics__EnumNodeAllocs_98, mercury__table_statistics__EnumNodeBytes_99);
                      }
#line 877 "table_statistics.m"
                    else
#line 877 "table_statistics.m"
                      {
#line 877 "table_statistics.m"
                      }
#line 880 "table_statistics.m"
                    mercury__table_statistics__succeeded = (mercury__table_statistics__HashTableAllocs_100 > (MR_Integer) 0);
#line 886 "table_statistics.m"
                    if (mercury__table_statistics__succeeded)
#line 881 "table_statistics.m"
                      {
#line 881 "table_statistics.m"
                        mercury__table_statistics__write_table_step_stats_hash_11_p_0(mercury__table_statistics__HashTableAllocs_100, mercury__table_statistics__HashTableBytes_101, mercury__table_statistics__HashLinkChunkAllocs_102, mercury__table_statistics__HashLinkChunkBytes_103, mercury__table_statistics__HashKeyComparesNotDupl_104, mercury__table_statistics__HashKeyComparesIsDupl_105, mercury__table_statistics__HashResizes_106, mercury__table_statistics__HashResizeOldEntries_107, mercury__table_statistics__HashResizeNewEntries_108);
#line 881 "table_statistics.m"
                        return;
                      }
#line 886 "table_statistics.m"
                    else
#line 886 "table_statistics.m"
                      {
#line 886 "table_statistics.m"
                      }
#line 874 "table_statistics.m"
                  }
#line 889 "table_statistics.m"
                else
#line 889 "table_statistics.m"
                  {
#line 889 "table_statistics.m"
                  }
#line 860 "table_statistics.m"
              }
#line 802 "table_statistics.m"
  }
#line 799 "table_statistics.m"
}

#line 777 "table_statistics.m"
static void MR_CALL 
mercury__table_statistics__write_table_step_stats_du_6_p_0(
#line 777 "table_statistics.m"
  MR_Integer mercury__table_statistics__DuNodeAllocs_7,
#line 777 "table_statistics.m"
  MR_Integer mercury__table_statistics__DuNodeBytes_8,
#line 777 "table_statistics.m"
  MR_Integer mercury__table_statistics__DuArgLookups_9,
#line 777 "table_statistics.m"
  MR_Integer mercury__table_statistics__DuExistLookups_10)
#line 777 "table_statistics.m"
{
#line 781 "table_statistics.m"
  {
#line 781 "table_statistics.m"
    MR_bool mercury__table_statistics__succeeded;
#line 781 "table_statistics.m"
    MR_String mercury__table_statistics__DuNodeAllocsStr_12;
#line 781 "table_statistics.m"
    MR_String mercury__table_statistics__DuNodeBytesStr_13;
#line 781 "table_statistics.m"
    MR_String mercury__table_statistics__DuArgLookupsStr_14;
#line 781 "table_statistics.m"
    MR_String mercury__table_statistics__DuExistLookupsStr_15;
#line 781 "table_statistics.m"
    MR_String mercury__table_statistics__V_42_42;
#line 781 "table_statistics.m"
    MR_Word mercury__table_statistics__V_48_48;
#line 781 "table_statistics.m"
    MR_String mercury__table_statistics__V_54_54;
#line 781 "table_statistics.m"
    MR_String mercury__table_statistics__V_66_66;

#line 711 "string.opt"
    {
#line 711 "string.opt"
      mercury__table_statistics__DuNodeAllocsStr_12 = mercury__string__int_to_base_string_group_4_f_0(mercury__table_statistics__DuNodeAllocs_7, (MR_Integer) 10, (MR_Integer) 3, (MR_String) ",");
    }
#line 711 "string.opt"
    {
#line 711 "string.opt"
      mercury__table_statistics__DuNodeBytesStr_13 = mercury__string__int_to_base_string_group_4_f_0(mercury__table_statistics__DuNodeBytes_8, (MR_Integer) 10, (MR_Integer) 3, (MR_String) ",");
    }
#line 784 "table_statistics.m"
    {
#line 784 "table_statistics.m"
      mercury__table_statistics__DuArgLookupsStr_14 = mercury__string__int_to_string_thousands_1_f_0(mercury__table_statistics__DuArgLookups_9);
    }
#line 785 "table_statistics.m"
    {
#line 785 "table_statistics.m"
      mercury__table_statistics__DuExistLookupsStr_15 = mercury__string__int_to_string_thousands_1_f_0(mercury__table_statistics__DuExistLookups_10);
    }
#line 542 "io.opt"
{
#define MR_PROC_LABEL mercury__table_statistics__write_table_step_stats_du_6_p_0

	MR_String Message;

	Message =  (MR_String) "  number of du functor node allocations:      " ;
		{
#line 542 "io.opt"

    mercury_print_string(mercury_current_text_output(), Message);

#line 6706 "table_statistics.c"

		;}
#undef MR_PROC_LABEL
#line 542 "io.opt"
}
#line 6712 "table_statistics.c"
    mercury__table_statistics__V_48_48 = (MR_Word) &mercury__table_statistics_scalar_common_5[0];
#line 787 "table_statistics.m"
    {
#line 787 "table_statistics.m"
      mercury__string__format__format_string_component_width_noprec_4_p_0(mercury__table_statistics__V_48_48, (MR_Integer) 9, mercury__table_statistics__DuNodeAllocsStr_12, &mercury__table_statistics__V_42_42);
    }
#line 542 "io.opt"
{
#define MR_PROC_LABEL mercury__table_statistics__write_table_step_stats_du_6_p_0

	MR_String Message;

	Message =  mercury__table_statistics__V_42_42 ;
		{
#line 542 "io.opt"

    mercury_print_string(mercury_current_text_output(), Message);

#line 6731 "table_statistics.c"

		;}
#undef MR_PROC_LABEL
#line 542 "io.opt"
}
#line 542 "io.opt"
{
#define MR_PROC_LABEL mercury__table_statistics__write_table_step_stats_du_6_p_0

	MR_String Message;

	Message =  (MR_String) "\n" ;
		{
#line 542 "io.opt"

    mercury_print_string(mercury_current_text_output(), Message);

#line 6749 "table_statistics.c"

		;}
#undef MR_PROC_LABEL
#line 542 "io.opt"
}
#line 542 "io.opt"
{
#define MR_PROC_LABEL mercury__table_statistics__write_table_step_stats_du_6_p_0

	MR_String Message;

	Message =  (MR_String) "  number of bytes allocated for du functors:  " ;
		{
#line 542 "io.opt"

    mercury_print_string(mercury_current_text_output(), Message);

#line 6767 "table_statistics.c"

		;}
#undef MR_PROC_LABEL
#line 542 "io.opt"
}
#line 789 "table_statistics.m"
    {
#line 789 "table_statistics.m"
      mercury__string__format__format_string_component_width_noprec_4_p_0(mercury__table_statistics__V_48_48, (MR_Integer) 9, mercury__table_statistics__DuNodeBytesStr_13, &mercury__table_statistics__V_54_54);
    }
#line 542 "io.opt"
{
#define MR_PROC_LABEL mercury__table_statistics__write_table_step_stats_du_6_p_0

	MR_String Message;

	Message =  mercury__table_statistics__V_54_54 ;
		{
#line 542 "io.opt"

    mercury_print_string(mercury_current_text_output(), Message);

#line 6790 "table_statistics.c"

		;}
#undef MR_PROC_LABEL
#line 542 "io.opt"
}
#line 542 "io.opt"
{
#define MR_PROC_LABEL mercury__table_statistics__write_table_step_stats_du_6_p_0

	MR_String Message;

	Message =  (MR_String) "\n" ;
		{
#line 542 "io.opt"

    mercury_print_string(mercury_current_text_output(), Message);

#line 6808 "table_statistics.c"

		;}
#undef MR_PROC_LABEL
#line 542 "io.opt"
}
#line 542 "io.opt"
{
#define MR_PROC_LABEL mercury__table_statistics__write_table_step_stats_du_6_p_0

	MR_String Message;

	Message =  (MR_String) "  number of du functor argument lookups:      " ;
		{
#line 542 "io.opt"

    mercury_print_string(mercury_current_text_output(), Message);

#line 6826 "table_statistics.c"

		;}
#undef MR_PROC_LABEL
#line 542 "io.opt"
}
#line 791 "table_statistics.m"
    {
#line 791 "table_statistics.m"
      mercury__string__format__format_string_component_width_noprec_4_p_0(mercury__table_statistics__V_48_48, (MR_Integer) 9, mercury__table_statistics__DuArgLookupsStr_14, &mercury__table_statistics__V_66_66);
    }
#line 542 "io.opt"
{
#define MR_PROC_LABEL mercury__table_statistics__write_table_step_stats_du_6_p_0

	MR_String Message;

	Message =  mercury__table_statistics__V_66_66 ;
		{
#line 542 "io.opt"

    mercury_print_string(mercury_current_text_output(), Message);

#line 6849 "table_statistics.c"

		;}
#undef MR_PROC_LABEL
#line 542 "io.opt"
}
#line 542 "io.opt"
{
#define MR_PROC_LABEL mercury__table_statistics__write_table_step_stats_du_6_p_0

	MR_String Message;

	Message =  (MR_String) "\n" ;
		{
#line 542 "io.opt"

    mercury_print_string(mercury_current_text_output(), Message);

#line 6867 "table_statistics.c"

		;}
#undef MR_PROC_LABEL
#line 542 "io.opt"
}
#line 792 "table_statistics.m"
    mercury__table_statistics__succeeded = (mercury__table_statistics__DuExistLookups_10 > (MR_Integer) 0);
#line 795 "table_statistics.m"
    if (mercury__table_statistics__succeeded)
#line 793 "table_statistics.m"
      {
#line 793 "table_statistics.m"
        MR_String mercury__table_statistics__V_78_78;

#line 542 "io.opt"
{
#define MR_PROC_LABEL mercury__table_statistics__write_table_step_stats_du_6_p_0

	MR_String Message;

	Message =  (MR_String) "  number of du existential type lookups:      " ;
		{
#line 542 "io.opt"

    mercury_print_string(mercury_current_text_output(), Message);

#line 6894 "table_statistics.c"

		;}
#undef MR_PROC_LABEL
#line 542 "io.opt"
}
#line 794 "table_statistics.m"
        {
#line 794 "table_statistics.m"
          mercury__string__format__format_string_component_width_noprec_4_p_0(mercury__table_statistics__V_48_48, (MR_Integer) 9, mercury__table_statistics__DuExistLookupsStr_15, &mercury__table_statistics__V_78_78);
        }
#line 542 "io.opt"
{
#define MR_PROC_LABEL mercury__table_statistics__write_table_step_stats_du_6_p_0

	MR_String Message;

	Message =  mercury__table_statistics__V_78_78 ;
		{
#line 542 "io.opt"

    mercury_print_string(mercury_current_text_output(), Message);

#line 6917 "table_statistics.c"

		;}
#undef MR_PROC_LABEL
#line 542 "io.opt"
}
#line 542 "io.opt"
{
#define MR_PROC_LABEL mercury__table_statistics__write_table_step_stats_du_6_p_0

	MR_String Message;

	Message =  (MR_String) "\n" ;
		{
#line 542 "io.opt"

    mercury_print_string(mercury_current_text_output(), Message);

#line 6935 "table_statistics.c"

		;}
#undef MR_PROC_LABEL
#line 542 "io.opt"
}
#line 793 "table_statistics.m"
      }
#line 795 "table_statistics.m"
    else
#line 795 "table_statistics.m"
      {
#line 795 "table_statistics.m"
      }
#line 781 "table_statistics.m"
  }
#line 777 "table_statistics.m"
}

#line 729 "table_statistics.m"
static void MR_CALL 
mercury__table_statistics__write_table_step_stats_hash_11_p_0(
#line 729 "table_statistics.m"
  MR_Integer mercury__table_statistics__HashTableAllocs_12,
#line 729 "table_statistics.m"
  MR_Integer mercury__table_statistics__HashTableBytes_13,
#line 729 "table_statistics.m"
  MR_Integer mercury__table_statistics__HashLinkChunkAllocs_14,
#line 729 "table_statistics.m"
  MR_Integer mercury__table_statistics__HashLinkChunkBytes_15,
#line 729 "table_statistics.m"
  MR_Integer mercury__table_statistics__HashKeyComparesNotDupl_16,
#line 729 "table_statistics.m"
  MR_Integer mercury__table_statistics__HashKeyComparesIsDupl_17,
#line 729 "table_statistics.m"
  MR_Integer mercury__table_statistics__HashResizes_18,
#line 729 "table_statistics.m"
  MR_Integer mercury__table_statistics__HashResizeOldEntries_19,
#line 729 "table_statistics.m"
  MR_Integer mercury__table_statistics__HashResizeNewEntries_20)
#line 729 "table_statistics.m"
{
#line 735 "table_statistics.m"
  {
#line 735 "table_statistics.m"
    MR_bool mercury__table_statistics__succeeded;
#line 735 "table_statistics.m"
    MR_String mercury__table_statistics__HashTableAllocsStr_22;
#line 735 "table_statistics.m"
    MR_String mercury__table_statistics__HashTableBytesStr_23;
#line 735 "table_statistics.m"
    MR_String mercury__table_statistics__HashLinkChunkAllocsStr_24;
#line 735 "table_statistics.m"
    MR_String mercury__table_statistics__HashLinkChunkBytesStr_25;
#line 735 "table_statistics.m"
    MR_String mercury__table_statistics__HashKeyComparesNotDuplStr_26;
#line 735 "table_statistics.m"
    MR_String mercury__table_statistics__HashKeyComparesIsDuplStr_27;
#line 735 "table_statistics.m"
    MR_String mercury__table_statistics__HashResizesStr_28;
#line 735 "table_statistics.m"
    MR_String mercury__table_statistics__HashResizeOldEntriesStr_29;
#line 735 "table_statistics.m"
    MR_String mercury__table_statistics__HashResizeNewEntriesStr_30;
#line 735 "table_statistics.m"
    MR_String mercury__table_statistics__V_82_82;
#line 735 "table_statistics.m"
    MR_Word mercury__table_statistics__V_88_88;
#line 735 "table_statistics.m"
    MR_String mercury__table_statistics__V_94_94;
#line 735 "table_statistics.m"
    MR_String mercury__table_statistics__V_106_106;
#line 735 "table_statistics.m"
    MR_String mercury__table_statistics__V_118_118;
#line 735 "table_statistics.m"
    MR_String mercury__table_statistics__V_130_130;
#line 735 "table_statistics.m"
    MR_String mercury__table_statistics__V_142_142;
#line 735 "table_statistics.m"
    MR_String mercury__table_statistics__V_154_154;

#line 736 "table_statistics.m"
    {
#line 736 "table_statistics.m"
      mercury__table_statistics__HashTableAllocsStr_22 = mercury__string__int_to_string_thousands_1_f_0(mercury__table_statistics__HashTableAllocs_12);
    }
#line 738 "table_statistics.m"
    {
#line 738 "table_statistics.m"
      mercury__table_statistics__HashTableBytesStr_23 = mercury__string__int_to_string_thousands_1_f_0(mercury__table_statistics__HashTableBytes_13);
    }
#line 740 "table_statistics.m"
    {
#line 740 "table_statistics.m"
      mercury__table_statistics__HashLinkChunkAllocsStr_24 = mercury__string__int_to_string_thousands_1_f_0(mercury__table_statistics__HashLinkChunkAllocs_14);
    }
#line 742 "table_statistics.m"
    {
#line 742 "table_statistics.m"
      mercury__table_statistics__HashLinkChunkBytesStr_25 = mercury__string__int_to_string_thousands_1_f_0(mercury__table_statistics__HashLinkChunkBytes_15);
    }
#line 744 "table_statistics.m"
    {
#line 744 "table_statistics.m"
      mercury__table_statistics__HashKeyComparesNotDuplStr_26 = mercury__string__int_to_string_thousands_1_f_0(mercury__table_statistics__HashKeyComparesNotDupl_16);
    }
#line 746 "table_statistics.m"
    {
#line 746 "table_statistics.m"
      mercury__table_statistics__HashKeyComparesIsDuplStr_27 = mercury__string__int_to_string_thousands_1_f_0(mercury__table_statistics__HashKeyComparesIsDupl_17);
    }
#line 748 "table_statistics.m"
    {
#line 748 "table_statistics.m"
      mercury__table_statistics__HashResizesStr_28 = mercury__string__int_to_string_thousands_1_f_0(mercury__table_statistics__HashResizes_18);
    }
#line 750 "table_statistics.m"
    {
#line 750 "table_statistics.m"
      mercury__table_statistics__HashResizeOldEntriesStr_29 = mercury__string__int_to_string_thousands_1_f_0(mercury__table_statistics__HashResizeOldEntries_19);
    }
#line 752 "table_statistics.m"
    {
#line 752 "table_statistics.m"
      mercury__table_statistics__HashResizeNewEntriesStr_30 = mercury__string__int_to_string_thousands_1_f_0(mercury__table_statistics__HashResizeNewEntries_20);
    }
#line 754 "table_statistics.m"
    {
#line 754 "table_statistics.m"
      mercury__io__write_string_3_p_0((MR_String) "  number of hash table allocations:           ");
    }
#line 7066 "table_statistics.c"
    mercury__table_statistics__V_88_88 = (MR_Word) &mercury__table_statistics_scalar_common_5[0];
#line 755 "table_statistics.m"
    {
#line 755 "table_statistics.m"
      mercury__string__format__format_string_component_width_noprec_4_p_0(mercury__table_statistics__V_88_88, (MR_Integer) 9, mercury__table_statistics__HashTableAllocsStr_22, &mercury__table_statistics__V_82_82);
    }
#line 755 "table_statistics.m"
    {
#line 755 "table_statistics.m"
      mercury__io__write_string_3_p_0(mercury__table_statistics__V_82_82);
    }
#line 754 "table_statistics.m"
    {
#line 754 "table_statistics.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 756 "table_statistics.m"
    {
#line 756 "table_statistics.m"
      mercury__io__write_string_3_p_0((MR_String) "  number of bytes allocated for hash tables:  ");
    }
#line 757 "table_statistics.m"
    {
#line 757 "table_statistics.m"
      mercury__string__format__format_string_component_width_noprec_4_p_0(mercury__table_statistics__V_88_88, (MR_Integer) 9, mercury__table_statistics__HashTableBytesStr_23, &mercury__table_statistics__V_94_94);
    }
#line 757 "table_statistics.m"
    {
#line 757 "table_statistics.m"
      mercury__io__write_string_3_p_0(mercury__table_statistics__V_94_94);
    }
#line 756 "table_statistics.m"
    {
#line 756 "table_statistics.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 758 "table_statistics.m"
    {
#line 758 "table_statistics.m"
      mercury__io__write_string_3_p_0((MR_String) "  number of bulk hash link allocations:       ");
    }
#line 759 "table_statistics.m"
    {
#line 759 "table_statistics.m"
      mercury__string__format__format_string_component_width_noprec_4_p_0(mercury__table_statistics__V_88_88, (MR_Integer) 9, mercury__table_statistics__HashLinkChunkAllocsStr_24, &mercury__table_statistics__V_106_106);
    }
#line 759 "table_statistics.m"
    {
#line 759 "table_statistics.m"
      mercury__io__write_string_3_p_0(mercury__table_statistics__V_106_106);
    }
#line 758 "table_statistics.m"
    {
#line 758 "table_statistics.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 760 "table_statistics.m"
    {
#line 760 "table_statistics.m"
      mercury__io__write_string_3_p_0((MR_String) "  number of bytes allocated for hash links:   ");
    }
#line 761 "table_statistics.m"
    {
#line 761 "table_statistics.m"
      mercury__string__format__format_string_component_width_noprec_4_p_0(mercury__table_statistics__V_88_88, (MR_Integer) 9, mercury__table_statistics__HashLinkChunkBytesStr_25, &mercury__table_statistics__V_118_118);
    }
#line 761 "table_statistics.m"
    {
#line 761 "table_statistics.m"
      mercury__io__write_string_3_p_0(mercury__table_statistics__V_118_118);
    }
#line 760 "table_statistics.m"
    {
#line 760 "table_statistics.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 762 "table_statistics.m"
    {
#line 762 "table_statistics.m"
      mercury__io__write_string_3_p_0((MR_String) "  number of key compares when unsuccessful:   ");
    }
#line 763 "table_statistics.m"
    {
#line 763 "table_statistics.m"
      mercury__string__format__format_string_component_width_noprec_4_p_0(mercury__table_statistics__V_88_88, (MR_Integer) 9, mercury__table_statistics__HashKeyComparesNotDuplStr_26, &mercury__table_statistics__V_130_130);
    }
#line 763 "table_statistics.m"
    {
#line 763 "table_statistics.m"
      mercury__io__write_string_3_p_0(mercury__table_statistics__V_130_130);
    }
#line 762 "table_statistics.m"
    {
#line 762 "table_statistics.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 764 "table_statistics.m"
    {
#line 764 "table_statistics.m"
      mercury__io__write_string_3_p_0((MR_String) "  number of key compares when successful:     ");
    }
#line 765 "table_statistics.m"
    {
#line 765 "table_statistics.m"
      mercury__string__format__format_string_component_width_noprec_4_p_0(mercury__table_statistics__V_88_88, (MR_Integer) 9, mercury__table_statistics__HashKeyComparesIsDuplStr_27, &mercury__table_statistics__V_142_142);
    }
#line 765 "table_statistics.m"
    {
#line 765 "table_statistics.m"
      mercury__io__write_string_3_p_0(mercury__table_statistics__V_142_142);
    }
#line 764 "table_statistics.m"
    {
#line 764 "table_statistics.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 766 "table_statistics.m"
    {
#line 766 "table_statistics.m"
      mercury__io__write_string_3_p_0((MR_String) "  number of hash table resizes:               ");
    }
#line 767 "table_statistics.m"
    {
#line 767 "table_statistics.m"
      mercury__string__format__format_string_component_width_noprec_4_p_0(mercury__table_statistics__V_88_88, (MR_Integer) 9, mercury__table_statistics__HashResizesStr_28, &mercury__table_statistics__V_154_154);
    }
#line 767 "table_statistics.m"
    {
#line 767 "table_statistics.m"
      mercury__io__write_string_3_p_0(mercury__table_statistics__V_154_154);
    }
#line 766 "table_statistics.m"
    {
#line 766 "table_statistics.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 768 "table_statistics.m"
    mercury__table_statistics__succeeded = (mercury__table_statistics__HashResizes_18 > (MR_Integer) 0);
#line 773 "table_statistics.m"
    if (mercury__table_statistics__succeeded)
#line 770 "table_statistics.m"
      {
#line 770 "table_statistics.m"
        MR_String mercury__table_statistics__V_166_166;
#line 770 "table_statistics.m"
        MR_String mercury__table_statistics__V_178_178;

#line 769 "table_statistics.m"
        {
#line 769 "table_statistics.m"
          mercury__io__write_string_3_p_0((MR_String) "  number of old entries in resizes:           ");
        }
#line 770 "table_statistics.m"
        {
#line 770 "table_statistics.m"
          mercury__string__format__format_string_component_width_noprec_4_p_0(mercury__table_statistics__V_88_88, (MR_Integer) 9, mercury__table_statistics__HashResizeOldEntriesStr_29, &mercury__table_statistics__V_166_166);
        }
#line 770 "table_statistics.m"
        {
#line 770 "table_statistics.m"
          mercury__io__write_string_3_p_0(mercury__table_statistics__V_166_166);
        }
#line 769 "table_statistics.m"
        {
#line 769 "table_statistics.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 771 "table_statistics.m"
        {
#line 771 "table_statistics.m"
          mercury__io__write_string_3_p_0((MR_String) "  number of new entries in resizes:           ");
        }
#line 772 "table_statistics.m"
        {
#line 772 "table_statistics.m"
          mercury__string__format__format_string_component_width_noprec_4_p_0(mercury__table_statistics__V_88_88, (MR_Integer) 9, mercury__table_statistics__HashResizeNewEntriesStr_30, &mercury__table_statistics__V_178_178);
        }
#line 772 "table_statistics.m"
        {
#line 772 "table_statistics.m"
          mercury__io__write_string_3_p_0(mercury__table_statistics__V_178_178);
        }
#line 771 "table_statistics.m"
        {
#line 771 "table_statistics.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
#line 771 "table_statistics.m"
          return;
        }
#line 770 "table_statistics.m"
      }
#line 773 "table_statistics.m"
    else
#line 773 "table_statistics.m"
      {
#line 773 "table_statistics.m"
      }
#line 735 "table_statistics.m"
  }
#line 729 "table_statistics.m"
}

#line 719 "table_statistics.m"
static void MR_CALL 
mercury__table_statistics__write_table_step_stats_enum_4_p_0(
#line 719 "table_statistics.m"
  MR_Integer mercury__table_statistics__EnumNodeAllocs_5,
#line 719 "table_statistics.m"
  MR_Integer mercury__table_statistics__EnumNodeBytes_6)
#line 719 "table_statistics.m"
{
#line 721 "table_statistics.m"
  {
#line 721 "table_statistics.m"
    MR_bool mercury__table_statistics__succeeded;
#line 721 "table_statistics.m"
    MR_String mercury__table_statistics__EnumNodeAllocsStr_8;
#line 721 "table_statistics.m"
    MR_String mercury__table_statistics__EnumNodeBytesStr_9;
#line 721 "table_statistics.m"
    MR_String mercury__table_statistics__V_25_25;
#line 721 "table_statistics.m"
    MR_Word mercury__table_statistics__V_31_31;
#line 721 "table_statistics.m"
    MR_String mercury__table_statistics__V_37_37;
#line 721 "table_statistics.m"
    MR_Word mercury__table_statistics__MaybePrec_10_61;
#line 721 "table_statistics.m"
    MR_Word mercury__table_statistics__MaybeWidth_9_66;
#line 721 "table_statistics.m"
    MR_Word mercury__table_statistics__MaybePrec_10_67;

#line 711 "string.opt"
    {
#line 711 "string.opt"
      mercury__table_statistics__EnumNodeAllocsStr_8 = mercury__string__int_to_base_string_group_4_f_0(mercury__table_statistics__EnumNodeAllocs_5, (MR_Integer) 10, (MR_Integer) 3, (MR_String) ",");
    }
#line 711 "string.opt"
    {
#line 711 "string.opt"
      mercury__table_statistics__EnumNodeBytesStr_9 = mercury__string__int_to_base_string_group_4_f_0(mercury__table_statistics__EnumNodeBytes_6, (MR_Integer) 10, (MR_Integer) 3, (MR_String) ",");
    }
#line 542 "io.opt"
{
#define MR_PROC_LABEL mercury__table_statistics__write_table_step_stats_enum_4_p_0

	MR_String Message;

	Message =  (MR_String) "  number of enum node allocations:            " ;
		{
#line 542 "io.opt"

    mercury_print_string(mercury_current_text_output(), Message);

#line 7321 "table_statistics.c"

		;}
#undef MR_PROC_LABEL
#line 542 "io.opt"
}
#line 7327 "table_statistics.c"
    mercury__table_statistics__V_31_31 = (MR_Word) &mercury__table_statistics_scalar_common_5[0];
#line 28 "string.format.opt"
    mercury__table_statistics__MaybeWidth_9_66 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__table_statistics_scalar_common_5[1]);
#line 29 "string.format.opt"
    mercury__table_statistics__MaybePrec_10_61 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 30 "string.format.opt"
    {
#line 30 "string.format.opt"
      mercury__string__format__format_string_component_5_p_0(mercury__table_statistics__V_31_31, mercury__table_statistics__MaybeWidth_9_66, mercury__table_statistics__MaybePrec_10_61, mercury__table_statistics__EnumNodeAllocsStr_8, &mercury__table_statistics__V_25_25);
    }
#line 542 "io.opt"
{
#define MR_PROC_LABEL mercury__table_statistics__write_table_step_stats_enum_4_p_0

	MR_String Message;

	Message =  mercury__table_statistics__V_25_25 ;
		{
#line 542 "io.opt"

    mercury_print_string(mercury_current_text_output(), Message);

#line 7350 "table_statistics.c"

		;}
#undef MR_PROC_LABEL
#line 542 "io.opt"
}
#line 542 "io.opt"
{
#define MR_PROC_LABEL mercury__table_statistics__write_table_step_stats_enum_4_p_0

	MR_String Message;

	Message =  (MR_String) "\n" ;
		{
#line 542 "io.opt"

    mercury_print_string(mercury_current_text_output(), Message);

#line 7368 "table_statistics.c"

		;}
#undef MR_PROC_LABEL
#line 542 "io.opt"
}
#line 542 "io.opt"
{
#define MR_PROC_LABEL mercury__table_statistics__write_table_step_stats_enum_4_p_0

	MR_String Message;

	Message =  (MR_String) "  number of bytes allocated for enum nodes:   " ;
		{
#line 542 "io.opt"

    mercury_print_string(mercury_current_text_output(), Message);

#line 7386 "table_statistics.c"

		;}
#undef MR_PROC_LABEL
#line 542 "io.opt"
}
#line 29 "string.format.opt"
    mercury__table_statistics__MaybePrec_10_67 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 30 "string.format.opt"
    {
#line 30 "string.format.opt"
      mercury__string__format__format_string_component_5_p_0(mercury__table_statistics__V_31_31, mercury__table_statistics__MaybeWidth_9_66, mercury__table_statistics__MaybePrec_10_67, mercury__table_statistics__EnumNodeBytesStr_9, &mercury__table_statistics__V_37_37);
    }
#line 542 "io.opt"
{
#define MR_PROC_LABEL mercury__table_statistics__write_table_step_stats_enum_4_p_0

	MR_String Message;

	Message =  mercury__table_statistics__V_37_37 ;
		{
#line 542 "io.opt"

    mercury_print_string(mercury_current_text_output(), Message);

#line 7411 "table_statistics.c"

		;}
#undef MR_PROC_LABEL
#line 542 "io.opt"
}
#line 542 "io.opt"
{
#define MR_PROC_LABEL mercury__table_statistics__write_table_step_stats_enum_4_p_0

	MR_String Message;

	Message =  (MR_String) "\n" ;
		{
#line 542 "io.opt"

    mercury_print_string(mercury_current_text_output(), Message);

#line 7429 "table_statistics.c"

		;}
#undef MR_PROC_LABEL
#line 542 "io.opt"
}
#line 721 "table_statistics.m"
  }
#line 719 "table_statistics.m"
}

#line 709 "table_statistics.m"
static void MR_CALL 
mercury__table_statistics__write_table_step_stats_start_4_p_0(
#line 709 "table_statistics.m"
  MR_Integer mercury__table_statistics__StartAllocs_5,
#line 709 "table_statistics.m"
  MR_Integer mercury__table_statistics__StartBytes_6)
#line 709 "table_statistics.m"
{
#line 711 "table_statistics.m"
  {
#line 711 "table_statistics.m"
    MR_bool mercury__table_statistics__succeeded;
#line 711 "table_statistics.m"
    MR_String mercury__table_statistics__StartAllocsStr_8;
#line 711 "table_statistics.m"
    MR_String mercury__table_statistics__StartBytesStr_9;
#line 711 "table_statistics.m"
    MR_String mercury__table_statistics__V_25_25;
#line 711 "table_statistics.m"
    MR_Word mercury__table_statistics__V_31_31;
#line 711 "table_statistics.m"
    MR_String mercury__table_statistics__V_37_37;
#line 711 "table_statistics.m"
    MR_Word mercury__table_statistics__MaybePrec_10_61;
#line 711 "table_statistics.m"
    MR_Word mercury__table_statistics__MaybeWidth_9_66;
#line 711 "table_statistics.m"
    MR_Word mercury__table_statistics__MaybePrec_10_67;

#line 711 "string.opt"
    {
#line 711 "string.opt"
      mercury__table_statistics__StartAllocsStr_8 = mercury__string__int_to_base_string_group_4_f_0(mercury__table_statistics__StartAllocs_5, (MR_Integer) 10, (MR_Integer) 3, (MR_String) ",");
    }
#line 711 "string.opt"
    {
#line 711 "string.opt"
      mercury__table_statistics__StartBytesStr_9 = mercury__string__int_to_base_string_group_4_f_0(mercury__table_statistics__StartBytes_6, (MR_Integer) 10, (MR_Integer) 3, (MR_String) ",");
    }
#line 542 "io.opt"
{
#define MR_PROC_LABEL mercury__table_statistics__write_table_step_stats_start_4_p_0

	MR_String Message;

	Message =  (MR_String) "  number of array (re)allocations:            " ;
		{
#line 542 "io.opt"

    mercury_print_string(mercury_current_text_output(), Message);

#line 7492 "table_statistics.c"

		;}
#undef MR_PROC_LABEL
#line 542 "io.opt"
}
#line 7498 "table_statistics.c"
    mercury__table_statistics__V_31_31 = (MR_Word) &mercury__table_statistics_scalar_common_5[0];
#line 28 "string.format.opt"
    mercury__table_statistics__MaybeWidth_9_66 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__table_statistics_scalar_common_5[1]);
#line 29 "string.format.opt"
    mercury__table_statistics__MaybePrec_10_61 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 30 "string.format.opt"
    {
#line 30 "string.format.opt"
      mercury__string__format__format_string_component_5_p_0(mercury__table_statistics__V_31_31, mercury__table_statistics__MaybeWidth_9_66, mercury__table_statistics__MaybePrec_10_61, mercury__table_statistics__StartAllocsStr_8, &mercury__table_statistics__V_25_25);
    }
#line 542 "io.opt"
{
#define MR_PROC_LABEL mercury__table_statistics__write_table_step_stats_start_4_p_0

	MR_String Message;

	Message =  mercury__table_statistics__V_25_25 ;
		{
#line 542 "io.opt"

    mercury_print_string(mercury_current_text_output(), Message);

#line 7521 "table_statistics.c"

		;}
#undef MR_PROC_LABEL
#line 542 "io.opt"
}
#line 542 "io.opt"
{
#define MR_PROC_LABEL mercury__table_statistics__write_table_step_stats_start_4_p_0

	MR_String Message;

	Message =  (MR_String) "\n" ;
		{
#line 542 "io.opt"

    mercury_print_string(mercury_current_text_output(), Message);

#line 7539 "table_statistics.c"

		;}
#undef MR_PROC_LABEL
#line 542 "io.opt"
}
#line 542 "io.opt"
{
#define MR_PROC_LABEL mercury__table_statistics__write_table_step_stats_start_4_p_0

	MR_String Message;

	Message =  (MR_String) "  number of bytes (re)allocationed:           " ;
		{
#line 542 "io.opt"

    mercury_print_string(mercury_current_text_output(), Message);

#line 7557 "table_statistics.c"

		;}
#undef MR_PROC_LABEL
#line 542 "io.opt"
}
#line 29 "string.format.opt"
    mercury__table_statistics__MaybePrec_10_67 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 30 "string.format.opt"
    {
#line 30 "string.format.opt"
      mercury__string__format__format_string_component_5_p_0(mercury__table_statistics__V_31_31, mercury__table_statistics__MaybeWidth_9_66, mercury__table_statistics__MaybePrec_10_67, mercury__table_statistics__StartBytesStr_9, &mercury__table_statistics__V_37_37);
    }
#line 542 "io.opt"
{
#define MR_PROC_LABEL mercury__table_statistics__write_table_step_stats_start_4_p_0

	MR_String Message;

	Message =  mercury__table_statistics__V_37_37 ;
		{
#line 542 "io.opt"

    mercury_print_string(mercury_current_text_output(), Message);

#line 7582 "table_statistics.c"

		;}
#undef MR_PROC_LABEL
#line 542 "io.opt"
}
#line 542 "io.opt"
{
#define MR_PROC_LABEL mercury__table_statistics__write_table_step_stats_start_4_p_0

	MR_String Message;

	Message =  (MR_String) "\n" ;
		{
#line 542 "io.opt"

    mercury_print_string(mercury_current_text_output(), Message);

#line 7600 "table_statistics.c"

		;}
#undef MR_PROC_LABEL
#line 542 "io.opt"
}
#line 711 "table_statistics.m"
  }
#line 709 "table_statistics.m"
}

#line 682 "table_statistics.m"
static void MR_CALL 
mercury__table_statistics__write_table_step_stats_header_7_p_0(
#line 682 "table_statistics.m"
  MR_String mercury__table_statistics__VarName_8,
#line 682 "table_statistics.m"
  MR_Integer mercury__table_statistics__StepNum_9,
#line 682 "table_statistics.m"
  MR_String mercury__table_statistics__KindStr_10,
#line 682 "table_statistics.m"
  MR_Integer mercury__table_statistics__Lookups_11,
#line 682 "table_statistics.m"
  MR_Integer mercury__table_statistics__LookupsIsDupl_12)
#line 682 "table_statistics.m"
{
#line 686 "table_statistics.m"
  {
#line 686 "table_statistics.m"
    MR_bool mercury__table_statistics__succeeded;
#line 686 "table_statistics.m"
    MR_Integer mercury__table_statistics__LookupsNotDupl_14;
#line 686 "table_statistics.m"
    MR_String mercury__table_statistics__LookupsStr_15;
#line 686 "table_statistics.m"
    MR_String mercury__table_statistics__LookupsIsDuplStr_16;
#line 686 "table_statistics.m"
    MR_String mercury__table_statistics__LookupsNotDuplStr_17;
#line 686 "table_statistics.m"
    MR_String mercury__table_statistics__V_54_54;
#line 686 "table_statistics.m"
    MR_Word mercury__table_statistics__V_60_60;
#line 686 "table_statistics.m"
    MR_String mercury__table_statistics__V_64_64;
#line 686 "table_statistics.m"
    MR_String mercury__table_statistics__V_74_74;
#line 686 "table_statistics.m"
    MR_String mercury__table_statistics__V_85_85;

#line 687 "table_statistics.m"
    {
#line 687 "table_statistics.m"
      mercury__io__write_string_3_p_0((MR_String) "\nstep ");
    }
#line 7654 "table_statistics.c"
    mercury__table_statistics__V_60_60 = (MR_Word) &mercury__table_statistics_scalar_common_5[0];
#line 688 "table_statistics.m"
    {
#line 688 "table_statistics.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(mercury__table_statistics__V_60_60, mercury__table_statistics__StepNum_9, &mercury__table_statistics__V_54_54);
    }
#line 688 "table_statistics.m"
    {
#line 688 "table_statistics.m"
      mercury__io__write_string_3_p_0(mercury__table_statistics__V_54_54);
    }
#line 687 "table_statistics.m"
    {
#line 687 "table_statistics.m"
      mercury__io__write_string_3_p_0((MR_String) ", variable ");
    }
#line 688 "table_statistics.m"
    {
#line 688 "table_statistics.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mercury__table_statistics__V_60_60, mercury__table_statistics__VarName_8, &mercury__table_statistics__V_64_64);
    }
#line 688 "table_statistics.m"
    {
#line 688 "table_statistics.m"
      mercury__io__write_string_3_p_0(mercury__table_statistics__V_64_64);
    }
#line 687 "table_statistics.m"
    {
#line 687 "table_statistics.m"
      mercury__io__write_string_3_p_0((MR_String) ": ");
    }
#line 688 "table_statistics.m"
    {
#line 688 "table_statistics.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mercury__table_statistics__V_60_60, mercury__table_statistics__KindStr_10, &mercury__table_statistics__V_74_74);
    }
#line 688 "table_statistics.m"
    {
#line 688 "table_statistics.m"
      mercury__io__write_string_3_p_0(mercury__table_statistics__V_74_74);
    }
#line 687 "table_statistics.m"
    {
#line 687 "table_statistics.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 690 "table_statistics.m"
    mercury__table_statistics__LookupsNotDupl_14 = (mercury__table_statistics__Lookups_11 - mercury__table_statistics__LookupsIsDupl_12);
#line 691 "table_statistics.m"
    {
#line 691 "table_statistics.m"
      mercury__table_statistics__LookupsStr_15 = mercury__string__int_to_string_thousands_1_f_0(mercury__table_statistics__Lookups_11);
    }
#line 692 "table_statistics.m"
    {
#line 692 "table_statistics.m"
      mercury__table_statistics__LookupsIsDuplStr_16 = mercury__string__int_to_string_thousands_1_f_0(mercury__table_statistics__LookupsIsDupl_12);
    }
#line 693 "table_statistics.m"
    {
#line 693 "table_statistics.m"
      mercury__table_statistics__LookupsNotDuplStr_17 = mercury__string__int_to_string_thousands_1_f_0(mercury__table_statistics__LookupsNotDupl_14);
    }
#line 695 "table_statistics.m"
    {
#line 695 "table_statistics.m"
      mercury__io__write_string_3_p_0((MR_String) "  number of lookups:                          ");
    }
#line 696 "table_statistics.m"
    {
#line 696 "table_statistics.m"
      mercury__string__format__format_string_component_width_noprec_4_p_0(mercury__table_statistics__V_60_60, (MR_Integer) 9, mercury__table_statistics__LookupsStr_15, &mercury__table_statistics__V_85_85);
    }
#line 696 "table_statistics.m"
    {
#line 696 "table_statistics.m"
      mercury__io__write_string_3_p_0(mercury__table_statistics__V_85_85);
    }
#line 695 "table_statistics.m"
    {
#line 695 "table_statistics.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 697 "table_statistics.m"
    mercury__table_statistics__succeeded = (mercury__table_statistics__Lookups_11 > (MR_Integer) 0);
#line 705 "table_statistics.m"
    if (mercury__table_statistics__succeeded)
#line 698 "table_statistics.m"
      {
#line 698 "table_statistics.m"
        MR_String mercury__table_statistics__FractionIsDuplStr_18;
#line 698 "table_statistics.m"
        MR_String mercury__table_statistics__FractionNotDuplStr_19;
#line 698 "table_statistics.m"
        MR_String mercury__table_statistics__V_97_97;
#line 698 "table_statistics.m"
        MR_String mercury__table_statistics__V_108_108;
#line 698 "table_statistics.m"
        MR_String mercury__table_statistics__V_120_120;
#line 698 "table_statistics.m"
        MR_String mercury__table_statistics__V_131_131;

#line 698 "table_statistics.m"
        {
#line 698 "table_statistics.m"
          mercury__table_statistics__FractionIsDuplStr_18 = mercury__table_statistics__percentage_str_2_f_0(mercury__table_statistics__LookupsIsDupl_12, mercury__table_statistics__Lookups_11);
        }
#line 699 "table_statistics.m"
        {
#line 699 "table_statistics.m"
          mercury__table_statistics__FractionNotDuplStr_19 = mercury__table_statistics__percentage_str_2_f_0(mercury__table_statistics__LookupsNotDupl_14, mercury__table_statistics__Lookups_11);
        }
#line 701 "table_statistics.m"
        {
#line 701 "table_statistics.m"
          mercury__io__write_string_3_p_0((MR_String) "  number of successful lookups:               ");
        }
#line 702 "table_statistics.m"
        {
#line 702 "table_statistics.m"
          mercury__string__format__format_string_component_width_noprec_4_p_0(mercury__table_statistics__V_60_60, (MR_Integer) 9, mercury__table_statistics__LookupsIsDuplStr_16, &mercury__table_statistics__V_97_97);
        }
#line 702 "table_statistics.m"
        {
#line 702 "table_statistics.m"
          mercury__io__write_string_3_p_0(mercury__table_statistics__V_97_97);
        }
#line 701 "table_statistics.m"
        {
#line 701 "table_statistics.m"
          mercury__io__write_string_3_p_0((MR_String) " ");
        }
#line 702 "table_statistics.m"
        {
#line 702 "table_statistics.m"
          mercury__string__format__format_string_component_width_noprec_4_p_0(mercury__table_statistics__V_60_60, (MR_Integer) 9, mercury__table_statistics__FractionIsDuplStr_18, &mercury__table_statistics__V_108_108);
        }
#line 702 "table_statistics.m"
        {
#line 702 "table_statistics.m"
          mercury__io__write_string_3_p_0(mercury__table_statistics__V_108_108);
        }
#line 701 "table_statistics.m"
        {
#line 701 "table_statistics.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 703 "table_statistics.m"
        {
#line 703 "table_statistics.m"
          mercury__io__write_string_3_p_0((MR_String) "  number of unsuccessful lookups:             ");
        }
#line 704 "table_statistics.m"
        {
#line 704 "table_statistics.m"
          mercury__string__format__format_string_component_width_noprec_4_p_0(mercury__table_statistics__V_60_60, (MR_Integer) 9, mercury__table_statistics__LookupsNotDuplStr_17, &mercury__table_statistics__V_120_120);
        }
#line 704 "table_statistics.m"
        {
#line 704 "table_statistics.m"
          mercury__io__write_string_3_p_0(mercury__table_statistics__V_120_120);
        }
#line 703 "table_statistics.m"
        {
#line 703 "table_statistics.m"
          mercury__io__write_string_3_p_0((MR_String) " ");
        }
#line 704 "table_statistics.m"
        {
#line 704 "table_statistics.m"
          mercury__string__format__format_string_component_width_noprec_4_p_0(mercury__table_statistics__V_60_60, (MR_Integer) 9, mercury__table_statistics__FractionNotDuplStr_19, &mercury__table_statistics__V_131_131);
        }
#line 704 "table_statistics.m"
        {
#line 704 "table_statistics.m"
          mercury__io__write_string_3_p_0(mercury__table_statistics__V_131_131);
        }
#line 703 "table_statistics.m"
        {
#line 703 "table_statistics.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
#line 703 "table_statistics.m"
          return;
        }
#line 698 "table_statistics.m"
      }
#line 705 "table_statistics.m"
    else
#line 705 "table_statistics.m"
      {
#line 705 "table_statistics.m"
      }
#line 686 "table_statistics.m"
  }
#line 682 "table_statistics.m"
}

#line 555 "table_statistics.m"
static MR_bool MR_CALL 
mercury__table_statistics__table_step_stats_detail_diff_3_p_0(
#line 555 "table_statistics.m"
  MR_Word mercury__table_statistics__DetailsA_4,
#line 555 "table_statistics.m"
  MR_Word mercury__table_statistics__DetailsB_5,
#line 555 "table_statistics.m"
  MR_Word * mercury__table_statistics__DetailsDiff_6)
#line 555 "table_statistics.m"
{
#line 560 "table_statistics.m"
  {
#line 560 "table_statistics.m"
    MR_bool mercury__table_statistics__succeeded;

#line 560 "table_statistics.m"
    if ((mercury__table_statistics__DetailsA_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 560 "table_statistics.m"
      {
#line 561 "table_statistics.m"
        mercury__table_statistics__succeeded = (mercury__table_statistics__DetailsB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 560 "table_statistics.m"
        if (mercury__table_statistics__succeeded)
#line 560 "table_statistics.m"
          {
#line 562 "table_statistics.m"
            *mercury__table_statistics__DetailsDiff_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 562 "table_statistics.m"
            mercury__table_statistics__succeeded = MR_TRUE;
#line 560 "table_statistics.m"
          }
#line 560 "table_statistics.m"
      }
#line 560 "table_statistics.m"
    else
#line 560 "table_statistics.m"
      if (((MR_tag((MR_Word) mercury__table_statistics__DetailsA_4)) == (MR_mktag((MR_Integer) 2))))
#line 569 "table_statistics.m"
        {
#line 569 "table_statistics.m"
          MR_Integer mercury__table_statistics__EnumNodeAllocsA_11 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__table_statistics__DetailsA_4, (MR_Integer) 0)));
#line 569 "table_statistics.m"
          MR_Integer mercury__table_statistics__EnumNodeBytesA_12 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__table_statistics__DetailsA_4, (MR_Integer) 1)));
#line 569 "table_statistics.m"
          MR_Integer mercury__table_statistics__EnumNodeAllocsB_13;
#line 569 "table_statistics.m"
          MR_Integer mercury__table_statistics__EnumNodeBytesB_14;
#line 569 "table_statistics.m"
          MR_Integer mercury__table_statistics__V_80_80;
#line 569 "table_statistics.m"
          MR_Integer mercury__table_statistics__V_81_81;

#line 570 "table_statistics.m"
          mercury__table_statistics__succeeded = ((MR_tag((MR_Word) mercury__table_statistics__DetailsB_5)) == (MR_mktag((MR_Integer) 2)));
#line 570 "table_statistics.m"
          if (mercury__table_statistics__succeeded)
#line 570 "table_statistics.m"
            {
#line 570 "table_statistics.m"
              mercury__table_statistics__EnumNodeAllocsB_13 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__table_statistics__DetailsB_5, (MR_Integer) 0)));
#line 570 "table_statistics.m"
              mercury__table_statistics__EnumNodeBytesB_14 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__table_statistics__DetailsB_5, (MR_Integer) 1)));
#line 571 "table_statistics.m"
              mercury__table_statistics__V_80_80 = (mercury__table_statistics__EnumNodeAllocsA_11 - mercury__table_statistics__EnumNodeAllocsB_13);
#line 572 "table_statistics.m"
              mercury__table_statistics__V_81_81 = (mercury__table_statistics__EnumNodeBytesA_12 - mercury__table_statistics__EnumNodeBytesB_14);
#line 571 "table_statistics.m"
              {
#line 571 "table_statistics.m"
                MR_Word base;
#line 571 "table_statistics.m"
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 571 "table_statistics.m"
                *mercury__table_statistics__DetailsDiff_6 = base;
#line 571 "table_statistics.m"
                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__table_statistics__V_80_80));
#line 571 "table_statistics.m"
                MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mercury__table_statistics__V_81_81));
#line 571 "table_statistics.m"
              }
#line 571 "table_statistics.m"
              mercury__table_statistics__succeeded = MR_TRUE;
#line 570 "table_statistics.m"
            }
#line 569 "table_statistics.m"
        }
#line 560 "table_statistics.m"
      else
#line 560 "table_statistics.m"
        if (((MR_tag((MR_Word) mercury__table_statistics__DetailsA_4)) == (MR_mktag((MR_Integer) 1))))
#line 564 "table_statistics.m"
          {
#line 564 "table_statistics.m"
            MR_Integer mercury__table_statistics__StartAllocsA_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__table_statistics__DetailsA_4, (MR_Integer) 0)));
#line 564 "table_statistics.m"
            MR_Integer mercury__table_statistics__StartBytesA_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__table_statistics__DetailsA_4, (MR_Integer) 1)));
#line 564 "table_statistics.m"
            MR_Integer mercury__table_statistics__StartAllocsB_9;
#line 564 "table_statistics.m"
            MR_Integer mercury__table_statistics__StartBytesB_10;
#line 564 "table_statistics.m"
            MR_Integer mercury__table_statistics__V_82_82;
#line 564 "table_statistics.m"
            MR_Integer mercury__table_statistics__V_83_83;

#line 565 "table_statistics.m"
            mercury__table_statistics__succeeded = ((MR_tag((MR_Word) mercury__table_statistics__DetailsB_5)) == (MR_mktag((MR_Integer) 1)));
#line 565 "table_statistics.m"
            if (mercury__table_statistics__succeeded)
#line 565 "table_statistics.m"
              {
#line 565 "table_statistics.m"
                mercury__table_statistics__StartAllocsB_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__table_statistics__DetailsB_5, (MR_Integer) 0)));
#line 565 "table_statistics.m"
                mercury__table_statistics__StartBytesB_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__table_statistics__DetailsB_5, (MR_Integer) 1)));
#line 566 "table_statistics.m"
                mercury__table_statistics__V_82_82 = (mercury__table_statistics__StartAllocsA_7 - mercury__table_statistics__StartAllocsB_9);
#line 567 "table_statistics.m"
                mercury__table_statistics__V_83_83 = (mercury__table_statistics__StartBytesA_8 - mercury__table_statistics__StartBytesB_10);
#line 566 "table_statistics.m"
                {
#line 566 "table_statistics.m"
                  MR_Word base;
#line 566 "table_statistics.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 566 "table_statistics.m"
                  *mercury__table_statistics__DetailsDiff_6 = base;
#line 566 "table_statistics.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__table_statistics__V_82_82));
#line 566 "table_statistics.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__table_statistics__V_83_83));
#line 566 "table_statistics.m"
                }
#line 566 "table_statistics.m"
                mercury__table_statistics__succeeded = MR_TRUE;
#line 565 "table_statistics.m"
              }
#line 564 "table_statistics.m"
          }
#line 560 "table_statistics.m"
        else
#line 560 "table_statistics.m"
          if (((((MR_tag((MR_Word) mercury__table_statistics__DetailsA_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsA_4, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 597 "table_statistics.m"
            {
#line 597 "table_statistics.m"
              MR_Integer mercury__table_statistics__DuNodeAllocsA_33 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsA_4, (MR_Integer) 1)));
#line 597 "table_statistics.m"
              MR_Integer mercury__table_statistics__DuNodeBytesA_34 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsA_4, (MR_Integer) 2)));
#line 597 "table_statistics.m"
              MR_Integer mercury__table_statistics__DuArgLookupsA_35 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsA_4, (MR_Integer) 3)));
#line 597 "table_statistics.m"
              MR_Integer mercury__table_statistics__DuExistLookupsA_36 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsA_4, (MR_Integer) 4)));
#line 597 "table_statistics.m"
              MR_Integer mercury__table_statistics__DuNodeAllocsB_37;
#line 597 "table_statistics.m"
              MR_Integer mercury__table_statistics__DuNodeBytesB_38;
#line 597 "table_statistics.m"
              MR_Integer mercury__table_statistics__DuArgLookupsB_39;
#line 597 "table_statistics.m"
              MR_Integer mercury__table_statistics__DuExistLookupsB_40;
#line 597 "table_statistics.m"
              MR_Integer mercury__table_statistics__V_56_56;
#line 597 "table_statistics.m"
              MR_Integer mercury__table_statistics__V_57_57;
#line 597 "table_statistics.m"
              MR_Integer mercury__table_statistics__V_58_58;
#line 597 "table_statistics.m"
              MR_Integer mercury__table_statistics__V_59_59;
#line 597 "table_statistics.m"
              MR_Integer mercury__table_statistics__V_60_60;
#line 597 "table_statistics.m"
              MR_Integer mercury__table_statistics__V_61_61;
#line 597 "table_statistics.m"
              MR_Integer mercury__table_statistics__V_62_62;
#line 597 "table_statistics.m"
              MR_Integer mercury__table_statistics__V_63_63;
#line 597 "table_statistics.m"
              MR_Integer mercury__table_statistics__V_64_64;
#line 597 "table_statistics.m"
              MR_Integer mercury__table_statistics__V_65_65;
#line 597 "table_statistics.m"
              MR_Integer mercury__table_statistics__V_66_66;
#line 597 "table_statistics.m"
              MR_Integer mercury__table_statistics__V_67_67;
#line 597 "table_statistics.m"
              MR_Integer mercury__table_statistics__V_68_68;
#line 597 "table_statistics.m"
              MR_Integer mercury__table_statistics__V_69_69;
#line 597 "table_statistics.m"
              MR_Integer mercury__table_statistics__V_70_70;
#line 597 "table_statistics.m"
              MR_Integer mercury__table_statistics__EnumNodeAllocsA_84 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsA_4, (MR_Integer) 5)));
#line 597 "table_statistics.m"
              MR_Integer mercury__table_statistics__EnumNodeBytesA_85 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsA_4, (MR_Integer) 6)));
#line 597 "table_statistics.m"
              MR_Integer mercury__table_statistics__EnumNodeAllocsB_86;
#line 597 "table_statistics.m"
              MR_Integer mercury__table_statistics__EnumNodeBytesB_87;
#line 597 "table_statistics.m"
              MR_Integer mercury__table_statistics__HashTableAllocsA_88 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsA_4, (MR_Integer) 7)));
#line 597 "table_statistics.m"
              MR_Integer mercury__table_statistics__HashTableBytesA_89 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsA_4, (MR_Integer) 8)));
#line 597 "table_statistics.m"
              MR_Integer mercury__table_statistics__HashLinkChunkAllocsA_90 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsA_4, (MR_Integer) 9)));
#line 597 "table_statistics.m"
              MR_Integer mercury__table_statistics__HashLinkChunkBytesA_91 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsA_4, (MR_Integer) 10)));
#line 597 "table_statistics.m"
              MR_Integer mercury__table_statistics__HashKeyComparesNotDuplA_92 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsA_4, (MR_Integer) 11)));
#line 597 "table_statistics.m"
              MR_Integer mercury__table_statistics__HashKeyComparesIsDuplA_93 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsA_4, (MR_Integer) 12)));
#line 597 "table_statistics.m"
              MR_Integer mercury__table_statistics__HashResizesA_94 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsA_4, (MR_Integer) 13)));
#line 597 "table_statistics.m"
              MR_Integer mercury__table_statistics__HashResizeOldEntriesA_95 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsA_4, (MR_Integer) 14)));
#line 597 "table_statistics.m"
              MR_Integer mercury__table_statistics__HashResizeNewEntriesA_96 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsA_4, (MR_Integer) 15)));
#line 597 "table_statistics.m"
              MR_Integer mercury__table_statistics__HashTableAllocsB_97;
#line 597 "table_statistics.m"
              MR_Integer mercury__table_statistics__HashTableBytesB_98;
#line 597 "table_statistics.m"
              MR_Integer mercury__table_statistics__HashLinkChunkAllocsB_99;
#line 597 "table_statistics.m"
              MR_Integer mercury__table_statistics__HashLinkChunkBytesB_100;
#line 597 "table_statistics.m"
              MR_Integer mercury__table_statistics__HashKeyComparesNotDuplB_101;
#line 597 "table_statistics.m"
              MR_Integer mercury__table_statistics__HashKeyComparesIsDuplB_102;
#line 597 "table_statistics.m"
              MR_Integer mercury__table_statistics__HashResizesB_103;
#line 597 "table_statistics.m"
              MR_Integer mercury__table_statistics__HashResizeOldEntriesB_104;
#line 597 "table_statistics.m"
              MR_Integer mercury__table_statistics__HashResizeNewEntriesB_105;

#line 598 "table_statistics.m"
              mercury__table_statistics__succeeded = ((((MR_tag((MR_Word) mercury__table_statistics__DetailsB_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsB_5, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 598 "table_statistics.m"
              if (mercury__table_statistics__succeeded)
#line 598 "table_statistics.m"
                {
#line 598 "table_statistics.m"
                  mercury__table_statistics__DuNodeAllocsB_37 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsB_5, (MR_Integer) 1)));
#line 598 "table_statistics.m"
                  mercury__table_statistics__DuNodeBytesB_38 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsB_5, (MR_Integer) 2)));
#line 598 "table_statistics.m"
                  mercury__table_statistics__DuArgLookupsB_39 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsB_5, (MR_Integer) 3)));
#line 598 "table_statistics.m"
                  mercury__table_statistics__DuExistLookupsB_40 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsB_5, (MR_Integer) 4)));
#line 598 "table_statistics.m"
                  mercury__table_statistics__EnumNodeAllocsB_86 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsB_5, (MR_Integer) 5)));
#line 598 "table_statistics.m"
                  mercury__table_statistics__EnumNodeBytesB_87 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsB_5, (MR_Integer) 6)));
#line 598 "table_statistics.m"
                  mercury__table_statistics__HashTableAllocsB_97 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsB_5, (MR_Integer) 7)));
#line 598 "table_statistics.m"
                  mercury__table_statistics__HashTableBytesB_98 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsB_5, (MR_Integer) 8)));
#line 598 "table_statistics.m"
                  mercury__table_statistics__HashLinkChunkAllocsB_99 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsB_5, (MR_Integer) 9)));
#line 598 "table_statistics.m"
                  mercury__table_statistics__HashLinkChunkBytesB_100 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsB_5, (MR_Integer) 10)));
#line 598 "table_statistics.m"
                  mercury__table_statistics__HashKeyComparesNotDuplB_101 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsB_5, (MR_Integer) 11)));
#line 598 "table_statistics.m"
                  mercury__table_statistics__HashKeyComparesIsDuplB_102 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsB_5, (MR_Integer) 12)));
#line 598 "table_statistics.m"
                  mercury__table_statistics__HashResizesB_103 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsB_5, (MR_Integer) 13)));
#line 598 "table_statistics.m"
                  mercury__table_statistics__HashResizeOldEntriesB_104 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsB_5, (MR_Integer) 14)));
#line 598 "table_statistics.m"
                  mercury__table_statistics__HashResizeNewEntriesB_105 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsB_5, (MR_Integer) 15)));
#line 604 "table_statistics.m"
                  mercury__table_statistics__V_56_56 = (mercury__table_statistics__DuNodeAllocsA_33 - mercury__table_statistics__DuNodeAllocsB_37);
#line 605 "table_statistics.m"
                  mercury__table_statistics__V_57_57 = (mercury__table_statistics__DuNodeBytesA_34 - mercury__table_statistics__DuNodeBytesB_38);
#line 606 "table_statistics.m"
                  mercury__table_statistics__V_58_58 = (mercury__table_statistics__DuArgLookupsA_35 - mercury__table_statistics__DuArgLookupsB_39);
#line 607 "table_statistics.m"
                  mercury__table_statistics__V_59_59 = (mercury__table_statistics__DuExistLookupsA_36 - mercury__table_statistics__DuExistLookupsB_40);
#line 608 "table_statistics.m"
                  mercury__table_statistics__V_60_60 = (mercury__table_statistics__EnumNodeAllocsA_84 - mercury__table_statistics__EnumNodeAllocsB_86);
#line 609 "table_statistics.m"
                  mercury__table_statistics__V_61_61 = (mercury__table_statistics__EnumNodeBytesA_85 - mercury__table_statistics__EnumNodeBytesB_87);
#line 610 "table_statistics.m"
                  mercury__table_statistics__V_62_62 = (mercury__table_statistics__HashTableAllocsA_88 - mercury__table_statistics__HashTableAllocsB_97);
#line 611 "table_statistics.m"
                  mercury__table_statistics__V_63_63 = (mercury__table_statistics__HashTableBytesA_89 - mercury__table_statistics__HashTableBytesB_98);
#line 612 "table_statistics.m"
                  mercury__table_statistics__V_64_64 = (mercury__table_statistics__HashLinkChunkAllocsA_90 - mercury__table_statistics__HashLinkChunkAllocsB_99);
#line 613 "table_statistics.m"
                  mercury__table_statistics__V_65_65 = (mercury__table_statistics__HashLinkChunkBytesA_91 - mercury__table_statistics__HashLinkChunkBytesB_100);
#line 614 "table_statistics.m"
                  mercury__table_statistics__V_66_66 = (mercury__table_statistics__HashKeyComparesNotDuplA_92 - mercury__table_statistics__HashKeyComparesNotDuplB_101);
#line 615 "table_statistics.m"
                  mercury__table_statistics__V_67_67 = (mercury__table_statistics__HashKeyComparesIsDuplA_93 - mercury__table_statistics__HashKeyComparesIsDuplB_102);
#line 616 "table_statistics.m"
                  mercury__table_statistics__V_68_68 = (mercury__table_statistics__HashResizesA_94 - mercury__table_statistics__HashResizesB_103);
#line 617 "table_statistics.m"
                  mercury__table_statistics__V_69_69 = (mercury__table_statistics__HashResizeOldEntriesA_95 - mercury__table_statistics__HashResizeOldEntriesB_104);
#line 618 "table_statistics.m"
                  mercury__table_statistics__V_70_70 = (mercury__table_statistics__HashResizeNewEntriesA_96 - mercury__table_statistics__HashResizeNewEntriesB_105);
#line 604 "table_statistics.m"
                  {
#line 604 "table_statistics.m"
                    MR_Word base;
#line 604 "table_statistics.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL));
#line 604 "table_statistics.m"
                    *mercury__table_statistics__DetailsDiff_6 = base;
#line 604 "table_statistics.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 604 "table_statistics.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mercury__table_statistics__V_56_56));
#line 604 "table_statistics.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (mercury__table_statistics__V_57_57));
#line 604 "table_statistics.m"
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (mercury__table_statistics__V_58_58));
#line 604 "table_statistics.m"
                    MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (mercury__table_statistics__V_59_59));
#line 604 "table_statistics.m"
                    MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (mercury__table_statistics__V_60_60));
#line 604 "table_statistics.m"
                    MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (mercury__table_statistics__V_61_61));
#line 604 "table_statistics.m"
                    MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (mercury__table_statistics__V_62_62));
#line 604 "table_statistics.m"
                    MR_hl_field(MR_mktag(3), base, 8) = ((MR_Box) (mercury__table_statistics__V_63_63));
#line 604 "table_statistics.m"
                    MR_hl_field(MR_mktag(3), base, 9) = ((MR_Box) (mercury__table_statistics__V_64_64));
#line 604 "table_statistics.m"
                    MR_hl_field(MR_mktag(3), base, 10) = ((MR_Box) (mercury__table_statistics__V_65_65));
#line 604 "table_statistics.m"
                    MR_hl_field(MR_mktag(3), base, 11) = ((MR_Box) (mercury__table_statistics__V_66_66));
#line 604 "table_statistics.m"
                    MR_hl_field(MR_mktag(3), base, 12) = ((MR_Box) (mercury__table_statistics__V_67_67));
#line 604 "table_statistics.m"
                    MR_hl_field(MR_mktag(3), base, 13) = ((MR_Box) (mercury__table_statistics__V_68_68));
#line 604 "table_statistics.m"
                    MR_hl_field(MR_mktag(3), base, 14) = ((MR_Box) (mercury__table_statistics__V_69_69));
#line 604 "table_statistics.m"
                    MR_hl_field(MR_mktag(3), base, 15) = ((MR_Box) (mercury__table_statistics__V_70_70));
#line 604 "table_statistics.m"
                  }
#line 604 "table_statistics.m"
                  mercury__table_statistics__succeeded = MR_TRUE;
#line 598 "table_statistics.m"
                }
#line 597 "table_statistics.m"
            }
#line 560 "table_statistics.m"
          else
#line 560 "table_statistics.m"
            if (((((MR_tag((MR_Word) mercury__table_statistics__DetailsA_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsA_4, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 577 "table_statistics.m"
              {
#line 577 "table_statistics.m"
                MR_Integer mercury__table_statistics__HashTableAllocsA_15 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsA_4, (MR_Integer) 1)));
#line 577 "table_statistics.m"
                MR_Integer mercury__table_statistics__HashTableBytesA_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsA_4, (MR_Integer) 2)));
#line 577 "table_statistics.m"
                MR_Integer mercury__table_statistics__HashLinkChunkAllocsA_17 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsA_4, (MR_Integer) 3)));
#line 577 "table_statistics.m"
                MR_Integer mercury__table_statistics__HashLinkChunkBytesA_18 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsA_4, (MR_Integer) 4)));
#line 577 "table_statistics.m"
                MR_Integer mercury__table_statistics__HashKeyComparesNotDuplA_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsA_4, (MR_Integer) 5)));
#line 577 "table_statistics.m"
                MR_Integer mercury__table_statistics__HashKeyComparesIsDuplA_20 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsA_4, (MR_Integer) 6)));
#line 577 "table_statistics.m"
                MR_Integer mercury__table_statistics__HashResizesA_21 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsA_4, (MR_Integer) 7)));
#line 577 "table_statistics.m"
                MR_Integer mercury__table_statistics__HashResizeOldEntriesA_22 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsA_4, (MR_Integer) 8)));
#line 577 "table_statistics.m"
                MR_Integer mercury__table_statistics__HashResizeNewEntriesA_23 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsA_4, (MR_Integer) 9)));
#line 577 "table_statistics.m"
                MR_Integer mercury__table_statistics__HashTableAllocsB_24;
#line 577 "table_statistics.m"
                MR_Integer mercury__table_statistics__HashTableBytesB_25;
#line 577 "table_statistics.m"
                MR_Integer mercury__table_statistics__HashLinkChunkAllocsB_26;
#line 577 "table_statistics.m"
                MR_Integer mercury__table_statistics__HashLinkChunkBytesB_27;
#line 577 "table_statistics.m"
                MR_Integer mercury__table_statistics__HashKeyComparesNotDuplB_28;
#line 577 "table_statistics.m"
                MR_Integer mercury__table_statistics__HashKeyComparesIsDuplB_29;
#line 577 "table_statistics.m"
                MR_Integer mercury__table_statistics__HashResizesB_30;
#line 577 "table_statistics.m"
                MR_Integer mercury__table_statistics__HashResizeOldEntriesB_31;
#line 577 "table_statistics.m"
                MR_Integer mercury__table_statistics__HashResizeNewEntriesB_32;
#line 577 "table_statistics.m"
                MR_Integer mercury__table_statistics__V_71_71;
#line 577 "table_statistics.m"
                MR_Integer mercury__table_statistics__V_72_72;
#line 577 "table_statistics.m"
                MR_Integer mercury__table_statistics__V_73_73;
#line 577 "table_statistics.m"
                MR_Integer mercury__table_statistics__V_74_74;
#line 577 "table_statistics.m"
                MR_Integer mercury__table_statistics__V_75_75;
#line 577 "table_statistics.m"
                MR_Integer mercury__table_statistics__V_76_76;
#line 577 "table_statistics.m"
                MR_Integer mercury__table_statistics__V_77_77;
#line 577 "table_statistics.m"
                MR_Integer mercury__table_statistics__V_78_78;
#line 577 "table_statistics.m"
                MR_Integer mercury__table_statistics__V_79_79;

#line 578 "table_statistics.m"
                mercury__table_statistics__succeeded = ((((MR_tag((MR_Word) mercury__table_statistics__DetailsB_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsB_5, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 578 "table_statistics.m"
                if (mercury__table_statistics__succeeded)
#line 578 "table_statistics.m"
                  {
#line 578 "table_statistics.m"
                    mercury__table_statistics__HashTableAllocsB_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsB_5, (MR_Integer) 1)));
#line 578 "table_statistics.m"
                    mercury__table_statistics__HashTableBytesB_25 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsB_5, (MR_Integer) 2)));
#line 578 "table_statistics.m"
                    mercury__table_statistics__HashLinkChunkAllocsB_26 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsB_5, (MR_Integer) 3)));
#line 578 "table_statistics.m"
                    mercury__table_statistics__HashLinkChunkBytesB_27 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsB_5, (MR_Integer) 4)));
#line 578 "table_statistics.m"
                    mercury__table_statistics__HashKeyComparesNotDuplB_28 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsB_5, (MR_Integer) 5)));
#line 578 "table_statistics.m"
                    mercury__table_statistics__HashKeyComparesIsDuplB_29 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsB_5, (MR_Integer) 6)));
#line 578 "table_statistics.m"
                    mercury__table_statistics__HashResizesB_30 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsB_5, (MR_Integer) 7)));
#line 578 "table_statistics.m"
                    mercury__table_statistics__HashResizeOldEntriesB_31 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsB_5, (MR_Integer) 8)));
#line 578 "table_statistics.m"
                    mercury__table_statistics__HashResizeNewEntriesB_32 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsB_5, (MR_Integer) 9)));
#line 582 "table_statistics.m"
                    mercury__table_statistics__V_71_71 = (mercury__table_statistics__HashTableAllocsA_15 - mercury__table_statistics__HashTableAllocsB_24);
#line 583 "table_statistics.m"
                    mercury__table_statistics__V_72_72 = (mercury__table_statistics__HashTableBytesA_16 - mercury__table_statistics__HashTableBytesB_25);
#line 584 "table_statistics.m"
                    mercury__table_statistics__V_73_73 = (mercury__table_statistics__HashLinkChunkAllocsA_17 - mercury__table_statistics__HashLinkChunkAllocsB_26);
#line 585 "table_statistics.m"
                    mercury__table_statistics__V_74_74 = (mercury__table_statistics__HashLinkChunkBytesA_18 - mercury__table_statistics__HashLinkChunkBytesB_27);
#line 586 "table_statistics.m"
                    mercury__table_statistics__V_75_75 = (mercury__table_statistics__HashKeyComparesNotDuplA_19 - mercury__table_statistics__HashKeyComparesNotDuplB_28);
#line 587 "table_statistics.m"
                    mercury__table_statistics__V_76_76 = (mercury__table_statistics__HashKeyComparesIsDuplA_20 - mercury__table_statistics__HashKeyComparesIsDuplB_29);
#line 588 "table_statistics.m"
                    mercury__table_statistics__V_77_77 = (mercury__table_statistics__HashResizesA_21 - mercury__table_statistics__HashResizesB_30);
#line 589 "table_statistics.m"
                    mercury__table_statistics__V_78_78 = (mercury__table_statistics__HashResizeOldEntriesA_22 - mercury__table_statistics__HashResizeOldEntriesB_31);
#line 590 "table_statistics.m"
                    mercury__table_statistics__V_79_79 = (mercury__table_statistics__HashResizeNewEntriesA_23 - mercury__table_statistics__HashResizeNewEntriesB_32);
#line 582 "table_statistics.m"
                    {
#line 582 "table_statistics.m"
                      MR_Word base;
#line 582 "table_statistics.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL));
#line 582 "table_statistics.m"
                      *mercury__table_statistics__DetailsDiff_6 = base;
#line 582 "table_statistics.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 582 "table_statistics.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mercury__table_statistics__V_71_71));
#line 582 "table_statistics.m"
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (mercury__table_statistics__V_72_72));
#line 582 "table_statistics.m"
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (mercury__table_statistics__V_73_73));
#line 582 "table_statistics.m"
                      MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (mercury__table_statistics__V_74_74));
#line 582 "table_statistics.m"
                      MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (mercury__table_statistics__V_75_75));
#line 582 "table_statistics.m"
                      MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (mercury__table_statistics__V_76_76));
#line 582 "table_statistics.m"
                      MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (mercury__table_statistics__V_77_77));
#line 582 "table_statistics.m"
                      MR_hl_field(MR_mktag(3), base, 8) = ((MR_Box) (mercury__table_statistics__V_78_78));
#line 582 "table_statistics.m"
                      MR_hl_field(MR_mktag(3), base, 9) = ((MR_Box) (mercury__table_statistics__V_79_79));
#line 582 "table_statistics.m"
                    }
#line 582 "table_statistics.m"
                    mercury__table_statistics__succeeded = MR_TRUE;
#line 578 "table_statistics.m"
                  }
#line 577 "table_statistics.m"
              }
#line 560 "table_statistics.m"
            else
#line 625 "table_statistics.m"
              {
#line 625 "table_statistics.m"
                MR_Integer mercury__table_statistics__V_41_41;
#line 625 "table_statistics.m"
                MR_Integer mercury__table_statistics__V_42_42;
#line 625 "table_statistics.m"
                MR_Integer mercury__table_statistics__V_43_43;
#line 625 "table_statistics.m"
                MR_Integer mercury__table_statistics__V_44_44;
#line 625 "table_statistics.m"
                MR_Integer mercury__table_statistics__V_45_45;
#line 625 "table_statistics.m"
                MR_Integer mercury__table_statistics__V_46_46;
#line 625 "table_statistics.m"
                MR_Integer mercury__table_statistics__V_47_47;
#line 625 "table_statistics.m"
                MR_Integer mercury__table_statistics__V_48_48;
#line 625 "table_statistics.m"
                MR_Integer mercury__table_statistics__V_49_49;
#line 625 "table_statistics.m"
                MR_Integer mercury__table_statistics__V_50_50;
#line 625 "table_statistics.m"
                MR_Integer mercury__table_statistics__V_51_51;
#line 625 "table_statistics.m"
                MR_Integer mercury__table_statistics__V_52_52;
#line 625 "table_statistics.m"
                MR_Integer mercury__table_statistics__V_53_53;
#line 625 "table_statistics.m"
                MR_Integer mercury__table_statistics__V_54_54;
#line 625 "table_statistics.m"
                MR_Integer mercury__table_statistics__V_55_55;
#line 625 "table_statistics.m"
                MR_Integer mercury__table_statistics__EnumNodeAllocsA_106 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsA_4, (MR_Integer) 5)));
#line 625 "table_statistics.m"
                MR_Integer mercury__table_statistics__EnumNodeBytesA_107 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsA_4, (MR_Integer) 6)));
#line 625 "table_statistics.m"
                MR_Integer mercury__table_statistics__EnumNodeAllocsB_108;
#line 625 "table_statistics.m"
                MR_Integer mercury__table_statistics__EnumNodeBytesB_109;
#line 625 "table_statistics.m"
                MR_Integer mercury__table_statistics__HashTableAllocsA_110 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsA_4, (MR_Integer) 7)));
#line 625 "table_statistics.m"
                MR_Integer mercury__table_statistics__HashTableBytesA_111 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsA_4, (MR_Integer) 8)));
#line 625 "table_statistics.m"
                MR_Integer mercury__table_statistics__HashLinkChunkAllocsA_112 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsA_4, (MR_Integer) 9)));
#line 625 "table_statistics.m"
                MR_Integer mercury__table_statistics__HashLinkChunkBytesA_113 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsA_4, (MR_Integer) 10)));
#line 625 "table_statistics.m"
                MR_Integer mercury__table_statistics__HashKeyComparesNotDuplA_114 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsA_4, (MR_Integer) 11)));
#line 625 "table_statistics.m"
                MR_Integer mercury__table_statistics__HashKeyComparesIsDuplA_115 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsA_4, (MR_Integer) 12)));
#line 625 "table_statistics.m"
                MR_Integer mercury__table_statistics__HashResizesA_116 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsA_4, (MR_Integer) 13)));
#line 625 "table_statistics.m"
                MR_Integer mercury__table_statistics__HashResizeOldEntriesA_117 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsA_4, (MR_Integer) 14)));
#line 625 "table_statistics.m"
                MR_Integer mercury__table_statistics__HashResizeNewEntriesA_118 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsA_4, (MR_Integer) 15)));
#line 625 "table_statistics.m"
                MR_Integer mercury__table_statistics__HashTableAllocsB_119;
#line 625 "table_statistics.m"
                MR_Integer mercury__table_statistics__HashTableBytesB_120;
#line 625 "table_statistics.m"
                MR_Integer mercury__table_statistics__HashLinkChunkAllocsB_121;
#line 625 "table_statistics.m"
                MR_Integer mercury__table_statistics__HashLinkChunkBytesB_122;
#line 625 "table_statistics.m"
                MR_Integer mercury__table_statistics__HashKeyComparesNotDuplB_123;
#line 625 "table_statistics.m"
                MR_Integer mercury__table_statistics__HashKeyComparesIsDuplB_124;
#line 625 "table_statistics.m"
                MR_Integer mercury__table_statistics__HashResizesB_125;
#line 625 "table_statistics.m"
                MR_Integer mercury__table_statistics__HashResizeOldEntriesB_126;
#line 625 "table_statistics.m"
                MR_Integer mercury__table_statistics__HashResizeNewEntriesB_127;
#line 625 "table_statistics.m"
                MR_Integer mercury__table_statistics__DuNodeAllocsA_128 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsA_4, (MR_Integer) 1)));
#line 625 "table_statistics.m"
                MR_Integer mercury__table_statistics__DuNodeBytesA_129 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsA_4, (MR_Integer) 2)));
#line 625 "table_statistics.m"
                MR_Integer mercury__table_statistics__DuArgLookupsA_130 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsA_4, (MR_Integer) 3)));
#line 625 "table_statistics.m"
                MR_Integer mercury__table_statistics__DuExistLookupsA_131 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsA_4, (MR_Integer) 4)));
#line 625 "table_statistics.m"
                MR_Integer mercury__table_statistics__DuNodeAllocsB_132;
#line 625 "table_statistics.m"
                MR_Integer mercury__table_statistics__DuNodeBytesB_133;
#line 625 "table_statistics.m"
                MR_Integer mercury__table_statistics__DuArgLookupsB_134;
#line 625 "table_statistics.m"
                MR_Integer mercury__table_statistics__DuExistLookupsB_135;

#line 626 "table_statistics.m"
                mercury__table_statistics__succeeded = ((((MR_tag((MR_Word) mercury__table_statistics__DetailsB_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsB_5, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 626 "table_statistics.m"
                if (mercury__table_statistics__succeeded)
#line 626 "table_statistics.m"
                  {
#line 626 "table_statistics.m"
                    mercury__table_statistics__DuNodeAllocsB_132 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsB_5, (MR_Integer) 1)));
#line 626 "table_statistics.m"
                    mercury__table_statistics__DuNodeBytesB_133 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsB_5, (MR_Integer) 2)));
#line 626 "table_statistics.m"
                    mercury__table_statistics__DuArgLookupsB_134 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsB_5, (MR_Integer) 3)));
#line 626 "table_statistics.m"
                    mercury__table_statistics__DuExistLookupsB_135 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsB_5, (MR_Integer) 4)));
#line 626 "table_statistics.m"
                    mercury__table_statistics__EnumNodeAllocsB_108 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsB_5, (MR_Integer) 5)));
#line 626 "table_statistics.m"
                    mercury__table_statistics__EnumNodeBytesB_109 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsB_5, (MR_Integer) 6)));
#line 626 "table_statistics.m"
                    mercury__table_statistics__HashTableAllocsB_119 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsB_5, (MR_Integer) 7)));
#line 626 "table_statistics.m"
                    mercury__table_statistics__HashTableBytesB_120 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsB_5, (MR_Integer) 8)));
#line 626 "table_statistics.m"
                    mercury__table_statistics__HashLinkChunkAllocsB_121 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsB_5, (MR_Integer) 9)));
#line 626 "table_statistics.m"
                    mercury__table_statistics__HashLinkChunkBytesB_122 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsB_5, (MR_Integer) 10)));
#line 626 "table_statistics.m"
                    mercury__table_statistics__HashKeyComparesNotDuplB_123 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsB_5, (MR_Integer) 11)));
#line 626 "table_statistics.m"
                    mercury__table_statistics__HashKeyComparesIsDuplB_124 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsB_5, (MR_Integer) 12)));
#line 626 "table_statistics.m"
                    mercury__table_statistics__HashResizesB_125 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsB_5, (MR_Integer) 13)));
#line 626 "table_statistics.m"
                    mercury__table_statistics__HashResizeOldEntriesB_126 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsB_5, (MR_Integer) 14)));
#line 626 "table_statistics.m"
                    mercury__table_statistics__HashResizeNewEntriesB_127 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__table_statistics__DetailsB_5, (MR_Integer) 15)));
#line 632 "table_statistics.m"
                    mercury__table_statistics__V_41_41 = (mercury__table_statistics__DuNodeAllocsA_128 - mercury__table_statistics__DuNodeAllocsB_132);
#line 633 "table_statistics.m"
                    mercury__table_statistics__V_42_42 = (mercury__table_statistics__DuNodeBytesA_129 - mercury__table_statistics__DuNodeBytesB_133);
#line 634 "table_statistics.m"
                    mercury__table_statistics__V_43_43 = (mercury__table_statistics__DuArgLookupsA_130 - mercury__table_statistics__DuArgLookupsB_134);
#line 635 "table_statistics.m"
                    mercury__table_statistics__V_44_44 = (mercury__table_statistics__DuExistLookupsA_131 - mercury__table_statistics__DuExistLookupsB_135);
#line 636 "table_statistics.m"
                    mercury__table_statistics__V_45_45 = (mercury__table_statistics__EnumNodeAllocsA_106 - mercury__table_statistics__EnumNodeAllocsB_108);
#line 637 "table_statistics.m"
                    mercury__table_statistics__V_46_46 = (mercury__table_statistics__EnumNodeBytesA_107 - mercury__table_statistics__EnumNodeBytesB_109);
#line 638 "table_statistics.m"
                    mercury__table_statistics__V_47_47 = (mercury__table_statistics__HashTableAllocsA_110 - mercury__table_statistics__HashTableAllocsB_119);
#line 639 "table_statistics.m"
                    mercury__table_statistics__V_48_48 = (mercury__table_statistics__HashTableBytesA_111 - mercury__table_statistics__HashTableBytesB_120);
#line 640 "table_statistics.m"
                    mercury__table_statistics__V_49_49 = (mercury__table_statistics__HashLinkChunkAllocsA_112 - mercury__table_statistics__HashLinkChunkAllocsB_121);
#line 641 "table_statistics.m"
                    mercury__table_statistics__V_50_50 = (mercury__table_statistics__HashLinkChunkBytesA_113 - mercury__table_statistics__HashLinkChunkBytesB_122);
#line 642 "table_statistics.m"
                    mercury__table_statistics__V_51_51 = (mercury__table_statistics__HashKeyComparesNotDuplA_114 - mercury__table_statistics__HashKeyComparesNotDuplB_123);
#line 643 "table_statistics.m"
                    mercury__table_statistics__V_52_52 = (mercury__table_statistics__HashKeyComparesIsDuplA_115 - mercury__table_statistics__HashKeyComparesIsDuplB_124);
#line 644 "table_statistics.m"
                    mercury__table_statistics__V_53_53 = (mercury__table_statistics__HashResizesA_116 - mercury__table_statistics__HashResizesB_125);
#line 645 "table_statistics.m"
                    mercury__table_statistics__V_54_54 = (mercury__table_statistics__HashResizeOldEntriesA_117 - mercury__table_statistics__HashResizeOldEntriesB_126);
#line 646 "table_statistics.m"
                    mercury__table_statistics__V_55_55 = (mercury__table_statistics__HashResizeNewEntriesA_118 - mercury__table_statistics__HashResizeNewEntriesB_127);
#line 632 "table_statistics.m"
                    {
#line 632 "table_statistics.m"
                      MR_Word base;
#line 632 "table_statistics.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL));
#line 632 "table_statistics.m"
                      *mercury__table_statistics__DetailsDiff_6 = base;
#line 632 "table_statistics.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 632 "table_statistics.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mercury__table_statistics__V_41_41));
#line 632 "table_statistics.m"
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (mercury__table_statistics__V_42_42));
#line 632 "table_statistics.m"
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (mercury__table_statistics__V_43_43));
#line 632 "table_statistics.m"
                      MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (mercury__table_statistics__V_44_44));
#line 632 "table_statistics.m"
                      MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (mercury__table_statistics__V_45_45));
#line 632 "table_statistics.m"
                      MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (mercury__table_statistics__V_46_46));
#line 632 "table_statistics.m"
                      MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (mercury__table_statistics__V_47_47));
#line 632 "table_statistics.m"
                      MR_hl_field(MR_mktag(3), base, 8) = ((MR_Box) (mercury__table_statistics__V_48_48));
#line 632 "table_statistics.m"
                      MR_hl_field(MR_mktag(3), base, 9) = ((MR_Box) (mercury__table_statistics__V_49_49));
#line 632 "table_statistics.m"
                      MR_hl_field(MR_mktag(3), base, 10) = ((MR_Box) (mercury__table_statistics__V_50_50));
#line 632 "table_statistics.m"
                      MR_hl_field(MR_mktag(3), base, 11) = ((MR_Box) (mercury__table_statistics__V_51_51));
#line 632 "table_statistics.m"
                      MR_hl_field(MR_mktag(3), base, 12) = ((MR_Box) (mercury__table_statistics__V_52_52));
#line 632 "table_statistics.m"
                      MR_hl_field(MR_mktag(3), base, 13) = ((MR_Box) (mercury__table_statistics__V_53_53));
#line 632 "table_statistics.m"
                      MR_hl_field(MR_mktag(3), base, 14) = ((MR_Box) (mercury__table_statistics__V_54_54));
#line 632 "table_statistics.m"
                      MR_hl_field(MR_mktag(3), base, 15) = ((MR_Box) (mercury__table_statistics__V_55_55));
#line 632 "table_statistics.m"
                    }
#line 632 "table_statistics.m"
                    mercury__table_statistics__succeeded = MR_TRUE;
#line 626 "table_statistics.m"
                  }
#line 625 "table_statistics.m"
              }
#line 560 "table_statistics.m"
    return mercury__table_statistics__succeeded;
#line 560 "table_statistics.m"
  }
#line 555 "table_statistics.m"
}

#line 530 "table_statistics.m"
MR_Word MR_CALL 
mercury__table_statistics__table_step_stats_diff_2_f_0(
#line 530 "table_statistics.m"
  MR_Word mercury__table_statistics__HeadVar__1_1,
#line 530 "table_statistics.m"
  MR_Word mercury__table_statistics__HeadVar__2_2)
#line 530 "table_statistics.m"
{
#line 533 "table_statistics.m"
  {
#line 533 "table_statistics.m"
    MR_bool mercury__table_statistics__succeeded;
#line 533 "table_statistics.m"
    MR_Word mercury__table_statistics__HeadVar__3_3;

#line 533 "table_statistics.m"
    if ((mercury__table_statistics__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 533 "table_statistics.m"
      if ((mercury__table_statistics__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 533 "table_statistics.m"
        mercury__table_statistics__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 533 "table_statistics.m"
      else
#line 535 "table_statistics.m"
        {
#line 535 "table_statistics.m"
          MR_Word mercury__table_statistics__TypeInfo_32_32 = (MR_Word) &mercury__table_statistics_scalar_common_1[0];
#line 535 "table_statistics.m"
          MR_Box mercury__table_statistics__conv0_HeadVar__3_3;

#line 535 "table_statistics.m"
          {
#line 535 "table_statistics.m"
            mercury__table_statistics__conv0_HeadVar__3_3 = mercury__require__func_error_1_f_0(mercury__table_statistics__TypeInfo_32_32, (MR_String) "mismatched table stats");
          }
#line 535 "table_statistics.m"
          mercury__table_statistics__HeadVar__3_3 = ((MR_Word) mercury__table_statistics__conv0_HeadVar__3_3);
#line 535 "table_statistics.m"
        }
#line 533 "table_statistics.m"
    else
#line 533 "table_statistics.m"
      {
#line 533 "table_statistics.m"
        MR_Word mercury__table_statistics__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 1)));
#line 533 "table_statistics.m"
        MR_Word mercury__table_statistics__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__table_statistics__HeadVar__1_1, (MR_Integer) 0)));

#line 533 "table_statistics.m"
        if ((mercury__table_statistics__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 534 "table_statistics.m"
          {
#line 534 "table_statistics.m"
            MR_Word mercury__table_statistics__TypeInfo_31_31 = (MR_Word) &mercury__table_statistics_scalar_common_1[0];
#line 534 "table_statistics.m"
            MR_Box mercury__table_statistics__conv1_HeadVar__3_3;

#line 534 "table_statistics.m"
            {
#line 534 "table_statistics.m"
              mercury__table_statistics__conv1_HeadVar__3_3 = mercury__require__func_error_1_f_0(mercury__table_statistics__TypeInfo_31_31, (MR_String) "mismatched table stats");
            }
#line 534 "table_statistics.m"
            mercury__table_statistics__HeadVar__3_3 = ((MR_Word) mercury__table_statistics__conv1_HeadVar__3_3);
#line 534 "table_statistics.m"
          }
#line 533 "table_statistics.m"
        else
#line 537 "table_statistics.m"
          {
#line 537 "table_statistics.m"
            MR_Word mercury__table_statistics__StepB_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 0)));
#line 537 "table_statistics.m"
            MR_Word mercury__table_statistics__StepsB_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__table_statistics__HeadVar__2_2, (MR_Integer) 1)));
#line 537 "table_statistics.m"
            MR_Word mercury__table_statistics__StepDiff_14;
#line 537 "table_statistics.m"
            MR_Word mercury__table_statistics__StepDiffs_15;
#line 537 "table_statistics.m"
            MR_String mercury__table_statistics__VarNameA_16 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__table_statistics__V_35_35, (MR_Integer) 0)));
#line 537 "table_statistics.m"
            MR_Integer mercury__table_statistics__LookupsA_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__table_statistics__V_35_35, (MR_Integer) 1)));
#line 537 "table_statistics.m"
            MR_Integer mercury__table_statistics__LookupsIsDuplA_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__table_statistics__V_35_35, (MR_Integer) 2)));
#line 537 "table_statistics.m"
            MR_Word mercury__table_statistics__DetailsA_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__table_statistics__V_35_35, (MR_Integer) 3)));
#line 537 "table_statistics.m"
            MR_String mercury__table_statistics__VarNameB_20 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__table_statistics__StepB_12, (MR_Integer) 0)));
#line 537 "table_statistics.m"
            MR_Integer mercury__table_statistics__LookupsB_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__table_statistics__StepB_12, (MR_Integer) 1)));
#line 537 "table_statistics.m"
            MR_Integer mercury__table_statistics__LookupsIsDuplB_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__table_statistics__StepB_12, (MR_Integer) 2)));
#line 537 "table_statistics.m"
            MR_Word mercury__table_statistics__DetailsB_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__table_statistics__StepB_12, (MR_Integer) 3)));
#line 537 "table_statistics.m"
            MR_Integer mercury__table_statistics__LookupsDiff_24;
#line 537 "table_statistics.m"
            MR_Integer mercury__table_statistics__LookupsIsDuplDiff_25;
#line 537 "table_statistics.m"
            MR_Word mercury__table_statistics__DetailsDiff_27;
#line 547 "table_statistics.m"
            MR_Word mercury__table_statistics__DetailsDiffPrime_26;

#line 541 "table_statistics.m"
            mercury__table_statistics__succeeded = (strcmp(mercury__table_statistics__VarNameA_16, mercury__table_statistics__VarNameB_20) == 0);
#line 16 "require.opt"
            if (mercury__table_statistics__succeeded)
#line 15 "require.opt"
              {
#line 15 "require.opt"
              }
#line 16 "require.opt"
            else
#line 17 "require.opt"
              {
#line 17 "require.opt"
                mercury__require__error_1_p_0((MR_String) "table_step_stats_diff: mismatches in variable name");
              }
#line 543 "table_statistics.m"
            mercury__table_statistics__LookupsDiff_24 = (mercury__table_statistics__LookupsA_17 - mercury__table_statistics__LookupsB_21);
#line 544 "table_statistics.m"
            mercury__table_statistics__LookupsIsDuplDiff_25 = (mercury__table_statistics__LookupsIsDuplA_18 - mercury__table_statistics__LookupsIsDuplB_22);
#line 545 "table_statistics.m"
            {
#line 545 "table_statistics.m"
              mercury__table_statistics__succeeded = mercury__table_statistics__table_step_stats_detail_diff_3_p_0(mercury__table_statistics__DetailsA_19, mercury__table_statistics__DetailsB_23, &mercury__table_statistics__DetailsDiffPrime_26);
            }
#line 547 "table_statistics.m"
            if (mercury__table_statistics__succeeded)
#line 546 "table_statistics.m"
              mercury__table_statistics__DetailsDiff_27 = mercury__table_statistics__DetailsDiffPrime_26;
#line 547 "table_statistics.m"
            else
#line 548 "table_statistics.m"
              {
#line 548 "table_statistics.m"
                {
#line 548 "table_statistics.m"
                  mercury__require__error_1_p_0((MR_String) "table_step_stats_diff: mismatches in details");
                }
#line 548 "table_statistics.m"
              }
#line 551 "table_statistics.m"
            {
#line 551 "table_statistics.m"
              mercury__table_statistics__StepDiff_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 551 "table_statistics.m"
              MR_hl_field(MR_mktag(0), mercury__table_statistics__StepDiff_14, 0) = ((MR_Box) (mercury__table_statistics__VarNameA_16));
#line 551 "table_statistics.m"
              MR_hl_field(MR_mktag(0), mercury__table_statistics__StepDiff_14, 1) = ((MR_Box) (mercury__table_statistics__LookupsDiff_24));
#line 551 "table_statistics.m"
              MR_hl_field(MR_mktag(0), mercury__table_statistics__StepDiff_14, 2) = ((MR_Box) (mercury__table_statistics__LookupsIsDuplDiff_25));
#line 551 "table_statistics.m"
              MR_hl_field(MR_mktag(0), mercury__table_statistics__StepDiff_14, 3) = ((MR_Box) (mercury__table_statistics__DetailsDiff_27));
#line 551 "table_statistics.m"
            }
#line 553 "table_statistics.m"
            {
#line 553 "table_statistics.m"
              mercury__table_statistics__StepDiffs_15 = mercury__table_statistics__table_step_stats_diff_2_f_0(mercury__table_statistics__V_34_34, mercury__table_statistics__StepsB_13);
            }
#line 537 "table_statistics.m"
            {
#line 537 "table_statistics.m"
              mercury__table_statistics__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 537 "table_statistics.m"
              MR_hl_field(MR_mktag(1), mercury__table_statistics__HeadVar__3_3, 0) = ((MR_Box) (mercury__table_statistics__StepDiff_14));
#line 537 "table_statistics.m"
              MR_hl_field(MR_mktag(1), mercury__table_statistics__HeadVar__3_3, 1) = ((MR_Box) (mercury__table_statistics__StepDiffs_15));
#line 537 "table_statistics.m"
            }
#line 537 "table_statistics.m"
          }
#line 533 "table_statistics.m"
      }
#line 533 "table_statistics.m"
    return mercury__table_statistics__HeadVar__3_3;
#line 533 "table_statistics.m"
  }
#line 530 "table_statistics.m"
}

#line 454 "table_statistics.m"
static void MR_CALL 
mercury__table_statistics__copy_current_stats_to_prev_5_p_0(
#line 454 "table_statistics.m"
  MR_Box mercury__table_statistics__CurPtr_1,
#line 454 "table_statistics.m"
  MR_Box mercury__table_statistics__PrevPtr_2,
#line 454 "table_statistics.m"
  MR_Integer mercury__table_statistics__NumSteps_3)
#line 454 "table_statistics.m"
{
#line 457 "table_statistics.m"
  {
#line 457 "table_statistics.m"
    MR_bool mercury__table_statistics__succeeded;

#line 461 "table_statistics.m"
{
#define MR_PROC_LABEL mercury__table_statistics__copy_current_stats_to_prev_5_p_0

	MR_TableStats * CurPtr;
	MR_TableStats * PrevPtr;
	MR_Integer NumSteps;

	CurPtr = (MR_TableStats *) mercury__table_statistics__CurPtr_1 ;
	PrevPtr = (MR_TableStats *) mercury__table_statistics__PrevPtr_2 ;
	NumSteps =  mercury__table_statistics__NumSteps_3 ;
		{
#line 461 "table_statistics.m"

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

#line 8826 "table_statistics.c"

		;}
#undef MR_PROC_LABEL
#line 461 "table_statistics.m"
}
#line 457 "table_statistics.m"
  }
#line 454 "table_statistics.m"
}

#line 397 "table_statistics.m"
static void MR_CALL 
mercury__table_statistics__get_one_table_step_stat_details_26_p_0(
#line 397 "table_statistics.m"
  MR_Box mercury__table_statistics__StepDescsPtr_1,
#line 397 "table_statistics.m"
  MR_Box mercury__table_statistics__StatsStructPtr_2,
#line 397 "table_statistics.m"
  MR_Integer mercury__table_statistics__StepNum_3,
#line 397 "table_statistics.m"
  MR_String * mercury__table_statistics__VarName_4,
#line 397 "table_statistics.m"
  MR_Integer * mercury__table_statistics__NumLookups_5,
#line 397 "table_statistics.m"
  MR_Integer * mercury__table_statistics__NumLookupsIsDupl_6,
#line 397 "table_statistics.m"
  MR_Integer * mercury__table_statistics__KindInt_7,
#line 397 "table_statistics.m"
  MR_Integer * mercury__table_statistics__HashTableAllocs_8,
#line 397 "table_statistics.m"
  MR_Integer * mercury__table_statistics__HashTableBytes_9,
#line 397 "table_statistics.m"
  MR_Integer * mercury__table_statistics__HashLinkChunkAllocs_10,
#line 397 "table_statistics.m"
  MR_Integer * mercury__table_statistics__HashLinkChunkBytes_11,
#line 397 "table_statistics.m"
  MR_Integer * mercury__table_statistics__HashKeyComparesNotDupl_12,
#line 397 "table_statistics.m"
  MR_Integer * mercury__table_statistics__HashKeyComparesIsDupl_13,
#line 397 "table_statistics.m"
  MR_Integer * mercury__table_statistics__HashResizes_14,
#line 397 "table_statistics.m"
  MR_Integer * mercury__table_statistics__HashResizeOldEntries_15,
#line 397 "table_statistics.m"
  MR_Integer * mercury__table_statistics__HashResizeNewEntries_16,
#line 397 "table_statistics.m"
  MR_Integer * mercury__table_statistics__EnumNodeAllocs_17,
#line 397 "table_statistics.m"
  MR_Integer * mercury__table_statistics__EnumNodeBytes_18,
#line 397 "table_statistics.m"
  MR_Integer * mercury__table_statistics__DuNodeAllocs_19,
#line 397 "table_statistics.m"
  MR_Integer * mercury__table_statistics__DuNodeBytes_20,
#line 397 "table_statistics.m"
  MR_Integer * mercury__table_statistics__DuArgLookups_21,
#line 397 "table_statistics.m"
  MR_Integer * mercury__table_statistics__DuExistLookups_22,
#line 397 "table_statistics.m"
  MR_Integer * mercury__table_statistics__StartAllocs_23,
#line 397 "table_statistics.m"
  MR_Integer * mercury__table_statistics__StartBytes_24)
#line 397 "table_statistics.m"
{
#line 406 "table_statistics.m"
  {
#line 406 "table_statistics.m"
    MR_bool mercury__table_statistics__succeeded;

#line 419 "table_statistics.m"
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
#line 419 "table_statistics.m"

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

#line 8963 "table_statistics.c"

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
#line 419 "table_statistics.m"
}
#line 406 "table_statistics.m"
  }
#line 397 "table_statistics.m"
}

#line 248 "table_statistics.m"
static void MR_CALL 
mercury__table_statistics__get_one_table_stats_step_loop_8_p_0(
#line 248 "table_statistics.m"
  MR_Box mercury__table_statistics__StepDescsPtr_9,
#line 248 "table_statistics.m"
  MR_Box mercury__table_statistics__StatsPtr_10,
#line 248 "table_statistics.m"
  MR_Integer mercury__table_statistics__CurStep_11,
#line 248 "table_statistics.m"
  MR_Integer mercury__table_statistics__NumSteps_12,
#line 248 "table_statistics.m"
  MR_Word mercury__table_statistics__STATE_VARIABLE_StepStats_0_15,
#line 248 "table_statistics.m"
  MR_Word * mercury__table_statistics__STATE_VARIABLE_StepStats_16)
#line 248 "table_statistics.m"
{
#line 257 "table_statistics.m"
  {
#line 257 "table_statistics.m"
    MR_bool mercury__table_statistics__succeeded = (mercury__table_statistics__CurStep_11 >= mercury__table_statistics__NumSteps_12);

#line 257 "table_statistics.m"
    if (mercury__table_statistics__succeeded)
#line 256 "table_statistics.m"
      *mercury__table_statistics__STATE_VARIABLE_StepStats_16 = mercury__table_statistics__STATE_VARIABLE_StepStats_0_15;
#line 257 "table_statistics.m"
    else
#line 259 "table_statistics.m"
      {
#line 259 "table_statistics.m"
        MR_Word mercury__table_statistics__StepStats_13;
#line 259 "table_statistics.m"
        MR_Integer mercury__table_statistics__V_19_19 = (mercury__table_statistics__CurStep_11 + (MR_Integer) 1);
#line 259 "table_statistics.m"
        MR_Word mercury__table_statistics__STATE_VARIABLE_StepStats_20_20;
#line 259 "table_statistics.m"
        MR_String mercury__table_statistics__VarName_32;
#line 259 "table_statistics.m"
        MR_Integer mercury__table_statistics__NumLookups_33;
#line 259 "table_statistics.m"
        MR_Integer mercury__table_statistics__NumLookupsIsDupl_34;
#line 259 "table_statistics.m"
        MR_Integer mercury__table_statistics__KindInt_35;
#line 259 "table_statistics.m"
        MR_Integer mercury__table_statistics__HashTableAllocs_36;
#line 259 "table_statistics.m"
        MR_Integer mercury__table_statistics__HashTableBytes_37;
#line 259 "table_statistics.m"
        MR_Integer mercury__table_statistics__HashLinkChunkAllocs_38;
#line 259 "table_statistics.m"
        MR_Integer mercury__table_statistics__HashLinkChunkBytes_39;
#line 259 "table_statistics.m"
        MR_Integer mercury__table_statistics__HashKeyComparesNotDupl_40;
#line 259 "table_statistics.m"
        MR_Integer mercury__table_statistics__HashKeyComparesIsDupl_41;
#line 259 "table_statistics.m"
        MR_Integer mercury__table_statistics__HashResizes_42;
#line 259 "table_statistics.m"
        MR_Integer mercury__table_statistics__HashResizeOldEntries_43;
#line 259 "table_statistics.m"
        MR_Integer mercury__table_statistics__HashResizeNewEntries_44;
#line 259 "table_statistics.m"
        MR_Integer mercury__table_statistics__EnumNodeAllocs_45;
#line 259 "table_statistics.m"
        MR_Integer mercury__table_statistics__EnumNodeBytes_46;
#line 259 "table_statistics.m"
        MR_Integer mercury__table_statistics__DuNodeAllocs_47;
#line 259 "table_statistics.m"
        MR_Integer mercury__table_statistics__DuNodeBytes_48;
#line 259 "table_statistics.m"
        MR_Integer mercury__table_statistics__DuArgLookups_49;
#line 259 "table_statistics.m"
        MR_Integer mercury__table_statistics__DuExistLookups_50;
#line 259 "table_statistics.m"
        MR_Integer mercury__table_statistics__StartAllocs_51;
#line 259 "table_statistics.m"
        MR_Integer mercury__table_statistics__StartBytes_52;
#line 259 "table_statistics.m"
        MR_Word mercury__table_statistics__Details_53;

#line 258 "table_statistics.m"
        {
#line 258 "table_statistics.m"
          mercury__table_statistics__get_one_table_stats_step_loop_8_p_0(mercury__table_statistics__StepDescsPtr_9, mercury__table_statistics__StatsPtr_10, mercury__table_statistics__V_19_19, mercury__table_statistics__NumSteps_12, mercury__table_statistics__STATE_VARIABLE_StepStats_0_15, &mercury__table_statistics__STATE_VARIABLE_StepStats_20_20);
        }
#line 419 "table_statistics.m"
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
#line 419 "table_statistics.m"

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

#line 9149 "table_statistics.c"

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
#line 419 "table_statistics.m"
}
#line 279 "table_statistics.m"
        mercury__table_statistics__succeeded = (mercury__table_statistics__KindInt_35 == (MR_Integer) 0);
#line 297 "table_statistics.m"
        if (mercury__table_statistics__succeeded)
#line 294 "table_statistics.m"
          {
#line 281 "table_statistics.m"
            mercury__table_statistics__succeeded = (mercury__table_statistics__EnumNodeAllocs_45 == (MR_Integer) 0);
#line 281 "table_statistics.m"
            if (mercury__table_statistics__succeeded)
#line 281 "table_statistics.m"
              {
#line 282 "table_statistics.m"
                mercury__table_statistics__succeeded = (mercury__table_statistics__EnumNodeBytes_46 == (MR_Integer) 0);
#line 281 "table_statistics.m"
                if (mercury__table_statistics__succeeded)
#line 281 "table_statistics.m"
                  {
#line 283 "table_statistics.m"
                    mercury__table_statistics__succeeded = (mercury__table_statistics__DuNodeAllocs_47 == (MR_Integer) 0);
#line 281 "table_statistics.m"
                    if (mercury__table_statistics__succeeded)
#line 281 "table_statistics.m"
                      {
#line 284 "table_statistics.m"
                        mercury__table_statistics__succeeded = (mercury__table_statistics__DuNodeBytes_48 == (MR_Integer) 0);
#line 281 "table_statistics.m"
                        if (mercury__table_statistics__succeeded)
#line 281 "table_statistics.m"
                          {
#line 285 "table_statistics.m"
                            mercury__table_statistics__succeeded = (mercury__table_statistics__DuArgLookups_49 == (MR_Integer) 0);
#line 281 "table_statistics.m"
                            if (mercury__table_statistics__succeeded)
#line 281 "table_statistics.m"
                              {
#line 286 "table_statistics.m"
                                mercury__table_statistics__succeeded = (mercury__table_statistics__DuExistLookups_50 == (MR_Integer) 0);
#line 281 "table_statistics.m"
                                if (mercury__table_statistics__succeeded)
#line 281 "table_statistics.m"
                                  {
#line 287 "table_statistics.m"
                                    mercury__table_statistics__succeeded = (mercury__table_statistics__StartAllocs_51 == (MR_Integer) 0);
#line 281 "table_statistics.m"
                                    if (mercury__table_statistics__succeeded)
#line 288 "table_statistics.m"
                                      mercury__table_statistics__succeeded = (mercury__table_statistics__StartBytes_52 == (MR_Integer) 0);
#line 281 "table_statistics.m"
                                  }
#line 281 "table_statistics.m"
                              }
#line 281 "table_statistics.m"
                          }
#line 281 "table_statistics.m"
                      }
#line 281 "table_statistics.m"
                  }
#line 281 "table_statistics.m"
              }
#line 294 "table_statistics.m"
            if (mercury__table_statistics__succeeded)
#line 290 "table_statistics.m"
              {
#line 290 "table_statistics.m"
                mercury__table_statistics__Details_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL));
#line 290 "table_statistics.m"
                MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 290 "table_statistics.m"
                MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_53, 1) = ((MR_Box) (mercury__table_statistics__HashTableAllocs_36));
#line 290 "table_statistics.m"
                MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_53, 2) = ((MR_Box) (mercury__table_statistics__HashTableBytes_37));
#line 290 "table_statistics.m"
                MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_53, 3) = ((MR_Box) (mercury__table_statistics__HashLinkChunkAllocs_38));
#line 290 "table_statistics.m"
                MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_53, 4) = ((MR_Box) (mercury__table_statistics__HashLinkChunkBytes_39));
#line 290 "table_statistics.m"
                MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_53, 5) = ((MR_Box) (mercury__table_statistics__HashKeyComparesNotDupl_40));
#line 290 "table_statistics.m"
                MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_53, 6) = ((MR_Box) (mercury__table_statistics__HashKeyComparesIsDupl_41));
#line 290 "table_statistics.m"
                MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_53, 7) = ((MR_Box) (mercury__table_statistics__HashResizes_42));
#line 290 "table_statistics.m"
                MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_53, 8) = ((MR_Box) (mercury__table_statistics__HashResizeOldEntries_43));
#line 290 "table_statistics.m"
                MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_53, 9) = ((MR_Box) (mercury__table_statistics__HashResizeNewEntries_44));
#line 290 "table_statistics.m"
              }
#line 294 "table_statistics.m"
            else
#line 295 "table_statistics.m"
              {
#line 295 "table_statistics.m"
                {
#line 295 "table_statistics.m"
                  mercury__require__error_1_p_0((MR_String) "get_one_table_step_stat_details: extra counts for hash");
#line 295 "table_statistics.m"
                  return;
                }
#line 295 "table_statistics.m"
              }
#line 294 "table_statistics.m"
          }
#line 297 "table_statistics.m"
        else
#line 319 "table_statistics.m"
          {
#line 297 "table_statistics.m"
            mercury__table_statistics__succeeded = (mercury__table_statistics__KindInt_35 == (MR_Integer) 1);
#line 319 "table_statistics.m"
            if (mercury__table_statistics__succeeded)
#line 316 "table_statistics.m"
              {
#line 299 "table_statistics.m"
                mercury__table_statistics__succeeded = (mercury__table_statistics__HashTableAllocs_36 == (MR_Integer) 0);
#line 299 "table_statistics.m"
                if (mercury__table_statistics__succeeded)
#line 299 "table_statistics.m"
                  {
#line 300 "table_statistics.m"
                    mercury__table_statistics__succeeded = (mercury__table_statistics__HashTableBytes_37 == (MR_Integer) 0);
#line 299 "table_statistics.m"
                    if (mercury__table_statistics__succeeded)
#line 299 "table_statistics.m"
                      {
#line 301 "table_statistics.m"
                        mercury__table_statistics__succeeded = (mercury__table_statistics__HashLinkChunkAllocs_38 == (MR_Integer) 0);
#line 299 "table_statistics.m"
                        if (mercury__table_statistics__succeeded)
#line 299 "table_statistics.m"
                          {
#line 302 "table_statistics.m"
                            mercury__table_statistics__succeeded = (mercury__table_statistics__HashLinkChunkBytes_39 == (MR_Integer) 0);
#line 299 "table_statistics.m"
                            if (mercury__table_statistics__succeeded)
#line 299 "table_statistics.m"
                              {
#line 303 "table_statistics.m"
                                mercury__table_statistics__succeeded = (mercury__table_statistics__HashKeyComparesNotDupl_40 == (MR_Integer) 0);
#line 299 "table_statistics.m"
                                if (mercury__table_statistics__succeeded)
#line 299 "table_statistics.m"
                                  {
#line 304 "table_statistics.m"
                                    mercury__table_statistics__succeeded = (mercury__table_statistics__HashKeyComparesIsDupl_41 == (MR_Integer) 0);
#line 299 "table_statistics.m"
                                    if (mercury__table_statistics__succeeded)
#line 299 "table_statistics.m"
                                      {
#line 305 "table_statistics.m"
                                        mercury__table_statistics__succeeded = (mercury__table_statistics__HashResizes_42 == (MR_Integer) 0);
#line 299 "table_statistics.m"
                                        if (mercury__table_statistics__succeeded)
#line 299 "table_statistics.m"
                                          {
#line 306 "table_statistics.m"
                                            mercury__table_statistics__succeeded = (mercury__table_statistics__HashResizeOldEntries_43 == (MR_Integer) 0);
#line 299 "table_statistics.m"
                                            if (mercury__table_statistics__succeeded)
#line 299 "table_statistics.m"
                                              {
#line 307 "table_statistics.m"
                                                mercury__table_statistics__succeeded = (mercury__table_statistics__HashResizeNewEntries_44 == (MR_Integer) 0);
#line 299 "table_statistics.m"
                                                if (mercury__table_statistics__succeeded)
#line 299 "table_statistics.m"
                                                  {
#line 308 "table_statistics.m"
                                                    mercury__table_statistics__succeeded = (mercury__table_statistics__DuNodeAllocs_47 == (MR_Integer) 0);
#line 299 "table_statistics.m"
                                                    if (mercury__table_statistics__succeeded)
#line 299 "table_statistics.m"
                                                      {
#line 309 "table_statistics.m"
                                                        mercury__table_statistics__succeeded = (mercury__table_statistics__DuNodeBytes_48 == (MR_Integer) 0);
#line 299 "table_statistics.m"
                                                        if (mercury__table_statistics__succeeded)
#line 299 "table_statistics.m"
                                                          {
#line 310 "table_statistics.m"
                                                            mercury__table_statistics__succeeded = (mercury__table_statistics__DuArgLookups_49 == (MR_Integer) 0);
#line 299 "table_statistics.m"
                                                            if (mercury__table_statistics__succeeded)
#line 299 "table_statistics.m"
                                                              {
#line 311 "table_statistics.m"
                                                                mercury__table_statistics__succeeded = (mercury__table_statistics__DuExistLookups_50 == (MR_Integer) 0);
#line 299 "table_statistics.m"
                                                                if (mercury__table_statistics__succeeded)
#line 299 "table_statistics.m"
                                                                  {
#line 312 "table_statistics.m"
                                                                    mercury__table_statistics__succeeded = (mercury__table_statistics__StartAllocs_51 == (MR_Integer) 0);
#line 299 "table_statistics.m"
                                                                    if (mercury__table_statistics__succeeded)
#line 313 "table_statistics.m"
                                                                      mercury__table_statistics__succeeded = (mercury__table_statistics__StartBytes_52 == (MR_Integer) 0);
#line 299 "table_statistics.m"
                                                                  }
#line 299 "table_statistics.m"
                                                              }
#line 299 "table_statistics.m"
                                                          }
#line 299 "table_statistics.m"
                                                      }
#line 299 "table_statistics.m"
                                                  }
#line 299 "table_statistics.m"
                                              }
#line 299 "table_statistics.m"
                                          }
#line 299 "table_statistics.m"
                                      }
#line 299 "table_statistics.m"
                                  }
#line 299 "table_statistics.m"
                              }
#line 299 "table_statistics.m"
                          }
#line 299 "table_statistics.m"
                      }
#line 299 "table_statistics.m"
                  }
#line 316 "table_statistics.m"
                if (mercury__table_statistics__succeeded)
#line 315 "table_statistics.m"
                  {
#line 315 "table_statistics.m"
                    mercury__table_statistics__Details_53 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 315 "table_statistics.m"
                    MR_hl_field(MR_mktag(2), mercury__table_statistics__Details_53, 0) = ((MR_Box) (mercury__table_statistics__EnumNodeAllocs_45));
#line 315 "table_statistics.m"
                    MR_hl_field(MR_mktag(2), mercury__table_statistics__Details_53, 1) = ((MR_Box) (mercury__table_statistics__EnumNodeBytes_46));
#line 315 "table_statistics.m"
                  }
#line 316 "table_statistics.m"
                else
#line 317 "table_statistics.m"
                  {
#line 317 "table_statistics.m"
                    {
#line 317 "table_statistics.m"
                      mercury__require__error_1_p_0((MR_String) "get_one_table_step_stat_details: extra counts for enum");
#line 317 "table_statistics.m"
                      return;
                    }
#line 317 "table_statistics.m"
                  }
#line 316 "table_statistics.m"
              }
#line 319 "table_statistics.m"
            else
#line 341 "table_statistics.m"
              {
#line 319 "table_statistics.m"
                mercury__table_statistics__succeeded = (mercury__table_statistics__KindInt_35 == (MR_Integer) 2);
#line 341 "table_statistics.m"
                if (mercury__table_statistics__succeeded)
#line 338 "table_statistics.m"
                  {
#line 321 "table_statistics.m"
                    mercury__table_statistics__succeeded = (mercury__table_statistics__HashTableAllocs_36 == (MR_Integer) 0);
#line 321 "table_statistics.m"
                    if (mercury__table_statistics__succeeded)
#line 321 "table_statistics.m"
                      {
#line 322 "table_statistics.m"
                        mercury__table_statistics__succeeded = (mercury__table_statistics__HashTableBytes_37 == (MR_Integer) 0);
#line 321 "table_statistics.m"
                        if (mercury__table_statistics__succeeded)
#line 321 "table_statistics.m"
                          {
#line 323 "table_statistics.m"
                            mercury__table_statistics__succeeded = (mercury__table_statistics__HashLinkChunkAllocs_38 == (MR_Integer) 0);
#line 321 "table_statistics.m"
                            if (mercury__table_statistics__succeeded)
#line 321 "table_statistics.m"
                              {
#line 324 "table_statistics.m"
                                mercury__table_statistics__succeeded = (mercury__table_statistics__HashLinkChunkBytes_39 == (MR_Integer) 0);
#line 321 "table_statistics.m"
                                if (mercury__table_statistics__succeeded)
#line 321 "table_statistics.m"
                                  {
#line 325 "table_statistics.m"
                                    mercury__table_statistics__succeeded = (mercury__table_statistics__HashKeyComparesNotDupl_40 == (MR_Integer) 0);
#line 321 "table_statistics.m"
                                    if (mercury__table_statistics__succeeded)
#line 321 "table_statistics.m"
                                      {
#line 326 "table_statistics.m"
                                        mercury__table_statistics__succeeded = (mercury__table_statistics__HashKeyComparesIsDupl_41 == (MR_Integer) 0);
#line 321 "table_statistics.m"
                                        if (mercury__table_statistics__succeeded)
#line 321 "table_statistics.m"
                                          {
#line 327 "table_statistics.m"
                                            mercury__table_statistics__succeeded = (mercury__table_statistics__HashResizes_42 == (MR_Integer) 0);
#line 321 "table_statistics.m"
                                            if (mercury__table_statistics__succeeded)
#line 321 "table_statistics.m"
                                              {
#line 328 "table_statistics.m"
                                                mercury__table_statistics__succeeded = (mercury__table_statistics__HashResizeOldEntries_43 == (MR_Integer) 0);
#line 321 "table_statistics.m"
                                                if (mercury__table_statistics__succeeded)
#line 321 "table_statistics.m"
                                                  {
#line 329 "table_statistics.m"
                                                    mercury__table_statistics__succeeded = (mercury__table_statistics__HashResizeNewEntries_44 == (MR_Integer) 0);
#line 321 "table_statistics.m"
                                                    if (mercury__table_statistics__succeeded)
#line 321 "table_statistics.m"
                                                      {
#line 330 "table_statistics.m"
                                                        mercury__table_statistics__succeeded = (mercury__table_statistics__EnumNodeAllocs_45 == (MR_Integer) 0);
#line 321 "table_statistics.m"
                                                        if (mercury__table_statistics__succeeded)
#line 321 "table_statistics.m"
                                                          {
#line 331 "table_statistics.m"
                                                            mercury__table_statistics__succeeded = (mercury__table_statistics__EnumNodeBytes_46 == (MR_Integer) 0);
#line 321 "table_statistics.m"
                                                            if (mercury__table_statistics__succeeded)
#line 321 "table_statistics.m"
                                                              {
#line 332 "table_statistics.m"
                                                                mercury__table_statistics__succeeded = (mercury__table_statistics__DuNodeAllocs_47 == (MR_Integer) 0);
#line 321 "table_statistics.m"
                                                                if (mercury__table_statistics__succeeded)
#line 321 "table_statistics.m"
                                                                  {
#line 333 "table_statistics.m"
                                                                    mercury__table_statistics__succeeded = (mercury__table_statistics__DuNodeBytes_48 == (MR_Integer) 0);
#line 321 "table_statistics.m"
                                                                    if (mercury__table_statistics__succeeded)
#line 321 "table_statistics.m"
                                                                      {
#line 334 "table_statistics.m"
                                                                        mercury__table_statistics__succeeded = (mercury__table_statistics__DuArgLookups_49 == (MR_Integer) 0);
#line 321 "table_statistics.m"
                                                                        if (mercury__table_statistics__succeeded)
#line 335 "table_statistics.m"
                                                                          mercury__table_statistics__succeeded = (mercury__table_statistics__DuExistLookups_50 == (MR_Integer) 0);
#line 321 "table_statistics.m"
                                                                      }
#line 321 "table_statistics.m"
                                                                  }
#line 321 "table_statistics.m"
                                                              }
#line 321 "table_statistics.m"
                                                          }
#line 321 "table_statistics.m"
                                                      }
#line 321 "table_statistics.m"
                                                  }
#line 321 "table_statistics.m"
                                              }
#line 321 "table_statistics.m"
                                          }
#line 321 "table_statistics.m"
                                      }
#line 321 "table_statistics.m"
                                  }
#line 321 "table_statistics.m"
                              }
#line 321 "table_statistics.m"
                          }
#line 321 "table_statistics.m"
                      }
#line 338 "table_statistics.m"
                    if (mercury__table_statistics__succeeded)
#line 337 "table_statistics.m"
                      {
#line 337 "table_statistics.m"
                        mercury__table_statistics__Details_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 337 "table_statistics.m"
                        MR_hl_field(MR_mktag(1), mercury__table_statistics__Details_53, 0) = ((MR_Box) (mercury__table_statistics__StartAllocs_51));
#line 337 "table_statistics.m"
                        MR_hl_field(MR_mktag(1), mercury__table_statistics__Details_53, 1) = ((MR_Box) (mercury__table_statistics__StartBytes_52));
#line 337 "table_statistics.m"
                      }
#line 338 "table_statistics.m"
                    else
#line 339 "table_statistics.m"
                      {
#line 339 "table_statistics.m"
                        {
#line 339 "table_statistics.m"
                          mercury__require__error_1_p_0((MR_String) "get_one_table_step_stat_details: extra counts for start");
#line 339 "table_statistics.m"
                          return;
                        }
#line 339 "table_statistics.m"
                      }
#line 338 "table_statistics.m"
                  }
#line 341 "table_statistics.m"
                else
#line 355 "table_statistics.m"
                  {
#line 341 "table_statistics.m"
                    mercury__table_statistics__succeeded = (mercury__table_statistics__KindInt_35 == (MR_Integer) 3);
#line 355 "table_statistics.m"
                    if (mercury__table_statistics__succeeded)
#line 352 "table_statistics.m"
                      {
#line 343 "table_statistics.m"
                        mercury__table_statistics__succeeded = (mercury__table_statistics__StartAllocs_51 == (MR_Integer) 0);
#line 343 "table_statistics.m"
                        if (mercury__table_statistics__succeeded)
#line 344 "table_statistics.m"
                          mercury__table_statistics__succeeded = (mercury__table_statistics__StartBytes_52 == (MR_Integer) 0);
#line 352 "table_statistics.m"
                        if (mercury__table_statistics__succeeded)
#line 346 "table_statistics.m"
                          {
#line 346 "table_statistics.m"
                            mercury__table_statistics__Details_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL));
#line 346 "table_statistics.m"
                            MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 346 "table_statistics.m"
                            MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_53, 1) = ((MR_Box) (mercury__table_statistics__DuNodeAllocs_47));
#line 346 "table_statistics.m"
                            MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_53, 2) = ((MR_Box) (mercury__table_statistics__DuNodeBytes_48));
#line 346 "table_statistics.m"
                            MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_53, 3) = ((MR_Box) (mercury__table_statistics__DuArgLookups_49));
#line 346 "table_statistics.m"
                            MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_53, 4) = ((MR_Box) (mercury__table_statistics__DuExistLookups_50));
#line 346 "table_statistics.m"
                            MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_53, 5) = ((MR_Box) (mercury__table_statistics__EnumNodeAllocs_45));
#line 346 "table_statistics.m"
                            MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_53, 6) = ((MR_Box) (mercury__table_statistics__EnumNodeBytes_46));
#line 346 "table_statistics.m"
                            MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_53, 7) = ((MR_Box) (mercury__table_statistics__HashTableAllocs_36));
#line 346 "table_statistics.m"
                            MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_53, 8) = ((MR_Box) (mercury__table_statistics__HashTableBytes_37));
#line 346 "table_statistics.m"
                            MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_53, 9) = ((MR_Box) (mercury__table_statistics__HashLinkChunkAllocs_38));
#line 346 "table_statistics.m"
                            MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_53, 10) = ((MR_Box) (mercury__table_statistics__HashLinkChunkBytes_39));
#line 346 "table_statistics.m"
                            MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_53, 11) = ((MR_Box) (mercury__table_statistics__HashKeyComparesNotDupl_40));
#line 346 "table_statistics.m"
                            MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_53, 12) = ((MR_Box) (mercury__table_statistics__HashKeyComparesIsDupl_41));
#line 346 "table_statistics.m"
                            MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_53, 13) = ((MR_Box) (mercury__table_statistics__HashResizes_42));
#line 346 "table_statistics.m"
                            MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_53, 14) = ((MR_Box) (mercury__table_statistics__HashResizeOldEntries_43));
#line 346 "table_statistics.m"
                            MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_53, 15) = ((MR_Box) (mercury__table_statistics__HashResizeNewEntries_44));
#line 346 "table_statistics.m"
                          }
#line 352 "table_statistics.m"
                        else
#line 353 "table_statistics.m"
                          {
#line 353 "table_statistics.m"
                            {
#line 353 "table_statistics.m"
                              mercury__require__error_1_p_0((MR_String) "get_one_table_step_stat_details: extra counts for du");
#line 353 "table_statistics.m"
                              return;
                            }
#line 353 "table_statistics.m"
                          }
#line 352 "table_statistics.m"
                      }
#line 355 "table_statistics.m"
                    else
#line 369 "table_statistics.m"
                      {
#line 355 "table_statistics.m"
                        mercury__table_statistics__succeeded = (mercury__table_statistics__KindInt_35 == (MR_Integer) 4);
#line 369 "table_statistics.m"
                        if (mercury__table_statistics__succeeded)
#line 366 "table_statistics.m"
                          {
#line 357 "table_statistics.m"
                            mercury__table_statistics__succeeded = (mercury__table_statistics__StartAllocs_51 == (MR_Integer) 0);
#line 357 "table_statistics.m"
                            if (mercury__table_statistics__succeeded)
#line 358 "table_statistics.m"
                              mercury__table_statistics__succeeded = (mercury__table_statistics__StartBytes_52 == (MR_Integer) 0);
#line 366 "table_statistics.m"
                            if (mercury__table_statistics__succeeded)
#line 360 "table_statistics.m"
                              {
#line 360 "table_statistics.m"
                                mercury__table_statistics__Details_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL));
#line 360 "table_statistics.m"
                                MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 360 "table_statistics.m"
                                MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_53, 1) = ((MR_Box) (mercury__table_statistics__DuNodeAllocs_47));
#line 360 "table_statistics.m"
                                MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_53, 2) = ((MR_Box) (mercury__table_statistics__DuNodeBytes_48));
#line 360 "table_statistics.m"
                                MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_53, 3) = ((MR_Box) (mercury__table_statistics__DuArgLookups_49));
#line 360 "table_statistics.m"
                                MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_53, 4) = ((MR_Box) (mercury__table_statistics__DuExistLookups_50));
#line 360 "table_statistics.m"
                                MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_53, 5) = ((MR_Box) (mercury__table_statistics__EnumNodeAllocs_45));
#line 360 "table_statistics.m"
                                MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_53, 6) = ((MR_Box) (mercury__table_statistics__EnumNodeBytes_46));
#line 360 "table_statistics.m"
                                MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_53, 7) = ((MR_Box) (mercury__table_statistics__HashTableAllocs_36));
#line 360 "table_statistics.m"
                                MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_53, 8) = ((MR_Box) (mercury__table_statistics__HashTableBytes_37));
#line 360 "table_statistics.m"
                                MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_53, 9) = ((MR_Box) (mercury__table_statistics__HashLinkChunkAllocs_38));
#line 360 "table_statistics.m"
                                MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_53, 10) = ((MR_Box) (mercury__table_statistics__HashLinkChunkBytes_39));
#line 360 "table_statistics.m"
                                MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_53, 11) = ((MR_Box) (mercury__table_statistics__HashKeyComparesNotDupl_40));
#line 360 "table_statistics.m"
                                MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_53, 12) = ((MR_Box) (mercury__table_statistics__HashKeyComparesIsDupl_41));
#line 360 "table_statistics.m"
                                MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_53, 13) = ((MR_Box) (mercury__table_statistics__HashResizes_42));
#line 360 "table_statistics.m"
                                MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_53, 14) = ((MR_Box) (mercury__table_statistics__HashResizeOldEntries_43));
#line 360 "table_statistics.m"
                                MR_hl_field(MR_mktag(3), mercury__table_statistics__Details_53, 15) = ((MR_Box) (mercury__table_statistics__HashResizeNewEntries_44));
#line 360 "table_statistics.m"
                              }
#line 366 "table_statistics.m"
                            else
#line 367 "table_statistics.m"
                              {
#line 367 "table_statistics.m"
                                {
#line 367 "table_statistics.m"
                                  mercury__require__error_1_p_0((MR_String) "get_one_table_step_stat_details: extra counts for poly");
#line 367 "table_statistics.m"
                                  return;
                                }
#line 367 "table_statistics.m"
                              }
#line 366 "table_statistics.m"
                          }
#line 369 "table_statistics.m"
                        else
#line 392 "table_statistics.m"
                          {
#line 369 "table_statistics.m"
                            mercury__table_statistics__succeeded = (mercury__table_statistics__KindInt_35 == (MR_Integer) 5);
#line 392 "table_statistics.m"
                            if (mercury__table_statistics__succeeded)
#line 389 "table_statistics.m"
                              {
#line 371 "table_statistics.m"
                                mercury__table_statistics__succeeded = (mercury__table_statistics__HashTableAllocs_36 == (MR_Integer) 0);
#line 371 "table_statistics.m"
                                if (mercury__table_statistics__succeeded)
#line 371 "table_statistics.m"
                                  {
#line 372 "table_statistics.m"
                                    mercury__table_statistics__succeeded = (mercury__table_statistics__HashTableBytes_37 == (MR_Integer) 0);
#line 371 "table_statistics.m"
                                    if (mercury__table_statistics__succeeded)
#line 371 "table_statistics.m"
                                      {
#line 373 "table_statistics.m"
                                        mercury__table_statistics__succeeded = (mercury__table_statistics__HashLinkChunkAllocs_38 == (MR_Integer) 0);
#line 371 "table_statistics.m"
                                        if (mercury__table_statistics__succeeded)
#line 371 "table_statistics.m"
                                          {
#line 374 "table_statistics.m"
                                            mercury__table_statistics__succeeded = (mercury__table_statistics__HashKeyComparesNotDupl_40 == (MR_Integer) 0);
#line 371 "table_statistics.m"
                                            if (mercury__table_statistics__succeeded)
#line 371 "table_statistics.m"
                                              {
#line 375 "table_statistics.m"
                                                mercury__table_statistics__succeeded = (mercury__table_statistics__HashKeyComparesIsDupl_41 == (MR_Integer) 0);
#line 371 "table_statistics.m"
                                                if (mercury__table_statistics__succeeded)
#line 371 "table_statistics.m"
                                                  {
#line 376 "table_statistics.m"
                                                    mercury__table_statistics__succeeded = (mercury__table_statistics__HashResizes_42 == (MR_Integer) 0);
#line 371 "table_statistics.m"
                                                    if (mercury__table_statistics__succeeded)
#line 371 "table_statistics.m"
                                                      {
#line 377 "table_statistics.m"
                                                        mercury__table_statistics__succeeded = (mercury__table_statistics__HashResizeOldEntries_43 == (MR_Integer) 0);
#line 371 "table_statistics.m"
                                                        if (mercury__table_statistics__succeeded)
#line 371 "table_statistics.m"
                                                          {
#line 378 "table_statistics.m"
                                                            mercury__table_statistics__succeeded = (mercury__table_statistics__HashResizeNewEntries_44 == (MR_Integer) 0);
#line 371 "table_statistics.m"
                                                            if (mercury__table_statistics__succeeded)
#line 371 "table_statistics.m"
                                                              {
#line 379 "table_statistics.m"
                                                                mercury__table_statistics__succeeded = (mercury__table_statistics__EnumNodeAllocs_45 == (MR_Integer) 0);
#line 371 "table_statistics.m"
                                                                if (mercury__table_statistics__succeeded)
#line 371 "table_statistics.m"
                                                                  {
#line 380 "table_statistics.m"
                                                                    mercury__table_statistics__succeeded = (mercury__table_statistics__EnumNodeBytes_46 == (MR_Integer) 0);
#line 371 "table_statistics.m"
                                                                    if (mercury__table_statistics__succeeded)
#line 371 "table_statistics.m"
                                                                      {
#line 381 "table_statistics.m"
                                                                        mercury__table_statistics__succeeded = (mercury__table_statistics__DuNodeAllocs_47 == (MR_Integer) 0);
#line 371 "table_statistics.m"
                                                                        if (mercury__table_statistics__succeeded)
#line 371 "table_statistics.m"
                                                                          {
#line 382 "table_statistics.m"
                                                                            mercury__table_statistics__succeeded = (mercury__table_statistics__DuNodeBytes_48 == (MR_Integer) 0);
#line 371 "table_statistics.m"
                                                                            if (mercury__table_statistics__succeeded)
#line 371 "table_statistics.m"
                                                                              {
#line 383 "table_statistics.m"
                                                                                mercury__table_statistics__succeeded = (mercury__table_statistics__DuArgLookups_49 == (MR_Integer) 0);
#line 371 "table_statistics.m"
                                                                                if (mercury__table_statistics__succeeded)
#line 371 "table_statistics.m"
                                                                                  {
#line 384 "table_statistics.m"
                                                                                    mercury__table_statistics__succeeded = (mercury__table_statistics__DuExistLookups_50 == (MR_Integer) 0);
#line 371 "table_statistics.m"
                                                                                    if (mercury__table_statistics__succeeded)
#line 371 "table_statistics.m"
                                                                                      {
#line 385 "table_statistics.m"
                                                                                        mercury__table_statistics__succeeded = (mercury__table_statistics__StartAllocs_51 == (MR_Integer) 0);
#line 371 "table_statistics.m"
                                                                                        if (mercury__table_statistics__succeeded)
#line 386 "table_statistics.m"
                                                                                          mercury__table_statistics__succeeded = (mercury__table_statistics__StartBytes_52 == (MR_Integer) 0);
#line 371 "table_statistics.m"
                                                                                      }
#line 371 "table_statistics.m"
                                                                                  }
#line 371 "table_statistics.m"
                                                                              }
#line 371 "table_statistics.m"
                                                                          }
#line 371 "table_statistics.m"
                                                                      }
#line 371 "table_statistics.m"
                                                                  }
#line 371 "table_statistics.m"
                                                              }
#line 371 "table_statistics.m"
                                                          }
#line 371 "table_statistics.m"
                                                      }
#line 371 "table_statistics.m"
                                                  }
#line 371 "table_statistics.m"
                                              }
#line 371 "table_statistics.m"
                                          }
#line 371 "table_statistics.m"
                                      }
#line 371 "table_statistics.m"
                                  }
#line 389 "table_statistics.m"
                                if (mercury__table_statistics__succeeded)
#line 388 "table_statistics.m"
                                  mercury__table_statistics__Details_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 389 "table_statistics.m"
                                else
#line 390 "table_statistics.m"
                                  {
#line 390 "table_statistics.m"
                                    {
#line 390 "table_statistics.m"
                                      mercury__require__error_1_p_0((MR_String) "get_one_table_step_stat_details: extra counts for none");
#line 390 "table_statistics.m"
                                      return;
                                    }
#line 390 "table_statistics.m"
                                  }
#line 389 "table_statistics.m"
                              }
#line 392 "table_statistics.m"
                            else
#line 393 "table_statistics.m"
                              {
#line 393 "table_statistics.m"
                                {
#line 393 "table_statistics.m"
                                  mercury__require__error_1_p_0((MR_String) "get_one_table_step_stat_details: unexpected detail kind");
#line 393 "table_statistics.m"
                                  return;
                                }
#line 393 "table_statistics.m"
                              }
#line 392 "table_statistics.m"
                          }
#line 369 "table_statistics.m"
                      }
#line 355 "table_statistics.m"
                  }
#line 341 "table_statistics.m"
              }
#line 319 "table_statistics.m"
          }
#line 395 "table_statistics.m"
        {
#line 395 "table_statistics.m"
          mercury__table_statistics__StepStats_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 395 "table_statistics.m"
          MR_hl_field(MR_mktag(0), mercury__table_statistics__StepStats_13, 0) = ((MR_Box) (mercury__table_statistics__VarName_32));
#line 395 "table_statistics.m"
          MR_hl_field(MR_mktag(0), mercury__table_statistics__StepStats_13, 1) = ((MR_Box) (mercury__table_statistics__NumLookups_33));
#line 395 "table_statistics.m"
          MR_hl_field(MR_mktag(0), mercury__table_statistics__StepStats_13, 2) = ((MR_Box) (mercury__table_statistics__NumLookupsIsDupl_34));
#line 395 "table_statistics.m"
          MR_hl_field(MR_mktag(0), mercury__table_statistics__StepStats_13, 3) = ((MR_Box) (mercury__table_statistics__Details_53));
#line 395 "table_statistics.m"
        }
#line 262 "table_statistics.m"
        {
#line 262 "table_statistics.m"
          MR_Word base;
#line 262 "table_statistics.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 262 "table_statistics.m"
          *mercury__table_statistics__STATE_VARIABLE_StepStats_16 = base;
#line 262 "table_statistics.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__table_statistics__StepStats_13));
#line 262 "table_statistics.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__table_statistics__STATE_VARIABLE_StepStats_20_20));
#line 262 "table_statistics.m"
        }
#line 259 "table_statistics.m"
      }
#line 257 "table_statistics.m"
  }
#line 248 "table_statistics.m"
}

#line 236 "table_statistics.m"
static void MR_CALL 
mercury__table_statistics__get_one_table_overall_stats_5_p_0(
#line 236 "table_statistics.m"
  MR_Box mercury__table_statistics__StatsPtr_1,
#line 236 "table_statistics.m"
  MR_Integer * mercury__table_statistics__NumLookups_2,
#line 236 "table_statistics.m"
  MR_Integer * mercury__table_statistics__NumLookupsIsDupl_3)
#line 236 "table_statistics.m"
{
#line 239 "table_statistics.m"
  {
#line 239 "table_statistics.m"
    MR_bool mercury__table_statistics__succeeded;

#line 243 "table_statistics.m"
{
#define MR_PROC_LABEL mercury__table_statistics__get_one_table_overall_stats_5_p_0

	MR_TableStats * StatsPtr;
	MR_Integer NumLookups;
	MR_Integer NumLookupsIsDupl;

	StatsPtr = (MR_TableStats *) mercury__table_statistics__StatsPtr_1 ;
		{
#line 243 "table_statistics.m"

    NumLookups = StatsPtr->MR_ts_num_lookups;
    NumLookupsIsDupl = StatsPtr->MR_ts_num_lookups_is_dupl;

#line 9951 "table_statistics.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__table_statistics__NumLookups_2  = NumLookups;
	 *mercury__table_statistics__NumLookupsIsDupl_3  = NumLookupsIsDupl;
#line 243 "table_statistics.m"
}
#line 239 "table_statistics.m"
  }
#line 236 "table_statistics.m"
}

#line 197 "table_statistics.m"
static void MR_CALL 
mercury__table_statistics__get_proc_info_direct_fields_12_p_0(
#line 197 "table_statistics.m"
  MR_Box mercury__table_statistics__Info_1,
#line 197 "table_statistics.m"
  MR_Integer * mercury__table_statistics__HasAnswerTable_2,
#line 197 "table_statistics.m"
  MR_Integer * mercury__table_statistics__NumInputs_3,
#line 197 "table_statistics.m"
  MR_Integer * mercury__table_statistics__NumOutputs_4,
#line 197 "table_statistics.m"
  MR_Box * mercury__table_statistics__InputStepDescsPtr_5,
#line 197 "table_statistics.m"
  MR_Box * mercury__table_statistics__OutputStepDescsPtr_6,
#line 197 "table_statistics.m"
  MR_Box * mercury__table_statistics__CurCallStatsPtr_7,
#line 197 "table_statistics.m"
  MR_Box * mercury__table_statistics__PrevCallStatsPtr_8,
#line 197 "table_statistics.m"
  MR_Box * mercury__table_statistics__CurAnswerStatsPtr_9,
#line 197 "table_statistics.m"
  MR_Box * mercury__table_statistics__PrevAnswerStatsPtr_10)
#line 197 "table_statistics.m"
{
#line 203 "table_statistics.m"
  {
#line 203 "table_statistics.m"
    MR_bool mercury__table_statistics__succeeded;

#line 211 "table_statistics.m"
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
#line 211 "table_statistics.m"

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

#line 10027 "table_statistics.c"

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
#line 211 "table_statistics.m"
}
#line 203 "table_statistics.m"
  }
#line 197 "table_statistics.m"
}

#line 152 "table_statistics.m"
static void MR_CALL 
mercury__table_statistics__get_tabling_stats_4_p_0(
#line 152 "table_statistics.m"
  MR_Box mercury__table_statistics__Info_5,
#line 152 "table_statistics.m"
  MR_Word * mercury__table_statistics__Statistics_6)
#line 152 "table_statistics.m"
{
#line 159 "table_statistics.m"
  {
#line 159 "table_statistics.m"
    MR_bool mercury__table_statistics__succeeded;
#line 159 "table_statistics.m"
    MR_Integer mercury__table_statistics__HasAnswerTable_8;
#line 159 "table_statistics.m"
    MR_Integer mercury__table_statistics__NumInputs_9;
#line 159 "table_statistics.m"
    MR_Integer mercury__table_statistics__NumOutputs_10;
#line 159 "table_statistics.m"
    MR_Box mercury__table_statistics__InputStepDescsPtr_11;
#line 159 "table_statistics.m"
    MR_Box mercury__table_statistics__OutputStepDescsPtr_12;
#line 159 "table_statistics.m"
    MR_Box mercury__table_statistics__CurCallStatsPtr_13;
#line 159 "table_statistics.m"
    MR_Box mercury__table_statistics__PrevCallStatsPtr_14;
#line 159 "table_statistics.m"
    MR_Box mercury__table_statistics__CurAnswerStatsPtr_15;
#line 159 "table_statistics.m"
    MR_Box mercury__table_statistics__PrevAnswerStatsPtr_16;
#line 159 "table_statistics.m"
    MR_Word mercury__table_statistics__CurCallStats_17;
#line 159 "table_statistics.m"
    MR_Word mercury__table_statistics__PrevCallStats_18;
#line 159 "table_statistics.m"
    MR_Word mercury__table_statistics__CallStats_19;
#line 159 "table_statistics.m"
    MR_Word mercury__table_statistics__MaybeAnswerStats_23;
#line 159 "table_statistics.m"
    MR_Integer mercury__table_statistics__NumLookups_41;
#line 159 "table_statistics.m"
    MR_Integer mercury__table_statistics__NumLookupsIsDupl_42;
#line 159 "table_statistics.m"
    MR_Word mercury__table_statistics__StepStats_43;
#line 159 "table_statistics.m"
    MR_Word mercury__table_statistics__V_46_46;
#line 159 "table_statistics.m"
    MR_Integer mercury__table_statistics__NumLookups_55;
#line 159 "table_statistics.m"
    MR_Integer mercury__table_statistics__NumLookupsIsDupl_56;
#line 159 "table_statistics.m"
    MR_Word mercury__table_statistics__StepStats_57;
#line 159 "table_statistics.m"
    MR_Word mercury__table_statistics__V_60_60;

#line 211 "table_statistics.m"
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
#line 211 "table_statistics.m"

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

#line 10136 "table_statistics.c"

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
#line 211 "table_statistics.m"
}
#line 243 "table_statistics.m"
{
#define MR_PROC_LABEL mercury__table_statistics__get_tabling_stats_4_p_0

	MR_TableStats * StatsPtr;
	MR_Integer NumLookups;
	MR_Integer NumLookupsIsDupl;

	StatsPtr = (MR_TableStats *) mercury__table_statistics__CurCallStatsPtr_13 ;
		{
#line 243 "table_statistics.m"

    NumLookups = StatsPtr->MR_ts_num_lookups;
    NumLookupsIsDupl = StatsPtr->MR_ts_num_lookups_is_dupl;

#line 10166 "table_statistics.c"

		;}
#undef MR_PROC_LABEL
	 mercury__table_statistics__NumLookups_41  = NumLookups;
	 mercury__table_statistics__NumLookupsIsDupl_42  = NumLookupsIsDupl;
#line 243 "table_statistics.m"
}
#line 233 "table_statistics.m"
    mercury__table_statistics__V_46_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 232 "table_statistics.m"
    {
#line 232 "table_statistics.m"
      mercury__table_statistics__get_one_table_stats_step_loop_8_p_0(mercury__table_statistics__InputStepDescsPtr_11, mercury__table_statistics__CurCallStatsPtr_13, (MR_Integer) 0, mercury__table_statistics__NumInputs_9, mercury__table_statistics__V_46_46, &mercury__table_statistics__StepStats_43);
    }
#line 234 "table_statistics.m"
    {
#line 234 "table_statistics.m"
      mercury__table_statistics__CurCallStats_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 234 "table_statistics.m"
      MR_hl_field(MR_mktag(0), mercury__table_statistics__CurCallStats_17, 0) = ((MR_Box) (mercury__table_statistics__NumLookups_41));
#line 234 "table_statistics.m"
      MR_hl_field(MR_mktag(0), mercury__table_statistics__CurCallStats_17, 1) = ((MR_Box) (mercury__table_statistics__NumLookupsIsDupl_42));
#line 234 "table_statistics.m"
      MR_hl_field(MR_mktag(0), mercury__table_statistics__CurCallStats_17, 2) = ((MR_Box) (mercury__table_statistics__StepStats_43));
#line 234 "table_statistics.m"
    }
#line 243 "table_statistics.m"
{
#define MR_PROC_LABEL mercury__table_statistics__get_tabling_stats_4_p_0

	MR_TableStats * StatsPtr;
	MR_Integer NumLookups;
	MR_Integer NumLookupsIsDupl;

	StatsPtr = (MR_TableStats *) mercury__table_statistics__PrevCallStatsPtr_14 ;
		{
#line 243 "table_statistics.m"

    NumLookups = StatsPtr->MR_ts_num_lookups;
    NumLookupsIsDupl = StatsPtr->MR_ts_num_lookups_is_dupl;

#line 10208 "table_statistics.c"

		;}
#undef MR_PROC_LABEL
	 mercury__table_statistics__NumLookups_55  = NumLookups;
	 mercury__table_statistics__NumLookupsIsDupl_56  = NumLookupsIsDupl;
#line 243 "table_statistics.m"
}
#line 233 "table_statistics.m"
    mercury__table_statistics__V_60_60 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 232 "table_statistics.m"
    {
#line 232 "table_statistics.m"
      mercury__table_statistics__get_one_table_stats_step_loop_8_p_0(mercury__table_statistics__InputStepDescsPtr_11, mercury__table_statistics__PrevCallStatsPtr_14, (MR_Integer) 0, mercury__table_statistics__NumInputs_9, mercury__table_statistics__V_60_60, &mercury__table_statistics__StepStats_57);
    }
#line 234 "table_statistics.m"
    {
#line 234 "table_statistics.m"
      mercury__table_statistics__PrevCallStats_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 234 "table_statistics.m"
      MR_hl_field(MR_mktag(0), mercury__table_statistics__PrevCallStats_18, 0) = ((MR_Box) (mercury__table_statistics__NumLookups_55));
#line 234 "table_statistics.m"
      MR_hl_field(MR_mktag(0), mercury__table_statistics__PrevCallStats_18, 1) = ((MR_Box) (mercury__table_statistics__NumLookupsIsDupl_56));
#line 234 "table_statistics.m"
      MR_hl_field(MR_mktag(0), mercury__table_statistics__PrevCallStats_18, 2) = ((MR_Box) (mercury__table_statistics__StepStats_57));
#line 234 "table_statistics.m"
    }
#line 168 "table_statistics.m"
    {
#line 168 "table_statistics.m"
      mercury__table_statistics__CallStats_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 168 "table_statistics.m"
      MR_hl_field(MR_mktag(0), mercury__table_statistics__CallStats_19, 0) = ((MR_Box) (mercury__table_statistics__CurCallStats_17));
#line 168 "table_statistics.m"
      MR_hl_field(MR_mktag(0), mercury__table_statistics__CallStats_19, 1) = ((MR_Box) (mercury__table_statistics__PrevCallStats_18));
#line 168 "table_statistics.m"
    }
#line 461 "table_statistics.m"
{
#define MR_PROC_LABEL mercury__table_statistics__get_tabling_stats_4_p_0

	MR_TableStats * CurPtr;
	MR_TableStats * PrevPtr;
	MR_Integer NumSteps;

	CurPtr = (MR_TableStats *) mercury__table_statistics__CurCallStatsPtr_13 ;
	PrevPtr = (MR_TableStats *) mercury__table_statistics__PrevCallStatsPtr_14 ;
	NumSteps =  mercury__table_statistics__NumInputs_9 ;
		{
#line 461 "table_statistics.m"

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

#line 10314 "table_statistics.c"

		;}
#undef MR_PROC_LABEL
#line 461 "table_statistics.m"
}
#line 171 "table_statistics.m"
    mercury__table_statistics__succeeded = (mercury__table_statistics__HasAnswerTable_8 > (MR_Integer) 0);
#line 180 "table_statistics.m"
    if (mercury__table_statistics__succeeded)
#line 173 "table_statistics.m"
      {
#line 173 "table_statistics.m"
        MR_Word mercury__table_statistics__CurAnswerStats_20;
#line 173 "table_statistics.m"
        MR_Word mercury__table_statistics__PrevAnswerStats_21;
#line 173 "table_statistics.m"
        MR_Word mercury__table_statistics__AnswerStats_22;
#line 173 "table_statistics.m"
        MR_Integer mercury__table_statistics__NumLookups_69;
#line 173 "table_statistics.m"
        MR_Integer mercury__table_statistics__NumLookupsIsDupl_70;
#line 173 "table_statistics.m"
        MR_Word mercury__table_statistics__StepStats_71;
#line 173 "table_statistics.m"
        MR_Word mercury__table_statistics__V_74_74;
#line 173 "table_statistics.m"
        MR_Integer mercury__table_statistics__NumLookups_83;
#line 173 "table_statistics.m"
        MR_Integer mercury__table_statistics__NumLookupsIsDupl_84;
#line 173 "table_statistics.m"
        MR_Word mercury__table_statistics__StepStats_85;
#line 173 "table_statistics.m"
        MR_Word mercury__table_statistics__V_88_88;

#line 243 "table_statistics.m"
{
#define MR_PROC_LABEL mercury__table_statistics__get_tabling_stats_4_p_0

	MR_TableStats * StatsPtr;
	MR_Integer NumLookups;
	MR_Integer NumLookupsIsDupl;

	StatsPtr = (MR_TableStats *) mercury__table_statistics__CurAnswerStatsPtr_15 ;
		{
#line 243 "table_statistics.m"

    NumLookups = StatsPtr->MR_ts_num_lookups;
    NumLookupsIsDupl = StatsPtr->MR_ts_num_lookups_is_dupl;

#line 10364 "table_statistics.c"

		;}
#undef MR_PROC_LABEL
	 mercury__table_statistics__NumLookups_69  = NumLookups;
	 mercury__table_statistics__NumLookupsIsDupl_70  = NumLookupsIsDupl;
#line 243 "table_statistics.m"
}
#line 233 "table_statistics.m"
        mercury__table_statistics__V_74_74 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 232 "table_statistics.m"
        {
#line 232 "table_statistics.m"
          mercury__table_statistics__get_one_table_stats_step_loop_8_p_0(mercury__table_statistics__OutputStepDescsPtr_12, mercury__table_statistics__CurAnswerStatsPtr_15, (MR_Integer) 0, mercury__table_statistics__NumOutputs_10, mercury__table_statistics__V_74_74, &mercury__table_statistics__StepStats_71);
        }
#line 234 "table_statistics.m"
        {
#line 234 "table_statistics.m"
          mercury__table_statistics__CurAnswerStats_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 234 "table_statistics.m"
          MR_hl_field(MR_mktag(0), mercury__table_statistics__CurAnswerStats_20, 0) = ((MR_Box) (mercury__table_statistics__NumLookups_69));
#line 234 "table_statistics.m"
          MR_hl_field(MR_mktag(0), mercury__table_statistics__CurAnswerStats_20, 1) = ((MR_Box) (mercury__table_statistics__NumLookupsIsDupl_70));
#line 234 "table_statistics.m"
          MR_hl_field(MR_mktag(0), mercury__table_statistics__CurAnswerStats_20, 2) = ((MR_Box) (mercury__table_statistics__StepStats_71));
#line 234 "table_statistics.m"
        }
#line 243 "table_statistics.m"
{
#define MR_PROC_LABEL mercury__table_statistics__get_tabling_stats_4_p_0

	MR_TableStats * StatsPtr;
	MR_Integer NumLookups;
	MR_Integer NumLookupsIsDupl;

	StatsPtr = (MR_TableStats *) mercury__table_statistics__PrevAnswerStatsPtr_16 ;
		{
#line 243 "table_statistics.m"

    NumLookups = StatsPtr->MR_ts_num_lookups;
    NumLookupsIsDupl = StatsPtr->MR_ts_num_lookups_is_dupl;

#line 10406 "table_statistics.c"

		;}
#undef MR_PROC_LABEL
	 mercury__table_statistics__NumLookups_83  = NumLookups;
	 mercury__table_statistics__NumLookupsIsDupl_84  = NumLookupsIsDupl;
#line 243 "table_statistics.m"
}
#line 233 "table_statistics.m"
        mercury__table_statistics__V_88_88 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 232 "table_statistics.m"
        {
#line 232 "table_statistics.m"
          mercury__table_statistics__get_one_table_stats_step_loop_8_p_0(mercury__table_statistics__OutputStepDescsPtr_12, mercury__table_statistics__PrevAnswerStatsPtr_16, (MR_Integer) 0, mercury__table_statistics__NumOutputs_10, mercury__table_statistics__V_88_88, &mercury__table_statistics__StepStats_85);
        }
#line 234 "table_statistics.m"
        {
#line 234 "table_statistics.m"
          mercury__table_statistics__PrevAnswerStats_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 234 "table_statistics.m"
          MR_hl_field(MR_mktag(0), mercury__table_statistics__PrevAnswerStats_21, 0) = ((MR_Box) (mercury__table_statistics__NumLookups_83));
#line 234 "table_statistics.m"
          MR_hl_field(MR_mktag(0), mercury__table_statistics__PrevAnswerStats_21, 1) = ((MR_Box) (mercury__table_statistics__NumLookupsIsDupl_84));
#line 234 "table_statistics.m"
          MR_hl_field(MR_mktag(0), mercury__table_statistics__PrevAnswerStats_21, 2) = ((MR_Box) (mercury__table_statistics__StepStats_85));
#line 234 "table_statistics.m"
        }
#line 176 "table_statistics.m"
        {
#line 176 "table_statistics.m"
          mercury__table_statistics__AnswerStats_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 176 "table_statistics.m"
          MR_hl_field(MR_mktag(0), mercury__table_statistics__AnswerStats_22, 0) = ((MR_Box) (mercury__table_statistics__CurAnswerStats_20));
#line 176 "table_statistics.m"
          MR_hl_field(MR_mktag(0), mercury__table_statistics__AnswerStats_22, 1) = ((MR_Box) (mercury__table_statistics__PrevAnswerStats_21));
#line 176 "table_statistics.m"
        }
#line 461 "table_statistics.m"
{
#define MR_PROC_LABEL mercury__table_statistics__get_tabling_stats_4_p_0

	MR_TableStats * CurPtr;
	MR_TableStats * PrevPtr;
	MR_Integer NumSteps;

	CurPtr = (MR_TableStats *) mercury__table_statistics__CurAnswerStatsPtr_15 ;
	PrevPtr = (MR_TableStats *) mercury__table_statistics__PrevAnswerStatsPtr_16 ;
	NumSteps =  mercury__table_statistics__NumOutputs_10 ;
		{
#line 461 "table_statistics.m"

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

#line 10512 "table_statistics.c"

		;}
#undef MR_PROC_LABEL
#line 461 "table_statistics.m"
}
#line 179 "table_statistics.m"
        {
#line 179 "table_statistics.m"
          mercury__table_statistics__MaybeAnswerStats_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 179 "table_statistics.m"
          MR_hl_field(MR_mktag(1), mercury__table_statistics__MaybeAnswerStats_23, 0) = ((MR_Box) (mercury__table_statistics__AnswerStats_22));
#line 179 "table_statistics.m"
        }
#line 173 "table_statistics.m"
      }
#line 180 "table_statistics.m"
    else
#line 181 "table_statistics.m"
      mercury__table_statistics__MaybeAnswerStats_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 183 "table_statistics.m"
    {
#line 183 "table_statistics.m"
      MR_Word base;
#line 183 "table_statistics.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 183 "table_statistics.m"
      *mercury__table_statistics__Statistics_6 = base;
#line 183 "table_statistics.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__table_statistics__CallStats_19));
#line 183 "table_statistics.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__table_statistics__MaybeAnswerStats_23));
#line 183 "table_statistics.m"
    }
#line 159 "table_statistics.m"
  }
#line 152 "table_statistics.m"
}

#line 138 "table_statistics.m"
void MR_CALL 
mercury__table_statistics__write_table_stats_3_p_0(
#line 138 "table_statistics.m"
  MR_Word mercury__table_statistics__Stats_4)
#line 138 "table_statistics.m"
{
#line 651 "table_statistics.m"
  {
#line 651 "table_statistics.m"
    MR_bool mercury__table_statistics__succeeded;
#line 651 "table_statistics.m"
    MR_Integer mercury__table_statistics__Lookups_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__table_statistics__Stats_4, (MR_Integer) 0)));
#line 651 "table_statistics.m"
    MR_Integer mercury__table_statistics__LookupsIsDupl_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__table_statistics__Stats_4, (MR_Integer) 1)));
#line 651 "table_statistics.m"
    MR_Word mercury__table_statistics__Steps_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__table_statistics__Stats_4, (MR_Integer) 2)));
#line 651 "table_statistics.m"
    MR_Integer mercury__table_statistics__LookupsNotDupl_9 = (mercury__table_statistics__Lookups_6 - mercury__table_statistics__LookupsIsDupl_7);
#line 651 "table_statistics.m"
    MR_String mercury__table_statistics__LookupsStr_10;
#line 651 "table_statistics.m"
    MR_String mercury__table_statistics__LookupsIsDuplStr_11;
#line 651 "table_statistics.m"
    MR_String mercury__table_statistics__LookupsNotDuplStr_12;
#line 651 "table_statistics.m"
    MR_String mercury__table_statistics__V_54_54;
#line 651 "table_statistics.m"
    MR_Word mercury__table_statistics__V_60_60;

#line 655 "table_statistics.m"
    {
#line 655 "table_statistics.m"
      mercury__table_statistics__LookupsStr_10 = mercury__string__int_to_string_thousands_1_f_0(mercury__table_statistics__Lookups_6);
    }
#line 656 "table_statistics.m"
    {
#line 656 "table_statistics.m"
      mercury__table_statistics__LookupsIsDuplStr_11 = mercury__string__int_to_string_thousands_1_f_0(mercury__table_statistics__LookupsIsDupl_7);
    }
#line 657 "table_statistics.m"
    {
#line 657 "table_statistics.m"
      mercury__table_statistics__LookupsNotDuplStr_12 = mercury__string__int_to_string_thousands_1_f_0(mercury__table_statistics__LookupsNotDupl_9);
    }
#line 659 "table_statistics.m"
    {
#line 659 "table_statistics.m"
      mercury__io__write_string_3_p_0((MR_String) "number of lookups:                            ");
    }
#line 10601 "table_statistics.c"
    mercury__table_statistics__V_60_60 = (MR_Word) &mercury__table_statistics_scalar_common_5[0];
#line 660 "table_statistics.m"
    {
#line 660 "table_statistics.m"
      mercury__string__format__format_string_component_width_noprec_4_p_0(mercury__table_statistics__V_60_60, (MR_Integer) 9, mercury__table_statistics__LookupsStr_10, &mercury__table_statistics__V_54_54);
    }
#line 660 "table_statistics.m"
    {
#line 660 "table_statistics.m"
      mercury__io__write_string_3_p_0(mercury__table_statistics__V_54_54);
    }
#line 659 "table_statistics.m"
    {
#line 659 "table_statistics.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 661 "table_statistics.m"
    mercury__table_statistics__succeeded = (mercury__table_statistics__Lookups_6 > (MR_Integer) 0);
#line 671 "table_statistics.m"
    if (mercury__table_statistics__succeeded)
#line 662 "table_statistics.m"
      {
#line 662 "table_statistics.m"
        MR_String mercury__table_statistics__FractionIsDuplStr_13;
#line 662 "table_statistics.m"
        MR_String mercury__table_statistics__FractionNotDuplStr_14;
#line 662 "table_statistics.m"
        MR_String mercury__table_statistics__V_66_66;
#line 662 "table_statistics.m"
        MR_String mercury__table_statistics__V_77_77;
#line 662 "table_statistics.m"
        MR_String mercury__table_statistics__V_89_89;
#line 662 "table_statistics.m"
        MR_String mercury__table_statistics__V_100_100;
#line 670 "table_statistics.m"
        MR_Integer mercury__table_statistics__V_15_15;

#line 662 "table_statistics.m"
        {
#line 662 "table_statistics.m"
          mercury__table_statistics__FractionIsDuplStr_13 = mercury__table_statistics__percentage_str_2_f_0(mercury__table_statistics__LookupsIsDupl_7, mercury__table_statistics__Lookups_6);
        }
#line 663 "table_statistics.m"
        {
#line 663 "table_statistics.m"
          mercury__table_statistics__FractionNotDuplStr_14 = mercury__table_statistics__percentage_str_2_f_0(mercury__table_statistics__LookupsNotDupl_9, mercury__table_statistics__Lookups_6);
        }
#line 665 "table_statistics.m"
        {
#line 665 "table_statistics.m"
          mercury__io__write_string_3_p_0((MR_String) "number of successful lookups (old calls):     ");
        }
#line 666 "table_statistics.m"
        {
#line 666 "table_statistics.m"
          mercury__string__format__format_string_component_width_noprec_4_p_0(mercury__table_statistics__V_60_60, (MR_Integer) 9, mercury__table_statistics__LookupsIsDuplStr_11, &mercury__table_statistics__V_66_66);
        }
#line 666 "table_statistics.m"
        {
#line 666 "table_statistics.m"
          mercury__io__write_string_3_p_0(mercury__table_statistics__V_66_66);
        }
#line 665 "table_statistics.m"
        {
#line 665 "table_statistics.m"
          mercury__io__write_string_3_p_0((MR_String) " ");
        }
#line 666 "table_statistics.m"
        {
#line 666 "table_statistics.m"
          mercury__string__format__format_string_component_width_noprec_4_p_0(mercury__table_statistics__V_60_60, (MR_Integer) 9, mercury__table_statistics__FractionIsDuplStr_13, &mercury__table_statistics__V_77_77);
        }
#line 666 "table_statistics.m"
        {
#line 666 "table_statistics.m"
          mercury__io__write_string_3_p_0(mercury__table_statistics__V_77_77);
        }
#line 665 "table_statistics.m"
        {
#line 665 "table_statistics.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 667 "table_statistics.m"
        {
#line 667 "table_statistics.m"
          mercury__io__write_string_3_p_0((MR_String) "number of unsuccessful lookups (new calls):   ");
        }
#line 668 "table_statistics.m"
        {
#line 668 "table_statistics.m"
          mercury__string__format__format_string_component_width_noprec_4_p_0(mercury__table_statistics__V_60_60, (MR_Integer) 9, mercury__table_statistics__LookupsNotDuplStr_12, &mercury__table_statistics__V_89_89);
        }
#line 668 "table_statistics.m"
        {
#line 668 "table_statistics.m"
          mercury__io__write_string_3_p_0(mercury__table_statistics__V_89_89);
        }
#line 667 "table_statistics.m"
        {
#line 667 "table_statistics.m"
          mercury__io__write_string_3_p_0((MR_String) " ");
        }
#line 668 "table_statistics.m"
        {
#line 668 "table_statistics.m"
          mercury__string__format__format_string_component_width_noprec_4_p_0(mercury__table_statistics__V_60_60, (MR_Integer) 9, mercury__table_statistics__FractionNotDuplStr_14, &mercury__table_statistics__V_100_100);
        }
#line 668 "table_statistics.m"
        {
#line 668 "table_statistics.m"
          mercury__io__write_string_3_p_0(mercury__table_statistics__V_100_100);
        }
#line 667 "table_statistics.m"
        {
#line 667 "table_statistics.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 669 "table_statistics.m"
        {
#line 669 "table_statistics.m"
          mercury__io__write_string_3_p_0((MR_String) "statistics for the individual steps:\n");
        }
#line 670 "table_statistics.m"
        {
#line 670 "table_statistics.m"
          mercury__table_statistics__foldl2__ho2_6_p_in__list_0(mercury__table_statistics__Steps_8, (MR_Integer) 1, &mercury__table_statistics__V_15_15);
        }
#line 662 "table_statistics.m"
      }
#line 671 "table_statistics.m"
    else
#line 671 "table_statistics.m"
      {
#line 671 "table_statistics.m"
      }
#line 651 "table_statistics.m"
  }
#line 138 "table_statistics.m"
}

#line 136 "table_statistics.m"
MR_Word MR_CALL 
mercury__table_statistics__table_stats_difference_2_f_0(
#line 136 "table_statistics.m"
  MR_Word mercury__table_statistics__StatsA_4,
#line 136 "table_statistics.m"
  MR_Word mercury__table_statistics__StatsB_5)
#line 136 "table_statistics.m"
{
#line 520 "table_statistics.m"
  {
#line 520 "table_statistics.m"
    MR_bool mercury__table_statistics__succeeded;
#line 520 "table_statistics.m"
    MR_Word mercury__table_statistics__StatsDiff_6;
#line 520 "table_statistics.m"
    MR_Integer mercury__table_statistics__LookupsA_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__table_statistics__StatsA_4, (MR_Integer) 0)));
#line 520 "table_statistics.m"
    MR_Integer mercury__table_statistics__LookupsIsDuplA_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__table_statistics__StatsA_4, (MR_Integer) 1)));
#line 520 "table_statistics.m"
    MR_Word mercury__table_statistics__StepsA_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__table_statistics__StatsA_4, (MR_Integer) 2)));
#line 520 "table_statistics.m"
    MR_Integer mercury__table_statistics__LookupsB_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__table_statistics__StatsB_5, (MR_Integer) 0)));
#line 520 "table_statistics.m"
    MR_Integer mercury__table_statistics__LookupsIsDuplB_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__table_statistics__StatsB_5, (MR_Integer) 1)));
#line 520 "table_statistics.m"
    MR_Word mercury__table_statistics__StepsB_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__table_statistics__StatsB_5, (MR_Integer) 2)));
#line 520 "table_statistics.m"
    MR_Integer mercury__table_statistics__LookupsDiff_13 = (mercury__table_statistics__LookupsA_7 - mercury__table_statistics__LookupsB_10);
#line 520 "table_statistics.m"
    MR_Integer mercury__table_statistics__LookupsIsDuplDiff_14 = (mercury__table_statistics__LookupsIsDuplA_8 - mercury__table_statistics__LookupsIsDuplB_11);
#line 520 "table_statistics.m"
    MR_Word mercury__table_statistics__StepsDiff_15;

#line 526 "table_statistics.m"
    {
#line 526 "table_statistics.m"
      mercury__table_statistics__StepsDiff_15 = mercury__table_statistics__table_step_stats_diff_2_f_0(mercury__table_statistics__StepsA_9, mercury__table_statistics__StepsB_12);
    }
#line 528 "table_statistics.m"
    {
#line 528 "table_statistics.m"
      mercury__table_statistics__StatsDiff_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 528 "table_statistics.m"
      MR_hl_field(MR_mktag(0), mercury__table_statistics__StatsDiff_6, 0) = ((MR_Box) (mercury__table_statistics__LookupsDiff_13));
#line 528 "table_statistics.m"
      MR_hl_field(MR_mktag(0), mercury__table_statistics__StatsDiff_6, 1) = ((MR_Box) (mercury__table_statistics__LookupsIsDuplDiff_14));
#line 528 "table_statistics.m"
      MR_hl_field(MR_mktag(0), mercury__table_statistics__StatsDiff_6, 2) = ((MR_Box) (mercury__table_statistics__StepsDiff_15));
#line 528 "table_statistics.m"
    }
#line 520 "table_statistics.m"
    return mercury__table_statistics__StatsDiff_6;
#line 520 "table_statistics.m"
  }
#line 136 "table_statistics.m"
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
