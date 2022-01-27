/*
** Automatically generated from `psqueue.m'
** by the Mercury compiler,
** version rotd-2014-12-08
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




#line 91 "psqueue.c"
static const MR_DuFunctorDesc mercury__psqueue__psqueue__du_functor_desc_ltree_2_0;

#line 94 "psqueue.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__psqueue__psqueue__pti_ltree_2__pseudo_1__pseudo_2;

#line 97 "psqueue.c"
static const MR_PseudoTypeInfo mercury__psqueue__psqueue__field_types_ltree_2_1[6];

#line 100 "psqueue.c"
static const MR_ConstString mercury__psqueue__psqueue__field_names_ltree_2_1[6];

#line 103 "psqueue.c"
static const MR_DuFunctorDesc mercury__psqueue__psqueue__du_functor_desc_ltree_2_1;

#line 106 "psqueue.c"
static const MR_DuFunctorDescPtr mercury__psqueue__psqueue__du_stag_ordered_ltree_2_0[1];

#line 109 "psqueue.c"
static const MR_DuFunctorDescPtr mercury__psqueue__psqueue__du_stag_ordered_ltree_2_1[1];

#line 112 "psqueue.c"
static const MR_DuPtagLayout mercury__psqueue__psqueue__du_ptag_ordered_ltree_2[2];

#line 115 "psqueue.c"
static const MR_DuFunctorDescPtr mercury__psqueue__psqueue__du_name_ordered_ltree_2[2];

#line 118 "psqueue.c"
static const MR_Integer mercury__psqueue__psqueue__functor_number_map_ltree_2[2];

#line 121 "psqueue.c"
static const MR_DuFunctorDesc mercury__psqueue__psqueue__du_functor_desc_psqueue_2_0;

#line 124 "psqueue.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__psqueue__psqueue__pti_ltree_2__pseudo_2__pseudo_1;

#line 127 "psqueue.c"
static const MR_PseudoTypeInfo mercury__psqueue__psqueue__field_types_psqueue_2_1[4];

#line 130 "psqueue.c"
static const MR_ConstString mercury__psqueue__psqueue__field_names_psqueue_2_1[4];

#line 133 "psqueue.c"
static const MR_DuFunctorDesc mercury__psqueue__psqueue__du_functor_desc_psqueue_2_1;

#line 136 "psqueue.c"
static const MR_DuFunctorDescPtr mercury__psqueue__psqueue__du_stag_ordered_psqueue_2_0[1];

#line 139 "psqueue.c"
static const MR_DuFunctorDescPtr mercury__psqueue__psqueue__du_stag_ordered_psqueue_2_1[1];

#line 142 "psqueue.c"
static const MR_DuPtagLayout mercury__psqueue__psqueue__du_ptag_ordered_psqueue_2[2];

#line 145 "psqueue.c"
static const MR_DuFunctorDescPtr mercury__psqueue__psqueue__du_name_ordered_psqueue_2[2];

#line 148 "psqueue.c"
static const MR_Integer mercury__psqueue__psqueue__functor_number_map_psqueue_2[2];

#line 151 "psqueue.c"
static const MR_DuFunctorDesc mercury__psqueue__psqueue__du_functor_desc_t_min_view_2_0;

#line 154 "psqueue.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__psqueue__psqueue__pti_psqueue_2__pseudo_2__pseudo_1;

#line 157 "psqueue.c"
static const MR_PseudoTypeInfo mercury__psqueue__psqueue__field_types_t_min_view_2_1[3];

#line 160 "psqueue.c"
static const MR_DuFunctorDesc mercury__psqueue__psqueue__du_functor_desc_t_min_view_2_1;

#line 163 "psqueue.c"
static const MR_DuFunctorDescPtr mercury__psqueue__psqueue__du_stag_ordered_t_min_view_2_0[1];

#line 166 "psqueue.c"
static const MR_DuFunctorDescPtr mercury__psqueue__psqueue__du_stag_ordered_t_min_view_2_1[1];

#line 169 "psqueue.c"
static const MR_DuPtagLayout mercury__psqueue__psqueue__du_ptag_ordered_t_min_view_2[2];

#line 172 "psqueue.c"
static const MR_DuFunctorDescPtr mercury__psqueue__psqueue__du_name_ordered_t_min_view_2[2];

#line 175 "psqueue.c"
static const MR_Integer mercury__psqueue__psqueue__functor_number_map_t_min_view_2[2];

#line 178 "psqueue.c"
static const MR_DuFunctorDesc mercury__psqueue__psqueue__du_functor_desc_t_tournament_view_2_0;

#line 181 "psqueue.c"
static const MR_PseudoTypeInfo mercury__psqueue__psqueue__field_types_t_tournament_view_2_1[2];

#line 184 "psqueue.c"
static const MR_DuFunctorDesc mercury__psqueue__psqueue__du_functor_desc_t_tournament_view_2_1;

#line 187 "psqueue.c"
static const MR_PseudoTypeInfo mercury__psqueue__psqueue__field_types_t_tournament_view_2_2[2];

#line 190 "psqueue.c"
static const MR_DuFunctorDesc mercury__psqueue__psqueue__du_functor_desc_t_tournament_view_2_2;

#line 193 "psqueue.c"
static const MR_DuFunctorDescPtr mercury__psqueue__psqueue__du_stag_ordered_t_tournament_view_2_0[1];

#line 196 "psqueue.c"
static const MR_DuFunctorDescPtr mercury__psqueue__psqueue__du_stag_ordered_t_tournament_view_2_1[1];

#line 199 "psqueue.c"
static const MR_DuFunctorDescPtr mercury__psqueue__psqueue__du_stag_ordered_t_tournament_view_2_2[1];

#line 202 "psqueue.c"
static const MR_DuPtagLayout mercury__psqueue__psqueue__du_ptag_ordered_t_tournament_view_2[3];

#line 205 "psqueue.c"
static const MR_DuFunctorDescPtr mercury__psqueue__psqueue__du_name_ordered_t_tournament_view_2[3];

#line 208 "psqueue.c"
static const MR_Integer mercury__psqueue__psqueue__functor_number_map_t_tournament_view_2[3];

#line 211 "psqueue.c"
static const MR_DuFunctorDesc mercury__psqueue__psqueue__du_functor_desc_t_tree_view_2_0;

#line 214 "psqueue.c"
static const MR_PseudoTypeInfo mercury__psqueue__psqueue__field_types_t_tree_view_2_1[5];

#line 217 "psqueue.c"
static const MR_DuFunctorDesc mercury__psqueue__psqueue__du_functor_desc_t_tree_view_2_1;

#line 220 "psqueue.c"
static const MR_DuFunctorDescPtr mercury__psqueue__psqueue__du_stag_ordered_t_tree_view_2_0[1];

#line 223 "psqueue.c"
static const MR_DuFunctorDescPtr mercury__psqueue__psqueue__du_stag_ordered_t_tree_view_2_1[1];

#line 226 "psqueue.c"
static const MR_DuPtagLayout mercury__psqueue__psqueue__du_ptag_ordered_t_tree_view_2[2];

#line 229 "psqueue.c"
static const MR_DuFunctorDescPtr mercury__psqueue__psqueue__du_name_ordered_t_tree_view_2[2];

#line 232 "psqueue.c"
static const MR_Integer mercury__psqueue__psqueue__functor_number_map_t_tree_view_2[2];

#line 235 "psqueue.c"
static MR_bool MR_CALL 
mercury__psqueue____Unify____ltree_2_0_10001(
#line 238 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_1,
#line 240 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_2,
#line 242 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_3,
#line 244 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_4);

#line 247 "psqueue.c"
static void MR_CALL 
mercury__psqueue____Compare____ltree_2_0_10001(
#line 250 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_1,
#line 252 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_2,
#line 254 "psqueue.c"
  MR_Box * mercury__psqueue__wrapper_arg_3,
#line 256 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_4,
#line 258 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_5);

#line 261 "psqueue.c"
static MR_bool MR_CALL 
mercury__psqueue____Unify____psqueue_2_0_10001(
#line 264 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_1,
#line 266 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_2,
#line 268 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_3,
#line 270 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_4);

#line 273 "psqueue.c"
static void MR_CALL 
mercury__psqueue____Compare____psqueue_2_0_10001(
#line 276 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_1,
#line 278 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_2,
#line 280 "psqueue.c"
  MR_Box * mercury__psqueue__wrapper_arg_3,
#line 282 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_4,
#line 284 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_5);

#line 287 "psqueue.c"
static MR_bool MR_CALL 
mercury__psqueue____Unify____t_ltree_size_0_0_10001(
#line 290 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_1,
#line 292 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_2);

#line 295 "psqueue.c"
static void MR_CALL 
mercury__psqueue____Compare____t_ltree_size_0_0_10001(
#line 298 "psqueue.c"
  MR_Box * mercury__psqueue__wrapper_arg_1,
#line 300 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_2,
#line 302 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_3);

#line 305 "psqueue.c"
static MR_bool MR_CALL 
mercury__psqueue____Unify____t_min_view_2_0_10001(
#line 308 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_1,
#line 310 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_2,
#line 312 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_3,
#line 314 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_4);

#line 317 "psqueue.c"
static void MR_CALL 
mercury__psqueue____Compare____t_min_view_2_0_10001(
#line 320 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_1,
#line 322 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_2,
#line 324 "psqueue.c"
  MR_Box * mercury__psqueue__wrapper_arg_3,
#line 326 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_4,
#line 328 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_5);

#line 331 "psqueue.c"
static MR_bool MR_CALL 
mercury__psqueue____Unify____t_tournament_view_2_0_10001(
#line 334 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_1,
#line 336 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_2,
#line 338 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_3,
#line 340 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_4);

#line 343 "psqueue.c"
static void MR_CALL 
mercury__psqueue____Compare____t_tournament_view_2_0_10001(
#line 346 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_1,
#line 348 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_2,
#line 350 "psqueue.c"
  MR_Box * mercury__psqueue__wrapper_arg_3,
#line 352 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_4,
#line 354 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_5);

#line 357 "psqueue.c"
static MR_bool MR_CALL 
mercury__psqueue____Unify____t_tree_view_2_0_10001(
#line 360 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_1,
#line 362 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_2,
#line 364 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_3,
#line 366 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_4);

#line 369 "psqueue.c"
static void MR_CALL 
mercury__psqueue____Compare____t_tree_view_2_0_10001(
#line 372 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_1,
#line 374 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_2,
#line 376 "psqueue.c"
  MR_Box * mercury__psqueue__wrapper_arg_3,
#line 378 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_4,
#line 380 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_5);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 1097 "psqueue.m"
static MR_Word MR_CALL 
mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_107_101_121_115_95_95_91_50_93_95_48_1_f_0(
#line 1097 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_14,
#line 1097 "psqueue.m"
  MR_Word mercury__psqueue__T_3);

#line 1021 "psqueue.m"
static void MR_CALL 
mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_120_95_107_101_121_95_108_111_115_101_114_95_116_114_101_101_95_95_91_50_93_95_48_3_p_0(
#line 1021 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_25,
#line 1021 "psqueue.m"
  MR_Word mercury__psqueue__LTree_4,
#line 1021 "psqueue.m"
  MR_Box mercury__psqueue__CurrMax_5,
#line 1021 "psqueue.m"
  MR_Word * mercury__psqueue__MaxKey_6);

#line 957 "psqueue.m"
static void MR_CALL 
mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_105_110_95_107_101_121_95_108_111_115_101_114_95_116_114_101_101_95_95_91_50_93_95_48_3_p_0(
#line 957 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_24,
#line 957 "psqueue.m"
  MR_Word mercury__psqueue__LTree_4,
#line 957 "psqueue.m"
  MR_Box mercury__psqueue__CurrMin_5,
#line 957 "psqueue.m"
  MR_Word * mercury__psqueue__MinKey_6);

#line 927 "psqueue.m"
static void MR_CALL 
mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_105_110_95_107_101_121_95_108_111_115_101_114_95_116_114_101_101_95_95_91_50_93_95_48_2_p_0(
#line 927 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_21,
#line 927 "psqueue.m"
  MR_Word mercury__psqueue__LTree_3,
#line 927 "psqueue.m"
  MR_Word * mercury__psqueue__MinKey_4);

#line 833 "psqueue.m"
static void MR_CALL 
mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_105_110_95_112_114_105_111_95_108_111_115_101_114_95_116_114_101_101_95_95_91_49_93_95_48_3_p_0(
#line 833 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_25,
#line 833 "psqueue.m"
  MR_Word mercury__psqueue__LTree_4,
#line 833 "psqueue.m"
  MR_Box mercury__psqueue__CurrMin_5,
#line 833 "psqueue.m"
  MR_Word * mercury__psqueue__MinPrio_6);

#line 647 "psqueue.m"
static MR_Word MR_CALL 
mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_111_110_115_116_114_117_99_116_95_110_111_100_101_95_95_91_49_44_32_50_93_95_48_5_f_0(
#line 647 "psqueue.m"
  MR_Box mercury__psqueue__Key_7,
#line 647 "psqueue.m"
  MR_Box mercury__psqueue__Prio_8,
#line 647 "psqueue.m"
  MR_Word mercury__psqueue__L_9,
#line 647 "psqueue.m"
  MR_Box mercury__psqueue__SplitKey_10,
#line 647 "psqueue.m"
  MR_Word mercury__psqueue__R_11);

#line 667 "psqueue.m"
static MR_Word MR_CALL 
mercury__psqueue__single_right_5_f_0(
#line 667 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_24,
#line 667 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_25,
#line 667 "psqueue.m"
  MR_Box mercury__psqueue__K1_7,
#line 667 "psqueue.m"
  MR_Box mercury__psqueue__P1_8,
#line 667 "psqueue.m"
  MR_Word mercury__psqueue__TVL_9,
#line 667 "psqueue.m"
  MR_Box mercury__psqueue__S2_10,
#line 667 "psqueue.m"
  MR_Word mercury__psqueue__T3_11);

#line 665 "psqueue.m"
static MR_Word MR_CALL 
mercury__psqueue__single_left_5_f_0(
#line 665 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_23,
#line 665 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_24,
#line 665 "psqueue.m"
  MR_Box mercury__psqueue__K1_7,
#line 665 "psqueue.m"
  MR_Box mercury__psqueue__P1_8,
#line 665 "psqueue.m"
  MR_Word mercury__psqueue__T1_9,
#line 665 "psqueue.m"
  MR_Box mercury__psqueue__S1_10,
#line 665 "psqueue.m"
  MR_Word mercury__psqueue__TVR_11);

#line 664 "psqueue.m"
static MR_Word MR_CALL 
mercury__psqueue__balance_right_5_f_0(
#line 664 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_25,
#line 664 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_26,
#line 664 "psqueue.m"
  MR_Box mercury__psqueue__Key_7,
#line 664 "psqueue.m"
  MR_Box mercury__psqueue__Prio_8,
#line 664 "psqueue.m"
  MR_Word mercury__psqueue__L_9,
#line 664 "psqueue.m"
  MR_Box mercury__psqueue__SplitKey_10,
#line 664 "psqueue.m"
  MR_Word mercury__psqueue__R_11);

#line 663 "psqueue.m"
static MR_Word MR_CALL 
mercury__psqueue__balance_left_5_f_0(
#line 663 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_25,
#line 663 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_26,
#line 663 "psqueue.m"
  MR_Box mercury__psqueue__Key_7,
#line 663 "psqueue.m"
  MR_Box mercury__psqueue__Prio_8,
#line 663 "psqueue.m"
  MR_Word mercury__psqueue__L_9,
#line 663 "psqueue.m"
  MR_Box mercury__psqueue__SplitKey_10,
#line 663 "psqueue.m"
  MR_Word mercury__psqueue__R_11);

#line 662 "psqueue.m"
static MR_Word MR_CALL 
mercury__psqueue__balance_5_f_0(
#line 662 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_24,
#line 662 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_25,
#line 662 "psqueue.m"
  MR_Box mercury__psqueue__Key_7,
#line 662 "psqueue.m"
  MR_Box mercury__psqueue__Prio_8,
#line 662 "psqueue.m"
  MR_Word mercury__psqueue__L_9,
#line 662 "psqueue.m"
  MR_Box mercury__psqueue__SplitKey_10,
#line 662 "psqueue.m"
  MR_Word mercury__psqueue__R_11);


static /* final */ const MR_Box mercury__psqueue_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__psqueue_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__psqueue_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__psqueue_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__psqueue_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__psqueue_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__psqueue_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__psqueue_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__psqueue_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



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
#include "table_builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
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
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
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
#include "type_desc.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "builtin.mh"
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



#line 909 "psqueue.c"
static const MR_DuFunctorDesc mercury__psqueue__psqueue__du_functor_desc_ltree_2_0 = {
  (MR_String) "start",
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

#line 924 "psqueue.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__psqueue__psqueue__pti_ltree_2__pseudo_1__pseudo_2 = {
  &mercury__psqueue__psqueue__type_ctor_info_ltree_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 933 "psqueue.c"
static const MR_PseudoTypeInfo mercury__psqueue__psqueue__field_types_ltree_2_1[6] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 2,
  (MR_PseudoTypeInfo) &mercury__psqueue__psqueue__pti_ltree_2__pseudo_1__pseudo_2,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mercury__psqueue__psqueue__pti_ltree_2__pseudo_1__pseudo_2
};

#line 943 "psqueue.c"
static const MR_ConstString mercury__psqueue__psqueue__field_names_ltree_2_1[6] = {
  (MR_String) "l_size",
  (MR_String) "l_looser_key",
  (MR_String) "l_looser_prio",
  (MR_String) "l_left_tree",
  (MR_String) "l_sort_key",
  (MR_String) "l_right_tree"
};

#line 953 "psqueue.c"
static const MR_DuFunctorDesc mercury__psqueue__psqueue__du_functor_desc_ltree_2_1 = {
  (MR_String) "loser",
  (MR_Integer) 6,
  (MR_Integer) 62,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__psqueue__psqueue__field_types_ltree_2_1,
  mercury__psqueue__psqueue__field_names_ltree_2_1,
  NULL,
  NULL
};

#line 968 "psqueue.c"
static const MR_DuFunctorDescPtr mercury__psqueue__psqueue__du_stag_ordered_ltree_2_0[1] = {
  &mercury__psqueue__psqueue__du_functor_desc_ltree_2_0
};

#line 973 "psqueue.c"
static const MR_DuFunctorDescPtr mercury__psqueue__psqueue__du_stag_ordered_ltree_2_1[1] = {
  &mercury__psqueue__psqueue__du_functor_desc_ltree_2_1
};

#line 978 "psqueue.c"
static const MR_DuPtagLayout mercury__psqueue__psqueue__du_ptag_ordered_ltree_2[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mercury__psqueue__psqueue__du_stag_ordered_ltree_2_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__psqueue__psqueue__du_stag_ordered_ltree_2_1
  }
};

#line 992 "psqueue.c"
static const MR_DuFunctorDescPtr mercury__psqueue__psqueue__du_name_ordered_ltree_2[2] = {
  &mercury__psqueue__psqueue__du_functor_desc_ltree_2_1,
  &mercury__psqueue__psqueue__du_functor_desc_ltree_2_0
};

#line 998 "psqueue.c"
static const MR_Integer mercury__psqueue__psqueue__functor_number_map_ltree_2[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1004 "psqueue.c"
const MR_TypeCtorInfo_Struct mercury__psqueue__psqueue__type_ctor_info_ltree_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__psqueue____Unify____ltree_2_0_10001)),
  ((MR_Box) (mercury__psqueue____Compare____ltree_2_0_10001)),
  (MR_String) "psqueue",
  (MR_String) "ltree",
  {
    mercury__psqueue__psqueue__du_name_ordered_ltree_2
  },
  {
    mercury__psqueue__psqueue__du_ptag_ordered_ltree_2
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__psqueue__psqueue__functor_number_map_ltree_2
};

#line 1025 "psqueue.c"
static const MR_DuFunctorDesc mercury__psqueue__psqueue__du_functor_desc_psqueue_2_0 = {
  (MR_String) "void",
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

#line 1040 "psqueue.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__psqueue__psqueue__pti_ltree_2__pseudo_2__pseudo_1 = {
  &mercury__psqueue__psqueue__type_ctor_info_ltree_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2,
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1049 "psqueue.c"
static const MR_PseudoTypeInfo mercury__psqueue__psqueue__field_types_psqueue_2_1[4] = {
  (MR_PseudoTypeInfo) (MR_Integer) 2,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mercury__psqueue__psqueue__pti_ltree_2__pseudo_2__pseudo_1,
  (MR_PseudoTypeInfo) (MR_Integer) 2
};

#line 1057 "psqueue.c"
static const MR_ConstString mercury__psqueue__psqueue__field_names_psqueue_2_1[4] = {
  (MR_String) "w_key",
  (MR_String) "w_prio",
  (MR_String) "w_loosers",
  (MR_String) "w_max_key"
};

#line 1065 "psqueue.c"
static const MR_DuFunctorDesc mercury__psqueue__psqueue__du_functor_desc_psqueue_2_1 = {
  (MR_String) "winner",
  (MR_Integer) 4,
  (MR_Integer) 15,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__psqueue__psqueue__field_types_psqueue_2_1,
  mercury__psqueue__psqueue__field_names_psqueue_2_1,
  NULL,
  NULL
};

#line 1080 "psqueue.c"
static const MR_DuFunctorDescPtr mercury__psqueue__psqueue__du_stag_ordered_psqueue_2_0[1] = {
  &mercury__psqueue__psqueue__du_functor_desc_psqueue_2_0
};

#line 1085 "psqueue.c"
static const MR_DuFunctorDescPtr mercury__psqueue__psqueue__du_stag_ordered_psqueue_2_1[1] = {
  &mercury__psqueue__psqueue__du_functor_desc_psqueue_2_1
};

#line 1090 "psqueue.c"
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

#line 1104 "psqueue.c"
static const MR_DuFunctorDescPtr mercury__psqueue__psqueue__du_name_ordered_psqueue_2[2] = {
  &mercury__psqueue__psqueue__du_functor_desc_psqueue_2_0,
  &mercury__psqueue__psqueue__du_functor_desc_psqueue_2_1
};

#line 1110 "psqueue.c"
static const MR_Integer mercury__psqueue__psqueue__functor_number_map_psqueue_2[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1116 "psqueue.c"
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

#line 1137 "psqueue.c"
const MR_TypeCtorInfo_Struct mercury__psqueue__psqueue__type_ctor_info_t_ltree_size_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__psqueue____Unify____t_ltree_size_0_0_10001)),
  ((MR_Box) (mercury__psqueue____Compare____t_ltree_size_0_0_10001)),
  (MR_String) "psqueue",
  (MR_String) "t_ltree_size",
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

#line 1158 "psqueue.c"
static const MR_DuFunctorDesc mercury__psqueue__psqueue__du_functor_desc_t_min_view_2_0 = {
  (MR_String) "empty",
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

#line 1173 "psqueue.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__psqueue__psqueue__pti_psqueue_2__pseudo_2__pseudo_1 = {
  &mercury__psqueue__psqueue__type_ctor_info_psqueue_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2,
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1182 "psqueue.c"
static const MR_PseudoTypeInfo mercury__psqueue__psqueue__field_types_t_min_view_2_1[3] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 2,
  (MR_PseudoTypeInfo) &mercury__psqueue__psqueue__pti_psqueue_2__pseudo_2__pseudo_1
};

#line 1189 "psqueue.c"
static const MR_DuFunctorDesc mercury__psqueue__psqueue__du_functor_desc_t_min_view_2_1 = {
  (MR_String) "min",
  (MR_Integer) 3,
  (MR_Integer) 7,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__psqueue__psqueue__field_types_t_min_view_2_1,
  NULL,
  NULL,
  NULL
};

#line 1204 "psqueue.c"
static const MR_DuFunctorDescPtr mercury__psqueue__psqueue__du_stag_ordered_t_min_view_2_0[1] = {
  &mercury__psqueue__psqueue__du_functor_desc_t_min_view_2_0
};

#line 1209 "psqueue.c"
static const MR_DuFunctorDescPtr mercury__psqueue__psqueue__du_stag_ordered_t_min_view_2_1[1] = {
  &mercury__psqueue__psqueue__du_functor_desc_t_min_view_2_1
};

#line 1214 "psqueue.c"
static const MR_DuPtagLayout mercury__psqueue__psqueue__du_ptag_ordered_t_min_view_2[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mercury__psqueue__psqueue__du_stag_ordered_t_min_view_2_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__psqueue__psqueue__du_stag_ordered_t_min_view_2_1
  }
};

#line 1228 "psqueue.c"
static const MR_DuFunctorDescPtr mercury__psqueue__psqueue__du_name_ordered_t_min_view_2[2] = {
  &mercury__psqueue__psqueue__du_functor_desc_t_min_view_2_0,
  &mercury__psqueue__psqueue__du_functor_desc_t_min_view_2_1
};

#line 1234 "psqueue.c"
static const MR_Integer mercury__psqueue__psqueue__functor_number_map_t_min_view_2[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1240 "psqueue.c"
const MR_TypeCtorInfo_Struct mercury__psqueue__psqueue__type_ctor_info_t_min_view_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__psqueue____Unify____t_min_view_2_0_10001)),
  ((MR_Box) (mercury__psqueue____Compare____t_min_view_2_0_10001)),
  (MR_String) "psqueue",
  (MR_String) "t_min_view",
  {
    mercury__psqueue__psqueue__du_name_ordered_t_min_view_2
  },
  {
    mercury__psqueue__psqueue__du_ptag_ordered_t_min_view_2
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__psqueue__psqueue__functor_number_map_t_min_view_2
};

#line 1261 "psqueue.c"
static const MR_DuFunctorDesc mercury__psqueue__psqueue__du_functor_desc_t_tournament_view_2_0 = {
  (MR_String) "emptySet",
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

#line 1276 "psqueue.c"
static const MR_PseudoTypeInfo mercury__psqueue__psqueue__field_types_t_tournament_view_2_1[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 2
};

#line 1282 "psqueue.c"
static const MR_DuFunctorDesc mercury__psqueue__psqueue__du_functor_desc_t_tournament_view_2_1 = {
  (MR_String) "singleton",
  (MR_Integer) 2,
  (MR_Integer) 3,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__psqueue__psqueue__field_types_t_tournament_view_2_1,
  NULL,
  NULL,
  NULL
};

#line 1297 "psqueue.c"
static const MR_PseudoTypeInfo mercury__psqueue__psqueue__field_types_t_tournament_view_2_2[2] = {
  (MR_PseudoTypeInfo) &mercury__psqueue__psqueue__pti_psqueue_2__pseudo_2__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__psqueue__psqueue__pti_psqueue_2__pseudo_2__pseudo_1
};

#line 1303 "psqueue.c"
static const MR_DuFunctorDesc mercury__psqueue__psqueue__du_functor_desc_t_tournament_view_2_2 = {
  (MR_String) "tournament_between",
  (MR_Integer) 2,
  (MR_Integer) 3,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mercury__psqueue__psqueue__field_types_t_tournament_view_2_2,
  NULL,
  NULL,
  NULL
};

#line 1318 "psqueue.c"
static const MR_DuFunctorDescPtr mercury__psqueue__psqueue__du_stag_ordered_t_tournament_view_2_0[1] = {
  &mercury__psqueue__psqueue__du_functor_desc_t_tournament_view_2_0
};

#line 1323 "psqueue.c"
static const MR_DuFunctorDescPtr mercury__psqueue__psqueue__du_stag_ordered_t_tournament_view_2_1[1] = {
  &mercury__psqueue__psqueue__du_functor_desc_t_tournament_view_2_1
};

#line 1328 "psqueue.c"
static const MR_DuFunctorDescPtr mercury__psqueue__psqueue__du_stag_ordered_t_tournament_view_2_2[1] = {
  &mercury__psqueue__psqueue__du_functor_desc_t_tournament_view_2_2
};

#line 1333 "psqueue.c"
static const MR_DuPtagLayout mercury__psqueue__psqueue__du_ptag_ordered_t_tournament_view_2[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mercury__psqueue__psqueue__du_stag_ordered_t_tournament_view_2_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__psqueue__psqueue__du_stag_ordered_t_tournament_view_2_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__psqueue__psqueue__du_stag_ordered_t_tournament_view_2_2
  }
};

#line 1352 "psqueue.c"
static const MR_DuFunctorDescPtr mercury__psqueue__psqueue__du_name_ordered_t_tournament_view_2[3] = {
  &mercury__psqueue__psqueue__du_functor_desc_t_tournament_view_2_0,
  &mercury__psqueue__psqueue__du_functor_desc_t_tournament_view_2_1,
  &mercury__psqueue__psqueue__du_functor_desc_t_tournament_view_2_2
};

#line 1359 "psqueue.c"
static const MR_Integer mercury__psqueue__psqueue__functor_number_map_t_tournament_view_2[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 1366 "psqueue.c"
const MR_TypeCtorInfo_Struct mercury__psqueue__psqueue__type_ctor_info_t_tournament_view_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__psqueue____Unify____t_tournament_view_2_0_10001)),
  ((MR_Box) (mercury__psqueue____Compare____t_tournament_view_2_0_10001)),
  (MR_String) "psqueue",
  (MR_String) "t_tournament_view",
  {
    mercury__psqueue__psqueue__du_name_ordered_t_tournament_view_2
  },
  {
    mercury__psqueue__psqueue__du_ptag_ordered_t_tournament_view_2
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mercury__psqueue__psqueue__functor_number_map_t_tournament_view_2
};

#line 1387 "psqueue.c"
static const MR_DuFunctorDesc mercury__psqueue__psqueue__du_functor_desc_t_tree_view_2_0 = {
  (MR_String) "leaf",
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

#line 1402 "psqueue.c"
static const MR_PseudoTypeInfo mercury__psqueue__psqueue__field_types_t_tree_view_2_1[5] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 2,
  (MR_PseudoTypeInfo) &mercury__psqueue__psqueue__pti_ltree_2__pseudo_1__pseudo_2,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mercury__psqueue__psqueue__pti_ltree_2__pseudo_1__pseudo_2
};

#line 1411 "psqueue.c"
static const MR_DuFunctorDesc mercury__psqueue__psqueue__du_functor_desc_t_tree_view_2_1 = {
  (MR_String) "node",
  (MR_Integer) 5,
  (MR_Integer) 31,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__psqueue__psqueue__field_types_t_tree_view_2_1,
  NULL,
  NULL,
  NULL
};

#line 1426 "psqueue.c"
static const MR_DuFunctorDescPtr mercury__psqueue__psqueue__du_stag_ordered_t_tree_view_2_0[1] = {
  &mercury__psqueue__psqueue__du_functor_desc_t_tree_view_2_0
};

#line 1431 "psqueue.c"
static const MR_DuFunctorDescPtr mercury__psqueue__psqueue__du_stag_ordered_t_tree_view_2_1[1] = {
  &mercury__psqueue__psqueue__du_functor_desc_t_tree_view_2_1
};

#line 1436 "psqueue.c"
static const MR_DuPtagLayout mercury__psqueue__psqueue__du_ptag_ordered_t_tree_view_2[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mercury__psqueue__psqueue__du_stag_ordered_t_tree_view_2_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__psqueue__psqueue__du_stag_ordered_t_tree_view_2_1
  }
};

#line 1450 "psqueue.c"
static const MR_DuFunctorDescPtr mercury__psqueue__psqueue__du_name_ordered_t_tree_view_2[2] = {
  &mercury__psqueue__psqueue__du_functor_desc_t_tree_view_2_0,
  &mercury__psqueue__psqueue__du_functor_desc_t_tree_view_2_1
};

#line 1456 "psqueue.c"
static const MR_Integer mercury__psqueue__psqueue__functor_number_map_t_tree_view_2[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1462 "psqueue.c"
const MR_TypeCtorInfo_Struct mercury__psqueue__psqueue__type_ctor_info_t_tree_view_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__psqueue____Unify____t_tree_view_2_0_10001)),
  ((MR_Box) (mercury__psqueue____Compare____t_tree_view_2_0_10001)),
  (MR_String) "psqueue",
  (MR_String) "t_tree_view",
  {
    mercury__psqueue__psqueue__du_name_ordered_t_tree_view_2
  },
  {
    mercury__psqueue__psqueue__du_ptag_ordered_t_tree_view_2
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__psqueue__psqueue__functor_number_map_t_tree_view_2
};

#line 1483 "psqueue.c"
static MR_bool MR_CALL 
mercury__psqueue____Unify____ltree_2_0_10001(
#line 1486 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_1,
#line 1488 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_2,
#line 1490 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_3,
#line 1492 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_4)
#line 1494 "psqueue.c"
{
#line 1496 "psqueue.c"
  {
#line 1498 "psqueue.c"
    MR_bool mercury__psqueue__succeeded;

#line 1501 "psqueue.c"
    {
#line 1503 "psqueue.c"
      mercury__psqueue__succeeded = mercury__psqueue____Unify____ltree_2_0(((MR_Word) mercury__psqueue__wrapper_arg_1), ((MR_Word) mercury__psqueue__wrapper_arg_2), ((MR_Word) mercury__psqueue__wrapper_arg_3), ((MR_Word) mercury__psqueue__wrapper_arg_4));
    }
#line 1506 "psqueue.c"
    return mercury__psqueue__succeeded;
#line 1508 "psqueue.c"
  }
#line 1510 "psqueue.c"
}

#line 1513 "psqueue.c"
static void MR_CALL 
mercury__psqueue____Compare____ltree_2_0_10001(
#line 1516 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_1,
#line 1518 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_2,
#line 1520 "psqueue.c"
  MR_Box * mercury__psqueue__wrapper_arg_3,
#line 1522 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_4,
#line 1524 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_5)
#line 1526 "psqueue.c"
{
#line 1528 "psqueue.c"
  {
#line 1530 "psqueue.c"
    MR_Word mercury__psqueue__conv0_HeadVar__1_1;

#line 1533 "psqueue.c"
    {
#line 1535 "psqueue.c"
      mercury__psqueue____Compare____ltree_2_0(((MR_Word) mercury__psqueue__wrapper_arg_1), ((MR_Word) mercury__psqueue__wrapper_arg_2), &mercury__psqueue__conv0_HeadVar__1_1, ((MR_Word) mercury__psqueue__wrapper_arg_4), ((MR_Word) mercury__psqueue__wrapper_arg_5));
    }
#line 1538 "psqueue.c"
    *mercury__psqueue__wrapper_arg_3 = ((MR_Box) (mercury__psqueue__conv0_HeadVar__1_1));
#line 1540 "psqueue.c"
  }
#line 1542 "psqueue.c"
}

#line 1545 "psqueue.c"
static MR_bool MR_CALL 
mercury__psqueue____Unify____psqueue_2_0_10001(
#line 1548 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_1,
#line 1550 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_2,
#line 1552 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_3,
#line 1554 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_4)
#line 1556 "psqueue.c"
{
#line 1558 "psqueue.c"
  {
#line 1560 "psqueue.c"
    MR_bool mercury__psqueue__succeeded;

#line 1563 "psqueue.c"
    {
#line 1565 "psqueue.c"
      mercury__psqueue__succeeded = mercury__psqueue____Unify____psqueue_2_0(((MR_Word) mercury__psqueue__wrapper_arg_1), ((MR_Word) mercury__psqueue__wrapper_arg_2), ((MR_Word) mercury__psqueue__wrapper_arg_3), ((MR_Word) mercury__psqueue__wrapper_arg_4));
    }
#line 1568 "psqueue.c"
    return mercury__psqueue__succeeded;
#line 1570 "psqueue.c"
  }
#line 1572 "psqueue.c"
}

#line 1575 "psqueue.c"
static void MR_CALL 
mercury__psqueue____Compare____psqueue_2_0_10001(
#line 1578 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_1,
#line 1580 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_2,
#line 1582 "psqueue.c"
  MR_Box * mercury__psqueue__wrapper_arg_3,
#line 1584 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_4,
#line 1586 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_5)
#line 1588 "psqueue.c"
{
#line 1590 "psqueue.c"
  {
#line 1592 "psqueue.c"
    MR_Word mercury__psqueue__conv0_HeadVar__1_1;

#line 1595 "psqueue.c"
    {
#line 1597 "psqueue.c"
      mercury__psqueue____Compare____psqueue_2_0(((MR_Word) mercury__psqueue__wrapper_arg_1), ((MR_Word) mercury__psqueue__wrapper_arg_2), &mercury__psqueue__conv0_HeadVar__1_1, ((MR_Word) mercury__psqueue__wrapper_arg_4), ((MR_Word) mercury__psqueue__wrapper_arg_5));
    }
#line 1600 "psqueue.c"
    *mercury__psqueue__wrapper_arg_3 = ((MR_Box) (mercury__psqueue__conv0_HeadVar__1_1));
#line 1602 "psqueue.c"
  }
#line 1604 "psqueue.c"
}

#line 1607 "psqueue.c"
static MR_bool MR_CALL 
mercury__psqueue____Unify____t_ltree_size_0_0_10001(
#line 1610 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_1,
#line 1612 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_2)
#line 1614 "psqueue.c"
{
#line 1616 "psqueue.c"
  {
#line 1618 "psqueue.c"
    MR_bool mercury__psqueue__succeeded;

#line 1621 "psqueue.c"
    {
#line 1623 "psqueue.c"
      mercury__psqueue__succeeded = mercury__psqueue____Unify____t_ltree_size_0_0(((MR_Integer) mercury__psqueue__wrapper_arg_1), ((MR_Integer) mercury__psqueue__wrapper_arg_2));
    }
#line 1626 "psqueue.c"
    return mercury__psqueue__succeeded;
#line 1628 "psqueue.c"
  }
#line 1630 "psqueue.c"
}

#line 1633 "psqueue.c"
static void MR_CALL 
mercury__psqueue____Compare____t_ltree_size_0_0_10001(
#line 1636 "psqueue.c"
  MR_Box * mercury__psqueue__wrapper_arg_1,
#line 1638 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_2,
#line 1640 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_3)
#line 1642 "psqueue.c"
{
#line 1644 "psqueue.c"
  {
#line 1646 "psqueue.c"
    MR_Word mercury__psqueue__conv0_HeadVar__1_1;

#line 1649 "psqueue.c"
    {
#line 1651 "psqueue.c"
      mercury__psqueue____Compare____t_ltree_size_0_0(&mercury__psqueue__conv0_HeadVar__1_1, ((MR_Integer) mercury__psqueue__wrapper_arg_2), ((MR_Integer) mercury__psqueue__wrapper_arg_3));
    }
#line 1654 "psqueue.c"
    *mercury__psqueue__wrapper_arg_1 = ((MR_Box) (mercury__psqueue__conv0_HeadVar__1_1));
#line 1656 "psqueue.c"
  }
#line 1658 "psqueue.c"
}

#line 1661 "psqueue.c"
static MR_bool MR_CALL 
mercury__psqueue____Unify____t_min_view_2_0_10001(
#line 1664 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_1,
#line 1666 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_2,
#line 1668 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_3,
#line 1670 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_4)
#line 1672 "psqueue.c"
{
#line 1674 "psqueue.c"
  {
#line 1676 "psqueue.c"
    MR_bool mercury__psqueue__succeeded;

#line 1679 "psqueue.c"
    {
#line 1681 "psqueue.c"
      mercury__psqueue__succeeded = mercury__psqueue____Unify____t_min_view_2_0(((MR_Word) mercury__psqueue__wrapper_arg_1), ((MR_Word) mercury__psqueue__wrapper_arg_2), ((MR_Word) mercury__psqueue__wrapper_arg_3), ((MR_Word) mercury__psqueue__wrapper_arg_4));
    }
#line 1684 "psqueue.c"
    return mercury__psqueue__succeeded;
#line 1686 "psqueue.c"
  }
#line 1688 "psqueue.c"
}

#line 1691 "psqueue.c"
static void MR_CALL 
mercury__psqueue____Compare____t_min_view_2_0_10001(
#line 1694 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_1,
#line 1696 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_2,
#line 1698 "psqueue.c"
  MR_Box * mercury__psqueue__wrapper_arg_3,
#line 1700 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_4,
#line 1702 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_5)
#line 1704 "psqueue.c"
{
#line 1706 "psqueue.c"
  {
#line 1708 "psqueue.c"
    MR_Word mercury__psqueue__conv0_HeadVar__1_1;

#line 1711 "psqueue.c"
    {
#line 1713 "psqueue.c"
      mercury__psqueue____Compare____t_min_view_2_0(((MR_Word) mercury__psqueue__wrapper_arg_1), ((MR_Word) mercury__psqueue__wrapper_arg_2), &mercury__psqueue__conv0_HeadVar__1_1, ((MR_Word) mercury__psqueue__wrapper_arg_4), ((MR_Word) mercury__psqueue__wrapper_arg_5));
    }
#line 1716 "psqueue.c"
    *mercury__psqueue__wrapper_arg_3 = ((MR_Box) (mercury__psqueue__conv0_HeadVar__1_1));
#line 1718 "psqueue.c"
  }
#line 1720 "psqueue.c"
}

#line 1723 "psqueue.c"
static MR_bool MR_CALL 
mercury__psqueue____Unify____t_tournament_view_2_0_10001(
#line 1726 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_1,
#line 1728 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_2,
#line 1730 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_3,
#line 1732 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_4)
#line 1734 "psqueue.c"
{
#line 1736 "psqueue.c"
  {
#line 1738 "psqueue.c"
    MR_bool mercury__psqueue__succeeded;

#line 1741 "psqueue.c"
    {
#line 1743 "psqueue.c"
      mercury__psqueue__succeeded = mercury__psqueue____Unify____t_tournament_view_2_0(((MR_Word) mercury__psqueue__wrapper_arg_1), ((MR_Word) mercury__psqueue__wrapper_arg_2), ((MR_Word) mercury__psqueue__wrapper_arg_3), ((MR_Word) mercury__psqueue__wrapper_arg_4));
    }
#line 1746 "psqueue.c"
    return mercury__psqueue__succeeded;
#line 1748 "psqueue.c"
  }
#line 1750 "psqueue.c"
}

#line 1753 "psqueue.c"
static void MR_CALL 
mercury__psqueue____Compare____t_tournament_view_2_0_10001(
#line 1756 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_1,
#line 1758 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_2,
#line 1760 "psqueue.c"
  MR_Box * mercury__psqueue__wrapper_arg_3,
#line 1762 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_4,
#line 1764 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_5)
#line 1766 "psqueue.c"
{
#line 1768 "psqueue.c"
  {
#line 1770 "psqueue.c"
    MR_Word mercury__psqueue__conv0_HeadVar__1_1;

#line 1773 "psqueue.c"
    {
#line 1775 "psqueue.c"
      mercury__psqueue____Compare____t_tournament_view_2_0(((MR_Word) mercury__psqueue__wrapper_arg_1), ((MR_Word) mercury__psqueue__wrapper_arg_2), &mercury__psqueue__conv0_HeadVar__1_1, ((MR_Word) mercury__psqueue__wrapper_arg_4), ((MR_Word) mercury__psqueue__wrapper_arg_5));
    }
#line 1778 "psqueue.c"
    *mercury__psqueue__wrapper_arg_3 = ((MR_Box) (mercury__psqueue__conv0_HeadVar__1_1));
#line 1780 "psqueue.c"
  }
#line 1782 "psqueue.c"
}

#line 1785 "psqueue.c"
static MR_bool MR_CALL 
mercury__psqueue____Unify____t_tree_view_2_0_10001(
#line 1788 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_1,
#line 1790 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_2,
#line 1792 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_3,
#line 1794 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_4)
#line 1796 "psqueue.c"
{
#line 1798 "psqueue.c"
  {
#line 1800 "psqueue.c"
    MR_bool mercury__psqueue__succeeded;

#line 1803 "psqueue.c"
    {
#line 1805 "psqueue.c"
      mercury__psqueue__succeeded = mercury__psqueue____Unify____t_tree_view_2_0(((MR_Word) mercury__psqueue__wrapper_arg_1), ((MR_Word) mercury__psqueue__wrapper_arg_2), ((MR_Word) mercury__psqueue__wrapper_arg_3), ((MR_Word) mercury__psqueue__wrapper_arg_4));
    }
#line 1808 "psqueue.c"
    return mercury__psqueue__succeeded;
#line 1810 "psqueue.c"
  }
#line 1812 "psqueue.c"
}

#line 1815 "psqueue.c"
static void MR_CALL 
mercury__psqueue____Compare____t_tree_view_2_0_10001(
#line 1818 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_1,
#line 1820 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_2,
#line 1822 "psqueue.c"
  MR_Box * mercury__psqueue__wrapper_arg_3,
#line 1824 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_4,
#line 1826 "psqueue.c"
  MR_Box mercury__psqueue__wrapper_arg_5)
#line 1828 "psqueue.c"
{
#line 1830 "psqueue.c"
  {
#line 1832 "psqueue.c"
    MR_Word mercury__psqueue__conv0_HeadVar__1_1;

#line 1835 "psqueue.c"
    {
#line 1837 "psqueue.c"
      mercury__psqueue____Compare____t_tree_view_2_0(((MR_Word) mercury__psqueue__wrapper_arg_1), ((MR_Word) mercury__psqueue__wrapper_arg_2), &mercury__psqueue__conv0_HeadVar__1_1, ((MR_Word) mercury__psqueue__wrapper_arg_4), ((MR_Word) mercury__psqueue__wrapper_arg_5));
    }
#line 1840 "psqueue.c"
    *mercury__psqueue__wrapper_arg_3 = ((MR_Box) (mercury__psqueue__conv0_HeadVar__1_1));
#line 1842 "psqueue.c"
  }
#line 1844 "psqueue.c"
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

#line 1097 "psqueue.m"
static MR_Word MR_CALL 
mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_107_101_121_115_95_95_91_50_93_95_48_1_f_0(
#line 1097 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_14,
#line 1097 "psqueue.m"
  MR_Word mercury__psqueue__T_3)
#line 1097 "psqueue.m"
{
#line 1103 "psqueue.m"
  {
#line 1103 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 1103 "psqueue.m"
    MR_Word mercury__psqueue__Res_4;

#line 1103 "psqueue.m"
    if ((mercury__psqueue__T_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1102 "psqueue.m"
      mercury__psqueue__Res_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1103 "psqueue.m"
    else
#line 1104 "psqueue.m"
      {
#line 1104 "psqueue.m"
        MR_Box mercury__psqueue__K_6 = (MR_hl_field(MR_mktag(1), mercury__psqueue__T_3, (MR_Integer) 1));
#line 1104 "psqueue.m"
        MR_Word mercury__psqueue__TL_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__T_3, (MR_Integer) 3)));
#line 1104 "psqueue.m"
        MR_Word mercury__psqueue__TR_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__T_3, (MR_Integer) 5)));
#line 1104 "psqueue.m"
        MR_Word mercury__psqueue__V_11_11;
#line 1104 "psqueue.m"
        MR_Word mercury__psqueue__V_12_12;
#line 1104 "psqueue.m"
        MR_Word mercury__psqueue__V_13_13;
#line 1104 "psqueue.m"
        MR_Integer mercury__psqueue__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__T_3, (MR_Integer) 0)));
#line 1104 "psqueue.m"
        MR_Box mercury__psqueue__V_7_7 = (MR_hl_field(MR_mktag(1), mercury__psqueue__T_3, (MR_Integer) 2));
#line 1104 "psqueue.m"
        MR_Box mercury__psqueue__V_9_9 = (MR_hl_field(MR_mktag(1), mercury__psqueue__T_3, (MR_Integer) 4));

#line 1105 "psqueue.m"
        {
#line 1105 "psqueue.m"
          mercury__psqueue__V_12_12 = mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_107_101_121_115_95_95_91_50_93_95_48_1_f_0(mercury__psqueue__TypeInfo_for_K_14, mercury__psqueue__TL_8);
        }
#line 1105 "psqueue.m"
        {
#line 1105 "psqueue.m"
          mercury__psqueue__V_13_13 = mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_107_101_121_115_95_95_91_50_93_95_48_1_f_0(mercury__psqueue__TypeInfo_for_K_14, mercury__psqueue__TR_10);
        }
#line 46 "list.opt"
        {
#line 46 "list.opt"
          mercury__list__append_3_p_1(mercury__psqueue__TypeInfo_for_K_14, mercury__psqueue__V_12_12, mercury__psqueue__V_13_13, &mercury__psqueue__V_11_11);
        }
#line 1105 "psqueue.m"
        {
#line 1105 "psqueue.m"
          mercury__psqueue__Res_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1105 "psqueue.m"
          MR_hl_field(MR_mktag(1), mercury__psqueue__Res_4, 0) = mercury__psqueue__K_6;
#line 1105 "psqueue.m"
          MR_hl_field(MR_mktag(1), mercury__psqueue__Res_4, 1) = ((MR_Box) (mercury__psqueue__V_11_11));
#line 1105 "psqueue.m"
        }
#line 1104 "psqueue.m"
      }
#line 1103 "psqueue.m"
    return mercury__psqueue__Res_4;
#line 1103 "psqueue.m"
  }
#line 1097 "psqueue.m"
}

#line 1021 "psqueue.m"
static void MR_CALL 
mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_120_95_107_101_121_95_108_111_115_101_114_95_116_114_101_101_95_95_91_50_93_95_48_3_p_0(
#line 1021 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_25,
#line 1021 "psqueue.m"
  MR_Word mercury__psqueue__LTree_4,
#line 1021 "psqueue.m"
  MR_Box mercury__psqueue__CurrMax_5,
#line 1021 "psqueue.m"
  MR_Word * mercury__psqueue__MaxKey_6)
#line 1021 "psqueue.m"
{
#line 1026 "psqueue.m"
  {
#line 1026 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;

#line 1026 "psqueue.m"
    if ((mercury__psqueue__LTree_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1025 "psqueue.m"
      *mercury__psqueue__MaxKey_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1026 "psqueue.m"
    else
#line 1027 "psqueue.m"
      {
#line 1027 "psqueue.m"
        MR_Box mercury__psqueue__Key_8 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 1));
#line 1027 "psqueue.m"
        MR_Word mercury__psqueue__TL_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 3)));
#line 1027 "psqueue.m"
        MR_Word mercury__psqueue__TR_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 5)));
#line 1027 "psqueue.m"
        MR_Word mercury__psqueue__CMP_13;
#line 1027 "psqueue.m"
        MR_Box mercury__psqueue__NewKey_14;
#line 1027 "psqueue.m"
        MR_Word mercury__psqueue__MaxKey1_15;
#line 1027 "psqueue.m"
        MR_Word mercury__psqueue__MaxKey2_16;
#line 1027 "psqueue.m"
        MR_Integer mercury__psqueue__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 0)));
#line 1027 "psqueue.m"
        MR_Box mercury__psqueue__V_9_9 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 2));
#line 1027 "psqueue.m"
        MR_Box mercury__psqueue__V_11_11 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 4));

#line 1028 "psqueue.m"
        {
#line 1028 "psqueue.m"
          mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_25, &mercury__psqueue__CMP_13, mercury__psqueue__CurrMax_5, mercury__psqueue__Key_8);
        }
#line 1034 "psqueue.m"
        if ((mercury__psqueue__CMP_13 == (MR_Integer) 1))
#line 1035 "psqueue.m"
          mercury__psqueue__NewKey_14 = mercury__psqueue__Key_8;
#line 1034 "psqueue.m"
        else
#line 1032 "psqueue.m"
          mercury__psqueue__NewKey_14 = mercury__psqueue__CurrMax_5;
#line 1038 "psqueue.m"
        {
#line 1038 "psqueue.m"
          mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_120_95_107_101_121_95_108_111_115_101_114_95_116_114_101_101_95_95_91_50_93_95_48_3_p_0(mercury__psqueue__TypeInfo_for_K_25, mercury__psqueue__TL_10, mercury__psqueue__NewKey_14, &mercury__psqueue__MaxKey1_15);
        }
#line 1039 "psqueue.m"
        {
#line 1039 "psqueue.m"
          mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_120_95_107_101_121_95_108_111_115_101_114_95_116_114_101_101_95_95_91_50_93_95_48_3_p_0(mercury__psqueue__TypeInfo_for_K_25, mercury__psqueue__TR_12, mercury__psqueue__NewKey_14, &mercury__psqueue__MaxKey2_16);
        }
#line 1044 "psqueue.m"
        if ((mercury__psqueue__MaxKey1_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1044 "psqueue.m"
          if ((mercury__psqueue__MaxKey2_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1041 "psqueue.m"
            {
#line 1041 "psqueue.m"
              MR_Word base;
#line 1041 "psqueue.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1041 "psqueue.m"
              *mercury__psqueue__MaxKey_6 = base;
#line 1041 "psqueue.m"
              MR_hl_field(MR_mktag(1), base, 0) = mercury__psqueue__NewKey_14;
#line 1041 "psqueue.m"
            }
#line 1044 "psqueue.m"
          else
#line 1049 "psqueue.m"
            {
#line 1049 "psqueue.m"
              MR_Box mercury__psqueue__MaxKey2Val_18 = (MR_hl_field(MR_mktag(1), mercury__psqueue__MaxKey2_16, (MR_Integer) 0));
#line 1049 "psqueue.m"
              MR_Box mercury__psqueue__V_21_21;
#line 443 "psqueue.m"
              MR_Word mercury__psqueue__CMP_33;

#line 444 "psqueue.m"
              {
#line 444 "psqueue.m"
                mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_25, &mercury__psqueue__CMP_33, mercury__psqueue__MaxKey2Val_18, mercury__psqueue__NewKey_14);
              }
#line 446 "psqueue.m"
              if ((mercury__psqueue__CMP_33 == (MR_Integer) 1))
#line 445 "psqueue.m"
                mercury__psqueue__succeeded = MR_TRUE;
#line 446 "psqueue.m"
              else
#line 446 "psqueue.m"
                if ((mercury__psqueue__CMP_33 == (MR_Integer) 0))
#line 446 "psqueue.m"
                  mercury__psqueue__succeeded = MR_TRUE;
#line 446 "psqueue.m"
                else
#line 446 "psqueue.m"
                  mercury__psqueue__succeeded = MR_FALSE;
#line 799 "psqueue.m"
              if (mercury__psqueue__succeeded)
#line 798 "psqueue.m"
                mercury__psqueue__V_21_21 = mercury__psqueue__NewKey_14;
#line 799 "psqueue.m"
              else
#line 800 "psqueue.m"
                mercury__psqueue__V_21_21 = mercury__psqueue__MaxKey2Val_18;
#line 1051 "psqueue.m"
              {
#line 1051 "psqueue.m"
                MR_Word base;
#line 1051 "psqueue.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1051 "psqueue.m"
                *mercury__psqueue__MaxKey_6 = base;
#line 1051 "psqueue.m"
                MR_hl_field(MR_mktag(1), base, 0) = mercury__psqueue__V_21_21;
#line 1051 "psqueue.m"
              }
#line 1049 "psqueue.m"
            }
#line 1044 "psqueue.m"
        else
#line 1044 "psqueue.m"
          {
#line 1044 "psqueue.m"
            MR_Box mercury__psqueue__V_27_27 = (MR_hl_field(MR_mktag(1), mercury__psqueue__MaxKey1_15, (MR_Integer) 0));

#line 1044 "psqueue.m"
            if ((mercury__psqueue__MaxKey2_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1045 "psqueue.m"
              {
#line 1045 "psqueue.m"
                MR_Box mercury__psqueue__V_22_22;
#line 443 "psqueue.m"
                MR_Word mercury__psqueue__CMP_39;

#line 444 "psqueue.m"
                {
#line 444 "psqueue.m"
                  mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_25, &mercury__psqueue__CMP_39, mercury__psqueue__V_27_27, mercury__psqueue__NewKey_14);
                }
#line 446 "psqueue.m"
                if ((mercury__psqueue__CMP_39 == (MR_Integer) 1))
#line 445 "psqueue.m"
                  mercury__psqueue__succeeded = MR_TRUE;
#line 446 "psqueue.m"
                else
#line 446 "psqueue.m"
                  if ((mercury__psqueue__CMP_39 == (MR_Integer) 0))
#line 446 "psqueue.m"
                    mercury__psqueue__succeeded = MR_TRUE;
#line 446 "psqueue.m"
                  else
#line 446 "psqueue.m"
                    mercury__psqueue__succeeded = MR_FALSE;
#line 799 "psqueue.m"
                if (mercury__psqueue__succeeded)
#line 798 "psqueue.m"
                  mercury__psqueue__V_22_22 = mercury__psqueue__NewKey_14;
#line 799 "psqueue.m"
                else
#line 800 "psqueue.m"
                  mercury__psqueue__V_22_22 = mercury__psqueue__V_27_27;
#line 1047 "psqueue.m"
                {
#line 1047 "psqueue.m"
                  MR_Word base;
#line 1047 "psqueue.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1047 "psqueue.m"
                  *mercury__psqueue__MaxKey_6 = base;
#line 1047 "psqueue.m"
                  MR_hl_field(MR_mktag(1), base, 0) = mercury__psqueue__V_22_22;
#line 1047 "psqueue.m"
                }
#line 1045 "psqueue.m"
              }
#line 1044 "psqueue.m"
            else
#line 1053 "psqueue.m"
              {
#line 1053 "psqueue.m"
                MR_Box mercury__psqueue__V_19_19;
#line 1053 "psqueue.m"
                MR_Box mercury__psqueue__V_20_20;
#line 1053 "psqueue.m"
                MR_Box mercury__psqueue__MaxKey2Val_24 = (MR_hl_field(MR_mktag(1), mercury__psqueue__MaxKey2_16, (MR_Integer) 0));
#line 443 "psqueue.m"
                MR_Word mercury__psqueue__CMP_45;
#line 443 "psqueue.m"
                MR_Word mercury__psqueue__CMP_51;

#line 444 "psqueue.m"
                {
#line 444 "psqueue.m"
                  mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_25, &mercury__psqueue__CMP_45, mercury__psqueue__MaxKey2Val_24, mercury__psqueue__NewKey_14);
                }
#line 446 "psqueue.m"
                if ((mercury__psqueue__CMP_45 == (MR_Integer) 1))
#line 445 "psqueue.m"
                  mercury__psqueue__succeeded = MR_TRUE;
#line 446 "psqueue.m"
                else
#line 446 "psqueue.m"
                  if ((mercury__psqueue__CMP_45 == (MR_Integer) 0))
#line 446 "psqueue.m"
                    mercury__psqueue__succeeded = MR_TRUE;
#line 446 "psqueue.m"
                  else
#line 446 "psqueue.m"
                    mercury__psqueue__succeeded = MR_FALSE;
#line 799 "psqueue.m"
                if (mercury__psqueue__succeeded)
#line 798 "psqueue.m"
                  mercury__psqueue__V_20_20 = mercury__psqueue__NewKey_14;
#line 799 "psqueue.m"
                else
#line 800 "psqueue.m"
                  mercury__psqueue__V_20_20 = mercury__psqueue__MaxKey2Val_24;
#line 444 "psqueue.m"
                {
#line 444 "psqueue.m"
                  mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_25, &mercury__psqueue__CMP_51, mercury__psqueue__V_27_27, mercury__psqueue__V_20_20);
                }
#line 446 "psqueue.m"
                if ((mercury__psqueue__CMP_51 == (MR_Integer) 1))
#line 445 "psqueue.m"
                  mercury__psqueue__succeeded = MR_TRUE;
#line 446 "psqueue.m"
                else
#line 446 "psqueue.m"
                  if ((mercury__psqueue__CMP_51 == (MR_Integer) 0))
#line 446 "psqueue.m"
                    mercury__psqueue__succeeded = MR_TRUE;
#line 446 "psqueue.m"
                  else
#line 446 "psqueue.m"
                    mercury__psqueue__succeeded = MR_FALSE;
#line 799 "psqueue.m"
                if (mercury__psqueue__succeeded)
#line 798 "psqueue.m"
                  mercury__psqueue__V_19_19 = mercury__psqueue__V_20_20;
#line 799 "psqueue.m"
                else
#line 800 "psqueue.m"
                  mercury__psqueue__V_19_19 = mercury__psqueue__V_27_27;
#line 1055 "psqueue.m"
                {
#line 1055 "psqueue.m"
                  MR_Word base;
#line 1055 "psqueue.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1055 "psqueue.m"
                  *mercury__psqueue__MaxKey_6 = base;
#line 1055 "psqueue.m"
                  MR_hl_field(MR_mktag(1), base, 0) = mercury__psqueue__V_19_19;
#line 1055 "psqueue.m"
                }
#line 1053 "psqueue.m"
              }
#line 1044 "psqueue.m"
          }
#line 1027 "psqueue.m"
      }
#line 1026 "psqueue.m"
  }
#line 1021 "psqueue.m"
}

#line 957 "psqueue.m"
static void MR_CALL 
mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_105_110_95_107_101_121_95_108_111_115_101_114_95_116_114_101_101_95_95_91_50_93_95_48_3_p_0(
#line 957 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_24,
#line 957 "psqueue.m"
  MR_Word mercury__psqueue__LTree_4,
#line 957 "psqueue.m"
  MR_Box mercury__psqueue__CurrMin_5,
#line 957 "psqueue.m"
  MR_Word * mercury__psqueue__MinKey_6)
#line 957 "psqueue.m"
{
#line 962 "psqueue.m"
  {
#line 962 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;

#line 962 "psqueue.m"
    if ((mercury__psqueue__LTree_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 961 "psqueue.m"
      *mercury__psqueue__MinKey_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 962 "psqueue.m"
    else
#line 963 "psqueue.m"
      {
#line 963 "psqueue.m"
        MR_Box mercury__psqueue__Key_8 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 1));
#line 963 "psqueue.m"
        MR_Word mercury__psqueue__TL_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 3)));
#line 963 "psqueue.m"
        MR_Word mercury__psqueue__TR_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 5)));
#line 963 "psqueue.m"
        MR_Box mercury__psqueue__NewKey_13;
#line 963 "psqueue.m"
        MR_Word mercury__psqueue__MinKey1_14;
#line 963 "psqueue.m"
        MR_Word mercury__psqueue__MinKey2_15;
#line 963 "psqueue.m"
        MR_Integer mercury__psqueue__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 0)));
#line 963 "psqueue.m"
        MR_Box mercury__psqueue__V_9_9 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 2));
#line 963 "psqueue.m"
        MR_Box mercury__psqueue__V_11_11 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 4));
#line 443 "psqueue.m"
        MR_Word mercury__psqueue__CMP_29;

#line 444 "psqueue.m"
        {
#line 444 "psqueue.m"
          mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_24, &mercury__psqueue__CMP_29, mercury__psqueue__CurrMin_5, mercury__psqueue__Key_8);
        }
#line 446 "psqueue.m"
        if ((mercury__psqueue__CMP_29 == (MR_Integer) 1))
#line 445 "psqueue.m"
          mercury__psqueue__succeeded = MR_TRUE;
#line 446 "psqueue.m"
        else
#line 446 "psqueue.m"
          if ((mercury__psqueue__CMP_29 == (MR_Integer) 0))
#line 446 "psqueue.m"
            mercury__psqueue__succeeded = MR_TRUE;
#line 446 "psqueue.m"
          else
#line 446 "psqueue.m"
            mercury__psqueue__succeeded = MR_FALSE;
#line 966 "psqueue.m"
        if (mercury__psqueue__succeeded)
#line 965 "psqueue.m"
          mercury__psqueue__NewKey_13 = mercury__psqueue__CurrMin_5;
#line 966 "psqueue.m"
        else
#line 967 "psqueue.m"
          mercury__psqueue__NewKey_13 = mercury__psqueue__Key_8;
#line 969 "psqueue.m"
        {
#line 969 "psqueue.m"
          mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_105_110_95_107_101_121_95_108_111_115_101_114_95_116_114_101_101_95_95_91_50_93_95_48_3_p_0(mercury__psqueue__TypeInfo_for_K_24, mercury__psqueue__TL_10, mercury__psqueue__NewKey_13, &mercury__psqueue__MinKey1_14);
        }
#line 970 "psqueue.m"
        {
#line 970 "psqueue.m"
          mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_105_110_95_107_101_121_95_108_111_115_101_114_95_116_114_101_101_95_95_91_50_93_95_48_3_p_0(mercury__psqueue__TypeInfo_for_K_24, mercury__psqueue__TR_12, mercury__psqueue__NewKey_13, &mercury__psqueue__MinKey2_15);
        }
#line 975 "psqueue.m"
        if ((mercury__psqueue__MinKey1_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 975 "psqueue.m"
          if ((mercury__psqueue__MinKey2_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 972 "psqueue.m"
            {
#line 972 "psqueue.m"
              MR_Word base;
#line 972 "psqueue.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 972 "psqueue.m"
              *mercury__psqueue__MinKey_6 = base;
#line 972 "psqueue.m"
              MR_hl_field(MR_mktag(1), base, 0) = mercury__psqueue__NewKey_13;
#line 972 "psqueue.m"
            }
#line 975 "psqueue.m"
          else
#line 980 "psqueue.m"
            {
#line 980 "psqueue.m"
              MR_Box mercury__psqueue__MinKey2Val_17 = (MR_hl_field(MR_mktag(1), mercury__psqueue__MinKey2_15, (MR_Integer) 0));
#line 980 "psqueue.m"
              MR_Box mercury__psqueue__V_20_20;
#line 443 "psqueue.m"
              MR_Word mercury__psqueue__CMP_35;

#line 444 "psqueue.m"
              {
#line 444 "psqueue.m"
                mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_24, &mercury__psqueue__CMP_35, mercury__psqueue__MinKey2Val_17, mercury__psqueue__NewKey_13);
              }
#line 446 "psqueue.m"
              if ((mercury__psqueue__CMP_35 == (MR_Integer) 1))
#line 445 "psqueue.m"
                mercury__psqueue__succeeded = MR_TRUE;
#line 446 "psqueue.m"
              else
#line 446 "psqueue.m"
                if ((mercury__psqueue__CMP_35 == (MR_Integer) 0))
#line 446 "psqueue.m"
                  mercury__psqueue__succeeded = MR_TRUE;
#line 446 "psqueue.m"
                else
#line 446 "psqueue.m"
                  mercury__psqueue__succeeded = MR_FALSE;
#line 790 "psqueue.m"
              if (mercury__psqueue__succeeded)
#line 789 "psqueue.m"
                mercury__psqueue__V_20_20 = mercury__psqueue__MinKey2Val_17;
#line 790 "psqueue.m"
              else
#line 791 "psqueue.m"
                mercury__psqueue__V_20_20 = mercury__psqueue__NewKey_13;
#line 982 "psqueue.m"
              {
#line 982 "psqueue.m"
                MR_Word base;
#line 982 "psqueue.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 982 "psqueue.m"
                *mercury__psqueue__MinKey_6 = base;
#line 982 "psqueue.m"
                MR_hl_field(MR_mktag(1), base, 0) = mercury__psqueue__V_20_20;
#line 982 "psqueue.m"
              }
#line 980 "psqueue.m"
            }
#line 975 "psqueue.m"
        else
#line 975 "psqueue.m"
          {
#line 975 "psqueue.m"
            MR_Box mercury__psqueue__V_26_26 = (MR_hl_field(MR_mktag(1), mercury__psqueue__MinKey1_14, (MR_Integer) 0));

#line 975 "psqueue.m"
            if ((mercury__psqueue__MinKey2_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 976 "psqueue.m"
              {
#line 976 "psqueue.m"
                MR_Box mercury__psqueue__V_21_21;
#line 443 "psqueue.m"
                MR_Word mercury__psqueue__CMP_41;

#line 444 "psqueue.m"
                {
#line 444 "psqueue.m"
                  mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_24, &mercury__psqueue__CMP_41, mercury__psqueue__V_26_26, mercury__psqueue__NewKey_13);
                }
#line 446 "psqueue.m"
                if ((mercury__psqueue__CMP_41 == (MR_Integer) 1))
#line 445 "psqueue.m"
                  mercury__psqueue__succeeded = MR_TRUE;
#line 446 "psqueue.m"
                else
#line 446 "psqueue.m"
                  if ((mercury__psqueue__CMP_41 == (MR_Integer) 0))
#line 446 "psqueue.m"
                    mercury__psqueue__succeeded = MR_TRUE;
#line 446 "psqueue.m"
                  else
#line 446 "psqueue.m"
                    mercury__psqueue__succeeded = MR_FALSE;
#line 790 "psqueue.m"
                if (mercury__psqueue__succeeded)
#line 789 "psqueue.m"
                  mercury__psqueue__V_21_21 = mercury__psqueue__V_26_26;
#line 790 "psqueue.m"
                else
#line 791 "psqueue.m"
                  mercury__psqueue__V_21_21 = mercury__psqueue__NewKey_13;
#line 978 "psqueue.m"
                {
#line 978 "psqueue.m"
                  MR_Word base;
#line 978 "psqueue.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 978 "psqueue.m"
                  *mercury__psqueue__MinKey_6 = base;
#line 978 "psqueue.m"
                  MR_hl_field(MR_mktag(1), base, 0) = mercury__psqueue__V_21_21;
#line 978 "psqueue.m"
                }
#line 976 "psqueue.m"
              }
#line 975 "psqueue.m"
            else
#line 984 "psqueue.m"
              {
#line 984 "psqueue.m"
                MR_Box mercury__psqueue__V_18_18;
#line 984 "psqueue.m"
                MR_Box mercury__psqueue__V_19_19;
#line 984 "psqueue.m"
                MR_Box mercury__psqueue__MinKey2Val_23 = (MR_hl_field(MR_mktag(1), mercury__psqueue__MinKey2_15, (MR_Integer) 0));
#line 443 "psqueue.m"
                MR_Word mercury__psqueue__CMP_47;
#line 443 "psqueue.m"
                MR_Word mercury__psqueue__CMP_53;

#line 444 "psqueue.m"
                {
#line 444 "psqueue.m"
                  mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_24, &mercury__psqueue__CMP_47, mercury__psqueue__MinKey2Val_23, mercury__psqueue__NewKey_13);
                }
#line 446 "psqueue.m"
                if ((mercury__psqueue__CMP_47 == (MR_Integer) 1))
#line 445 "psqueue.m"
                  mercury__psqueue__succeeded = MR_TRUE;
#line 446 "psqueue.m"
                else
#line 446 "psqueue.m"
                  if ((mercury__psqueue__CMP_47 == (MR_Integer) 0))
#line 446 "psqueue.m"
                    mercury__psqueue__succeeded = MR_TRUE;
#line 446 "psqueue.m"
                  else
#line 446 "psqueue.m"
                    mercury__psqueue__succeeded = MR_FALSE;
#line 790 "psqueue.m"
                if (mercury__psqueue__succeeded)
#line 789 "psqueue.m"
                  mercury__psqueue__V_19_19 = mercury__psqueue__MinKey2Val_23;
#line 790 "psqueue.m"
                else
#line 791 "psqueue.m"
                  mercury__psqueue__V_19_19 = mercury__psqueue__NewKey_13;
#line 444 "psqueue.m"
                {
#line 444 "psqueue.m"
                  mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_24, &mercury__psqueue__CMP_53, mercury__psqueue__V_26_26, mercury__psqueue__V_19_19);
                }
#line 446 "psqueue.m"
                if ((mercury__psqueue__CMP_53 == (MR_Integer) 1))
#line 445 "psqueue.m"
                  mercury__psqueue__succeeded = MR_TRUE;
#line 446 "psqueue.m"
                else
#line 446 "psqueue.m"
                  if ((mercury__psqueue__CMP_53 == (MR_Integer) 0))
#line 446 "psqueue.m"
                    mercury__psqueue__succeeded = MR_TRUE;
#line 446 "psqueue.m"
                  else
#line 446 "psqueue.m"
                    mercury__psqueue__succeeded = MR_FALSE;
#line 790 "psqueue.m"
                if (mercury__psqueue__succeeded)
#line 789 "psqueue.m"
                  mercury__psqueue__V_18_18 = mercury__psqueue__V_26_26;
#line 790 "psqueue.m"
                else
#line 791 "psqueue.m"
                  mercury__psqueue__V_18_18 = mercury__psqueue__V_19_19;
#line 986 "psqueue.m"
                {
#line 986 "psqueue.m"
                  MR_Word base;
#line 986 "psqueue.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 986 "psqueue.m"
                  *mercury__psqueue__MinKey_6 = base;
#line 986 "psqueue.m"
                  MR_hl_field(MR_mktag(1), base, 0) = mercury__psqueue__V_18_18;
#line 986 "psqueue.m"
                }
#line 984 "psqueue.m"
              }
#line 975 "psqueue.m"
          }
#line 963 "psqueue.m"
      }
#line 962 "psqueue.m"
  }
#line 957 "psqueue.m"
}

#line 927 "psqueue.m"
static void MR_CALL 
mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_105_110_95_107_101_121_95_108_111_115_101_114_95_116_114_101_101_95_95_91_50_93_95_48_2_p_0(
#line 927 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_21,
#line 927 "psqueue.m"
  MR_Word mercury__psqueue__LTree_3,
#line 927 "psqueue.m"
  MR_Word * mercury__psqueue__MinKey_4)
#line 927 "psqueue.m"
{
#line 933 "psqueue.m"
  {
#line 933 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;

#line 933 "psqueue.m"
    if ((mercury__psqueue__LTree_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 931 "psqueue.m"
      *mercury__psqueue__MinKey_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 933 "psqueue.m"
    else
#line 934 "psqueue.m"
      {
#line 934 "psqueue.m"
        MR_Box mercury__psqueue__Key_6 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_3, (MR_Integer) 1));
#line 934 "psqueue.m"
        MR_Word mercury__psqueue__TL_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_3, (MR_Integer) 3)));
#line 934 "psqueue.m"
        MR_Word mercury__psqueue__TR_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_3, (MR_Integer) 5)));
#line 934 "psqueue.m"
        MR_Word mercury__psqueue__MinKey1_11;
#line 934 "psqueue.m"
        MR_Word mercury__psqueue__MinKey2_12;
#line 934 "psqueue.m"
        MR_Integer mercury__psqueue__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_3, (MR_Integer) 0)));
#line 934 "psqueue.m"
        MR_Box mercury__psqueue__V_7_7 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_3, (MR_Integer) 2));
#line 934 "psqueue.m"
        MR_Box mercury__psqueue__V_9_9 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_3, (MR_Integer) 4));

#line 935 "psqueue.m"
        {
#line 935 "psqueue.m"
          mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_105_110_95_107_101_121_95_108_111_115_101_114_95_116_114_101_101_95_95_91_50_93_95_48_3_p_0(mercury__psqueue__TypeInfo_for_K_21, mercury__psqueue__TL_8, mercury__psqueue__Key_6, &mercury__psqueue__MinKey1_11);
        }
#line 936 "psqueue.m"
        {
#line 936 "psqueue.m"
          mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_105_110_95_107_101_121_95_108_111_115_101_114_95_116_114_101_101_95_95_91_50_93_95_48_3_p_0(mercury__psqueue__TypeInfo_for_K_21, mercury__psqueue__TR_10, mercury__psqueue__Key_6, &mercury__psqueue__MinKey2_12);
        }
#line 941 "psqueue.m"
        if ((mercury__psqueue__MinKey1_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 941 "psqueue.m"
          if ((mercury__psqueue__MinKey2_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 938 "psqueue.m"
            {
#line 938 "psqueue.m"
              MR_Word base;
#line 938 "psqueue.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 938 "psqueue.m"
              *mercury__psqueue__MinKey_4 = base;
#line 938 "psqueue.m"
              MR_hl_field(MR_mktag(1), base, 0) = mercury__psqueue__Key_6;
#line 938 "psqueue.m"
            }
#line 941 "psqueue.m"
          else
#line 946 "psqueue.m"
            {
#line 946 "psqueue.m"
              MR_Box mercury__psqueue__MinKey2Val_14 = (MR_hl_field(MR_mktag(1), mercury__psqueue__MinKey2_12, (MR_Integer) 0));
#line 946 "psqueue.m"
              MR_Box mercury__psqueue__V_17_17;
#line 443 "psqueue.m"
              MR_Word mercury__psqueue__CMP_29;

#line 444 "psqueue.m"
              {
#line 444 "psqueue.m"
                mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_21, &mercury__psqueue__CMP_29, mercury__psqueue__MinKey2Val_14, mercury__psqueue__Key_6);
              }
#line 446 "psqueue.m"
              if ((mercury__psqueue__CMP_29 == (MR_Integer) 1))
#line 445 "psqueue.m"
                mercury__psqueue__succeeded = MR_TRUE;
#line 446 "psqueue.m"
              else
#line 446 "psqueue.m"
                if ((mercury__psqueue__CMP_29 == (MR_Integer) 0))
#line 446 "psqueue.m"
                  mercury__psqueue__succeeded = MR_TRUE;
#line 446 "psqueue.m"
                else
#line 446 "psqueue.m"
                  mercury__psqueue__succeeded = MR_FALSE;
#line 790 "psqueue.m"
              if (mercury__psqueue__succeeded)
#line 789 "psqueue.m"
                mercury__psqueue__V_17_17 = mercury__psqueue__MinKey2Val_14;
#line 790 "psqueue.m"
              else
#line 791 "psqueue.m"
                mercury__psqueue__V_17_17 = mercury__psqueue__Key_6;
#line 948 "psqueue.m"
              {
#line 948 "psqueue.m"
                MR_Word base;
#line 948 "psqueue.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 948 "psqueue.m"
                *mercury__psqueue__MinKey_4 = base;
#line 948 "psqueue.m"
                MR_hl_field(MR_mktag(1), base, 0) = mercury__psqueue__V_17_17;
#line 948 "psqueue.m"
              }
#line 946 "psqueue.m"
            }
#line 941 "psqueue.m"
        else
#line 941 "psqueue.m"
          {
#line 941 "psqueue.m"
            MR_Box mercury__psqueue__V_23_23 = (MR_hl_field(MR_mktag(1), mercury__psqueue__MinKey1_11, (MR_Integer) 0));

#line 941 "psqueue.m"
            if ((mercury__psqueue__MinKey2_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 942 "psqueue.m"
              {
#line 942 "psqueue.m"
                MR_Box mercury__psqueue__V_18_18;
#line 443 "psqueue.m"
                MR_Word mercury__psqueue__CMP_35;

#line 444 "psqueue.m"
                {
#line 444 "psqueue.m"
                  mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_21, &mercury__psqueue__CMP_35, mercury__psqueue__V_23_23, mercury__psqueue__Key_6);
                }
#line 446 "psqueue.m"
                if ((mercury__psqueue__CMP_35 == (MR_Integer) 1))
#line 445 "psqueue.m"
                  mercury__psqueue__succeeded = MR_TRUE;
#line 446 "psqueue.m"
                else
#line 446 "psqueue.m"
                  if ((mercury__psqueue__CMP_35 == (MR_Integer) 0))
#line 446 "psqueue.m"
                    mercury__psqueue__succeeded = MR_TRUE;
#line 446 "psqueue.m"
                  else
#line 446 "psqueue.m"
                    mercury__psqueue__succeeded = MR_FALSE;
#line 790 "psqueue.m"
                if (mercury__psqueue__succeeded)
#line 789 "psqueue.m"
                  mercury__psqueue__V_18_18 = mercury__psqueue__V_23_23;
#line 790 "psqueue.m"
                else
#line 791 "psqueue.m"
                  mercury__psqueue__V_18_18 = mercury__psqueue__Key_6;
#line 944 "psqueue.m"
                {
#line 944 "psqueue.m"
                  MR_Word base;
#line 944 "psqueue.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 944 "psqueue.m"
                  *mercury__psqueue__MinKey_4 = base;
#line 944 "psqueue.m"
                  MR_hl_field(MR_mktag(1), base, 0) = mercury__psqueue__V_18_18;
#line 944 "psqueue.m"
                }
#line 942 "psqueue.m"
              }
#line 941 "psqueue.m"
            else
#line 950 "psqueue.m"
              {
#line 950 "psqueue.m"
                MR_Box mercury__psqueue__V_15_15;
#line 950 "psqueue.m"
                MR_Box mercury__psqueue__V_16_16;
#line 950 "psqueue.m"
                MR_Box mercury__psqueue__MinKey2Val_20 = (MR_hl_field(MR_mktag(1), mercury__psqueue__MinKey2_12, (MR_Integer) 0));
#line 443 "psqueue.m"
                MR_Word mercury__psqueue__CMP_41;
#line 443 "psqueue.m"
                MR_Word mercury__psqueue__CMP_47;

#line 444 "psqueue.m"
                {
#line 444 "psqueue.m"
                  mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_21, &mercury__psqueue__CMP_41, mercury__psqueue__Key_6, mercury__psqueue__MinKey2Val_20);
                }
#line 446 "psqueue.m"
                if ((mercury__psqueue__CMP_41 == (MR_Integer) 1))
#line 445 "psqueue.m"
                  mercury__psqueue__succeeded = MR_TRUE;
#line 446 "psqueue.m"
                else
#line 446 "psqueue.m"
                  if ((mercury__psqueue__CMP_41 == (MR_Integer) 0))
#line 446 "psqueue.m"
                    mercury__psqueue__succeeded = MR_TRUE;
#line 446 "psqueue.m"
                  else
#line 446 "psqueue.m"
                    mercury__psqueue__succeeded = MR_FALSE;
#line 790 "psqueue.m"
                if (mercury__psqueue__succeeded)
#line 789 "psqueue.m"
                  mercury__psqueue__V_16_16 = mercury__psqueue__Key_6;
#line 790 "psqueue.m"
                else
#line 791 "psqueue.m"
                  mercury__psqueue__V_16_16 = mercury__psqueue__MinKey2Val_20;
#line 444 "psqueue.m"
                {
#line 444 "psqueue.m"
                  mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_21, &mercury__psqueue__CMP_47, mercury__psqueue__V_23_23, mercury__psqueue__V_16_16);
                }
#line 446 "psqueue.m"
                if ((mercury__psqueue__CMP_47 == (MR_Integer) 1))
#line 445 "psqueue.m"
                  mercury__psqueue__succeeded = MR_TRUE;
#line 446 "psqueue.m"
                else
#line 446 "psqueue.m"
                  if ((mercury__psqueue__CMP_47 == (MR_Integer) 0))
#line 446 "psqueue.m"
                    mercury__psqueue__succeeded = MR_TRUE;
#line 446 "psqueue.m"
                  else
#line 446 "psqueue.m"
                    mercury__psqueue__succeeded = MR_FALSE;
#line 790 "psqueue.m"
                if (mercury__psqueue__succeeded)
#line 789 "psqueue.m"
                  mercury__psqueue__V_15_15 = mercury__psqueue__V_23_23;
#line 790 "psqueue.m"
                else
#line 791 "psqueue.m"
                  mercury__psqueue__V_15_15 = mercury__psqueue__V_16_16;
#line 952 "psqueue.m"
                {
#line 952 "psqueue.m"
                  MR_Word base;
#line 952 "psqueue.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 952 "psqueue.m"
                  *mercury__psqueue__MinKey_4 = base;
#line 952 "psqueue.m"
                  MR_hl_field(MR_mktag(1), base, 0) = mercury__psqueue__V_15_15;
#line 952 "psqueue.m"
                }
#line 950 "psqueue.m"
              }
#line 941 "psqueue.m"
          }
#line 934 "psqueue.m"
      }
#line 933 "psqueue.m"
  }
#line 927 "psqueue.m"
}

#line 833 "psqueue.m"
static void MR_CALL 
mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_105_110_95_112_114_105_111_95_108_111_115_101_114_95_116_114_101_101_95_95_91_49_93_95_48_3_p_0(
#line 833 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_25,
#line 833 "psqueue.m"
  MR_Word mercury__psqueue__LTree_4,
#line 833 "psqueue.m"
  MR_Box mercury__psqueue__CurrMin_5,
#line 833 "psqueue.m"
  MR_Word * mercury__psqueue__MinPrio_6)
#line 833 "psqueue.m"
{
#line 839 "psqueue.m"
  {
#line 839 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;

#line 839 "psqueue.m"
    if ((mercury__psqueue__LTree_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 837 "psqueue.m"
      *mercury__psqueue__MinPrio_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 839 "psqueue.m"
    else
#line 840 "psqueue.m"
      {
#line 840 "psqueue.m"
        MR_Box mercury__psqueue__Prio_9 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 2));
#line 840 "psqueue.m"
        MR_Word mercury__psqueue__TL_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 3)));
#line 840 "psqueue.m"
        MR_Word mercury__psqueue__TR_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 5)));
#line 840 "psqueue.m"
        MR_Box mercury__psqueue__NewPrio_13;
#line 840 "psqueue.m"
        MR_Word mercury__psqueue__MinPrio1_14;
#line 840 "psqueue.m"
        MR_Word mercury__psqueue__MinPrio2_15;
#line 840 "psqueue.m"
        MR_Integer mercury__psqueue__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 0)));
#line 840 "psqueue.m"
        MR_Box mercury__psqueue__V_8_8 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 1));
#line 840 "psqueue.m"
        MR_Box mercury__psqueue__V_11_11 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 4));
#line 443 "psqueue.m"
        MR_Word mercury__psqueue__CMP_29;

#line 444 "psqueue.m"
        {
#line 444 "psqueue.m"
          mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_P_25, &mercury__psqueue__CMP_29, mercury__psqueue__CurrMin_5, mercury__psqueue__Prio_9);
        }
#line 446 "psqueue.m"
        if ((mercury__psqueue__CMP_29 == (MR_Integer) 1))
#line 445 "psqueue.m"
          mercury__psqueue__succeeded = MR_TRUE;
#line 446 "psqueue.m"
        else
#line 446 "psqueue.m"
          if ((mercury__psqueue__CMP_29 == (MR_Integer) 0))
#line 446 "psqueue.m"
            mercury__psqueue__succeeded = MR_TRUE;
#line 446 "psqueue.m"
          else
#line 446 "psqueue.m"
            mercury__psqueue__succeeded = MR_FALSE;
#line 843 "psqueue.m"
        if (mercury__psqueue__succeeded)
#line 842 "psqueue.m"
          mercury__psqueue__NewPrio_13 = mercury__psqueue__CurrMin_5;
#line 843 "psqueue.m"
        else
#line 844 "psqueue.m"
          mercury__psqueue__NewPrio_13 = mercury__psqueue__Prio_9;
#line 846 "psqueue.m"
        {
#line 846 "psqueue.m"
          mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_105_110_95_112_114_105_111_95_108_111_115_101_114_95_116_114_101_101_95_95_91_49_93_95_48_3_p_0(mercury__psqueue__TypeInfo_for_P_25, mercury__psqueue__TL_10, mercury__psqueue__NewPrio_13, &mercury__psqueue__MinPrio1_14);
        }
#line 847 "psqueue.m"
        {
#line 847 "psqueue.m"
          mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_105_110_95_112_114_105_111_95_108_111_115_101_114_95_116_114_101_101_95_95_91_49_93_95_48_3_p_0(mercury__psqueue__TypeInfo_for_P_25, mercury__psqueue__TR_12, mercury__psqueue__NewPrio_13, &mercury__psqueue__MinPrio2_15);
        }
#line 852 "psqueue.m"
        if ((mercury__psqueue__MinPrio1_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 852 "psqueue.m"
          if ((mercury__psqueue__MinPrio2_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 849 "psqueue.m"
            {
#line 849 "psqueue.m"
              MR_Word base;
#line 849 "psqueue.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 849 "psqueue.m"
              *mercury__psqueue__MinPrio_6 = base;
#line 849 "psqueue.m"
              MR_hl_field(MR_mktag(1), base, 0) = mercury__psqueue__NewPrio_13;
#line 849 "psqueue.m"
            }
#line 852 "psqueue.m"
          else
#line 857 "psqueue.m"
            {
#line 857 "psqueue.m"
              MR_Box mercury__psqueue__MinPrio2Val_17 = (MR_hl_field(MR_mktag(1), mercury__psqueue__MinPrio2_15, (MR_Integer) 0));
#line 857 "psqueue.m"
              MR_Box mercury__psqueue__V_20_20;
#line 443 "psqueue.m"
              MR_Word mercury__psqueue__CMP_35;

#line 444 "psqueue.m"
              {
#line 444 "psqueue.m"
                mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_P_25, &mercury__psqueue__CMP_35, mercury__psqueue__MinPrio2Val_17, mercury__psqueue__NewPrio_13);
              }
#line 446 "psqueue.m"
              if ((mercury__psqueue__CMP_35 == (MR_Integer) 1))
#line 445 "psqueue.m"
                mercury__psqueue__succeeded = MR_TRUE;
#line 446 "psqueue.m"
              else
#line 446 "psqueue.m"
                if ((mercury__psqueue__CMP_35 == (MR_Integer) 0))
#line 446 "psqueue.m"
                  mercury__psqueue__succeeded = MR_TRUE;
#line 446 "psqueue.m"
                else
#line 446 "psqueue.m"
                  mercury__psqueue__succeeded = MR_FALSE;
#line 790 "psqueue.m"
              if (mercury__psqueue__succeeded)
#line 789 "psqueue.m"
                mercury__psqueue__V_20_20 = mercury__psqueue__MinPrio2Val_17;
#line 790 "psqueue.m"
              else
#line 791 "psqueue.m"
                mercury__psqueue__V_20_20 = mercury__psqueue__NewPrio_13;
#line 859 "psqueue.m"
              {
#line 859 "psqueue.m"
                MR_Word base;
#line 859 "psqueue.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 859 "psqueue.m"
                *mercury__psqueue__MinPrio_6 = base;
#line 859 "psqueue.m"
                MR_hl_field(MR_mktag(1), base, 0) = mercury__psqueue__V_20_20;
#line 859 "psqueue.m"
              }
#line 857 "psqueue.m"
            }
#line 852 "psqueue.m"
        else
#line 852 "psqueue.m"
          {
#line 852 "psqueue.m"
            MR_Box mercury__psqueue__V_26_26 = (MR_hl_field(MR_mktag(1), mercury__psqueue__MinPrio1_14, (MR_Integer) 0));

#line 852 "psqueue.m"
            if ((mercury__psqueue__MinPrio2_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 853 "psqueue.m"
              {
#line 853 "psqueue.m"
                MR_Box mercury__psqueue__V_21_21;
#line 443 "psqueue.m"
                MR_Word mercury__psqueue__CMP_41;

#line 444 "psqueue.m"
                {
#line 444 "psqueue.m"
                  mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_P_25, &mercury__psqueue__CMP_41, mercury__psqueue__V_26_26, mercury__psqueue__NewPrio_13);
                }
#line 446 "psqueue.m"
                if ((mercury__psqueue__CMP_41 == (MR_Integer) 1))
#line 445 "psqueue.m"
                  mercury__psqueue__succeeded = MR_TRUE;
#line 446 "psqueue.m"
                else
#line 446 "psqueue.m"
                  if ((mercury__psqueue__CMP_41 == (MR_Integer) 0))
#line 446 "psqueue.m"
                    mercury__psqueue__succeeded = MR_TRUE;
#line 446 "psqueue.m"
                  else
#line 446 "psqueue.m"
                    mercury__psqueue__succeeded = MR_FALSE;
#line 790 "psqueue.m"
                if (mercury__psqueue__succeeded)
#line 789 "psqueue.m"
                  mercury__psqueue__V_21_21 = mercury__psqueue__V_26_26;
#line 790 "psqueue.m"
                else
#line 791 "psqueue.m"
                  mercury__psqueue__V_21_21 = mercury__psqueue__NewPrio_13;
#line 855 "psqueue.m"
                {
#line 855 "psqueue.m"
                  MR_Word base;
#line 855 "psqueue.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 855 "psqueue.m"
                  *mercury__psqueue__MinPrio_6 = base;
#line 855 "psqueue.m"
                  MR_hl_field(MR_mktag(1), base, 0) = mercury__psqueue__V_21_21;
#line 855 "psqueue.m"
                }
#line 853 "psqueue.m"
              }
#line 852 "psqueue.m"
            else
#line 861 "psqueue.m"
              {
#line 861 "psqueue.m"
                MR_Box mercury__psqueue__V_18_18;
#line 861 "psqueue.m"
                MR_Box mercury__psqueue__V_19_19;
#line 861 "psqueue.m"
                MR_Box mercury__psqueue__MinPrio2Val_23 = (MR_hl_field(MR_mktag(1), mercury__psqueue__MinPrio2_15, (MR_Integer) 0));
#line 443 "psqueue.m"
                MR_Word mercury__psqueue__CMP_47;
#line 443 "psqueue.m"
                MR_Word mercury__psqueue__CMP_53;

#line 444 "psqueue.m"
                {
#line 444 "psqueue.m"
                  mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_P_25, &mercury__psqueue__CMP_47, mercury__psqueue__MinPrio2Val_23, mercury__psqueue__NewPrio_13);
                }
#line 446 "psqueue.m"
                if ((mercury__psqueue__CMP_47 == (MR_Integer) 1))
#line 445 "psqueue.m"
                  mercury__psqueue__succeeded = MR_TRUE;
#line 446 "psqueue.m"
                else
#line 446 "psqueue.m"
                  if ((mercury__psqueue__CMP_47 == (MR_Integer) 0))
#line 446 "psqueue.m"
                    mercury__psqueue__succeeded = MR_TRUE;
#line 446 "psqueue.m"
                  else
#line 446 "psqueue.m"
                    mercury__psqueue__succeeded = MR_FALSE;
#line 790 "psqueue.m"
                if (mercury__psqueue__succeeded)
#line 789 "psqueue.m"
                  mercury__psqueue__V_19_19 = mercury__psqueue__MinPrio2Val_23;
#line 790 "psqueue.m"
                else
#line 791 "psqueue.m"
                  mercury__psqueue__V_19_19 = mercury__psqueue__NewPrio_13;
#line 444 "psqueue.m"
                {
#line 444 "psqueue.m"
                  mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_P_25, &mercury__psqueue__CMP_53, mercury__psqueue__V_26_26, mercury__psqueue__V_19_19);
                }
#line 446 "psqueue.m"
                if ((mercury__psqueue__CMP_53 == (MR_Integer) 1))
#line 445 "psqueue.m"
                  mercury__psqueue__succeeded = MR_TRUE;
#line 446 "psqueue.m"
                else
#line 446 "psqueue.m"
                  if ((mercury__psqueue__CMP_53 == (MR_Integer) 0))
#line 446 "psqueue.m"
                    mercury__psqueue__succeeded = MR_TRUE;
#line 446 "psqueue.m"
                  else
#line 446 "psqueue.m"
                    mercury__psqueue__succeeded = MR_FALSE;
#line 790 "psqueue.m"
                if (mercury__psqueue__succeeded)
#line 789 "psqueue.m"
                  mercury__psqueue__V_18_18 = mercury__psqueue__V_26_26;
#line 790 "psqueue.m"
                else
#line 791 "psqueue.m"
                  mercury__psqueue__V_18_18 = mercury__psqueue__V_19_19;
#line 863 "psqueue.m"
                {
#line 863 "psqueue.m"
                  MR_Word base;
#line 863 "psqueue.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 863 "psqueue.m"
                  *mercury__psqueue__MinPrio_6 = base;
#line 863 "psqueue.m"
                  MR_hl_field(MR_mktag(1), base, 0) = mercury__psqueue__V_18_18;
#line 863 "psqueue.m"
                }
#line 861 "psqueue.m"
              }
#line 852 "psqueue.m"
          }
#line 840 "psqueue.m"
      }
#line 839 "psqueue.m"
  }
#line 833 "psqueue.m"
}

#line 647 "psqueue.m"
static MR_Word MR_CALL 
mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_111_110_115_116_114_117_99_116_95_110_111_100_101_95_95_91_49_44_32_50_93_95_48_5_f_0(
#line 647 "psqueue.m"
  MR_Box mercury__psqueue__Key_7,
#line 647 "psqueue.m"
  MR_Box mercury__psqueue__Prio_8,
#line 647 "psqueue.m"
  MR_Word mercury__psqueue__L_9,
#line 647 "psqueue.m"
  MR_Box mercury__psqueue__SplitKey_10,
#line 647 "psqueue.m"
  MR_Word mercury__psqueue__R_11)
#line 647 "psqueue.m"
{
#line 648 "psqueue.m"
  {
#line 648 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 648 "psqueue.m"
    MR_Word mercury__psqueue__Res_12;
#line 648 "psqueue.m"
    MR_Integer mercury__psqueue__Size_13;
#line 648 "psqueue.m"
    MR_Integer mercury__psqueue__V_14_14;
#line 648 "psqueue.m"
    MR_Integer mercury__psqueue__V_16_16;
#line 648 "psqueue.m"
    MR_Integer mercury__psqueue__V_17_17;

#line 565 "psqueue.m"
    if ((mercury__psqueue__L_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 564 "psqueue.m"
      mercury__psqueue__V_16_16 = (MR_Integer) 0;
#line 565 "psqueue.m"
    else
#line 566 "psqueue.m"
      {
#line 566 "psqueue.m"
        MR_Box mercury__psqueue__V_22_22;
#line 566 "psqueue.m"
        MR_Box mercury__psqueue__V_23_23;
#line 566 "psqueue.m"
        MR_Word mercury__psqueue__V_24_24;
#line 566 "psqueue.m"
        MR_Box mercury__psqueue__V_25_25;
#line 566 "psqueue.m"
        MR_Word mercury__psqueue__V_26_26;

#line 566 "psqueue.m"
        mercury__psqueue__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__L_9, (MR_Integer) 0)));
#line 566 "psqueue.m"
        mercury__psqueue__V_22_22 = (MR_hl_field(MR_mktag(1), mercury__psqueue__L_9, (MR_Integer) 1));
#line 566 "psqueue.m"
        mercury__psqueue__V_23_23 = (MR_hl_field(MR_mktag(1), mercury__psqueue__L_9, (MR_Integer) 2));
#line 566 "psqueue.m"
        mercury__psqueue__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__L_9, (MR_Integer) 3)));
#line 566 "psqueue.m"
        mercury__psqueue__V_25_25 = (MR_hl_field(MR_mktag(1), mercury__psqueue__L_9, (MR_Integer) 4));
#line 566 "psqueue.m"
        mercury__psqueue__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__L_9, (MR_Integer) 5)));
#line 566 "psqueue.m"
      }
#line 649 "psqueue.m"
    mercury__psqueue__V_14_14 = ((MR_Integer) 1 + mercury__psqueue__V_16_16);
#line 565 "psqueue.m"
    if ((mercury__psqueue__R_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 564 "psqueue.m"
      mercury__psqueue__V_17_17 = (MR_Integer) 0;
#line 565 "psqueue.m"
    else
#line 566 "psqueue.m"
      {
#line 566 "psqueue.m"
        MR_Box mercury__psqueue__V_29_29;
#line 566 "psqueue.m"
        MR_Box mercury__psqueue__V_30_30;
#line 566 "psqueue.m"
        MR_Word mercury__psqueue__V_31_31;
#line 566 "psqueue.m"
        MR_Box mercury__psqueue__V_32_32;
#line 566 "psqueue.m"
        MR_Word mercury__psqueue__V_33_33;

#line 566 "psqueue.m"
        mercury__psqueue__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__R_11, (MR_Integer) 0)));
#line 566 "psqueue.m"
        mercury__psqueue__V_29_29 = (MR_hl_field(MR_mktag(1), mercury__psqueue__R_11, (MR_Integer) 1));
#line 566 "psqueue.m"
        mercury__psqueue__V_30_30 = (MR_hl_field(MR_mktag(1), mercury__psqueue__R_11, (MR_Integer) 2));
#line 566 "psqueue.m"
        mercury__psqueue__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__R_11, (MR_Integer) 3)));
#line 566 "psqueue.m"
        mercury__psqueue__V_32_32 = (MR_hl_field(MR_mktag(1), mercury__psqueue__R_11, (MR_Integer) 4));
#line 566 "psqueue.m"
        mercury__psqueue__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__R_11, (MR_Integer) 5)));
#line 566 "psqueue.m"
      }
#line 649 "psqueue.m"
    mercury__psqueue__Size_13 = (mercury__psqueue__V_14_14 + mercury__psqueue__V_17_17);
#line 650 "psqueue.m"
    {
#line 650 "psqueue.m"
      mercury__psqueue__Res_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 650 "psqueue.m"
      MR_hl_field(MR_mktag(1), mercury__psqueue__Res_12, 0) = ((MR_Box) (mercury__psqueue__Size_13));
#line 650 "psqueue.m"
      MR_hl_field(MR_mktag(1), mercury__psqueue__Res_12, 1) = mercury__psqueue__Key_7;
#line 650 "psqueue.m"
      MR_hl_field(MR_mktag(1), mercury__psqueue__Res_12, 2) = mercury__psqueue__Prio_8;
#line 650 "psqueue.m"
      MR_hl_field(MR_mktag(1), mercury__psqueue__Res_12, 3) = ((MR_Box) (mercury__psqueue__L_9));
#line 650 "psqueue.m"
      MR_hl_field(MR_mktag(1), mercury__psqueue__Res_12, 4) = mercury__psqueue__SplitKey_10;
#line 650 "psqueue.m"
      MR_hl_field(MR_mktag(1), mercury__psqueue__Res_12, 5) = ((MR_Box) (mercury__psqueue__R_11));
#line 650 "psqueue.m"
    }
#line 648 "psqueue.m"
    return mercury__psqueue__Res_12;
#line 648 "psqueue.m"
  }
#line 647 "psqueue.m"
}

#line 238 "psqueue.m"
MR_Word MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_116_111_117_114_110_97_109_101_110_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_2_f_0(
#line 238 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_18,
#line 238 "psqueue.m"
  MR_Word mercury__psqueue__PSQ1_4,
#line 238 "psqueue.m"
  MR_Word mercury__psqueue__PSQ2_5)
#line 238 "psqueue.m"
{
#line 245 "psqueue.m"
  {
#line 245 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 245 "psqueue.m"
    MR_Word mercury__psqueue__Res_6;
#line 245 "psqueue.m"
    MR_Word mercury__psqueue__TypeInfo_for_P_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;

#line 245 "psqueue.m"
    if ((mercury__psqueue__PSQ1_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 244 "psqueue.m"
      mercury__psqueue__Res_6 = mercury__psqueue__PSQ2_5;
#line 245 "psqueue.m"
    else
#line 246 "psqueue.m"
      {
#line 246 "psqueue.m"
        MR_Box mercury__psqueue__K1_7 = (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ1_4, (MR_Integer) 0));
#line 246 "psqueue.m"
        MR_Integer mercury__psqueue__Prio1_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ1_4, (MR_Integer) 1)));
#line 246 "psqueue.m"
        MR_Word mercury__psqueue__L1_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ1_4, (MR_Integer) 2)));
#line 246 "psqueue.m"
        MR_Box mercury__psqueue__MaxKey1_10 = (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ1_4, (MR_Integer) 3));

#line 250 "psqueue.m"
        if ((mercury__psqueue__PSQ2_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 249 "psqueue.m"
          mercury__psqueue__Res_6 = mercury__psqueue__PSQ1_4;
#line 250 "psqueue.m"
        else
#line 251 "psqueue.m"
          {
#line 251 "psqueue.m"
            MR_Box mercury__psqueue__K2_11 = (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ2_5, (MR_Integer) 0));
#line 251 "psqueue.m"
            MR_Integer mercury__psqueue__Prio2_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ2_5, (MR_Integer) 1)));
#line 251 "psqueue.m"
            MR_Word mercury__psqueue__L2_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ2_5, (MR_Integer) 2)));
#line 251 "psqueue.m"
            MR_Box mercury__psqueue__MaxKey2_14 = (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ2_5, (MR_Integer) 3));

#line 252 "psqueue.m"
            {
#line 252 "psqueue.m"
              mercury__psqueue__succeeded = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_101_113_95_95_91_86_32_61_32_105_110_116_93_95_48_95_49_2_p_0(mercury__psqueue__Prio1_8, mercury__psqueue__Prio2_12);
            }
#line 256 "psqueue.m"
            if (mercury__psqueue__succeeded)
#line 254 "psqueue.m"
              {
#line 254 "psqueue.m"
                MR_Word mercury__psqueue__V_15_15;

#line 255 "psqueue.m"
                {
#line 255 "psqueue.m"
                  mercury__psqueue__V_15_15 = mercury__psqueue__balance_5_f_0(mercury__psqueue__TypeInfo_for_K_18, mercury__psqueue__TypeInfo_for_P_17, mercury__psqueue__K2_11, ((MR_Box) (mercury__psqueue__Prio2_12)), mercury__psqueue__L1_9, mercury__psqueue__MaxKey1_10, mercury__psqueue__L2_13);
                }
#line 254 "psqueue.m"
                {
#line 254 "psqueue.m"
                  mercury__psqueue__Res_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 254 "psqueue.m"
                  MR_hl_field(MR_mktag(1), mercury__psqueue__Res_6, 0) = mercury__psqueue__K1_7;
#line 254 "psqueue.m"
                  MR_hl_field(MR_mktag(1), mercury__psqueue__Res_6, 1) = ((MR_Box) (mercury__psqueue__Prio1_8));
#line 254 "psqueue.m"
                  MR_hl_field(MR_mktag(1), mercury__psqueue__Res_6, 2) = ((MR_Box) (mercury__psqueue__V_15_15));
#line 254 "psqueue.m"
                  MR_hl_field(MR_mktag(1), mercury__psqueue__Res_6, 3) = mercury__psqueue__MaxKey2_14;
#line 254 "psqueue.m"
                }
#line 254 "psqueue.m"
              }
#line 256 "psqueue.m"
            else
#line 258 "psqueue.m"
              {
#line 258 "psqueue.m"
                MR_Word mercury__psqueue__V_16_16;

#line 259 "psqueue.m"
                {
#line 259 "psqueue.m"
                  mercury__psqueue__V_16_16 = mercury__psqueue__balance_5_f_0(mercury__psqueue__TypeInfo_for_K_18, mercury__psqueue__TypeInfo_for_P_17, mercury__psqueue__K1_7, ((MR_Box) (mercury__psqueue__Prio1_8)), mercury__psqueue__L1_9, mercury__psqueue__MaxKey1_10, mercury__psqueue__L2_13);
                }
#line 258 "psqueue.m"
                {
#line 258 "psqueue.m"
                  mercury__psqueue__Res_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 258 "psqueue.m"
                  MR_hl_field(MR_mktag(1), mercury__psqueue__Res_6, 0) = mercury__psqueue__K2_11;
#line 258 "psqueue.m"
                  MR_hl_field(MR_mktag(1), mercury__psqueue__Res_6, 1) = ((MR_Box) (mercury__psqueue__Prio2_12));
#line 258 "psqueue.m"
                  MR_hl_field(MR_mktag(1), mercury__psqueue__Res_6, 2) = ((MR_Box) (mercury__psqueue__V_16_16));
#line 258 "psqueue.m"
                  MR_hl_field(MR_mktag(1), mercury__psqueue__Res_6, 3) = mercury__psqueue__MaxKey2_14;
#line 258 "psqueue.m"
                }
#line 258 "psqueue.m"
              }
#line 251 "psqueue.m"
          }
#line 246 "psqueue.m"
      }
#line 245 "psqueue.m"
    return mercury__psqueue__Res_6;
#line 245 "psqueue.m"
  }
#line 238 "psqueue.m"
}

#line 440 "psqueue.m"
MR_bool MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_101_113_95_95_91_86_32_61_32_105_110_116_93_95_48_95_49_2_p_0(
#line 440 "psqueue.m"
  MR_Integer mercury__psqueue__ValLeft_3,
#line 440 "psqueue.m"
  MR_Integer mercury__psqueue__ValRight_4)
#line 440 "psqueue.m"
{
#line 443 "psqueue.m"
  {
#line 443 "psqueue.m"
    MR_bool mercury__psqueue__succeeded = (mercury__psqueue__ValLeft_3 < mercury__psqueue__ValRight_4);
#line 443 "psqueue.m"
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
#line 446 "psqueue.m"
    if ((mercury__psqueue__CMP_5 == (MR_Integer) 1))
#line 445 "psqueue.m"
      mercury__psqueue__succeeded = MR_TRUE;
#line 446 "psqueue.m"
    else
#line 446 "psqueue.m"
      if ((mercury__psqueue__CMP_5 == (MR_Integer) 0))
#line 446 "psqueue.m"
        mercury__psqueue__succeeded = MR_TRUE;
#line 446 "psqueue.m"
      else
#line 446 "psqueue.m"
        mercury__psqueue__succeeded = MR_FALSE;
#line 443 "psqueue.m"
    return mercury__psqueue__succeeded;
#line 443 "psqueue.m"
  }
#line 440 "psqueue.m"
}

#line 582 "psqueue.m"
void MR_CALL 
mercury__psqueue____Compare____t_tree_view_2_0(
#line 582 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_30,
#line 582 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_31,
#line 582 "psqueue.m"
  MR_Word * mercury__psqueue__HeadVar__1_1,
#line 582 "psqueue.m"
  MR_Word mercury__psqueue__HeadVar__2_2,
#line 582 "psqueue.m"
  MR_Word mercury__psqueue__HeadVar__3_3)
#line 582 "psqueue.m"
{
#line 582 "psqueue.m"
  {
#line 582 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 582 "psqueue.m"
    MR_Integer mercury__psqueue__CastX_28 = (MR_Integer) mercury__psqueue__HeadVar__2_2;
#line 582 "psqueue.m"
    MR_Integer mercury__psqueue__CastY_29 = (MR_Integer) mercury__psqueue__HeadVar__3_3;

#line 582 "psqueue.m"
    mercury__psqueue__succeeded = (mercury__psqueue__CastX_28 == mercury__psqueue__CastY_29);
#line 582 "psqueue.m"
    if (mercury__psqueue__succeeded)
#line 3434 "psqueue.c"
      *mercury__psqueue__HeadVar__1_1 = (MR_Integer) 0;
#line 582 "psqueue.m"
    else
#line 582 "psqueue.m"
      if ((mercury__psqueue__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 582 "psqueue.m"
        if ((mercury__psqueue__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 582 "psqueue.m"
          *mercury__psqueue__HeadVar__1_1 = (MR_Integer) 0;
#line 582 "psqueue.m"
        else
#line 3446 "psqueue.c"
          *mercury__psqueue__HeadVar__1_1 = (MR_Integer) 1;
#line 582 "psqueue.m"
      else
#line 582 "psqueue.m"
        {
#line 582 "psqueue.m"
          MR_Word mercury__psqueue__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__2_2, (MR_Integer) 4)));
#line 582 "psqueue.m"
          MR_Box mercury__psqueue__V_37_37 = (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__2_2, (MR_Integer) 3));
#line 582 "psqueue.m"
          MR_Word mercury__psqueue__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__2_2, (MR_Integer) 2)));
#line 582 "psqueue.m"
          MR_Box mercury__psqueue__V_39_39 = (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__2_2, (MR_Integer) 1));
#line 582 "psqueue.m"
          MR_Box mercury__psqueue__V_40_40 = (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__2_2, (MR_Integer) 0));

#line 582 "psqueue.m"
          if ((mercury__psqueue__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3465 "psqueue.c"
            *mercury__psqueue__HeadVar__1_1 = (MR_Integer) 2;
#line 582 "psqueue.m"
          else
#line 582 "psqueue.m"
            {
#line 582 "psqueue.m"
              MR_Box mercury__psqueue__V_19_19 = (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__3_3, (MR_Integer) 0));
#line 582 "psqueue.m"
              MR_Box mercury__psqueue__V_20_20 = (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__3_3, (MR_Integer) 1));
#line 582 "psqueue.m"
              MR_Word mercury__psqueue__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__3_3, (MR_Integer) 2)));
#line 582 "psqueue.m"
              MR_Box mercury__psqueue__V_22_22 = (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__3_3, (MR_Integer) 3));
#line 582 "psqueue.m"
              MR_Word mercury__psqueue__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__3_3, (MR_Integer) 4)));
#line 582 "psqueue.m"
              MR_Word mercury__psqueue__V_24_24;

#line 582 "psqueue.m"
              {
#line 582 "psqueue.m"
                mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_30, &mercury__psqueue__V_24_24, mercury__psqueue__V_40_40, mercury__psqueue__V_19_19);
              }
#line 3489 "psqueue.c"
              mercury__psqueue__succeeded = (mercury__psqueue__V_24_24 == (MR_Integer) 0);
#line 582 "psqueue.m"
              mercury__psqueue__succeeded = !(mercury__psqueue__succeeded);
#line 582 "psqueue.m"
              if (mercury__psqueue__succeeded)
#line 582 "psqueue.m"
                *mercury__psqueue__HeadVar__1_1 = mercury__psqueue__V_24_24;
#line 582 "psqueue.m"
              else
#line 582 "psqueue.m"
                {
#line 582 "psqueue.m"
                  MR_Word mercury__psqueue__V_25_25;

#line 582 "psqueue.m"
                  {
#line 582 "psqueue.m"
                    mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_P_31, &mercury__psqueue__V_25_25, mercury__psqueue__V_39_39, mercury__psqueue__V_20_20);
                  }
#line 3509 "psqueue.c"
                  mercury__psqueue__succeeded = (mercury__psqueue__V_25_25 == (MR_Integer) 0);
#line 582 "psqueue.m"
                  mercury__psqueue__succeeded = !(mercury__psqueue__succeeded);
#line 582 "psqueue.m"
                  if (mercury__psqueue__succeeded)
#line 582 "psqueue.m"
                    *mercury__psqueue__HeadVar__1_1 = mercury__psqueue__V_25_25;
#line 582 "psqueue.m"
                  else
#line 582 "psqueue.m"
                    {
#line 582 "psqueue.m"
                      MR_Word mercury__psqueue__V_26_26;

#line 582 "psqueue.m"
                      {
#line 582 "psqueue.m"
                        mercury__psqueue____Compare____ltree_2_0(mercury__psqueue__TypeInfo_for_K_30, mercury__psqueue__TypeInfo_for_P_31, &mercury__psqueue__V_26_26, mercury__psqueue__V_38_38, mercury__psqueue__V_21_21);
                      }
#line 3529 "psqueue.c"
                      mercury__psqueue__succeeded = (mercury__psqueue__V_26_26 == (MR_Integer) 0);
#line 582 "psqueue.m"
                      mercury__psqueue__succeeded = !(mercury__psqueue__succeeded);
#line 582 "psqueue.m"
                      if (mercury__psqueue__succeeded)
#line 582 "psqueue.m"
                        *mercury__psqueue__HeadVar__1_1 = mercury__psqueue__V_26_26;
#line 582 "psqueue.m"
                      else
#line 582 "psqueue.m"
                        {
#line 582 "psqueue.m"
                          MR_Word mercury__psqueue__V_27_27;

#line 582 "psqueue.m"
                          {
#line 582 "psqueue.m"
                            mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_30, &mercury__psqueue__V_27_27, mercury__psqueue__V_37_37, mercury__psqueue__V_22_22);
                          }
#line 3549 "psqueue.c"
                          mercury__psqueue__succeeded = (mercury__psqueue__V_27_27 == (MR_Integer) 0);
#line 582 "psqueue.m"
                          mercury__psqueue__succeeded = !(mercury__psqueue__succeeded);
#line 582 "psqueue.m"
                          if (mercury__psqueue__succeeded)
#line 582 "psqueue.m"
                            *mercury__psqueue__HeadVar__1_1 = mercury__psqueue__V_27_27;
#line 582 "psqueue.m"
                          else
#line 582 "psqueue.m"
                            {
#line 582 "psqueue.m"
                              mercury__psqueue____Compare____ltree_2_0(mercury__psqueue__TypeInfo_for_K_30, mercury__psqueue__TypeInfo_for_P_31, mercury__psqueue__HeadVar__1_1, mercury__psqueue__V_36_36, mercury__psqueue__V_23_23);
#line 582 "psqueue.m"
                              return;
                            }
#line 582 "psqueue.m"
                        }
#line 582 "psqueue.m"
                    }
#line 582 "psqueue.m"
                }
#line 582 "psqueue.m"
            }
#line 582 "psqueue.m"
        }
#line 582 "psqueue.m"
  }
#line 582 "psqueue.m"
}

#line 582 "psqueue.m"
MR_bool MR_CALL 
mercury__psqueue____Unify____t_tree_view_2_0(
#line 582 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_17,
#line 582 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_18,
#line 582 "psqueue.m"
  MR_Word mercury__psqueue__HeadVar__1_1,
#line 582 "psqueue.m"
  MR_Word mercury__psqueue__HeadVar__2_2)
#line 582 "psqueue.m"
{
#line 582 "psqueue.m"
  {
#line 582 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 582 "psqueue.m"
    MR_Integer mercury__psqueue__CastX_15 = (MR_Integer) mercury__psqueue__HeadVar__1_1;
#line 582 "psqueue.m"
    MR_Integer mercury__psqueue__CastY_16 = (MR_Integer) mercury__psqueue__HeadVar__2_2;

#line 582 "psqueue.m"
    mercury__psqueue__succeeded = (mercury__psqueue__CastX_15 == mercury__psqueue__CastY_16);
#line 582 "psqueue.m"
    if (mercury__psqueue__succeeded)
#line 582 "psqueue.m"
      mercury__psqueue__succeeded = MR_TRUE;
#line 582 "psqueue.m"
    else
#line 582 "psqueue.m"
      if ((mercury__psqueue__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 582 "psqueue.m"
        {
#line 582 "psqueue.m"
          MR_Integer mercury__psqueue__CastX_3 = (MR_Integer) mercury__psqueue__HeadVar__1_1;
#line 582 "psqueue.m"
          MR_Integer mercury__psqueue__CastY_4 = (MR_Integer) mercury__psqueue__HeadVar__2_2;

#line 582 "psqueue.m"
          mercury__psqueue__succeeded = (mercury__psqueue__CastY_4 == mercury__psqueue__CastX_3);
#line 582 "psqueue.m"
        }
#line 582 "psqueue.m"
      else
#line 582 "psqueue.m"
        {
#line 582 "psqueue.m"
          MR_Box mercury__psqueue__V_5_5 = (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__1_1, (MR_Integer) 0));
#line 582 "psqueue.m"
          MR_Box mercury__psqueue__V_6_6 = (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__1_1, (MR_Integer) 1));
#line 582 "psqueue.m"
          MR_Word mercury__psqueue__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__1_1, (MR_Integer) 2)));
#line 582 "psqueue.m"
          MR_Box mercury__psqueue__V_8_8 = (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__1_1, (MR_Integer) 3));
#line 582 "psqueue.m"
          MR_Word mercury__psqueue__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__1_1, (MR_Integer) 4)));
#line 582 "psqueue.m"
          MR_Box mercury__psqueue__V_10_10;
#line 582 "psqueue.m"
          MR_Box mercury__psqueue__V_11_11;
#line 582 "psqueue.m"
          MR_Word mercury__psqueue__V_12_12;
#line 582 "psqueue.m"
          MR_Box mercury__psqueue__V_13_13;
#line 582 "psqueue.m"
          MR_Word mercury__psqueue__V_14_14;

#line 582 "psqueue.m"
          mercury__psqueue__succeeded = ((MR_tag((MR_Word) mercury__psqueue__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 582 "psqueue.m"
          if (mercury__psqueue__succeeded)
#line 582 "psqueue.m"
            {
#line 582 "psqueue.m"
              mercury__psqueue__V_10_10 = (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__2_2, (MR_Integer) 0));
#line 582 "psqueue.m"
              mercury__psqueue__V_11_11 = (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__2_2, (MR_Integer) 1));
#line 582 "psqueue.m"
              mercury__psqueue__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__2_2, (MR_Integer) 2)));
#line 582 "psqueue.m"
              mercury__psqueue__V_13_13 = (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__2_2, (MR_Integer) 3));
#line 582 "psqueue.m"
              mercury__psqueue__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__2_2, (MR_Integer) 4)));
#line 3665 "psqueue.c"
              {
#line 3667 "psqueue.c"
                mercury__psqueue__succeeded = mercury__builtin__unify_2_p_0(mercury__psqueue__TypeInfo_for_K_17, mercury__psqueue__V_5_5, mercury__psqueue__V_10_10);
              }
#line 582 "psqueue.m"
              if (mercury__psqueue__succeeded)
#line 582 "psqueue.m"
                {
#line 3674 "psqueue.c"
                  {
#line 3676 "psqueue.c"
                    mercury__psqueue__succeeded = mercury__builtin__unify_2_p_0(mercury__psqueue__TypeInfo_for_P_18, mercury__psqueue__V_6_6, mercury__psqueue__V_11_11);
                  }
#line 582 "psqueue.m"
                  if (mercury__psqueue__succeeded)
#line 582 "psqueue.m"
                    {
#line 3683 "psqueue.c"
                      {
#line 3685 "psqueue.c"
                        mercury__psqueue__succeeded = mercury__psqueue____Unify____ltree_2_0(mercury__psqueue__TypeInfo_for_K_17, mercury__psqueue__TypeInfo_for_P_18, mercury__psqueue__V_7_7, mercury__psqueue__V_12_12);
                      }
#line 582 "psqueue.m"
                      if (mercury__psqueue__succeeded)
#line 582 "psqueue.m"
                        {
#line 3692 "psqueue.c"
                          {
#line 3694 "psqueue.c"
                            mercury__psqueue__succeeded = mercury__builtin__unify_2_p_0(mercury__psqueue__TypeInfo_for_K_17, mercury__psqueue__V_8_8, mercury__psqueue__V_13_13);
                          }
#line 582 "psqueue.m"
                          if (mercury__psqueue__succeeded)
#line 3699 "psqueue.c"
                            {
#line 3701 "psqueue.c"
                              return mercury__psqueue__succeeded = mercury__psqueue____Unify____ltree_2_0(mercury__psqueue__TypeInfo_for_K_17, mercury__psqueue__TypeInfo_for_P_18, mercury__psqueue__V_9_9, mercury__psqueue__V_14_14);
                            }
#line 582 "psqueue.m"
                        }
#line 582 "psqueue.m"
                    }
#line 582 "psqueue.m"
                }
#line 582 "psqueue.m"
            }
#line 582 "psqueue.m"
        }
#line 582 "psqueue.m"
    return mercury__psqueue__succeeded;
#line 582 "psqueue.m"
  }
#line 582 "psqueue.m"
}

#line 577 "psqueue.m"
void MR_CALL 
mercury__psqueue____Compare____t_tournament_view_2_0(
#line 577 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_32,
#line 577 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_33,
#line 577 "psqueue.m"
  MR_Word * mercury__psqueue__HeadVar__1_1,
#line 577 "psqueue.m"
  MR_Word mercury__psqueue__HeadVar__2_2,
#line 577 "psqueue.m"
  MR_Word mercury__psqueue__HeadVar__3_3)
#line 577 "psqueue.m"
{
#line 577 "psqueue.m"
  {
#line 577 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 577 "psqueue.m"
    MR_Integer mercury__psqueue__CastX_30 = (MR_Integer) mercury__psqueue__HeadVar__2_2;
#line 577 "psqueue.m"
    MR_Integer mercury__psqueue__CastY_31 = (MR_Integer) mercury__psqueue__HeadVar__3_3;

#line 577 "psqueue.m"
    mercury__psqueue__succeeded = (mercury__psqueue__CastX_30 == mercury__psqueue__CastY_31);
#line 577 "psqueue.m"
    if (mercury__psqueue__succeeded)
#line 3749 "psqueue.c"
      *mercury__psqueue__HeadVar__1_1 = (MR_Integer) 0;
#line 577 "psqueue.m"
    else
#line 577 "psqueue.m"
      if ((mercury__psqueue__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 577 "psqueue.m"
        if ((mercury__psqueue__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 577 "psqueue.m"
          *mercury__psqueue__HeadVar__1_1 = (MR_Integer) 0;
#line 577 "psqueue.m"
        else
#line 577 "psqueue.m"
          if (((MR_tag((MR_Word) mercury__psqueue__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3763 "psqueue.c"
            *mercury__psqueue__HeadVar__1_1 = (MR_Integer) 1;
#line 577 "psqueue.m"
          else
#line 3767 "psqueue.c"
            *mercury__psqueue__HeadVar__1_1 = (MR_Integer) 1;
#line 577 "psqueue.m"
      else
#line 577 "psqueue.m"
        if (((MR_tag((MR_Word) mercury__psqueue__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 577 "psqueue.m"
          {
#line 577 "psqueue.m"
            MR_Box mercury__psqueue__V_38_38 = (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__2_2, (MR_Integer) 1));
#line 577 "psqueue.m"
            MR_Box mercury__psqueue__V_39_39 = (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__2_2, (MR_Integer) 0));

#line 577 "psqueue.m"
            if ((mercury__psqueue__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3782 "psqueue.c"
              *mercury__psqueue__HeadVar__1_1 = (MR_Integer) 2;
#line 577 "psqueue.m"
            else
#line 577 "psqueue.m"
              if (((MR_tag((MR_Word) mercury__psqueue__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 577 "psqueue.m"
                {
#line 577 "psqueue.m"
                  MR_Box mercury__psqueue__V_12_12 = (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__3_3, (MR_Integer) 0));
#line 577 "psqueue.m"
                  MR_Box mercury__psqueue__V_13_13 = (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__3_3, (MR_Integer) 1));
#line 577 "psqueue.m"
                  MR_Word mercury__psqueue__V_14_14;

#line 577 "psqueue.m"
                  {
#line 577 "psqueue.m"
                    mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_32, &mercury__psqueue__V_14_14, mercury__psqueue__V_39_39, mercury__psqueue__V_12_12);
                  }
#line 3802 "psqueue.c"
                  mercury__psqueue__succeeded = (mercury__psqueue__V_14_14 == (MR_Integer) 0);
#line 577 "psqueue.m"
                  mercury__psqueue__succeeded = !(mercury__psqueue__succeeded);
#line 577 "psqueue.m"
                  if (mercury__psqueue__succeeded)
#line 577 "psqueue.m"
                    *mercury__psqueue__HeadVar__1_1 = mercury__psqueue__V_14_14;
#line 577 "psqueue.m"
                  else
#line 577 "psqueue.m"
                    {
#line 577 "psqueue.m"
                      mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_P_33, mercury__psqueue__HeadVar__1_1, mercury__psqueue__V_38_38, mercury__psqueue__V_13_13);
#line 577 "psqueue.m"
                      return;
                    }
#line 577 "psqueue.m"
                }
#line 577 "psqueue.m"
              else
#line 3823 "psqueue.c"
                *mercury__psqueue__HeadVar__1_1 = (MR_Integer) 1;
#line 577 "psqueue.m"
          }
#line 577 "psqueue.m"
        else
#line 577 "psqueue.m"
          {
#line 577 "psqueue.m"
            MR_Word mercury__psqueue__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__psqueue__HeadVar__2_2, (MR_Integer) 1)));
#line 577 "psqueue.m"
            MR_Word mercury__psqueue__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__psqueue__HeadVar__2_2, (MR_Integer) 0)));

#line 577 "psqueue.m"
            if ((mercury__psqueue__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3838 "psqueue.c"
              *mercury__psqueue__HeadVar__1_1 = (MR_Integer) 2;
#line 577 "psqueue.m"
            else
#line 577 "psqueue.m"
              if (((MR_tag((MR_Word) mercury__psqueue__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3844 "psqueue.c"
                *mercury__psqueue__HeadVar__1_1 = (MR_Integer) 2;
#line 577 "psqueue.m"
              else
#line 577 "psqueue.m"
                {
#line 577 "psqueue.m"
                  MR_Word mercury__psqueue__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__psqueue__HeadVar__3_3, (MR_Integer) 0)));
#line 577 "psqueue.m"
                  MR_Word mercury__psqueue__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__psqueue__HeadVar__3_3, (MR_Integer) 1)));
#line 577 "psqueue.m"
                  MR_Word mercury__psqueue__V_29_29;

#line 577 "psqueue.m"
                  {
#line 577 "psqueue.m"
                    mercury__psqueue____Compare____psqueue_2_0(mercury__psqueue__TypeInfo_for_P_33, mercury__psqueue__TypeInfo_for_K_32, &mercury__psqueue__V_29_29, mercury__psqueue__V_41_41, mercury__psqueue__V_27_27);
                  }
#line 3862 "psqueue.c"
                  mercury__psqueue__succeeded = (mercury__psqueue__V_29_29 == (MR_Integer) 0);
#line 577 "psqueue.m"
                  mercury__psqueue__succeeded = !(mercury__psqueue__succeeded);
#line 577 "psqueue.m"
                  if (mercury__psqueue__succeeded)
#line 577 "psqueue.m"
                    *mercury__psqueue__HeadVar__1_1 = mercury__psqueue__V_29_29;
#line 577 "psqueue.m"
                  else
#line 577 "psqueue.m"
                    {
#line 577 "psqueue.m"
                      mercury__psqueue____Compare____psqueue_2_0(mercury__psqueue__TypeInfo_for_P_33, mercury__psqueue__TypeInfo_for_K_32, mercury__psqueue__HeadVar__1_1, mercury__psqueue__V_40_40, mercury__psqueue__V_28_28);
#line 577 "psqueue.m"
                      return;
                    }
#line 577 "psqueue.m"
                }
#line 577 "psqueue.m"
          }
#line 577 "psqueue.m"
  }
#line 577 "psqueue.m"
}

#line 577 "psqueue.m"
MR_bool MR_CALL 
mercury__psqueue____Unify____t_tournament_view_2_0(
#line 577 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_15,
#line 577 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_16,
#line 577 "psqueue.m"
  MR_Word mercury__psqueue__HeadVar__1_1,
#line 577 "psqueue.m"
  MR_Word mercury__psqueue__HeadVar__2_2)
#line 577 "psqueue.m"
{
#line 577 "psqueue.m"
  {
#line 577 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 577 "psqueue.m"
    MR_Integer mercury__psqueue__CastX_13 = (MR_Integer) mercury__psqueue__HeadVar__1_1;
#line 577 "psqueue.m"
    MR_Integer mercury__psqueue__CastY_14 = (MR_Integer) mercury__psqueue__HeadVar__2_2;

#line 577 "psqueue.m"
    mercury__psqueue__succeeded = (mercury__psqueue__CastX_13 == mercury__psqueue__CastY_14);
#line 577 "psqueue.m"
    if (mercury__psqueue__succeeded)
#line 577 "psqueue.m"
      mercury__psqueue__succeeded = MR_TRUE;
#line 577 "psqueue.m"
    else
#line 577 "psqueue.m"
      if ((mercury__psqueue__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 577 "psqueue.m"
        {
#line 577 "psqueue.m"
          MR_Integer mercury__psqueue__CastX_3 = (MR_Integer) mercury__psqueue__HeadVar__1_1;
#line 577 "psqueue.m"
          MR_Integer mercury__psqueue__CastY_4 = (MR_Integer) mercury__psqueue__HeadVar__2_2;

#line 577 "psqueue.m"
          mercury__psqueue__succeeded = (mercury__psqueue__CastY_4 == mercury__psqueue__CastX_3);
#line 577 "psqueue.m"
        }
#line 577 "psqueue.m"
      else
#line 577 "psqueue.m"
        if (((MR_tag((MR_Word) mercury__psqueue__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 577 "psqueue.m"
          {
#line 577 "psqueue.m"
            MR_Box mercury__psqueue__V_5_5 = (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__1_1, (MR_Integer) 0));
#line 577 "psqueue.m"
            MR_Box mercury__psqueue__V_6_6 = (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__1_1, (MR_Integer) 1));
#line 577 "psqueue.m"
            MR_Box mercury__psqueue__V_7_7;
#line 577 "psqueue.m"
            MR_Box mercury__psqueue__V_8_8;

#line 577 "psqueue.m"
            mercury__psqueue__succeeded = ((MR_tag((MR_Word) mercury__psqueue__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 577 "psqueue.m"
            if (mercury__psqueue__succeeded)
#line 577 "psqueue.m"
              {
#line 577 "psqueue.m"
                mercury__psqueue__V_7_7 = (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__2_2, (MR_Integer) 0));
#line 577 "psqueue.m"
                mercury__psqueue__V_8_8 = (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__2_2, (MR_Integer) 1));
#line 3956 "psqueue.c"
                {
#line 3958 "psqueue.c"
                  mercury__psqueue__succeeded = mercury__builtin__unify_2_p_0(mercury__psqueue__TypeInfo_for_K_15, mercury__psqueue__V_5_5, mercury__psqueue__V_7_7);
                }
#line 577 "psqueue.m"
                if (mercury__psqueue__succeeded)
#line 3963 "psqueue.c"
                  {
#line 3965 "psqueue.c"
                    return mercury__psqueue__succeeded = mercury__builtin__unify_2_p_0(mercury__psqueue__TypeInfo_for_P_16, mercury__psqueue__V_6_6, mercury__psqueue__V_8_8);
                  }
#line 577 "psqueue.m"
              }
#line 577 "psqueue.m"
          }
#line 577 "psqueue.m"
        else
#line 577 "psqueue.m"
          {
#line 577 "psqueue.m"
            MR_Word mercury__psqueue__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__psqueue__HeadVar__1_1, (MR_Integer) 0)));
#line 577 "psqueue.m"
            MR_Word mercury__psqueue__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__psqueue__HeadVar__1_1, (MR_Integer) 1)));
#line 577 "psqueue.m"
            MR_Word mercury__psqueue__V_11_11;
#line 577 "psqueue.m"
            MR_Word mercury__psqueue__V_12_12;

#line 577 "psqueue.m"
            mercury__psqueue__succeeded = ((MR_tag((MR_Word) mercury__psqueue__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 577 "psqueue.m"
            if (mercury__psqueue__succeeded)
#line 577 "psqueue.m"
              {
#line 577 "psqueue.m"
                mercury__psqueue__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__psqueue__HeadVar__2_2, (MR_Integer) 0)));
#line 577 "psqueue.m"
                mercury__psqueue__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__psqueue__HeadVar__2_2, (MR_Integer) 1)));
#line 3995 "psqueue.c"
                {
#line 3997 "psqueue.c"
                  mercury__psqueue__succeeded = mercury__psqueue____Unify____psqueue_2_0(mercury__psqueue__TypeInfo_for_P_16, mercury__psqueue__TypeInfo_for_K_15, mercury__psqueue__V_9_9, mercury__psqueue__V_11_11);
                }
#line 577 "psqueue.m"
                if (mercury__psqueue__succeeded)
#line 4002 "psqueue.c"
                  {
#line 4004 "psqueue.c"
                    return mercury__psqueue__succeeded = mercury__psqueue____Unify____psqueue_2_0(mercury__psqueue__TypeInfo_for_P_16, mercury__psqueue__TypeInfo_for_K_15, mercury__psqueue__V_10_10, mercury__psqueue__V_12_12);
                  }
#line 577 "psqueue.m"
              }
#line 577 "psqueue.m"
          }
#line 577 "psqueue.m"
    return mercury__psqueue__succeeded;
#line 577 "psqueue.m"
  }
#line 577 "psqueue.m"
}

#line 573 "psqueue.m"
void MR_CALL 
mercury__psqueue____Compare____t_min_view_2_0(
#line 573 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_20,
#line 573 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_21,
#line 573 "psqueue.m"
  MR_Word * mercury__psqueue__HeadVar__1_1,
#line 573 "psqueue.m"
  MR_Word mercury__psqueue__HeadVar__2_2,
#line 573 "psqueue.m"
  MR_Word mercury__psqueue__HeadVar__3_3)
#line 573 "psqueue.m"
{
#line 573 "psqueue.m"
  {
#line 573 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 573 "psqueue.m"
    MR_Integer mercury__psqueue__CastX_18 = (MR_Integer) mercury__psqueue__HeadVar__2_2;
#line 573 "psqueue.m"
    MR_Integer mercury__psqueue__CastY_19 = (MR_Integer) mercury__psqueue__HeadVar__3_3;

#line 573 "psqueue.m"
    mercury__psqueue__succeeded = (mercury__psqueue__CastX_18 == mercury__psqueue__CastY_19);
#line 573 "psqueue.m"
    if (mercury__psqueue__succeeded)
#line 4046 "psqueue.c"
      *mercury__psqueue__HeadVar__1_1 = (MR_Integer) 0;
#line 573 "psqueue.m"
    else
#line 573 "psqueue.m"
      if ((mercury__psqueue__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 573 "psqueue.m"
        if ((mercury__psqueue__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 573 "psqueue.m"
          *mercury__psqueue__HeadVar__1_1 = (MR_Integer) 0;
#line 573 "psqueue.m"
        else
#line 4058 "psqueue.c"
          *mercury__psqueue__HeadVar__1_1 = (MR_Integer) 1;
#line 573 "psqueue.m"
      else
#line 573 "psqueue.m"
        {
#line 573 "psqueue.m"
          MR_Word mercury__psqueue__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__2_2, (MR_Integer) 2)));
#line 573 "psqueue.m"
          MR_Box mercury__psqueue__V_25_25 = (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__2_2, (MR_Integer) 1));
#line 573 "psqueue.m"
          MR_Box mercury__psqueue__V_26_26 = (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__2_2, (MR_Integer) 0));

#line 573 "psqueue.m"
          if ((mercury__psqueue__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4073 "psqueue.c"
            *mercury__psqueue__HeadVar__1_1 = (MR_Integer) 2;
#line 573 "psqueue.m"
          else
#line 573 "psqueue.m"
            {
#line 573 "psqueue.m"
              MR_Box mercury__psqueue__V_13_13 = (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__3_3, (MR_Integer) 0));
#line 573 "psqueue.m"
              MR_Box mercury__psqueue__V_14_14 = (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__3_3, (MR_Integer) 1));
#line 573 "psqueue.m"
              MR_Word mercury__psqueue__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__3_3, (MR_Integer) 2)));
#line 573 "psqueue.m"
              MR_Word mercury__psqueue__V_16_16;

#line 573 "psqueue.m"
              {
#line 573 "psqueue.m"
                mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_20, &mercury__psqueue__V_16_16, mercury__psqueue__V_26_26, mercury__psqueue__V_13_13);
              }
#line 4093 "psqueue.c"
              mercury__psqueue__succeeded = (mercury__psqueue__V_16_16 == (MR_Integer) 0);
#line 573 "psqueue.m"
              mercury__psqueue__succeeded = !(mercury__psqueue__succeeded);
#line 573 "psqueue.m"
              if (mercury__psqueue__succeeded)
#line 573 "psqueue.m"
                *mercury__psqueue__HeadVar__1_1 = mercury__psqueue__V_16_16;
#line 573 "psqueue.m"
              else
#line 573 "psqueue.m"
                {
#line 573 "psqueue.m"
                  MR_Word mercury__psqueue__V_17_17;

#line 573 "psqueue.m"
                  {
#line 573 "psqueue.m"
                    mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_P_21, &mercury__psqueue__V_17_17, mercury__psqueue__V_25_25, mercury__psqueue__V_14_14);
                  }
#line 4113 "psqueue.c"
                  mercury__psqueue__succeeded = (mercury__psqueue__V_17_17 == (MR_Integer) 0);
#line 573 "psqueue.m"
                  mercury__psqueue__succeeded = !(mercury__psqueue__succeeded);
#line 573 "psqueue.m"
                  if (mercury__psqueue__succeeded)
#line 573 "psqueue.m"
                    *mercury__psqueue__HeadVar__1_1 = mercury__psqueue__V_17_17;
#line 573 "psqueue.m"
                  else
#line 573 "psqueue.m"
                    {
#line 573 "psqueue.m"
                      mercury__psqueue____Compare____psqueue_2_0(mercury__psqueue__TypeInfo_for_P_21, mercury__psqueue__TypeInfo_for_K_20, mercury__psqueue__HeadVar__1_1, mercury__psqueue__V_24_24, mercury__psqueue__V_15_15);
#line 573 "psqueue.m"
                      return;
                    }
#line 573 "psqueue.m"
                }
#line 573 "psqueue.m"
            }
#line 573 "psqueue.m"
        }
#line 573 "psqueue.m"
  }
#line 573 "psqueue.m"
}

#line 573 "psqueue.m"
MR_bool MR_CALL 
mercury__psqueue____Unify____t_min_view_2_0(
#line 573 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_13,
#line 573 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_14,
#line 573 "psqueue.m"
  MR_Word mercury__psqueue__HeadVar__1_1,
#line 573 "psqueue.m"
  MR_Word mercury__psqueue__HeadVar__2_2)
#line 573 "psqueue.m"
{
#line 573 "psqueue.m"
  {
#line 573 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 573 "psqueue.m"
    MR_Integer mercury__psqueue__CastX_11 = (MR_Integer) mercury__psqueue__HeadVar__1_1;
#line 573 "psqueue.m"
    MR_Integer mercury__psqueue__CastY_12 = (MR_Integer) mercury__psqueue__HeadVar__2_2;

#line 573 "psqueue.m"
    mercury__psqueue__succeeded = (mercury__psqueue__CastX_11 == mercury__psqueue__CastY_12);
#line 573 "psqueue.m"
    if (mercury__psqueue__succeeded)
#line 573 "psqueue.m"
      mercury__psqueue__succeeded = MR_TRUE;
#line 573 "psqueue.m"
    else
#line 573 "psqueue.m"
      if ((mercury__psqueue__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 573 "psqueue.m"
        {
#line 573 "psqueue.m"
          MR_Integer mercury__psqueue__CastX_3 = (MR_Integer) mercury__psqueue__HeadVar__1_1;
#line 573 "psqueue.m"
          MR_Integer mercury__psqueue__CastY_4 = (MR_Integer) mercury__psqueue__HeadVar__2_2;

#line 573 "psqueue.m"
          mercury__psqueue__succeeded = (mercury__psqueue__CastY_4 == mercury__psqueue__CastX_3);
#line 573 "psqueue.m"
        }
#line 573 "psqueue.m"
      else
#line 573 "psqueue.m"
        {
#line 573 "psqueue.m"
          MR_Box mercury__psqueue__V_5_5 = (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__1_1, (MR_Integer) 0));
#line 573 "psqueue.m"
          MR_Box mercury__psqueue__V_6_6 = (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__1_1, (MR_Integer) 1));
#line 573 "psqueue.m"
          MR_Word mercury__psqueue__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__1_1, (MR_Integer) 2)));
#line 573 "psqueue.m"
          MR_Box mercury__psqueue__V_8_8;
#line 573 "psqueue.m"
          MR_Box mercury__psqueue__V_9_9;
#line 573 "psqueue.m"
          MR_Word mercury__psqueue__V_10_10;

#line 573 "psqueue.m"
          mercury__psqueue__succeeded = ((MR_tag((MR_Word) mercury__psqueue__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 573 "psqueue.m"
          if (mercury__psqueue__succeeded)
#line 573 "psqueue.m"
            {
#line 573 "psqueue.m"
              mercury__psqueue__V_8_8 = (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__2_2, (MR_Integer) 0));
#line 573 "psqueue.m"
              mercury__psqueue__V_9_9 = (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__2_2, (MR_Integer) 1));
#line 573 "psqueue.m"
              mercury__psqueue__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__2_2, (MR_Integer) 2)));
#line 4213 "psqueue.c"
              {
#line 4215 "psqueue.c"
                mercury__psqueue__succeeded = mercury__builtin__unify_2_p_0(mercury__psqueue__TypeInfo_for_K_13, mercury__psqueue__V_5_5, mercury__psqueue__V_8_8);
              }
#line 573 "psqueue.m"
              if (mercury__psqueue__succeeded)
#line 573 "psqueue.m"
                {
#line 4222 "psqueue.c"
                  {
#line 4224 "psqueue.c"
                    mercury__psqueue__succeeded = mercury__builtin__unify_2_p_0(mercury__psqueue__TypeInfo_for_P_14, mercury__psqueue__V_6_6, mercury__psqueue__V_9_9);
                  }
#line 573 "psqueue.m"
                  if (mercury__psqueue__succeeded)
#line 4229 "psqueue.c"
                    {
#line 4231 "psqueue.c"
                      return mercury__psqueue__succeeded = mercury__psqueue____Unify____psqueue_2_0(mercury__psqueue__TypeInfo_for_P_14, mercury__psqueue__TypeInfo_for_K_13, mercury__psqueue__V_7_7, mercury__psqueue__V_10_10);
                    }
#line 573 "psqueue.m"
                }
#line 573 "psqueue.m"
            }
#line 573 "psqueue.m"
        }
#line 573 "psqueue.m"
    return mercury__psqueue__succeeded;
#line 573 "psqueue.m"
  }
#line 573 "psqueue.m"
}

#line 206 "psqueue.m"
void MR_CALL 
mercury__psqueue____Compare____t_ltree_size_0_0(
#line 206 "psqueue.m"
  MR_Word * mercury__psqueue__HeadVar__1_1,
#line 206 "psqueue.m"
  MR_Integer mercury__psqueue__HeadVar__2_2,
#line 206 "psqueue.m"
  MR_Integer mercury__psqueue__HeadVar__3_3)
#line 206 "psqueue.m"
{
#line 206 "psqueue.m"
  {
#line 206 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 206 "psqueue.m"
    MR_Integer mercury__psqueue__Cast_HeadVar1_4 = mercury__psqueue__HeadVar__2_2;
#line 206 "psqueue.m"
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
#line 206 "psqueue.m"
  }
#line 206 "psqueue.m"
}

#line 206 "psqueue.m"
MR_bool MR_CALL 
mercury__psqueue____Unify____t_ltree_size_0_0(
#line 206 "psqueue.m"
  MR_Integer mercury__psqueue__HeadVar__1_1,
#line 206 "psqueue.m"
  MR_Integer mercury__psqueue__HeadVar__2_2)
#line 206 "psqueue.m"
{
#line 206 "psqueue.m"
  {
#line 206 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 206 "psqueue.m"
    MR_Integer mercury__psqueue__Cast_HeadVar1_3 = mercury__psqueue__HeadVar__1_1;
#line 206 "psqueue.m"
    MR_Integer mercury__psqueue__Cast_HeadVar2_4 = mercury__psqueue__HeadVar__2_2;

#line 206 "psqueue.m"
    mercury__psqueue__succeeded = (mercury__psqueue__Cast_HeadVar1_3 == mercury__psqueue__Cast_HeadVar2_4);
#line 206 "psqueue.m"
    return mercury__psqueue__succeeded;
#line 206 "psqueue.m"
  }
#line 206 "psqueue.m"
}

#line 197 "psqueue.m"
void MR_CALL 
mercury__psqueue____Compare____psqueue_2_0(
#line 197 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_25,
#line 197 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_26,
#line 197 "psqueue.m"
  MR_Word * mercury__psqueue__HeadVar__1_1,
#line 197 "psqueue.m"
  MR_Word mercury__psqueue__HeadVar__2_2,
#line 197 "psqueue.m"
  MR_Word mercury__psqueue__HeadVar__3_3)
#line 197 "psqueue.m"
{
#line 197 "psqueue.m"
  {
#line 197 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 197 "psqueue.m"
    MR_Integer mercury__psqueue__CastX_23 = (MR_Integer) mercury__psqueue__HeadVar__2_2;
#line 197 "psqueue.m"
    MR_Integer mercury__psqueue__CastY_24 = (MR_Integer) mercury__psqueue__HeadVar__3_3;

#line 197 "psqueue.m"
    mercury__psqueue__succeeded = (mercury__psqueue__CastX_23 == mercury__psqueue__CastY_24);
#line 197 "psqueue.m"
    if (mercury__psqueue__succeeded)
#line 4349 "psqueue.c"
      *mercury__psqueue__HeadVar__1_1 = (MR_Integer) 0;
#line 197 "psqueue.m"
    else
#line 197 "psqueue.m"
      if ((mercury__psqueue__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 197 "psqueue.m"
        if ((mercury__psqueue__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 197 "psqueue.m"
          *mercury__psqueue__HeadVar__1_1 = (MR_Integer) 0;
#line 197 "psqueue.m"
        else
#line 4361 "psqueue.c"
          *mercury__psqueue__HeadVar__1_1 = (MR_Integer) 1;
#line 197 "psqueue.m"
      else
#line 197 "psqueue.m"
        {
#line 197 "psqueue.m"
          MR_Box mercury__psqueue__V_29_29 = (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__2_2, (MR_Integer) 3));
#line 197 "psqueue.m"
          MR_Word mercury__psqueue__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__2_2, (MR_Integer) 2)));
#line 197 "psqueue.m"
          MR_Box mercury__psqueue__V_31_31 = (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__2_2, (MR_Integer) 1));
#line 197 "psqueue.m"
          MR_Box mercury__psqueue__V_32_32 = (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__2_2, (MR_Integer) 0));

#line 197 "psqueue.m"
          if ((mercury__psqueue__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4378 "psqueue.c"
            *mercury__psqueue__HeadVar__1_1 = (MR_Integer) 2;
#line 197 "psqueue.m"
          else
#line 197 "psqueue.m"
            {
#line 197 "psqueue.m"
              MR_Box mercury__psqueue__V_16_16 = (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__3_3, (MR_Integer) 0));
#line 197 "psqueue.m"
              MR_Box mercury__psqueue__V_17_17 = (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__3_3, (MR_Integer) 1));
#line 197 "psqueue.m"
              MR_Word mercury__psqueue__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__3_3, (MR_Integer) 2)));
#line 197 "psqueue.m"
              MR_Box mercury__psqueue__V_19_19 = (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__3_3, (MR_Integer) 3));
#line 197 "psqueue.m"
              MR_Word mercury__psqueue__V_20_20;

#line 197 "psqueue.m"
              {
#line 197 "psqueue.m"
                mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_26, &mercury__psqueue__V_20_20, mercury__psqueue__V_32_32, mercury__psqueue__V_16_16);
              }
#line 4400 "psqueue.c"
              mercury__psqueue__succeeded = (mercury__psqueue__V_20_20 == (MR_Integer) 0);
#line 197 "psqueue.m"
              mercury__psqueue__succeeded = !(mercury__psqueue__succeeded);
#line 197 "psqueue.m"
              if (mercury__psqueue__succeeded)
#line 197 "psqueue.m"
                *mercury__psqueue__HeadVar__1_1 = mercury__psqueue__V_20_20;
#line 197 "psqueue.m"
              else
#line 197 "psqueue.m"
                {
#line 197 "psqueue.m"
                  MR_Word mercury__psqueue__V_21_21;

#line 197 "psqueue.m"
                  {
#line 197 "psqueue.m"
                    mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_P_25, &mercury__psqueue__V_21_21, mercury__psqueue__V_31_31, mercury__psqueue__V_17_17);
                  }
#line 4420 "psqueue.c"
                  mercury__psqueue__succeeded = (mercury__psqueue__V_21_21 == (MR_Integer) 0);
#line 197 "psqueue.m"
                  mercury__psqueue__succeeded = !(mercury__psqueue__succeeded);
#line 197 "psqueue.m"
                  if (mercury__psqueue__succeeded)
#line 197 "psqueue.m"
                    *mercury__psqueue__HeadVar__1_1 = mercury__psqueue__V_21_21;
#line 197 "psqueue.m"
                  else
#line 197 "psqueue.m"
                    {
#line 197 "psqueue.m"
                      MR_Word mercury__psqueue__V_22_22;

#line 197 "psqueue.m"
                      {
#line 197 "psqueue.m"
                        mercury__psqueue____Compare____ltree_2_0(mercury__psqueue__TypeInfo_for_K_26, mercury__psqueue__TypeInfo_for_P_25, &mercury__psqueue__V_22_22, mercury__psqueue__V_30_30, mercury__psqueue__V_18_18);
                      }
#line 4440 "psqueue.c"
                      mercury__psqueue__succeeded = (mercury__psqueue__V_22_22 == (MR_Integer) 0);
#line 197 "psqueue.m"
                      mercury__psqueue__succeeded = !(mercury__psqueue__succeeded);
#line 197 "psqueue.m"
                      if (mercury__psqueue__succeeded)
#line 197 "psqueue.m"
                        *mercury__psqueue__HeadVar__1_1 = mercury__psqueue__V_22_22;
#line 197 "psqueue.m"
                      else
#line 197 "psqueue.m"
                        {
#line 197 "psqueue.m"
                          mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_26, mercury__psqueue__HeadVar__1_1, mercury__psqueue__V_29_29, mercury__psqueue__V_19_19);
#line 197 "psqueue.m"
                          return;
                        }
#line 197 "psqueue.m"
                    }
#line 197 "psqueue.m"
                }
#line 197 "psqueue.m"
            }
#line 197 "psqueue.m"
        }
#line 197 "psqueue.m"
  }
#line 197 "psqueue.m"
}

#line 197 "psqueue.m"
MR_bool MR_CALL 
mercury__psqueue____Unify____psqueue_2_0(
#line 197 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_15,
#line 197 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_16,
#line 197 "psqueue.m"
  MR_Word mercury__psqueue__HeadVar__1_1,
#line 197 "psqueue.m"
  MR_Word mercury__psqueue__HeadVar__2_2)
#line 197 "psqueue.m"
{
#line 197 "psqueue.m"
  {
#line 197 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 197 "psqueue.m"
    MR_Integer mercury__psqueue__CastX_13 = (MR_Integer) mercury__psqueue__HeadVar__1_1;
#line 197 "psqueue.m"
    MR_Integer mercury__psqueue__CastY_14 = (MR_Integer) mercury__psqueue__HeadVar__2_2;

#line 197 "psqueue.m"
    mercury__psqueue__succeeded = (mercury__psqueue__CastX_13 == mercury__psqueue__CastY_14);
#line 197 "psqueue.m"
    if (mercury__psqueue__succeeded)
#line 197 "psqueue.m"
      mercury__psqueue__succeeded = MR_TRUE;
#line 197 "psqueue.m"
    else
#line 197 "psqueue.m"
      if ((mercury__psqueue__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 197 "psqueue.m"
        {
#line 197 "psqueue.m"
          MR_Integer mercury__psqueue__CastX_3 = (MR_Integer) mercury__psqueue__HeadVar__1_1;
#line 197 "psqueue.m"
          MR_Integer mercury__psqueue__CastY_4 = (MR_Integer) mercury__psqueue__HeadVar__2_2;

#line 197 "psqueue.m"
          mercury__psqueue__succeeded = (mercury__psqueue__CastY_4 == mercury__psqueue__CastX_3);
#line 197 "psqueue.m"
        }
#line 197 "psqueue.m"
      else
#line 197 "psqueue.m"
        {
#line 197 "psqueue.m"
          MR_Box mercury__psqueue__V_5_5 = (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__1_1, (MR_Integer) 0));
#line 197 "psqueue.m"
          MR_Box mercury__psqueue__V_6_6 = (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__1_1, (MR_Integer) 1));
#line 197 "psqueue.m"
          MR_Word mercury__psqueue__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__1_1, (MR_Integer) 2)));
#line 197 "psqueue.m"
          MR_Box mercury__psqueue__V_8_8 = (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__1_1, (MR_Integer) 3));
#line 197 "psqueue.m"
          MR_Box mercury__psqueue__V_9_9;
#line 197 "psqueue.m"
          MR_Box mercury__psqueue__V_10_10;
#line 197 "psqueue.m"
          MR_Word mercury__psqueue__V_11_11;
#line 197 "psqueue.m"
          MR_Box mercury__psqueue__V_12_12;

#line 197 "psqueue.m"
          mercury__psqueue__succeeded = ((MR_tag((MR_Word) mercury__psqueue__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 197 "psqueue.m"
          if (mercury__psqueue__succeeded)
#line 197 "psqueue.m"
            {
#line 197 "psqueue.m"
              mercury__psqueue__V_9_9 = (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__2_2, (MR_Integer) 0));
#line 197 "psqueue.m"
              mercury__psqueue__V_10_10 = (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__2_2, (MR_Integer) 1));
#line 197 "psqueue.m"
              mercury__psqueue__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__2_2, (MR_Integer) 2)));
#line 197 "psqueue.m"
              mercury__psqueue__V_12_12 = (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__2_2, (MR_Integer) 3));
#line 4548 "psqueue.c"
              {
#line 4550 "psqueue.c"
                mercury__psqueue__succeeded = mercury__builtin__unify_2_p_0(mercury__psqueue__TypeInfo_for_K_16, mercury__psqueue__V_5_5, mercury__psqueue__V_9_9);
              }
#line 197 "psqueue.m"
              if (mercury__psqueue__succeeded)
#line 197 "psqueue.m"
                {
#line 4557 "psqueue.c"
                  {
#line 4559 "psqueue.c"
                    mercury__psqueue__succeeded = mercury__builtin__unify_2_p_0(mercury__psqueue__TypeInfo_for_P_15, mercury__psqueue__V_6_6, mercury__psqueue__V_10_10);
                  }
#line 197 "psqueue.m"
                  if (mercury__psqueue__succeeded)
#line 197 "psqueue.m"
                    {
#line 4566 "psqueue.c"
                      {
#line 4568 "psqueue.c"
                        mercury__psqueue__succeeded = mercury__psqueue____Unify____ltree_2_0(mercury__psqueue__TypeInfo_for_K_16, mercury__psqueue__TypeInfo_for_P_15, mercury__psqueue__V_7_7, mercury__psqueue__V_11_11);
                      }
#line 197 "psqueue.m"
                      if (mercury__psqueue__succeeded)
#line 4573 "psqueue.c"
                        {
#line 4575 "psqueue.c"
                          return mercury__psqueue__succeeded = mercury__builtin__unify_2_p_0(mercury__psqueue__TypeInfo_for_K_16, mercury__psqueue__V_8_8, mercury__psqueue__V_12_12);
                        }
#line 197 "psqueue.m"
                    }
#line 197 "psqueue.m"
                }
#line 197 "psqueue.m"
            }
#line 197 "psqueue.m"
        }
#line 197 "psqueue.m"
    return mercury__psqueue__succeeded;
#line 197 "psqueue.m"
  }
#line 197 "psqueue.m"
}

#line 208 "psqueue.m"
void MR_CALL 
mercury__psqueue____Compare____ltree_2_0(
#line 208 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_35,
#line 208 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_36,
#line 208 "psqueue.m"
  MR_Word * mercury__psqueue__HeadVar__1_1,
#line 208 "psqueue.m"
  MR_Word mercury__psqueue__HeadVar__2_2,
#line 208 "psqueue.m"
  MR_Word mercury__psqueue__HeadVar__3_3)
#line 208 "psqueue.m"
{
#line 208 "psqueue.m"
  while (MR_TRUE)
#line 208 "psqueue.m"
    {
#line 208 "psqueue.m"
      /* tailcall optimized into a loop */
#line 208 "psqueue.m"
      {
#line 208 "psqueue.m"
        MR_bool mercury__psqueue__succeeded;
#line 208 "psqueue.m"
        MR_Integer mercury__psqueue__CastX_33 = (MR_Integer) mercury__psqueue__HeadVar__2_2;
#line 208 "psqueue.m"
        MR_Integer mercury__psqueue__CastY_34 = (MR_Integer) mercury__psqueue__HeadVar__3_3;

#line 208 "psqueue.m"
        mercury__psqueue__succeeded = (mercury__psqueue__CastX_33 == mercury__psqueue__CastY_34);
#line 208 "psqueue.m"
        if (mercury__psqueue__succeeded)
#line 4627 "psqueue.c"
          *mercury__psqueue__HeadVar__1_1 = (MR_Integer) 0;
#line 208 "psqueue.m"
        else
#line 208 "psqueue.m"
          if ((mercury__psqueue__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 208 "psqueue.m"
            if ((mercury__psqueue__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 208 "psqueue.m"
              *mercury__psqueue__HeadVar__1_1 = (MR_Integer) 0;
#line 208 "psqueue.m"
            else
#line 4639 "psqueue.c"
              *mercury__psqueue__HeadVar__1_1 = (MR_Integer) 1;
#line 208 "psqueue.m"
          else
#line 208 "psqueue.m"
            {
#line 208 "psqueue.m"
              MR_Word mercury__psqueue__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__2_2, (MR_Integer) 5)));
#line 208 "psqueue.m"
              MR_Box mercury__psqueue__V_43_43 = (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__2_2, (MR_Integer) 4));
#line 208 "psqueue.m"
              MR_Word mercury__psqueue__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__2_2, (MR_Integer) 3)));
#line 208 "psqueue.m"
              MR_Box mercury__psqueue__V_45_45 = (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__2_2, (MR_Integer) 2));
#line 208 "psqueue.m"
              MR_Box mercury__psqueue__V_46_46 = (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__2_2, (MR_Integer) 1));
#line 208 "psqueue.m"
              MR_Integer mercury__psqueue__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__2_2, (MR_Integer) 0)));

#line 208 "psqueue.m"
              if ((mercury__psqueue__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4660 "psqueue.c"
                *mercury__psqueue__HeadVar__1_1 = (MR_Integer) 2;
#line 208 "psqueue.m"
              else
#line 208 "psqueue.m"
                {
#line 208 "psqueue.m"
                  MR_Integer mercury__psqueue__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__3_3, (MR_Integer) 0)));
#line 208 "psqueue.m"
                  MR_Box mercury__psqueue__V_23_23 = (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__3_3, (MR_Integer) 1));
#line 208 "psqueue.m"
                  MR_Box mercury__psqueue__V_24_24 = (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__3_3, (MR_Integer) 2));
#line 208 "psqueue.m"
                  MR_Word mercury__psqueue__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__3_3, (MR_Integer) 3)));
#line 208 "psqueue.m"
                  MR_Box mercury__psqueue__V_26_26 = (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__3_3, (MR_Integer) 4));
#line 208 "psqueue.m"
                  MR_Word mercury__psqueue__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__3_3, (MR_Integer) 5)));
#line 208 "psqueue.m"
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
#line 4703 "psqueue.c"
                  mercury__psqueue__succeeded = (mercury__psqueue__V_28_28 == (MR_Integer) 0);
#line 208 "psqueue.m"
                  mercury__psqueue__succeeded = !(mercury__psqueue__succeeded);
#line 208 "psqueue.m"
                  if (mercury__psqueue__succeeded)
#line 208 "psqueue.m"
                    *mercury__psqueue__HeadVar__1_1 = mercury__psqueue__V_28_28;
#line 208 "psqueue.m"
                  else
#line 208 "psqueue.m"
                    {
#line 208 "psqueue.m"
                      MR_Word mercury__psqueue__V_29_29;

#line 208 "psqueue.m"
                      {
#line 208 "psqueue.m"
                        mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_35, &mercury__psqueue__V_29_29, mercury__psqueue__V_46_46, mercury__psqueue__V_23_23);
                      }
#line 4723 "psqueue.c"
                      mercury__psqueue__succeeded = (mercury__psqueue__V_29_29 == (MR_Integer) 0);
#line 208 "psqueue.m"
                      mercury__psqueue__succeeded = !(mercury__psqueue__succeeded);
#line 208 "psqueue.m"
                      if (mercury__psqueue__succeeded)
#line 208 "psqueue.m"
                        *mercury__psqueue__HeadVar__1_1 = mercury__psqueue__V_29_29;
#line 208 "psqueue.m"
                      else
#line 208 "psqueue.m"
                        {
#line 208 "psqueue.m"
                          MR_Word mercury__psqueue__V_30_30;

#line 208 "psqueue.m"
                          {
#line 208 "psqueue.m"
                            mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_P_36, &mercury__psqueue__V_30_30, mercury__psqueue__V_45_45, mercury__psqueue__V_24_24);
                          }
#line 4743 "psqueue.c"
                          mercury__psqueue__succeeded = (mercury__psqueue__V_30_30 == (MR_Integer) 0);
#line 208 "psqueue.m"
                          mercury__psqueue__succeeded = !(mercury__psqueue__succeeded);
#line 208 "psqueue.m"
                          if (mercury__psqueue__succeeded)
#line 208 "psqueue.m"
                            *mercury__psqueue__HeadVar__1_1 = mercury__psqueue__V_30_30;
#line 208 "psqueue.m"
                          else
#line 208 "psqueue.m"
                            {
#line 208 "psqueue.m"
                              MR_Word mercury__psqueue__V_31_31;

#line 208 "psqueue.m"
                              {
#line 208 "psqueue.m"
                                mercury__psqueue____Compare____ltree_2_0(mercury__psqueue__TypeInfo_for_K_35, mercury__psqueue__TypeInfo_for_P_36, &mercury__psqueue__V_31_31, mercury__psqueue__V_44_44, mercury__psqueue__V_25_25);
                              }
#line 4763 "psqueue.c"
                              mercury__psqueue__succeeded = (mercury__psqueue__V_31_31 == (MR_Integer) 0);
#line 208 "psqueue.m"
                              mercury__psqueue__succeeded = !(mercury__psqueue__succeeded);
#line 208 "psqueue.m"
                              if (mercury__psqueue__succeeded)
#line 208 "psqueue.m"
                                *mercury__psqueue__HeadVar__1_1 = mercury__psqueue__V_31_31;
#line 208 "psqueue.m"
                              else
#line 208 "psqueue.m"
                                {
#line 208 "psqueue.m"
                                  MR_Word mercury__psqueue__V_32_32;

#line 208 "psqueue.m"
                                  {
#line 208 "psqueue.m"
                                    mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_35, &mercury__psqueue__V_32_32, mercury__psqueue__V_43_43, mercury__psqueue__V_26_26);
                                  }
#line 4783 "psqueue.c"
                                  mercury__psqueue__succeeded = (mercury__psqueue__V_32_32 == (MR_Integer) 0);
#line 208 "psqueue.m"
                                  mercury__psqueue__succeeded = !(mercury__psqueue__succeeded);
#line 208 "psqueue.m"
                                  if (mercury__psqueue__succeeded)
#line 208 "psqueue.m"
                                    *mercury__psqueue__HeadVar__1_1 = mercury__psqueue__V_32_32;
#line 208 "psqueue.m"
                                  else
#line 208 "psqueue.m"
                                    {
#line 208 "psqueue.m"
                                      /* direct tailcall eliminated */
#line 208 "psqueue.m"
                                      {
#line 208 "psqueue.m"
                                        MR_Word mercury__psqueue__HeadVar__2__tmp_copy_2 = mercury__psqueue__V_42_42;
#line 208 "psqueue.m"
                                        MR_Word mercury__psqueue__HeadVar__3__tmp_copy_3 = mercury__psqueue__V_27_27;

#line 208 "psqueue.m"
                                        mercury__psqueue__HeadVar__3_3 = mercury__psqueue__HeadVar__3__tmp_copy_3;
#line 208 "psqueue.m"
                                        mercury__psqueue__HeadVar__2_2 = mercury__psqueue__HeadVar__2__tmp_copy_2;
#line 208 "psqueue.m"
                                      }
#line 208 "psqueue.m"
                                      continue;
#line 208 "psqueue.m"
                                    }
#line 208 "psqueue.m"
                                }
#line 208 "psqueue.m"
                            }
#line 208 "psqueue.m"
                        }
#line 208 "psqueue.m"
                    }
#line 208 "psqueue.m"
                }
#line 208 "psqueue.m"
            }
#line 208 "psqueue.m"
      }
#line 208 "psqueue.m"
      break;
#line 208 "psqueue.m"
    }
#line 208 "psqueue.m"
}

#line 208 "psqueue.m"
MR_bool MR_CALL 
mercury__psqueue____Unify____ltree_2_0(
#line 208 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_19,
#line 208 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_20,
#line 208 "psqueue.m"
  MR_Word mercury__psqueue__HeadVar__1_1,
#line 208 "psqueue.m"
  MR_Word mercury__psqueue__HeadVar__2_2)
#line 208 "psqueue.m"
{
#line 208 "psqueue.m"
  while (MR_TRUE)
#line 208 "psqueue.m"
    {
#line 208 "psqueue.m"
      /* tailcall optimized into a loop */
#line 208 "psqueue.m"
      {
#line 208 "psqueue.m"
        MR_bool mercury__psqueue__succeeded;
#line 208 "psqueue.m"
        MR_Integer mercury__psqueue__CastX_17 = (MR_Integer) mercury__psqueue__HeadVar__1_1;
#line 208 "psqueue.m"
        MR_Integer mercury__psqueue__CastY_18 = (MR_Integer) mercury__psqueue__HeadVar__2_2;

#line 208 "psqueue.m"
        mercury__psqueue__succeeded = (mercury__psqueue__CastX_17 == mercury__psqueue__CastY_18);
#line 208 "psqueue.m"
        if (mercury__psqueue__succeeded)
#line 208 "psqueue.m"
          mercury__psqueue__succeeded = MR_TRUE;
#line 208 "psqueue.m"
        else
#line 208 "psqueue.m"
          if ((mercury__psqueue__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 208 "psqueue.m"
            {
#line 208 "psqueue.m"
              MR_Integer mercury__psqueue__CastX_3 = (MR_Integer) mercury__psqueue__HeadVar__1_1;
#line 208 "psqueue.m"
              MR_Integer mercury__psqueue__CastY_4 = (MR_Integer) mercury__psqueue__HeadVar__2_2;

#line 208 "psqueue.m"
              mercury__psqueue__succeeded = (mercury__psqueue__CastY_4 == mercury__psqueue__CastX_3);
#line 208 "psqueue.m"
            }
#line 208 "psqueue.m"
          else
#line 208 "psqueue.m"
            {
#line 208 "psqueue.m"
              MR_Integer mercury__psqueue__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__1_1, (MR_Integer) 0)));
#line 208 "psqueue.m"
              MR_Box mercury__psqueue__V_6_6 = (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__1_1, (MR_Integer) 1));
#line 208 "psqueue.m"
              MR_Box mercury__psqueue__V_7_7 = (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__1_1, (MR_Integer) 2));
#line 208 "psqueue.m"
              MR_Word mercury__psqueue__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__1_1, (MR_Integer) 3)));
#line 208 "psqueue.m"
              MR_Box mercury__psqueue__V_9_9 = (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__1_1, (MR_Integer) 4));
#line 208 "psqueue.m"
              MR_Word mercury__psqueue__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__1_1, (MR_Integer) 5)));
#line 208 "psqueue.m"
              MR_Integer mercury__psqueue__V_11_11;
#line 208 "psqueue.m"
              MR_Box mercury__psqueue__V_12_12;
#line 208 "psqueue.m"
              MR_Box mercury__psqueue__V_13_13;
#line 208 "psqueue.m"
              MR_Word mercury__psqueue__V_14_14;
#line 208 "psqueue.m"
              MR_Box mercury__psqueue__V_15_15;
#line 208 "psqueue.m"
              MR_Word mercury__psqueue__V_16_16;

#line 208 "psqueue.m"
              mercury__psqueue__succeeded = ((MR_tag((MR_Word) mercury__psqueue__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 208 "psqueue.m"
              if (mercury__psqueue__succeeded)
#line 208 "psqueue.m"
                {
#line 208 "psqueue.m"
                  mercury__psqueue__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__2_2, (MR_Integer) 0)));
#line 208 "psqueue.m"
                  mercury__psqueue__V_12_12 = (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__2_2, (MR_Integer) 1));
#line 208 "psqueue.m"
                  mercury__psqueue__V_13_13 = (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__2_2, (MR_Integer) 2));
#line 208 "psqueue.m"
                  mercury__psqueue__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__2_2, (MR_Integer) 3)));
#line 208 "psqueue.m"
                  mercury__psqueue__V_15_15 = (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__2_2, (MR_Integer) 4));
#line 208 "psqueue.m"
                  mercury__psqueue__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__2_2, (MR_Integer) 5)));
#line 4931 "psqueue.c"
                  mercury__psqueue__succeeded = (mercury__psqueue__V_5_5 == mercury__psqueue__V_11_11);
#line 208 "psqueue.m"
                  if (mercury__psqueue__succeeded)
#line 208 "psqueue.m"
                    {
#line 4937 "psqueue.c"
                      {
#line 4939 "psqueue.c"
                        mercury__psqueue__succeeded = mercury__builtin__unify_2_p_0(mercury__psqueue__TypeInfo_for_K_19, mercury__psqueue__V_6_6, mercury__psqueue__V_12_12);
                      }
#line 208 "psqueue.m"
                      if (mercury__psqueue__succeeded)
#line 208 "psqueue.m"
                        {
#line 4946 "psqueue.c"
                          {
#line 4948 "psqueue.c"
                            mercury__psqueue__succeeded = mercury__builtin__unify_2_p_0(mercury__psqueue__TypeInfo_for_P_20, mercury__psqueue__V_7_7, mercury__psqueue__V_13_13);
                          }
#line 208 "psqueue.m"
                          if (mercury__psqueue__succeeded)
#line 208 "psqueue.m"
                            {
#line 4955 "psqueue.c"
                              {
#line 4957 "psqueue.c"
                                mercury__psqueue__succeeded = mercury__psqueue____Unify____ltree_2_0(mercury__psqueue__TypeInfo_for_K_19, mercury__psqueue__TypeInfo_for_P_20, mercury__psqueue__V_8_8, mercury__psqueue__V_14_14);
                              }
#line 208 "psqueue.m"
                              if (mercury__psqueue__succeeded)
#line 208 "psqueue.m"
                                {
#line 4964 "psqueue.c"
                                  {
#line 4966 "psqueue.c"
                                    mercury__psqueue__succeeded = mercury__builtin__unify_2_p_0(mercury__psqueue__TypeInfo_for_K_19, mercury__psqueue__V_9_9, mercury__psqueue__V_15_15);
                                  }
#line 208 "psqueue.m"
                                  if (mercury__psqueue__succeeded)
#line 4971 "psqueue.c"
                                    {
#line 4973 "psqueue.c"
                                      /* direct tailcall eliminated */
#line 4975 "psqueue.c"
                                      {
#line 4977 "psqueue.c"
                                        MR_Word mercury__psqueue__HeadVar__1__tmp_copy_1 = mercury__psqueue__V_10_10;
#line 4979 "psqueue.c"
                                        MR_Word mercury__psqueue__HeadVar__2__tmp_copy_2 = mercury__psqueue__V_16_16;

#line 4982 "psqueue.c"
                                        mercury__psqueue__HeadVar__2_2 = mercury__psqueue__HeadVar__2__tmp_copy_2;
#line 4984 "psqueue.c"
                                        mercury__psqueue__HeadVar__1_1 = mercury__psqueue__HeadVar__1__tmp_copy_1;
#line 4986 "psqueue.c"
                                      }
#line 4988 "psqueue.c"
                                      continue;
#line 4990 "psqueue.c"
                                    }
#line 208 "psqueue.m"
                                }
#line 208 "psqueue.m"
                            }
#line 208 "psqueue.m"
                        }
#line 208 "psqueue.m"
                    }
#line 208 "psqueue.m"
                }
#line 208 "psqueue.m"
            }
#line 208 "psqueue.m"
        return mercury__psqueue__succeeded;
#line 208 "psqueue.m"
      }
#line 208 "psqueue.m"
      break;
#line 208 "psqueue.m"
    }
#line 208 "psqueue.m"
}

#line 1071 "psqueue.m"
MR_bool MR_CALL 
mercury__psqueue__key_condition_2_p_0(
#line 1071 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_12,
#line 1071 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_13,
#line 1071 "psqueue.m"
  MR_Word mercury__psqueue__PSQ_3,
#line 1071 "psqueue.m"
  MR_Word mercury__psqueue__T_4)
#line 1071 "psqueue.m"
{
#line 1076 "psqueue.m"
  while (MR_TRUE)
#line 1076 "psqueue.m"
    {
#line 1076 "psqueue.m"
      /* tailcall optimized into a loop */
#line 1076 "psqueue.m"
      {
#line 1076 "psqueue.m"
        MR_bool mercury__psqueue__succeeded;

#line 1076 "psqueue.m"
        if ((mercury__psqueue__T_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1075 "psqueue.m"
          mercury__psqueue__succeeded = MR_TRUE;
#line 1076 "psqueue.m"
        else
#line 1077 "psqueue.m"
          {
#line 1077 "psqueue.m"
            MR_Word mercury__psqueue__TL_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__T_4, (MR_Integer) 3)));
#line 1077 "psqueue.m"
            MR_Box mercury__psqueue__SplitKey_9 = (MR_hl_field(MR_mktag(1), mercury__psqueue__T_4, (MR_Integer) 4));
#line 1077 "psqueue.m"
            MR_Word mercury__psqueue__TR_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__T_4, (MR_Integer) 5)));
#line 1077 "psqueue.m"
            MR_Word mercury__psqueue__V_17_17;
#line 1077 "psqueue.m"
            MR_Integer mercury__psqueue__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__T_4, (MR_Integer) 0)));
#line 1077 "psqueue.m"
            MR_Box mercury__psqueue__V_6_6 = (MR_hl_field(MR_mktag(1), mercury__psqueue__T_4, (MR_Integer) 1));
#line 1077 "psqueue.m"
            MR_Box mercury__psqueue__V_7_7 = (MR_hl_field(MR_mktag(1), mercury__psqueue__T_4, (MR_Integer) 2));
#line 483 "psqueue.m"
            MR_Box mercury__psqueue__V_11_11;

#line 483 "psqueue.m"
            {
#line 483 "psqueue.m"
              mercury__psqueue__V_17_17 = mercury__psqueue__tournament_view_1_f_0(mercury__psqueue__TypeInfo_for_P_12, mercury__psqueue__TypeInfo_for_K_13, mercury__psqueue__PSQ_3);
            }
#line 483 "psqueue.m"
            {
#line 483 "psqueue.m"
              mercury__psqueue__succeeded = mercury__psqueue__search_tv_3_p_0(mercury__psqueue__TypeInfo_for_K_13, mercury__psqueue__TypeInfo_for_P_12, mercury__psqueue__V_17_17, mercury__psqueue__SplitKey_9, &mercury__psqueue__V_11_11);
            }
#line 1077 "psqueue.m"
            if (mercury__psqueue__succeeded)
#line 1077 "psqueue.m"
              {
#line 1079 "psqueue.m"
                {
#line 1079 "psqueue.m"
                  mercury__psqueue__succeeded = mercury__psqueue__key_condition_2_p_0(mercury__psqueue__TypeInfo_for_P_12, mercury__psqueue__TypeInfo_for_K_13, mercury__psqueue__PSQ_3, mercury__psqueue__TL_8);
                }
#line 1077 "psqueue.m"
                if (mercury__psqueue__succeeded)
#line 1080 "psqueue.m"
                  {
#line 1080 "psqueue.m"
                    /* direct tailcall eliminated */
#line 1080 "psqueue.m"
                    {
#line 1080 "psqueue.m"
                      MR_Word mercury__psqueue__T__tmp_copy_4 = mercury__psqueue__TR_10;

#line 1080 "psqueue.m"
                      mercury__psqueue__T_4 = mercury__psqueue__T__tmp_copy_4;
#line 1080 "psqueue.m"
                    }
#line 1080 "psqueue.m"
                    continue;
#line 1080 "psqueue.m"
                  }
#line 1077 "psqueue.m"
              }
#line 1077 "psqueue.m"
          }
#line 1076 "psqueue.m"
        return mercury__psqueue__succeeded;
#line 1076 "psqueue.m"
      }
#line 1076 "psqueue.m"
      break;
#line 1076 "psqueue.m"
    }
#line 1071 "psqueue.m"
}

#line 901 "psqueue.m"
MR_bool MR_CALL 
mercury__psqueue__all_search_keys_1_p_0(
#line 901 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_14,
#line 901 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_15,
#line 901 "psqueue.m"
  MR_Word mercury__psqueue__LTree_2)
#line 901 "psqueue.m"
{
#line 906 "psqueue.m"
  while (MR_TRUE)
#line 906 "psqueue.m"
    {
#line 906 "psqueue.m"
      /* tailcall optimized into a loop */
#line 906 "psqueue.m"
      {
#line 906 "psqueue.m"
        MR_bool mercury__psqueue__succeeded;

#line 906 "psqueue.m"
        if ((mercury__psqueue__LTree_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 905 "psqueue.m"
          mercury__psqueue__succeeded = MR_TRUE;
#line 906 "psqueue.m"
        else
#line 907 "psqueue.m"
          {
#line 907 "psqueue.m"
            MR_Word mercury__psqueue__TL_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_2, (MR_Integer) 3)));
#line 907 "psqueue.m"
            MR_Box mercury__psqueue__SplitKey_7 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_2, (MR_Integer) 4));
#line 907 "psqueue.m"
            MR_Word mercury__psqueue__TR_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_2, (MR_Integer) 5)));
#line 907 "psqueue.m"
            MR_Word mercury__psqueue__MaxKeyL_9;
#line 907 "psqueue.m"
            MR_Word mercury__psqueue__MinKeyR_10;
#line 907 "psqueue.m"
            MR_Integer mercury__psqueue__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_2, (MR_Integer) 0)));
#line 907 "psqueue.m"
            MR_Box mercury__psqueue__V_4_4 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_2, (MR_Integer) 1));
#line 907 "psqueue.m"
            MR_Box mercury__psqueue__V_5_5 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_2, (MR_Integer) 2));

#line 997 "psqueue.m"
            if ((mercury__psqueue__TL_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 995 "psqueue.m"
              mercury__psqueue__MaxKeyL_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 997 "psqueue.m"
            else
#line 998 "psqueue.m"
              {
#line 998 "psqueue.m"
                MR_Box mercury__psqueue__Key_19 = (MR_hl_field(MR_mktag(1), mercury__psqueue__TL_6, (MR_Integer) 1));
#line 998 "psqueue.m"
                MR_Word mercury__psqueue__TL_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__TL_6, (MR_Integer) 3)));
#line 998 "psqueue.m"
                MR_Word mercury__psqueue__TR_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__TL_6, (MR_Integer) 5)));
#line 998 "psqueue.m"
                MR_Word mercury__psqueue__MaxKey1_24;
#line 998 "psqueue.m"
                MR_Word mercury__psqueue__MaxKey2_25;
#line 998 "psqueue.m"
                MR_Integer mercury__psqueue__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__TL_6, (MR_Integer) 0)));
#line 998 "psqueue.m"
                MR_Box mercury__psqueue__V_20_20 = (MR_hl_field(MR_mktag(1), mercury__psqueue__TL_6, (MR_Integer) 2));
#line 998 "psqueue.m"
                MR_Box mercury__psqueue__V_22_22 = (MR_hl_field(MR_mktag(1), mercury__psqueue__TL_6, (MR_Integer) 4));

#line 999 "psqueue.m"
                {
#line 999 "psqueue.m"
                  mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_120_95_107_101_121_95_108_111_115_101_114_95_116_114_101_101_95_95_91_50_93_95_48_3_p_0(mercury__psqueue__TypeInfo_for_K_14, mercury__psqueue__TL_21, mercury__psqueue__Key_19, &mercury__psqueue__MaxKey1_24);
                }
#line 1000 "psqueue.m"
                {
#line 1000 "psqueue.m"
                  mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_120_95_107_101_121_95_108_111_115_101_114_95_116_114_101_101_95_95_91_50_93_95_48_3_p_0(mercury__psqueue__TypeInfo_for_K_14, mercury__psqueue__TR_23, mercury__psqueue__Key_19, &mercury__psqueue__MaxKey2_25);
                }
#line 1005 "psqueue.m"
                if ((mercury__psqueue__MaxKey1_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1005 "psqueue.m"
                  if ((mercury__psqueue__MaxKey2_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1002 "psqueue.m"
                    {
#line 1002 "psqueue.m"
                      mercury__psqueue__MaxKeyL_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1002 "psqueue.m"
                      MR_hl_field(MR_mktag(1), mercury__psqueue__MaxKeyL_9, 0) = mercury__psqueue__Key_19;
#line 1002 "psqueue.m"
                    }
#line 1005 "psqueue.m"
                  else
#line 1010 "psqueue.m"
                    {
#line 1010 "psqueue.m"
                      MR_Box mercury__psqueue__MaxKey2Val_27 = (MR_hl_field(MR_mktag(1), mercury__psqueue__MaxKey2_25, (MR_Integer) 0));
#line 1010 "psqueue.m"
                      MR_Box mercury__psqueue__V_30_30;
#line 443 "psqueue.m"
                      MR_Word mercury__psqueue__CMP_40;

#line 444 "psqueue.m"
                      {
#line 444 "psqueue.m"
                        mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_14, &mercury__psqueue__CMP_40, mercury__psqueue__MaxKey2Val_27, mercury__psqueue__Key_19);
                      }
#line 446 "psqueue.m"
                      if ((mercury__psqueue__CMP_40 == (MR_Integer) 1))
#line 445 "psqueue.m"
                        mercury__psqueue__succeeded = MR_TRUE;
#line 446 "psqueue.m"
                      else
#line 446 "psqueue.m"
                        if ((mercury__psqueue__CMP_40 == (MR_Integer) 0))
#line 446 "psqueue.m"
                          mercury__psqueue__succeeded = MR_TRUE;
#line 446 "psqueue.m"
                        else
#line 446 "psqueue.m"
                          mercury__psqueue__succeeded = MR_FALSE;
#line 799 "psqueue.m"
                      if (mercury__psqueue__succeeded)
#line 798 "psqueue.m"
                        mercury__psqueue__V_30_30 = mercury__psqueue__Key_19;
#line 799 "psqueue.m"
                      else
#line 800 "psqueue.m"
                        mercury__psqueue__V_30_30 = mercury__psqueue__MaxKey2Val_27;
#line 1012 "psqueue.m"
                      {
#line 1012 "psqueue.m"
                        mercury__psqueue__MaxKeyL_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1012 "psqueue.m"
                        MR_hl_field(MR_mktag(1), mercury__psqueue__MaxKeyL_9, 0) = mercury__psqueue__V_30_30;
#line 1012 "psqueue.m"
                      }
#line 1010 "psqueue.m"
                    }
#line 1005 "psqueue.m"
                else
#line 1005 "psqueue.m"
                  {
#line 1005 "psqueue.m"
                    MR_Box mercury__psqueue__V_34_34 = (MR_hl_field(MR_mktag(1), mercury__psqueue__MaxKey1_24, (MR_Integer) 0));

#line 1005 "psqueue.m"
                    if ((mercury__psqueue__MaxKey2_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1006 "psqueue.m"
                      {
#line 1006 "psqueue.m"
                        MR_Box mercury__psqueue__V_31_31;
#line 443 "psqueue.m"
                        MR_Word mercury__psqueue__CMP_46;

#line 444 "psqueue.m"
                        {
#line 444 "psqueue.m"
                          mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_14, &mercury__psqueue__CMP_46, mercury__psqueue__V_34_34, mercury__psqueue__Key_19);
                        }
#line 446 "psqueue.m"
                        if ((mercury__psqueue__CMP_46 == (MR_Integer) 1))
#line 445 "psqueue.m"
                          mercury__psqueue__succeeded = MR_TRUE;
#line 446 "psqueue.m"
                        else
#line 446 "psqueue.m"
                          if ((mercury__psqueue__CMP_46 == (MR_Integer) 0))
#line 446 "psqueue.m"
                            mercury__psqueue__succeeded = MR_TRUE;
#line 446 "psqueue.m"
                          else
#line 446 "psqueue.m"
                            mercury__psqueue__succeeded = MR_FALSE;
#line 799 "psqueue.m"
                        if (mercury__psqueue__succeeded)
#line 798 "psqueue.m"
                          mercury__psqueue__V_31_31 = mercury__psqueue__Key_19;
#line 799 "psqueue.m"
                        else
#line 800 "psqueue.m"
                          mercury__psqueue__V_31_31 = mercury__psqueue__V_34_34;
#line 1008 "psqueue.m"
                        {
#line 1008 "psqueue.m"
                          mercury__psqueue__MaxKeyL_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1008 "psqueue.m"
                          MR_hl_field(MR_mktag(1), mercury__psqueue__MaxKeyL_9, 0) = mercury__psqueue__V_31_31;
#line 1008 "psqueue.m"
                        }
#line 1006 "psqueue.m"
                      }
#line 1005 "psqueue.m"
                    else
#line 1014 "psqueue.m"
                      {
#line 1014 "psqueue.m"
                        MR_Box mercury__psqueue__V_28_28;
#line 1014 "psqueue.m"
                        MR_Box mercury__psqueue__V_29_29;
#line 1014 "psqueue.m"
                        MR_Box mercury__psqueue__MaxKey2Val_33 = (MR_hl_field(MR_mktag(1), mercury__psqueue__MaxKey2_25, (MR_Integer) 0));
#line 443 "psqueue.m"
                        MR_Word mercury__psqueue__CMP_52;
#line 443 "psqueue.m"
                        MR_Word mercury__psqueue__CMP_58;

#line 444 "psqueue.m"
                        {
#line 444 "psqueue.m"
                          mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_14, &mercury__psqueue__CMP_52, mercury__psqueue__Key_19, mercury__psqueue__MaxKey2Val_33);
                        }
#line 446 "psqueue.m"
                        if ((mercury__psqueue__CMP_52 == (MR_Integer) 1))
#line 445 "psqueue.m"
                          mercury__psqueue__succeeded = MR_TRUE;
#line 446 "psqueue.m"
                        else
#line 446 "psqueue.m"
                          if ((mercury__psqueue__CMP_52 == (MR_Integer) 0))
#line 446 "psqueue.m"
                            mercury__psqueue__succeeded = MR_TRUE;
#line 446 "psqueue.m"
                          else
#line 446 "psqueue.m"
                            mercury__psqueue__succeeded = MR_FALSE;
#line 799 "psqueue.m"
                        if (mercury__psqueue__succeeded)
#line 798 "psqueue.m"
                          mercury__psqueue__V_29_29 = mercury__psqueue__MaxKey2Val_33;
#line 799 "psqueue.m"
                        else
#line 800 "psqueue.m"
                          mercury__psqueue__V_29_29 = mercury__psqueue__Key_19;
#line 444 "psqueue.m"
                        {
#line 444 "psqueue.m"
                          mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_14, &mercury__psqueue__CMP_58, mercury__psqueue__V_34_34, mercury__psqueue__V_29_29);
                        }
#line 446 "psqueue.m"
                        if ((mercury__psqueue__CMP_58 == (MR_Integer) 1))
#line 445 "psqueue.m"
                          mercury__psqueue__succeeded = MR_TRUE;
#line 446 "psqueue.m"
                        else
#line 446 "psqueue.m"
                          if ((mercury__psqueue__CMP_58 == (MR_Integer) 0))
#line 446 "psqueue.m"
                            mercury__psqueue__succeeded = MR_TRUE;
#line 446 "psqueue.m"
                          else
#line 446 "psqueue.m"
                            mercury__psqueue__succeeded = MR_FALSE;
#line 799 "psqueue.m"
                        if (mercury__psqueue__succeeded)
#line 798 "psqueue.m"
                          mercury__psqueue__V_28_28 = mercury__psqueue__V_29_29;
#line 799 "psqueue.m"
                        else
#line 800 "psqueue.m"
                          mercury__psqueue__V_28_28 = mercury__psqueue__V_34_34;
#line 1016 "psqueue.m"
                        {
#line 1016 "psqueue.m"
                          mercury__psqueue__MaxKeyL_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1016 "psqueue.m"
                          MR_hl_field(MR_mktag(1), mercury__psqueue__MaxKeyL_9, 0) = mercury__psqueue__V_28_28;
#line 1016 "psqueue.m"
                        }
#line 1014 "psqueue.m"
                      }
#line 1005 "psqueue.m"
                  }
#line 998 "psqueue.m"
              }
#line 909 "psqueue.m"
            {
#line 909 "psqueue.m"
              mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_105_110_95_107_101_121_95_108_111_115_101_114_95_116_114_101_101_95_95_91_50_93_95_48_2_p_0(mercury__psqueue__TypeInfo_for_K_14, mercury__psqueue__TR_8, &mercury__psqueue__MinKeyR_10);
            }
#line 912 "psqueue.m"
            if ((mercury__psqueue__MaxKeyL_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 911 "psqueue.m"
              mercury__psqueue__succeeded = MR_TRUE;
#line 912 "psqueue.m"
            else
#line 913 "psqueue.m"
              {
#line 913 "psqueue.m"
                MR_Box mercury__psqueue__MaxKey_11 = (MR_hl_field(MR_mktag(1), mercury__psqueue__MaxKeyL_9, (MR_Integer) 0));
#line 913 "psqueue.m"
                MR_Word mercury__psqueue__CMP_61;

#line 444 "psqueue.m"
                {
#line 444 "psqueue.m"
                  mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_14, &mercury__psqueue__CMP_61, mercury__psqueue__MaxKey_11, mercury__psqueue__SplitKey_7);
                }
#line 446 "psqueue.m"
                if ((mercury__psqueue__CMP_61 == (MR_Integer) 1))
#line 445 "psqueue.m"
                  mercury__psqueue__succeeded = MR_TRUE;
#line 446 "psqueue.m"
                else
#line 446 "psqueue.m"
                  if ((mercury__psqueue__CMP_61 == (MR_Integer) 0))
#line 446 "psqueue.m"
                    mercury__psqueue__succeeded = MR_TRUE;
#line 446 "psqueue.m"
                  else
#line 446 "psqueue.m"
                    mercury__psqueue__succeeded = MR_FALSE;
#line 913 "psqueue.m"
                if (mercury__psqueue__succeeded)
#line 915 "psqueue.m"
                  {
#line 915 "psqueue.m"
                    mercury__psqueue__succeeded = mercury__psqueue__all_search_keys_1_p_0(mercury__psqueue__TypeInfo_for_K_14, mercury__psqueue__TypeInfo_for_P_15, mercury__psqueue__TL_6);
                  }
#line 913 "psqueue.m"
              }
#line 907 "psqueue.m"
            if (mercury__psqueue__succeeded)
#line 919 "psqueue.m"
              {
#line 919 "psqueue.m"
                if ((mercury__psqueue__MinKeyR_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 918 "psqueue.m"
                  mercury__psqueue__succeeded = MR_TRUE;
#line 919 "psqueue.m"
                else
#line 920 "psqueue.m"
                  {
#line 920 "psqueue.m"
                    MR_Box mercury__psqueue__MinKey_12 = (MR_hl_field(MR_mktag(1), mercury__psqueue__MinKeyR_10, (MR_Integer) 0));
#line 920 "psqueue.m"
                    MR_Word mercury__psqueue__CMP_13;

#line 921 "psqueue.m"
                    {
#line 921 "psqueue.m"
                      mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_14, &mercury__psqueue__CMP_13, mercury__psqueue__MinKey_12, mercury__psqueue__SplitKey_7);
                    }
#line 922 "psqueue.m"
                    mercury__psqueue__succeeded = (mercury__psqueue__CMP_13 == (MR_Integer) 2);
#line 920 "psqueue.m"
                    if (mercury__psqueue__succeeded)
#line 923 "psqueue.m"
                      {
#line 923 "psqueue.m"
                        /* direct tailcall eliminated */
#line 923 "psqueue.m"
                        {
#line 923 "psqueue.m"
                          MR_Word mercury__psqueue__LTree__tmp_copy_2 = mercury__psqueue__TR_8;

#line 923 "psqueue.m"
                          mercury__psqueue__LTree_2 = mercury__psqueue__LTree__tmp_copy_2;
#line 923 "psqueue.m"
                        }
#line 923 "psqueue.m"
                        continue;
#line 923 "psqueue.m"
                      }
#line 920 "psqueue.m"
                  }
#line 919 "psqueue.m"
              }
#line 907 "psqueue.m"
          }
#line 906 "psqueue.m"
        return mercury__psqueue__succeeded;
#line 906 "psqueue.m"
      }
#line 906 "psqueue.m"
      break;
#line 906 "psqueue.m"
    }
#line 901 "psqueue.m"
}

#line 868 "psqueue.m"
MR_bool MR_CALL 
mercury__psqueue__all_nodes_loser_prio_1_p_0(
#line 868 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_12,
#line 868 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_13,
#line 868 "psqueue.m"
  MR_Word mercury__psqueue__LTree_2)
#line 868 "psqueue.m"
{
#line 873 "psqueue.m"
  while (MR_TRUE)
#line 873 "psqueue.m"
    {
#line 873 "psqueue.m"
      /* tailcall optimized into a loop */
#line 873 "psqueue.m"
      {
#line 873 "psqueue.m"
        MR_bool mercury__psqueue__succeeded;

#line 873 "psqueue.m"
        if ((mercury__psqueue__LTree_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 872 "psqueue.m"
          mercury__psqueue__succeeded = MR_TRUE;
#line 873 "psqueue.m"
        else
#line 874 "psqueue.m"
          {
#line 874 "psqueue.m"
            MR_Box mercury__psqueue__K_4 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_2, (MR_Integer) 1));
#line 874 "psqueue.m"
            MR_Box mercury__psqueue__Prio_5 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_2, (MR_Integer) 2));
#line 874 "psqueue.m"
            MR_Word mercury__psqueue__TL_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_2, (MR_Integer) 3)));
#line 874 "psqueue.m"
            MR_Box mercury__psqueue__SplitKey_7 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_2, (MR_Integer) 4));
#line 874 "psqueue.m"
            MR_Word mercury__psqueue__TR_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_2, (MR_Integer) 5)));
#line 874 "psqueue.m"
            MR_Word mercury__psqueue__MinPrio_9;
#line 874 "psqueue.m"
            MR_Box mercury__psqueue__MinPrio0_10;
#line 874 "psqueue.m"
            MR_Word mercury__psqueue__CMP_11;
#line 874 "psqueue.m"
            MR_Integer mercury__psqueue__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_2, (MR_Integer) 0)));
#line 443 "psqueue.m"
            MR_Word mercury__psqueue__CMP_16;

#line 444 "psqueue.m"
            {
#line 444 "psqueue.m"
              mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_12, &mercury__psqueue__CMP_16, mercury__psqueue__K_4, mercury__psqueue__SplitKey_7);
            }
#line 446 "psqueue.m"
            if ((mercury__psqueue__CMP_16 == (MR_Integer) 1))
#line 445 "psqueue.m"
              mercury__psqueue__succeeded = MR_TRUE;
#line 446 "psqueue.m"
            else
#line 446 "psqueue.m"
              if ((mercury__psqueue__CMP_16 == (MR_Integer) 0))
#line 446 "psqueue.m"
                mercury__psqueue__succeeded = MR_TRUE;
#line 446 "psqueue.m"
              else
#line 446 "psqueue.m"
                mercury__psqueue__succeeded = MR_FALSE;
#line 877 "psqueue.m"
            if (mercury__psqueue__succeeded)
#line 876 "psqueue.m"
              {
#line 876 "psqueue.m"
                mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_105_110_95_112_114_105_111_95_108_111_115_101_114_95_116_114_101_101_95_95_91_49_93_95_48_3_p_0(mercury__psqueue__TypeInfo_for_P_13, mercury__psqueue__TL_6, mercury__psqueue__Prio_5, &mercury__psqueue__MinPrio_9);
              }
#line 877 "psqueue.m"
            else
#line 878 "psqueue.m"
              {
#line 878 "psqueue.m"
                mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_105_110_95_112_114_105_111_95_108_111_115_101_114_95_116_114_101_101_95_95_91_49_93_95_48_3_p_0(mercury__psqueue__TypeInfo_for_P_13, mercury__psqueue__TR_8, mercury__psqueue__Prio_5, &mercury__psqueue__MinPrio_9);
              }
#line 880 "psqueue.m"
            mercury__psqueue__succeeded = (mercury__psqueue__MinPrio_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 882 "psqueue.m"
            if (mercury__psqueue__succeeded)
#line 881 "psqueue.m"
              {
#line 881 "psqueue.m"
                mercury__psqueue__MinPrio0_10 = mercury__psqueue__Prio_5;
#line 881 "psqueue.m"
                mercury__psqueue__succeeded = MR_TRUE;
#line 881 "psqueue.m"
              }
#line 882 "psqueue.m"
            else
#line 883 "psqueue.m"
              {
#line 883 "psqueue.m"
                mercury__psqueue__succeeded = ((MR_tag((MR_Word) mercury__psqueue__MinPrio_9)) == (MR_mktag((MR_Integer) 1)));
#line 883 "psqueue.m"
                if (mercury__psqueue__succeeded)
#line 883 "psqueue.m"
                  mercury__psqueue__MinPrio0_10 = (MR_hl_field(MR_mktag(1), mercury__psqueue__MinPrio_9, (MR_Integer) 0));
#line 883 "psqueue.m"
              }
#line 874 "psqueue.m"
            if (mercury__psqueue__succeeded)
#line 874 "psqueue.m"
              {
#line 885 "psqueue.m"
                {
#line 885 "psqueue.m"
                  mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_P_13, &mercury__psqueue__CMP_11, mercury__psqueue__Prio_5, mercury__psqueue__MinPrio0_10);
                }
#line 886 "psqueue.m"
                mercury__psqueue__succeeded = (mercury__psqueue__CMP_11 == (MR_Integer) 0);
#line 874 "psqueue.m"
                if (mercury__psqueue__succeeded)
#line 874 "psqueue.m"
                  {
#line 887 "psqueue.m"
                    {
#line 887 "psqueue.m"
                      mercury__psqueue__succeeded = mercury__psqueue__all_nodes_loser_prio_1_p_0(mercury__psqueue__TypeInfo_for_K_12, mercury__psqueue__TypeInfo_for_P_13, mercury__psqueue__TL_6);
                    }
#line 874 "psqueue.m"
                    if (mercury__psqueue__succeeded)
#line 888 "psqueue.m"
                      {
#line 888 "psqueue.m"
                        /* direct tailcall eliminated */
#line 888 "psqueue.m"
                        {
#line 888 "psqueue.m"
                          MR_Word mercury__psqueue__LTree__tmp_copy_2 = mercury__psqueue__TR_8;

#line 888 "psqueue.m"
                          mercury__psqueue__LTree_2 = mercury__psqueue__LTree__tmp_copy_2;
#line 888 "psqueue.m"
                        }
#line 888 "psqueue.m"
                        continue;
#line 888 "psqueue.m"
                      }
#line 874 "psqueue.m"
                  }
#line 874 "psqueue.m"
              }
#line 874 "psqueue.m"
          }
#line 873 "psqueue.m"
        return mercury__psqueue__succeeded;
#line 873 "psqueue.m"
      }
#line 873 "psqueue.m"
      break;
#line 873 "psqueue.m"
    }
#line 868 "psqueue.m"
}

#line 773 "psqueue.m"
MR_bool MR_CALL 
mercury__psqueue__all_keys_larger_ltree_2_p_0(
#line 773 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_11,
#line 773 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_12,
#line 773 "psqueue.m"
  MR_Box mercury__psqueue__Prio_3,
#line 773 "psqueue.m"
  MR_Word mercury__psqueue__LTree_4)
#line 773 "psqueue.m"
{
#line 778 "psqueue.m"
  while (MR_TRUE)
#line 778 "psqueue.m"
    {
#line 778 "psqueue.m"
      /* tailcall optimized into a loop */
#line 778 "psqueue.m"
      {
#line 778 "psqueue.m"
        MR_bool mercury__psqueue__succeeded;

#line 778 "psqueue.m"
        if ((mercury__psqueue__LTree_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 777 "psqueue.m"
          mercury__psqueue__succeeded = MR_TRUE;
#line 778 "psqueue.m"
        else
#line 779 "psqueue.m"
          {
#line 779 "psqueue.m"
            MR_Box mercury__psqueue__LP_7 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 2));
#line 779 "psqueue.m"
            MR_Word mercury__psqueue__LT_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 3)));
#line 779 "psqueue.m"
            MR_Word mercury__psqueue__RT_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 5)));
#line 779 "psqueue.m"
            MR_Word mercury__psqueue__CMP_15;
#line 779 "psqueue.m"
            MR_Integer mercury__psqueue__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 0)));
#line 779 "psqueue.m"
            MR_Box mercury__psqueue__V_6_6 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 1));
#line 779 "psqueue.m"
            MR_Box mercury__psqueue__V_9_9 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 4));

#line 444 "psqueue.m"
            {
#line 444 "psqueue.m"
              mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_P_11, &mercury__psqueue__CMP_15, mercury__psqueue__Prio_3, mercury__psqueue__LP_7);
            }
#line 446 "psqueue.m"
            if ((mercury__psqueue__CMP_15 == (MR_Integer) 1))
#line 445 "psqueue.m"
              mercury__psqueue__succeeded = MR_TRUE;
#line 446 "psqueue.m"
            else
#line 446 "psqueue.m"
              if ((mercury__psqueue__CMP_15 == (MR_Integer) 0))
#line 446 "psqueue.m"
                mercury__psqueue__succeeded = MR_TRUE;
#line 446 "psqueue.m"
              else
#line 446 "psqueue.m"
                mercury__psqueue__succeeded = MR_FALSE;
#line 779 "psqueue.m"
            if (mercury__psqueue__succeeded)
#line 779 "psqueue.m"
              {
#line 781 "psqueue.m"
                {
#line 781 "psqueue.m"
                  mercury__psqueue__succeeded = mercury__psqueue__all_keys_larger_ltree_2_p_0(mercury__psqueue__TypeInfo_for_P_11, mercury__psqueue__TypeInfo_for_K_12, mercury__psqueue__Prio_3, mercury__psqueue__LT_8);
                }
#line 779 "psqueue.m"
                if (mercury__psqueue__succeeded)
#line 782 "psqueue.m"
                  {
#line 782 "psqueue.m"
                    /* direct tailcall eliminated */
#line 782 "psqueue.m"
                    {
#line 782 "psqueue.m"
                      MR_Word mercury__psqueue__LTree__tmp_copy_4 = mercury__psqueue__RT_10;

#line 782 "psqueue.m"
                      mercury__psqueue__LTree_4 = mercury__psqueue__LTree__tmp_copy_4;
#line 782 "psqueue.m"
                    }
#line 782 "psqueue.m"
                    continue;
#line 782 "psqueue.m"
                  }
#line 779 "psqueue.m"
              }
#line 779 "psqueue.m"
          }
#line 778 "psqueue.m"
        return mercury__psqueue__succeeded;
#line 778 "psqueue.m"
      }
#line 778 "psqueue.m"
      break;
#line 778 "psqueue.m"
    }
#line 773 "psqueue.m"
}

#line 667 "psqueue.m"
static MR_Word MR_CALL 
mercury__psqueue__single_right_5_f_0(
#line 667 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_24,
#line 667 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_25,
#line 667 "psqueue.m"
  MR_Box mercury__psqueue__K1_7,
#line 667 "psqueue.m"
  MR_Box mercury__psqueue__P1_8,
#line 667 "psqueue.m"
  MR_Word mercury__psqueue__TVL_9,
#line 667 "psqueue.m"
  MR_Box mercury__psqueue__S2_10,
#line 667 "psqueue.m"
  MR_Word mercury__psqueue__T3_11)
#line 667 "psqueue.m"
{
#line 737 "psqueue.m"
  {
#line 737 "psqueue.m"
    MR_bool mercury__psqueue__succeeded = ((MR_tag((MR_Word) mercury__psqueue__TVL_9)) == (MR_mktag((MR_Integer) 1)));
#line 737 "psqueue.m"
    MR_Word mercury__psqueue__Res_12;
#line 737 "psqueue.m"
    MR_Box mercury__psqueue__K2_13;
#line 737 "psqueue.m"
    MR_Box mercury__psqueue__P2_14;
#line 737 "psqueue.m"
    MR_Word mercury__psqueue__T1_15;
#line 737 "psqueue.m"
    MR_Box mercury__psqueue__S1_16;
#line 737 "psqueue.m"
    MR_Word mercury__psqueue__T2_17;

#line 729 "psqueue.m"
    if (mercury__psqueue__succeeded)
#line 729 "psqueue.m"
      {
#line 729 "psqueue.m"
        mercury__psqueue__K2_13 = (MR_hl_field(MR_mktag(1), mercury__psqueue__TVL_9, (MR_Integer) 0));
#line 729 "psqueue.m"
        mercury__psqueue__P2_14 = (MR_hl_field(MR_mktag(1), mercury__psqueue__TVL_9, (MR_Integer) 1));
#line 729 "psqueue.m"
        mercury__psqueue__T1_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__TVL_9, (MR_Integer) 2)));
#line 729 "psqueue.m"
        mercury__psqueue__S1_16 = (MR_hl_field(MR_mktag(1), mercury__psqueue__TVL_9, (MR_Integer) 3));
#line 729 "psqueue.m"
        mercury__psqueue__T2_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__TVL_9, (MR_Integer) 4)));
#line 733 "psqueue.m"
        {
#line 730 "psqueue.m"
          MR_Word mercury__psqueue__CMP0_18;
#line 730 "psqueue.m"
          MR_Word mercury__psqueue__CMP_28;

#line 730 "psqueue.m"
          {
#line 730 "psqueue.m"
            mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_24, &mercury__psqueue__CMP0_18, mercury__psqueue__K2_13, mercury__psqueue__S1_16);
          }
#line 730 "psqueue.m"
          mercury__psqueue__succeeded = (mercury__psqueue__CMP0_18 == (MR_Integer) 2);
#line 730 "psqueue.m"
          if (mercury__psqueue__succeeded)
#line 730 "psqueue.m"
            {
#line 444 "psqueue.m"
              {
#line 444 "psqueue.m"
                mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_P_25, &mercury__psqueue__CMP_28, mercury__psqueue__P1_8, mercury__psqueue__P2_14);
              }
#line 446 "psqueue.m"
              if ((mercury__psqueue__CMP_28 == (MR_Integer) 1))
#line 445 "psqueue.m"
                mercury__psqueue__succeeded = MR_TRUE;
#line 446 "psqueue.m"
              else
#line 446 "psqueue.m"
                if ((mercury__psqueue__CMP_28 == (MR_Integer) 0))
#line 446 "psqueue.m"
                  mercury__psqueue__succeeded = MR_TRUE;
#line 446 "psqueue.m"
                else
#line 446 "psqueue.m"
                  mercury__psqueue__succeeded = MR_FALSE;
#line 730 "psqueue.m"
            }
#line 733 "psqueue.m"
          if (mercury__psqueue__succeeded)
#line 731 "psqueue.m"
            {
#line 731 "psqueue.m"
              MR_Word mercury__psqueue__V_19_19;
#line 731 "psqueue.m"
              MR_Integer mercury__psqueue__Size_35;
#line 731 "psqueue.m"
              MR_Integer mercury__psqueue__V_36_36;
#line 731 "psqueue.m"
              MR_Integer mercury__psqueue__V_38_38;
#line 731 "psqueue.m"
              MR_Integer mercury__psqueue__V_39_39;
#line 731 "psqueue.m"
              MR_Integer mercury__psqueue__Size_60;
#line 731 "psqueue.m"
              MR_Integer mercury__psqueue__V_61_61;
#line 731 "psqueue.m"
              MR_Integer mercury__psqueue__V_63_63;

#line 565 "psqueue.m"
              if ((mercury__psqueue__T2_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 564 "psqueue.m"
                mercury__psqueue__V_38_38 = (MR_Integer) 0;
#line 565 "psqueue.m"
              else
#line 566 "psqueue.m"
                {
#line 566 "psqueue.m"
                  MR_Box mercury__psqueue__V_42_42;
#line 566 "psqueue.m"
                  MR_Box mercury__psqueue__V_43_43;
#line 566 "psqueue.m"
                  MR_Word mercury__psqueue__V_44_44;
#line 566 "psqueue.m"
                  MR_Box mercury__psqueue__V_45_45;
#line 566 "psqueue.m"
                  MR_Word mercury__psqueue__V_46_46;

#line 566 "psqueue.m"
                  mercury__psqueue__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__T2_17, (MR_Integer) 0)));
#line 566 "psqueue.m"
                  mercury__psqueue__V_42_42 = (MR_hl_field(MR_mktag(1), mercury__psqueue__T2_17, (MR_Integer) 1));
#line 566 "psqueue.m"
                  mercury__psqueue__V_43_43 = (MR_hl_field(MR_mktag(1), mercury__psqueue__T2_17, (MR_Integer) 2));
#line 566 "psqueue.m"
                  mercury__psqueue__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__T2_17, (MR_Integer) 3)));
#line 566 "psqueue.m"
                  mercury__psqueue__V_45_45 = (MR_hl_field(MR_mktag(1), mercury__psqueue__T2_17, (MR_Integer) 4));
#line 566 "psqueue.m"
                  mercury__psqueue__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__T2_17, (MR_Integer) 5)));
#line 566 "psqueue.m"
                }
#line 649 "psqueue.m"
              mercury__psqueue__V_36_36 = ((MR_Integer) 1 + mercury__psqueue__V_38_38);
#line 565 "psqueue.m"
              if ((mercury__psqueue__T3_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 564 "psqueue.m"
                mercury__psqueue__V_39_39 = (MR_Integer) 0;
#line 565 "psqueue.m"
              else
#line 566 "psqueue.m"
                {
#line 566 "psqueue.m"
                  MR_Box mercury__psqueue__V_49_49;
#line 566 "psqueue.m"
                  MR_Box mercury__psqueue__V_50_50;
#line 566 "psqueue.m"
                  MR_Word mercury__psqueue__V_51_51;
#line 566 "psqueue.m"
                  MR_Box mercury__psqueue__V_52_52;
#line 566 "psqueue.m"
                  MR_Word mercury__psqueue__V_53_53;

#line 566 "psqueue.m"
                  mercury__psqueue__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__T3_11, (MR_Integer) 0)));
#line 566 "psqueue.m"
                  mercury__psqueue__V_49_49 = (MR_hl_field(MR_mktag(1), mercury__psqueue__T3_11, (MR_Integer) 1));
#line 566 "psqueue.m"
                  mercury__psqueue__V_50_50 = (MR_hl_field(MR_mktag(1), mercury__psqueue__T3_11, (MR_Integer) 2));
#line 566 "psqueue.m"
                  mercury__psqueue__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__T3_11, (MR_Integer) 3)));
#line 566 "psqueue.m"
                  mercury__psqueue__V_52_52 = (MR_hl_field(MR_mktag(1), mercury__psqueue__T3_11, (MR_Integer) 4));
#line 566 "psqueue.m"
                  mercury__psqueue__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__T3_11, (MR_Integer) 5)));
#line 566 "psqueue.m"
                }
#line 649 "psqueue.m"
              mercury__psqueue__Size_35 = (mercury__psqueue__V_36_36 + mercury__psqueue__V_39_39);
#line 650 "psqueue.m"
              {
#line 650 "psqueue.m"
                mercury__psqueue__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 650 "psqueue.m"
                MR_hl_field(MR_mktag(1), mercury__psqueue__V_19_19, 0) = ((MR_Box) (mercury__psqueue__Size_35));
#line 650 "psqueue.m"
                MR_hl_field(MR_mktag(1), mercury__psqueue__V_19_19, 1) = mercury__psqueue__K2_13;
#line 650 "psqueue.m"
                MR_hl_field(MR_mktag(1), mercury__psqueue__V_19_19, 2) = mercury__psqueue__P2_14;
#line 650 "psqueue.m"
                MR_hl_field(MR_mktag(1), mercury__psqueue__V_19_19, 3) = ((MR_Box) (mercury__psqueue__T2_17));
#line 650 "psqueue.m"
                MR_hl_field(MR_mktag(1), mercury__psqueue__V_19_19, 4) = mercury__psqueue__S2_10;
#line 650 "psqueue.m"
                MR_hl_field(MR_mktag(1), mercury__psqueue__V_19_19, 5) = ((MR_Box) (mercury__psqueue__T3_11));
#line 650 "psqueue.m"
              }
#line 565 "psqueue.m"
              if ((mercury__psqueue__T1_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 564 "psqueue.m"
                mercury__psqueue__V_63_63 = (MR_Integer) 0;
#line 565 "psqueue.m"
              else
#line 566 "psqueue.m"
                {
#line 566 "psqueue.m"
                  MR_Box mercury__psqueue__V_67_67;
#line 566 "psqueue.m"
                  MR_Box mercury__psqueue__V_68_68;
#line 566 "psqueue.m"
                  MR_Word mercury__psqueue__V_69_69;
#line 566 "psqueue.m"
                  MR_Box mercury__psqueue__V_70_70;
#line 566 "psqueue.m"
                  MR_Word mercury__psqueue__V_71_71;

#line 566 "psqueue.m"
                  mercury__psqueue__V_63_63 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__T1_15, (MR_Integer) 0)));
#line 566 "psqueue.m"
                  mercury__psqueue__V_67_67 = (MR_hl_field(MR_mktag(1), mercury__psqueue__T1_15, (MR_Integer) 1));
#line 566 "psqueue.m"
                  mercury__psqueue__V_68_68 = (MR_hl_field(MR_mktag(1), mercury__psqueue__T1_15, (MR_Integer) 2));
#line 566 "psqueue.m"
                  mercury__psqueue__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__T1_15, (MR_Integer) 3)));
#line 566 "psqueue.m"
                  mercury__psqueue__V_70_70 = (MR_hl_field(MR_mktag(1), mercury__psqueue__T1_15, (MR_Integer) 4));
#line 566 "psqueue.m"
                  mercury__psqueue__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__T1_15, (MR_Integer) 5)));
#line 566 "psqueue.m"
                }
#line 649 "psqueue.m"
              mercury__psqueue__V_61_61 = ((MR_Integer) 1 + mercury__psqueue__V_63_63);
#line 649 "psqueue.m"
              mercury__psqueue__Size_60 = (mercury__psqueue__V_61_61 + mercury__psqueue__Size_35);
#line 650 "psqueue.m"
              {
#line 650 "psqueue.m"
                mercury__psqueue__Res_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 650 "psqueue.m"
                MR_hl_field(MR_mktag(1), mercury__psqueue__Res_12, 0) = ((MR_Box) (mercury__psqueue__Size_60));
#line 650 "psqueue.m"
                MR_hl_field(MR_mktag(1), mercury__psqueue__Res_12, 1) = mercury__psqueue__K1_7;
#line 650 "psqueue.m"
                MR_hl_field(MR_mktag(1), mercury__psqueue__Res_12, 2) = mercury__psqueue__P1_8;
#line 650 "psqueue.m"
                MR_hl_field(MR_mktag(1), mercury__psqueue__Res_12, 3) = ((MR_Box) (mercury__psqueue__T1_15));
#line 650 "psqueue.m"
                MR_hl_field(MR_mktag(1), mercury__psqueue__Res_12, 4) = mercury__psqueue__S1_16;
#line 650 "psqueue.m"
                MR_hl_field(MR_mktag(1), mercury__psqueue__Res_12, 5) = ((MR_Box) (mercury__psqueue__V_19_19));
#line 650 "psqueue.m"
              }
#line 731 "psqueue.m"
            }
#line 733 "psqueue.m"
          else
#line 734 "psqueue.m"
            {
#line 734 "psqueue.m"
              MR_Word mercury__psqueue__V_20_20;

#line 735 "psqueue.m"
              {
#line 735 "psqueue.m"
                mercury__psqueue__V_20_20 = mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_111_110_115_116_114_117_99_116_95_110_111_100_101_95_95_91_49_44_32_50_93_95_48_5_f_0(mercury__psqueue__K1_7, mercury__psqueue__P1_8, mercury__psqueue__T2_17, mercury__psqueue__S2_10, mercury__psqueue__T3_11);
              }
#line 734 "psqueue.m"
              {
#line 734 "psqueue.m"
                return mercury__psqueue__Res_12 = mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_111_110_115_116_114_117_99_116_95_110_111_100_101_95_95_91_49_44_32_50_93_95_48_5_f_0(mercury__psqueue__K2_13, mercury__psqueue__P2_14, mercury__psqueue__T1_15, mercury__psqueue__S1_16, mercury__psqueue__V_20_20);
              }
#line 734 "psqueue.m"
            }
#line 733 "psqueue.m"
        }
#line 729 "psqueue.m"
      }
#line 729 "psqueue.m"
    else
#line 738 "psqueue.m"
      {
#line 738 "psqueue.m"
        {
#line 738 "psqueue.m"
          mercury__require__unexpected_3_p_0((MR_String) "psqueue.m", (MR_String) "function \140psqueue.single_right\'/5", (MR_String) "error in single right rotation");
        }
#line 738 "psqueue.m"
      }
#line 737 "psqueue.m"
    return mercury__psqueue__Res_12;
#line 737 "psqueue.m"
  }
#line 667 "psqueue.m"
}

#line 665 "psqueue.m"
static MR_Word MR_CALL 
mercury__psqueue__single_left_5_f_0(
#line 665 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_23,
#line 665 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_24,
#line 665 "psqueue.m"
  MR_Box mercury__psqueue__K1_7,
#line 665 "psqueue.m"
  MR_Box mercury__psqueue__P1_8,
#line 665 "psqueue.m"
  MR_Word mercury__psqueue__T1_9,
#line 665 "psqueue.m"
  MR_Box mercury__psqueue__S1_10,
#line 665 "psqueue.m"
  MR_Word mercury__psqueue__TVR_11)
#line 665 "psqueue.m"
{
#line 724 "psqueue.m"
  {
#line 724 "psqueue.m"
    MR_bool mercury__psqueue__succeeded = ((MR_tag((MR_Word) mercury__psqueue__TVR_11)) == (MR_mktag((MR_Integer) 1)));
#line 724 "psqueue.m"
    MR_Word mercury__psqueue__Res_12;
#line 724 "psqueue.m"
    MR_Box mercury__psqueue__K2_13;
#line 724 "psqueue.m"
    MR_Box mercury__psqueue__P2_14;
#line 724 "psqueue.m"
    MR_Word mercury__psqueue__T2_15;
#line 724 "psqueue.m"
    MR_Box mercury__psqueue__S2_16;
#line 724 "psqueue.m"
    MR_Word mercury__psqueue__T3_17;

#line 716 "psqueue.m"
    if (mercury__psqueue__succeeded)
#line 716 "psqueue.m"
      {
#line 716 "psqueue.m"
        mercury__psqueue__K2_13 = (MR_hl_field(MR_mktag(1), mercury__psqueue__TVR_11, (MR_Integer) 0));
#line 716 "psqueue.m"
        mercury__psqueue__P2_14 = (MR_hl_field(MR_mktag(1), mercury__psqueue__TVR_11, (MR_Integer) 1));
#line 716 "psqueue.m"
        mercury__psqueue__T2_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__TVR_11, (MR_Integer) 2)));
#line 716 "psqueue.m"
        mercury__psqueue__S2_16 = (MR_hl_field(MR_mktag(1), mercury__psqueue__TVR_11, (MR_Integer) 3));
#line 716 "psqueue.m"
        mercury__psqueue__T3_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__TVR_11, (MR_Integer) 4)));
#line 720 "psqueue.m"
        {
#line 717 "psqueue.m"
          MR_Word mercury__psqueue__CMP_27;
#line 717 "psqueue.m"
          MR_Word mercury__psqueue__CMP_30;

#line 444 "psqueue.m"
          {
#line 444 "psqueue.m"
            mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_23, &mercury__psqueue__CMP_27, mercury__psqueue__K2_13, mercury__psqueue__S2_16);
          }
#line 446 "psqueue.m"
          if ((mercury__psqueue__CMP_27 == (MR_Integer) 1))
#line 445 "psqueue.m"
            mercury__psqueue__succeeded = MR_TRUE;
#line 446 "psqueue.m"
          else
#line 446 "psqueue.m"
            if ((mercury__psqueue__CMP_27 == (MR_Integer) 0))
#line 446 "psqueue.m"
              mercury__psqueue__succeeded = MR_TRUE;
#line 446 "psqueue.m"
            else
#line 446 "psqueue.m"
              mercury__psqueue__succeeded = MR_FALSE;
#line 717 "psqueue.m"
          if (mercury__psqueue__succeeded)
#line 717 "psqueue.m"
            {
#line 444 "psqueue.m"
              {
#line 444 "psqueue.m"
                mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_P_24, &mercury__psqueue__CMP_30, mercury__psqueue__P1_8, mercury__psqueue__P2_14);
              }
#line 446 "psqueue.m"
              if ((mercury__psqueue__CMP_30 == (MR_Integer) 1))
#line 445 "psqueue.m"
                mercury__psqueue__succeeded = MR_TRUE;
#line 446 "psqueue.m"
              else
#line 446 "psqueue.m"
                if ((mercury__psqueue__CMP_30 == (MR_Integer) 0))
#line 446 "psqueue.m"
                  mercury__psqueue__succeeded = MR_TRUE;
#line 446 "psqueue.m"
                else
#line 446 "psqueue.m"
                  mercury__psqueue__succeeded = MR_FALSE;
#line 717 "psqueue.m"
            }
#line 720 "psqueue.m"
          if (mercury__psqueue__succeeded)
#line 718 "psqueue.m"
            {
#line 718 "psqueue.m"
              MR_Word mercury__psqueue__V_18_18;
#line 718 "psqueue.m"
              MR_Integer mercury__psqueue__Size_37;
#line 718 "psqueue.m"
              MR_Integer mercury__psqueue__V_38_38;
#line 718 "psqueue.m"
              MR_Integer mercury__psqueue__V_40_40;
#line 718 "psqueue.m"
              MR_Integer mercury__psqueue__V_41_41;
#line 718 "psqueue.m"
              MR_Integer mercury__psqueue__Size_62;
#line 718 "psqueue.m"
              MR_Integer mercury__psqueue__V_63_63;
#line 718 "psqueue.m"
              MR_Integer mercury__psqueue__V_66_66;

#line 565 "psqueue.m"
              if ((mercury__psqueue__T1_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 564 "psqueue.m"
                mercury__psqueue__V_40_40 = (MR_Integer) 0;
#line 565 "psqueue.m"
              else
#line 566 "psqueue.m"
                {
#line 566 "psqueue.m"
                  MR_Box mercury__psqueue__V_44_44;
#line 566 "psqueue.m"
                  MR_Box mercury__psqueue__V_45_45;
#line 566 "psqueue.m"
                  MR_Word mercury__psqueue__V_46_46;
#line 566 "psqueue.m"
                  MR_Box mercury__psqueue__V_47_47;
#line 566 "psqueue.m"
                  MR_Word mercury__psqueue__V_48_48;

#line 566 "psqueue.m"
                  mercury__psqueue__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__T1_9, (MR_Integer) 0)));
#line 566 "psqueue.m"
                  mercury__psqueue__V_44_44 = (MR_hl_field(MR_mktag(1), mercury__psqueue__T1_9, (MR_Integer) 1));
#line 566 "psqueue.m"
                  mercury__psqueue__V_45_45 = (MR_hl_field(MR_mktag(1), mercury__psqueue__T1_9, (MR_Integer) 2));
#line 566 "psqueue.m"
                  mercury__psqueue__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__T1_9, (MR_Integer) 3)));
#line 566 "psqueue.m"
                  mercury__psqueue__V_47_47 = (MR_hl_field(MR_mktag(1), mercury__psqueue__T1_9, (MR_Integer) 4));
#line 566 "psqueue.m"
                  mercury__psqueue__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__T1_9, (MR_Integer) 5)));
#line 566 "psqueue.m"
                }
#line 649 "psqueue.m"
              mercury__psqueue__V_38_38 = ((MR_Integer) 1 + mercury__psqueue__V_40_40);
#line 565 "psqueue.m"
              if ((mercury__psqueue__T2_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 564 "psqueue.m"
                mercury__psqueue__V_41_41 = (MR_Integer) 0;
#line 565 "psqueue.m"
              else
#line 566 "psqueue.m"
                {
#line 566 "psqueue.m"
                  MR_Box mercury__psqueue__V_51_51;
#line 566 "psqueue.m"
                  MR_Box mercury__psqueue__V_52_52;
#line 566 "psqueue.m"
                  MR_Word mercury__psqueue__V_53_53;
#line 566 "psqueue.m"
                  MR_Box mercury__psqueue__V_54_54;
#line 566 "psqueue.m"
                  MR_Word mercury__psqueue__V_55_55;

#line 566 "psqueue.m"
                  mercury__psqueue__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__T2_15, (MR_Integer) 0)));
#line 566 "psqueue.m"
                  mercury__psqueue__V_51_51 = (MR_hl_field(MR_mktag(1), mercury__psqueue__T2_15, (MR_Integer) 1));
#line 566 "psqueue.m"
                  mercury__psqueue__V_52_52 = (MR_hl_field(MR_mktag(1), mercury__psqueue__T2_15, (MR_Integer) 2));
#line 566 "psqueue.m"
                  mercury__psqueue__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__T2_15, (MR_Integer) 3)));
#line 566 "psqueue.m"
                  mercury__psqueue__V_54_54 = (MR_hl_field(MR_mktag(1), mercury__psqueue__T2_15, (MR_Integer) 4));
#line 566 "psqueue.m"
                  mercury__psqueue__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__T2_15, (MR_Integer) 5)));
#line 566 "psqueue.m"
                }
#line 649 "psqueue.m"
              mercury__psqueue__Size_37 = (mercury__psqueue__V_38_38 + mercury__psqueue__V_41_41);
#line 650 "psqueue.m"
              {
#line 650 "psqueue.m"
                mercury__psqueue__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 650 "psqueue.m"
                MR_hl_field(MR_mktag(1), mercury__psqueue__V_18_18, 0) = ((MR_Box) (mercury__psqueue__Size_37));
#line 650 "psqueue.m"
                MR_hl_field(MR_mktag(1), mercury__psqueue__V_18_18, 1) = mercury__psqueue__K2_13;
#line 650 "psqueue.m"
                MR_hl_field(MR_mktag(1), mercury__psqueue__V_18_18, 2) = mercury__psqueue__P2_14;
#line 650 "psqueue.m"
                MR_hl_field(MR_mktag(1), mercury__psqueue__V_18_18, 3) = ((MR_Box) (mercury__psqueue__T1_9));
#line 650 "psqueue.m"
                MR_hl_field(MR_mktag(1), mercury__psqueue__V_18_18, 4) = mercury__psqueue__S1_10;
#line 650 "psqueue.m"
                MR_hl_field(MR_mktag(1), mercury__psqueue__V_18_18, 5) = ((MR_Box) (mercury__psqueue__T2_15));
#line 650 "psqueue.m"
              }
#line 649 "psqueue.m"
              mercury__psqueue__V_63_63 = ((MR_Integer) 1 + mercury__psqueue__Size_37);
#line 565 "psqueue.m"
              if ((mercury__psqueue__T3_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 564 "psqueue.m"
                mercury__psqueue__V_66_66 = (MR_Integer) 0;
#line 565 "psqueue.m"
              else
#line 566 "psqueue.m"
                {
#line 566 "psqueue.m"
                  MR_Box mercury__psqueue__V_76_76;
#line 566 "psqueue.m"
                  MR_Box mercury__psqueue__V_77_77;
#line 566 "psqueue.m"
                  MR_Word mercury__psqueue__V_78_78;
#line 566 "psqueue.m"
                  MR_Box mercury__psqueue__V_79_79;
#line 566 "psqueue.m"
                  MR_Word mercury__psqueue__V_80_80;

#line 566 "psqueue.m"
                  mercury__psqueue__V_66_66 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__T3_17, (MR_Integer) 0)));
#line 566 "psqueue.m"
                  mercury__psqueue__V_76_76 = (MR_hl_field(MR_mktag(1), mercury__psqueue__T3_17, (MR_Integer) 1));
#line 566 "psqueue.m"
                  mercury__psqueue__V_77_77 = (MR_hl_field(MR_mktag(1), mercury__psqueue__T3_17, (MR_Integer) 2));
#line 566 "psqueue.m"
                  mercury__psqueue__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__T3_17, (MR_Integer) 3)));
#line 566 "psqueue.m"
                  mercury__psqueue__V_79_79 = (MR_hl_field(MR_mktag(1), mercury__psqueue__T3_17, (MR_Integer) 4));
#line 566 "psqueue.m"
                  mercury__psqueue__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__T3_17, (MR_Integer) 5)));
#line 566 "psqueue.m"
                }
#line 649 "psqueue.m"
              mercury__psqueue__Size_62 = (mercury__psqueue__V_63_63 + mercury__psqueue__V_66_66);
#line 650 "psqueue.m"
              {
#line 650 "psqueue.m"
                mercury__psqueue__Res_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 650 "psqueue.m"
                MR_hl_field(MR_mktag(1), mercury__psqueue__Res_12, 0) = ((MR_Box) (mercury__psqueue__Size_62));
#line 650 "psqueue.m"
                MR_hl_field(MR_mktag(1), mercury__psqueue__Res_12, 1) = mercury__psqueue__K1_7;
#line 650 "psqueue.m"
                MR_hl_field(MR_mktag(1), mercury__psqueue__Res_12, 2) = mercury__psqueue__P1_8;
#line 650 "psqueue.m"
                MR_hl_field(MR_mktag(1), mercury__psqueue__Res_12, 3) = ((MR_Box) (mercury__psqueue__V_18_18));
#line 650 "psqueue.m"
                MR_hl_field(MR_mktag(1), mercury__psqueue__Res_12, 4) = mercury__psqueue__S2_16;
#line 650 "psqueue.m"
                MR_hl_field(MR_mktag(1), mercury__psqueue__Res_12, 5) = ((MR_Box) (mercury__psqueue__T3_17));
#line 650 "psqueue.m"
              }
#line 718 "psqueue.m"
            }
#line 720 "psqueue.m"
          else
#line 721 "psqueue.m"
            {
#line 721 "psqueue.m"
              MR_Word mercury__psqueue__V_19_19;

#line 722 "psqueue.m"
              {
#line 722 "psqueue.m"
                mercury__psqueue__V_19_19 = mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_111_110_115_116_114_117_99_116_95_110_111_100_101_95_95_91_49_44_32_50_93_95_48_5_f_0(mercury__psqueue__K1_7, mercury__psqueue__P1_8, mercury__psqueue__T1_9, mercury__psqueue__S1_10, mercury__psqueue__T2_15);
              }
#line 721 "psqueue.m"
              {
#line 721 "psqueue.m"
                return mercury__psqueue__Res_12 = mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_111_110_115_116_114_117_99_116_95_110_111_100_101_95_95_91_49_44_32_50_93_95_48_5_f_0(mercury__psqueue__K2_13, mercury__psqueue__P2_14, mercury__psqueue__V_19_19, mercury__psqueue__S2_16, mercury__psqueue__T3_17);
              }
#line 721 "psqueue.m"
            }
#line 720 "psqueue.m"
        }
#line 716 "psqueue.m"
      }
#line 716 "psqueue.m"
    else
#line 725 "psqueue.m"
      {
#line 725 "psqueue.m"
        {
#line 725 "psqueue.m"
          mercury__require__unexpected_3_p_0((MR_String) "psqueue.m", (MR_String) "function \140psqueue.single_left\'/5", (MR_String) "error in single left rotation");
        }
#line 725 "psqueue.m"
      }
#line 724 "psqueue.m"
    return mercury__psqueue__Res_12;
#line 724 "psqueue.m"
  }
#line 665 "psqueue.m"
}

#line 664 "psqueue.m"
static MR_Word MR_CALL 
mercury__psqueue__balance_right_5_f_0(
#line 664 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_25,
#line 664 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_26,
#line 664 "psqueue.m"
  MR_Box mercury__psqueue__Key_7,
#line 664 "psqueue.m"
  MR_Box mercury__psqueue__Prio_8,
#line 664 "psqueue.m"
  MR_Word mercury__psqueue__L_9,
#line 664 "psqueue.m"
  MR_Box mercury__psqueue__SplitKey_10,
#line 664 "psqueue.m"
  MR_Word mercury__psqueue__R_11)
#line 664 "psqueue.m"
{
#line 703 "psqueue.m"
  {
#line 703 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 703 "psqueue.m"
    MR_Word mercury__psqueue__Res_12;
#line 703 "psqueue.m"
    MR_Word mercury__psqueue__TVL_13;
#line 711 "psqueue.m"
    MR_Word mercury__psqueue__LL_16;
#line 711 "psqueue.m"
    MR_Word mercury__psqueue__LR_18;
#line 705 "psqueue.m"
    MR_Box mercury__psqueue__V_14_14;
#line 705 "psqueue.m"
    MR_Box mercury__psqueue__V_15_15;
#line 705 "psqueue.m"
    MR_Box mercury__psqueue__V_17_17;

#line 635 "psqueue.m"
    if ((mercury__psqueue__L_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 634 "psqueue.m"
      mercury__psqueue__TVL_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 635 "psqueue.m"
    else
#line 636 "psqueue.m"
      {
#line 636 "psqueue.m"
        MR_Box mercury__psqueue__LK_31 = (MR_hl_field(MR_mktag(1), mercury__psqueue__L_9, (MR_Integer) 1));
#line 636 "psqueue.m"
        MR_Box mercury__psqueue__LP_32 = (MR_hl_field(MR_mktag(1), mercury__psqueue__L_9, (MR_Integer) 2));
#line 636 "psqueue.m"
        MR_Word mercury__psqueue__LL_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__L_9, (MR_Integer) 3)));
#line 636 "psqueue.m"
        MR_Box mercury__psqueue__SplitKey_34 = (MR_hl_field(MR_mktag(1), mercury__psqueue__L_9, (MR_Integer) 4));
#line 636 "psqueue.m"
        MR_Word mercury__psqueue__LR_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__L_9, (MR_Integer) 5)));
#line 636 "psqueue.m"
        MR_Integer mercury__psqueue__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__L_9, (MR_Integer) 0)));

#line 637 "psqueue.m"
        {
#line 637 "psqueue.m"
          mercury__psqueue__TVL_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 637 "psqueue.m"
          MR_hl_field(MR_mktag(1), mercury__psqueue__TVL_13, 0) = mercury__psqueue__LK_31;
#line 637 "psqueue.m"
          MR_hl_field(MR_mktag(1), mercury__psqueue__TVL_13, 1) = mercury__psqueue__LP_32;
#line 637 "psqueue.m"
          MR_hl_field(MR_mktag(1), mercury__psqueue__TVL_13, 2) = ((MR_Box) (mercury__psqueue__LL_33));
#line 637 "psqueue.m"
          MR_hl_field(MR_mktag(1), mercury__psqueue__TVL_13, 3) = mercury__psqueue__SplitKey_34;
#line 637 "psqueue.m"
          MR_hl_field(MR_mktag(1), mercury__psqueue__TVL_13, 4) = ((MR_Box) (mercury__psqueue__LR_35));
#line 637 "psqueue.m"
        }
#line 636 "psqueue.m"
      }
#line 705 "psqueue.m"
    mercury__psqueue__succeeded = ((MR_tag((MR_Word) mercury__psqueue__TVL_13)) == (MR_mktag((MR_Integer) 1)));
#line 705 "psqueue.m"
    if (mercury__psqueue__succeeded)
#line 705 "psqueue.m"
      {
#line 705 "psqueue.m"
        mercury__psqueue__V_14_14 = (MR_hl_field(MR_mktag(1), mercury__psqueue__TVL_13, (MR_Integer) 0));
#line 705 "psqueue.m"
        mercury__psqueue__V_15_15 = (MR_hl_field(MR_mktag(1), mercury__psqueue__TVL_13, (MR_Integer) 1));
#line 705 "psqueue.m"
        mercury__psqueue__LL_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__TVL_13, (MR_Integer) 2)));
#line 705 "psqueue.m"
        mercury__psqueue__V_17_17 = (MR_hl_field(MR_mktag(1), mercury__psqueue__TVL_13, (MR_Integer) 3));
#line 705 "psqueue.m"
        mercury__psqueue__LR_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__TVL_13, (MR_Integer) 4)));
#line 708 "psqueue.m"
        {
#line 706 "psqueue.m"
          MR_Word mercury__psqueue__CMP_19;
#line 706 "psqueue.m"
          MR_Integer mercury__psqueue__V_20_20;
#line 706 "psqueue.m"
          MR_Integer mercury__psqueue__V_21_21;

#line 565 "psqueue.m"
          if ((mercury__psqueue__LR_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 564 "psqueue.m"
            mercury__psqueue__V_20_20 = (MR_Integer) 0;
#line 565 "psqueue.m"
          else
#line 566 "psqueue.m"
            {
#line 566 "psqueue.m"
              MR_Box mercury__psqueue__V_38_38;
#line 566 "psqueue.m"
              MR_Box mercury__psqueue__V_39_39;
#line 566 "psqueue.m"
              MR_Word mercury__psqueue__V_40_40;
#line 566 "psqueue.m"
              MR_Box mercury__psqueue__V_41_41;
#line 566 "psqueue.m"
              MR_Word mercury__psqueue__V_42_42;

#line 566 "psqueue.m"
              mercury__psqueue__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LR_18, (MR_Integer) 0)));
#line 566 "psqueue.m"
              mercury__psqueue__V_38_38 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LR_18, (MR_Integer) 1));
#line 566 "psqueue.m"
              mercury__psqueue__V_39_39 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LR_18, (MR_Integer) 2));
#line 566 "psqueue.m"
              mercury__psqueue__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LR_18, (MR_Integer) 3)));
#line 566 "psqueue.m"
              mercury__psqueue__V_41_41 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LR_18, (MR_Integer) 4));
#line 566 "psqueue.m"
              mercury__psqueue__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LR_18, (MR_Integer) 5)));
#line 566 "psqueue.m"
            }
#line 565 "psqueue.m"
          if ((mercury__psqueue__LL_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 564 "psqueue.m"
            mercury__psqueue__V_21_21 = (MR_Integer) 0;
#line 565 "psqueue.m"
          else
#line 566 "psqueue.m"
            {
#line 566 "psqueue.m"
              MR_Box mercury__psqueue__V_45_45;
#line 566 "psqueue.m"
              MR_Box mercury__psqueue__V_46_46;
#line 566 "psqueue.m"
              MR_Word mercury__psqueue__V_47_47;
#line 566 "psqueue.m"
              MR_Box mercury__psqueue__V_48_48;
#line 566 "psqueue.m"
              MR_Word mercury__psqueue__V_49_49;

#line 566 "psqueue.m"
              mercury__psqueue__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LL_16, (MR_Integer) 0)));
#line 566 "psqueue.m"
              mercury__psqueue__V_45_45 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LL_16, (MR_Integer) 1));
#line 566 "psqueue.m"
              mercury__psqueue__V_46_46 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LL_16, (MR_Integer) 2));
#line 566 "psqueue.m"
              mercury__psqueue__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LL_16, (MR_Integer) 3)));
#line 566 "psqueue.m"
              mercury__psqueue__V_48_48 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LL_16, (MR_Integer) 4));
#line 566 "psqueue.m"
              mercury__psqueue__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LL_16, (MR_Integer) 5)));
#line 566 "psqueue.m"
            }
#line 66 "private_builtin.opt"
          mercury__psqueue__succeeded = (mercury__psqueue__V_20_20 < mercury__psqueue__V_21_21);
#line 69 "private_builtin.opt"
          if (mercury__psqueue__succeeded)
#line 68 "private_builtin.opt"
            mercury__psqueue__CMP_19 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
          else
#line 74 "private_builtin.opt"
            {
#line 71 "private_builtin.opt"
              mercury__psqueue__succeeded = (mercury__psqueue__V_20_20 == mercury__psqueue__V_21_21);
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
#line 706 "psqueue.m"
          mercury__psqueue__succeeded = (mercury__psqueue__CMP_19 == (MR_Integer) 1);
#line 708 "psqueue.m"
          if (mercury__psqueue__succeeded)
#line 707 "psqueue.m"
            {
#line 707 "psqueue.m"
              return mercury__psqueue__Res_12 = mercury__psqueue__single_right_5_f_0(mercury__psqueue__TypeInfo_for_K_25, mercury__psqueue__TypeInfo_for_P_26, mercury__psqueue__Key_7, mercury__psqueue__Prio_8, mercury__psqueue__TVL_13, mercury__psqueue__SplitKey_10, mercury__psqueue__R_11);
            }
#line 708 "psqueue.m"
          else
#line 756 "psqueue.m"
            {
#line 756 "psqueue.m"
              MR_Box mercury__psqueue__K2_59;
#line 756 "psqueue.m"
              MR_Box mercury__psqueue__P2_60;
#line 756 "psqueue.m"
              MR_Word mercury__psqueue__T1_61;
#line 756 "psqueue.m"
              MR_Box mercury__psqueue__S1_62;
#line 756 "psqueue.m"
              MR_Word mercury__psqueue__T2_63;

#line 751 "psqueue.m"
              mercury__psqueue__succeeded = ((MR_tag((MR_Word) mercury__psqueue__TVL_13)) == (MR_mktag((MR_Integer) 1)));
#line 751 "psqueue.m"
              if (mercury__psqueue__succeeded)
#line 751 "psqueue.m"
                {
#line 751 "psqueue.m"
                  mercury__psqueue__K2_59 = (MR_hl_field(MR_mktag(1), mercury__psqueue__TVL_13, (MR_Integer) 0));
#line 751 "psqueue.m"
                  mercury__psqueue__P2_60 = (MR_hl_field(MR_mktag(1), mercury__psqueue__TVL_13, (MR_Integer) 1));
#line 751 "psqueue.m"
                  mercury__psqueue__T1_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__TVL_13, (MR_Integer) 2)));
#line 751 "psqueue.m"
                  mercury__psqueue__S1_62 = (MR_hl_field(MR_mktag(1), mercury__psqueue__TVL_13, (MR_Integer) 3));
#line 751 "psqueue.m"
                  mercury__psqueue__T2_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__TVL_13, (MR_Integer) 4)));
#line 752 "psqueue.m"
                  {
#line 752 "psqueue.m"
                    MR_Word mercury__psqueue__V_64_64;
#line 752 "psqueue.m"
                    MR_Word mercury__psqueue__V_65_65;
#line 752 "psqueue.m"
                    MR_Word mercury__psqueue__V_66_66;

#line 635 "psqueue.m"
                    if ((mercury__psqueue__T2_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 634 "psqueue.m"
                      mercury__psqueue__V_66_66 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 635 "psqueue.m"
                    else
#line 636 "psqueue.m"
                      {
#line 636 "psqueue.m"
                        MR_Box mercury__psqueue__LK_73 = (MR_hl_field(MR_mktag(1), mercury__psqueue__T2_63, (MR_Integer) 1));
#line 636 "psqueue.m"
                        MR_Box mercury__psqueue__LP_74 = (MR_hl_field(MR_mktag(1), mercury__psqueue__T2_63, (MR_Integer) 2));
#line 636 "psqueue.m"
                        MR_Word mercury__psqueue__LL_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__T2_63, (MR_Integer) 3)));
#line 636 "psqueue.m"
                        MR_Box mercury__psqueue__SplitKey_76 = (MR_hl_field(MR_mktag(1), mercury__psqueue__T2_63, (MR_Integer) 4));
#line 636 "psqueue.m"
                        MR_Word mercury__psqueue__LR_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__T2_63, (MR_Integer) 5)));
#line 636 "psqueue.m"
                        MR_Integer mercury__psqueue__V_72_72 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__T2_63, (MR_Integer) 0)));

#line 637 "psqueue.m"
                        {
#line 637 "psqueue.m"
                          mercury__psqueue__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 637 "psqueue.m"
                          MR_hl_field(MR_mktag(1), mercury__psqueue__V_66_66, 0) = mercury__psqueue__LK_73;
#line 637 "psqueue.m"
                          MR_hl_field(MR_mktag(1), mercury__psqueue__V_66_66, 1) = mercury__psqueue__LP_74;
#line 637 "psqueue.m"
                          MR_hl_field(MR_mktag(1), mercury__psqueue__V_66_66, 2) = ((MR_Box) (mercury__psqueue__LL_75));
#line 637 "psqueue.m"
                          MR_hl_field(MR_mktag(1), mercury__psqueue__V_66_66, 3) = mercury__psqueue__SplitKey_76;
#line 637 "psqueue.m"
                          MR_hl_field(MR_mktag(1), mercury__psqueue__V_66_66, 4) = ((MR_Box) (mercury__psqueue__LR_77));
#line 637 "psqueue.m"
                        }
#line 636 "psqueue.m"
                      }
#line 753 "psqueue.m"
                    {
#line 753 "psqueue.m"
                      mercury__psqueue__V_65_65 = mercury__psqueue__single_left_5_f_0(mercury__psqueue__TypeInfo_for_K_25, mercury__psqueue__TypeInfo_for_P_26, mercury__psqueue__K2_59, mercury__psqueue__P2_60, mercury__psqueue__T1_61, mercury__psqueue__S1_62, mercury__psqueue__V_66_66);
                    }
#line 635 "psqueue.m"
                    if ((mercury__psqueue__V_65_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 634 "psqueue.m"
                      mercury__psqueue__V_64_64 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 635 "psqueue.m"
                    else
#line 636 "psqueue.m"
                      {
#line 636 "psqueue.m"
                        MR_Box mercury__psqueue__LK_81 = (MR_hl_field(MR_mktag(1), mercury__psqueue__V_65_65, (MR_Integer) 1));
#line 636 "psqueue.m"
                        MR_Box mercury__psqueue__LP_82 = (MR_hl_field(MR_mktag(1), mercury__psqueue__V_65_65, (MR_Integer) 2));
#line 636 "psqueue.m"
                        MR_Word mercury__psqueue__LL_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__V_65_65, (MR_Integer) 3)));
#line 636 "psqueue.m"
                        MR_Box mercury__psqueue__SplitKey_84 = (MR_hl_field(MR_mktag(1), mercury__psqueue__V_65_65, (MR_Integer) 4));
#line 636 "psqueue.m"
                        MR_Word mercury__psqueue__LR_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__V_65_65, (MR_Integer) 5)));
#line 636 "psqueue.m"
                        MR_Integer mercury__psqueue__V_80_80 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__V_65_65, (MR_Integer) 0)));

#line 637 "psqueue.m"
                        {
#line 637 "psqueue.m"
                          mercury__psqueue__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 637 "psqueue.m"
                          MR_hl_field(MR_mktag(1), mercury__psqueue__V_64_64, 0) = mercury__psqueue__LK_81;
#line 637 "psqueue.m"
                          MR_hl_field(MR_mktag(1), mercury__psqueue__V_64_64, 1) = mercury__psqueue__LP_82;
#line 637 "psqueue.m"
                          MR_hl_field(MR_mktag(1), mercury__psqueue__V_64_64, 2) = ((MR_Box) (mercury__psqueue__LL_83));
#line 637 "psqueue.m"
                          MR_hl_field(MR_mktag(1), mercury__psqueue__V_64_64, 3) = mercury__psqueue__SplitKey_84;
#line 637 "psqueue.m"
                          MR_hl_field(MR_mktag(1), mercury__psqueue__V_64_64, 4) = ((MR_Box) (mercury__psqueue__LR_85));
#line 637 "psqueue.m"
                        }
#line 636 "psqueue.m"
                      }
#line 752 "psqueue.m"
                    {
#line 752 "psqueue.m"
                      return mercury__psqueue__Res_12 = mercury__psqueue__single_right_5_f_0(mercury__psqueue__TypeInfo_for_K_25, mercury__psqueue__TypeInfo_for_P_26, mercury__psqueue__Key_7, mercury__psqueue__Prio_8, mercury__psqueue__V_64_64, mercury__psqueue__SplitKey_10, mercury__psqueue__R_11);
                    }
#line 752 "psqueue.m"
                  }
#line 751 "psqueue.m"
                }
#line 751 "psqueue.m"
              else
#line 757 "psqueue.m"
                {
#line 757 "psqueue.m"
                  {
#line 757 "psqueue.m"
                    mercury__require__unexpected_3_p_0((MR_String) "psqueue.m", (MR_String) "function \140psqueue.double_right\'/5", (MR_String) "error in double right rotation");
                  }
#line 757 "psqueue.m"
                }
#line 756 "psqueue.m"
            }
#line 708 "psqueue.m"
        }
#line 705 "psqueue.m"
      }
#line 705 "psqueue.m"
    else
#line 712 "psqueue.m"
      {
#line 712 "psqueue.m"
        {
#line 712 "psqueue.m"
          mercury__require__unexpected_3_p_0((MR_String) "psqueue.m", (MR_String) "function \140psqueue.balance_right\'/5", (MR_String) "error in right balance");
        }
#line 712 "psqueue.m"
      }
#line 703 "psqueue.m"
    return mercury__psqueue__Res_12;
#line 703 "psqueue.m"
  }
#line 664 "psqueue.m"
}

#line 663 "psqueue.m"
static MR_Word MR_CALL 
mercury__psqueue__balance_left_5_f_0(
#line 663 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_25,
#line 663 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_26,
#line 663 "psqueue.m"
  MR_Box mercury__psqueue__Key_7,
#line 663 "psqueue.m"
  MR_Box mercury__psqueue__Prio_8,
#line 663 "psqueue.m"
  MR_Word mercury__psqueue__L_9,
#line 663 "psqueue.m"
  MR_Box mercury__psqueue__SplitKey_10,
#line 663 "psqueue.m"
  MR_Word mercury__psqueue__R_11)
#line 663 "psqueue.m"
{
#line 691 "psqueue.m"
  {
#line 691 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 691 "psqueue.m"
    MR_Word mercury__psqueue__Res_12;
#line 691 "psqueue.m"
    MR_Word mercury__psqueue__TVR_13;
#line 699 "psqueue.m"
    MR_Word mercury__psqueue__RL_16;
#line 699 "psqueue.m"
    MR_Word mercury__psqueue__RR_18;
#line 693 "psqueue.m"
    MR_Box mercury__psqueue__V_14_14;
#line 693 "psqueue.m"
    MR_Box mercury__psqueue__V_15_15;
#line 693 "psqueue.m"
    MR_Box mercury__psqueue__V_17_17;

#line 635 "psqueue.m"
    if ((mercury__psqueue__R_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 634 "psqueue.m"
      mercury__psqueue__TVR_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 635 "psqueue.m"
    else
#line 636 "psqueue.m"
      {
#line 636 "psqueue.m"
        MR_Box mercury__psqueue__LK_31 = (MR_hl_field(MR_mktag(1), mercury__psqueue__R_11, (MR_Integer) 1));
#line 636 "psqueue.m"
        MR_Box mercury__psqueue__LP_32 = (MR_hl_field(MR_mktag(1), mercury__psqueue__R_11, (MR_Integer) 2));
#line 636 "psqueue.m"
        MR_Word mercury__psqueue__LL_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__R_11, (MR_Integer) 3)));
#line 636 "psqueue.m"
        MR_Box mercury__psqueue__SplitKey_34 = (MR_hl_field(MR_mktag(1), mercury__psqueue__R_11, (MR_Integer) 4));
#line 636 "psqueue.m"
        MR_Word mercury__psqueue__LR_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__R_11, (MR_Integer) 5)));
#line 636 "psqueue.m"
        MR_Integer mercury__psqueue__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__R_11, (MR_Integer) 0)));

#line 637 "psqueue.m"
        {
#line 637 "psqueue.m"
          mercury__psqueue__TVR_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 637 "psqueue.m"
          MR_hl_field(MR_mktag(1), mercury__psqueue__TVR_13, 0) = mercury__psqueue__LK_31;
#line 637 "psqueue.m"
          MR_hl_field(MR_mktag(1), mercury__psqueue__TVR_13, 1) = mercury__psqueue__LP_32;
#line 637 "psqueue.m"
          MR_hl_field(MR_mktag(1), mercury__psqueue__TVR_13, 2) = ((MR_Box) (mercury__psqueue__LL_33));
#line 637 "psqueue.m"
          MR_hl_field(MR_mktag(1), mercury__psqueue__TVR_13, 3) = mercury__psqueue__SplitKey_34;
#line 637 "psqueue.m"
          MR_hl_field(MR_mktag(1), mercury__psqueue__TVR_13, 4) = ((MR_Box) (mercury__psqueue__LR_35));
#line 637 "psqueue.m"
        }
#line 636 "psqueue.m"
      }
#line 693 "psqueue.m"
    mercury__psqueue__succeeded = ((MR_tag((MR_Word) mercury__psqueue__TVR_13)) == (MR_mktag((MR_Integer) 1)));
#line 693 "psqueue.m"
    if (mercury__psqueue__succeeded)
#line 693 "psqueue.m"
      {
#line 693 "psqueue.m"
        mercury__psqueue__V_14_14 = (MR_hl_field(MR_mktag(1), mercury__psqueue__TVR_13, (MR_Integer) 0));
#line 693 "psqueue.m"
        mercury__psqueue__V_15_15 = (MR_hl_field(MR_mktag(1), mercury__psqueue__TVR_13, (MR_Integer) 1));
#line 693 "psqueue.m"
        mercury__psqueue__RL_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__TVR_13, (MR_Integer) 2)));
#line 693 "psqueue.m"
        mercury__psqueue__V_17_17 = (MR_hl_field(MR_mktag(1), mercury__psqueue__TVR_13, (MR_Integer) 3));
#line 693 "psqueue.m"
        mercury__psqueue__RR_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__TVR_13, (MR_Integer) 4)));
#line 696 "psqueue.m"
        {
#line 694 "psqueue.m"
          MR_Word mercury__psqueue__CMP_19;
#line 694 "psqueue.m"
          MR_Integer mercury__psqueue__V_20_20;
#line 694 "psqueue.m"
          MR_Integer mercury__psqueue__V_21_21;

#line 565 "psqueue.m"
          if ((mercury__psqueue__RL_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 564 "psqueue.m"
            mercury__psqueue__V_20_20 = (MR_Integer) 0;
#line 565 "psqueue.m"
          else
#line 566 "psqueue.m"
            {
#line 566 "psqueue.m"
              MR_Box mercury__psqueue__V_38_38;
#line 566 "psqueue.m"
              MR_Box mercury__psqueue__V_39_39;
#line 566 "psqueue.m"
              MR_Word mercury__psqueue__V_40_40;
#line 566 "psqueue.m"
              MR_Box mercury__psqueue__V_41_41;
#line 566 "psqueue.m"
              MR_Word mercury__psqueue__V_42_42;

#line 566 "psqueue.m"
              mercury__psqueue__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__RL_16, (MR_Integer) 0)));
#line 566 "psqueue.m"
              mercury__psqueue__V_38_38 = (MR_hl_field(MR_mktag(1), mercury__psqueue__RL_16, (MR_Integer) 1));
#line 566 "psqueue.m"
              mercury__psqueue__V_39_39 = (MR_hl_field(MR_mktag(1), mercury__psqueue__RL_16, (MR_Integer) 2));
#line 566 "psqueue.m"
              mercury__psqueue__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__RL_16, (MR_Integer) 3)));
#line 566 "psqueue.m"
              mercury__psqueue__V_41_41 = (MR_hl_field(MR_mktag(1), mercury__psqueue__RL_16, (MR_Integer) 4));
#line 566 "psqueue.m"
              mercury__psqueue__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__RL_16, (MR_Integer) 5)));
#line 566 "psqueue.m"
            }
#line 565 "psqueue.m"
          if ((mercury__psqueue__RR_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 564 "psqueue.m"
            mercury__psqueue__V_21_21 = (MR_Integer) 0;
#line 565 "psqueue.m"
          else
#line 566 "psqueue.m"
            {
#line 566 "psqueue.m"
              MR_Box mercury__psqueue__V_45_45;
#line 566 "psqueue.m"
              MR_Box mercury__psqueue__V_46_46;
#line 566 "psqueue.m"
              MR_Word mercury__psqueue__V_47_47;
#line 566 "psqueue.m"
              MR_Box mercury__psqueue__V_48_48;
#line 566 "psqueue.m"
              MR_Word mercury__psqueue__V_49_49;

#line 566 "psqueue.m"
              mercury__psqueue__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__RR_18, (MR_Integer) 0)));
#line 566 "psqueue.m"
              mercury__psqueue__V_45_45 = (MR_hl_field(MR_mktag(1), mercury__psqueue__RR_18, (MR_Integer) 1));
#line 566 "psqueue.m"
              mercury__psqueue__V_46_46 = (MR_hl_field(MR_mktag(1), mercury__psqueue__RR_18, (MR_Integer) 2));
#line 566 "psqueue.m"
              mercury__psqueue__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__RR_18, (MR_Integer) 3)));
#line 566 "psqueue.m"
              mercury__psqueue__V_48_48 = (MR_hl_field(MR_mktag(1), mercury__psqueue__RR_18, (MR_Integer) 4));
#line 566 "psqueue.m"
              mercury__psqueue__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__RR_18, (MR_Integer) 5)));
#line 566 "psqueue.m"
            }
#line 66 "private_builtin.opt"
          mercury__psqueue__succeeded = (mercury__psqueue__V_20_20 < mercury__psqueue__V_21_21);
#line 69 "private_builtin.opt"
          if (mercury__psqueue__succeeded)
#line 68 "private_builtin.opt"
            mercury__psqueue__CMP_19 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
          else
#line 74 "private_builtin.opt"
            {
#line 71 "private_builtin.opt"
              mercury__psqueue__succeeded = (mercury__psqueue__V_20_20 == mercury__psqueue__V_21_21);
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
#line 694 "psqueue.m"
          mercury__psqueue__succeeded = (mercury__psqueue__CMP_19 == (MR_Integer) 1);
#line 696 "psqueue.m"
          if (mercury__psqueue__succeeded)
#line 695 "psqueue.m"
            {
#line 695 "psqueue.m"
              return mercury__psqueue__Res_12 = mercury__psqueue__single_left_5_f_0(mercury__psqueue__TypeInfo_for_K_25, mercury__psqueue__TypeInfo_for_P_26, mercury__psqueue__Key_7, mercury__psqueue__Prio_8, mercury__psqueue__L_9, mercury__psqueue__SplitKey_10, mercury__psqueue__TVR_13);
            }
#line 696 "psqueue.m"
          else
#line 746 "psqueue.m"
            {
#line 746 "psqueue.m"
              MR_Box mercury__psqueue__K2_59;
#line 746 "psqueue.m"
              MR_Box mercury__psqueue__P2_60;
#line 746 "psqueue.m"
              MR_Word mercury__psqueue__T2_61;
#line 746 "psqueue.m"
              MR_Box mercury__psqueue__S2_62;
#line 746 "psqueue.m"
              MR_Word mercury__psqueue__T3_63;

#line 742 "psqueue.m"
              mercury__psqueue__succeeded = ((MR_tag((MR_Word) mercury__psqueue__TVR_13)) == (MR_mktag((MR_Integer) 1)));
#line 742 "psqueue.m"
              if (mercury__psqueue__succeeded)
#line 742 "psqueue.m"
                {
#line 742 "psqueue.m"
                  mercury__psqueue__K2_59 = (MR_hl_field(MR_mktag(1), mercury__psqueue__TVR_13, (MR_Integer) 0));
#line 742 "psqueue.m"
                  mercury__psqueue__P2_60 = (MR_hl_field(MR_mktag(1), mercury__psqueue__TVR_13, (MR_Integer) 1));
#line 742 "psqueue.m"
                  mercury__psqueue__T2_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__TVR_13, (MR_Integer) 2)));
#line 742 "psqueue.m"
                  mercury__psqueue__S2_62 = (MR_hl_field(MR_mktag(1), mercury__psqueue__TVR_13, (MR_Integer) 3));
#line 742 "psqueue.m"
                  mercury__psqueue__T3_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__TVR_13, (MR_Integer) 4)));
#line 743 "psqueue.m"
                  {
#line 743 "psqueue.m"
                    MR_Word mercury__psqueue__V_64_64;
#line 743 "psqueue.m"
                    MR_Word mercury__psqueue__V_65_65;
#line 743 "psqueue.m"
                    MR_Word mercury__psqueue__V_66_66;

#line 635 "psqueue.m"
                    if ((mercury__psqueue__T2_61 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 634 "psqueue.m"
                      mercury__psqueue__V_66_66 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 635 "psqueue.m"
                    else
#line 636 "psqueue.m"
                      {
#line 636 "psqueue.m"
                        MR_Box mercury__psqueue__LK_73 = (MR_hl_field(MR_mktag(1), mercury__psqueue__T2_61, (MR_Integer) 1));
#line 636 "psqueue.m"
                        MR_Box mercury__psqueue__LP_74 = (MR_hl_field(MR_mktag(1), mercury__psqueue__T2_61, (MR_Integer) 2));
#line 636 "psqueue.m"
                        MR_Word mercury__psqueue__LL_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__T2_61, (MR_Integer) 3)));
#line 636 "psqueue.m"
                        MR_Box mercury__psqueue__SplitKey_76 = (MR_hl_field(MR_mktag(1), mercury__psqueue__T2_61, (MR_Integer) 4));
#line 636 "psqueue.m"
                        MR_Word mercury__psqueue__LR_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__T2_61, (MR_Integer) 5)));
#line 636 "psqueue.m"
                        MR_Integer mercury__psqueue__V_72_72 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__T2_61, (MR_Integer) 0)));

#line 637 "psqueue.m"
                        {
#line 637 "psqueue.m"
                          mercury__psqueue__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 637 "psqueue.m"
                          MR_hl_field(MR_mktag(1), mercury__psqueue__V_66_66, 0) = mercury__psqueue__LK_73;
#line 637 "psqueue.m"
                          MR_hl_field(MR_mktag(1), mercury__psqueue__V_66_66, 1) = mercury__psqueue__LP_74;
#line 637 "psqueue.m"
                          MR_hl_field(MR_mktag(1), mercury__psqueue__V_66_66, 2) = ((MR_Box) (mercury__psqueue__LL_75));
#line 637 "psqueue.m"
                          MR_hl_field(MR_mktag(1), mercury__psqueue__V_66_66, 3) = mercury__psqueue__SplitKey_76;
#line 637 "psqueue.m"
                          MR_hl_field(MR_mktag(1), mercury__psqueue__V_66_66, 4) = ((MR_Box) (mercury__psqueue__LR_77));
#line 637 "psqueue.m"
                        }
#line 636 "psqueue.m"
                      }
#line 744 "psqueue.m"
                    {
#line 744 "psqueue.m"
                      mercury__psqueue__V_65_65 = mercury__psqueue__single_right_5_f_0(mercury__psqueue__TypeInfo_for_K_25, mercury__psqueue__TypeInfo_for_P_26, mercury__psqueue__K2_59, mercury__psqueue__P2_60, mercury__psqueue__V_66_66, mercury__psqueue__S2_62, mercury__psqueue__T3_63);
                    }
#line 635 "psqueue.m"
                    if ((mercury__psqueue__V_65_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 634 "psqueue.m"
                      mercury__psqueue__V_64_64 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 635 "psqueue.m"
                    else
#line 636 "psqueue.m"
                      {
#line 636 "psqueue.m"
                        MR_Box mercury__psqueue__LK_81 = (MR_hl_field(MR_mktag(1), mercury__psqueue__V_65_65, (MR_Integer) 1));
#line 636 "psqueue.m"
                        MR_Box mercury__psqueue__LP_82 = (MR_hl_field(MR_mktag(1), mercury__psqueue__V_65_65, (MR_Integer) 2));
#line 636 "psqueue.m"
                        MR_Word mercury__psqueue__LL_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__V_65_65, (MR_Integer) 3)));
#line 636 "psqueue.m"
                        MR_Box mercury__psqueue__SplitKey_84 = (MR_hl_field(MR_mktag(1), mercury__psqueue__V_65_65, (MR_Integer) 4));
#line 636 "psqueue.m"
                        MR_Word mercury__psqueue__LR_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__V_65_65, (MR_Integer) 5)));
#line 636 "psqueue.m"
                        MR_Integer mercury__psqueue__V_80_80 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__V_65_65, (MR_Integer) 0)));

#line 637 "psqueue.m"
                        {
#line 637 "psqueue.m"
                          mercury__psqueue__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 637 "psqueue.m"
                          MR_hl_field(MR_mktag(1), mercury__psqueue__V_64_64, 0) = mercury__psqueue__LK_81;
#line 637 "psqueue.m"
                          MR_hl_field(MR_mktag(1), mercury__psqueue__V_64_64, 1) = mercury__psqueue__LP_82;
#line 637 "psqueue.m"
                          MR_hl_field(MR_mktag(1), mercury__psqueue__V_64_64, 2) = ((MR_Box) (mercury__psqueue__LL_83));
#line 637 "psqueue.m"
                          MR_hl_field(MR_mktag(1), mercury__psqueue__V_64_64, 3) = mercury__psqueue__SplitKey_84;
#line 637 "psqueue.m"
                          MR_hl_field(MR_mktag(1), mercury__psqueue__V_64_64, 4) = ((MR_Box) (mercury__psqueue__LR_85));
#line 637 "psqueue.m"
                        }
#line 636 "psqueue.m"
                      }
#line 743 "psqueue.m"
                    {
#line 743 "psqueue.m"
                      return mercury__psqueue__Res_12 = mercury__psqueue__single_left_5_f_0(mercury__psqueue__TypeInfo_for_K_25, mercury__psqueue__TypeInfo_for_P_26, mercury__psqueue__Key_7, mercury__psqueue__Prio_8, mercury__psqueue__L_9, mercury__psqueue__SplitKey_10, mercury__psqueue__V_64_64);
                    }
#line 743 "psqueue.m"
                  }
#line 742 "psqueue.m"
                }
#line 742 "psqueue.m"
              else
#line 747 "psqueue.m"
                {
#line 747 "psqueue.m"
                  {
#line 747 "psqueue.m"
                    mercury__require__unexpected_3_p_0((MR_String) "psqueue.m", (MR_String) "function \140psqueue.double_left\'/5", (MR_String) "error in doulbe left rotation");
                  }
#line 747 "psqueue.m"
                }
#line 746 "psqueue.m"
            }
#line 696 "psqueue.m"
        }
#line 693 "psqueue.m"
      }
#line 693 "psqueue.m"
    else
#line 700 "psqueue.m"
      {
#line 700 "psqueue.m"
        {
#line 700 "psqueue.m"
          mercury__require__unexpected_3_p_0((MR_String) "psqueue.m", (MR_String) "function \140psqueue.balance_left\'/5", (MR_String) "error in left balance");
        }
#line 700 "psqueue.m"
      }
#line 691 "psqueue.m"
    return mercury__psqueue__Res_12;
#line 691 "psqueue.m"
  }
#line 663 "psqueue.m"
}

#line 662 "psqueue.m"
static MR_Word MR_CALL 
mercury__psqueue__balance_5_f_0(
#line 662 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_24,
#line 662 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_25,
#line 662 "psqueue.m"
  MR_Box mercury__psqueue__Key_7,
#line 662 "psqueue.m"
  MR_Box mercury__psqueue__Prio_8,
#line 662 "psqueue.m"
  MR_Word mercury__psqueue__L_9,
#line 662 "psqueue.m"
  MR_Box mercury__psqueue__SplitKey_10,
#line 662 "psqueue.m"
  MR_Word mercury__psqueue__R_11)
#line 662 "psqueue.m"
{
#line 674 "psqueue.m"
  {
#line 674 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 674 "psqueue.m"
    MR_Word mercury__psqueue__Res_12;
#line 674 "psqueue.m"
    MR_Integer mercury__psqueue__SizeL_13;
#line 674 "psqueue.m"
    MR_Integer mercury__psqueue__SizeR_14;
#line 677 "psqueue.m"
    MR_Integer mercury__psqueue__V_16_16;

#line 565 "psqueue.m"
    if ((mercury__psqueue__L_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 564 "psqueue.m"
      mercury__psqueue__SizeL_13 = (MR_Integer) 0;
#line 565 "psqueue.m"
    else
#line 566 "psqueue.m"
      {
#line 566 "psqueue.m"
        MR_Box mercury__psqueue__V_30_30;
#line 566 "psqueue.m"
        MR_Box mercury__psqueue__V_31_31;
#line 566 "psqueue.m"
        MR_Word mercury__psqueue__V_32_32;
#line 566 "psqueue.m"
        MR_Box mercury__psqueue__V_33_33;
#line 566 "psqueue.m"
        MR_Word mercury__psqueue__V_34_34;

#line 566 "psqueue.m"
        mercury__psqueue__SizeL_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__L_9, (MR_Integer) 0)));
#line 566 "psqueue.m"
        mercury__psqueue__V_30_30 = (MR_hl_field(MR_mktag(1), mercury__psqueue__L_9, (MR_Integer) 1));
#line 566 "psqueue.m"
        mercury__psqueue__V_31_31 = (MR_hl_field(MR_mktag(1), mercury__psqueue__L_9, (MR_Integer) 2));
#line 566 "psqueue.m"
        mercury__psqueue__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__L_9, (MR_Integer) 3)));
#line 566 "psqueue.m"
        mercury__psqueue__V_33_33 = (MR_hl_field(MR_mktag(1), mercury__psqueue__L_9, (MR_Integer) 4));
#line 566 "psqueue.m"
        mercury__psqueue__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__L_9, (MR_Integer) 5)));
#line 566 "psqueue.m"
      }
#line 565 "psqueue.m"
    if ((mercury__psqueue__R_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 564 "psqueue.m"
      mercury__psqueue__SizeR_14 = (MR_Integer) 0;
#line 565 "psqueue.m"
    else
#line 566 "psqueue.m"
      {
#line 566 "psqueue.m"
        MR_Box mercury__psqueue__V_37_37;
#line 566 "psqueue.m"
        MR_Box mercury__psqueue__V_38_38;
#line 566 "psqueue.m"
        MR_Word mercury__psqueue__V_39_39;
#line 566 "psqueue.m"
        MR_Box mercury__psqueue__V_40_40;
#line 566 "psqueue.m"
        MR_Word mercury__psqueue__V_41_41;

#line 566 "psqueue.m"
        mercury__psqueue__SizeR_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__R_11, (MR_Integer) 0)));
#line 566 "psqueue.m"
        mercury__psqueue__V_37_37 = (MR_hl_field(MR_mktag(1), mercury__psqueue__R_11, (MR_Integer) 1));
#line 566 "psqueue.m"
        mercury__psqueue__V_38_38 = (MR_hl_field(MR_mktag(1), mercury__psqueue__R_11, (MR_Integer) 2));
#line 566 "psqueue.m"
        mercury__psqueue__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__R_11, (MR_Integer) 3)));
#line 566 "psqueue.m"
        mercury__psqueue__V_40_40 = (MR_hl_field(MR_mktag(1), mercury__psqueue__R_11, (MR_Integer) 4));
#line 566 "psqueue.m"
        mercury__psqueue__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__R_11, (MR_Integer) 5)));
#line 566 "psqueue.m"
      }
#line 677 "psqueue.m"
    mercury__psqueue__V_16_16 = (mercury__psqueue__SizeR_14 + mercury__psqueue__SizeL_13);
#line 677 "psqueue.m"
    mercury__psqueue__succeeded = (mercury__psqueue__V_16_16 < (MR_Integer) 2);
#line 679 "psqueue.m"
    if (mercury__psqueue__succeeded)
#line 648 "psqueue.m"
      {
#line 648 "psqueue.m"
        MR_Integer mercury__psqueue__Size_48;
#line 648 "psqueue.m"
        MR_Integer mercury__psqueue__V_49_49;
#line 648 "psqueue.m"
        MR_Integer mercury__psqueue__V_51_51;
#line 648 "psqueue.m"
        MR_Integer mercury__psqueue__V_52_52;

#line 565 "psqueue.m"
        if ((mercury__psqueue__L_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 564 "psqueue.m"
          mercury__psqueue__V_51_51 = (MR_Integer) 0;
#line 565 "psqueue.m"
        else
#line 566 "psqueue.m"
          {
#line 566 "psqueue.m"
            MR_Box mercury__psqueue__V_55_55;
#line 566 "psqueue.m"
            MR_Box mercury__psqueue__V_56_56;
#line 566 "psqueue.m"
            MR_Word mercury__psqueue__V_57_57;
#line 566 "psqueue.m"
            MR_Box mercury__psqueue__V_58_58;
#line 566 "psqueue.m"
            MR_Word mercury__psqueue__V_59_59;

#line 566 "psqueue.m"
            mercury__psqueue__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__L_9, (MR_Integer) 0)));
#line 566 "psqueue.m"
            mercury__psqueue__V_55_55 = (MR_hl_field(MR_mktag(1), mercury__psqueue__L_9, (MR_Integer) 1));
#line 566 "psqueue.m"
            mercury__psqueue__V_56_56 = (MR_hl_field(MR_mktag(1), mercury__psqueue__L_9, (MR_Integer) 2));
#line 566 "psqueue.m"
            mercury__psqueue__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__L_9, (MR_Integer) 3)));
#line 566 "psqueue.m"
            mercury__psqueue__V_58_58 = (MR_hl_field(MR_mktag(1), mercury__psqueue__L_9, (MR_Integer) 4));
#line 566 "psqueue.m"
            mercury__psqueue__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__L_9, (MR_Integer) 5)));
#line 566 "psqueue.m"
          }
#line 649 "psqueue.m"
        mercury__psqueue__V_49_49 = ((MR_Integer) 1 + mercury__psqueue__V_51_51);
#line 565 "psqueue.m"
        if ((mercury__psqueue__R_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 564 "psqueue.m"
          mercury__psqueue__V_52_52 = (MR_Integer) 0;
#line 565 "psqueue.m"
        else
#line 566 "psqueue.m"
          {
#line 566 "psqueue.m"
            MR_Box mercury__psqueue__V_62_62;
#line 566 "psqueue.m"
            MR_Box mercury__psqueue__V_63_63;
#line 566 "psqueue.m"
            MR_Word mercury__psqueue__V_64_64;
#line 566 "psqueue.m"
            MR_Box mercury__psqueue__V_65_65;
#line 566 "psqueue.m"
            MR_Word mercury__psqueue__V_66_66;

#line 566 "psqueue.m"
            mercury__psqueue__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__R_11, (MR_Integer) 0)));
#line 566 "psqueue.m"
            mercury__psqueue__V_62_62 = (MR_hl_field(MR_mktag(1), mercury__psqueue__R_11, (MR_Integer) 1));
#line 566 "psqueue.m"
            mercury__psqueue__V_63_63 = (MR_hl_field(MR_mktag(1), mercury__psqueue__R_11, (MR_Integer) 2));
#line 566 "psqueue.m"
            mercury__psqueue__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__R_11, (MR_Integer) 3)));
#line 566 "psqueue.m"
            mercury__psqueue__V_65_65 = (MR_hl_field(MR_mktag(1), mercury__psqueue__R_11, (MR_Integer) 4));
#line 566 "psqueue.m"
            mercury__psqueue__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__R_11, (MR_Integer) 5)));
#line 566 "psqueue.m"
          }
#line 649 "psqueue.m"
        mercury__psqueue__Size_48 = (mercury__psqueue__V_49_49 + mercury__psqueue__V_52_52);
#line 650 "psqueue.m"
        {
#line 650 "psqueue.m"
          mercury__psqueue__Res_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 650 "psqueue.m"
          MR_hl_field(MR_mktag(1), mercury__psqueue__Res_12, 0) = ((MR_Box) (mercury__psqueue__Size_48));
#line 650 "psqueue.m"
          MR_hl_field(MR_mktag(1), mercury__psqueue__Res_12, 1) = mercury__psqueue__Key_7;
#line 650 "psqueue.m"
          MR_hl_field(MR_mktag(1), mercury__psqueue__Res_12, 2) = mercury__psqueue__Prio_8;
#line 650 "psqueue.m"
          MR_hl_field(MR_mktag(1), mercury__psqueue__Res_12, 3) = ((MR_Box) (mercury__psqueue__L_9));
#line 650 "psqueue.m"
          MR_hl_field(MR_mktag(1), mercury__psqueue__Res_12, 4) = mercury__psqueue__SplitKey_10;
#line 650 "psqueue.m"
          MR_hl_field(MR_mktag(1), mercury__psqueue__Res_12, 5) = ((MR_Box) (mercury__psqueue__R_11));
#line 650 "psqueue.m"
        }
#line 648 "psqueue.m"
      }
#line 679 "psqueue.m"
    else
#line 682 "psqueue.m"
      {
#line 680 "psqueue.m"
        MR_Word mercury__psqueue__CMP_15;
#line 680 "psqueue.m"
        MR_Integer mercury__psqueue__V_18_18 = ((MR_Integer) 4 * mercury__psqueue__SizeL_13);

#line 66 "private_builtin.opt"
        mercury__psqueue__succeeded = (mercury__psqueue__SizeR_14 < mercury__psqueue__V_18_18);
#line 69 "private_builtin.opt"
        if (mercury__psqueue__succeeded)
#line 68 "private_builtin.opt"
          mercury__psqueue__CMP_15 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
        else
#line 74 "private_builtin.opt"
          {
#line 71 "private_builtin.opt"
            mercury__psqueue__succeeded = (mercury__psqueue__SizeR_14 == mercury__psqueue__V_18_18);
#line 74 "private_builtin.opt"
            if (mercury__psqueue__succeeded)
#line 73 "private_builtin.opt"
              mercury__psqueue__CMP_15 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
            else
#line 75 "private_builtin.opt"
              mercury__psqueue__CMP_15 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
          }
#line 680 "psqueue.m"
        mercury__psqueue__succeeded = (mercury__psqueue__CMP_15 == (MR_Integer) 2);
#line 682 "psqueue.m"
        if (mercury__psqueue__succeeded)
#line 681 "psqueue.m"
          {
#line 681 "psqueue.m"
            return mercury__psqueue__Res_12 = mercury__psqueue__balance_left_5_f_0(mercury__psqueue__TypeInfo_for_K_24, mercury__psqueue__TypeInfo_for_P_25, mercury__psqueue__Key_7, mercury__psqueue__Prio_8, mercury__psqueue__L_9, mercury__psqueue__SplitKey_10, mercury__psqueue__R_11);
          }
#line 682 "psqueue.m"
        else
#line 685 "psqueue.m"
          {
#line 683 "psqueue.m"
            MR_Integer mercury__psqueue__V_20_20 = ((MR_Integer) 4 * mercury__psqueue__SizeR_14);
#line 683 "psqueue.m"
            MR_Word mercury__psqueue__CMP_22;

#line 66 "private_builtin.opt"
            mercury__psqueue__succeeded = (mercury__psqueue__SizeL_13 < mercury__psqueue__V_20_20);
#line 69 "private_builtin.opt"
            if (mercury__psqueue__succeeded)
#line 68 "private_builtin.opt"
              mercury__psqueue__CMP_22 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
            else
#line 74 "private_builtin.opt"
              {
#line 71 "private_builtin.opt"
                mercury__psqueue__succeeded = (mercury__psqueue__SizeL_13 == mercury__psqueue__V_20_20);
#line 74 "private_builtin.opt"
                if (mercury__psqueue__succeeded)
#line 73 "private_builtin.opt"
                  mercury__psqueue__CMP_22 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                else
#line 75 "private_builtin.opt"
                  mercury__psqueue__CMP_22 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
              }
#line 683 "psqueue.m"
            mercury__psqueue__succeeded = (mercury__psqueue__CMP_22 == (MR_Integer) 2);
#line 685 "psqueue.m"
            if (mercury__psqueue__succeeded)
#line 684 "psqueue.m"
              {
#line 684 "psqueue.m"
                return mercury__psqueue__Res_12 = mercury__psqueue__balance_right_5_f_0(mercury__psqueue__TypeInfo_for_K_24, mercury__psqueue__TypeInfo_for_P_25, mercury__psqueue__Key_7, mercury__psqueue__Prio_8, mercury__psqueue__L_9, mercury__psqueue__SplitKey_10, mercury__psqueue__R_11);
              }
#line 685 "psqueue.m"
            else
#line 686 "psqueue.m"
              {
#line 686 "psqueue.m"
                return mercury__psqueue__Res_12 = mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_111_110_115_116_114_117_99_116_95_110_111_100_101_95_95_91_49_44_32_50_93_95_48_5_f_0(mercury__psqueue__Key_7, mercury__psqueue__Prio_8, mercury__psqueue__L_9, mercury__psqueue__SplitKey_10, mercury__psqueue__R_11);
              }
#line 685 "psqueue.m"
          }
#line 682 "psqueue.m"
      }
#line 674 "psqueue.m"
    return mercury__psqueue__Res_12;
#line 674 "psqueue.m"
  }
#line 662 "psqueue.m"
}

#line 603 "psqueue.m"
MR_Word MR_CALL 
mercury__psqueue__tournament_view_1_f_0(
#line 603 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_19,
#line 603 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_20,
#line 603 "psqueue.m"
  MR_Word mercury__psqueue__PSQ_3)
#line 603 "psqueue.m"
{
#line 609 "psqueue.m"
  {
#line 609 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 609 "psqueue.m"
    MR_Word mercury__psqueue__Res_4;

#line 609 "psqueue.m"
    if ((mercury__psqueue__PSQ_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 608 "psqueue.m"
      mercury__psqueue__Res_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 609 "psqueue.m"
    else
#line 610 "psqueue.m"
      {
#line 610 "psqueue.m"
        MR_Box mercury__psqueue__K_5 = (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_3, (MR_Integer) 0));
#line 610 "psqueue.m"
        MR_Box mercury__psqueue__P_6 = (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_3, (MR_Integer) 1));
#line 610 "psqueue.m"
        MR_Word mercury__psqueue__LTree_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_3, (MR_Integer) 2)));
#line 610 "psqueue.m"
        MR_Box mercury__psqueue__MaxKey_8 = (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_3, (MR_Integer) 3));

#line 614 "psqueue.m"
        if ((mercury__psqueue__LTree_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 613 "psqueue.m"
          {
#line 613 "psqueue.m"
            mercury__psqueue__Res_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 613 "psqueue.m"
            MR_hl_field(MR_mktag(1), mercury__psqueue__Res_4, 0) = mercury__psqueue__K_5;
#line 613 "psqueue.m"
            MR_hl_field(MR_mktag(1), mercury__psqueue__Res_4, 1) = mercury__psqueue__P_6;
#line 613 "psqueue.m"
          }
#line 614 "psqueue.m"
        else
#line 615 "psqueue.m"
          {
#line 615 "psqueue.m"
            MR_Box mercury__psqueue__LK_10 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_7, (MR_Integer) 1));
#line 615 "psqueue.m"
            MR_Box mercury__psqueue__LP_11 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_7, (MR_Integer) 2));
#line 615 "psqueue.m"
            MR_Word mercury__psqueue__TL_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_7, (MR_Integer) 3)));
#line 615 "psqueue.m"
            MR_Box mercury__psqueue__SplitKey_13 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_7, (MR_Integer) 4));
#line 615 "psqueue.m"
            MR_Word mercury__psqueue__TR_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_7, (MR_Integer) 5)));
#line 615 "psqueue.m"
            MR_Integer mercury__psqueue__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_7, (MR_Integer) 0)));
#line 443 "psqueue.m"
            MR_Word mercury__psqueue__CMP_23;

#line 444 "psqueue.m"
            {
#line 444 "psqueue.m"
              mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_20, &mercury__psqueue__CMP_23, mercury__psqueue__LK_10, mercury__psqueue__SplitKey_13);
            }
#line 446 "psqueue.m"
            if ((mercury__psqueue__CMP_23 == (MR_Integer) 1))
#line 445 "psqueue.m"
              mercury__psqueue__succeeded = MR_TRUE;
#line 446 "psqueue.m"
            else
#line 446 "psqueue.m"
              if ((mercury__psqueue__CMP_23 == (MR_Integer) 0))
#line 446 "psqueue.m"
                mercury__psqueue__succeeded = MR_TRUE;
#line 446 "psqueue.m"
              else
#line 446 "psqueue.m"
                mercury__psqueue__succeeded = MR_FALSE;
#line 619 "psqueue.m"
            if (mercury__psqueue__succeeded)
#line 617 "psqueue.m"
              {
#line 617 "psqueue.m"
                MR_Word mercury__psqueue__V_15_15;
#line 617 "psqueue.m"
                MR_Word mercury__psqueue__V_16_16;

#line 617 "psqueue.m"
                {
#line 617 "psqueue.m"
                  mercury__psqueue__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 617 "psqueue.m"
                  MR_hl_field(MR_mktag(1), mercury__psqueue__V_15_15, 0) = mercury__psqueue__LK_10;
#line 617 "psqueue.m"
                  MR_hl_field(MR_mktag(1), mercury__psqueue__V_15_15, 1) = mercury__psqueue__LP_11;
#line 617 "psqueue.m"
                  MR_hl_field(MR_mktag(1), mercury__psqueue__V_15_15, 2) = ((MR_Box) (mercury__psqueue__TL_12));
#line 617 "psqueue.m"
                  MR_hl_field(MR_mktag(1), mercury__psqueue__V_15_15, 3) = mercury__psqueue__SplitKey_13;
#line 617 "psqueue.m"
                }
#line 618 "psqueue.m"
                {
#line 618 "psqueue.m"
                  mercury__psqueue__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 618 "psqueue.m"
                  MR_hl_field(MR_mktag(1), mercury__psqueue__V_16_16, 0) = mercury__psqueue__K_5;
#line 618 "psqueue.m"
                  MR_hl_field(MR_mktag(1), mercury__psqueue__V_16_16, 1) = mercury__psqueue__P_6;
#line 618 "psqueue.m"
                  MR_hl_field(MR_mktag(1), mercury__psqueue__V_16_16, 2) = ((MR_Box) (mercury__psqueue__TR_14));
#line 618 "psqueue.m"
                  MR_hl_field(MR_mktag(1), mercury__psqueue__V_16_16, 3) = mercury__psqueue__MaxKey_8;
#line 618 "psqueue.m"
                }
#line 617 "psqueue.m"
                {
#line 617 "psqueue.m"
                  mercury__psqueue__Res_4 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 617 "psqueue.m"
                  MR_hl_field(MR_mktag(2), mercury__psqueue__Res_4, 0) = ((MR_Box) (mercury__psqueue__V_15_15));
#line 617 "psqueue.m"
                  MR_hl_field(MR_mktag(2), mercury__psqueue__Res_4, 1) = ((MR_Box) (mercury__psqueue__V_16_16));
#line 617 "psqueue.m"
                }
#line 617 "psqueue.m"
              }
#line 619 "psqueue.m"
            else
#line 620 "psqueue.m"
              {
#line 620 "psqueue.m"
                MR_Word mercury__psqueue__V_17_17;
#line 620 "psqueue.m"
                MR_Word mercury__psqueue__V_18_18;

#line 620 "psqueue.m"
                {
#line 620 "psqueue.m"
                  mercury__psqueue__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 620 "psqueue.m"
                  MR_hl_field(MR_mktag(1), mercury__psqueue__V_17_17, 0) = mercury__psqueue__K_5;
#line 620 "psqueue.m"
                  MR_hl_field(MR_mktag(1), mercury__psqueue__V_17_17, 1) = mercury__psqueue__P_6;
#line 620 "psqueue.m"
                  MR_hl_field(MR_mktag(1), mercury__psqueue__V_17_17, 2) = ((MR_Box) (mercury__psqueue__TL_12));
#line 620 "psqueue.m"
                  MR_hl_field(MR_mktag(1), mercury__psqueue__V_17_17, 3) = mercury__psqueue__SplitKey_13;
#line 620 "psqueue.m"
                }
#line 621 "psqueue.m"
                {
#line 621 "psqueue.m"
                  mercury__psqueue__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 621 "psqueue.m"
                  MR_hl_field(MR_mktag(1), mercury__psqueue__V_18_18, 0) = mercury__psqueue__LK_10;
#line 621 "psqueue.m"
                  MR_hl_field(MR_mktag(1), mercury__psqueue__V_18_18, 1) = mercury__psqueue__LP_11;
#line 621 "psqueue.m"
                  MR_hl_field(MR_mktag(1), mercury__psqueue__V_18_18, 2) = ((MR_Box) (mercury__psqueue__TR_14));
#line 621 "psqueue.m"
                  MR_hl_field(MR_mktag(1), mercury__psqueue__V_18_18, 3) = mercury__psqueue__MaxKey_8;
#line 621 "psqueue.m"
                }
#line 620 "psqueue.m"
                {
#line 620 "psqueue.m"
                  mercury__psqueue__Res_4 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 620 "psqueue.m"
                  MR_hl_field(MR_mktag(2), mercury__psqueue__Res_4, 0) = ((MR_Box) (mercury__psqueue__V_17_17));
#line 620 "psqueue.m"
                  MR_hl_field(MR_mktag(2), mercury__psqueue__Res_4, 1) = ((MR_Box) (mercury__psqueue__V_18_18));
#line 620 "psqueue.m"
                }
#line 620 "psqueue.m"
              }
#line 615 "psqueue.m"
          }
#line 610 "psqueue.m"
      }
#line 609 "psqueue.m"
    return mercury__psqueue__Res_4;
#line 609 "psqueue.m"
  }
#line 603 "psqueue.m"
}

#line 560 "psqueue.m"
MR_Integer MR_CALL 
mercury__psqueue__ltree_size_1_f_0(
#line 560 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_10,
#line 560 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_11,
#line 560 "psqueue.m"
  MR_Word mercury__psqueue__LTree_3)
#line 560 "psqueue.m"
{
#line 565 "psqueue.m"
  {
#line 565 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 565 "psqueue.m"
    MR_Integer mercury__psqueue__Res_4;

#line 565 "psqueue.m"
    if ((mercury__psqueue__LTree_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 564 "psqueue.m"
      mercury__psqueue__Res_4 = (MR_Integer) 0;
#line 565 "psqueue.m"
    else
#line 566 "psqueue.m"
      {
#line 566 "psqueue.m"
        MR_Box mercury__psqueue__V_5_5;
#line 566 "psqueue.m"
        MR_Box mercury__psqueue__V_6_6;
#line 566 "psqueue.m"
        MR_Word mercury__psqueue__V_7_7;
#line 566 "psqueue.m"
        MR_Box mercury__psqueue__V_8_8;
#line 566 "psqueue.m"
        MR_Word mercury__psqueue__V_9_9;

#line 566 "psqueue.m"
        mercury__psqueue__Res_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_3, (MR_Integer) 0)));
#line 566 "psqueue.m"
        mercury__psqueue__V_5_5 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_3, (MR_Integer) 1));
#line 566 "psqueue.m"
        mercury__psqueue__V_6_6 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_3, (MR_Integer) 2));
#line 566 "psqueue.m"
        mercury__psqueue__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_3, (MR_Integer) 3)));
#line 566 "psqueue.m"
        mercury__psqueue__V_8_8 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_3, (MR_Integer) 4));
#line 566 "psqueue.m"
        mercury__psqueue__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_3, (MR_Integer) 5)));
#line 566 "psqueue.m"
      }
#line 565 "psqueue.m"
    return mercury__psqueue__Res_4;
#line 565 "psqueue.m"
  }
#line 560 "psqueue.m"
}

#line 485 "psqueue.m"
MR_bool MR_CALL 
mercury__psqueue__search_tv_3_p_0(
#line 485 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_15,
#line 485 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_16,
#line 485 "psqueue.m"
  MR_Word mercury__psqueue__TV_4,
#line 485 "psqueue.m"
  MR_Box mercury__psqueue__K_5,
#line 485 "psqueue.m"
  MR_Box * mercury__psqueue__Res_6)
#line 485 "psqueue.m"
{
#line 492 "psqueue.m"
  while (MR_TRUE)
#line 492 "psqueue.m"
    {
#line 492 "psqueue.m"
      /* tailcall optimized into a loop */
#line 492 "psqueue.m"
      {
#line 492 "psqueue.m"
        MR_bool mercury__psqueue__succeeded;

#line 492 "psqueue.m"
        if (((MR_tag((MR_Word) mercury__psqueue__TV_4)) == (MR_mktag((MR_Integer) 1))))
#line 489 "psqueue.m"
          {
#line 489 "psqueue.m"
            MR_Box mercury__psqueue__Key_7 = (MR_hl_field(MR_mktag(1), mercury__psqueue__TV_4, (MR_Integer) 0));

#line 489 "psqueue.m"
            *mercury__psqueue__Res_6 = (MR_hl_field(MR_mktag(1), mercury__psqueue__TV_4, (MR_Integer) 1));
#line 490 "psqueue.m"
            {
#line 490 "psqueue.m"
              return mercury__psqueue__succeeded = mercury__builtin__unify_2_p_0(mercury__psqueue__TypeInfo_for_K_15, mercury__psqueue__Key_7, mercury__psqueue__K_5);
            }
#line 489 "psqueue.m"
          }
#line 492 "psqueue.m"
        else
#line 492 "psqueue.m"
          if (((MR_tag((MR_Word) mercury__psqueue__TV_4)) == (MR_mktag((MR_Integer) 2))))
#line 493 "psqueue.m"
            {
#line 493 "psqueue.m"
              MR_Word mercury__psqueue__TL_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__psqueue__TV_4, (MR_Integer) 0)));
#line 493 "psqueue.m"
              MR_Word mercury__psqueue__TR_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__psqueue__TV_4, (MR_Integer) 1)));
#line 493 "psqueue.m"
              MR_Box mercury__psqueue__MaxKey1_14;
#line 494 "psqueue.m"
              MR_Box mercury__psqueue__V_11_11;
#line 494 "psqueue.m"
              MR_Box mercury__psqueue__V_12_12;
#line 494 "psqueue.m"
              MR_Word mercury__psqueue__V_13_13;
#line 443 "psqueue.m"
              MR_Word mercury__psqueue__CMP_19;

#line 494 "psqueue.m"
              mercury__psqueue__succeeded = ((MR_tag((MR_Word) mercury__psqueue__TL_9)) == (MR_mktag((MR_Integer) 1)));
#line 494 "psqueue.m"
              if (mercury__psqueue__succeeded)
#line 494 "psqueue.m"
                {
#line 494 "psqueue.m"
                  mercury__psqueue__V_11_11 = (MR_hl_field(MR_mktag(1), mercury__psqueue__TL_9, (MR_Integer) 0));
#line 494 "psqueue.m"
                  mercury__psqueue__V_12_12 = (MR_hl_field(MR_mktag(1), mercury__psqueue__TL_9, (MR_Integer) 1));
#line 494 "psqueue.m"
                  mercury__psqueue__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__TL_9, (MR_Integer) 2)));
#line 494 "psqueue.m"
                  mercury__psqueue__MaxKey1_14 = (MR_hl_field(MR_mktag(1), mercury__psqueue__TL_9, (MR_Integer) 3));
#line 444 "psqueue.m"
                  {
#line 444 "psqueue.m"
                    mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_15, &mercury__psqueue__CMP_19, mercury__psqueue__K_5, mercury__psqueue__MaxKey1_14);
                  }
#line 446 "psqueue.m"
                  if ((mercury__psqueue__CMP_19 == (MR_Integer) 1))
#line 445 "psqueue.m"
                    mercury__psqueue__succeeded = MR_TRUE;
#line 446 "psqueue.m"
                  else
#line 446 "psqueue.m"
                    if ((mercury__psqueue__CMP_19 == (MR_Integer) 0))
#line 446 "psqueue.m"
                      mercury__psqueue__succeeded = MR_TRUE;
#line 446 "psqueue.m"
                    else
#line 446 "psqueue.m"
                      mercury__psqueue__succeeded = MR_FALSE;
#line 497 "psqueue.m"
                  if (mercury__psqueue__succeeded)
#line 482 "psqueue.m"
                    {
#line 482 "psqueue.m"
                      MR_Word mercury__psqueue__V_23_23;

#line 483 "psqueue.m"
                      {
#line 483 "psqueue.m"
                        mercury__psqueue__V_23_23 = mercury__psqueue__tournament_view_1_f_0(mercury__psqueue__TypeInfo_for_P_16, mercury__psqueue__TypeInfo_for_K_15, mercury__psqueue__TL_9);
                      }
#line 483 "psqueue.m"
                      /* direct tailcall eliminated */
#line 483 "psqueue.m"
                      {
#line 483 "psqueue.m"
                        MR_Word mercury__psqueue__TV__tmp_copy_4 = mercury__psqueue__V_23_23;

#line 483 "psqueue.m"
                        mercury__psqueue__TV_4 = mercury__psqueue__TV__tmp_copy_4;
#line 483 "psqueue.m"
                      }
#line 483 "psqueue.m"
                      continue;
#line 482 "psqueue.m"
                    }
#line 497 "psqueue.m"
                  else
#line 482 "psqueue.m"
                    {
#line 482 "psqueue.m"
                      MR_Word mercury__psqueue__V_27_27;

#line 483 "psqueue.m"
                      {
#line 483 "psqueue.m"
                        mercury__psqueue__V_27_27 = mercury__psqueue__tournament_view_1_f_0(mercury__psqueue__TypeInfo_for_P_16, mercury__psqueue__TypeInfo_for_K_15, mercury__psqueue__TR_10);
                      }
#line 483 "psqueue.m"
                      /* direct tailcall eliminated */
#line 483 "psqueue.m"
                      {
#line 483 "psqueue.m"
                        MR_Word mercury__psqueue__TV__tmp_copy_4 = mercury__psqueue__V_27_27;

#line 483 "psqueue.m"
                        mercury__psqueue__TV_4 = mercury__psqueue__TV__tmp_copy_4;
#line 483 "psqueue.m"
                      }
#line 483 "psqueue.m"
                      continue;
#line 482 "psqueue.m"
                    }
#line 494 "psqueue.m"
                }
#line 493 "psqueue.m"
            }
#line 492 "psqueue.m"
          else
#line 492 "psqueue.m"
            mercury__psqueue__succeeded = MR_FALSE;
#line 492 "psqueue.m"
        return mercury__psqueue__succeeded;
#line 492 "psqueue.m"
      }
#line 492 "psqueue.m"
      break;
#line 492 "psqueue.m"
    }
#line 485 "psqueue.m"
}

#line 455 "psqueue.m"
MR_bool MR_CALL 
mercury__psqueue__adjust_tv_4_p_0(
#line 455 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_20,
#line 455 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_21,
#line 455 "psqueue.m"
  MR_Word mercury__psqueue__Func_5,
#line 455 "psqueue.m"
  MR_Box mercury__psqueue__K_6,
#line 455 "psqueue.m"
  MR_Word mercury__psqueue__TV_7,
#line 455 "psqueue.m"
  MR_Word * mercury__psqueue__Res_8)
#line 455 "psqueue.m"
{
#line 461 "psqueue.m"
  {
#line 461 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;

#line 461 "psqueue.m"
    if (((MR_tag((MR_Word) mercury__psqueue__TV_7)) == (MR_mktag((MR_Integer) 1))))
#line 462 "psqueue.m"
      {
#line 462 "psqueue.m"
        MR_Box mercury__psqueue__Key_9 = (MR_hl_field(MR_mktag(1), mercury__psqueue__TV_7, (MR_Integer) 0));
#line 462 "psqueue.m"
        MR_Box mercury__psqueue__Prio_10 = (MR_hl_field(MR_mktag(1), mercury__psqueue__TV_7, (MR_Integer) 1));

#line 463 "psqueue.m"
        {
#line 463 "psqueue.m"
          mercury__psqueue__succeeded = mercury__builtin__unify_2_p_0(mercury__psqueue__TypeInfo_for_K_21, mercury__psqueue__K_6, mercury__psqueue__Key_9);
        }
#line 465 "psqueue.m"
        if (mercury__psqueue__succeeded)
#line 464 "psqueue.m"
          {
#line 464 "psqueue.m"
            MR_Box mercury__psqueue__V_19_19;
#line 464 "psqueue.m"
            MR_Word mercury__psqueue__V_28_28;
#line 464 "psqueue.m"
            MR_Box MR_CALL (* mercury__psqueue__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__psqueue__Func_5, (MR_Integer) 1)));

#line 464 "psqueue.m"
            {
#line 464 "psqueue.m"
              mercury__psqueue__V_19_19 = mercury__psqueue__func_0(((MR_Box) mercury__psqueue__Func_5), mercury__psqueue__Prio_10);
            }
#line 300 "psqueue.m"
            mercury__psqueue__V_28_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 300 "psqueue.m"
            {
#line 300 "psqueue.m"
              MR_Word base;
#line 300 "psqueue.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 300 "psqueue.m"
              *mercury__psqueue__Res_8 = base;
#line 300 "psqueue.m"
              MR_hl_field(MR_mktag(1), base, 0) = mercury__psqueue__Key_9;
#line 300 "psqueue.m"
              MR_hl_field(MR_mktag(1), base, 1) = mercury__psqueue__V_19_19;
#line 300 "psqueue.m"
              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__psqueue__V_28_28));
#line 300 "psqueue.m"
              MR_hl_field(MR_mktag(1), base, 3) = mercury__psqueue__Key_9;
#line 300 "psqueue.m"
            }
#line 464 "psqueue.m"
          }
#line 465 "psqueue.m"
        else
#line 299 "psqueue.m"
          {
#line 299 "psqueue.m"
            MR_Word mercury__psqueue__V_36_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 300 "psqueue.m"
            {
#line 300 "psqueue.m"
              MR_Word base;
#line 300 "psqueue.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 300 "psqueue.m"
              *mercury__psqueue__Res_8 = base;
#line 300 "psqueue.m"
              MR_hl_field(MR_mktag(1), base, 0) = mercury__psqueue__Key_9;
#line 300 "psqueue.m"
              MR_hl_field(MR_mktag(1), base, 1) = mercury__psqueue__Prio_10;
#line 300 "psqueue.m"
              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__psqueue__V_36_36));
#line 300 "psqueue.m"
              MR_hl_field(MR_mktag(1), base, 3) = mercury__psqueue__Key_9;
#line 300 "psqueue.m"
            }
#line 299 "psqueue.m"
          }
#line 462 "psqueue.m"
        mercury__psqueue__succeeded = MR_TRUE;
#line 462 "psqueue.m"
      }
#line 461 "psqueue.m"
    else
#line 461 "psqueue.m"
      if (((MR_tag((MR_Word) mercury__psqueue__TV_7)) == (MR_mktag((MR_Integer) 2))))
#line 469 "psqueue.m"
        {
#line 469 "psqueue.m"
          MR_Word mercury__psqueue__TL_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__psqueue__TV_7, (MR_Integer) 0)));
#line 469 "psqueue.m"
          MR_Word mercury__psqueue__TR_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__psqueue__TV_7, (MR_Integer) 1)));
#line 469 "psqueue.m"
          MR_Box mercury__psqueue__MaxKey1_16;
#line 470 "psqueue.m"
          MR_Box mercury__psqueue__V_13_13;
#line 470 "psqueue.m"
          MR_Box mercury__psqueue__V_14_14;
#line 470 "psqueue.m"
          MR_Word mercury__psqueue__V_15_15;
#line 443 "psqueue.m"
          MR_Word mercury__psqueue__CMP_40;

#line 470 "psqueue.m"
          mercury__psqueue__succeeded = ((MR_tag((MR_Word) mercury__psqueue__TL_11)) == (MR_mktag((MR_Integer) 1)));
#line 470 "psqueue.m"
          if (mercury__psqueue__succeeded)
#line 470 "psqueue.m"
            {
#line 470 "psqueue.m"
              mercury__psqueue__V_13_13 = (MR_hl_field(MR_mktag(1), mercury__psqueue__TL_11, (MR_Integer) 0));
#line 470 "psqueue.m"
              mercury__psqueue__V_14_14 = (MR_hl_field(MR_mktag(1), mercury__psqueue__TL_11, (MR_Integer) 1));
#line 470 "psqueue.m"
              mercury__psqueue__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__TL_11, (MR_Integer) 2)));
#line 470 "psqueue.m"
              mercury__psqueue__MaxKey1_16 = (MR_hl_field(MR_mktag(1), mercury__psqueue__TL_11, (MR_Integer) 3));
#line 444 "psqueue.m"
              {
#line 444 "psqueue.m"
                mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_21, &mercury__psqueue__CMP_40, mercury__psqueue__K_6, mercury__psqueue__MaxKey1_16);
              }
#line 446 "psqueue.m"
              if ((mercury__psqueue__CMP_40 == (MR_Integer) 1))
#line 445 "psqueue.m"
                mercury__psqueue__succeeded = MR_TRUE;
#line 446 "psqueue.m"
              else
#line 446 "psqueue.m"
                if ((mercury__psqueue__CMP_40 == (MR_Integer) 0))
#line 446 "psqueue.m"
                  mercury__psqueue__succeeded = MR_TRUE;
#line 446 "psqueue.m"
                else
#line 446 "psqueue.m"
                  mercury__psqueue__succeeded = MR_FALSE;
#line 474 "psqueue.m"
              if (mercury__psqueue__succeeded)
#line 472 "psqueue.m"
                {
#line 472 "psqueue.m"
                  MR_Word mercury__psqueue__Left_17;
#line 472 "psqueue.m"
                  MR_Word mercury__psqueue__V_46_46;

#line 452 "psqueue.m"
                  {
#line 452 "psqueue.m"
                    mercury__psqueue__V_46_46 = mercury__psqueue__tournament_view_1_f_0(mercury__psqueue__TypeInfo_for_P_20, mercury__psqueue__TypeInfo_for_K_21, mercury__psqueue__TL_11);
                  }
#line 452 "psqueue.m"
                  {
#line 452 "psqueue.m"
                    mercury__psqueue__succeeded = mercury__psqueue__adjust_tv_4_p_0(mercury__psqueue__TypeInfo_for_P_20, mercury__psqueue__TypeInfo_for_K_21, mercury__psqueue__Func_5, mercury__psqueue__K_6, mercury__psqueue__V_46_46, &mercury__psqueue__Left_17);
                  }
#line 472 "psqueue.m"
                  if (mercury__psqueue__succeeded)
#line 472 "psqueue.m"
                    {
#line 473 "psqueue.m"
                      {
#line 473 "psqueue.m"
                        *mercury__psqueue__Res_8 = mercury__psqueue__tournament_2_f_0(mercury__psqueue__TypeInfo_for_P_20, mercury__psqueue__TypeInfo_for_K_21, mercury__psqueue__Left_17, mercury__psqueue__TR_12);
                      }
#line 473 "psqueue.m"
                      mercury__psqueue__succeeded = MR_TRUE;
#line 472 "psqueue.m"
                    }
#line 472 "psqueue.m"
                }
#line 474 "psqueue.m"
              else
#line 475 "psqueue.m"
                {
#line 475 "psqueue.m"
                  MR_Word mercury__psqueue__Right_18;
#line 475 "psqueue.m"
                  MR_Word mercury__psqueue__V_53_53;

#line 452 "psqueue.m"
                  {
#line 452 "psqueue.m"
                    mercury__psqueue__V_53_53 = mercury__psqueue__tournament_view_1_f_0(mercury__psqueue__TypeInfo_for_P_20, mercury__psqueue__TypeInfo_for_K_21, mercury__psqueue__TR_12);
                  }
#line 452 "psqueue.m"
                  {
#line 452 "psqueue.m"
                    mercury__psqueue__succeeded = mercury__psqueue__adjust_tv_4_p_0(mercury__psqueue__TypeInfo_for_P_20, mercury__psqueue__TypeInfo_for_K_21, mercury__psqueue__Func_5, mercury__psqueue__K_6, mercury__psqueue__V_53_53, &mercury__psqueue__Right_18);
                  }
#line 475 "psqueue.m"
                  if (mercury__psqueue__succeeded)
#line 475 "psqueue.m"
                    {
#line 476 "psqueue.m"
                      {
#line 476 "psqueue.m"
                        *mercury__psqueue__Res_8 = mercury__psqueue__tournament_2_f_0(mercury__psqueue__TypeInfo_for_P_20, mercury__psqueue__TypeInfo_for_K_21, mercury__psqueue__TL_11, mercury__psqueue__Right_18);
                      }
#line 476 "psqueue.m"
                      mercury__psqueue__succeeded = MR_TRUE;
#line 475 "psqueue.m"
                    }
#line 475 "psqueue.m"
                }
#line 470 "psqueue.m"
            }
#line 469 "psqueue.m"
        }
#line 461 "psqueue.m"
      else
#line 461 "psqueue.m"
        mercury__psqueue__succeeded = MR_FALSE;
#line 461 "psqueue.m"
    return mercury__psqueue__succeeded;
#line 461 "psqueue.m"
  }
#line 455 "psqueue.m"
}

#line 440 "psqueue.m"
MR_bool MR_CALL 
mercury__psqueue__leq_2_p_0(
#line 440 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_V_6,
#line 440 "psqueue.m"
  MR_Box mercury__psqueue__ValLeft_3,
#line 440 "psqueue.m"
  MR_Box mercury__psqueue__ValRight_4)
#line 440 "psqueue.m"
{
#line 443 "psqueue.m"
  {
#line 443 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 443 "psqueue.m"
    MR_Word mercury__psqueue__CMP_5;

#line 444 "psqueue.m"
    {
#line 444 "psqueue.m"
      mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_V_6, &mercury__psqueue__CMP_5, mercury__psqueue__ValLeft_3, mercury__psqueue__ValRight_4);
    }
#line 446 "psqueue.m"
    if ((mercury__psqueue__CMP_5 == (MR_Integer) 1))
#line 445 "psqueue.m"
      mercury__psqueue__succeeded = MR_TRUE;
#line 446 "psqueue.m"
    else
#line 446 "psqueue.m"
      if ((mercury__psqueue__CMP_5 == (MR_Integer) 0))
#line 446 "psqueue.m"
        mercury__psqueue__succeeded = MR_TRUE;
#line 446 "psqueue.m"
      else
#line 446 "psqueue.m"
        mercury__psqueue__succeeded = MR_FALSE;
#line 443 "psqueue.m"
    return mercury__psqueue__succeeded;
#line 443 "psqueue.m"
  }
#line 440 "psqueue.m"
}

#line 416 "psqueue.m"
MR_bool MR_CALL 
mercury__psqueue__remove_tv_4_p_0(
#line 416 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_17,
#line 416 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_18,
#line 416 "psqueue.m"
  MR_Box * mercury__psqueue__Prio_5,
#line 416 "psqueue.m"
  MR_Box mercury__psqueue__Key_6,
#line 416 "psqueue.m"
  MR_Word mercury__psqueue__TV_7,
#line 416 "psqueue.m"
  MR_Word * mercury__psqueue__Res_8)
#line 416 "psqueue.m"
{
#line 423 "psqueue.m"
  {
#line 423 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;

#line 423 "psqueue.m"
    if (((MR_tag((MR_Word) mercury__psqueue__TV_7)) == (MR_mktag((MR_Integer) 1))))
#line 424 "psqueue.m"
      {
#line 424 "psqueue.m"
        MR_Box mercury__psqueue__V_19_19 = (MR_hl_field(MR_mktag(1), mercury__psqueue__TV_7, (MR_Integer) 0));

#line 424 "psqueue.m"
        *mercury__psqueue__Prio_5 = (MR_hl_field(MR_mktag(1), mercury__psqueue__TV_7, (MR_Integer) 1));
#line 424 "psqueue.m"
        {
#line 424 "psqueue.m"
          mercury__psqueue__succeeded = mercury__builtin__unify_2_p_0(mercury__psqueue__TypeInfo_for_K_18, mercury__psqueue__Key_6, mercury__psqueue__V_19_19);
        }
#line 424 "psqueue.m"
        if (mercury__psqueue__succeeded)
#line 424 "psqueue.m"
          {
#line 425 "psqueue.m"
            *mercury__psqueue__Res_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 425 "psqueue.m"
            mercury__psqueue__succeeded = MR_TRUE;
#line 424 "psqueue.m"
          }
#line 424 "psqueue.m"
      }
#line 423 "psqueue.m"
    else
#line 423 "psqueue.m"
      if (((MR_tag((MR_Word) mercury__psqueue__TV_7)) == (MR_mktag((MR_Integer) 2))))
#line 427 "psqueue.m"
        {
#line 427 "psqueue.m"
          MR_Word mercury__psqueue__TL_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__psqueue__TV_7, (MR_Integer) 0)));
#line 427 "psqueue.m"
          MR_Word mercury__psqueue__TR_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__psqueue__TV_7, (MR_Integer) 1)));
#line 427 "psqueue.m"
          MR_Box mercury__psqueue__MaxKey1_14;
#line 428 "psqueue.m"
          MR_Box mercury__psqueue__V_11_11;
#line 428 "psqueue.m"
          MR_Box mercury__psqueue__V_12_12;
#line 428 "psqueue.m"
          MR_Word mercury__psqueue__V_13_13;
#line 443 "psqueue.m"
          MR_Word mercury__psqueue__CMP_22;

#line 428 "psqueue.m"
          mercury__psqueue__succeeded = ((MR_tag((MR_Word) mercury__psqueue__TL_9)) == (MR_mktag((MR_Integer) 1)));
#line 428 "psqueue.m"
          if (mercury__psqueue__succeeded)
#line 428 "psqueue.m"
            {
#line 428 "psqueue.m"
              mercury__psqueue__V_11_11 = (MR_hl_field(MR_mktag(1), mercury__psqueue__TL_9, (MR_Integer) 0));
#line 428 "psqueue.m"
              mercury__psqueue__V_12_12 = (MR_hl_field(MR_mktag(1), mercury__psqueue__TL_9, (MR_Integer) 1));
#line 428 "psqueue.m"
              mercury__psqueue__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__TL_9, (MR_Integer) 2)));
#line 428 "psqueue.m"
              mercury__psqueue__MaxKey1_14 = (MR_hl_field(MR_mktag(1), mercury__psqueue__TL_9, (MR_Integer) 3));
#line 444 "psqueue.m"
              {
#line 444 "psqueue.m"
                mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_18, &mercury__psqueue__CMP_22, mercury__psqueue__Key_6, mercury__psqueue__MaxKey1_14);
              }
#line 446 "psqueue.m"
              if ((mercury__psqueue__CMP_22 == (MR_Integer) 1))
#line 445 "psqueue.m"
                mercury__psqueue__succeeded = MR_TRUE;
#line 446 "psqueue.m"
              else
#line 446 "psqueue.m"
                if ((mercury__psqueue__CMP_22 == (MR_Integer) 0))
#line 446 "psqueue.m"
                  mercury__psqueue__succeeded = MR_TRUE;
#line 446 "psqueue.m"
                else
#line 446 "psqueue.m"
                  mercury__psqueue__succeeded = MR_FALSE;
#line 432 "psqueue.m"
              if (mercury__psqueue__succeeded)
#line 430 "psqueue.m"
                {
#line 430 "psqueue.m"
                  MR_Word mercury__psqueue__Left_15;
#line 430 "psqueue.m"
                  MR_Word mercury__psqueue__V_28_28;

#line 406 "psqueue.m"
                  {
#line 406 "psqueue.m"
                    mercury__psqueue__V_28_28 = mercury__psqueue__tournament_view_1_f_0(mercury__psqueue__TypeInfo_for_P_17, mercury__psqueue__TypeInfo_for_K_18, mercury__psqueue__TL_9);
                  }
#line 406 "psqueue.m"
                  {
#line 406 "psqueue.m"
                    mercury__psqueue__succeeded = mercury__psqueue__remove_tv_4_p_0(mercury__psqueue__TypeInfo_for_P_17, mercury__psqueue__TypeInfo_for_K_18, mercury__psqueue__Prio_5, mercury__psqueue__Key_6, mercury__psqueue__V_28_28, &mercury__psqueue__Left_15);
                  }
#line 430 "psqueue.m"
                  if (mercury__psqueue__succeeded)
#line 430 "psqueue.m"
                    {
#line 431 "psqueue.m"
                      {
#line 431 "psqueue.m"
                        *mercury__psqueue__Res_8 = mercury__psqueue__tournament_2_f_0(mercury__psqueue__TypeInfo_for_P_17, mercury__psqueue__TypeInfo_for_K_18, mercury__psqueue__Left_15, mercury__psqueue__TR_10);
                      }
#line 431 "psqueue.m"
                      mercury__psqueue__succeeded = MR_TRUE;
#line 430 "psqueue.m"
                    }
#line 430 "psqueue.m"
                }
#line 432 "psqueue.m"
              else
#line 433 "psqueue.m"
                {
#line 433 "psqueue.m"
                  MR_Word mercury__psqueue__Right_16;
#line 433 "psqueue.m"
                  MR_Word mercury__psqueue__V_35_35;

#line 406 "psqueue.m"
                  {
#line 406 "psqueue.m"
                    mercury__psqueue__V_35_35 = mercury__psqueue__tournament_view_1_f_0(mercury__psqueue__TypeInfo_for_P_17, mercury__psqueue__TypeInfo_for_K_18, mercury__psqueue__TR_10);
                  }
#line 406 "psqueue.m"
                  {
#line 406 "psqueue.m"
                    mercury__psqueue__succeeded = mercury__psqueue__remove_tv_4_p_0(mercury__psqueue__TypeInfo_for_P_17, mercury__psqueue__TypeInfo_for_K_18, mercury__psqueue__Prio_5, mercury__psqueue__Key_6, mercury__psqueue__V_35_35, &mercury__psqueue__Right_16);
                  }
#line 433 "psqueue.m"
                  if (mercury__psqueue__succeeded)
#line 433 "psqueue.m"
                    {
#line 434 "psqueue.m"
                      {
#line 434 "psqueue.m"
                        *mercury__psqueue__Res_8 = mercury__psqueue__tournament_2_f_0(mercury__psqueue__TypeInfo_for_P_17, mercury__psqueue__TypeInfo_for_K_18, mercury__psqueue__TL_9, mercury__psqueue__Right_16);
                      }
#line 434 "psqueue.m"
                      mercury__psqueue__succeeded = MR_TRUE;
#line 433 "psqueue.m"
                    }
#line 433 "psqueue.m"
                }
#line 428 "psqueue.m"
            }
#line 427 "psqueue.m"
        }
#line 423 "psqueue.m"
      else
#line 423 "psqueue.m"
        mercury__psqueue__succeeded = MR_FALSE;
#line 423 "psqueue.m"
    return mercury__psqueue__succeeded;
#line 423 "psqueue.m"
  }
#line 416 "psqueue.m"
}

#line 395 "psqueue.m"
void MR_CALL 
mercury__psqueue__from_assoc_list2_3_p_0(
#line 395 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_16,
#line 395 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_17,
#line 395 "psqueue.m"
  MR_Word mercury__psqueue__HeadVar__1_1,
#line 395 "psqueue.m"
  MR_Word mercury__psqueue__STATE_VARIABLE_PSQ_0_2,
#line 395 "psqueue.m"
  MR_Word * mercury__psqueue__STATE_VARIABLE_PSQ_3)
#line 395 "psqueue.m"
{
#line 398 "psqueue.m"
  while (MR_TRUE)
#line 398 "psqueue.m"
    {
#line 398 "psqueue.m"
      /* tailcall optimized into a loop */
#line 398 "psqueue.m"
      {
#line 398 "psqueue.m"
        MR_bool mercury__psqueue__succeeded;

#line 398 "psqueue.m"
        if ((mercury__psqueue__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 398 "psqueue.m"
          *mercury__psqueue__STATE_VARIABLE_PSQ_3 = mercury__psqueue__STATE_VARIABLE_PSQ_0_2;
#line 398 "psqueue.m"
        else
#line 399 "psqueue.m"
          {
#line 399 "psqueue.m"
            MR_Box mercury__psqueue__Prio_7;
#line 399 "psqueue.m"
            MR_Box mercury__psqueue__Key_8;
#line 399 "psqueue.m"
            MR_Word mercury__psqueue__Rest_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__1_1, (MR_Integer) 1)));
#line 399 "psqueue.m"
            MR_Word mercury__psqueue__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__1_1, (MR_Integer) 0)));
#line 399 "psqueue.m"
            MR_Word mercury__psqueue__STATE_VARIABLE_PSQ_14_14;

#line 399 "psqueue.m"
            mercury__psqueue__Prio_7 = (MR_hl_field(MR_mktag(0), mercury__psqueue__V_13_13, (MR_Integer) 0));
#line 399 "psqueue.m"
            mercury__psqueue__Key_8 = (MR_hl_field(MR_mktag(0), mercury__psqueue__V_13_13, (MR_Integer) 1));
#line 400 "psqueue.m"
            {
#line 400 "psqueue.m"
              mercury__psqueue__det_insert_4_p_0(mercury__psqueue__TypeInfo_for_P_16, mercury__psqueue__TypeInfo_for_K_17, mercury__psqueue__Prio_7, mercury__psqueue__Key_8, mercury__psqueue__STATE_VARIABLE_PSQ_0_2, &mercury__psqueue__STATE_VARIABLE_PSQ_14_14);
            }
#line 401 "psqueue.m"
            /* direct tailcall eliminated */
#line 401 "psqueue.m"
            {
#line 401 "psqueue.m"
              MR_Word mercury__psqueue__HeadVar__1__tmp_copy_1 = mercury__psqueue__Rest_9;
#line 401 "psqueue.m"
              MR_Word mercury__psqueue__STATE_VARIABLE_PSQ_0__tmp_copy_2 = mercury__psqueue__STATE_VARIABLE_PSQ_14_14;

#line 401 "psqueue.m"
              mercury__psqueue__STATE_VARIABLE_PSQ_0_2 = mercury__psqueue__STATE_VARIABLE_PSQ_0__tmp_copy_2;
#line 401 "psqueue.m"
              mercury__psqueue__HeadVar__1_1 = mercury__psqueue__HeadVar__1__tmp_copy_1;
#line 401 "psqueue.m"
            }
#line 401 "psqueue.m"
            continue;
#line 399 "psqueue.m"
          }
#line 398 "psqueue.m"
      }
#line 398 "psqueue.m"
      break;
#line 398 "psqueue.m"
    }
#line 395 "psqueue.m"
}

#line 318 "psqueue.m"
MR_bool MR_CALL 
mercury__psqueue__insert_tv_4_p_0(
#line 318 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_28,
#line 318 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_29,
#line 318 "psqueue.m"
  MR_Box mercury__psqueue__IK_5,
#line 318 "psqueue.m"
  MR_Box mercury__psqueue__IP_6,
#line 318 "psqueue.m"
  MR_Word mercury__psqueue__TV_7,
#line 318 "psqueue.m"
  MR_Word * mercury__psqueue__Res_8)
#line 318 "psqueue.m"
{
#line 325 "psqueue.m"
  {
#line 325 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;

#line 325 "psqueue.m"
    if ((mercury__psqueue__TV_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 299 "psqueue.m"
      {
#line 299 "psqueue.m"
        MR_Word mercury__psqueue__V_36_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 300 "psqueue.m"
        {
#line 300 "psqueue.m"
          MR_Word base;
#line 300 "psqueue.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 300 "psqueue.m"
          *mercury__psqueue__Res_8 = base;
#line 300 "psqueue.m"
          MR_hl_field(MR_mktag(1), base, 0) = mercury__psqueue__IK_5;
#line 300 "psqueue.m"
          MR_hl_field(MR_mktag(1), base, 1) = mercury__psqueue__IP_6;
#line 300 "psqueue.m"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__psqueue__V_36_36));
#line 300 "psqueue.m"
          MR_hl_field(MR_mktag(1), base, 3) = mercury__psqueue__IK_5;
#line 300 "psqueue.m"
        }
#line 299 "psqueue.m"
        mercury__psqueue__succeeded = MR_TRUE;
#line 299 "psqueue.m"
      }
#line 325 "psqueue.m"
    else
#line 325 "psqueue.m"
      if (((MR_tag((MR_Word) mercury__psqueue__TV_7)) == (MR_mktag((MR_Integer) 1))))
#line 326 "psqueue.m"
        {
#line 326 "psqueue.m"
          MR_Box mercury__psqueue__Key_9 = (MR_hl_field(MR_mktag(1), mercury__psqueue__TV_7, (MR_Integer) 0));
#line 326 "psqueue.m"
          MR_Box mercury__psqueue__Prio_10 = (MR_hl_field(MR_mktag(1), mercury__psqueue__TV_7, (MR_Integer) 1));
#line 326 "psqueue.m"
          MR_Word mercury__psqueue__CMP_11;

#line 327 "psqueue.m"
          {
#line 327 "psqueue.m"
            mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_28, &mercury__psqueue__CMP_11, mercury__psqueue__IK_5, mercury__psqueue__Key_9);
          }
#line 332 "psqueue.m"
          if ((mercury__psqueue__CMP_11 == (MR_Integer) 1))
#line 329 "psqueue.m"
            {
#line 329 "psqueue.m"
              MR_Word mercury__psqueue__V_26_26;
#line 329 "psqueue.m"
              MR_Word mercury__psqueue__V_27_27;
#line 329 "psqueue.m"
              MR_Word mercury__psqueue__V_44_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 329 "psqueue.m"
              MR_Word mercury__psqueue__V_52_52;

#line 300 "psqueue.m"
              {
#line 300 "psqueue.m"
                mercury__psqueue__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 300 "psqueue.m"
                MR_hl_field(MR_mktag(1), mercury__psqueue__V_26_26, 0) = mercury__psqueue__IK_5;
#line 300 "psqueue.m"
                MR_hl_field(MR_mktag(1), mercury__psqueue__V_26_26, 1) = mercury__psqueue__IP_6;
#line 300 "psqueue.m"
                MR_hl_field(MR_mktag(1), mercury__psqueue__V_26_26, 2) = ((MR_Box) (mercury__psqueue__V_44_44));
#line 300 "psqueue.m"
                MR_hl_field(MR_mktag(1), mercury__psqueue__V_26_26, 3) = mercury__psqueue__IK_5;
#line 300 "psqueue.m"
              }
#line 300 "psqueue.m"
              mercury__psqueue__V_52_52 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 300 "psqueue.m"
              {
#line 300 "psqueue.m"
                mercury__psqueue__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 300 "psqueue.m"
                MR_hl_field(MR_mktag(1), mercury__psqueue__V_27_27, 0) = mercury__psqueue__Key_9;
#line 300 "psqueue.m"
                MR_hl_field(MR_mktag(1), mercury__psqueue__V_27_27, 1) = mercury__psqueue__Prio_10;
#line 300 "psqueue.m"
                MR_hl_field(MR_mktag(1), mercury__psqueue__V_27_27, 2) = ((MR_Box) (mercury__psqueue__V_52_52));
#line 300 "psqueue.m"
                MR_hl_field(MR_mktag(1), mercury__psqueue__V_27_27, 3) = mercury__psqueue__Key_9;
#line 300 "psqueue.m"
              }
#line 330 "psqueue.m"
              {
#line 330 "psqueue.m"
                *mercury__psqueue__Res_8 = mercury__psqueue__tournament_2_f_0(mercury__psqueue__TypeInfo_for_P_29, mercury__psqueue__TypeInfo_for_K_28, mercury__psqueue__V_26_26, mercury__psqueue__V_27_27);
              }
#line 329 "psqueue.m"
              mercury__psqueue__succeeded = MR_TRUE;
#line 329 "psqueue.m"
            }
#line 332 "psqueue.m"
          else
#line 332 "psqueue.m"
            if ((mercury__psqueue__CMP_11 == (MR_Integer) 2))
#line 333 "psqueue.m"
              {
#line 333 "psqueue.m"
                MR_Word mercury__psqueue__V_24_24;
#line 333 "psqueue.m"
                MR_Word mercury__psqueue__V_25_25;
#line 333 "psqueue.m"
                MR_Word mercury__psqueue__V_60_60 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 333 "psqueue.m"
                MR_Word mercury__psqueue__V_68_68;

#line 300 "psqueue.m"
                {
#line 300 "psqueue.m"
                  mercury__psqueue__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 300 "psqueue.m"
                  MR_hl_field(MR_mktag(1), mercury__psqueue__V_24_24, 0) = mercury__psqueue__Key_9;
#line 300 "psqueue.m"
                  MR_hl_field(MR_mktag(1), mercury__psqueue__V_24_24, 1) = mercury__psqueue__Prio_10;
#line 300 "psqueue.m"
                  MR_hl_field(MR_mktag(1), mercury__psqueue__V_24_24, 2) = ((MR_Box) (mercury__psqueue__V_60_60));
#line 300 "psqueue.m"
                  MR_hl_field(MR_mktag(1), mercury__psqueue__V_24_24, 3) = mercury__psqueue__Key_9;
#line 300 "psqueue.m"
                }
#line 300 "psqueue.m"
                mercury__psqueue__V_68_68 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 300 "psqueue.m"
                {
#line 300 "psqueue.m"
                  mercury__psqueue__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 300 "psqueue.m"
                  MR_hl_field(MR_mktag(1), mercury__psqueue__V_25_25, 0) = mercury__psqueue__IK_5;
#line 300 "psqueue.m"
                  MR_hl_field(MR_mktag(1), mercury__psqueue__V_25_25, 1) = mercury__psqueue__IP_6;
#line 300 "psqueue.m"
                  MR_hl_field(MR_mktag(1), mercury__psqueue__V_25_25, 2) = ((MR_Box) (mercury__psqueue__V_68_68));
#line 300 "psqueue.m"
                  MR_hl_field(MR_mktag(1), mercury__psqueue__V_25_25, 3) = mercury__psqueue__IK_5;
#line 300 "psqueue.m"
                }
#line 334 "psqueue.m"
                {
#line 334 "psqueue.m"
                  *mercury__psqueue__Res_8 = mercury__psqueue__tournament_2_f_0(mercury__psqueue__TypeInfo_for_P_29, mercury__psqueue__TypeInfo_for_K_28, mercury__psqueue__V_24_24, mercury__psqueue__V_25_25);
                }
#line 333 "psqueue.m"
                mercury__psqueue__succeeded = MR_TRUE;
#line 333 "psqueue.m"
              }
#line 332 "psqueue.m"
            else
#line 332 "psqueue.m"
              mercury__psqueue__succeeded = MR_FALSE;
#line 326 "psqueue.m"
        }
#line 325 "psqueue.m"
      else
#line 338 "psqueue.m"
        {
#line 338 "psqueue.m"
          MR_Word mercury__psqueue__T1_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__psqueue__TV_7, (MR_Integer) 0)));
#line 338 "psqueue.m"
          MR_Word mercury__psqueue__T2_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__psqueue__TV_7, (MR_Integer) 1)));
#line 338 "psqueue.m"
          MR_Box mercury__psqueue__MaxKey1_17;
#line 339 "psqueue.m"
          MR_Box mercury__psqueue__V_14_14;
#line 339 "psqueue.m"
          MR_Box mercury__psqueue__V_15_15;
#line 339 "psqueue.m"
          MR_Word mercury__psqueue__V_16_16;
#line 340 "psqueue.m"
          MR_Box mercury__psqueue__V_18_18;
#line 340 "psqueue.m"
          MR_Box mercury__psqueue__V_19_19;
#line 340 "psqueue.m"
          MR_Word mercury__psqueue__V_20_20;
#line 340 "psqueue.m"
          MR_Box mercury__psqueue__V_21_21;
#line 443 "psqueue.m"
          MR_Word mercury__psqueue__CMP_72;

#line 339 "psqueue.m"
          mercury__psqueue__succeeded = ((MR_tag((MR_Word) mercury__psqueue__T1_12)) == (MR_mktag((MR_Integer) 1)));
#line 339 "psqueue.m"
          if (mercury__psqueue__succeeded)
#line 339 "psqueue.m"
            {
#line 339 "psqueue.m"
              mercury__psqueue__V_14_14 = (MR_hl_field(MR_mktag(1), mercury__psqueue__T1_12, (MR_Integer) 0));
#line 339 "psqueue.m"
              mercury__psqueue__V_15_15 = (MR_hl_field(MR_mktag(1), mercury__psqueue__T1_12, (MR_Integer) 1));
#line 339 "psqueue.m"
              mercury__psqueue__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__T1_12, (MR_Integer) 2)));
#line 339 "psqueue.m"
              mercury__psqueue__MaxKey1_17 = (MR_hl_field(MR_mktag(1), mercury__psqueue__T1_12, (MR_Integer) 3));
#line 340 "psqueue.m"
              mercury__psqueue__succeeded = ((MR_tag((MR_Word) mercury__psqueue__T2_13)) == (MR_mktag((MR_Integer) 1)));
#line 340 "psqueue.m"
              if (mercury__psqueue__succeeded)
#line 340 "psqueue.m"
                {
#line 340 "psqueue.m"
                  mercury__psqueue__V_18_18 = (MR_hl_field(MR_mktag(1), mercury__psqueue__T2_13, (MR_Integer) 0));
#line 340 "psqueue.m"
                  mercury__psqueue__V_19_19 = (MR_hl_field(MR_mktag(1), mercury__psqueue__T2_13, (MR_Integer) 1));
#line 340 "psqueue.m"
                  mercury__psqueue__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__T2_13, (MR_Integer) 2)));
#line 340 "psqueue.m"
                  mercury__psqueue__V_21_21 = (MR_hl_field(MR_mktag(1), mercury__psqueue__T2_13, (MR_Integer) 3));
#line 444 "psqueue.m"
                  {
#line 444 "psqueue.m"
                    mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_28, &mercury__psqueue__CMP_72, mercury__psqueue__IK_5, mercury__psqueue__MaxKey1_17);
                  }
#line 446 "psqueue.m"
                  if ((mercury__psqueue__CMP_72 == (MR_Integer) 1))
#line 445 "psqueue.m"
                    mercury__psqueue__succeeded = MR_TRUE;
#line 446 "psqueue.m"
                  else
#line 446 "psqueue.m"
                    if ((mercury__psqueue__CMP_72 == (MR_Integer) 0))
#line 446 "psqueue.m"
                      mercury__psqueue__succeeded = MR_TRUE;
#line 446 "psqueue.m"
                    else
#line 446 "psqueue.m"
                      mercury__psqueue__succeeded = MR_FALSE;
#line 344 "psqueue.m"
                  if (mercury__psqueue__succeeded)
#line 342 "psqueue.m"
                    {
#line 342 "psqueue.m"
                      MR_Word mercury__psqueue__Left_22;
#line 342 "psqueue.m"
                      MR_Word mercury__psqueue__V_78_78;

#line 305 "psqueue.m"
                      {
#line 305 "psqueue.m"
                        mercury__psqueue__V_78_78 = mercury__psqueue__tournament_view_1_f_0(mercury__psqueue__TypeInfo_for_P_29, mercury__psqueue__TypeInfo_for_K_28, mercury__psqueue__T1_12);
                      }
#line 305 "psqueue.m"
                      {
#line 305 "psqueue.m"
                        mercury__psqueue__succeeded = mercury__psqueue__insert_tv_4_p_0(mercury__psqueue__TypeInfo_for_K_28, mercury__psqueue__TypeInfo_for_P_29, mercury__psqueue__IK_5, mercury__psqueue__IP_6, mercury__psqueue__V_78_78, &mercury__psqueue__Left_22);
                      }
#line 342 "psqueue.m"
                      if (mercury__psqueue__succeeded)
#line 342 "psqueue.m"
                        {
#line 343 "psqueue.m"
                          {
#line 343 "psqueue.m"
                            *mercury__psqueue__Res_8 = mercury__psqueue__tournament_2_f_0(mercury__psqueue__TypeInfo_for_P_29, mercury__psqueue__TypeInfo_for_K_28, mercury__psqueue__Left_22, mercury__psqueue__T2_13);
                          }
#line 343 "psqueue.m"
                          mercury__psqueue__succeeded = MR_TRUE;
#line 342 "psqueue.m"
                        }
#line 342 "psqueue.m"
                    }
#line 344 "psqueue.m"
                  else
#line 345 "psqueue.m"
                    {
#line 345 "psqueue.m"
                      MR_Word mercury__psqueue__Right_23;
#line 345 "psqueue.m"
                      MR_Word mercury__psqueue__V_85_85;

#line 305 "psqueue.m"
                      {
#line 305 "psqueue.m"
                        mercury__psqueue__V_85_85 = mercury__psqueue__tournament_view_1_f_0(mercury__psqueue__TypeInfo_for_P_29, mercury__psqueue__TypeInfo_for_K_28, mercury__psqueue__T2_13);
                      }
#line 305 "psqueue.m"
                      {
#line 305 "psqueue.m"
                        mercury__psqueue__succeeded = mercury__psqueue__insert_tv_4_p_0(mercury__psqueue__TypeInfo_for_K_28, mercury__psqueue__TypeInfo_for_P_29, mercury__psqueue__IK_5, mercury__psqueue__IP_6, mercury__psqueue__V_85_85, &mercury__psqueue__Right_23);
                      }
#line 345 "psqueue.m"
                      if (mercury__psqueue__succeeded)
#line 345 "psqueue.m"
                        {
#line 346 "psqueue.m"
                          {
#line 346 "psqueue.m"
                            *mercury__psqueue__Res_8 = mercury__psqueue__tournament_2_f_0(mercury__psqueue__TypeInfo_for_P_29, mercury__psqueue__TypeInfo_for_K_28, mercury__psqueue__T1_12, mercury__psqueue__Right_23);
                          }
#line 346 "psqueue.m"
                          mercury__psqueue__succeeded = MR_TRUE;
#line 345 "psqueue.m"
                        }
#line 345 "psqueue.m"
                    }
#line 340 "psqueue.m"
                }
#line 339 "psqueue.m"
            }
#line 338 "psqueue.m"
        }
#line 325 "psqueue.m"
    return mercury__psqueue__succeeded;
#line 325 "psqueue.m"
  }
#line 318 "psqueue.m"
}

#line 264 "psqueue.m"
MR_Word MR_CALL 
mercury__psqueue__second_best_2_f_0(
#line 264 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_17,
#line 264 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_18,
#line 264 "psqueue.m"
  MR_Word mercury__psqueue__LTree_4,
#line 264 "psqueue.m"
  MR_Box mercury__psqueue__Key_5)
#line 264 "psqueue.m"
{
#line 270 "psqueue.m"
  {
#line 270 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 270 "psqueue.m"
    MR_Word mercury__psqueue__Res_6;

#line 270 "psqueue.m"
    if ((mercury__psqueue__LTree_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 269 "psqueue.m"
      mercury__psqueue__Res_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 270 "psqueue.m"
    else
#line 271 "psqueue.m"
      {
#line 271 "psqueue.m"
        MR_Box mercury__psqueue__LK_8 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 1));
#line 271 "psqueue.m"
        MR_Box mercury__psqueue__LP_9 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 2));
#line 271 "psqueue.m"
        MR_Word mercury__psqueue__T_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 3)));
#line 271 "psqueue.m"
        MR_Box mercury__psqueue__SplitKey_11 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 4));
#line 271 "psqueue.m"
        MR_Word mercury__psqueue__U_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 5)));
#line 271 "psqueue.m"
        MR_Integer mercury__psqueue__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 0)));
#line 443 "psqueue.m"
        MR_Word mercury__psqueue__CMP_21;

#line 444 "psqueue.m"
        {
#line 444 "psqueue.m"
          mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_17, &mercury__psqueue__CMP_21, mercury__psqueue__LK_8, mercury__psqueue__SplitKey_11);
        }
#line 446 "psqueue.m"
        if ((mercury__psqueue__CMP_21 == (MR_Integer) 1))
#line 445 "psqueue.m"
          mercury__psqueue__succeeded = MR_TRUE;
#line 446 "psqueue.m"
        else
#line 446 "psqueue.m"
          if ((mercury__psqueue__CMP_21 == (MR_Integer) 0))
#line 446 "psqueue.m"
            mercury__psqueue__succeeded = MR_TRUE;
#line 446 "psqueue.m"
          else
#line 446 "psqueue.m"
            mercury__psqueue__succeeded = MR_FALSE;
#line 276 "psqueue.m"
        if (mercury__psqueue__succeeded)
#line 273 "psqueue.m"
          {
#line 273 "psqueue.m"
            MR_Word mercury__psqueue__T1_13;
#line 273 "psqueue.m"
            MR_Word mercury__psqueue__T2_14;

#line 273 "psqueue.m"
            {
#line 273 "psqueue.m"
              mercury__psqueue__T1_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 273 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__T1_13, 0) = mercury__psqueue__LK_8;
#line 273 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__T1_13, 1) = mercury__psqueue__LP_9;
#line 273 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__T1_13, 2) = ((MR_Box) (mercury__psqueue__T_10));
#line 273 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__T1_13, 3) = mercury__psqueue__SplitKey_11;
#line 273 "psqueue.m"
            }
#line 274 "psqueue.m"
            {
#line 274 "psqueue.m"
              mercury__psqueue__T2_14 = mercury__psqueue__second_best_2_f_0(mercury__psqueue__TypeInfo_for_K_17, mercury__psqueue__TypeInfo_for_P_18, mercury__psqueue__U_12, mercury__psqueue__Key_5);
            }
#line 275 "psqueue.m"
            {
#line 275 "psqueue.m"
              mercury__psqueue__Res_6 = mercury__psqueue__tournament_2_f_0(mercury__psqueue__TypeInfo_for_P_18, mercury__psqueue__TypeInfo_for_K_17, mercury__psqueue__T1_13, mercury__psqueue__T2_14);
            }
#line 273 "psqueue.m"
          }
#line 276 "psqueue.m"
        else
#line 277 "psqueue.m"
          {
#line 277 "psqueue.m"
            MR_Word mercury__psqueue__T1_15;
#line 277 "psqueue.m"
            MR_Word mercury__psqueue__T2_16;

#line 277 "psqueue.m"
            {
#line 277 "psqueue.m"
              mercury__psqueue__T1_15 = mercury__psqueue__second_best_2_f_0(mercury__psqueue__TypeInfo_for_K_17, mercury__psqueue__TypeInfo_for_P_18, mercury__psqueue__T_10, mercury__psqueue__SplitKey_11);
            }
#line 278 "psqueue.m"
            {
#line 278 "psqueue.m"
              mercury__psqueue__T2_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 278 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__T2_16, 0) = mercury__psqueue__LK_8;
#line 278 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__T2_16, 1) = mercury__psqueue__LP_9;
#line 278 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__T2_16, 2) = ((MR_Box) (mercury__psqueue__U_12));
#line 278 "psqueue.m"
              MR_hl_field(MR_mktag(1), mercury__psqueue__T2_16, 3) = mercury__psqueue__Key_5;
#line 278 "psqueue.m"
            }
#line 279 "psqueue.m"
            {
#line 279 "psqueue.m"
              mercury__psqueue__Res_6 = mercury__psqueue__tournament_2_f_0(mercury__psqueue__TypeInfo_for_P_18, mercury__psqueue__TypeInfo_for_K_17, mercury__psqueue__T1_15, mercury__psqueue__T2_16);
            }
#line 277 "psqueue.m"
          }
#line 271 "psqueue.m"
      }
#line 270 "psqueue.m"
    return mercury__psqueue__Res_6;
#line 270 "psqueue.m"
  }
#line 264 "psqueue.m"
}

#line 238 "psqueue.m"
MR_Word MR_CALL 
mercury__psqueue__tournament_2_f_0(
#line 238 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_17,
#line 238 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_18,
#line 238 "psqueue.m"
  MR_Word mercury__psqueue__PSQ1_4,
#line 238 "psqueue.m"
  MR_Word mercury__psqueue__PSQ2_5)
#line 238 "psqueue.m"
{
#line 245 "psqueue.m"
  {
#line 245 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 245 "psqueue.m"
    MR_Word mercury__psqueue__Res_6;

#line 245 "psqueue.m"
    if ((mercury__psqueue__PSQ1_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 244 "psqueue.m"
      mercury__psqueue__Res_6 = mercury__psqueue__PSQ2_5;
#line 245 "psqueue.m"
    else
#line 246 "psqueue.m"
      {
#line 246 "psqueue.m"
        MR_Box mercury__psqueue__K1_7 = (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ1_4, (MR_Integer) 0));
#line 246 "psqueue.m"
        MR_Box mercury__psqueue__Prio1_8 = (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ1_4, (MR_Integer) 1));
#line 246 "psqueue.m"
        MR_Word mercury__psqueue__L1_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ1_4, (MR_Integer) 2)));
#line 246 "psqueue.m"
        MR_Box mercury__psqueue__MaxKey1_10 = (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ1_4, (MR_Integer) 3));

#line 250 "psqueue.m"
        if ((mercury__psqueue__PSQ2_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 249 "psqueue.m"
          mercury__psqueue__Res_6 = mercury__psqueue__PSQ1_4;
#line 250 "psqueue.m"
        else
#line 251 "psqueue.m"
          {
#line 251 "psqueue.m"
            MR_Box mercury__psqueue__K2_11 = (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ2_5, (MR_Integer) 0));
#line 251 "psqueue.m"
            MR_Box mercury__psqueue__Prio2_12 = (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ2_5, (MR_Integer) 1));
#line 251 "psqueue.m"
            MR_Word mercury__psqueue__L2_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ2_5, (MR_Integer) 2)));
#line 251 "psqueue.m"
            MR_Box mercury__psqueue__MaxKey2_14 = (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ2_5, (MR_Integer) 3));
#line 443 "psqueue.m"
            MR_Word mercury__psqueue__CMP_21;

#line 444 "psqueue.m"
            {
#line 444 "psqueue.m"
              mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_P_17, &mercury__psqueue__CMP_21, mercury__psqueue__Prio1_8, mercury__psqueue__Prio2_12);
            }
#line 446 "psqueue.m"
            if ((mercury__psqueue__CMP_21 == (MR_Integer) 1))
#line 445 "psqueue.m"
              mercury__psqueue__succeeded = MR_TRUE;
#line 446 "psqueue.m"
            else
#line 446 "psqueue.m"
              if ((mercury__psqueue__CMP_21 == (MR_Integer) 0))
#line 446 "psqueue.m"
                mercury__psqueue__succeeded = MR_TRUE;
#line 446 "psqueue.m"
              else
#line 446 "psqueue.m"
                mercury__psqueue__succeeded = MR_FALSE;
#line 256 "psqueue.m"
            if (mercury__psqueue__succeeded)
#line 254 "psqueue.m"
              {
#line 254 "psqueue.m"
                MR_Word mercury__psqueue__V_15_15;

#line 255 "psqueue.m"
                {
#line 255 "psqueue.m"
                  mercury__psqueue__V_15_15 = mercury__psqueue__balance_5_f_0(mercury__psqueue__TypeInfo_for_K_18, mercury__psqueue__TypeInfo_for_P_17, mercury__psqueue__K2_11, mercury__psqueue__Prio2_12, mercury__psqueue__L1_9, mercury__psqueue__MaxKey1_10, mercury__psqueue__L2_13);
                }
#line 254 "psqueue.m"
                {
#line 254 "psqueue.m"
                  mercury__psqueue__Res_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 254 "psqueue.m"
                  MR_hl_field(MR_mktag(1), mercury__psqueue__Res_6, 0) = mercury__psqueue__K1_7;
#line 254 "psqueue.m"
                  MR_hl_field(MR_mktag(1), mercury__psqueue__Res_6, 1) = mercury__psqueue__Prio1_8;
#line 254 "psqueue.m"
                  MR_hl_field(MR_mktag(1), mercury__psqueue__Res_6, 2) = ((MR_Box) (mercury__psqueue__V_15_15));
#line 254 "psqueue.m"
                  MR_hl_field(MR_mktag(1), mercury__psqueue__Res_6, 3) = mercury__psqueue__MaxKey2_14;
#line 254 "psqueue.m"
                }
#line 254 "psqueue.m"
              }
#line 256 "psqueue.m"
            else
#line 258 "psqueue.m"
              {
#line 258 "psqueue.m"
                MR_Word mercury__psqueue__V_16_16;

#line 259 "psqueue.m"
                {
#line 259 "psqueue.m"
                  mercury__psqueue__V_16_16 = mercury__psqueue__balance_5_f_0(mercury__psqueue__TypeInfo_for_K_18, mercury__psqueue__TypeInfo_for_P_17, mercury__psqueue__K1_7, mercury__psqueue__Prio1_8, mercury__psqueue__L1_9, mercury__psqueue__MaxKey1_10, mercury__psqueue__L2_13);
                }
#line 258 "psqueue.m"
                {
#line 258 "psqueue.m"
                  mercury__psqueue__Res_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 258 "psqueue.m"
                  MR_hl_field(MR_mktag(1), mercury__psqueue__Res_6, 0) = mercury__psqueue__K2_11;
#line 258 "psqueue.m"
                  MR_hl_field(MR_mktag(1), mercury__psqueue__Res_6, 1) = mercury__psqueue__Prio2_12;
#line 258 "psqueue.m"
                  MR_hl_field(MR_mktag(1), mercury__psqueue__Res_6, 2) = ((MR_Box) (mercury__psqueue__V_16_16));
#line 258 "psqueue.m"
                  MR_hl_field(MR_mktag(1), mercury__psqueue__Res_6, 3) = mercury__psqueue__MaxKey2_14;
#line 258 "psqueue.m"
                }
#line 258 "psqueue.m"
              }
#line 251 "psqueue.m"
          }
#line 246 "psqueue.m"
      }
#line 245 "psqueue.m"
    return mercury__psqueue__Res_6;
#line 245 "psqueue.m"
  }
#line 238 "psqueue.m"
}

#line 165 "psqueue.m"
MR_bool MR_CALL 
mercury__psqueue__is_finite_map_1_p_0(
#line 165 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_11,
#line 165 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_12,
#line 165 "psqueue.m"
  MR_Word mercury__psqueue__PSQ_2)
#line 165 "psqueue.m"
{
#line 1088 "psqueue.m"
  {
#line 1088 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;

#line 1088 "psqueue.m"
    if ((mercury__psqueue__PSQ_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1087 "psqueue.m"
      mercury__psqueue__succeeded = MR_TRUE;
#line 1088 "psqueue.m"
    else
#line 1089 "psqueue.m"
      {
#line 1089 "psqueue.m"
        MR_Word mercury__psqueue__T_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_2, (MR_Integer) 2)));
#line 1089 "psqueue.m"
        MR_Word mercury__psqueue__KeyList_7;
#line 1089 "psqueue.m"
        MR_Word mercury__psqueue__UniqList_8;
#line 1089 "psqueue.m"
        MR_Integer mercury__psqueue__LK_9;
#line 1089 "psqueue.m"
        MR_Integer mercury__psqueue__LUK_10;
#line 1089 "psqueue.m"
        MR_Integer mercury__psqueue__V_5_17;
#line 1089 "psqueue.m"
        MR_Box mercury__psqueue__V_3_3 = (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_2, (MR_Integer) 0));
#line 1089 "psqueue.m"
        MR_Box mercury__psqueue__V_4_4 = (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_2, (MR_Integer) 1));
#line 1089 "psqueue.m"
        MR_Box mercury__psqueue__V_6_6 = (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_2, (MR_Integer) 3));

#line 1090 "psqueue.m"
        {
#line 1090 "psqueue.m"
          mercury__psqueue__KeyList_7 = mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_107_101_121_115_95_95_91_50_93_95_48_1_f_0(mercury__psqueue__TypeInfo_for_K_12, mercury__psqueue__T_5);
        }
#line 78 "list.opt"
        {
#line 78 "list.opt"
          mercury__list__length_2_3_p_0(mercury__psqueue__TypeInfo_for_K_12, mercury__psqueue__KeyList_7, (MR_Integer) 0, &mercury__psqueue__V_5_17);
        }
#line 110 "list.opt"
        {
#line 110 "list.opt"
          mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__psqueue__TypeInfo_for_K_12, mercury__psqueue__V_5_17, mercury__psqueue__KeyList_7, &mercury__psqueue__UniqList_8);
        }
#line 78 "list.opt"
        {
#line 78 "list.opt"
          mercury__list__length_2_3_p_0(mercury__psqueue__TypeInfo_for_K_12, mercury__psqueue__KeyList_7, (MR_Integer) 0, &mercury__psqueue__LK_9);
        }
#line 78 "list.opt"
        {
#line 78 "list.opt"
          mercury__list__length_2_3_p_0(mercury__psqueue__TypeInfo_for_K_12, mercury__psqueue__UniqList_8, (MR_Integer) 0, &mercury__psqueue__LUK_10);
        }
#line 1094 "psqueue.m"
        mercury__psqueue__succeeded = (mercury__psqueue__LK_9 == mercury__psqueue__LUK_10);
#line 1089 "psqueue.m"
      }
#line 1088 "psqueue.m"
    return mercury__psqueue__succeeded;
#line 1088 "psqueue.m"
  }
#line 165 "psqueue.m"
}

#line 161 "psqueue.m"
MR_bool MR_CALL 
mercury__psqueue__key_condition_1_p_0(
#line 161 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_8,
#line 161 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_9,
#line 161 "psqueue.m"
  MR_Word mercury__psqueue__PSQ_2)
#line 161 "psqueue.m"
{
#line 1065 "psqueue.m"
  {
#line 1065 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;

#line 1065 "psqueue.m"
    if ((mercury__psqueue__PSQ_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1064 "psqueue.m"
      mercury__psqueue__succeeded = MR_TRUE;
#line 1065 "psqueue.m"
    else
#line 1066 "psqueue.m"
      {
#line 1066 "psqueue.m"
        MR_Word mercury__psqueue__T_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_2, (MR_Integer) 2)));
#line 1066 "psqueue.m"
        MR_Box mercury__psqueue__MaxKey_6 = (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_2, (MR_Integer) 3));
#line 1066 "psqueue.m"
        MR_Word mercury__psqueue__V_13_13;
#line 1066 "psqueue.m"
        MR_Box mercury__psqueue__V_3_3 = (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_2, (MR_Integer) 0));
#line 1066 "psqueue.m"
        MR_Box mercury__psqueue__V_4_4 = (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_2, (MR_Integer) 1));
#line 483 "psqueue.m"
        MR_Box mercury__psqueue__V_7_7;

#line 483 "psqueue.m"
        {
#line 483 "psqueue.m"
          mercury__psqueue__V_13_13 = mercury__psqueue__tournament_view_1_f_0(mercury__psqueue__TypeInfo_for_P_8, mercury__psqueue__TypeInfo_for_K_9, mercury__psqueue__PSQ_2);
        }
#line 483 "psqueue.m"
        {
#line 483 "psqueue.m"
          mercury__psqueue__succeeded = mercury__psqueue__search_tv_3_p_0(mercury__psqueue__TypeInfo_for_K_9, mercury__psqueue__TypeInfo_for_P_8, mercury__psqueue__V_13_13, mercury__psqueue__MaxKey_6, &mercury__psqueue__V_7_7);
        }
#line 1066 "psqueue.m"
        if (mercury__psqueue__succeeded)
#line 1068 "psqueue.m"
          {
#line 1068 "psqueue.m"
            return mercury__psqueue__succeeded = mercury__psqueue__key_condition_2_p_0(mercury__psqueue__TypeInfo_for_P_8, mercury__psqueue__TypeInfo_for_K_9, mercury__psqueue__PSQ_2, mercury__psqueue__T_5);
          }
#line 1066 "psqueue.m"
      }
#line 1065 "psqueue.m"
    return mercury__psqueue__succeeded;
#line 1065 "psqueue.m"
  }
#line 161 "psqueue.m"
}

#line 157 "psqueue.m"
MR_bool MR_CALL 
mercury__psqueue__is_search_tree_1_p_0(
#line 157 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_7,
#line 157 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_8,
#line 157 "psqueue.m"
  MR_Word mercury__psqueue__PSQ_2)
#line 157 "psqueue.m"
{
#line 896 "psqueue.m"
  {
#line 896 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;

#line 896 "psqueue.m"
    if ((mercury__psqueue__PSQ_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 895 "psqueue.m"
      mercury__psqueue__succeeded = MR_TRUE;
#line 896 "psqueue.m"
    else
#line 897 "psqueue.m"
      {
#line 897 "psqueue.m"
        MR_Word mercury__psqueue__LTree_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_2, (MR_Integer) 2)));
#line 897 "psqueue.m"
        MR_Box mercury__psqueue__V_3_3 = (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_2, (MR_Integer) 0));
#line 897 "psqueue.m"
        MR_Box mercury__psqueue__V_4_4 = (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_2, (MR_Integer) 1));
#line 897 "psqueue.m"
        MR_Box mercury__psqueue__V_6_6 = (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_2, (MR_Integer) 3));

#line 898 "psqueue.m"
        {
#line 898 "psqueue.m"
          return mercury__psqueue__succeeded = mercury__psqueue__all_search_keys_1_p_0(mercury__psqueue__TypeInfo_for_K_8, mercury__psqueue__TypeInfo_for_P_7, mercury__psqueue__LTree_5);
        }
#line 897 "psqueue.m"
      }
#line 896 "psqueue.m"
    return mercury__psqueue__succeeded;
#line 896 "psqueue.m"
  }
#line 157 "psqueue.m"
}

#line 148 "psqueue.m"
MR_bool MR_CALL 
mercury__psqueue__is_semi_heap_1_p_0(
#line 148 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_7,
#line 148 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_8,
#line 148 "psqueue.m"
  MR_Word mercury__psqueue__PSQ_2)
#line 148 "psqueue.m"
{
#line 767 "psqueue.m"
  {
#line 767 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;

#line 767 "psqueue.m"
    if ((mercury__psqueue__PSQ_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 766 "psqueue.m"
      mercury__psqueue__succeeded = MR_TRUE;
#line 767 "psqueue.m"
    else
#line 768 "psqueue.m"
      {
#line 768 "psqueue.m"
        MR_Box mercury__psqueue__Prio_4 = (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_2, (MR_Integer) 1));
#line 768 "psqueue.m"
        MR_Word mercury__psqueue__LTree_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_2, (MR_Integer) 2)));
#line 768 "psqueue.m"
        MR_Box mercury__psqueue__V_3_3 = (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_2, (MR_Integer) 0));
#line 768 "psqueue.m"
        MR_Box mercury__psqueue__V_6_6 = (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_2, (MR_Integer) 3));

#line 769 "psqueue.m"
        {
#line 769 "psqueue.m"
          mercury__psqueue__succeeded = mercury__psqueue__all_keys_larger_ltree_2_p_0(mercury__psqueue__TypeInfo_for_P_7, mercury__psqueue__TypeInfo_for_K_8, mercury__psqueue__Prio_4, mercury__psqueue__LTree_5);
        }
#line 768 "psqueue.m"
        if (mercury__psqueue__succeeded)
#line 770 "psqueue.m"
          {
#line 770 "psqueue.m"
            return mercury__psqueue__succeeded = mercury__psqueue__all_nodes_loser_prio_1_p_0(mercury__psqueue__TypeInfo_for_K_8, mercury__psqueue__TypeInfo_for_P_7, mercury__psqueue__LTree_5);
          }
#line 768 "psqueue.m"
      }
#line 767 "psqueue.m"
    return mercury__psqueue__succeeded;
#line 767 "psqueue.m"
  }
#line 148 "psqueue.m"
}

#line 134 "psqueue.m"
void MR_CALL 
mercury__psqueue__size_2_p_0(
#line 134 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_9,
#line 134 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_10,
#line 134 "psqueue.m"
  MR_Word mercury__psqueue__PSQ_3,
#line 134 "psqueue.m"
  MR_Integer * mercury__psqueue__Size_4)
#line 134 "psqueue.m"
{
#line 552 "psqueue.m"
  {
#line 552 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;

#line 552 "psqueue.m"
    if ((mercury__psqueue__PSQ_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 551 "psqueue.m"
      *mercury__psqueue__Size_4 = (MR_Integer) 0;
#line 552 "psqueue.m"
    else
#line 553 "psqueue.m"
      {
#line 553 "psqueue.m"
        MR_Word mercury__psqueue__LTree_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_3, (MR_Integer) 2)));
#line 553 "psqueue.m"
        MR_Box mercury__psqueue__V_5_5 = (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_3, (MR_Integer) 0));
#line 553 "psqueue.m"
        MR_Box mercury__psqueue__V_6_6 = (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_3, (MR_Integer) 1));
#line 553 "psqueue.m"
        MR_Box mercury__psqueue__V_8_8 = (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_3, (MR_Integer) 3));

#line 565 "psqueue.m"
        if ((mercury__psqueue__LTree_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 564 "psqueue.m"
          *mercury__psqueue__Size_4 = (MR_Integer) 0;
#line 565 "psqueue.m"
        else
#line 566 "psqueue.m"
          {
#line 566 "psqueue.m"
            MR_Box mercury__psqueue__V_13_13;
#line 566 "psqueue.m"
            MR_Box mercury__psqueue__V_14_14;
#line 566 "psqueue.m"
            MR_Word mercury__psqueue__V_15_15;
#line 566 "psqueue.m"
            MR_Box mercury__psqueue__V_16_16;
#line 566 "psqueue.m"
            MR_Word mercury__psqueue__V_17_17;

#line 566 "psqueue.m"
            *mercury__psqueue__Size_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_7, (MR_Integer) 0)));
#line 566 "psqueue.m"
            mercury__psqueue__V_13_13 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_7, (MR_Integer) 1));
#line 566 "psqueue.m"
            mercury__psqueue__V_14_14 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_7, (MR_Integer) 2));
#line 566 "psqueue.m"
            mercury__psqueue__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_7, (MR_Integer) 3)));
#line 566 "psqueue.m"
            mercury__psqueue__V_16_16 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_7, (MR_Integer) 4));
#line 566 "psqueue.m"
            mercury__psqueue__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_7, (MR_Integer) 5)));
#line 566 "psqueue.m"
          }
#line 553 "psqueue.m"
      }
#line 552 "psqueue.m"
  }
#line 134 "psqueue.m"
}

#line 133 "psqueue.m"
MR_Integer MR_CALL 
mercury__psqueue__size_1_f_0(
#line 133 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_5,
#line 133 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_6,
#line 133 "psqueue.m"
  MR_Word mercury__psqueue__PSQ_3)
#line 133 "psqueue.m"
{
#line 552 "psqueue.m"
  {
#line 552 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 552 "psqueue.m"
    MR_Integer mercury__psqueue__Res_4;

#line 552 "psqueue.m"
    if ((mercury__psqueue__PSQ_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 551 "psqueue.m"
      mercury__psqueue__Res_4 = (MR_Integer) 0;
#line 552 "psqueue.m"
    else
#line 553 "psqueue.m"
      {
#line 553 "psqueue.m"
        MR_Word mercury__psqueue__LTree_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_3, (MR_Integer) 2)));
#line 553 "psqueue.m"
        MR_Box mercury__psqueue__V_9_9 = (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_3, (MR_Integer) 0));
#line 553 "psqueue.m"
        MR_Box mercury__psqueue__V_10_10 = (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_3, (MR_Integer) 1));
#line 553 "psqueue.m"
        MR_Box mercury__psqueue__V_12_12 = (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_3, (MR_Integer) 3));

#line 565 "psqueue.m"
        if ((mercury__psqueue__LTree_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 564 "psqueue.m"
          mercury__psqueue__Res_4 = (MR_Integer) 0;
#line 565 "psqueue.m"
        else
#line 566 "psqueue.m"
          {
#line 566 "psqueue.m"
            MR_Box mercury__psqueue__V_15_15;
#line 566 "psqueue.m"
            MR_Box mercury__psqueue__V_16_16;
#line 566 "psqueue.m"
            MR_Word mercury__psqueue__V_17_17;
#line 566 "psqueue.m"
            MR_Box mercury__psqueue__V_18_18;
#line 566 "psqueue.m"
            MR_Word mercury__psqueue__V_19_19;

#line 566 "psqueue.m"
            mercury__psqueue__Res_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_11, (MR_Integer) 0)));
#line 566 "psqueue.m"
            mercury__psqueue__V_15_15 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_11, (MR_Integer) 1));
#line 566 "psqueue.m"
            mercury__psqueue__V_16_16 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_11, (MR_Integer) 2));
#line 566 "psqueue.m"
            mercury__psqueue__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_11, (MR_Integer) 3)));
#line 566 "psqueue.m"
            mercury__psqueue__V_18_18 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_11, (MR_Integer) 4));
#line 566 "psqueue.m"
            mercury__psqueue__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_11, (MR_Integer) 5)));
#line 566 "psqueue.m"
          }
#line 553 "psqueue.m"
      }
#line 552 "psqueue.m"
    return mercury__psqueue__Res_4;
#line 552 "psqueue.m"
  }
#line 133 "psqueue.m"
}

#line 129 "psqueue.m"
void MR_CALL 
mercury__psqueue__at_most_3_p_0(
#line 129 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_21,
#line 129 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_22,
#line 129 "psqueue.m"
  MR_Word mercury__psqueue__PSQ_4,
#line 129 "psqueue.m"
  MR_Box mercury__psqueue__Pt_5,
#line 129 "psqueue.m"
  MR_Word * mercury__psqueue__AList_6)
#line 129 "psqueue.m"
{
#line 517 "psqueue.m"
  {
#line 517 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 517 "psqueue.m"
    MR_Word mercury__psqueue__MView_7;

#line 596 "psqueue.m"
    if ((mercury__psqueue__PSQ_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 595 "psqueue.m"
      mercury__psqueue__MView_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 596 "psqueue.m"
    else
#line 597 "psqueue.m"
      {
#line 597 "psqueue.m"
        MR_Box mercury__psqueue__Key_27 = (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_4, (MR_Integer) 0));
#line 597 "psqueue.m"
        MR_Box mercury__psqueue__Prio_28 = (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_4, (MR_Integer) 1));
#line 597 "psqueue.m"
        MR_Word mercury__psqueue__LTree_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_4, (MR_Integer) 2)));
#line 597 "psqueue.m"
        MR_Box mercury__psqueue__MaxKey_30 = (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_4, (MR_Integer) 3));
#line 597 "psqueue.m"
        MR_Word mercury__psqueue__V_31_31;

#line 598 "psqueue.m"
        {
#line 598 "psqueue.m"
          mercury__psqueue__V_31_31 = mercury__psqueue__second_best_2_f_0(mercury__psqueue__TypeInfo_for_K_22, mercury__psqueue__TypeInfo_for_P_21, mercury__psqueue__LTree_29, mercury__psqueue__MaxKey_30);
        }
#line 598 "psqueue.m"
        {
#line 598 "psqueue.m"
          mercury__psqueue__MView_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 598 "psqueue.m"
          MR_hl_field(MR_mktag(1), mercury__psqueue__MView_7, 0) = mercury__psqueue__Key_27;
#line 598 "psqueue.m"
          MR_hl_field(MR_mktag(1), mercury__psqueue__MView_7, 1) = mercury__psqueue__Prio_28;
#line 598 "psqueue.m"
          MR_hl_field(MR_mktag(1), mercury__psqueue__MView_7, 2) = ((MR_Box) (mercury__psqueue__V_31_31));
#line 598 "psqueue.m"
        }
#line 597 "psqueue.m"
      }
#line 522 "psqueue.m"
    if ((mercury__psqueue__MView_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 521 "psqueue.m"
      *mercury__psqueue__AList_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 522 "psqueue.m"
    else
#line 523 "psqueue.m"
      {
#line 523 "psqueue.m"
        MR_Box mercury__psqueue__Prio_9 = (MR_hl_field(MR_mktag(1), mercury__psqueue__MView_7, (MR_Integer) 1));
#line 523 "psqueue.m"
        MR_Word mercury__psqueue__CMP_11;
#line 523 "psqueue.m"
        MR_Box mercury__psqueue__V_8_8 = (MR_hl_field(MR_mktag(1), mercury__psqueue__MView_7, (MR_Integer) 0));
#line 523 "psqueue.m"
        MR_Word mercury__psqueue__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__MView_7, (MR_Integer) 2)));

#line 524 "psqueue.m"
        {
#line 524 "psqueue.m"
          mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_P_21, &mercury__psqueue__CMP_11, mercury__psqueue__Prio_9, mercury__psqueue__Pt_5);
        }
#line 528 "psqueue.m"
        if ((mercury__psqueue__CMP_11 == (MR_Integer) 2))
#line 527 "psqueue.m"
          *mercury__psqueue__AList_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 528 "psqueue.m"
        else
#line 531 "psqueue.m"
          {
#line 531 "psqueue.m"
            MR_Word mercury__psqueue__TView_12;

#line 532 "psqueue.m"
            {
#line 532 "psqueue.m"
              mercury__psqueue__TView_12 = mercury__psqueue__tournament_view_1_f_0(mercury__psqueue__TypeInfo_for_P_21, mercury__psqueue__TypeInfo_for_K_22, mercury__psqueue__PSQ_4);
            }
#line 536 "psqueue.m"
            if ((mercury__psqueue__TView_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 535 "psqueue.m"
              *mercury__psqueue__AList_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 536 "psqueue.m"
            else
#line 536 "psqueue.m"
              if (((MR_tag((MR_Word) mercury__psqueue__TView_12)) == (MR_mktag((MR_Integer) 1))))
#line 537 "psqueue.m"
                {
#line 537 "psqueue.m"
                  MR_Box mercury__psqueue__Prio0_13 = (MR_hl_field(MR_mktag(1), mercury__psqueue__TView_12, (MR_Integer) 0));
#line 537 "psqueue.m"
                  MR_Box mercury__psqueue__Key0_14 = (MR_hl_field(MR_mktag(1), mercury__psqueue__TView_12, (MR_Integer) 1));
#line 537 "psqueue.m"
                  MR_Word mercury__psqueue__V_19_19;
#line 537 "psqueue.m"
                  MR_Word mercury__psqueue__V_20_20;

#line 538 "psqueue.m"
                  {
#line 538 "psqueue.m"
                    mercury__psqueue__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 538 "psqueue.m"
                    MR_hl_field(MR_mktag(0), mercury__psqueue__V_19_19, 0) = mercury__psqueue__Key0_14;
#line 538 "psqueue.m"
                    MR_hl_field(MR_mktag(0), mercury__psqueue__V_19_19, 1) = mercury__psqueue__Prio0_13;
#line 538 "psqueue.m"
                  }
#line 538 "psqueue.m"
                  mercury__psqueue__V_20_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 538 "psqueue.m"
                  {
#line 538 "psqueue.m"
                    MR_Word base;
#line 538 "psqueue.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 538 "psqueue.m"
                    *mercury__psqueue__AList_6 = base;
#line 538 "psqueue.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__psqueue__V_19_19));
#line 538 "psqueue.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__psqueue__V_20_20));
#line 538 "psqueue.m"
                  }
#line 537 "psqueue.m"
                }
#line 536 "psqueue.m"
              else
#line 540 "psqueue.m"
                {
#line 540 "psqueue.m"
                  MR_Word mercury__psqueue__TypeCtorInfo_23_23;
#line 540 "psqueue.m"
                  MR_Word mercury__psqueue__TypeInfo_24_24;
#line 540 "psqueue.m"
                  MR_Word mercury__psqueue__T1_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__psqueue__TView_12, (MR_Integer) 0)));
#line 540 "psqueue.m"
                  MR_Word mercury__psqueue__T2_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__psqueue__TView_12, (MR_Integer) 1)));
#line 540 "psqueue.m"
                  MR_Word mercury__psqueue__AL0_17;
#line 540 "psqueue.m"
                  MR_Word mercury__psqueue__AL1_18;
#line 46 "list.opt"
                  MR_Word mercury__psqueue__conv0_AList_6;

#line 541 "psqueue.m"
                  {
#line 541 "psqueue.m"
                    mercury__psqueue__at_most_3_p_0(mercury__psqueue__TypeInfo_for_P_21, mercury__psqueue__TypeInfo_for_K_22, mercury__psqueue__T1_15, mercury__psqueue__Pt_5, &mercury__psqueue__AL0_17);
                  }
#line 542 "psqueue.m"
                  {
#line 542 "psqueue.m"
                    mercury__psqueue__at_most_3_p_0(mercury__psqueue__TypeInfo_for_P_21, mercury__psqueue__TypeInfo_for_K_22, mercury__psqueue__T2_16, mercury__psqueue__Pt_5, &mercury__psqueue__AL1_18);
                  }
#line 9575 "psqueue.c"
                  mercury__psqueue__TypeCtorInfo_23_23 = (MR_Word) &mercury__pair__pair__type_ctor_info_pair_2;
#line 9577 "psqueue.c"
                  {
#line 9579 "psqueue.c"
                    mercury__psqueue__TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 9581 "psqueue.c"
                    MR_hl_field(MR_mktag(0), mercury__psqueue__TypeInfo_24_24, 0) = ((MR_Box) (mercury__psqueue__TypeCtorInfo_23_23));
#line 9583 "psqueue.c"
                    MR_hl_field(MR_mktag(0), mercury__psqueue__TypeInfo_24_24, 1) = ((MR_Box) (mercury__psqueue__TypeInfo_for_P_21));
#line 9585 "psqueue.c"
                    MR_hl_field(MR_mktag(0), mercury__psqueue__TypeInfo_24_24, 2) = ((MR_Box) (mercury__psqueue__TypeInfo_for_K_22));
#line 9587 "psqueue.c"
                  }
#line 46 "list.opt"
                  {
#line 46 "list.opt"
                    mercury__list__append_3_p_1(mercury__psqueue__TypeInfo_24_24, (MR_Word) mercury__psqueue__AL0_17, (MR_Word) mercury__psqueue__AL1_18, &mercury__psqueue__conv0_AList_6);
                  }
#line 46 "list.opt"
                  *mercury__psqueue__AList_6 = (MR_Word) mercury__psqueue__conv0_AList_6;
#line 540 "psqueue.m"
                }
#line 531 "psqueue.m"
          }
#line 523 "psqueue.m"
      }
#line 517 "psqueue.m"
  }
#line 129 "psqueue.m"
}

#line 128 "psqueue.m"
MR_Word MR_CALL 
mercury__psqueue__at_most_2_f_0(
#line 128 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_7,
#line 128 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_8,
#line 128 "psqueue.m"
  MR_Word mercury__psqueue__PSQ_4,
#line 128 "psqueue.m"
  MR_Box mercury__psqueue__P_5)
#line 128 "psqueue.m"
{
#line 515 "psqueue.m"
  {
#line 515 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 515 "psqueue.m"
    MR_Word mercury__psqueue__Res_6;

#line 515 "psqueue.m"
    {
#line 515 "psqueue.m"
      mercury__psqueue__at_most_3_p_0(mercury__psqueue__TypeInfo_for_P_7, mercury__psqueue__TypeInfo_for_K_8, mercury__psqueue__PSQ_4, mercury__psqueue__P_5, &mercury__psqueue__Res_6);
    }
#line 515 "psqueue.m"
    return mercury__psqueue__Res_6;
#line 515 "psqueue.m"
  }
#line 128 "psqueue.m"
}

#line 123 "psqueue.m"
void MR_CALL 
mercury__psqueue__lookup_3_p_0(
#line 123 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_11,
#line 123 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_12,
#line 123 "psqueue.m"
  MR_Word mercury__psqueue__PSQ_4,
#line 123 "psqueue.m"
  MR_Box mercury__psqueue__K_5,
#line 123 "psqueue.m"
  MR_Box * mercury__psqueue__P_6)
#line 123 "psqueue.m"
{
#line 505 "psqueue.m"
  {
#line 505 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 505 "psqueue.m"
    MR_Box mercury__psqueue__PPrime_7;
#line 482 "psqueue.m"
    MR_Word mercury__psqueue__V_16_16;

#line 483 "psqueue.m"
    {
#line 483 "psqueue.m"
      mercury__psqueue__V_16_16 = mercury__psqueue__tournament_view_1_f_0(mercury__psqueue__TypeInfo_for_P_11, mercury__psqueue__TypeInfo_for_K_12, mercury__psqueue__PSQ_4);
    }
#line 483 "psqueue.m"
    {
#line 483 "psqueue.m"
      mercury__psqueue__succeeded = mercury__psqueue__search_tv_3_p_0(mercury__psqueue__TypeInfo_for_K_12, mercury__psqueue__TypeInfo_for_P_11, mercury__psqueue__V_16_16, mercury__psqueue__K_5, &mercury__psqueue__PPrime_7);
    }
#line 505 "psqueue.m"
    if (mercury__psqueue__succeeded)
#line 504 "psqueue.m"
      *mercury__psqueue__P_6 = mercury__psqueue__PPrime_7;
#line 505 "psqueue.m"
    else
#line 506 "psqueue.m"
      {
#line 506 "psqueue.m"
        {
#line 506 "psqueue.m"
          mercury__require__unexpected_3_p_0((MR_String) "psqueue.m", (MR_String) "predicate \140psqueue.lookup\'/3", (MR_String) "element not found");
#line 506 "psqueue.m"
          return;
        }
#line 506 "psqueue.m"
      }
#line 505 "psqueue.m"
  }
#line 123 "psqueue.m"
}

#line 122 "psqueue.m"
MR_Box MR_CALL 
mercury__psqueue__lookup_2_f_0(
#line 122 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_7,
#line 122 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_8,
#line 122 "psqueue.m"
  MR_Word mercury__psqueue__PSQ_4,
#line 122 "psqueue.m"
  MR_Box mercury__psqueue__K_5)
#line 122 "psqueue.m"
{
#line 510 "psqueue.m"
  {
#line 510 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 510 "psqueue.m"
    MR_Box mercury__psqueue__P_6;

#line 510 "psqueue.m"
    {
#line 510 "psqueue.m"
      mercury__psqueue__lookup_3_p_0(mercury__psqueue__TypeInfo_for_P_7, mercury__psqueue__TypeInfo_for_K_8, mercury__psqueue__PSQ_4, mercury__psqueue__K_5, &mercury__psqueue__P_6);
    }
#line 510 "psqueue.m"
    return mercury__psqueue__P_6;
#line 510 "psqueue.m"
  }
#line 122 "psqueue.m"
}

#line 117 "psqueue.m"
MR_bool MR_CALL 
mercury__psqueue__search_3_p_0(
#line 117 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_8,
#line 117 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_9,
#line 117 "psqueue.m"
  MR_Word mercury__psqueue__PSQ_4,
#line 117 "psqueue.m"
  MR_Box mercury__psqueue__K_5,
#line 117 "psqueue.m"
  MR_Box * mercury__psqueue__P_6)
#line 117 "psqueue.m"
{
#line 482 "psqueue.m"
  {
#line 482 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 482 "psqueue.m"
    MR_Word mercury__psqueue__V_7_7;

#line 483 "psqueue.m"
    {
#line 483 "psqueue.m"
      mercury__psqueue__V_7_7 = mercury__psqueue__tournament_view_1_f_0(mercury__psqueue__TypeInfo_for_P_8, mercury__psqueue__TypeInfo_for_K_9, mercury__psqueue__PSQ_4);
    }
#line 483 "psqueue.m"
    {
#line 483 "psqueue.m"
      return mercury__psqueue__succeeded = mercury__psqueue__search_tv_3_p_0(mercury__psqueue__TypeInfo_for_K_9, mercury__psqueue__TypeInfo_for_P_8, mercury__psqueue__V_7_7, mercury__psqueue__K_5, mercury__psqueue__P_6);
    }
#line 482 "psqueue.m"
    return mercury__psqueue__succeeded;
#line 482 "psqueue.m"
  }
#line 117 "psqueue.m"
}

#line 112 "psqueue.m"
MR_bool MR_CALL 
mercury__psqueue__adjust_4_p_0(
#line 112 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_12,
#line 112 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_13,
#line 112 "psqueue.m"
  MR_Word mercury__psqueue__F_5,
#line 112 "psqueue.m"
  MR_Box mercury__psqueue__K_6,
#line 112 "psqueue.m"
  MR_Word mercury__psqueue__STATE_VARIABLE_PSQ_0_8,
#line 112 "psqueue.m"
  MR_Word * mercury__psqueue__STATE_VARIABLE_PSQ_9)
#line 112 "psqueue.m"
{
#line 451 "psqueue.m"
  {
#line 451 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 451 "psqueue.m"
    MR_Word mercury__psqueue__V_10_10;

#line 452 "psqueue.m"
    {
#line 452 "psqueue.m"
      mercury__psqueue__V_10_10 = mercury__psqueue__tournament_view_1_f_0(mercury__psqueue__TypeInfo_for_P_12, mercury__psqueue__TypeInfo_for_K_13, mercury__psqueue__STATE_VARIABLE_PSQ_0_8);
    }
#line 452 "psqueue.m"
    {
#line 452 "psqueue.m"
      return mercury__psqueue__succeeded = mercury__psqueue__adjust_tv_4_p_0(mercury__psqueue__TypeInfo_for_P_12, mercury__psqueue__TypeInfo_for_K_13, mercury__psqueue__F_5, mercury__psqueue__K_6, mercury__psqueue__V_10_10, mercury__psqueue__STATE_VARIABLE_PSQ_9);
    }
#line 451 "psqueue.m"
    return mercury__psqueue__succeeded;
#line 451 "psqueue.m"
  }
#line 112 "psqueue.m"
}

#line 106 "psqueue.m"
void MR_CALL 
mercury__psqueue__det_remove_4_p_0(
#line 106 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_16,
#line 106 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_17,
#line 106 "psqueue.m"
  MR_Box * mercury__psqueue__P_5,
#line 106 "psqueue.m"
  MR_Box mercury__psqueue__K_6,
#line 106 "psqueue.m"
  MR_Word mercury__psqueue__STATE_VARIABLE_PSQ_0_10,
#line 106 "psqueue.m"
  MR_Word * mercury__psqueue__STATE_VARIABLE_PSQ_11)
#line 106 "psqueue.m"
{
#line 412 "psqueue.m"
  {
#line 412 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 412 "psqueue.m"
    MR_Box mercury__psqueue__PPrime_8;
#line 412 "psqueue.m"
    MR_Word mercury__psqueue__PSQPrime_9;
#line 405 "psqueue.m"
    MR_Word mercury__psqueue__V_23_23;

#line 406 "psqueue.m"
    {
#line 406 "psqueue.m"
      mercury__psqueue__V_23_23 = mercury__psqueue__tournament_view_1_f_0(mercury__psqueue__TypeInfo_for_P_16, mercury__psqueue__TypeInfo_for_K_17, mercury__psqueue__STATE_VARIABLE_PSQ_0_10);
    }
#line 406 "psqueue.m"
    {
#line 406 "psqueue.m"
      mercury__psqueue__succeeded = mercury__psqueue__remove_tv_4_p_0(mercury__psqueue__TypeInfo_for_P_16, mercury__psqueue__TypeInfo_for_K_17, &mercury__psqueue__PPrime_8, mercury__psqueue__K_6, mercury__psqueue__V_23_23, &mercury__psqueue__PSQPrime_9);
    }
#line 412 "psqueue.m"
    if (mercury__psqueue__succeeded)
#line 410 "psqueue.m"
      {
#line 410 "psqueue.m"
        *mercury__psqueue__P_5 = mercury__psqueue__PPrime_8;
#line 411 "psqueue.m"
        *mercury__psqueue__STATE_VARIABLE_PSQ_11 = mercury__psqueue__PSQPrime_9;
#line 410 "psqueue.m"
      }
#line 412 "psqueue.m"
    else
#line 413 "psqueue.m"
      {
#line 413 "psqueue.m"
        {
#line 413 "psqueue.m"
          mercury__require__unexpected_3_p_0((MR_String) "psqueue.m", (MR_String) "predicate \140psqueue.det_remove\'/4", (MR_String) "element not found");
#line 413 "psqueue.m"
          return;
        }
#line 413 "psqueue.m"
      }
#line 412 "psqueue.m"
  }
#line 106 "psqueue.m"
}

#line 104 "psqueue.m"
MR_bool MR_CALL 
mercury__psqueue__remove_4_p_0(
#line 104 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_12,
#line 104 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_13,
#line 104 "psqueue.m"
  MR_Box * mercury__psqueue__P_5,
#line 104 "psqueue.m"
  MR_Box mercury__psqueue__K_6,
#line 104 "psqueue.m"
  MR_Word mercury__psqueue__STATE_VARIABLE_PSQ_0_8,
#line 104 "psqueue.m"
  MR_Word * mercury__psqueue__STATE_VARIABLE_PSQ_9)
#line 104 "psqueue.m"
{
#line 405 "psqueue.m"
  {
#line 405 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 405 "psqueue.m"
    MR_Word mercury__psqueue__V_10_10;

#line 406 "psqueue.m"
    {
#line 406 "psqueue.m"
      mercury__psqueue__V_10_10 = mercury__psqueue__tournament_view_1_f_0(mercury__psqueue__TypeInfo_for_P_12, mercury__psqueue__TypeInfo_for_K_13, mercury__psqueue__STATE_VARIABLE_PSQ_0_8);
    }
#line 406 "psqueue.m"
    {
#line 406 "psqueue.m"
      return mercury__psqueue__succeeded = mercury__psqueue__remove_tv_4_p_0(mercury__psqueue__TypeInfo_for_P_12, mercury__psqueue__TypeInfo_for_K_13, mercury__psqueue__P_5, mercury__psqueue__K_6, mercury__psqueue__V_10_10, mercury__psqueue__STATE_VARIABLE_PSQ_9);
    }
#line 405 "psqueue.m"
    return mercury__psqueue__succeeded;
#line 405 "psqueue.m"
  }
#line 104 "psqueue.m"
}

#line 100 "psqueue.m"
void MR_CALL 
mercury__psqueue__from_assoc_list_2_p_0(
#line 100 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_6,
#line 100 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_7,
#line 100 "psqueue.m"
  MR_Word mercury__psqueue__AList_3,
#line 100 "psqueue.m"
  MR_Word * mercury__psqueue__PSQ_4)
#line 100 "psqueue.m"
{
#line 392 "psqueue.m"
  {
#line 392 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 392 "psqueue.m"
    MR_Word mercury__psqueue__V_5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 393 "psqueue.m"
    {
#line 393 "psqueue.m"
      mercury__psqueue__from_assoc_list2_3_p_0(mercury__psqueue__TypeInfo_for_P_6, mercury__psqueue__TypeInfo_for_K_7, mercury__psqueue__AList_3, mercury__psqueue__V_5_5, mercury__psqueue__PSQ_4);
#line 393 "psqueue.m"
      return;
    }
#line 392 "psqueue.m"
  }
#line 100 "psqueue.m"
}

#line 99 "psqueue.m"
MR_Word MR_CALL 
mercury__psqueue__from_assoc_list_1_f_0(
#line 99 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_5,
#line 99 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_6,
#line 99 "psqueue.m"
  MR_Word mercury__psqueue__AList_3)
#line 99 "psqueue.m"
{
#line 392 "psqueue.m"
  {
#line 392 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 392 "psqueue.m"
    MR_Word mercury__psqueue__Res_4;
#line 392 "psqueue.m"
    MR_Word mercury__psqueue__V_9_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 393 "psqueue.m"
    {
#line 393 "psqueue.m"
      mercury__psqueue__from_assoc_list2_3_p_0(mercury__psqueue__TypeInfo_for_P_5, mercury__psqueue__TypeInfo_for_K_6, mercury__psqueue__AList_3, mercury__psqueue__V_9_9, &mercury__psqueue__Res_4);
    }
#line 392 "psqueue.m"
    return mercury__psqueue__Res_4;
#line 392 "psqueue.m"
  }
#line 99 "psqueue.m"
}

#line 95 "psqueue.m"
void MR_CALL 
mercury__psqueue__to_assoc_list_2_p_0(
#line 95 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_10,
#line 95 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_11,
#line 95 "psqueue.m"
  MR_Word mercury__psqueue__PSQ_3,
#line 95 "psqueue.m"
  MR_Word * mercury__psqueue__AList_4)
#line 95 "psqueue.m"
{
#line 385 "psqueue.m"
  {
#line 385 "psqueue.m"
    MR_bool mercury__psqueue__succeeded = ((MR_tag((MR_Word) mercury__psqueue__PSQ_3)) == (MR_mktag((MR_Integer) 1)));
#line 385 "psqueue.m"
    MR_Box mercury__psqueue__K_5;
#line 385 "psqueue.m"
    MR_Box mercury__psqueue__P_6;
#line 385 "psqueue.m"
    MR_Word mercury__psqueue__PSQ0_7;
#line 363 "psqueue.m"
    MR_Word mercury__psqueue__L_16;
#line 363 "psqueue.m"
    MR_Box mercury__psqueue__MaxKey_17;

#line 364 "psqueue.m"
    if (mercury__psqueue__succeeded)
#line 364 "psqueue.m"
      {
#line 364 "psqueue.m"
        mercury__psqueue__P_6 = (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_3, (MR_Integer) 0));
#line 364 "psqueue.m"
        mercury__psqueue__K_5 = (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_3, (MR_Integer) 1));
#line 364 "psqueue.m"
        mercury__psqueue__L_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_3, (MR_Integer) 2)));
#line 364 "psqueue.m"
        mercury__psqueue__MaxKey_17 = (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_3, (MR_Integer) 3));
#line 365 "psqueue.m"
        {
#line 365 "psqueue.m"
          mercury__psqueue__PSQ0_7 = mercury__psqueue__second_best_2_f_0(mercury__psqueue__TypeInfo_for_K_11, mercury__psqueue__TypeInfo_for_P_10, mercury__psqueue__L_16, mercury__psqueue__MaxKey_17);
        }
#line 365 "psqueue.m"
        mercury__psqueue__succeeded = MR_TRUE;
#line 364 "psqueue.m"
      }
#line 385 "psqueue.m"
    if (mercury__psqueue__succeeded)
#line 383 "psqueue.m"
      {
#line 383 "psqueue.m"
        MR_Word mercury__psqueue__AList0_8;
#line 383 "psqueue.m"
        MR_Word mercury__psqueue__V_9_9;

#line 383 "psqueue.m"
        {
#line 383 "psqueue.m"
          mercury__psqueue__to_assoc_list_2_p_0(mercury__psqueue__TypeInfo_for_P_10, mercury__psqueue__TypeInfo_for_K_11, mercury__psqueue__PSQ0_7, &mercury__psqueue__AList0_8);
        }
#line 384 "psqueue.m"
        {
#line 384 "psqueue.m"
          mercury__psqueue__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 384 "psqueue.m"
          MR_hl_field(MR_mktag(0), mercury__psqueue__V_9_9, 0) = mercury__psqueue__K_5;
#line 384 "psqueue.m"
          MR_hl_field(MR_mktag(0), mercury__psqueue__V_9_9, 1) = mercury__psqueue__P_6;
#line 384 "psqueue.m"
        }
#line 384 "psqueue.m"
        {
#line 384 "psqueue.m"
          MR_Word base;
#line 384 "psqueue.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 384 "psqueue.m"
          *mercury__psqueue__AList_4 = base;
#line 384 "psqueue.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__psqueue__V_9_9));
#line 384 "psqueue.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__psqueue__AList0_8));
#line 384 "psqueue.m"
        }
#line 383 "psqueue.m"
      }
#line 385 "psqueue.m"
    else
#line 386 "psqueue.m"
      *mercury__psqueue__AList_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 385 "psqueue.m"
  }
#line 95 "psqueue.m"
}

#line 94 "psqueue.m"
MR_Word MR_CALL 
mercury__psqueue__to_assoc_list_1_f_0(
#line 94 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_5,
#line 94 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_6,
#line 94 "psqueue.m"
  MR_Word mercury__psqueue__PSQ_3)
#line 94 "psqueue.m"
{
#line 379 "psqueue.m"
  {
#line 379 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 379 "psqueue.m"
    MR_Word mercury__psqueue__Res_4;

#line 379 "psqueue.m"
    {
#line 379 "psqueue.m"
      mercury__psqueue__to_assoc_list_2_p_0(mercury__psqueue__TypeInfo_for_P_5, mercury__psqueue__TypeInfo_for_K_6, mercury__psqueue__PSQ_3, &mercury__psqueue__Res_4);
    }
#line 379 "psqueue.m"
    return mercury__psqueue__Res_4;
#line 379 "psqueue.m"
  }
#line 94 "psqueue.m"
}

#line 89 "psqueue.m"
void MR_CALL 
mercury__psqueue__det_remove_least_4_p_0(
#line 89 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_15,
#line 89 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_16,
#line 89 "psqueue.m"
  MR_Box * mercury__psqueue__MinPrio_5,
#line 89 "psqueue.m"
  MR_Box * mercury__psqueue__MinKey_6,
#line 89 "psqueue.m"
  MR_Word mercury__psqueue__PSQ_7,
#line 89 "psqueue.m"
  MR_Word * mercury__psqueue__NewPSQ_8)
#line 89 "psqueue.m"
{
#line 372 "psqueue.m"
  {
#line 372 "psqueue.m"
    MR_bool mercury__psqueue__succeeded = ((MR_tag((MR_Word) mercury__psqueue__PSQ_7)) == (MR_mktag((MR_Integer) 1)));
#line 372 "psqueue.m"
    MR_Box mercury__psqueue__MinPrio0_9;
#line 372 "psqueue.m"
    MR_Box mercury__psqueue__MinKey0_10;
#line 372 "psqueue.m"
    MR_Word mercury__psqueue__NewPSQ0_11;
#line 363 "psqueue.m"
    MR_Word mercury__psqueue__L_21;
#line 363 "psqueue.m"
    MR_Box mercury__psqueue__MaxKey_22;

#line 364 "psqueue.m"
    if (mercury__psqueue__succeeded)
#line 364 "psqueue.m"
      {
#line 364 "psqueue.m"
        mercury__psqueue__MinKey0_10 = (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_7, (MR_Integer) 0));
#line 364 "psqueue.m"
        mercury__psqueue__MinPrio0_9 = (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_7, (MR_Integer) 1));
#line 364 "psqueue.m"
        mercury__psqueue__L_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_7, (MR_Integer) 2)));
#line 364 "psqueue.m"
        mercury__psqueue__MaxKey_22 = (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_7, (MR_Integer) 3));
#line 365 "psqueue.m"
        {
#line 365 "psqueue.m"
          mercury__psqueue__NewPSQ0_11 = mercury__psqueue__second_best_2_f_0(mercury__psqueue__TypeInfo_for_K_16, mercury__psqueue__TypeInfo_for_P_15, mercury__psqueue__L_21, mercury__psqueue__MaxKey_22);
        }
#line 365 "psqueue.m"
        mercury__psqueue__succeeded = MR_TRUE;
#line 364 "psqueue.m"
      }
#line 372 "psqueue.m"
    if (mercury__psqueue__succeeded)
#line 369 "psqueue.m"
      {
#line 369 "psqueue.m"
        *mercury__psqueue__NewPSQ_8 = mercury__psqueue__NewPSQ0_11;
#line 370 "psqueue.m"
        *mercury__psqueue__MinKey_6 = mercury__psqueue__MinKey0_10;
#line 371 "psqueue.m"
        *mercury__psqueue__MinPrio_5 = mercury__psqueue__MinPrio0_9;
#line 369 "psqueue.m"
      }
#line 372 "psqueue.m"
    else
#line 373 "psqueue.m"
      {
#line 373 "psqueue.m"
        {
#line 373 "psqueue.m"
          mercury__require__unexpected_3_p_0((MR_String) "psqueue.m", (MR_String) "predicate \140psqueue.det_remove_least\'/4", (MR_String) "priority search queue is empty");
#line 373 "psqueue.m"
          return;
        }
#line 373 "psqueue.m"
      }
#line 372 "psqueue.m"
  }
#line 89 "psqueue.m"
}

#line 83 "psqueue.m"
MR_bool MR_CALL 
mercury__psqueue__remove_least_4_p_0(
#line 83 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_11,
#line 83 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_12,
#line 83 "psqueue.m"
  MR_Box * mercury__psqueue__MinPrio_5,
#line 83 "psqueue.m"
  MR_Box * mercury__psqueue__MinKey_6,
#line 83 "psqueue.m"
  MR_Word mercury__psqueue__PSQ_7,
#line 83 "psqueue.m"
  MR_Word * mercury__psqueue__NewPSQ_8)
#line 83 "psqueue.m"
{
#line 363 "psqueue.m"
  {
#line 363 "psqueue.m"
    MR_bool mercury__psqueue__succeeded = ((MR_tag((MR_Word) mercury__psqueue__PSQ_7)) == (MR_mktag((MR_Integer) 1)));
#line 363 "psqueue.m"
    MR_Word mercury__psqueue__L_9;
#line 363 "psqueue.m"
    MR_Box mercury__psqueue__MaxKey_10;

#line 364 "psqueue.m"
    if (mercury__psqueue__succeeded)
#line 364 "psqueue.m"
      {
#line 364 "psqueue.m"
        *mercury__psqueue__MinKey_6 = (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_7, (MR_Integer) 0));
#line 364 "psqueue.m"
        *mercury__psqueue__MinPrio_5 = (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_7, (MR_Integer) 1));
#line 364 "psqueue.m"
        mercury__psqueue__L_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_7, (MR_Integer) 2)));
#line 364 "psqueue.m"
        mercury__psqueue__MaxKey_10 = (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_7, (MR_Integer) 3));
#line 365 "psqueue.m"
        {
#line 365 "psqueue.m"
          *mercury__psqueue__NewPSQ_8 = mercury__psqueue__second_best_2_f_0(mercury__psqueue__TypeInfo_for_K_12, mercury__psqueue__TypeInfo_for_P_11, mercury__psqueue__L_9, mercury__psqueue__MaxKey_10);
        }
#line 365 "psqueue.m"
        mercury__psqueue__succeeded = MR_TRUE;
#line 364 "psqueue.m"
      }
#line 363 "psqueue.m"
    return mercury__psqueue__succeeded;
#line 363 "psqueue.m"
  }
#line 83 "psqueue.m"
}

#line 79 "psqueue.m"
void MR_CALL 
mercury__psqueue__det_peek_3_p_0(
#line 79 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_12,
#line 79 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_13,
#line 79 "psqueue.m"
  MR_Word mercury__psqueue__PSQ_4,
#line 79 "psqueue.m"
  MR_Box * mercury__psqueue__MinPrio_5,
#line 79 "psqueue.m"
  MR_Box * mercury__psqueue__MinKey_6)
#line 79 "psqueue.m"
{
#line 359 "psqueue.m"
  {
#line 359 "psqueue.m"
    MR_bool mercury__psqueue__succeeded = ((MR_tag((MR_Word) mercury__psqueue__PSQ_4)) == (MR_mktag((MR_Integer) 1)));
#line 359 "psqueue.m"
    MR_Box mercury__psqueue__MinPrio0_7;
#line 359 "psqueue.m"
    MR_Box mercury__psqueue__MinKey0_8;
#line 353 "psqueue.m"
    MR_Word mercury__psqueue__V_17_17;
#line 353 "psqueue.m"
    MR_Box mercury__psqueue__V_18_18;

#line 353 "psqueue.m"
    if (mercury__psqueue__succeeded)
#line 353 "psqueue.m"
      {
#line 353 "psqueue.m"
        mercury__psqueue__MinKey0_8 = (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_4, (MR_Integer) 0));
#line 353 "psqueue.m"
        mercury__psqueue__MinPrio0_7 = (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_4, (MR_Integer) 1));
#line 353 "psqueue.m"
        mercury__psqueue__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_4, (MR_Integer) 2)));
#line 353 "psqueue.m"
        mercury__psqueue__V_18_18 = (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_4, (MR_Integer) 3));
#line 357 "psqueue.m"
        *mercury__psqueue__MinKey_6 = mercury__psqueue__MinKey0_8;
#line 358 "psqueue.m"
        *mercury__psqueue__MinPrio_5 = mercury__psqueue__MinPrio0_7;
#line 353 "psqueue.m"
      }
#line 353 "psqueue.m"
    else
#line 360 "psqueue.m"
      {
#line 360 "psqueue.m"
        {
#line 360 "psqueue.m"
          mercury__require__unexpected_3_p_0((MR_String) "psqueue.m", (MR_String) "predicate \140psqueue.det_peek\'/3", (MR_String) "priority search queue is empty");
#line 360 "psqueue.m"
          return;
        }
#line 360 "psqueue.m"
      }
#line 359 "psqueue.m"
  }
#line 79 "psqueue.m"
}

#line 75 "psqueue.m"
MR_bool MR_CALL 
mercury__psqueue__peek_3_p_0(
#line 75 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_9,
#line 75 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_10,
#line 75 "psqueue.m"
  MR_Word mercury__psqueue__PSQ_4,
#line 75 "psqueue.m"
  MR_Box * mercury__psqueue__MinPrio_5,
#line 75 "psqueue.m"
  MR_Box * mercury__psqueue__MinKey_6)
#line 75 "psqueue.m"
{
#line 353 "psqueue.m"
  {
#line 353 "psqueue.m"
    MR_bool mercury__psqueue__succeeded = ((MR_tag((MR_Word) mercury__psqueue__PSQ_4)) == (MR_mktag((MR_Integer) 1)));
#line 353 "psqueue.m"
    MR_Word mercury__psqueue__V_7_7;
#line 353 "psqueue.m"
    MR_Box mercury__psqueue__V_8_8;

#line 353 "psqueue.m"
    if (mercury__psqueue__succeeded)
#line 353 "psqueue.m"
      {
#line 353 "psqueue.m"
        *mercury__psqueue__MinKey_6 = (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_4, (MR_Integer) 0));
#line 353 "psqueue.m"
        *mercury__psqueue__MinPrio_5 = (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_4, (MR_Integer) 1));
#line 353 "psqueue.m"
        mercury__psqueue__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_4, (MR_Integer) 2)));
#line 353 "psqueue.m"
        mercury__psqueue__V_8_8 = (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_4, (MR_Integer) 3));
#line 353 "psqueue.m"
      }
#line 353 "psqueue.m"
    return mercury__psqueue__succeeded;
#line 353 "psqueue.m"
  }
#line 75 "psqueue.m"
}

#line 71 "psqueue.m"
void MR_CALL 
mercury__psqueue__det_insert_4_p_0(
#line 71 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_15,
#line 71 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_16,
#line 71 "psqueue.m"
  MR_Box mercury__psqueue__P_5,
#line 71 "psqueue.m"
  MR_Box mercury__psqueue__K_6,
#line 71 "psqueue.m"
  MR_Word mercury__psqueue__STATE_VARIABLE_PSQ_0_8,
#line 71 "psqueue.m"
  MR_Word * mercury__psqueue__STATE_VARIABLE_PSQ_9)
#line 71 "psqueue.m"
{
#line 310 "psqueue.m"
  {
#line 310 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 310 "psqueue.m"
    MR_Word mercury__psqueue__STATE_VARIABLE_PSQ_10_10;
#line 304 "psqueue.m"
    MR_Word mercury__psqueue__V_22_22;

#line 305 "psqueue.m"
    {
#line 305 "psqueue.m"
      mercury__psqueue__V_22_22 = mercury__psqueue__tournament_view_1_f_0(mercury__psqueue__TypeInfo_for_P_15, mercury__psqueue__TypeInfo_for_K_16, mercury__psqueue__STATE_VARIABLE_PSQ_0_8);
    }
#line 305 "psqueue.m"
    {
#line 305 "psqueue.m"
      mercury__psqueue__succeeded = mercury__psqueue__insert_tv_4_p_0(mercury__psqueue__TypeInfo_for_K_16, mercury__psqueue__TypeInfo_for_P_15, mercury__psqueue__K_6, mercury__psqueue__P_5, mercury__psqueue__V_22_22, &mercury__psqueue__STATE_VARIABLE_PSQ_10_10);
    }
#line 310 "psqueue.m"
    if (mercury__psqueue__succeeded)
#line 308 "psqueue.m"
      *mercury__psqueue__STATE_VARIABLE_PSQ_9 = mercury__psqueue__STATE_VARIABLE_PSQ_10_10;
#line 310 "psqueue.m"
    else
#line 311 "psqueue.m"
      {
#line 311 "psqueue.m"
        {
#line 311 "psqueue.m"
          mercury__require__unexpected_3_p_0((MR_String) "psqueue.m", (MR_String) "predicate \140psqueue.det_insert\'/4", (MR_String) "error on inserting element into priority search queue");
#line 311 "psqueue.m"
          return;
        }
#line 311 "psqueue.m"
      }
#line 310 "psqueue.m"
  }
#line 71 "psqueue.m"
}

#line 70 "psqueue.m"
MR_Word MR_CALL 
mercury__psqueue__det_insert_3_f_0(
#line 70 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_9,
#line 70 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_10,
#line 70 "psqueue.m"
  MR_Word mercury__psqueue__PSQ0_5,
#line 70 "psqueue.m"
  MR_Box mercury__psqueue__P_6,
#line 70 "psqueue.m"
  MR_Box mercury__psqueue__K_7)
#line 70 "psqueue.m"
{
#line 316 "psqueue.m"
  {
#line 316 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 316 "psqueue.m"
    MR_Word mercury__psqueue__PSQ_8;

#line 316 "psqueue.m"
    {
#line 316 "psqueue.m"
      mercury__psqueue__det_insert_4_p_0(mercury__psqueue__TypeInfo_for_P_9, mercury__psqueue__TypeInfo_for_K_10, mercury__psqueue__P_6, mercury__psqueue__K_7, mercury__psqueue__PSQ0_5, &mercury__psqueue__PSQ_8);
    }
#line 316 "psqueue.m"
    return mercury__psqueue__PSQ_8;
#line 316 "psqueue.m"
  }
#line 70 "psqueue.m"
}

#line 65 "psqueue.m"
MR_bool MR_CALL 
mercury__psqueue__insert_4_p_0(
#line 65 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_12,
#line 65 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_13,
#line 65 "psqueue.m"
  MR_Box mercury__psqueue__P_5,
#line 65 "psqueue.m"
  MR_Box mercury__psqueue__K_6,
#line 65 "psqueue.m"
  MR_Word mercury__psqueue__STATE_VARIABLE_PSQ_0_8,
#line 65 "psqueue.m"
  MR_Word * mercury__psqueue__STATE_VARIABLE_PSQ_9)
#line 65 "psqueue.m"
{
#line 304 "psqueue.m"
  {
#line 304 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 304 "psqueue.m"
    MR_Word mercury__psqueue__V_10_10;

#line 305 "psqueue.m"
    {
#line 305 "psqueue.m"
      mercury__psqueue__V_10_10 = mercury__psqueue__tournament_view_1_f_0(mercury__psqueue__TypeInfo_for_P_12, mercury__psqueue__TypeInfo_for_K_13, mercury__psqueue__STATE_VARIABLE_PSQ_0_8);
    }
#line 305 "psqueue.m"
    {
#line 305 "psqueue.m"
      return mercury__psqueue__succeeded = mercury__psqueue__insert_tv_4_p_0(mercury__psqueue__TypeInfo_for_K_13, mercury__psqueue__TypeInfo_for_P_12, mercury__psqueue__K_6, mercury__psqueue__P_5, mercury__psqueue__V_10_10, mercury__psqueue__STATE_VARIABLE_PSQ_9);
    }
#line 304 "psqueue.m"
    return mercury__psqueue__succeeded;
#line 304 "psqueue.m"
  }
#line 65 "psqueue.m"
}

#line 60 "psqueue.m"
MR_Word MR_CALL 
mercury__psqueue__singleton_2_f_0(
#line 60 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_7,
#line 60 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_8,
#line 60 "psqueue.m"
  MR_Box mercury__psqueue__P_4,
#line 60 "psqueue.m"
  MR_Box mercury__psqueue__K_5)
#line 60 "psqueue.m"
{
#line 299 "psqueue.m"
  {
#line 299 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 299 "psqueue.m"
    MR_Word mercury__psqueue__Res_6;
#line 299 "psqueue.m"
    MR_Word mercury__psqueue__V_12_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 300 "psqueue.m"
    {
#line 300 "psqueue.m"
      mercury__psqueue__Res_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 300 "psqueue.m"
      MR_hl_field(MR_mktag(1), mercury__psqueue__Res_6, 0) = mercury__psqueue__K_5;
#line 300 "psqueue.m"
      MR_hl_field(MR_mktag(1), mercury__psqueue__Res_6, 1) = mercury__psqueue__P_4;
#line 300 "psqueue.m"
      MR_hl_field(MR_mktag(1), mercury__psqueue__Res_6, 2) = ((MR_Box) (mercury__psqueue__V_12_12));
#line 300 "psqueue.m"
      MR_hl_field(MR_mktag(1), mercury__psqueue__Res_6, 3) = mercury__psqueue__K_5;
#line 300 "psqueue.m"
    }
#line 299 "psqueue.m"
    return mercury__psqueue__Res_6;
#line 299 "psqueue.m"
  }
#line 60 "psqueue.m"
}

#line 59 "psqueue.m"
void MR_CALL 
mercury__psqueue__singleton_3_p_0(
#line 59 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_9,
#line 59 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_10,
#line 59 "psqueue.m"
  MR_Box mercury__psqueue__P_4,
#line 59 "psqueue.m"
  MR_Box mercury__psqueue__K_5,
#line 59 "psqueue.m"
  MR_Word * mercury__psqueue__PSQ_6)
#line 59 "psqueue.m"
{
#line 299 "psqueue.m"
  {
#line 299 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 299 "psqueue.m"
    MR_Word mercury__psqueue__V_7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 300 "psqueue.m"
    {
#line 300 "psqueue.m"
      MR_Word base;
#line 300 "psqueue.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 300 "psqueue.m"
      *mercury__psqueue__PSQ_6 = base;
#line 300 "psqueue.m"
      MR_hl_field(MR_mktag(1), base, 0) = mercury__psqueue__K_5;
#line 300 "psqueue.m"
      MR_hl_field(MR_mktag(1), base, 1) = mercury__psqueue__P_4;
#line 300 "psqueue.m"
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__psqueue__V_7_7));
#line 300 "psqueue.m"
      MR_hl_field(MR_mktag(1), base, 3) = mercury__psqueue__K_5;
#line 300 "psqueue.m"
    }
#line 299 "psqueue.m"
  }
#line 59 "psqueue.m"
}

#line 55 "psqueue.m"
MR_bool MR_CALL 
mercury__psqueue__is_empty_1_p_0(
#line 55 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_2,
#line 55 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_3,
#line 55 "psqueue.m"
  MR_Word mercury__psqueue__HeadVar__1_1)
#line 55 "psqueue.m"
{
#line 294 "psqueue.m"
  {
#line 294 "psqueue.m"
    MR_bool mercury__psqueue__succeeded = (mercury__psqueue__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 294 "psqueue.m"
    return mercury__psqueue__succeeded;
#line 294 "psqueue.m"
  }
#line 55 "psqueue.m"
}

#line 51 "psqueue.m"
void MR_CALL 
mercury__psqueue__init_1_p_0(
#line 51 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_2,
#line 51 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_3,
#line 51 "psqueue.m"
  MR_Word * mercury__psqueue__HeadVar__1_1)
#line 51 "psqueue.m"
{
#line 290 "psqueue.m"
  {
#line 290 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;

#line 290 "psqueue.m"
    *mercury__psqueue__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 290 "psqueue.m"
  }
#line 51 "psqueue.m"
}

#line 50 "psqueue.m"
MR_Word MR_CALL 
mercury__psqueue__init_0_f_0(
#line 50 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_P_3,
#line 50 "psqueue.m"
  MR_Word mercury__psqueue__TypeInfo_for_K_4)
#line 50 "psqueue.m"
{
#line 290 "psqueue.m"
  {
#line 290 "psqueue.m"
    MR_bool mercury__psqueue__succeeded;
#line 290 "psqueue.m"
    MR_Word mercury__psqueue__PSQ_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 290 "psqueue.m"
    return mercury__psqueue__PSQ_2;
#line 290 "psqueue.m"
  }
#line 50 "psqueue.m"
}

void mercury__psqueue__init(void)
{
}

void mercury__psqueue__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__psqueue__psqueue__type_ctor_info_ltree_2);
	MR_register_type_ctor_info(&mercury__psqueue__psqueue__type_ctor_info_psqueue_2);
	MR_register_type_ctor_info(&mercury__psqueue__psqueue__type_ctor_info_t_ltree_size_0);
	MR_register_type_ctor_info(&mercury__psqueue__psqueue__type_ctor_info_t_min_view_2);
	MR_register_type_ctor_info(&mercury__psqueue__psqueue__type_ctor_info_t_tournament_view_2);
	MR_register_type_ctor_info(&mercury__psqueue__psqueue__type_ctor_info_t_tree_view_2);
}

void mercury__psqueue__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module psqueue. */
