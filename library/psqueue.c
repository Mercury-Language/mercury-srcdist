/*
** Automatically generated from `psqueue.m'
** by the Mercury compiler,
** version rotd-2014-12-18
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


/* :- module psqueue. */
/* :- implementation. */

/*
INIT mercury__psqueue__init
ENDINIT
*/

#include "psqueue.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "benchmarking.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
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




#line 92 "psqueue.c"
static const MR_DuFunctorDesc mercury__psqueue__psqueue__du_functor_desc_loser_tree_2_0;

#line 95 "psqueue.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__psqueue__psqueue__pti_loser_tree_2__pseudo_1__pseudo_2;

#line 98 "psqueue.c"
static const MR_PseudoTypeInfo mercury__psqueue__psqueue__field_types_loser_tree_2_1[6];

#line 101 "psqueue.c"
static const MR_ConstString mercury__psqueue__psqueue__field_names_loser_tree_2_1[6];

#line 104 "psqueue.c"
static const MR_DuFunctorDesc mercury__psqueue__psqueue__du_functor_desc_loser_tree_2_1;

#line 107 "psqueue.c"
static const MR_DuFunctorDescPtr mercury__psqueue__psqueue__du_stag_ordered_loser_tree_2_0[1];

#line 110 "psqueue.c"
static const MR_DuFunctorDescPtr mercury__psqueue__psqueue__du_stag_ordered_loser_tree_2_1[1];

#line 113 "psqueue.c"
static const MR_DuPtagLayout mercury__psqueue__psqueue__du_ptag_ordered_loser_tree_2[2];

#line 116 "psqueue.c"
static const MR_DuFunctorDescPtr mercury__psqueue__psqueue__du_name_ordered_loser_tree_2[2];

#line 119 "psqueue.c"
static const MR_Integer mercury__psqueue__psqueue__functor_number_map_loser_tree_2[2];

#line 122 "psqueue.c"
static const MR_DuFunctorDesc mercury__psqueue__psqueue__du_functor_desc_psqueue_2_0;

#line 125 "psqueue.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__psqueue__psqueue__pti_winner_2__pseudo_1__pseudo_2;

#line 128 "psqueue.c"
static const MR_PseudoTypeInfo mercury__psqueue__psqueue__field_types_psqueue_2_1[1];

#line 131 "psqueue.c"
static const MR_DuFunctorDesc mercury__psqueue__psqueue__du_functor_desc_psqueue_2_1;

#line 134 "psqueue.c"
static const MR_DuFunctorDescPtr mercury__psqueue__psqueue__du_stag_ordered_psqueue_2_0[1];

#line 137 "psqueue.c"
static const MR_DuFunctorDescPtr mercury__psqueue__psqueue__du_stag_ordered_psqueue_2_1[1];

#line 140 "psqueue.c"
static const MR_DuPtagLayout mercury__psqueue__psqueue__du_ptag_ordered_psqueue_2[2];

#line 143 "psqueue.c"
static const MR_DuFunctorDescPtr mercury__psqueue__psqueue__du_name_ordered_psqueue_2[2];

#line 146 "psqueue.c"
static const MR_Integer mercury__psqueue__psqueue__functor_number_map_psqueue_2[2];

#line 149 "psqueue.c"
static const MR_PseudoTypeInfo mercury__psqueue__psqueue__field_types_tournament_view_2_0[2];

#line 152 "psqueue.c"
static const MR_DuFunctorDesc mercury__psqueue__psqueue__du_functor_desc_tournament_view_2_0;

#line 155 "psqueue.c"
static const MR_PseudoTypeInfo mercury__psqueue__psqueue__field_types_tournament_view_2_1[2];

#line 158 "psqueue.c"
static const MR_DuFunctorDesc mercury__psqueue__psqueue__du_functor_desc_tournament_view_2_1;

#line 161 "psqueue.c"
static const MR_DuFunctorDescPtr mercury__psqueue__psqueue__du_stag_ordered_tournament_view_2_0[1];

#line 164 "psqueue.c"
static const MR_DuFunctorDescPtr mercury__psqueue__psqueue__du_stag_ordered_tournament_view_2_1[1];

#line 167 "psqueue.c"
static const MR_DuPtagLayout mercury__psqueue__psqueue__du_ptag_ordered_tournament_view_2[2];

#line 170 "psqueue.c"
static const MR_DuFunctorDescPtr mercury__psqueue__psqueue__du_name_ordered_tournament_view_2[2];

#line 173 "psqueue.c"
static const MR_Integer mercury__psqueue__psqueue__functor_number_map_tournament_view_2[2];

#line 176 "psqueue.c"
static const MR_PseudoTypeInfo mercury__psqueue__psqueue__field_types_winner_2_0[4];

#line 179 "psqueue.c"
static const MR_ConstString mercury__psqueue__psqueue__field_names_winner_2_0[4];

#line 182 "psqueue.c"
static const MR_DuFunctorDesc mercury__psqueue__psqueue__du_functor_desc_winner_2_0;

#line 185 "psqueue.c"
static const MR_DuFunctorDescPtr mercury__psqueue__psqueue__du_stag_ordered_winner_2_0[1];

#line 188 "psqueue.c"
static const MR_DuPtagLayout mercury__psqueue__psqueue__du_ptag_ordered_winner_2[1];

#line 191 "psqueue.c"
static const MR_DuFunctorDescPtr mercury__psqueue__psqueue__du_name_ordered_winner_2[1];

#line 194 "psqueue.c"
static const MR_Integer mercury__psqueue__psqueue__functor_number_map_winner_2[1];

#line 197 "psqueue.c"
static MR_bool MR_CALL 
mercury__psqueue____Unify____loser_tree_2_0_10001(
#line 200 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_1,
#line 202 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_2,
#line 204 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_3,
#line 206 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_4);

#line 209 "psqueue.c"
static void MR_CALL 
mercury__psqueue____Compare____loser_tree_2_0_10001(
#line 212 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_1,
#line 214 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_2,
#line 216 "psqueue.c"
  MR_Box * mercury__psqueue__wrapper_arg_3,
#line 218 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_4,
#line 220 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_5);

#line 223 "psqueue.c"
static MR_bool MR_CALL 
mercury__psqueue____Unify____loser_tree_size_0_0_10001(
#line 226 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_1,
#line 228 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_2);

#line 231 "psqueue.c"
static void MR_CALL 
mercury__psqueue____Compare____loser_tree_size_0_0_10001(
#line 234 "psqueue.c"
  MR_Box * mercury__psqueue__wrapper_arg_1,
#line 236 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_2,
#line 238 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_3);

#line 241 "psqueue.c"
static MR_bool MR_CALL 
mercury__psqueue____Unify____psqueue_2_0_10001(
#line 244 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_1,
#line 246 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_2,
#line 248 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_3,
#line 250 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_4);

#line 253 "psqueue.c"
static void MR_CALL 
mercury__psqueue____Compare____psqueue_2_0_10001(
#line 256 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_1,
#line 258 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_2,
#line 260 "psqueue.c"
  MR_Box * mercury__psqueue__wrapper_arg_3,
#line 262 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_4,
#line 264 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_5);

#line 267 "psqueue.c"
static MR_bool MR_CALL 
mercury__psqueue____Unify____tournament_view_2_0_10001(
#line 270 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_1,
#line 272 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_2,
#line 274 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_3,
#line 276 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_4);

#line 279 "psqueue.c"
static void MR_CALL 
mercury__psqueue____Compare____tournament_view_2_0_10001(
#line 282 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_1,
#line 284 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_2,
#line 286 "psqueue.c"
  MR_Box * mercury__psqueue__wrapper_arg_3,
#line 288 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_4,
#line 290 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_5);

#line 293 "psqueue.c"
static MR_bool MR_CALL 
mercury__psqueue____Unify____winner_2_0_10001(
#line 296 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_1,
#line 298 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_2,
#line 300 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_3,
#line 302 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_4);

#line 305 "psqueue.c"
static void MR_CALL 
mercury__psqueue____Compare____winner_2_0_10001(
#line 308 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_1,
#line 310 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_2,
#line 312 "psqueue.c"
  MR_Box * mercury__psqueue__wrapper_arg_3,
#line 314 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_4,
#line 316 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_5);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 1357 "psqueue.m"
static MR_Word MR_CALL 
mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_107_101_121_115_95_95_91_49_93_95_48_1_f_0(
#line 1357 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_15,
#line 1357 "psqueue.m"
  MR_Word mercury__psqueue__LTree_3);

#line 1241 "psqueue.m"
static void MR_CALL 
mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_120_95_107_101_121_95_105_110_95_108_111_115_101_114_95_116_114_101_101_95_97_99_99_95_95_91_49_93_95_48_3_p_0(
#line 1241 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_21,
#line 1241 "psqueue.m"
  MR_Word mercury__psqueue__LTree_4,
#line 1241 "psqueue.m"
  MR_Box mercury__psqueue__STATE_VARIABLE_CurMax_0_17,
#line 1241 "psqueue.m"
  MR_Word * mercury__psqueue__MaybeMaxKey_6);

#line 1200 "psqueue.m"
static void MR_CALL 
mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_105_110_95_107_101_121_95_105_110_95_108_111_115_101_114_95_116_114_101_101_95_97_99_99_95_95_91_49_93_95_48_3_p_0(
#line 1200 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_21,
#line 1200 "psqueue.m"
  MR_Word mercury__psqueue__LTree_4,
#line 1200 "psqueue.m"
  MR_Box mercury__psqueue__STATE_VARIABLE_CurMin_0_17,
#line 1200 "psqueue.m"
  MR_Word * mercury__psqueue__MaybeMinKey_6);

#line 1185 "psqueue.m"
static void MR_CALL 
mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_105_110_95_107_101_121_95_105_110_95_108_111_115_101_114_95_116_114_101_101_95_95_91_49_93_95_48_2_p_0(
#line 1185 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_16,
#line 1185 "psqueue.m"
  MR_Word mercury__psqueue__LTree_3,
#line 1185 "psqueue.m"
  MR_Word * mercury__psqueue__MaybeMinKey_4);

#line 1122 "psqueue.m"
static void MR_CALL 
mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_105_110_95_112_114_105_111_95_105_110_95_108_111_115_101_114_95_116_114_101_101_95_97_99_99_95_95_91_50_93_95_48_3_p_0(
#line 1122 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_20,
#line 1122 "psqueue.m"
  MR_Word mercury__psqueue__LTree_4,
#line 1122 "psqueue.m"
  MR_Box mercury__psqueue__STATE_VARIABLE_CurMinPrio_0_17,
#line 1122 "psqueue.m"
  MR_Word * mercury__psqueue__MaybeMinPrio_6);

#line 1086 "psqueue.m"
static MR_bool MR_CALL 
mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_112_114_105_111_115_95_105_110_95_108_111_115_101_114_95_116_114_101_101_95_97_116_95_111_114_95_97_98_111_118_101_95_112_114_105_111_95_95_91_50_93_95_48_2_p_0(
#line 1086 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_11,
#line 1086 "psqueue.m"
  MR_Box mercury__psqueue__WinnerPrio_3,
#line 1086 "psqueue.m"
  MR_Word mercury__psqueue__LTree_4);

#line 492 "psqueue.m"
static MR_Word MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_98_97_108_97_110_99_101_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_5_f_0(
#line 492 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_24,
#line 492 "psqueue.m"
  MR_Integer mercury__psqueue__Prio_7,
#line 492 "psqueue.m"
  MR_Box mercury__psqueue__Key_8,
#line 492 "psqueue.m"
  MR_Word mercury__psqueue__LTreeL_9,
#line 492 "psqueue.m"
  MR_Box mercury__psqueue__SplitKey_10,
#line 492 "psqueue.m"
  MR_Word mercury__psqueue__LTreeR_11);

#line 521 "psqueue.m"
static MR_Word MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_98_97_108_97_110_99_101_95_108_101_102_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_5_f_0(
#line 521 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_26,
#line 521 "psqueue.m"
  MR_Integer mercury__psqueue__Prio_7,
#line 521 "psqueue.m"
  MR_Box mercury__psqueue__Key_8,
#line 521 "psqueue.m"
  MR_Word mercury__psqueue__LTreeL_9,
#line 521 "psqueue.m"
  MR_Box mercury__psqueue__SplitKey_10,
#line 521 "psqueue.m"
  MR_Word mercury__psqueue__LTreeR_11);

#line 543 "psqueue.m"
static MR_Word MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_98_97_108_97_110_99_101_95_114_105_103_104_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_5_f_0(
#line 543 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_26,
#line 543 "psqueue.m"
  MR_Integer mercury__psqueue__Prio_7,
#line 543 "psqueue.m"
  MR_Box mercury__psqueue__Key_8,
#line 543 "psqueue.m"
  MR_Word mercury__psqueue__LTreeL_9,
#line 543 "psqueue.m"
  MR_Box mercury__psqueue__SplitKey_10,
#line 543 "psqueue.m"
  MR_Word mercury__psqueue__LTreeR_11);

#line 604 "psqueue.m"
static MR_Word MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_105_110_103_108_101_95_108_101_102_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_5_f_0(
#line 604 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_25,
#line 604 "psqueue.m"
  MR_Integer mercury__psqueue__InsertPrio_7,
#line 604 "psqueue.m"
  MR_Box mercury__psqueue__InsertKey_8,
#line 604 "psqueue.m"
  MR_Word mercury__psqueue__LTreeA_9,
#line 604 "psqueue.m"
  MR_Box mercury__psqueue__SplitKeyAB_10,
#line 604 "psqueue.m"
  MR_Word mercury__psqueue__LTreeBC_11);

#line 636 "psqueue.m"
static MR_Word MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_105_110_103_108_101_95_114_105_103_104_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_5_f_0(
#line 636 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_26,
#line 636 "psqueue.m"
  MR_Integer mercury__psqueue__InsertPrio_7,
#line 636 "psqueue.m"
  MR_Box mercury__psqueue__InsertKey_8,
#line 636 "psqueue.m"
  MR_Word mercury__psqueue__LTreeAB_9,
#line 636 "psqueue.m"
  MR_Box mercury__psqueue__SplitKeyBC_10,
#line 636 "psqueue.m"
  MR_Word mercury__psqueue__LTreeC_11);

#line 1413 "psqueue.m"
static MR_String MR_CALL 
mercury__psqueue__dump_loser_tree_2_f_0(
#line 1413 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_46,
#line 1413 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_47,
#line 1413 "psqueue.m"
  MR_Integer mercury__psqueue__Indent_4,
#line 1413 "psqueue.m"
  MR_Word mercury__psqueue__LTree_5);

#line 1326 "psqueue.m"
static MR_bool MR_CALL 
mercury__psqueue__loser_split_keys_are_present_2_p_0(
#line 1326 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_12,
#line 1326 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_13,
#line 1326 "psqueue.m"
  MR_Word mercury__psqueue__PSQ_3,
#line 1326 "psqueue.m"
  MR_Word mercury__psqueue__LTree_4);

#line 1099 "psqueue.m"
static MR_bool MR_CALL 
mercury__psqueue__all_nodes_obey_semi_heap_1_p_0(
#line 1099 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_12,
#line 1099 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_13,
#line 1099 "psqueue.m"
  MR_Word mercury__psqueue__LTree_2);

#line 636 "psqueue.m"
static MR_Word MR_CALL 
mercury__psqueue__single_right_5_f_0(
#line 636 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_25,
#line 636 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_26,
#line 636 "psqueue.m"
  MR_Box mercury__psqueue__InsertPrio_7,
#line 636 "psqueue.m"
  MR_Box mercury__psqueue__InsertKey_8,
#line 636 "psqueue.m"
  MR_Word mercury__psqueue__LTreeAB_9,
#line 636 "psqueue.m"
  MR_Box mercury__psqueue__SplitKeyBC_10,
#line 636 "psqueue.m"
  MR_Word mercury__psqueue__LTreeC_11);

#line 604 "psqueue.m"
static MR_Word MR_CALL 
mercury__psqueue__single_left_5_f_0(
#line 604 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_24,
#line 604 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_25,
#line 604 "psqueue.m"
  MR_Box mercury__psqueue__InsertPrio_7,
#line 604 "psqueue.m"
  MR_Box mercury__psqueue__InsertKey_8,
#line 604 "psqueue.m"
  MR_Word mercury__psqueue__LTreeA_9,
#line 604 "psqueue.m"
  MR_Box mercury__psqueue__SplitKeyAB_10,
#line 604 "psqueue.m"
  MR_Word mercury__psqueue__LTreeBC_11);

#line 543 "psqueue.m"
static MR_Word MR_CALL 
mercury__psqueue__balance_right_5_f_0(
#line 543 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_25,
#line 543 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_26,
#line 543 "psqueue.m"
  MR_Box mercury__psqueue__Prio_7,
#line 543 "psqueue.m"
  MR_Box mercury__psqueue__Key_8,
#line 543 "psqueue.m"
  MR_Word mercury__psqueue__LTreeL_9,
#line 543 "psqueue.m"
  MR_Box mercury__psqueue__SplitKey_10,
#line 543 "psqueue.m"
  MR_Word mercury__psqueue__LTreeR_11);

#line 521 "psqueue.m"
static MR_Word MR_CALL 
mercury__psqueue__balance_left_5_f_0(
#line 521 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_25,
#line 521 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_26,
#line 521 "psqueue.m"
  MR_Box mercury__psqueue__Prio_7,
#line 521 "psqueue.m"
  MR_Box mercury__psqueue__Key_8,
#line 521 "psqueue.m"
  MR_Word mercury__psqueue__LTreeL_9,
#line 521 "psqueue.m"
  MR_Box mercury__psqueue__SplitKey_10,
#line 521 "psqueue.m"
  MR_Word mercury__psqueue__LTreeR_11);

#line 492 "psqueue.m"
static MR_Word MR_CALL 
mercury__psqueue__balance_5_f_0(
#line 492 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_23,
#line 492 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_24,
#line 492 "psqueue.m"
  MR_Box mercury__psqueue__Prio_7,
#line 492 "psqueue.m"
  MR_Box mercury__psqueue__Key_8,
#line 492 "psqueue.m"
  MR_Word mercury__psqueue__LTreeL_9,
#line 492 "psqueue.m"
  MR_Box mercury__psqueue__SplitKey_10,
#line 492 "psqueue.m"
  MR_Word mercury__psqueue__LTreeR_11);


static /* final */ const MR_Box mercury__psqueue_scalar_common_1[1][2];

static /* final */ const MR_Box mercury__psqueue_scalar_common_2[1][3];

static /* final */ const MR_Box mercury__psqueue_scalar_common_3[1][4];

static /* final */ const MR_Box mercury__psqueue_scalar_common_4[2][5];




static /* final */ const MR_Box mercury__psqueue_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_ops__op_table__arity1__ops__mercury_op_table__arity0__)),
    ((MR_Box) (&mercury__ops__ops__type_ctor_info_mercury_op_table_0))
  },
};

static /* final */ const MR_Box mercury__psqueue_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__psqueue_scalar_common_3[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__psqueue_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__psqueue_scalar_common_4[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__psqueue_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__psqueue_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



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
#include "table_builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
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
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "dir.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "table_builtin.mh"
#include "table_builtin.mh"
#include "time.mh"
#include "time.mh"
#include "version_array.mh"
#include "version_array.mh"



#line 965 "psqueue.c"
static const MR_DuFunctorDesc mercury__psqueue__psqueue__du_functor_desc_loser_tree_2_0 = {
  (MR_String) "loser_leaf",
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

#line 980 "psqueue.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__psqueue__psqueue__pti_loser_tree_2__pseudo_1__pseudo_2 = {
  &mercury__psqueue__psqueue__type_ctor_info_loser_tree_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 989 "psqueue.c"
static const MR_PseudoTypeInfo mercury__psqueue__psqueue__field_types_loser_tree_2_1[6] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 2,
  (MR_PseudoTypeInfo) &mercury__psqueue__psqueue__pti_loser_tree_2__pseudo_1__pseudo_2,
  (MR_PseudoTypeInfo) (MR_Integer) 2,
  (MR_PseudoTypeInfo) &mercury__psqueue__psqueue__pti_loser_tree_2__pseudo_1__pseudo_2
};

#line 999 "psqueue.c"
static const MR_ConstString mercury__psqueue__psqueue__field_names_loser_tree_2_1[6] = {
  (MR_String) "l_size",
  (MR_String) "l_prio",
  (MR_String) "l_key",
  (MR_String) "l_left_tree",
  (MR_String) "l_sort_key",
  (MR_String) "l_right_tree"
};

#line 1009 "psqueue.c"
static const MR_DuFunctorDesc mercury__psqueue__psqueue__du_functor_desc_loser_tree_2_1 = {
  (MR_String) "loser_node",
  (MR_Integer) 6,
  (MR_Integer) 62,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__psqueue__psqueue__field_types_loser_tree_2_1,
  mercury__psqueue__psqueue__field_names_loser_tree_2_1,
  NULL,
  NULL
};

#line 1024 "psqueue.c"
static const MR_DuFunctorDescPtr mercury__psqueue__psqueue__du_stag_ordered_loser_tree_2_0[1] = {
  &mercury__psqueue__psqueue__du_functor_desc_loser_tree_2_0
};

#line 1029 "psqueue.c"
static const MR_DuFunctorDescPtr mercury__psqueue__psqueue__du_stag_ordered_loser_tree_2_1[1] = {
  &mercury__psqueue__psqueue__du_functor_desc_loser_tree_2_1
};

#line 1034 "psqueue.c"
static const MR_DuPtagLayout mercury__psqueue__psqueue__du_ptag_ordered_loser_tree_2[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mercury__psqueue__psqueue__du_stag_ordered_loser_tree_2_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__psqueue__psqueue__du_stag_ordered_loser_tree_2_1
  }
};

#line 1048 "psqueue.c"
static const MR_DuFunctorDescPtr mercury__psqueue__psqueue__du_name_ordered_loser_tree_2[2] = {
  &mercury__psqueue__psqueue__du_functor_desc_loser_tree_2_0,
  &mercury__psqueue__psqueue__du_functor_desc_loser_tree_2_1
};

#line 1054 "psqueue.c"
static const MR_Integer mercury__psqueue__psqueue__functor_number_map_loser_tree_2[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1060 "psqueue.c"
const MR_TypeCtorInfo_Struct mercury__psqueue__psqueue__type_ctor_info_loser_tree_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__psqueue____Unify____loser_tree_2_0_10001)),
  ((MR_Box) (mercury__psqueue____Compare____loser_tree_2_0_10001)),
  (MR_String) "psqueue",
  (MR_String) "loser_tree",
  {
    mercury__psqueue__psqueue__du_name_ordered_loser_tree_2
  },
  {
    mercury__psqueue__psqueue__du_ptag_ordered_loser_tree_2
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__psqueue__psqueue__functor_number_map_loser_tree_2
};

#line 1081 "psqueue.c"
const MR_TypeCtorInfo_Struct mercury__psqueue__psqueue__type_ctor_info_loser_tree_size_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__psqueue____Unify____loser_tree_size_0_0_10001)),
  ((MR_Box) (mercury__psqueue____Compare____loser_tree_size_0_0_10001)),
  (MR_String) "psqueue",
  (MR_String) "loser_tree_size",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1102 "psqueue.c"
static const MR_DuFunctorDesc mercury__psqueue__psqueue__du_functor_desc_psqueue_2_0 = {
  (MR_String) "empty_psqueue",
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

#line 1117 "psqueue.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__psqueue__psqueue__pti_winner_2__pseudo_1__pseudo_2 = {
  &mercury__psqueue__psqueue__type_ctor_info_winner_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 1126 "psqueue.c"
static const MR_PseudoTypeInfo mercury__psqueue__psqueue__field_types_psqueue_2_1[1] = {
  (MR_PseudoTypeInfo) &mercury__psqueue__psqueue__pti_winner_2__pseudo_1__pseudo_2
};

#line 1131 "psqueue.c"
static const MR_DuFunctorDesc mercury__psqueue__psqueue__du_functor_desc_psqueue_2_1 = {
  (MR_String) "nonempty_psqueue",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__psqueue__psqueue__field_types_psqueue_2_1,
  NULL,
  NULL,
  NULL
};

#line 1146 "psqueue.c"
static const MR_DuFunctorDescPtr mercury__psqueue__psqueue__du_stag_ordered_psqueue_2_0[1] = {
  &mercury__psqueue__psqueue__du_functor_desc_psqueue_2_0
};

#line 1151 "psqueue.c"
static const MR_DuFunctorDescPtr mercury__psqueue__psqueue__du_stag_ordered_psqueue_2_1[1] = {
  &mercury__psqueue__psqueue__du_functor_desc_psqueue_2_1
};

#line 1156 "psqueue.c"
static const MR_DuPtagLayout mercury__psqueue__psqueue__du_ptag_ordered_psqueue_2[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mercury__psqueue__psqueue__du_stag_ordered_psqueue_2_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__psqueue__psqueue__du_stag_ordered_psqueue_2_1
  }
};

#line 1170 "psqueue.c"
static const MR_DuFunctorDescPtr mercury__psqueue__psqueue__du_name_ordered_psqueue_2[2] = {
  &mercury__psqueue__psqueue__du_functor_desc_psqueue_2_0,
  &mercury__psqueue__psqueue__du_functor_desc_psqueue_2_1
};

#line 1176 "psqueue.c"
static const MR_Integer mercury__psqueue__psqueue__functor_number_map_psqueue_2[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1182 "psqueue.c"
const MR_TypeCtorInfo_Struct mercury__psqueue__psqueue__type_ctor_info_psqueue_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__psqueue____Unify____psqueue_2_0_10001)),
  ((MR_Box) (mercury__psqueue____Compare____psqueue_2_0_10001)),
  (MR_String) "psqueue",
  (MR_String) "psqueue",
  {
    mercury__psqueue__psqueue__du_name_ordered_psqueue_2
  },
  {
    mercury__psqueue__psqueue__du_ptag_ordered_psqueue_2
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__psqueue__psqueue__functor_number_map_psqueue_2
};

#line 1203 "psqueue.c"
static const MR_PseudoTypeInfo mercury__psqueue__psqueue__field_types_tournament_view_2_0[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 2
};

#line 1209 "psqueue.c"
static const MR_DuFunctorDesc mercury__psqueue__psqueue__du_functor_desc_tournament_view_2_0 = {
  (MR_String) "singleton_tournament",
  (MR_Integer) 2,
  (MR_Integer) 3,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__psqueue__psqueue__field_types_tournament_view_2_0,
  NULL,
  NULL,
  NULL
};

#line 1224 "psqueue.c"
static const MR_PseudoTypeInfo mercury__psqueue__psqueue__field_types_tournament_view_2_1[2] = {
  (MR_PseudoTypeInfo) &mercury__psqueue__psqueue__pti_winner_2__pseudo_1__pseudo_2,
  (MR_PseudoTypeInfo) &mercury__psqueue__psqueue__pti_winner_2__pseudo_1__pseudo_2
};

#line 1230 "psqueue.c"
static const MR_DuFunctorDesc mercury__psqueue__psqueue__du_functor_desc_tournament_view_2_1 = {
  (MR_String) "tournament_between",
  (MR_Integer) 2,
  (MR_Integer) 3,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__psqueue__psqueue__field_types_tournament_view_2_1,
  NULL,
  NULL,
  NULL
};

#line 1245 "psqueue.c"
static const MR_DuFunctorDescPtr mercury__psqueue__psqueue__du_stag_ordered_tournament_view_2_0[1] = {
  &mercury__psqueue__psqueue__du_functor_desc_tournament_view_2_0
};

#line 1250 "psqueue.c"
static const MR_DuFunctorDescPtr mercury__psqueue__psqueue__du_stag_ordered_tournament_view_2_1[1] = {
  &mercury__psqueue__psqueue__du_functor_desc_tournament_view_2_1
};

#line 1255 "psqueue.c"
static const MR_DuPtagLayout mercury__psqueue__psqueue__du_ptag_ordered_tournament_view_2[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__psqueue__psqueue__du_stag_ordered_tournament_view_2_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__psqueue__psqueue__du_stag_ordered_tournament_view_2_1
  }
};

#line 1269 "psqueue.c"
static const MR_DuFunctorDescPtr mercury__psqueue__psqueue__du_name_ordered_tournament_view_2[2] = {
  &mercury__psqueue__psqueue__du_functor_desc_tournament_view_2_0,
  &mercury__psqueue__psqueue__du_functor_desc_tournament_view_2_1
};

#line 1275 "psqueue.c"
static const MR_Integer mercury__psqueue__psqueue__functor_number_map_tournament_view_2[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1281 "psqueue.c"
const MR_TypeCtorInfo_Struct mercury__psqueue__psqueue__type_ctor_info_tournament_view_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__psqueue____Unify____tournament_view_2_0_10001)),
  ((MR_Box) (mercury__psqueue____Compare____tournament_view_2_0_10001)),
  (MR_String) "psqueue",
  (MR_String) "tournament_view",
  {
    mercury__psqueue__psqueue__du_name_ordered_tournament_view_2
  },
  {
    mercury__psqueue__psqueue__du_ptag_ordered_tournament_view_2
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__psqueue__psqueue__functor_number_map_tournament_view_2
};

#line 1302 "psqueue.c"
static const MR_PseudoTypeInfo mercury__psqueue__psqueue__field_types_winner_2_0[4] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 2,
  (MR_PseudoTypeInfo) &mercury__psqueue__psqueue__pti_loser_tree_2__pseudo_1__pseudo_2,
  (MR_PseudoTypeInfo) (MR_Integer) 2
};

#line 1310 "psqueue.c"
static const MR_ConstString mercury__psqueue__psqueue__field_names_winner_2_0[4] = {
  (MR_String) "w_prio",
  (MR_String) "w_key",
  (MR_String) "w_losers",
  (MR_String) "w_max_key"
};

#line 1318 "psqueue.c"
static const MR_DuFunctorDesc mercury__psqueue__psqueue__du_functor_desc_winner_2_0 = {
  (MR_String) "winner",
  (MR_Integer) 4,
  (MR_Integer) 15,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__psqueue__psqueue__field_types_winner_2_0,
  mercury__psqueue__psqueue__field_names_winner_2_0,
  NULL,
  NULL
};

#line 1333 "psqueue.c"
static const MR_DuFunctorDescPtr mercury__psqueue__psqueue__du_stag_ordered_winner_2_0[1] = {
  &mercury__psqueue__psqueue__du_functor_desc_winner_2_0
};

#line 1338 "psqueue.c"
static const MR_DuPtagLayout mercury__psqueue__psqueue__du_ptag_ordered_winner_2[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__psqueue__psqueue__du_stag_ordered_winner_2_0
  }
};

#line 1347 "psqueue.c"
static const MR_DuFunctorDescPtr mercury__psqueue__psqueue__du_name_ordered_winner_2[1] = {
  &mercury__psqueue__psqueue__du_functor_desc_winner_2_0
};

#line 1352 "psqueue.c"
static const MR_Integer mercury__psqueue__psqueue__functor_number_map_winner_2[1] = {
  (MR_Integer) 0
};

#line 1357 "psqueue.c"
const MR_TypeCtorInfo_Struct mercury__psqueue__psqueue__type_ctor_info_winner_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__psqueue____Unify____winner_2_0_10001)),
  ((MR_Box) (mercury__psqueue____Compare____winner_2_0_10001)),
  (MR_String) "psqueue",
  (MR_String) "winner",
  {
    mercury__psqueue__psqueue__du_name_ordered_winner_2
  },
  {
    mercury__psqueue__psqueue__du_ptag_ordered_winner_2
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__psqueue__psqueue__functor_number_map_winner_2
};

#line 1378 "psqueue.c"
static MR_bool MR_CALL 
mercury__psqueue____Unify____loser_tree_2_0_10001(
#line 1381 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_1,
#line 1383 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_2,
#line 1385 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_3,
#line 1387 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_4)
#line 1389 "psqueue.c"
{
#line 1391 "psqueue.c"
  {
#line 1393 "psqueue.c"
    MR_bool mercury__psqueue__succeeded;

#line 1396 "psqueue.c"
    {
#line 1398 "psqueue.c"
      mercury__psqueue__succeeded = mercury__psqueue____Unify____loser_tree_2_0(((MR_Word) mercury__psqueue__wrapper_arg_1), ((MR_Word) mercury__psqueue__wrapper_arg_2), ((MR_Word) mercury__psqueue__wrapper_arg_3), ((MR_Word) mercury__psqueue__wrapper_arg_4));
    }
#line 1401 "psqueue.c"
    return mercury__psqueue__succeeded;
#line 1403 "psqueue.c"
  }
#line 1405 "psqueue.c"
}

#line 1408 "psqueue.c"
static void MR_CALL 
mercury__psqueue____Compare____loser_tree_2_0_10001(
#line 1411 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_1,
#line 1413 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_2,
#line 1415 "psqueue.c"
  MR_Box * mercury__psqueue__wrapper_arg_3,
#line 1417 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_4,
#line 1419 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_5)
#line 1421 "psqueue.c"
{
#line 1423 "psqueue.c"
  {
#line 1425 "psqueue.c"
    MR_Word mercury__psqueue__conv0_HeadVar__1_1;

#line 1428 "psqueue.c"
    {
#line 1430 "psqueue.c"
      mercury__psqueue____Compare____loser_tree_2_0(((MR_Word) mercury__psqueue__wrapper_arg_1), ((MR_Word) mercury__psqueue__wrapper_arg_2), &mercury__psqueue__conv0_HeadVar__1_1, ((MR_Word) mercury__psqueue__wrapper_arg_4), ((MR_Word) mercury__psqueue__wrapper_arg_5));
    }
#line 1433 "psqueue.c"
    *mercury__psqueue__wrapper_arg_3 = ((MR_Box) (mercury__psqueue__conv0_HeadVar__1_1));
#line 1435 "psqueue.c"
  }
#line 1437 "psqueue.c"
}

#line 1440 "psqueue.c"
static MR_bool MR_CALL 
mercury__psqueue____Unify____loser_tree_size_0_0_10001(
#line 1443 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_1,
#line 1445 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_2)
#line 1447 "psqueue.c"
{
#line 1449 "psqueue.c"
  {
#line 1451 "psqueue.c"
    MR_bool mercury__psqueue__succeeded;

#line 1454 "psqueue.c"
    {
#line 1456 "psqueue.c"
      mercury__psqueue__succeeded = mercury__psqueue____Unify____loser_tree_size_0_0(((MR_Integer) mercury__psqueue__wrapper_arg_1), ((MR_Integer) mercury__psqueue__wrapper_arg_2));
    }
#line 1459 "psqueue.c"
    return mercury__psqueue__succeeded;
#line 1461 "psqueue.c"
  }
#line 1463 "psqueue.c"
}

#line 1466 "psqueue.c"
static void MR_CALL 
mercury__psqueue____Compare____loser_tree_size_0_0_10001(
#line 1469 "psqueue.c"
  MR_Box * mercury__psqueue__wrapper_arg_1,
#line 1471 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_2,
#line 1473 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_3)
#line 1475 "psqueue.c"
{
#line 1477 "psqueue.c"
  {
#line 1479 "psqueue.c"
    MR_Word mercury__psqueue__conv0_HeadVar__1_1;

#line 1482 "psqueue.c"
    {
#line 1484 "psqueue.c"
      mercury__psqueue____Compare____loser_tree_size_0_0(&mercury__psqueue__conv0_HeadVar__1_1, ((MR_Integer) mercury__psqueue__wrapper_arg_2), ((MR_Integer) mercury__psqueue__wrapper_arg_3));
    }
#line 1487 "psqueue.c"
    *mercury__psqueue__wrapper_arg_1 = ((MR_Box) (mercury__psqueue__conv0_HeadVar__1_1));
#line 1489 "psqueue.c"
  }
#line 1491 "psqueue.c"
}

#line 1494 "psqueue.c"
static MR_bool MR_CALL 
mercury__psqueue____Unify____psqueue_2_0_10001(
#line 1497 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_1,
#line 1499 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_2,
#line 1501 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_3,
#line 1503 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_4)
#line 1505 "psqueue.c"
{
#line 1507 "psqueue.c"
  {
#line 1509 "psqueue.c"
    MR_bool mercury__psqueue__succeeded;

#line 1512 "psqueue.c"
    {
#line 1514 "psqueue.c"
      mercury__psqueue__succeeded = mercury__psqueue____Unify____psqueue_2_0(((MR_Word) mercury__psqueue__wrapper_arg_1), ((MR_Word) mercury__psqueue__wrapper_arg_2), ((MR_Word) mercury__psqueue__wrapper_arg_3), ((MR_Word) mercury__psqueue__wrapper_arg_4));
    }
#line 1517 "psqueue.c"
    return mercury__psqueue__succeeded;
#line 1519 "psqueue.c"
  }
#line 1521 "psqueue.c"
}

#line 1524 "psqueue.c"
static void MR_CALL 
mercury__psqueue____Compare____psqueue_2_0_10001(
#line 1527 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_1,
#line 1529 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_2,
#line 1531 "psqueue.c"
  MR_Box * mercury__psqueue__wrapper_arg_3,
#line 1533 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_4,
#line 1535 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_5)
#line 1537 "psqueue.c"
{
#line 1539 "psqueue.c"
  {
#line 1541 "psqueue.c"
    MR_Word mercury__psqueue__conv0_HeadVar__1_1;

#line 1544 "psqueue.c"
    {
#line 1546 "psqueue.c"
      mercury__psqueue____Compare____psqueue_2_0(((MR_Word) mercury__psqueue__wrapper_arg_1), ((MR_Word) mercury__psqueue__wrapper_arg_2), &mercury__psqueue__conv0_HeadVar__1_1, ((MR_Word) mercury__psqueue__wrapper_arg_4), ((MR_Word) mercury__psqueue__wrapper_arg_5));
    }
#line 1549 "psqueue.c"
    *mercury__psqueue__wrapper_arg_3 = ((MR_Box) (mercury__psqueue__conv0_HeadVar__1_1));
#line 1551 "psqueue.c"
  }
#line 1553 "psqueue.c"
}

#line 1556 "psqueue.c"
static MR_bool MR_CALL 
mercury__psqueue____Unify____tournament_view_2_0_10001(
#line 1559 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_1,
#line 1561 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_2,
#line 1563 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_3,
#line 1565 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_4)
#line 1567 "psqueue.c"
{
#line 1569 "psqueue.c"
  {
#line 1571 "psqueue.c"
    MR_bool mercury__psqueue__succeeded;

#line 1574 "psqueue.c"
    {
#line 1576 "psqueue.c"
      mercury__psqueue__succeeded = mercury__psqueue____Unify____tournament_view_2_0(((MR_Word) mercury__psqueue__wrapper_arg_1), ((MR_Word) mercury__psqueue__wrapper_arg_2), ((MR_Word) mercury__psqueue__wrapper_arg_3), ((MR_Word) mercury__psqueue__wrapper_arg_4));
    }
#line 1579 "psqueue.c"
    return mercury__psqueue__succeeded;
#line 1581 "psqueue.c"
  }
#line 1583 "psqueue.c"
}

#line 1586 "psqueue.c"
static void MR_CALL 
mercury__psqueue____Compare____tournament_view_2_0_10001(
#line 1589 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_1,
#line 1591 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_2,
#line 1593 "psqueue.c"
  MR_Box * mercury__psqueue__wrapper_arg_3,
#line 1595 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_4,
#line 1597 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_5)
#line 1599 "psqueue.c"
{
#line 1601 "psqueue.c"
  {
#line 1603 "psqueue.c"
    MR_Word mercury__psqueue__conv0_HeadVar__1_1;

#line 1606 "psqueue.c"
    {
#line 1608 "psqueue.c"
      mercury__psqueue____Compare____tournament_view_2_0(((MR_Word) mercury__psqueue__wrapper_arg_1), ((MR_Word) mercury__psqueue__wrapper_arg_2), &mercury__psqueue__conv0_HeadVar__1_1, ((MR_Word) mercury__psqueue__wrapper_arg_4), ((MR_Word) mercury__psqueue__wrapper_arg_5));
    }
#line 1611 "psqueue.c"
    *mercury__psqueue__wrapper_arg_3 = ((MR_Box) (mercury__psqueue__conv0_HeadVar__1_1));
#line 1613 "psqueue.c"
  }
#line 1615 "psqueue.c"
}

#line 1618 "psqueue.c"
static MR_bool MR_CALL 
mercury__psqueue____Unify____winner_2_0_10001(
#line 1621 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_1,
#line 1623 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_2,
#line 1625 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_3,
#line 1627 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_4)
#line 1629 "psqueue.c"
{
#line 1631 "psqueue.c"
  {
#line 1633 "psqueue.c"
    MR_bool mercury__psqueue__succeeded;

#line 1636 "psqueue.c"
    {
#line 1638 "psqueue.c"
      mercury__psqueue__succeeded = mercury__psqueue____Unify____winner_2_0(((MR_Word) mercury__psqueue__wrapper_arg_1), ((MR_Word) mercury__psqueue__wrapper_arg_2), ((MR_Word) mercury__psqueue__wrapper_arg_3), ((MR_Word) mercury__psqueue__wrapper_arg_4));
    }
#line 1641 "psqueue.c"
    return mercury__psqueue__succeeded;
#line 1643 "psqueue.c"
  }
#line 1645 "psqueue.c"
}

#line 1648 "psqueue.c"
static void MR_CALL 
mercury__psqueue____Compare____winner_2_0_10001(
#line 1651 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_1,
#line 1653 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_2,
#line 1655 "psqueue.c"
  MR_Box * mercury__psqueue__wrapper_arg_3,
#line 1657 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_4,
#line 1659 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_5)
#line 1661 "psqueue.c"
{
#line 1663 "psqueue.c"
  {
#line 1665 "psqueue.c"
    MR_Word mercury__psqueue__conv0_HeadVar__1_1;

#line 1668 "psqueue.c"
    {
#line 1670 "psqueue.c"
      mercury__psqueue____Compare____winner_2_0(((MR_Word) mercury__psqueue__wrapper_arg_1), ((MR_Word) mercury__psqueue__wrapper_arg_2), &mercury__psqueue__conv0_HeadVar__1_1, ((MR_Word) mercury__psqueue__wrapper_arg_4), ((MR_Word) mercury__psqueue__wrapper_arg_5));
    }
#line 1673 "psqueue.c"
    *mercury__psqueue__wrapper_arg_3 = ((MR_Box) (mercury__psqueue__conv0_HeadVar__1_1));
#line 1675 "psqueue.c"
  }
#line 1677 "psqueue.c"
}

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 13 "ops.opt"
{
#line 38 "ops.opt"
  {
#line 38 "ops.opt"
    MR_bool mercury__psqueue__succeeded;

#line 38 "ops.opt"
    return (MR_Integer) 1200;
#line 38 "ops.opt"
  }
#line 13 "ops.opt"
}

#line 1357 "psqueue.m"
static MR_Word MR_CALL 
mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_107_101_121_115_95_95_91_49_93_95_48_1_f_0(
#line 1357 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_15,
#line 1357 "psqueue.m"
  MR_Word mercury__psqueue__LTree_3)
#line 1357 "psqueue.m"
{
#line 1363 "psqueue.m"
  {
#line 1363 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 1363 "psqueue.m"
    MR_Word mercury__psqueue__Keys_4;

#line 1363 "psqueue.m"
    if ((mercury__psqueue__LTree_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1362 "psqueue.m"
      mercury__psqueue__Keys_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1363 "psqueue.m"
    else
#line 1364 "psqueue.m"
      {
#line 1364 "psqueue.m"
        MR_Box mercury__psqueue__Key_7 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_3, (MR_Integer) 2));
#line 1364 "psqueue.m"
        MR_Word mercury__psqueue__SubLTreeL_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_3, (MR_Integer) 3)));
#line 1364 "psqueue.m"
        MR_Word mercury__psqueue__SubLTreeR_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_3, (MR_Integer) 5)));
#line 1364 "psqueue.m"
        MR_Word mercury__psqueue__V_11_11;
#line 1364 "psqueue.m"
        MR_Word mercury__psqueue__V_12_12;
#line 1364 "psqueue.m"
        MR_Word mercury__psqueue__V_13_13;
#line 1364 "psqueue.m"
        MR_Integer mercury__psqueue__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_3, (MR_Integer) 0)));
#line 1364 "psqueue.m"
        MR_Box mercury__psqueue__V_6_6 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_3, (MR_Integer) 1));
#line 1364 "psqueue.m"
        MR_Box mercury__psqueue__V_9_9 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_3, (MR_Integer) 4));

#line 1365 "psqueue.m"
        {
#line 1365 "psqueue.m"
          mercury__psqueue__V_12_12 = mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_107_101_121_115_95_95_91_49_93_95_48_1_f_0(mercury__psqueue__TypeInfo_for_K_15, mercury__psqueue__SubLTreeL_8);
        }
#line 1365 "psqueue.m"
        {
#line 1365 "psqueue.m"
          mercury__psqueue__V_13_13 = mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_107_101_121_115_95_95_91_49_93_95_48_1_f_0(mercury__psqueue__TypeInfo_for_K_15, mercury__psqueue__SubLTreeR_10);
        }
#line 46 "list.opt"
        {
#line 46 "list.opt"
          mercury__list__append_3_p_1(mercury__psqueue__TypeInfo_for_K_15, mercury__psqueue__V_12_12, mercury__psqueue__V_13_13, &mercury__psqueue__V_11_11);
        }
#line 1365 "psqueue.m"
        {
#line 1365 "psqueue.m"
          mercury__psqueue__Keys_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1365 "psqueue.m"
          MR_hl_field(MR_mktag(1), mercury__psqueue__Keys_4, 0) = mercury__psqueue__Key_7;
#line 1365 "psqueue.m"
          MR_hl_field(MR_mktag(1), mercury__psqueue__Keys_4, 1) = ((MR_Box) (mercury__psqueue__V_11_11));
#line 1365 "psqueue.m"
        }
#line 1364 "psqueue.m"
      }
#line 1363 "psqueue.m"
    return mercury__psqueue__Keys_4;
#line 1363 "psqueue.m"
  }
#line 1357 "psqueue.m"
}

#line 1241 "psqueue.m"
static void MR_CALL 
mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_120_95_107_101_121_95_105_110_95_108_111_115_101_114_95_116_114_101_101_95_97_99_99_95_95_91_49_93_95_48_3_p_0(
#line 1241 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_21,
#line 1241 "psqueue.m"
  MR_Word mercury__psqueue__LTree_4,
#line 1241 "psqueue.m"
  MR_Box mercury__psqueue__STATE_VARIABLE_CurMax_0_17,
#line 1241 "psqueue.m"
  MR_Word * mercury__psqueue__MaybeMaxKey_6)
#line 1241 "psqueue.m"
{
#line 1248 "psqueue.m"
  {
#line 1248 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;

#line 1248 "psqueue.m"
    if ((mercury__psqueue__LTree_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1247 "psqueue.m"
      *mercury__psqueue__MaybeMaxKey_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1248 "psqueue.m"
    else
#line 1249 "psqueue.m"
      {
#line 1249 "psqueue.m"
        MR_Box mercury__psqueue__Key_9 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 2));
#line 1249 "psqueue.m"
        MR_Word mercury__psqueue__SubLTreeL_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 3)));
#line 1249 "psqueue.m"
        MR_Word mercury__psqueue__SubLTreeR_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 5)));
#line 1249 "psqueue.m"
        MR_Word mercury__psqueue__CMP_13;
#line 1249 "psqueue.m"
        MR_Word mercury__psqueue__MaybeMaxKeyL_14;
#line 1249 "psqueue.m"
        MR_Word mercury__psqueue__MaybeMaxKeyR_15;
#line 1249 "psqueue.m"
        MR_Box mercury__psqueue__MaxKey_16;
#line 1249 "psqueue.m"
        MR_Box mercury__psqueue__STATE_VARIABLE_CurMax_18_19;
#line 1249 "psqueue.m"
        MR_Integer mercury__psqueue__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 0)));
#line 1249 "psqueue.m"
        MR_Box mercury__psqueue__V_8_8 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 1));
#line 1249 "psqueue.m"
        MR_Box mercury__psqueue__V_11_11 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 4));

#line 1250 "psqueue.m"
        {
#line 1250 "psqueue.m"
          mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_21, &mercury__psqueue__CMP_13, mercury__psqueue__STATE_VARIABLE_CurMax_0_17, mercury__psqueue__Key_9);
        }
#line 1254 "psqueue.m"
        if ((mercury__psqueue__CMP_13 == (MR_Integer) 1))
#line 1253 "psqueue.m"
          mercury__psqueue__STATE_VARIABLE_CurMax_18_19 = mercury__psqueue__Key_9;
#line 1254 "psqueue.m"
        else
#line 1254 "psqueue.m"
          if ((mercury__psqueue__CMP_13 == (MR_Integer) 0))
#line 1255 "psqueue.m"
            mercury__psqueue__STATE_VARIABLE_CurMax_18_19 = mercury__psqueue__STATE_VARIABLE_CurMax_0_17;
#line 1254 "psqueue.m"
          else
#line 1256 "psqueue.m"
            mercury__psqueue__STATE_VARIABLE_CurMax_18_19 = mercury__psqueue__STATE_VARIABLE_CurMax_0_17;
#line 1259 "psqueue.m"
        {
#line 1259 "psqueue.m"
          mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_120_95_107_101_121_95_105_110_95_108_111_115_101_114_95_116_114_101_101_95_97_99_99_95_95_91_49_93_95_48_3_p_0(mercury__psqueue__TypeInfo_for_K_21, mercury__psqueue__SubLTreeL_10, mercury__psqueue__STATE_VARIABLE_CurMax_18_19, &mercury__psqueue__MaybeMaxKeyL_14);
        }
#line 1260 "psqueue.m"
        {
#line 1260 "psqueue.m"
          mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_120_95_107_101_121_95_105_110_95_108_111_115_101_114_95_116_114_101_101_95_97_99_99_95_95_91_49_93_95_48_3_p_0(mercury__psqueue__TypeInfo_for_K_21, mercury__psqueue__SubLTreeR_12, mercury__psqueue__STATE_VARIABLE_CurMax_18_19, &mercury__psqueue__MaybeMaxKeyR_15);
        }
#line 1295 "psqueue.m"
        if ((mercury__psqueue__MaybeMaxKeyL_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1295 "psqueue.m"
          if ((mercury__psqueue__MaybeMaxKeyR_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1292 "psqueue.m"
            mercury__psqueue__MaxKey_16 = mercury__psqueue__STATE_VARIABLE_CurMax_18_19;
#line 1295 "psqueue.m"
          else
#line 1300 "psqueue.m"
            {
#line 1300 "psqueue.m"
              MR_Box mercury__psqueue__R_27 = (MR_hl_field(MR_mktag(1), mercury__psqueue__MaybeMaxKeyR_15, (MR_Integer) 0));
#line 1042 "psqueue.m"
              MR_Word mercury__psqueue__CMP_37;

#line 1043 "psqueue.m"
              {
#line 1043 "psqueue.m"
                mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_21, &mercury__psqueue__CMP_37, mercury__psqueue__STATE_VARIABLE_CurMax_18_19, mercury__psqueue__R_27);
              }
#line 1045 "psqueue.m"
              if ((mercury__psqueue__CMP_37 == (MR_Integer) 1))
#line 1044 "psqueue.m"
                mercury__psqueue__succeeded = MR_TRUE;
#line 1045 "psqueue.m"
              else
#line 1045 "psqueue.m"
                if ((mercury__psqueue__CMP_37 == (MR_Integer) 0))
#line 1045 "psqueue.m"
                  mercury__psqueue__succeeded = MR_TRUE;
#line 1045 "psqueue.m"
                else
#line 1045 "psqueue.m"
                  mercury__psqueue__succeeded = MR_FALSE;
#line 1064 "psqueue.m"
              if (mercury__psqueue__succeeded)
#line 1063 "psqueue.m"
                mercury__psqueue__MaxKey_16 = mercury__psqueue__R_27;
#line 1064 "psqueue.m"
              else
#line 1065 "psqueue.m"
                mercury__psqueue__MaxKey_16 = mercury__psqueue__STATE_VARIABLE_CurMax_18_19;
#line 1300 "psqueue.m"
            }
#line 1295 "psqueue.m"
        else
#line 1295 "psqueue.m"
          {
#line 1295 "psqueue.m"
            MR_Box mercury__psqueue__V_31_31 = (MR_hl_field(MR_mktag(1), mercury__psqueue__MaybeMaxKeyL_14, (MR_Integer) 0));

#line 1295 "psqueue.m"
            if ((mercury__psqueue__MaybeMaxKeyR_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1064 "psqueue.m"
              {
#line 1042 "psqueue.m"
                MR_Word mercury__psqueue__CMP_43;

#line 1043 "psqueue.m"
                {
#line 1043 "psqueue.m"
                  mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_21, &mercury__psqueue__CMP_43, mercury__psqueue__STATE_VARIABLE_CurMax_18_19, mercury__psqueue__V_31_31);
                }
#line 1045 "psqueue.m"
                if ((mercury__psqueue__CMP_43 == (MR_Integer) 1))
#line 1044 "psqueue.m"
                  mercury__psqueue__succeeded = MR_TRUE;
#line 1045 "psqueue.m"
                else
#line 1045 "psqueue.m"
                  if ((mercury__psqueue__CMP_43 == (MR_Integer) 0))
#line 1045 "psqueue.m"
                    mercury__psqueue__succeeded = MR_TRUE;
#line 1045 "psqueue.m"
                  else
#line 1045 "psqueue.m"
                    mercury__psqueue__succeeded = MR_FALSE;
#line 1064 "psqueue.m"
                if (mercury__psqueue__succeeded)
#line 1063 "psqueue.m"
                  mercury__psqueue__MaxKey_16 = mercury__psqueue__V_31_31;
#line 1064 "psqueue.m"
                else
#line 1065 "psqueue.m"
                  mercury__psqueue__MaxKey_16 = mercury__psqueue__STATE_VARIABLE_CurMax_18_19;
#line 1064 "psqueue.m"
              }
#line 1295 "psqueue.m"
            else
#line 1304 "psqueue.m"
              {
#line 1304 "psqueue.m"
                MR_Box mercury__psqueue__V_28_28;
#line 1304 "psqueue.m"
                MR_Box mercury__psqueue__R_30 = (MR_hl_field(MR_mktag(1), mercury__psqueue__MaybeMaxKeyR_15, (MR_Integer) 0));
#line 1042 "psqueue.m"
                MR_Word mercury__psqueue__CMP_49;
#line 1042 "psqueue.m"
                MR_Word mercury__psqueue__CMP_55;

#line 1043 "psqueue.m"
                {
#line 1043 "psqueue.m"
                  mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_21, &mercury__psqueue__CMP_49, mercury__psqueue__V_31_31, mercury__psqueue__R_30);
                }
#line 1045 "psqueue.m"
                if ((mercury__psqueue__CMP_49 == (MR_Integer) 1))
#line 1044 "psqueue.m"
                  mercury__psqueue__succeeded = MR_TRUE;
#line 1045 "psqueue.m"
                else
#line 1045 "psqueue.m"
                  if ((mercury__psqueue__CMP_49 == (MR_Integer) 0))
#line 1045 "psqueue.m"
                    mercury__psqueue__succeeded = MR_TRUE;
#line 1045 "psqueue.m"
                  else
#line 1045 "psqueue.m"
                    mercury__psqueue__succeeded = MR_FALSE;
#line 1064 "psqueue.m"
                if (mercury__psqueue__succeeded)
#line 1063 "psqueue.m"
                  mercury__psqueue__V_28_28 = mercury__psqueue__R_30;
#line 1064 "psqueue.m"
                else
#line 1065 "psqueue.m"
                  mercury__psqueue__V_28_28 = mercury__psqueue__V_31_31;
#line 1043 "psqueue.m"
                {
#line 1043 "psqueue.m"
                  mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_21, &mercury__psqueue__CMP_55, mercury__psqueue__STATE_VARIABLE_CurMax_18_19, mercury__psqueue__V_28_28);
                }
#line 1045 "psqueue.m"
                if ((mercury__psqueue__CMP_55 == (MR_Integer) 1))
#line 1044 "psqueue.m"
                  mercury__psqueue__succeeded = MR_TRUE;
#line 1045 "psqueue.m"
                else
#line 1045 "psqueue.m"
                  if ((mercury__psqueue__CMP_55 == (MR_Integer) 0))
#line 1045 "psqueue.m"
                    mercury__psqueue__succeeded = MR_TRUE;
#line 1045 "psqueue.m"
                  else
#line 1045 "psqueue.m"
                    mercury__psqueue__succeeded = MR_FALSE;
#line 1064 "psqueue.m"
                if (mercury__psqueue__succeeded)
#line 1063 "psqueue.m"
                  mercury__psqueue__MaxKey_16 = mercury__psqueue__V_28_28;
#line 1064 "psqueue.m"
                else
#line 1065 "psqueue.m"
                  mercury__psqueue__MaxKey_16 = mercury__psqueue__STATE_VARIABLE_CurMax_18_19;
#line 1304 "psqueue.m"
              }
#line 1295 "psqueue.m"
          }
#line 1262 "psqueue.m"
        {
#line 1262 "psqueue.m"
          MR_Word base;
#line 1262 "psqueue.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1262 "psqueue.m"
          *mercury__psqueue__MaybeMaxKey_6 = base;
#line 1262 "psqueue.m"
          MR_hl_field(MR_mktag(1), base, 0) = mercury__psqueue__MaxKey_16;
#line 1262 "psqueue.m"
        }
#line 1249 "psqueue.m"
      }
#line 1248 "psqueue.m"
  }
#line 1241 "psqueue.m"
}

#line 1200 "psqueue.m"
static void MR_CALL 
mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_105_110_95_107_101_121_95_105_110_95_108_111_115_101_114_95_116_114_101_101_95_97_99_99_95_95_91_49_93_95_48_3_p_0(
#line 1200 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_21,
#line 1200 "psqueue.m"
  MR_Word mercury__psqueue__LTree_4,
#line 1200 "psqueue.m"
  MR_Box mercury__psqueue__STATE_VARIABLE_CurMin_0_17,
#line 1200 "psqueue.m"
  MR_Word * mercury__psqueue__MaybeMinKey_6)
#line 1200 "psqueue.m"
{
#line 1207 "psqueue.m"
  {
#line 1207 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;

#line 1207 "psqueue.m"
    if ((mercury__psqueue__LTree_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1206 "psqueue.m"
      *mercury__psqueue__MaybeMinKey_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1207 "psqueue.m"
    else
#line 1208 "psqueue.m"
      {
#line 1208 "psqueue.m"
        MR_Box mercury__psqueue__Key_9 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 2));
#line 1208 "psqueue.m"
        MR_Word mercury__psqueue__SubLTreeL_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 3)));
#line 1208 "psqueue.m"
        MR_Word mercury__psqueue__SubLTreeR_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 5)));
#line 1208 "psqueue.m"
        MR_Word mercury__psqueue__CMP_13;
#line 1208 "psqueue.m"
        MR_Word mercury__psqueue__MaybeMinKeyL_14;
#line 1208 "psqueue.m"
        MR_Word mercury__psqueue__MaybeMinKeyR_15;
#line 1208 "psqueue.m"
        MR_Box mercury__psqueue__MinKey_16;
#line 1208 "psqueue.m"
        MR_Box mercury__psqueue__STATE_VARIABLE_CurMin_18_19;
#line 1208 "psqueue.m"
        MR_Integer mercury__psqueue__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 0)));
#line 1208 "psqueue.m"
        MR_Box mercury__psqueue__V_8_8 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 1));
#line 1208 "psqueue.m"
        MR_Box mercury__psqueue__V_11_11 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 4));

#line 1209 "psqueue.m"
        {
#line 1209 "psqueue.m"
          mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_21, &mercury__psqueue__CMP_13, mercury__psqueue__STATE_VARIABLE_CurMin_0_17, mercury__psqueue__Key_9);
        }
#line 1214 "psqueue.m"
        if ((mercury__psqueue__CMP_13 == (MR_Integer) 1))
#line 1211 "psqueue.m"
          mercury__psqueue__STATE_VARIABLE_CurMin_18_19 = mercury__psqueue__STATE_VARIABLE_CurMin_0_17;
#line 1214 "psqueue.m"
        else
#line 1214 "psqueue.m"
          if ((mercury__psqueue__CMP_13 == (MR_Integer) 0))
#line 1212 "psqueue.m"
            mercury__psqueue__STATE_VARIABLE_CurMin_18_19 = mercury__psqueue__STATE_VARIABLE_CurMin_0_17;
#line 1214 "psqueue.m"
          else
#line 1216 "psqueue.m"
            mercury__psqueue__STATE_VARIABLE_CurMin_18_19 = mercury__psqueue__Key_9;
#line 1218 "psqueue.m"
        {
#line 1218 "psqueue.m"
          mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_105_110_95_107_101_121_95_105_110_95_108_111_115_101_114_95_116_114_101_101_95_97_99_99_95_95_91_49_93_95_48_3_p_0(mercury__psqueue__TypeInfo_for_K_21, mercury__psqueue__SubLTreeL_10, mercury__psqueue__STATE_VARIABLE_CurMin_18_19, &mercury__psqueue__MaybeMinKeyL_14);
        }
#line 1219 "psqueue.m"
        {
#line 1219 "psqueue.m"
          mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_105_110_95_107_101_121_95_105_110_95_108_111_115_101_114_95_116_114_101_101_95_97_99_99_95_95_91_49_93_95_48_3_p_0(mercury__psqueue__TypeInfo_for_K_21, mercury__psqueue__SubLTreeR_12, mercury__psqueue__STATE_VARIABLE_CurMin_18_19, &mercury__psqueue__MaybeMinKeyR_15);
        }
#line 1274 "psqueue.m"
        if ((mercury__psqueue__MaybeMinKeyL_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1274 "psqueue.m"
          if ((mercury__psqueue__MaybeMinKeyR_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1271 "psqueue.m"
            mercury__psqueue__MinKey_16 = mercury__psqueue__STATE_VARIABLE_CurMin_18_19;
#line 1274 "psqueue.m"
          else
#line 1279 "psqueue.m"
            {
#line 1279 "psqueue.m"
              MR_Box mercury__psqueue__R_27 = (MR_hl_field(MR_mktag(1), mercury__psqueue__MaybeMinKeyR_15, (MR_Integer) 0));
#line 1042 "psqueue.m"
              MR_Word mercury__psqueue__CMP_37;

#line 1043 "psqueue.m"
              {
#line 1043 "psqueue.m"
                mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_21, &mercury__psqueue__CMP_37, mercury__psqueue__STATE_VARIABLE_CurMin_18_19, mercury__psqueue__R_27);
              }
#line 1045 "psqueue.m"
              if ((mercury__psqueue__CMP_37 == (MR_Integer) 1))
#line 1044 "psqueue.m"
                mercury__psqueue__succeeded = MR_TRUE;
#line 1045 "psqueue.m"
              else
#line 1045 "psqueue.m"
                if ((mercury__psqueue__CMP_37 == (MR_Integer) 0))
#line 1045 "psqueue.m"
                  mercury__psqueue__succeeded = MR_TRUE;
#line 1045 "psqueue.m"
                else
#line 1045 "psqueue.m"
                  mercury__psqueue__succeeded = MR_FALSE;
#line 1054 "psqueue.m"
              if (mercury__psqueue__succeeded)
#line 1053 "psqueue.m"
                mercury__psqueue__MinKey_16 = mercury__psqueue__STATE_VARIABLE_CurMin_18_19;
#line 1054 "psqueue.m"
              else
#line 1055 "psqueue.m"
                mercury__psqueue__MinKey_16 = mercury__psqueue__R_27;
#line 1279 "psqueue.m"
            }
#line 1274 "psqueue.m"
        else
#line 1274 "psqueue.m"
          {
#line 1274 "psqueue.m"
            MR_Box mercury__psqueue__V_31_31 = (MR_hl_field(MR_mktag(1), mercury__psqueue__MaybeMinKeyL_14, (MR_Integer) 0));

#line 1274 "psqueue.m"
            if ((mercury__psqueue__MaybeMinKeyR_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1054 "psqueue.m"
              {
#line 1042 "psqueue.m"
                MR_Word mercury__psqueue__CMP_43;

#line 1043 "psqueue.m"
                {
#line 1043 "psqueue.m"
                  mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_21, &mercury__psqueue__CMP_43, mercury__psqueue__STATE_VARIABLE_CurMin_18_19, mercury__psqueue__V_31_31);
                }
#line 1045 "psqueue.m"
                if ((mercury__psqueue__CMP_43 == (MR_Integer) 1))
#line 1044 "psqueue.m"
                  mercury__psqueue__succeeded = MR_TRUE;
#line 1045 "psqueue.m"
                else
#line 1045 "psqueue.m"
                  if ((mercury__psqueue__CMP_43 == (MR_Integer) 0))
#line 1045 "psqueue.m"
                    mercury__psqueue__succeeded = MR_TRUE;
#line 1045 "psqueue.m"
                  else
#line 1045 "psqueue.m"
                    mercury__psqueue__succeeded = MR_FALSE;
#line 1054 "psqueue.m"
                if (mercury__psqueue__succeeded)
#line 1053 "psqueue.m"
                  mercury__psqueue__MinKey_16 = mercury__psqueue__STATE_VARIABLE_CurMin_18_19;
#line 1054 "psqueue.m"
                else
#line 1055 "psqueue.m"
                  mercury__psqueue__MinKey_16 = mercury__psqueue__V_31_31;
#line 1054 "psqueue.m"
              }
#line 1274 "psqueue.m"
            else
#line 1283 "psqueue.m"
              {
#line 1283 "psqueue.m"
                MR_Box mercury__psqueue__V_28_28;
#line 1283 "psqueue.m"
                MR_Box mercury__psqueue__R_30 = (MR_hl_field(MR_mktag(1), mercury__psqueue__MaybeMinKeyR_15, (MR_Integer) 0));
#line 1042 "psqueue.m"
                MR_Word mercury__psqueue__CMP_49;
#line 1042 "psqueue.m"
                MR_Word mercury__psqueue__CMP_55;

#line 1043 "psqueue.m"
                {
#line 1043 "psqueue.m"
                  mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_21, &mercury__psqueue__CMP_49, mercury__psqueue__V_31_31, mercury__psqueue__R_30);
                }
#line 1045 "psqueue.m"
                if ((mercury__psqueue__CMP_49 == (MR_Integer) 1))
#line 1044 "psqueue.m"
                  mercury__psqueue__succeeded = MR_TRUE;
#line 1045 "psqueue.m"
                else
#line 1045 "psqueue.m"
                  if ((mercury__psqueue__CMP_49 == (MR_Integer) 0))
#line 1045 "psqueue.m"
                    mercury__psqueue__succeeded = MR_TRUE;
#line 1045 "psqueue.m"
                  else
#line 1045 "psqueue.m"
                    mercury__psqueue__succeeded = MR_FALSE;
#line 1054 "psqueue.m"
                if (mercury__psqueue__succeeded)
#line 1053 "psqueue.m"
                  mercury__psqueue__V_28_28 = mercury__psqueue__V_31_31;
#line 1054 "psqueue.m"
                else
#line 1055 "psqueue.m"
                  mercury__psqueue__V_28_28 = mercury__psqueue__R_30;
#line 1043 "psqueue.m"
                {
#line 1043 "psqueue.m"
                  mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_21, &mercury__psqueue__CMP_55, mercury__psqueue__STATE_VARIABLE_CurMin_18_19, mercury__psqueue__V_28_28);
                }
#line 1045 "psqueue.m"
                if ((mercury__psqueue__CMP_55 == (MR_Integer) 1))
#line 1044 "psqueue.m"
                  mercury__psqueue__succeeded = MR_TRUE;
#line 1045 "psqueue.m"
                else
#line 1045 "psqueue.m"
                  if ((mercury__psqueue__CMP_55 == (MR_Integer) 0))
#line 1045 "psqueue.m"
                    mercury__psqueue__succeeded = MR_TRUE;
#line 1045 "psqueue.m"
                  else
#line 1045 "psqueue.m"
                    mercury__psqueue__succeeded = MR_FALSE;
#line 1054 "psqueue.m"
                if (mercury__psqueue__succeeded)
#line 1053 "psqueue.m"
                  mercury__psqueue__MinKey_16 = mercury__psqueue__STATE_VARIABLE_CurMin_18_19;
#line 1054 "psqueue.m"
                else
#line 1055 "psqueue.m"
                  mercury__psqueue__MinKey_16 = mercury__psqueue__V_28_28;
#line 1283 "psqueue.m"
              }
#line 1274 "psqueue.m"
          }
#line 1221 "psqueue.m"
        {
#line 1221 "psqueue.m"
          MR_Word base;
#line 1221 "psqueue.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1221 "psqueue.m"
          *mercury__psqueue__MaybeMinKey_6 = base;
#line 1221 "psqueue.m"
          MR_hl_field(MR_mktag(1), base, 0) = mercury__psqueue__MinKey_16;
#line 1221 "psqueue.m"
        }
#line 1208 "psqueue.m"
      }
#line 1207 "psqueue.m"
  }
#line 1200 "psqueue.m"
}

#line 1185 "psqueue.m"
static void MR_CALL 
mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_105_110_95_107_101_121_95_105_110_95_108_111_115_101_114_95_116_114_101_101_95_95_91_49_93_95_48_2_p_0(
#line 1185 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_16,
#line 1185 "psqueue.m"
  MR_Word mercury__psqueue__LTree_3,
#line 1185 "psqueue.m"
  MR_Word * mercury__psqueue__MaybeMinKey_4)
#line 1185 "psqueue.m"
{
#line 1191 "psqueue.m"
  {
#line 1191 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;

#line 1191 "psqueue.m"
    if ((mercury__psqueue__LTree_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1190 "psqueue.m"
      *mercury__psqueue__MaybeMinKey_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1191 "psqueue.m"
    else
#line 1192 "psqueue.m"
      {
#line 1192 "psqueue.m"
        MR_Word mercury__psqueue__SubLTreeL_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_3, (MR_Integer) 3)));
#line 1192 "psqueue.m"
        MR_Word mercury__psqueue__SubLTreeR_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_3, (MR_Integer) 5)));
#line 1192 "psqueue.m"
        MR_Box mercury__psqueue__CurMin_11 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_3, (MR_Integer) 2));
#line 1192 "psqueue.m"
        MR_Word mercury__psqueue__MaybeMinKeyL_12;
#line 1192 "psqueue.m"
        MR_Word mercury__psqueue__MaybeMinKeyR_13;
#line 1192 "psqueue.m"
        MR_Box mercury__psqueue__MinKey_14;
#line 1192 "psqueue.m"
        MR_Integer mercury__psqueue__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_3, (MR_Integer) 0)));
#line 1192 "psqueue.m"
        MR_Box mercury__psqueue__V_6_6 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_3, (MR_Integer) 1));
#line 1192 "psqueue.m"
        MR_Box mercury__psqueue__V_9_9 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_3, (MR_Integer) 4));

#line 1194 "psqueue.m"
        {
#line 1194 "psqueue.m"
          mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_105_110_95_107_101_121_95_105_110_95_108_111_115_101_114_95_116_114_101_101_95_97_99_99_95_95_91_49_93_95_48_3_p_0(mercury__psqueue__TypeInfo_for_K_16, mercury__psqueue__SubLTreeL_8, mercury__psqueue__CurMin_11, &mercury__psqueue__MaybeMinKeyL_12);
        }
#line 1195 "psqueue.m"
        {
#line 1195 "psqueue.m"
          mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_105_110_95_107_101_121_95_105_110_95_108_111_115_101_114_95_116_114_101_101_95_97_99_99_95_95_91_49_93_95_48_3_p_0(mercury__psqueue__TypeInfo_for_K_16, mercury__psqueue__SubLTreeR_10, mercury__psqueue__CurMin_11, &mercury__psqueue__MaybeMinKeyR_13);
        }
#line 1274 "psqueue.m"
        if ((mercury__psqueue__MaybeMinKeyL_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1274 "psqueue.m"
          if ((mercury__psqueue__MaybeMinKeyR_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1271 "psqueue.m"
            mercury__psqueue__MinKey_14 = mercury__psqueue__CurMin_11;
#line 1274 "psqueue.m"
          else
#line 1279 "psqueue.m"
            {
#line 1279 "psqueue.m"
              MR_Box mercury__psqueue__R_22 = (MR_hl_field(MR_mktag(1), mercury__psqueue__MaybeMinKeyR_13, (MR_Integer) 0));
#line 1042 "psqueue.m"
              MR_Word mercury__psqueue__CMP_32;

#line 1043 "psqueue.m"
              {
#line 1043 "psqueue.m"
                mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_16, &mercury__psqueue__CMP_32, mercury__psqueue__CurMin_11, mercury__psqueue__R_22);
              }
#line 1045 "psqueue.m"
              if ((mercury__psqueue__CMP_32 == (MR_Integer) 1))
#line 1044 "psqueue.m"
                mercury__psqueue__succeeded = MR_TRUE;
#line 1045 "psqueue.m"
              else
#line 1045 "psqueue.m"
                if ((mercury__psqueue__CMP_32 == (MR_Integer) 0))
#line 1045 "psqueue.m"
                  mercury__psqueue__succeeded = MR_TRUE;
#line 1045 "psqueue.m"
                else
#line 1045 "psqueue.m"
                  mercury__psqueue__succeeded = MR_FALSE;
#line 1054 "psqueue.m"
              if (mercury__psqueue__succeeded)
#line 1053 "psqueue.m"
                mercury__psqueue__MinKey_14 = mercury__psqueue__CurMin_11;
#line 1054 "psqueue.m"
              else
#line 1055 "psqueue.m"
                mercury__psqueue__MinKey_14 = mercury__psqueue__R_22;
#line 1279 "psqueue.m"
            }
#line 1274 "psqueue.m"
        else
#line 1274 "psqueue.m"
          {
#line 1274 "psqueue.m"
            MR_Box mercury__psqueue__V_26_26 = (MR_hl_field(MR_mktag(1), mercury__psqueue__MaybeMinKeyL_12, (MR_Integer) 0));

#line 1274 "psqueue.m"
            if ((mercury__psqueue__MaybeMinKeyR_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1054 "psqueue.m"
              {
#line 1042 "psqueue.m"
                MR_Word mercury__psqueue__CMP_38;

#line 1043 "psqueue.m"
                {
#line 1043 "psqueue.m"
                  mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_16, &mercury__psqueue__CMP_38, mercury__psqueue__CurMin_11, mercury__psqueue__V_26_26);
                }
#line 1045 "psqueue.m"
                if ((mercury__psqueue__CMP_38 == (MR_Integer) 1))
#line 1044 "psqueue.m"
                  mercury__psqueue__succeeded = MR_TRUE;
#line 1045 "psqueue.m"
                else
#line 1045 "psqueue.m"
                  if ((mercury__psqueue__CMP_38 == (MR_Integer) 0))
#line 1045 "psqueue.m"
                    mercury__psqueue__succeeded = MR_TRUE;
#line 1045 "psqueue.m"
                  else
#line 1045 "psqueue.m"
                    mercury__psqueue__succeeded = MR_FALSE;
#line 1054 "psqueue.m"
                if (mercury__psqueue__succeeded)
#line 1053 "psqueue.m"
                  mercury__psqueue__MinKey_14 = mercury__psqueue__CurMin_11;
#line 1054 "psqueue.m"
                else
#line 1055 "psqueue.m"
                  mercury__psqueue__MinKey_14 = mercury__psqueue__V_26_26;
#line 1054 "psqueue.m"
              }
#line 1274 "psqueue.m"
            else
#line 1283 "psqueue.m"
              {
#line 1283 "psqueue.m"
                MR_Box mercury__psqueue__V_23_23;
#line 1283 "psqueue.m"
                MR_Box mercury__psqueue__R_25 = (MR_hl_field(MR_mktag(1), mercury__psqueue__MaybeMinKeyR_13, (MR_Integer) 0));
#line 1042 "psqueue.m"
                MR_Word mercury__psqueue__CMP_44;
#line 1042 "psqueue.m"
                MR_Word mercury__psqueue__CMP_50;

#line 1043 "psqueue.m"
                {
#line 1043 "psqueue.m"
                  mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_16, &mercury__psqueue__CMP_44, mercury__psqueue__V_26_26, mercury__psqueue__R_25);
                }
#line 1045 "psqueue.m"
                if ((mercury__psqueue__CMP_44 == (MR_Integer) 1))
#line 1044 "psqueue.m"
                  mercury__psqueue__succeeded = MR_TRUE;
#line 1045 "psqueue.m"
                else
#line 1045 "psqueue.m"
                  if ((mercury__psqueue__CMP_44 == (MR_Integer) 0))
#line 1045 "psqueue.m"
                    mercury__psqueue__succeeded = MR_TRUE;
#line 1045 "psqueue.m"
                  else
#line 1045 "psqueue.m"
                    mercury__psqueue__succeeded = MR_FALSE;
#line 1054 "psqueue.m"
                if (mercury__psqueue__succeeded)
#line 1053 "psqueue.m"
                  mercury__psqueue__V_23_23 = mercury__psqueue__V_26_26;
#line 1054 "psqueue.m"
                else
#line 1055 "psqueue.m"
                  mercury__psqueue__V_23_23 = mercury__psqueue__R_25;
#line 1043 "psqueue.m"
                {
#line 1043 "psqueue.m"
                  mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_16, &mercury__psqueue__CMP_50, mercury__psqueue__CurMin_11, mercury__psqueue__V_23_23);
                }
#line 1045 "psqueue.m"
                if ((mercury__psqueue__CMP_50 == (MR_Integer) 1))
#line 1044 "psqueue.m"
                  mercury__psqueue__succeeded = MR_TRUE;
#line 1045 "psqueue.m"
                else
#line 1045 "psqueue.m"
                  if ((mercury__psqueue__CMP_50 == (MR_Integer) 0))
#line 1045 "psqueue.m"
                    mercury__psqueue__succeeded = MR_TRUE;
#line 1045 "psqueue.m"
                  else
#line 1045 "psqueue.m"
                    mercury__psqueue__succeeded = MR_FALSE;
#line 1054 "psqueue.m"
                if (mercury__psqueue__succeeded)
#line 1053 "psqueue.m"
                  mercury__psqueue__MinKey_14 = mercury__psqueue__CurMin_11;
#line 1054 "psqueue.m"
                else
#line 1055 "psqueue.m"
                  mercury__psqueue__MinKey_14 = mercury__psqueue__V_23_23;
#line 1283 "psqueue.m"
              }
#line 1274 "psqueue.m"
          }
#line 1197 "psqueue.m"
        {
#line 1197 "psqueue.m"
          MR_Word base;
#line 1197 "psqueue.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1197 "psqueue.m"
          *mercury__psqueue__MaybeMinKey_4 = base;
#line 1197 "psqueue.m"
          MR_hl_field(MR_mktag(1), base, 0) = mercury__psqueue__MinKey_14;
#line 1197 "psqueue.m"
        }
#line 1192 "psqueue.m"
      }
#line 1191 "psqueue.m"
  }
#line 1185 "psqueue.m"
}

#line 1122 "psqueue.m"
static void MR_CALL 
mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_105_110_95_112_114_105_111_95_105_110_95_108_111_115_101_114_95_116_114_101_101_95_97_99_99_95_95_91_50_93_95_48_3_p_0(
#line 1122 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_20,
#line 1122 "psqueue.m"
  MR_Word mercury__psqueue__LTree_4,
#line 1122 "psqueue.m"
  MR_Box mercury__psqueue__STATE_VARIABLE_CurMinPrio_0_17,
#line 1122 "psqueue.m"
  MR_Word * mercury__psqueue__MaybeMinPrio_6)
#line 1122 "psqueue.m"
{
#line 1129 "psqueue.m"
  {
#line 1129 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;

#line 1129 "psqueue.m"
    if ((mercury__psqueue__LTree_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1128 "psqueue.m"
      *mercury__psqueue__MaybeMinPrio_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1129 "psqueue.m"
    else
#line 1130 "psqueue.m"
      {
#line 1130 "psqueue.m"
        MR_Box mercury__psqueue__Prio_8 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 1));
#line 1130 "psqueue.m"
        MR_Word mercury__psqueue__SubLTreeL_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 3)));
#line 1130 "psqueue.m"
        MR_Word mercury__psqueue__SubLTreeR_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 5)));
#line 1130 "psqueue.m"
        MR_Word mercury__psqueue__CMP_13;
#line 1130 "psqueue.m"
        MR_Word mercury__psqueue__MaybeMinPrioL_14;
#line 1130 "psqueue.m"
        MR_Word mercury__psqueue__MaybeMinPrioR_15;
#line 1130 "psqueue.m"
        MR_Box mercury__psqueue__MinPrio_16;
#line 1130 "psqueue.m"
        MR_Box mercury__psqueue__STATE_VARIABLE_CurMinPrio_18_19;
#line 1130 "psqueue.m"
        MR_Integer mercury__psqueue__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 0)));
#line 1130 "psqueue.m"
        MR_Box mercury__psqueue__V_9_9 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 2));
#line 1130 "psqueue.m"
        MR_Box mercury__psqueue__V_11_11 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 4));

#line 1131 "psqueue.m"
        {
#line 1131 "psqueue.m"
          mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_P_20, &mercury__psqueue__CMP_13, mercury__psqueue__STATE_VARIABLE_CurMinPrio_0_17, mercury__psqueue__Prio_8);
        }
#line 1136 "psqueue.m"
        if ((mercury__psqueue__CMP_13 == (MR_Integer) 1))
#line 1133 "psqueue.m"
          mercury__psqueue__STATE_VARIABLE_CurMinPrio_18_19 = mercury__psqueue__STATE_VARIABLE_CurMinPrio_0_17;
#line 1136 "psqueue.m"
        else
#line 1136 "psqueue.m"
          if ((mercury__psqueue__CMP_13 == (MR_Integer) 0))
#line 1134 "psqueue.m"
            mercury__psqueue__STATE_VARIABLE_CurMinPrio_18_19 = mercury__psqueue__STATE_VARIABLE_CurMinPrio_0_17;
#line 1136 "psqueue.m"
          else
#line 1138 "psqueue.m"
            mercury__psqueue__STATE_VARIABLE_CurMinPrio_18_19 = mercury__psqueue__Prio_8;
#line 1140 "psqueue.m"
        {
#line 1140 "psqueue.m"
          mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_105_110_95_112_114_105_111_95_105_110_95_108_111_115_101_114_95_116_114_101_101_95_97_99_99_95_95_91_50_93_95_48_3_p_0(mercury__psqueue__TypeInfo_for_P_20, mercury__psqueue__SubLTreeL_10, mercury__psqueue__STATE_VARIABLE_CurMinPrio_18_19, &mercury__psqueue__MaybeMinPrioL_14);
        }
#line 1141 "psqueue.m"
        {
#line 1141 "psqueue.m"
          mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_105_110_95_112_114_105_111_95_105_110_95_108_111_115_101_114_95_116_114_101_101_95_97_99_99_95_95_91_50_93_95_48_3_p_0(mercury__psqueue__TypeInfo_for_P_20, mercury__psqueue__SubLTreeR_12, mercury__psqueue__STATE_VARIABLE_CurMinPrio_18_19, &mercury__psqueue__MaybeMinPrioR_15);
        }
#line 1274 "psqueue.m"
        if ((mercury__psqueue__MaybeMinPrioL_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1274 "psqueue.m"
          if ((mercury__psqueue__MaybeMinPrioR_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1271 "psqueue.m"
            mercury__psqueue__MinPrio_16 = mercury__psqueue__STATE_VARIABLE_CurMinPrio_18_19;
#line 1274 "psqueue.m"
          else
#line 1279 "psqueue.m"
            {
#line 1279 "psqueue.m"
              MR_Box mercury__psqueue__R_27 = (MR_hl_field(MR_mktag(1), mercury__psqueue__MaybeMinPrioR_15, (MR_Integer) 0));
#line 1042 "psqueue.m"
              MR_Word mercury__psqueue__CMP_37;

#line 1043 "psqueue.m"
              {
#line 1043 "psqueue.m"
                mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_P_20, &mercury__psqueue__CMP_37, mercury__psqueue__STATE_VARIABLE_CurMinPrio_18_19, mercury__psqueue__R_27);
              }
#line 1045 "psqueue.m"
              if ((mercury__psqueue__CMP_37 == (MR_Integer) 1))
#line 1044 "psqueue.m"
                mercury__psqueue__succeeded = MR_TRUE;
#line 1045 "psqueue.m"
              else
#line 1045 "psqueue.m"
                if ((mercury__psqueue__CMP_37 == (MR_Integer) 0))
#line 1045 "psqueue.m"
                  mercury__psqueue__succeeded = MR_TRUE;
#line 1045 "psqueue.m"
                else
#line 1045 "psqueue.m"
                  mercury__psqueue__succeeded = MR_FALSE;
#line 1054 "psqueue.m"
              if (mercury__psqueue__succeeded)
#line 1053 "psqueue.m"
                mercury__psqueue__MinPrio_16 = mercury__psqueue__STATE_VARIABLE_CurMinPrio_18_19;
#line 1054 "psqueue.m"
              else
#line 1055 "psqueue.m"
                mercury__psqueue__MinPrio_16 = mercury__psqueue__R_27;
#line 1279 "psqueue.m"
            }
#line 1274 "psqueue.m"
        else
#line 1274 "psqueue.m"
          {
#line 1274 "psqueue.m"
            MR_Box mercury__psqueue__V_31_31 = (MR_hl_field(MR_mktag(1), mercury__psqueue__MaybeMinPrioL_14, (MR_Integer) 0));

#line 1274 "psqueue.m"
            if ((mercury__psqueue__MaybeMinPrioR_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1054 "psqueue.m"
              {
#line 1042 "psqueue.m"
                MR_Word mercury__psqueue__CMP_43;

#line 1043 "psqueue.m"
                {
#line 1043 "psqueue.m"
                  mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_P_20, &mercury__psqueue__CMP_43, mercury__psqueue__STATE_VARIABLE_CurMinPrio_18_19, mercury__psqueue__V_31_31);
                }
#line 1045 "psqueue.m"
                if ((mercury__psqueue__CMP_43 == (MR_Integer) 1))
#line 1044 "psqueue.m"
                  mercury__psqueue__succeeded = MR_TRUE;
#line 1045 "psqueue.m"
                else
#line 1045 "psqueue.m"
                  if ((mercury__psqueue__CMP_43 == (MR_Integer) 0))
#line 1045 "psqueue.m"
                    mercury__psqueue__succeeded = MR_TRUE;
#line 1045 "psqueue.m"
                  else
#line 1045 "psqueue.m"
                    mercury__psqueue__succeeded = MR_FALSE;
#line 1054 "psqueue.m"
                if (mercury__psqueue__succeeded)
#line 1053 "psqueue.m"
                  mercury__psqueue__MinPrio_16 = mercury__psqueue__STATE_VARIABLE_CurMinPrio_18_19;
#line 1054 "psqueue.m"
                else
#line 1055 "psqueue.m"
                  mercury__psqueue__MinPrio_16 = mercury__psqueue__V_31_31;
#line 1054 "psqueue.m"
              }
#line 1274 "psqueue.m"
            else
#line 1283 "psqueue.m"
              {
#line 1283 "psqueue.m"
                MR_Box mercury__psqueue__V_28_28;
#line 1283 "psqueue.m"
                MR_Box mercury__psqueue__R_30 = (MR_hl_field(MR_mktag(1), mercury__psqueue__MaybeMinPrioR_15, (MR_Integer) 0));
#line 1042 "psqueue.m"
                MR_Word mercury__psqueue__CMP_49;
#line 1042 "psqueue.m"
                MR_Word mercury__psqueue__CMP_55;

#line 1043 "psqueue.m"
                {
#line 1043 "psqueue.m"
                  mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_P_20, &mercury__psqueue__CMP_49, mercury__psqueue__V_31_31, mercury__psqueue__R_30);
                }
#line 1045 "psqueue.m"
                if ((mercury__psqueue__CMP_49 == (MR_Integer) 1))
#line 1044 "psqueue.m"
                  mercury__psqueue__succeeded = MR_TRUE;
#line 1045 "psqueue.m"
                else
#line 1045 "psqueue.m"
                  if ((mercury__psqueue__CMP_49 == (MR_Integer) 0))
#line 1045 "psqueue.m"
                    mercury__psqueue__succeeded = MR_TRUE;
#line 1045 "psqueue.m"
                  else
#line 1045 "psqueue.m"
                    mercury__psqueue__succeeded = MR_FALSE;
#line 1054 "psqueue.m"
                if (mercury__psqueue__succeeded)
#line 1053 "psqueue.m"
                  mercury__psqueue__V_28_28 = mercury__psqueue__V_31_31;
#line 1054 "psqueue.m"
                else
#line 1055 "psqueue.m"
                  mercury__psqueue__V_28_28 = mercury__psqueue__R_30;
#line 1043 "psqueue.m"
                {
#line 1043 "psqueue.m"
                  mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_P_20, &mercury__psqueue__CMP_55, mercury__psqueue__STATE_VARIABLE_CurMinPrio_18_19, mercury__psqueue__V_28_28);
                }
#line 1045 "psqueue.m"
                if ((mercury__psqueue__CMP_55 == (MR_Integer) 1))
#line 1044 "psqueue.m"
                  mercury__psqueue__succeeded = MR_TRUE;
#line 1045 "psqueue.m"
                else
#line 1045 "psqueue.m"
                  if ((mercury__psqueue__CMP_55 == (MR_Integer) 0))
#line 1045 "psqueue.m"
                    mercury__psqueue__succeeded = MR_TRUE;
#line 1045 "psqueue.m"
                  else
#line 1045 "psqueue.m"
                    mercury__psqueue__succeeded = MR_FALSE;
#line 1054 "psqueue.m"
                if (mercury__psqueue__succeeded)
#line 1053 "psqueue.m"
                  mercury__psqueue__MinPrio_16 = mercury__psqueue__STATE_VARIABLE_CurMinPrio_18_19;
#line 1054 "psqueue.m"
                else
#line 1055 "psqueue.m"
                  mercury__psqueue__MinPrio_16 = mercury__psqueue__V_28_28;
#line 1283 "psqueue.m"
              }
#line 1274 "psqueue.m"
          }
#line 1143 "psqueue.m"
        {
#line 1143 "psqueue.m"
          MR_Word base;
#line 1143 "psqueue.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1143 "psqueue.m"
          *mercury__psqueue__MaybeMinPrio_6 = base;
#line 1143 "psqueue.m"
          MR_hl_field(MR_mktag(1), base, 0) = mercury__psqueue__MinPrio_16;
#line 1143 "psqueue.m"
        }
#line 1130 "psqueue.m"
      }
#line 1129 "psqueue.m"
  }
#line 1122 "psqueue.m"
}

#line 1086 "psqueue.m"
static MR_bool MR_CALL 
mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_112_114_105_111_115_95_105_110_95_108_111_115_101_114_95_116_114_101_101_95_97_116_95_111_114_95_97_98_111_118_101_95_112_114_105_111_95_95_91_50_93_95_48_2_p_0(
#line 1086 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_11,
#line 1086 "psqueue.m"
  MR_Box mercury__psqueue__WinnerPrio_3,
#line 1086 "psqueue.m"
  MR_Word mercury__psqueue__LTree_4)
#line 1086 "psqueue.m"
{
#line 1092 "psqueue.m"
  while (MR_TRUE)
#line 1092 "psqueue.m"
    {
#line 1092 "psqueue.m"
      /* tailcall optimized into a loop */
#line 1092 "psqueue.m"
      {
#line 1092 "psqueue.m"
        MR_bool mercury__psqueue__succeeded;

#line 1092 "psqueue.m"
        if ((mercury__psqueue__LTree_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1091 "psqueue.m"
          mercury__psqueue__succeeded = MR_TRUE;
#line 1092 "psqueue.m"
        else
#line 1093 "psqueue.m"
          {
#line 1093 "psqueue.m"
            MR_Box mercury__psqueue__LoserPrio_6 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 1));
#line 1093 "psqueue.m"
            MR_Word mercury__psqueue__SubLTreeL_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 3)));
#line 1093 "psqueue.m"
            MR_Word mercury__psqueue__SubLTreeR_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 5)));
#line 1093 "psqueue.m"
            MR_Word mercury__psqueue__CMP_15;
#line 1093 "psqueue.m"
            MR_Integer mercury__psqueue__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 0)));
#line 1093 "psqueue.m"
            MR_Box mercury__psqueue__V_7_7 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 2));
#line 1093 "psqueue.m"
            MR_Box mercury__psqueue__V_9_9 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 4));

#line 1043 "psqueue.m"
            {
#line 1043 "psqueue.m"
              mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_P_11, &mercury__psqueue__CMP_15, mercury__psqueue__WinnerPrio_3, mercury__psqueue__LoserPrio_6);
            }
#line 1045 "psqueue.m"
            if ((mercury__psqueue__CMP_15 == (MR_Integer) 1))
#line 1044 "psqueue.m"
              mercury__psqueue__succeeded = MR_TRUE;
#line 1045 "psqueue.m"
            else
#line 1045 "psqueue.m"
              if ((mercury__psqueue__CMP_15 == (MR_Integer) 0))
#line 1045 "psqueue.m"
                mercury__psqueue__succeeded = MR_TRUE;
#line 1045 "psqueue.m"
              else
#line 1045 "psqueue.m"
                mercury__psqueue__succeeded = MR_FALSE;
#line 1093 "psqueue.m"
            if (mercury__psqueue__succeeded)
#line 1093 "psqueue.m"
              {
#line 1095 "psqueue.m"
                {
#line 1095 "psqueue.m"
                  mercury__psqueue__succeeded = mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_112_114_105_111_115_95_105_110_95_108_111_115_101_114_95_116_114_101_101_95_97_116_95_111_114_95_97_98_111_118_101_95_112_114_105_111_95_95_91_50_93_95_48_2_p_0(mercury__psqueue__TypeInfo_for_P_11, mercury__psqueue__WinnerPrio_3, mercury__psqueue__SubLTreeL_8);
                }
#line 1093 "psqueue.m"
                if (mercury__psqueue__succeeded)
#line 1096 "psqueue.m"
                  {
#line 1096 "psqueue.m"
                    /* direct tailcall eliminated */
#line 1096 "psqueue.m"
                    {
#line 1096 "psqueue.m"
                      MR_Word mercury__psqueue__LTree__tmp_copy_4 = mercury__psqueue__SubLTreeR_10;

#line 1096 "psqueue.m"
                      mercury__psqueue__LTree_4 = mercury__psqueue__LTree__tmp_copy_4;
#line 1096 "psqueue.m"
                    }
#line 1096 "psqueue.m"
                    continue;
#line 1096 "psqueue.m"
                  }
#line 1093 "psqueue.m"
              }
#line 1093 "psqueue.m"
          }
#line 1092 "psqueue.m"
        return mercury__psqueue__succeeded;
#line 1092 "psqueue.m"
      }
#line 1092 "psqueue.m"
      break;
#line 1092 "psqueue.m"
    }
#line 1086 "psqueue.m"
}

#line 71 "psqueue.m"
MR_bool MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_4_p_0(
#line 71 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_16,
#line 71 "psqueue.m"
  MR_Integer mercury__psqueue__InsertPrio_5,
#line 71 "psqueue.m"
  MR_Box mercury__psqueue__InsertKey_6,
#line 71 "psqueue.m"
  MR_Word mercury__psqueue__STATE_VARIABLE_PSQ_0_10,
#line 71 "psqueue.m"
  MR_Word * mercury__psqueue__STATE_VARIABLE_PSQ_11)
#line 71 "psqueue.m"
{
#line 708 "psqueue.m"
  {
#line 708 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;

#line 708 "psqueue.m"
    if ((mercury__psqueue__STATE_VARIABLE_PSQ_0_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 693 "psqueue.m"
      {
#line 693 "psqueue.m"
        MR_Word mercury__psqueue__V_23_23;
#line 693 "psqueue.m"
        MR_Word mercury__psqueue__V_26_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 700 "psqueue.m"
        {
#line 700 "psqueue.m"
          mercury__psqueue__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 700 "psqueue.m"
          MR_hl_field(MR_mktag(0), mercury__psqueue__V_23_23, 0) = ((MR_Box) (mercury__psqueue__InsertPrio_5));
#line 700 "psqueue.m"
          MR_hl_field(MR_mktag(0), mercury__psqueue__V_23_23, 1) = mercury__psqueue__InsertKey_6;
#line 700 "psqueue.m"
          MR_hl_field(MR_mktag(0), mercury__psqueue__V_23_23, 2) = ((MR_Box) (mercury__psqueue__V_26_26));
#line 700 "psqueue.m"
          MR_hl_field(MR_mktag(0), mercury__psqueue__V_23_23, 3) = mercury__psqueue__InsertKey_6;
#line 700 "psqueue.m"
        }
#line 694 "psqueue.m"
        {
#line 694 "psqueue.m"
          MR_Word base;
#line 694 "psqueue.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 694 "psqueue.m"
          *mercury__psqueue__STATE_VARIABLE_PSQ_11 = base;
#line 694 "psqueue.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__psqueue__V_23_23));
#line 694 "psqueue.m"
        }
#line 693 "psqueue.m"
        mercury__psqueue__succeeded = MR_TRUE;
#line 693 "psqueue.m"
      }
#line 708 "psqueue.m"
    else
#line 709 "psqueue.m"
      {
#line 709 "psqueue.m"
        MR_Word mercury__psqueue__Winner0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__STATE_VARIABLE_PSQ_0_10, (MR_Integer) 0)));
#line 709 "psqueue.m"
        MR_Word mercury__psqueue__Winner_9;
#line 709 "psqueue.m"
        MR_Word mercury__psqueue__V_12_12;

#line 710 "psqueue.m"
        {
#line 710 "psqueue.m"
          mercury__psqueue__V_12_12 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_103_101_116_95_116_111_117_114_110_97_109_101_110_116_95_118_105_101_119_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_1_f_0(mercury__psqueue__TypeInfo_for_K_16, mercury__psqueue__Winner0_8);
        }
#line 710 "psqueue.m"
        {
#line 710 "psqueue.m"
          mercury__psqueue__succeeded = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_116_118_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mercury__psqueue__TypeInfo_for_K_16, mercury__psqueue__InsertPrio_5, mercury__psqueue__InsertKey_6, mercury__psqueue__V_12_12, &mercury__psqueue__Winner_9);
        }
#line 709 "psqueue.m"
        if (mercury__psqueue__succeeded)
#line 709 "psqueue.m"
          {
#line 711 "psqueue.m"
            {
#line 711 "psqueue.m"
              MR_Word base;
#line 711 "psqueue.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 711 "psqueue.m"
              *mercury__psqueue__STATE_VARIABLE_PSQ_11 = base;
#line 711 "psqueue.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__psqueue__Winner_9));
#line 711 "psqueue.m"
            }
#line 711 "psqueue.m"
            mercury__psqueue__succeeded = MR_TRUE;
#line 709 "psqueue.m"
          }
#line 709 "psqueue.m"
      }
#line 708 "psqueue.m"
    return mercury__psqueue__succeeded;
#line 708 "psqueue.m"
  }
#line 71 "psqueue.m"
}

#line 77 "psqueue.m"
MR_Word MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_3_f_0(
#line 77 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_10,
#line 77 "psqueue.m"
  MR_Word mercury__psqueue__PSQ0_5,
#line 77 "psqueue.m"
  MR_Integer mercury__psqueue__InsertPrio_6,
#line 77 "psqueue.m"
  MR_Box mercury__psqueue__InsertKey_7)
#line 77 "psqueue.m"
{
#line 715 "psqueue.m"
  {
#line 715 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 715 "psqueue.m"
    MR_Word mercury__psqueue__PSQ_8;

#line 715 "psqueue.m"
    {
#line 715 "psqueue.m"
      mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mercury__psqueue__TypeInfo_for_K_10, mercury__psqueue__InsertPrio_6, mercury__psqueue__InsertKey_7, mercury__psqueue__PSQ0_5, &mercury__psqueue__PSQ_8);
    }
#line 715 "psqueue.m"
    return mercury__psqueue__PSQ_8;
#line 715 "psqueue.m"
  }
#line 77 "psqueue.m"
}

#line 78 "psqueue.m"
void MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_4_p_0(
#line 78 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_16,
#line 78 "psqueue.m"
  MR_Integer mercury__psqueue__InsertPrio_5,
#line 78 "psqueue.m"
  MR_Box mercury__psqueue__InsertKey_6,
#line 78 "psqueue.m"
  MR_Word mercury__psqueue__STATE_VARIABLE_PSQ_0_8,
#line 78 "psqueue.m"
  MR_Word * mercury__psqueue__STATE_VARIABLE_PSQ_9)
#line 78 "psqueue.m"
{
#line 720 "psqueue.m"
  {
#line 720 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 720 "psqueue.m"
    MR_Word mercury__psqueue__STATE_VARIABLE_PSQ_10_10;

#line 718 "psqueue.m"
    {
#line 718 "psqueue.m"
      mercury__psqueue__succeeded = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mercury__psqueue__TypeInfo_for_K_16, mercury__psqueue__InsertPrio_5, mercury__psqueue__InsertKey_6, mercury__psqueue__STATE_VARIABLE_PSQ_0_8, &mercury__psqueue__STATE_VARIABLE_PSQ_10_10);
    }
#line 720 "psqueue.m"
    if (mercury__psqueue__succeeded)
#line 718 "psqueue.m"
      *mercury__psqueue__STATE_VARIABLE_PSQ_9 = mercury__psqueue__STATE_VARIABLE_PSQ_10_10;
#line 720 "psqueue.m"
    else
#line 721 "psqueue.m"
      {
#line 721 "psqueue.m"
        {
#line 721 "psqueue.m"
          mercury__require__unexpected_3_p_0((MR_String) "psqueue.m", (MR_String) "predicate \140psqueue.det_insert\'/4", (MR_String) "key being inserted is already present");
#line 721 "psqueue.m"
          return;
        }
#line 721 "psqueue.m"
      }
#line 720 "psqueue.m"
  }
#line 78 "psqueue.m"
}

#line 94 "psqueue.m"
MR_bool MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_109_111_118_101_95_108_101_97_115_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_4_p_0(
#line 94 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_15,
#line 94 "psqueue.m"
  MR_Integer * mercury__psqueue__MinPrio_5,
#line 94 "psqueue.m"
  MR_Box * mercury__psqueue__MinKey_6,
#line 94 "psqueue.m"
  MR_Word mercury__psqueue__STATE_VARIABLE_PSQ_0_10,
#line 94 "psqueue.m"
  MR_Word * mercury__psqueue__STATE_VARIABLE_PSQ_11)
#line 94 "psqueue.m"
{
#line 772 "psqueue.m"
  {
#line 772 "psqueue.m"
    MR_bool mercury__psqueue__succeeded = ((MR_tag((MR_Word) mercury__psqueue__STATE_VARIABLE_PSQ_0_10)) == (MR_mktag((MR_Integer) 1)));
#line 772 "psqueue.m"
    MR_Word mercury__psqueue__LTree_8;
#line 772 "psqueue.m"
    MR_Box mercury__psqueue__MaxKey_9;
#line 772 "psqueue.m"
    MR_Word mercury__psqueue__V_12_12;

#line 773 "psqueue.m"
    if (mercury__psqueue__succeeded)
#line 773 "psqueue.m"
      {
#line 773 "psqueue.m"
        mercury__psqueue__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__STATE_VARIABLE_PSQ_0_10, (MR_Integer) 0)));
#line 773 "psqueue.m"
        *mercury__psqueue__MinPrio_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__psqueue__V_12_12, (MR_Integer) 0)));
#line 773 "psqueue.m"
        *mercury__psqueue__MinKey_6 = (MR_hl_field(MR_mktag(0), mercury__psqueue__V_12_12, (MR_Integer) 1));
#line 773 "psqueue.m"
        mercury__psqueue__LTree_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__psqueue__V_12_12, (MR_Integer) 2)));
#line 773 "psqueue.m"
        mercury__psqueue__MaxKey_9 = (MR_hl_field(MR_mktag(0), mercury__psqueue__V_12_12, (MR_Integer) 3));
#line 774 "psqueue.m"
        {
#line 774 "psqueue.m"
          *mercury__psqueue__STATE_VARIABLE_PSQ_11 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_118_101_114_116_95_108_111_115_101_114_95_116_114_101_101_95_116_111_95_112_115_113_117_101_117_101_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_2_f_0(mercury__psqueue__TypeInfo_for_K_15, mercury__psqueue__LTree_8, mercury__psqueue__MaxKey_9);
        }
#line 774 "psqueue.m"
        mercury__psqueue__succeeded = MR_TRUE;
#line 773 "psqueue.m"
      }
#line 772 "psqueue.m"
    return mercury__psqueue__succeeded;
#line 772 "psqueue.m"
  }
#line 94 "psqueue.m"
}

#line 101 "psqueue.m"
void MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_114_101_109_111_118_101_95_108_101_97_115_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_4_p_0(
#line 101 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_18,
#line 101 "psqueue.m"
  MR_Integer * mercury__psqueue__MinPrio_5,
#line 101 "psqueue.m"
  MR_Box * mercury__psqueue__MinKey_6,
#line 101 "psqueue.m"
  MR_Word mercury__psqueue__STATE_VARIABLE_PSQ_0_10,
#line 101 "psqueue.m"
  MR_Word * mercury__psqueue__STATE_VARIABLE_PSQ_11)
#line 101 "psqueue.m"
{
#line 780 "psqueue.m"
  {
#line 780 "psqueue.m"
    MR_bool mercury__psqueue__succeeded = ((MR_tag((MR_Word) mercury__psqueue__STATE_VARIABLE_PSQ_0_10)) == (MR_mktag((MR_Integer) 1)));
#line 780 "psqueue.m"
    MR_Integer mercury__psqueue__MinPrioPrime_8;
#line 780 "psqueue.m"
    MR_Box mercury__psqueue__MinKeyPrime_9;
#line 780 "psqueue.m"
    MR_Word mercury__psqueue__STATE_VARIABLE_PSQ_12_12;
#line 777 "psqueue.m"
    MR_Word mercury__psqueue__LTree_24;
#line 777 "psqueue.m"
    MR_Box mercury__psqueue__MaxKey_25;
#line 777 "psqueue.m"
    MR_Word mercury__psqueue__V_26_26;

#line 773 "psqueue.m"
    if (mercury__psqueue__succeeded)
#line 773 "psqueue.m"
      {
#line 773 "psqueue.m"
        mercury__psqueue__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__STATE_VARIABLE_PSQ_0_10, (MR_Integer) 0)));
#line 773 "psqueue.m"
        mercury__psqueue__MinPrioPrime_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__psqueue__V_26_26, (MR_Integer) 0)));
#line 773 "psqueue.m"
        mercury__psqueue__MinKeyPrime_9 = (MR_hl_field(MR_mktag(0), mercury__psqueue__V_26_26, (MR_Integer) 1));
#line 773 "psqueue.m"
        mercury__psqueue__LTree_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__psqueue__V_26_26, (MR_Integer) 2)));
#line 773 "psqueue.m"
        mercury__psqueue__MaxKey_25 = (MR_hl_field(MR_mktag(0), mercury__psqueue__V_26_26, (MR_Integer) 3));
#line 774 "psqueue.m"
        {
#line 774 "psqueue.m"
          mercury__psqueue__STATE_VARIABLE_PSQ_12_12 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_118_101_114_116_95_108_111_115_101_114_95_116_114_101_101_95_116_111_95_112_115_113_117_101_117_101_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_2_f_0(mercury__psqueue__TypeInfo_for_K_18, mercury__psqueue__LTree_24, mercury__psqueue__MaxKey_25);
        }
#line 774 "psqueue.m"
        mercury__psqueue__succeeded = MR_TRUE;
#line 773 "psqueue.m"
      }
#line 780 "psqueue.m"
    if (mercury__psqueue__succeeded)
#line 778 "psqueue.m"
      {
#line 778 "psqueue.m"
        *mercury__psqueue__STATE_VARIABLE_PSQ_11 = mercury__psqueue__STATE_VARIABLE_PSQ_12_12;
#line 778 "psqueue.m"
        *mercury__psqueue__MinKey_6 = mercury__psqueue__MinKeyPrime_9;
#line 779 "psqueue.m"
        *mercury__psqueue__MinPrio_5 = mercury__psqueue__MinPrioPrime_8;
#line 778 "psqueue.m"
      }
#line 780 "psqueue.m"
    else
#line 781 "psqueue.m"
      {
#line 781 "psqueue.m"
        {
#line 781 "psqueue.m"
          mercury__require__unexpected_3_p_0((MR_String) "psqueue.m", (MR_String) "predicate \140psqueue.det_remove_least\'/4", (MR_String) "priority search queue is empty");
#line 781 "psqueue.m"
          return;
        }
#line 781 "psqueue.m"
      }
#line 780 "psqueue.m"
  }
#line 101 "psqueue.m"
}

#line 109 "psqueue.m"
MR_Word MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_116_111_95_97_115_115_111_99_95_108_105_115_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_1_f_0(
#line 109 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_6,
#line 109 "psqueue.m"
  MR_Word mercury__psqueue__PSQ_3)
#line 109 "psqueue.m"
{
#line 814 "psqueue.m"
  {
#line 814 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 814 "psqueue.m"
    MR_Word mercury__psqueue__AssocList_4;

#line 814 "psqueue.m"
    {
#line 814 "psqueue.m"
      mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_116_111_95_97_115_115_111_99_95_108_105_115_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_2_p_0(mercury__psqueue__TypeInfo_for_K_6, mercury__psqueue__PSQ_3, &mercury__psqueue__AssocList_4);
    }
#line 814 "psqueue.m"
    return mercury__psqueue__AssocList_4;
#line 814 "psqueue.m"
  }
#line 109 "psqueue.m"
}

#line 110 "psqueue.m"
void MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_116_111_95_97_115_115_111_99_95_108_105_115_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_2_p_0(
#line 110 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_11,
#line 110 "psqueue.m"
  MR_Word mercury__psqueue__PSQ0_3,
#line 110 "psqueue.m"
  MR_Word * mercury__psqueue__AssocList_4)
#line 110 "psqueue.m"
{
#line 820 "psqueue.m"
  {
#line 820 "psqueue.m"
    MR_bool mercury__psqueue__succeeded = ((MR_tag((MR_Word) mercury__psqueue__PSQ0_3)) == (MR_mktag((MR_Integer) 1)));
#line 820 "psqueue.m"
    MR_Integer mercury__psqueue__K_5;
#line 820 "psqueue.m"
    MR_Box mercury__psqueue__P_6;
#line 820 "psqueue.m"
    MR_Word mercury__psqueue__PSQ1_7;
#line 817 "psqueue.m"
    MR_Word mercury__psqueue__LTree_17;
#line 817 "psqueue.m"
    MR_Box mercury__psqueue__MaxKey_18;
#line 817 "psqueue.m"
    MR_Word mercury__psqueue__V_19_19;

#line 773 "psqueue.m"
    if (mercury__psqueue__succeeded)
#line 773 "psqueue.m"
      {
#line 773 "psqueue.m"
        mercury__psqueue__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ0_3, (MR_Integer) 0)));
#line 773 "psqueue.m"
        mercury__psqueue__K_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__psqueue__V_19_19, (MR_Integer) 0)));
#line 773 "psqueue.m"
        mercury__psqueue__P_6 = (MR_hl_field(MR_mktag(0), mercury__psqueue__V_19_19, (MR_Integer) 1));
#line 773 "psqueue.m"
        mercury__psqueue__LTree_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__psqueue__V_19_19, (MR_Integer) 2)));
#line 773 "psqueue.m"
        mercury__psqueue__MaxKey_18 = (MR_hl_field(MR_mktag(0), mercury__psqueue__V_19_19, (MR_Integer) 3));
#line 774 "psqueue.m"
        {
#line 774 "psqueue.m"
          mercury__psqueue__PSQ1_7 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_118_101_114_116_95_108_111_115_101_114_95_116_114_101_101_95_116_111_95_112_115_113_117_101_117_101_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_2_f_0(mercury__psqueue__TypeInfo_for_K_11, mercury__psqueue__LTree_17, mercury__psqueue__MaxKey_18);
        }
#line 774 "psqueue.m"
        mercury__psqueue__succeeded = MR_TRUE;
#line 773 "psqueue.m"
      }
#line 820 "psqueue.m"
    if (mercury__psqueue__succeeded)
#line 818 "psqueue.m"
      {
#line 818 "psqueue.m"
        MR_Word mercury__psqueue__AssocListTail_8;
#line 818 "psqueue.m"
        MR_Word mercury__psqueue__V_9_9;

#line 818 "psqueue.m"
        {
#line 818 "psqueue.m"
          mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_116_111_95_97_115_115_111_99_95_108_105_115_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_2_p_0(mercury__psqueue__TypeInfo_for_K_11, mercury__psqueue__PSQ1_7, &mercury__psqueue__AssocListTail_8);
        }
#line 819 "psqueue.m"
        {
#line 819 "psqueue.m"
          mercury__psqueue__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 819 "psqueue.m"
          MR_hl_field(MR_mktag(0), mercury__psqueue__V_9_9, 0) = ((MR_Box) (mercury__psqueue__K_5));
#line 819 "psqueue.m"
          MR_hl_field(MR_mktag(0), mercury__psqueue__V_9_9, 1) = mercury__psqueue__P_6;
#line 819 "psqueue.m"
        }
#line 819 "psqueue.m"
        {
#line 819 "psqueue.m"
          MR_Word base;
#line 819 "psqueue.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 819 "psqueue.m"
          *mercury__psqueue__AssocList_4 = base;
#line 819 "psqueue.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__psqueue__V_9_9));
#line 819 "psqueue.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__psqueue__AssocListTail_8));
#line 819 "psqueue.m"
        }
#line 818 "psqueue.m"
      }
#line 820 "psqueue.m"
    else
#line 821 "psqueue.m"
      *mercury__psqueue__AssocList_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 820 "psqueue.m"
  }
#line 110 "psqueue.m"
}

#line 116 "psqueue.m"
MR_Word MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_102_114_111_109_95_97_115_115_111_99_95_108_105_115_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_1_f_0(
#line 116 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_6,
#line 116 "psqueue.m"
  MR_Word mercury__psqueue__AssocList_3)
#line 116 "psqueue.m"
{
#line 825 "psqueue.m"
  {
#line 825 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 825 "psqueue.m"
    MR_Word mercury__psqueue__PSQ_4;
#line 825 "psqueue.m"
    MR_Word mercury__psqueue__V_9_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 828 "psqueue.m"
    {
#line 828 "psqueue.m"
      mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_102_114_111_109_95_97_115_115_111_99_95_108_105_115_116_95_108_111_111_112_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__psqueue__TypeInfo_for_K_6, mercury__psqueue__AssocList_3, mercury__psqueue__V_9_9, &mercury__psqueue__PSQ_4);
    }
#line 825 "psqueue.m"
    return mercury__psqueue__PSQ_4;
#line 825 "psqueue.m"
  }
#line 116 "psqueue.m"
}

#line 117 "psqueue.m"
void MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_102_114_111_109_95_97_115_115_111_99_95_108_105_115_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_2_p_0(
#line 117 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_7,
#line 117 "psqueue.m"
  MR_Word mercury__psqueue__AssocList_3,
#line 117 "psqueue.m"
  MR_Word * mercury__psqueue__PSQ_4)
#line 117 "psqueue.m"
{
#line 827 "psqueue.m"
  {
#line 827 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 827 "psqueue.m"
    MR_Word mercury__psqueue__V_5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 828 "psqueue.m"
    {
#line 828 "psqueue.m"
      mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_102_114_111_109_95_97_115_115_111_99_95_108_105_115_116_95_108_111_111_112_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__psqueue__TypeInfo_for_K_7, mercury__psqueue__AssocList_3, mercury__psqueue__V_5_5, mercury__psqueue__PSQ_4);
#line 828 "psqueue.m"
      return;
    }
#line 827 "psqueue.m"
  }
#line 117 "psqueue.m"
}

#line 124 "psqueue.m"
MR_bool MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_109_111_118_101_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_4_p_0(
#line 124 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_14,
#line 124 "psqueue.m"
  MR_Integer * mercury__psqueue__MatchingPrio_5,
#line 124 "psqueue.m"
  MR_Box mercury__psqueue__SearchKey_6,
#line 124 "psqueue.m"
  MR_Word mercury__psqueue__STATE_VARIABLE_PSQ_0_9,
#line 124 "psqueue.m"
  MR_Word * mercury__psqueue__STATE_VARIABLE_PSQ_10)
#line 124 "psqueue.m"
{
#line 3410 "psqueue.c"
  {
#line 3412 "psqueue.c"
    MR_bool mercury__psqueue__succeeded = ((MR_tag((MR_Word) mercury__psqueue__STATE_VARIABLE_PSQ_0_9)) == (MR_mktag((MR_Integer) 1)));
#line 3414 "psqueue.c"
    MR_Word mercury__psqueue__Winner0_8;
#line 3416 "psqueue.c"
    MR_Word mercury__psqueue__V_11_11;

#line 3419 "psqueue.c"
    if (mercury__psqueue__succeeded)
#line 3421 "psqueue.c"
      {
#line 3423 "psqueue.c"
        mercury__psqueue__Winner0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__STATE_VARIABLE_PSQ_0_9, (MR_Integer) 0)));
#line 847 "psqueue.m"
        {
#line 847 "psqueue.m"
          mercury__psqueue__V_11_11 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_103_101_116_95_116_111_117_114_110_97_109_101_110_116_95_118_105_101_119_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_1_f_0(mercury__psqueue__TypeInfo_for_K_14, mercury__psqueue__Winner0_8);
        }
#line 847 "psqueue.m"
        {
#line 847 "psqueue.m"
          return mercury__psqueue__succeeded = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_109_111_118_101_95_116_118_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mercury__psqueue__TypeInfo_for_K_14, mercury__psqueue__MatchingPrio_5, mercury__psqueue__SearchKey_6, mercury__psqueue__V_11_11, mercury__psqueue__STATE_VARIABLE_PSQ_10);
        }
#line 3435 "psqueue.c"
      }
#line 3437 "psqueue.c"
    return mercury__psqueue__succeeded;
#line 3439 "psqueue.c"
  }
#line 124 "psqueue.m"
}

#line 130 "psqueue.m"
void MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_114_101_109_111_118_101_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_4_p_0(
#line 130 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_17,
#line 130 "psqueue.m"
  MR_Integer * mercury__psqueue__MatchingPrio_5,
#line 130 "psqueue.m"
  MR_Box mercury__psqueue__SearchKey_6,
#line 130 "psqueue.m"
  MR_Word mercury__psqueue__STATE_VARIABLE_PSQ_0_9,
#line 130 "psqueue.m"
  MR_Word * mercury__psqueue__STATE_VARIABLE_PSQ_10)
#line 130 "psqueue.m"
{
#line 853 "psqueue.m"
  {
#line 853 "psqueue.m"
    MR_bool mercury__psqueue__succeeded = ((MR_tag((MR_Word) mercury__psqueue__STATE_VARIABLE_PSQ_0_9)) == (MR_mktag((MR_Integer) 1)));
#line 853 "psqueue.m"
    MR_Integer mercury__psqueue__MatchingPrioPrime_8;
#line 853 "psqueue.m"
    MR_Word mercury__psqueue__STATE_VARIABLE_PSQ_11_11;
#line 851 "psqueue.m"
    MR_Word mercury__psqueue__Winner0_23;
#line 851 "psqueue.m"
    MR_Word mercury__psqueue__V_24_24;

#line 3472 "psqueue.c"
    if (mercury__psqueue__succeeded)
#line 3474 "psqueue.c"
      {
#line 3476 "psqueue.c"
        mercury__psqueue__Winner0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__STATE_VARIABLE_PSQ_0_9, (MR_Integer) 0)));
#line 847 "psqueue.m"
        {
#line 847 "psqueue.m"
          mercury__psqueue__V_24_24 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_103_101_116_95_116_111_117_114_110_97_109_101_110_116_95_118_105_101_119_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_1_f_0(mercury__psqueue__TypeInfo_for_K_17, mercury__psqueue__Winner0_23);
        }
#line 847 "psqueue.m"
        {
#line 847 "psqueue.m"
          mercury__psqueue__succeeded = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_109_111_118_101_95_116_118_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mercury__psqueue__TypeInfo_for_K_17, &mercury__psqueue__MatchingPrioPrime_8, mercury__psqueue__SearchKey_6, mercury__psqueue__V_24_24, &mercury__psqueue__STATE_VARIABLE_PSQ_11_11);
        }
#line 3488 "psqueue.c"
      }
#line 853 "psqueue.m"
    if (mercury__psqueue__succeeded)
#line 852 "psqueue.m"
      {
#line 852 "psqueue.m"
        *mercury__psqueue__STATE_VARIABLE_PSQ_10 = mercury__psqueue__STATE_VARIABLE_PSQ_11_11;
#line 852 "psqueue.m"
        *mercury__psqueue__MatchingPrio_5 = mercury__psqueue__MatchingPrioPrime_8;
#line 852 "psqueue.m"
      }
#line 853 "psqueue.m"
    else
#line 854 "psqueue.m"
      {
#line 854 "psqueue.m"
        {
#line 854 "psqueue.m"
          mercury__require__unexpected_3_p_0((MR_String) "psqueue.m", (MR_String) "predicate \140psqueue.det_remove\'/4", (MR_String) "element not found");
#line 854 "psqueue.m"
          return;
        }
#line 854 "psqueue.m"
      }
#line 853 "psqueue.m"
  }
#line 130 "psqueue.m"
}

#line 137 "psqueue.m"
MR_bool MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_97_100_106_117_115_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_4_p_0(
#line 137 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_15,
#line 137 "psqueue.m"
  MR_Word mercury__psqueue__AdjustFunc_5,
#line 137 "psqueue.m"
  MR_Box mercury__psqueue__SearchKey_6,
#line 137 "psqueue.m"
  MR_Word mercury__psqueue__STATE_VARIABLE_PSQ_0_10,
#line 137 "psqueue.m"
  MR_Word * mercury__psqueue__STATE_VARIABLE_PSQ_11)
#line 137 "psqueue.m"
{
#line 3533 "psqueue.c"
  {
#line 3535 "psqueue.c"
    MR_bool mercury__psqueue__succeeded = ((MR_tag((MR_Word) mercury__psqueue__STATE_VARIABLE_PSQ_0_10)) == (MR_mktag((MR_Integer) 1)));
#line 3537 "psqueue.c"
    MR_Word mercury__psqueue__Winner0_8;
#line 3539 "psqueue.c"
    MR_Word mercury__psqueue__Winner_9;
#line 3541 "psqueue.c"
    MR_Word mercury__psqueue__V_12_12;

#line 3544 "psqueue.c"
    if (mercury__psqueue__succeeded)
#line 3546 "psqueue.c"
      {
#line 3548 "psqueue.c"
        mercury__psqueue__Winner0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__STATE_VARIABLE_PSQ_0_10, (MR_Integer) 0)));
#line 895 "psqueue.m"
        {
#line 895 "psqueue.m"
          mercury__psqueue__V_12_12 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_103_101_116_95_116_111_117_114_110_97_109_101_110_116_95_118_105_101_119_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_1_f_0(mercury__psqueue__TypeInfo_for_K_15, mercury__psqueue__Winner0_8);
        }
#line 895 "psqueue.m"
        {
#line 895 "psqueue.m"
          mercury__psqueue__succeeded = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_97_100_106_117_115_116_95_116_118_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mercury__psqueue__TypeInfo_for_K_15, mercury__psqueue__AdjustFunc_5, mercury__psqueue__SearchKey_6, mercury__psqueue__V_12_12, &mercury__psqueue__Winner_9);
        }
#line 3560 "psqueue.c"
        if (mercury__psqueue__succeeded)
#line 3562 "psqueue.c"
          {
#line 896 "psqueue.m"
            {
#line 896 "psqueue.m"
              MR_Word base;
#line 896 "psqueue.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 896 "psqueue.m"
              *mercury__psqueue__STATE_VARIABLE_PSQ_11 = base;
#line 896 "psqueue.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__psqueue__Winner_9));
#line 896 "psqueue.m"
            }
#line 896 "psqueue.m"
            mercury__psqueue__succeeded = MR_TRUE;
#line 3578 "psqueue.c"
          }
#line 3580 "psqueue.c"
      }
#line 3582 "psqueue.c"
    return mercury__psqueue__succeeded;
#line 3584 "psqueue.c"
  }
#line 137 "psqueue.m"
}

#line 144 "psqueue.m"
MR_bool MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_3_p_0(
#line 144 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_10,
#line 144 "psqueue.m"
  MR_Word mercury__psqueue__PSQ_4,
#line 144 "psqueue.m"
  MR_Box mercury__psqueue__SearchKey_5,
#line 144 "psqueue.m"
  MR_Integer * mercury__psqueue__MatchingPrio_6)
#line 144 "psqueue.m"
{
#line 3602 "psqueue.c"
  {
#line 3604 "psqueue.c"
    MR_bool mercury__psqueue__succeeded = ((MR_tag((MR_Word) mercury__psqueue__PSQ_4)) == (MR_mktag((MR_Integer) 1)));
#line 3606 "psqueue.c"
    MR_Word mercury__psqueue__Winner_7;
#line 3608 "psqueue.c"
    MR_Word mercury__psqueue__V_8_8;

#line 3611 "psqueue.c"
    if (mercury__psqueue__succeeded)
#line 3613 "psqueue.c"
      {
#line 3615 "psqueue.c"
        mercury__psqueue__Winner_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_4, (MR_Integer) 0)));
#line 937 "psqueue.m"
        {
#line 937 "psqueue.m"
          mercury__psqueue__V_8_8 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_103_101_116_95_116_111_117_114_110_97_109_101_110_116_95_118_105_101_119_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_1_f_0(mercury__psqueue__TypeInfo_for_K_10, mercury__psqueue__Winner_7);
        }
#line 937 "psqueue.m"
        {
#line 937 "psqueue.m"
          return mercury__psqueue__succeeded = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_116_118_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__psqueue__TypeInfo_for_K_10, mercury__psqueue__V_8_8, mercury__psqueue__SearchKey_5, mercury__psqueue__MatchingPrio_6);
        }
#line 3627 "psqueue.c"
      }
#line 3629 "psqueue.c"
    return mercury__psqueue__succeeded;
#line 3631 "psqueue.c"
  }
#line 144 "psqueue.m"
}

#line 150 "psqueue.m"
MR_Integer MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_2_f_0(
#line 150 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_8,
#line 150 "psqueue.m"
  MR_Word mercury__psqueue__PSQ_4,
#line 150 "psqueue.m"
  MR_Box mercury__psqueue__SearchKey_5)
#line 150 "psqueue.m"
{
#line 962 "psqueue.m"
  {
#line 962 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 962 "psqueue.m"
    MR_Integer mercury__psqueue__MatchingPrio_6;

#line 962 "psqueue.m"
    {
#line 962 "psqueue.m"
      mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__psqueue__TypeInfo_for_K_8, mercury__psqueue__PSQ_4, mercury__psqueue__SearchKey_5, &mercury__psqueue__MatchingPrio_6);
    }
#line 962 "psqueue.m"
    return mercury__psqueue__MatchingPrio_6;
#line 962 "psqueue.m"
  }
#line 150 "psqueue.m"
}

#line 151 "psqueue.m"
void MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_3_p_0(
#line 151 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_12,
#line 151 "psqueue.m"
  MR_Word mercury__psqueue__PSQ_4,
#line 151 "psqueue.m"
  MR_Box mercury__psqueue__SearchKey_5,
#line 151 "psqueue.m"
  MR_Integer * mercury__psqueue__MatchingPrio_6)
#line 151 "psqueue.m"
{
#line 967 "psqueue.m"
  {
#line 967 "psqueue.m"
    MR_bool mercury__psqueue__succeeded = ((MR_tag((MR_Word) mercury__psqueue__PSQ_4)) == (MR_mktag((MR_Integer) 1)));
#line 967 "psqueue.m"
    MR_Integer mercury__psqueue__MatchingPrioPrime_7;
#line 965 "psqueue.m"
    MR_Word mercury__psqueue__Winner_16;
#line 965 "psqueue.m"
    MR_Word mercury__psqueue__V_17_17;

#line 3690 "psqueue.c"
    if (mercury__psqueue__succeeded)
#line 3692 "psqueue.c"
      {
#line 3694 "psqueue.c"
        mercury__psqueue__Winner_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_4, (MR_Integer) 0)));
#line 937 "psqueue.m"
        {
#line 937 "psqueue.m"
          mercury__psqueue__V_17_17 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_103_101_116_95_116_111_117_114_110_97_109_101_110_116_95_118_105_101_119_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_1_f_0(mercury__psqueue__TypeInfo_for_K_12, mercury__psqueue__Winner_16);
        }
#line 937 "psqueue.m"
        {
#line 937 "psqueue.m"
          mercury__psqueue__succeeded = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_116_118_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__psqueue__TypeInfo_for_K_12, mercury__psqueue__V_17_17, mercury__psqueue__SearchKey_5, &mercury__psqueue__MatchingPrioPrime_7);
        }
#line 3706 "psqueue.c"
      }
#line 967 "psqueue.m"
    if (mercury__psqueue__succeeded)
#line 966 "psqueue.m"
      *mercury__psqueue__MatchingPrio_6 = mercury__psqueue__MatchingPrioPrime_7;
#line 967 "psqueue.m"
    else
#line 968 "psqueue.m"
      {
#line 968 "psqueue.m"
        {
#line 968 "psqueue.m"
          mercury__require__unexpected_3_p_0((MR_String) "psqueue.m", (MR_String) "predicate \140psqueue.lookup\'/3", (MR_String) "key not found");
#line 968 "psqueue.m"
          return;
        }
#line 968 "psqueue.m"
      }
#line 967 "psqueue.m"
  }
#line 151 "psqueue.m"
}

#line 158 "psqueue.m"
MR_Word MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_97_116_95_109_111_115_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_2_f_0(
#line 158 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_8,
#line 158 "psqueue.m"
  MR_Word mercury__psqueue__PSQ_4,
#line 158 "psqueue.m"
  MR_Integer mercury__psqueue__MaxPrio_5)
#line 158 "psqueue.m"
{
#line 974 "psqueue.m"
  {
#line 974 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 974 "psqueue.m"
    MR_Word mercury__psqueue__AssocList_6;

#line 974 "psqueue.m"
    {
#line 974 "psqueue.m"
      mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_97_116_95_109_111_115_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__psqueue__TypeInfo_for_K_8, mercury__psqueue__PSQ_4, mercury__psqueue__MaxPrio_5, &mercury__psqueue__AssocList_6);
    }
#line 974 "psqueue.m"
    return mercury__psqueue__AssocList_6;
#line 974 "psqueue.m"
  }
#line 158 "psqueue.m"
}

#line 159 "psqueue.m"
void MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_97_116_95_109_111_115_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_3_p_0(
#line 159 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_10,
#line 159 "psqueue.m"
  MR_Word mercury__psqueue__PSQ_4,
#line 159 "psqueue.m"
  MR_Integer mercury__psqueue__MaxPrio_5,
#line 159 "psqueue.m"
  MR_Word * mercury__psqueue__AssocList_6)
#line 159 "psqueue.m"
{
#line 980 "psqueue.m"
  {
#line 980 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 980 "psqueue.m"
    MR_Word mercury__psqueue__TypeInfo_for_P_9 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;

#line 980 "psqueue.m"
    if ((mercury__psqueue__PSQ_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 979 "psqueue.m"
      *mercury__psqueue__AssocList_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 980 "psqueue.m"
    else
#line 981 "psqueue.m"
      {
#line 981 "psqueue.m"
        MR_Word mercury__psqueue__TypeCtorInfo_11_11;
#line 981 "psqueue.m"
        MR_Word mercury__psqueue__TypeInfo_12_12;
#line 981 "psqueue.m"
        MR_Word mercury__psqueue__Winner_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_4, (MR_Integer) 0)));
#line 981 "psqueue.m"
        MR_Word mercury__psqueue__Cord_8;
#line 983 "psqueue.m"
        MR_Word mercury__psqueue__conv0_AssocList_6;

#line 982 "psqueue.m"
        {
#line 982 "psqueue.m"
          mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_97_116_95_109_111_115_116_95_105_110_95_119_105_110_110_101_114_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__psqueue__TypeInfo_for_K_10, mercury__psqueue__Winner_7, mercury__psqueue__MaxPrio_5, &mercury__psqueue__Cord_8);
        }
#line 3804 "psqueue.c"
        mercury__psqueue__TypeCtorInfo_11_11 = (MR_Word) &mercury__pair__pair__type_ctor_info_pair_2;
#line 3806 "psqueue.c"
        {
#line 3808 "psqueue.c"
          mercury__psqueue__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3810 "psqueue.c"
          MR_hl_field(MR_mktag(0), mercury__psqueue__TypeInfo_12_12, 0) = ((MR_Box) (mercury__psqueue__TypeCtorInfo_11_11));
#line 3812 "psqueue.c"
          MR_hl_field(MR_mktag(0), mercury__psqueue__TypeInfo_12_12, 1) = ((MR_Box) (mercury__psqueue__TypeInfo_for_P_9));
#line 3814 "psqueue.c"
          MR_hl_field(MR_mktag(0), mercury__psqueue__TypeInfo_12_12, 2) = ((MR_Box) (mercury__psqueue__TypeInfo_for_K_10));
#line 3816 "psqueue.c"
        }
#line 983 "psqueue.m"
        {
#line 983 "psqueue.m"
          mercury__psqueue__conv0_AssocList_6 = mercury__cord__list_1_f_0(mercury__psqueue__TypeInfo_12_12, (MR_Word) mercury__psqueue__Cord_8);
        }
#line 983 "psqueue.m"
        *mercury__psqueue__AssocList_6 = (MR_Word) mercury__psqueue__conv0_AssocList_6;
#line 981 "psqueue.m"
      }
#line 980 "psqueue.m"
  }
#line 159 "psqueue.m"
}

#line 165 "psqueue.m"
MR_Integer MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_105_122_101_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_1_f_0(
#line 165 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_6,
#line 165 "psqueue.m"
  MR_Word mercury__psqueue__PSQ_3)
#line 165 "psqueue.m"
{
#line 1015 "psqueue.m"
  {
#line 1015 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 1015 "psqueue.m"
    MR_Integer mercury__psqueue__Size_4;

#line 1015 "psqueue.m"
    {
#line 1015 "psqueue.m"
      mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_105_122_101_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_2_p_0(mercury__psqueue__TypeInfo_for_K_6, mercury__psqueue__PSQ_3, &mercury__psqueue__Size_4);
    }
#line 1015 "psqueue.m"
    return mercury__psqueue__Size_4;
#line 1015 "psqueue.m"
  }
#line 165 "psqueue.m"
}

#line 166 "psqueue.m"
void MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_105_122_101_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_2_p_0(
#line 166 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_13,
#line 166 "psqueue.m"
  MR_Word mercury__psqueue__PSQ_3,
#line 166 "psqueue.m"
  MR_Integer * mercury__psqueue__Size_4)
#line 166 "psqueue.m"
{
#line 1021 "psqueue.m"
  {
#line 1021 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;

#line 1021 "psqueue.m"
    if ((mercury__psqueue__PSQ_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1020 "psqueue.m"
      *mercury__psqueue__Size_4 = (MR_Integer) 0;
#line 1021 "psqueue.m"
    else
#line 1022 "psqueue.m"
      {
#line 1022 "psqueue.m"
        MR_Word mercury__psqueue__LTree_7;
#line 1022 "psqueue.m"
        MR_Word mercury__psqueue__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_3, (MR_Integer) 0)));
#line 1022 "psqueue.m"
        MR_Integer mercury__psqueue__V_11_11;
#line 1022 "psqueue.m"
        MR_Integer mercury__psqueue__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__psqueue__V_9_9, (MR_Integer) 0)));
#line 1022 "psqueue.m"
        MR_Box mercury__psqueue__V_6_6 = (MR_hl_field(MR_mktag(0), mercury__psqueue__V_9_9, (MR_Integer) 1));
#line 1022 "psqueue.m"
        MR_Box mercury__psqueue__V_8_8;

#line 1022 "psqueue.m"
        mercury__psqueue__LTree_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__psqueue__V_9_9, (MR_Integer) 2)));
#line 1022 "psqueue.m"
        mercury__psqueue__V_8_8 = (MR_hl_field(MR_mktag(0), mercury__psqueue__V_9_9, (MR_Integer) 3));
#line 1033 "psqueue.m"
        if ((mercury__psqueue__LTree_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1032 "psqueue.m"
          mercury__psqueue__V_11_11 = (MR_Integer) 0;
#line 1033 "psqueue.m"
        else
#line 1034 "psqueue.m"
          {
#line 1034 "psqueue.m"
            MR_Integer mercury__psqueue__V_16_16;
#line 1034 "psqueue.m"
            MR_Box mercury__psqueue__V_17_17;
#line 1034 "psqueue.m"
            MR_Word mercury__psqueue__V_18_18;
#line 1034 "psqueue.m"
            MR_Box mercury__psqueue__V_19_19;
#line 1034 "psqueue.m"
            MR_Word mercury__psqueue__V_20_20;

#line 1034 "psqueue.m"
            mercury__psqueue__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_7, (MR_Integer) 0)));
#line 1034 "psqueue.m"
            mercury__psqueue__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_7, (MR_Integer) 1)));
#line 1034 "psqueue.m"
            mercury__psqueue__V_17_17 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_7, (MR_Integer) 2));
#line 1034 "psqueue.m"
            mercury__psqueue__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_7, (MR_Integer) 3)));
#line 1034 "psqueue.m"
            mercury__psqueue__V_19_19 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_7, (MR_Integer) 4));
#line 1034 "psqueue.m"
            mercury__psqueue__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_7, (MR_Integer) 5)));
#line 1034 "psqueue.m"
          }
#line 1024 "psqueue.m"
        *mercury__psqueue__Size_4 = ((MR_Integer) 1 + mercury__psqueue__V_11_11);
#line 1022 "psqueue.m"
      }
#line 1021 "psqueue.m"
  }
#line 166 "psqueue.m"
}

#line 364 "psqueue.m"
MR_Word MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_103_101_116_95_116_111_117_114_110_97_109_101_110_116_95_118_105_101_119_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_1_f_0(
#line 364 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_18,
#line 364 "psqueue.m"
  MR_Word mercury__psqueue__Winner_3)
#line 364 "psqueue.m"
{
#line 367 "psqueue.m"
  {
#line 367 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 367 "psqueue.m"
    MR_Word mercury__psqueue__TournamentView_4;
#line 367 "psqueue.m"
    MR_Integer mercury__psqueue__WinnerPrio_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__psqueue__Winner_3, (MR_Integer) 0)));
#line 367 "psqueue.m"
    MR_Box mercury__psqueue__WinnerKey_6 = (MR_hl_field(MR_mktag(0), mercury__psqueue__Winner_3, (MR_Integer) 1));
#line 367 "psqueue.m"
    MR_Word mercury__psqueue__LTree_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__psqueue__Winner_3, (MR_Integer) 2)));
#line 367 "psqueue.m"
    MR_Box mercury__psqueue__MaxKey_8 = (MR_hl_field(MR_mktag(0), mercury__psqueue__Winner_3, (MR_Integer) 3));

#line 372 "psqueue.m"
    if ((mercury__psqueue__LTree_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 371 "psqueue.m"
      {
#line 371 "psqueue.m"
        mercury__psqueue__TournamentView_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 371 "psqueue.m"
        MR_hl_field(MR_mktag(0), mercury__psqueue__TournamentView_4, 0) = ((MR_Box) (mercury__psqueue__WinnerPrio_5));
#line 371 "psqueue.m"
        MR_hl_field(MR_mktag(0), mercury__psqueue__TournamentView_4, 1) = mercury__psqueue__WinnerKey_6;
#line 371 "psqueue.m"
      }
#line 372 "psqueue.m"
    else
#line 374 "psqueue.m"
      {
#line 374 "psqueue.m"
        MR_Integer mercury__psqueue__LoserPrio_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_7, (MR_Integer) 1)));
#line 374 "psqueue.m"
        MR_Box mercury__psqueue__LoserKey_11 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_7, (MR_Integer) 2));
#line 374 "psqueue.m"
        MR_Word mercury__psqueue__SubLTreeL_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_7, (MR_Integer) 3)));
#line 374 "psqueue.m"
        MR_Box mercury__psqueue__SplitKey_13 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_7, (MR_Integer) 4));
#line 374 "psqueue.m"
        MR_Word mercury__psqueue__SubLTreeR_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_7, (MR_Integer) 5)));
#line 374 "psqueue.m"
        MR_Word mercury__psqueue__WinnerA_15;
#line 374 "psqueue.m"
        MR_Word mercury__psqueue__WinnerB_16;
#line 373 "psqueue.m"
        MR_Integer mercury__psqueue__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_7, (MR_Integer) 0)));
#line 1042 "psqueue.m"
        MR_Word mercury__psqueue__CMP_21;

#line 1043 "psqueue.m"
        {
#line 1043 "psqueue.m"
          mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_18, &mercury__psqueue__CMP_21, mercury__psqueue__LoserKey_11, mercury__psqueue__SplitKey_13);
        }
#line 1045 "psqueue.m"
        if ((mercury__psqueue__CMP_21 == (MR_Integer) 1))
#line 1044 "psqueue.m"
          mercury__psqueue__succeeded = MR_TRUE;
#line 1045 "psqueue.m"
        else
#line 1045 "psqueue.m"
          if ((mercury__psqueue__CMP_21 == (MR_Integer) 0))
#line 1045 "psqueue.m"
            mercury__psqueue__succeeded = MR_TRUE;
#line 1045 "psqueue.m"
          else
#line 1045 "psqueue.m"
            mercury__psqueue__succeeded = MR_FALSE;
#line 378 "psqueue.m"
        if (mercury__psqueue__succeeded)
#line 376 "psqueue.m"
          {
#line 376 "psqueue.m"
            {
#line 376 "psqueue.m"
              mercury__psqueue__WinnerA_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 376 "psqueue.m"
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_15, 0) = ((MR_Box) (mercury__psqueue__LoserPrio_10));
#line 376 "psqueue.m"
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_15, 1) = mercury__psqueue__LoserKey_11;
#line 376 "psqueue.m"
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_15, 2) = ((MR_Box) (mercury__psqueue__SubLTreeL_12));
#line 376 "psqueue.m"
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_15, 3) = mercury__psqueue__SplitKey_13;
#line 376 "psqueue.m"
            }
#line 377 "psqueue.m"
            {
#line 377 "psqueue.m"
              mercury__psqueue__WinnerB_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 377 "psqueue.m"
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_16, 0) = ((MR_Box) (mercury__psqueue__WinnerPrio_5));
#line 377 "psqueue.m"
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_16, 1) = mercury__psqueue__WinnerKey_6;
#line 377 "psqueue.m"
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_16, 2) = ((MR_Box) (mercury__psqueue__SubLTreeR_14));
#line 377 "psqueue.m"
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_16, 3) = mercury__psqueue__MaxKey_8;
#line 377 "psqueue.m"
            }
#line 376 "psqueue.m"
          }
#line 378 "psqueue.m"
        else
#line 379 "psqueue.m"
          {
#line 379 "psqueue.m"
            {
#line 379 "psqueue.m"
              mercury__psqueue__WinnerA_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 379 "psqueue.m"
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_15, 0) = ((MR_Box) (mercury__psqueue__WinnerPrio_5));
#line 379 "psqueue.m"
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_15, 1) = mercury__psqueue__WinnerKey_6;
#line 379 "psqueue.m"
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_15, 2) = ((MR_Box) (mercury__psqueue__SubLTreeL_12));
#line 379 "psqueue.m"
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_15, 3) = mercury__psqueue__SplitKey_13;
#line 379 "psqueue.m"
            }
#line 380 "psqueue.m"
            {
#line 380 "psqueue.m"
              mercury__psqueue__WinnerB_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 380 "psqueue.m"
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_16, 0) = ((MR_Box) (mercury__psqueue__LoserPrio_10));
#line 380 "psqueue.m"
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_16, 1) = mercury__psqueue__LoserKey_11;
#line 380 "psqueue.m"
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_16, 2) = ((MR_Box) (mercury__psqueue__SubLTreeR_14));
#line 380 "psqueue.m"
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_16, 3) = mercury__psqueue__MaxKey_8;
#line 380 "psqueue.m"
            }
#line 379 "psqueue.m"
          }
#line 382 "psqueue.m"
        {
#line 382 "psqueue.m"
          mercury__psqueue__TournamentView_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 382 "psqueue.m"
          MR_hl_field(MR_mktag(1), mercury__psqueue__TournamentView_4, 0) = ((MR_Box) (mercury__psqueue__WinnerA_15));
#line 382 "psqueue.m"
          MR_hl_field(MR_mktag(1), mercury__psqueue__TournamentView_4, 1) = ((MR_Box) (mercury__psqueue__WinnerB_16));
#line 382 "psqueue.m"
        }
#line 374 "psqueue.m"
      }
#line 367 "psqueue.m"
    return mercury__psqueue__TournamentView_4;
#line 367 "psqueue.m"
  }
#line 364 "psqueue.m"
}

#line 450 "psqueue.m"
void MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_109_98_105_110_101_95_119_105_110_110_101_114_115_95_118_105_97_95_116_111_117_114_110_97_109_101_110_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_3_p_0(
#line 450 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_18,
#line 450 "psqueue.m"
  MR_Word mercury__psqueue__WinnerA_4,
#line 450 "psqueue.m"
  MR_Word mercury__psqueue__WinnerB_5,
#line 450 "psqueue.m"
  MR_Word * mercury__psqueue__CombinedWinner_6)
#line 450 "psqueue.m"
{
#line 454 "psqueue.m"
  {
#line 454 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 454 "psqueue.m"
    MR_Integer mercury__psqueue__PrioA_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_4, (MR_Integer) 0)));
#line 454 "psqueue.m"
    MR_Box mercury__psqueue__KeyA_8 = (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_4, (MR_Integer) 1));
#line 454 "psqueue.m"
    MR_Word mercury__psqueue__LTreeA_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_4, (MR_Integer) 2)));
#line 454 "psqueue.m"
    MR_Box mercury__psqueue__MaxKeyA_10 = (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_4, (MR_Integer) 3));
#line 454 "psqueue.m"
    MR_Integer mercury__psqueue__PrioB_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_5, (MR_Integer) 0)));
#line 454 "psqueue.m"
    MR_Box mercury__psqueue__KeyB_12 = (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_5, (MR_Integer) 1));
#line 454 "psqueue.m"
    MR_Word mercury__psqueue__LTreeB_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_5, (MR_Integer) 2)));
#line 454 "psqueue.m"
    MR_Box mercury__psqueue__MaxKeyB_14 = (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_5, (MR_Integer) 3));

#line 457 "psqueue.m"
    {
#line 457 "psqueue.m"
      mercury__psqueue__succeeded = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_101_113_95_95_91_86_32_61_32_105_110_116_93_95_48_95_49_2_p_0(mercury__psqueue__PrioA_7, mercury__psqueue__PrioB_11);
    }
#line 461 "psqueue.m"
    if (mercury__psqueue__succeeded)
#line 459 "psqueue.m"
      {
#line 459 "psqueue.m"
        MR_Word mercury__psqueue__LTree_15;

#line 459 "psqueue.m"
        {
#line 459 "psqueue.m"
          mercury__psqueue__LTree_15 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_98_97_108_97_110_99_101_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_5_f_0(mercury__psqueue__TypeInfo_for_K_18, mercury__psqueue__PrioB_11, mercury__psqueue__KeyB_12, mercury__psqueue__LTreeA_9, mercury__psqueue__MaxKeyA_10, mercury__psqueue__LTreeB_13);
        }
#line 460 "psqueue.m"
        {
#line 460 "psqueue.m"
          MR_Word base;
#line 460 "psqueue.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 460 "psqueue.m"
          *mercury__psqueue__CombinedWinner_6 = base;
#line 460 "psqueue.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__psqueue__PrioA_7));
#line 460 "psqueue.m"
          MR_hl_field(MR_mktag(0), base, 1) = mercury__psqueue__KeyA_8;
#line 460 "psqueue.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__psqueue__LTree_15));
#line 460 "psqueue.m"
          MR_hl_field(MR_mktag(0), base, 3) = mercury__psqueue__MaxKeyB_14;
#line 460 "psqueue.m"
        }
#line 459 "psqueue.m"
      }
#line 461 "psqueue.m"
    else
#line 463 "psqueue.m"
      {
#line 463 "psqueue.m"
        MR_Word mercury__psqueue__LTree_16;

#line 463 "psqueue.m"
        {
#line 463 "psqueue.m"
          mercury__psqueue__LTree_16 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_98_97_108_97_110_99_101_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_5_f_0(mercury__psqueue__TypeInfo_for_K_18, mercury__psqueue__PrioA_7, mercury__psqueue__KeyA_8, mercury__psqueue__LTreeA_9, mercury__psqueue__MaxKeyA_10, mercury__psqueue__LTreeB_13);
        }
#line 464 "psqueue.m"
        {
#line 464 "psqueue.m"
          MR_Word base;
#line 464 "psqueue.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 464 "psqueue.m"
          *mercury__psqueue__CombinedWinner_6 = base;
#line 464 "psqueue.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__psqueue__PrioB_11));
#line 464 "psqueue.m"
          MR_hl_field(MR_mktag(0), base, 1) = mercury__psqueue__KeyB_12;
#line 464 "psqueue.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__psqueue__LTree_16));
#line 464 "psqueue.m"
          MR_hl_field(MR_mktag(0), base, 3) = mercury__psqueue__MaxKeyB_14;
#line 464 "psqueue.m"
        }
#line 463 "psqueue.m"
      }
#line 454 "psqueue.m"
  }
#line 450 "psqueue.m"
}

#line 492 "psqueue.m"
static MR_Word MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_98_97_108_97_110_99_101_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_5_f_0(
#line 492 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_24,
#line 492 "psqueue.m"
  MR_Integer mercury__psqueue__Prio_7,
#line 492 "psqueue.m"
  MR_Box mercury__psqueue__Key_8,
#line 492 "psqueue.m"
  MR_Word mercury__psqueue__LTreeL_9,
#line 492 "psqueue.m"
  MR_Box mercury__psqueue__SplitKey_10,
#line 492 "psqueue.m"
  MR_Word mercury__psqueue__LTreeR_11)
#line 492 "psqueue.m"
{
#line 496 "psqueue.m"
  {
#line 496 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 496 "psqueue.m"
    MR_Word mercury__psqueue__LTree_12;
#line 496 "psqueue.m"
    MR_Integer mercury__psqueue__SizeL_13;
#line 496 "psqueue.m"
    MR_Integer mercury__psqueue__SizeR_14;
#line 500 "psqueue.m"
    MR_Integer mercury__psqueue__V_17_17;

#line 1033 "psqueue.m"
    if ((mercury__psqueue__LTreeL_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1032 "psqueue.m"
      mercury__psqueue__SizeL_13 = (MR_Integer) 0;
#line 1033 "psqueue.m"
    else
#line 1034 "psqueue.m"
      {
#line 1034 "psqueue.m"
        MR_Integer mercury__psqueue__V_29_29;
#line 1034 "psqueue.m"
        MR_Box mercury__psqueue__V_30_30;
#line 1034 "psqueue.m"
        MR_Word mercury__psqueue__V_31_31;
#line 1034 "psqueue.m"
        MR_Box mercury__psqueue__V_32_32;
#line 1034 "psqueue.m"
        MR_Word mercury__psqueue__V_33_33;

#line 1034 "psqueue.m"
        mercury__psqueue__SizeL_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 0)));
#line 1034 "psqueue.m"
        mercury__psqueue__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 1)));
#line 1034 "psqueue.m"
        mercury__psqueue__V_30_30 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 2));
#line 1034 "psqueue.m"
        mercury__psqueue__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 3)));
#line 1034 "psqueue.m"
        mercury__psqueue__V_32_32 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 4));
#line 1034 "psqueue.m"
        mercury__psqueue__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 5)));
#line 1034 "psqueue.m"
      }
#line 1033 "psqueue.m"
    if ((mercury__psqueue__LTreeR_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1032 "psqueue.m"
      mercury__psqueue__SizeR_14 = (MR_Integer) 0;
#line 1033 "psqueue.m"
    else
#line 1034 "psqueue.m"
      {
#line 1034 "psqueue.m"
        MR_Integer mercury__psqueue__V_36_36;
#line 1034 "psqueue.m"
        MR_Box mercury__psqueue__V_37_37;
#line 1034 "psqueue.m"
        MR_Word mercury__psqueue__V_38_38;
#line 1034 "psqueue.m"
        MR_Box mercury__psqueue__V_39_39;
#line 1034 "psqueue.m"
        MR_Word mercury__psqueue__V_40_40;

#line 1034 "psqueue.m"
        mercury__psqueue__SizeR_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 0)));
#line 1034 "psqueue.m"
        mercury__psqueue__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 1)));
#line 1034 "psqueue.m"
        mercury__psqueue__V_37_37 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 2));
#line 1034 "psqueue.m"
        mercury__psqueue__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 3)));
#line 1034 "psqueue.m"
        mercury__psqueue__V_39_39 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 4));
#line 1034 "psqueue.m"
        mercury__psqueue__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 5)));
#line 1034 "psqueue.m"
      }
#line 500 "psqueue.m"
    mercury__psqueue__V_17_17 = (mercury__psqueue__SizeR_14 + mercury__psqueue__SizeL_13);
#line 500 "psqueue.m"
    mercury__psqueue__succeeded = (mercury__psqueue__V_17_17 < (MR_Integer) 2);
#line 503 "psqueue.m"
    if (mercury__psqueue__succeeded)
#line 676 "psqueue.m"
      {
#line 676 "psqueue.m"
        MR_Integer mercury__psqueue__Size_47;
#line 676 "psqueue.m"
        MR_Integer mercury__psqueue__V_48_48;
#line 676 "psqueue.m"
        MR_Integer mercury__psqueue__V_50_50;
#line 676 "psqueue.m"
        MR_Integer mercury__psqueue__V_51_51;

#line 1033 "psqueue.m"
        if ((mercury__psqueue__LTreeL_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1032 "psqueue.m"
          mercury__psqueue__V_50_50 = (MR_Integer) 0;
#line 1033 "psqueue.m"
        else
#line 1034 "psqueue.m"
          {
#line 1034 "psqueue.m"
            MR_Integer mercury__psqueue__V_54_54;
#line 1034 "psqueue.m"
            MR_Box mercury__psqueue__V_55_55;
#line 1034 "psqueue.m"
            MR_Word mercury__psqueue__V_56_56;
#line 1034 "psqueue.m"
            MR_Box mercury__psqueue__V_57_57;
#line 1034 "psqueue.m"
            MR_Word mercury__psqueue__V_58_58;

#line 1034 "psqueue.m"
            mercury__psqueue__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 0)));
#line 1034 "psqueue.m"
            mercury__psqueue__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 1)));
#line 1034 "psqueue.m"
            mercury__psqueue__V_55_55 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 2));
#line 1034 "psqueue.m"
            mercury__psqueue__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 3)));
#line 1034 "psqueue.m"
            mercury__psqueue__V_57_57 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 4));
#line 1034 "psqueue.m"
            mercury__psqueue__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 5)));
#line 1034 "psqueue.m"
          }
#line 677 "psqueue.m"
        mercury__psqueue__V_48_48 = ((MR_Integer) 1 + mercury__psqueue__V_50_50);
#line 1033 "psqueue.m"
        if ((mercury__psqueue__LTreeR_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1032 "psqueue.m"
          mercury__psqueue__V_51_51 = (MR_Integer) 0;
#line 1033 "psqueue.m"
        else
#line 1034 "psqueue.m"
          {
#line 1034 "psqueue.m"
            MR_Integer mercury__psqueue__V_61_61;
#line 1034 "psqueue.m"
            MR_Box mercury__psqueue__V_62_62;
#line 1034 "psqueue.m"
            MR_Word mercury__psqueue__V_63_63;
#line 1034 "psqueue.m"
            MR_Box mercury__psqueue__V_64_64;
#line 1034 "psqueue.m"
            MR_Word mercury__psqueue__V_65_65;

#line 1034 "psqueue.m"
            mercury__psqueue__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 0)));
#line 1034 "psqueue.m"
            mercury__psqueue__V_61_61 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 1)));
#line 1034 "psqueue.m"
            mercury__psqueue__V_62_62 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 2));
#line 1034 "psqueue.m"
            mercury__psqueue__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 3)));
#line 1034 "psqueue.m"
            mercury__psqueue__V_64_64 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 4));
#line 1034 "psqueue.m"
            mercury__psqueue__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 5)));
#line 1034 "psqueue.m"
          }
#line 677 "psqueue.m"
        mercury__psqueue__Size_47 = (mercury__psqueue__V_48_48 + mercury__psqueue__V_51_51);
#line 678 "psqueue.m"
        {
#line 678 "psqueue.m"
          mercury__psqueue__LTree_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 678 "psqueue.m"
          MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 0) = ((MR_Box) (mercury__psqueue__Size_47));
#line 678 "psqueue.m"
          MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 1) = ((MR_Box) (mercury__psqueue__Prio_7));
#line 678 "psqueue.m"
          MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 2) = mercury__psqueue__Key_8;
#line 678 "psqueue.m"
          MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 3) = ((MR_Box) (mercury__psqueue__LTreeL_9));
#line 678 "psqueue.m"
          MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 4) = mercury__psqueue__SplitKey_10;
#line 678 "psqueue.m"
          MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 5) = ((MR_Box) (mercury__psqueue__LTreeR_11));
#line 678 "psqueue.m"
        }
#line 676 "psqueue.m"
      }
#line 503 "psqueue.m"
    else
#line 508 "psqueue.m"
      {
#line 504 "psqueue.m"
        MR_Word mercury__psqueue__CMPL_15;
#line 504 "psqueue.m"
        MR_Integer mercury__psqueue__V_19_19 = ((MR_Integer) 4 * mercury__psqueue__SizeL_13);

#line 66 "private_builtin.opt"
        mercury__psqueue__succeeded = (mercury__psqueue__SizeR_14 < mercury__psqueue__V_19_19);
#line 69 "private_builtin.opt"
        if (mercury__psqueue__succeeded)
#line 68 "private_builtin.opt"
          mercury__psqueue__CMPL_15 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
        else
#line 74 "private_builtin.opt"
          {
#line 71 "private_builtin.opt"
            mercury__psqueue__succeeded = (mercury__psqueue__SizeR_14 == mercury__psqueue__V_19_19);
#line 74 "private_builtin.opt"
            if (mercury__psqueue__succeeded)
#line 73 "private_builtin.opt"
              mercury__psqueue__CMPL_15 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
            else
#line 75 "private_builtin.opt"
              mercury__psqueue__CMPL_15 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
          }
#line 505 "psqueue.m"
        mercury__psqueue__succeeded = (mercury__psqueue__CMPL_15 == (MR_Integer) 2);
#line 508 "psqueue.m"
        if (mercury__psqueue__succeeded)
#line 507 "psqueue.m"
          {
#line 507 "psqueue.m"
            return mercury__psqueue__LTree_12 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_98_97_108_97_110_99_101_95_108_101_102_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_5_f_0(mercury__psqueue__TypeInfo_for_K_24, mercury__psqueue__Prio_7, mercury__psqueue__Key_8, mercury__psqueue__LTreeL_9, mercury__psqueue__SplitKey_10, mercury__psqueue__LTreeR_11);
          }
#line 508 "psqueue.m"
        else
#line 513 "psqueue.m"
          {
#line 509 "psqueue.m"
            MR_Word mercury__psqueue__CMPR_16;
#line 509 "psqueue.m"
            MR_Integer mercury__psqueue__V_21_21 = ((MR_Integer) 4 * mercury__psqueue__SizeR_14);

#line 66 "private_builtin.opt"
            mercury__psqueue__succeeded = (mercury__psqueue__SizeL_13 < mercury__psqueue__V_21_21);
#line 69 "private_builtin.opt"
            if (mercury__psqueue__succeeded)
#line 68 "private_builtin.opt"
              mercury__psqueue__CMPR_16 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
            else
#line 74 "private_builtin.opt"
              {
#line 71 "private_builtin.opt"
                mercury__psqueue__succeeded = (mercury__psqueue__SizeL_13 == mercury__psqueue__V_21_21);
#line 74 "private_builtin.opt"
                if (mercury__psqueue__succeeded)
#line 73 "private_builtin.opt"
                  mercury__psqueue__CMPR_16 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                else
#line 75 "private_builtin.opt"
                  mercury__psqueue__CMPR_16 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
              }
#line 510 "psqueue.m"
            mercury__psqueue__succeeded = (mercury__psqueue__CMPR_16 == (MR_Integer) 2);
#line 513 "psqueue.m"
            if (mercury__psqueue__succeeded)
#line 512 "psqueue.m"
              {
#line 512 "psqueue.m"
                return mercury__psqueue__LTree_12 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_98_97_108_97_110_99_101_95_114_105_103_104_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_5_f_0(mercury__psqueue__TypeInfo_for_K_24, mercury__psqueue__Prio_7, mercury__psqueue__Key_8, mercury__psqueue__LTreeL_9, mercury__psqueue__SplitKey_10, mercury__psqueue__LTreeR_11);
              }
#line 513 "psqueue.m"
            else
#line 676 "psqueue.m"
              {
#line 676 "psqueue.m"
                MR_Integer mercury__psqueue__Size_78;
#line 676 "psqueue.m"
                MR_Integer mercury__psqueue__V_79_79;
#line 676 "psqueue.m"
                MR_Integer mercury__psqueue__V_81_81;
#line 676 "psqueue.m"
                MR_Integer mercury__psqueue__V_82_82;

#line 1033 "psqueue.m"
                if ((mercury__psqueue__LTreeL_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1032 "psqueue.m"
                  mercury__psqueue__V_81_81 = (MR_Integer) 0;
#line 1033 "psqueue.m"
                else
#line 1034 "psqueue.m"
                  {
#line 1034 "psqueue.m"
                    MR_Integer mercury__psqueue__V_85_85;
#line 1034 "psqueue.m"
                    MR_Box mercury__psqueue__V_86_86;
#line 1034 "psqueue.m"
                    MR_Word mercury__psqueue__V_87_87;
#line 1034 "psqueue.m"
                    MR_Box mercury__psqueue__V_88_88;
#line 1034 "psqueue.m"
                    MR_Word mercury__psqueue__V_89_89;

#line 1034 "psqueue.m"
                    mercury__psqueue__V_81_81 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 0)));
#line 1034 "psqueue.m"
                    mercury__psqueue__V_85_85 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 1)));
#line 1034 "psqueue.m"
                    mercury__psqueue__V_86_86 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 2));
#line 1034 "psqueue.m"
                    mercury__psqueue__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 3)));
#line 1034 "psqueue.m"
                    mercury__psqueue__V_88_88 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 4));
#line 1034 "psqueue.m"
                    mercury__psqueue__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 5)));
#line 1034 "psqueue.m"
                  }
#line 677 "psqueue.m"
                mercury__psqueue__V_79_79 = ((MR_Integer) 1 + mercury__psqueue__V_81_81);
#line 1033 "psqueue.m"
                if ((mercury__psqueue__LTreeR_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1032 "psqueue.m"
                  mercury__psqueue__V_82_82 = (MR_Integer) 0;
#line 1033 "psqueue.m"
                else
#line 1034 "psqueue.m"
                  {
#line 1034 "psqueue.m"
                    MR_Integer mercury__psqueue__V_92_92;
#line 1034 "psqueue.m"
                    MR_Box mercury__psqueue__V_93_93;
#line 1034 "psqueue.m"
                    MR_Word mercury__psqueue__V_94_94;
#line 1034 "psqueue.m"
                    MR_Box mercury__psqueue__V_95_95;
#line 1034 "psqueue.m"
                    MR_Word mercury__psqueue__V_96_96;

#line 1034 "psqueue.m"
                    mercury__psqueue__V_82_82 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 0)));
#line 1034 "psqueue.m"
                    mercury__psqueue__V_92_92 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 1)));
#line 1034 "psqueue.m"
                    mercury__psqueue__V_93_93 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 2));
#line 1034 "psqueue.m"
                    mercury__psqueue__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 3)));
#line 1034 "psqueue.m"
                    mercury__psqueue__V_95_95 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 4));
#line 1034 "psqueue.m"
                    mercury__psqueue__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 5)));
#line 1034 "psqueue.m"
                  }
#line 677 "psqueue.m"
                mercury__psqueue__Size_78 = (mercury__psqueue__V_79_79 + mercury__psqueue__V_82_82);
#line 678 "psqueue.m"
                {
#line 678 "psqueue.m"
                  mercury__psqueue__LTree_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 678 "psqueue.m"
                  MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 0) = ((MR_Box) (mercury__psqueue__Size_78));
#line 678 "psqueue.m"
                  MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 1) = ((MR_Box) (mercury__psqueue__Prio_7));
#line 678 "psqueue.m"
                  MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 2) = mercury__psqueue__Key_8;
#line 678 "psqueue.m"
                  MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 3) = ((MR_Box) (mercury__psqueue__LTreeL_9));
#line 678 "psqueue.m"
                  MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 4) = mercury__psqueue__SplitKey_10;
#line 678 "psqueue.m"
                  MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 5) = ((MR_Box) (mercury__psqueue__LTreeR_11));
#line 678 "psqueue.m"
                }
#line 676 "psqueue.m"
              }
#line 513 "psqueue.m"
          }
#line 508 "psqueue.m"
      }
#line 496 "psqueue.m"
    return mercury__psqueue__LTree_12;
#line 496 "psqueue.m"
  }
#line 492 "psqueue.m"
}

#line 521 "psqueue.m"
static MR_Word MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_98_97_108_97_110_99_101_95_108_101_102_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_5_f_0(
#line 521 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_26,
#line 521 "psqueue.m"
  MR_Integer mercury__psqueue__Prio_7,
#line 521 "psqueue.m"
  MR_Box mercury__psqueue__Key_8,
#line 521 "psqueue.m"
  MR_Word mercury__psqueue__LTreeL_9,
#line 521 "psqueue.m"
  MR_Box mercury__psqueue__SplitKey_10,
#line 521 "psqueue.m"
  MR_Word mercury__psqueue__LTreeR_11)
#line 521 "psqueue.m"
{
#line 534 "psqueue.m"
  {
#line 534 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 534 "psqueue.m"
    MR_Word mercury__psqueue__LTree_12;

#line 534 "psqueue.m"
    if ((mercury__psqueue__LTreeR_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 535 "psqueue.m"
      {
#line 536 "psqueue.m"
        {
#line 536 "psqueue.m"
          mercury__require__unexpected_3_p_0((MR_String) "psqueue.m", (MR_String) "function \140psqueue.balance_left\'/5", (MR_String) "heavier tree is a leaf");
        }
#line 535 "psqueue.m"
      }
#line 534 "psqueue.m"
    else
#line 527 "psqueue.m"
      {
#line 527 "psqueue.m"
        MR_Word mercury__psqueue__SubLTreeRL_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 3)));
#line 527 "psqueue.m"
        MR_Word mercury__psqueue__SubLTreeRR_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 5)));
#line 527 "psqueue.m"
        MR_Word mercury__psqueue__CMP_19;
#line 527 "psqueue.m"
        MR_Integer mercury__psqueue__V_23_23;
#line 527 "psqueue.m"
        MR_Integer mercury__psqueue__V_24_24;
#line 527 "psqueue.m"
        MR_Integer mercury__psqueue__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 0)));
#line 527 "psqueue.m"
        MR_Integer mercury__psqueue__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 1)));
#line 527 "psqueue.m"
        MR_Box mercury__psqueue__V_15_15 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 2));
#line 527 "psqueue.m"
        MR_Box mercury__psqueue__V_17_17 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 4));

#line 1033 "psqueue.m"
        if ((mercury__psqueue__SubLTreeRL_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1032 "psqueue.m"
          mercury__psqueue__V_23_23 = (MR_Integer) 0;
#line 1033 "psqueue.m"
        else
#line 1034 "psqueue.m"
          {
#line 1034 "psqueue.m"
            MR_Integer mercury__psqueue__V_30_30;
#line 1034 "psqueue.m"
            MR_Box mercury__psqueue__V_31_31;
#line 1034 "psqueue.m"
            MR_Word mercury__psqueue__V_32_32;
#line 1034 "psqueue.m"
            MR_Box mercury__psqueue__V_33_33;
#line 1034 "psqueue.m"
            MR_Word mercury__psqueue__V_34_34;

#line 1034 "psqueue.m"
            mercury__psqueue__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeRL_16, (MR_Integer) 0)));
#line 1034 "psqueue.m"
            mercury__psqueue__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeRL_16, (MR_Integer) 1)));
#line 1034 "psqueue.m"
            mercury__psqueue__V_31_31 = (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeRL_16, (MR_Integer) 2));
#line 1034 "psqueue.m"
            mercury__psqueue__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeRL_16, (MR_Integer) 3)));
#line 1034 "psqueue.m"
            mercury__psqueue__V_33_33 = (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeRL_16, (MR_Integer) 4));
#line 1034 "psqueue.m"
            mercury__psqueue__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeRL_16, (MR_Integer) 5)));
#line 1034 "psqueue.m"
          }
#line 1033 "psqueue.m"
        if ((mercury__psqueue__SubLTreeRR_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1032 "psqueue.m"
          mercury__psqueue__V_24_24 = (MR_Integer) 0;
#line 1033 "psqueue.m"
        else
#line 1034 "psqueue.m"
          {
#line 1034 "psqueue.m"
            MR_Integer mercury__psqueue__V_37_37;
#line 1034 "psqueue.m"
            MR_Box mercury__psqueue__V_38_38;
#line 1034 "psqueue.m"
            MR_Word mercury__psqueue__V_39_39;
#line 1034 "psqueue.m"
            MR_Box mercury__psqueue__V_40_40;
#line 1034 "psqueue.m"
            MR_Word mercury__psqueue__V_41_41;

#line 1034 "psqueue.m"
            mercury__psqueue__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeRR_18, (MR_Integer) 0)));
#line 1034 "psqueue.m"
            mercury__psqueue__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeRR_18, (MR_Integer) 1)));
#line 1034 "psqueue.m"
            mercury__psqueue__V_38_38 = (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeRR_18, (MR_Integer) 2));
#line 1034 "psqueue.m"
            mercury__psqueue__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeRR_18, (MR_Integer) 3)));
#line 1034 "psqueue.m"
            mercury__psqueue__V_40_40 = (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeRR_18, (MR_Integer) 4));
#line 1034 "psqueue.m"
            mercury__psqueue__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeRR_18, (MR_Integer) 5)));
#line 1034 "psqueue.m"
          }
#line 66 "private_builtin.opt"
        mercury__psqueue__succeeded = (mercury__psqueue__V_23_23 < mercury__psqueue__V_24_24);
#line 69 "private_builtin.opt"
        if (mercury__psqueue__succeeded)
#line 68 "private_builtin.opt"
          mercury__psqueue__CMP_19 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
        else
#line 74 "private_builtin.opt"
          {
#line 71 "private_builtin.opt"
            mercury__psqueue__succeeded = (mercury__psqueue__V_23_23 == mercury__psqueue__V_24_24);
#line 74 "private_builtin.opt"
            if (mercury__psqueue__succeeded)
#line 73 "private_builtin.opt"
              mercury__psqueue__CMP_19 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
            else
#line 75 "private_builtin.opt"
              mercury__psqueue__CMP_19 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
          }
#line 529 "psqueue.m"
        mercury__psqueue__succeeded = (mercury__psqueue__CMP_19 == (MR_Integer) 1);
#line 531 "psqueue.m"
        if (mercury__psqueue__succeeded)
#line 530 "psqueue.m"
          {
#line 530 "psqueue.m"
            return mercury__psqueue__LTree_12 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_105_110_103_108_101_95_108_101_102_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_5_f_0(mercury__psqueue__TypeInfo_for_K_26, mercury__psqueue__Prio_7, mercury__psqueue__Key_8, mercury__psqueue__LTreeL_9, mercury__psqueue__SplitKey_10, mercury__psqueue__LTreeR_11);
          }
#line 531 "psqueue.m"
        else
#line 532 "psqueue.m"
          {
#line 532 "psqueue.m"
            MR_Integer mercury__psqueue__LoserPrio_52 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 1)));
#line 532 "psqueue.m"
            MR_Box mercury__psqueue__LoserKey_53 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 2));
#line 532 "psqueue.m"
            MR_Word mercury__psqueue__LTreeB_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 3)));
#line 532 "psqueue.m"
            MR_Box mercury__psqueue__SplitKeyBC_55 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 4));
#line 532 "psqueue.m"
            MR_Word mercury__psqueue__LTreeC_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 5)));
#line 532 "psqueue.m"
            MR_Word mercury__psqueue__V_60_60;
#line 570 "psqueue.m"
            MR_Integer mercury__psqueue__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 0)));

#line 575 "psqueue.m"
            {
#line 575 "psqueue.m"
              mercury__psqueue__V_60_60 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_105_110_103_108_101_95_114_105_103_104_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_5_f_0(mercury__psqueue__TypeInfo_for_K_26, mercury__psqueue__LoserPrio_52, mercury__psqueue__LoserKey_53, mercury__psqueue__LTreeB_54, mercury__psqueue__SplitKeyBC_55, mercury__psqueue__LTreeC_56);
            }
#line 572 "psqueue.m"
            {
#line 572 "psqueue.m"
              return mercury__psqueue__LTree_12 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_105_110_103_108_101_95_108_101_102_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_5_f_0(mercury__psqueue__TypeInfo_for_K_26, mercury__psqueue__Prio_7, mercury__psqueue__Key_8, mercury__psqueue__LTreeL_9, mercury__psqueue__SplitKey_10, mercury__psqueue__V_60_60);
            }
#line 532 "psqueue.m"
          }
#line 527 "psqueue.m"
      }
#line 534 "psqueue.m"
    return mercury__psqueue__LTree_12;
#line 534 "psqueue.m"
  }
#line 521 "psqueue.m"
}

#line 543 "psqueue.m"
static MR_Word MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_98_97_108_97_110_99_101_95_114_105_103_104_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_5_f_0(
#line 543 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_26,
#line 543 "psqueue.m"
  MR_Integer mercury__psqueue__Prio_7,
#line 543 "psqueue.m"
  MR_Box mercury__psqueue__Key_8,
#line 543 "psqueue.m"
  MR_Word mercury__psqueue__LTreeL_9,
#line 543 "psqueue.m"
  MR_Box mercury__psqueue__SplitKey_10,
#line 543 "psqueue.m"
  MR_Word mercury__psqueue__LTreeR_11)
#line 543 "psqueue.m"
{
#line 556 "psqueue.m"
  {
#line 556 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 556 "psqueue.m"
    MR_Word mercury__psqueue__LTree_12;

#line 556 "psqueue.m"
    if ((mercury__psqueue__LTreeL_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 557 "psqueue.m"
      {
#line 558 "psqueue.m"
        {
#line 558 "psqueue.m"
          mercury__require__unexpected_3_p_0((MR_String) "psqueue.m", (MR_String) "function \140psqueue.balance_right\'/5", (MR_String) "heavier tree is a leaf");
        }
#line 557 "psqueue.m"
      }
#line 556 "psqueue.m"
    else
#line 549 "psqueue.m"
      {
#line 549 "psqueue.m"
        MR_Word mercury__psqueue__SubLTreeLL_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 3)));
#line 549 "psqueue.m"
        MR_Word mercury__psqueue__SubLTreeLR_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 5)));
#line 549 "psqueue.m"
        MR_Word mercury__psqueue__CMP_19;
#line 549 "psqueue.m"
        MR_Integer mercury__psqueue__V_23_23;
#line 549 "psqueue.m"
        MR_Integer mercury__psqueue__V_24_24;
#line 549 "psqueue.m"
        MR_Integer mercury__psqueue__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 0)));
#line 549 "psqueue.m"
        MR_Integer mercury__psqueue__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 1)));
#line 549 "psqueue.m"
        MR_Box mercury__psqueue__V_15_15 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 2));
#line 549 "psqueue.m"
        MR_Box mercury__psqueue__V_17_17 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 4));

#line 1033 "psqueue.m"
        if ((mercury__psqueue__SubLTreeLR_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1032 "psqueue.m"
          mercury__psqueue__V_23_23 = (MR_Integer) 0;
#line 1033 "psqueue.m"
        else
#line 1034 "psqueue.m"
          {
#line 1034 "psqueue.m"
            MR_Integer mercury__psqueue__V_30_30;
#line 1034 "psqueue.m"
            MR_Box mercury__psqueue__V_31_31;
#line 1034 "psqueue.m"
            MR_Word mercury__psqueue__V_32_32;
#line 1034 "psqueue.m"
            MR_Box mercury__psqueue__V_33_33;
#line 1034 "psqueue.m"
            MR_Word mercury__psqueue__V_34_34;

#line 1034 "psqueue.m"
            mercury__psqueue__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeLR_18, (MR_Integer) 0)));
#line 1034 "psqueue.m"
            mercury__psqueue__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeLR_18, (MR_Integer) 1)));
#line 1034 "psqueue.m"
            mercury__psqueue__V_31_31 = (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeLR_18, (MR_Integer) 2));
#line 1034 "psqueue.m"
            mercury__psqueue__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeLR_18, (MR_Integer) 3)));
#line 1034 "psqueue.m"
            mercury__psqueue__V_33_33 = (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeLR_18, (MR_Integer) 4));
#line 1034 "psqueue.m"
            mercury__psqueue__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeLR_18, (MR_Integer) 5)));
#line 1034 "psqueue.m"
          }
#line 1033 "psqueue.m"
        if ((mercury__psqueue__SubLTreeLL_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1032 "psqueue.m"
          mercury__psqueue__V_24_24 = (MR_Integer) 0;
#line 1033 "psqueue.m"
        else
#line 1034 "psqueue.m"
          {
#line 1034 "psqueue.m"
            MR_Integer mercury__psqueue__V_37_37;
#line 1034 "psqueue.m"
            MR_Box mercury__psqueue__V_38_38;
#line 1034 "psqueue.m"
            MR_Word mercury__psqueue__V_39_39;
#line 1034 "psqueue.m"
            MR_Box mercury__psqueue__V_40_40;
#line 1034 "psqueue.m"
            MR_Word mercury__psqueue__V_41_41;

#line 1034 "psqueue.m"
            mercury__psqueue__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeLL_16, (MR_Integer) 0)));
#line 1034 "psqueue.m"
            mercury__psqueue__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeLL_16, (MR_Integer) 1)));
#line 1034 "psqueue.m"
            mercury__psqueue__V_38_38 = (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeLL_16, (MR_Integer) 2));
#line 1034 "psqueue.m"
            mercury__psqueue__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeLL_16, (MR_Integer) 3)));
#line 1034 "psqueue.m"
            mercury__psqueue__V_40_40 = (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeLL_16, (MR_Integer) 4));
#line 1034 "psqueue.m"
            mercury__psqueue__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeLL_16, (MR_Integer) 5)));
#line 1034 "psqueue.m"
          }
#line 66 "private_builtin.opt"
        mercury__psqueue__succeeded = (mercury__psqueue__V_23_23 < mercury__psqueue__V_24_24);
#line 69 "private_builtin.opt"
        if (mercury__psqueue__succeeded)
#line 68 "private_builtin.opt"
          mercury__psqueue__CMP_19 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
        else
#line 74 "private_builtin.opt"
          {
#line 71 "private_builtin.opt"
            mercury__psqueue__succeeded = (mercury__psqueue__V_23_23 == mercury__psqueue__V_24_24);
#line 74 "private_builtin.opt"
            if (mercury__psqueue__succeeded)
#line 73 "private_builtin.opt"
              mercury__psqueue__CMP_19 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
            else
#line 75 "private_builtin.opt"
              mercury__psqueue__CMP_19 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
          }
#line 551 "psqueue.m"
        mercury__psqueue__succeeded = (mercury__psqueue__CMP_19 == (MR_Integer) 1);
#line 553 "psqueue.m"
        if (mercury__psqueue__succeeded)
#line 552 "psqueue.m"
          {
#line 552 "psqueue.m"
            return mercury__psqueue__LTree_12 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_105_110_103_108_101_95_114_105_103_104_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_5_f_0(mercury__psqueue__TypeInfo_for_K_26, mercury__psqueue__Prio_7, mercury__psqueue__Key_8, mercury__psqueue__LTreeL_9, mercury__psqueue__SplitKey_10, mercury__psqueue__LTreeR_11);
          }
#line 553 "psqueue.m"
        else
#line 554 "psqueue.m"
          {
#line 554 "psqueue.m"
            MR_Integer mercury__psqueue__LoserPrio_52 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 1)));
#line 554 "psqueue.m"
            MR_Box mercury__psqueue__LoserKey_53 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 2));
#line 554 "psqueue.m"
            MR_Word mercury__psqueue__LTreeA_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 3)));
#line 554 "psqueue.m"
            MR_Box mercury__psqueue__SplitKeyAB_55 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 4));
#line 554 "psqueue.m"
            MR_Word mercury__psqueue__LTreeB_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 5)));
#line 554 "psqueue.m"
            MR_Word mercury__psqueue__V_60_60;
#line 590 "psqueue.m"
            MR_Integer mercury__psqueue__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 0)));

#line 593 "psqueue.m"
            {
#line 593 "psqueue.m"
              mercury__psqueue__V_60_60 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_105_110_103_108_101_95_108_101_102_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_5_f_0(mercury__psqueue__TypeInfo_for_K_26, mercury__psqueue__LoserPrio_52, mercury__psqueue__LoserKey_53, mercury__psqueue__LTreeA_54, mercury__psqueue__SplitKeyAB_55, mercury__psqueue__LTreeB_56);
            }
#line 592 "psqueue.m"
            {
#line 592 "psqueue.m"
              return mercury__psqueue__LTree_12 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_105_110_103_108_101_95_114_105_103_104_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_5_f_0(mercury__psqueue__TypeInfo_for_K_26, mercury__psqueue__Prio_7, mercury__psqueue__Key_8, mercury__psqueue__V_60_60, mercury__psqueue__SplitKey_10, mercury__psqueue__LTreeR_11);
            }
#line 554 "psqueue.m"
          }
#line 549 "psqueue.m"
      }
#line 556 "psqueue.m"
    return mercury__psqueue__LTree_12;
#line 556 "psqueue.m"
  }
#line 543 "psqueue.m"
}

#line 604 "psqueue.m"
static MR_Word MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_105_110_103_108_101_95_108_101_102_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_5_f_0(
#line 604 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_25,
#line 604 "psqueue.m"
  MR_Integer mercury__psqueue__InsertPrio_7,
#line 604 "psqueue.m"
  MR_Box mercury__psqueue__InsertKey_8,
#line 604 "psqueue.m"
  MR_Word mercury__psqueue__LTreeA_9,
#line 604 "psqueue.m"
  MR_Box mercury__psqueue__SplitKeyAB_10,
#line 604 "psqueue.m"
  MR_Word mercury__psqueue__LTreeBC_11)
#line 604 "psqueue.m"
{
#line 628 "psqueue.m"
  {
#line 628 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 628 "psqueue.m"
    MR_Word mercury__psqueue__LTree_12;

#line 628 "psqueue.m"
    if ((mercury__psqueue__LTreeBC_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 629 "psqueue.m"
      {
#line 630 "psqueue.m"
        {
#line 630 "psqueue.m"
          mercury__require__unexpected_3_p_0((MR_String) "psqueue.m", (MR_String) "function \140psqueue.single_left\'/5", (MR_String) "heavier tree is a leaf");
        }
#line 629 "psqueue.m"
      }
#line 628 "psqueue.m"
    else
#line 611 "psqueue.m"
      {
#line 611 "psqueue.m"
        MR_Integer mercury__psqueue__LoserPrio_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeBC_11, (MR_Integer) 1)));
#line 611 "psqueue.m"
        MR_Box mercury__psqueue__LoserKey_15 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeBC_11, (MR_Integer) 2));
#line 611 "psqueue.m"
        MR_Word mercury__psqueue__LTreeB_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeBC_11, (MR_Integer) 3)));
#line 611 "psqueue.m"
        MR_Box mercury__psqueue__SplitKeyBC_17 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeBC_11, (MR_Integer) 4));
#line 611 "psqueue.m"
        MR_Word mercury__psqueue__LTreeC_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeBC_11, (MR_Integer) 5)));
#line 610 "psqueue.m"
        MR_Integer mercury__psqueue__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeBC_11, (MR_Integer) 0)));
#line 613 "psqueue.m"
        MR_Word mercury__psqueue__CMP_28;

#line 1043 "psqueue.m"
        {
#line 1043 "psqueue.m"
          mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_25, &mercury__psqueue__CMP_28, mercury__psqueue__LoserKey_15, mercury__psqueue__SplitKeyBC_17);
        }
#line 1045 "psqueue.m"
        if ((mercury__psqueue__CMP_28 == (MR_Integer) 1))
#line 1044 "psqueue.m"
          mercury__psqueue__succeeded = MR_TRUE;
#line 1045 "psqueue.m"
        else
#line 1045 "psqueue.m"
          if ((mercury__psqueue__CMP_28 == (MR_Integer) 0))
#line 1045 "psqueue.m"
            mercury__psqueue__succeeded = MR_TRUE;
#line 1045 "psqueue.m"
          else
#line 1045 "psqueue.m"
            mercury__psqueue__succeeded = MR_FALSE;
#line 613 "psqueue.m"
        if (mercury__psqueue__succeeded)
#line 614 "psqueue.m"
          {
#line 614 "psqueue.m"
            mercury__psqueue__succeeded = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_101_113_95_95_91_86_32_61_32_105_110_116_93_95_48_95_49_2_p_0(mercury__psqueue__InsertPrio_7, mercury__psqueue__LoserPrio_14);
          }
#line 621 "psqueue.m"
        if (mercury__psqueue__succeeded)
#line 616 "psqueue.m"
          {
#line 616 "psqueue.m"
            MR_Word mercury__psqueue__V_22_22;
#line 616 "psqueue.m"
            MR_Integer mercury__psqueue__Size_35;
#line 616 "psqueue.m"
            MR_Integer mercury__psqueue__V_36_36;
#line 616 "psqueue.m"
            MR_Integer mercury__psqueue__V_38_38;
#line 616 "psqueue.m"
            MR_Integer mercury__psqueue__V_39_39;
#line 616 "psqueue.m"
            MR_Integer mercury__psqueue__Size_60;
#line 616 "psqueue.m"
            MR_Integer mercury__psqueue__V_61_61;
#line 616 "psqueue.m"
            MR_Integer mercury__psqueue__V_64_64;

#line 1033 "psqueue.m"
            if ((mercury__psqueue__LTreeA_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1032 "psqueue.m"
              mercury__psqueue__V_38_38 = (MR_Integer) 0;
#line 1033 "psqueue.m"
            else
#line 1034 "psqueue.m"
              {
#line 1034 "psqueue.m"
                MR_Integer mercury__psqueue__V_42_42;
#line 1034 "psqueue.m"
                MR_Box mercury__psqueue__V_43_43;
#line 1034 "psqueue.m"
                MR_Word mercury__psqueue__V_44_44;
#line 1034 "psqueue.m"
                MR_Box mercury__psqueue__V_45_45;
#line 1034 "psqueue.m"
                MR_Word mercury__psqueue__V_46_46;

#line 1034 "psqueue.m"
                mercury__psqueue__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_9, (MR_Integer) 0)));
#line 1034 "psqueue.m"
                mercury__psqueue__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_9, (MR_Integer) 1)));
#line 1034 "psqueue.m"
                mercury__psqueue__V_43_43 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_9, (MR_Integer) 2));
#line 1034 "psqueue.m"
                mercury__psqueue__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_9, (MR_Integer) 3)));
#line 1034 "psqueue.m"
                mercury__psqueue__V_45_45 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_9, (MR_Integer) 4));
#line 1034 "psqueue.m"
                mercury__psqueue__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_9, (MR_Integer) 5)));
#line 1034 "psqueue.m"
              }
#line 677 "psqueue.m"
            mercury__psqueue__V_36_36 = ((MR_Integer) 1 + mercury__psqueue__V_38_38);
#line 1033 "psqueue.m"
            if ((mercury__psqueue__LTreeB_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1032 "psqueue.m"
              mercury__psqueue__V_39_39 = (MR_Integer) 0;
#line 1033 "psqueue.m"
            else
#line 1034 "psqueue.m"
              {
#line 1034 "psqueue.m"
                MR_Integer mercury__psqueue__V_49_49;
#line 1034 "psqueue.m"
                MR_Box mercury__psqueue__V_50_50;
#line 1034 "psqueue.m"
                MR_Word mercury__psqueue__V_51_51;
#line 1034 "psqueue.m"
                MR_Box mercury__psqueue__V_52_52;
#line 1034 "psqueue.m"
                MR_Word mercury__psqueue__V_53_53;

#line 1034 "psqueue.m"
                mercury__psqueue__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_16, (MR_Integer) 0)));
#line 1034 "psqueue.m"
                mercury__psqueue__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_16, (MR_Integer) 1)));
#line 1034 "psqueue.m"
                mercury__psqueue__V_50_50 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_16, (MR_Integer) 2));
#line 1034 "psqueue.m"
                mercury__psqueue__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_16, (MR_Integer) 3)));
#line 1034 "psqueue.m"
                mercury__psqueue__V_52_52 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_16, (MR_Integer) 4));
#line 1034 "psqueue.m"
                mercury__psqueue__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_16, (MR_Integer) 5)));
#line 1034 "psqueue.m"
              }
#line 677 "psqueue.m"
            mercury__psqueue__Size_35 = (mercury__psqueue__V_36_36 + mercury__psqueue__V_39_39);
#line 678 "psqueue.m"
            {
#line 678 "psqueue.m"
              mercury__psqueue__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_22_22, 0) = ((MR_Box) (mercury__psqueue__Size_35));
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_22_22, 1) = ((MR_Box) (mercury__psqueue__LoserPrio_14));
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_22_22, 2) = mercury__psqueue__LoserKey_15;
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_22_22, 3) = ((MR_Box) (mercury__psqueue__LTreeA_9));
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_22_22, 4) = mercury__psqueue__SplitKeyAB_10;
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_22_22, 5) = ((MR_Box) (mercury__psqueue__LTreeB_16));
#line 678 "psqueue.m"
            }
#line 677 "psqueue.m"
            mercury__psqueue__V_61_61 = ((MR_Integer) 1 + mercury__psqueue__Size_35);
#line 1033 "psqueue.m"
            if ((mercury__psqueue__LTreeC_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1032 "psqueue.m"
              mercury__psqueue__V_64_64 = (MR_Integer) 0;
#line 1033 "psqueue.m"
            else
#line 1034 "psqueue.m"
              {
#line 1034 "psqueue.m"
                MR_Integer mercury__psqueue__V_74_74;
#line 1034 "psqueue.m"
                MR_Box mercury__psqueue__V_75_75;
#line 1034 "psqueue.m"
                MR_Word mercury__psqueue__V_76_76;
#line 1034 "psqueue.m"
                MR_Box mercury__psqueue__V_77_77;
#line 1034 "psqueue.m"
                MR_Word mercury__psqueue__V_78_78;

#line 1034 "psqueue.m"
                mercury__psqueue__V_64_64 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_18, (MR_Integer) 0)));
#line 1034 "psqueue.m"
                mercury__psqueue__V_74_74 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_18, (MR_Integer) 1)));
#line 1034 "psqueue.m"
                mercury__psqueue__V_75_75 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_18, (MR_Integer) 2));
#line 1034 "psqueue.m"
                mercury__psqueue__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_18, (MR_Integer) 3)));
#line 1034 "psqueue.m"
                mercury__psqueue__V_77_77 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_18, (MR_Integer) 4));
#line 1034 "psqueue.m"
                mercury__psqueue__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_18, (MR_Integer) 5)));
#line 1034 "psqueue.m"
              }
#line 677 "psqueue.m"
            mercury__psqueue__Size_60 = (mercury__psqueue__V_61_61 + mercury__psqueue__V_64_64);
#line 678 "psqueue.m"
            {
#line 678 "psqueue.m"
              mercury__psqueue__LTree_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 0) = ((MR_Box) (mercury__psqueue__Size_60));
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 1) = ((MR_Box) (mercury__psqueue__InsertPrio_7));
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 2) = mercury__psqueue__InsertKey_8;
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 3) = ((MR_Box) (mercury__psqueue__V_22_22));
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 4) = mercury__psqueue__SplitKeyBC_17;
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 5) = ((MR_Box) (mercury__psqueue__LTreeC_18));
#line 678 "psqueue.m"
            }
#line 616 "psqueue.m"
          }
#line 621 "psqueue.m"
        else
#line 622 "psqueue.m"
          {
#line 622 "psqueue.m"
            MR_Word mercury__psqueue__V_23_23;
#line 622 "psqueue.m"
            MR_Integer mercury__psqueue__Size_85;
#line 622 "psqueue.m"
            MR_Integer mercury__psqueue__V_86_86;
#line 622 "psqueue.m"
            MR_Integer mercury__psqueue__V_88_88;
#line 622 "psqueue.m"
            MR_Integer mercury__psqueue__V_89_89;
#line 622 "psqueue.m"
            MR_Integer mercury__psqueue__Size_110;
#line 622 "psqueue.m"
            MR_Integer mercury__psqueue__V_111_111;
#line 622 "psqueue.m"
            MR_Integer mercury__psqueue__V_114_114;

#line 1033 "psqueue.m"
            if ((mercury__psqueue__LTreeA_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1032 "psqueue.m"
              mercury__psqueue__V_88_88 = (MR_Integer) 0;
#line 1033 "psqueue.m"
            else
#line 1034 "psqueue.m"
              {
#line 1034 "psqueue.m"
                MR_Integer mercury__psqueue__V_92_92;
#line 1034 "psqueue.m"
                MR_Box mercury__psqueue__V_93_93;
#line 1034 "psqueue.m"
                MR_Word mercury__psqueue__V_94_94;
#line 1034 "psqueue.m"
                MR_Box mercury__psqueue__V_95_95;
#line 1034 "psqueue.m"
                MR_Word mercury__psqueue__V_96_96;

#line 1034 "psqueue.m"
                mercury__psqueue__V_88_88 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_9, (MR_Integer) 0)));
#line 1034 "psqueue.m"
                mercury__psqueue__V_92_92 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_9, (MR_Integer) 1)));
#line 1034 "psqueue.m"
                mercury__psqueue__V_93_93 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_9, (MR_Integer) 2));
#line 1034 "psqueue.m"
                mercury__psqueue__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_9, (MR_Integer) 3)));
#line 1034 "psqueue.m"
                mercury__psqueue__V_95_95 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_9, (MR_Integer) 4));
#line 1034 "psqueue.m"
                mercury__psqueue__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_9, (MR_Integer) 5)));
#line 1034 "psqueue.m"
              }
#line 677 "psqueue.m"
            mercury__psqueue__V_86_86 = ((MR_Integer) 1 + mercury__psqueue__V_88_88);
#line 1033 "psqueue.m"
            if ((mercury__psqueue__LTreeB_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1032 "psqueue.m"
              mercury__psqueue__V_89_89 = (MR_Integer) 0;
#line 1033 "psqueue.m"
            else
#line 1034 "psqueue.m"
              {
#line 1034 "psqueue.m"
                MR_Integer mercury__psqueue__V_99_99;
#line 1034 "psqueue.m"
                MR_Box mercury__psqueue__V_100_100;
#line 1034 "psqueue.m"
                MR_Word mercury__psqueue__V_101_101;
#line 1034 "psqueue.m"
                MR_Box mercury__psqueue__V_102_102;
#line 1034 "psqueue.m"
                MR_Word mercury__psqueue__V_103_103;

#line 1034 "psqueue.m"
                mercury__psqueue__V_89_89 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_16, (MR_Integer) 0)));
#line 1034 "psqueue.m"
                mercury__psqueue__V_99_99 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_16, (MR_Integer) 1)));
#line 1034 "psqueue.m"
                mercury__psqueue__V_100_100 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_16, (MR_Integer) 2));
#line 1034 "psqueue.m"
                mercury__psqueue__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_16, (MR_Integer) 3)));
#line 1034 "psqueue.m"
                mercury__psqueue__V_102_102 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_16, (MR_Integer) 4));
#line 1034 "psqueue.m"
                mercury__psqueue__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_16, (MR_Integer) 5)));
#line 1034 "psqueue.m"
              }
#line 677 "psqueue.m"
            mercury__psqueue__Size_85 = (mercury__psqueue__V_86_86 + mercury__psqueue__V_89_89);
#line 678 "psqueue.m"
            {
#line 678 "psqueue.m"
              mercury__psqueue__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_23_23, 0) = ((MR_Box) (mercury__psqueue__Size_85));
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_23_23, 1) = ((MR_Box) (mercury__psqueue__InsertPrio_7));
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_23_23, 2) = mercury__psqueue__InsertKey_8;
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_23_23, 3) = ((MR_Box) (mercury__psqueue__LTreeA_9));
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_23_23, 4) = mercury__psqueue__SplitKeyAB_10;
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_23_23, 5) = ((MR_Box) (mercury__psqueue__LTreeB_16));
#line 678 "psqueue.m"
            }
#line 677 "psqueue.m"
            mercury__psqueue__V_111_111 = ((MR_Integer) 1 + mercury__psqueue__Size_85);
#line 1033 "psqueue.m"
            if ((mercury__psqueue__LTreeC_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1032 "psqueue.m"
              mercury__psqueue__V_114_114 = (MR_Integer) 0;
#line 1033 "psqueue.m"
            else
#line 1034 "psqueue.m"
              {
#line 1034 "psqueue.m"
                MR_Integer mercury__psqueue__V_124_124;
#line 1034 "psqueue.m"
                MR_Box mercury__psqueue__V_125_125;
#line 1034 "psqueue.m"
                MR_Word mercury__psqueue__V_126_126;
#line 1034 "psqueue.m"
                MR_Box mercury__psqueue__V_127_127;
#line 1034 "psqueue.m"
                MR_Word mercury__psqueue__V_128_128;

#line 1034 "psqueue.m"
                mercury__psqueue__V_114_114 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_18, (MR_Integer) 0)));
#line 1034 "psqueue.m"
                mercury__psqueue__V_124_124 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_18, (MR_Integer) 1)));
#line 1034 "psqueue.m"
                mercury__psqueue__V_125_125 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_18, (MR_Integer) 2));
#line 1034 "psqueue.m"
                mercury__psqueue__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_18, (MR_Integer) 3)));
#line 1034 "psqueue.m"
                mercury__psqueue__V_127_127 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_18, (MR_Integer) 4));
#line 1034 "psqueue.m"
                mercury__psqueue__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_18, (MR_Integer) 5)));
#line 1034 "psqueue.m"
              }
#line 677 "psqueue.m"
            mercury__psqueue__Size_110 = (mercury__psqueue__V_111_111 + mercury__psqueue__V_114_114);
#line 678 "psqueue.m"
            {
#line 678 "psqueue.m"
              mercury__psqueue__LTree_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 0) = ((MR_Box) (mercury__psqueue__Size_110));
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 1) = ((MR_Box) (mercury__psqueue__LoserPrio_14));
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 2) = mercury__psqueue__LoserKey_15;
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 3) = ((MR_Box) (mercury__psqueue__V_23_23));
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 4) = mercury__psqueue__SplitKeyBC_17;
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 5) = ((MR_Box) (mercury__psqueue__LTreeC_18));
#line 678 "psqueue.m"
            }
#line 622 "psqueue.m"
          }
#line 611 "psqueue.m"
      }
#line 628 "psqueue.m"
    return mercury__psqueue__LTree_12;
#line 628 "psqueue.m"
  }
#line 604 "psqueue.m"
}

#line 636 "psqueue.m"
static MR_Word MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_105_110_103_108_101_95_114_105_103_104_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_5_f_0(
#line 636 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_26,
#line 636 "psqueue.m"
  MR_Integer mercury__psqueue__InsertPrio_7,
#line 636 "psqueue.m"
  MR_Box mercury__psqueue__InsertKey_8,
#line 636 "psqueue.m"
  MR_Word mercury__psqueue__LTreeAB_9,
#line 636 "psqueue.m"
  MR_Box mercury__psqueue__SplitKeyBC_10,
#line 636 "psqueue.m"
  MR_Word mercury__psqueue__LTreeC_11)
#line 636 "psqueue.m"
{
#line 661 "psqueue.m"
  {
#line 661 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 661 "psqueue.m"
    MR_Word mercury__psqueue__LTree_12;

#line 661 "psqueue.m"
    if ((mercury__psqueue__LTreeAB_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 662 "psqueue.m"
      {
#line 663 "psqueue.m"
        {
#line 663 "psqueue.m"
          mercury__require__unexpected_3_p_0((MR_String) "psqueue.m", (MR_String) "function \140psqueue.single_right\'/5", (MR_String) "heavier tree is a leaf");
        }
#line 662 "psqueue.m"
      }
#line 661 "psqueue.m"
    else
#line 643 "psqueue.m"
      {
#line 643 "psqueue.m"
        MR_Integer mercury__psqueue__LoserPrio_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeAB_9, (MR_Integer) 1)));
#line 643 "psqueue.m"
        MR_Box mercury__psqueue__LoserKey_15 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeAB_9, (MR_Integer) 2));
#line 643 "psqueue.m"
        MR_Word mercury__psqueue__LTreeA_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeAB_9, (MR_Integer) 3)));
#line 643 "psqueue.m"
        MR_Box mercury__psqueue__SplitKeyAB_17 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeAB_9, (MR_Integer) 4));
#line 643 "psqueue.m"
        MR_Word mercury__psqueue__LTreeB_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeAB_9, (MR_Integer) 5)));
#line 642 "psqueue.m"
        MR_Integer mercury__psqueue__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeAB_9, (MR_Integer) 0)));
#line 645 "psqueue.m"
        MR_Word mercury__psqueue__CMP0_19;

#line 645 "psqueue.m"
        {
#line 645 "psqueue.m"
          mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_26, &mercury__psqueue__CMP0_19, mercury__psqueue__LoserKey_15, mercury__psqueue__SplitKeyAB_17);
        }
#line 646 "psqueue.m"
        mercury__psqueue__succeeded = (mercury__psqueue__CMP0_19 == (MR_Integer) 2);
#line 645 "psqueue.m"
        if (mercury__psqueue__succeeded)
#line 647 "psqueue.m"
          {
#line 647 "psqueue.m"
            mercury__psqueue__succeeded = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_101_113_95_95_91_86_32_61_32_105_110_116_93_95_48_95_49_2_p_0(mercury__psqueue__InsertPrio_7, mercury__psqueue__LoserPrio_14);
          }
#line 654 "psqueue.m"
        if (mercury__psqueue__succeeded)
#line 649 "psqueue.m"
          {
#line 649 "psqueue.m"
            MR_Word mercury__psqueue__V_23_23;
#line 649 "psqueue.m"
            MR_Integer mercury__psqueue__Size_33;
#line 649 "psqueue.m"
            MR_Integer mercury__psqueue__V_34_34;
#line 649 "psqueue.m"
            MR_Integer mercury__psqueue__V_36_36;
#line 649 "psqueue.m"
            MR_Integer mercury__psqueue__V_37_37;
#line 649 "psqueue.m"
            MR_Integer mercury__psqueue__Size_58;
#line 649 "psqueue.m"
            MR_Integer mercury__psqueue__V_59_59;
#line 649 "psqueue.m"
            MR_Integer mercury__psqueue__V_61_61;

#line 1033 "psqueue.m"
            if ((mercury__psqueue__LTreeB_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1032 "psqueue.m"
              mercury__psqueue__V_36_36 = (MR_Integer) 0;
#line 1033 "psqueue.m"
            else
#line 1034 "psqueue.m"
              {
#line 1034 "psqueue.m"
                MR_Integer mercury__psqueue__V_40_40;
#line 1034 "psqueue.m"
                MR_Box mercury__psqueue__V_41_41;
#line 1034 "psqueue.m"
                MR_Word mercury__psqueue__V_42_42;
#line 1034 "psqueue.m"
                MR_Box mercury__psqueue__V_43_43;
#line 1034 "psqueue.m"
                MR_Word mercury__psqueue__V_44_44;

#line 1034 "psqueue.m"
                mercury__psqueue__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_18, (MR_Integer) 0)));
#line 1034 "psqueue.m"
                mercury__psqueue__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_18, (MR_Integer) 1)));
#line 1034 "psqueue.m"
                mercury__psqueue__V_41_41 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_18, (MR_Integer) 2));
#line 1034 "psqueue.m"
                mercury__psqueue__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_18, (MR_Integer) 3)));
#line 1034 "psqueue.m"
                mercury__psqueue__V_43_43 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_18, (MR_Integer) 4));
#line 1034 "psqueue.m"
                mercury__psqueue__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_18, (MR_Integer) 5)));
#line 1034 "psqueue.m"
              }
#line 677 "psqueue.m"
            mercury__psqueue__V_34_34 = ((MR_Integer) 1 + mercury__psqueue__V_36_36);
#line 1033 "psqueue.m"
            if ((mercury__psqueue__LTreeC_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1032 "psqueue.m"
              mercury__psqueue__V_37_37 = (MR_Integer) 0;
#line 1033 "psqueue.m"
            else
#line 1034 "psqueue.m"
              {
#line 1034 "psqueue.m"
                MR_Integer mercury__psqueue__V_47_47;
#line 1034 "psqueue.m"
                MR_Box mercury__psqueue__V_48_48;
#line 1034 "psqueue.m"
                MR_Word mercury__psqueue__V_49_49;
#line 1034 "psqueue.m"
                MR_Box mercury__psqueue__V_50_50;
#line 1034 "psqueue.m"
                MR_Word mercury__psqueue__V_51_51;

#line 1034 "psqueue.m"
                mercury__psqueue__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_11, (MR_Integer) 0)));
#line 1034 "psqueue.m"
                mercury__psqueue__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_11, (MR_Integer) 1)));
#line 1034 "psqueue.m"
                mercury__psqueue__V_48_48 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_11, (MR_Integer) 2));
#line 1034 "psqueue.m"
                mercury__psqueue__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_11, (MR_Integer) 3)));
#line 1034 "psqueue.m"
                mercury__psqueue__V_50_50 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_11, (MR_Integer) 4));
#line 1034 "psqueue.m"
                mercury__psqueue__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_11, (MR_Integer) 5)));
#line 1034 "psqueue.m"
              }
#line 677 "psqueue.m"
            mercury__psqueue__Size_33 = (mercury__psqueue__V_34_34 + mercury__psqueue__V_37_37);
#line 678 "psqueue.m"
            {
#line 678 "psqueue.m"
              mercury__psqueue__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_23_23, 0) = ((MR_Box) (mercury__psqueue__Size_33));
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_23_23, 1) = ((MR_Box) (mercury__psqueue__LoserPrio_14));
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_23_23, 2) = mercury__psqueue__LoserKey_15;
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_23_23, 3) = ((MR_Box) (mercury__psqueue__LTreeB_18));
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_23_23, 4) = mercury__psqueue__SplitKeyBC_10;
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_23_23, 5) = ((MR_Box) (mercury__psqueue__LTreeC_11));
#line 678 "psqueue.m"
            }
#line 1033 "psqueue.m"
            if ((mercury__psqueue__LTreeA_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1032 "psqueue.m"
              mercury__psqueue__V_61_61 = (MR_Integer) 0;
#line 1033 "psqueue.m"
            else
#line 1034 "psqueue.m"
              {
#line 1034 "psqueue.m"
                MR_Integer mercury__psqueue__V_65_65;
#line 1034 "psqueue.m"
                MR_Box mercury__psqueue__V_66_66;
#line 1034 "psqueue.m"
                MR_Word mercury__psqueue__V_67_67;
#line 1034 "psqueue.m"
                MR_Box mercury__psqueue__V_68_68;
#line 1034 "psqueue.m"
                MR_Word mercury__psqueue__V_69_69;

#line 1034 "psqueue.m"
                mercury__psqueue__V_61_61 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_16, (MR_Integer) 0)));
#line 1034 "psqueue.m"
                mercury__psqueue__V_65_65 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_16, (MR_Integer) 1)));
#line 1034 "psqueue.m"
                mercury__psqueue__V_66_66 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_16, (MR_Integer) 2));
#line 1034 "psqueue.m"
                mercury__psqueue__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_16, (MR_Integer) 3)));
#line 1034 "psqueue.m"
                mercury__psqueue__V_68_68 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_16, (MR_Integer) 4));
#line 1034 "psqueue.m"
                mercury__psqueue__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_16, (MR_Integer) 5)));
#line 1034 "psqueue.m"
              }
#line 677 "psqueue.m"
            mercury__psqueue__V_59_59 = ((MR_Integer) 1 + mercury__psqueue__V_61_61);
#line 677 "psqueue.m"
            mercury__psqueue__Size_58 = (mercury__psqueue__V_59_59 + mercury__psqueue__Size_33);
#line 678 "psqueue.m"
            {
#line 678 "psqueue.m"
              mercury__psqueue__LTree_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 0) = ((MR_Box) (mercury__psqueue__Size_58));
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 1) = ((MR_Box) (mercury__psqueue__InsertPrio_7));
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 2) = mercury__psqueue__InsertKey_8;
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 3) = ((MR_Box) (mercury__psqueue__LTreeA_16));
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 4) = mercury__psqueue__SplitKeyAB_17;
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 5) = ((MR_Box) (mercury__psqueue__V_23_23));
#line 678 "psqueue.m"
            }
#line 649 "psqueue.m"
          }
#line 654 "psqueue.m"
        else
#line 655 "psqueue.m"
          {
#line 655 "psqueue.m"
            MR_Word mercury__psqueue__V_24_24;
#line 655 "psqueue.m"
            MR_Integer mercury__psqueue__Size_83;
#line 655 "psqueue.m"
            MR_Integer mercury__psqueue__V_84_84;
#line 655 "psqueue.m"
            MR_Integer mercury__psqueue__V_86_86;
#line 655 "psqueue.m"
            MR_Integer mercury__psqueue__V_87_87;
#line 655 "psqueue.m"
            MR_Integer mercury__psqueue__Size_108;
#line 655 "psqueue.m"
            MR_Integer mercury__psqueue__V_109_109;
#line 655 "psqueue.m"
            MR_Integer mercury__psqueue__V_111_111;

#line 1033 "psqueue.m"
            if ((mercury__psqueue__LTreeB_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1032 "psqueue.m"
              mercury__psqueue__V_86_86 = (MR_Integer) 0;
#line 1033 "psqueue.m"
            else
#line 1034 "psqueue.m"
              {
#line 1034 "psqueue.m"
                MR_Integer mercury__psqueue__V_90_90;
#line 1034 "psqueue.m"
                MR_Box mercury__psqueue__V_91_91;
#line 1034 "psqueue.m"
                MR_Word mercury__psqueue__V_92_92;
#line 1034 "psqueue.m"
                MR_Box mercury__psqueue__V_93_93;
#line 1034 "psqueue.m"
                MR_Word mercury__psqueue__V_94_94;

#line 1034 "psqueue.m"
                mercury__psqueue__V_86_86 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_18, (MR_Integer) 0)));
#line 1034 "psqueue.m"
                mercury__psqueue__V_90_90 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_18, (MR_Integer) 1)));
#line 1034 "psqueue.m"
                mercury__psqueue__V_91_91 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_18, (MR_Integer) 2));
#line 1034 "psqueue.m"
                mercury__psqueue__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_18, (MR_Integer) 3)));
#line 1034 "psqueue.m"
                mercury__psqueue__V_93_93 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_18, (MR_Integer) 4));
#line 1034 "psqueue.m"
                mercury__psqueue__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_18, (MR_Integer) 5)));
#line 1034 "psqueue.m"
              }
#line 677 "psqueue.m"
            mercury__psqueue__V_84_84 = ((MR_Integer) 1 + mercury__psqueue__V_86_86);
#line 1033 "psqueue.m"
            if ((mercury__psqueue__LTreeC_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1032 "psqueue.m"
              mercury__psqueue__V_87_87 = (MR_Integer) 0;
#line 1033 "psqueue.m"
            else
#line 1034 "psqueue.m"
              {
#line 1034 "psqueue.m"
                MR_Integer mercury__psqueue__V_97_97;
#line 1034 "psqueue.m"
                MR_Box mercury__psqueue__V_98_98;
#line 1034 "psqueue.m"
                MR_Word mercury__psqueue__V_99_99;
#line 1034 "psqueue.m"
                MR_Box mercury__psqueue__V_100_100;
#line 1034 "psqueue.m"
                MR_Word mercury__psqueue__V_101_101;

#line 1034 "psqueue.m"
                mercury__psqueue__V_87_87 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_11, (MR_Integer) 0)));
#line 1034 "psqueue.m"
                mercury__psqueue__V_97_97 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_11, (MR_Integer) 1)));
#line 1034 "psqueue.m"
                mercury__psqueue__V_98_98 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_11, (MR_Integer) 2));
#line 1034 "psqueue.m"
                mercury__psqueue__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_11, (MR_Integer) 3)));
#line 1034 "psqueue.m"
                mercury__psqueue__V_100_100 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_11, (MR_Integer) 4));
#line 1034 "psqueue.m"
                mercury__psqueue__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_11, (MR_Integer) 5)));
#line 1034 "psqueue.m"
              }
#line 677 "psqueue.m"
            mercury__psqueue__Size_83 = (mercury__psqueue__V_84_84 + mercury__psqueue__V_87_87);
#line 678 "psqueue.m"
            {
#line 678 "psqueue.m"
              mercury__psqueue__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_24_24, 0) = ((MR_Box) (mercury__psqueue__Size_83));
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_24_24, 1) = ((MR_Box) (mercury__psqueue__InsertPrio_7));
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_24_24, 2) = mercury__psqueue__InsertKey_8;
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_24_24, 3) = ((MR_Box) (mercury__psqueue__LTreeB_18));
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_24_24, 4) = mercury__psqueue__SplitKeyBC_10;
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_24_24, 5) = ((MR_Box) (mercury__psqueue__LTreeC_11));
#line 678 "psqueue.m"
            }
#line 1033 "psqueue.m"
            if ((mercury__psqueue__LTreeA_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1032 "psqueue.m"
              mercury__psqueue__V_111_111 = (MR_Integer) 0;
#line 1033 "psqueue.m"
            else
#line 1034 "psqueue.m"
              {
#line 1034 "psqueue.m"
                MR_Integer mercury__psqueue__V_115_115;
#line 1034 "psqueue.m"
                MR_Box mercury__psqueue__V_116_116;
#line 1034 "psqueue.m"
                MR_Word mercury__psqueue__V_117_117;
#line 1034 "psqueue.m"
                MR_Box mercury__psqueue__V_118_118;
#line 1034 "psqueue.m"
                MR_Word mercury__psqueue__V_119_119;

#line 1034 "psqueue.m"
                mercury__psqueue__V_111_111 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_16, (MR_Integer) 0)));
#line 1034 "psqueue.m"
                mercury__psqueue__V_115_115 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_16, (MR_Integer) 1)));
#line 1034 "psqueue.m"
                mercury__psqueue__V_116_116 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_16, (MR_Integer) 2));
#line 1034 "psqueue.m"
                mercury__psqueue__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_16, (MR_Integer) 3)));
#line 1034 "psqueue.m"
                mercury__psqueue__V_118_118 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_16, (MR_Integer) 4));
#line 1034 "psqueue.m"
                mercury__psqueue__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_16, (MR_Integer) 5)));
#line 1034 "psqueue.m"
              }
#line 677 "psqueue.m"
            mercury__psqueue__V_109_109 = ((MR_Integer) 1 + mercury__psqueue__V_111_111);
#line 677 "psqueue.m"
            mercury__psqueue__Size_108 = (mercury__psqueue__V_109_109 + mercury__psqueue__Size_83);
#line 678 "psqueue.m"
            {
#line 678 "psqueue.m"
              mercury__psqueue__LTree_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 0) = ((MR_Box) (mercury__psqueue__Size_108));
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 1) = ((MR_Box) (mercury__psqueue__LoserPrio_14));
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 2) = mercury__psqueue__LoserKey_15;
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 3) = ((MR_Box) (mercury__psqueue__LTreeA_16));
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 4) = mercury__psqueue__SplitKeyAB_17;
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 5) = ((MR_Box) (mercury__psqueue__V_24_24));
#line 678 "psqueue.m"
            }
#line 655 "psqueue.m"
          }
#line 643 "psqueue.m"
      }
#line 661 "psqueue.m"
    return mercury__psqueue__LTree_12;
#line 661 "psqueue.m"
  }
#line 636 "psqueue.m"
}

#line 724 "psqueue.m"
MR_bool MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_116_118_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_4_p_0(
#line 724 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_29,
#line 724 "psqueue.m"
  MR_Integer mercury__psqueue__InsertPrio_5,
#line 724 "psqueue.m"
  MR_Box mercury__psqueue__InsertKey_6,
#line 724 "psqueue.m"
  MR_Word mercury__psqueue__TV_7,
#line 724 "psqueue.m"
  MR_Word * mercury__psqueue__Winner_8)
#line 724 "psqueue.m"
{
#line 744 "psqueue.m"
  {
#line 744 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;

#line 744 "psqueue.m"
    if (((MR_tag((MR_Word) mercury__psqueue__TV_7)) == (MR_mktag((MR_Integer) 0))))
#line 730 "psqueue.m"
      {
#line 730 "psqueue.m"
        MR_Integer mercury__psqueue__Prio_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__psqueue__TV_7, (MR_Integer) 0)));
#line 730 "psqueue.m"
        MR_Box mercury__psqueue__Key_10 = (MR_hl_field(MR_mktag(0), mercury__psqueue__TV_7, (MR_Integer) 1));
#line 730 "psqueue.m"
        MR_Word mercury__psqueue__CMP_11;
#line 730 "psqueue.m"
        MR_Word mercury__psqueue__WinnerA_12;
#line 730 "psqueue.m"
        MR_Word mercury__psqueue__WinnerB_13;

#line 731 "psqueue.m"
        {
#line 731 "psqueue.m"
          mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_29, &mercury__psqueue__CMP_11, mercury__psqueue__InsertKey_6, mercury__psqueue__Key_10);
        }
#line 736 "psqueue.m"
        if ((mercury__psqueue__CMP_11 == (MR_Integer) 1))
#line 733 "psqueue.m"
          {
#line 733 "psqueue.m"
            MR_Word mercury__psqueue__V_32_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 733 "psqueue.m"
            MR_Word mercury__psqueue__V_36_36;

#line 700 "psqueue.m"
            {
#line 700 "psqueue.m"
              mercury__psqueue__WinnerA_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 700 "psqueue.m"
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_12, 0) = ((MR_Box) (mercury__psqueue__InsertPrio_5));
#line 700 "psqueue.m"
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_12, 1) = mercury__psqueue__InsertKey_6;
#line 700 "psqueue.m"
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_12, 2) = ((MR_Box) (mercury__psqueue__V_32_32));
#line 700 "psqueue.m"
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_12, 3) = mercury__psqueue__InsertKey_6;
#line 700 "psqueue.m"
            }
#line 700 "psqueue.m"
            mercury__psqueue__V_36_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 700 "psqueue.m"
            {
#line 700 "psqueue.m"
              mercury__psqueue__WinnerB_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 700 "psqueue.m"
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_13, 0) = ((MR_Box) (mercury__psqueue__Prio_9));
#line 700 "psqueue.m"
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_13, 1) = mercury__psqueue__Key_10;
#line 700 "psqueue.m"
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_13, 2) = ((MR_Box) (mercury__psqueue__V_36_36));
#line 700 "psqueue.m"
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_13, 3) = mercury__psqueue__Key_10;
#line 700 "psqueue.m"
            }
#line 733 "psqueue.m"
            mercury__psqueue__succeeded = MR_TRUE;
#line 733 "psqueue.m"
          }
#line 736 "psqueue.m"
        else
#line 736 "psqueue.m"
          if ((mercury__psqueue__CMP_11 == (MR_Integer) 2))
#line 737 "psqueue.m"
            {
#line 737 "psqueue.m"
              MR_Word mercury__psqueue__V_40_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 737 "psqueue.m"
              MR_Word mercury__psqueue__V_44_44;

#line 700 "psqueue.m"
              {
#line 700 "psqueue.m"
                mercury__psqueue__WinnerA_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 700 "psqueue.m"
                MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_12, 0) = ((MR_Box) (mercury__psqueue__Prio_9));
#line 700 "psqueue.m"
                MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_12, 1) = mercury__psqueue__Key_10;
#line 700 "psqueue.m"
                MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_12, 2) = ((MR_Box) (mercury__psqueue__V_40_40));
#line 700 "psqueue.m"
                MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_12, 3) = mercury__psqueue__Key_10;
#line 700 "psqueue.m"
              }
#line 700 "psqueue.m"
              mercury__psqueue__V_44_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 700 "psqueue.m"
              {
#line 700 "psqueue.m"
                mercury__psqueue__WinnerB_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 700 "psqueue.m"
                MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_13, 0) = ((MR_Box) (mercury__psqueue__InsertPrio_5));
#line 700 "psqueue.m"
                MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_13, 1) = mercury__psqueue__InsertKey_6;
#line 700 "psqueue.m"
                MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_13, 2) = ((MR_Box) (mercury__psqueue__V_44_44));
#line 700 "psqueue.m"
                MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_13, 3) = mercury__psqueue__InsertKey_6;
#line 700 "psqueue.m"
              }
#line 737 "psqueue.m"
              mercury__psqueue__succeeded = MR_TRUE;
#line 737 "psqueue.m"
            }
#line 736 "psqueue.m"
          else
#line 736 "psqueue.m"
            mercury__psqueue__succeeded = MR_FALSE;
#line 730 "psqueue.m"
        if (mercury__psqueue__succeeded)
#line 730 "psqueue.m"
          {
#line 743 "psqueue.m"
            {
#line 743 "psqueue.m"
              mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_109_98_105_110_101_95_119_105_110_110_101_114_115_95_118_105_97_95_116_111_117_114_110_97_109_101_110_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__psqueue__TypeInfo_for_K_29, mercury__psqueue__WinnerA_12, mercury__psqueue__WinnerB_13, mercury__psqueue__Winner_8);
            }
#line 743 "psqueue.m"
            mercury__psqueue__succeeded = MR_TRUE;
#line 730 "psqueue.m"
          }
#line 730 "psqueue.m"
      }
#line 744 "psqueue.m"
    else
#line 745 "psqueue.m"
      {
#line 745 "psqueue.m"
        MR_Box mercury__psqueue__MaxKeyA_17;
#line 745 "psqueue.m"
        MR_Word mercury__psqueue__WinnerA_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__TV_7, (MR_Integer) 0)));
#line 745 "psqueue.m"
        MR_Word mercury__psqueue__WinnerB_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__TV_7, (MR_Integer) 1)));
#line 746 "psqueue.m"
        MR_Integer mercury__psqueue__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_26, (MR_Integer) 0)));
#line 746 "psqueue.m"
        MR_Box mercury__psqueue__V_15_15 = (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_26, (MR_Integer) 1));
#line 746 "psqueue.m"
        MR_Word mercury__psqueue__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_26, (MR_Integer) 2)));
#line 1042 "psqueue.m"
        MR_Word mercury__psqueue__CMP_48;

#line 746 "psqueue.m"
        mercury__psqueue__MaxKeyA_17 = (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_26, (MR_Integer) 3));
#line 1043 "psqueue.m"
        {
#line 1043 "psqueue.m"
          mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_29, &mercury__psqueue__CMP_48, mercury__psqueue__InsertKey_6, mercury__psqueue__MaxKeyA_17);
        }
#line 1045 "psqueue.m"
        if ((mercury__psqueue__CMP_48 == (MR_Integer) 1))
#line 1044 "psqueue.m"
          mercury__psqueue__succeeded = MR_TRUE;
#line 1045 "psqueue.m"
        else
#line 1045 "psqueue.m"
          if ((mercury__psqueue__CMP_48 == (MR_Integer) 0))
#line 1045 "psqueue.m"
            mercury__psqueue__succeeded = MR_TRUE;
#line 1045 "psqueue.m"
          else
#line 1045 "psqueue.m"
            mercury__psqueue__succeeded = MR_FALSE;
#line 752 "psqueue.m"
        if (mercury__psqueue__succeeded)
#line 750 "psqueue.m"
          {
#line 750 "psqueue.m"
            MR_Word mercury__psqueue__UpdatedWinnerA_22;
#line 750 "psqueue.m"
            MR_Word mercury__psqueue__V_24_24;

#line 750 "psqueue.m"
            {
#line 750 "psqueue.m"
              mercury__psqueue__V_24_24 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_103_101_116_95_116_111_117_114_110_97_109_101_110_116_95_118_105_101_119_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_1_f_0(mercury__psqueue__TypeInfo_for_K_29, mercury__psqueue__WinnerA_26);
            }
#line 749 "psqueue.m"
            {
#line 749 "psqueue.m"
              mercury__psqueue__succeeded = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_116_118_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mercury__psqueue__TypeInfo_for_K_29, mercury__psqueue__InsertPrio_5, mercury__psqueue__InsertKey_6, mercury__psqueue__V_24_24, &mercury__psqueue__UpdatedWinnerA_22);
            }
#line 750 "psqueue.m"
            if (mercury__psqueue__succeeded)
#line 750 "psqueue.m"
              {
#line 751 "psqueue.m"
                {
#line 751 "psqueue.m"
                  mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_109_98_105_110_101_95_119_105_110_110_101_114_115_95_118_105_97_95_116_111_117_114_110_97_109_101_110_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__psqueue__TypeInfo_for_K_29, mercury__psqueue__UpdatedWinnerA_22, mercury__psqueue__WinnerB_27, mercury__psqueue__Winner_8);
                }
#line 751 "psqueue.m"
                mercury__psqueue__succeeded = MR_TRUE;
#line 750 "psqueue.m"
              }
#line 750 "psqueue.m"
          }
#line 752 "psqueue.m"
        else
#line 754 "psqueue.m"
          {
#line 754 "psqueue.m"
            MR_Word mercury__psqueue__UpdatedWinnerB_23;
#line 754 "psqueue.m"
            MR_Word mercury__psqueue__V_25_25;

#line 754 "psqueue.m"
            {
#line 754 "psqueue.m"
              mercury__psqueue__V_25_25 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_103_101_116_95_116_111_117_114_110_97_109_101_110_116_95_118_105_101_119_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_1_f_0(mercury__psqueue__TypeInfo_for_K_29, mercury__psqueue__WinnerB_27);
            }
#line 753 "psqueue.m"
            {
#line 753 "psqueue.m"
              mercury__psqueue__succeeded = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_116_118_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mercury__psqueue__TypeInfo_for_K_29, mercury__psqueue__InsertPrio_5, mercury__psqueue__InsertKey_6, mercury__psqueue__V_25_25, &mercury__psqueue__UpdatedWinnerB_23);
            }
#line 754 "psqueue.m"
            if (mercury__psqueue__succeeded)
#line 754 "psqueue.m"
              {
#line 755 "psqueue.m"
                {
#line 755 "psqueue.m"
                  mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_109_98_105_110_101_95_119_105_110_110_101_114_115_95_118_105_97_95_116_111_117_114_110_97_109_101_110_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__psqueue__TypeInfo_for_K_29, mercury__psqueue__WinnerA_26, mercury__psqueue__UpdatedWinnerB_23, mercury__psqueue__Winner_8);
                }
#line 755 "psqueue.m"
                mercury__psqueue__succeeded = MR_TRUE;
#line 754 "psqueue.m"
              }
#line 754 "psqueue.m"
          }
#line 745 "psqueue.m"
      }
#line 744 "psqueue.m"
    return mercury__psqueue__succeeded;
#line 744 "psqueue.m"
  }
#line 724 "psqueue.m"
}

#line 789 "psqueue.m"
MR_Word MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_118_101_114_116_95_108_111_115_101_114_95_116_114_101_101_95_116_111_95_112_115_113_117_101_117_101_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_2_f_0(
#line 789 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_18,
#line 789 "psqueue.m"
  MR_Word mercury__psqueue__LTree_4,
#line 789 "psqueue.m"
  MR_Box mercury__psqueue__MaxKey_5)
#line 789 "psqueue.m"
{
#line 796 "psqueue.m"
  {
#line 796 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 796 "psqueue.m"
    MR_Word mercury__psqueue__PSQ_6;

#line 796 "psqueue.m"
    if ((mercury__psqueue__LTree_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 795 "psqueue.m"
      mercury__psqueue__PSQ_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 796 "psqueue.m"
    else
#line 798 "psqueue.m"
      {
#line 798 "psqueue.m"
        MR_Integer mercury__psqueue__LoserPrio_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 1)));
#line 798 "psqueue.m"
        MR_Box mercury__psqueue__LoserKey_9 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 2));
#line 798 "psqueue.m"
        MR_Word mercury__psqueue__SubLTreeL_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 3)));
#line 798 "psqueue.m"
        MR_Box mercury__psqueue__SplitKey_11 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 4));
#line 798 "psqueue.m"
        MR_Word mercury__psqueue__SubLTreeR_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 5)));
#line 798 "psqueue.m"
        MR_Word mercury__psqueue__PSQA_14;
#line 798 "psqueue.m"
        MR_Word mercury__psqueue__PSQB_15;
#line 797 "psqueue.m"
        MR_Integer mercury__psqueue__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 0)));
#line 1042 "psqueue.m"
        MR_Word mercury__psqueue__CMP_21;

#line 1043 "psqueue.m"
        {
#line 1043 "psqueue.m"
          mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_18, &mercury__psqueue__CMP_21, mercury__psqueue__LoserKey_9, mercury__psqueue__SplitKey_11);
        }
#line 1045 "psqueue.m"
        if ((mercury__psqueue__CMP_21 == (MR_Integer) 1))
#line 1044 "psqueue.m"
          mercury__psqueue__succeeded = MR_TRUE;
#line 1045 "psqueue.m"
        else
#line 1045 "psqueue.m"
          if ((mercury__psqueue__CMP_21 == (MR_Integer) 0))
#line 1045 "psqueue.m"
            mercury__psqueue__succeeded = MR_TRUE;
#line 1045 "psqueue.m"
          else
#line 1045 "psqueue.m"
            mercury__psqueue__succeeded = MR_FALSE;
#line 803 "psqueue.m"
        if (mercury__psqueue__succeeded)
#line 800 "psqueue.m"
          {
#line 800 "psqueue.m"
            MR_Word mercury__psqueue__WinnerA_13;

#line 800 "psqueue.m"
            {
#line 800 "psqueue.m"
              mercury__psqueue__WinnerA_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 800 "psqueue.m"
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_13, 0) = ((MR_Box) (mercury__psqueue__LoserPrio_8));
#line 800 "psqueue.m"
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_13, 1) = mercury__psqueue__LoserKey_9;
#line 800 "psqueue.m"
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_13, 2) = ((MR_Box) (mercury__psqueue__SubLTreeL_10));
#line 800 "psqueue.m"
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_13, 3) = mercury__psqueue__SplitKey_11;
#line 800 "psqueue.m"
            }
#line 801 "psqueue.m"
            {
#line 801 "psqueue.m"
              mercury__psqueue__PSQA_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 801 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__PSQA_14, 0) = ((MR_Box) (mercury__psqueue__WinnerA_13));
#line 801 "psqueue.m"
            }
#line 802 "psqueue.m"
            {
#line 802 "psqueue.m"
              mercury__psqueue__PSQB_15 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_118_101_114_116_95_108_111_115_101_114_95_116_114_101_101_95_116_111_95_112_115_113_117_101_117_101_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_2_f_0(mercury__psqueue__TypeInfo_for_K_18, mercury__psqueue__SubLTreeR_12, mercury__psqueue__MaxKey_5);
            }
#line 800 "psqueue.m"
          }
#line 803 "psqueue.m"
        else
#line 804 "psqueue.m"
          {
#line 804 "psqueue.m"
            MR_Word mercury__psqueue__WinnerB_16;

#line 804 "psqueue.m"
            {
#line 804 "psqueue.m"
              mercury__psqueue__PSQA_14 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_118_101_114_116_95_108_111_115_101_114_95_116_114_101_101_95_116_111_95_112_115_113_117_101_117_101_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_2_f_0(mercury__psqueue__TypeInfo_for_K_18, mercury__psqueue__SubLTreeL_10, mercury__psqueue__SplitKey_11);
            }
#line 805 "psqueue.m"
            {
#line 805 "psqueue.m"
              mercury__psqueue__WinnerB_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 805 "psqueue.m"
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_16, 0) = ((MR_Box) (mercury__psqueue__LoserPrio_8));
#line 805 "psqueue.m"
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_16, 1) = mercury__psqueue__LoserKey_9;
#line 805 "psqueue.m"
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_16, 2) = ((MR_Box) (mercury__psqueue__SubLTreeR_12));
#line 805 "psqueue.m"
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_16, 3) = mercury__psqueue__MaxKey_5;
#line 805 "psqueue.m"
            }
#line 806 "psqueue.m"
            {
#line 806 "psqueue.m"
              mercury__psqueue__PSQB_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 806 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__PSQB_15, 0) = ((MR_Box) (mercury__psqueue__WinnerB_16));
#line 806 "psqueue.m"
            }
#line 804 "psqueue.m"
          }
#line 412 "psqueue.m"
        if ((mercury__psqueue__PSQA_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 403 "psqueue.m"
          mercury__psqueue__PSQ_6 = mercury__psqueue__PSQB_15;
#line 412 "psqueue.m"
        else
#line 413 "psqueue.m"
          {
#line 413 "psqueue.m"
            MR_Word mercury__psqueue__WinnerA_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQA_14, (MR_Integer) 0)));

#line 417 "psqueue.m"
            if ((mercury__psqueue__PSQB_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 416 "psqueue.m"
              mercury__psqueue__PSQ_6 = mercury__psqueue__PSQA_14;
#line 417 "psqueue.m"
            else
#line 418 "psqueue.m"
              {
#line 418 "psqueue.m"
                MR_Word mercury__psqueue__WinnerB_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQB_15, (MR_Integer) 0)));
#line 418 "psqueue.m"
                MR_Word mercury__psqueue__CombinedWinner_27;

#line 419 "psqueue.m"
                {
#line 419 "psqueue.m"
                  mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_109_98_105_110_101_95_119_105_110_110_101_114_115_95_118_105_97_95_116_111_117_114_110_97_109_101_110_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__psqueue__TypeInfo_for_K_18, mercury__psqueue__WinnerA_25, mercury__psqueue__WinnerB_26, &mercury__psqueue__CombinedWinner_27);
                }
#line 420 "psqueue.m"
                {
#line 420 "psqueue.m"
                  mercury__psqueue__PSQ_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 420 "psqueue.m"
                  MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_6, 0) = ((MR_Box) (mercury__psqueue__CombinedWinner_27));
#line 420 "psqueue.m"
                }
#line 418 "psqueue.m"
              }
#line 413 "psqueue.m"
          }
#line 798 "psqueue.m"
      }
#line 796 "psqueue.m"
    return mercury__psqueue__PSQ_6;
#line 796 "psqueue.m"
  }
#line 789 "psqueue.m"
}

#line 830 "psqueue.m"
void MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_102_114_111_109_95_97_115_115_111_99_95_108_105_115_116_95_108_111_111_112_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_3_p_0(
#line 830 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_17,
#line 830 "psqueue.m"
  MR_Word mercury__psqueue__HeadVar__1_1,
#line 830 "psqueue.m"
  MR_Word mercury__psqueue__STATE_VARIABLE_PSQ_0_2,
#line 830 "psqueue.m"
  MR_Word * mercury__psqueue__STATE_VARIABLE_PSQ_3)
#line 830 "psqueue.m"
{
#line 834 "psqueue.m"
  while (MR_TRUE)
#line 834 "psqueue.m"
    {
#line 834 "psqueue.m"
      /* tailcall optimized into a loop */
#line 834 "psqueue.m"
      {
#line 834 "psqueue.m"
        MR_bool mercury__psqueue__succeeded;

#line 834 "psqueue.m"
        if ((mercury__psqueue__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 834 "psqueue.m"
          *mercury__psqueue__STATE_VARIABLE_PSQ_3 = mercury__psqueue__STATE_VARIABLE_PSQ_0_2;
#line 834 "psqueue.m"
        else
#line 835 "psqueue.m"
          {
#line 835 "psqueue.m"
            MR_Integer mercury__psqueue__Prio_7;
#line 835 "psqueue.m"
            MR_Box mercury__psqueue__Key_8;
#line 835 "psqueue.m"
            MR_Word mercury__psqueue__PriosKeys_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__1_1, (MR_Integer) 1)));
#line 835 "psqueue.m"
            MR_Word mercury__psqueue__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__1_1, (MR_Integer) 0)));
#line 835 "psqueue.m"
            MR_Word mercury__psqueue__STATE_VARIABLE_PSQ_14_14;

#line 835 "psqueue.m"
            mercury__psqueue__Prio_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__psqueue__V_13_13, (MR_Integer) 0)));
#line 835 "psqueue.m"
            mercury__psqueue__Key_8 = (MR_hl_field(MR_mktag(0), mercury__psqueue__V_13_13, (MR_Integer) 1));
#line 836 "psqueue.m"
            {
#line 836 "psqueue.m"
              mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mercury__psqueue__TypeInfo_for_K_17, mercury__psqueue__Prio_7, mercury__psqueue__Key_8, mercury__psqueue__STATE_VARIABLE_PSQ_0_2, &mercury__psqueue__STATE_VARIABLE_PSQ_14_14);
            }
#line 837 "psqueue.m"
            /* direct tailcall eliminated */
#line 837 "psqueue.m"
            {
#line 837 "psqueue.m"
              MR_Word mercury__psqueue__HeadVar__1__tmp_copy_1 = mercury__psqueue__PriosKeys_9;
#line 837 "psqueue.m"
              MR_Word mercury__psqueue__STATE_VARIABLE_PSQ_0__tmp_copy_2 = mercury__psqueue__STATE_VARIABLE_PSQ_14_14;

#line 837 "psqueue.m"
              mercury__psqueue__STATE_VARIABLE_PSQ_0_2 = mercury__psqueue__STATE_VARIABLE_PSQ_0__tmp_copy_2;
#line 837 "psqueue.m"
              mercury__psqueue__HeadVar__1_1 = mercury__psqueue__HeadVar__1__tmp_copy_1;
#line 837 "psqueue.m"
            }
#line 837 "psqueue.m"
            continue;
#line 835 "psqueue.m"
          }
#line 834 "psqueue.m"
      }
#line 834 "psqueue.m"
      break;
#line 834 "psqueue.m"
    }
#line 830 "psqueue.m"
}

#line 857 "psqueue.m"
MR_bool MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_109_111_118_101_95_116_118_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_4_p_0(
#line 857 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_23,
#line 857 "psqueue.m"
  MR_Integer * mercury__psqueue__MatchingPrio_5,
#line 857 "psqueue.m"
  MR_Box mercury__psqueue__SearchKey_6,
#line 857 "psqueue.m"
  MR_Word mercury__psqueue__TournamentView_7,
#line 857 "psqueue.m"
  MR_Word * mercury__psqueue__PSQ_8)
#line 857 "psqueue.m"
{
#line 870 "psqueue.m"
  {
#line 870 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;

#line 870 "psqueue.m"
    if (((MR_tag((MR_Word) mercury__psqueue__TournamentView_7)) == (MR_mktag((MR_Integer) 0))))
#line 863 "psqueue.m"
      {
#line 863 "psqueue.m"
        MR_Box mercury__psqueue__Key_10;

#line 863 "psqueue.m"
        *mercury__psqueue__MatchingPrio_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__psqueue__TournamentView_7, (MR_Integer) 0)));
#line 863 "psqueue.m"
        mercury__psqueue__Key_10 = (MR_hl_field(MR_mktag(0), mercury__psqueue__TournamentView_7, (MR_Integer) 1));
#line 864 "psqueue.m"
        {
#line 864 "psqueue.m"
          mercury__psqueue__succeeded = mercury__builtin__unify_2_p_0(mercury__psqueue__TypeInfo_for_K_23, mercury__psqueue__Key_10, mercury__psqueue__SearchKey_6);
        }
#line 863 "psqueue.m"
        if (mercury__psqueue__succeeded)
#line 863 "psqueue.m"
          {
#line 866 "psqueue.m"
            *mercury__psqueue__PSQ_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 866 "psqueue.m"
            mercury__psqueue__succeeded = MR_TRUE;
#line 863 "psqueue.m"
          }
#line 863 "psqueue.m"
      }
#line 870 "psqueue.m"
    else
#line 871 "psqueue.m"
      {
#line 871 "psqueue.m"
        MR_Word mercury__psqueue__WinnerA_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__TournamentView_7, (MR_Integer) 0)));
#line 871 "psqueue.m"
        MR_Word mercury__psqueue__WinnerB_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__TournamentView_7, (MR_Integer) 1)));
#line 871 "psqueue.m"
        MR_Box mercury__psqueue__MaxKeyA_16 = (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_11, (MR_Integer) 3));
#line 871 "psqueue.m"
        MR_Word mercury__psqueue__CombinedWinner_18;
#line 872 "psqueue.m"
        MR_Integer mercury__psqueue__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_11, (MR_Integer) 0)));
#line 872 "psqueue.m"
        MR_Box mercury__psqueue__V_14_14 = (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_11, (MR_Integer) 1));
#line 872 "psqueue.m"
        MR_Word mercury__psqueue__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_11, (MR_Integer) 2)));
#line 1042 "psqueue.m"
        MR_Word mercury__psqueue__CMP_26;

#line 1043 "psqueue.m"
        {
#line 1043 "psqueue.m"
          mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_23, &mercury__psqueue__CMP_26, mercury__psqueue__SearchKey_6, mercury__psqueue__MaxKeyA_16);
        }
#line 1045 "psqueue.m"
        if ((mercury__psqueue__CMP_26 == (MR_Integer) 1))
#line 1044 "psqueue.m"
          mercury__psqueue__succeeded = MR_TRUE;
#line 1045 "psqueue.m"
        else
#line 1045 "psqueue.m"
          if ((mercury__psqueue__CMP_26 == (MR_Integer) 0))
#line 1045 "psqueue.m"
            mercury__psqueue__succeeded = MR_TRUE;
#line 1045 "psqueue.m"
          else
#line 1045 "psqueue.m"
            mercury__psqueue__succeeded = MR_FALSE;
#line 878 "psqueue.m"
        if (mercury__psqueue__succeeded)
#line 875 "psqueue.m"
          {
#line 875 "psqueue.m"
            MR_Word mercury__psqueue__UpdatedPSQA_17;
#line 875 "psqueue.m"
            MR_Word mercury__psqueue__V_20_20;

#line 875 "psqueue.m"
            {
#line 875 "psqueue.m"
              mercury__psqueue__V_20_20 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_103_101_116_95_116_111_117_114_110_97_109_101_110_116_95_118_105_101_119_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_1_f_0(mercury__psqueue__TypeInfo_for_K_23, mercury__psqueue__WinnerA_11);
            }
#line 874 "psqueue.m"
            {
#line 874 "psqueue.m"
              mercury__psqueue__succeeded = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_109_111_118_101_95_116_118_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mercury__psqueue__TypeInfo_for_K_23, mercury__psqueue__MatchingPrio_5, mercury__psqueue__SearchKey_6, mercury__psqueue__V_20_20, &mercury__psqueue__UpdatedPSQA_17);
            }
#line 875 "psqueue.m"
            if (mercury__psqueue__succeeded)
#line 875 "psqueue.m"
              {
#line 445 "psqueue.m"
                if ((mercury__psqueue__UpdatedPSQA_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 444 "psqueue.m"
                  mercury__psqueue__CombinedWinner_18 = mercury__psqueue__WinnerB_12;
#line 445 "psqueue.m"
                else
#line 446 "psqueue.m"
                  {
#line 446 "psqueue.m"
                    MR_Word mercury__psqueue__WinnerA_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__UpdatedPSQA_17, (MR_Integer) 0)));

#line 447 "psqueue.m"
                    {
#line 447 "psqueue.m"
                      mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_109_98_105_110_101_95_119_105_110_110_101_114_115_95_118_105_97_95_116_111_117_114_110_97_109_101_110_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__psqueue__TypeInfo_for_K_23, mercury__psqueue__WinnerA_30, mercury__psqueue__WinnerB_12, &mercury__psqueue__CombinedWinner_18);
                    }
#line 446 "psqueue.m"
                  }
#line 445 "psqueue.m"
                mercury__psqueue__succeeded = MR_TRUE;
#line 875 "psqueue.m"
              }
#line 875 "psqueue.m"
          }
#line 878 "psqueue.m"
        else
#line 880 "psqueue.m"
          {
#line 880 "psqueue.m"
            MR_Word mercury__psqueue__UpdatedPSQB_19;
#line 880 "psqueue.m"
            MR_Word mercury__psqueue__V_21_21;

#line 880 "psqueue.m"
            {
#line 880 "psqueue.m"
              mercury__psqueue__V_21_21 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_103_101_116_95_116_111_117_114_110_97_109_101_110_116_95_118_105_101_119_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_1_f_0(mercury__psqueue__TypeInfo_for_K_23, mercury__psqueue__WinnerB_12);
            }
#line 879 "psqueue.m"
            {
#line 879 "psqueue.m"
              mercury__psqueue__succeeded = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_109_111_118_101_95_116_118_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mercury__psqueue__TypeInfo_for_K_23, mercury__psqueue__MatchingPrio_5, mercury__psqueue__SearchKey_6, mercury__psqueue__V_21_21, &mercury__psqueue__UpdatedPSQB_19);
            }
#line 880 "psqueue.m"
            if (mercury__psqueue__succeeded)
#line 880 "psqueue.m"
              {
#line 432 "psqueue.m"
                if ((mercury__psqueue__UpdatedPSQB_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 431 "psqueue.m"
                  mercury__psqueue__CombinedWinner_18 = mercury__psqueue__WinnerA_11;
#line 432 "psqueue.m"
                else
#line 433 "psqueue.m"
                  {
#line 433 "psqueue.m"
                    MR_Word mercury__psqueue__WinnerB_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__UpdatedPSQB_19, (MR_Integer) 0)));

#line 434 "psqueue.m"
                    {
#line 434 "psqueue.m"
                      mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_109_98_105_110_101_95_119_105_110_110_101_114_115_95_118_105_97_95_116_111_117_114_110_97_109_101_110_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__psqueue__TypeInfo_for_K_23, mercury__psqueue__WinnerA_11, mercury__psqueue__WinnerB_35, &mercury__psqueue__CombinedWinner_18);
                    }
#line 433 "psqueue.m"
                  }
#line 432 "psqueue.m"
                mercury__psqueue__succeeded = MR_TRUE;
#line 880 "psqueue.m"
              }
#line 880 "psqueue.m"
          }
#line 871 "psqueue.m"
        if (mercury__psqueue__succeeded)
#line 871 "psqueue.m"
          {
#line 884 "psqueue.m"
            {
#line 884 "psqueue.m"
              MR_Word base;
#line 884 "psqueue.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 884 "psqueue.m"
              *mercury__psqueue__PSQ_8 = base;
#line 884 "psqueue.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__psqueue__CombinedWinner_18));
#line 884 "psqueue.m"
            }
#line 884 "psqueue.m"
            mercury__psqueue__succeeded = MR_TRUE;
#line 871 "psqueue.m"
          }
#line 871 "psqueue.m"
      }
#line 870 "psqueue.m"
    return mercury__psqueue__succeeded;
#line 870 "psqueue.m"
  }
#line 857 "psqueue.m"
}

#line 899 "psqueue.m"
MR_bool MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_97_100_106_117_115_116_95_116_118_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_4_p_0(
#line 899 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_23,
#line 899 "psqueue.m"
  MR_Word mercury__psqueue__AdjustFunc_5,
#line 899 "psqueue.m"
  MR_Box mercury__psqueue__SearchKey_6,
#line 899 "psqueue.m"
  MR_Word mercury__psqueue__TournamentView_7,
#line 899 "psqueue.m"
  MR_Word * mercury__psqueue__Winner_8)
#line 899 "psqueue.m"
{
#line 912 "psqueue.m"
  {
#line 912 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;

#line 912 "psqueue.m"
    if (((MR_tag((MR_Word) mercury__psqueue__TournamentView_7)) == (MR_mktag((MR_Integer) 0))))
#line 905 "psqueue.m"
      {
#line 905 "psqueue.m"
        MR_Integer mercury__psqueue__Prio_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__psqueue__TournamentView_7, (MR_Integer) 0)));
#line 905 "psqueue.m"
        MR_Box mercury__psqueue__Key_10 = (MR_hl_field(MR_mktag(0), mercury__psqueue__TournamentView_7, (MR_Integer) 1));
#line 905 "psqueue.m"
        MR_Integer mercury__psqueue__V_21_21;
#line 905 "psqueue.m"
        MR_Word mercury__psqueue__V_26_26;
#line 907 "psqueue.m"
        MR_Box MR_CALL (* mercury__psqueue__func_0)(MR_Box, MR_Box);
#line 907 "psqueue.m"
        MR_Box mercury__psqueue__conv1_V_21_21;

#line 906 "psqueue.m"
        {
#line 906 "psqueue.m"
          mercury__psqueue__succeeded = mercury__builtin__unify_2_p_0(mercury__psqueue__TypeInfo_for_K_23, mercury__psqueue__Key_10, mercury__psqueue__SearchKey_6);
        }
#line 905 "psqueue.m"
        if (mercury__psqueue__succeeded)
#line 905 "psqueue.m"
          {
#line 907 "psqueue.m"
            mercury__psqueue__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__psqueue__AdjustFunc_5, (MR_Integer) 1)));
#line 907 "psqueue.m"
            {
#line 907 "psqueue.m"
              mercury__psqueue__conv1_V_21_21 = mercury__psqueue__func_0(((MR_Box) mercury__psqueue__AdjustFunc_5), ((MR_Box) (mercury__psqueue__Prio_9)));
            }
#line 907 "psqueue.m"
            mercury__psqueue__V_21_21 = ((MR_Integer) mercury__psqueue__conv1_V_21_21);
#line 700 "psqueue.m"
            mercury__psqueue__V_26_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 700 "psqueue.m"
            {
#line 700 "psqueue.m"
              MR_Word base;
#line 700 "psqueue.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 700 "psqueue.m"
              *mercury__psqueue__Winner_8 = base;
#line 700 "psqueue.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__psqueue__V_21_21));
#line 700 "psqueue.m"
              MR_hl_field(MR_mktag(0), base, 1) = mercury__psqueue__Key_10;
#line 700 "psqueue.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__psqueue__V_26_26));
#line 700 "psqueue.m"
              MR_hl_field(MR_mktag(0), base, 3) = mercury__psqueue__Key_10;
#line 700 "psqueue.m"
            }
#line 700 "psqueue.m"
            mercury__psqueue__succeeded = MR_TRUE;
#line 905 "psqueue.m"
          }
#line 905 "psqueue.m"
      }
#line 912 "psqueue.m"
    else
#line 913 "psqueue.m"
      {
#line 913 "psqueue.m"
        MR_Word mercury__psqueue__WinnerA_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__TournamentView_7, (MR_Integer) 0)));
#line 913 "psqueue.m"
        MR_Word mercury__psqueue__WinnerB_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__TournamentView_7, (MR_Integer) 1)));
#line 913 "psqueue.m"
        MR_Box mercury__psqueue__MaxKeyA_16 = (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_11, (MR_Integer) 3));
#line 914 "psqueue.m"
        MR_Integer mercury__psqueue__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_11, (MR_Integer) 0)));
#line 914 "psqueue.m"
        MR_Box mercury__psqueue__V_14_14 = (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_11, (MR_Integer) 1));
#line 914 "psqueue.m"
        MR_Word mercury__psqueue__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_11, (MR_Integer) 2)));
#line 1042 "psqueue.m"
        MR_Word mercury__psqueue__CMP_30;

#line 1043 "psqueue.m"
        {
#line 1043 "psqueue.m"
          mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_23, &mercury__psqueue__CMP_30, mercury__psqueue__SearchKey_6, mercury__psqueue__MaxKeyA_16);
        }
#line 1045 "psqueue.m"
        if ((mercury__psqueue__CMP_30 == (MR_Integer) 1))
#line 1044 "psqueue.m"
          mercury__psqueue__succeeded = MR_TRUE;
#line 1045 "psqueue.m"
        else
#line 1045 "psqueue.m"
          if ((mercury__psqueue__CMP_30 == (MR_Integer) 0))
#line 1045 "psqueue.m"
            mercury__psqueue__succeeded = MR_TRUE;
#line 1045 "psqueue.m"
          else
#line 1045 "psqueue.m"
            mercury__psqueue__succeeded = MR_FALSE;
#line 919 "psqueue.m"
        if (mercury__psqueue__succeeded)
#line 917 "psqueue.m"
          {
#line 917 "psqueue.m"
            MR_Word mercury__psqueue__UpdatedWinnerA_17;
#line 917 "psqueue.m"
            MR_Word mercury__psqueue__V_19_19;

#line 917 "psqueue.m"
            {
#line 917 "psqueue.m"
              mercury__psqueue__V_19_19 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_103_101_116_95_116_111_117_114_110_97_109_101_110_116_95_118_105_101_119_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_1_f_0(mercury__psqueue__TypeInfo_for_K_23, mercury__psqueue__WinnerA_11);
            }
#line 916 "psqueue.m"
            {
#line 916 "psqueue.m"
              mercury__psqueue__succeeded = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_97_100_106_117_115_116_95_116_118_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mercury__psqueue__TypeInfo_for_K_23, mercury__psqueue__AdjustFunc_5, mercury__psqueue__SearchKey_6, mercury__psqueue__V_19_19, &mercury__psqueue__UpdatedWinnerA_17);
            }
#line 917 "psqueue.m"
            if (mercury__psqueue__succeeded)
#line 917 "psqueue.m"
              {
#line 918 "psqueue.m"
                {
#line 918 "psqueue.m"
                  mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_109_98_105_110_101_95_119_105_110_110_101_114_115_95_118_105_97_95_116_111_117_114_110_97_109_101_110_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__psqueue__TypeInfo_for_K_23, mercury__psqueue__UpdatedWinnerA_17, mercury__psqueue__WinnerB_12, mercury__psqueue__Winner_8);
                }
#line 918 "psqueue.m"
                mercury__psqueue__succeeded = MR_TRUE;
#line 917 "psqueue.m"
              }
#line 917 "psqueue.m"
          }
#line 919 "psqueue.m"
        else
#line 921 "psqueue.m"
          {
#line 921 "psqueue.m"
            MR_Word mercury__psqueue__UpdatedWinnerB_18;
#line 921 "psqueue.m"
            MR_Word mercury__psqueue__V_20_20;

#line 921 "psqueue.m"
            {
#line 921 "psqueue.m"
              mercury__psqueue__V_20_20 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_103_101_116_95_116_111_117_114_110_97_109_101_110_116_95_118_105_101_119_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_1_f_0(mercury__psqueue__TypeInfo_for_K_23, mercury__psqueue__WinnerB_12);
            }
#line 920 "psqueue.m"
            {
#line 920 "psqueue.m"
              mercury__psqueue__succeeded = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_97_100_106_117_115_116_95_116_118_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mercury__psqueue__TypeInfo_for_K_23, mercury__psqueue__AdjustFunc_5, mercury__psqueue__SearchKey_6, mercury__psqueue__V_20_20, &mercury__psqueue__UpdatedWinnerB_18);
            }
#line 921 "psqueue.m"
            if (mercury__psqueue__succeeded)
#line 921 "psqueue.m"
              {
#line 922 "psqueue.m"
                {
#line 922 "psqueue.m"
                  mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_109_98_105_110_101_95_119_105_110_110_101_114_115_95_118_105_97_95_116_111_117_114_110_97_109_101_110_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__psqueue__TypeInfo_for_K_23, mercury__psqueue__WinnerA_11, mercury__psqueue__UpdatedWinnerB_18, mercury__psqueue__Winner_8);
                }
#line 922 "psqueue.m"
                mercury__psqueue__succeeded = MR_TRUE;
#line 921 "psqueue.m"
              }
#line 921 "psqueue.m"
          }
#line 913 "psqueue.m"
      }
#line 912 "psqueue.m"
    return mercury__psqueue__succeeded;
#line 912 "psqueue.m"
  }
#line 899 "psqueue.m"
}

#line 940 "psqueue.m"
MR_bool MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_116_118_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_3_p_0(
#line 940 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_18,
#line 940 "psqueue.m"
  MR_Word mercury__psqueue__TournamentView_4,
#line 940 "psqueue.m"
  MR_Box mercury__psqueue__SearchKey_5,
#line 940 "psqueue.m"
  MR_Integer * mercury__psqueue__MatchingPrio_6)
#line 940 "psqueue.m"
{
#line 951 "psqueue.m"
  while (MR_TRUE)
#line 951 "psqueue.m"
    {
#line 951 "psqueue.m"
      /* tailcall optimized into a loop */
#line 951 "psqueue.m"
      {
#line 951 "psqueue.m"
        MR_bool mercury__psqueue__succeeded;

#line 951 "psqueue.m"
        if (((MR_tag((MR_Word) mercury__psqueue__TournamentView_4)) == (MR_mktag((MR_Integer) 0))))
#line 945 "psqueue.m"
          {
#line 945 "psqueue.m"
            MR_Box mercury__psqueue__Key_8;

#line 945 "psqueue.m"
            *mercury__psqueue__MatchingPrio_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__psqueue__TournamentView_4, (MR_Integer) 0)));
#line 945 "psqueue.m"
            mercury__psqueue__Key_8 = (MR_hl_field(MR_mktag(0), mercury__psqueue__TournamentView_4, (MR_Integer) 1));
#line 946 "psqueue.m"
            {
#line 946 "psqueue.m"
              return mercury__psqueue__succeeded = mercury__builtin__unify_2_p_0(mercury__psqueue__TypeInfo_for_K_18, mercury__psqueue__Key_8, mercury__psqueue__SearchKey_5);
            }
#line 945 "psqueue.m"
          }
#line 951 "psqueue.m"
        else
#line 952 "psqueue.m"
          {
#line 952 "psqueue.m"
            MR_Word mercury__psqueue__WinnerA_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__TournamentView_4, (MR_Integer) 0)));
#line 952 "psqueue.m"
            MR_Word mercury__psqueue__WinnerB_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__TournamentView_4, (MR_Integer) 1)));
#line 952 "psqueue.m"
            MR_Box mercury__psqueue__MaxKeyA_14 = (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_9, (MR_Integer) 3));
#line 953 "psqueue.m"
            MR_Integer mercury__psqueue__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_9, (MR_Integer) 0)));
#line 953 "psqueue.m"
            MR_Box mercury__psqueue__V_12_12 = (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_9, (MR_Integer) 1));
#line 953 "psqueue.m"
            MR_Word mercury__psqueue__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_9, (MR_Integer) 2)));
#line 1042 "psqueue.m"
            MR_Word mercury__psqueue__CMP_21;

#line 1043 "psqueue.m"
            {
#line 1043 "psqueue.m"
              mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_18, &mercury__psqueue__CMP_21, mercury__psqueue__SearchKey_5, mercury__psqueue__MaxKeyA_14);
            }
#line 1045 "psqueue.m"
            if ((mercury__psqueue__CMP_21 == (MR_Integer) 1))
#line 1044 "psqueue.m"
              mercury__psqueue__succeeded = MR_TRUE;
#line 1045 "psqueue.m"
            else
#line 1045 "psqueue.m"
              if ((mercury__psqueue__CMP_21 == (MR_Integer) 0))
#line 1045 "psqueue.m"
                mercury__psqueue__succeeded = MR_TRUE;
#line 1045 "psqueue.m"
              else
#line 1045 "psqueue.m"
                mercury__psqueue__succeeded = MR_FALSE;
#line 956 "psqueue.m"
            if (mercury__psqueue__succeeded)
#line 955 "psqueue.m"
              {
#line 955 "psqueue.m"
                MR_Word mercury__psqueue__V_15_15;

#line 955 "psqueue.m"
                {
#line 955 "psqueue.m"
                  mercury__psqueue__V_15_15 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_103_101_116_95_116_111_117_114_110_97_109_101_110_116_95_118_105_101_119_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_1_f_0(mercury__psqueue__TypeInfo_for_K_18, mercury__psqueue__WinnerA_9);
                }
#line 955 "psqueue.m"
                /* direct tailcall eliminated */
#line 955 "psqueue.m"
                {
#line 955 "psqueue.m"
                  MR_Word mercury__psqueue__TournamentView__tmp_copy_4 = mercury__psqueue__V_15_15;

#line 955 "psqueue.m"
                  mercury__psqueue__TournamentView_4 = mercury__psqueue__TournamentView__tmp_copy_4;
#line 955 "psqueue.m"
                }
#line 955 "psqueue.m"
                continue;
#line 955 "psqueue.m"
              }
#line 956 "psqueue.m"
            else
#line 957 "psqueue.m"
              {
#line 957 "psqueue.m"
                MR_Word mercury__psqueue__V_16_16;

#line 957 "psqueue.m"
                {
#line 957 "psqueue.m"
                  mercury__psqueue__V_16_16 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_103_101_116_95_116_111_117_114_110_97_109_101_110_116_95_118_105_101_119_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_1_f_0(mercury__psqueue__TypeInfo_for_K_18, mercury__psqueue__WinnerB_10);
                }
#line 957 "psqueue.m"
                /* direct tailcall eliminated */
#line 957 "psqueue.m"
                {
#line 957 "psqueue.m"
                  MR_Word mercury__psqueue__TournamentView__tmp_copy_4 = mercury__psqueue__V_16_16;

#line 957 "psqueue.m"
                  mercury__psqueue__TournamentView_4 = mercury__psqueue__TournamentView__tmp_copy_4;
#line 957 "psqueue.m"
                }
#line 957 "psqueue.m"
                continue;
#line 957 "psqueue.m"
              }
#line 952 "psqueue.m"
          }
#line 951 "psqueue.m"
        return mercury__psqueue__succeeded;
#line 951 "psqueue.m"
      }
#line 951 "psqueue.m"
      break;
#line 951 "psqueue.m"
    }
#line 940 "psqueue.m"
}

#line 986 "psqueue.m"
void MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_97_116_95_109_111_115_116_95_105_110_95_119_105_110_110_101_114_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_3_p_0(
#line 986 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_21,
#line 986 "psqueue.m"
  MR_Word mercury__psqueue__Winner_4,
#line 986 "psqueue.m"
  MR_Integer mercury__psqueue__MaxPrio_5,
#line 986 "psqueue.m"
  MR_Word * mercury__psqueue__Cord_6)
#line 986 "psqueue.m"
{
#line 990 "psqueue.m"
  {
#line 990 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 990 "psqueue.m"
    MR_Word mercury__psqueue__TypeInfo_for_P_20 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 990 "psqueue.m"
    MR_Integer mercury__psqueue__WinnerPrio_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__psqueue__Winner_4, (MR_Integer) 0)));
#line 990 "psqueue.m"
    MR_Word mercury__psqueue__CMP_11;
#line 991 "psqueue.m"
    MR_Box mercury__psqueue__V_8_8 = (MR_hl_field(MR_mktag(0), mercury__psqueue__Winner_4, (MR_Integer) 1));
#line 991 "psqueue.m"
    MR_Word mercury__psqueue__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__psqueue__Winner_4, (MR_Integer) 2)));
#line 991 "psqueue.m"
    MR_Box mercury__psqueue__V_10_10 = (MR_hl_field(MR_mktag(0), mercury__psqueue__Winner_4, (MR_Integer) 3));

#line 66 "private_builtin.opt"
    mercury__psqueue__succeeded = (mercury__psqueue__WinnerPrio_7 < mercury__psqueue__MaxPrio_5);
#line 69 "private_builtin.opt"
    if (mercury__psqueue__succeeded)
#line 68 "private_builtin.opt"
      mercury__psqueue__CMP_11 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
    else
#line 74 "private_builtin.opt"
      {
#line 71 "private_builtin.opt"
        mercury__psqueue__succeeded = (mercury__psqueue__WinnerPrio_7 == mercury__psqueue__MaxPrio_5);
#line 74 "private_builtin.opt"
        if (mercury__psqueue__succeeded)
#line 73 "private_builtin.opt"
          mercury__psqueue__CMP_11 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
        else
#line 75 "private_builtin.opt"
          mercury__psqueue__CMP_11 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
      }
#line 996 "psqueue.m"
    if ((mercury__psqueue__CMP_11 == (MR_Integer) 2))
#line 61 "cord.opt"
      *mercury__psqueue__Cord_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 996 "psqueue.m"
    else
#line 999 "psqueue.m"
      {
#line 999 "psqueue.m"
        MR_Word mercury__psqueue__TournamentView_12;

#line 1000 "psqueue.m"
        {
#line 1000 "psqueue.m"
          mercury__psqueue__TournamentView_12 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_103_101_116_95_116_111_117_114_110_97_109_101_110_116_95_118_105_101_119_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_1_f_0(mercury__psqueue__TypeInfo_for_K_21, mercury__psqueue__Winner_4);
        }
#line 1004 "psqueue.m"
        if (((MR_tag((MR_Word) mercury__psqueue__TournamentView_12)) == (MR_mktag((MR_Integer) 0))))
#line 1002 "psqueue.m"
          {
#line 1002 "psqueue.m"
            MR_Integer mercury__psqueue__SinglePrio_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__psqueue__TournamentView_12, (MR_Integer) 0)));
#line 1002 "psqueue.m"
            MR_Box mercury__psqueue__SingleKey_14 = (MR_hl_field(MR_mktag(0), mercury__psqueue__TournamentView_12, (MR_Integer) 1));
#line 1002 "psqueue.m"
            MR_Word mercury__psqueue__V_19_19;
#line 1002 "psqueue.m"
            MR_Word mercury__psqueue__V_4_32;

#line 1003 "psqueue.m"
            {
#line 1003 "psqueue.m"
              mercury__psqueue__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1003 "psqueue.m"
              MR_hl_field(MR_mktag(0), mercury__psqueue__V_19_19, 0) = ((MR_Box) (mercury__psqueue__SinglePrio_13));
#line 1003 "psqueue.m"
              MR_hl_field(MR_mktag(0), mercury__psqueue__V_19_19, 1) = mercury__psqueue__SingleKey_14;
#line 1003 "psqueue.m"
            }
#line 65 "cord.opt"
            {
#line 65 "cord.opt"
              mercury__psqueue__V_4_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 65 "cord.opt"
              MR_hl_field(MR_mktag(0), mercury__psqueue__V_4_32, 0) = ((MR_Box) (mercury__psqueue__V_19_19));
#line 65 "cord.opt"
            }
#line 64 "cord.opt"
            {
#line 64 "cord.opt"
              MR_Word base;
#line 64 "cord.opt"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 64 "cord.opt"
              *mercury__psqueue__Cord_6 = base;
#line 64 "cord.opt"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__psqueue__V_4_32));
#line 64 "cord.opt"
            }
#line 1002 "psqueue.m"
          }
#line 1004 "psqueue.m"
        else
#line 1005 "psqueue.m"
          {
#line 1005 "psqueue.m"
            MR_Word mercury__psqueue__TypeCtorInfo_26_26;
#line 1005 "psqueue.m"
            MR_Word mercury__psqueue__TypeInfo_27_27;
#line 1005 "psqueue.m"
            MR_Word mercury__psqueue__WinnerA_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__TournamentView_12, (MR_Integer) 0)));
#line 1005 "psqueue.m"
            MR_Word mercury__psqueue__WinnerB_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__TournamentView_12, (MR_Integer) 1)));
#line 1005 "psqueue.m"
            MR_Word mercury__psqueue__CordA_17;
#line 1005 "psqueue.m"
            MR_Word mercury__psqueue__CordB_18;
#line 1008 "psqueue.m"
            MR_Word mercury__psqueue__conv0_Cord_6;

#line 1006 "psqueue.m"
            {
#line 1006 "psqueue.m"
              mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_97_116_95_109_111_115_116_95_105_110_95_119_105_110_110_101_114_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__psqueue__TypeInfo_for_K_21, mercury__psqueue__WinnerA_15, mercury__psqueue__MaxPrio_5, &mercury__psqueue__CordA_17);
            }
#line 1007 "psqueue.m"
            {
#line 1007 "psqueue.m"
              mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_97_116_95_109_111_115_116_95_105_110_95_119_105_110_110_101_114_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__psqueue__TypeInfo_for_K_21, mercury__psqueue__WinnerB_16, mercury__psqueue__MaxPrio_5, &mercury__psqueue__CordB_18);
            }
#line 7059 "psqueue.c"
            mercury__psqueue__TypeCtorInfo_26_26 = (MR_Word) &mercury__pair__pair__type_ctor_info_pair_2;
#line 7061 "psqueue.c"
            {
#line 7063 "psqueue.c"
              mercury__psqueue__TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7065 "psqueue.c"
              MR_hl_field(MR_mktag(0), mercury__psqueue__TypeInfo_27_27, 0) = ((MR_Box) (mercury__psqueue__TypeCtorInfo_26_26));
#line 7067 "psqueue.c"
              MR_hl_field(MR_mktag(0), mercury__psqueue__TypeInfo_27_27, 1) = ((MR_Box) (mercury__psqueue__TypeInfo_for_P_20));
#line 7069 "psqueue.c"
              MR_hl_field(MR_mktag(0), mercury__psqueue__TypeInfo_27_27, 2) = ((MR_Box) (mercury__psqueue__TypeInfo_for_K_21));
#line 7071 "psqueue.c"
            }
#line 1008 "psqueue.m"
            {
#line 1008 "psqueue.m"
              mercury__psqueue__conv0_Cord_6 = mercury__cord__f_43_43_2_f_0(mercury__psqueue__TypeInfo_27_27, (MR_Word) mercury__psqueue__CordA_17, (MR_Word) mercury__psqueue__CordB_18);
            }
#line 1008 "psqueue.m"
            *mercury__psqueue__Cord_6 = (MR_Word) mercury__psqueue__conv0_Cord_6;
#line 1005 "psqueue.m"
          }
#line 999 "psqueue.m"
      }
#line 990 "psqueue.m"
  }
#line 986 "psqueue.m"
}

#line 1039 "psqueue.m"
MR_bool MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_101_113_95_95_91_86_32_61_32_105_110_116_93_95_48_95_49_2_p_0(
#line 1039 "psqueue.m"
  MR_Integer mercury__psqueue__ValLeft_3,
#line 1039 "psqueue.m"
  MR_Integer mercury__psqueue__ValRight_4)
#line 1039 "psqueue.m"
{
#line 1042 "psqueue.m"
  {
#line 1042 "psqueue.m"
    MR_bool mercury__psqueue__succeeded = (mercury__psqueue__ValLeft_3 < mercury__psqueue__ValRight_4);
#line 1042 "psqueue.m"
    MR_Word mercury__psqueue__CMP_5;

#line 69 "private_builtin.opt"
    if (mercury__psqueue__succeeded)
#line 68 "private_builtin.opt"
      mercury__psqueue__CMP_5 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
    else
#line 74 "private_builtin.opt"
      {
#line 71 "private_builtin.opt"
        mercury__psqueue__succeeded = (mercury__psqueue__ValLeft_3 == mercury__psqueue__ValRight_4);
#line 74 "private_builtin.opt"
        if (mercury__psqueue__succeeded)
#line 73 "private_builtin.opt"
          mercury__psqueue__CMP_5 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
        else
#line 75 "private_builtin.opt"
          mercury__psqueue__CMP_5 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
      }
#line 1045 "psqueue.m"
    if ((mercury__psqueue__CMP_5 == (MR_Integer) 1))
#line 1044 "psqueue.m"
      mercury__psqueue__succeeded = MR_TRUE;
#line 1045 "psqueue.m"
    else
#line 1045 "psqueue.m"
      if ((mercury__psqueue__CMP_5 == (MR_Integer) 0))
#line 1045 "psqueue.m"
        mercury__psqueue__succeeded = MR_TRUE;
#line 1045 "psqueue.m"
      else
#line 1045 "psqueue.m"
        mercury__psqueue__succeeded = MR_FALSE;
#line 1042 "psqueue.m"
    return mercury__psqueue__succeeded;
#line 1042 "psqueue.m"
  }
#line 1039 "psqueue.m"
}

#line 269 "psqueue.m"
void MR_CALL 
mercury__psqueue____Compare____winner_2_0(
#line 269 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_17,
#line 269 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_18,
#line 269 "psqueue.m"
  MR_Word * mercury__psqueue__HeadVar__1_1,
#line 269 "psqueue.m"
  MR_Word mercury__psqueue__HeadVar__2_2,
#line 269 "psqueue.m"
  MR_Word mercury__psqueue__HeadVar__3_3)
#line 269 "psqueue.m"
{
#line 269 "psqueue.m"
  {
#line 269 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 269 "psqueue.m"
    MR_Integer mercury__psqueue__CastX_15 = (MR_Integer) mercury__psqueue__HeadVar__2_2;
#line 269 "psqueue.m"
    MR_Integer mercury__psqueue__CastY_16 = (MR_Integer) mercury__psqueue__HeadVar__3_3;

#line 269 "psqueue.m"
    mercury__psqueue__succeeded = (mercury__psqueue__CastX_15 == mercury__psqueue__CastY_16);
#line 269 "psqueue.m"
    if (mercury__psqueue__succeeded)
#line 7174 "psqueue.c"
      *mercury__psqueue__HeadVar__1_1 = (MR_Integer) 0;
#line 269 "psqueue.m"
    else
#line 269 "psqueue.m"
      {
#line 269 "psqueue.m"
        MR_Box mercury__psqueue__V_4_4 = (MR_hl_field(MR_mktag(0), mercury__psqueue__HeadVar__2_2, (MR_Integer) 0));
#line 269 "psqueue.m"
        MR_Box mercury__psqueue__V_5_5 = (MR_hl_field(MR_mktag(0), mercury__psqueue__HeadVar__2_2, (MR_Integer) 1));
#line 269 "psqueue.m"
        MR_Word mercury__psqueue__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__psqueue__HeadVar__2_2, (MR_Integer) 2)));
#line 269 "psqueue.m"
        MR_Box mercury__psqueue__V_7_7 = (MR_hl_field(MR_mktag(0), mercury__psqueue__HeadVar__2_2, (MR_Integer) 3));
#line 269 "psqueue.m"
        MR_Box mercury__psqueue__V_8_8 = (MR_hl_field(MR_mktag(0), mercury__psqueue__HeadVar__3_3, (MR_Integer) 0));
#line 269 "psqueue.m"
        MR_Box mercury__psqueue__V_9_9 = (MR_hl_field(MR_mktag(0), mercury__psqueue__HeadVar__3_3, (MR_Integer) 1));
#line 269 "psqueue.m"
        MR_Word mercury__psqueue__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__psqueue__HeadVar__3_3, (MR_Integer) 2)));
#line 269 "psqueue.m"
        MR_Box mercury__psqueue__V_11_11 = (MR_hl_field(MR_mktag(0), mercury__psqueue__HeadVar__3_3, (MR_Integer) 3));
#line 269 "psqueue.m"
        MR_Word mercury__psqueue__V_12_12;

#line 269 "psqueue.m"
        {
#line 269 "psqueue.m"
          mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_P_17, &mercury__psqueue__V_12_12, mercury__psqueue__V_4_4, mercury__psqueue__V_8_8);
        }
#line 7204 "psqueue.c"
        mercury__psqueue__succeeded = (mercury__psqueue__V_12_12 == (MR_Integer) 0);
#line 269 "psqueue.m"
        mercury__psqueue__succeeded = !(mercury__psqueue__succeeded);
#line 269 "psqueue.m"
        if (mercury__psqueue__succeeded)
#line 269 "psqueue.m"
          *mercury__psqueue__HeadVar__1_1 = mercury__psqueue__V_12_12;
#line 269 "psqueue.m"
        else
#line 269 "psqueue.m"
          {
#line 269 "psqueue.m"
            MR_Word mercury__psqueue__V_13_13;

#line 269 "psqueue.m"
            {
#line 269 "psqueue.m"
              mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_18, &mercury__psqueue__V_13_13, mercury__psqueue__V_5_5, mercury__psqueue__V_9_9);
            }
#line 7224 "psqueue.c"
            mercury__psqueue__succeeded = (mercury__psqueue__V_13_13 == (MR_Integer) 0);
#line 269 "psqueue.m"
            mercury__psqueue__succeeded = !(mercury__psqueue__succeeded);
#line 269 "psqueue.m"
            if (mercury__psqueue__succeeded)
#line 269 "psqueue.m"
              *mercury__psqueue__HeadVar__1_1 = mercury__psqueue__V_13_13;
#line 269 "psqueue.m"
            else
#line 269 "psqueue.m"
              {
#line 269 "psqueue.m"
                MR_Word mercury__psqueue__V_14_14;

#line 269 "psqueue.m"
                {
#line 269 "psqueue.m"
                  mercury__psqueue____Compare____loser_tree_2_0(mercury__psqueue__TypeInfo_for_P_17, mercury__psqueue__TypeInfo_for_K_18, &mercury__psqueue__V_14_14, mercury__psqueue__V_6_6, mercury__psqueue__V_10_10);
                }
#line 7244 "psqueue.c"
                mercury__psqueue__succeeded = (mercury__psqueue__V_14_14 == (MR_Integer) 0);
#line 269 "psqueue.m"
                mercury__psqueue__succeeded = !(mercury__psqueue__succeeded);
#line 269 "psqueue.m"
                if (mercury__psqueue__succeeded)
#line 269 "psqueue.m"
                  *mercury__psqueue__HeadVar__1_1 = mercury__psqueue__V_14_14;
#line 269 "psqueue.m"
                else
#line 269 "psqueue.m"
                  {
#line 269 "psqueue.m"
                    mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_18, mercury__psqueue__HeadVar__1_1, mercury__psqueue__V_7_7, mercury__psqueue__V_11_11);
#line 269 "psqueue.m"
                    return;
                  }
#line 269 "psqueue.m"
              }
#line 269 "psqueue.m"
          }
#line 269 "psqueue.m"
      }
#line 269 "psqueue.m"
  }
#line 269 "psqueue.m"
}

#line 269 "psqueue.m"
MR_bool MR_CALL 
mercury__psqueue____Unify____winner_2_0(
#line 269 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_13,
#line 269 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_14,
#line 269 "psqueue.m"
  MR_Word mercury__psqueue__HeadVar__1_1,
#line 269 "psqueue.m"
  MR_Word mercury__psqueue__HeadVar__2_2)
#line 269 "psqueue.m"
{
#line 269 "psqueue.m"
  {
#line 269 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 269 "psqueue.m"
    MR_Integer mercury__psqueue__CastX_11 = (MR_Integer) mercury__psqueue__HeadVar__1_1;
#line 269 "psqueue.m"
    MR_Integer mercury__psqueue__CastY_12 = (MR_Integer) mercury__psqueue__HeadVar__2_2;

#line 269 "psqueue.m"
    mercury__psqueue__succeeded = (mercury__psqueue__CastX_11 == mercury__psqueue__CastY_12);
#line 269 "psqueue.m"
    if (mercury__psqueue__succeeded)
#line 269 "psqueue.m"
      mercury__psqueue__succeeded = MR_TRUE;
#line 269 "psqueue.m"
    else
#line 269 "psqueue.m"
      {
#line 269 "psqueue.m"
        MR_Box mercury__psqueue__V_3_3 = (MR_hl_field(MR_mktag(0), mercury__psqueue__HeadVar__1_1, (MR_Integer) 0));
#line 269 "psqueue.m"
        MR_Box mercury__psqueue__V_4_4 = (MR_hl_field(MR_mktag(0), mercury__psqueue__HeadVar__1_1, (MR_Integer) 1));
#line 269 "psqueue.m"
        MR_Word mercury__psqueue__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__psqueue__HeadVar__1_1, (MR_Integer) 2)));
#line 269 "psqueue.m"
        MR_Box mercury__psqueue__V_6_6 = (MR_hl_field(MR_mktag(0), mercury__psqueue__HeadVar__1_1, (MR_Integer) 3));
#line 269 "psqueue.m"
        MR_Box mercury__psqueue__V_7_7 = (MR_hl_field(MR_mktag(0), mercury__psqueue__HeadVar__2_2, (MR_Integer) 0));
#line 269 "psqueue.m"
        MR_Box mercury__psqueue__V_8_8 = (MR_hl_field(MR_mktag(0), mercury__psqueue__HeadVar__2_2, (MR_Integer) 1));
#line 269 "psqueue.m"
        MR_Word mercury__psqueue__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__psqueue__HeadVar__2_2, (MR_Integer) 2)));
#line 269 "psqueue.m"
        MR_Box mercury__psqueue__V_10_10 = (MR_hl_field(MR_mktag(0), mercury__psqueue__HeadVar__2_2, (MR_Integer) 3));

#line 7321 "psqueue.c"
        {
#line 7323 "psqueue.c"
          mercury__psqueue__succeeded = mercury__builtin__unify_2_p_0(mercury__psqueue__TypeInfo_for_P_13, mercury__psqueue__V_3_3, mercury__psqueue__V_7_7);
        }
#line 269 "psqueue.m"
        if (mercury__psqueue__succeeded)
#line 269 "psqueue.m"
          {
#line 7330 "psqueue.c"
            {
#line 7332 "psqueue.c"
              mercury__psqueue__succeeded = mercury__builtin__unify_2_p_0(mercury__psqueue__TypeInfo_for_K_14, mercury__psqueue__V_4_4, mercury__psqueue__V_8_8);
            }
#line 269 "psqueue.m"
            if (mercury__psqueue__succeeded)
#line 269 "psqueue.m"
              {
#line 7339 "psqueue.c"
                {
#line 7341 "psqueue.c"
                  mercury__psqueue__succeeded = mercury__psqueue____Unify____loser_tree_2_0(mercury__psqueue__TypeInfo_for_P_13, mercury__psqueue__TypeInfo_for_K_14, mercury__psqueue__V_5_5, mercury__psqueue__V_9_9);
                }
#line 269 "psqueue.m"
                if (mercury__psqueue__succeeded)
#line 7346 "psqueue.c"
                  {
#line 7348 "psqueue.c"
                    return mercury__psqueue__succeeded = mercury__builtin__unify_2_p_0(mercury__psqueue__TypeInfo_for_K_14, mercury__psqueue__V_6_6, mercury__psqueue__V_10_10);
                  }
#line 269 "psqueue.m"
              }
#line 269 "psqueue.m"
          }
#line 269 "psqueue.m"
      }
#line 269 "psqueue.m"
    return mercury__psqueue__succeeded;
#line 269 "psqueue.m"
  }
#line 269 "psqueue.m"
}

#line 349 "psqueue.m"
void MR_CALL 
mercury__psqueue____Compare____tournament_view_2_0(
#line 349 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_24,
#line 349 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_25,
#line 349 "psqueue.m"
  MR_Word * mercury__psqueue__HeadVar__1_1,
#line 349 "psqueue.m"
  MR_Word mercury__psqueue__HeadVar__2_2,
#line 349 "psqueue.m"
  MR_Word mercury__psqueue__HeadVar__3_3)
#line 349 "psqueue.m"
{
#line 349 "psqueue.m"
  {
#line 349 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 349 "psqueue.m"
    MR_Integer mercury__psqueue__CastX_22 = (MR_Integer) mercury__psqueue__HeadVar__2_2;
#line 349 "psqueue.m"
    MR_Integer mercury__psqueue__CastY_23 = (MR_Integer) mercury__psqueue__HeadVar__3_3;

#line 349 "psqueue.m"
    mercury__psqueue__succeeded = (mercury__psqueue__CastX_22 == mercury__psqueue__CastY_23);
#line 349 "psqueue.m"
    if (mercury__psqueue__succeeded)
#line 7392 "psqueue.c"
      *mercury__psqueue__HeadVar__1_1 = (MR_Integer) 0;
#line 349 "psqueue.m"
    else
#line 349 "psqueue.m"
      if (((MR_tag((MR_Word) mercury__psqueue__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 349 "psqueue.m"
        {
#line 349 "psqueue.m"
          MR_Box mercury__psqueue__V_30_30 = (MR_hl_field(MR_mktag(0), mercury__psqueue__HeadVar__2_2, (MR_Integer) 1));
#line 349 "psqueue.m"
          MR_Box mercury__psqueue__V_31_31 = (MR_hl_field(MR_mktag(0), mercury__psqueue__HeadVar__2_2, (MR_Integer) 0));

#line 349 "psqueue.m"
          if (((MR_tag((MR_Word) mercury__psqueue__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 349 "psqueue.m"
            {
#line 349 "psqueue.m"
              MR_Box mercury__psqueue__V_6_6 = (MR_hl_field(MR_mktag(0), mercury__psqueue__HeadVar__3_3, (MR_Integer) 0));
#line 349 "psqueue.m"
              MR_Box mercury__psqueue__V_7_7 = (MR_hl_field(MR_mktag(0), mercury__psqueue__HeadVar__3_3, (MR_Integer) 1));
#line 349 "psqueue.m"
              MR_Word mercury__psqueue__V_8_8;

#line 349 "psqueue.m"
              {
#line 349 "psqueue.m"
                mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_P_24, &mercury__psqueue__V_8_8, mercury__psqueue__V_31_31, mercury__psqueue__V_6_6);
              }
#line 7421 "psqueue.c"
              mercury__psqueue__succeeded = (mercury__psqueue__V_8_8 == (MR_Integer) 0);
#line 349 "psqueue.m"
              mercury__psqueue__succeeded = !(mercury__psqueue__succeeded);
#line 349 "psqueue.m"
              if (mercury__psqueue__succeeded)
#line 349 "psqueue.m"
                *mercury__psqueue__HeadVar__1_1 = mercury__psqueue__V_8_8;
#line 349 "psqueue.m"
              else
#line 349 "psqueue.m"
                {
#line 349 "psqueue.m"
                  mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_25, mercury__psqueue__HeadVar__1_1, mercury__psqueue__V_30_30, mercury__psqueue__V_7_7);
#line 349 "psqueue.m"
                  return;
                }
#line 349 "psqueue.m"
            }
#line 349 "psqueue.m"
          else
#line 7442 "psqueue.c"
            *mercury__psqueue__HeadVar__1_1 = (MR_Integer) 1;
#line 349 "psqueue.m"
        }
#line 349 "psqueue.m"
      else
#line 349 "psqueue.m"
        {
#line 349 "psqueue.m"
          MR_Word mercury__psqueue__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__2_2, (MR_Integer) 1)));
#line 349 "psqueue.m"
          MR_Word mercury__psqueue__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__2_2, (MR_Integer) 0)));

#line 349 "psqueue.m"
          if (((MR_tag((MR_Word) mercury__psqueue__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 7457 "psqueue.c"
            *mercury__psqueue__HeadVar__1_1 = (MR_Integer) 2;
#line 349 "psqueue.m"
          else
#line 349 "psqueue.m"
            {
#line 349 "psqueue.m"
              MR_Word mercury__psqueue__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__3_3, (MR_Integer) 0)));
#line 349 "psqueue.m"
              MR_Word mercury__psqueue__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__3_3, (MR_Integer) 1)));
#line 349 "psqueue.m"
              MR_Word mercury__psqueue__V_21_21;

#line 349 "psqueue.m"
              {
#line 349 "psqueue.m"
                mercury__psqueue____Compare____winner_2_0(mercury__psqueue__TypeInfo_for_P_24, mercury__psqueue__TypeInfo_for_K_25, &mercury__psqueue__V_21_21, mercury__psqueue__V_33_33, mercury__psqueue__V_19_19);
              }
#line 7475 "psqueue.c"
              mercury__psqueue__succeeded = (mercury__psqueue__V_21_21 == (MR_Integer) 0);
#line 349 "psqueue.m"
              mercury__psqueue__succeeded = !(mercury__psqueue__succeeded);
#line 349 "psqueue.m"
              if (mercury__psqueue__succeeded)
#line 349 "psqueue.m"
                *mercury__psqueue__HeadVar__1_1 = mercury__psqueue__V_21_21;
#line 349 "psqueue.m"
              else
#line 349 "psqueue.m"
                {
#line 349 "psqueue.m"
                  mercury__psqueue____Compare____winner_2_0(mercury__psqueue__TypeInfo_for_P_24, mercury__psqueue__TypeInfo_for_K_25, mercury__psqueue__HeadVar__1_1, mercury__psqueue__V_32_32, mercury__psqueue__V_20_20);
#line 349 "psqueue.m"
                  return;
                }
#line 349 "psqueue.m"
            }
#line 349 "psqueue.m"
        }
#line 349 "psqueue.m"
  }
#line 349 "psqueue.m"
}

#line 349 "psqueue.m"
MR_bool MR_CALL 
mercury__psqueue____Unify____tournament_view_2_0(
#line 349 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_13,
#line 349 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_14,
#line 349 "psqueue.m"
  MR_Word mercury__psqueue__HeadVar__1_1,
#line 349 "psqueue.m"
  MR_Word mercury__psqueue__HeadVar__2_2)
#line 349 "psqueue.m"
{
#line 349 "psqueue.m"
  {
#line 349 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 349 "psqueue.m"
    MR_Integer mercury__psqueue__CastX_11 = (MR_Integer) mercury__psqueue__HeadVar__1_1;
#line 349 "psqueue.m"
    MR_Integer mercury__psqueue__CastY_12 = (MR_Integer) mercury__psqueue__HeadVar__2_2;

#line 349 "psqueue.m"
    mercury__psqueue__succeeded = (mercury__psqueue__CastX_11 == mercury__psqueue__CastY_12);
#line 349 "psqueue.m"
    if (mercury__psqueue__succeeded)
#line 349 "psqueue.m"
      mercury__psqueue__succeeded = MR_TRUE;
#line 349 "psqueue.m"
    else
#line 349 "psqueue.m"
      if (((MR_tag((MR_Word) mercury__psqueue__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 349 "psqueue.m"
        {
#line 349 "psqueue.m"
          MR_Box mercury__psqueue__V_3_3 = (MR_hl_field(MR_mktag(0), mercury__psqueue__HeadVar__1_1, (MR_Integer) 0));
#line 349 "psqueue.m"
          MR_Box mercury__psqueue__V_4_4 = (MR_hl_field(MR_mktag(0), mercury__psqueue__HeadVar__1_1, (MR_Integer) 1));
#line 349 "psqueue.m"
          MR_Box mercury__psqueue__V_5_5;
#line 349 "psqueue.m"
          MR_Box mercury__psqueue__V_6_6;

#line 349 "psqueue.m"
          mercury__psqueue__succeeded = ((MR_tag((MR_Word) mercury__psqueue__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 349 "psqueue.m"
          if (mercury__psqueue__succeeded)
#line 349 "psqueue.m"
            {
#line 349 "psqueue.m"
              mercury__psqueue__V_5_5 = (MR_hl_field(MR_mktag(0), mercury__psqueue__HeadVar__2_2, (MR_Integer) 0));
#line 349 "psqueue.m"
              mercury__psqueue__V_6_6 = (MR_hl_field(MR_mktag(0), mercury__psqueue__HeadVar__2_2, (MR_Integer) 1));
#line 7554 "psqueue.c"
              {
#line 7556 "psqueue.c"
                mercury__psqueue__succeeded = mercury__builtin__unify_2_p_0(mercury__psqueue__TypeInfo_for_P_13, mercury__psqueue__V_3_3, mercury__psqueue__V_5_5);
              }
#line 349 "psqueue.m"
              if (mercury__psqueue__succeeded)
#line 7561 "psqueue.c"
                {
#line 7563 "psqueue.c"
                  return mercury__psqueue__succeeded = mercury__builtin__unify_2_p_0(mercury__psqueue__TypeInfo_for_K_14, mercury__psqueue__V_4_4, mercury__psqueue__V_6_6);
                }
#line 349 "psqueue.m"
            }
#line 349 "psqueue.m"
        }
#line 349 "psqueue.m"
      else
#line 349 "psqueue.m"
        {
#line 349 "psqueue.m"
          MR_Word mercury__psqueue__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__1_1, (MR_Integer) 0)));
#line 349 "psqueue.m"
          MR_Word mercury__psqueue__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__1_1, (MR_Integer) 1)));
#line 349 "psqueue.m"
          MR_Word mercury__psqueue__V_9_9;
#line 349 "psqueue.m"
          MR_Word mercury__psqueue__V_10_10;

#line 349 "psqueue.m"
          mercury__psqueue__succeeded = ((MR_tag((MR_Word) mercury__psqueue__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 349 "psqueue.m"
          if (mercury__psqueue__succeeded)
#line 349 "psqueue.m"
            {
#line 349 "psqueue.m"
              mercury__psqueue__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__2_2, (MR_Integer) 0)));
#line 349 "psqueue.m"
              mercury__psqueue__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__2_2, (MR_Integer) 1)));
#line 7593 "psqueue.c"
              {
#line 7595 "psqueue.c"
                mercury__psqueue__succeeded = mercury__psqueue____Unify____winner_2_0(mercury__psqueue__TypeInfo_for_P_13, mercury__psqueue__TypeInfo_for_K_14, mercury__psqueue__V_7_7, mercury__psqueue__V_9_9);
              }
#line 349 "psqueue.m"
              if (mercury__psqueue__succeeded)
#line 7600 "psqueue.c"
                {
#line 7602 "psqueue.c"
                  return mercury__psqueue__succeeded = mercury__psqueue____Unify____winner_2_0(mercury__psqueue__TypeInfo_for_P_13, mercury__psqueue__TypeInfo_for_K_14, mercury__psqueue__V_8_8, mercury__psqueue__V_10_10);
                }
#line 349 "psqueue.m"
            }
#line 349 "psqueue.m"
        }
#line 349 "psqueue.m"
    return mercury__psqueue__succeeded;
#line 349 "psqueue.m"
  }
#line 349 "psqueue.m"
}

#line 265 "psqueue.m"
void MR_CALL 
mercury__psqueue____Compare____psqueue_2_0(
#line 265 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_10,
#line 265 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_11,
#line 265 "psqueue.m"
  MR_Word * mercury__psqueue__HeadVar__1_1,
#line 265 "psqueue.m"
  MR_Word mercury__psqueue__HeadVar__2_2,
#line 265 "psqueue.m"
  MR_Word mercury__psqueue__HeadVar__3_3)
#line 265 "psqueue.m"
{
#line 265 "psqueue.m"
  {
#line 265 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 265 "psqueue.m"
    MR_Integer mercury__psqueue__CastX_8 = (MR_Integer) mercury__psqueue__HeadVar__2_2;
#line 265 "psqueue.m"
    MR_Integer mercury__psqueue__CastY_9 = (MR_Integer) mercury__psqueue__HeadVar__3_3;

#line 265 "psqueue.m"
    mercury__psqueue__succeeded = (mercury__psqueue__CastX_8 == mercury__psqueue__CastY_9);
#line 265 "psqueue.m"
    if (mercury__psqueue__succeeded)
#line 7644 "psqueue.c"
      *mercury__psqueue__HeadVar__1_1 = (MR_Integer) 0;
#line 265 "psqueue.m"
    else
#line 265 "psqueue.m"
      if ((mercury__psqueue__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 265 "psqueue.m"
        if ((mercury__psqueue__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 265 "psqueue.m"
          *mercury__psqueue__HeadVar__1_1 = (MR_Integer) 0;
#line 265 "psqueue.m"
        else
#line 7656 "psqueue.c"
          *mercury__psqueue__HeadVar__1_1 = (MR_Integer) 1;
#line 265 "psqueue.m"
      else
#line 265 "psqueue.m"
        {
#line 265 "psqueue.m"
          MR_Word mercury__psqueue__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__2_2, (MR_Integer) 0)));

#line 265 "psqueue.m"
          if ((mercury__psqueue__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 7667 "psqueue.c"
            *mercury__psqueue__HeadVar__1_1 = (MR_Integer) 2;
#line 265 "psqueue.m"
          else
#line 265 "psqueue.m"
            {
#line 265 "psqueue.m"
              MR_Word mercury__psqueue__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__3_3, (MR_Integer) 0)));

#line 265 "psqueue.m"
              {
#line 265 "psqueue.m"
                mercury__psqueue____Compare____winner_2_0(mercury__psqueue__TypeInfo_for_P_10, mercury__psqueue__TypeInfo_for_K_11, mercury__psqueue__HeadVar__1_1, mercury__psqueue__V_14_14, mercury__psqueue__V_7_7);
#line 265 "psqueue.m"
                return;
              }
#line 265 "psqueue.m"
            }
#line 265 "psqueue.m"
        }
#line 265 "psqueue.m"
  }
#line 265 "psqueue.m"
}

#line 265 "psqueue.m"
MR_bool MR_CALL 
mercury__psqueue____Unify____psqueue_2_0(
#line 265 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_9,
#line 265 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_10,
#line 265 "psqueue.m"
  MR_Word mercury__psqueue__HeadVar__1_1,
#line 265 "psqueue.m"
  MR_Word mercury__psqueue__HeadVar__2_2)
#line 265 "psqueue.m"
{
#line 265 "psqueue.m"
  {
#line 265 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 265 "psqueue.m"
    MR_Integer mercury__psqueue__CastX_7 = (MR_Integer) mercury__psqueue__HeadVar__1_1;
#line 265 "psqueue.m"
    MR_Integer mercury__psqueue__CastY_8 = (MR_Integer) mercury__psqueue__HeadVar__2_2;

#line 265 "psqueue.m"
    mercury__psqueue__succeeded = (mercury__psqueue__CastX_7 == mercury__psqueue__CastY_8);
#line 265 "psqueue.m"
    if (mercury__psqueue__succeeded)
#line 265 "psqueue.m"
      mercury__psqueue__succeeded = MR_TRUE;
#line 265 "psqueue.m"
    else
#line 265 "psqueue.m"
      if ((mercury__psqueue__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 265 "psqueue.m"
        {
#line 265 "psqueue.m"
          MR_Integer mercury__psqueue__CastX_3 = (MR_Integer) mercury__psqueue__HeadVar__1_1;
#line 265 "psqueue.m"
          MR_Integer mercury__psqueue__CastY_4 = (MR_Integer) mercury__psqueue__HeadVar__2_2;

#line 265 "psqueue.m"
          mercury__psqueue__succeeded = (mercury__psqueue__CastY_4 == mercury__psqueue__CastX_3);
#line 265 "psqueue.m"
        }
#line 265 "psqueue.m"
      else
#line 265 "psqueue.m"
        {
#line 265 "psqueue.m"
          MR_Word mercury__psqueue__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__1_1, (MR_Integer) 0)));
#line 265 "psqueue.m"
          MR_Word mercury__psqueue__V_6_6;

#line 265 "psqueue.m"
          mercury__psqueue__succeeded = ((MR_tag((MR_Word) mercury__psqueue__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 265 "psqueue.m"
          if (mercury__psqueue__succeeded)
#line 265 "psqueue.m"
            {
#line 265 "psqueue.m"
              mercury__psqueue__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__2_2, (MR_Integer) 0)));
#line 7752 "psqueue.c"
              {
#line 7754 "psqueue.c"
                return mercury__psqueue__succeeded = mercury__psqueue____Unify____winner_2_0(mercury__psqueue__TypeInfo_for_P_9, mercury__psqueue__TypeInfo_for_K_10, mercury__psqueue__V_5_5, mercury__psqueue__V_6_6);
              }
#line 265 "psqueue.m"
            }
#line 265 "psqueue.m"
        }
#line 265 "psqueue.m"
    return mercury__psqueue__succeeded;
#line 265 "psqueue.m"
  }
#line 265 "psqueue.m"
}

#line 291 "psqueue.m"
void MR_CALL 
mercury__psqueue____Compare____loser_tree_size_0_0(
#line 291 "psqueue.m"
  MR_Word * mercury__psqueue__HeadVar__1_1,
#line 291 "psqueue.m"
  MR_Integer mercury__psqueue__HeadVar__2_2,
#line 291 "psqueue.m"
  MR_Integer mercury__psqueue__HeadVar__3_3)
#line 291 "psqueue.m"
{
#line 291 "psqueue.m"
  {
#line 291 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 291 "psqueue.m"
    MR_Integer mercury__psqueue__Cast_HeadVar1_4 = mercury__psqueue__HeadVar__2_2;
#line 291 "psqueue.m"
    MR_Integer mercury__psqueue__Cast_HeadVar2_5 = mercury__psqueue__HeadVar__3_3;

#line 66 "private_builtin.opt"
    mercury__psqueue__succeeded = (mercury__psqueue__Cast_HeadVar1_4 < mercury__psqueue__Cast_HeadVar2_5);
#line 69 "private_builtin.opt"
    if (mercury__psqueue__succeeded)
#line 68 "private_builtin.opt"
      *mercury__psqueue__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
    else
#line 74 "private_builtin.opt"
      {
#line 71 "private_builtin.opt"
        mercury__psqueue__succeeded = (mercury__psqueue__Cast_HeadVar1_4 == mercury__psqueue__Cast_HeadVar2_5);
#line 74 "private_builtin.opt"
        if (mercury__psqueue__succeeded)
#line 73 "private_builtin.opt"
          *mercury__psqueue__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
        else
#line 75 "private_builtin.opt"
          *mercury__psqueue__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
      }
#line 291 "psqueue.m"
  }
#line 291 "psqueue.m"
}

#line 291 "psqueue.m"
MR_bool MR_CALL 
mercury__psqueue____Unify____loser_tree_size_0_0(
#line 291 "psqueue.m"
  MR_Integer mercury__psqueue__HeadVar__1_1,
#line 291 "psqueue.m"
  MR_Integer mercury__psqueue__HeadVar__2_2)
#line 291 "psqueue.m"
{
#line 291 "psqueue.m"
  {
#line 291 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 291 "psqueue.m"
    MR_Integer mercury__psqueue__Cast_HeadVar1_3 = mercury__psqueue__HeadVar__1_1;
#line 291 "psqueue.m"
    MR_Integer mercury__psqueue__Cast_HeadVar2_4 = mercury__psqueue__HeadVar__2_2;

#line 291 "psqueue.m"
    mercury__psqueue__succeeded = (mercury__psqueue__Cast_HeadVar1_3 == mercury__psqueue__Cast_HeadVar2_4);
#line 291 "psqueue.m"
    return mercury__psqueue__succeeded;
#line 291 "psqueue.m"
  }
#line 291 "psqueue.m"
}

#line 293 "psqueue.m"
void MR_CALL 
mercury__psqueue____Compare____loser_tree_2_0(
#line 293 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_35,
#line 293 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_36,
#line 293 "psqueue.m"
  MR_Word * mercury__psqueue__HeadVar__1_1,
#line 293 "psqueue.m"
  MR_Word mercury__psqueue__HeadVar__2_2,
#line 293 "psqueue.m"
  MR_Word mercury__psqueue__HeadVar__3_3)
#line 293 "psqueue.m"
{
#line 293 "psqueue.m"
  while (MR_TRUE)
#line 293 "psqueue.m"
    {
#line 293 "psqueue.m"
      /* tailcall optimized into a loop */
#line 293 "psqueue.m"
      {
#line 293 "psqueue.m"
        MR_bool mercury__psqueue__succeeded;
#line 293 "psqueue.m"
        MR_Integer mercury__psqueue__CastX_33 = (MR_Integer) mercury__psqueue__HeadVar__2_2;
#line 293 "psqueue.m"
        MR_Integer mercury__psqueue__CastY_34 = (MR_Integer) mercury__psqueue__HeadVar__3_3;

#line 293 "psqueue.m"
        mercury__psqueue__succeeded = (mercury__psqueue__CastX_33 == mercury__psqueue__CastY_34);
#line 293 "psqueue.m"
        if (mercury__psqueue__succeeded)
#line 7876 "psqueue.c"
          *mercury__psqueue__HeadVar__1_1 = (MR_Integer) 0;
#line 293 "psqueue.m"
        else
#line 293 "psqueue.m"
          if ((mercury__psqueue__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 293 "psqueue.m"
            if ((mercury__psqueue__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 293 "psqueue.m"
              *mercury__psqueue__HeadVar__1_1 = (MR_Integer) 0;
#line 293 "psqueue.m"
            else
#line 7888 "psqueue.c"
              *mercury__psqueue__HeadVar__1_1 = (MR_Integer) 1;
#line 293 "psqueue.m"
          else
#line 293 "psqueue.m"
            {
#line 293 "psqueue.m"
              MR_Word mercury__psqueue__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__2_2, (MR_Integer) 5)));
#line 293 "psqueue.m"
              MR_Box mercury__psqueue__V_43_43 = (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__2_2, (MR_Integer) 4));
#line 293 "psqueue.m"
              MR_Word mercury__psqueue__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__2_2, (MR_Integer) 3)));
#line 293 "psqueue.m"
              MR_Box mercury__psqueue__V_45_45 = (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__2_2, (MR_Integer) 2));
#line 293 "psqueue.m"
              MR_Box mercury__psqueue__V_46_46 = (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__2_2, (MR_Integer) 1));
#line 293 "psqueue.m"
              MR_Integer mercury__psqueue__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__2_2, (MR_Integer) 0)));

#line 293 "psqueue.m"
              if ((mercury__psqueue__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 7909 "psqueue.c"
                *mercury__psqueue__HeadVar__1_1 = (MR_Integer) 2;
#line 293 "psqueue.m"
              else
#line 293 "psqueue.m"
                {
#line 293 "psqueue.m"
                  MR_Integer mercury__psqueue__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__3_3, (MR_Integer) 0)));
#line 293 "psqueue.m"
                  MR_Box mercury__psqueue__V_23_23 = (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__3_3, (MR_Integer) 1));
#line 293 "psqueue.m"
                  MR_Box mercury__psqueue__V_24_24 = (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__3_3, (MR_Integer) 2));
#line 293 "psqueue.m"
                  MR_Word mercury__psqueue__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__3_3, (MR_Integer) 3)));
#line 293 "psqueue.m"
                  MR_Box mercury__psqueue__V_26_26 = (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__3_3, (MR_Integer) 4));
#line 293 "psqueue.m"
                  MR_Word mercury__psqueue__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__3_3, (MR_Integer) 5)));
#line 293 "psqueue.m"
                  MR_Word mercury__psqueue__V_28_28;

#line 66 "private_builtin.opt"
                  mercury__psqueue__succeeded = (mercury__psqueue__V_47_47 < mercury__psqueue__V_22_22);
#line 69 "private_builtin.opt"
                  if (mercury__psqueue__succeeded)
#line 68 "private_builtin.opt"
                    mercury__psqueue__V_28_28 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                  else
#line 74 "private_builtin.opt"
                    {
#line 71 "private_builtin.opt"
                      mercury__psqueue__succeeded = (mercury__psqueue__V_47_47 == mercury__psqueue__V_22_22);
#line 74 "private_builtin.opt"
                      if (mercury__psqueue__succeeded)
#line 73 "private_builtin.opt"
                        mercury__psqueue__V_28_28 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                      else
#line 75 "private_builtin.opt"
                        mercury__psqueue__V_28_28 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                    }
#line 7952 "psqueue.c"
                  mercury__psqueue__succeeded = (mercury__psqueue__V_28_28 == (MR_Integer) 0);
#line 293 "psqueue.m"
                  mercury__psqueue__succeeded = !(mercury__psqueue__succeeded);
#line 293 "psqueue.m"
                  if (mercury__psqueue__succeeded)
#line 293 "psqueue.m"
                    *mercury__psqueue__HeadVar__1_1 = mercury__psqueue__V_28_28;
#line 293 "psqueue.m"
                  else
#line 293 "psqueue.m"
                    {
#line 293 "psqueue.m"
                      MR_Word mercury__psqueue__V_29_29;

#line 293 "psqueue.m"
                      {
#line 293 "psqueue.m"
                        mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_P_35, &mercury__psqueue__V_29_29, mercury__psqueue__V_46_46, mercury__psqueue__V_23_23);
                      }
#line 7972 "psqueue.c"
                      mercury__psqueue__succeeded = (mercury__psqueue__V_29_29 == (MR_Integer) 0);
#line 293 "psqueue.m"
                      mercury__psqueue__succeeded = !(mercury__psqueue__succeeded);
#line 293 "psqueue.m"
                      if (mercury__psqueue__succeeded)
#line 293 "psqueue.m"
                        *mercury__psqueue__HeadVar__1_1 = mercury__psqueue__V_29_29;
#line 293 "psqueue.m"
                      else
#line 293 "psqueue.m"
                        {
#line 293 "psqueue.m"
                          MR_Word mercury__psqueue__V_30_30;

#line 293 "psqueue.m"
                          {
#line 293 "psqueue.m"
                            mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_36, &mercury__psqueue__V_30_30, mercury__psqueue__V_45_45, mercury__psqueue__V_24_24);
                          }
#line 7992 "psqueue.c"
                          mercury__psqueue__succeeded = (mercury__psqueue__V_30_30 == (MR_Integer) 0);
#line 293 "psqueue.m"
                          mercury__psqueue__succeeded = !(mercury__psqueue__succeeded);
#line 293 "psqueue.m"
                          if (mercury__psqueue__succeeded)
#line 293 "psqueue.m"
                            *mercury__psqueue__HeadVar__1_1 = mercury__psqueue__V_30_30;
#line 293 "psqueue.m"
                          else
#line 293 "psqueue.m"
                            {
#line 293 "psqueue.m"
                              MR_Word mercury__psqueue__V_31_31;

#line 293 "psqueue.m"
                              {
#line 293 "psqueue.m"
                                mercury__psqueue____Compare____loser_tree_2_0(mercury__psqueue__TypeInfo_for_P_35, mercury__psqueue__TypeInfo_for_K_36, &mercury__psqueue__V_31_31, mercury__psqueue__V_44_44, mercury__psqueue__V_25_25);
                              }
#line 8012 "psqueue.c"
                              mercury__psqueue__succeeded = (mercury__psqueue__V_31_31 == (MR_Integer) 0);
#line 293 "psqueue.m"
                              mercury__psqueue__succeeded = !(mercury__psqueue__succeeded);
#line 293 "psqueue.m"
                              if (mercury__psqueue__succeeded)
#line 293 "psqueue.m"
                                *mercury__psqueue__HeadVar__1_1 = mercury__psqueue__V_31_31;
#line 293 "psqueue.m"
                              else
#line 293 "psqueue.m"
                                {
#line 293 "psqueue.m"
                                  MR_Word mercury__psqueue__V_32_32;

#line 293 "psqueue.m"
                                  {
#line 293 "psqueue.m"
                                    mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_36, &mercury__psqueue__V_32_32, mercury__psqueue__V_43_43, mercury__psqueue__V_26_26);
                                  }
#line 8032 "psqueue.c"
                                  mercury__psqueue__succeeded = (mercury__psqueue__V_32_32 == (MR_Integer) 0);
#line 293 "psqueue.m"
                                  mercury__psqueue__succeeded = !(mercury__psqueue__succeeded);
#line 293 "psqueue.m"
                                  if (mercury__psqueue__succeeded)
#line 293 "psqueue.m"
                                    *mercury__psqueue__HeadVar__1_1 = mercury__psqueue__V_32_32;
#line 293 "psqueue.m"
                                  else
#line 293 "psqueue.m"
                                    {
#line 293 "psqueue.m"
                                      /* direct tailcall eliminated */
#line 293 "psqueue.m"
                                      {
#line 293 "psqueue.m"
                                        MR_Word mercury__psqueue__HeadVar__2__tmp_copy_2 = mercury__psqueue__V_42_42;
#line 293 "psqueue.m"
                                        MR_Word mercury__psqueue__HeadVar__3__tmp_copy_3 = mercury__psqueue__V_27_27;

#line 293 "psqueue.m"
                                        mercury__psqueue__HeadVar__3_3 = mercury__psqueue__HeadVar__3__tmp_copy_3;
#line 293 "psqueue.m"
                                        mercury__psqueue__HeadVar__2_2 = mercury__psqueue__HeadVar__2__tmp_copy_2;
#line 293 "psqueue.m"
                                      }
#line 293 "psqueue.m"
                                      continue;
#line 293 "psqueue.m"
                                    }
#line 293 "psqueue.m"
                                }
#line 293 "psqueue.m"
                            }
#line 293 "psqueue.m"
                        }
#line 293 "psqueue.m"
                    }
#line 293 "psqueue.m"
                }
#line 293 "psqueue.m"
            }
#line 293 "psqueue.m"
      }
#line 293 "psqueue.m"
      break;
#line 293 "psqueue.m"
    }
#line 293 "psqueue.m"
}

#line 293 "psqueue.m"
MR_bool MR_CALL 
mercury__psqueue____Unify____loser_tree_2_0(
#line 293 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_19,
#line 293 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_20,
#line 293 "psqueue.m"
  MR_Word mercury__psqueue__HeadVar__1_1,
#line 293 "psqueue.m"
  MR_Word mercury__psqueue__HeadVar__2_2)
#line 293 "psqueue.m"
{
#line 293 "psqueue.m"
  while (MR_TRUE)
#line 293 "psqueue.m"
    {
#line 293 "psqueue.m"
      /* tailcall optimized into a loop */
#line 293 "psqueue.m"
      {
#line 293 "psqueue.m"
        MR_bool mercury__psqueue__succeeded;
#line 293 "psqueue.m"
        MR_Integer mercury__psqueue__CastX_17 = (MR_Integer) mercury__psqueue__HeadVar__1_1;
#line 293 "psqueue.m"
        MR_Integer mercury__psqueue__CastY_18 = (MR_Integer) mercury__psqueue__HeadVar__2_2;

#line 293 "psqueue.m"
        mercury__psqueue__succeeded = (mercury__psqueue__CastX_17 == mercury__psqueue__CastY_18);
#line 293 "psqueue.m"
        if (mercury__psqueue__succeeded)
#line 293 "psqueue.m"
          mercury__psqueue__succeeded = MR_TRUE;
#line 293 "psqueue.m"
        else
#line 293 "psqueue.m"
          if ((mercury__psqueue__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 293 "psqueue.m"
            {
#line 293 "psqueue.m"
              MR_Integer mercury__psqueue__CastX_3 = (MR_Integer) mercury__psqueue__HeadVar__1_1;
#line 293 "psqueue.m"
              MR_Integer mercury__psqueue__CastY_4 = (MR_Integer) mercury__psqueue__HeadVar__2_2;

#line 293 "psqueue.m"
              mercury__psqueue__succeeded = (mercury__psqueue__CastY_4 == mercury__psqueue__CastX_3);
#line 293 "psqueue.m"
            }
#line 293 "psqueue.m"
          else
#line 293 "psqueue.m"
            {
#line 293 "psqueue.m"
              MR_Integer mercury__psqueue__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__1_1, (MR_Integer) 0)));
#line 293 "psqueue.m"
              MR_Box mercury__psqueue__V_6_6 = (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__1_1, (MR_Integer) 1));
#line 293 "psqueue.m"
              MR_Box mercury__psqueue__V_7_7 = (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__1_1, (MR_Integer) 2));
#line 293 "psqueue.m"
              MR_Word mercury__psqueue__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__1_1, (MR_Integer) 3)));
#line 293 "psqueue.m"
              MR_Box mercury__psqueue__V_9_9 = (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__1_1, (MR_Integer) 4));
#line 293 "psqueue.m"
              MR_Word mercury__psqueue__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__1_1, (MR_Integer) 5)));
#line 293 "psqueue.m"
              MR_Integer mercury__psqueue__V_11_11;
#line 293 "psqueue.m"
              MR_Box mercury__psqueue__V_12_12;
#line 293 "psqueue.m"
              MR_Box mercury__psqueue__V_13_13;
#line 293 "psqueue.m"
              MR_Word mercury__psqueue__V_14_14;
#line 293 "psqueue.m"
              MR_Box mercury__psqueue__V_15_15;
#line 293 "psqueue.m"
              MR_Word mercury__psqueue__V_16_16;

#line 293 "psqueue.m"
              mercury__psqueue__succeeded = ((MR_tag((MR_Word) mercury__psqueue__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 293 "psqueue.m"
              if (mercury__psqueue__succeeded)
#line 293 "psqueue.m"
                {
#line 293 "psqueue.m"
                  mercury__psqueue__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__2_2, (MR_Integer) 0)));
#line 293 "psqueue.m"
                  mercury__psqueue__V_12_12 = (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__2_2, (MR_Integer) 1));
#line 293 "psqueue.m"
                  mercury__psqueue__V_13_13 = (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__2_2, (MR_Integer) 2));
#line 293 "psqueue.m"
                  mercury__psqueue__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__2_2, (MR_Integer) 3)));
#line 293 "psqueue.m"
                  mercury__psqueue__V_15_15 = (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__2_2, (MR_Integer) 4));
#line 293 "psqueue.m"
                  mercury__psqueue__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__2_2, (MR_Integer) 5)));
#line 8180 "psqueue.c"
                  mercury__psqueue__succeeded = (mercury__psqueue__V_5_5 == mercury__psqueue__V_11_11);
#line 293 "psqueue.m"
                  if (mercury__psqueue__succeeded)
#line 293 "psqueue.m"
                    {
#line 8186 "psqueue.c"
                      {
#line 8188 "psqueue.c"
                        mercury__psqueue__succeeded = mercury__builtin__unify_2_p_0(mercury__psqueue__TypeInfo_for_P_19, mercury__psqueue__V_6_6, mercury__psqueue__V_12_12);
                      }
#line 293 "psqueue.m"
                      if (mercury__psqueue__succeeded)
#line 293 "psqueue.m"
                        {
#line 8195 "psqueue.c"
                          {
#line 8197 "psqueue.c"
                            mercury__psqueue__succeeded = mercury__builtin__unify_2_p_0(mercury__psqueue__TypeInfo_for_K_20, mercury__psqueue__V_7_7, mercury__psqueue__V_13_13);
                          }
#line 293 "psqueue.m"
                          if (mercury__psqueue__succeeded)
#line 293 "psqueue.m"
                            {
#line 8204 "psqueue.c"
                              {
#line 8206 "psqueue.c"
                                mercury__psqueue__succeeded = mercury__psqueue____Unify____loser_tree_2_0(mercury__psqueue__TypeInfo_for_P_19, mercury__psqueue__TypeInfo_for_K_20, mercury__psqueue__V_8_8, mercury__psqueue__V_14_14);
                              }
#line 293 "psqueue.m"
                              if (mercury__psqueue__succeeded)
#line 293 "psqueue.m"
                                {
#line 8213 "psqueue.c"
                                  {
#line 8215 "psqueue.c"
                                    mercury__psqueue__succeeded = mercury__builtin__unify_2_p_0(mercury__psqueue__TypeInfo_for_K_20, mercury__psqueue__V_9_9, mercury__psqueue__V_15_15);
                                  }
#line 293 "psqueue.m"
                                  if (mercury__psqueue__succeeded)
#line 8220 "psqueue.c"
                                    {
#line 8222 "psqueue.c"
                                      /* direct tailcall eliminated */
#line 8224 "psqueue.c"
                                      {
#line 8226 "psqueue.c"
                                        MR_Word mercury__psqueue__HeadVar__1__tmp_copy_1 = mercury__psqueue__V_10_10;
#line 8228 "psqueue.c"
                                        MR_Word mercury__psqueue__HeadVar__2__tmp_copy_2 = mercury__psqueue__V_16_16;

#line 8231 "psqueue.c"
                                        mercury__psqueue__HeadVar__2_2 = mercury__psqueue__HeadVar__2__tmp_copy_2;
#line 8233 "psqueue.c"
                                        mercury__psqueue__HeadVar__1_1 = mercury__psqueue__HeadVar__1__tmp_copy_1;
#line 8235 "psqueue.c"
                                      }
#line 8237 "psqueue.c"
                                      continue;
#line 8239 "psqueue.c"
                                    }
#line 293 "psqueue.m"
                                }
#line 293 "psqueue.m"
                            }
#line 293 "psqueue.m"
                        }
#line 293 "psqueue.m"
                    }
#line 293 "psqueue.m"
                }
#line 293 "psqueue.m"
            }
#line 293 "psqueue.m"
        return mercury__psqueue__succeeded;
#line 293 "psqueue.m"
      }
#line 293 "psqueue.m"
      break;
#line 293 "psqueue.m"
    }
#line 293 "psqueue.m"
}

#line 1413 "psqueue.m"
static MR_String MR_CALL 
mercury__psqueue__dump_loser_tree_2_f_0(
#line 1413 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_46,
#line 1413 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_47,
#line 1413 "psqueue.m"
  MR_Integer mercury__psqueue__Indent_4,
#line 1413 "psqueue.m"
  MR_Word mercury__psqueue__LTree_5)
#line 1413 "psqueue.m"
{
#line 1415 "psqueue.m"
  {
#line 1415 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 1415 "psqueue.m"
    MR_String mercury__psqueue__Str_6;
#line 1415 "psqueue.m"
    MR_Word mercury__psqueue__TypeCtorInfo_8_57 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 1415 "psqueue.m"
    MR_String mercury__psqueue__IndentStr_7;
#line 1415 "psqueue.m"
    MR_Integer mercury__psqueue__V_51_51 = (mercury__psqueue__Indent_4 * (MR_Integer) 2);
#line 1415 "psqueue.m"
    MR_Word mercury__psqueue__V_7_56;
#line 1415 "psqueue.m"
    MR_Word mercury__psqueue__V_6_64 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 145 "list.opt"
    {
#line 145 "list.opt"
      mercury__psqueue__V_7_56 = mercury__list__duplicate_2_3_f_0(mercury__psqueue__TypeCtorInfo_8_57, mercury__psqueue__V_51_51, ((MR_Box) (MR_Word) ((MR_Char) 32)), mercury__psqueue__V_6_64);
    }
#line 141 "string.opt"
    {
#line 141 "string.opt"
      mercury__string__from_char_list_2_p_0(mercury__psqueue__V_7_56, &mercury__psqueue__IndentStr_7);
    }
#line 1420 "psqueue.m"
    if ((mercury__psqueue__LTree_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1418 "psqueue.m"
      {
#line 406 "string.opt"
        {
#line 406 "string.opt"
          mercury__string__append_3_p_2(mercury__psqueue__IndentStr_7, (MR_String) "loser_leaf\n", &mercury__psqueue__Str_6);
        }
#line 1418 "psqueue.m"
      }
#line 1420 "psqueue.m"
    else
#line 1422 "psqueue.m"
      {
#line 1422 "psqueue.m"
        MR_Integer mercury__psqueue__Size_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_5, (MR_Integer) 0)));
#line 1422 "psqueue.m"
        MR_Box mercury__psqueue__LoserPrio_9 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_5, (MR_Integer) 1));
#line 1422 "psqueue.m"
        MR_Box mercury__psqueue__LoserKey_10 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_5, (MR_Integer) 2));
#line 1422 "psqueue.m"
        MR_Word mercury__psqueue__LTreeL_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_5, (MR_Integer) 3)));
#line 1422 "psqueue.m"
        MR_Box mercury__psqueue__SplitKey_12 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_5, (MR_Integer) 4));
#line 1422 "psqueue.m"
        MR_Word mercury__psqueue__LTreeR_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_5, (MR_Integer) 5)));
#line 1422 "psqueue.m"
        MR_String mercury__psqueue__V_14_14;
#line 1422 "psqueue.m"
        MR_String mercury__psqueue__V_16_16;
#line 1422 "psqueue.m"
        MR_String mercury__psqueue__V_17_17;
#line 1422 "psqueue.m"
        MR_String mercury__psqueue__V_18_18;
#line 1422 "psqueue.m"
        MR_String mercury__psqueue__V_20_20;
#line 1422 "psqueue.m"
        MR_String mercury__psqueue__V_21_21;
#line 1422 "psqueue.m"
        MR_String mercury__psqueue__V_22_22;
#line 1422 "psqueue.m"
        MR_String mercury__psqueue__V_24_24;
#line 1422 "psqueue.m"
        MR_String mercury__psqueue__V_25_25;
#line 1422 "psqueue.m"
        MR_String mercury__psqueue__V_26_26;
#line 1422 "psqueue.m"
        MR_String mercury__psqueue__V_28_28;
#line 1422 "psqueue.m"
        MR_String mercury__psqueue__V_29_29;
#line 1422 "psqueue.m"
        MR_Integer mercury__psqueue__V_30_30;
#line 1422 "psqueue.m"
        MR_String mercury__psqueue__V_32_32;
#line 1422 "psqueue.m"
        MR_String mercury__psqueue__V_33_33;
#line 1422 "psqueue.m"
        MR_String mercury__psqueue__V_35_35;
#line 1422 "psqueue.m"
        MR_String mercury__psqueue__V_36_36;
#line 1422 "psqueue.m"
        MR_String mercury__psqueue__V_37_37;
#line 1422 "psqueue.m"
        MR_String mercury__psqueue__V_39_39;
#line 1422 "psqueue.m"
        MR_String mercury__psqueue__V_40_40;
#line 1422 "psqueue.m"
        MR_Integer mercury__psqueue__V_41_41;
#line 1422 "psqueue.m"
        MR_String mercury__psqueue__V_43_43;

#line 705 "string.opt"
        {
#line 705 "string.opt"
          mercury__string__int_to_base_string_3_p_0(mercury__psqueue__Size_8, (MR_Integer) 10, &mercury__psqueue__V_17_17);
        }
#line 1424 "psqueue.m"
        {
#line 1424 "psqueue.m"
          mercury__psqueue__V_21_21 = mercury__string__string_1_f_0(mercury__psqueue__TypeInfo_for_P_46, mercury__psqueue__LoserPrio_9);
        }
#line 1425 "psqueue.m"
        {
#line 1425 "psqueue.m"
          mercury__psqueue__V_25_25 = mercury__string__string_1_f_0(mercury__psqueue__TypeInfo_for_K_47, mercury__psqueue__LoserKey_10);
        }
#line 1426 "psqueue.m"
        mercury__psqueue__V_30_30 = (mercury__psqueue__Indent_4 + (MR_Integer) 1);
#line 1426 "psqueue.m"
        {
#line 1426 "psqueue.m"
          mercury__psqueue__V_29_29 = mercury__psqueue__dump_loser_tree_2_f_0(mercury__psqueue__TypeInfo_for_P_46, mercury__psqueue__TypeInfo_for_K_47, mercury__psqueue__V_30_30, mercury__psqueue__LTreeL_11);
        }
#line 1427 "psqueue.m"
        {
#line 1427 "psqueue.m"
          mercury__psqueue__V_36_36 = mercury__string__string_1_f_0(mercury__psqueue__TypeInfo_for_K_47, mercury__psqueue__SplitKey_12);
        }
#line 1428 "psqueue.m"
        mercury__psqueue__V_41_41 = (mercury__psqueue__Indent_4 + (MR_Integer) 1);
#line 1428 "psqueue.m"
        {
#line 1428 "psqueue.m"
          mercury__psqueue__V_40_40 = mercury__psqueue__dump_loser_tree_2_f_0(mercury__psqueue__TypeInfo_for_P_46, mercury__psqueue__TypeInfo_for_K_47, mercury__psqueue__V_41_41, mercury__psqueue__LTreeR_13);
        }
#line 406 "string.opt"
        {
#line 406 "string.opt"
          mercury__string__append_3_p_2(mercury__psqueue__IndentStr_7, (MR_String) ")\n", &mercury__psqueue__V_43_43);
        }
#line 406 "string.opt"
        {
#line 406 "string.opt"
          mercury__string__append_3_p_2(mercury__psqueue__V_40_40, mercury__psqueue__V_43_43, &mercury__psqueue__V_39_39);
        }
#line 406 "string.opt"
        {
#line 406 "string.opt"
          mercury__string__append_3_p_2((MR_String) "\n", mercury__psqueue__V_39_39, &mercury__psqueue__V_37_37);
        }
#line 1427 "psqueue.m"
        {
#line 1427 "psqueue.m"
          mercury__psqueue__V_35_35 = mercury__string__f_43_43_2_f_0(mercury__psqueue__V_36_36, mercury__psqueue__V_37_37);
        }
#line 1427 "psqueue.m"
        {
#line 1427 "psqueue.m"
          mercury__psqueue__V_33_33 = mercury__string__f_43_43_2_f_0((MR_String) "split key ", mercury__psqueue__V_35_35);
        }
#line 1427 "psqueue.m"
        {
#line 1427 "psqueue.m"
          mercury__psqueue__V_32_32 = mercury__string__f_43_43_2_f_0(mercury__psqueue__IndentStr_7, mercury__psqueue__V_33_33);
        }
#line 1426 "psqueue.m"
        {
#line 1426 "psqueue.m"
          mercury__psqueue__V_28_28 = mercury__string__f_43_43_2_f_0(mercury__psqueue__V_29_29, mercury__psqueue__V_32_32);
        }
#line 1425 "psqueue.m"
        {
#line 1425 "psqueue.m"
          mercury__psqueue__V_26_26 = mercury__string__f_43_43_2_f_0((MR_String) "\n", mercury__psqueue__V_28_28);
        }
#line 1425 "psqueue.m"
        {
#line 1425 "psqueue.m"
          mercury__psqueue__V_24_24 = mercury__string__f_43_43_2_f_0(mercury__psqueue__V_25_25, mercury__psqueue__V_26_26);
        }
#line 1425 "psqueue.m"
        {
#line 1425 "psqueue.m"
          mercury__psqueue__V_22_22 = mercury__string__f_43_43_2_f_0((MR_String) ", key ", mercury__psqueue__V_24_24);
        }
#line 1424 "psqueue.m"
        {
#line 1424 "psqueue.m"
          mercury__psqueue__V_20_20 = mercury__string__f_43_43_2_f_0(mercury__psqueue__V_21_21, mercury__psqueue__V_22_22);
        }
#line 1424 "psqueue.m"
        {
#line 1424 "psqueue.m"
          mercury__psqueue__V_18_18 = mercury__string__f_43_43_2_f_0((MR_String) ", prio ", mercury__psqueue__V_20_20);
        }
#line 1423 "psqueue.m"
        {
#line 1423 "psqueue.m"
          mercury__psqueue__V_16_16 = mercury__string__f_43_43_2_f_0(mercury__psqueue__V_17_17, mercury__psqueue__V_18_18);
        }
#line 1423 "psqueue.m"
        {
#line 1423 "psqueue.m"
          mercury__psqueue__V_14_14 = mercury__string__f_43_43_2_f_0((MR_String) "loser_node(size ", mercury__psqueue__V_16_16);
        }
#line 1423 "psqueue.m"
        {
#line 1423 "psqueue.m"
          return mercury__psqueue__Str_6 = mercury__string__f_43_43_2_f_0(mercury__psqueue__IndentStr_7, mercury__psqueue__V_14_14);
        }
#line 1422 "psqueue.m"
      }
#line 1415 "psqueue.m"
    return mercury__psqueue__Str_6;
#line 1415 "psqueue.m"
  }
#line 1413 "psqueue.m"
}

#line 1402 "psqueue.m"
MR_String MR_CALL 
mercury__psqueue__dump_winner_2_f_0(
#line 1402 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_32,
#line 1402 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_33,
#line 1402 "psqueue.m"
  MR_Integer mercury__psqueue__Indent_4,
#line 1402 "psqueue.m"
  MR_Word mercury__psqueue__Winner_5)
#line 1402 "psqueue.m"
{
#line 1404 "psqueue.m"
  {
#line 1404 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 1404 "psqueue.m"
    MR_String mercury__psqueue__Str_6;
#line 1404 "psqueue.m"
    MR_Word mercury__psqueue__TypeCtorInfo_8_43 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 1404 "psqueue.m"
    MR_Word mercury__psqueue__TypeCtorInfo_13_67;
#line 1404 "psqueue.m"
    MR_Word mercury__psqueue__TypeClassInfo_for_op_table_76;
#line 1404 "psqueue.m"
    MR_String mercury__psqueue__IndentStr_7;
#line 1404 "psqueue.m"
    MR_Box mercury__psqueue__WinnerPrio_8;
#line 1404 "psqueue.m"
    MR_Box mercury__psqueue__WinnerKey_9;
#line 1404 "psqueue.m"
    MR_Word mercury__psqueue__LTree_10;
#line 1404 "psqueue.m"
    MR_Box mercury__psqueue__MaxKey_11;
#line 1404 "psqueue.m"
    MR_String mercury__psqueue__V_12_12;
#line 1404 "psqueue.m"
    MR_String mercury__psqueue__V_14_14;
#line 1404 "psqueue.m"
    MR_String mercury__psqueue__V_15_15;
#line 1404 "psqueue.m"
    MR_String mercury__psqueue__V_16_16;
#line 1404 "psqueue.m"
    MR_String mercury__psqueue__V_18_18;
#line 1404 "psqueue.m"
    MR_String mercury__psqueue__V_19_19;
#line 1404 "psqueue.m"
    MR_String mercury__psqueue__V_20_20;
#line 1404 "psqueue.m"
    MR_String mercury__psqueue__V_22_22;
#line 1404 "psqueue.m"
    MR_String mercury__psqueue__V_23_23;
#line 1404 "psqueue.m"
    MR_String mercury__psqueue__V_24_24;
#line 1404 "psqueue.m"
    MR_String mercury__psqueue__V_26_26;
#line 1404 "psqueue.m"
    MR_String mercury__psqueue__V_27_27;
#line 1404 "psqueue.m"
    MR_Integer mercury__psqueue__V_28_28;
#line 1404 "psqueue.m"
    MR_String mercury__psqueue__V_30_30;
#line 1404 "psqueue.m"
    MR_Integer mercury__psqueue__V_37_37 = (mercury__psqueue__Indent_4 * (MR_Integer) 2);
#line 1404 "psqueue.m"
    MR_Word mercury__psqueue__V_7_42;
#line 1404 "psqueue.m"
    MR_Word mercury__psqueue__V_6_50 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1404 "psqueue.m"
    MR_Word mercury__psqueue__V_10_64;
#line 1404 "psqueue.m"
    MR_Word mercury__psqueue__RevStrings_9_65;
#line 1404 "psqueue.m"
    MR_Word mercury__psqueue__V_11_66;
#line 1404 "psqueue.m"
    MR_Integer mercury__psqueue__Priority_10_73;
#line 1404 "psqueue.m"
    MR_Integer mercury__psqueue__V_13_74;
#line 8573 "psqueue.c"
    MR_Box MR_CALL (* mercury__psqueue__func_0)(MR_Box, MR_Box);
#line 8575 "psqueue.c"
    MR_Box mercury__psqueue__conv1_V_13_74;

#line 145 "list.opt"
    {
#line 145 "list.opt"
      mercury__psqueue__V_7_42 = mercury__list__duplicate_2_3_f_0(mercury__psqueue__TypeCtorInfo_8_43, mercury__psqueue__V_37_37, ((MR_Box) (MR_Word) ((MR_Char) 32)), mercury__psqueue__V_6_50);
    }
#line 141 "string.opt"
    {
#line 141 "string.opt"
      mercury__string__from_char_list_2_p_0(mercury__psqueue__V_7_42, &mercury__psqueue__IndentStr_7);
    }
#line 1406 "psqueue.m"
    mercury__psqueue__WinnerPrio_8 = (MR_hl_field(MR_mktag(0), mercury__psqueue__Winner_5, (MR_Integer) 0));
#line 1406 "psqueue.m"
    mercury__psqueue__WinnerKey_9 = (MR_hl_field(MR_mktag(0), mercury__psqueue__Winner_5, (MR_Integer) 1));
#line 1406 "psqueue.m"
    mercury__psqueue__LTree_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__psqueue__Winner_5, (MR_Integer) 2)));
#line 1406 "psqueue.m"
    mercury__psqueue__MaxKey_11 = (MR_hl_field(MR_mktag(0), mercury__psqueue__Winner_5, (MR_Integer) 3));
#line 32 "ops.opt"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 22 "string.to_string.opt"
    mercury__psqueue__V_10_64 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 8600 "psqueue.c"
    mercury__psqueue__TypeClassInfo_for_op_table_76 = (MR_Word) &mercury__psqueue_scalar_common_1[0];
#line 8602 "psqueue.c"
    mercury__psqueue__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__psqueue__TypeClassInfo_for_op_table_76, (MR_Integer) 0)), (MR_Integer) 12)));
#line 8604 "psqueue.c"
    {
#line 8606 "psqueue.c"
      mercury__psqueue__conv1_V_13_74 = mercury__psqueue__func_0(((MR_Box) mercury__psqueue__TypeClassInfo_for_op_table_76), ((MR_Box) ((MR_Integer) 0)));
    }
#line 8609 "psqueue.c"
    mercury__psqueue__V_13_74 = ((MR_Integer) mercury__psqueue__conv1_V_13_74);
#line 27 "string.to_string.opt"
    mercury__psqueue__Priority_10_73 = (mercury__psqueue__V_13_74 + (MR_Integer) 1);
#line 30 "string.to_string.opt"
    {
#line 30 "string.to_string.opt"
      mercury__string__to_string__value_to_revstrings_prio_6_p_1(mercury__psqueue__TypeInfo_for_P_32, (MR_Integer) 1, mercury__psqueue__Priority_10_73, mercury__psqueue__WinnerPrio_8, mercury__psqueue__V_10_64, &mercury__psqueue__RevStrings_9_65);
    }
#line 8618 "psqueue.c"
    mercury__psqueue__TypeCtorInfo_13_67 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 118 "list.opt"
    {
#line 118 "list.opt"
      mercury__list__reverse_2_p_0(mercury__psqueue__TypeCtorInfo_13_67, mercury__psqueue__RevStrings_9_65, &mercury__psqueue__V_11_66);
    }
#line 24 "string.to_string.opt"
    {
#line 24 "string.to_string.opt"
      mercury__psqueue__V_15_15 = mercury__string__append_list_1_f_0(mercury__psqueue__V_11_66);
    }
#line 1408 "psqueue.m"
    {
#line 1408 "psqueue.m"
      mercury__psqueue__V_19_19 = mercury__string__string_1_f_0(mercury__psqueue__TypeInfo_for_K_33, mercury__psqueue__WinnerKey_9);
    }
#line 1409 "psqueue.m"
    {
#line 1409 "psqueue.m"
      mercury__psqueue__V_23_23 = mercury__string__string_1_f_0(mercury__psqueue__TypeInfo_for_K_33, mercury__psqueue__MaxKey_11);
    }
#line 1410 "psqueue.m"
    mercury__psqueue__V_28_28 = (mercury__psqueue__Indent_4 + (MR_Integer) 1);
#line 1410 "psqueue.m"
    {
#line 1410 "psqueue.m"
      mercury__psqueue__V_27_27 = mercury__psqueue__dump_loser_tree_2_f_0(mercury__psqueue__TypeInfo_for_P_32, mercury__psqueue__TypeInfo_for_K_33, mercury__psqueue__V_28_28, mercury__psqueue__LTree_10);
    }
#line 406 "string.opt"
    {
#line 406 "string.opt"
      mercury__string__append_3_p_2(mercury__psqueue__IndentStr_7, (MR_String) ")\n", &mercury__psqueue__V_30_30);
    }
#line 406 "string.opt"
    {
#line 406 "string.opt"
      mercury__string__append_3_p_2(mercury__psqueue__V_27_27, mercury__psqueue__V_30_30, &mercury__psqueue__V_26_26);
    }
#line 406 "string.opt"
    {
#line 406 "string.opt"
      mercury__string__append_3_p_2((MR_String) ",\n", mercury__psqueue__V_26_26, &mercury__psqueue__V_24_24);
    }
#line 1409 "psqueue.m"
    {
#line 1409 "psqueue.m"
      mercury__psqueue__V_22_22 = mercury__string__f_43_43_2_f_0(mercury__psqueue__V_23_23, mercury__psqueue__V_24_24);
    }
#line 1409 "psqueue.m"
    {
#line 1409 "psqueue.m"
      mercury__psqueue__V_20_20 = mercury__string__f_43_43_2_f_0((MR_String) ", maxkey ", mercury__psqueue__V_22_22);
    }
#line 1408 "psqueue.m"
    {
#line 1408 "psqueue.m"
      mercury__psqueue__V_18_18 = mercury__string__f_43_43_2_f_0(mercury__psqueue__V_19_19, mercury__psqueue__V_20_20);
    }
#line 1408 "psqueue.m"
    {
#line 1408 "psqueue.m"
      mercury__psqueue__V_16_16 = mercury__string__f_43_43_2_f_0((MR_String) ", key ", mercury__psqueue__V_18_18);
    }
#line 1407 "psqueue.m"
    {
#line 1407 "psqueue.m"
      mercury__psqueue__V_14_14 = mercury__string__f_43_43_2_f_0(mercury__psqueue__V_15_15, mercury__psqueue__V_16_16);
    }
#line 1407 "psqueue.m"
    {
#line 1407 "psqueue.m"
      mercury__psqueue__V_12_12 = mercury__string__f_43_43_2_f_0((MR_String) "winner(prio ", mercury__psqueue__V_14_14);
    }
#line 1407 "psqueue.m"
    {
#line 1407 "psqueue.m"
      return mercury__psqueue__Str_6 = mercury__string__f_43_43_2_f_0(mercury__psqueue__IndentStr_7, mercury__psqueue__V_12_12);
    }
#line 1404 "psqueue.m"
    return mercury__psqueue__Str_6;
#line 1404 "psqueue.m"
  }
#line 1402 "psqueue.m"
}

#line 1390 "psqueue.m"
MR_String MR_CALL 
mercury__psqueue__dump_psqueue_2_f_0(
#line 1390 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_10,
#line 1390 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_11,
#line 1390 "psqueue.m"
  MR_Integer mercury__psqueue__Indent_4,
#line 1390 "psqueue.m"
  MR_Word mercury__psqueue__PSQ_5)
#line 1390 "psqueue.m"
{
#line 1392 "psqueue.m"
  {
#line 1392 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 1392 "psqueue.m"
    MR_String mercury__psqueue__Str_6;
#line 1392 "psqueue.m"
    MR_Word mercury__psqueue__TypeCtorInfo_8_21 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 1392 "psqueue.m"
    MR_String mercury__psqueue__IndentStr_7;
#line 1392 "psqueue.m"
    MR_Integer mercury__psqueue__V_15_15 = (mercury__psqueue__Indent_4 * (MR_Integer) 2);
#line 1392 "psqueue.m"
    MR_Word mercury__psqueue__V_7_20;
#line 1392 "psqueue.m"
    MR_Word mercury__psqueue__V_6_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 145 "list.opt"
    {
#line 145 "list.opt"
      mercury__psqueue__V_7_20 = mercury__list__duplicate_2_3_f_0(mercury__psqueue__TypeCtorInfo_8_21, mercury__psqueue__V_15_15, ((MR_Box) (MR_Word) ((MR_Char) 32)), mercury__psqueue__V_6_28);
    }
#line 141 "string.opt"
    {
#line 141 "string.opt"
      mercury__string__from_char_list_2_p_0(mercury__psqueue__V_7_20, &mercury__psqueue__IndentStr_7);
    }
#line 1397 "psqueue.m"
    if ((mercury__psqueue__PSQ_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1395 "psqueue.m"
      {
#line 406 "string.opt"
        {
#line 406 "string.opt"
          mercury__string__append_3_p_2(mercury__psqueue__IndentStr_7, (MR_String) "void", &mercury__psqueue__Str_6);
        }
#line 1395 "psqueue.m"
      }
#line 1397 "psqueue.m"
    else
#line 1398 "psqueue.m"
      {
#line 1398 "psqueue.m"
        MR_Word mercury__psqueue__Winner_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_5, (MR_Integer) 0)));

#line 1399 "psqueue.m"
        {
#line 1399 "psqueue.m"
          return mercury__psqueue__Str_6 = mercury__psqueue__dump_winner_2_f_0(mercury__psqueue__TypeInfo_for_P_10, mercury__psqueue__TypeInfo_for_K_11, mercury__psqueue__Indent_4, mercury__psqueue__Winner_8);
        }
#line 1398 "psqueue.m"
      }
#line 1392 "psqueue.m"
    return mercury__psqueue__Str_6;
#line 1392 "psqueue.m"
  }
#line 1390 "psqueue.m"
}

#line 1385 "psqueue.m"
MR_String MR_CALL 
mercury__psqueue__indent_string_1_f_0(
#line 1385 "psqueue.m"
  MR_Integer mercury__psqueue__Indent_3)
#line 1385 "psqueue.m"
{
#line 1387 "psqueue.m"
  {
#line 1387 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 1387 "psqueue.m"
    MR_String mercury__psqueue__IndentStr_4;
#line 1387 "psqueue.m"
    MR_Word mercury__psqueue__TypeCtorInfo_8_12 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 1387 "psqueue.m"
    MR_Integer mercury__psqueue__V_6_6 = (mercury__psqueue__Indent_3 * (MR_Integer) 2);
#line 1387 "psqueue.m"
    MR_Word mercury__psqueue__V_7_11;
#line 1387 "psqueue.m"
    MR_Word mercury__psqueue__V_6_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 145 "list.opt"
    {
#line 145 "list.opt"
      mercury__psqueue__V_7_11 = mercury__list__duplicate_2_3_f_0(mercury__psqueue__TypeCtorInfo_8_12, mercury__psqueue__V_6_6, ((MR_Box) (MR_Word) ((MR_Char) 32)), mercury__psqueue__V_6_19);
    }
#line 141 "string.opt"
    {
#line 141 "string.opt"
      mercury__string__from_char_list_2_p_0(mercury__psqueue__V_7_11, &mercury__psqueue__IndentStr_4);
    }
#line 1387 "psqueue.m"
    return mercury__psqueue__IndentStr_4;
#line 1387 "psqueue.m"
  }
#line 1385 "psqueue.m"
}

#line 1326 "psqueue.m"
static MR_bool MR_CALL 
mercury__psqueue__loser_split_keys_are_present_2_p_0(
#line 1326 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_12,
#line 1326 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_13,
#line 1326 "psqueue.m"
  MR_Word mercury__psqueue__PSQ_3,
#line 1326 "psqueue.m"
  MR_Word mercury__psqueue__LTree_4)
#line 1326 "psqueue.m"
{
#line 1332 "psqueue.m"
  while (MR_TRUE)
#line 1332 "psqueue.m"
    {
#line 1332 "psqueue.m"
      /* tailcall optimized into a loop */
#line 1332 "psqueue.m"
      {
#line 1332 "psqueue.m"
        MR_bool mercury__psqueue__succeeded;

#line 1332 "psqueue.m"
        if ((mercury__psqueue__LTree_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1331 "psqueue.m"
          mercury__psqueue__succeeded = MR_TRUE;
#line 1332 "psqueue.m"
        else
#line 1333 "psqueue.m"
          {
#line 1333 "psqueue.m"
            MR_Word mercury__psqueue__SubLTreeL_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 3)));
#line 1333 "psqueue.m"
            MR_Box mercury__psqueue__SplitKey_9 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 4));
#line 1333 "psqueue.m"
            MR_Word mercury__psqueue__SubLTreeR_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 5)));
#line 1333 "psqueue.m"
            MR_Word mercury__psqueue__Winner_17;
#line 1333 "psqueue.m"
            MR_Word mercury__psqueue__V_18_18;
#line 1333 "psqueue.m"
            MR_Integer mercury__psqueue__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 0)));
#line 1333 "psqueue.m"
            MR_Box mercury__psqueue__V_6_6 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 1));
#line 1333 "psqueue.m"
            MR_Box mercury__psqueue__V_7_7 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 2));
#line 937 "psqueue.m"
            MR_Box mercury__psqueue__V_11_11;

#line 8866 "psqueue.c"
            mercury__psqueue__succeeded = ((MR_tag((MR_Word) mercury__psqueue__PSQ_3)) == (MR_mktag((MR_Integer) 1)));
#line 8868 "psqueue.c"
            if (mercury__psqueue__succeeded)
#line 8870 "psqueue.c"
              {
#line 8872 "psqueue.c"
                mercury__psqueue__Winner_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_3, (MR_Integer) 0)));
#line 937 "psqueue.m"
                {
#line 937 "psqueue.m"
                  mercury__psqueue__V_18_18 = mercury__psqueue__get_tournament_view_1_f_0(mercury__psqueue__TypeInfo_for_P_12, mercury__psqueue__TypeInfo_for_K_13, mercury__psqueue__Winner_17);
                }
#line 937 "psqueue.m"
                {
#line 937 "psqueue.m"
                  mercury__psqueue__succeeded = mercury__psqueue__search_tv_3_p_0(mercury__psqueue__TypeInfo_for_P_12, mercury__psqueue__TypeInfo_for_K_13, mercury__psqueue__V_18_18, mercury__psqueue__SplitKey_9, &mercury__psqueue__V_11_11);
                }
#line 1333 "psqueue.m"
                if (mercury__psqueue__succeeded)
#line 1333 "psqueue.m"
                  {
#line 1335 "psqueue.m"
                    {
#line 1335 "psqueue.m"
                      mercury__psqueue__succeeded = mercury__psqueue__loser_split_keys_are_present_2_p_0(mercury__psqueue__TypeInfo_for_P_12, mercury__psqueue__TypeInfo_for_K_13, mercury__psqueue__PSQ_3, mercury__psqueue__SubLTreeL_8);
                    }
#line 1333 "psqueue.m"
                    if (mercury__psqueue__succeeded)
#line 1336 "psqueue.m"
                      {
#line 1336 "psqueue.m"
                        /* direct tailcall eliminated */
#line 1336 "psqueue.m"
                        {
#line 1336 "psqueue.m"
                          MR_Word mercury__psqueue__LTree__tmp_copy_4 = mercury__psqueue__SubLTreeR_10;

#line 1336 "psqueue.m"
                          mercury__psqueue__LTree_4 = mercury__psqueue__LTree__tmp_copy_4;
#line 1336 "psqueue.m"
                        }
#line 1336 "psqueue.m"
                        continue;
#line 1336 "psqueue.m"
                      }
#line 1333 "psqueue.m"
                  }
#line 8914 "psqueue.c"
              }
#line 1333 "psqueue.m"
          }
#line 1332 "psqueue.m"
        return mercury__psqueue__succeeded;
#line 1332 "psqueue.m"
      }
#line 1332 "psqueue.m"
      break;
#line 1332 "psqueue.m"
    }
#line 1326 "psqueue.m"
}

#line 1156 "psqueue.m"
MR_bool MR_CALL 
mercury__psqueue__loser_tree_has_search_property_1_p_0(
#line 1156 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_15,
#line 1156 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_16,
#line 1156 "psqueue.m"
  MR_Word mercury__psqueue__LTree_2)
#line 1156 "psqueue.m"
{
#line 1161 "psqueue.m"
  while (MR_TRUE)
#line 1161 "psqueue.m"
    {
#line 1161 "psqueue.m"
      /* tailcall optimized into a loop */
#line 1161 "psqueue.m"
      {
#line 1161 "psqueue.m"
        MR_bool mercury__psqueue__succeeded;

#line 1161 "psqueue.m"
        if ((mercury__psqueue__LTree_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1160 "psqueue.m"
          mercury__psqueue__succeeded = MR_TRUE;
#line 1161 "psqueue.m"
        else
#line 1162 "psqueue.m"
          {
#line 1162 "psqueue.m"
            MR_Word mercury__psqueue__SubLTreeL_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_2, (MR_Integer) 3)));
#line 1162 "psqueue.m"
            MR_Box mercury__psqueue__SplitKey_7 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_2, (MR_Integer) 4));
#line 1162 "psqueue.m"
            MR_Word mercury__psqueue__SubLTreeR_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_2, (MR_Integer) 5)));
#line 1162 "psqueue.m"
            MR_Word mercury__psqueue__MaybeMaxKeyL_9;
#line 1162 "psqueue.m"
            MR_Word mercury__psqueue__MaybeMinKeyR_10;
#line 1162 "psqueue.m"
            MR_Integer mercury__psqueue__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_2, (MR_Integer) 0)));
#line 1162 "psqueue.m"
            MR_Box mercury__psqueue__V_4_4 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_2, (MR_Integer) 1));
#line 1162 "psqueue.m"
            MR_Box mercury__psqueue__V_5_5 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_2, (MR_Integer) 2));

#line 1232 "psqueue.m"
            if ((mercury__psqueue__SubLTreeL_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1231 "psqueue.m"
              mercury__psqueue__MaybeMaxKeyL_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1232 "psqueue.m"
            else
#line 1233 "psqueue.m"
              {
#line 1233 "psqueue.m"
                MR_Word mercury__psqueue__SubLTreeL_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeL_6, (MR_Integer) 3)));
#line 1233 "psqueue.m"
                MR_Word mercury__psqueue__SubLTreeR_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeL_6, (MR_Integer) 5)));
#line 1233 "psqueue.m"
                MR_Box mercury__psqueue__CurMax_25 = (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeL_6, (MR_Integer) 2));
#line 1233 "psqueue.m"
                MR_Word mercury__psqueue__MaybeMaxKeyL_26;
#line 1233 "psqueue.m"
                MR_Word mercury__psqueue__MaybeMaxKeyR_27;
#line 1233 "psqueue.m"
                MR_Box mercury__psqueue__MaxKey_28;
#line 1233 "psqueue.m"
                MR_Integer mercury__psqueue__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeL_6, (MR_Integer) 0)));
#line 1233 "psqueue.m"
                MR_Box mercury__psqueue__V_20_20 = (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeL_6, (MR_Integer) 1));
#line 1233 "psqueue.m"
                MR_Box mercury__psqueue__V_23_23 = (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeL_6, (MR_Integer) 4));

#line 1235 "psqueue.m"
                {
#line 1235 "psqueue.m"
                  mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_120_95_107_101_121_95_105_110_95_108_111_115_101_114_95_116_114_101_101_95_97_99_99_95_95_91_49_93_95_48_3_p_0(mercury__psqueue__TypeInfo_for_K_16, mercury__psqueue__SubLTreeL_22, mercury__psqueue__CurMax_25, &mercury__psqueue__MaybeMaxKeyL_26);
                }
#line 1236 "psqueue.m"
                {
#line 1236 "psqueue.m"
                  mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_120_95_107_101_121_95_105_110_95_108_111_115_101_114_95_116_114_101_101_95_97_99_99_95_95_91_49_93_95_48_3_p_0(mercury__psqueue__TypeInfo_for_K_16, mercury__psqueue__SubLTreeR_24, mercury__psqueue__CurMax_25, &mercury__psqueue__MaybeMaxKeyR_27);
                }
#line 1295 "psqueue.m"
                if ((mercury__psqueue__MaybeMaxKeyL_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1295 "psqueue.m"
                  if ((mercury__psqueue__MaybeMaxKeyR_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1292 "psqueue.m"
                    mercury__psqueue__MaxKey_28 = mercury__psqueue__CurMax_25;
#line 1295 "psqueue.m"
                  else
#line 1300 "psqueue.m"
                    {
#line 1300 "psqueue.m"
                      MR_Box mercury__psqueue__R_34 = (MR_hl_field(MR_mktag(1), mercury__psqueue__MaybeMaxKeyR_27, (MR_Integer) 0));
#line 1042 "psqueue.m"
                      MR_Word mercury__psqueue__CMP_44;

#line 1043 "psqueue.m"
                      {
#line 1043 "psqueue.m"
                        mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_16, &mercury__psqueue__CMP_44, mercury__psqueue__CurMax_25, mercury__psqueue__R_34);
                      }
#line 1045 "psqueue.m"
                      if ((mercury__psqueue__CMP_44 == (MR_Integer) 1))
#line 1044 "psqueue.m"
                        mercury__psqueue__succeeded = MR_TRUE;
#line 1045 "psqueue.m"
                      else
#line 1045 "psqueue.m"
                        if ((mercury__psqueue__CMP_44 == (MR_Integer) 0))
#line 1045 "psqueue.m"
                          mercury__psqueue__succeeded = MR_TRUE;
#line 1045 "psqueue.m"
                        else
#line 1045 "psqueue.m"
                          mercury__psqueue__succeeded = MR_FALSE;
#line 1064 "psqueue.m"
                      if (mercury__psqueue__succeeded)
#line 1063 "psqueue.m"
                        mercury__psqueue__MaxKey_28 = mercury__psqueue__R_34;
#line 1064 "psqueue.m"
                      else
#line 1065 "psqueue.m"
                        mercury__psqueue__MaxKey_28 = mercury__psqueue__CurMax_25;
#line 1300 "psqueue.m"
                    }
#line 1295 "psqueue.m"
                else
#line 1295 "psqueue.m"
                  {
#line 1295 "psqueue.m"
                    MR_Box mercury__psqueue__V_38_38 = (MR_hl_field(MR_mktag(1), mercury__psqueue__MaybeMaxKeyL_26, (MR_Integer) 0));

#line 1295 "psqueue.m"
                    if ((mercury__psqueue__MaybeMaxKeyR_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1064 "psqueue.m"
                      {
#line 1042 "psqueue.m"
                        MR_Word mercury__psqueue__CMP_50;

#line 1043 "psqueue.m"
                        {
#line 1043 "psqueue.m"
                          mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_16, &mercury__psqueue__CMP_50, mercury__psqueue__CurMax_25, mercury__psqueue__V_38_38);
                        }
#line 1045 "psqueue.m"
                        if ((mercury__psqueue__CMP_50 == (MR_Integer) 1))
#line 1044 "psqueue.m"
                          mercury__psqueue__succeeded = MR_TRUE;
#line 1045 "psqueue.m"
                        else
#line 1045 "psqueue.m"
                          if ((mercury__psqueue__CMP_50 == (MR_Integer) 0))
#line 1045 "psqueue.m"
                            mercury__psqueue__succeeded = MR_TRUE;
#line 1045 "psqueue.m"
                          else
#line 1045 "psqueue.m"
                            mercury__psqueue__succeeded = MR_FALSE;
#line 1064 "psqueue.m"
                        if (mercury__psqueue__succeeded)
#line 1063 "psqueue.m"
                          mercury__psqueue__MaxKey_28 = mercury__psqueue__V_38_38;
#line 1064 "psqueue.m"
                        else
#line 1065 "psqueue.m"
                          mercury__psqueue__MaxKey_28 = mercury__psqueue__CurMax_25;
#line 1064 "psqueue.m"
                      }
#line 1295 "psqueue.m"
                    else
#line 1304 "psqueue.m"
                      {
#line 1304 "psqueue.m"
                        MR_Box mercury__psqueue__V_35_35;
#line 1304 "psqueue.m"
                        MR_Box mercury__psqueue__R_37 = (MR_hl_field(MR_mktag(1), mercury__psqueue__MaybeMaxKeyR_27, (MR_Integer) 0));
#line 1042 "psqueue.m"
                        MR_Word mercury__psqueue__CMP_56;
#line 1042 "psqueue.m"
                        MR_Word mercury__psqueue__CMP_62;

#line 1043 "psqueue.m"
                        {
#line 1043 "psqueue.m"
                          mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_16, &mercury__psqueue__CMP_56, mercury__psqueue__V_38_38, mercury__psqueue__R_37);
                        }
#line 1045 "psqueue.m"
                        if ((mercury__psqueue__CMP_56 == (MR_Integer) 1))
#line 1044 "psqueue.m"
                          mercury__psqueue__succeeded = MR_TRUE;
#line 1045 "psqueue.m"
                        else
#line 1045 "psqueue.m"
                          if ((mercury__psqueue__CMP_56 == (MR_Integer) 0))
#line 1045 "psqueue.m"
                            mercury__psqueue__succeeded = MR_TRUE;
#line 1045 "psqueue.m"
                          else
#line 1045 "psqueue.m"
                            mercury__psqueue__succeeded = MR_FALSE;
#line 1064 "psqueue.m"
                        if (mercury__psqueue__succeeded)
#line 1063 "psqueue.m"
                          mercury__psqueue__V_35_35 = mercury__psqueue__R_37;
#line 1064 "psqueue.m"
                        else
#line 1065 "psqueue.m"
                          mercury__psqueue__V_35_35 = mercury__psqueue__V_38_38;
#line 1043 "psqueue.m"
                        {
#line 1043 "psqueue.m"
                          mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_16, &mercury__psqueue__CMP_62, mercury__psqueue__CurMax_25, mercury__psqueue__V_35_35);
                        }
#line 1045 "psqueue.m"
                        if ((mercury__psqueue__CMP_62 == (MR_Integer) 1))
#line 1044 "psqueue.m"
                          mercury__psqueue__succeeded = MR_TRUE;
#line 1045 "psqueue.m"
                        else
#line 1045 "psqueue.m"
                          if ((mercury__psqueue__CMP_62 == (MR_Integer) 0))
#line 1045 "psqueue.m"
                            mercury__psqueue__succeeded = MR_TRUE;
#line 1045 "psqueue.m"
                          else
#line 1045 "psqueue.m"
                            mercury__psqueue__succeeded = MR_FALSE;
#line 1064 "psqueue.m"
                        if (mercury__psqueue__succeeded)
#line 1063 "psqueue.m"
                          mercury__psqueue__MaxKey_28 = mercury__psqueue__V_35_35;
#line 1064 "psqueue.m"
                        else
#line 1065 "psqueue.m"
                          mercury__psqueue__MaxKey_28 = mercury__psqueue__CurMax_25;
#line 1304 "psqueue.m"
                      }
#line 1295 "psqueue.m"
                  }
#line 1238 "psqueue.m"
                {
#line 1238 "psqueue.m"
                  mercury__psqueue__MaybeMaxKeyL_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1238 "psqueue.m"
                  MR_hl_field(MR_mktag(1), mercury__psqueue__MaybeMaxKeyL_9, 0) = mercury__psqueue__MaxKey_28;
#line 1238 "psqueue.m"
                }
#line 1233 "psqueue.m"
              }
#line 1164 "psqueue.m"
            {
#line 1164 "psqueue.m"
              mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_105_110_95_107_101_121_95_105_110_95_108_111_115_101_114_95_116_114_101_101_95_95_91_49_93_95_48_2_p_0(mercury__psqueue__TypeInfo_for_K_16, mercury__psqueue__SubLTreeR_8, &mercury__psqueue__MaybeMinKeyR_10);
            }
#line 1167 "psqueue.m"
            if ((mercury__psqueue__MaybeMaxKeyL_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1166 "psqueue.m"
              mercury__psqueue__succeeded = MR_TRUE;
#line 1167 "psqueue.m"
            else
#line 1168 "psqueue.m"
              {
#line 1168 "psqueue.m"
                MR_Box mercury__psqueue__MaxKeyL_11 = (MR_hl_field(MR_mktag(1), mercury__psqueue__MaybeMaxKeyL_9, (MR_Integer) 0));
#line 1168 "psqueue.m"
                MR_Word mercury__psqueue__CMPL_12;

#line 1169 "psqueue.m"
                {
#line 1169 "psqueue.m"
                  mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_16, &mercury__psqueue__CMPL_12, mercury__psqueue__MaxKeyL_11, mercury__psqueue__SplitKey_7);
                }
#line 1170 "psqueue.m"
                if ((mercury__psqueue__CMPL_12 == (MR_Integer) 1))
#line 1170 "psqueue.m"
                  mercury__psqueue__succeeded = MR_TRUE;
#line 1170 "psqueue.m"
                else
#line 1170 "psqueue.m"
                  if ((mercury__psqueue__CMPL_12 == (MR_Integer) 0))
#line 1170 "psqueue.m"
                    mercury__psqueue__succeeded = MR_TRUE;
#line 1170 "psqueue.m"
                  else
#line 1170 "psqueue.m"
                    mercury__psqueue__succeeded = MR_FALSE;
#line 1168 "psqueue.m"
                if (mercury__psqueue__succeeded)
#line 1171 "psqueue.m"
                  {
#line 1171 "psqueue.m"
                    mercury__psqueue__succeeded = mercury__psqueue__loser_tree_has_search_property_1_p_0(mercury__psqueue__TypeInfo_for_P_15, mercury__psqueue__TypeInfo_for_K_16, mercury__psqueue__SubLTreeL_6);
                  }
#line 1168 "psqueue.m"
              }
#line 1162 "psqueue.m"
            if (mercury__psqueue__succeeded)
#line 1175 "psqueue.m"
              {
#line 1175 "psqueue.m"
                if ((mercury__psqueue__MaybeMinKeyR_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1174 "psqueue.m"
                  mercury__psqueue__succeeded = MR_TRUE;
#line 1175 "psqueue.m"
                else
#line 1176 "psqueue.m"
                  {
#line 1176 "psqueue.m"
                    MR_Box mercury__psqueue__MinKeyR_13 = (MR_hl_field(MR_mktag(1), mercury__psqueue__MaybeMinKeyR_10, (MR_Integer) 0));
#line 1176 "psqueue.m"
                    MR_Word mercury__psqueue__CMPR_14;

#line 1177 "psqueue.m"
                    {
#line 1177 "psqueue.m"
                      mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_16, &mercury__psqueue__CMPR_14, mercury__psqueue__MinKeyR_13, mercury__psqueue__SplitKey_7);
                    }
#line 1178 "psqueue.m"
                    mercury__psqueue__succeeded = (mercury__psqueue__CMPR_14 == (MR_Integer) 2);
#line 1176 "psqueue.m"
                    if (mercury__psqueue__succeeded)
#line 1179 "psqueue.m"
                      {
#line 1179 "psqueue.m"
                        /* direct tailcall eliminated */
#line 1179 "psqueue.m"
                        {
#line 1179 "psqueue.m"
                          MR_Word mercury__psqueue__LTree__tmp_copy_2 = mercury__psqueue__SubLTreeR_8;

#line 1179 "psqueue.m"
                          mercury__psqueue__LTree_2 = mercury__psqueue__LTree__tmp_copy_2;
#line 1179 "psqueue.m"
                        }
#line 1179 "psqueue.m"
                        continue;
#line 1179 "psqueue.m"
                      }
#line 1176 "psqueue.m"
                  }
#line 1175 "psqueue.m"
              }
#line 1162 "psqueue.m"
          }
#line 1161 "psqueue.m"
        return mercury__psqueue__succeeded;
#line 1161 "psqueue.m"
      }
#line 1161 "psqueue.m"
      break;
#line 1161 "psqueue.m"
    }
#line 1156 "psqueue.m"
}

#line 1099 "psqueue.m"
static MR_bool MR_CALL 
mercury__psqueue__all_nodes_obey_semi_heap_1_p_0(
#line 1099 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_12,
#line 1099 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_13,
#line 1099 "psqueue.m"
  MR_Word mercury__psqueue__LTree_2)
#line 1099 "psqueue.m"
{
#line 1104 "psqueue.m"
  while (MR_TRUE)
#line 1104 "psqueue.m"
    {
#line 1104 "psqueue.m"
      /* tailcall optimized into a loop */
#line 1104 "psqueue.m"
      {
#line 1104 "psqueue.m"
        MR_bool mercury__psqueue__succeeded;

#line 1104 "psqueue.m"
        if ((mercury__psqueue__LTree_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1103 "psqueue.m"
          mercury__psqueue__succeeded = MR_TRUE;
#line 1104 "psqueue.m"
        else
#line 1105 "psqueue.m"
          {
#line 1105 "psqueue.m"
            MR_Box mercury__psqueue__Prio_4 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_2, (MR_Integer) 1));
#line 1105 "psqueue.m"
            MR_Box mercury__psqueue__Key_5 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_2, (MR_Integer) 2));
#line 1105 "psqueue.m"
            MR_Word mercury__psqueue__SubLTreeL_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_2, (MR_Integer) 3)));
#line 1105 "psqueue.m"
            MR_Box mercury__psqueue__SplitKey_7 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_2, (MR_Integer) 4));
#line 1105 "psqueue.m"
            MR_Word mercury__psqueue__SubLTreeR_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_2, (MR_Integer) 5)));
#line 1105 "psqueue.m"
            MR_Word mercury__psqueue__MaybeMinPrio_9;
#line 1105 "psqueue.m"
            MR_Integer mercury__psqueue__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_2, (MR_Integer) 0)));
#line 1042 "psqueue.m"
            MR_Word mercury__psqueue__CMP_16;

#line 1043 "psqueue.m"
            {
#line 1043 "psqueue.m"
              mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_13, &mercury__psqueue__CMP_16, mercury__psqueue__Key_5, mercury__psqueue__SplitKey_7);
            }
#line 1045 "psqueue.m"
            if ((mercury__psqueue__CMP_16 == (MR_Integer) 1))
#line 1044 "psqueue.m"
              mercury__psqueue__succeeded = MR_TRUE;
#line 1045 "psqueue.m"
            else
#line 1045 "psqueue.m"
              if ((mercury__psqueue__CMP_16 == (MR_Integer) 0))
#line 1045 "psqueue.m"
                mercury__psqueue__succeeded = MR_TRUE;
#line 1045 "psqueue.m"
              else
#line 1045 "psqueue.m"
                mercury__psqueue__succeeded = MR_FALSE;
#line 1108 "psqueue.m"
            if (mercury__psqueue__succeeded)
#line 1107 "psqueue.m"
              {
#line 1107 "psqueue.m"
                mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_105_110_95_112_114_105_111_95_105_110_95_108_111_115_101_114_95_116_114_101_101_95_97_99_99_95_95_91_50_93_95_48_3_p_0(mercury__psqueue__TypeInfo_for_P_12, mercury__psqueue__SubLTreeL_6, mercury__psqueue__Prio_4, &mercury__psqueue__MaybeMinPrio_9);
              }
#line 1108 "psqueue.m"
            else
#line 1109 "psqueue.m"
              {
#line 1109 "psqueue.m"
                mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_105_110_95_112_114_105_111_95_105_110_95_108_111_115_101_114_95_116_114_101_101_95_97_99_99_95_95_91_50_93_95_48_3_p_0(mercury__psqueue__TypeInfo_for_P_12, mercury__psqueue__SubLTreeR_8, mercury__psqueue__Prio_4, &mercury__psqueue__MaybeMinPrio_9);
              }
#line 1113 "psqueue.m"
            if ((mercury__psqueue__MaybeMinPrio_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1112 "psqueue.m"
              mercury__psqueue__succeeded = MR_TRUE;
#line 1113 "psqueue.m"
            else
#line 1114 "psqueue.m"
              {
#line 1114 "psqueue.m"
                MR_Box mercury__psqueue__MinPrio_10 = (MR_hl_field(MR_mktag(1), mercury__psqueue__MaybeMinPrio_9, (MR_Integer) 0));
#line 1114 "psqueue.m"
                MR_Word mercury__psqueue__CMP_11;

#line 1115 "psqueue.m"
                {
#line 1115 "psqueue.m"
                  mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_P_12, &mercury__psqueue__CMP_11, mercury__psqueue__Prio_4, mercury__psqueue__MinPrio_10);
                }
#line 1116 "psqueue.m"
                mercury__psqueue__succeeded = (mercury__psqueue__CMP_11 == (MR_Integer) 0);
#line 1114 "psqueue.m"
              }
#line 1105 "psqueue.m"
            if (mercury__psqueue__succeeded)
#line 1105 "psqueue.m"
              {
#line 1118 "psqueue.m"
                {
#line 1118 "psqueue.m"
                  mercury__psqueue__succeeded = mercury__psqueue__all_nodes_obey_semi_heap_1_p_0(mercury__psqueue__TypeInfo_for_P_12, mercury__psqueue__TypeInfo_for_K_13, mercury__psqueue__SubLTreeL_6);
                }
#line 1105 "psqueue.m"
                if (mercury__psqueue__succeeded)
#line 1119 "psqueue.m"
                  {
#line 1119 "psqueue.m"
                    /* direct tailcall eliminated */
#line 1119 "psqueue.m"
                    {
#line 1119 "psqueue.m"
                      MR_Word mercury__psqueue__LTree__tmp_copy_2 = mercury__psqueue__SubLTreeR_8;

#line 1119 "psqueue.m"
                      mercury__psqueue__LTree_2 = mercury__psqueue__LTree__tmp_copy_2;
#line 1119 "psqueue.m"
                    }
#line 1119 "psqueue.m"
                    continue;
#line 1119 "psqueue.m"
                  }
#line 1105 "psqueue.m"
              }
#line 1105 "psqueue.m"
          }
#line 1104 "psqueue.m"
        return mercury__psqueue__succeeded;
#line 1104 "psqueue.m"
      }
#line 1104 "psqueue.m"
      break;
#line 1104 "psqueue.m"
    }
#line 1099 "psqueue.m"
}

#line 1039 "psqueue.m"
MR_bool MR_CALL 
mercury__psqueue__leq_2_p_0(
#line 1039 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_V_6,
#line 1039 "psqueue.m"
  MR_Box mercury__psqueue__ValLeft_3,
#line 1039 "psqueue.m"
  MR_Box mercury__psqueue__ValRight_4)
#line 1039 "psqueue.m"
{
#line 1042 "psqueue.m"
  {
#line 1042 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 1042 "psqueue.m"
    MR_Word mercury__psqueue__CMP_5;

#line 1043 "psqueue.m"
    {
#line 1043 "psqueue.m"
      mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_V_6, &mercury__psqueue__CMP_5, mercury__psqueue__ValLeft_3, mercury__psqueue__ValRight_4);
    }
#line 1045 "psqueue.m"
    if ((mercury__psqueue__CMP_5 == (MR_Integer) 1))
#line 1044 "psqueue.m"
      mercury__psqueue__succeeded = MR_TRUE;
#line 1045 "psqueue.m"
    else
#line 1045 "psqueue.m"
      if ((mercury__psqueue__CMP_5 == (MR_Integer) 0))
#line 1045 "psqueue.m"
        mercury__psqueue__succeeded = MR_TRUE;
#line 1045 "psqueue.m"
      else
#line 1045 "psqueue.m"
        mercury__psqueue__succeeded = MR_FALSE;
#line 1042 "psqueue.m"
    return mercury__psqueue__succeeded;
#line 1042 "psqueue.m"
  }
#line 1039 "psqueue.m"
}

#line 986 "psqueue.m"
void MR_CALL 
mercury__psqueue__at_most_in_winner_3_p_0(
#line 986 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_20,
#line 986 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_21,
#line 986 "psqueue.m"
  MR_Word mercury__psqueue__Winner_4,
#line 986 "psqueue.m"
  MR_Box mercury__psqueue__MaxPrio_5,
#line 986 "psqueue.m"
  MR_Word * mercury__psqueue__Cord_6)
#line 986 "psqueue.m"
{
#line 990 "psqueue.m"
  {
#line 990 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 990 "psqueue.m"
    MR_Box mercury__psqueue__WinnerPrio_7 = (MR_hl_field(MR_mktag(0), mercury__psqueue__Winner_4, (MR_Integer) 0));
#line 990 "psqueue.m"
    MR_Word mercury__psqueue__CMP_11;
#line 991 "psqueue.m"
    MR_Box mercury__psqueue__V_8_8 = (MR_hl_field(MR_mktag(0), mercury__psqueue__Winner_4, (MR_Integer) 1));
#line 991 "psqueue.m"
    MR_Word mercury__psqueue__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__psqueue__Winner_4, (MR_Integer) 2)));
#line 991 "psqueue.m"
    MR_Box mercury__psqueue__V_10_10 = (MR_hl_field(MR_mktag(0), mercury__psqueue__Winner_4, (MR_Integer) 3));

#line 992 "psqueue.m"
    {
#line 992 "psqueue.m"
      mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_P_20, &mercury__psqueue__CMP_11, mercury__psqueue__WinnerPrio_7, mercury__psqueue__MaxPrio_5);
    }
#line 996 "psqueue.m"
    if ((mercury__psqueue__CMP_11 == (MR_Integer) 2))
#line 61 "cord.opt"
      *mercury__psqueue__Cord_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 996 "psqueue.m"
    else
#line 999 "psqueue.m"
      {
#line 999 "psqueue.m"
        MR_Word mercury__psqueue__TournamentView_12;

#line 1000 "psqueue.m"
        {
#line 1000 "psqueue.m"
          mercury__psqueue__TournamentView_12 = mercury__psqueue__get_tournament_view_1_f_0(mercury__psqueue__TypeInfo_for_P_20, mercury__psqueue__TypeInfo_for_K_21, mercury__psqueue__Winner_4);
        }
#line 1004 "psqueue.m"
        if (((MR_tag((MR_Word) mercury__psqueue__TournamentView_12)) == (MR_mktag((MR_Integer) 0))))
#line 1002 "psqueue.m"
          {
#line 1002 "psqueue.m"
            MR_Box mercury__psqueue__SinglePrio_13 = (MR_hl_field(MR_mktag(0), mercury__psqueue__TournamentView_12, (MR_Integer) 0));
#line 1002 "psqueue.m"
            MR_Box mercury__psqueue__SingleKey_14 = (MR_hl_field(MR_mktag(0), mercury__psqueue__TournamentView_12, (MR_Integer) 1));
#line 1002 "psqueue.m"
            MR_Word mercury__psqueue__V_19_19;
#line 1002 "psqueue.m"
            MR_Word mercury__psqueue__V_4_29;

#line 1003 "psqueue.m"
            {
#line 1003 "psqueue.m"
              mercury__psqueue__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1003 "psqueue.m"
              MR_hl_field(MR_mktag(0), mercury__psqueue__V_19_19, 0) = mercury__psqueue__SinglePrio_13;
#line 1003 "psqueue.m"
              MR_hl_field(MR_mktag(0), mercury__psqueue__V_19_19, 1) = mercury__psqueue__SingleKey_14;
#line 1003 "psqueue.m"
            }
#line 65 "cord.opt"
            {
#line 65 "cord.opt"
              mercury__psqueue__V_4_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 65 "cord.opt"
              MR_hl_field(MR_mktag(0), mercury__psqueue__V_4_29, 0) = ((MR_Box) (mercury__psqueue__V_19_19));
#line 65 "cord.opt"
            }
#line 64 "cord.opt"
            {
#line 64 "cord.opt"
              MR_Word base;
#line 64 "cord.opt"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 64 "cord.opt"
              *mercury__psqueue__Cord_6 = base;
#line 64 "cord.opt"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__psqueue__V_4_29));
#line 64 "cord.opt"
            }
#line 1002 "psqueue.m"
          }
#line 1004 "psqueue.m"
        else
#line 1005 "psqueue.m"
          {
#line 1005 "psqueue.m"
            MR_Word mercury__psqueue__TypeCtorInfo_26_26;
#line 1005 "psqueue.m"
            MR_Word mercury__psqueue__TypeInfo_27_27;
#line 1005 "psqueue.m"
            MR_Word mercury__psqueue__WinnerA_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__TournamentView_12, (MR_Integer) 0)));
#line 1005 "psqueue.m"
            MR_Word mercury__psqueue__WinnerB_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__TournamentView_12, (MR_Integer) 1)));
#line 1005 "psqueue.m"
            MR_Word mercury__psqueue__CordA_17;
#line 1005 "psqueue.m"
            MR_Word mercury__psqueue__CordB_18;
#line 1008 "psqueue.m"
            MR_Word mercury__psqueue__conv0_Cord_6;

#line 1006 "psqueue.m"
            {
#line 1006 "psqueue.m"
              mercury__psqueue__at_most_in_winner_3_p_0(mercury__psqueue__TypeInfo_for_P_20, mercury__psqueue__TypeInfo_for_K_21, mercury__psqueue__WinnerA_15, mercury__psqueue__MaxPrio_5, &mercury__psqueue__CordA_17);
            }
#line 1007 "psqueue.m"
            {
#line 1007 "psqueue.m"
              mercury__psqueue__at_most_in_winner_3_p_0(mercury__psqueue__TypeInfo_for_P_20, mercury__psqueue__TypeInfo_for_K_21, mercury__psqueue__WinnerB_16, mercury__psqueue__MaxPrio_5, &mercury__psqueue__CordB_18);
            }
#line 9601 "psqueue.c"
            mercury__psqueue__TypeCtorInfo_26_26 = (MR_Word) &mercury__pair__pair__type_ctor_info_pair_2;
#line 9603 "psqueue.c"
            {
#line 9605 "psqueue.c"
              mercury__psqueue__TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 9607 "psqueue.c"
              MR_hl_field(MR_mktag(0), mercury__psqueue__TypeInfo_27_27, 0) = ((MR_Box) (mercury__psqueue__TypeCtorInfo_26_26));
#line 9609 "psqueue.c"
              MR_hl_field(MR_mktag(0), mercury__psqueue__TypeInfo_27_27, 1) = ((MR_Box) (mercury__psqueue__TypeInfo_for_P_20));
#line 9611 "psqueue.c"
              MR_hl_field(MR_mktag(0), mercury__psqueue__TypeInfo_27_27, 2) = ((MR_Box) (mercury__psqueue__TypeInfo_for_K_21));
#line 9613 "psqueue.c"
            }
#line 1008 "psqueue.m"
            {
#line 1008 "psqueue.m"
              mercury__psqueue__conv0_Cord_6 = mercury__cord__f_43_43_2_f_0(mercury__psqueue__TypeInfo_27_27, (MR_Word) mercury__psqueue__CordA_17, (MR_Word) mercury__psqueue__CordB_18);
            }
#line 1008 "psqueue.m"
            *mercury__psqueue__Cord_6 = (MR_Word) mercury__psqueue__conv0_Cord_6;
#line 1005 "psqueue.m"
          }
#line 999 "psqueue.m"
      }
#line 990 "psqueue.m"
  }
#line 986 "psqueue.m"
}

#line 940 "psqueue.m"
MR_bool MR_CALL 
mercury__psqueue__search_tv_3_p_0(
#line 940 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_17,
#line 940 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_18,
#line 940 "psqueue.m"
  MR_Word mercury__psqueue__TournamentView_4,
#line 940 "psqueue.m"
  MR_Box mercury__psqueue__SearchKey_5,
#line 940 "psqueue.m"
  MR_Box * mercury__psqueue__MatchingPrio_6)
#line 940 "psqueue.m"
{
#line 951 "psqueue.m"
  while (MR_TRUE)
#line 951 "psqueue.m"
    {
#line 951 "psqueue.m"
      /* tailcall optimized into a loop */
#line 951 "psqueue.m"
      {
#line 951 "psqueue.m"
        MR_bool mercury__psqueue__succeeded;

#line 951 "psqueue.m"
        if (((MR_tag((MR_Word) mercury__psqueue__TournamentView_4)) == (MR_mktag((MR_Integer) 0))))
#line 945 "psqueue.m"
          {
#line 945 "psqueue.m"
            MR_Box mercury__psqueue__Key_8;

#line 945 "psqueue.m"
            *mercury__psqueue__MatchingPrio_6 = (MR_hl_field(MR_mktag(0), mercury__psqueue__TournamentView_4, (MR_Integer) 0));
#line 945 "psqueue.m"
            mercury__psqueue__Key_8 = (MR_hl_field(MR_mktag(0), mercury__psqueue__TournamentView_4, (MR_Integer) 1));
#line 946 "psqueue.m"
            {
#line 946 "psqueue.m"
              return mercury__psqueue__succeeded = mercury__builtin__unify_2_p_0(mercury__psqueue__TypeInfo_for_K_18, mercury__psqueue__Key_8, mercury__psqueue__SearchKey_5);
            }
#line 945 "psqueue.m"
          }
#line 951 "psqueue.m"
        else
#line 952 "psqueue.m"
          {
#line 952 "psqueue.m"
            MR_Word mercury__psqueue__WinnerA_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__TournamentView_4, (MR_Integer) 0)));
#line 952 "psqueue.m"
            MR_Word mercury__psqueue__WinnerB_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__TournamentView_4, (MR_Integer) 1)));
#line 952 "psqueue.m"
            MR_Box mercury__psqueue__MaxKeyA_14 = (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_9, (MR_Integer) 3));
#line 953 "psqueue.m"
            MR_Box mercury__psqueue__V_11_11 = (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_9, (MR_Integer) 0));
#line 953 "psqueue.m"
            MR_Box mercury__psqueue__V_12_12 = (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_9, (MR_Integer) 1));
#line 953 "psqueue.m"
            MR_Word mercury__psqueue__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_9, (MR_Integer) 2)));
#line 1042 "psqueue.m"
            MR_Word mercury__psqueue__CMP_21;

#line 1043 "psqueue.m"
            {
#line 1043 "psqueue.m"
              mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_18, &mercury__psqueue__CMP_21, mercury__psqueue__SearchKey_5, mercury__psqueue__MaxKeyA_14);
            }
#line 1045 "psqueue.m"
            if ((mercury__psqueue__CMP_21 == (MR_Integer) 1))
#line 1044 "psqueue.m"
              mercury__psqueue__succeeded = MR_TRUE;
#line 1045 "psqueue.m"
            else
#line 1045 "psqueue.m"
              if ((mercury__psqueue__CMP_21 == (MR_Integer) 0))
#line 1045 "psqueue.m"
                mercury__psqueue__succeeded = MR_TRUE;
#line 1045 "psqueue.m"
              else
#line 1045 "psqueue.m"
                mercury__psqueue__succeeded = MR_FALSE;
#line 956 "psqueue.m"
            if (mercury__psqueue__succeeded)
#line 955 "psqueue.m"
              {
#line 955 "psqueue.m"
                MR_Word mercury__psqueue__V_15_15;

#line 955 "psqueue.m"
                {
#line 955 "psqueue.m"
                  mercury__psqueue__V_15_15 = mercury__psqueue__get_tournament_view_1_f_0(mercury__psqueue__TypeInfo_for_P_17, mercury__psqueue__TypeInfo_for_K_18, mercury__psqueue__WinnerA_9);
                }
#line 955 "psqueue.m"
                /* direct tailcall eliminated */
#line 955 "psqueue.m"
                {
#line 955 "psqueue.m"
                  MR_Word mercury__psqueue__TournamentView__tmp_copy_4 = mercury__psqueue__V_15_15;

#line 955 "psqueue.m"
                  mercury__psqueue__TournamentView_4 = mercury__psqueue__TournamentView__tmp_copy_4;
#line 955 "psqueue.m"
                }
#line 955 "psqueue.m"
                continue;
#line 955 "psqueue.m"
              }
#line 956 "psqueue.m"
            else
#line 957 "psqueue.m"
              {
#line 957 "psqueue.m"
                MR_Word mercury__psqueue__V_16_16;

#line 957 "psqueue.m"
                {
#line 957 "psqueue.m"
                  mercury__psqueue__V_16_16 = mercury__psqueue__get_tournament_view_1_f_0(mercury__psqueue__TypeInfo_for_P_17, mercury__psqueue__TypeInfo_for_K_18, mercury__psqueue__WinnerB_10);
                }
#line 957 "psqueue.m"
                /* direct tailcall eliminated */
#line 957 "psqueue.m"
                {
#line 957 "psqueue.m"
                  MR_Word mercury__psqueue__TournamentView__tmp_copy_4 = mercury__psqueue__V_16_16;

#line 957 "psqueue.m"
                  mercury__psqueue__TournamentView_4 = mercury__psqueue__TournamentView__tmp_copy_4;
#line 957 "psqueue.m"
                }
#line 957 "psqueue.m"
                continue;
#line 957 "psqueue.m"
              }
#line 952 "psqueue.m"
          }
#line 951 "psqueue.m"
        return mercury__psqueue__succeeded;
#line 951 "psqueue.m"
      }
#line 951 "psqueue.m"
      break;
#line 951 "psqueue.m"
    }
#line 940 "psqueue.m"
}

#line 899 "psqueue.m"
MR_bool MR_CALL 
mercury__psqueue__adjust_tv_4_p_0(
#line 899 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_22,
#line 899 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_23,
#line 899 "psqueue.m"
  MR_Word mercury__psqueue__AdjustFunc_5,
#line 899 "psqueue.m"
  MR_Box mercury__psqueue__SearchKey_6,
#line 899 "psqueue.m"
  MR_Word mercury__psqueue__TournamentView_7,
#line 899 "psqueue.m"
  MR_Word * mercury__psqueue__Winner_8)
#line 899 "psqueue.m"
{
#line 912 "psqueue.m"
  {
#line 912 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;

#line 912 "psqueue.m"
    if (((MR_tag((MR_Word) mercury__psqueue__TournamentView_7)) == (MR_mktag((MR_Integer) 0))))
#line 905 "psqueue.m"
      {
#line 905 "psqueue.m"
        MR_Box mercury__psqueue__Prio_9 = (MR_hl_field(MR_mktag(0), mercury__psqueue__TournamentView_7, (MR_Integer) 0));
#line 905 "psqueue.m"
        MR_Box mercury__psqueue__Key_10 = (MR_hl_field(MR_mktag(0), mercury__psqueue__TournamentView_7, (MR_Integer) 1));
#line 905 "psqueue.m"
        MR_Box mercury__psqueue__V_21_21;
#line 905 "psqueue.m"
        MR_Word mercury__psqueue__V_26_26;
#line 907 "psqueue.m"
        MR_Box MR_CALL (* mercury__psqueue__func_0)(MR_Box, MR_Box);

#line 906 "psqueue.m"
        {
#line 906 "psqueue.m"
          mercury__psqueue__succeeded = mercury__builtin__unify_2_p_0(mercury__psqueue__TypeInfo_for_K_23, mercury__psqueue__Key_10, mercury__psqueue__SearchKey_6);
        }
#line 905 "psqueue.m"
        if (mercury__psqueue__succeeded)
#line 905 "psqueue.m"
          {
#line 907 "psqueue.m"
            mercury__psqueue__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__psqueue__AdjustFunc_5, (MR_Integer) 1)));
#line 907 "psqueue.m"
            {
#line 907 "psqueue.m"
              mercury__psqueue__V_21_21 = mercury__psqueue__func_0(((MR_Box) mercury__psqueue__AdjustFunc_5), mercury__psqueue__Prio_9);
            }
#line 700 "psqueue.m"
            mercury__psqueue__V_26_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 700 "psqueue.m"
            {
#line 700 "psqueue.m"
              MR_Word base;
#line 700 "psqueue.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 700 "psqueue.m"
              *mercury__psqueue__Winner_8 = base;
#line 700 "psqueue.m"
              MR_hl_field(MR_mktag(0), base, 0) = mercury__psqueue__V_21_21;
#line 700 "psqueue.m"
              MR_hl_field(MR_mktag(0), base, 1) = mercury__psqueue__Key_10;
#line 700 "psqueue.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__psqueue__V_26_26));
#line 700 "psqueue.m"
              MR_hl_field(MR_mktag(0), base, 3) = mercury__psqueue__Key_10;
#line 700 "psqueue.m"
            }
#line 700 "psqueue.m"
            mercury__psqueue__succeeded = MR_TRUE;
#line 905 "psqueue.m"
          }
#line 905 "psqueue.m"
      }
#line 912 "psqueue.m"
    else
#line 913 "psqueue.m"
      {
#line 913 "psqueue.m"
        MR_Word mercury__psqueue__WinnerA_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__TournamentView_7, (MR_Integer) 0)));
#line 913 "psqueue.m"
        MR_Word mercury__psqueue__WinnerB_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__TournamentView_7, (MR_Integer) 1)));
#line 913 "psqueue.m"
        MR_Box mercury__psqueue__MaxKeyA_16 = (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_11, (MR_Integer) 3));
#line 914 "psqueue.m"
        MR_Box mercury__psqueue__V_13_13 = (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_11, (MR_Integer) 0));
#line 914 "psqueue.m"
        MR_Box mercury__psqueue__V_14_14 = (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_11, (MR_Integer) 1));
#line 914 "psqueue.m"
        MR_Word mercury__psqueue__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_11, (MR_Integer) 2)));
#line 1042 "psqueue.m"
        MR_Word mercury__psqueue__CMP_30;

#line 1043 "psqueue.m"
        {
#line 1043 "psqueue.m"
          mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_23, &mercury__psqueue__CMP_30, mercury__psqueue__SearchKey_6, mercury__psqueue__MaxKeyA_16);
        }
#line 1045 "psqueue.m"
        if ((mercury__psqueue__CMP_30 == (MR_Integer) 1))
#line 1044 "psqueue.m"
          mercury__psqueue__succeeded = MR_TRUE;
#line 1045 "psqueue.m"
        else
#line 1045 "psqueue.m"
          if ((mercury__psqueue__CMP_30 == (MR_Integer) 0))
#line 1045 "psqueue.m"
            mercury__psqueue__succeeded = MR_TRUE;
#line 1045 "psqueue.m"
          else
#line 1045 "psqueue.m"
            mercury__psqueue__succeeded = MR_FALSE;
#line 919 "psqueue.m"
        if (mercury__psqueue__succeeded)
#line 917 "psqueue.m"
          {
#line 917 "psqueue.m"
            MR_Word mercury__psqueue__UpdatedWinnerA_17;
#line 917 "psqueue.m"
            MR_Word mercury__psqueue__V_19_19;

#line 917 "psqueue.m"
            {
#line 917 "psqueue.m"
              mercury__psqueue__V_19_19 = mercury__psqueue__get_tournament_view_1_f_0(mercury__psqueue__TypeInfo_for_P_22, mercury__psqueue__TypeInfo_for_K_23, mercury__psqueue__WinnerA_11);
            }
#line 916 "psqueue.m"
            {
#line 916 "psqueue.m"
              mercury__psqueue__succeeded = mercury__psqueue__adjust_tv_4_p_0(mercury__psqueue__TypeInfo_for_P_22, mercury__psqueue__TypeInfo_for_K_23, mercury__psqueue__AdjustFunc_5, mercury__psqueue__SearchKey_6, mercury__psqueue__V_19_19, &mercury__psqueue__UpdatedWinnerA_17);
            }
#line 917 "psqueue.m"
            if (mercury__psqueue__succeeded)
#line 917 "psqueue.m"
              {
#line 918 "psqueue.m"
                {
#line 918 "psqueue.m"
                  mercury__psqueue__combine_winners_via_tournament_3_p_0(mercury__psqueue__TypeInfo_for_P_22, mercury__psqueue__TypeInfo_for_K_23, mercury__psqueue__UpdatedWinnerA_17, mercury__psqueue__WinnerB_12, mercury__psqueue__Winner_8);
                }
#line 918 "psqueue.m"
                mercury__psqueue__succeeded = MR_TRUE;
#line 917 "psqueue.m"
              }
#line 917 "psqueue.m"
          }
#line 919 "psqueue.m"
        else
#line 921 "psqueue.m"
          {
#line 921 "psqueue.m"
            MR_Word mercury__psqueue__UpdatedWinnerB_18;
#line 921 "psqueue.m"
            MR_Word mercury__psqueue__V_20_20;

#line 921 "psqueue.m"
            {
#line 921 "psqueue.m"
              mercury__psqueue__V_20_20 = mercury__psqueue__get_tournament_view_1_f_0(mercury__psqueue__TypeInfo_for_P_22, mercury__psqueue__TypeInfo_for_K_23, mercury__psqueue__WinnerB_12);
            }
#line 920 "psqueue.m"
            {
#line 920 "psqueue.m"
              mercury__psqueue__succeeded = mercury__psqueue__adjust_tv_4_p_0(mercury__psqueue__TypeInfo_for_P_22, mercury__psqueue__TypeInfo_for_K_23, mercury__psqueue__AdjustFunc_5, mercury__psqueue__SearchKey_6, mercury__psqueue__V_20_20, &mercury__psqueue__UpdatedWinnerB_18);
            }
#line 921 "psqueue.m"
            if (mercury__psqueue__succeeded)
#line 921 "psqueue.m"
              {
#line 922 "psqueue.m"
                {
#line 922 "psqueue.m"
                  mercury__psqueue__combine_winners_via_tournament_3_p_0(mercury__psqueue__TypeInfo_for_P_22, mercury__psqueue__TypeInfo_for_K_23, mercury__psqueue__WinnerA_11, mercury__psqueue__UpdatedWinnerB_18, mercury__psqueue__Winner_8);
                }
#line 922 "psqueue.m"
                mercury__psqueue__succeeded = MR_TRUE;
#line 921 "psqueue.m"
              }
#line 921 "psqueue.m"
          }
#line 913 "psqueue.m"
      }
#line 912 "psqueue.m"
    return mercury__psqueue__succeeded;
#line 912 "psqueue.m"
  }
#line 899 "psqueue.m"
}

#line 857 "psqueue.m"
MR_bool MR_CALL 
mercury__psqueue__remove_tv_4_p_0(
#line 857 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_22,
#line 857 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_23,
#line 857 "psqueue.m"
  MR_Box * mercury__psqueue__MatchingPrio_5,
#line 857 "psqueue.m"
  MR_Box mercury__psqueue__SearchKey_6,
#line 857 "psqueue.m"
  MR_Word mercury__psqueue__TournamentView_7,
#line 857 "psqueue.m"
  MR_Word * mercury__psqueue__PSQ_8)
#line 857 "psqueue.m"
{
#line 870 "psqueue.m"
  {
#line 870 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;

#line 870 "psqueue.m"
    if (((MR_tag((MR_Word) mercury__psqueue__TournamentView_7)) == (MR_mktag((MR_Integer) 0))))
#line 863 "psqueue.m"
      {
#line 863 "psqueue.m"
        MR_Box mercury__psqueue__Key_10;

#line 863 "psqueue.m"
        *mercury__psqueue__MatchingPrio_5 = (MR_hl_field(MR_mktag(0), mercury__psqueue__TournamentView_7, (MR_Integer) 0));
#line 863 "psqueue.m"
        mercury__psqueue__Key_10 = (MR_hl_field(MR_mktag(0), mercury__psqueue__TournamentView_7, (MR_Integer) 1));
#line 864 "psqueue.m"
        {
#line 864 "psqueue.m"
          mercury__psqueue__succeeded = mercury__builtin__unify_2_p_0(mercury__psqueue__TypeInfo_for_K_23, mercury__psqueue__Key_10, mercury__psqueue__SearchKey_6);
        }
#line 863 "psqueue.m"
        if (mercury__psqueue__succeeded)
#line 863 "psqueue.m"
          {
#line 866 "psqueue.m"
            *mercury__psqueue__PSQ_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 866 "psqueue.m"
            mercury__psqueue__succeeded = MR_TRUE;
#line 863 "psqueue.m"
          }
#line 863 "psqueue.m"
      }
#line 870 "psqueue.m"
    else
#line 871 "psqueue.m"
      {
#line 871 "psqueue.m"
        MR_Word mercury__psqueue__WinnerA_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__TournamentView_7, (MR_Integer) 0)));
#line 871 "psqueue.m"
        MR_Word mercury__psqueue__WinnerB_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__TournamentView_7, (MR_Integer) 1)));
#line 871 "psqueue.m"
        MR_Box mercury__psqueue__MaxKeyA_16 = (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_11, (MR_Integer) 3));
#line 871 "psqueue.m"
        MR_Word mercury__psqueue__CombinedWinner_18;
#line 872 "psqueue.m"
        MR_Box mercury__psqueue__V_13_13 = (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_11, (MR_Integer) 0));
#line 872 "psqueue.m"
        MR_Box mercury__psqueue__V_14_14 = (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_11, (MR_Integer) 1));
#line 872 "psqueue.m"
        MR_Word mercury__psqueue__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_11, (MR_Integer) 2)));
#line 1042 "psqueue.m"
        MR_Word mercury__psqueue__CMP_26;

#line 1043 "psqueue.m"
        {
#line 1043 "psqueue.m"
          mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_23, &mercury__psqueue__CMP_26, mercury__psqueue__SearchKey_6, mercury__psqueue__MaxKeyA_16);
        }
#line 1045 "psqueue.m"
        if ((mercury__psqueue__CMP_26 == (MR_Integer) 1))
#line 1044 "psqueue.m"
          mercury__psqueue__succeeded = MR_TRUE;
#line 1045 "psqueue.m"
        else
#line 1045 "psqueue.m"
          if ((mercury__psqueue__CMP_26 == (MR_Integer) 0))
#line 1045 "psqueue.m"
            mercury__psqueue__succeeded = MR_TRUE;
#line 1045 "psqueue.m"
          else
#line 1045 "psqueue.m"
            mercury__psqueue__succeeded = MR_FALSE;
#line 878 "psqueue.m"
        if (mercury__psqueue__succeeded)
#line 875 "psqueue.m"
          {
#line 875 "psqueue.m"
            MR_Word mercury__psqueue__UpdatedPSQA_17;
#line 875 "psqueue.m"
            MR_Word mercury__psqueue__V_20_20;

#line 875 "psqueue.m"
            {
#line 875 "psqueue.m"
              mercury__psqueue__V_20_20 = mercury__psqueue__get_tournament_view_1_f_0(mercury__psqueue__TypeInfo_for_P_22, mercury__psqueue__TypeInfo_for_K_23, mercury__psqueue__WinnerA_11);
            }
#line 874 "psqueue.m"
            {
#line 874 "psqueue.m"
              mercury__psqueue__succeeded = mercury__psqueue__remove_tv_4_p_0(mercury__psqueue__TypeInfo_for_P_22, mercury__psqueue__TypeInfo_for_K_23, mercury__psqueue__MatchingPrio_5, mercury__psqueue__SearchKey_6, mercury__psqueue__V_20_20, &mercury__psqueue__UpdatedPSQA_17);
            }
#line 875 "psqueue.m"
            if (mercury__psqueue__succeeded)
#line 875 "psqueue.m"
              {
#line 445 "psqueue.m"
                if ((mercury__psqueue__UpdatedPSQA_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 444 "psqueue.m"
                  mercury__psqueue__CombinedWinner_18 = mercury__psqueue__WinnerB_12;
#line 445 "psqueue.m"
                else
#line 446 "psqueue.m"
                  {
#line 446 "psqueue.m"
                    MR_Word mercury__psqueue__WinnerA_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__UpdatedPSQA_17, (MR_Integer) 0)));

#line 447 "psqueue.m"
                    {
#line 447 "psqueue.m"
                      mercury__psqueue__combine_winners_via_tournament_3_p_0(mercury__psqueue__TypeInfo_for_P_22, mercury__psqueue__TypeInfo_for_K_23, mercury__psqueue__WinnerA_30, mercury__psqueue__WinnerB_12, &mercury__psqueue__CombinedWinner_18);
                    }
#line 446 "psqueue.m"
                  }
#line 445 "psqueue.m"
                mercury__psqueue__succeeded = MR_TRUE;
#line 875 "psqueue.m"
              }
#line 875 "psqueue.m"
          }
#line 878 "psqueue.m"
        else
#line 880 "psqueue.m"
          {
#line 880 "psqueue.m"
            MR_Word mercury__psqueue__UpdatedPSQB_19;
#line 880 "psqueue.m"
            MR_Word mercury__psqueue__V_21_21;

#line 880 "psqueue.m"
            {
#line 880 "psqueue.m"
              mercury__psqueue__V_21_21 = mercury__psqueue__get_tournament_view_1_f_0(mercury__psqueue__TypeInfo_for_P_22, mercury__psqueue__TypeInfo_for_K_23, mercury__psqueue__WinnerB_12);
            }
#line 879 "psqueue.m"
            {
#line 879 "psqueue.m"
              mercury__psqueue__succeeded = mercury__psqueue__remove_tv_4_p_0(mercury__psqueue__TypeInfo_for_P_22, mercury__psqueue__TypeInfo_for_K_23, mercury__psqueue__MatchingPrio_5, mercury__psqueue__SearchKey_6, mercury__psqueue__V_21_21, &mercury__psqueue__UpdatedPSQB_19);
            }
#line 880 "psqueue.m"
            if (mercury__psqueue__succeeded)
#line 880 "psqueue.m"
              {
#line 432 "psqueue.m"
                if ((mercury__psqueue__UpdatedPSQB_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 431 "psqueue.m"
                  mercury__psqueue__CombinedWinner_18 = mercury__psqueue__WinnerA_11;
#line 432 "psqueue.m"
                else
#line 433 "psqueue.m"
                  {
#line 433 "psqueue.m"
                    MR_Word mercury__psqueue__WinnerB_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__UpdatedPSQB_19, (MR_Integer) 0)));

#line 434 "psqueue.m"
                    {
#line 434 "psqueue.m"
                      mercury__psqueue__combine_winners_via_tournament_3_p_0(mercury__psqueue__TypeInfo_for_P_22, mercury__psqueue__TypeInfo_for_K_23, mercury__psqueue__WinnerA_11, mercury__psqueue__WinnerB_34, &mercury__psqueue__CombinedWinner_18);
                    }
#line 433 "psqueue.m"
                  }
#line 432 "psqueue.m"
                mercury__psqueue__succeeded = MR_TRUE;
#line 880 "psqueue.m"
              }
#line 880 "psqueue.m"
          }
#line 871 "psqueue.m"
        if (mercury__psqueue__succeeded)
#line 871 "psqueue.m"
          {
#line 884 "psqueue.m"
            {
#line 884 "psqueue.m"
              MR_Word base;
#line 884 "psqueue.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 884 "psqueue.m"
              *mercury__psqueue__PSQ_8 = base;
#line 884 "psqueue.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__psqueue__CombinedWinner_18));
#line 884 "psqueue.m"
            }
#line 884 "psqueue.m"
            mercury__psqueue__succeeded = MR_TRUE;
#line 871 "psqueue.m"
          }
#line 871 "psqueue.m"
      }
#line 870 "psqueue.m"
    return mercury__psqueue__succeeded;
#line 870 "psqueue.m"
  }
#line 857 "psqueue.m"
}

#line 830 "psqueue.m"
void MR_CALL 
mercury__psqueue__from_assoc_list_loop_3_p_0(
#line 830 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_16,
#line 830 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_17,
#line 830 "psqueue.m"
  MR_Word mercury__psqueue__HeadVar__1_1,
#line 830 "psqueue.m"
  MR_Word mercury__psqueue__STATE_VARIABLE_PSQ_0_2,
#line 830 "psqueue.m"
  MR_Word * mercury__psqueue__STATE_VARIABLE_PSQ_3)
#line 830 "psqueue.m"
{
#line 834 "psqueue.m"
  while (MR_TRUE)
#line 834 "psqueue.m"
    {
#line 834 "psqueue.m"
      /* tailcall optimized into a loop */
#line 834 "psqueue.m"
      {
#line 834 "psqueue.m"
        MR_bool mercury__psqueue__succeeded;

#line 834 "psqueue.m"
        if ((mercury__psqueue__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 834 "psqueue.m"
          *mercury__psqueue__STATE_VARIABLE_PSQ_3 = mercury__psqueue__STATE_VARIABLE_PSQ_0_2;
#line 834 "psqueue.m"
        else
#line 835 "psqueue.m"
          {
#line 835 "psqueue.m"
            MR_Box mercury__psqueue__Prio_7;
#line 835 "psqueue.m"
            MR_Box mercury__psqueue__Key_8;
#line 835 "psqueue.m"
            MR_Word mercury__psqueue__PriosKeys_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__1_1, (MR_Integer) 1)));
#line 835 "psqueue.m"
            MR_Word mercury__psqueue__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__1_1, (MR_Integer) 0)));
#line 835 "psqueue.m"
            MR_Word mercury__psqueue__STATE_VARIABLE_PSQ_14_14;
#line 720 "psqueue.m"
            MR_Word mercury__psqueue__STATE_VARIABLE_PSQ_10_23;

#line 835 "psqueue.m"
            mercury__psqueue__Prio_7 = (MR_hl_field(MR_mktag(0), mercury__psqueue__V_13_13, (MR_Integer) 0));
#line 835 "psqueue.m"
            mercury__psqueue__Key_8 = (MR_hl_field(MR_mktag(0), mercury__psqueue__V_13_13, (MR_Integer) 1));
#line 718 "psqueue.m"
            {
#line 718 "psqueue.m"
              mercury__psqueue__succeeded = mercury__psqueue__insert_4_p_0(mercury__psqueue__TypeInfo_for_P_16, mercury__psqueue__TypeInfo_for_K_17, mercury__psqueue__Prio_7, mercury__psqueue__Key_8, mercury__psqueue__STATE_VARIABLE_PSQ_0_2, &mercury__psqueue__STATE_VARIABLE_PSQ_10_23);
            }
#line 720 "psqueue.m"
            if (mercury__psqueue__succeeded)
#line 718 "psqueue.m"
              mercury__psqueue__STATE_VARIABLE_PSQ_14_14 = mercury__psqueue__STATE_VARIABLE_PSQ_10_23;
#line 720 "psqueue.m"
            else
#line 721 "psqueue.m"
              {
#line 721 "psqueue.m"
                {
#line 721 "psqueue.m"
                  mercury__require__unexpected_3_p_0((MR_String) "psqueue.m", (MR_String) "predicate \140psqueue.det_insert\'/4", (MR_String) "key being inserted is already present");
#line 721 "psqueue.m"
                  return;
                }
#line 721 "psqueue.m"
              }
#line 837 "psqueue.m"
            /* direct tailcall eliminated */
#line 837 "psqueue.m"
            {
#line 837 "psqueue.m"
              MR_Word mercury__psqueue__HeadVar__1__tmp_copy_1 = mercury__psqueue__PriosKeys_9;
#line 837 "psqueue.m"
              MR_Word mercury__psqueue__STATE_VARIABLE_PSQ_0__tmp_copy_2 = mercury__psqueue__STATE_VARIABLE_PSQ_14_14;

#line 837 "psqueue.m"
              mercury__psqueue__STATE_VARIABLE_PSQ_0_2 = mercury__psqueue__STATE_VARIABLE_PSQ_0__tmp_copy_2;
#line 837 "psqueue.m"
              mercury__psqueue__HeadVar__1_1 = mercury__psqueue__HeadVar__1__tmp_copy_1;
#line 837 "psqueue.m"
            }
#line 837 "psqueue.m"
            continue;
#line 835 "psqueue.m"
          }
#line 834 "psqueue.m"
      }
#line 834 "psqueue.m"
      break;
#line 834 "psqueue.m"
    }
#line 830 "psqueue.m"
}

#line 789 "psqueue.m"
MR_Word MR_CALL 
mercury__psqueue__convert_loser_tree_to_psqueue_2_f_0(
#line 789 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_17,
#line 789 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_18,
#line 789 "psqueue.m"
  MR_Word mercury__psqueue__LTree_4,
#line 789 "psqueue.m"
  MR_Box mercury__psqueue__MaxKey_5)
#line 789 "psqueue.m"
{
#line 796 "psqueue.m"
  {
#line 796 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 796 "psqueue.m"
    MR_Word mercury__psqueue__PSQ_6;

#line 796 "psqueue.m"
    if ((mercury__psqueue__LTree_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 795 "psqueue.m"
      mercury__psqueue__PSQ_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 796 "psqueue.m"
    else
#line 798 "psqueue.m"
      {
#line 798 "psqueue.m"
        MR_Box mercury__psqueue__LoserPrio_8 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 1));
#line 798 "psqueue.m"
        MR_Box mercury__psqueue__LoserKey_9 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 2));
#line 798 "psqueue.m"
        MR_Word mercury__psqueue__SubLTreeL_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 3)));
#line 798 "psqueue.m"
        MR_Box mercury__psqueue__SplitKey_11 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 4));
#line 798 "psqueue.m"
        MR_Word mercury__psqueue__SubLTreeR_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 5)));
#line 798 "psqueue.m"
        MR_Word mercury__psqueue__PSQA_14;
#line 798 "psqueue.m"
        MR_Word mercury__psqueue__PSQB_15;
#line 797 "psqueue.m"
        MR_Integer mercury__psqueue__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 0)));
#line 1042 "psqueue.m"
        MR_Word mercury__psqueue__CMP_21;

#line 1043 "psqueue.m"
        {
#line 1043 "psqueue.m"
          mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_18, &mercury__psqueue__CMP_21, mercury__psqueue__LoserKey_9, mercury__psqueue__SplitKey_11);
        }
#line 1045 "psqueue.m"
        if ((mercury__psqueue__CMP_21 == (MR_Integer) 1))
#line 1044 "psqueue.m"
          mercury__psqueue__succeeded = MR_TRUE;
#line 1045 "psqueue.m"
        else
#line 1045 "psqueue.m"
          if ((mercury__psqueue__CMP_21 == (MR_Integer) 0))
#line 1045 "psqueue.m"
            mercury__psqueue__succeeded = MR_TRUE;
#line 1045 "psqueue.m"
          else
#line 1045 "psqueue.m"
            mercury__psqueue__succeeded = MR_FALSE;
#line 803 "psqueue.m"
        if (mercury__psqueue__succeeded)
#line 800 "psqueue.m"
          {
#line 800 "psqueue.m"
            MR_Word mercury__psqueue__WinnerA_13;

#line 800 "psqueue.m"
            {
#line 800 "psqueue.m"
              mercury__psqueue__WinnerA_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 800 "psqueue.m"
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_13, 0) = mercury__psqueue__LoserPrio_8;
#line 800 "psqueue.m"
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_13, 1) = mercury__psqueue__LoserKey_9;
#line 800 "psqueue.m"
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_13, 2) = ((MR_Box) (mercury__psqueue__SubLTreeL_10));
#line 800 "psqueue.m"
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_13, 3) = mercury__psqueue__SplitKey_11;
#line 800 "psqueue.m"
            }
#line 801 "psqueue.m"
            {
#line 801 "psqueue.m"
              mercury__psqueue__PSQA_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 801 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__PSQA_14, 0) = ((MR_Box) (mercury__psqueue__WinnerA_13));
#line 801 "psqueue.m"
            }
#line 802 "psqueue.m"
            {
#line 802 "psqueue.m"
              mercury__psqueue__PSQB_15 = mercury__psqueue__convert_loser_tree_to_psqueue_2_f_0(mercury__psqueue__TypeInfo_for_P_17, mercury__psqueue__TypeInfo_for_K_18, mercury__psqueue__SubLTreeR_12, mercury__psqueue__MaxKey_5);
            }
#line 800 "psqueue.m"
          }
#line 803 "psqueue.m"
        else
#line 804 "psqueue.m"
          {
#line 804 "psqueue.m"
            MR_Word mercury__psqueue__WinnerB_16;

#line 804 "psqueue.m"
            {
#line 804 "psqueue.m"
              mercury__psqueue__PSQA_14 = mercury__psqueue__convert_loser_tree_to_psqueue_2_f_0(mercury__psqueue__TypeInfo_for_P_17, mercury__psqueue__TypeInfo_for_K_18, mercury__psqueue__SubLTreeL_10, mercury__psqueue__SplitKey_11);
            }
#line 805 "psqueue.m"
            {
#line 805 "psqueue.m"
              mercury__psqueue__WinnerB_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 805 "psqueue.m"
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_16, 0) = mercury__psqueue__LoserPrio_8;
#line 805 "psqueue.m"
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_16, 1) = mercury__psqueue__LoserKey_9;
#line 805 "psqueue.m"
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_16, 2) = ((MR_Box) (mercury__psqueue__SubLTreeR_12));
#line 805 "psqueue.m"
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_16, 3) = mercury__psqueue__MaxKey_5;
#line 805 "psqueue.m"
            }
#line 806 "psqueue.m"
            {
#line 806 "psqueue.m"
              mercury__psqueue__PSQB_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 806 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__PSQB_15, 0) = ((MR_Box) (mercury__psqueue__WinnerB_16));
#line 806 "psqueue.m"
            }
#line 804 "psqueue.m"
          }
#line 412 "psqueue.m"
        if ((mercury__psqueue__PSQA_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 403 "psqueue.m"
          mercury__psqueue__PSQ_6 = mercury__psqueue__PSQB_15;
#line 412 "psqueue.m"
        else
#line 413 "psqueue.m"
          {
#line 413 "psqueue.m"
            MR_Word mercury__psqueue__WinnerA_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQA_14, (MR_Integer) 0)));

#line 417 "psqueue.m"
            if ((mercury__psqueue__PSQB_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 416 "psqueue.m"
              mercury__psqueue__PSQ_6 = mercury__psqueue__PSQA_14;
#line 417 "psqueue.m"
            else
#line 418 "psqueue.m"
              {
#line 418 "psqueue.m"
                MR_Word mercury__psqueue__WinnerB_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQB_15, (MR_Integer) 0)));
#line 418 "psqueue.m"
                MR_Word mercury__psqueue__CombinedWinner_27;

#line 419 "psqueue.m"
                {
#line 419 "psqueue.m"
                  mercury__psqueue__combine_winners_via_tournament_3_p_0(mercury__psqueue__TypeInfo_for_P_17, mercury__psqueue__TypeInfo_for_K_18, mercury__psqueue__WinnerA_25, mercury__psqueue__WinnerB_26, &mercury__psqueue__CombinedWinner_27);
                }
#line 420 "psqueue.m"
                {
#line 420 "psqueue.m"
                  mercury__psqueue__PSQ_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 420 "psqueue.m"
                  MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_6, 0) = ((MR_Box) (mercury__psqueue__CombinedWinner_27));
#line 420 "psqueue.m"
                }
#line 418 "psqueue.m"
              }
#line 413 "psqueue.m"
          }
#line 798 "psqueue.m"
      }
#line 796 "psqueue.m"
    return mercury__psqueue__PSQ_6;
#line 796 "psqueue.m"
  }
#line 789 "psqueue.m"
}

#line 724 "psqueue.m"
MR_bool MR_CALL 
mercury__psqueue__insert_tv_4_p_0(
#line 724 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_28,
#line 724 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_29,
#line 724 "psqueue.m"
  MR_Box mercury__psqueue__InsertPrio_5,
#line 724 "psqueue.m"
  MR_Box mercury__psqueue__InsertKey_6,
#line 724 "psqueue.m"
  MR_Word mercury__psqueue__TV_7,
#line 724 "psqueue.m"
  MR_Word * mercury__psqueue__Winner_8)
#line 724 "psqueue.m"
{
#line 744 "psqueue.m"
  {
#line 744 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;

#line 744 "psqueue.m"
    if (((MR_tag((MR_Word) mercury__psqueue__TV_7)) == (MR_mktag((MR_Integer) 0))))
#line 730 "psqueue.m"
      {
#line 730 "psqueue.m"
        MR_Box mercury__psqueue__Prio_9 = (MR_hl_field(MR_mktag(0), mercury__psqueue__TV_7, (MR_Integer) 0));
#line 730 "psqueue.m"
        MR_Box mercury__psqueue__Key_10 = (MR_hl_field(MR_mktag(0), mercury__psqueue__TV_7, (MR_Integer) 1));
#line 730 "psqueue.m"
        MR_Word mercury__psqueue__CMP_11;
#line 730 "psqueue.m"
        MR_Word mercury__psqueue__WinnerA_12;
#line 730 "psqueue.m"
        MR_Word mercury__psqueue__WinnerB_13;

#line 731 "psqueue.m"
        {
#line 731 "psqueue.m"
          mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_29, &mercury__psqueue__CMP_11, mercury__psqueue__InsertKey_6, mercury__psqueue__Key_10);
        }
#line 736 "psqueue.m"
        if ((mercury__psqueue__CMP_11 == (MR_Integer) 1))
#line 733 "psqueue.m"
          {
#line 733 "psqueue.m"
            MR_Word mercury__psqueue__V_32_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 733 "psqueue.m"
            MR_Word mercury__psqueue__V_36_36;

#line 700 "psqueue.m"
            {
#line 700 "psqueue.m"
              mercury__psqueue__WinnerA_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 700 "psqueue.m"
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_12, 0) = mercury__psqueue__InsertPrio_5;
#line 700 "psqueue.m"
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_12, 1) = mercury__psqueue__InsertKey_6;
#line 700 "psqueue.m"
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_12, 2) = ((MR_Box) (mercury__psqueue__V_32_32));
#line 700 "psqueue.m"
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_12, 3) = mercury__psqueue__InsertKey_6;
#line 700 "psqueue.m"
            }
#line 700 "psqueue.m"
            mercury__psqueue__V_36_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 700 "psqueue.m"
            {
#line 700 "psqueue.m"
              mercury__psqueue__WinnerB_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 700 "psqueue.m"
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_13, 0) = mercury__psqueue__Prio_9;
#line 700 "psqueue.m"
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_13, 1) = mercury__psqueue__Key_10;
#line 700 "psqueue.m"
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_13, 2) = ((MR_Box) (mercury__psqueue__V_36_36));
#line 700 "psqueue.m"
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_13, 3) = mercury__psqueue__Key_10;
#line 700 "psqueue.m"
            }
#line 733 "psqueue.m"
            mercury__psqueue__succeeded = MR_TRUE;
#line 733 "psqueue.m"
          }
#line 736 "psqueue.m"
        else
#line 736 "psqueue.m"
          if ((mercury__psqueue__CMP_11 == (MR_Integer) 2))
#line 737 "psqueue.m"
            {
#line 737 "psqueue.m"
              MR_Word mercury__psqueue__V_40_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 737 "psqueue.m"
              MR_Word mercury__psqueue__V_44_44;

#line 700 "psqueue.m"
              {
#line 700 "psqueue.m"
                mercury__psqueue__WinnerA_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 700 "psqueue.m"
                MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_12, 0) = mercury__psqueue__Prio_9;
#line 700 "psqueue.m"
                MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_12, 1) = mercury__psqueue__Key_10;
#line 700 "psqueue.m"
                MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_12, 2) = ((MR_Box) (mercury__psqueue__V_40_40));
#line 700 "psqueue.m"
                MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_12, 3) = mercury__psqueue__Key_10;
#line 700 "psqueue.m"
              }
#line 700 "psqueue.m"
              mercury__psqueue__V_44_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 700 "psqueue.m"
              {
#line 700 "psqueue.m"
                mercury__psqueue__WinnerB_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 700 "psqueue.m"
                MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_13, 0) = mercury__psqueue__InsertPrio_5;
#line 700 "psqueue.m"
                MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_13, 1) = mercury__psqueue__InsertKey_6;
#line 700 "psqueue.m"
                MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_13, 2) = ((MR_Box) (mercury__psqueue__V_44_44));
#line 700 "psqueue.m"
                MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_13, 3) = mercury__psqueue__InsertKey_6;
#line 700 "psqueue.m"
              }
#line 737 "psqueue.m"
              mercury__psqueue__succeeded = MR_TRUE;
#line 737 "psqueue.m"
            }
#line 736 "psqueue.m"
          else
#line 736 "psqueue.m"
            mercury__psqueue__succeeded = MR_FALSE;
#line 730 "psqueue.m"
        if (mercury__psqueue__succeeded)
#line 730 "psqueue.m"
          {
#line 743 "psqueue.m"
            {
#line 743 "psqueue.m"
              mercury__psqueue__combine_winners_via_tournament_3_p_0(mercury__psqueue__TypeInfo_for_P_28, mercury__psqueue__TypeInfo_for_K_29, mercury__psqueue__WinnerA_12, mercury__psqueue__WinnerB_13, mercury__psqueue__Winner_8);
            }
#line 743 "psqueue.m"
            mercury__psqueue__succeeded = MR_TRUE;
#line 730 "psqueue.m"
          }
#line 730 "psqueue.m"
      }
#line 744 "psqueue.m"
    else
#line 745 "psqueue.m"
      {
#line 745 "psqueue.m"
        MR_Box mercury__psqueue__MaxKeyA_17;
#line 745 "psqueue.m"
        MR_Word mercury__psqueue__WinnerA_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__TV_7, (MR_Integer) 0)));
#line 745 "psqueue.m"
        MR_Word mercury__psqueue__WinnerB_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__TV_7, (MR_Integer) 1)));
#line 746 "psqueue.m"
        MR_Box mercury__psqueue__V_14_14 = (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_26, (MR_Integer) 0));
#line 746 "psqueue.m"
        MR_Box mercury__psqueue__V_15_15 = (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_26, (MR_Integer) 1));
#line 746 "psqueue.m"
        MR_Word mercury__psqueue__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_26, (MR_Integer) 2)));
#line 1042 "psqueue.m"
        MR_Word mercury__psqueue__CMP_48;

#line 746 "psqueue.m"
        mercury__psqueue__MaxKeyA_17 = (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_26, (MR_Integer) 3));
#line 1043 "psqueue.m"
        {
#line 1043 "psqueue.m"
          mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_29, &mercury__psqueue__CMP_48, mercury__psqueue__InsertKey_6, mercury__psqueue__MaxKeyA_17);
        }
#line 1045 "psqueue.m"
        if ((mercury__psqueue__CMP_48 == (MR_Integer) 1))
#line 1044 "psqueue.m"
          mercury__psqueue__succeeded = MR_TRUE;
#line 1045 "psqueue.m"
        else
#line 1045 "psqueue.m"
          if ((mercury__psqueue__CMP_48 == (MR_Integer) 0))
#line 1045 "psqueue.m"
            mercury__psqueue__succeeded = MR_TRUE;
#line 1045 "psqueue.m"
          else
#line 1045 "psqueue.m"
            mercury__psqueue__succeeded = MR_FALSE;
#line 752 "psqueue.m"
        if (mercury__psqueue__succeeded)
#line 750 "psqueue.m"
          {
#line 750 "psqueue.m"
            MR_Word mercury__psqueue__UpdatedWinnerA_22;
#line 750 "psqueue.m"
            MR_Word mercury__psqueue__V_24_24;

#line 750 "psqueue.m"
            {
#line 750 "psqueue.m"
              mercury__psqueue__V_24_24 = mercury__psqueue__get_tournament_view_1_f_0(mercury__psqueue__TypeInfo_for_P_28, mercury__psqueue__TypeInfo_for_K_29, mercury__psqueue__WinnerA_26);
            }
#line 749 "psqueue.m"
            {
#line 749 "psqueue.m"
              mercury__psqueue__succeeded = mercury__psqueue__insert_tv_4_p_0(mercury__psqueue__TypeInfo_for_P_28, mercury__psqueue__TypeInfo_for_K_29, mercury__psqueue__InsertPrio_5, mercury__psqueue__InsertKey_6, mercury__psqueue__V_24_24, &mercury__psqueue__UpdatedWinnerA_22);
            }
#line 750 "psqueue.m"
            if (mercury__psqueue__succeeded)
#line 750 "psqueue.m"
              {
#line 751 "psqueue.m"
                {
#line 751 "psqueue.m"
                  mercury__psqueue__combine_winners_via_tournament_3_p_0(mercury__psqueue__TypeInfo_for_P_28, mercury__psqueue__TypeInfo_for_K_29, mercury__psqueue__UpdatedWinnerA_22, mercury__psqueue__WinnerB_27, mercury__psqueue__Winner_8);
                }
#line 751 "psqueue.m"
                mercury__psqueue__succeeded = MR_TRUE;
#line 750 "psqueue.m"
              }
#line 750 "psqueue.m"
          }
#line 752 "psqueue.m"
        else
#line 754 "psqueue.m"
          {
#line 754 "psqueue.m"
            MR_Word mercury__psqueue__UpdatedWinnerB_23;
#line 754 "psqueue.m"
            MR_Word mercury__psqueue__V_25_25;

#line 754 "psqueue.m"
            {
#line 754 "psqueue.m"
              mercury__psqueue__V_25_25 = mercury__psqueue__get_tournament_view_1_f_0(mercury__psqueue__TypeInfo_for_P_28, mercury__psqueue__TypeInfo_for_K_29, mercury__psqueue__WinnerB_27);
            }
#line 753 "psqueue.m"
            {
#line 753 "psqueue.m"
              mercury__psqueue__succeeded = mercury__psqueue__insert_tv_4_p_0(mercury__psqueue__TypeInfo_for_P_28, mercury__psqueue__TypeInfo_for_K_29, mercury__psqueue__InsertPrio_5, mercury__psqueue__InsertKey_6, mercury__psqueue__V_25_25, &mercury__psqueue__UpdatedWinnerB_23);
            }
#line 754 "psqueue.m"
            if (mercury__psqueue__succeeded)
#line 754 "psqueue.m"
              {
#line 755 "psqueue.m"
                {
#line 755 "psqueue.m"
                  mercury__psqueue__combine_winners_via_tournament_3_p_0(mercury__psqueue__TypeInfo_for_P_28, mercury__psqueue__TypeInfo_for_K_29, mercury__psqueue__WinnerA_26, mercury__psqueue__UpdatedWinnerB_23, mercury__psqueue__Winner_8);
                }
#line 755 "psqueue.m"
                mercury__psqueue__succeeded = MR_TRUE;
#line 754 "psqueue.m"
              }
#line 754 "psqueue.m"
          }
#line 745 "psqueue.m"
      }
#line 744 "psqueue.m"
    return mercury__psqueue__succeeded;
#line 744 "psqueue.m"
  }
#line 724 "psqueue.m"
}

#line 696 "psqueue.m"
MR_Word MR_CALL 
mercury__psqueue__singleton_winner_2_f_0(
#line 696 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_8,
#line 696 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_9,
#line 696 "psqueue.m"
  MR_Box mercury__psqueue__Prio_4,
#line 696 "psqueue.m"
  MR_Box mercury__psqueue__Key_5)
#line 696 "psqueue.m"
{
#line 699 "psqueue.m"
  {
#line 699 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 699 "psqueue.m"
    MR_Word mercury__psqueue__HeadVar__3_3;
#line 699 "psqueue.m"
    MR_Word mercury__psqueue__V_6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 700 "psqueue.m"
    {
#line 700 "psqueue.m"
      mercury__psqueue__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 700 "psqueue.m"
      MR_hl_field(MR_mktag(0), mercury__psqueue__HeadVar__3_3, 0) = mercury__psqueue__Prio_4;
#line 700 "psqueue.m"
      MR_hl_field(MR_mktag(0), mercury__psqueue__HeadVar__3_3, 1) = mercury__psqueue__Key_5;
#line 700 "psqueue.m"
      MR_hl_field(MR_mktag(0), mercury__psqueue__HeadVar__3_3, 2) = ((MR_Box) (mercury__psqueue__V_6_6));
#line 700 "psqueue.m"
      MR_hl_field(MR_mktag(0), mercury__psqueue__HeadVar__3_3, 3) = mercury__psqueue__Key_5;
#line 700 "psqueue.m"
    }
#line 699 "psqueue.m"
    return mercury__psqueue__HeadVar__3_3;
#line 699 "psqueue.m"
  }
#line 696 "psqueue.m"
}

#line 636 "psqueue.m"
static MR_Word MR_CALL 
mercury__psqueue__single_right_5_f_0(
#line 636 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_25,
#line 636 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_26,
#line 636 "psqueue.m"
  MR_Box mercury__psqueue__InsertPrio_7,
#line 636 "psqueue.m"
  MR_Box mercury__psqueue__InsertKey_8,
#line 636 "psqueue.m"
  MR_Word mercury__psqueue__LTreeAB_9,
#line 636 "psqueue.m"
  MR_Box mercury__psqueue__SplitKeyBC_10,
#line 636 "psqueue.m"
  MR_Word mercury__psqueue__LTreeC_11)
#line 636 "psqueue.m"
{
#line 661 "psqueue.m"
  {
#line 661 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 661 "psqueue.m"
    MR_Word mercury__psqueue__LTree_12;

#line 661 "psqueue.m"
    if ((mercury__psqueue__LTreeAB_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 662 "psqueue.m"
      {
#line 663 "psqueue.m"
        {
#line 663 "psqueue.m"
          mercury__require__unexpected_3_p_0((MR_String) "psqueue.m", (MR_String) "function \140psqueue.single_right\'/5", (MR_String) "heavier tree is a leaf");
        }
#line 662 "psqueue.m"
      }
#line 661 "psqueue.m"
    else
#line 643 "psqueue.m"
      {
#line 643 "psqueue.m"
        MR_Box mercury__psqueue__LoserPrio_14 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeAB_9, (MR_Integer) 1));
#line 643 "psqueue.m"
        MR_Box mercury__psqueue__LoserKey_15 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeAB_9, (MR_Integer) 2));
#line 643 "psqueue.m"
        MR_Word mercury__psqueue__LTreeA_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeAB_9, (MR_Integer) 3)));
#line 643 "psqueue.m"
        MR_Box mercury__psqueue__SplitKeyAB_17 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeAB_9, (MR_Integer) 4));
#line 643 "psqueue.m"
        MR_Word mercury__psqueue__LTreeB_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeAB_9, (MR_Integer) 5)));
#line 642 "psqueue.m"
        MR_Integer mercury__psqueue__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeAB_9, (MR_Integer) 0)));
#line 645 "psqueue.m"
        MR_Word mercury__psqueue__CMP0_19;
#line 645 "psqueue.m"
        MR_Word mercury__psqueue__CMP_29;

#line 645 "psqueue.m"
        {
#line 645 "psqueue.m"
          mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_26, &mercury__psqueue__CMP0_19, mercury__psqueue__LoserKey_15, mercury__psqueue__SplitKeyAB_17);
        }
#line 646 "psqueue.m"
        mercury__psqueue__succeeded = (mercury__psqueue__CMP0_19 == (MR_Integer) 2);
#line 645 "psqueue.m"
        if (mercury__psqueue__succeeded)
#line 645 "psqueue.m"
          {
#line 1043 "psqueue.m"
            {
#line 1043 "psqueue.m"
              mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_P_25, &mercury__psqueue__CMP_29, mercury__psqueue__InsertPrio_7, mercury__psqueue__LoserPrio_14);
            }
#line 1045 "psqueue.m"
            if ((mercury__psqueue__CMP_29 == (MR_Integer) 1))
#line 1044 "psqueue.m"
              mercury__psqueue__succeeded = MR_TRUE;
#line 1045 "psqueue.m"
            else
#line 1045 "psqueue.m"
              if ((mercury__psqueue__CMP_29 == (MR_Integer) 0))
#line 1045 "psqueue.m"
                mercury__psqueue__succeeded = MR_TRUE;
#line 1045 "psqueue.m"
              else
#line 1045 "psqueue.m"
                mercury__psqueue__succeeded = MR_FALSE;
#line 645 "psqueue.m"
          }
#line 654 "psqueue.m"
        if (mercury__psqueue__succeeded)
#line 649 "psqueue.m"
          {
#line 649 "psqueue.m"
            MR_Word mercury__psqueue__V_23_23;
#line 649 "psqueue.m"
            MR_Integer mercury__psqueue__Size_36;
#line 649 "psqueue.m"
            MR_Integer mercury__psqueue__V_37_37;
#line 649 "psqueue.m"
            MR_Integer mercury__psqueue__V_39_39;
#line 649 "psqueue.m"
            MR_Integer mercury__psqueue__V_40_40;
#line 649 "psqueue.m"
            MR_Integer mercury__psqueue__Size_61;
#line 649 "psqueue.m"
            MR_Integer mercury__psqueue__V_62_62;
#line 649 "psqueue.m"
            MR_Integer mercury__psqueue__V_64_64;

#line 1033 "psqueue.m"
            if ((mercury__psqueue__LTreeB_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1032 "psqueue.m"
              mercury__psqueue__V_39_39 = (MR_Integer) 0;
#line 1033 "psqueue.m"
            else
#line 1034 "psqueue.m"
              {
#line 1034 "psqueue.m"
                MR_Box mercury__psqueue__V_43_43;
#line 1034 "psqueue.m"
                MR_Box mercury__psqueue__V_44_44;
#line 1034 "psqueue.m"
                MR_Word mercury__psqueue__V_45_45;
#line 1034 "psqueue.m"
                MR_Box mercury__psqueue__V_46_46;
#line 1034 "psqueue.m"
                MR_Word mercury__psqueue__V_47_47;

#line 1034 "psqueue.m"
                mercury__psqueue__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_18, (MR_Integer) 0)));
#line 1034 "psqueue.m"
                mercury__psqueue__V_43_43 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_18, (MR_Integer) 1));
#line 1034 "psqueue.m"
                mercury__psqueue__V_44_44 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_18, (MR_Integer) 2));
#line 1034 "psqueue.m"
                mercury__psqueue__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_18, (MR_Integer) 3)));
#line 1034 "psqueue.m"
                mercury__psqueue__V_46_46 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_18, (MR_Integer) 4));
#line 1034 "psqueue.m"
                mercury__psqueue__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_18, (MR_Integer) 5)));
#line 1034 "psqueue.m"
              }
#line 677 "psqueue.m"
            mercury__psqueue__V_37_37 = ((MR_Integer) 1 + mercury__psqueue__V_39_39);
#line 1033 "psqueue.m"
            if ((mercury__psqueue__LTreeC_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1032 "psqueue.m"
              mercury__psqueue__V_40_40 = (MR_Integer) 0;
#line 1033 "psqueue.m"
            else
#line 1034 "psqueue.m"
              {
#line 1034 "psqueue.m"
                MR_Box mercury__psqueue__V_50_50;
#line 1034 "psqueue.m"
                MR_Box mercury__psqueue__V_51_51;
#line 1034 "psqueue.m"
                MR_Word mercury__psqueue__V_52_52;
#line 1034 "psqueue.m"
                MR_Box mercury__psqueue__V_53_53;
#line 1034 "psqueue.m"
                MR_Word mercury__psqueue__V_54_54;

#line 1034 "psqueue.m"
                mercury__psqueue__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_11, (MR_Integer) 0)));
#line 1034 "psqueue.m"
                mercury__psqueue__V_50_50 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_11, (MR_Integer) 1));
#line 1034 "psqueue.m"
                mercury__psqueue__V_51_51 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_11, (MR_Integer) 2));
#line 1034 "psqueue.m"
                mercury__psqueue__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_11, (MR_Integer) 3)));
#line 1034 "psqueue.m"
                mercury__psqueue__V_53_53 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_11, (MR_Integer) 4));
#line 1034 "psqueue.m"
                mercury__psqueue__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_11, (MR_Integer) 5)));
#line 1034 "psqueue.m"
              }
#line 677 "psqueue.m"
            mercury__psqueue__Size_36 = (mercury__psqueue__V_37_37 + mercury__psqueue__V_40_40);
#line 678 "psqueue.m"
            {
#line 678 "psqueue.m"
              mercury__psqueue__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_23_23, 0) = ((MR_Box) (mercury__psqueue__Size_36));
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_23_23, 1) = mercury__psqueue__LoserPrio_14;
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_23_23, 2) = mercury__psqueue__LoserKey_15;
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_23_23, 3) = ((MR_Box) (mercury__psqueue__LTreeB_18));
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_23_23, 4) = mercury__psqueue__SplitKeyBC_10;
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_23_23, 5) = ((MR_Box) (mercury__psqueue__LTreeC_11));
#line 678 "psqueue.m"
            }
#line 1033 "psqueue.m"
            if ((mercury__psqueue__LTreeA_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1032 "psqueue.m"
              mercury__psqueue__V_64_64 = (MR_Integer) 0;
#line 1033 "psqueue.m"
            else
#line 1034 "psqueue.m"
              {
#line 1034 "psqueue.m"
                MR_Box mercury__psqueue__V_68_68;
#line 1034 "psqueue.m"
                MR_Box mercury__psqueue__V_69_69;
#line 1034 "psqueue.m"
                MR_Word mercury__psqueue__V_70_70;
#line 1034 "psqueue.m"
                MR_Box mercury__psqueue__V_71_71;
#line 1034 "psqueue.m"
                MR_Word mercury__psqueue__V_72_72;

#line 1034 "psqueue.m"
                mercury__psqueue__V_64_64 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_16, (MR_Integer) 0)));
#line 1034 "psqueue.m"
                mercury__psqueue__V_68_68 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_16, (MR_Integer) 1));
#line 1034 "psqueue.m"
                mercury__psqueue__V_69_69 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_16, (MR_Integer) 2));
#line 1034 "psqueue.m"
                mercury__psqueue__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_16, (MR_Integer) 3)));
#line 1034 "psqueue.m"
                mercury__psqueue__V_71_71 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_16, (MR_Integer) 4));
#line 1034 "psqueue.m"
                mercury__psqueue__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_16, (MR_Integer) 5)));
#line 1034 "psqueue.m"
              }
#line 677 "psqueue.m"
            mercury__psqueue__V_62_62 = ((MR_Integer) 1 + mercury__psqueue__V_64_64);
#line 677 "psqueue.m"
            mercury__psqueue__Size_61 = (mercury__psqueue__V_62_62 + mercury__psqueue__Size_36);
#line 678 "psqueue.m"
            {
#line 678 "psqueue.m"
              mercury__psqueue__LTree_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 0) = ((MR_Box) (mercury__psqueue__Size_61));
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 1) = mercury__psqueue__InsertPrio_7;
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 2) = mercury__psqueue__InsertKey_8;
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 3) = ((MR_Box) (mercury__psqueue__LTreeA_16));
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 4) = mercury__psqueue__SplitKeyAB_17;
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 5) = ((MR_Box) (mercury__psqueue__V_23_23));
#line 678 "psqueue.m"
            }
#line 649 "psqueue.m"
          }
#line 654 "psqueue.m"
        else
#line 655 "psqueue.m"
          {
#line 655 "psqueue.m"
            MR_Word mercury__psqueue__V_24_24;
#line 655 "psqueue.m"
            MR_Integer mercury__psqueue__Size_86;
#line 655 "psqueue.m"
            MR_Integer mercury__psqueue__V_87_87;
#line 655 "psqueue.m"
            MR_Integer mercury__psqueue__V_89_89;
#line 655 "psqueue.m"
            MR_Integer mercury__psqueue__V_90_90;
#line 655 "psqueue.m"
            MR_Integer mercury__psqueue__Size_111;
#line 655 "psqueue.m"
            MR_Integer mercury__psqueue__V_112_112;
#line 655 "psqueue.m"
            MR_Integer mercury__psqueue__V_114_114;

#line 1033 "psqueue.m"
            if ((mercury__psqueue__LTreeB_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1032 "psqueue.m"
              mercury__psqueue__V_89_89 = (MR_Integer) 0;
#line 1033 "psqueue.m"
            else
#line 1034 "psqueue.m"
              {
#line 1034 "psqueue.m"
                MR_Box mercury__psqueue__V_93_93;
#line 1034 "psqueue.m"
                MR_Box mercury__psqueue__V_94_94;
#line 1034 "psqueue.m"
                MR_Word mercury__psqueue__V_95_95;
#line 1034 "psqueue.m"
                MR_Box mercury__psqueue__V_96_96;
#line 1034 "psqueue.m"
                MR_Word mercury__psqueue__V_97_97;

#line 1034 "psqueue.m"
                mercury__psqueue__V_89_89 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_18, (MR_Integer) 0)));
#line 1034 "psqueue.m"
                mercury__psqueue__V_93_93 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_18, (MR_Integer) 1));
#line 1034 "psqueue.m"
                mercury__psqueue__V_94_94 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_18, (MR_Integer) 2));
#line 1034 "psqueue.m"
                mercury__psqueue__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_18, (MR_Integer) 3)));
#line 1034 "psqueue.m"
                mercury__psqueue__V_96_96 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_18, (MR_Integer) 4));
#line 1034 "psqueue.m"
                mercury__psqueue__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_18, (MR_Integer) 5)));
#line 1034 "psqueue.m"
              }
#line 677 "psqueue.m"
            mercury__psqueue__V_87_87 = ((MR_Integer) 1 + mercury__psqueue__V_89_89);
#line 1033 "psqueue.m"
            if ((mercury__psqueue__LTreeC_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1032 "psqueue.m"
              mercury__psqueue__V_90_90 = (MR_Integer) 0;
#line 1033 "psqueue.m"
            else
#line 1034 "psqueue.m"
              {
#line 1034 "psqueue.m"
                MR_Box mercury__psqueue__V_100_100;
#line 1034 "psqueue.m"
                MR_Box mercury__psqueue__V_101_101;
#line 1034 "psqueue.m"
                MR_Word mercury__psqueue__V_102_102;
#line 1034 "psqueue.m"
                MR_Box mercury__psqueue__V_103_103;
#line 1034 "psqueue.m"
                MR_Word mercury__psqueue__V_104_104;

#line 1034 "psqueue.m"
                mercury__psqueue__V_90_90 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_11, (MR_Integer) 0)));
#line 1034 "psqueue.m"
                mercury__psqueue__V_100_100 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_11, (MR_Integer) 1));
#line 1034 "psqueue.m"
                mercury__psqueue__V_101_101 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_11, (MR_Integer) 2));
#line 1034 "psqueue.m"
                mercury__psqueue__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_11, (MR_Integer) 3)));
#line 1034 "psqueue.m"
                mercury__psqueue__V_103_103 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_11, (MR_Integer) 4));
#line 1034 "psqueue.m"
                mercury__psqueue__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_11, (MR_Integer) 5)));
#line 1034 "psqueue.m"
              }
#line 677 "psqueue.m"
            mercury__psqueue__Size_86 = (mercury__psqueue__V_87_87 + mercury__psqueue__V_90_90);
#line 678 "psqueue.m"
            {
#line 678 "psqueue.m"
              mercury__psqueue__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_24_24, 0) = ((MR_Box) (mercury__psqueue__Size_86));
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_24_24, 1) = mercury__psqueue__InsertPrio_7;
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_24_24, 2) = mercury__psqueue__InsertKey_8;
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_24_24, 3) = ((MR_Box) (mercury__psqueue__LTreeB_18));
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_24_24, 4) = mercury__psqueue__SplitKeyBC_10;
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_24_24, 5) = ((MR_Box) (mercury__psqueue__LTreeC_11));
#line 678 "psqueue.m"
            }
#line 1033 "psqueue.m"
            if ((mercury__psqueue__LTreeA_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1032 "psqueue.m"
              mercury__psqueue__V_114_114 = (MR_Integer) 0;
#line 1033 "psqueue.m"
            else
#line 1034 "psqueue.m"
              {
#line 1034 "psqueue.m"
                MR_Box mercury__psqueue__V_118_118;
#line 1034 "psqueue.m"
                MR_Box mercury__psqueue__V_119_119;
#line 1034 "psqueue.m"
                MR_Word mercury__psqueue__V_120_120;
#line 1034 "psqueue.m"
                MR_Box mercury__psqueue__V_121_121;
#line 1034 "psqueue.m"
                MR_Word mercury__psqueue__V_122_122;

#line 1034 "psqueue.m"
                mercury__psqueue__V_114_114 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_16, (MR_Integer) 0)));
#line 1034 "psqueue.m"
                mercury__psqueue__V_118_118 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_16, (MR_Integer) 1));
#line 1034 "psqueue.m"
                mercury__psqueue__V_119_119 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_16, (MR_Integer) 2));
#line 1034 "psqueue.m"
                mercury__psqueue__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_16, (MR_Integer) 3)));
#line 1034 "psqueue.m"
                mercury__psqueue__V_121_121 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_16, (MR_Integer) 4));
#line 1034 "psqueue.m"
                mercury__psqueue__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_16, (MR_Integer) 5)));
#line 1034 "psqueue.m"
              }
#line 677 "psqueue.m"
            mercury__psqueue__V_112_112 = ((MR_Integer) 1 + mercury__psqueue__V_114_114);
#line 677 "psqueue.m"
            mercury__psqueue__Size_111 = (mercury__psqueue__V_112_112 + mercury__psqueue__Size_86);
#line 678 "psqueue.m"
            {
#line 678 "psqueue.m"
              mercury__psqueue__LTree_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 0) = ((MR_Box) (mercury__psqueue__Size_111));
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 1) = mercury__psqueue__LoserPrio_14;
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 2) = mercury__psqueue__LoserKey_15;
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 3) = ((MR_Box) (mercury__psqueue__LTreeA_16));
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 4) = mercury__psqueue__SplitKeyAB_17;
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 5) = ((MR_Box) (mercury__psqueue__V_24_24));
#line 678 "psqueue.m"
            }
#line 655 "psqueue.m"
          }
#line 643 "psqueue.m"
      }
#line 661 "psqueue.m"
    return mercury__psqueue__LTree_12;
#line 661 "psqueue.m"
  }
#line 636 "psqueue.m"
}

#line 604 "psqueue.m"
static MR_Word MR_CALL 
mercury__psqueue__single_left_5_f_0(
#line 604 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_24,
#line 604 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_25,
#line 604 "psqueue.m"
  MR_Box mercury__psqueue__InsertPrio_7,
#line 604 "psqueue.m"
  MR_Box mercury__psqueue__InsertKey_8,
#line 604 "psqueue.m"
  MR_Word mercury__psqueue__LTreeA_9,
#line 604 "psqueue.m"
  MR_Box mercury__psqueue__SplitKeyAB_10,
#line 604 "psqueue.m"
  MR_Word mercury__psqueue__LTreeBC_11)
#line 604 "psqueue.m"
{
#line 628 "psqueue.m"
  {
#line 628 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 628 "psqueue.m"
    MR_Word mercury__psqueue__LTree_12;

#line 628 "psqueue.m"
    if ((mercury__psqueue__LTreeBC_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 629 "psqueue.m"
      {
#line 630 "psqueue.m"
        {
#line 630 "psqueue.m"
          mercury__require__unexpected_3_p_0((MR_String) "psqueue.m", (MR_String) "function \140psqueue.single_left\'/5", (MR_String) "heavier tree is a leaf");
        }
#line 629 "psqueue.m"
      }
#line 628 "psqueue.m"
    else
#line 611 "psqueue.m"
      {
#line 611 "psqueue.m"
        MR_Box mercury__psqueue__LoserPrio_14 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeBC_11, (MR_Integer) 1));
#line 611 "psqueue.m"
        MR_Box mercury__psqueue__LoserKey_15 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeBC_11, (MR_Integer) 2));
#line 611 "psqueue.m"
        MR_Word mercury__psqueue__LTreeB_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeBC_11, (MR_Integer) 3)));
#line 611 "psqueue.m"
        MR_Box mercury__psqueue__SplitKeyBC_17 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeBC_11, (MR_Integer) 4));
#line 611 "psqueue.m"
        MR_Word mercury__psqueue__LTreeC_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeBC_11, (MR_Integer) 5)));
#line 610 "psqueue.m"
        MR_Integer mercury__psqueue__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeBC_11, (MR_Integer) 0)));
#line 613 "psqueue.m"
        MR_Word mercury__psqueue__CMP_28;
#line 613 "psqueue.m"
        MR_Word mercury__psqueue__CMP_31;

#line 1043 "psqueue.m"
        {
#line 1043 "psqueue.m"
          mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_25, &mercury__psqueue__CMP_28, mercury__psqueue__LoserKey_15, mercury__psqueue__SplitKeyBC_17);
        }
#line 1045 "psqueue.m"
        if ((mercury__psqueue__CMP_28 == (MR_Integer) 1))
#line 1044 "psqueue.m"
          mercury__psqueue__succeeded = MR_TRUE;
#line 1045 "psqueue.m"
        else
#line 1045 "psqueue.m"
          if ((mercury__psqueue__CMP_28 == (MR_Integer) 0))
#line 1045 "psqueue.m"
            mercury__psqueue__succeeded = MR_TRUE;
#line 1045 "psqueue.m"
          else
#line 1045 "psqueue.m"
            mercury__psqueue__succeeded = MR_FALSE;
#line 613 "psqueue.m"
        if (mercury__psqueue__succeeded)
#line 613 "psqueue.m"
          {
#line 1043 "psqueue.m"
            {
#line 1043 "psqueue.m"
              mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_P_24, &mercury__psqueue__CMP_31, mercury__psqueue__InsertPrio_7, mercury__psqueue__LoserPrio_14);
            }
#line 1045 "psqueue.m"
            if ((mercury__psqueue__CMP_31 == (MR_Integer) 1))
#line 1044 "psqueue.m"
              mercury__psqueue__succeeded = MR_TRUE;
#line 1045 "psqueue.m"
            else
#line 1045 "psqueue.m"
              if ((mercury__psqueue__CMP_31 == (MR_Integer) 0))
#line 1045 "psqueue.m"
                mercury__psqueue__succeeded = MR_TRUE;
#line 1045 "psqueue.m"
              else
#line 1045 "psqueue.m"
                mercury__psqueue__succeeded = MR_FALSE;
#line 613 "psqueue.m"
          }
#line 621 "psqueue.m"
        if (mercury__psqueue__succeeded)
#line 616 "psqueue.m"
          {
#line 616 "psqueue.m"
            MR_Word mercury__psqueue__V_22_22;
#line 616 "psqueue.m"
            MR_Integer mercury__psqueue__Size_38;
#line 616 "psqueue.m"
            MR_Integer mercury__psqueue__V_39_39;
#line 616 "psqueue.m"
            MR_Integer mercury__psqueue__V_41_41;
#line 616 "psqueue.m"
            MR_Integer mercury__psqueue__V_42_42;
#line 616 "psqueue.m"
            MR_Integer mercury__psqueue__Size_63;
#line 616 "psqueue.m"
            MR_Integer mercury__psqueue__V_64_64;
#line 616 "psqueue.m"
            MR_Integer mercury__psqueue__V_67_67;

#line 1033 "psqueue.m"
            if ((mercury__psqueue__LTreeA_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1032 "psqueue.m"
              mercury__psqueue__V_41_41 = (MR_Integer) 0;
#line 1033 "psqueue.m"
            else
#line 1034 "psqueue.m"
              {
#line 1034 "psqueue.m"
                MR_Box mercury__psqueue__V_45_45;
#line 1034 "psqueue.m"
                MR_Box mercury__psqueue__V_46_46;
#line 1034 "psqueue.m"
                MR_Word mercury__psqueue__V_47_47;
#line 1034 "psqueue.m"
                MR_Box mercury__psqueue__V_48_48;
#line 1034 "psqueue.m"
                MR_Word mercury__psqueue__V_49_49;

#line 1034 "psqueue.m"
                mercury__psqueue__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_9, (MR_Integer) 0)));
#line 1034 "psqueue.m"
                mercury__psqueue__V_45_45 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_9, (MR_Integer) 1));
#line 1034 "psqueue.m"
                mercury__psqueue__V_46_46 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_9, (MR_Integer) 2));
#line 1034 "psqueue.m"
                mercury__psqueue__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_9, (MR_Integer) 3)));
#line 1034 "psqueue.m"
                mercury__psqueue__V_48_48 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_9, (MR_Integer) 4));
#line 1034 "psqueue.m"
                mercury__psqueue__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_9, (MR_Integer) 5)));
#line 1034 "psqueue.m"
              }
#line 677 "psqueue.m"
            mercury__psqueue__V_39_39 = ((MR_Integer) 1 + mercury__psqueue__V_41_41);
#line 1033 "psqueue.m"
            if ((mercury__psqueue__LTreeB_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1032 "psqueue.m"
              mercury__psqueue__V_42_42 = (MR_Integer) 0;
#line 1033 "psqueue.m"
            else
#line 1034 "psqueue.m"
              {
#line 1034 "psqueue.m"
                MR_Box mercury__psqueue__V_52_52;
#line 1034 "psqueue.m"
                MR_Box mercury__psqueue__V_53_53;
#line 1034 "psqueue.m"
                MR_Word mercury__psqueue__V_54_54;
#line 1034 "psqueue.m"
                MR_Box mercury__psqueue__V_55_55;
#line 1034 "psqueue.m"
                MR_Word mercury__psqueue__V_56_56;

#line 1034 "psqueue.m"
                mercury__psqueue__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_16, (MR_Integer) 0)));
#line 1034 "psqueue.m"
                mercury__psqueue__V_52_52 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_16, (MR_Integer) 1));
#line 1034 "psqueue.m"
                mercury__psqueue__V_53_53 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_16, (MR_Integer) 2));
#line 1034 "psqueue.m"
                mercury__psqueue__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_16, (MR_Integer) 3)));
#line 1034 "psqueue.m"
                mercury__psqueue__V_55_55 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_16, (MR_Integer) 4));
#line 1034 "psqueue.m"
                mercury__psqueue__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_16, (MR_Integer) 5)));
#line 1034 "psqueue.m"
              }
#line 677 "psqueue.m"
            mercury__psqueue__Size_38 = (mercury__psqueue__V_39_39 + mercury__psqueue__V_42_42);
#line 678 "psqueue.m"
            {
#line 678 "psqueue.m"
              mercury__psqueue__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_22_22, 0) = ((MR_Box) (mercury__psqueue__Size_38));
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_22_22, 1) = mercury__psqueue__LoserPrio_14;
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_22_22, 2) = mercury__psqueue__LoserKey_15;
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_22_22, 3) = ((MR_Box) (mercury__psqueue__LTreeA_9));
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_22_22, 4) = mercury__psqueue__SplitKeyAB_10;
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_22_22, 5) = ((MR_Box) (mercury__psqueue__LTreeB_16));
#line 678 "psqueue.m"
            }
#line 677 "psqueue.m"
            mercury__psqueue__V_64_64 = ((MR_Integer) 1 + mercury__psqueue__Size_38);
#line 1033 "psqueue.m"
            if ((mercury__psqueue__LTreeC_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1032 "psqueue.m"
              mercury__psqueue__V_67_67 = (MR_Integer) 0;
#line 1033 "psqueue.m"
            else
#line 1034 "psqueue.m"
              {
#line 1034 "psqueue.m"
                MR_Box mercury__psqueue__V_77_77;
#line 1034 "psqueue.m"
                MR_Box mercury__psqueue__V_78_78;
#line 1034 "psqueue.m"
                MR_Word mercury__psqueue__V_79_79;
#line 1034 "psqueue.m"
                MR_Box mercury__psqueue__V_80_80;
#line 1034 "psqueue.m"
                MR_Word mercury__psqueue__V_81_81;

#line 1034 "psqueue.m"
                mercury__psqueue__V_67_67 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_18, (MR_Integer) 0)));
#line 1034 "psqueue.m"
                mercury__psqueue__V_77_77 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_18, (MR_Integer) 1));
#line 1034 "psqueue.m"
                mercury__psqueue__V_78_78 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_18, (MR_Integer) 2));
#line 1034 "psqueue.m"
                mercury__psqueue__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_18, (MR_Integer) 3)));
#line 1034 "psqueue.m"
                mercury__psqueue__V_80_80 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_18, (MR_Integer) 4));
#line 1034 "psqueue.m"
                mercury__psqueue__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_18, (MR_Integer) 5)));
#line 1034 "psqueue.m"
              }
#line 677 "psqueue.m"
            mercury__psqueue__Size_63 = (mercury__psqueue__V_64_64 + mercury__psqueue__V_67_67);
#line 678 "psqueue.m"
            {
#line 678 "psqueue.m"
              mercury__psqueue__LTree_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 0) = ((MR_Box) (mercury__psqueue__Size_63));
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 1) = mercury__psqueue__InsertPrio_7;
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 2) = mercury__psqueue__InsertKey_8;
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 3) = ((MR_Box) (mercury__psqueue__V_22_22));
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 4) = mercury__psqueue__SplitKeyBC_17;
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 5) = ((MR_Box) (mercury__psqueue__LTreeC_18));
#line 678 "psqueue.m"
            }
#line 616 "psqueue.m"
          }
#line 621 "psqueue.m"
        else
#line 622 "psqueue.m"
          {
#line 622 "psqueue.m"
            MR_Word mercury__psqueue__V_23_23;
#line 622 "psqueue.m"
            MR_Integer mercury__psqueue__Size_88;
#line 622 "psqueue.m"
            MR_Integer mercury__psqueue__V_89_89;
#line 622 "psqueue.m"
            MR_Integer mercury__psqueue__V_91_91;
#line 622 "psqueue.m"
            MR_Integer mercury__psqueue__V_92_92;
#line 622 "psqueue.m"
            MR_Integer mercury__psqueue__Size_113;
#line 622 "psqueue.m"
            MR_Integer mercury__psqueue__V_114_114;
#line 622 "psqueue.m"
            MR_Integer mercury__psqueue__V_117_117;

#line 1033 "psqueue.m"
            if ((mercury__psqueue__LTreeA_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1032 "psqueue.m"
              mercury__psqueue__V_91_91 = (MR_Integer) 0;
#line 1033 "psqueue.m"
            else
#line 1034 "psqueue.m"
              {
#line 1034 "psqueue.m"
                MR_Box mercury__psqueue__V_95_95;
#line 1034 "psqueue.m"
                MR_Box mercury__psqueue__V_96_96;
#line 1034 "psqueue.m"
                MR_Word mercury__psqueue__V_97_97;
#line 1034 "psqueue.m"
                MR_Box mercury__psqueue__V_98_98;
#line 1034 "psqueue.m"
                MR_Word mercury__psqueue__V_99_99;

#line 1034 "psqueue.m"
                mercury__psqueue__V_91_91 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_9, (MR_Integer) 0)));
#line 1034 "psqueue.m"
                mercury__psqueue__V_95_95 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_9, (MR_Integer) 1));
#line 1034 "psqueue.m"
                mercury__psqueue__V_96_96 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_9, (MR_Integer) 2));
#line 1034 "psqueue.m"
                mercury__psqueue__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_9, (MR_Integer) 3)));
#line 1034 "psqueue.m"
                mercury__psqueue__V_98_98 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_9, (MR_Integer) 4));
#line 1034 "psqueue.m"
                mercury__psqueue__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_9, (MR_Integer) 5)));
#line 1034 "psqueue.m"
              }
#line 677 "psqueue.m"
            mercury__psqueue__V_89_89 = ((MR_Integer) 1 + mercury__psqueue__V_91_91);
#line 1033 "psqueue.m"
            if ((mercury__psqueue__LTreeB_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1032 "psqueue.m"
              mercury__psqueue__V_92_92 = (MR_Integer) 0;
#line 1033 "psqueue.m"
            else
#line 1034 "psqueue.m"
              {
#line 1034 "psqueue.m"
                MR_Box mercury__psqueue__V_102_102;
#line 1034 "psqueue.m"
                MR_Box mercury__psqueue__V_103_103;
#line 1034 "psqueue.m"
                MR_Word mercury__psqueue__V_104_104;
#line 1034 "psqueue.m"
                MR_Box mercury__psqueue__V_105_105;
#line 1034 "psqueue.m"
                MR_Word mercury__psqueue__V_106_106;

#line 1034 "psqueue.m"
                mercury__psqueue__V_92_92 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_16, (MR_Integer) 0)));
#line 1034 "psqueue.m"
                mercury__psqueue__V_102_102 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_16, (MR_Integer) 1));
#line 1034 "psqueue.m"
                mercury__psqueue__V_103_103 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_16, (MR_Integer) 2));
#line 1034 "psqueue.m"
                mercury__psqueue__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_16, (MR_Integer) 3)));
#line 1034 "psqueue.m"
                mercury__psqueue__V_105_105 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_16, (MR_Integer) 4));
#line 1034 "psqueue.m"
                mercury__psqueue__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_16, (MR_Integer) 5)));
#line 1034 "psqueue.m"
              }
#line 677 "psqueue.m"
            mercury__psqueue__Size_88 = (mercury__psqueue__V_89_89 + mercury__psqueue__V_92_92);
#line 678 "psqueue.m"
            {
#line 678 "psqueue.m"
              mercury__psqueue__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_23_23, 0) = ((MR_Box) (mercury__psqueue__Size_88));
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_23_23, 1) = mercury__psqueue__InsertPrio_7;
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_23_23, 2) = mercury__psqueue__InsertKey_8;
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_23_23, 3) = ((MR_Box) (mercury__psqueue__LTreeA_9));
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_23_23, 4) = mercury__psqueue__SplitKeyAB_10;
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_23_23, 5) = ((MR_Box) (mercury__psqueue__LTreeB_16));
#line 678 "psqueue.m"
            }
#line 677 "psqueue.m"
            mercury__psqueue__V_114_114 = ((MR_Integer) 1 + mercury__psqueue__Size_88);
#line 1033 "psqueue.m"
            if ((mercury__psqueue__LTreeC_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1032 "psqueue.m"
              mercury__psqueue__V_117_117 = (MR_Integer) 0;
#line 1033 "psqueue.m"
            else
#line 1034 "psqueue.m"
              {
#line 1034 "psqueue.m"
                MR_Box mercury__psqueue__V_127_127;
#line 1034 "psqueue.m"
                MR_Box mercury__psqueue__V_128_128;
#line 1034 "psqueue.m"
                MR_Word mercury__psqueue__V_129_129;
#line 1034 "psqueue.m"
                MR_Box mercury__psqueue__V_130_130;
#line 1034 "psqueue.m"
                MR_Word mercury__psqueue__V_131_131;

#line 1034 "psqueue.m"
                mercury__psqueue__V_117_117 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_18, (MR_Integer) 0)));
#line 1034 "psqueue.m"
                mercury__psqueue__V_127_127 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_18, (MR_Integer) 1));
#line 1034 "psqueue.m"
                mercury__psqueue__V_128_128 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_18, (MR_Integer) 2));
#line 1034 "psqueue.m"
                mercury__psqueue__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_18, (MR_Integer) 3)));
#line 1034 "psqueue.m"
                mercury__psqueue__V_130_130 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_18, (MR_Integer) 4));
#line 1034 "psqueue.m"
                mercury__psqueue__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_18, (MR_Integer) 5)));
#line 1034 "psqueue.m"
              }
#line 677 "psqueue.m"
            mercury__psqueue__Size_113 = (mercury__psqueue__V_114_114 + mercury__psqueue__V_117_117);
#line 678 "psqueue.m"
            {
#line 678 "psqueue.m"
              mercury__psqueue__LTree_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 0) = ((MR_Box) (mercury__psqueue__Size_113));
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 1) = mercury__psqueue__LoserPrio_14;
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 2) = mercury__psqueue__LoserKey_15;
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 3) = ((MR_Box) (mercury__psqueue__V_23_23));
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 4) = mercury__psqueue__SplitKeyBC_17;
#line 678 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 5) = ((MR_Box) (mercury__psqueue__LTreeC_18));
#line 678 "psqueue.m"
            }
#line 622 "psqueue.m"
          }
#line 611 "psqueue.m"
      }
#line 628 "psqueue.m"
    return mercury__psqueue__LTree_12;
#line 628 "psqueue.m"
  }
#line 604 "psqueue.m"
}

#line 543 "psqueue.m"
static MR_Word MR_CALL 
mercury__psqueue__balance_right_5_f_0(
#line 543 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_25,
#line 543 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_26,
#line 543 "psqueue.m"
  MR_Box mercury__psqueue__Prio_7,
#line 543 "psqueue.m"
  MR_Box mercury__psqueue__Key_8,
#line 543 "psqueue.m"
  MR_Word mercury__psqueue__LTreeL_9,
#line 543 "psqueue.m"
  MR_Box mercury__psqueue__SplitKey_10,
#line 543 "psqueue.m"
  MR_Word mercury__psqueue__LTreeR_11)
#line 543 "psqueue.m"
{
#line 556 "psqueue.m"
  {
#line 556 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 556 "psqueue.m"
    MR_Word mercury__psqueue__LTree_12;

#line 556 "psqueue.m"
    if ((mercury__psqueue__LTreeL_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 557 "psqueue.m"
      {
#line 558 "psqueue.m"
        {
#line 558 "psqueue.m"
          mercury__require__unexpected_3_p_0((MR_String) "psqueue.m", (MR_String) "function \140psqueue.balance_right\'/5", (MR_String) "heavier tree is a leaf");
        }
#line 557 "psqueue.m"
      }
#line 556 "psqueue.m"
    else
#line 549 "psqueue.m"
      {
#line 549 "psqueue.m"
        MR_Word mercury__psqueue__SubLTreeLL_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 3)));
#line 549 "psqueue.m"
        MR_Word mercury__psqueue__SubLTreeLR_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 5)));
#line 549 "psqueue.m"
        MR_Word mercury__psqueue__CMP_19;
#line 549 "psqueue.m"
        MR_Integer mercury__psqueue__V_23_23;
#line 549 "psqueue.m"
        MR_Integer mercury__psqueue__V_24_24;
#line 549 "psqueue.m"
        MR_Integer mercury__psqueue__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 0)));
#line 549 "psqueue.m"
        MR_Box mercury__psqueue__V_14_14 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 1));
#line 549 "psqueue.m"
        MR_Box mercury__psqueue__V_15_15 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 2));
#line 549 "psqueue.m"
        MR_Box mercury__psqueue__V_17_17 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 4));

#line 1033 "psqueue.m"
        if ((mercury__psqueue__SubLTreeLR_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1032 "psqueue.m"
          mercury__psqueue__V_23_23 = (MR_Integer) 0;
#line 1033 "psqueue.m"
        else
#line 1034 "psqueue.m"
          {
#line 1034 "psqueue.m"
            MR_Box mercury__psqueue__V_30_30;
#line 1034 "psqueue.m"
            MR_Box mercury__psqueue__V_31_31;
#line 1034 "psqueue.m"
            MR_Word mercury__psqueue__V_32_32;
#line 1034 "psqueue.m"
            MR_Box mercury__psqueue__V_33_33;
#line 1034 "psqueue.m"
            MR_Word mercury__psqueue__V_34_34;

#line 1034 "psqueue.m"
            mercury__psqueue__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeLR_18, (MR_Integer) 0)));
#line 1034 "psqueue.m"
            mercury__psqueue__V_30_30 = (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeLR_18, (MR_Integer) 1));
#line 1034 "psqueue.m"
            mercury__psqueue__V_31_31 = (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeLR_18, (MR_Integer) 2));
#line 1034 "psqueue.m"
            mercury__psqueue__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeLR_18, (MR_Integer) 3)));
#line 1034 "psqueue.m"
            mercury__psqueue__V_33_33 = (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeLR_18, (MR_Integer) 4));
#line 1034 "psqueue.m"
            mercury__psqueue__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeLR_18, (MR_Integer) 5)));
#line 1034 "psqueue.m"
          }
#line 1033 "psqueue.m"
        if ((mercury__psqueue__SubLTreeLL_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1032 "psqueue.m"
          mercury__psqueue__V_24_24 = (MR_Integer) 0;
#line 1033 "psqueue.m"
        else
#line 1034 "psqueue.m"
          {
#line 1034 "psqueue.m"
            MR_Box mercury__psqueue__V_37_37;
#line 1034 "psqueue.m"
            MR_Box mercury__psqueue__V_38_38;
#line 1034 "psqueue.m"
            MR_Word mercury__psqueue__V_39_39;
#line 1034 "psqueue.m"
            MR_Box mercury__psqueue__V_40_40;
#line 1034 "psqueue.m"
            MR_Word mercury__psqueue__V_41_41;

#line 1034 "psqueue.m"
            mercury__psqueue__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeLL_16, (MR_Integer) 0)));
#line 1034 "psqueue.m"
            mercury__psqueue__V_37_37 = (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeLL_16, (MR_Integer) 1));
#line 1034 "psqueue.m"
            mercury__psqueue__V_38_38 = (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeLL_16, (MR_Integer) 2));
#line 1034 "psqueue.m"
            mercury__psqueue__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeLL_16, (MR_Integer) 3)));
#line 1034 "psqueue.m"
            mercury__psqueue__V_40_40 = (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeLL_16, (MR_Integer) 4));
#line 1034 "psqueue.m"
            mercury__psqueue__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeLL_16, (MR_Integer) 5)));
#line 1034 "psqueue.m"
          }
#line 66 "private_builtin.opt"
        mercury__psqueue__succeeded = (mercury__psqueue__V_23_23 < mercury__psqueue__V_24_24);
#line 69 "private_builtin.opt"
        if (mercury__psqueue__succeeded)
#line 68 "private_builtin.opt"
          mercury__psqueue__CMP_19 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
        else
#line 74 "private_builtin.opt"
          {
#line 71 "private_builtin.opt"
            mercury__psqueue__succeeded = (mercury__psqueue__V_23_23 == mercury__psqueue__V_24_24);
#line 74 "private_builtin.opt"
            if (mercury__psqueue__succeeded)
#line 73 "private_builtin.opt"
              mercury__psqueue__CMP_19 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
            else
#line 75 "private_builtin.opt"
              mercury__psqueue__CMP_19 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
          }
#line 551 "psqueue.m"
        mercury__psqueue__succeeded = (mercury__psqueue__CMP_19 == (MR_Integer) 1);
#line 553 "psqueue.m"
        if (mercury__psqueue__succeeded)
#line 552 "psqueue.m"
          {
#line 552 "psqueue.m"
            return mercury__psqueue__LTree_12 = mercury__psqueue__single_right_5_f_0(mercury__psqueue__TypeInfo_for_P_25, mercury__psqueue__TypeInfo_for_K_26, mercury__psqueue__Prio_7, mercury__psqueue__Key_8, mercury__psqueue__LTreeL_9, mercury__psqueue__SplitKey_10, mercury__psqueue__LTreeR_11);
          }
#line 553 "psqueue.m"
        else
#line 591 "psqueue.m"
          {
#line 591 "psqueue.m"
            MR_Box mercury__psqueue__LoserPrio_52 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 1));
#line 591 "psqueue.m"
            MR_Box mercury__psqueue__LoserKey_53 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 2));
#line 591 "psqueue.m"
            MR_Word mercury__psqueue__LTreeA_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 3)));
#line 591 "psqueue.m"
            MR_Box mercury__psqueue__SplitKeyAB_55 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 4));
#line 591 "psqueue.m"
            MR_Word mercury__psqueue__LTreeB_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 5)));
#line 591 "psqueue.m"
            MR_Word mercury__psqueue__V_60_60;
#line 590 "psqueue.m"
            MR_Integer mercury__psqueue__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 0)));

#line 593 "psqueue.m"
            {
#line 593 "psqueue.m"
              mercury__psqueue__V_60_60 = mercury__psqueue__single_left_5_f_0(mercury__psqueue__TypeInfo_for_P_25, mercury__psqueue__TypeInfo_for_K_26, mercury__psqueue__LoserPrio_52, mercury__psqueue__LoserKey_53, mercury__psqueue__LTreeA_54, mercury__psqueue__SplitKeyAB_55, mercury__psqueue__LTreeB_56);
            }
#line 592 "psqueue.m"
            {
#line 592 "psqueue.m"
              return mercury__psqueue__LTree_12 = mercury__psqueue__single_right_5_f_0(mercury__psqueue__TypeInfo_for_P_25, mercury__psqueue__TypeInfo_for_K_26, mercury__psqueue__Prio_7, mercury__psqueue__Key_8, mercury__psqueue__V_60_60, mercury__psqueue__SplitKey_10, mercury__psqueue__LTreeR_11);
            }
#line 591 "psqueue.m"
          }
#line 549 "psqueue.m"
      }
#line 556 "psqueue.m"
    return mercury__psqueue__LTree_12;
#line 556 "psqueue.m"
  }
#line 543 "psqueue.m"
}

#line 521 "psqueue.m"
static MR_Word MR_CALL 
mercury__psqueue__balance_left_5_f_0(
#line 521 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_25,
#line 521 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_26,
#line 521 "psqueue.m"
  MR_Box mercury__psqueue__Prio_7,
#line 521 "psqueue.m"
  MR_Box mercury__psqueue__Key_8,
#line 521 "psqueue.m"
  MR_Word mercury__psqueue__LTreeL_9,
#line 521 "psqueue.m"
  MR_Box mercury__psqueue__SplitKey_10,
#line 521 "psqueue.m"
  MR_Word mercury__psqueue__LTreeR_11)
#line 521 "psqueue.m"
{
#line 534 "psqueue.m"
  {
#line 534 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 534 "psqueue.m"
    MR_Word mercury__psqueue__LTree_12;

#line 534 "psqueue.m"
    if ((mercury__psqueue__LTreeR_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 535 "psqueue.m"
      {
#line 536 "psqueue.m"
        {
#line 536 "psqueue.m"
          mercury__require__unexpected_3_p_0((MR_String) "psqueue.m", (MR_String) "function \140psqueue.balance_left\'/5", (MR_String) "heavier tree is a leaf");
        }
#line 535 "psqueue.m"
      }
#line 534 "psqueue.m"
    else
#line 527 "psqueue.m"
      {
#line 527 "psqueue.m"
        MR_Word mercury__psqueue__SubLTreeRL_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 3)));
#line 527 "psqueue.m"
        MR_Word mercury__psqueue__SubLTreeRR_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 5)));
#line 527 "psqueue.m"
        MR_Word mercury__psqueue__CMP_19;
#line 527 "psqueue.m"
        MR_Integer mercury__psqueue__V_23_23;
#line 527 "psqueue.m"
        MR_Integer mercury__psqueue__V_24_24;
#line 527 "psqueue.m"
        MR_Integer mercury__psqueue__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 0)));
#line 527 "psqueue.m"
        MR_Box mercury__psqueue__V_14_14 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 1));
#line 527 "psqueue.m"
        MR_Box mercury__psqueue__V_15_15 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 2));
#line 527 "psqueue.m"
        MR_Box mercury__psqueue__V_17_17 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 4));

#line 1033 "psqueue.m"
        if ((mercury__psqueue__SubLTreeRL_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1032 "psqueue.m"
          mercury__psqueue__V_23_23 = (MR_Integer) 0;
#line 1033 "psqueue.m"
        else
#line 1034 "psqueue.m"
          {
#line 1034 "psqueue.m"
            MR_Box mercury__psqueue__V_30_30;
#line 1034 "psqueue.m"
            MR_Box mercury__psqueue__V_31_31;
#line 1034 "psqueue.m"
            MR_Word mercury__psqueue__V_32_32;
#line 1034 "psqueue.m"
            MR_Box mercury__psqueue__V_33_33;
#line 1034 "psqueue.m"
            MR_Word mercury__psqueue__V_34_34;

#line 1034 "psqueue.m"
            mercury__psqueue__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeRL_16, (MR_Integer) 0)));
#line 1034 "psqueue.m"
            mercury__psqueue__V_30_30 = (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeRL_16, (MR_Integer) 1));
#line 1034 "psqueue.m"
            mercury__psqueue__V_31_31 = (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeRL_16, (MR_Integer) 2));
#line 1034 "psqueue.m"
            mercury__psqueue__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeRL_16, (MR_Integer) 3)));
#line 1034 "psqueue.m"
            mercury__psqueue__V_33_33 = (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeRL_16, (MR_Integer) 4));
#line 1034 "psqueue.m"
            mercury__psqueue__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeRL_16, (MR_Integer) 5)));
#line 1034 "psqueue.m"
          }
#line 1033 "psqueue.m"
        if ((mercury__psqueue__SubLTreeRR_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1032 "psqueue.m"
          mercury__psqueue__V_24_24 = (MR_Integer) 0;
#line 1033 "psqueue.m"
        else
#line 1034 "psqueue.m"
          {
#line 1034 "psqueue.m"
            MR_Box mercury__psqueue__V_37_37;
#line 1034 "psqueue.m"
            MR_Box mercury__psqueue__V_38_38;
#line 1034 "psqueue.m"
            MR_Word mercury__psqueue__V_39_39;
#line 1034 "psqueue.m"
            MR_Box mercury__psqueue__V_40_40;
#line 1034 "psqueue.m"
            MR_Word mercury__psqueue__V_41_41;

#line 1034 "psqueue.m"
            mercury__psqueue__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeRR_18, (MR_Integer) 0)));
#line 1034 "psqueue.m"
            mercury__psqueue__V_37_37 = (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeRR_18, (MR_Integer) 1));
#line 1034 "psqueue.m"
            mercury__psqueue__V_38_38 = (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeRR_18, (MR_Integer) 2));
#line 1034 "psqueue.m"
            mercury__psqueue__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeRR_18, (MR_Integer) 3)));
#line 1034 "psqueue.m"
            mercury__psqueue__V_40_40 = (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeRR_18, (MR_Integer) 4));
#line 1034 "psqueue.m"
            mercury__psqueue__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeRR_18, (MR_Integer) 5)));
#line 1034 "psqueue.m"
          }
#line 66 "private_builtin.opt"
        mercury__psqueue__succeeded = (mercury__psqueue__V_23_23 < mercury__psqueue__V_24_24);
#line 69 "private_builtin.opt"
        if (mercury__psqueue__succeeded)
#line 68 "private_builtin.opt"
          mercury__psqueue__CMP_19 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
        else
#line 74 "private_builtin.opt"
          {
#line 71 "private_builtin.opt"
            mercury__psqueue__succeeded = (mercury__psqueue__V_23_23 == mercury__psqueue__V_24_24);
#line 74 "private_builtin.opt"
            if (mercury__psqueue__succeeded)
#line 73 "private_builtin.opt"
              mercury__psqueue__CMP_19 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
            else
#line 75 "private_builtin.opt"
              mercury__psqueue__CMP_19 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
          }
#line 529 "psqueue.m"
        mercury__psqueue__succeeded = (mercury__psqueue__CMP_19 == (MR_Integer) 1);
#line 531 "psqueue.m"
        if (mercury__psqueue__succeeded)
#line 530 "psqueue.m"
          {
#line 530 "psqueue.m"
            return mercury__psqueue__LTree_12 = mercury__psqueue__single_left_5_f_0(mercury__psqueue__TypeInfo_for_P_25, mercury__psqueue__TypeInfo_for_K_26, mercury__psqueue__Prio_7, mercury__psqueue__Key_8, mercury__psqueue__LTreeL_9, mercury__psqueue__SplitKey_10, mercury__psqueue__LTreeR_11);
          }
#line 531 "psqueue.m"
        else
#line 571 "psqueue.m"
          {
#line 571 "psqueue.m"
            MR_Box mercury__psqueue__LoserPrio_52 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 1));
#line 571 "psqueue.m"
            MR_Box mercury__psqueue__LoserKey_53 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 2));
#line 571 "psqueue.m"
            MR_Word mercury__psqueue__LTreeB_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 3)));
#line 571 "psqueue.m"
            MR_Box mercury__psqueue__SplitKeyBC_55 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 4));
#line 571 "psqueue.m"
            MR_Word mercury__psqueue__LTreeC_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 5)));
#line 571 "psqueue.m"
            MR_Word mercury__psqueue__V_60_60;
#line 570 "psqueue.m"
            MR_Integer mercury__psqueue__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 0)));

#line 575 "psqueue.m"
            {
#line 575 "psqueue.m"
              mercury__psqueue__V_60_60 = mercury__psqueue__single_right_5_f_0(mercury__psqueue__TypeInfo_for_P_25, mercury__psqueue__TypeInfo_for_K_26, mercury__psqueue__LoserPrio_52, mercury__psqueue__LoserKey_53, mercury__psqueue__LTreeB_54, mercury__psqueue__SplitKeyBC_55, mercury__psqueue__LTreeC_56);
            }
#line 572 "psqueue.m"
            {
#line 572 "psqueue.m"
              return mercury__psqueue__LTree_12 = mercury__psqueue__single_left_5_f_0(mercury__psqueue__TypeInfo_for_P_25, mercury__psqueue__TypeInfo_for_K_26, mercury__psqueue__Prio_7, mercury__psqueue__Key_8, mercury__psqueue__LTreeL_9, mercury__psqueue__SplitKey_10, mercury__psqueue__V_60_60);
            }
#line 571 "psqueue.m"
          }
#line 527 "psqueue.m"
      }
#line 534 "psqueue.m"
    return mercury__psqueue__LTree_12;
#line 534 "psqueue.m"
  }
#line 521 "psqueue.m"
}

#line 492 "psqueue.m"
static MR_Word MR_CALL 
mercury__psqueue__balance_5_f_0(
#line 492 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_23,
#line 492 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_24,
#line 492 "psqueue.m"
  MR_Box mercury__psqueue__Prio_7,
#line 492 "psqueue.m"
  MR_Box mercury__psqueue__Key_8,
#line 492 "psqueue.m"
  MR_Word mercury__psqueue__LTreeL_9,
#line 492 "psqueue.m"
  MR_Box mercury__psqueue__SplitKey_10,
#line 492 "psqueue.m"
  MR_Word mercury__psqueue__LTreeR_11)
#line 492 "psqueue.m"
{
#line 496 "psqueue.m"
  {
#line 496 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 496 "psqueue.m"
    MR_Word mercury__psqueue__LTree_12;
#line 496 "psqueue.m"
    MR_Integer mercury__psqueue__SizeL_13;
#line 496 "psqueue.m"
    MR_Integer mercury__psqueue__SizeR_14;
#line 500 "psqueue.m"
    MR_Integer mercury__psqueue__V_17_17;

#line 1033 "psqueue.m"
    if ((mercury__psqueue__LTreeL_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1032 "psqueue.m"
      mercury__psqueue__SizeL_13 = (MR_Integer) 0;
#line 1033 "psqueue.m"
    else
#line 1034 "psqueue.m"
      {
#line 1034 "psqueue.m"
        MR_Box mercury__psqueue__V_29_29;
#line 1034 "psqueue.m"
        MR_Box mercury__psqueue__V_30_30;
#line 1034 "psqueue.m"
        MR_Word mercury__psqueue__V_31_31;
#line 1034 "psqueue.m"
        MR_Box mercury__psqueue__V_32_32;
#line 1034 "psqueue.m"
        MR_Word mercury__psqueue__V_33_33;

#line 1034 "psqueue.m"
        mercury__psqueue__SizeL_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 0)));
#line 1034 "psqueue.m"
        mercury__psqueue__V_29_29 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 1));
#line 1034 "psqueue.m"
        mercury__psqueue__V_30_30 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 2));
#line 1034 "psqueue.m"
        mercury__psqueue__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 3)));
#line 1034 "psqueue.m"
        mercury__psqueue__V_32_32 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 4));
#line 1034 "psqueue.m"
        mercury__psqueue__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 5)));
#line 1034 "psqueue.m"
      }
#line 1033 "psqueue.m"
    if ((mercury__psqueue__LTreeR_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1032 "psqueue.m"
      mercury__psqueue__SizeR_14 = (MR_Integer) 0;
#line 1033 "psqueue.m"
    else
#line 1034 "psqueue.m"
      {
#line 1034 "psqueue.m"
        MR_Box mercury__psqueue__V_36_36;
#line 1034 "psqueue.m"
        MR_Box mercury__psqueue__V_37_37;
#line 1034 "psqueue.m"
        MR_Word mercury__psqueue__V_38_38;
#line 1034 "psqueue.m"
        MR_Box mercury__psqueue__V_39_39;
#line 1034 "psqueue.m"
        MR_Word mercury__psqueue__V_40_40;

#line 1034 "psqueue.m"
        mercury__psqueue__SizeR_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 0)));
#line 1034 "psqueue.m"
        mercury__psqueue__V_36_36 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 1));
#line 1034 "psqueue.m"
        mercury__psqueue__V_37_37 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 2));
#line 1034 "psqueue.m"
        mercury__psqueue__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 3)));
#line 1034 "psqueue.m"
        mercury__psqueue__V_39_39 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 4));
#line 1034 "psqueue.m"
        mercury__psqueue__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 5)));
#line 1034 "psqueue.m"
      }
#line 500 "psqueue.m"
    mercury__psqueue__V_17_17 = (mercury__psqueue__SizeR_14 + mercury__psqueue__SizeL_13);
#line 500 "psqueue.m"
    mercury__psqueue__succeeded = (mercury__psqueue__V_17_17 < (MR_Integer) 2);
#line 503 "psqueue.m"
    if (mercury__psqueue__succeeded)
#line 676 "psqueue.m"
      {
#line 676 "psqueue.m"
        MR_Integer mercury__psqueue__Size_47;
#line 676 "psqueue.m"
        MR_Integer mercury__psqueue__V_48_48;
#line 676 "psqueue.m"
        MR_Integer mercury__psqueue__V_50_50;
#line 676 "psqueue.m"
        MR_Integer mercury__psqueue__V_51_51;

#line 1033 "psqueue.m"
        if ((mercury__psqueue__LTreeL_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1032 "psqueue.m"
          mercury__psqueue__V_50_50 = (MR_Integer) 0;
#line 1033 "psqueue.m"
        else
#line 1034 "psqueue.m"
          {
#line 1034 "psqueue.m"
            MR_Box mercury__psqueue__V_54_54;
#line 1034 "psqueue.m"
            MR_Box mercury__psqueue__V_55_55;
#line 1034 "psqueue.m"
            MR_Word mercury__psqueue__V_56_56;
#line 1034 "psqueue.m"
            MR_Box mercury__psqueue__V_57_57;
#line 1034 "psqueue.m"
            MR_Word mercury__psqueue__V_58_58;

#line 1034 "psqueue.m"
            mercury__psqueue__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 0)));
#line 1034 "psqueue.m"
            mercury__psqueue__V_54_54 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 1));
#line 1034 "psqueue.m"
            mercury__psqueue__V_55_55 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 2));
#line 1034 "psqueue.m"
            mercury__psqueue__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 3)));
#line 1034 "psqueue.m"
            mercury__psqueue__V_57_57 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 4));
#line 1034 "psqueue.m"
            mercury__psqueue__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 5)));
#line 1034 "psqueue.m"
          }
#line 677 "psqueue.m"
        mercury__psqueue__V_48_48 = ((MR_Integer) 1 + mercury__psqueue__V_50_50);
#line 1033 "psqueue.m"
        if ((mercury__psqueue__LTreeR_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1032 "psqueue.m"
          mercury__psqueue__V_51_51 = (MR_Integer) 0;
#line 1033 "psqueue.m"
        else
#line 1034 "psqueue.m"
          {
#line 1034 "psqueue.m"
            MR_Box mercury__psqueue__V_61_61;
#line 1034 "psqueue.m"
            MR_Box mercury__psqueue__V_62_62;
#line 1034 "psqueue.m"
            MR_Word mercury__psqueue__V_63_63;
#line 1034 "psqueue.m"
            MR_Box mercury__psqueue__V_64_64;
#line 1034 "psqueue.m"
            MR_Word mercury__psqueue__V_65_65;

#line 1034 "psqueue.m"
            mercury__psqueue__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 0)));
#line 1034 "psqueue.m"
            mercury__psqueue__V_61_61 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 1));
#line 1034 "psqueue.m"
            mercury__psqueue__V_62_62 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 2));
#line 1034 "psqueue.m"
            mercury__psqueue__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 3)));
#line 1034 "psqueue.m"
            mercury__psqueue__V_64_64 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 4));
#line 1034 "psqueue.m"
            mercury__psqueue__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 5)));
#line 1034 "psqueue.m"
          }
#line 677 "psqueue.m"
        mercury__psqueue__Size_47 = (mercury__psqueue__V_48_48 + mercury__psqueue__V_51_51);
#line 678 "psqueue.m"
        {
#line 678 "psqueue.m"
          mercury__psqueue__LTree_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 678 "psqueue.m"
          MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 0) = ((MR_Box) (mercury__psqueue__Size_47));
#line 678 "psqueue.m"
          MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 1) = mercury__psqueue__Prio_7;
#line 678 "psqueue.m"
          MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 2) = mercury__psqueue__Key_8;
#line 678 "psqueue.m"
          MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 3) = ((MR_Box) (mercury__psqueue__LTreeL_9));
#line 678 "psqueue.m"
          MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 4) = mercury__psqueue__SplitKey_10;
#line 678 "psqueue.m"
          MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 5) = ((MR_Box) (mercury__psqueue__LTreeR_11));
#line 678 "psqueue.m"
        }
#line 676 "psqueue.m"
      }
#line 503 "psqueue.m"
    else
#line 508 "psqueue.m"
      {
#line 504 "psqueue.m"
        MR_Word mercury__psqueue__CMPL_15;
#line 504 "psqueue.m"
        MR_Integer mercury__psqueue__V_19_19 = ((MR_Integer) 4 * mercury__psqueue__SizeL_13);

#line 66 "private_builtin.opt"
        mercury__psqueue__succeeded = (mercury__psqueue__SizeR_14 < mercury__psqueue__V_19_19);
#line 69 "private_builtin.opt"
        if (mercury__psqueue__succeeded)
#line 68 "private_builtin.opt"
          mercury__psqueue__CMPL_15 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
        else
#line 74 "private_builtin.opt"
          {
#line 71 "private_builtin.opt"
            mercury__psqueue__succeeded = (mercury__psqueue__SizeR_14 == mercury__psqueue__V_19_19);
#line 74 "private_builtin.opt"
            if (mercury__psqueue__succeeded)
#line 73 "private_builtin.opt"
              mercury__psqueue__CMPL_15 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
            else
#line 75 "private_builtin.opt"
              mercury__psqueue__CMPL_15 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
          }
#line 505 "psqueue.m"
        mercury__psqueue__succeeded = (mercury__psqueue__CMPL_15 == (MR_Integer) 2);
#line 508 "psqueue.m"
        if (mercury__psqueue__succeeded)
#line 507 "psqueue.m"
          {
#line 507 "psqueue.m"
            return mercury__psqueue__LTree_12 = mercury__psqueue__balance_left_5_f_0(mercury__psqueue__TypeInfo_for_P_23, mercury__psqueue__TypeInfo_for_K_24, mercury__psqueue__Prio_7, mercury__psqueue__Key_8, mercury__psqueue__LTreeL_9, mercury__psqueue__SplitKey_10, mercury__psqueue__LTreeR_11);
          }
#line 508 "psqueue.m"
        else
#line 513 "psqueue.m"
          {
#line 509 "psqueue.m"
            MR_Word mercury__psqueue__CMPR_16;
#line 509 "psqueue.m"
            MR_Integer mercury__psqueue__V_21_21 = ((MR_Integer) 4 * mercury__psqueue__SizeR_14);

#line 66 "private_builtin.opt"
            mercury__psqueue__succeeded = (mercury__psqueue__SizeL_13 < mercury__psqueue__V_21_21);
#line 69 "private_builtin.opt"
            if (mercury__psqueue__succeeded)
#line 68 "private_builtin.opt"
              mercury__psqueue__CMPR_16 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
            else
#line 74 "private_builtin.opt"
              {
#line 71 "private_builtin.opt"
                mercury__psqueue__succeeded = (mercury__psqueue__SizeL_13 == mercury__psqueue__V_21_21);
#line 74 "private_builtin.opt"
                if (mercury__psqueue__succeeded)
#line 73 "private_builtin.opt"
                  mercury__psqueue__CMPR_16 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                else
#line 75 "private_builtin.opt"
                  mercury__psqueue__CMPR_16 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
              }
#line 510 "psqueue.m"
            mercury__psqueue__succeeded = (mercury__psqueue__CMPR_16 == (MR_Integer) 2);
#line 513 "psqueue.m"
            if (mercury__psqueue__succeeded)
#line 512 "psqueue.m"
              {
#line 512 "psqueue.m"
                return mercury__psqueue__LTree_12 = mercury__psqueue__balance_right_5_f_0(mercury__psqueue__TypeInfo_for_P_23, mercury__psqueue__TypeInfo_for_K_24, mercury__psqueue__Prio_7, mercury__psqueue__Key_8, mercury__psqueue__LTreeL_9, mercury__psqueue__SplitKey_10, mercury__psqueue__LTreeR_11);
              }
#line 513 "psqueue.m"
            else
#line 676 "psqueue.m"
              {
#line 676 "psqueue.m"
                MR_Integer mercury__psqueue__Size_78;
#line 676 "psqueue.m"
                MR_Integer mercury__psqueue__V_79_79;
#line 676 "psqueue.m"
                MR_Integer mercury__psqueue__V_81_81;
#line 676 "psqueue.m"
                MR_Integer mercury__psqueue__V_82_82;

#line 1033 "psqueue.m"
                if ((mercury__psqueue__LTreeL_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1032 "psqueue.m"
                  mercury__psqueue__V_81_81 = (MR_Integer) 0;
#line 1033 "psqueue.m"
                else
#line 1034 "psqueue.m"
                  {
#line 1034 "psqueue.m"
                    MR_Box mercury__psqueue__V_85_85;
#line 1034 "psqueue.m"
                    MR_Box mercury__psqueue__V_86_86;
#line 1034 "psqueue.m"
                    MR_Word mercury__psqueue__V_87_87;
#line 1034 "psqueue.m"
                    MR_Box mercury__psqueue__V_88_88;
#line 1034 "psqueue.m"
                    MR_Word mercury__psqueue__V_89_89;

#line 1034 "psqueue.m"
                    mercury__psqueue__V_81_81 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 0)));
#line 1034 "psqueue.m"
                    mercury__psqueue__V_85_85 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 1));
#line 1034 "psqueue.m"
                    mercury__psqueue__V_86_86 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 2));
#line 1034 "psqueue.m"
                    mercury__psqueue__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 3)));
#line 1034 "psqueue.m"
                    mercury__psqueue__V_88_88 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 4));
#line 1034 "psqueue.m"
                    mercury__psqueue__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 5)));
#line 1034 "psqueue.m"
                  }
#line 677 "psqueue.m"
                mercury__psqueue__V_79_79 = ((MR_Integer) 1 + mercury__psqueue__V_81_81);
#line 1033 "psqueue.m"
                if ((mercury__psqueue__LTreeR_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1032 "psqueue.m"
                  mercury__psqueue__V_82_82 = (MR_Integer) 0;
#line 1033 "psqueue.m"
                else
#line 1034 "psqueue.m"
                  {
#line 1034 "psqueue.m"
                    MR_Box mercury__psqueue__V_92_92;
#line 1034 "psqueue.m"
                    MR_Box mercury__psqueue__V_93_93;
#line 1034 "psqueue.m"
                    MR_Word mercury__psqueue__V_94_94;
#line 1034 "psqueue.m"
                    MR_Box mercury__psqueue__V_95_95;
#line 1034 "psqueue.m"
                    MR_Word mercury__psqueue__V_96_96;

#line 1034 "psqueue.m"
                    mercury__psqueue__V_82_82 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 0)));
#line 1034 "psqueue.m"
                    mercury__psqueue__V_92_92 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 1));
#line 1034 "psqueue.m"
                    mercury__psqueue__V_93_93 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 2));
#line 1034 "psqueue.m"
                    mercury__psqueue__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 3)));
#line 1034 "psqueue.m"
                    mercury__psqueue__V_95_95 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 4));
#line 1034 "psqueue.m"
                    mercury__psqueue__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 5)));
#line 1034 "psqueue.m"
                  }
#line 677 "psqueue.m"
                mercury__psqueue__Size_78 = (mercury__psqueue__V_79_79 + mercury__psqueue__V_82_82);
#line 678 "psqueue.m"
                {
#line 678 "psqueue.m"
                  mercury__psqueue__LTree_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 678 "psqueue.m"
                  MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 0) = ((MR_Box) (mercury__psqueue__Size_78));
#line 678 "psqueue.m"
                  MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 1) = mercury__psqueue__Prio_7;
#line 678 "psqueue.m"
                  MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 2) = mercury__psqueue__Key_8;
#line 678 "psqueue.m"
                  MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 3) = ((MR_Box) (mercury__psqueue__LTreeL_9));
#line 678 "psqueue.m"
                  MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 4) = mercury__psqueue__SplitKey_10;
#line 678 "psqueue.m"
                  MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 5) = ((MR_Box) (mercury__psqueue__LTreeR_11));
#line 678 "psqueue.m"
                }
#line 676 "psqueue.m"
              }
#line 513 "psqueue.m"
          }
#line 508 "psqueue.m"
      }
#line 496 "psqueue.m"
    return mercury__psqueue__LTree_12;
#line 496 "psqueue.m"
  }
#line 492 "psqueue.m"
}

#line 450 "psqueue.m"
void MR_CALL 
mercury__psqueue__combine_winners_via_tournament_3_p_0(
#line 450 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_17,
#line 450 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_18,
#line 450 "psqueue.m"
  MR_Word mercury__psqueue__WinnerA_4,
#line 450 "psqueue.m"
  MR_Word mercury__psqueue__WinnerB_5,
#line 450 "psqueue.m"
  MR_Word * mercury__psqueue__CombinedWinner_6)
#line 450 "psqueue.m"
{
#line 454 "psqueue.m"
  {
#line 454 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 454 "psqueue.m"
    MR_Box mercury__psqueue__PrioA_7 = (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_4, (MR_Integer) 0));
#line 454 "psqueue.m"
    MR_Box mercury__psqueue__KeyA_8 = (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_4, (MR_Integer) 1));
#line 454 "psqueue.m"
    MR_Word mercury__psqueue__LTreeA_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_4, (MR_Integer) 2)));
#line 454 "psqueue.m"
    MR_Box mercury__psqueue__MaxKeyA_10 = (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_4, (MR_Integer) 3));
#line 454 "psqueue.m"
    MR_Box mercury__psqueue__PrioB_11 = (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_5, (MR_Integer) 0));
#line 454 "psqueue.m"
    MR_Box mercury__psqueue__KeyB_12 = (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_5, (MR_Integer) 1));
#line 454 "psqueue.m"
    MR_Word mercury__psqueue__LTreeB_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_5, (MR_Integer) 2)));
#line 454 "psqueue.m"
    MR_Box mercury__psqueue__MaxKeyB_14 = (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_5, (MR_Integer) 3));
#line 1042 "psqueue.m"
    MR_Word mercury__psqueue__CMP_21;

#line 1043 "psqueue.m"
    {
#line 1043 "psqueue.m"
      mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_P_17, &mercury__psqueue__CMP_21, mercury__psqueue__PrioA_7, mercury__psqueue__PrioB_11);
    }
#line 1045 "psqueue.m"
    if ((mercury__psqueue__CMP_21 == (MR_Integer) 1))
#line 1044 "psqueue.m"
      mercury__psqueue__succeeded = MR_TRUE;
#line 1045 "psqueue.m"
    else
#line 1045 "psqueue.m"
      if ((mercury__psqueue__CMP_21 == (MR_Integer) 0))
#line 1045 "psqueue.m"
        mercury__psqueue__succeeded = MR_TRUE;
#line 1045 "psqueue.m"
      else
#line 1045 "psqueue.m"
        mercury__psqueue__succeeded = MR_FALSE;
#line 461 "psqueue.m"
    if (mercury__psqueue__succeeded)
#line 459 "psqueue.m"
      {
#line 459 "psqueue.m"
        MR_Word mercury__psqueue__LTree_15;

#line 459 "psqueue.m"
        {
#line 459 "psqueue.m"
          mercury__psqueue__LTree_15 = mercury__psqueue__balance_5_f_0(mercury__psqueue__TypeInfo_for_P_17, mercury__psqueue__TypeInfo_for_K_18, mercury__psqueue__PrioB_11, mercury__psqueue__KeyB_12, mercury__psqueue__LTreeA_9, mercury__psqueue__MaxKeyA_10, mercury__psqueue__LTreeB_13);
        }
#line 460 "psqueue.m"
        {
#line 460 "psqueue.m"
          MR_Word base;
#line 460 "psqueue.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 460 "psqueue.m"
          *mercury__psqueue__CombinedWinner_6 = base;
#line 460 "psqueue.m"
          MR_hl_field(MR_mktag(0), base, 0) = mercury__psqueue__PrioA_7;
#line 460 "psqueue.m"
          MR_hl_field(MR_mktag(0), base, 1) = mercury__psqueue__KeyA_8;
#line 460 "psqueue.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__psqueue__LTree_15));
#line 460 "psqueue.m"
          MR_hl_field(MR_mktag(0), base, 3) = mercury__psqueue__MaxKeyB_14;
#line 460 "psqueue.m"
        }
#line 459 "psqueue.m"
      }
#line 461 "psqueue.m"
    else
#line 463 "psqueue.m"
      {
#line 463 "psqueue.m"
        MR_Word mercury__psqueue__LTree_16;

#line 463 "psqueue.m"
        {
#line 463 "psqueue.m"
          mercury__psqueue__LTree_16 = mercury__psqueue__balance_5_f_0(mercury__psqueue__TypeInfo_for_P_17, mercury__psqueue__TypeInfo_for_K_18, mercury__psqueue__PrioA_7, mercury__psqueue__KeyA_8, mercury__psqueue__LTreeA_9, mercury__psqueue__MaxKeyA_10, mercury__psqueue__LTreeB_13);
        }
#line 464 "psqueue.m"
        {
#line 464 "psqueue.m"
          MR_Word base;
#line 464 "psqueue.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 464 "psqueue.m"
          *mercury__psqueue__CombinedWinner_6 = base;
#line 464 "psqueue.m"
          MR_hl_field(MR_mktag(0), base, 0) = mercury__psqueue__PrioB_11;
#line 464 "psqueue.m"
          MR_hl_field(MR_mktag(0), base, 1) = mercury__psqueue__KeyB_12;
#line 464 "psqueue.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__psqueue__LTree_16));
#line 464 "psqueue.m"
          MR_hl_field(MR_mktag(0), base, 3) = mercury__psqueue__MaxKeyB_14;
#line 464 "psqueue.m"
        }
#line 463 "psqueue.m"
      }
#line 454 "psqueue.m"
  }
#line 450 "psqueue.m"
}

#line 364 "psqueue.m"
MR_Word MR_CALL 
mercury__psqueue__get_tournament_view_1_f_0(
#line 364 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_17,
#line 364 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_18,
#line 364 "psqueue.m"
  MR_Word mercury__psqueue__Winner_3)
#line 364 "psqueue.m"
{
#line 367 "psqueue.m"
  {
#line 367 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 367 "psqueue.m"
    MR_Word mercury__psqueue__TournamentView_4;
#line 367 "psqueue.m"
    MR_Box mercury__psqueue__WinnerPrio_5 = (MR_hl_field(MR_mktag(0), mercury__psqueue__Winner_3, (MR_Integer) 0));
#line 367 "psqueue.m"
    MR_Box mercury__psqueue__WinnerKey_6 = (MR_hl_field(MR_mktag(0), mercury__psqueue__Winner_3, (MR_Integer) 1));
#line 367 "psqueue.m"
    MR_Word mercury__psqueue__LTree_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__psqueue__Winner_3, (MR_Integer) 2)));
#line 367 "psqueue.m"
    MR_Box mercury__psqueue__MaxKey_8 = (MR_hl_field(MR_mktag(0), mercury__psqueue__Winner_3, (MR_Integer) 3));

#line 372 "psqueue.m"
    if ((mercury__psqueue__LTree_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 371 "psqueue.m"
      {
#line 371 "psqueue.m"
        mercury__psqueue__TournamentView_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 371 "psqueue.m"
        MR_hl_field(MR_mktag(0), mercury__psqueue__TournamentView_4, 0) = mercury__psqueue__WinnerPrio_5;
#line 371 "psqueue.m"
        MR_hl_field(MR_mktag(0), mercury__psqueue__TournamentView_4, 1) = mercury__psqueue__WinnerKey_6;
#line 371 "psqueue.m"
      }
#line 372 "psqueue.m"
    else
#line 374 "psqueue.m"
      {
#line 374 "psqueue.m"
        MR_Box mercury__psqueue__LoserPrio_10 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_7, (MR_Integer) 1));
#line 374 "psqueue.m"
        MR_Box mercury__psqueue__LoserKey_11 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_7, (MR_Integer) 2));
#line 374 "psqueue.m"
        MR_Word mercury__psqueue__SubLTreeL_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_7, (MR_Integer) 3)));
#line 374 "psqueue.m"
        MR_Box mercury__psqueue__SplitKey_13 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_7, (MR_Integer) 4));
#line 374 "psqueue.m"
        MR_Word mercury__psqueue__SubLTreeR_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_7, (MR_Integer) 5)));
#line 374 "psqueue.m"
        MR_Word mercury__psqueue__WinnerA_15;
#line 374 "psqueue.m"
        MR_Word mercury__psqueue__WinnerB_16;
#line 373 "psqueue.m"
        MR_Integer mercury__psqueue__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_7, (MR_Integer) 0)));
#line 1042 "psqueue.m"
        MR_Word mercury__psqueue__CMP_21;

#line 1043 "psqueue.m"
        {
#line 1043 "psqueue.m"
          mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_18, &mercury__psqueue__CMP_21, mercury__psqueue__LoserKey_11, mercury__psqueue__SplitKey_13);
        }
#line 1045 "psqueue.m"
        if ((mercury__psqueue__CMP_21 == (MR_Integer) 1))
#line 1044 "psqueue.m"
          mercury__psqueue__succeeded = MR_TRUE;
#line 1045 "psqueue.m"
        else
#line 1045 "psqueue.m"
          if ((mercury__psqueue__CMP_21 == (MR_Integer) 0))
#line 1045 "psqueue.m"
            mercury__psqueue__succeeded = MR_TRUE;
#line 1045 "psqueue.m"
          else
#line 1045 "psqueue.m"
            mercury__psqueue__succeeded = MR_FALSE;
#line 378 "psqueue.m"
        if (mercury__psqueue__succeeded)
#line 376 "psqueue.m"
          {
#line 376 "psqueue.m"
            {
#line 376 "psqueue.m"
              mercury__psqueue__WinnerA_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 376 "psqueue.m"
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_15, 0) = mercury__psqueue__LoserPrio_10;
#line 376 "psqueue.m"
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_15, 1) = mercury__psqueue__LoserKey_11;
#line 376 "psqueue.m"
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_15, 2) = ((MR_Box) (mercury__psqueue__SubLTreeL_12));
#line 376 "psqueue.m"
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_15, 3) = mercury__psqueue__SplitKey_13;
#line 376 "psqueue.m"
            }
#line 377 "psqueue.m"
            {
#line 377 "psqueue.m"
              mercury__psqueue__WinnerB_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 377 "psqueue.m"
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_16, 0) = mercury__psqueue__WinnerPrio_5;
#line 377 "psqueue.m"
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_16, 1) = mercury__psqueue__WinnerKey_6;
#line 377 "psqueue.m"
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_16, 2) = ((MR_Box) (mercury__psqueue__SubLTreeR_14));
#line 377 "psqueue.m"
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_16, 3) = mercury__psqueue__MaxKey_8;
#line 377 "psqueue.m"
            }
#line 376 "psqueue.m"
          }
#line 378 "psqueue.m"
        else
#line 379 "psqueue.m"
          {
#line 379 "psqueue.m"
            {
#line 379 "psqueue.m"
              mercury__psqueue__WinnerA_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 379 "psqueue.m"
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_15, 0) = mercury__psqueue__WinnerPrio_5;
#line 379 "psqueue.m"
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_15, 1) = mercury__psqueue__WinnerKey_6;
#line 379 "psqueue.m"
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_15, 2) = ((MR_Box) (mercury__psqueue__SubLTreeL_12));
#line 379 "psqueue.m"
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_15, 3) = mercury__psqueue__SplitKey_13;
#line 379 "psqueue.m"
            }
#line 380 "psqueue.m"
            {
#line 380 "psqueue.m"
              mercury__psqueue__WinnerB_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 380 "psqueue.m"
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_16, 0) = mercury__psqueue__LoserPrio_10;
#line 380 "psqueue.m"
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_16, 1) = mercury__psqueue__LoserKey_11;
#line 380 "psqueue.m"
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_16, 2) = ((MR_Box) (mercury__psqueue__SubLTreeR_14));
#line 380 "psqueue.m"
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_16, 3) = mercury__psqueue__MaxKey_8;
#line 380 "psqueue.m"
            }
#line 379 "psqueue.m"
          }
#line 382 "psqueue.m"
        {
#line 382 "psqueue.m"
          mercury__psqueue__TournamentView_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 382 "psqueue.m"
          MR_hl_field(MR_mktag(1), mercury__psqueue__TournamentView_4, 0) = ((MR_Box) (mercury__psqueue__WinnerA_15));
#line 382 "psqueue.m"
          MR_hl_field(MR_mktag(1), mercury__psqueue__TournamentView_4, 1) = ((MR_Box) (mercury__psqueue__WinnerB_16));
#line 382 "psqueue.m"
        }
#line 374 "psqueue.m"
      }
#line 367 "psqueue.m"
    return mercury__psqueue__TournamentView_4;
#line 367 "psqueue.m"
  }
#line 364 "psqueue.m"
}

#line 217 "psqueue.m"
MR_String MR_CALL 
mercury__psqueue__verify_and_dump_psqueue_1_f_0(
#line 217 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_8,
#line 217 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_9,
#line 217 "psqueue.m"
  MR_Word mercury__psqueue__PSQ_3)
#line 217 "psqueue.m"
{
#line 1381 "psqueue.m"
  {
#line 1381 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 1381 "psqueue.m"
    MR_String mercury__psqueue__Str_4;

#line 1077 "psqueue.m"
    if ((mercury__psqueue__PSQ_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1076 "psqueue.m"
      mercury__psqueue__succeeded = MR_TRUE;
#line 1077 "psqueue.m"
    else
#line 1078 "psqueue.m"
      {
#line 1078 "psqueue.m"
        MR_Box mercury__psqueue__WinnerPrio_11;
#line 1078 "psqueue.m"
        MR_Word mercury__psqueue__LTree_13;
#line 1078 "psqueue.m"
        MR_Word mercury__psqueue__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_3, (MR_Integer) 0)));
#line 1078 "psqueue.m"
        MR_Box mercury__psqueue__V_12_12;
#line 1078 "psqueue.m"
        MR_Box mercury__psqueue__V_14_14;

#line 1078 "psqueue.m"
        mercury__psqueue__WinnerPrio_11 = (MR_hl_field(MR_mktag(0), mercury__psqueue__V_15_15, (MR_Integer) 0));
#line 1078 "psqueue.m"
        mercury__psqueue__V_12_12 = (MR_hl_field(MR_mktag(0), mercury__psqueue__V_15_15, (MR_Integer) 1));
#line 1078 "psqueue.m"
        mercury__psqueue__LTree_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__psqueue__V_15_15, (MR_Integer) 2)));
#line 1078 "psqueue.m"
        mercury__psqueue__V_14_14 = (MR_hl_field(MR_mktag(0), mercury__psqueue__V_15_15, (MR_Integer) 3));
#line 1079 "psqueue.m"
        {
#line 1079 "psqueue.m"
          mercury__psqueue__succeeded = mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_112_114_105_111_115_95_105_110_95_108_111_115_101_114_95_116_114_101_101_95_97_116_95_111_114_95_97_98_111_118_101_95_112_114_105_111_95_95_91_50_93_95_48_2_p_0(mercury__psqueue__TypeInfo_for_P_8, mercury__psqueue__WinnerPrio_11, mercury__psqueue__LTree_13);
        }
#line 1078 "psqueue.m"
        if (mercury__psqueue__succeeded)
#line 1080 "psqueue.m"
          {
#line 1080 "psqueue.m"
            mercury__psqueue__succeeded = mercury__psqueue__all_nodes_obey_semi_heap_1_p_0(mercury__psqueue__TypeInfo_for_P_8, mercury__psqueue__TypeInfo_for_K_9, mercury__psqueue__LTree_13);
          }
#line 1078 "psqueue.m"
      }
#line 1375 "psqueue.m"
    if (mercury__psqueue__succeeded)
#line 1375 "psqueue.m"
      {
#line 1151 "psqueue.m"
        if ((mercury__psqueue__PSQ_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1150 "psqueue.m"
          mercury__psqueue__succeeded = MR_TRUE;
#line 1151 "psqueue.m"
        else
#line 1152 "psqueue.m"
          {
#line 1152 "psqueue.m"
            MR_Word mercury__psqueue__LTree_19;
#line 1152 "psqueue.m"
            MR_Word mercury__psqueue__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_3, (MR_Integer) 0)));
#line 1152 "psqueue.m"
            MR_Box mercury__psqueue__V_17_17 = (MR_hl_field(MR_mktag(0), mercury__psqueue__V_21_21, (MR_Integer) 0));
#line 1152 "psqueue.m"
            MR_Box mercury__psqueue__V_18_18 = (MR_hl_field(MR_mktag(0), mercury__psqueue__V_21_21, (MR_Integer) 1));
#line 1152 "psqueue.m"
            MR_Box mercury__psqueue__V_20_20;

#line 1152 "psqueue.m"
            mercury__psqueue__LTree_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__psqueue__V_21_21, (MR_Integer) 2)));
#line 1152 "psqueue.m"
            mercury__psqueue__V_20_20 = (MR_hl_field(MR_mktag(0), mercury__psqueue__V_21_21, (MR_Integer) 3));
#line 1153 "psqueue.m"
            {
#line 1153 "psqueue.m"
              mercury__psqueue__succeeded = mercury__psqueue__loser_tree_has_search_property_1_p_0(mercury__psqueue__TypeInfo_for_P_8, mercury__psqueue__TypeInfo_for_K_9, mercury__psqueue__LTree_19);
            }
#line 1152 "psqueue.m"
          }
#line 1375 "psqueue.m"
        if (mercury__psqueue__succeeded)
#line 1375 "psqueue.m"
          {
#line 1377 "psqueue.m"
            {
#line 1377 "psqueue.m"
              mercury__psqueue__succeeded = mercury__psqueue__has_key_condition_1_p_0(mercury__psqueue__TypeInfo_for_P_8, mercury__psqueue__TypeInfo_for_K_9, mercury__psqueue__PSQ_3);
            }
#line 1375 "psqueue.m"
            if (mercury__psqueue__succeeded)
#line 1378 "psqueue.m"
              {
#line 1378 "psqueue.m"
                mercury__psqueue__succeeded = mercury__psqueue__is_finite_map_1_p_0(mercury__psqueue__TypeInfo_for_P_8, mercury__psqueue__TypeInfo_for_K_9, mercury__psqueue__PSQ_3);
              }
#line 1375 "psqueue.m"
          }
#line 1375 "psqueue.m"
      }
#line 1381 "psqueue.m"
    if (mercury__psqueue__succeeded)
#line 1370 "psqueue.m"
      {
#line 1371 "psqueue.m"
        {
#line 1371 "psqueue.m"
          return mercury__psqueue__Str_4 = mercury__psqueue__dump_psqueue_2_f_0(mercury__psqueue__TypeInfo_for_P_8, mercury__psqueue__TypeInfo_for_K_9, (MR_Integer) 0, mercury__psqueue__PSQ_3);
        }
#line 1370 "psqueue.m"
      }
#line 1381 "psqueue.m"
    else
#line 1382 "psqueue.m"
      {
#line 1382 "psqueue.m"
        {
#line 1382 "psqueue.m"
          mercury__require__unexpected_3_p_0((MR_String) "psqueue", (MR_String) "function \140psqueue.verify_and_dump_psqueue\'/1", (MR_String) "verification failed");
        }
#line 1382 "psqueue.m"
      }
#line 1381 "psqueue.m"
    return mercury__psqueue__Str_4;
#line 1381 "psqueue.m"
  }
#line 217 "psqueue.m"
}

#line 211 "psqueue.m"
MR_String MR_CALL 
mercury__psqueue__dump_psqueue_1_f_0(
#line 211 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_5,
#line 211 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_6,
#line 211 "psqueue.m"
  MR_Word mercury__psqueue__PSQ_3)
#line 211 "psqueue.m"
{
#line 1370 "psqueue.m"
  {
#line 1370 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 1370 "psqueue.m"
    MR_String mercury__psqueue__HeadVar__2_2;

#line 1371 "psqueue.m"
    {
#line 1371 "psqueue.m"
      return mercury__psqueue__HeadVar__2_2 = mercury__psqueue__dump_psqueue_2_f_0(mercury__psqueue__TypeInfo_for_P_5, mercury__psqueue__TypeInfo_for_K_6, (MR_Integer) 0, mercury__psqueue__PSQ_3);
    }
#line 1370 "psqueue.m"
    return mercury__psqueue__HeadVar__2_2;
#line 1370 "psqueue.m"
  }
#line 211 "psqueue.m"
}

#line 207 "psqueue.m"
MR_bool MR_CALL 
mercury__psqueue__is_finite_map_1_p_0(
#line 207 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_12,
#line 207 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_13,
#line 207 "psqueue.m"
  MR_Word mercury__psqueue__PSQ_2)
#line 207 "psqueue.m"
{
#line 1344 "psqueue.m"
  {
#line 1344 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;

#line 1344 "psqueue.m"
    if ((mercury__psqueue__PSQ_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1343 "psqueue.m"
      mercury__psqueue__succeeded = MR_TRUE;
#line 1344 "psqueue.m"
    else
#line 1345 "psqueue.m"
      {
#line 1345 "psqueue.m"
        MR_Word mercury__psqueue__Winner_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_2, (MR_Integer) 0)));
#line 1345 "psqueue.m"
        MR_Word mercury__psqueue__LTree_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__psqueue__Winner_3, (MR_Integer) 2)));
#line 1345 "psqueue.m"
        MR_Word mercury__psqueue__Keys_8;
#line 1345 "psqueue.m"
        MR_Word mercury__psqueue__UniqKeys_9;
#line 1345 "psqueue.m"
        MR_Integer mercury__psqueue__NumKeys_10;
#line 1345 "psqueue.m"
        MR_Integer mercury__psqueue__NumUniqKeys_11;
#line 1345 "psqueue.m"
        MR_Integer mercury__psqueue__V_5_16;
#line 1346 "psqueue.m"
        MR_Box mercury__psqueue__V_4_4 = (MR_hl_field(MR_mktag(0), mercury__psqueue__Winner_3, (MR_Integer) 0));
#line 1346 "psqueue.m"
        MR_Box mercury__psqueue__V_5_5 = (MR_hl_field(MR_mktag(0), mercury__psqueue__Winner_3, (MR_Integer) 1));
#line 1346 "psqueue.m"
        MR_Box mercury__psqueue__V_7_7 = (MR_hl_field(MR_mktag(0), mercury__psqueue__Winner_3, (MR_Integer) 3));

#line 1347 "psqueue.m"
        {
#line 1347 "psqueue.m"
          mercury__psqueue__Keys_8 = mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_107_101_121_115_95_95_91_49_93_95_48_1_f_0(mercury__psqueue__TypeInfo_for_K_13, mercury__psqueue__LTree_6);
        }
#line 78 "list.opt"
        {
#line 78 "list.opt"
          mercury__list__length_2_3_p_0(mercury__psqueue__TypeInfo_for_K_13, mercury__psqueue__Keys_8, (MR_Integer) 0, &mercury__psqueue__V_5_16);
        }
#line 110 "list.opt"
        {
#line 110 "list.opt"
          mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__psqueue__TypeInfo_for_K_13, mercury__psqueue__V_5_16, mercury__psqueue__Keys_8, &mercury__psqueue__UniqKeys_9);
        }
#line 78 "list.opt"
        {
#line 78 "list.opt"
          mercury__list__length_2_3_p_0(mercury__psqueue__TypeInfo_for_K_13, mercury__psqueue__Keys_8, (MR_Integer) 0, &mercury__psqueue__NumKeys_10);
        }
#line 78 "list.opt"
        {
#line 78 "list.opt"
          mercury__list__length_2_3_p_0(mercury__psqueue__TypeInfo_for_K_13, mercury__psqueue__UniqKeys_9, (MR_Integer) 0, &mercury__psqueue__NumUniqKeys_11);
        }
#line 1351 "psqueue.m"
        mercury__psqueue__succeeded = (mercury__psqueue__NumKeys_10 == mercury__psqueue__NumUniqKeys_11);
#line 1345 "psqueue.m"
      }
#line 1344 "psqueue.m"
    return mercury__psqueue__succeeded;
#line 1344 "psqueue.m"
  }
#line 207 "psqueue.m"
}

#line 203 "psqueue.m"
MR_bool MR_CALL 
mercury__psqueue__has_key_condition_1_p_0(
#line 203 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_9,
#line 203 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_10,
#line 203 "psqueue.m"
  MR_Word mercury__psqueue__PSQ_2)
#line 203 "psqueue.m"
{
#line 1314 "psqueue.m"
  {
#line 1314 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;

#line 1314 "psqueue.m"
    if ((mercury__psqueue__PSQ_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1313 "psqueue.m"
      mercury__psqueue__succeeded = MR_TRUE;
#line 1314 "psqueue.m"
    else
#line 1315 "psqueue.m"
      {
#line 1315 "psqueue.m"
        MR_Word mercury__psqueue__LTree_5;
#line 1315 "psqueue.m"
        MR_Box mercury__psqueue__MaxKey_6;
#line 1315 "psqueue.m"
        MR_Word mercury__psqueue__Winner_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_2, (MR_Integer) 0)));
#line 1315 "psqueue.m"
        MR_Word mercury__psqueue__V_15_15;
#line 1315 "psqueue.m"
        MR_Box mercury__psqueue__V_3_3 = (MR_hl_field(MR_mktag(0), mercury__psqueue__Winner_14, (MR_Integer) 0));
#line 1315 "psqueue.m"
        MR_Box mercury__psqueue__V_4_4 = (MR_hl_field(MR_mktag(0), mercury__psqueue__Winner_14, (MR_Integer) 1));
#line 937 "psqueue.m"
        MR_Box mercury__psqueue__V_7_7;

#line 1315 "psqueue.m"
        mercury__psqueue__LTree_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__psqueue__Winner_14, (MR_Integer) 2)));
#line 1315 "psqueue.m"
        mercury__psqueue__MaxKey_6 = (MR_hl_field(MR_mktag(0), mercury__psqueue__Winner_14, (MR_Integer) 3));
#line 937 "psqueue.m"
        {
#line 937 "psqueue.m"
          mercury__psqueue__V_15_15 = mercury__psqueue__get_tournament_view_1_f_0(mercury__psqueue__TypeInfo_for_P_9, mercury__psqueue__TypeInfo_for_K_10, mercury__psqueue__Winner_14);
        }
#line 937 "psqueue.m"
        {
#line 937 "psqueue.m"
          mercury__psqueue__succeeded = mercury__psqueue__search_tv_3_p_0(mercury__psqueue__TypeInfo_for_P_9, mercury__psqueue__TypeInfo_for_K_10, mercury__psqueue__V_15_15, mercury__psqueue__MaxKey_6, &mercury__psqueue__V_7_7);
        }
#line 1315 "psqueue.m"
        if (mercury__psqueue__succeeded)
#line 1317 "psqueue.m"
          {
#line 1317 "psqueue.m"
            return mercury__psqueue__succeeded = mercury__psqueue__loser_split_keys_are_present_2_p_0(mercury__psqueue__TypeInfo_for_P_9, mercury__psqueue__TypeInfo_for_K_10, mercury__psqueue__PSQ_2, mercury__psqueue__LTree_5);
          }
#line 1315 "psqueue.m"
      }
#line 1314 "psqueue.m"
    return mercury__psqueue__succeeded;
#line 1314 "psqueue.m"
  }
#line 203 "psqueue.m"
}

#line 198 "psqueue.m"
MR_bool MR_CALL 
mercury__psqueue__is_search_tree_1_p_0(
#line 198 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_8,
#line 198 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_9,
#line 198 "psqueue.m"
  MR_Word mercury__psqueue__PSQ_2)
#line 198 "psqueue.m"
{
#line 1151 "psqueue.m"
  {
#line 1151 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;

#line 1151 "psqueue.m"
    if ((mercury__psqueue__PSQ_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1150 "psqueue.m"
      mercury__psqueue__succeeded = MR_TRUE;
#line 1151 "psqueue.m"
    else
#line 1152 "psqueue.m"
      {
#line 1152 "psqueue.m"
        MR_Word mercury__psqueue__LTree_5;
#line 1152 "psqueue.m"
        MR_Word mercury__psqueue__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_2, (MR_Integer) 0)));
#line 1152 "psqueue.m"
        MR_Box mercury__psqueue__V_3_3 = (MR_hl_field(MR_mktag(0), mercury__psqueue__V_7_7, (MR_Integer) 0));
#line 1152 "psqueue.m"
        MR_Box mercury__psqueue__V_4_4 = (MR_hl_field(MR_mktag(0), mercury__psqueue__V_7_7, (MR_Integer) 1));
#line 1152 "psqueue.m"
        MR_Box mercury__psqueue__V_6_6;

#line 1152 "psqueue.m"
        mercury__psqueue__LTree_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__psqueue__V_7_7, (MR_Integer) 2)));
#line 1152 "psqueue.m"
        mercury__psqueue__V_6_6 = (MR_hl_field(MR_mktag(0), mercury__psqueue__V_7_7, (MR_Integer) 3));
#line 1153 "psqueue.m"
        {
#line 1153 "psqueue.m"
          return mercury__psqueue__succeeded = mercury__psqueue__loser_tree_has_search_property_1_p_0(mercury__psqueue__TypeInfo_for_P_8, mercury__psqueue__TypeInfo_for_K_9, mercury__psqueue__LTree_5);
        }
#line 1152 "psqueue.m"
      }
#line 1151 "psqueue.m"
    return mercury__psqueue__succeeded;
#line 1151 "psqueue.m"
  }
#line 198 "psqueue.m"
}

#line 189 "psqueue.m"
MR_bool MR_CALL 
mercury__psqueue__is_semi_heap_1_p_0(
#line 189 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_8,
#line 189 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_9,
#line 189 "psqueue.m"
  MR_Word mercury__psqueue__PSQ_2)
#line 189 "psqueue.m"
{
#line 1077 "psqueue.m"
  {
#line 1077 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;

#line 1077 "psqueue.m"
    if ((mercury__psqueue__PSQ_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1076 "psqueue.m"
      mercury__psqueue__succeeded = MR_TRUE;
#line 1077 "psqueue.m"
    else
#line 1078 "psqueue.m"
      {
#line 1078 "psqueue.m"
        MR_Box mercury__psqueue__WinnerPrio_3;
#line 1078 "psqueue.m"
        MR_Word mercury__psqueue__LTree_5;
#line 1078 "psqueue.m"
        MR_Word mercury__psqueue__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_2, (MR_Integer) 0)));
#line 1078 "psqueue.m"
        MR_Box mercury__psqueue__V_4_4;
#line 1078 "psqueue.m"
        MR_Box mercury__psqueue__V_6_6;

#line 1078 "psqueue.m"
        mercury__psqueue__WinnerPrio_3 = (MR_hl_field(MR_mktag(0), mercury__psqueue__V_7_7, (MR_Integer) 0));
#line 1078 "psqueue.m"
        mercury__psqueue__V_4_4 = (MR_hl_field(MR_mktag(0), mercury__psqueue__V_7_7, (MR_Integer) 1));
#line 1078 "psqueue.m"
        mercury__psqueue__LTree_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__psqueue__V_7_7, (MR_Integer) 2)));
#line 1078 "psqueue.m"
        mercury__psqueue__V_6_6 = (MR_hl_field(MR_mktag(0), mercury__psqueue__V_7_7, (MR_Integer) 3));
#line 1079 "psqueue.m"
        {
#line 1079 "psqueue.m"
          mercury__psqueue__succeeded = mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_112_114_105_111_115_95_105_110_95_108_111_115_101_114_95_116_114_101_101_95_97_116_95_111_114_95_97_98_111_118_101_95_112_114_105_111_95_95_91_50_93_95_48_2_p_0(mercury__psqueue__TypeInfo_for_P_8, mercury__psqueue__WinnerPrio_3, mercury__psqueue__LTree_5);
        }
#line 1078 "psqueue.m"
        if (mercury__psqueue__succeeded)
#line 1080 "psqueue.m"
          {
#line 1080 "psqueue.m"
            return mercury__psqueue__succeeded = mercury__psqueue__all_nodes_obey_semi_heap_1_p_0(mercury__psqueue__TypeInfo_for_P_8, mercury__psqueue__TypeInfo_for_K_9, mercury__psqueue__LTree_5);
          }
#line 1078 "psqueue.m"
      }
#line 1077 "psqueue.m"
    return mercury__psqueue__succeeded;
#line 1077 "psqueue.m"
  }
#line 189 "psqueue.m"
}

#line 166 "psqueue.m"
void MR_CALL 
mercury__psqueue__size_2_p_0(
#line 166 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_12,
#line 166 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_13,
#line 166 "psqueue.m"
  MR_Word mercury__psqueue__PSQ_3,
#line 166 "psqueue.m"
  MR_Integer * mercury__psqueue__Size_4)
#line 166 "psqueue.m"
{
#line 1021 "psqueue.m"
  {
#line 1021 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;

#line 1021 "psqueue.m"
    if ((mercury__psqueue__PSQ_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1020 "psqueue.m"
      *mercury__psqueue__Size_4 = (MR_Integer) 0;
#line 1021 "psqueue.m"
    else
#line 1022 "psqueue.m"
      {
#line 1022 "psqueue.m"
        MR_Word mercury__psqueue__LTree_7;
#line 1022 "psqueue.m"
        MR_Word mercury__psqueue__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_3, (MR_Integer) 0)));
#line 1022 "psqueue.m"
        MR_Integer mercury__psqueue__V_11_11;
#line 1022 "psqueue.m"
        MR_Box mercury__psqueue__V_5_5 = (MR_hl_field(MR_mktag(0), mercury__psqueue__V_9_9, (MR_Integer) 0));
#line 1022 "psqueue.m"
        MR_Box mercury__psqueue__V_6_6 = (MR_hl_field(MR_mktag(0), mercury__psqueue__V_9_9, (MR_Integer) 1));
#line 1022 "psqueue.m"
        MR_Box mercury__psqueue__V_8_8;

#line 1022 "psqueue.m"
        mercury__psqueue__LTree_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__psqueue__V_9_9, (MR_Integer) 2)));
#line 1022 "psqueue.m"
        mercury__psqueue__V_8_8 = (MR_hl_field(MR_mktag(0), mercury__psqueue__V_9_9, (MR_Integer) 3));
#line 1033 "psqueue.m"
        if ((mercury__psqueue__LTree_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1032 "psqueue.m"
          mercury__psqueue__V_11_11 = (MR_Integer) 0;
#line 1033 "psqueue.m"
        else
#line 1034 "psqueue.m"
          {
#line 1034 "psqueue.m"
            MR_Box mercury__psqueue__V_16_16;
#line 1034 "psqueue.m"
            MR_Box mercury__psqueue__V_17_17;
#line 1034 "psqueue.m"
            MR_Word mercury__psqueue__V_18_18;
#line 1034 "psqueue.m"
            MR_Box mercury__psqueue__V_19_19;
#line 1034 "psqueue.m"
            MR_Word mercury__psqueue__V_20_20;

#line 1034 "psqueue.m"
            mercury__psqueue__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_7, (MR_Integer) 0)));
#line 1034 "psqueue.m"
            mercury__psqueue__V_16_16 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_7, (MR_Integer) 1));
#line 1034 "psqueue.m"
            mercury__psqueue__V_17_17 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_7, (MR_Integer) 2));
#line 1034 "psqueue.m"
            mercury__psqueue__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_7, (MR_Integer) 3)));
#line 1034 "psqueue.m"
            mercury__psqueue__V_19_19 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_7, (MR_Integer) 4));
#line 1034 "psqueue.m"
            mercury__psqueue__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_7, (MR_Integer) 5)));
#line 1034 "psqueue.m"
          }
#line 1024 "psqueue.m"
        *mercury__psqueue__Size_4 = ((MR_Integer) 1 + mercury__psqueue__V_11_11);
#line 1022 "psqueue.m"
      }
#line 1021 "psqueue.m"
  }
#line 166 "psqueue.m"
}

#line 165 "psqueue.m"
MR_Integer MR_CALL 
mercury__psqueue__size_1_f_0(
#line 165 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_5,
#line 165 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_6,
#line 165 "psqueue.m"
  MR_Word mercury__psqueue__PSQ_3)
#line 165 "psqueue.m"
{
#line 1015 "psqueue.m"
  {
#line 1015 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 1015 "psqueue.m"
    MR_Integer mercury__psqueue__Size_4;

#line 1015 "psqueue.m"
    {
#line 1015 "psqueue.m"
      mercury__psqueue__size_2_p_0(mercury__psqueue__TypeInfo_for_P_5, mercury__psqueue__TypeInfo_for_K_6, mercury__psqueue__PSQ_3, &mercury__psqueue__Size_4);
    }
#line 1015 "psqueue.m"
    return mercury__psqueue__Size_4;
#line 1015 "psqueue.m"
  }
#line 165 "psqueue.m"
}

#line 159 "psqueue.m"
void MR_CALL 
mercury__psqueue__at_most_3_p_0(
#line 159 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_9,
#line 159 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_10,
#line 159 "psqueue.m"
  MR_Word mercury__psqueue__PSQ_4,
#line 159 "psqueue.m"
  MR_Box mercury__psqueue__MaxPrio_5,
#line 159 "psqueue.m"
  MR_Word * mercury__psqueue__AssocList_6)
#line 159 "psqueue.m"
{
#line 980 "psqueue.m"
  {
#line 980 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;

#line 980 "psqueue.m"
    if ((mercury__psqueue__PSQ_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 979 "psqueue.m"
      *mercury__psqueue__AssocList_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 980 "psqueue.m"
    else
#line 981 "psqueue.m"
      {
#line 981 "psqueue.m"
        MR_Word mercury__psqueue__TypeCtorInfo_11_11;
#line 981 "psqueue.m"
        MR_Word mercury__psqueue__TypeInfo_12_12;
#line 981 "psqueue.m"
        MR_Word mercury__psqueue__Winner_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_4, (MR_Integer) 0)));
#line 981 "psqueue.m"
        MR_Word mercury__psqueue__Cord_8;
#line 983 "psqueue.m"
        MR_Word mercury__psqueue__conv0_AssocList_6;

#line 982 "psqueue.m"
        {
#line 982 "psqueue.m"
          mercury__psqueue__at_most_in_winner_3_p_0(mercury__psqueue__TypeInfo_for_P_9, mercury__psqueue__TypeInfo_for_K_10, mercury__psqueue__Winner_7, mercury__psqueue__MaxPrio_5, &mercury__psqueue__Cord_8);
        }
#line 13343 "psqueue.c"
        mercury__psqueue__TypeCtorInfo_11_11 = (MR_Word) &mercury__pair__pair__type_ctor_info_pair_2;
#line 13345 "psqueue.c"
        {
#line 13347 "psqueue.c"
          mercury__psqueue__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 13349 "psqueue.c"
          MR_hl_field(MR_mktag(0), mercury__psqueue__TypeInfo_12_12, 0) = ((MR_Box) (mercury__psqueue__TypeCtorInfo_11_11));
#line 13351 "psqueue.c"
          MR_hl_field(MR_mktag(0), mercury__psqueue__TypeInfo_12_12, 1) = ((MR_Box) (mercury__psqueue__TypeInfo_for_P_9));
#line 13353 "psqueue.c"
          MR_hl_field(MR_mktag(0), mercury__psqueue__TypeInfo_12_12, 2) = ((MR_Box) (mercury__psqueue__TypeInfo_for_K_10));
#line 13355 "psqueue.c"
        }
#line 983 "psqueue.m"
        {
#line 983 "psqueue.m"
          mercury__psqueue__conv0_AssocList_6 = mercury__cord__list_1_f_0(mercury__psqueue__TypeInfo_12_12, (MR_Word) mercury__psqueue__Cord_8);
        }
#line 983 "psqueue.m"
        *mercury__psqueue__AssocList_6 = (MR_Word) mercury__psqueue__conv0_AssocList_6;
#line 981 "psqueue.m"
      }
#line 980 "psqueue.m"
  }
#line 159 "psqueue.m"
}

#line 158 "psqueue.m"
MR_Word MR_CALL 
mercury__psqueue__at_most_2_f_0(
#line 158 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_7,
#line 158 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_8,
#line 158 "psqueue.m"
  MR_Word mercury__psqueue__PSQ_4,
#line 158 "psqueue.m"
  MR_Box mercury__psqueue__MaxPrio_5)
#line 158 "psqueue.m"
{
#line 980 "psqueue.m"
  {
#line 980 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 980 "psqueue.m"
    MR_Word mercury__psqueue__AssocList_6;

#line 980 "psqueue.m"
    if ((mercury__psqueue__PSQ_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 979 "psqueue.m"
      mercury__psqueue__AssocList_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 980 "psqueue.m"
    else
#line 981 "psqueue.m"
      {
#line 981 "psqueue.m"
        MR_Word mercury__psqueue__TypeCtorInfo_11_14;
#line 981 "psqueue.m"
        MR_Word mercury__psqueue__TypeInfo_12_15;
#line 981 "psqueue.m"
        MR_Word mercury__psqueue__Winner_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_4, (MR_Integer) 0)));
#line 981 "psqueue.m"
        MR_Word mercury__psqueue__Cord_13;
#line 983 "psqueue.m"
        MR_Word mercury__psqueue__conv0_AssocList_6;

#line 982 "psqueue.m"
        {
#line 982 "psqueue.m"
          mercury__psqueue__at_most_in_winner_3_p_0(mercury__psqueue__TypeInfo_for_P_7, mercury__psqueue__TypeInfo_for_K_8, mercury__psqueue__Winner_12, mercury__psqueue__MaxPrio_5, &mercury__psqueue__Cord_13);
        }
#line 13415 "psqueue.c"
        mercury__psqueue__TypeCtorInfo_11_14 = (MR_Word) &mercury__pair__pair__type_ctor_info_pair_2;
#line 13417 "psqueue.c"
        {
#line 13419 "psqueue.c"
          mercury__psqueue__TypeInfo_12_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 13421 "psqueue.c"
          MR_hl_field(MR_mktag(0), mercury__psqueue__TypeInfo_12_15, 0) = ((MR_Box) (mercury__psqueue__TypeCtorInfo_11_14));
#line 13423 "psqueue.c"
          MR_hl_field(MR_mktag(0), mercury__psqueue__TypeInfo_12_15, 1) = ((MR_Box) (mercury__psqueue__TypeInfo_for_P_7));
#line 13425 "psqueue.c"
          MR_hl_field(MR_mktag(0), mercury__psqueue__TypeInfo_12_15, 2) = ((MR_Box) (mercury__psqueue__TypeInfo_for_K_8));
#line 13427 "psqueue.c"
        }
#line 983 "psqueue.m"
        {
#line 983 "psqueue.m"
          mercury__psqueue__conv0_AssocList_6 = mercury__cord__list_1_f_0(mercury__psqueue__TypeInfo_12_15, (MR_Word) mercury__psqueue__Cord_13);
        }
#line 983 "psqueue.m"
        mercury__psqueue__AssocList_6 = (MR_Word) mercury__psqueue__conv0_AssocList_6;
#line 981 "psqueue.m"
      }
#line 980 "psqueue.m"
    return mercury__psqueue__AssocList_6;
#line 980 "psqueue.m"
  }
#line 158 "psqueue.m"
}

#line 151 "psqueue.m"
void MR_CALL 
mercury__psqueue__lookup_3_p_0(
#line 151 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_11,
#line 151 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_12,
#line 151 "psqueue.m"
  MR_Word mercury__psqueue__PSQ_4,
#line 151 "psqueue.m"
  MR_Box mercury__psqueue__SearchKey_5,
#line 151 "psqueue.m"
  MR_Box * mercury__psqueue__MatchingPrio_6)
#line 151 "psqueue.m"
{
#line 967 "psqueue.m"
  {
#line 967 "psqueue.m"
    MR_bool mercury__psqueue__succeeded = ((MR_tag((MR_Word) mercury__psqueue__PSQ_4)) == (MR_mktag((MR_Integer) 1)));
#line 967 "psqueue.m"
    MR_Box mercury__psqueue__MatchingPrioPrime_7;
#line 13466 "psqueue.c"
    MR_Word mercury__psqueue__Winner_16;
#line 13468 "psqueue.c"
    MR_Word mercury__psqueue__V_17_17;

#line 13471 "psqueue.c"
    if (mercury__psqueue__succeeded)
#line 13473 "psqueue.c"
      {
#line 13475 "psqueue.c"
        mercury__psqueue__Winner_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_4, (MR_Integer) 0)));
#line 937 "psqueue.m"
        {
#line 937 "psqueue.m"
          mercury__psqueue__V_17_17 = mercury__psqueue__get_tournament_view_1_f_0(mercury__psqueue__TypeInfo_for_P_11, mercury__psqueue__TypeInfo_for_K_12, mercury__psqueue__Winner_16);
        }
#line 937 "psqueue.m"
        {
#line 937 "psqueue.m"
          mercury__psqueue__succeeded = mercury__psqueue__search_tv_3_p_0(mercury__psqueue__TypeInfo_for_P_11, mercury__psqueue__TypeInfo_for_K_12, mercury__psqueue__V_17_17, mercury__psqueue__SearchKey_5, &mercury__psqueue__MatchingPrioPrime_7);
        }
#line 13487 "psqueue.c"
      }
#line 967 "psqueue.m"
    if (mercury__psqueue__succeeded)
#line 966 "psqueue.m"
      *mercury__psqueue__MatchingPrio_6 = mercury__psqueue__MatchingPrioPrime_7;
#line 967 "psqueue.m"
    else
#line 968 "psqueue.m"
      {
#line 968 "psqueue.m"
        {
#line 968 "psqueue.m"
          mercury__require__unexpected_3_p_0((MR_String) "psqueue.m", (MR_String) "predicate \140psqueue.lookup\'/3", (MR_String) "key not found");
#line 968 "psqueue.m"
          return;
        }
#line 968 "psqueue.m"
      }
#line 967 "psqueue.m"
  }
#line 151 "psqueue.m"
}

#line 150 "psqueue.m"
MR_Box MR_CALL 
mercury__psqueue__lookup_2_f_0(
#line 150 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_7,
#line 150 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_8,
#line 150 "psqueue.m"
  MR_Word mercury__psqueue__PSQ_4,
#line 150 "psqueue.m"
  MR_Box mercury__psqueue__SearchKey_5)
#line 150 "psqueue.m"
{
#line 962 "psqueue.m"
  {
#line 962 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 962 "psqueue.m"
    MR_Box mercury__psqueue__MatchingPrio_6;

#line 962 "psqueue.m"
    {
#line 962 "psqueue.m"
      mercury__psqueue__lookup_3_p_0(mercury__psqueue__TypeInfo_for_P_7, mercury__psqueue__TypeInfo_for_K_8, mercury__psqueue__PSQ_4, mercury__psqueue__SearchKey_5, &mercury__psqueue__MatchingPrio_6);
    }
#line 962 "psqueue.m"
    return mercury__psqueue__MatchingPrio_6;
#line 962 "psqueue.m"
  }
#line 150 "psqueue.m"
}

#line 144 "psqueue.m"
MR_bool MR_CALL 
mercury__psqueue__search_3_p_0(
#line 144 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_9,
#line 144 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_10,
#line 144 "psqueue.m"
  MR_Word mercury__psqueue__PSQ_4,
#line 144 "psqueue.m"
  MR_Box mercury__psqueue__SearchKey_5,
#line 144 "psqueue.m"
  MR_Box * mercury__psqueue__MatchingPrio_6)
#line 144 "psqueue.m"
{
#line 13558 "psqueue.c"
  {
#line 13560 "psqueue.c"
    MR_bool mercury__psqueue__succeeded = ((MR_tag((MR_Word) mercury__psqueue__PSQ_4)) == (MR_mktag((MR_Integer) 1)));
#line 13562 "psqueue.c"
    MR_Word mercury__psqueue__Winner_7;
#line 13564 "psqueue.c"
    MR_Word mercury__psqueue__V_8_8;

#line 13567 "psqueue.c"
    if (mercury__psqueue__succeeded)
#line 13569 "psqueue.c"
      {
#line 13571 "psqueue.c"
        mercury__psqueue__Winner_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_4, (MR_Integer) 0)));
#line 937 "psqueue.m"
        {
#line 937 "psqueue.m"
          mercury__psqueue__V_8_8 = mercury__psqueue__get_tournament_view_1_f_0(mercury__psqueue__TypeInfo_for_P_9, mercury__psqueue__TypeInfo_for_K_10, mercury__psqueue__Winner_7);
        }
#line 937 "psqueue.m"
        {
#line 937 "psqueue.m"
          return mercury__psqueue__succeeded = mercury__psqueue__search_tv_3_p_0(mercury__psqueue__TypeInfo_for_P_9, mercury__psqueue__TypeInfo_for_K_10, mercury__psqueue__V_8_8, mercury__psqueue__SearchKey_5, mercury__psqueue__MatchingPrio_6);
        }
#line 13583 "psqueue.c"
      }
#line 13585 "psqueue.c"
    return mercury__psqueue__succeeded;
#line 13587 "psqueue.c"
  }
#line 144 "psqueue.m"
}

#line 137 "psqueue.m"
MR_bool MR_CALL 
mercury__psqueue__adjust_4_p_0(
#line 137 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_14,
#line 137 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_15,
#line 137 "psqueue.m"
  MR_Word mercury__psqueue__AdjustFunc_5,
#line 137 "psqueue.m"
  MR_Box mercury__psqueue__SearchKey_6,
#line 137 "psqueue.m"
  MR_Word mercury__psqueue__STATE_VARIABLE_PSQ_0_10,
#line 137 "psqueue.m"
  MR_Word * mercury__psqueue__STATE_VARIABLE_PSQ_11)
#line 137 "psqueue.m"
{
#line 13609 "psqueue.c"
  {
#line 13611 "psqueue.c"
    MR_bool mercury__psqueue__succeeded = ((MR_tag((MR_Word) mercury__psqueue__STATE_VARIABLE_PSQ_0_10)) == (MR_mktag((MR_Integer) 1)));
#line 13613 "psqueue.c"
    MR_Word mercury__psqueue__Winner0_8;
#line 13615 "psqueue.c"
    MR_Word mercury__psqueue__Winner_9;
#line 13617 "psqueue.c"
    MR_Word mercury__psqueue__V_12_12;

#line 13620 "psqueue.c"
    if (mercury__psqueue__succeeded)
#line 13622 "psqueue.c"
      {
#line 13624 "psqueue.c"
        mercury__psqueue__Winner0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__STATE_VARIABLE_PSQ_0_10, (MR_Integer) 0)));
#line 895 "psqueue.m"
        {
#line 895 "psqueue.m"
          mercury__psqueue__V_12_12 = mercury__psqueue__get_tournament_view_1_f_0(mercury__psqueue__TypeInfo_for_P_14, mercury__psqueue__TypeInfo_for_K_15, mercury__psqueue__Winner0_8);
        }
#line 895 "psqueue.m"
        {
#line 895 "psqueue.m"
          mercury__psqueue__succeeded = mercury__psqueue__adjust_tv_4_p_0(mercury__psqueue__TypeInfo_for_P_14, mercury__psqueue__TypeInfo_for_K_15, mercury__psqueue__AdjustFunc_5, mercury__psqueue__SearchKey_6, mercury__psqueue__V_12_12, &mercury__psqueue__Winner_9);
        }
#line 13636 "psqueue.c"
        if (mercury__psqueue__succeeded)
#line 13638 "psqueue.c"
          {
#line 896 "psqueue.m"
            {
#line 896 "psqueue.m"
              MR_Word base;
#line 896 "psqueue.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 896 "psqueue.m"
              *mercury__psqueue__STATE_VARIABLE_PSQ_11 = base;
#line 896 "psqueue.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__psqueue__Winner_9));
#line 896 "psqueue.m"
            }
#line 896 "psqueue.m"
            mercury__psqueue__succeeded = MR_TRUE;
#line 13654 "psqueue.c"
          }
#line 13656 "psqueue.c"
      }
#line 13658 "psqueue.c"
    return mercury__psqueue__succeeded;
#line 13660 "psqueue.c"
  }
#line 137 "psqueue.m"
}

#line 130 "psqueue.m"
void MR_CALL 
mercury__psqueue__det_remove_4_p_0(
#line 130 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_16,
#line 130 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_17,
#line 130 "psqueue.m"
  MR_Box * mercury__psqueue__MatchingPrio_5,
#line 130 "psqueue.m"
  MR_Box mercury__psqueue__SearchKey_6,
#line 130 "psqueue.m"
  MR_Word mercury__psqueue__STATE_VARIABLE_PSQ_0_9,
#line 130 "psqueue.m"
  MR_Word * mercury__psqueue__STATE_VARIABLE_PSQ_10)
#line 130 "psqueue.m"
{
#line 853 "psqueue.m"
  {
#line 853 "psqueue.m"
    MR_bool mercury__psqueue__succeeded = ((MR_tag((MR_Word) mercury__psqueue__STATE_VARIABLE_PSQ_0_9)) == (MR_mktag((MR_Integer) 1)));
#line 853 "psqueue.m"
    MR_Box mercury__psqueue__MatchingPrioPrime_8;
#line 853 "psqueue.m"
    MR_Word mercury__psqueue__STATE_VARIABLE_PSQ_11_11;
#line 13690 "psqueue.c"
    MR_Word mercury__psqueue__Winner0_23;
#line 13692 "psqueue.c"
    MR_Word mercury__psqueue__V_24_24;

#line 13695 "psqueue.c"
    if (mercury__psqueue__succeeded)
#line 13697 "psqueue.c"
      {
#line 13699 "psqueue.c"
        mercury__psqueue__Winner0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__STATE_VARIABLE_PSQ_0_9, (MR_Integer) 0)));
#line 847 "psqueue.m"
        {
#line 847 "psqueue.m"
          mercury__psqueue__V_24_24 = mercury__psqueue__get_tournament_view_1_f_0(mercury__psqueue__TypeInfo_for_P_16, mercury__psqueue__TypeInfo_for_K_17, mercury__psqueue__Winner0_23);
        }
#line 847 "psqueue.m"
        {
#line 847 "psqueue.m"
          mercury__psqueue__succeeded = mercury__psqueue__remove_tv_4_p_0(mercury__psqueue__TypeInfo_for_P_16, mercury__psqueue__TypeInfo_for_K_17, &mercury__psqueue__MatchingPrioPrime_8, mercury__psqueue__SearchKey_6, mercury__psqueue__V_24_24, &mercury__psqueue__STATE_VARIABLE_PSQ_11_11);
        }
#line 13711 "psqueue.c"
      }
#line 853 "psqueue.m"
    if (mercury__psqueue__succeeded)
#line 852 "psqueue.m"
      {
#line 852 "psqueue.m"
        *mercury__psqueue__STATE_VARIABLE_PSQ_10 = mercury__psqueue__STATE_VARIABLE_PSQ_11_11;
#line 852 "psqueue.m"
        *mercury__psqueue__MatchingPrio_5 = mercury__psqueue__MatchingPrioPrime_8;
#line 852 "psqueue.m"
      }
#line 853 "psqueue.m"
    else
#line 854 "psqueue.m"
      {
#line 854 "psqueue.m"
        {
#line 854 "psqueue.m"
          mercury__require__unexpected_3_p_0((MR_String) "psqueue.m", (MR_String) "predicate \140psqueue.det_remove\'/4", (MR_String) "element not found");
#line 854 "psqueue.m"
          return;
        }
#line 854 "psqueue.m"
      }
#line 853 "psqueue.m"
  }
#line 130 "psqueue.m"
}

#line 124 "psqueue.m"
MR_bool MR_CALL 
mercury__psqueue__remove_4_p_0(
#line 124 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_13,
#line 124 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_14,
#line 124 "psqueue.m"
  MR_Box * mercury__psqueue__MatchingPrio_5,
#line 124 "psqueue.m"
  MR_Box mercury__psqueue__SearchKey_6,
#line 124 "psqueue.m"
  MR_Word mercury__psqueue__STATE_VARIABLE_PSQ_0_9,
#line 124 "psqueue.m"
  MR_Word * mercury__psqueue__STATE_VARIABLE_PSQ_10)
#line 124 "psqueue.m"
{
#line 13758 "psqueue.c"
  {
#line 13760 "psqueue.c"
    MR_bool mercury__psqueue__succeeded = ((MR_tag((MR_Word) mercury__psqueue__STATE_VARIABLE_PSQ_0_9)) == (MR_mktag((MR_Integer) 1)));
#line 13762 "psqueue.c"
    MR_Word mercury__psqueue__Winner0_8;
#line 13764 "psqueue.c"
    MR_Word mercury__psqueue__V_11_11;

#line 13767 "psqueue.c"
    if (mercury__psqueue__succeeded)
#line 13769 "psqueue.c"
      {
#line 13771 "psqueue.c"
        mercury__psqueue__Winner0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__STATE_VARIABLE_PSQ_0_9, (MR_Integer) 0)));
#line 847 "psqueue.m"
        {
#line 847 "psqueue.m"
          mercury__psqueue__V_11_11 = mercury__psqueue__get_tournament_view_1_f_0(mercury__psqueue__TypeInfo_for_P_13, mercury__psqueue__TypeInfo_for_K_14, mercury__psqueue__Winner0_8);
        }
#line 847 "psqueue.m"
        {
#line 847 "psqueue.m"
          return mercury__psqueue__succeeded = mercury__psqueue__remove_tv_4_p_0(mercury__psqueue__TypeInfo_for_P_13, mercury__psqueue__TypeInfo_for_K_14, mercury__psqueue__MatchingPrio_5, mercury__psqueue__SearchKey_6, mercury__psqueue__V_11_11, mercury__psqueue__STATE_VARIABLE_PSQ_10);
        }
#line 13783 "psqueue.c"
      }
#line 13785 "psqueue.c"
    return mercury__psqueue__succeeded;
#line 13787 "psqueue.c"
  }
#line 124 "psqueue.m"
}

#line 117 "psqueue.m"
void MR_CALL 
mercury__psqueue__from_assoc_list_2_p_0(
#line 117 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_6,
#line 117 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_7,
#line 117 "psqueue.m"
  MR_Word mercury__psqueue__AssocList_3,
#line 117 "psqueue.m"
  MR_Word * mercury__psqueue__PSQ_4)
#line 117 "psqueue.m"
{
#line 827 "psqueue.m"
  {
#line 827 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 827 "psqueue.m"
    MR_Word mercury__psqueue__V_5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 828 "psqueue.m"
    {
#line 828 "psqueue.m"
      mercury__psqueue__from_assoc_list_loop_3_p_0(mercury__psqueue__TypeInfo_for_P_6, mercury__psqueue__TypeInfo_for_K_7, mercury__psqueue__AssocList_3, mercury__psqueue__V_5_5, mercury__psqueue__PSQ_4);
#line 828 "psqueue.m"
      return;
    }
#line 827 "psqueue.m"
  }
#line 117 "psqueue.m"
}

#line 116 "psqueue.m"
MR_Word MR_CALL 
mercury__psqueue__from_assoc_list_1_f_0(
#line 116 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_5,
#line 116 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_6,
#line 116 "psqueue.m"
  MR_Word mercury__psqueue__AssocList_3)
#line 116 "psqueue.m"
{
#line 827 "psqueue.m"
  {
#line 827 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 827 "psqueue.m"
    MR_Word mercury__psqueue__PSQ_4;
#line 827 "psqueue.m"
    MR_Word mercury__psqueue__V_9_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 828 "psqueue.m"
    {
#line 828 "psqueue.m"
      mercury__psqueue__from_assoc_list_loop_3_p_0(mercury__psqueue__TypeInfo_for_P_5, mercury__psqueue__TypeInfo_for_K_6, mercury__psqueue__AssocList_3, mercury__psqueue__V_9_9, &mercury__psqueue__PSQ_4);
    }
#line 827 "psqueue.m"
    return mercury__psqueue__PSQ_4;
#line 827 "psqueue.m"
  }
#line 116 "psqueue.m"
}

#line 110 "psqueue.m"
void MR_CALL 
mercury__psqueue__to_assoc_list_2_p_0(
#line 110 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_10,
#line 110 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_11,
#line 110 "psqueue.m"
  MR_Word mercury__psqueue__PSQ0_3,
#line 110 "psqueue.m"
  MR_Word * mercury__psqueue__AssocList_4)
#line 110 "psqueue.m"
{
#line 820 "psqueue.m"
  {
#line 820 "psqueue.m"
    MR_bool mercury__psqueue__succeeded = ((MR_tag((MR_Word) mercury__psqueue__PSQ0_3)) == (MR_mktag((MR_Integer) 1)));
#line 820 "psqueue.m"
    MR_Box mercury__psqueue__K_5;
#line 820 "psqueue.m"
    MR_Box mercury__psqueue__P_6;
#line 820 "psqueue.m"
    MR_Word mercury__psqueue__PSQ1_7;
#line 772 "psqueue.m"
    MR_Word mercury__psqueue__LTree_17;
#line 772 "psqueue.m"
    MR_Box mercury__psqueue__MaxKey_18;
#line 772 "psqueue.m"
    MR_Word mercury__psqueue__V_19_19;

#line 773 "psqueue.m"
    if (mercury__psqueue__succeeded)
#line 773 "psqueue.m"
      {
#line 773 "psqueue.m"
        mercury__psqueue__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ0_3, (MR_Integer) 0)));
#line 773 "psqueue.m"
        mercury__psqueue__K_5 = (MR_hl_field(MR_mktag(0), mercury__psqueue__V_19_19, (MR_Integer) 0));
#line 773 "psqueue.m"
        mercury__psqueue__P_6 = (MR_hl_field(MR_mktag(0), mercury__psqueue__V_19_19, (MR_Integer) 1));
#line 773 "psqueue.m"
        mercury__psqueue__LTree_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__psqueue__V_19_19, (MR_Integer) 2)));
#line 773 "psqueue.m"
        mercury__psqueue__MaxKey_18 = (MR_hl_field(MR_mktag(0), mercury__psqueue__V_19_19, (MR_Integer) 3));
#line 774 "psqueue.m"
        {
#line 774 "psqueue.m"
          mercury__psqueue__PSQ1_7 = mercury__psqueue__convert_loser_tree_to_psqueue_2_f_0(mercury__psqueue__TypeInfo_for_P_10, mercury__psqueue__TypeInfo_for_K_11, mercury__psqueue__LTree_17, mercury__psqueue__MaxKey_18);
        }
#line 774 "psqueue.m"
        mercury__psqueue__succeeded = MR_TRUE;
#line 773 "psqueue.m"
      }
#line 820 "psqueue.m"
    if (mercury__psqueue__succeeded)
#line 818 "psqueue.m"
      {
#line 818 "psqueue.m"
        MR_Word mercury__psqueue__AssocListTail_8;
#line 818 "psqueue.m"
        MR_Word mercury__psqueue__V_9_9;

#line 818 "psqueue.m"
        {
#line 818 "psqueue.m"
          mercury__psqueue__to_assoc_list_2_p_0(mercury__psqueue__TypeInfo_for_P_10, mercury__psqueue__TypeInfo_for_K_11, mercury__psqueue__PSQ1_7, &mercury__psqueue__AssocListTail_8);
        }
#line 819 "psqueue.m"
        {
#line 819 "psqueue.m"
          mercury__psqueue__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 819 "psqueue.m"
          MR_hl_field(MR_mktag(0), mercury__psqueue__V_9_9, 0) = mercury__psqueue__K_5;
#line 819 "psqueue.m"
          MR_hl_field(MR_mktag(0), mercury__psqueue__V_9_9, 1) = mercury__psqueue__P_6;
#line 819 "psqueue.m"
        }
#line 819 "psqueue.m"
        {
#line 819 "psqueue.m"
          MR_Word base;
#line 819 "psqueue.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 819 "psqueue.m"
          *mercury__psqueue__AssocList_4 = base;
#line 819 "psqueue.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__psqueue__V_9_9));
#line 819 "psqueue.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__psqueue__AssocListTail_8));
#line 819 "psqueue.m"
        }
#line 818 "psqueue.m"
      }
#line 820 "psqueue.m"
    else
#line 821 "psqueue.m"
      *mercury__psqueue__AssocList_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 820 "psqueue.m"
  }
#line 110 "psqueue.m"
}

#line 109 "psqueue.m"
MR_Word MR_CALL 
mercury__psqueue__to_assoc_list_1_f_0(
#line 109 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_5,
#line 109 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_6,
#line 109 "psqueue.m"
  MR_Word mercury__psqueue__PSQ_3)
#line 109 "psqueue.m"
{
#line 814 "psqueue.m"
  {
#line 814 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 814 "psqueue.m"
    MR_Word mercury__psqueue__AssocList_4;

#line 814 "psqueue.m"
    {
#line 814 "psqueue.m"
      mercury__psqueue__to_assoc_list_2_p_0(mercury__psqueue__TypeInfo_for_P_5, mercury__psqueue__TypeInfo_for_K_6, mercury__psqueue__PSQ_3, &mercury__psqueue__AssocList_4);
    }
#line 814 "psqueue.m"
    return mercury__psqueue__AssocList_4;
#line 814 "psqueue.m"
  }
#line 109 "psqueue.m"
}

#line 101 "psqueue.m"
void MR_CALL 
mercury__psqueue__det_remove_least_4_p_0(
#line 101 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_17,
#line 101 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_18,
#line 101 "psqueue.m"
  MR_Box * mercury__psqueue__MinPrio_5,
#line 101 "psqueue.m"
  MR_Box * mercury__psqueue__MinKey_6,
#line 101 "psqueue.m"
  MR_Word mercury__psqueue__STATE_VARIABLE_PSQ_0_10,
#line 101 "psqueue.m"
  MR_Word * mercury__psqueue__STATE_VARIABLE_PSQ_11)
#line 101 "psqueue.m"
{
#line 780 "psqueue.m"
  {
#line 780 "psqueue.m"
    MR_bool mercury__psqueue__succeeded = ((MR_tag((MR_Word) mercury__psqueue__STATE_VARIABLE_PSQ_0_10)) == (MR_mktag((MR_Integer) 1)));
#line 780 "psqueue.m"
    MR_Box mercury__psqueue__MinPrioPrime_8;
#line 780 "psqueue.m"
    MR_Box mercury__psqueue__MinKeyPrime_9;
#line 780 "psqueue.m"
    MR_Word mercury__psqueue__STATE_VARIABLE_PSQ_12_12;
#line 772 "psqueue.m"
    MR_Word mercury__psqueue__LTree_24;
#line 772 "psqueue.m"
    MR_Box mercury__psqueue__MaxKey_25;
#line 772 "psqueue.m"
    MR_Word mercury__psqueue__V_26_26;

#line 773 "psqueue.m"
    if (mercury__psqueue__succeeded)
#line 773 "psqueue.m"
      {
#line 773 "psqueue.m"
        mercury__psqueue__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__STATE_VARIABLE_PSQ_0_10, (MR_Integer) 0)));
#line 773 "psqueue.m"
        mercury__psqueue__MinPrioPrime_8 = (MR_hl_field(MR_mktag(0), mercury__psqueue__V_26_26, (MR_Integer) 0));
#line 773 "psqueue.m"
        mercury__psqueue__MinKeyPrime_9 = (MR_hl_field(MR_mktag(0), mercury__psqueue__V_26_26, (MR_Integer) 1));
#line 773 "psqueue.m"
        mercury__psqueue__LTree_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__psqueue__V_26_26, (MR_Integer) 2)));
#line 773 "psqueue.m"
        mercury__psqueue__MaxKey_25 = (MR_hl_field(MR_mktag(0), mercury__psqueue__V_26_26, (MR_Integer) 3));
#line 774 "psqueue.m"
        {
#line 774 "psqueue.m"
          mercury__psqueue__STATE_VARIABLE_PSQ_12_12 = mercury__psqueue__convert_loser_tree_to_psqueue_2_f_0(mercury__psqueue__TypeInfo_for_P_17, mercury__psqueue__TypeInfo_for_K_18, mercury__psqueue__LTree_24, mercury__psqueue__MaxKey_25);
        }
#line 774 "psqueue.m"
        mercury__psqueue__succeeded = MR_TRUE;
#line 773 "psqueue.m"
      }
#line 780 "psqueue.m"
    if (mercury__psqueue__succeeded)
#line 778 "psqueue.m"
      {
#line 778 "psqueue.m"
        *mercury__psqueue__STATE_VARIABLE_PSQ_11 = mercury__psqueue__STATE_VARIABLE_PSQ_12_12;
#line 778 "psqueue.m"
        *mercury__psqueue__MinKey_6 = mercury__psqueue__MinKeyPrime_9;
#line 779 "psqueue.m"
        *mercury__psqueue__MinPrio_5 = mercury__psqueue__MinPrioPrime_8;
#line 778 "psqueue.m"
      }
#line 780 "psqueue.m"
    else
#line 781 "psqueue.m"
      {
#line 781 "psqueue.m"
        {
#line 781 "psqueue.m"
          mercury__require__unexpected_3_p_0((MR_String) "psqueue.m", (MR_String) "predicate \140psqueue.det_remove_least\'/4", (MR_String) "priority search queue is empty");
#line 781 "psqueue.m"
          return;
        }
#line 781 "psqueue.m"
      }
#line 780 "psqueue.m"
  }
#line 101 "psqueue.m"
}

#line 94 "psqueue.m"
MR_bool MR_CALL 
mercury__psqueue__remove_least_4_p_0(
#line 94 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_14,
#line 94 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_15,
#line 94 "psqueue.m"
  MR_Box * mercury__psqueue__MinPrio_5,
#line 94 "psqueue.m"
  MR_Box * mercury__psqueue__MinKey_6,
#line 94 "psqueue.m"
  MR_Word mercury__psqueue__STATE_VARIABLE_PSQ_0_10,
#line 94 "psqueue.m"
  MR_Word * mercury__psqueue__STATE_VARIABLE_PSQ_11)
#line 94 "psqueue.m"
{
#line 772 "psqueue.m"
  {
#line 772 "psqueue.m"
    MR_bool mercury__psqueue__succeeded = ((MR_tag((MR_Word) mercury__psqueue__STATE_VARIABLE_PSQ_0_10)) == (MR_mktag((MR_Integer) 1)));
#line 772 "psqueue.m"
    MR_Word mercury__psqueue__LTree_8;
#line 772 "psqueue.m"
    MR_Box mercury__psqueue__MaxKey_9;
#line 772 "psqueue.m"
    MR_Word mercury__psqueue__V_12_12;

#line 773 "psqueue.m"
    if (mercury__psqueue__succeeded)
#line 773 "psqueue.m"
      {
#line 773 "psqueue.m"
        mercury__psqueue__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__STATE_VARIABLE_PSQ_0_10, (MR_Integer) 0)));
#line 773 "psqueue.m"
        *mercury__psqueue__MinPrio_5 = (MR_hl_field(MR_mktag(0), mercury__psqueue__V_12_12, (MR_Integer) 0));
#line 773 "psqueue.m"
        *mercury__psqueue__MinKey_6 = (MR_hl_field(MR_mktag(0), mercury__psqueue__V_12_12, (MR_Integer) 1));
#line 773 "psqueue.m"
        mercury__psqueue__LTree_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__psqueue__V_12_12, (MR_Integer) 2)));
#line 773 "psqueue.m"
        mercury__psqueue__MaxKey_9 = (MR_hl_field(MR_mktag(0), mercury__psqueue__V_12_12, (MR_Integer) 3));
#line 774 "psqueue.m"
        {
#line 774 "psqueue.m"
          *mercury__psqueue__STATE_VARIABLE_PSQ_11 = mercury__psqueue__convert_loser_tree_to_psqueue_2_f_0(mercury__psqueue__TypeInfo_for_P_14, mercury__psqueue__TypeInfo_for_K_15, mercury__psqueue__LTree_8, mercury__psqueue__MaxKey_9);
        }
#line 774 "psqueue.m"
        mercury__psqueue__succeeded = MR_TRUE;
#line 773 "psqueue.m"
      }
#line 772 "psqueue.m"
    return mercury__psqueue__succeeded;
#line 772 "psqueue.m"
  }
#line 94 "psqueue.m"
}

#line 90 "psqueue.m"
void MR_CALL 
mercury__psqueue__det_peek_3_p_0(
#line 90 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_12,
#line 90 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_13,
#line 90 "psqueue.m"
  MR_Word mercury__psqueue__PSQ_4,
#line 90 "psqueue.m"
  MR_Box * mercury__psqueue__MinPrio_5,
#line 90 "psqueue.m"
  MR_Box * mercury__psqueue__MinKey_6)
#line 90 "psqueue.m"
{
#line 768 "psqueue.m"
  {
#line 768 "psqueue.m"
    MR_bool mercury__psqueue__succeeded = ((MR_tag((MR_Word) mercury__psqueue__PSQ_4)) == (MR_mktag((MR_Integer) 1)));
#line 768 "psqueue.m"
    MR_Box mercury__psqueue__MinPrioPrime_7;
#line 768 "psqueue.m"
    MR_Box mercury__psqueue__MinKeyPrime_8;
#line 761 "psqueue.m"
    MR_Word mercury__psqueue__V_19_19;
#line 762 "psqueue.m"
    MR_Word mercury__psqueue__V_17_17;
#line 762 "psqueue.m"
    MR_Box mercury__psqueue__V_18_18;

#line 762 "psqueue.m"
    if (mercury__psqueue__succeeded)
#line 762 "psqueue.m"
      {
#line 762 "psqueue.m"
        mercury__psqueue__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_4, (MR_Integer) 0)));
#line 762 "psqueue.m"
        mercury__psqueue__MinPrioPrime_7 = (MR_hl_field(MR_mktag(0), mercury__psqueue__V_19_19, (MR_Integer) 0));
#line 762 "psqueue.m"
        mercury__psqueue__MinKeyPrime_8 = (MR_hl_field(MR_mktag(0), mercury__psqueue__V_19_19, (MR_Integer) 1));
#line 762 "psqueue.m"
        mercury__psqueue__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__psqueue__V_19_19, (MR_Integer) 2)));
#line 762 "psqueue.m"
        mercury__psqueue__V_18_18 = (MR_hl_field(MR_mktag(0), mercury__psqueue__V_19_19, (MR_Integer) 3));
#line 762 "psqueue.m"
        mercury__psqueue__succeeded = MR_TRUE;
#line 762 "psqueue.m"
      }
#line 768 "psqueue.m"
    if (mercury__psqueue__succeeded)
#line 766 "psqueue.m"
      {
#line 766 "psqueue.m"
        *mercury__psqueue__MinKey_6 = mercury__psqueue__MinKeyPrime_8;
#line 767 "psqueue.m"
        *mercury__psqueue__MinPrio_5 = mercury__psqueue__MinPrioPrime_7;
#line 766 "psqueue.m"
      }
#line 768 "psqueue.m"
    else
#line 769 "psqueue.m"
      {
#line 769 "psqueue.m"
        {
#line 769 "psqueue.m"
          mercury__require__unexpected_3_p_0((MR_String) "psqueue.m", (MR_String) "predicate \140psqueue.det_peek\'/3", (MR_String) "priority search queue is empty");
#line 769 "psqueue.m"
          return;
        }
#line 769 "psqueue.m"
      }
#line 768 "psqueue.m"
  }
#line 90 "psqueue.m"
}

#line 85 "psqueue.m"
MR_bool MR_CALL 
mercury__psqueue__peek_3_p_0(
#line 85 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_10,
#line 85 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_11,
#line 85 "psqueue.m"
  MR_Word mercury__psqueue__PSQ_4,
#line 85 "psqueue.m"
  MR_Box * mercury__psqueue__MinPrio_5,
#line 85 "psqueue.m"
  MR_Box * mercury__psqueue__MinKey_6)
#line 85 "psqueue.m"
{
#line 761 "psqueue.m"
  {
#line 761 "psqueue.m"
    MR_bool mercury__psqueue__succeeded = ((MR_tag((MR_Word) mercury__psqueue__PSQ_4)) == (MR_mktag((MR_Integer) 1)));
#line 761 "psqueue.m"
    MR_Word mercury__psqueue__V_9_9;
#line 762 "psqueue.m"
    MR_Word mercury__psqueue__V_7_7;
#line 762 "psqueue.m"
    MR_Box mercury__psqueue__V_8_8;

#line 762 "psqueue.m"
    if (mercury__psqueue__succeeded)
#line 762 "psqueue.m"
      {
#line 762 "psqueue.m"
        mercury__psqueue__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_4, (MR_Integer) 0)));
#line 762 "psqueue.m"
        *mercury__psqueue__MinPrio_5 = (MR_hl_field(MR_mktag(0), mercury__psqueue__V_9_9, (MR_Integer) 0));
#line 762 "psqueue.m"
        *mercury__psqueue__MinKey_6 = (MR_hl_field(MR_mktag(0), mercury__psqueue__V_9_9, (MR_Integer) 1));
#line 762 "psqueue.m"
        mercury__psqueue__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__psqueue__V_9_9, (MR_Integer) 2)));
#line 762 "psqueue.m"
        mercury__psqueue__V_8_8 = (MR_hl_field(MR_mktag(0), mercury__psqueue__V_9_9, (MR_Integer) 3));
#line 762 "psqueue.m"
        mercury__psqueue__succeeded = MR_TRUE;
#line 762 "psqueue.m"
      }
#line 761 "psqueue.m"
    return mercury__psqueue__succeeded;
#line 761 "psqueue.m"
  }
#line 85 "psqueue.m"
}

#line 78 "psqueue.m"
void MR_CALL 
mercury__psqueue__det_insert_4_p_0(
#line 78 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_15,
#line 78 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_16,
#line 78 "psqueue.m"
  MR_Box mercury__psqueue__InsertPrio_5,
#line 78 "psqueue.m"
  MR_Box mercury__psqueue__InsertKey_6,
#line 78 "psqueue.m"
  MR_Word mercury__psqueue__STATE_VARIABLE_PSQ_0_8,
#line 78 "psqueue.m"
  MR_Word * mercury__psqueue__STATE_VARIABLE_PSQ_9)
#line 78 "psqueue.m"
{
#line 720 "psqueue.m"
  {
#line 720 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 720 "psqueue.m"
    MR_Word mercury__psqueue__STATE_VARIABLE_PSQ_10_10;

#line 718 "psqueue.m"
    {
#line 718 "psqueue.m"
      mercury__psqueue__succeeded = mercury__psqueue__insert_4_p_0(mercury__psqueue__TypeInfo_for_P_15, mercury__psqueue__TypeInfo_for_K_16, mercury__psqueue__InsertPrio_5, mercury__psqueue__InsertKey_6, mercury__psqueue__STATE_VARIABLE_PSQ_0_8, &mercury__psqueue__STATE_VARIABLE_PSQ_10_10);
    }
#line 720 "psqueue.m"
    if (mercury__psqueue__succeeded)
#line 718 "psqueue.m"
      *mercury__psqueue__STATE_VARIABLE_PSQ_9 = mercury__psqueue__STATE_VARIABLE_PSQ_10_10;
#line 720 "psqueue.m"
    else
#line 721 "psqueue.m"
      {
#line 721 "psqueue.m"
        {
#line 721 "psqueue.m"
          mercury__require__unexpected_3_p_0((MR_String) "psqueue.m", (MR_String) "predicate \140psqueue.det_insert\'/4", (MR_String) "key being inserted is already present");
#line 721 "psqueue.m"
          return;
        }
#line 721 "psqueue.m"
      }
#line 720 "psqueue.m"
  }
#line 78 "psqueue.m"
}

#line 77 "psqueue.m"
MR_Word MR_CALL 
mercury__psqueue__det_insert_3_f_0(
#line 77 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_9,
#line 77 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_10,
#line 77 "psqueue.m"
  MR_Word mercury__psqueue__PSQ0_5,
#line 77 "psqueue.m"
  MR_Box mercury__psqueue__InsertPrio_6,
#line 77 "psqueue.m"
  MR_Box mercury__psqueue__InsertKey_7)
#line 77 "psqueue.m"
{
#line 720 "psqueue.m"
  {
#line 720 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 720 "psqueue.m"
    MR_Word mercury__psqueue__PSQ_8;
#line 720 "psqueue.m"
    MR_Word mercury__psqueue__STATE_VARIABLE_PSQ_10_16;

#line 718 "psqueue.m"
    {
#line 718 "psqueue.m"
      mercury__psqueue__succeeded = mercury__psqueue__insert_4_p_0(mercury__psqueue__TypeInfo_for_P_9, mercury__psqueue__TypeInfo_for_K_10, mercury__psqueue__InsertPrio_6, mercury__psqueue__InsertKey_7, mercury__psqueue__PSQ0_5, &mercury__psqueue__STATE_VARIABLE_PSQ_10_16);
    }
#line 720 "psqueue.m"
    if (mercury__psqueue__succeeded)
#line 718 "psqueue.m"
      mercury__psqueue__PSQ_8 = mercury__psqueue__STATE_VARIABLE_PSQ_10_16;
#line 720 "psqueue.m"
    else
#line 721 "psqueue.m"
      {
#line 721 "psqueue.m"
        {
#line 721 "psqueue.m"
          mercury__require__unexpected_3_p_0((MR_String) "psqueue.m", (MR_String) "predicate \140psqueue.det_insert\'/4", (MR_String) "key being inserted is already present");
        }
#line 721 "psqueue.m"
      }
#line 720 "psqueue.m"
    return mercury__psqueue__PSQ_8;
#line 720 "psqueue.m"
  }
#line 77 "psqueue.m"
}

#line 71 "psqueue.m"
MR_bool MR_CALL 
mercury__psqueue__insert_4_p_0(
#line 71 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_15,
#line 71 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_16,
#line 71 "psqueue.m"
  MR_Box mercury__psqueue__InsertPrio_5,
#line 71 "psqueue.m"
  MR_Box mercury__psqueue__InsertKey_6,
#line 71 "psqueue.m"
  MR_Word mercury__psqueue__STATE_VARIABLE_PSQ_0_10,
#line 71 "psqueue.m"
  MR_Word * mercury__psqueue__STATE_VARIABLE_PSQ_11)
#line 71 "psqueue.m"
{
#line 708 "psqueue.m"
  {
#line 708 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;

#line 708 "psqueue.m"
    if ((mercury__psqueue__STATE_VARIABLE_PSQ_0_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 693 "psqueue.m"
      {
#line 693 "psqueue.m"
        MR_Word mercury__psqueue__V_23_23;
#line 693 "psqueue.m"
        MR_Word mercury__psqueue__V_26_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 700 "psqueue.m"
        {
#line 700 "psqueue.m"
          mercury__psqueue__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 700 "psqueue.m"
          MR_hl_field(MR_mktag(0), mercury__psqueue__V_23_23, 0) = mercury__psqueue__InsertPrio_5;
#line 700 "psqueue.m"
          MR_hl_field(MR_mktag(0), mercury__psqueue__V_23_23, 1) = mercury__psqueue__InsertKey_6;
#line 700 "psqueue.m"
          MR_hl_field(MR_mktag(0), mercury__psqueue__V_23_23, 2) = ((MR_Box) (mercury__psqueue__V_26_26));
#line 700 "psqueue.m"
          MR_hl_field(MR_mktag(0), mercury__psqueue__V_23_23, 3) = mercury__psqueue__InsertKey_6;
#line 700 "psqueue.m"
        }
#line 694 "psqueue.m"
        {
#line 694 "psqueue.m"
          MR_Word base;
#line 694 "psqueue.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 694 "psqueue.m"
          *mercury__psqueue__STATE_VARIABLE_PSQ_11 = base;
#line 694 "psqueue.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__psqueue__V_23_23));
#line 694 "psqueue.m"
        }
#line 693 "psqueue.m"
        mercury__psqueue__succeeded = MR_TRUE;
#line 693 "psqueue.m"
      }
#line 708 "psqueue.m"
    else
#line 709 "psqueue.m"
      {
#line 709 "psqueue.m"
        MR_Word mercury__psqueue__Winner0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__STATE_VARIABLE_PSQ_0_10, (MR_Integer) 0)));
#line 709 "psqueue.m"
        MR_Word mercury__psqueue__Winner_9;
#line 709 "psqueue.m"
        MR_Word mercury__psqueue__V_12_12;

#line 710 "psqueue.m"
        {
#line 710 "psqueue.m"
          mercury__psqueue__V_12_12 = mercury__psqueue__get_tournament_view_1_f_0(mercury__psqueue__TypeInfo_for_P_15, mercury__psqueue__TypeInfo_for_K_16, mercury__psqueue__Winner0_8);
        }
#line 710 "psqueue.m"
        {
#line 710 "psqueue.m"
          mercury__psqueue__succeeded = mercury__psqueue__insert_tv_4_p_0(mercury__psqueue__TypeInfo_for_P_15, mercury__psqueue__TypeInfo_for_K_16, mercury__psqueue__InsertPrio_5, mercury__psqueue__InsertKey_6, mercury__psqueue__V_12_12, &mercury__psqueue__Winner_9);
        }
#line 709 "psqueue.m"
        if (mercury__psqueue__succeeded)
#line 709 "psqueue.m"
          {
#line 711 "psqueue.m"
            {
#line 711 "psqueue.m"
              MR_Word base;
#line 711 "psqueue.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 711 "psqueue.m"
              *mercury__psqueue__STATE_VARIABLE_PSQ_11 = base;
#line 711 "psqueue.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__psqueue__Winner_9));
#line 711 "psqueue.m"
            }
#line 711 "psqueue.m"
            mercury__psqueue__succeeded = MR_TRUE;
#line 709 "psqueue.m"
          }
#line 709 "psqueue.m"
      }
#line 708 "psqueue.m"
    return mercury__psqueue__succeeded;
#line 708 "psqueue.m"
  }
#line 71 "psqueue.m"
}

#line 66 "psqueue.m"
void MR_CALL 
mercury__psqueue__singleton_3_p_0(
#line 66 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_8,
#line 66 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_9,
#line 66 "psqueue.m"
  MR_Box mercury__psqueue__Prio_4,
#line 66 "psqueue.m"
  MR_Box mercury__psqueue__Key_5,
#line 66 "psqueue.m"
  MR_Word * mercury__psqueue__PSQ_6)
#line 66 "psqueue.m"
{
#line 693 "psqueue.m"
  {
#line 693 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 693 "psqueue.m"
    MR_Word mercury__psqueue__V_7_7;
#line 693 "psqueue.m"
    MR_Word mercury__psqueue__V_12_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 700 "psqueue.m"
    {
#line 700 "psqueue.m"
      mercury__psqueue__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 700 "psqueue.m"
      MR_hl_field(MR_mktag(0), mercury__psqueue__V_7_7, 0) = mercury__psqueue__Prio_4;
#line 700 "psqueue.m"
      MR_hl_field(MR_mktag(0), mercury__psqueue__V_7_7, 1) = mercury__psqueue__Key_5;
#line 700 "psqueue.m"
      MR_hl_field(MR_mktag(0), mercury__psqueue__V_7_7, 2) = ((MR_Box) (mercury__psqueue__V_12_12));
#line 700 "psqueue.m"
      MR_hl_field(MR_mktag(0), mercury__psqueue__V_7_7, 3) = mercury__psqueue__Key_5;
#line 700 "psqueue.m"
    }
#line 694 "psqueue.m"
    {
#line 694 "psqueue.m"
      MR_Word base;
#line 694 "psqueue.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 694 "psqueue.m"
      *mercury__psqueue__PSQ_6 = base;
#line 694 "psqueue.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__psqueue__V_7_7));
#line 694 "psqueue.m"
    }
#line 693 "psqueue.m"
  }
#line 66 "psqueue.m"
}

#line 65 "psqueue.m"
MR_Word MR_CALL 
mercury__psqueue__singleton_2_f_0(
#line 65 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_7,
#line 65 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_8,
#line 65 "psqueue.m"
  MR_Box mercury__psqueue__Prio_4,
#line 65 "psqueue.m"
  MR_Box mercury__psqueue__Key_5)
#line 65 "psqueue.m"
{
#line 693 "psqueue.m"
  {
#line 693 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 693 "psqueue.m"
    MR_Word mercury__psqueue__PSQ_6;
#line 693 "psqueue.m"
    MR_Word mercury__psqueue__V_12_12;
#line 693 "psqueue.m"
    MR_Word mercury__psqueue__V_15_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 700 "psqueue.m"
    {
#line 700 "psqueue.m"
      mercury__psqueue__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 700 "psqueue.m"
      MR_hl_field(MR_mktag(0), mercury__psqueue__V_12_12, 0) = mercury__psqueue__Prio_4;
#line 700 "psqueue.m"
      MR_hl_field(MR_mktag(0), mercury__psqueue__V_12_12, 1) = mercury__psqueue__Key_5;
#line 700 "psqueue.m"
      MR_hl_field(MR_mktag(0), mercury__psqueue__V_12_12, 2) = ((MR_Box) (mercury__psqueue__V_15_15));
#line 700 "psqueue.m"
      MR_hl_field(MR_mktag(0), mercury__psqueue__V_12_12, 3) = mercury__psqueue__Key_5;
#line 700 "psqueue.m"
    }
#line 694 "psqueue.m"
    {
#line 694 "psqueue.m"
      mercury__psqueue__PSQ_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 694 "psqueue.m"
      MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_6, 0) = ((MR_Box) (mercury__psqueue__V_12_12));
#line 694 "psqueue.m"
    }
#line 693 "psqueue.m"
    return mercury__psqueue__PSQ_6;
#line 693 "psqueue.m"
  }
#line 65 "psqueue.m"
}

#line 61 "psqueue.m"
MR_bool MR_CALL 
mercury__psqueue__is_empty_1_p_0(
#line 61 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_2,
#line 61 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_3,
#line 61 "psqueue.m"
  MR_Word mercury__psqueue__HeadVar__1_1)
#line 61 "psqueue.m"
{
#line 688 "psqueue.m"
  {
#line 688 "psqueue.m"
    MR_bool mercury__psqueue__succeeded = (mercury__psqueue__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 688 "psqueue.m"
    return mercury__psqueue__succeeded;
#line 688 "psqueue.m"
  }
#line 61 "psqueue.m"
}

#line 57 "psqueue.m"
void MR_CALL 
mercury__psqueue__init_1_p_0(
#line 57 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_2,
#line 57 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_3,
#line 57 "psqueue.m"
  MR_Word * mercury__psqueue__HeadVar__1_1)
#line 57 "psqueue.m"
{
#line 686 "psqueue.m"
  {
#line 686 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;

#line 686 "psqueue.m"
    *mercury__psqueue__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 686 "psqueue.m"
  }
#line 57 "psqueue.m"
}

#line 56 "psqueue.m"
MR_Word MR_CALL 
mercury__psqueue__init_0_f_0(
#line 56 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_3,
#line 56 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_4)
#line 56 "psqueue.m"
{
#line 686 "psqueue.m"
  {
#line 686 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 686 "psqueue.m"
    MR_Word mercury__psqueue__PSQ_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 686 "psqueue.m"
    return mercury__psqueue__PSQ_2;
#line 686 "psqueue.m"
  }
#line 56 "psqueue.m"
}

void mercury__psqueue__init(void)
{
}

void mercury__psqueue__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__psqueue__psqueue__type_ctor_info_loser_tree_2);
	MR_register_type_ctor_info(&mercury__psqueue__psqueue__type_ctor_info_loser_tree_size_0);
	MR_register_type_ctor_info(&mercury__psqueue__psqueue__type_ctor_info_psqueue_2);
	MR_register_type_ctor_info(&mercury__psqueue__psqueue__type_ctor_info_tournament_view_2);
	MR_register_type_ctor_info(&mercury__psqueue__psqueue__type_ctor_info_winner_2);
}

void mercury__psqueue__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module psqueue. */
