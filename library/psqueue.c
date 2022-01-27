/*
** Automatically generated from `psqueue.m'
** by the Mercury compiler,
** version rotd-2016-05-05
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




static const MR_DuFunctorDesc mercury__psqueue__psqueue__du_functor_desc_loser_tree_2_0;

static const MR_FA_PseudoTypeInfo_Struct2 mercury__psqueue__psqueue__pti_loser_tree_2__pseudo_1__pseudo_2;

static const MR_PseudoTypeInfo mercury__psqueue__psqueue__field_types_loser_tree_2_1[6];

static const MR_ConstString mercury__psqueue__psqueue__field_names_loser_tree_2_1[6];

static const MR_DuFunctorDesc mercury__psqueue__psqueue__du_functor_desc_loser_tree_2_1;

static const MR_DuFunctorDescPtr mercury__psqueue__psqueue__du_stag_ordered_loser_tree_2_0[1];

static const MR_DuFunctorDescPtr mercury__psqueue__psqueue__du_stag_ordered_loser_tree_2_1[1];

static const MR_DuPtagLayout mercury__psqueue__psqueue__du_ptag_ordered_loser_tree_2[2];

static const MR_DuFunctorDescPtr mercury__psqueue__psqueue__du_name_ordered_loser_tree_2[2];

static const MR_Integer mercury__psqueue__psqueue__functor_number_map_loser_tree_2[2];

static const MR_DuFunctorDesc mercury__psqueue__psqueue__du_functor_desc_psqueue_2_0;

static const MR_FA_PseudoTypeInfo_Struct2 mercury__psqueue__psqueue__pti_winner_2__pseudo_1__pseudo_2;

static const MR_PseudoTypeInfo mercury__psqueue__psqueue__field_types_psqueue_2_1[1];

static const MR_DuFunctorDesc mercury__psqueue__psqueue__du_functor_desc_psqueue_2_1;

static const MR_DuFunctorDescPtr mercury__psqueue__psqueue__du_stag_ordered_psqueue_2_0[1];

static const MR_DuFunctorDescPtr mercury__psqueue__psqueue__du_stag_ordered_psqueue_2_1[1];

static const MR_DuPtagLayout mercury__psqueue__psqueue__du_ptag_ordered_psqueue_2[2];

static const MR_DuFunctorDescPtr mercury__psqueue__psqueue__du_name_ordered_psqueue_2[2];

static const MR_Integer mercury__psqueue__psqueue__functor_number_map_psqueue_2[2];

static const MR_PseudoTypeInfo mercury__psqueue__psqueue__field_types_tournament_view_2_0[2];

static const MR_DuFunctorDesc mercury__psqueue__psqueue__du_functor_desc_tournament_view_2_0;

static const MR_PseudoTypeInfo mercury__psqueue__psqueue__field_types_tournament_view_2_1[2];

static const MR_DuFunctorDesc mercury__psqueue__psqueue__du_functor_desc_tournament_view_2_1;

static const MR_DuFunctorDescPtr mercury__psqueue__psqueue__du_stag_ordered_tournament_view_2_0[1];

static const MR_DuFunctorDescPtr mercury__psqueue__psqueue__du_stag_ordered_tournament_view_2_1[1];

static const MR_DuPtagLayout mercury__psqueue__psqueue__du_ptag_ordered_tournament_view_2[2];

static const MR_DuFunctorDescPtr mercury__psqueue__psqueue__du_name_ordered_tournament_view_2[2];

static const MR_Integer mercury__psqueue__psqueue__functor_number_map_tournament_view_2[2];

static const MR_PseudoTypeInfo mercury__psqueue__psqueue__field_types_winner_2_0[4];

static const MR_ConstString mercury__psqueue__psqueue__field_names_winner_2_0[4];

static const MR_DuFunctorDesc mercury__psqueue__psqueue__du_functor_desc_winner_2_0;

static const MR_DuFunctorDescPtr mercury__psqueue__psqueue__du_stag_ordered_winner_2_0[1];

static const MR_DuPtagLayout mercury__psqueue__psqueue__du_ptag_ordered_winner_2[1];

static const MR_DuFunctorDescPtr mercury__psqueue__psqueue__du_name_ordered_winner_2[1];

static const MR_Integer mercury__psqueue__psqueue__functor_number_map_winner_2[1];

static MR_bool MR_CALL 
mercury__psqueue____Unify____loser_tree_2_0_10001(
  MR_Box mercury__psqueue__wrapper_arg_1,
  MR_Box mercury__psqueue__wrapper_arg_2,
  MR_Box mercury__psqueue__wrapper_arg_3,
  MR_Box mercury__psqueue__wrapper_arg_4);

static void MR_CALL 
mercury__psqueue____Compare____loser_tree_2_0_10001(
  MR_Box mercury__psqueue__wrapper_arg_1,
  MR_Box mercury__psqueue__wrapper_arg_2,
  MR_Box * mercury__psqueue__wrapper_arg_3,
  MR_Box mercury__psqueue__wrapper_arg_4,
  MR_Box mercury__psqueue__wrapper_arg_5);

static MR_bool MR_CALL 
mercury__psqueue____Unify____loser_tree_size_0_0_10001(
  MR_Box mercury__psqueue__wrapper_arg_1,
  MR_Box mercury__psqueue__wrapper_arg_2);

static void MR_CALL 
mercury__psqueue____Compare____loser_tree_size_0_0_10001(
  MR_Box * mercury__psqueue__wrapper_arg_1,
  MR_Box mercury__psqueue__wrapper_arg_2,
  MR_Box mercury__psqueue__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__psqueue____Unify____psqueue_2_0_10001(
  MR_Box mercury__psqueue__wrapper_arg_1,
  MR_Box mercury__psqueue__wrapper_arg_2,
  MR_Box mercury__psqueue__wrapper_arg_3,
  MR_Box mercury__psqueue__wrapper_arg_4);

static void MR_CALL 
mercury__psqueue____Compare____psqueue_2_0_10001(
  MR_Box mercury__psqueue__wrapper_arg_1,
  MR_Box mercury__psqueue__wrapper_arg_2,
  MR_Box * mercury__psqueue__wrapper_arg_3,
  MR_Box mercury__psqueue__wrapper_arg_4,
  MR_Box mercury__psqueue__wrapper_arg_5);

static MR_bool MR_CALL 
mercury__psqueue____Unify____tournament_view_2_0_10001(
  MR_Box mercury__psqueue__wrapper_arg_1,
  MR_Box mercury__psqueue__wrapper_arg_2,
  MR_Box mercury__psqueue__wrapper_arg_3,
  MR_Box mercury__psqueue__wrapper_arg_4);

static void MR_CALL 
mercury__psqueue____Compare____tournament_view_2_0_10001(
  MR_Box mercury__psqueue__wrapper_arg_1,
  MR_Box mercury__psqueue__wrapper_arg_2,
  MR_Box * mercury__psqueue__wrapper_arg_3,
  MR_Box mercury__psqueue__wrapper_arg_4,
  MR_Box mercury__psqueue__wrapper_arg_5);

static MR_bool MR_CALL 
mercury__psqueue____Unify____winner_2_0_10001(
  MR_Box mercury__psqueue__wrapper_arg_1,
  MR_Box mercury__psqueue__wrapper_arg_2,
  MR_Box mercury__psqueue__wrapper_arg_3,
  MR_Box mercury__psqueue__wrapper_arg_4);

static void MR_CALL 
mercury__psqueue____Compare____winner_2_0_10001(
  MR_Box mercury__psqueue__wrapper_arg_1,
  MR_Box mercury__psqueue__wrapper_arg_2,
  MR_Box * mercury__psqueue__wrapper_arg_3,
  MR_Box mercury__psqueue__wrapper_arg_4,
  MR_Box mercury__psqueue__wrapper_arg_5);

static MR_Integer MR_CALL 
mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static MR_Word MR_CALL 
mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_107_101_121_115_95_95_91_49_93_95_48_1_f_0(
  MR_Word mercury__psqueue__TypeInfo_for_K_15,
  MR_Word mercury__psqueue__LTree_3);

static void MR_CALL 
mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_120_95_107_101_121_95_105_110_95_108_111_115_101_114_95_116_114_101_101_95_97_99_99_95_95_91_49_93_95_48_3_p_0(
  MR_Word mercury__psqueue__TypeInfo_for_K_21,
  MR_Word mercury__psqueue__LTree_4,
  MR_Box mercury__psqueue__STATE_VARIABLE_CurMax_0_17,
  MR_Word * mercury__psqueue__MaybeMaxKey_6);

static void MR_CALL 
mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_105_110_95_107_101_121_95_105_110_95_108_111_115_101_114_95_116_114_101_101_95_97_99_99_95_95_91_49_93_95_48_3_p_0(
  MR_Word mercury__psqueue__TypeInfo_for_K_21,
  MR_Word mercury__psqueue__LTree_4,
  MR_Box mercury__psqueue__STATE_VARIABLE_CurMin_0_17,
  MR_Word * mercury__psqueue__MaybeMinKey_6);

static void MR_CALL 
mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_105_110_95_107_101_121_95_105_110_95_108_111_115_101_114_95_116_114_101_101_95_95_91_49_93_95_48_2_p_0(
  MR_Word mercury__psqueue__TypeInfo_for_K_16,
  MR_Word mercury__psqueue__LTree_3,
  MR_Word * mercury__psqueue__MaybeMinKey_4);

static void MR_CALL 
mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_105_110_95_112_114_105_111_95_105_110_95_108_111_115_101_114_95_116_114_101_101_95_97_99_99_95_95_91_50_93_95_48_3_p_0(
  MR_Word mercury__psqueue__TypeInfo_for_P_20,
  MR_Word mercury__psqueue__LTree_4,
  MR_Box mercury__psqueue__STATE_VARIABLE_CurMinPrio_0_17,
  MR_Word * mercury__psqueue__MaybeMinPrio_6);

static MR_bool MR_CALL 
mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_112_114_105_111_115_95_105_110_95_108_111_115_101_114_95_116_114_101_101_95_97_116_95_111_114_95_97_98_111_118_101_95_112_114_105_111_95_95_91_50_93_95_48_2_p_0(
  MR_Word mercury__psqueue__TypeInfo_for_P_11,
  MR_Box mercury__psqueue__WinnerPrio_3,
  MR_Word mercury__psqueue__LTree_4);

static MR_Word MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_98_97_108_97_110_99_101_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_5_f_0(
  MR_Word mercury__psqueue__TypeInfo_for_K_24,
  MR_Integer mercury__psqueue__Prio_7,
  MR_Box mercury__psqueue__Key_8,
  MR_Word mercury__psqueue__LTreeL_9,
  MR_Box mercury__psqueue__SplitKey_10,
  MR_Word mercury__psqueue__LTreeR_11);

static MR_Word MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_98_97_108_97_110_99_101_95_108_101_102_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_5_f_0(
  MR_Word mercury__psqueue__TypeInfo_for_K_26,
  MR_Integer mercury__psqueue__Prio_7,
  MR_Box mercury__psqueue__Key_8,
  MR_Word mercury__psqueue__LTreeL_9,
  MR_Box mercury__psqueue__SplitKey_10,
  MR_Word mercury__psqueue__LTreeR_11);

static MR_Word MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_98_97_108_97_110_99_101_95_114_105_103_104_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_5_f_0(
  MR_Word mercury__psqueue__TypeInfo_for_K_26,
  MR_Integer mercury__psqueue__Prio_7,
  MR_Box mercury__psqueue__Key_8,
  MR_Word mercury__psqueue__LTreeL_9,
  MR_Box mercury__psqueue__SplitKey_10,
  MR_Word mercury__psqueue__LTreeR_11);

static MR_Word MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_105_110_103_108_101_95_108_101_102_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_5_f_0(
  MR_Word mercury__psqueue__TypeInfo_for_K_25,
  MR_Integer mercury__psqueue__InsertPrio_7,
  MR_Box mercury__psqueue__InsertKey_8,
  MR_Word mercury__psqueue__LTreeA_9,
  MR_Box mercury__psqueue__SplitKeyAB_10,
  MR_Word mercury__psqueue__LTreeBC_11);

static MR_Word MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_105_110_103_108_101_95_114_105_103_104_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_5_f_0(
  MR_Word mercury__psqueue__TypeInfo_for_K_26,
  MR_Integer mercury__psqueue__InsertPrio_7,
  MR_Box mercury__psqueue__InsertKey_8,
  MR_Word mercury__psqueue__LTreeAB_9,
  MR_Box mercury__psqueue__SplitKeyBC_10,
  MR_Word mercury__psqueue__LTreeC_11);

static MR_String MR_CALL 
mercury__psqueue__dump_loser_tree_2_f_0(
  MR_Word mercury__psqueue__TypeInfo_for_P_46,
  MR_Word mercury__psqueue__TypeInfo_for_K_47,
  MR_Integer mercury__psqueue__Indent_4,
  MR_Word mercury__psqueue__LTree_5);

static MR_bool MR_CALL 
mercury__psqueue__loser_split_keys_are_present_2_p_0(
  MR_Word mercury__psqueue__TypeInfo_for_P_12,
  MR_Word mercury__psqueue__TypeInfo_for_K_13,
  MR_Word mercury__psqueue__PSQ_3,
  MR_Word mercury__psqueue__LTree_4);

static MR_bool MR_CALL 
mercury__psqueue__all_nodes_obey_semi_heap_1_p_0(
  MR_Word mercury__psqueue__TypeInfo_for_P_12,
  MR_Word mercury__psqueue__TypeInfo_for_K_13,
  MR_Word mercury__psqueue__LTree_2);

static MR_Word MR_CALL 
mercury__psqueue__single_right_5_f_0(
  MR_Word mercury__psqueue__TypeInfo_for_P_25,
  MR_Word mercury__psqueue__TypeInfo_for_K_26,
  MR_Box mercury__psqueue__InsertPrio_7,
  MR_Box mercury__psqueue__InsertKey_8,
  MR_Word mercury__psqueue__LTreeAB_9,
  MR_Box mercury__psqueue__SplitKeyBC_10,
  MR_Word mercury__psqueue__LTreeC_11);

static MR_Word MR_CALL 
mercury__psqueue__single_left_5_f_0(
  MR_Word mercury__psqueue__TypeInfo_for_P_24,
  MR_Word mercury__psqueue__TypeInfo_for_K_25,
  MR_Box mercury__psqueue__InsertPrio_7,
  MR_Box mercury__psqueue__InsertKey_8,
  MR_Word mercury__psqueue__LTreeA_9,
  MR_Box mercury__psqueue__SplitKeyAB_10,
  MR_Word mercury__psqueue__LTreeBC_11);

static MR_Word MR_CALL 
mercury__psqueue__balance_right_5_f_0(
  MR_Word mercury__psqueue__TypeInfo_for_P_25,
  MR_Word mercury__psqueue__TypeInfo_for_K_26,
  MR_Box mercury__psqueue__Prio_7,
  MR_Box mercury__psqueue__Key_8,
  MR_Word mercury__psqueue__LTreeL_9,
  MR_Box mercury__psqueue__SplitKey_10,
  MR_Word mercury__psqueue__LTreeR_11);

static MR_Word MR_CALL 
mercury__psqueue__balance_left_5_f_0(
  MR_Word mercury__psqueue__TypeInfo_for_P_25,
  MR_Word mercury__psqueue__TypeInfo_for_K_26,
  MR_Box mercury__psqueue__Prio_7,
  MR_Box mercury__psqueue__Key_8,
  MR_Word mercury__psqueue__LTreeL_9,
  MR_Box mercury__psqueue__SplitKey_10,
  MR_Word mercury__psqueue__LTreeR_11);

static MR_Word MR_CALL 
mercury__psqueue__balance_5_f_0(
  MR_Word mercury__psqueue__TypeInfo_for_P_23,
  MR_Word mercury__psqueue__TypeInfo_for_K_24,
  MR_Box mercury__psqueue__Prio_7,
  MR_Box mercury__psqueue__Key_8,
  MR_Word mercury__psqueue__LTreeL_9,
  MR_Box mercury__psqueue__SplitKey_10,
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
#include "time.mh"
#include "type_desc.mh"
#include "version_array.mh"



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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_PseudoTypeInfo_Struct2 mercury__psqueue__psqueue__pti_loser_tree_2__pseudo_1__pseudo_2 = {
  &mercury__psqueue__psqueue__type_ctor_info_loser_tree_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

static const MR_PseudoTypeInfo mercury__psqueue__psqueue__field_types_loser_tree_2_1[6] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 2,
  (MR_PseudoTypeInfo) &mercury__psqueue__psqueue__pti_loser_tree_2__pseudo_1__pseudo_2,
  (MR_PseudoTypeInfo) (MR_Integer) 2,
  (MR_PseudoTypeInfo) &mercury__psqueue__psqueue__pti_loser_tree_2__pseudo_1__pseudo_2
};

static const MR_ConstString mercury__psqueue__psqueue__field_names_loser_tree_2_1[6] = {
  (MR_String) "l_size",
  (MR_String) "l_prio",
  (MR_String) "l_key",
  (MR_String) "l_left_tree",
  (MR_String) "l_sort_key",
  (MR_String) "l_right_tree"
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__psqueue__psqueue__du_stag_ordered_loser_tree_2_0[1] = {
  &mercury__psqueue__psqueue__du_functor_desc_loser_tree_2_0
};

static const MR_DuFunctorDescPtr mercury__psqueue__psqueue__du_stag_ordered_loser_tree_2_1[1] = {
  &mercury__psqueue__psqueue__du_functor_desc_loser_tree_2_1
};

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

static const MR_DuFunctorDescPtr mercury__psqueue__psqueue__du_name_ordered_loser_tree_2[2] = {
  &mercury__psqueue__psqueue__du_functor_desc_loser_tree_2_0,
  &mercury__psqueue__psqueue__du_functor_desc_loser_tree_2_1
};

static const MR_Integer mercury__psqueue__psqueue__functor_number_map_loser_tree_2[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__psqueue__psqueue__type_ctor_info_loser_tree_2 = {
  (MR_Integer) 2,
  (MR_Integer) 16,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__psqueue____Unify____loser_tree_2_0_10001)),
  ((MR_Box) (mercury__psqueue____Compare____loser_tree_2_0_10001)),
  (MR_String) "psqueue",
  (MR_String) "loser_tree",
  {     mercury__psqueue__psqueue__du_name_ordered_loser_tree_2 },
  {     mercury__psqueue__psqueue__du_ptag_ordered_loser_tree_2 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__psqueue__psqueue__functor_number_map_loser_tree_2
};

const MR_TypeCtorInfo_Struct mercury__psqueue__psqueue__type_ctor_info_loser_tree_size_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__psqueue____Unify____loser_tree_size_0_0_10001)),
  ((MR_Box) (mercury__psqueue____Compare____loser_tree_size_0_0_10001)),
  (MR_String) "psqueue",
  (MR_String) "loser_tree_size",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_PseudoTypeInfo_Struct2 mercury__psqueue__psqueue__pti_winner_2__pseudo_1__pseudo_2 = {
  &mercury__psqueue__psqueue__type_ctor_info_winner_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

static const MR_PseudoTypeInfo mercury__psqueue__psqueue__field_types_psqueue_2_1[1] = {
  (MR_PseudoTypeInfo) &mercury__psqueue__psqueue__pti_winner_2__pseudo_1__pseudo_2
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__psqueue__psqueue__du_stag_ordered_psqueue_2_0[1] = {
  &mercury__psqueue__psqueue__du_functor_desc_psqueue_2_0
};

static const MR_DuFunctorDescPtr mercury__psqueue__psqueue__du_stag_ordered_psqueue_2_1[1] = {
  &mercury__psqueue__psqueue__du_functor_desc_psqueue_2_1
};

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

static const MR_DuFunctorDescPtr mercury__psqueue__psqueue__du_name_ordered_psqueue_2[2] = {
  &mercury__psqueue__psqueue__du_functor_desc_psqueue_2_0,
  &mercury__psqueue__psqueue__du_functor_desc_psqueue_2_1
};

static const MR_Integer mercury__psqueue__psqueue__functor_number_map_psqueue_2[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__psqueue__psqueue__type_ctor_info_psqueue_2 = {
  (MR_Integer) 2,
  (MR_Integer) 16,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__psqueue____Unify____psqueue_2_0_10001)),
  ((MR_Box) (mercury__psqueue____Compare____psqueue_2_0_10001)),
  (MR_String) "psqueue",
  (MR_String) "psqueue",
  {     mercury__psqueue__psqueue__du_name_ordered_psqueue_2 },
  {     mercury__psqueue__psqueue__du_ptag_ordered_psqueue_2 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__psqueue__psqueue__functor_number_map_psqueue_2
};

static const MR_PseudoTypeInfo mercury__psqueue__psqueue__field_types_tournament_view_2_0[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 2
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__psqueue__psqueue__field_types_tournament_view_2_1[2] = {
  (MR_PseudoTypeInfo) &mercury__psqueue__psqueue__pti_winner_2__pseudo_1__pseudo_2,
  (MR_PseudoTypeInfo) &mercury__psqueue__psqueue__pti_winner_2__pseudo_1__pseudo_2
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__psqueue__psqueue__du_stag_ordered_tournament_view_2_0[1] = {
  &mercury__psqueue__psqueue__du_functor_desc_tournament_view_2_0
};

static const MR_DuFunctorDescPtr mercury__psqueue__psqueue__du_stag_ordered_tournament_view_2_1[1] = {
  &mercury__psqueue__psqueue__du_functor_desc_tournament_view_2_1
};

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

static const MR_DuFunctorDescPtr mercury__psqueue__psqueue__du_name_ordered_tournament_view_2[2] = {
  &mercury__psqueue__psqueue__du_functor_desc_tournament_view_2_0,
  &mercury__psqueue__psqueue__du_functor_desc_tournament_view_2_1
};

static const MR_Integer mercury__psqueue__psqueue__functor_number_map_tournament_view_2[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__psqueue__psqueue__type_ctor_info_tournament_view_2 = {
  (MR_Integer) 2,
  (MR_Integer) 16,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__psqueue____Unify____tournament_view_2_0_10001)),
  ((MR_Box) (mercury__psqueue____Compare____tournament_view_2_0_10001)),
  (MR_String) "psqueue",
  (MR_String) "tournament_view",
  {     mercury__psqueue__psqueue__du_name_ordered_tournament_view_2 },
  {     mercury__psqueue__psqueue__du_ptag_ordered_tournament_view_2 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__psqueue__psqueue__functor_number_map_tournament_view_2
};

static const MR_PseudoTypeInfo mercury__psqueue__psqueue__field_types_winner_2_0[4] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 2,
  (MR_PseudoTypeInfo) &mercury__psqueue__psqueue__pti_loser_tree_2__pseudo_1__pseudo_2,
  (MR_PseudoTypeInfo) (MR_Integer) 2
};

static const MR_ConstString mercury__psqueue__psqueue__field_names_winner_2_0[4] = {
  (MR_String) "w_prio",
  (MR_String) "w_key",
  (MR_String) "w_losers",
  (MR_String) "w_max_key"
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__psqueue__psqueue__du_stag_ordered_winner_2_0[1] = {
  &mercury__psqueue__psqueue__du_functor_desc_winner_2_0
};

static const MR_DuPtagLayout mercury__psqueue__psqueue__du_ptag_ordered_winner_2[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__psqueue__psqueue__du_stag_ordered_winner_2_0
  }
};

static const MR_DuFunctorDescPtr mercury__psqueue__psqueue__du_name_ordered_winner_2[1] = {
  &mercury__psqueue__psqueue__du_functor_desc_winner_2_0
};

static const MR_Integer mercury__psqueue__psqueue__functor_number_map_winner_2[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__psqueue__psqueue__type_ctor_info_winner_2 = {
  (MR_Integer) 2,
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__psqueue____Unify____winner_2_0_10001)),
  ((MR_Box) (mercury__psqueue____Compare____winner_2_0_10001)),
  (MR_String) "psqueue",
  (MR_String) "winner",
  {     mercury__psqueue__psqueue__du_name_ordered_winner_2 },
  {     mercury__psqueue__psqueue__du_ptag_ordered_winner_2 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__psqueue__psqueue__functor_number_map_winner_2
};

static MR_bool MR_CALL 
mercury__psqueue____Unify____loser_tree_2_0_10001(
  MR_Box mercury__psqueue__wrapper_arg_1,
  MR_Box mercury__psqueue__wrapper_arg_2,
  MR_Box mercury__psqueue__wrapper_arg_3,
  MR_Box mercury__psqueue__wrapper_arg_4)
{
  {
    MR_bool mercury__psqueue__succeeded;

    {
      mercury__psqueue__succeeded = mercury__psqueue____Unify____loser_tree_2_0(((MR_Word) mercury__psqueue__wrapper_arg_1), ((MR_Word) mercury__psqueue__wrapper_arg_2), ((MR_Word) mercury__psqueue__wrapper_arg_3), ((MR_Word) mercury__psqueue__wrapper_arg_4));
    }
    return mercury__psqueue__succeeded;
  }
}

static void MR_CALL 
mercury__psqueue____Compare____loser_tree_2_0_10001(
  MR_Box mercury__psqueue__wrapper_arg_1,
  MR_Box mercury__psqueue__wrapper_arg_2,
  MR_Box * mercury__psqueue__wrapper_arg_3,
  MR_Box mercury__psqueue__wrapper_arg_4,
  MR_Box mercury__psqueue__wrapper_arg_5)
{
  {
    MR_Word mercury__psqueue__conv0_HeadVar__1_1;

    {
      mercury__psqueue____Compare____loser_tree_2_0(((MR_Word) mercury__psqueue__wrapper_arg_1), ((MR_Word) mercury__psqueue__wrapper_arg_2), &mercury__psqueue__conv0_HeadVar__1_1, ((MR_Word) mercury__psqueue__wrapper_arg_4), ((MR_Word) mercury__psqueue__wrapper_arg_5));
    }
    *mercury__psqueue__wrapper_arg_3 = ((MR_Box) (mercury__psqueue__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__psqueue____Unify____loser_tree_size_0_0_10001(
  MR_Box mercury__psqueue__wrapper_arg_1,
  MR_Box mercury__psqueue__wrapper_arg_2)
{
  {
    MR_bool mercury__psqueue__succeeded;

    {
      mercury__psqueue__succeeded = mercury__psqueue____Unify____loser_tree_size_0_0(((MR_Integer) mercury__psqueue__wrapper_arg_1), ((MR_Integer) mercury__psqueue__wrapper_arg_2));
    }
    return mercury__psqueue__succeeded;
  }
}

static void MR_CALL 
mercury__psqueue____Compare____loser_tree_size_0_0_10001(
  MR_Box * mercury__psqueue__wrapper_arg_1,
  MR_Box mercury__psqueue__wrapper_arg_2,
  MR_Box mercury__psqueue__wrapper_arg_3)
{
  {
    MR_Word mercury__psqueue__conv0_HeadVar__1_1;

    {
      mercury__psqueue____Compare____loser_tree_size_0_0(&mercury__psqueue__conv0_HeadVar__1_1, ((MR_Integer) mercury__psqueue__wrapper_arg_2), ((MR_Integer) mercury__psqueue__wrapper_arg_3));
    }
    *mercury__psqueue__wrapper_arg_1 = ((MR_Box) (mercury__psqueue__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__psqueue____Unify____psqueue_2_0_10001(
  MR_Box mercury__psqueue__wrapper_arg_1,
  MR_Box mercury__psqueue__wrapper_arg_2,
  MR_Box mercury__psqueue__wrapper_arg_3,
  MR_Box mercury__psqueue__wrapper_arg_4)
{
  {
    MR_bool mercury__psqueue__succeeded;

    {
      mercury__psqueue__succeeded = mercury__psqueue____Unify____psqueue_2_0(((MR_Word) mercury__psqueue__wrapper_arg_1), ((MR_Word) mercury__psqueue__wrapper_arg_2), ((MR_Word) mercury__psqueue__wrapper_arg_3), ((MR_Word) mercury__psqueue__wrapper_arg_4));
    }
    return mercury__psqueue__succeeded;
  }
}

static void MR_CALL 
mercury__psqueue____Compare____psqueue_2_0_10001(
  MR_Box mercury__psqueue__wrapper_arg_1,
  MR_Box mercury__psqueue__wrapper_arg_2,
  MR_Box * mercury__psqueue__wrapper_arg_3,
  MR_Box mercury__psqueue__wrapper_arg_4,
  MR_Box mercury__psqueue__wrapper_arg_5)
{
  {
    MR_Word mercury__psqueue__conv0_HeadVar__1_1;

    {
      mercury__psqueue____Compare____psqueue_2_0(((MR_Word) mercury__psqueue__wrapper_arg_1), ((MR_Word) mercury__psqueue__wrapper_arg_2), &mercury__psqueue__conv0_HeadVar__1_1, ((MR_Word) mercury__psqueue__wrapper_arg_4), ((MR_Word) mercury__psqueue__wrapper_arg_5));
    }
    *mercury__psqueue__wrapper_arg_3 = ((MR_Box) (mercury__psqueue__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__psqueue____Unify____tournament_view_2_0_10001(
  MR_Box mercury__psqueue__wrapper_arg_1,
  MR_Box mercury__psqueue__wrapper_arg_2,
  MR_Box mercury__psqueue__wrapper_arg_3,
  MR_Box mercury__psqueue__wrapper_arg_4)
{
  {
    MR_bool mercury__psqueue__succeeded;

    {
      mercury__psqueue__succeeded = mercury__psqueue____Unify____tournament_view_2_0(((MR_Word) mercury__psqueue__wrapper_arg_1), ((MR_Word) mercury__psqueue__wrapper_arg_2), ((MR_Word) mercury__psqueue__wrapper_arg_3), ((MR_Word) mercury__psqueue__wrapper_arg_4));
    }
    return mercury__psqueue__succeeded;
  }
}

static void MR_CALL 
mercury__psqueue____Compare____tournament_view_2_0_10001(
  MR_Box mercury__psqueue__wrapper_arg_1,
  MR_Box mercury__psqueue__wrapper_arg_2,
  MR_Box * mercury__psqueue__wrapper_arg_3,
  MR_Box mercury__psqueue__wrapper_arg_4,
  MR_Box mercury__psqueue__wrapper_arg_5)
{
  {
    MR_Word mercury__psqueue__conv0_HeadVar__1_1;

    {
      mercury__psqueue____Compare____tournament_view_2_0(((MR_Word) mercury__psqueue__wrapper_arg_1), ((MR_Word) mercury__psqueue__wrapper_arg_2), &mercury__psqueue__conv0_HeadVar__1_1, ((MR_Word) mercury__psqueue__wrapper_arg_4), ((MR_Word) mercury__psqueue__wrapper_arg_5));
    }
    *mercury__psqueue__wrapper_arg_3 = ((MR_Box) (mercury__psqueue__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__psqueue____Unify____winner_2_0_10001(
  MR_Box mercury__psqueue__wrapper_arg_1,
  MR_Box mercury__psqueue__wrapper_arg_2,
  MR_Box mercury__psqueue__wrapper_arg_3,
  MR_Box mercury__psqueue__wrapper_arg_4)
{
  {
    MR_bool mercury__psqueue__succeeded;

    {
      mercury__psqueue__succeeded = mercury__psqueue____Unify____winner_2_0(((MR_Word) mercury__psqueue__wrapper_arg_1), ((MR_Word) mercury__psqueue__wrapper_arg_2), ((MR_Word) mercury__psqueue__wrapper_arg_3), ((MR_Word) mercury__psqueue__wrapper_arg_4));
    }
    return mercury__psqueue__succeeded;
  }
}

static void MR_CALL 
mercury__psqueue____Compare____winner_2_0_10001(
  MR_Box mercury__psqueue__wrapper_arg_1,
  MR_Box mercury__psqueue__wrapper_arg_2,
  MR_Box * mercury__psqueue__wrapper_arg_3,
  MR_Box mercury__psqueue__wrapper_arg_4,
  MR_Box mercury__psqueue__wrapper_arg_5)
{
  {
    MR_Word mercury__psqueue__conv0_HeadVar__1_1;

    {
      mercury__psqueue____Compare____winner_2_0(((MR_Word) mercury__psqueue__wrapper_arg_1), ((MR_Word) mercury__psqueue__wrapper_arg_2), &mercury__psqueue__conv0_HeadVar__1_1, ((MR_Word) mercury__psqueue__wrapper_arg_4), ((MR_Word) mercury__psqueue__wrapper_arg_5));
    }
    *mercury__psqueue__wrapper_arg_3 = ((MR_Box) (mercury__psqueue__conv0_HeadVar__1_1));
  }
}

static MR_Integer MR_CALL 
mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    MR_bool mercury__psqueue__succeeded;

    return (MR_Integer) 1200;
  }
}

static MR_Word MR_CALL 
mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_107_101_121_115_95_95_91_49_93_95_48_1_f_0(
  MR_Word mercury__psqueue__TypeInfo_for_K_15,
  MR_Word mercury__psqueue__LTree_3)
{
  {
    MR_bool mercury__psqueue__succeeded;
    MR_Word mercury__psqueue__Keys_4;

    if ((mercury__psqueue__LTree_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__psqueue__Keys_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Box mercury__psqueue__Key_7 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_3, (MR_Integer) 2));
        MR_Word mercury__psqueue__SubLTreeL_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_3, (MR_Integer) 3)));
        MR_Word mercury__psqueue__SubLTreeR_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_3, (MR_Integer) 5)));
        MR_Word mercury__psqueue__V_11_11;
        MR_Word mercury__psqueue__V_12_12;
        MR_Word mercury__psqueue__V_13_13;
        MR_Integer mercury__psqueue__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_3, (MR_Integer) 0)));
        MR_Box mercury__psqueue__V_6_6 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_3, (MR_Integer) 1));
        MR_Box mercury__psqueue__V_9_9 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_3, (MR_Integer) 4));

        {
          mercury__psqueue__V_12_12 = mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_107_101_121_115_95_95_91_49_93_95_48_1_f_0(mercury__psqueue__TypeInfo_for_K_15, mercury__psqueue__SubLTreeL_8);
        }
        {
          mercury__psqueue__V_13_13 = mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_107_101_121_115_95_95_91_49_93_95_48_1_f_0(mercury__psqueue__TypeInfo_for_K_15, mercury__psqueue__SubLTreeR_10);
        }
        {
          mercury__list__append_3_p_1(mercury__psqueue__TypeInfo_for_K_15, mercury__psqueue__V_12_12, mercury__psqueue__V_13_13, &mercury__psqueue__V_11_11);
        }
        {
          mercury__psqueue__Keys_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__psqueue__Keys_4, 0) = mercury__psqueue__Key_7;
          MR_hl_field(MR_mktag(1), mercury__psqueue__Keys_4, 1) = ((MR_Box) (mercury__psqueue__V_11_11));
        }
      }
    return mercury__psqueue__Keys_4;
  }
}

static void MR_CALL 
mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_120_95_107_101_121_95_105_110_95_108_111_115_101_114_95_116_114_101_101_95_97_99_99_95_95_91_49_93_95_48_3_p_0(
  MR_Word mercury__psqueue__TypeInfo_for_K_21,
  MR_Word mercury__psqueue__LTree_4,
  MR_Box mercury__psqueue__STATE_VARIABLE_CurMax_0_17,
  MR_Word * mercury__psqueue__MaybeMaxKey_6)
{
  {
    MR_bool mercury__psqueue__succeeded;

    if ((mercury__psqueue__LTree_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__psqueue__MaybeMaxKey_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Box mercury__psqueue__Key_9 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 2));
        MR_Word mercury__psqueue__SubLTreeL_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 3)));
        MR_Word mercury__psqueue__SubLTreeR_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 5)));
        MR_Word mercury__psqueue__CMP_13;
        MR_Word mercury__psqueue__MaybeMaxKeyL_14;
        MR_Word mercury__psqueue__MaybeMaxKeyR_15;
        MR_Box mercury__psqueue__MaxKey_16;
        MR_Box mercury__psqueue__STATE_VARIABLE_CurMax_18_19;
        MR_Integer mercury__psqueue__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 0)));
        MR_Box mercury__psqueue__V_8_8 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 1));
        MR_Box mercury__psqueue__V_11_11 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 4));

        {
          mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_21, &mercury__psqueue__CMP_13, mercury__psqueue__STATE_VARIABLE_CurMax_0_17, mercury__psqueue__Key_9);
        }
        switch (mercury__psqueue__CMP_13) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            mercury__psqueue__STATE_VARIABLE_CurMax_18_19 = mercury__psqueue__Key_9;
            break;
          case (MR_Integer) 0:
            mercury__psqueue__STATE_VARIABLE_CurMax_18_19 = mercury__psqueue__STATE_VARIABLE_CurMax_0_17;
            break;
          case (MR_Integer) 2:
            mercury__psqueue__STATE_VARIABLE_CurMax_18_19 = mercury__psqueue__STATE_VARIABLE_CurMax_0_17;
            break;
        }
        {
          mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_120_95_107_101_121_95_105_110_95_108_111_115_101_114_95_116_114_101_101_95_97_99_99_95_95_91_49_93_95_48_3_p_0(mercury__psqueue__TypeInfo_for_K_21, mercury__psqueue__SubLTreeL_10, mercury__psqueue__STATE_VARIABLE_CurMax_18_19, &mercury__psqueue__MaybeMaxKeyL_14);
        }
        {
          mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_120_95_107_101_121_95_105_110_95_108_111_115_101_114_95_116_114_101_101_95_97_99_99_95_95_91_49_93_95_48_3_p_0(mercury__psqueue__TypeInfo_for_K_21, mercury__psqueue__SubLTreeR_12, mercury__psqueue__STATE_VARIABLE_CurMax_18_19, &mercury__psqueue__MaybeMaxKeyR_15);
        }
        if ((mercury__psqueue__MaybeMaxKeyL_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          if ((mercury__psqueue__MaybeMaxKeyR_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            mercury__psqueue__MaxKey_16 = mercury__psqueue__STATE_VARIABLE_CurMax_18_19;
          else
            {
              MR_Box mercury__psqueue__R_27 = (MR_hl_field(MR_mktag(1), mercury__psqueue__MaybeMaxKeyR_15, (MR_Integer) 0));
              MR_Word mercury__psqueue__CMP_37;

              {
                mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_21, &mercury__psqueue__CMP_37, mercury__psqueue__STATE_VARIABLE_CurMax_18_19, mercury__psqueue__R_27);
              }
              switch (mercury__psqueue__CMP_37) {
                default:
                  mercury__psqueue__succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 1:
                  mercury__psqueue__succeeded = MR_TRUE;
                  break;
                case (MR_Integer) 0:
                  mercury__psqueue__succeeded = MR_TRUE;
                  break;
              }
              if (mercury__psqueue__succeeded)
                mercury__psqueue__MaxKey_16 = mercury__psqueue__R_27;
              else
                mercury__psqueue__MaxKey_16 = mercury__psqueue__STATE_VARIABLE_CurMax_18_19;
            }
        else
          {
            MR_Box mercury__psqueue__V_31_31 = (MR_hl_field(MR_mktag(1), mercury__psqueue__MaybeMaxKeyL_14, (MR_Integer) 0));

            if ((mercury__psqueue__MaybeMaxKeyR_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word mercury__psqueue__CMP_43;

                {
                  mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_21, &mercury__psqueue__CMP_43, mercury__psqueue__STATE_VARIABLE_CurMax_18_19, mercury__psqueue__V_31_31);
                }
                switch (mercury__psqueue__CMP_43) {
                  default:
                    mercury__psqueue__succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 1:
                    mercury__psqueue__succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 0:
                    mercury__psqueue__succeeded = MR_TRUE;
                    break;
                }
                if (mercury__psqueue__succeeded)
                  mercury__psqueue__MaxKey_16 = mercury__psqueue__V_31_31;
                else
                  mercury__psqueue__MaxKey_16 = mercury__psqueue__STATE_VARIABLE_CurMax_18_19;
              }
            else
              {
                MR_Box mercury__psqueue__V_28_28;
                MR_Box mercury__psqueue__R_30 = (MR_hl_field(MR_mktag(1), mercury__psqueue__MaybeMaxKeyR_15, (MR_Integer) 0));
                MR_Word mercury__psqueue__CMP_49;
                MR_Word mercury__psqueue__CMP_55;

                {
                  mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_21, &mercury__psqueue__CMP_49, mercury__psqueue__V_31_31, mercury__psqueue__R_30);
                }
                switch (mercury__psqueue__CMP_49) {
                  default:
                    mercury__psqueue__succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 1:
                    mercury__psqueue__succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 0:
                    mercury__psqueue__succeeded = MR_TRUE;
                    break;
                }
                if (mercury__psqueue__succeeded)
                  mercury__psqueue__V_28_28 = mercury__psqueue__R_30;
                else
                  mercury__psqueue__V_28_28 = mercury__psqueue__V_31_31;
                {
                  mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_21, &mercury__psqueue__CMP_55, mercury__psqueue__STATE_VARIABLE_CurMax_18_19, mercury__psqueue__V_28_28);
                }
                switch (mercury__psqueue__CMP_55) {
                  default:
                    mercury__psqueue__succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 1:
                    mercury__psqueue__succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 0:
                    mercury__psqueue__succeeded = MR_TRUE;
                    break;
                }
                if (mercury__psqueue__succeeded)
                  mercury__psqueue__MaxKey_16 = mercury__psqueue__V_28_28;
                else
                  mercury__psqueue__MaxKey_16 = mercury__psqueue__STATE_VARIABLE_CurMax_18_19;
              }
          }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *mercury__psqueue__MaybeMaxKey_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = mercury__psqueue__MaxKey_16;
        }
      }
  }
}

static void MR_CALL 
mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_105_110_95_107_101_121_95_105_110_95_108_111_115_101_114_95_116_114_101_101_95_97_99_99_95_95_91_49_93_95_48_3_p_0(
  MR_Word mercury__psqueue__TypeInfo_for_K_21,
  MR_Word mercury__psqueue__LTree_4,
  MR_Box mercury__psqueue__STATE_VARIABLE_CurMin_0_17,
  MR_Word * mercury__psqueue__MaybeMinKey_6)
{
  {
    MR_bool mercury__psqueue__succeeded;

    if ((mercury__psqueue__LTree_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__psqueue__MaybeMinKey_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Box mercury__psqueue__Key_9 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 2));
        MR_Word mercury__psqueue__SubLTreeL_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 3)));
        MR_Word mercury__psqueue__SubLTreeR_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 5)));
        MR_Word mercury__psqueue__CMP_13;
        MR_Word mercury__psqueue__MaybeMinKeyL_14;
        MR_Word mercury__psqueue__MaybeMinKeyR_15;
        MR_Box mercury__psqueue__MinKey_16;
        MR_Box mercury__psqueue__STATE_VARIABLE_CurMin_18_19;
        MR_Integer mercury__psqueue__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 0)));
        MR_Box mercury__psqueue__V_8_8 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 1));
        MR_Box mercury__psqueue__V_11_11 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 4));

        {
          mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_21, &mercury__psqueue__CMP_13, mercury__psqueue__STATE_VARIABLE_CurMin_0_17, mercury__psqueue__Key_9);
        }
        switch (mercury__psqueue__CMP_13) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            mercury__psqueue__STATE_VARIABLE_CurMin_18_19 = mercury__psqueue__STATE_VARIABLE_CurMin_0_17;
            break;
          case (MR_Integer) 0:
            mercury__psqueue__STATE_VARIABLE_CurMin_18_19 = mercury__psqueue__STATE_VARIABLE_CurMin_0_17;
            break;
          case (MR_Integer) 2:
            mercury__psqueue__STATE_VARIABLE_CurMin_18_19 = mercury__psqueue__Key_9;
            break;
        }
        {
          mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_105_110_95_107_101_121_95_105_110_95_108_111_115_101_114_95_116_114_101_101_95_97_99_99_95_95_91_49_93_95_48_3_p_0(mercury__psqueue__TypeInfo_for_K_21, mercury__psqueue__SubLTreeL_10, mercury__psqueue__STATE_VARIABLE_CurMin_18_19, &mercury__psqueue__MaybeMinKeyL_14);
        }
        {
          mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_105_110_95_107_101_121_95_105_110_95_108_111_115_101_114_95_116_114_101_101_95_97_99_99_95_95_91_49_93_95_48_3_p_0(mercury__psqueue__TypeInfo_for_K_21, mercury__psqueue__SubLTreeR_12, mercury__psqueue__STATE_VARIABLE_CurMin_18_19, &mercury__psqueue__MaybeMinKeyR_15);
        }
        if ((mercury__psqueue__MaybeMinKeyL_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          if ((mercury__psqueue__MaybeMinKeyR_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            mercury__psqueue__MinKey_16 = mercury__psqueue__STATE_VARIABLE_CurMin_18_19;
          else
            {
              MR_Box mercury__psqueue__R_27 = (MR_hl_field(MR_mktag(1), mercury__psqueue__MaybeMinKeyR_15, (MR_Integer) 0));
              MR_Word mercury__psqueue__CMP_37;

              {
                mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_21, &mercury__psqueue__CMP_37, mercury__psqueue__STATE_VARIABLE_CurMin_18_19, mercury__psqueue__R_27);
              }
              switch (mercury__psqueue__CMP_37) {
                default:
                  mercury__psqueue__succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 1:
                  mercury__psqueue__succeeded = MR_TRUE;
                  break;
                case (MR_Integer) 0:
                  mercury__psqueue__succeeded = MR_TRUE;
                  break;
              }
              if (mercury__psqueue__succeeded)
                mercury__psqueue__MinKey_16 = mercury__psqueue__STATE_VARIABLE_CurMin_18_19;
              else
                mercury__psqueue__MinKey_16 = mercury__psqueue__R_27;
            }
        else
          {
            MR_Box mercury__psqueue__V_31_31 = (MR_hl_field(MR_mktag(1), mercury__psqueue__MaybeMinKeyL_14, (MR_Integer) 0));

            if ((mercury__psqueue__MaybeMinKeyR_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word mercury__psqueue__CMP_43;

                {
                  mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_21, &mercury__psqueue__CMP_43, mercury__psqueue__STATE_VARIABLE_CurMin_18_19, mercury__psqueue__V_31_31);
                }
                switch (mercury__psqueue__CMP_43) {
                  default:
                    mercury__psqueue__succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 1:
                    mercury__psqueue__succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 0:
                    mercury__psqueue__succeeded = MR_TRUE;
                    break;
                }
                if (mercury__psqueue__succeeded)
                  mercury__psqueue__MinKey_16 = mercury__psqueue__STATE_VARIABLE_CurMin_18_19;
                else
                  mercury__psqueue__MinKey_16 = mercury__psqueue__V_31_31;
              }
            else
              {
                MR_Box mercury__psqueue__V_28_28;
                MR_Box mercury__psqueue__R_30 = (MR_hl_field(MR_mktag(1), mercury__psqueue__MaybeMinKeyR_15, (MR_Integer) 0));
                MR_Word mercury__psqueue__CMP_49;
                MR_Word mercury__psqueue__CMP_55;

                {
                  mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_21, &mercury__psqueue__CMP_49, mercury__psqueue__V_31_31, mercury__psqueue__R_30);
                }
                switch (mercury__psqueue__CMP_49) {
                  default:
                    mercury__psqueue__succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 1:
                    mercury__psqueue__succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 0:
                    mercury__psqueue__succeeded = MR_TRUE;
                    break;
                }
                if (mercury__psqueue__succeeded)
                  mercury__psqueue__V_28_28 = mercury__psqueue__V_31_31;
                else
                  mercury__psqueue__V_28_28 = mercury__psqueue__R_30;
                {
                  mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_21, &mercury__psqueue__CMP_55, mercury__psqueue__STATE_VARIABLE_CurMin_18_19, mercury__psqueue__V_28_28);
                }
                switch (mercury__psqueue__CMP_55) {
                  default:
                    mercury__psqueue__succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 1:
                    mercury__psqueue__succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 0:
                    mercury__psqueue__succeeded = MR_TRUE;
                    break;
                }
                if (mercury__psqueue__succeeded)
                  mercury__psqueue__MinKey_16 = mercury__psqueue__STATE_VARIABLE_CurMin_18_19;
                else
                  mercury__psqueue__MinKey_16 = mercury__psqueue__V_28_28;
              }
          }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *mercury__psqueue__MaybeMinKey_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = mercury__psqueue__MinKey_16;
        }
      }
  }
}

static void MR_CALL 
mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_105_110_95_107_101_121_95_105_110_95_108_111_115_101_114_95_116_114_101_101_95_95_91_49_93_95_48_2_p_0(
  MR_Word mercury__psqueue__TypeInfo_for_K_16,
  MR_Word mercury__psqueue__LTree_3,
  MR_Word * mercury__psqueue__MaybeMinKey_4)
{
  {
    MR_bool mercury__psqueue__succeeded;

    if ((mercury__psqueue__LTree_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__psqueue__MaybeMinKey_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word mercury__psqueue__SubLTreeL_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_3, (MR_Integer) 3)));
        MR_Word mercury__psqueue__SubLTreeR_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_3, (MR_Integer) 5)));
        MR_Box mercury__psqueue__CurMin_11 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_3, (MR_Integer) 2));
        MR_Word mercury__psqueue__MaybeMinKeyL_12;
        MR_Word mercury__psqueue__MaybeMinKeyR_13;
        MR_Box mercury__psqueue__MinKey_14;
        MR_Integer mercury__psqueue__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_3, (MR_Integer) 0)));
        MR_Box mercury__psqueue__V_6_6 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_3, (MR_Integer) 1));
        MR_Box mercury__psqueue__V_9_9 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_3, (MR_Integer) 4));

        {
          mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_105_110_95_107_101_121_95_105_110_95_108_111_115_101_114_95_116_114_101_101_95_97_99_99_95_95_91_49_93_95_48_3_p_0(mercury__psqueue__TypeInfo_for_K_16, mercury__psqueue__SubLTreeL_8, mercury__psqueue__CurMin_11, &mercury__psqueue__MaybeMinKeyL_12);
        }
        {
          mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_105_110_95_107_101_121_95_105_110_95_108_111_115_101_114_95_116_114_101_101_95_97_99_99_95_95_91_49_93_95_48_3_p_0(mercury__psqueue__TypeInfo_for_K_16, mercury__psqueue__SubLTreeR_10, mercury__psqueue__CurMin_11, &mercury__psqueue__MaybeMinKeyR_13);
        }
        if ((mercury__psqueue__MaybeMinKeyL_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          if ((mercury__psqueue__MaybeMinKeyR_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            mercury__psqueue__MinKey_14 = mercury__psqueue__CurMin_11;
          else
            {
              MR_Box mercury__psqueue__R_22 = (MR_hl_field(MR_mktag(1), mercury__psqueue__MaybeMinKeyR_13, (MR_Integer) 0));
              MR_Word mercury__psqueue__CMP_32;

              {
                mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_16, &mercury__psqueue__CMP_32, mercury__psqueue__CurMin_11, mercury__psqueue__R_22);
              }
              switch (mercury__psqueue__CMP_32) {
                default:
                  mercury__psqueue__succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 1:
                  mercury__psqueue__succeeded = MR_TRUE;
                  break;
                case (MR_Integer) 0:
                  mercury__psqueue__succeeded = MR_TRUE;
                  break;
              }
              if (mercury__psqueue__succeeded)
                mercury__psqueue__MinKey_14 = mercury__psqueue__CurMin_11;
              else
                mercury__psqueue__MinKey_14 = mercury__psqueue__R_22;
            }
        else
          {
            MR_Box mercury__psqueue__V_26_26 = (MR_hl_field(MR_mktag(1), mercury__psqueue__MaybeMinKeyL_12, (MR_Integer) 0));

            if ((mercury__psqueue__MaybeMinKeyR_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word mercury__psqueue__CMP_38;

                {
                  mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_16, &mercury__psqueue__CMP_38, mercury__psqueue__CurMin_11, mercury__psqueue__V_26_26);
                }
                switch (mercury__psqueue__CMP_38) {
                  default:
                    mercury__psqueue__succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 1:
                    mercury__psqueue__succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 0:
                    mercury__psqueue__succeeded = MR_TRUE;
                    break;
                }
                if (mercury__psqueue__succeeded)
                  mercury__psqueue__MinKey_14 = mercury__psqueue__CurMin_11;
                else
                  mercury__psqueue__MinKey_14 = mercury__psqueue__V_26_26;
              }
            else
              {
                MR_Box mercury__psqueue__V_23_23;
                MR_Box mercury__psqueue__R_25 = (MR_hl_field(MR_mktag(1), mercury__psqueue__MaybeMinKeyR_13, (MR_Integer) 0));
                MR_Word mercury__psqueue__CMP_44;
                MR_Word mercury__psqueue__CMP_50;

                {
                  mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_16, &mercury__psqueue__CMP_44, mercury__psqueue__V_26_26, mercury__psqueue__R_25);
                }
                switch (mercury__psqueue__CMP_44) {
                  default:
                    mercury__psqueue__succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 1:
                    mercury__psqueue__succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 0:
                    mercury__psqueue__succeeded = MR_TRUE;
                    break;
                }
                if (mercury__psqueue__succeeded)
                  mercury__psqueue__V_23_23 = mercury__psqueue__V_26_26;
                else
                  mercury__psqueue__V_23_23 = mercury__psqueue__R_25;
                {
                  mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_16, &mercury__psqueue__CMP_50, mercury__psqueue__CurMin_11, mercury__psqueue__V_23_23);
                }
                switch (mercury__psqueue__CMP_50) {
                  default:
                    mercury__psqueue__succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 1:
                    mercury__psqueue__succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 0:
                    mercury__psqueue__succeeded = MR_TRUE;
                    break;
                }
                if (mercury__psqueue__succeeded)
                  mercury__psqueue__MinKey_14 = mercury__psqueue__CurMin_11;
                else
                  mercury__psqueue__MinKey_14 = mercury__psqueue__V_23_23;
              }
          }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *mercury__psqueue__MaybeMinKey_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = mercury__psqueue__MinKey_14;
        }
      }
  }
}

static void MR_CALL 
mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_105_110_95_112_114_105_111_95_105_110_95_108_111_115_101_114_95_116_114_101_101_95_97_99_99_95_95_91_50_93_95_48_3_p_0(
  MR_Word mercury__psqueue__TypeInfo_for_P_20,
  MR_Word mercury__psqueue__LTree_4,
  MR_Box mercury__psqueue__STATE_VARIABLE_CurMinPrio_0_17,
  MR_Word * mercury__psqueue__MaybeMinPrio_6)
{
  {
    MR_bool mercury__psqueue__succeeded;

    if ((mercury__psqueue__LTree_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__psqueue__MaybeMinPrio_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Box mercury__psqueue__Prio_8 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 1));
        MR_Word mercury__psqueue__SubLTreeL_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 3)));
        MR_Word mercury__psqueue__SubLTreeR_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 5)));
        MR_Word mercury__psqueue__CMP_13;
        MR_Word mercury__psqueue__MaybeMinPrioL_14;
        MR_Word mercury__psqueue__MaybeMinPrioR_15;
        MR_Box mercury__psqueue__MinPrio_16;
        MR_Box mercury__psqueue__STATE_VARIABLE_CurMinPrio_18_19;
        MR_Integer mercury__psqueue__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 0)));
        MR_Box mercury__psqueue__V_9_9 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 2));
        MR_Box mercury__psqueue__V_11_11 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 4));

        {
          mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_P_20, &mercury__psqueue__CMP_13, mercury__psqueue__STATE_VARIABLE_CurMinPrio_0_17, mercury__psqueue__Prio_8);
        }
        switch (mercury__psqueue__CMP_13) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            mercury__psqueue__STATE_VARIABLE_CurMinPrio_18_19 = mercury__psqueue__STATE_VARIABLE_CurMinPrio_0_17;
            break;
          case (MR_Integer) 0:
            mercury__psqueue__STATE_VARIABLE_CurMinPrio_18_19 = mercury__psqueue__STATE_VARIABLE_CurMinPrio_0_17;
            break;
          case (MR_Integer) 2:
            mercury__psqueue__STATE_VARIABLE_CurMinPrio_18_19 = mercury__psqueue__Prio_8;
            break;
        }
        {
          mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_105_110_95_112_114_105_111_95_105_110_95_108_111_115_101_114_95_116_114_101_101_95_97_99_99_95_95_91_50_93_95_48_3_p_0(mercury__psqueue__TypeInfo_for_P_20, mercury__psqueue__SubLTreeL_10, mercury__psqueue__STATE_VARIABLE_CurMinPrio_18_19, &mercury__psqueue__MaybeMinPrioL_14);
        }
        {
          mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_105_110_95_112_114_105_111_95_105_110_95_108_111_115_101_114_95_116_114_101_101_95_97_99_99_95_95_91_50_93_95_48_3_p_0(mercury__psqueue__TypeInfo_for_P_20, mercury__psqueue__SubLTreeR_12, mercury__psqueue__STATE_VARIABLE_CurMinPrio_18_19, &mercury__psqueue__MaybeMinPrioR_15);
        }
        if ((mercury__psqueue__MaybeMinPrioL_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          if ((mercury__psqueue__MaybeMinPrioR_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            mercury__psqueue__MinPrio_16 = mercury__psqueue__STATE_VARIABLE_CurMinPrio_18_19;
          else
            {
              MR_Box mercury__psqueue__R_27 = (MR_hl_field(MR_mktag(1), mercury__psqueue__MaybeMinPrioR_15, (MR_Integer) 0));
              MR_Word mercury__psqueue__CMP_37;

              {
                mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_P_20, &mercury__psqueue__CMP_37, mercury__psqueue__STATE_VARIABLE_CurMinPrio_18_19, mercury__psqueue__R_27);
              }
              switch (mercury__psqueue__CMP_37) {
                default:
                  mercury__psqueue__succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 1:
                  mercury__psqueue__succeeded = MR_TRUE;
                  break;
                case (MR_Integer) 0:
                  mercury__psqueue__succeeded = MR_TRUE;
                  break;
              }
              if (mercury__psqueue__succeeded)
                mercury__psqueue__MinPrio_16 = mercury__psqueue__STATE_VARIABLE_CurMinPrio_18_19;
              else
                mercury__psqueue__MinPrio_16 = mercury__psqueue__R_27;
            }
        else
          {
            MR_Box mercury__psqueue__V_31_31 = (MR_hl_field(MR_mktag(1), mercury__psqueue__MaybeMinPrioL_14, (MR_Integer) 0));

            if ((mercury__psqueue__MaybeMinPrioR_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word mercury__psqueue__CMP_43;

                {
                  mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_P_20, &mercury__psqueue__CMP_43, mercury__psqueue__STATE_VARIABLE_CurMinPrio_18_19, mercury__psqueue__V_31_31);
                }
                switch (mercury__psqueue__CMP_43) {
                  default:
                    mercury__psqueue__succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 1:
                    mercury__psqueue__succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 0:
                    mercury__psqueue__succeeded = MR_TRUE;
                    break;
                }
                if (mercury__psqueue__succeeded)
                  mercury__psqueue__MinPrio_16 = mercury__psqueue__STATE_VARIABLE_CurMinPrio_18_19;
                else
                  mercury__psqueue__MinPrio_16 = mercury__psqueue__V_31_31;
              }
            else
              {
                MR_Box mercury__psqueue__V_28_28;
                MR_Box mercury__psqueue__R_30 = (MR_hl_field(MR_mktag(1), mercury__psqueue__MaybeMinPrioR_15, (MR_Integer) 0));
                MR_Word mercury__psqueue__CMP_49;
                MR_Word mercury__psqueue__CMP_55;

                {
                  mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_P_20, &mercury__psqueue__CMP_49, mercury__psqueue__V_31_31, mercury__psqueue__R_30);
                }
                switch (mercury__psqueue__CMP_49) {
                  default:
                    mercury__psqueue__succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 1:
                    mercury__psqueue__succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 0:
                    mercury__psqueue__succeeded = MR_TRUE;
                    break;
                }
                if (mercury__psqueue__succeeded)
                  mercury__psqueue__V_28_28 = mercury__psqueue__V_31_31;
                else
                  mercury__psqueue__V_28_28 = mercury__psqueue__R_30;
                {
                  mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_P_20, &mercury__psqueue__CMP_55, mercury__psqueue__STATE_VARIABLE_CurMinPrio_18_19, mercury__psqueue__V_28_28);
                }
                switch (mercury__psqueue__CMP_55) {
                  default:
                    mercury__psqueue__succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 1:
                    mercury__psqueue__succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 0:
                    mercury__psqueue__succeeded = MR_TRUE;
                    break;
                }
                if (mercury__psqueue__succeeded)
                  mercury__psqueue__MinPrio_16 = mercury__psqueue__STATE_VARIABLE_CurMinPrio_18_19;
                else
                  mercury__psqueue__MinPrio_16 = mercury__psqueue__V_28_28;
              }
          }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *mercury__psqueue__MaybeMinPrio_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = mercury__psqueue__MinPrio_16;
        }
      }
  }
}

static MR_bool MR_CALL 
mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_112_114_105_111_115_95_105_110_95_108_111_115_101_114_95_116_114_101_101_95_97_116_95_111_114_95_97_98_111_118_101_95_112_114_105_111_95_95_91_50_93_95_48_2_p_0(
  MR_Word mercury__psqueue__TypeInfo_for_P_11,
  MR_Box mercury__psqueue__WinnerPrio_3,
  MR_Word mercury__psqueue__LTree_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__psqueue__succeeded;

        if ((mercury__psqueue__LTree_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          mercury__psqueue__succeeded = MR_TRUE;
        else
          {
            MR_Box mercury__psqueue__LoserPrio_6 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 1));
            MR_Word mercury__psqueue__SubLTreeL_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 3)));
            MR_Word mercury__psqueue__SubLTreeR_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 5)));
            MR_Word mercury__psqueue__CMP_15;
            MR_Integer mercury__psqueue__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 0)));
            MR_Box mercury__psqueue__V_7_7 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 2));
            MR_Box mercury__psqueue__V_9_9 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 4));

            {
              mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_P_11, &mercury__psqueue__CMP_15, mercury__psqueue__WinnerPrio_3, mercury__psqueue__LoserPrio_6);
            }
            switch (mercury__psqueue__CMP_15) {
              default:
                mercury__psqueue__succeeded = MR_FALSE;
                break;
              case (MR_Integer) 1:
                mercury__psqueue__succeeded = MR_TRUE;
                break;
              case (MR_Integer) 0:
                mercury__psqueue__succeeded = MR_TRUE;
                break;
            }
            if (mercury__psqueue__succeeded)
              {
                {
                  mercury__psqueue__succeeded = mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_112_114_105_111_115_95_105_110_95_108_111_115_101_114_95_116_114_101_101_95_97_116_95_111_114_95_97_98_111_118_101_95_112_114_105_111_95_95_91_50_93_95_48_2_p_0(mercury__psqueue__TypeInfo_for_P_11, mercury__psqueue__WinnerPrio_3, mercury__psqueue__SubLTreeL_8);
                }
                if (mercury__psqueue__succeeded)
                  {
                    /* direct tailcall eliminated */
                    {
                      MR_Word mercury__psqueue__LTree__tmp_copy_4 = mercury__psqueue__SubLTreeR_10;

                      mercury__psqueue__LTree_4 = mercury__psqueue__LTree__tmp_copy_4;
                    }
                    continue;
                  }
              }
          }
        return mercury__psqueue__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_4_p_0(
  MR_Word mercury__psqueue__TypeInfo_for_K_16,
  MR_Integer mercury__psqueue__InsertPrio_5,
  MR_Box mercury__psqueue__InsertKey_6,
  MR_Word mercury__psqueue__STATE_VARIABLE_PSQ_0_10,
  MR_Word * mercury__psqueue__STATE_VARIABLE_PSQ_11)
{
  {
    MR_bool mercury__psqueue__succeeded;

    if ((mercury__psqueue__STATE_VARIABLE_PSQ_0_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word mercury__psqueue__V_23_23;
        MR_Word mercury__psqueue__V_26_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

        {
          mercury__psqueue__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__psqueue__V_23_23, 0) = ((MR_Box) (mercury__psqueue__InsertPrio_5));
          MR_hl_field(MR_mktag(0), mercury__psqueue__V_23_23, 1) = mercury__psqueue__InsertKey_6;
          MR_hl_field(MR_mktag(0), mercury__psqueue__V_23_23, 2) = ((MR_Box) (mercury__psqueue__V_26_26));
          MR_hl_field(MR_mktag(0), mercury__psqueue__V_23_23, 3) = mercury__psqueue__InsertKey_6;
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *mercury__psqueue__STATE_VARIABLE_PSQ_11 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__psqueue__V_23_23));
        }
        mercury__psqueue__succeeded = MR_TRUE;
      }
    else
      {
        MR_Word mercury__psqueue__Winner0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__STATE_VARIABLE_PSQ_0_10, (MR_Integer) 0)));
        MR_Word mercury__psqueue__Winner_9;
        MR_Word mercury__psqueue__V_12_12;

        {
          mercury__psqueue__V_12_12 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_103_101_116_95_116_111_117_114_110_97_109_101_110_116_95_118_105_101_119_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_1_f_0(mercury__psqueue__TypeInfo_for_K_16, mercury__psqueue__Winner0_8);
        }
        {
          mercury__psqueue__succeeded = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_116_118_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mercury__psqueue__TypeInfo_for_K_16, mercury__psqueue__InsertPrio_5, mercury__psqueue__InsertKey_6, mercury__psqueue__V_12_12, &mercury__psqueue__Winner_9);
        }
        if (mercury__psqueue__succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *mercury__psqueue__STATE_VARIABLE_PSQ_11 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__psqueue__Winner_9));
            }
            mercury__psqueue__succeeded = MR_TRUE;
          }
      }
    return mercury__psqueue__succeeded;
  }
}

MR_Word MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_3_f_0(
  MR_Word mercury__psqueue__TypeInfo_for_K_10,
  MR_Word mercury__psqueue__PSQ0_5,
  MR_Integer mercury__psqueue__InsertPrio_6,
  MR_Box mercury__psqueue__InsertKey_7)
{
  {
    MR_bool mercury__psqueue__succeeded;
    MR_Word mercury__psqueue__PSQ_8;

    {
      mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mercury__psqueue__TypeInfo_for_K_10, mercury__psqueue__InsertPrio_6, mercury__psqueue__InsertKey_7, mercury__psqueue__PSQ0_5, &mercury__psqueue__PSQ_8);
    }
    return mercury__psqueue__PSQ_8;
  }
}

void MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_4_p_0(
  MR_Word mercury__psqueue__TypeInfo_for_K_16,
  MR_Integer mercury__psqueue__InsertPrio_5,
  MR_Box mercury__psqueue__InsertKey_6,
  MR_Word mercury__psqueue__STATE_VARIABLE_PSQ_0_8,
  MR_Word * mercury__psqueue__STATE_VARIABLE_PSQ_9)
{
  {
    MR_bool mercury__psqueue__succeeded;
    MR_Word mercury__psqueue__STATE_VARIABLE_PSQ_10_10;

    {
      mercury__psqueue__succeeded = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mercury__psqueue__TypeInfo_for_K_16, mercury__psqueue__InsertPrio_5, mercury__psqueue__InsertKey_6, mercury__psqueue__STATE_VARIABLE_PSQ_0_8, &mercury__psqueue__STATE_VARIABLE_PSQ_10_10);
    }
    if (mercury__psqueue__succeeded)
      *mercury__psqueue__STATE_VARIABLE_PSQ_9 = mercury__psqueue__STATE_VARIABLE_PSQ_10_10;
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "psqueue.m", (MR_String) "predicate \140psqueue.det_insert\'/4", (MR_String) "key being inserted is already present");
          return;
        }
      }
  }
}

MR_bool MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_109_111_118_101_95_108_101_97_115_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_4_p_0(
  MR_Word mercury__psqueue__TypeInfo_for_K_15,
  MR_Integer * mercury__psqueue__MinPrio_5,
  MR_Box * mercury__psqueue__MinKey_6,
  MR_Word mercury__psqueue__STATE_VARIABLE_PSQ_0_10,
  MR_Word * mercury__psqueue__STATE_VARIABLE_PSQ_11)
{
  {
    MR_bool mercury__psqueue__succeeded = ((MR_tag((MR_Word) mercury__psqueue__STATE_VARIABLE_PSQ_0_10)) == (MR_mktag((MR_Integer) 1)));
    MR_Word mercury__psqueue__LTree_8;
    MR_Box mercury__psqueue__MaxKey_9;
    MR_Word mercury__psqueue__V_12_12;

    if (mercury__psqueue__succeeded)
      {
        mercury__psqueue__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__STATE_VARIABLE_PSQ_0_10, (MR_Integer) 0)));
        *mercury__psqueue__MinPrio_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__psqueue__V_12_12, (MR_Integer) 0)));
        *mercury__psqueue__MinKey_6 = (MR_hl_field(MR_mktag(0), mercury__psqueue__V_12_12, (MR_Integer) 1));
        mercury__psqueue__LTree_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__psqueue__V_12_12, (MR_Integer) 2)));
        mercury__psqueue__MaxKey_9 = (MR_hl_field(MR_mktag(0), mercury__psqueue__V_12_12, (MR_Integer) 3));
        {
          *mercury__psqueue__STATE_VARIABLE_PSQ_11 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_118_101_114_116_95_108_111_115_101_114_95_116_114_101_101_95_116_111_95_112_115_113_117_101_117_101_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_2_f_0(mercury__psqueue__TypeInfo_for_K_15, mercury__psqueue__LTree_8, mercury__psqueue__MaxKey_9);
        }
        mercury__psqueue__succeeded = MR_TRUE;
      }
    return mercury__psqueue__succeeded;
  }
}

void MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_114_101_109_111_118_101_95_108_101_97_115_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_4_p_0(
  MR_Word mercury__psqueue__TypeInfo_for_K_18,
  MR_Integer * mercury__psqueue__MinPrio_5,
  MR_Box * mercury__psqueue__MinKey_6,
  MR_Word mercury__psqueue__STATE_VARIABLE_PSQ_0_10,
  MR_Word * mercury__psqueue__STATE_VARIABLE_PSQ_11)
{
  {
    MR_bool mercury__psqueue__succeeded = ((MR_tag((MR_Word) mercury__psqueue__STATE_VARIABLE_PSQ_0_10)) == (MR_mktag((MR_Integer) 1)));
    MR_Integer mercury__psqueue__MinPrioPrime_8;
    MR_Box mercury__psqueue__MinKeyPrime_9;
    MR_Word mercury__psqueue__STATE_VARIABLE_PSQ_12_12;
    MR_Word mercury__psqueue__LTree_24;
    MR_Box mercury__psqueue__MaxKey_25;
    MR_Word mercury__psqueue__V_26_26;

    if (mercury__psqueue__succeeded)
      {
        mercury__psqueue__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__STATE_VARIABLE_PSQ_0_10, (MR_Integer) 0)));
        mercury__psqueue__MinPrioPrime_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__psqueue__V_26_26, (MR_Integer) 0)));
        mercury__psqueue__MinKeyPrime_9 = (MR_hl_field(MR_mktag(0), mercury__psqueue__V_26_26, (MR_Integer) 1));
        mercury__psqueue__LTree_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__psqueue__V_26_26, (MR_Integer) 2)));
        mercury__psqueue__MaxKey_25 = (MR_hl_field(MR_mktag(0), mercury__psqueue__V_26_26, (MR_Integer) 3));
        {
          mercury__psqueue__STATE_VARIABLE_PSQ_12_12 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_118_101_114_116_95_108_111_115_101_114_95_116_114_101_101_95_116_111_95_112_115_113_117_101_117_101_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_2_f_0(mercury__psqueue__TypeInfo_for_K_18, mercury__psqueue__LTree_24, mercury__psqueue__MaxKey_25);
        }
        mercury__psqueue__succeeded = MR_TRUE;
      }
    if (mercury__psqueue__succeeded)
      {
        *mercury__psqueue__STATE_VARIABLE_PSQ_11 = mercury__psqueue__STATE_VARIABLE_PSQ_12_12;
        *mercury__psqueue__MinKey_6 = mercury__psqueue__MinKeyPrime_9;
        *mercury__psqueue__MinPrio_5 = mercury__psqueue__MinPrioPrime_8;
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "psqueue.m", (MR_String) "predicate \140psqueue.det_remove_least\'/4", (MR_String) "priority search queue is empty");
          return;
        }
      }
  }
}

MR_Word MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_116_111_95_97_115_115_111_99_95_108_105_115_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_1_f_0(
  MR_Word mercury__psqueue__TypeInfo_for_K_6,
  MR_Word mercury__psqueue__PSQ_3)
{
  {
    MR_bool mercury__psqueue__succeeded;
    MR_Word mercury__psqueue__AssocList_4;

    {
      mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_116_111_95_97_115_115_111_99_95_108_105_115_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_2_p_0(mercury__psqueue__TypeInfo_for_K_6, mercury__psqueue__PSQ_3, &mercury__psqueue__AssocList_4);
    }
    return mercury__psqueue__AssocList_4;
  }
}

void MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_116_111_95_97_115_115_111_99_95_108_105_115_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_2_p_0(
  MR_Word mercury__psqueue__TypeInfo_for_K_11,
  MR_Word mercury__psqueue__PSQ0_3,
  MR_Word * mercury__psqueue__AssocList_4)
{
  {
    MR_bool mercury__psqueue__succeeded = ((MR_tag((MR_Word) mercury__psqueue__PSQ0_3)) == (MR_mktag((MR_Integer) 1)));
    MR_Integer mercury__psqueue__K_5;
    MR_Box mercury__psqueue__P_6;
    MR_Word mercury__psqueue__PSQ1_7;
    MR_Word mercury__psqueue__LTree_17;
    MR_Box mercury__psqueue__MaxKey_18;
    MR_Word mercury__psqueue__V_19_19;

    if (mercury__psqueue__succeeded)
      {
        mercury__psqueue__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ0_3, (MR_Integer) 0)));
        mercury__psqueue__K_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__psqueue__V_19_19, (MR_Integer) 0)));
        mercury__psqueue__P_6 = (MR_hl_field(MR_mktag(0), mercury__psqueue__V_19_19, (MR_Integer) 1));
        mercury__psqueue__LTree_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__psqueue__V_19_19, (MR_Integer) 2)));
        mercury__psqueue__MaxKey_18 = (MR_hl_field(MR_mktag(0), mercury__psqueue__V_19_19, (MR_Integer) 3));
        {
          mercury__psqueue__PSQ1_7 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_118_101_114_116_95_108_111_115_101_114_95_116_114_101_101_95_116_111_95_112_115_113_117_101_117_101_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_2_f_0(mercury__psqueue__TypeInfo_for_K_11, mercury__psqueue__LTree_17, mercury__psqueue__MaxKey_18);
        }
        mercury__psqueue__succeeded = MR_TRUE;
      }
    if (mercury__psqueue__succeeded)
      {
        MR_Word mercury__psqueue__AssocListTail_8;
        MR_Word mercury__psqueue__V_9_9;

        {
          mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_116_111_95_97_115_115_111_99_95_108_105_115_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_2_p_0(mercury__psqueue__TypeInfo_for_K_11, mercury__psqueue__PSQ1_7, &mercury__psqueue__AssocListTail_8);
        }
        {
          mercury__psqueue__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__psqueue__V_9_9, 0) = ((MR_Box) (mercury__psqueue__K_5));
          MR_hl_field(MR_mktag(0), mercury__psqueue__V_9_9, 1) = mercury__psqueue__P_6;
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *mercury__psqueue__AssocList_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__psqueue__V_9_9));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__psqueue__AssocListTail_8));
        }
      }
    else
      *mercury__psqueue__AssocList_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
}

MR_Word MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_102_114_111_109_95_97_115_115_111_99_95_108_105_115_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_1_f_0(
  MR_Word mercury__psqueue__TypeInfo_for_K_6,
  MR_Word mercury__psqueue__AssocList_3)
{
  {
    MR_bool mercury__psqueue__succeeded;
    MR_Word mercury__psqueue__PSQ_4;
    MR_Word mercury__psqueue__V_9_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_102_114_111_109_95_97_115_115_111_99_95_108_105_115_116_95_108_111_111_112_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__psqueue__TypeInfo_for_K_6, mercury__psqueue__AssocList_3, mercury__psqueue__V_9_9, &mercury__psqueue__PSQ_4);
    }
    return mercury__psqueue__PSQ_4;
  }
}

void MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_102_114_111_109_95_97_115_115_111_99_95_108_105_115_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_2_p_0(
  MR_Word mercury__psqueue__TypeInfo_for_K_7,
  MR_Word mercury__psqueue__AssocList_3,
  MR_Word * mercury__psqueue__PSQ_4)
{
  {
    MR_bool mercury__psqueue__succeeded;
    MR_Word mercury__psqueue__V_5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_102_114_111_109_95_97_115_115_111_99_95_108_105_115_116_95_108_111_111_112_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__psqueue__TypeInfo_for_K_7, mercury__psqueue__AssocList_3, mercury__psqueue__V_5_5, mercury__psqueue__PSQ_4);
    }
  }
}

MR_bool MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_109_111_118_101_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_4_p_0(
  MR_Word mercury__psqueue__TypeInfo_for_K_14,
  MR_Integer * mercury__psqueue__MatchingPrio_5,
  MR_Box mercury__psqueue__SearchKey_6,
  MR_Word mercury__psqueue__STATE_VARIABLE_PSQ_0_9,
  MR_Word * mercury__psqueue__STATE_VARIABLE_PSQ_10)
{
  {
    MR_bool mercury__psqueue__succeeded = ((MR_tag((MR_Word) mercury__psqueue__STATE_VARIABLE_PSQ_0_9)) == (MR_mktag((MR_Integer) 1)));
    MR_Word mercury__psqueue__Winner0_8;
    MR_Word mercury__psqueue__V_11_11;

    if (mercury__psqueue__succeeded)
      {
        mercury__psqueue__Winner0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__STATE_VARIABLE_PSQ_0_9, (MR_Integer) 0)));
        {
          mercury__psqueue__V_11_11 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_103_101_116_95_116_111_117_114_110_97_109_101_110_116_95_118_105_101_119_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_1_f_0(mercury__psqueue__TypeInfo_for_K_14, mercury__psqueue__Winner0_8);
        }
        {
          mercury__psqueue__succeeded = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_109_111_118_101_95_116_118_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mercury__psqueue__TypeInfo_for_K_14, mercury__psqueue__MatchingPrio_5, mercury__psqueue__SearchKey_6, mercury__psqueue__V_11_11, mercury__psqueue__STATE_VARIABLE_PSQ_10);
        }
      }
    return mercury__psqueue__succeeded;
  }
}

void MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_114_101_109_111_118_101_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_4_p_0(
  MR_Word mercury__psqueue__TypeInfo_for_K_17,
  MR_Integer * mercury__psqueue__MatchingPrio_5,
  MR_Box mercury__psqueue__SearchKey_6,
  MR_Word mercury__psqueue__STATE_VARIABLE_PSQ_0_9,
  MR_Word * mercury__psqueue__STATE_VARIABLE_PSQ_10)
{
  {
    MR_bool mercury__psqueue__succeeded = ((MR_tag((MR_Word) mercury__psqueue__STATE_VARIABLE_PSQ_0_9)) == (MR_mktag((MR_Integer) 1)));
    MR_Integer mercury__psqueue__MatchingPrioPrime_8;
    MR_Word mercury__psqueue__STATE_VARIABLE_PSQ_11_11;
    MR_Word mercury__psqueue__Winner0_23;
    MR_Word mercury__psqueue__V_24_24;

    if (mercury__psqueue__succeeded)
      {
        mercury__psqueue__Winner0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__STATE_VARIABLE_PSQ_0_9, (MR_Integer) 0)));
        {
          mercury__psqueue__V_24_24 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_103_101_116_95_116_111_117_114_110_97_109_101_110_116_95_118_105_101_119_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_1_f_0(mercury__psqueue__TypeInfo_for_K_17, mercury__psqueue__Winner0_23);
        }
        {
          mercury__psqueue__succeeded = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_109_111_118_101_95_116_118_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mercury__psqueue__TypeInfo_for_K_17, &mercury__psqueue__MatchingPrioPrime_8, mercury__psqueue__SearchKey_6, mercury__psqueue__V_24_24, &mercury__psqueue__STATE_VARIABLE_PSQ_11_11);
        }
      }
    if (mercury__psqueue__succeeded)
      {
        *mercury__psqueue__STATE_VARIABLE_PSQ_10 = mercury__psqueue__STATE_VARIABLE_PSQ_11_11;
        *mercury__psqueue__MatchingPrio_5 = mercury__psqueue__MatchingPrioPrime_8;
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "psqueue.m", (MR_String) "predicate \140psqueue.det_remove\'/4", (MR_String) "element not found");
          return;
        }
      }
  }
}

MR_bool MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_97_100_106_117_115_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_4_p_0(
  MR_Word mercury__psqueue__TypeInfo_for_K_15,
  MR_Word mercury__psqueue__AdjustFunc_5,
  MR_Box mercury__psqueue__SearchKey_6,
  MR_Word mercury__psqueue__STATE_VARIABLE_PSQ_0_10,
  MR_Word * mercury__psqueue__STATE_VARIABLE_PSQ_11)
{
  {
    MR_bool mercury__psqueue__succeeded = ((MR_tag((MR_Word) mercury__psqueue__STATE_VARIABLE_PSQ_0_10)) == (MR_mktag((MR_Integer) 1)));
    MR_Word mercury__psqueue__Winner0_8;
    MR_Word mercury__psqueue__Winner_9;
    MR_Word mercury__psqueue__V_12_12;

    if (mercury__psqueue__succeeded)
      {
        mercury__psqueue__Winner0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__STATE_VARIABLE_PSQ_0_10, (MR_Integer) 0)));
        {
          mercury__psqueue__V_12_12 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_103_101_116_95_116_111_117_114_110_97_109_101_110_116_95_118_105_101_119_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_1_f_0(mercury__psqueue__TypeInfo_for_K_15, mercury__psqueue__Winner0_8);
        }
        {
          mercury__psqueue__succeeded = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_97_100_106_117_115_116_95_116_118_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mercury__psqueue__TypeInfo_for_K_15, mercury__psqueue__AdjustFunc_5, mercury__psqueue__SearchKey_6, mercury__psqueue__V_12_12, &mercury__psqueue__Winner_9);
        }
        if (mercury__psqueue__succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *mercury__psqueue__STATE_VARIABLE_PSQ_11 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__psqueue__Winner_9));
            }
            mercury__psqueue__succeeded = MR_TRUE;
          }
      }
    return mercury__psqueue__succeeded;
  }
}

MR_bool MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_3_p_0(
  MR_Word mercury__psqueue__TypeInfo_for_K_10,
  MR_Word mercury__psqueue__PSQ_4,
  MR_Box mercury__psqueue__SearchKey_5,
  MR_Integer * mercury__psqueue__MatchingPrio_6)
{
  {
    MR_bool mercury__psqueue__succeeded = ((MR_tag((MR_Word) mercury__psqueue__PSQ_4)) == (MR_mktag((MR_Integer) 1)));
    MR_Word mercury__psqueue__Winner_7;
    MR_Word mercury__psqueue__V_8_8;

    if (mercury__psqueue__succeeded)
      {
        mercury__psqueue__Winner_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_4, (MR_Integer) 0)));
        {
          mercury__psqueue__V_8_8 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_103_101_116_95_116_111_117_114_110_97_109_101_110_116_95_118_105_101_119_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_1_f_0(mercury__psqueue__TypeInfo_for_K_10, mercury__psqueue__Winner_7);
        }
        {
          mercury__psqueue__succeeded = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_116_118_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__psqueue__TypeInfo_for_K_10, mercury__psqueue__V_8_8, mercury__psqueue__SearchKey_5, mercury__psqueue__MatchingPrio_6);
        }
      }
    return mercury__psqueue__succeeded;
  }
}

MR_Integer MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_2_f_0(
  MR_Word mercury__psqueue__TypeInfo_for_K_8,
  MR_Word mercury__psqueue__PSQ_4,
  MR_Box mercury__psqueue__SearchKey_5)
{
  {
    MR_bool mercury__psqueue__succeeded;
    MR_Integer mercury__psqueue__MatchingPrio_6;

    {
      mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__psqueue__TypeInfo_for_K_8, mercury__psqueue__PSQ_4, mercury__psqueue__SearchKey_5, &mercury__psqueue__MatchingPrio_6);
    }
    return mercury__psqueue__MatchingPrio_6;
  }
}

void MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_3_p_0(
  MR_Word mercury__psqueue__TypeInfo_for_K_12,
  MR_Word mercury__psqueue__PSQ_4,
  MR_Box mercury__psqueue__SearchKey_5,
  MR_Integer * mercury__psqueue__MatchingPrio_6)
{
  {
    MR_bool mercury__psqueue__succeeded = ((MR_tag((MR_Word) mercury__psqueue__PSQ_4)) == (MR_mktag((MR_Integer) 1)));
    MR_Integer mercury__psqueue__MatchingPrioPrime_7;
    MR_Word mercury__psqueue__Winner_16;
    MR_Word mercury__psqueue__V_17_17;

    if (mercury__psqueue__succeeded)
      {
        mercury__psqueue__Winner_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_4, (MR_Integer) 0)));
        {
          mercury__psqueue__V_17_17 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_103_101_116_95_116_111_117_114_110_97_109_101_110_116_95_118_105_101_119_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_1_f_0(mercury__psqueue__TypeInfo_for_K_12, mercury__psqueue__Winner_16);
        }
        {
          mercury__psqueue__succeeded = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_116_118_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__psqueue__TypeInfo_for_K_12, mercury__psqueue__V_17_17, mercury__psqueue__SearchKey_5, &mercury__psqueue__MatchingPrioPrime_7);
        }
      }
    if (mercury__psqueue__succeeded)
      *mercury__psqueue__MatchingPrio_6 = mercury__psqueue__MatchingPrioPrime_7;
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "psqueue.m", (MR_String) "predicate \140psqueue.lookup\'/3", (MR_String) "key not found");
          return;
        }
      }
  }
}

MR_Word MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_97_116_95_109_111_115_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_2_f_0(
  MR_Word mercury__psqueue__TypeInfo_for_K_8,
  MR_Word mercury__psqueue__PSQ_4,
  MR_Integer mercury__psqueue__MaxPrio_5)
{
  {
    MR_bool mercury__psqueue__succeeded;
    MR_Word mercury__psqueue__AssocList_6;

    {
      mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_97_116_95_109_111_115_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__psqueue__TypeInfo_for_K_8, mercury__psqueue__PSQ_4, mercury__psqueue__MaxPrio_5, &mercury__psqueue__AssocList_6);
    }
    return mercury__psqueue__AssocList_6;
  }
}

void MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_97_116_95_109_111_115_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_3_p_0(
  MR_Word mercury__psqueue__TypeInfo_for_K_10,
  MR_Word mercury__psqueue__PSQ_4,
  MR_Integer mercury__psqueue__MaxPrio_5,
  MR_Word * mercury__psqueue__AssocList_6)
{
  {
    MR_bool mercury__psqueue__succeeded;
    MR_Word mercury__psqueue__TypeInfo_for_P_9 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;

    if ((mercury__psqueue__PSQ_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__psqueue__AssocList_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word mercury__psqueue__TypeCtorInfo_11_11;
        MR_Word mercury__psqueue__TypeInfo_12_12;
        MR_Word mercury__psqueue__Winner_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_4, (MR_Integer) 0)));
        MR_Word mercury__psqueue__Cord_8;
        MR_Word mercury__psqueue__conv0_AssocList_6;

        {
          mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_97_116_95_109_111_115_116_95_105_110_95_119_105_110_110_101_114_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__psqueue__TypeInfo_for_K_10, mercury__psqueue__Winner_7, mercury__psqueue__MaxPrio_5, &mercury__psqueue__Cord_8);
        }
        mercury__psqueue__TypeCtorInfo_11_11 = (MR_Word) &mercury__pair__pair__type_ctor_info_pair_2;
        {
          mercury__psqueue__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__psqueue__TypeInfo_12_12, 0) = ((MR_Box) (mercury__psqueue__TypeCtorInfo_11_11));
          MR_hl_field(MR_mktag(0), mercury__psqueue__TypeInfo_12_12, 1) = ((MR_Box) (mercury__psqueue__TypeInfo_for_P_9));
          MR_hl_field(MR_mktag(0), mercury__psqueue__TypeInfo_12_12, 2) = ((MR_Box) (mercury__psqueue__TypeInfo_for_K_10));
        }
        {
          mercury__psqueue__conv0_AssocList_6 = mercury__cord__list_1_f_0(mercury__psqueue__TypeInfo_12_12, (MR_Word) mercury__psqueue__Cord_8);
        }
        *mercury__psqueue__AssocList_6 = (MR_Word) mercury__psqueue__conv0_AssocList_6;
      }
  }
}

MR_Integer MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_105_122_101_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_1_f_0(
  MR_Word mercury__psqueue__TypeInfo_for_K_6,
  MR_Word mercury__psqueue__PSQ_3)
{
  {
    MR_bool mercury__psqueue__succeeded;
    MR_Integer mercury__psqueue__Size_4;

    {
      mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_105_122_101_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_2_p_0(mercury__psqueue__TypeInfo_for_K_6, mercury__psqueue__PSQ_3, &mercury__psqueue__Size_4);
    }
    return mercury__psqueue__Size_4;
  }
}

void MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_105_122_101_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_2_p_0(
  MR_Word mercury__psqueue__TypeInfo_for_K_13,
  MR_Word mercury__psqueue__PSQ_3,
  MR_Integer * mercury__psqueue__Size_4)
{
  {
    MR_bool mercury__psqueue__succeeded;

    if ((mercury__psqueue__PSQ_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__psqueue__Size_4 = (MR_Integer) 0;
    else
      {
        MR_Word mercury__psqueue__LTree_7;
        MR_Word mercury__psqueue__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_3, (MR_Integer) 0)));
        MR_Integer mercury__psqueue__V_11_11;
        MR_Integer mercury__psqueue__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__psqueue__V_9_9, (MR_Integer) 0)));
        MR_Box mercury__psqueue__V_6_6 = (MR_hl_field(MR_mktag(0), mercury__psqueue__V_9_9, (MR_Integer) 1));
        MR_Box mercury__psqueue__V_8_8;

        mercury__psqueue__LTree_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__psqueue__V_9_9, (MR_Integer) 2)));
        mercury__psqueue__V_8_8 = (MR_hl_field(MR_mktag(0), mercury__psqueue__V_9_9, (MR_Integer) 3));
        if ((mercury__psqueue__LTree_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          mercury__psqueue__V_11_11 = (MR_Integer) 0;
        else
          {
            MR_Integer mercury__psqueue__V_16_16;
            MR_Box mercury__psqueue__V_17_17;
            MR_Word mercury__psqueue__V_18_18;
            MR_Box mercury__psqueue__V_19_19;
            MR_Word mercury__psqueue__V_20_20;

            mercury__psqueue__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_7, (MR_Integer) 0)));
            mercury__psqueue__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_7, (MR_Integer) 1)));
            mercury__psqueue__V_17_17 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_7, (MR_Integer) 2));
            mercury__psqueue__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_7, (MR_Integer) 3)));
            mercury__psqueue__V_19_19 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_7, (MR_Integer) 4));
            mercury__psqueue__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_7, (MR_Integer) 5)));
          }
        *mercury__psqueue__Size_4 = ((MR_Integer) 1 + mercury__psqueue__V_11_11);
      }
  }
}

MR_Word MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_103_101_116_95_116_111_117_114_110_97_109_101_110_116_95_118_105_101_119_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_1_f_0(
  MR_Word mercury__psqueue__TypeInfo_for_K_24,
  MR_Word mercury__psqueue__Winner_3)
{
  {
    MR_bool mercury__psqueue__succeeded;
    MR_Word mercury__psqueue__TournamentView_4;
    MR_Integer mercury__psqueue__WinnerPrio_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__psqueue__Winner_3, (MR_Integer) 0)));
    MR_Box mercury__psqueue__WinnerKey_6 = (MR_hl_field(MR_mktag(0), mercury__psqueue__Winner_3, (MR_Integer) 1));
    MR_Word mercury__psqueue__LTree_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__psqueue__Winner_3, (MR_Integer) 2)));
    MR_Box mercury__psqueue__MaxKey_8 = (MR_hl_field(MR_mktag(0), mercury__psqueue__Winner_3, (MR_Integer) 3));

    if ((mercury__psqueue__LTree_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        mercury__psqueue__TournamentView_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), mercury__psqueue__TournamentView_4, 0) = ((MR_Box) (mercury__psqueue__WinnerPrio_5));
        MR_hl_field(MR_mktag(0), mercury__psqueue__TournamentView_4, 1) = mercury__psqueue__WinnerKey_6;
      }
    else
      {
        MR_Integer mercury__psqueue__LoserPrio_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_7, (MR_Integer) 1)));
        MR_Box mercury__psqueue__LoserKey_11 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_7, (MR_Integer) 2));
        MR_Word mercury__psqueue__SubLTreeL_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_7, (MR_Integer) 3)));
        MR_Box mercury__psqueue__SplitKey_13 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_7, (MR_Integer) 4));
        MR_Word mercury__psqueue__SubLTreeR_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_7, (MR_Integer) 5)));
        MR_Word mercury__psqueue__WinnerA_15;
        MR_Word mercury__psqueue__WinnerB_16;
        MR_Integer mercury__psqueue__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_7, (MR_Integer) 0)));
        MR_Word mercury__psqueue__CMP_27;

        {
          mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_24, &mercury__psqueue__CMP_27, mercury__psqueue__LoserKey_11, mercury__psqueue__SplitKey_13);
        }
        switch (mercury__psqueue__CMP_27) {
          default:
            mercury__psqueue__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 1:
            mercury__psqueue__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 0:
            mercury__psqueue__succeeded = MR_TRUE;
            break;
        }
        if (mercury__psqueue__succeeded)
          {
            {
              mercury__psqueue__WinnerA_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_15, 0) = ((MR_Box) (mercury__psqueue__LoserPrio_10));
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_15, 1) = mercury__psqueue__LoserKey_11;
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_15, 2) = ((MR_Box) (mercury__psqueue__SubLTreeL_12));
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_15, 3) = mercury__psqueue__SplitKey_13;
            }
            {
              mercury__psqueue__WinnerB_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_16, 0) = ((MR_Box) (mercury__psqueue__WinnerPrio_5));
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_16, 1) = mercury__psqueue__WinnerKey_6;
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_16, 2) = ((MR_Box) (mercury__psqueue__SubLTreeR_14));
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_16, 3) = mercury__psqueue__MaxKey_8;
            }
          }
        else
          {
            {
              mercury__psqueue__WinnerA_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_15, 0) = ((MR_Box) (mercury__psqueue__WinnerPrio_5));
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_15, 1) = mercury__psqueue__WinnerKey_6;
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_15, 2) = ((MR_Box) (mercury__psqueue__SubLTreeL_12));
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_15, 3) = mercury__psqueue__SplitKey_13;
            }
            {
              mercury__psqueue__WinnerB_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_16, 0) = ((MR_Box) (mercury__psqueue__LoserPrio_10));
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_16, 1) = mercury__psqueue__LoserKey_11;
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_16, 2) = ((MR_Box) (mercury__psqueue__SubLTreeR_14));
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_16, 3) = mercury__psqueue__MaxKey_8;
            }
          }
        {
          mercury__psqueue__TournamentView_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__psqueue__TournamentView_4, 0) = ((MR_Box) (mercury__psqueue__WinnerA_15));
          MR_hl_field(MR_mktag(1), mercury__psqueue__TournamentView_4, 1) = ((MR_Box) (mercury__psqueue__WinnerB_16));
        }
      }
    return mercury__psqueue__TournamentView_4;
  }
}

void MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_109_98_105_110_101_95_119_105_110_110_101_114_115_95_118_105_97_95_116_111_117_114_110_97_109_101_110_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_3_p_0(
  MR_Word mercury__psqueue__TypeInfo_for_K_18,
  MR_Word mercury__psqueue__WinnerA_4,
  MR_Word mercury__psqueue__WinnerB_5,
  MR_Word * mercury__psqueue__CombinedWinner_6)
{
  {
    MR_bool mercury__psqueue__succeeded;
    MR_Integer mercury__psqueue__PrioA_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_4, (MR_Integer) 0)));
    MR_Box mercury__psqueue__KeyA_8 = (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_4, (MR_Integer) 1));
    MR_Word mercury__psqueue__LTreeA_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_4, (MR_Integer) 2)));
    MR_Box mercury__psqueue__MaxKeyA_10 = (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_4, (MR_Integer) 3));
    MR_Integer mercury__psqueue__PrioB_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_5, (MR_Integer) 0)));
    MR_Box mercury__psqueue__KeyB_12 = (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_5, (MR_Integer) 1));
    MR_Word mercury__psqueue__LTreeB_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_5, (MR_Integer) 2)));
    MR_Box mercury__psqueue__MaxKeyB_14 = (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_5, (MR_Integer) 3));

    {
      mercury__psqueue__succeeded = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_101_113_95_95_91_86_32_61_32_105_110_116_93_95_48_95_49_2_p_0(mercury__psqueue__PrioA_7, mercury__psqueue__PrioB_11);
    }
    if (mercury__psqueue__succeeded)
      {
        MR_Word mercury__psqueue__LTree_15;

        {
          mercury__psqueue__LTree_15 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_98_97_108_97_110_99_101_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_5_f_0(mercury__psqueue__TypeInfo_for_K_18, mercury__psqueue__PrioB_11, mercury__psqueue__KeyB_12, mercury__psqueue__LTreeA_9, mercury__psqueue__MaxKeyA_10, mercury__psqueue__LTreeB_13);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          *mercury__psqueue__CombinedWinner_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__psqueue__PrioA_7));
          MR_hl_field(MR_mktag(0), base, 1) = mercury__psqueue__KeyA_8;
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__psqueue__LTree_15));
          MR_hl_field(MR_mktag(0), base, 3) = mercury__psqueue__MaxKeyB_14;
        }
      }
    else
      {
        MR_Word mercury__psqueue__LTree_16;

        {
          mercury__psqueue__LTree_16 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_98_97_108_97_110_99_101_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_5_f_0(mercury__psqueue__TypeInfo_for_K_18, mercury__psqueue__PrioA_7, mercury__psqueue__KeyA_8, mercury__psqueue__LTreeA_9, mercury__psqueue__MaxKeyA_10, mercury__psqueue__LTreeB_13);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          *mercury__psqueue__CombinedWinner_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__psqueue__PrioB_11));
          MR_hl_field(MR_mktag(0), base, 1) = mercury__psqueue__KeyB_12;
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__psqueue__LTree_16));
          MR_hl_field(MR_mktag(0), base, 3) = mercury__psqueue__MaxKeyB_14;
        }
      }
  }
}

static MR_Word MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_98_97_108_97_110_99_101_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_5_f_0(
  MR_Word mercury__psqueue__TypeInfo_for_K_24,
  MR_Integer mercury__psqueue__Prio_7,
  MR_Box mercury__psqueue__Key_8,
  MR_Word mercury__psqueue__LTreeL_9,
  MR_Box mercury__psqueue__SplitKey_10,
  MR_Word mercury__psqueue__LTreeR_11)
{
  {
    MR_bool mercury__psqueue__succeeded;
    MR_Word mercury__psqueue__LTree_12;
    MR_Integer mercury__psqueue__SizeL_13;
    MR_Integer mercury__psqueue__SizeR_14;
    MR_Integer mercury__psqueue__V_17_17;

    if ((mercury__psqueue__LTreeL_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__psqueue__SizeL_13 = (MR_Integer) 0;
    else
      {
        MR_Integer mercury__psqueue__V_29_29;
        MR_Box mercury__psqueue__V_30_30;
        MR_Word mercury__psqueue__V_31_31;
        MR_Box mercury__psqueue__V_32_32;
        MR_Word mercury__psqueue__V_33_33;

        mercury__psqueue__SizeL_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 0)));
        mercury__psqueue__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 1)));
        mercury__psqueue__V_30_30 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 2));
        mercury__psqueue__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 3)));
        mercury__psqueue__V_32_32 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 4));
        mercury__psqueue__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 5)));
      }
    if ((mercury__psqueue__LTreeR_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__psqueue__SizeR_14 = (MR_Integer) 0;
    else
      {
        MR_Integer mercury__psqueue__V_36_36;
        MR_Box mercury__psqueue__V_37_37;
        MR_Word mercury__psqueue__V_38_38;
        MR_Box mercury__psqueue__V_39_39;
        MR_Word mercury__psqueue__V_40_40;

        mercury__psqueue__SizeR_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 0)));
        mercury__psqueue__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 1)));
        mercury__psqueue__V_37_37 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 2));
        mercury__psqueue__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 3)));
        mercury__psqueue__V_39_39 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 4));
        mercury__psqueue__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 5)));
      }
    mercury__psqueue__V_17_17 = (mercury__psqueue__SizeR_14 + mercury__psqueue__SizeL_13);
    mercury__psqueue__succeeded = (mercury__psqueue__V_17_17 < (MR_Integer) 2);
    if (mercury__psqueue__succeeded)
      {
        MR_Integer mercury__psqueue__Size_47;
        MR_Integer mercury__psqueue__V_48_48;
        MR_Integer mercury__psqueue__V_50_50;
        MR_Integer mercury__psqueue__V_51_51;

        if ((mercury__psqueue__LTreeL_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          mercury__psqueue__V_50_50 = (MR_Integer) 0;
        else
          {
            MR_Integer mercury__psqueue__V_54_54;
            MR_Box mercury__psqueue__V_55_55;
            MR_Word mercury__psqueue__V_56_56;
            MR_Box mercury__psqueue__V_57_57;
            MR_Word mercury__psqueue__V_58_58;

            mercury__psqueue__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 0)));
            mercury__psqueue__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 1)));
            mercury__psqueue__V_55_55 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 2));
            mercury__psqueue__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 3)));
            mercury__psqueue__V_57_57 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 4));
            mercury__psqueue__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 5)));
          }
        mercury__psqueue__V_48_48 = ((MR_Integer) 1 + mercury__psqueue__V_50_50);
        if ((mercury__psqueue__LTreeR_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          mercury__psqueue__V_51_51 = (MR_Integer) 0;
        else
          {
            MR_Integer mercury__psqueue__V_61_61;
            MR_Box mercury__psqueue__V_62_62;
            MR_Word mercury__psqueue__V_63_63;
            MR_Box mercury__psqueue__V_64_64;
            MR_Word mercury__psqueue__V_65_65;

            mercury__psqueue__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 0)));
            mercury__psqueue__V_61_61 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 1)));
            mercury__psqueue__V_62_62 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 2));
            mercury__psqueue__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 3)));
            mercury__psqueue__V_64_64 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 4));
            mercury__psqueue__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 5)));
          }
        mercury__psqueue__Size_47 = (mercury__psqueue__V_48_48 + mercury__psqueue__V_51_51);
        {
          mercury__psqueue__LTree_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 0) = ((MR_Box) (mercury__psqueue__Size_47));
          MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 1) = ((MR_Box) (mercury__psqueue__Prio_7));
          MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 2) = mercury__psqueue__Key_8;
          MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 3) = ((MR_Box) (mercury__psqueue__LTreeL_9));
          MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 4) = mercury__psqueue__SplitKey_10;
          MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 5) = ((MR_Box) (mercury__psqueue__LTreeR_11));
        }
      }
    else
      {
        MR_Word mercury__psqueue__CMPL_15;
        MR_Integer mercury__psqueue__V_19_19 = ((MR_Integer) 4 * mercury__psqueue__SizeL_13);

        mercury__psqueue__succeeded = (mercury__psqueue__SizeR_14 < mercury__psqueue__V_19_19);
        if (mercury__psqueue__succeeded)
          mercury__psqueue__CMPL_15 = (MR_Integer) 1;
        else
          {
            mercury__psqueue__succeeded = (mercury__psqueue__SizeR_14 == mercury__psqueue__V_19_19);
            if (mercury__psqueue__succeeded)
              mercury__psqueue__CMPL_15 = (MR_Integer) 0;
            else
              mercury__psqueue__CMPL_15 = (MR_Integer) 2;
          }
        mercury__psqueue__succeeded = (mercury__psqueue__CMPL_15 == (MR_Integer) 2);
        if (mercury__psqueue__succeeded)
          {
            mercury__psqueue__LTree_12 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_98_97_108_97_110_99_101_95_108_101_102_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_5_f_0(mercury__psqueue__TypeInfo_for_K_24, mercury__psqueue__Prio_7, mercury__psqueue__Key_8, mercury__psqueue__LTreeL_9, mercury__psqueue__SplitKey_10, mercury__psqueue__LTreeR_11);
          }
        else
          {
            MR_Word mercury__psqueue__CMPR_16;
            MR_Integer mercury__psqueue__V_21_21 = ((MR_Integer) 4 * mercury__psqueue__SizeR_14);

            mercury__psqueue__succeeded = (mercury__psqueue__SizeL_13 < mercury__psqueue__V_21_21);
            if (mercury__psqueue__succeeded)
              mercury__psqueue__CMPR_16 = (MR_Integer) 1;
            else
              {
                mercury__psqueue__succeeded = (mercury__psqueue__SizeL_13 == mercury__psqueue__V_21_21);
                if (mercury__psqueue__succeeded)
                  mercury__psqueue__CMPR_16 = (MR_Integer) 0;
                else
                  mercury__psqueue__CMPR_16 = (MR_Integer) 2;
              }
            mercury__psqueue__succeeded = (mercury__psqueue__CMPR_16 == (MR_Integer) 2);
            if (mercury__psqueue__succeeded)
              {
                mercury__psqueue__LTree_12 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_98_97_108_97_110_99_101_95_114_105_103_104_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_5_f_0(mercury__psqueue__TypeInfo_for_K_24, mercury__psqueue__Prio_7, mercury__psqueue__Key_8, mercury__psqueue__LTreeL_9, mercury__psqueue__SplitKey_10, mercury__psqueue__LTreeR_11);
              }
            else
              {
                MR_Integer mercury__psqueue__Size_78;
                MR_Integer mercury__psqueue__V_79_79;
                MR_Integer mercury__psqueue__V_81_81;
                MR_Integer mercury__psqueue__V_82_82;

                if ((mercury__psqueue__LTreeL_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  mercury__psqueue__V_81_81 = (MR_Integer) 0;
                else
                  {
                    MR_Integer mercury__psqueue__V_85_85;
                    MR_Box mercury__psqueue__V_86_86;
                    MR_Word mercury__psqueue__V_87_87;
                    MR_Box mercury__psqueue__V_88_88;
                    MR_Word mercury__psqueue__V_89_89;

                    mercury__psqueue__V_81_81 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 0)));
                    mercury__psqueue__V_85_85 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 1)));
                    mercury__psqueue__V_86_86 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 2));
                    mercury__psqueue__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 3)));
                    mercury__psqueue__V_88_88 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 4));
                    mercury__psqueue__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 5)));
                  }
                mercury__psqueue__V_79_79 = ((MR_Integer) 1 + mercury__psqueue__V_81_81);
                if ((mercury__psqueue__LTreeR_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  mercury__psqueue__V_82_82 = (MR_Integer) 0;
                else
                  {
                    MR_Integer mercury__psqueue__V_92_92;
                    MR_Box mercury__psqueue__V_93_93;
                    MR_Word mercury__psqueue__V_94_94;
                    MR_Box mercury__psqueue__V_95_95;
                    MR_Word mercury__psqueue__V_96_96;

                    mercury__psqueue__V_82_82 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 0)));
                    mercury__psqueue__V_92_92 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 1)));
                    mercury__psqueue__V_93_93 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 2));
                    mercury__psqueue__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 3)));
                    mercury__psqueue__V_95_95 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 4));
                    mercury__psqueue__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 5)));
                  }
                mercury__psqueue__Size_78 = (mercury__psqueue__V_79_79 + mercury__psqueue__V_82_82);
                {
                  mercury__psqueue__LTree_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 0) = ((MR_Box) (mercury__psqueue__Size_78));
                  MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 1) = ((MR_Box) (mercury__psqueue__Prio_7));
                  MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 2) = mercury__psqueue__Key_8;
                  MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 3) = ((MR_Box) (mercury__psqueue__LTreeL_9));
                  MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 4) = mercury__psqueue__SplitKey_10;
                  MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 5) = ((MR_Box) (mercury__psqueue__LTreeR_11));
                }
              }
          }
      }
    return mercury__psqueue__LTree_12;
  }
}

static MR_Word MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_98_97_108_97_110_99_101_95_108_101_102_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_5_f_0(
  MR_Word mercury__psqueue__TypeInfo_for_K_26,
  MR_Integer mercury__psqueue__Prio_7,
  MR_Box mercury__psqueue__Key_8,
  MR_Word mercury__psqueue__LTreeL_9,
  MR_Box mercury__psqueue__SplitKey_10,
  MR_Word mercury__psqueue__LTreeR_11)
{
  {
    MR_bool mercury__psqueue__succeeded;
    MR_Word mercury__psqueue__LTree_12;

    if ((mercury__psqueue__LTreeR_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "psqueue.m", (MR_String) "function \140psqueue.balance_left\'/5", (MR_String) "heavier tree is a leaf");
        }
      }
    else
      {
        MR_Word mercury__psqueue__SubLTreeRL_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 3)));
        MR_Word mercury__psqueue__SubLTreeRR_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 5)));
        MR_Word mercury__psqueue__CMP_19;
        MR_Integer mercury__psqueue__V_23_23;
        MR_Integer mercury__psqueue__V_24_24;
        MR_Integer mercury__psqueue__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 0)));
        MR_Integer mercury__psqueue__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 1)));
        MR_Box mercury__psqueue__V_15_15 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 2));
        MR_Box mercury__psqueue__V_17_17 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 4));

        if ((mercury__psqueue__SubLTreeRL_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          mercury__psqueue__V_23_23 = (MR_Integer) 0;
        else
          {
            MR_Integer mercury__psqueue__V_30_30;
            MR_Box mercury__psqueue__V_31_31;
            MR_Word mercury__psqueue__V_32_32;
            MR_Box mercury__psqueue__V_33_33;
            MR_Word mercury__psqueue__V_34_34;

            mercury__psqueue__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeRL_16, (MR_Integer) 0)));
            mercury__psqueue__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeRL_16, (MR_Integer) 1)));
            mercury__psqueue__V_31_31 = (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeRL_16, (MR_Integer) 2));
            mercury__psqueue__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeRL_16, (MR_Integer) 3)));
            mercury__psqueue__V_33_33 = (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeRL_16, (MR_Integer) 4));
            mercury__psqueue__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeRL_16, (MR_Integer) 5)));
          }
        if ((mercury__psqueue__SubLTreeRR_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          mercury__psqueue__V_24_24 = (MR_Integer) 0;
        else
          {
            MR_Integer mercury__psqueue__V_37_37;
            MR_Box mercury__psqueue__V_38_38;
            MR_Word mercury__psqueue__V_39_39;
            MR_Box mercury__psqueue__V_40_40;
            MR_Word mercury__psqueue__V_41_41;

            mercury__psqueue__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeRR_18, (MR_Integer) 0)));
            mercury__psqueue__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeRR_18, (MR_Integer) 1)));
            mercury__psqueue__V_38_38 = (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeRR_18, (MR_Integer) 2));
            mercury__psqueue__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeRR_18, (MR_Integer) 3)));
            mercury__psqueue__V_40_40 = (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeRR_18, (MR_Integer) 4));
            mercury__psqueue__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeRR_18, (MR_Integer) 5)));
          }
        mercury__psqueue__succeeded = (mercury__psqueue__V_23_23 < mercury__psqueue__V_24_24);
        if (mercury__psqueue__succeeded)
          mercury__psqueue__CMP_19 = (MR_Integer) 1;
        else
          {
            mercury__psqueue__succeeded = (mercury__psqueue__V_23_23 == mercury__psqueue__V_24_24);
            if (mercury__psqueue__succeeded)
              mercury__psqueue__CMP_19 = (MR_Integer) 0;
            else
              mercury__psqueue__CMP_19 = (MR_Integer) 2;
          }
        mercury__psqueue__succeeded = (mercury__psqueue__CMP_19 == (MR_Integer) 1);
        if (mercury__psqueue__succeeded)
          {
            mercury__psqueue__LTree_12 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_105_110_103_108_101_95_108_101_102_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_5_f_0(mercury__psqueue__TypeInfo_for_K_26, mercury__psqueue__Prio_7, mercury__psqueue__Key_8, mercury__psqueue__LTreeL_9, mercury__psqueue__SplitKey_10, mercury__psqueue__LTreeR_11);
          }
        else
          {
            MR_Integer mercury__psqueue__LoserPrio_52 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 1)));
            MR_Box mercury__psqueue__LoserKey_53 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 2));
            MR_Word mercury__psqueue__LTreeB_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 3)));
            MR_Box mercury__psqueue__SplitKeyBC_55 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 4));
            MR_Word mercury__psqueue__LTreeC_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 5)));
            MR_Word mercury__psqueue__V_60_60;
            MR_Integer mercury__psqueue__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 0)));

            {
              mercury__psqueue__V_60_60 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_105_110_103_108_101_95_114_105_103_104_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_5_f_0(mercury__psqueue__TypeInfo_for_K_26, mercury__psqueue__LoserPrio_52, mercury__psqueue__LoserKey_53, mercury__psqueue__LTreeB_54, mercury__psqueue__SplitKeyBC_55, mercury__psqueue__LTreeC_56);
            }
            {
              mercury__psqueue__LTree_12 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_105_110_103_108_101_95_108_101_102_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_5_f_0(mercury__psqueue__TypeInfo_for_K_26, mercury__psqueue__Prio_7, mercury__psqueue__Key_8, mercury__psqueue__LTreeL_9, mercury__psqueue__SplitKey_10, mercury__psqueue__V_60_60);
            }
          }
      }
    return mercury__psqueue__LTree_12;
  }
}

static MR_Word MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_98_97_108_97_110_99_101_95_114_105_103_104_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_5_f_0(
  MR_Word mercury__psqueue__TypeInfo_for_K_26,
  MR_Integer mercury__psqueue__Prio_7,
  MR_Box mercury__psqueue__Key_8,
  MR_Word mercury__psqueue__LTreeL_9,
  MR_Box mercury__psqueue__SplitKey_10,
  MR_Word mercury__psqueue__LTreeR_11)
{
  {
    MR_bool mercury__psqueue__succeeded;
    MR_Word mercury__psqueue__LTree_12;

    if ((mercury__psqueue__LTreeL_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "psqueue.m", (MR_String) "function \140psqueue.balance_right\'/5", (MR_String) "heavier tree is a leaf");
        }
      }
    else
      {
        MR_Word mercury__psqueue__SubLTreeLL_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 3)));
        MR_Word mercury__psqueue__SubLTreeLR_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 5)));
        MR_Word mercury__psqueue__CMP_19;
        MR_Integer mercury__psqueue__V_23_23;
        MR_Integer mercury__psqueue__V_24_24;
        MR_Integer mercury__psqueue__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 0)));
        MR_Integer mercury__psqueue__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 1)));
        MR_Box mercury__psqueue__V_15_15 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 2));
        MR_Box mercury__psqueue__V_17_17 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 4));

        if ((mercury__psqueue__SubLTreeLR_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          mercury__psqueue__V_23_23 = (MR_Integer) 0;
        else
          {
            MR_Integer mercury__psqueue__V_30_30;
            MR_Box mercury__psqueue__V_31_31;
            MR_Word mercury__psqueue__V_32_32;
            MR_Box mercury__psqueue__V_33_33;
            MR_Word mercury__psqueue__V_34_34;

            mercury__psqueue__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeLR_18, (MR_Integer) 0)));
            mercury__psqueue__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeLR_18, (MR_Integer) 1)));
            mercury__psqueue__V_31_31 = (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeLR_18, (MR_Integer) 2));
            mercury__psqueue__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeLR_18, (MR_Integer) 3)));
            mercury__psqueue__V_33_33 = (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeLR_18, (MR_Integer) 4));
            mercury__psqueue__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeLR_18, (MR_Integer) 5)));
          }
        if ((mercury__psqueue__SubLTreeLL_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          mercury__psqueue__V_24_24 = (MR_Integer) 0;
        else
          {
            MR_Integer mercury__psqueue__V_37_37;
            MR_Box mercury__psqueue__V_38_38;
            MR_Word mercury__psqueue__V_39_39;
            MR_Box mercury__psqueue__V_40_40;
            MR_Word mercury__psqueue__V_41_41;

            mercury__psqueue__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeLL_16, (MR_Integer) 0)));
            mercury__psqueue__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeLL_16, (MR_Integer) 1)));
            mercury__psqueue__V_38_38 = (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeLL_16, (MR_Integer) 2));
            mercury__psqueue__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeLL_16, (MR_Integer) 3)));
            mercury__psqueue__V_40_40 = (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeLL_16, (MR_Integer) 4));
            mercury__psqueue__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeLL_16, (MR_Integer) 5)));
          }
        mercury__psqueue__succeeded = (mercury__psqueue__V_23_23 < mercury__psqueue__V_24_24);
        if (mercury__psqueue__succeeded)
          mercury__psqueue__CMP_19 = (MR_Integer) 1;
        else
          {
            mercury__psqueue__succeeded = (mercury__psqueue__V_23_23 == mercury__psqueue__V_24_24);
            if (mercury__psqueue__succeeded)
              mercury__psqueue__CMP_19 = (MR_Integer) 0;
            else
              mercury__psqueue__CMP_19 = (MR_Integer) 2;
          }
        mercury__psqueue__succeeded = (mercury__psqueue__CMP_19 == (MR_Integer) 1);
        if (mercury__psqueue__succeeded)
          {
            mercury__psqueue__LTree_12 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_105_110_103_108_101_95_114_105_103_104_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_5_f_0(mercury__psqueue__TypeInfo_for_K_26, mercury__psqueue__Prio_7, mercury__psqueue__Key_8, mercury__psqueue__LTreeL_9, mercury__psqueue__SplitKey_10, mercury__psqueue__LTreeR_11);
          }
        else
          {
            MR_Integer mercury__psqueue__LoserPrio_52 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 1)));
            MR_Box mercury__psqueue__LoserKey_53 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 2));
            MR_Word mercury__psqueue__LTreeA_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 3)));
            MR_Box mercury__psqueue__SplitKeyAB_55 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 4));
            MR_Word mercury__psqueue__LTreeB_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 5)));
            MR_Word mercury__psqueue__V_60_60;
            MR_Integer mercury__psqueue__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 0)));

            {
              mercury__psqueue__V_60_60 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_105_110_103_108_101_95_108_101_102_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_5_f_0(mercury__psqueue__TypeInfo_for_K_26, mercury__psqueue__LoserPrio_52, mercury__psqueue__LoserKey_53, mercury__psqueue__LTreeA_54, mercury__psqueue__SplitKeyAB_55, mercury__psqueue__LTreeB_56);
            }
            {
              mercury__psqueue__LTree_12 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_105_110_103_108_101_95_114_105_103_104_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_5_f_0(mercury__psqueue__TypeInfo_for_K_26, mercury__psqueue__Prio_7, mercury__psqueue__Key_8, mercury__psqueue__V_60_60, mercury__psqueue__SplitKey_10, mercury__psqueue__LTreeR_11);
            }
          }
      }
    return mercury__psqueue__LTree_12;
  }
}

static MR_Word MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_105_110_103_108_101_95_108_101_102_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_5_f_0(
  MR_Word mercury__psqueue__TypeInfo_for_K_25,
  MR_Integer mercury__psqueue__InsertPrio_7,
  MR_Box mercury__psqueue__InsertKey_8,
  MR_Word mercury__psqueue__LTreeA_9,
  MR_Box mercury__psqueue__SplitKeyAB_10,
  MR_Word mercury__psqueue__LTreeBC_11)
{
  {
    MR_bool mercury__psqueue__succeeded;
    MR_Word mercury__psqueue__LTree_12;

    if ((mercury__psqueue__LTreeBC_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "psqueue.m", (MR_String) "function \140psqueue.single_left\'/5", (MR_String) "heavier tree is a leaf");
        }
      }
    else
      {
        MR_Integer mercury__psqueue__LoserPrio_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeBC_11, (MR_Integer) 1)));
        MR_Box mercury__psqueue__LoserKey_15 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeBC_11, (MR_Integer) 2));
        MR_Word mercury__psqueue__LTreeB_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeBC_11, (MR_Integer) 3)));
        MR_Box mercury__psqueue__SplitKeyBC_17 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeBC_11, (MR_Integer) 4));
        MR_Word mercury__psqueue__LTreeC_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeBC_11, (MR_Integer) 5)));
        MR_Integer mercury__psqueue__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeBC_11, (MR_Integer) 0)));
        MR_Word mercury__psqueue__CMP_28;

        {
          mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_25, &mercury__psqueue__CMP_28, mercury__psqueue__LoserKey_15, mercury__psqueue__SplitKeyBC_17);
        }
        switch (mercury__psqueue__CMP_28) {
          default:
            mercury__psqueue__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 1:
            mercury__psqueue__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 0:
            mercury__psqueue__succeeded = MR_TRUE;
            break;
        }
        if (mercury__psqueue__succeeded)
          {
            mercury__psqueue__succeeded = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_101_113_95_95_91_86_32_61_32_105_110_116_93_95_48_95_49_2_p_0(mercury__psqueue__InsertPrio_7, mercury__psqueue__LoserPrio_14);
          }
        if (mercury__psqueue__succeeded)
          {
            MR_Word mercury__psqueue__V_22_22;
            MR_Integer mercury__psqueue__Size_35;
            MR_Integer mercury__psqueue__V_36_36;
            MR_Integer mercury__psqueue__V_38_38;
            MR_Integer mercury__psqueue__V_39_39;
            MR_Integer mercury__psqueue__Size_60;
            MR_Integer mercury__psqueue__V_61_61;
            MR_Integer mercury__psqueue__V_64_64;

            if ((mercury__psqueue__LTreeA_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              mercury__psqueue__V_38_38 = (MR_Integer) 0;
            else
              {
                MR_Integer mercury__psqueue__V_42_42;
                MR_Box mercury__psqueue__V_43_43;
                MR_Word mercury__psqueue__V_44_44;
                MR_Box mercury__psqueue__V_45_45;
                MR_Word mercury__psqueue__V_46_46;

                mercury__psqueue__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_9, (MR_Integer) 0)));
                mercury__psqueue__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_9, (MR_Integer) 1)));
                mercury__psqueue__V_43_43 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_9, (MR_Integer) 2));
                mercury__psqueue__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_9, (MR_Integer) 3)));
                mercury__psqueue__V_45_45 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_9, (MR_Integer) 4));
                mercury__psqueue__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_9, (MR_Integer) 5)));
              }
            mercury__psqueue__V_36_36 = ((MR_Integer) 1 + mercury__psqueue__V_38_38);
            if ((mercury__psqueue__LTreeB_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              mercury__psqueue__V_39_39 = (MR_Integer) 0;
            else
              {
                MR_Integer mercury__psqueue__V_49_49;
                MR_Box mercury__psqueue__V_50_50;
                MR_Word mercury__psqueue__V_51_51;
                MR_Box mercury__psqueue__V_52_52;
                MR_Word mercury__psqueue__V_53_53;

                mercury__psqueue__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_16, (MR_Integer) 0)));
                mercury__psqueue__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_16, (MR_Integer) 1)));
                mercury__psqueue__V_50_50 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_16, (MR_Integer) 2));
                mercury__psqueue__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_16, (MR_Integer) 3)));
                mercury__psqueue__V_52_52 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_16, (MR_Integer) 4));
                mercury__psqueue__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_16, (MR_Integer) 5)));
              }
            mercury__psqueue__Size_35 = (mercury__psqueue__V_36_36 + mercury__psqueue__V_39_39);
            {
              mercury__psqueue__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_22_22, 0) = ((MR_Box) (mercury__psqueue__Size_35));
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_22_22, 1) = ((MR_Box) (mercury__psqueue__LoserPrio_14));
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_22_22, 2) = mercury__psqueue__LoserKey_15;
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_22_22, 3) = ((MR_Box) (mercury__psqueue__LTreeA_9));
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_22_22, 4) = mercury__psqueue__SplitKeyAB_10;
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_22_22, 5) = ((MR_Box) (mercury__psqueue__LTreeB_16));
            }
            mercury__psqueue__V_61_61 = ((MR_Integer) 1 + mercury__psqueue__Size_35);
            if ((mercury__psqueue__LTreeC_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              mercury__psqueue__V_64_64 = (MR_Integer) 0;
            else
              {
                MR_Integer mercury__psqueue__V_74_74;
                MR_Box mercury__psqueue__V_75_75;
                MR_Word mercury__psqueue__V_76_76;
                MR_Box mercury__psqueue__V_77_77;
                MR_Word mercury__psqueue__V_78_78;

                mercury__psqueue__V_64_64 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_18, (MR_Integer) 0)));
                mercury__psqueue__V_74_74 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_18, (MR_Integer) 1)));
                mercury__psqueue__V_75_75 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_18, (MR_Integer) 2));
                mercury__psqueue__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_18, (MR_Integer) 3)));
                mercury__psqueue__V_77_77 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_18, (MR_Integer) 4));
                mercury__psqueue__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_18, (MR_Integer) 5)));
              }
            mercury__psqueue__Size_60 = (mercury__psqueue__V_61_61 + mercury__psqueue__V_64_64);
            {
              mercury__psqueue__LTree_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 0) = ((MR_Box) (mercury__psqueue__Size_60));
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 1) = ((MR_Box) (mercury__psqueue__InsertPrio_7));
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 2) = mercury__psqueue__InsertKey_8;
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 3) = ((MR_Box) (mercury__psqueue__V_22_22));
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 4) = mercury__psqueue__SplitKeyBC_17;
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 5) = ((MR_Box) (mercury__psqueue__LTreeC_18));
            }
          }
        else
          {
            MR_Word mercury__psqueue__V_23_23;
            MR_Integer mercury__psqueue__Size_85;
            MR_Integer mercury__psqueue__V_86_86;
            MR_Integer mercury__psqueue__V_88_88;
            MR_Integer mercury__psqueue__V_89_89;
            MR_Integer mercury__psqueue__Size_110;
            MR_Integer mercury__psqueue__V_111_111;
            MR_Integer mercury__psqueue__V_114_114;

            if ((mercury__psqueue__LTreeA_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              mercury__psqueue__V_88_88 = (MR_Integer) 0;
            else
              {
                MR_Integer mercury__psqueue__V_92_92;
                MR_Box mercury__psqueue__V_93_93;
                MR_Word mercury__psqueue__V_94_94;
                MR_Box mercury__psqueue__V_95_95;
                MR_Word mercury__psqueue__V_96_96;

                mercury__psqueue__V_88_88 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_9, (MR_Integer) 0)));
                mercury__psqueue__V_92_92 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_9, (MR_Integer) 1)));
                mercury__psqueue__V_93_93 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_9, (MR_Integer) 2));
                mercury__psqueue__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_9, (MR_Integer) 3)));
                mercury__psqueue__V_95_95 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_9, (MR_Integer) 4));
                mercury__psqueue__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_9, (MR_Integer) 5)));
              }
            mercury__psqueue__V_86_86 = ((MR_Integer) 1 + mercury__psqueue__V_88_88);
            if ((mercury__psqueue__LTreeB_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              mercury__psqueue__V_89_89 = (MR_Integer) 0;
            else
              {
                MR_Integer mercury__psqueue__V_99_99;
                MR_Box mercury__psqueue__V_100_100;
                MR_Word mercury__psqueue__V_101_101;
                MR_Box mercury__psqueue__V_102_102;
                MR_Word mercury__psqueue__V_103_103;

                mercury__psqueue__V_89_89 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_16, (MR_Integer) 0)));
                mercury__psqueue__V_99_99 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_16, (MR_Integer) 1)));
                mercury__psqueue__V_100_100 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_16, (MR_Integer) 2));
                mercury__psqueue__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_16, (MR_Integer) 3)));
                mercury__psqueue__V_102_102 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_16, (MR_Integer) 4));
                mercury__psqueue__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_16, (MR_Integer) 5)));
              }
            mercury__psqueue__Size_85 = (mercury__psqueue__V_86_86 + mercury__psqueue__V_89_89);
            {
              mercury__psqueue__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_23_23, 0) = ((MR_Box) (mercury__psqueue__Size_85));
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_23_23, 1) = ((MR_Box) (mercury__psqueue__InsertPrio_7));
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_23_23, 2) = mercury__psqueue__InsertKey_8;
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_23_23, 3) = ((MR_Box) (mercury__psqueue__LTreeA_9));
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_23_23, 4) = mercury__psqueue__SplitKeyAB_10;
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_23_23, 5) = ((MR_Box) (mercury__psqueue__LTreeB_16));
            }
            mercury__psqueue__V_111_111 = ((MR_Integer) 1 + mercury__psqueue__Size_85);
            if ((mercury__psqueue__LTreeC_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              mercury__psqueue__V_114_114 = (MR_Integer) 0;
            else
              {
                MR_Integer mercury__psqueue__V_124_124;
                MR_Box mercury__psqueue__V_125_125;
                MR_Word mercury__psqueue__V_126_126;
                MR_Box mercury__psqueue__V_127_127;
                MR_Word mercury__psqueue__V_128_128;

                mercury__psqueue__V_114_114 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_18, (MR_Integer) 0)));
                mercury__psqueue__V_124_124 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_18, (MR_Integer) 1)));
                mercury__psqueue__V_125_125 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_18, (MR_Integer) 2));
                mercury__psqueue__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_18, (MR_Integer) 3)));
                mercury__psqueue__V_127_127 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_18, (MR_Integer) 4));
                mercury__psqueue__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_18, (MR_Integer) 5)));
              }
            mercury__psqueue__Size_110 = (mercury__psqueue__V_111_111 + mercury__psqueue__V_114_114);
            {
              mercury__psqueue__LTree_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 0) = ((MR_Box) (mercury__psqueue__Size_110));
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 1) = ((MR_Box) (mercury__psqueue__LoserPrio_14));
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 2) = mercury__psqueue__LoserKey_15;
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 3) = ((MR_Box) (mercury__psqueue__V_23_23));
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 4) = mercury__psqueue__SplitKeyBC_17;
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 5) = ((MR_Box) (mercury__psqueue__LTreeC_18));
            }
          }
      }
    return mercury__psqueue__LTree_12;
  }
}

static MR_Word MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_105_110_103_108_101_95_114_105_103_104_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_5_f_0(
  MR_Word mercury__psqueue__TypeInfo_for_K_26,
  MR_Integer mercury__psqueue__InsertPrio_7,
  MR_Box mercury__psqueue__InsertKey_8,
  MR_Word mercury__psqueue__LTreeAB_9,
  MR_Box mercury__psqueue__SplitKeyBC_10,
  MR_Word mercury__psqueue__LTreeC_11)
{
  {
    MR_bool mercury__psqueue__succeeded;
    MR_Word mercury__psqueue__LTree_12;

    if ((mercury__psqueue__LTreeAB_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "psqueue.m", (MR_String) "function \140psqueue.single_right\'/5", (MR_String) "heavier tree is a leaf");
        }
      }
    else
      {
        MR_Integer mercury__psqueue__LoserPrio_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeAB_9, (MR_Integer) 1)));
        MR_Box mercury__psqueue__LoserKey_15 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeAB_9, (MR_Integer) 2));
        MR_Word mercury__psqueue__LTreeA_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeAB_9, (MR_Integer) 3)));
        MR_Box mercury__psqueue__SplitKeyAB_17 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeAB_9, (MR_Integer) 4));
        MR_Word mercury__psqueue__LTreeB_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeAB_9, (MR_Integer) 5)));
        MR_Integer mercury__psqueue__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeAB_9, (MR_Integer) 0)));
        MR_Word mercury__psqueue__CMP0_19;

        {
          mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_26, &mercury__psqueue__CMP0_19, mercury__psqueue__LoserKey_15, mercury__psqueue__SplitKeyAB_17);
        }
        mercury__psqueue__succeeded = (mercury__psqueue__CMP0_19 == (MR_Integer) 2);
        if (mercury__psqueue__succeeded)
          {
            mercury__psqueue__succeeded = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_101_113_95_95_91_86_32_61_32_105_110_116_93_95_48_95_49_2_p_0(mercury__psqueue__InsertPrio_7, mercury__psqueue__LoserPrio_14);
          }
        if (mercury__psqueue__succeeded)
          {
            MR_Word mercury__psqueue__V_23_23;
            MR_Integer mercury__psqueue__Size_33;
            MR_Integer mercury__psqueue__V_34_34;
            MR_Integer mercury__psqueue__V_36_36;
            MR_Integer mercury__psqueue__V_37_37;
            MR_Integer mercury__psqueue__Size_58;
            MR_Integer mercury__psqueue__V_59_59;
            MR_Integer mercury__psqueue__V_61_61;

            if ((mercury__psqueue__LTreeB_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              mercury__psqueue__V_36_36 = (MR_Integer) 0;
            else
              {
                MR_Integer mercury__psqueue__V_40_40;
                MR_Box mercury__psqueue__V_41_41;
                MR_Word mercury__psqueue__V_42_42;
                MR_Box mercury__psqueue__V_43_43;
                MR_Word mercury__psqueue__V_44_44;

                mercury__psqueue__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_18, (MR_Integer) 0)));
                mercury__psqueue__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_18, (MR_Integer) 1)));
                mercury__psqueue__V_41_41 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_18, (MR_Integer) 2));
                mercury__psqueue__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_18, (MR_Integer) 3)));
                mercury__psqueue__V_43_43 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_18, (MR_Integer) 4));
                mercury__psqueue__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_18, (MR_Integer) 5)));
              }
            mercury__psqueue__V_34_34 = ((MR_Integer) 1 + mercury__psqueue__V_36_36);
            if ((mercury__psqueue__LTreeC_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              mercury__psqueue__V_37_37 = (MR_Integer) 0;
            else
              {
                MR_Integer mercury__psqueue__V_47_47;
                MR_Box mercury__psqueue__V_48_48;
                MR_Word mercury__psqueue__V_49_49;
                MR_Box mercury__psqueue__V_50_50;
                MR_Word mercury__psqueue__V_51_51;

                mercury__psqueue__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_11, (MR_Integer) 0)));
                mercury__psqueue__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_11, (MR_Integer) 1)));
                mercury__psqueue__V_48_48 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_11, (MR_Integer) 2));
                mercury__psqueue__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_11, (MR_Integer) 3)));
                mercury__psqueue__V_50_50 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_11, (MR_Integer) 4));
                mercury__psqueue__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_11, (MR_Integer) 5)));
              }
            mercury__psqueue__Size_33 = (mercury__psqueue__V_34_34 + mercury__psqueue__V_37_37);
            {
              mercury__psqueue__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_23_23, 0) = ((MR_Box) (mercury__psqueue__Size_33));
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_23_23, 1) = ((MR_Box) (mercury__psqueue__LoserPrio_14));
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_23_23, 2) = mercury__psqueue__LoserKey_15;
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_23_23, 3) = ((MR_Box) (mercury__psqueue__LTreeB_18));
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_23_23, 4) = mercury__psqueue__SplitKeyBC_10;
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_23_23, 5) = ((MR_Box) (mercury__psqueue__LTreeC_11));
            }
            if ((mercury__psqueue__LTreeA_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              mercury__psqueue__V_61_61 = (MR_Integer) 0;
            else
              {
                MR_Integer mercury__psqueue__V_65_65;
                MR_Box mercury__psqueue__V_66_66;
                MR_Word mercury__psqueue__V_67_67;
                MR_Box mercury__psqueue__V_68_68;
                MR_Word mercury__psqueue__V_69_69;

                mercury__psqueue__V_61_61 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_16, (MR_Integer) 0)));
                mercury__psqueue__V_65_65 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_16, (MR_Integer) 1)));
                mercury__psqueue__V_66_66 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_16, (MR_Integer) 2));
                mercury__psqueue__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_16, (MR_Integer) 3)));
                mercury__psqueue__V_68_68 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_16, (MR_Integer) 4));
                mercury__psqueue__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_16, (MR_Integer) 5)));
              }
            mercury__psqueue__V_59_59 = ((MR_Integer) 1 + mercury__psqueue__V_61_61);
            mercury__psqueue__Size_58 = (mercury__psqueue__V_59_59 + mercury__psqueue__Size_33);
            {
              mercury__psqueue__LTree_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 0) = ((MR_Box) (mercury__psqueue__Size_58));
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 1) = ((MR_Box) (mercury__psqueue__InsertPrio_7));
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 2) = mercury__psqueue__InsertKey_8;
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 3) = ((MR_Box) (mercury__psqueue__LTreeA_16));
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 4) = mercury__psqueue__SplitKeyAB_17;
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 5) = ((MR_Box) (mercury__psqueue__V_23_23));
            }
          }
        else
          {
            MR_Word mercury__psqueue__V_24_24;
            MR_Integer mercury__psqueue__Size_83;
            MR_Integer mercury__psqueue__V_84_84;
            MR_Integer mercury__psqueue__V_86_86;
            MR_Integer mercury__psqueue__V_87_87;
            MR_Integer mercury__psqueue__Size_108;
            MR_Integer mercury__psqueue__V_109_109;
            MR_Integer mercury__psqueue__V_111_111;

            if ((mercury__psqueue__LTreeB_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              mercury__psqueue__V_86_86 = (MR_Integer) 0;
            else
              {
                MR_Integer mercury__psqueue__V_90_90;
                MR_Box mercury__psqueue__V_91_91;
                MR_Word mercury__psqueue__V_92_92;
                MR_Box mercury__psqueue__V_93_93;
                MR_Word mercury__psqueue__V_94_94;

                mercury__psqueue__V_86_86 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_18, (MR_Integer) 0)));
                mercury__psqueue__V_90_90 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_18, (MR_Integer) 1)));
                mercury__psqueue__V_91_91 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_18, (MR_Integer) 2));
                mercury__psqueue__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_18, (MR_Integer) 3)));
                mercury__psqueue__V_93_93 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_18, (MR_Integer) 4));
                mercury__psqueue__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_18, (MR_Integer) 5)));
              }
            mercury__psqueue__V_84_84 = ((MR_Integer) 1 + mercury__psqueue__V_86_86);
            if ((mercury__psqueue__LTreeC_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              mercury__psqueue__V_87_87 = (MR_Integer) 0;
            else
              {
                MR_Integer mercury__psqueue__V_97_97;
                MR_Box mercury__psqueue__V_98_98;
                MR_Word mercury__psqueue__V_99_99;
                MR_Box mercury__psqueue__V_100_100;
                MR_Word mercury__psqueue__V_101_101;

                mercury__psqueue__V_87_87 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_11, (MR_Integer) 0)));
                mercury__psqueue__V_97_97 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_11, (MR_Integer) 1)));
                mercury__psqueue__V_98_98 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_11, (MR_Integer) 2));
                mercury__psqueue__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_11, (MR_Integer) 3)));
                mercury__psqueue__V_100_100 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_11, (MR_Integer) 4));
                mercury__psqueue__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_11, (MR_Integer) 5)));
              }
            mercury__psqueue__Size_83 = (mercury__psqueue__V_84_84 + mercury__psqueue__V_87_87);
            {
              mercury__psqueue__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_24_24, 0) = ((MR_Box) (mercury__psqueue__Size_83));
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_24_24, 1) = ((MR_Box) (mercury__psqueue__InsertPrio_7));
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_24_24, 2) = mercury__psqueue__InsertKey_8;
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_24_24, 3) = ((MR_Box) (mercury__psqueue__LTreeB_18));
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_24_24, 4) = mercury__psqueue__SplitKeyBC_10;
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_24_24, 5) = ((MR_Box) (mercury__psqueue__LTreeC_11));
            }
            if ((mercury__psqueue__LTreeA_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              mercury__psqueue__V_111_111 = (MR_Integer) 0;
            else
              {
                MR_Integer mercury__psqueue__V_115_115;
                MR_Box mercury__psqueue__V_116_116;
                MR_Word mercury__psqueue__V_117_117;
                MR_Box mercury__psqueue__V_118_118;
                MR_Word mercury__psqueue__V_119_119;

                mercury__psqueue__V_111_111 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_16, (MR_Integer) 0)));
                mercury__psqueue__V_115_115 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_16, (MR_Integer) 1)));
                mercury__psqueue__V_116_116 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_16, (MR_Integer) 2));
                mercury__psqueue__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_16, (MR_Integer) 3)));
                mercury__psqueue__V_118_118 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_16, (MR_Integer) 4));
                mercury__psqueue__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_16, (MR_Integer) 5)));
              }
            mercury__psqueue__V_109_109 = ((MR_Integer) 1 + mercury__psqueue__V_111_111);
            mercury__psqueue__Size_108 = (mercury__psqueue__V_109_109 + mercury__psqueue__Size_83);
            {
              mercury__psqueue__LTree_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 0) = ((MR_Box) (mercury__psqueue__Size_108));
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 1) = ((MR_Box) (mercury__psqueue__LoserPrio_14));
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 2) = mercury__psqueue__LoserKey_15;
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 3) = ((MR_Box) (mercury__psqueue__LTreeA_16));
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 4) = mercury__psqueue__SplitKeyAB_17;
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 5) = ((MR_Box) (mercury__psqueue__V_24_24));
            }
          }
      }
    return mercury__psqueue__LTree_12;
  }
}

MR_bool MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_116_118_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_4_p_0(
  MR_Word mercury__psqueue__TypeInfo_for_K_29,
  MR_Integer mercury__psqueue__InsertPrio_5,
  MR_Box mercury__psqueue__InsertKey_6,
  MR_Word mercury__psqueue__TV_7,
  MR_Word * mercury__psqueue__Winner_8)
{
  {
    MR_bool mercury__psqueue__succeeded;

    if (((MR_tag((MR_Word) mercury__psqueue__TV_7)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Integer mercury__psqueue__Prio_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__psqueue__TV_7, (MR_Integer) 0)));
        MR_Box mercury__psqueue__Key_10 = (MR_hl_field(MR_mktag(0), mercury__psqueue__TV_7, (MR_Integer) 1));
        MR_Word mercury__psqueue__CMP_11;
        MR_Word mercury__psqueue__WinnerA_12;
        MR_Word mercury__psqueue__WinnerB_13;

        {
          mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_29, &mercury__psqueue__CMP_11, mercury__psqueue__InsertKey_6, mercury__psqueue__Key_10);
        }
        switch (mercury__psqueue__CMP_11) {
          default:
            mercury__psqueue__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 1:
            {
              MR_Word mercury__psqueue__V_32_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              MR_Word mercury__psqueue__V_36_36;

              {
                mercury__psqueue__WinnerA_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_12, 0) = ((MR_Box) (mercury__psqueue__InsertPrio_5));
                MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_12, 1) = mercury__psqueue__InsertKey_6;
                MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_12, 2) = ((MR_Box) (mercury__psqueue__V_32_32));
                MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_12, 3) = mercury__psqueue__InsertKey_6;
              }
              mercury__psqueue__V_36_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              {
                mercury__psqueue__WinnerB_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_13, 0) = ((MR_Box) (mercury__psqueue__Prio_9));
                MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_13, 1) = mercury__psqueue__Key_10;
                MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_13, 2) = ((MR_Box) (mercury__psqueue__V_36_36));
                MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_13, 3) = mercury__psqueue__Key_10;
              }
              mercury__psqueue__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mercury__psqueue__V_40_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              MR_Word mercury__psqueue__V_44_44;

              {
                mercury__psqueue__WinnerA_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_12, 0) = ((MR_Box) (mercury__psqueue__Prio_9));
                MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_12, 1) = mercury__psqueue__Key_10;
                MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_12, 2) = ((MR_Box) (mercury__psqueue__V_40_40));
                MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_12, 3) = mercury__psqueue__Key_10;
              }
              mercury__psqueue__V_44_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              {
                mercury__psqueue__WinnerB_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_13, 0) = ((MR_Box) (mercury__psqueue__InsertPrio_5));
                MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_13, 1) = mercury__psqueue__InsertKey_6;
                MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_13, 2) = ((MR_Box) (mercury__psqueue__V_44_44));
                MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_13, 3) = mercury__psqueue__InsertKey_6;
              }
              mercury__psqueue__succeeded = MR_TRUE;
            }
            break;
        }
        if (mercury__psqueue__succeeded)
          {
            {
              mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_109_98_105_110_101_95_119_105_110_110_101_114_115_95_118_105_97_95_116_111_117_114_110_97_109_101_110_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__psqueue__TypeInfo_for_K_29, mercury__psqueue__WinnerA_12, mercury__psqueue__WinnerB_13, mercury__psqueue__Winner_8);
            }
            mercury__psqueue__succeeded = MR_TRUE;
          }
      }
    else
      {
        MR_Box mercury__psqueue__MaxKeyA_17;
        MR_Word mercury__psqueue__WinnerA_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__TV_7, (MR_Integer) 0)));
        MR_Word mercury__psqueue__WinnerB_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__TV_7, (MR_Integer) 1)));
        MR_Integer mercury__psqueue__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_26, (MR_Integer) 0)));
        MR_Box mercury__psqueue__V_15_15 = (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_26, (MR_Integer) 1));
        MR_Word mercury__psqueue__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_26, (MR_Integer) 2)));
        MR_Word mercury__psqueue__CMP_48;

        mercury__psqueue__MaxKeyA_17 = (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_26, (MR_Integer) 3));
        {
          mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_29, &mercury__psqueue__CMP_48, mercury__psqueue__InsertKey_6, mercury__psqueue__MaxKeyA_17);
        }
        switch (mercury__psqueue__CMP_48) {
          default:
            mercury__psqueue__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 1:
            mercury__psqueue__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 0:
            mercury__psqueue__succeeded = MR_TRUE;
            break;
        }
        if (mercury__psqueue__succeeded)
          {
            MR_Word mercury__psqueue__UpdatedWinnerA_22;
            MR_Word mercury__psqueue__V_24_24;

            {
              mercury__psqueue__V_24_24 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_103_101_116_95_116_111_117_114_110_97_109_101_110_116_95_118_105_101_119_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_1_f_0(mercury__psqueue__TypeInfo_for_K_29, mercury__psqueue__WinnerA_26);
            }
            {
              mercury__psqueue__succeeded = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_116_118_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mercury__psqueue__TypeInfo_for_K_29, mercury__psqueue__InsertPrio_5, mercury__psqueue__InsertKey_6, mercury__psqueue__V_24_24, &mercury__psqueue__UpdatedWinnerA_22);
            }
            if (mercury__psqueue__succeeded)
              {
                {
                  mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_109_98_105_110_101_95_119_105_110_110_101_114_115_95_118_105_97_95_116_111_117_114_110_97_109_101_110_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__psqueue__TypeInfo_for_K_29, mercury__psqueue__UpdatedWinnerA_22, mercury__psqueue__WinnerB_27, mercury__psqueue__Winner_8);
                }
                mercury__psqueue__succeeded = MR_TRUE;
              }
          }
        else
          {
            MR_Word mercury__psqueue__UpdatedWinnerB_23;
            MR_Word mercury__psqueue__V_25_25;

            {
              mercury__psqueue__V_25_25 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_103_101_116_95_116_111_117_114_110_97_109_101_110_116_95_118_105_101_119_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_1_f_0(mercury__psqueue__TypeInfo_for_K_29, mercury__psqueue__WinnerB_27);
            }
            {
              mercury__psqueue__succeeded = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_116_118_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mercury__psqueue__TypeInfo_for_K_29, mercury__psqueue__InsertPrio_5, mercury__psqueue__InsertKey_6, mercury__psqueue__V_25_25, &mercury__psqueue__UpdatedWinnerB_23);
            }
            if (mercury__psqueue__succeeded)
              {
                {
                  mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_109_98_105_110_101_95_119_105_110_110_101_114_115_95_118_105_97_95_116_111_117_114_110_97_109_101_110_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__psqueue__TypeInfo_for_K_29, mercury__psqueue__WinnerA_26, mercury__psqueue__UpdatedWinnerB_23, mercury__psqueue__Winner_8);
                }
                mercury__psqueue__succeeded = MR_TRUE;
              }
          }
      }
    return mercury__psqueue__succeeded;
  }
}

MR_Word MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_118_101_114_116_95_108_111_115_101_114_95_116_114_101_101_95_116_111_95_112_115_113_117_101_117_101_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_2_f_0(
  MR_Word mercury__psqueue__TypeInfo_for_K_18,
  MR_Word mercury__psqueue__LTree_4,
  MR_Box mercury__psqueue__MaxKey_5)
{
  {
    MR_bool mercury__psqueue__succeeded;
    MR_Word mercury__psqueue__PSQ_6;

    if ((mercury__psqueue__LTree_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__psqueue__PSQ_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Integer mercury__psqueue__LoserPrio_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 1)));
        MR_Box mercury__psqueue__LoserKey_9 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 2));
        MR_Word mercury__psqueue__SubLTreeL_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 3)));
        MR_Box mercury__psqueue__SplitKey_11 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 4));
        MR_Word mercury__psqueue__SubLTreeR_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 5)));
        MR_Word mercury__psqueue__PSQA_14;
        MR_Word mercury__psqueue__PSQB_15;
        MR_Integer mercury__psqueue__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 0)));
        MR_Word mercury__psqueue__CMP_21;

        {
          mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_18, &mercury__psqueue__CMP_21, mercury__psqueue__LoserKey_9, mercury__psqueue__SplitKey_11);
        }
        switch (mercury__psqueue__CMP_21) {
          default:
            mercury__psqueue__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 1:
            mercury__psqueue__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 0:
            mercury__psqueue__succeeded = MR_TRUE;
            break;
        }
        if (mercury__psqueue__succeeded)
          {
            MR_Word mercury__psqueue__WinnerA_13;

            {
              mercury__psqueue__WinnerA_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_13, 0) = ((MR_Box) (mercury__psqueue__LoserPrio_8));
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_13, 1) = mercury__psqueue__LoserKey_9;
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_13, 2) = ((MR_Box) (mercury__psqueue__SubLTreeL_10));
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_13, 3) = mercury__psqueue__SplitKey_11;
            }
            {
              mercury__psqueue__PSQA_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__psqueue__PSQA_14, 0) = ((MR_Box) (mercury__psqueue__WinnerA_13));
            }
            {
              mercury__psqueue__PSQB_15 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_118_101_114_116_95_108_111_115_101_114_95_116_114_101_101_95_116_111_95_112_115_113_117_101_117_101_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_2_f_0(mercury__psqueue__TypeInfo_for_K_18, mercury__psqueue__SubLTreeR_12, mercury__psqueue__MaxKey_5);
            }
          }
        else
          {
            MR_Word mercury__psqueue__WinnerB_16;

            {
              mercury__psqueue__PSQA_14 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_118_101_114_116_95_108_111_115_101_114_95_116_114_101_101_95_116_111_95_112_115_113_117_101_117_101_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_2_f_0(mercury__psqueue__TypeInfo_for_K_18, mercury__psqueue__SubLTreeL_10, mercury__psqueue__SplitKey_11);
            }
            {
              mercury__psqueue__WinnerB_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_16, 0) = ((MR_Box) (mercury__psqueue__LoserPrio_8));
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_16, 1) = mercury__psqueue__LoserKey_9;
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_16, 2) = ((MR_Box) (mercury__psqueue__SubLTreeR_12));
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_16, 3) = mercury__psqueue__MaxKey_5;
            }
            {
              mercury__psqueue__PSQB_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__psqueue__PSQB_15, 0) = ((MR_Box) (mercury__psqueue__WinnerB_16));
            }
          }
        if ((mercury__psqueue__PSQA_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          mercury__psqueue__PSQ_6 = mercury__psqueue__PSQB_15;
        else
          {
            MR_Word mercury__psqueue__WinnerA_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQA_14, (MR_Integer) 0)));

            if ((mercury__psqueue__PSQB_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              mercury__psqueue__PSQ_6 = mercury__psqueue__PSQA_14;
            else
              {
                MR_Word mercury__psqueue__WinnerB_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQB_15, (MR_Integer) 0)));
                MR_Word mercury__psqueue__CombinedWinner_27;

                {
                  mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_109_98_105_110_101_95_119_105_110_110_101_114_115_95_118_105_97_95_116_111_117_114_110_97_109_101_110_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__psqueue__TypeInfo_for_K_18, mercury__psqueue__WinnerA_25, mercury__psqueue__WinnerB_26, &mercury__psqueue__CombinedWinner_27);
                }
                {
                  mercury__psqueue__PSQ_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_6, 0) = ((MR_Box) (mercury__psqueue__CombinedWinner_27));
                }
              }
          }
      }
    return mercury__psqueue__PSQ_6;
  }
}

void MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_102_114_111_109_95_97_115_115_111_99_95_108_105_115_116_95_108_111_111_112_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_3_p_0(
  MR_Word mercury__psqueue__TypeInfo_for_K_17,
  MR_Word mercury__psqueue__HeadVar__1_1,
  MR_Word mercury__psqueue__STATE_VARIABLE_PSQ_0_2,
  MR_Word * mercury__psqueue__STATE_VARIABLE_PSQ_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__psqueue__succeeded;

        if ((mercury__psqueue__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__psqueue__STATE_VARIABLE_PSQ_3 = mercury__psqueue__STATE_VARIABLE_PSQ_0_2;
        else
          {
            MR_Integer mercury__psqueue__Prio_7;
            MR_Box mercury__psqueue__Key_8;
            MR_Word mercury__psqueue__PriosKeys_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mercury__psqueue__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mercury__psqueue__STATE_VARIABLE_PSQ_14_14;

            mercury__psqueue__Prio_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__psqueue__V_13_13, (MR_Integer) 0)));
            mercury__psqueue__Key_8 = (MR_hl_field(MR_mktag(0), mercury__psqueue__V_13_13, (MR_Integer) 1));
            {
              mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mercury__psqueue__TypeInfo_for_K_17, mercury__psqueue__Prio_7, mercury__psqueue__Key_8, mercury__psqueue__STATE_VARIABLE_PSQ_0_2, &mercury__psqueue__STATE_VARIABLE_PSQ_14_14);
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__psqueue__HeadVar__1__tmp_copy_1 = mercury__psqueue__PriosKeys_9;
              MR_Word mercury__psqueue__STATE_VARIABLE_PSQ_0__tmp_copy_2 = mercury__psqueue__STATE_VARIABLE_PSQ_14_14;

              mercury__psqueue__STATE_VARIABLE_PSQ_0_2 = mercury__psqueue__STATE_VARIABLE_PSQ_0__tmp_copy_2;
              mercury__psqueue__HeadVar__1_1 = mercury__psqueue__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_109_111_118_101_95_116_118_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_4_p_0(
  MR_Word mercury__psqueue__TypeInfo_for_K_23,
  MR_Integer * mercury__psqueue__MatchingPrio_5,
  MR_Box mercury__psqueue__SearchKey_6,
  MR_Word mercury__psqueue__TournamentView_7,
  MR_Word * mercury__psqueue__PSQ_8)
{
  {
    MR_bool mercury__psqueue__succeeded;

    if (((MR_tag((MR_Word) mercury__psqueue__TournamentView_7)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Box mercury__psqueue__Key_10;

        *mercury__psqueue__MatchingPrio_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__psqueue__TournamentView_7, (MR_Integer) 0)));
        mercury__psqueue__Key_10 = (MR_hl_field(MR_mktag(0), mercury__psqueue__TournamentView_7, (MR_Integer) 1));
        {
          mercury__psqueue__succeeded = mercury__builtin__unify_2_p_0(mercury__psqueue__TypeInfo_for_K_23, mercury__psqueue__Key_10, mercury__psqueue__SearchKey_6);
        }
        if (mercury__psqueue__succeeded)
          {
            *mercury__psqueue__PSQ_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            mercury__psqueue__succeeded = MR_TRUE;
          }
      }
    else
      {
        MR_Word mercury__psqueue__WinnerA_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__TournamentView_7, (MR_Integer) 0)));
        MR_Word mercury__psqueue__WinnerB_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__TournamentView_7, (MR_Integer) 1)));
        MR_Box mercury__psqueue__MaxKeyA_16 = (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_11, (MR_Integer) 3));
        MR_Word mercury__psqueue__CombinedWinner_18;
        MR_Integer mercury__psqueue__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_11, (MR_Integer) 0)));
        MR_Box mercury__psqueue__V_14_14 = (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_11, (MR_Integer) 1));
        MR_Word mercury__psqueue__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_11, (MR_Integer) 2)));
        MR_Word mercury__psqueue__CMP_26;

        {
          mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_23, &mercury__psqueue__CMP_26, mercury__psqueue__SearchKey_6, mercury__psqueue__MaxKeyA_16);
        }
        switch (mercury__psqueue__CMP_26) {
          default:
            mercury__psqueue__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 1:
            mercury__psqueue__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 0:
            mercury__psqueue__succeeded = MR_TRUE;
            break;
        }
        if (mercury__psqueue__succeeded)
          {
            MR_Word mercury__psqueue__UpdatedPSQA_17;
            MR_Word mercury__psqueue__V_20_20;

            {
              mercury__psqueue__V_20_20 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_103_101_116_95_116_111_117_114_110_97_109_101_110_116_95_118_105_101_119_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_1_f_0(mercury__psqueue__TypeInfo_for_K_23, mercury__psqueue__WinnerA_11);
            }
            {
              mercury__psqueue__succeeded = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_109_111_118_101_95_116_118_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mercury__psqueue__TypeInfo_for_K_23, mercury__psqueue__MatchingPrio_5, mercury__psqueue__SearchKey_6, mercury__psqueue__V_20_20, &mercury__psqueue__UpdatedPSQA_17);
            }
            if (mercury__psqueue__succeeded)
              {
                if ((mercury__psqueue__UpdatedPSQA_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  mercury__psqueue__CombinedWinner_18 = mercury__psqueue__WinnerB_12;
                else
                  {
                    MR_Word mercury__psqueue__WinnerA_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__UpdatedPSQA_17, (MR_Integer) 0)));

                    {
                      mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_109_98_105_110_101_95_119_105_110_110_101_114_115_95_118_105_97_95_116_111_117_114_110_97_109_101_110_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__psqueue__TypeInfo_for_K_23, mercury__psqueue__WinnerA_30, mercury__psqueue__WinnerB_12, &mercury__psqueue__CombinedWinner_18);
                    }
                  }
                mercury__psqueue__succeeded = MR_TRUE;
              }
          }
        else
          {
            MR_Word mercury__psqueue__UpdatedPSQB_19;
            MR_Word mercury__psqueue__V_21_21;

            {
              mercury__psqueue__V_21_21 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_103_101_116_95_116_111_117_114_110_97_109_101_110_116_95_118_105_101_119_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_1_f_0(mercury__psqueue__TypeInfo_for_K_23, mercury__psqueue__WinnerB_12);
            }
            {
              mercury__psqueue__succeeded = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_109_111_118_101_95_116_118_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mercury__psqueue__TypeInfo_for_K_23, mercury__psqueue__MatchingPrio_5, mercury__psqueue__SearchKey_6, mercury__psqueue__V_21_21, &mercury__psqueue__UpdatedPSQB_19);
            }
            if (mercury__psqueue__succeeded)
              {
                if ((mercury__psqueue__UpdatedPSQB_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  mercury__psqueue__CombinedWinner_18 = mercury__psqueue__WinnerA_11;
                else
                  {
                    MR_Word mercury__psqueue__WinnerB_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__UpdatedPSQB_19, (MR_Integer) 0)));

                    {
                      mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_109_98_105_110_101_95_119_105_110_110_101_114_115_95_118_105_97_95_116_111_117_114_110_97_109_101_110_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__psqueue__TypeInfo_for_K_23, mercury__psqueue__WinnerA_11, mercury__psqueue__WinnerB_35, &mercury__psqueue__CombinedWinner_18);
                    }
                  }
                mercury__psqueue__succeeded = MR_TRUE;
              }
          }
        if (mercury__psqueue__succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *mercury__psqueue__PSQ_8 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__psqueue__CombinedWinner_18));
            }
            mercury__psqueue__succeeded = MR_TRUE;
          }
      }
    return mercury__psqueue__succeeded;
  }
}

MR_bool MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_97_100_106_117_115_116_95_116_118_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_4_p_0(
  MR_Word mercury__psqueue__TypeInfo_for_K_23,
  MR_Word mercury__psqueue__AdjustFunc_5,
  MR_Box mercury__psqueue__SearchKey_6,
  MR_Word mercury__psqueue__TournamentView_7,
  MR_Word * mercury__psqueue__Winner_8)
{
  {
    MR_bool mercury__psqueue__succeeded;

    if (((MR_tag((MR_Word) mercury__psqueue__TournamentView_7)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Integer mercury__psqueue__Prio_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__psqueue__TournamentView_7, (MR_Integer) 0)));
        MR_Box mercury__psqueue__Key_10 = (MR_hl_field(MR_mktag(0), mercury__psqueue__TournamentView_7, (MR_Integer) 1));
        MR_Integer mercury__psqueue__V_21_21;
        MR_Word mercury__psqueue__V_26_26;
        MR_Box MR_CALL (* mercury__psqueue__func_0)(MR_Box, MR_Box);
        MR_Box mercury__psqueue__conv1_V_21_21;

        {
          mercury__psqueue__succeeded = mercury__builtin__unify_2_p_0(mercury__psqueue__TypeInfo_for_K_23, mercury__psqueue__Key_10, mercury__psqueue__SearchKey_6);
        }
        if (mercury__psqueue__succeeded)
          {
            mercury__psqueue__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__psqueue__AdjustFunc_5, (MR_Integer) 1)));
            {
              mercury__psqueue__conv1_V_21_21 = mercury__psqueue__func_0(((MR_Box) mercury__psqueue__AdjustFunc_5), ((MR_Box) (mercury__psqueue__Prio_9)));
            }
            mercury__psqueue__V_21_21 = ((MR_Integer) mercury__psqueue__conv1_V_21_21);
            mercury__psqueue__V_26_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              *mercury__psqueue__Winner_8 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__psqueue__V_21_21));
              MR_hl_field(MR_mktag(0), base, 1) = mercury__psqueue__Key_10;
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__psqueue__V_26_26));
              MR_hl_field(MR_mktag(0), base, 3) = mercury__psqueue__Key_10;
            }
            mercury__psqueue__succeeded = MR_TRUE;
          }
      }
    else
      {
        MR_Word mercury__psqueue__WinnerA_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__TournamentView_7, (MR_Integer) 0)));
        MR_Word mercury__psqueue__WinnerB_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__TournamentView_7, (MR_Integer) 1)));
        MR_Box mercury__psqueue__MaxKeyA_16 = (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_11, (MR_Integer) 3));
        MR_Integer mercury__psqueue__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_11, (MR_Integer) 0)));
        MR_Box mercury__psqueue__V_14_14 = (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_11, (MR_Integer) 1));
        MR_Word mercury__psqueue__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_11, (MR_Integer) 2)));
        MR_Word mercury__psqueue__CMP_30;

        {
          mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_23, &mercury__psqueue__CMP_30, mercury__psqueue__SearchKey_6, mercury__psqueue__MaxKeyA_16);
        }
        switch (mercury__psqueue__CMP_30) {
          default:
            mercury__psqueue__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 1:
            mercury__psqueue__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 0:
            mercury__psqueue__succeeded = MR_TRUE;
            break;
        }
        if (mercury__psqueue__succeeded)
          {
            MR_Word mercury__psqueue__UpdatedWinnerA_17;
            MR_Word mercury__psqueue__V_19_19;

            {
              mercury__psqueue__V_19_19 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_103_101_116_95_116_111_117_114_110_97_109_101_110_116_95_118_105_101_119_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_1_f_0(mercury__psqueue__TypeInfo_for_K_23, mercury__psqueue__WinnerA_11);
            }
            {
              mercury__psqueue__succeeded = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_97_100_106_117_115_116_95_116_118_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mercury__psqueue__TypeInfo_for_K_23, mercury__psqueue__AdjustFunc_5, mercury__psqueue__SearchKey_6, mercury__psqueue__V_19_19, &mercury__psqueue__UpdatedWinnerA_17);
            }
            if (mercury__psqueue__succeeded)
              {
                {
                  mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_109_98_105_110_101_95_119_105_110_110_101_114_115_95_118_105_97_95_116_111_117_114_110_97_109_101_110_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__psqueue__TypeInfo_for_K_23, mercury__psqueue__UpdatedWinnerA_17, mercury__psqueue__WinnerB_12, mercury__psqueue__Winner_8);
                }
                mercury__psqueue__succeeded = MR_TRUE;
              }
          }
        else
          {
            MR_Word mercury__psqueue__UpdatedWinnerB_18;
            MR_Word mercury__psqueue__V_20_20;

            {
              mercury__psqueue__V_20_20 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_103_101_116_95_116_111_117_114_110_97_109_101_110_116_95_118_105_101_119_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_1_f_0(mercury__psqueue__TypeInfo_for_K_23, mercury__psqueue__WinnerB_12);
            }
            {
              mercury__psqueue__succeeded = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_97_100_106_117_115_116_95_116_118_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mercury__psqueue__TypeInfo_for_K_23, mercury__psqueue__AdjustFunc_5, mercury__psqueue__SearchKey_6, mercury__psqueue__V_20_20, &mercury__psqueue__UpdatedWinnerB_18);
            }
            if (mercury__psqueue__succeeded)
              {
                {
                  mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_109_98_105_110_101_95_119_105_110_110_101_114_115_95_118_105_97_95_116_111_117_114_110_97_109_101_110_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__psqueue__TypeInfo_for_K_23, mercury__psqueue__WinnerA_11, mercury__psqueue__UpdatedWinnerB_18, mercury__psqueue__Winner_8);
                }
                mercury__psqueue__succeeded = MR_TRUE;
              }
          }
      }
    return mercury__psqueue__succeeded;
  }
}

MR_bool MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_116_118_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_3_p_0(
  MR_Word mercury__psqueue__TypeInfo_for_K_18,
  MR_Word mercury__psqueue__TournamentView_4,
  MR_Box mercury__psqueue__SearchKey_5,
  MR_Integer * mercury__psqueue__MatchingPrio_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__psqueue__succeeded;

        if (((MR_tag((MR_Word) mercury__psqueue__TournamentView_4)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_Box mercury__psqueue__Key_8;

            *mercury__psqueue__MatchingPrio_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__psqueue__TournamentView_4, (MR_Integer) 0)));
            mercury__psqueue__Key_8 = (MR_hl_field(MR_mktag(0), mercury__psqueue__TournamentView_4, (MR_Integer) 1));
            {
              mercury__psqueue__succeeded = mercury__builtin__unify_2_p_0(mercury__psqueue__TypeInfo_for_K_18, mercury__psqueue__Key_8, mercury__psqueue__SearchKey_5);
            }
          }
        else
          {
            MR_Word mercury__psqueue__WinnerA_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__TournamentView_4, (MR_Integer) 0)));
            MR_Word mercury__psqueue__WinnerB_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__TournamentView_4, (MR_Integer) 1)));
            MR_Box mercury__psqueue__MaxKeyA_14 = (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_9, (MR_Integer) 3));
            MR_Integer mercury__psqueue__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_9, (MR_Integer) 0)));
            MR_Box mercury__psqueue__V_12_12 = (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_9, (MR_Integer) 1));
            MR_Word mercury__psqueue__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_9, (MR_Integer) 2)));
            MR_Word mercury__psqueue__CMP_21;

            {
              mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_18, &mercury__psqueue__CMP_21, mercury__psqueue__SearchKey_5, mercury__psqueue__MaxKeyA_14);
            }
            switch (mercury__psqueue__CMP_21) {
              default:
                mercury__psqueue__succeeded = MR_FALSE;
                break;
              case (MR_Integer) 1:
                mercury__psqueue__succeeded = MR_TRUE;
                break;
              case (MR_Integer) 0:
                mercury__psqueue__succeeded = MR_TRUE;
                break;
            }
            if (mercury__psqueue__succeeded)
              {
                MR_Word mercury__psqueue__V_15_15;

                {
                  mercury__psqueue__V_15_15 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_103_101_116_95_116_111_117_114_110_97_109_101_110_116_95_118_105_101_119_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_1_f_0(mercury__psqueue__TypeInfo_for_K_18, mercury__psqueue__WinnerA_9);
                }
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__psqueue__TournamentView__tmp_copy_4 = mercury__psqueue__V_15_15;

                  mercury__psqueue__TournamentView_4 = mercury__psqueue__TournamentView__tmp_copy_4;
                }
                continue;
              }
            else
              {
                MR_Word mercury__psqueue__V_16_16;

                {
                  mercury__psqueue__V_16_16 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_103_101_116_95_116_111_117_114_110_97_109_101_110_116_95_118_105_101_119_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_1_f_0(mercury__psqueue__TypeInfo_for_K_18, mercury__psqueue__WinnerB_10);
                }
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__psqueue__TournamentView__tmp_copy_4 = mercury__psqueue__V_16_16;

                  mercury__psqueue__TournamentView_4 = mercury__psqueue__TournamentView__tmp_copy_4;
                }
                continue;
              }
          }
        return mercury__psqueue__succeeded;
      }
      break;
    }
}

void MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_97_116_95_109_111_115_116_95_105_110_95_119_105_110_110_101_114_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_3_p_0(
  MR_Word mercury__psqueue__TypeInfo_for_K_21,
  MR_Word mercury__psqueue__Winner_4,
  MR_Integer mercury__psqueue__MaxPrio_5,
  MR_Word * mercury__psqueue__Cord_6)
{
  {
    MR_bool mercury__psqueue__succeeded;
    MR_Word mercury__psqueue__TypeInfo_for_P_20 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Integer mercury__psqueue__WinnerPrio_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__psqueue__Winner_4, (MR_Integer) 0)));
    MR_Word mercury__psqueue__CMP_11;
    MR_Box mercury__psqueue__V_8_8 = (MR_hl_field(MR_mktag(0), mercury__psqueue__Winner_4, (MR_Integer) 1));
    MR_Word mercury__psqueue__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__psqueue__Winner_4, (MR_Integer) 2)));
    MR_Box mercury__psqueue__V_10_10 = (MR_hl_field(MR_mktag(0), mercury__psqueue__Winner_4, (MR_Integer) 3));

    mercury__psqueue__succeeded = (mercury__psqueue__WinnerPrio_7 < mercury__psqueue__MaxPrio_5);
    if (mercury__psqueue__succeeded)
      mercury__psqueue__CMP_11 = (MR_Integer) 1;
    else
      {
        mercury__psqueue__succeeded = (mercury__psqueue__WinnerPrio_7 == mercury__psqueue__MaxPrio_5);
        if (mercury__psqueue__succeeded)
          mercury__psqueue__CMP_11 = (MR_Integer) 0;
        else
          mercury__psqueue__CMP_11 = (MR_Integer) 2;
      }
    switch (mercury__psqueue__CMP_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
      case (MR_Integer) 0:
        {
          MR_Word mercury__psqueue__TournamentView_12;

          {
            mercury__psqueue__TournamentView_12 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_103_101_116_95_116_111_117_114_110_97_109_101_110_116_95_118_105_101_119_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_1_f_0(mercury__psqueue__TypeInfo_for_K_21, mercury__psqueue__Winner_4);
          }
          if (((MR_tag((MR_Word) mercury__psqueue__TournamentView_12)) == (MR_mktag((MR_Integer) 0))))
            {
              MR_Integer mercury__psqueue__SinglePrio_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__psqueue__TournamentView_12, (MR_Integer) 0)));
              MR_Box mercury__psqueue__SingleKey_14 = (MR_hl_field(MR_mktag(0), mercury__psqueue__TournamentView_12, (MR_Integer) 1));
              MR_Word mercury__psqueue__V_19_19;
              MR_Word mercury__psqueue__V_4_32;

              {
                mercury__psqueue__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mercury__psqueue__V_19_19, 0) = ((MR_Box) (mercury__psqueue__SinglePrio_13));
                MR_hl_field(MR_mktag(0), mercury__psqueue__V_19_19, 1) = mercury__psqueue__SingleKey_14;
              }
              {
                mercury__psqueue__V_4_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mercury__psqueue__V_4_32, 0) = ((MR_Box) (mercury__psqueue__V_19_19));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *mercury__psqueue__Cord_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__psqueue__V_4_32));
              }
            }
          else
            {
              MR_Word mercury__psqueue__TypeCtorInfo_26_26;
              MR_Word mercury__psqueue__TypeInfo_27_27;
              MR_Word mercury__psqueue__WinnerA_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__TournamentView_12, (MR_Integer) 0)));
              MR_Word mercury__psqueue__WinnerB_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__TournamentView_12, (MR_Integer) 1)));
              MR_Word mercury__psqueue__CordA_17;
              MR_Word mercury__psqueue__CordB_18;
              MR_Word mercury__psqueue__conv0_Cord_6;

              {
                mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_97_116_95_109_111_115_116_95_105_110_95_119_105_110_110_101_114_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__psqueue__TypeInfo_for_K_21, mercury__psqueue__WinnerA_15, mercury__psqueue__MaxPrio_5, &mercury__psqueue__CordA_17);
              }
              {
                mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_97_116_95_109_111_115_116_95_105_110_95_119_105_110_110_101_114_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__psqueue__TypeInfo_for_K_21, mercury__psqueue__WinnerB_16, mercury__psqueue__MaxPrio_5, &mercury__psqueue__CordB_18);
              }
              mercury__psqueue__TypeCtorInfo_26_26 = (MR_Word) &mercury__pair__pair__type_ctor_info_pair_2;
              {
                mercury__psqueue__TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mercury__psqueue__TypeInfo_27_27, 0) = ((MR_Box) (mercury__psqueue__TypeCtorInfo_26_26));
                MR_hl_field(MR_mktag(0), mercury__psqueue__TypeInfo_27_27, 1) = ((MR_Box) (mercury__psqueue__TypeInfo_for_P_20));
                MR_hl_field(MR_mktag(0), mercury__psqueue__TypeInfo_27_27, 2) = ((MR_Box) (mercury__psqueue__TypeInfo_for_K_21));
              }
              {
                mercury__psqueue__conv0_Cord_6 = mercury__cord__f_43_43_2_f_0(mercury__psqueue__TypeInfo_27_27, (MR_Word) mercury__psqueue__CordA_17, (MR_Word) mercury__psqueue__CordB_18);
              }
              *mercury__psqueue__Cord_6 = (MR_Word) mercury__psqueue__conv0_Cord_6;
            }
        }
        break;
      case (MR_Integer) 2:
        *mercury__psqueue__Cord_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
    }
  }
}

MR_bool MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_101_113_95_95_91_86_32_61_32_105_110_116_93_95_48_95_49_2_p_0(
  MR_Integer mercury__psqueue__ValLeft_3,
  MR_Integer mercury__psqueue__ValRight_4)
{
  {
    MR_bool mercury__psqueue__succeeded = (mercury__psqueue__ValLeft_3 < mercury__psqueue__ValRight_4);
    MR_Word mercury__psqueue__CMP_5;

    if (mercury__psqueue__succeeded)
      mercury__psqueue__CMP_5 = (MR_Integer) 1;
    else
      {
        mercury__psqueue__succeeded = (mercury__psqueue__ValLeft_3 == mercury__psqueue__ValRight_4);
        if (mercury__psqueue__succeeded)
          mercury__psqueue__CMP_5 = (MR_Integer) 0;
        else
          mercury__psqueue__CMP_5 = (MR_Integer) 2;
      }
    switch (mercury__psqueue__CMP_5) {
      default:
        mercury__psqueue__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 1:
        mercury__psqueue__succeeded = MR_TRUE;
        break;
      case (MR_Integer) 0:
        mercury__psqueue__succeeded = MR_TRUE;
        break;
    }
    return mercury__psqueue__succeeded;
  }
}

void MR_CALL 
mercury__psqueue____Compare____winner_2_0(
  MR_Word mercury__psqueue__TypeInfo_for_P_17,
  MR_Word mercury__psqueue__TypeInfo_for_K_18,
  MR_Word * mercury__psqueue__HeadVar__1_1,
  MR_Word mercury__psqueue__HeadVar__2_2,
  MR_Word mercury__psqueue__HeadVar__3_3)
{
  {
    MR_bool mercury__psqueue__succeeded;
    MR_Integer mercury__psqueue__CastX_15 = (MR_Integer) mercury__psqueue__HeadVar__2_2;
    MR_Integer mercury__psqueue__CastY_16 = (MR_Integer) mercury__psqueue__HeadVar__3_3;

    mercury__psqueue__succeeded = (mercury__psqueue__CastX_15 == mercury__psqueue__CastY_16);
    if (mercury__psqueue__succeeded)
      *mercury__psqueue__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Box mercury__psqueue__V_4_4 = (MR_hl_field(MR_mktag(0), mercury__psqueue__HeadVar__2_2, (MR_Integer) 0));
        MR_Box mercury__psqueue__V_5_5 = (MR_hl_field(MR_mktag(0), mercury__psqueue__HeadVar__2_2, (MR_Integer) 1));
        MR_Word mercury__psqueue__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__psqueue__HeadVar__2_2, (MR_Integer) 2)));
        MR_Box mercury__psqueue__V_7_7 = (MR_hl_field(MR_mktag(0), mercury__psqueue__HeadVar__2_2, (MR_Integer) 3));
        MR_Box mercury__psqueue__V_8_8 = (MR_hl_field(MR_mktag(0), mercury__psqueue__HeadVar__3_3, (MR_Integer) 0));
        MR_Box mercury__psqueue__V_9_9 = (MR_hl_field(MR_mktag(0), mercury__psqueue__HeadVar__3_3, (MR_Integer) 1));
        MR_Word mercury__psqueue__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__psqueue__HeadVar__3_3, (MR_Integer) 2)));
        MR_Box mercury__psqueue__V_11_11 = (MR_hl_field(MR_mktag(0), mercury__psqueue__HeadVar__3_3, (MR_Integer) 3));
        MR_Word mercury__psqueue__V_12_12;

        {
          mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_P_17, &mercury__psqueue__V_12_12, mercury__psqueue__V_4_4, mercury__psqueue__V_8_8);
        }
        mercury__psqueue__succeeded = (mercury__psqueue__V_12_12 == (MR_Integer) 0);
        mercury__psqueue__succeeded = !(mercury__psqueue__succeeded);
        if (mercury__psqueue__succeeded)
          *mercury__psqueue__HeadVar__1_1 = mercury__psqueue__V_12_12;
        else
          {
            MR_Word mercury__psqueue__V_13_13;

            {
              mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_18, &mercury__psqueue__V_13_13, mercury__psqueue__V_5_5, mercury__psqueue__V_9_9);
            }
            mercury__psqueue__succeeded = (mercury__psqueue__V_13_13 == (MR_Integer) 0);
            mercury__psqueue__succeeded = !(mercury__psqueue__succeeded);
            if (mercury__psqueue__succeeded)
              *mercury__psqueue__HeadVar__1_1 = mercury__psqueue__V_13_13;
            else
              {
                MR_Word mercury__psqueue__V_14_14;

                {
                  mercury__psqueue____Compare____loser_tree_2_0(mercury__psqueue__TypeInfo_for_P_17, mercury__psqueue__TypeInfo_for_K_18, &mercury__psqueue__V_14_14, mercury__psqueue__V_6_6, mercury__psqueue__V_10_10);
                }
                mercury__psqueue__succeeded = (mercury__psqueue__V_14_14 == (MR_Integer) 0);
                mercury__psqueue__succeeded = !(mercury__psqueue__succeeded);
                if (mercury__psqueue__succeeded)
                  *mercury__psqueue__HeadVar__1_1 = mercury__psqueue__V_14_14;
                else
                  {
                    mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_18, mercury__psqueue__HeadVar__1_1, mercury__psqueue__V_7_7, mercury__psqueue__V_11_11);
                  }
              }
          }
      }
  }
}

MR_bool MR_CALL 
mercury__psqueue____Unify____winner_2_0(
  MR_Word mercury__psqueue__TypeInfo_for_P_13,
  MR_Word mercury__psqueue__TypeInfo_for_K_14,
  MR_Word mercury__psqueue__HeadVar__1_1,
  MR_Word mercury__psqueue__HeadVar__2_2)
{
  {
    MR_bool mercury__psqueue__succeeded;
    MR_Integer mercury__psqueue__CastX_11 = (MR_Integer) mercury__psqueue__HeadVar__1_1;
    MR_Integer mercury__psqueue__CastY_12 = (MR_Integer) mercury__psqueue__HeadVar__2_2;

    mercury__psqueue__succeeded = (mercury__psqueue__CastX_11 == mercury__psqueue__CastY_12);
    if (mercury__psqueue__succeeded)
      mercury__psqueue__succeeded = MR_TRUE;
    else
      {
        MR_Box mercury__psqueue__V_3_3 = (MR_hl_field(MR_mktag(0), mercury__psqueue__HeadVar__1_1, (MR_Integer) 0));
        MR_Box mercury__psqueue__V_4_4 = (MR_hl_field(MR_mktag(0), mercury__psqueue__HeadVar__1_1, (MR_Integer) 1));
        MR_Word mercury__psqueue__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__psqueue__HeadVar__1_1, (MR_Integer) 2)));
        MR_Box mercury__psqueue__V_6_6 = (MR_hl_field(MR_mktag(0), mercury__psqueue__HeadVar__1_1, (MR_Integer) 3));
        MR_Box mercury__psqueue__V_7_7 = (MR_hl_field(MR_mktag(0), mercury__psqueue__HeadVar__2_2, (MR_Integer) 0));
        MR_Box mercury__psqueue__V_8_8 = (MR_hl_field(MR_mktag(0), mercury__psqueue__HeadVar__2_2, (MR_Integer) 1));
        MR_Word mercury__psqueue__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__psqueue__HeadVar__2_2, (MR_Integer) 2)));
        MR_Box mercury__psqueue__V_10_10 = (MR_hl_field(MR_mktag(0), mercury__psqueue__HeadVar__2_2, (MR_Integer) 3));

        {
          mercury__psqueue__succeeded = mercury__builtin__unify_2_p_0(mercury__psqueue__TypeInfo_for_P_13, mercury__psqueue__V_3_3, mercury__psqueue__V_7_7);
        }
        if (mercury__psqueue__succeeded)
          {
            {
              mercury__psqueue__succeeded = mercury__builtin__unify_2_p_0(mercury__psqueue__TypeInfo_for_K_14, mercury__psqueue__V_4_4, mercury__psqueue__V_8_8);
            }
            if (mercury__psqueue__succeeded)
              {
                {
                  mercury__psqueue__succeeded = mercury__psqueue____Unify____loser_tree_2_0(mercury__psqueue__TypeInfo_for_P_13, mercury__psqueue__TypeInfo_for_K_14, mercury__psqueue__V_5_5, mercury__psqueue__V_9_9);
                }
                if (mercury__psqueue__succeeded)
                  {
                    mercury__psqueue__succeeded = mercury__builtin__unify_2_p_0(mercury__psqueue__TypeInfo_for_K_14, mercury__psqueue__V_6_6, mercury__psqueue__V_10_10);
                  }
              }
          }
      }
    return mercury__psqueue__succeeded;
  }
}

void MR_CALL 
mercury__psqueue____Compare____tournament_view_2_0(
  MR_Word mercury__psqueue__TypeInfo_for_P_24,
  MR_Word mercury__psqueue__TypeInfo_for_K_25,
  MR_Word * mercury__psqueue__HeadVar__1_1,
  MR_Word mercury__psqueue__HeadVar__2_2,
  MR_Word mercury__psqueue__HeadVar__3_3)
{
  {
    MR_bool mercury__psqueue__succeeded;
    MR_Integer mercury__psqueue__CastX_22 = (MR_Integer) mercury__psqueue__HeadVar__2_2;
    MR_Integer mercury__psqueue__CastY_23 = (MR_Integer) mercury__psqueue__HeadVar__3_3;

    mercury__psqueue__succeeded = (mercury__psqueue__CastX_22 == mercury__psqueue__CastY_23);
    if (mercury__psqueue__succeeded)
      *mercury__psqueue__HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) mercury__psqueue__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Box mercury__psqueue__V_30_30 = (MR_hl_field(MR_mktag(0), mercury__psqueue__HeadVar__2_2, (MR_Integer) 1));
        MR_Box mercury__psqueue__V_31_31 = (MR_hl_field(MR_mktag(0), mercury__psqueue__HeadVar__2_2, (MR_Integer) 0));

        if (((MR_tag((MR_Word) mercury__psqueue__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_Box mercury__psqueue__V_6_6 = (MR_hl_field(MR_mktag(0), mercury__psqueue__HeadVar__3_3, (MR_Integer) 0));
            MR_Box mercury__psqueue__V_7_7 = (MR_hl_field(MR_mktag(0), mercury__psqueue__HeadVar__3_3, (MR_Integer) 1));
            MR_Word mercury__psqueue__V_8_8;

            {
              mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_P_24, &mercury__psqueue__V_8_8, mercury__psqueue__V_31_31, mercury__psqueue__V_6_6);
            }
            mercury__psqueue__succeeded = (mercury__psqueue__V_8_8 == (MR_Integer) 0);
            mercury__psqueue__succeeded = !(mercury__psqueue__succeeded);
            if (mercury__psqueue__succeeded)
              *mercury__psqueue__HeadVar__1_1 = mercury__psqueue__V_8_8;
            else
              {
                mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_25, mercury__psqueue__HeadVar__1_1, mercury__psqueue__V_30_30, mercury__psqueue__V_7_7);
              }
          }
        else
          *mercury__psqueue__HeadVar__1_1 = (MR_Integer) 1;
      }
    else
      {
        MR_Word mercury__psqueue__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mercury__psqueue__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) mercury__psqueue__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
          *mercury__psqueue__HeadVar__1_1 = (MR_Integer) 2;
        else
          {
            MR_Word mercury__psqueue__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word mercury__psqueue__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word mercury__psqueue__V_21_21;

            {
              mercury__psqueue____Compare____winner_2_0(mercury__psqueue__TypeInfo_for_P_24, mercury__psqueue__TypeInfo_for_K_25, &mercury__psqueue__V_21_21, mercury__psqueue__V_33_33, mercury__psqueue__V_19_19);
            }
            mercury__psqueue__succeeded = (mercury__psqueue__V_21_21 == (MR_Integer) 0);
            mercury__psqueue__succeeded = !(mercury__psqueue__succeeded);
            if (mercury__psqueue__succeeded)
              *mercury__psqueue__HeadVar__1_1 = mercury__psqueue__V_21_21;
            else
              {
                mercury__psqueue____Compare____winner_2_0(mercury__psqueue__TypeInfo_for_P_24, mercury__psqueue__TypeInfo_for_K_25, mercury__psqueue__HeadVar__1_1, mercury__psqueue__V_32_32, mercury__psqueue__V_20_20);
              }
          }
      }
  }
}

MR_bool MR_CALL 
mercury__psqueue____Unify____tournament_view_2_0(
  MR_Word mercury__psqueue__TypeInfo_for_P_13,
  MR_Word mercury__psqueue__TypeInfo_for_K_14,
  MR_Word mercury__psqueue__HeadVar__1_1,
  MR_Word mercury__psqueue__HeadVar__2_2)
{
  {
    MR_bool mercury__psqueue__succeeded;
    MR_Integer mercury__psqueue__CastX_11 = (MR_Integer) mercury__psqueue__HeadVar__1_1;
    MR_Integer mercury__psqueue__CastY_12 = (MR_Integer) mercury__psqueue__HeadVar__2_2;

    mercury__psqueue__succeeded = (mercury__psqueue__CastX_11 == mercury__psqueue__CastY_12);
    if (mercury__psqueue__succeeded)
      mercury__psqueue__succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) mercury__psqueue__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Box mercury__psqueue__V_3_3 = (MR_hl_field(MR_mktag(0), mercury__psqueue__HeadVar__1_1, (MR_Integer) 0));
        MR_Box mercury__psqueue__V_4_4 = (MR_hl_field(MR_mktag(0), mercury__psqueue__HeadVar__1_1, (MR_Integer) 1));
        MR_Box mercury__psqueue__V_5_5;
        MR_Box mercury__psqueue__V_6_6;

        mercury__psqueue__succeeded = ((MR_tag((MR_Word) mercury__psqueue__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
        if (mercury__psqueue__succeeded)
          {
            mercury__psqueue__V_5_5 = (MR_hl_field(MR_mktag(0), mercury__psqueue__HeadVar__2_2, (MR_Integer) 0));
            mercury__psqueue__V_6_6 = (MR_hl_field(MR_mktag(0), mercury__psqueue__HeadVar__2_2, (MR_Integer) 1));
            {
              mercury__psqueue__succeeded = mercury__builtin__unify_2_p_0(mercury__psqueue__TypeInfo_for_P_13, mercury__psqueue__V_3_3, mercury__psqueue__V_5_5);
            }
            if (mercury__psqueue__succeeded)
              {
                mercury__psqueue__succeeded = mercury__builtin__unify_2_p_0(mercury__psqueue__TypeInfo_for_K_14, mercury__psqueue__V_4_4, mercury__psqueue__V_6_6);
              }
          }
      }
    else
      {
        MR_Word mercury__psqueue__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mercury__psqueue__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mercury__psqueue__V_9_9;
        MR_Word mercury__psqueue__V_10_10;

        mercury__psqueue__succeeded = ((MR_tag((MR_Word) mercury__psqueue__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (mercury__psqueue__succeeded)
          {
            mercury__psqueue__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__2_2, (MR_Integer) 0)));
            mercury__psqueue__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__2_2, (MR_Integer) 1)));
            {
              mercury__psqueue__succeeded = mercury__psqueue____Unify____winner_2_0(mercury__psqueue__TypeInfo_for_P_13, mercury__psqueue__TypeInfo_for_K_14, mercury__psqueue__V_7_7, mercury__psqueue__V_9_9);
            }
            if (mercury__psqueue__succeeded)
              {
                mercury__psqueue__succeeded = mercury__psqueue____Unify____winner_2_0(mercury__psqueue__TypeInfo_for_P_13, mercury__psqueue__TypeInfo_for_K_14, mercury__psqueue__V_8_8, mercury__psqueue__V_10_10);
              }
          }
      }
    return mercury__psqueue__succeeded;
  }
}

void MR_CALL 
mercury__psqueue____Compare____psqueue_2_0(
  MR_Word mercury__psqueue__TypeInfo_for_P_10,
  MR_Word mercury__psqueue__TypeInfo_for_K_11,
  MR_Word * mercury__psqueue__HeadVar__1_1,
  MR_Word mercury__psqueue__HeadVar__2_2,
  MR_Word mercury__psqueue__HeadVar__3_3)
{
  {
    MR_bool mercury__psqueue__succeeded;
    MR_Integer mercury__psqueue__CastX_8 = (MR_Integer) mercury__psqueue__HeadVar__2_2;
    MR_Integer mercury__psqueue__CastY_9 = (MR_Integer) mercury__psqueue__HeadVar__3_3;

    mercury__psqueue__succeeded = (mercury__psqueue__CastX_8 == mercury__psqueue__CastY_9);
    if (mercury__psqueue__succeeded)
      *mercury__psqueue__HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((mercury__psqueue__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((mercury__psqueue__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *mercury__psqueue__HeadVar__1_1 = (MR_Integer) 0;
      else
        *mercury__psqueue__HeadVar__1_1 = (MR_Integer) 1;
    else
      {
        MR_Word mercury__psqueue__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__2_2, (MR_Integer) 0)));

        if ((mercury__psqueue__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__psqueue__HeadVar__1_1 = (MR_Integer) 2;
        else
          {
            MR_Word mercury__psqueue__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__3_3, (MR_Integer) 0)));

            {
              mercury__psqueue____Compare____winner_2_0(mercury__psqueue__TypeInfo_for_P_10, mercury__psqueue__TypeInfo_for_K_11, mercury__psqueue__HeadVar__1_1, mercury__psqueue__V_14_14, mercury__psqueue__V_7_7);
            }
          }
      }
  }
}

MR_bool MR_CALL 
mercury__psqueue____Unify____psqueue_2_0(
  MR_Word mercury__psqueue__TypeInfo_for_P_9,
  MR_Word mercury__psqueue__TypeInfo_for_K_10,
  MR_Word mercury__psqueue__HeadVar__1_1,
  MR_Word mercury__psqueue__HeadVar__2_2)
{
  {
    MR_bool mercury__psqueue__succeeded;
    MR_Integer mercury__psqueue__CastX_7 = (MR_Integer) mercury__psqueue__HeadVar__1_1;
    MR_Integer mercury__psqueue__CastY_8 = (MR_Integer) mercury__psqueue__HeadVar__2_2;

    mercury__psqueue__succeeded = (mercury__psqueue__CastX_7 == mercury__psqueue__CastY_8);
    if (mercury__psqueue__succeeded)
      mercury__psqueue__succeeded = MR_TRUE;
    else
    if ((mercury__psqueue__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Integer mercury__psqueue__CastX_3 = (MR_Integer) mercury__psqueue__HeadVar__1_1;
        MR_Integer mercury__psqueue__CastY_4 = (MR_Integer) mercury__psqueue__HeadVar__2_2;

        mercury__psqueue__succeeded = (mercury__psqueue__CastY_4 == mercury__psqueue__CastX_3);
      }
    else
      {
        MR_Word mercury__psqueue__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mercury__psqueue__V_6_6;

        mercury__psqueue__succeeded = ((MR_tag((MR_Word) mercury__psqueue__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (mercury__psqueue__succeeded)
          {
            mercury__psqueue__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__2_2, (MR_Integer) 0)));
            {
              mercury__psqueue__succeeded = mercury__psqueue____Unify____winner_2_0(mercury__psqueue__TypeInfo_for_P_9, mercury__psqueue__TypeInfo_for_K_10, mercury__psqueue__V_5_5, mercury__psqueue__V_6_6);
            }
          }
      }
    return mercury__psqueue__succeeded;
  }
}

void MR_CALL 
mercury__psqueue____Compare____loser_tree_size_0_0(
  MR_Word * mercury__psqueue__HeadVar__1_1,
  MR_Integer mercury__psqueue__HeadVar__2_2,
  MR_Integer mercury__psqueue__HeadVar__3_3)
{
  {
    MR_bool mercury__psqueue__succeeded;
    MR_Integer mercury__psqueue__Cast_HeadVar1_4 = mercury__psqueue__HeadVar__2_2;
    MR_Integer mercury__psqueue__Cast_HeadVar2_5 = mercury__psqueue__HeadVar__3_3;

    mercury__psqueue__succeeded = (mercury__psqueue__Cast_HeadVar1_4 < mercury__psqueue__Cast_HeadVar2_5);
    if (mercury__psqueue__succeeded)
      *mercury__psqueue__HeadVar__1_1 = (MR_Integer) 1;
    else
      {
        mercury__psqueue__succeeded = (mercury__psqueue__Cast_HeadVar1_4 == mercury__psqueue__Cast_HeadVar2_5);
        if (mercury__psqueue__succeeded)
          *mercury__psqueue__HeadVar__1_1 = (MR_Integer) 0;
        else
          *mercury__psqueue__HeadVar__1_1 = (MR_Integer) 2;
      }
  }
}

MR_bool MR_CALL 
mercury__psqueue____Unify____loser_tree_size_0_0(
  MR_Integer mercury__psqueue__HeadVar__1_1,
  MR_Integer mercury__psqueue__HeadVar__2_2)
{
  {
    MR_bool mercury__psqueue__succeeded;
    MR_Integer mercury__psqueue__Cast_HeadVar1_3 = mercury__psqueue__HeadVar__1_1;
    MR_Integer mercury__psqueue__Cast_HeadVar2_4 = mercury__psqueue__HeadVar__2_2;

    mercury__psqueue__succeeded = (mercury__psqueue__Cast_HeadVar1_3 == mercury__psqueue__Cast_HeadVar2_4);
    return mercury__psqueue__succeeded;
  }
}

void MR_CALL 
mercury__psqueue____Compare____loser_tree_2_0(
  MR_Word mercury__psqueue__TypeInfo_for_P_35,
  MR_Word mercury__psqueue__TypeInfo_for_K_36,
  MR_Word * mercury__psqueue__HeadVar__1_1,
  MR_Word mercury__psqueue__HeadVar__2_2,
  MR_Word mercury__psqueue__HeadVar__3_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__psqueue__succeeded;
        MR_Integer mercury__psqueue__CastX_33 = (MR_Integer) mercury__psqueue__HeadVar__2_2;
        MR_Integer mercury__psqueue__CastY_34 = (MR_Integer) mercury__psqueue__HeadVar__3_3;

        mercury__psqueue__succeeded = (mercury__psqueue__CastX_33 == mercury__psqueue__CastY_34);
        if (mercury__psqueue__succeeded)
          *mercury__psqueue__HeadVar__1_1 = (MR_Integer) 0;
        else
        if ((mercury__psqueue__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          if ((mercury__psqueue__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            *mercury__psqueue__HeadVar__1_1 = (MR_Integer) 0;
          else
            *mercury__psqueue__HeadVar__1_1 = (MR_Integer) 1;
        else
          {
            MR_Word mercury__psqueue__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__2_2, (MR_Integer) 5)));
            MR_Box mercury__psqueue__V_43_43 = (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__2_2, (MR_Integer) 4));
            MR_Word mercury__psqueue__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__2_2, (MR_Integer) 3)));
            MR_Box mercury__psqueue__V_45_45 = (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__2_2, (MR_Integer) 2));
            MR_Box mercury__psqueue__V_46_46 = (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__2_2, (MR_Integer) 1));
            MR_Integer mercury__psqueue__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__2_2, (MR_Integer) 0)));

            if ((mercury__psqueue__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *mercury__psqueue__HeadVar__1_1 = (MR_Integer) 2;
            else
              {
                MR_Integer mercury__psqueue__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__3_3, (MR_Integer) 0)));
                MR_Box mercury__psqueue__V_23_23 = (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__3_3, (MR_Integer) 1));
                MR_Box mercury__psqueue__V_24_24 = (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__3_3, (MR_Integer) 2));
                MR_Word mercury__psqueue__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__3_3, (MR_Integer) 3)));
                MR_Box mercury__psqueue__V_26_26 = (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__3_3, (MR_Integer) 4));
                MR_Word mercury__psqueue__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__3_3, (MR_Integer) 5)));
                MR_Word mercury__psqueue__V_28_28;

                mercury__psqueue__succeeded = (mercury__psqueue__V_47_47 < mercury__psqueue__V_22_22);
                if (mercury__psqueue__succeeded)
                  mercury__psqueue__V_28_28 = (MR_Integer) 1;
                else
                  {
                    mercury__psqueue__succeeded = (mercury__psqueue__V_47_47 == mercury__psqueue__V_22_22);
                    if (mercury__psqueue__succeeded)
                      mercury__psqueue__V_28_28 = (MR_Integer) 0;
                    else
                      mercury__psqueue__V_28_28 = (MR_Integer) 2;
                  }
                mercury__psqueue__succeeded = (mercury__psqueue__V_28_28 == (MR_Integer) 0);
                mercury__psqueue__succeeded = !(mercury__psqueue__succeeded);
                if (mercury__psqueue__succeeded)
                  *mercury__psqueue__HeadVar__1_1 = mercury__psqueue__V_28_28;
                else
                  {
                    MR_Word mercury__psqueue__V_29_29;

                    {
                      mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_P_35, &mercury__psqueue__V_29_29, mercury__psqueue__V_46_46, mercury__psqueue__V_23_23);
                    }
                    mercury__psqueue__succeeded = (mercury__psqueue__V_29_29 == (MR_Integer) 0);
                    mercury__psqueue__succeeded = !(mercury__psqueue__succeeded);
                    if (mercury__psqueue__succeeded)
                      *mercury__psqueue__HeadVar__1_1 = mercury__psqueue__V_29_29;
                    else
                      {
                        MR_Word mercury__psqueue__V_30_30;

                        {
                          mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_36, &mercury__psqueue__V_30_30, mercury__psqueue__V_45_45, mercury__psqueue__V_24_24);
                        }
                        mercury__psqueue__succeeded = (mercury__psqueue__V_30_30 == (MR_Integer) 0);
                        mercury__psqueue__succeeded = !(mercury__psqueue__succeeded);
                        if (mercury__psqueue__succeeded)
                          *mercury__psqueue__HeadVar__1_1 = mercury__psqueue__V_30_30;
                        else
                          {
                            MR_Word mercury__psqueue__V_31_31;

                            {
                              mercury__psqueue____Compare____loser_tree_2_0(mercury__psqueue__TypeInfo_for_P_35, mercury__psqueue__TypeInfo_for_K_36, &mercury__psqueue__V_31_31, mercury__psqueue__V_44_44, mercury__psqueue__V_25_25);
                            }
                            mercury__psqueue__succeeded = (mercury__psqueue__V_31_31 == (MR_Integer) 0);
                            mercury__psqueue__succeeded = !(mercury__psqueue__succeeded);
                            if (mercury__psqueue__succeeded)
                              *mercury__psqueue__HeadVar__1_1 = mercury__psqueue__V_31_31;
                            else
                              {
                                MR_Word mercury__psqueue__V_32_32;

                                {
                                  mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_36, &mercury__psqueue__V_32_32, mercury__psqueue__V_43_43, mercury__psqueue__V_26_26);
                                }
                                mercury__psqueue__succeeded = (mercury__psqueue__V_32_32 == (MR_Integer) 0);
                                mercury__psqueue__succeeded = !(mercury__psqueue__succeeded);
                                if (mercury__psqueue__succeeded)
                                  *mercury__psqueue__HeadVar__1_1 = mercury__psqueue__V_32_32;
                                else
                                  {
                                    /* direct tailcall eliminated */
                                    {
                                      MR_Word mercury__psqueue__HeadVar__2__tmp_copy_2 = mercury__psqueue__V_42_42;
                                      MR_Word mercury__psqueue__HeadVar__3__tmp_copy_3 = mercury__psqueue__V_27_27;

                                      mercury__psqueue__HeadVar__3_3 = mercury__psqueue__HeadVar__3__tmp_copy_3;
                                      mercury__psqueue__HeadVar__2_2 = mercury__psqueue__HeadVar__2__tmp_copy_2;
                                    }
                                    continue;
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
}

MR_bool MR_CALL 
mercury__psqueue____Unify____loser_tree_2_0(
  MR_Word mercury__psqueue__TypeInfo_for_P_19,
  MR_Word mercury__psqueue__TypeInfo_for_K_20,
  MR_Word mercury__psqueue__HeadVar__1_1,
  MR_Word mercury__psqueue__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__psqueue__succeeded;
        MR_Integer mercury__psqueue__CastX_17 = (MR_Integer) mercury__psqueue__HeadVar__1_1;
        MR_Integer mercury__psqueue__CastY_18 = (MR_Integer) mercury__psqueue__HeadVar__2_2;

        mercury__psqueue__succeeded = (mercury__psqueue__CastX_17 == mercury__psqueue__CastY_18);
        if (mercury__psqueue__succeeded)
          mercury__psqueue__succeeded = MR_TRUE;
        else
        if ((mercury__psqueue__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Integer mercury__psqueue__CastX_3 = (MR_Integer) mercury__psqueue__HeadVar__1_1;
            MR_Integer mercury__psqueue__CastY_4 = (MR_Integer) mercury__psqueue__HeadVar__2_2;

            mercury__psqueue__succeeded = (mercury__psqueue__CastY_4 == mercury__psqueue__CastX_3);
          }
        else
          {
            MR_Integer mercury__psqueue__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__1_1, (MR_Integer) 0)));
            MR_Box mercury__psqueue__V_6_6 = (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__1_1, (MR_Integer) 1));
            MR_Box mercury__psqueue__V_7_7 = (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__1_1, (MR_Integer) 2));
            MR_Word mercury__psqueue__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__1_1, (MR_Integer) 3)));
            MR_Box mercury__psqueue__V_9_9 = (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__1_1, (MR_Integer) 4));
            MR_Word mercury__psqueue__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__1_1, (MR_Integer) 5)));
            MR_Integer mercury__psqueue__V_11_11;
            MR_Box mercury__psqueue__V_12_12;
            MR_Box mercury__psqueue__V_13_13;
            MR_Word mercury__psqueue__V_14_14;
            MR_Box mercury__psqueue__V_15_15;
            MR_Word mercury__psqueue__V_16_16;

            mercury__psqueue__succeeded = ((MR_tag((MR_Word) mercury__psqueue__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__psqueue__succeeded)
              {
                mercury__psqueue__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__2_2, (MR_Integer) 0)));
                mercury__psqueue__V_12_12 = (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__2_2, (MR_Integer) 1));
                mercury__psqueue__V_13_13 = (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__2_2, (MR_Integer) 2));
                mercury__psqueue__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__2_2, (MR_Integer) 3)));
                mercury__psqueue__V_15_15 = (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__2_2, (MR_Integer) 4));
                mercury__psqueue__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__2_2, (MR_Integer) 5)));
                mercury__psqueue__succeeded = (mercury__psqueue__V_5_5 == mercury__psqueue__V_11_11);
                if (mercury__psqueue__succeeded)
                  {
                    {
                      mercury__psqueue__succeeded = mercury__builtin__unify_2_p_0(mercury__psqueue__TypeInfo_for_P_19, mercury__psqueue__V_6_6, mercury__psqueue__V_12_12);
                    }
                    if (mercury__psqueue__succeeded)
                      {
                        {
                          mercury__psqueue__succeeded = mercury__builtin__unify_2_p_0(mercury__psqueue__TypeInfo_for_K_20, mercury__psqueue__V_7_7, mercury__psqueue__V_13_13);
                        }
                        if (mercury__psqueue__succeeded)
                          {
                            {
                              mercury__psqueue__succeeded = mercury__psqueue____Unify____loser_tree_2_0(mercury__psqueue__TypeInfo_for_P_19, mercury__psqueue__TypeInfo_for_K_20, mercury__psqueue__V_8_8, mercury__psqueue__V_14_14);
                            }
                            if (mercury__psqueue__succeeded)
                              {
                                {
                                  mercury__psqueue__succeeded = mercury__builtin__unify_2_p_0(mercury__psqueue__TypeInfo_for_K_20, mercury__psqueue__V_9_9, mercury__psqueue__V_15_15);
                                }
                                if (mercury__psqueue__succeeded)
                                  {
                                    /* direct tailcall eliminated */
                                    {
                                      MR_Word mercury__psqueue__HeadVar__1__tmp_copy_1 = mercury__psqueue__V_10_10;
                                      MR_Word mercury__psqueue__HeadVar__2__tmp_copy_2 = mercury__psqueue__V_16_16;

                                      mercury__psqueue__HeadVar__2_2 = mercury__psqueue__HeadVar__2__tmp_copy_2;
                                      mercury__psqueue__HeadVar__1_1 = mercury__psqueue__HeadVar__1__tmp_copy_1;
                                    }
                                    continue;
                                  }
                              }
                          }
                      }
                  }
              }
          }
        return mercury__psqueue__succeeded;
      }
      break;
    }
}

static MR_String MR_CALL 
mercury__psqueue__dump_loser_tree_2_f_0(
  MR_Word mercury__psqueue__TypeInfo_for_P_46,
  MR_Word mercury__psqueue__TypeInfo_for_K_47,
  MR_Integer mercury__psqueue__Indent_4,
  MR_Word mercury__psqueue__LTree_5)
{
  {
    MR_bool mercury__psqueue__succeeded;
    MR_String mercury__psqueue__Str_6;
    MR_Word mercury__psqueue__TypeCtorInfo_8_57 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
    MR_String mercury__psqueue__IndentStr_7;
    MR_Integer mercury__psqueue__V_51_51 = (mercury__psqueue__Indent_4 * (MR_Integer) 2);
    MR_Word mercury__psqueue__V_7_56;
    MR_Word mercury__psqueue__V_7_61 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__list__accumulate_n_copies_4_p_0(mercury__psqueue__TypeCtorInfo_8_57, mercury__psqueue__V_51_51, ((MR_Box) (MR_Word) ((MR_Char) 32)), mercury__psqueue__V_7_61, &mercury__psqueue__V_7_56);
    }
    {
      mercury__string__from_char_list_2_p_0(mercury__psqueue__V_7_56, &mercury__psqueue__IndentStr_7);
    }
    if ((mercury__psqueue__LTree_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__string__append_3_p_2(mercury__psqueue__IndentStr_7, (MR_String) "loser_leaf\n", &mercury__psqueue__Str_6);
        }
      }
    else
      {
        MR_Integer mercury__psqueue__Size_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_5, (MR_Integer) 0)));
        MR_Box mercury__psqueue__LoserPrio_9 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_5, (MR_Integer) 1));
        MR_Box mercury__psqueue__LoserKey_10 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_5, (MR_Integer) 2));
        MR_Word mercury__psqueue__LTreeL_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_5, (MR_Integer) 3)));
        MR_Box mercury__psqueue__SplitKey_12 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_5, (MR_Integer) 4));
        MR_Word mercury__psqueue__LTreeR_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_5, (MR_Integer) 5)));
        MR_String mercury__psqueue__V_14_14;
        MR_String mercury__psqueue__V_16_16;
        MR_String mercury__psqueue__V_17_17;
        MR_String mercury__psqueue__V_18_18;
        MR_String mercury__psqueue__V_20_20;
        MR_String mercury__psqueue__V_21_21;
        MR_String mercury__psqueue__V_22_22;
        MR_String mercury__psqueue__V_24_24;
        MR_String mercury__psqueue__V_25_25;
        MR_String mercury__psqueue__V_26_26;
        MR_String mercury__psqueue__V_28_28;
        MR_String mercury__psqueue__V_29_29;
        MR_Integer mercury__psqueue__V_30_30;
        MR_String mercury__psqueue__V_32_32;
        MR_String mercury__psqueue__V_33_33;
        MR_String mercury__psqueue__V_35_35;
        MR_String mercury__psqueue__V_36_36;
        MR_String mercury__psqueue__V_37_37;
        MR_String mercury__psqueue__V_39_39;
        MR_String mercury__psqueue__V_40_40;
        MR_Integer mercury__psqueue__V_41_41;
        MR_String mercury__psqueue__V_43_43;

        {
          mercury__string__int_to_base_string_3_p_0(mercury__psqueue__Size_8, (MR_Integer) 10, &mercury__psqueue__V_17_17);
        }
        {
          mercury__psqueue__V_21_21 = mercury__string__string_1_f_0(mercury__psqueue__TypeInfo_for_P_46, mercury__psqueue__LoserPrio_9);
        }
        {
          mercury__psqueue__V_25_25 = mercury__string__string_1_f_0(mercury__psqueue__TypeInfo_for_K_47, mercury__psqueue__LoserKey_10);
        }
        mercury__psqueue__V_30_30 = (mercury__psqueue__Indent_4 + (MR_Integer) 1);
        {
          mercury__psqueue__V_29_29 = mercury__psqueue__dump_loser_tree_2_f_0(mercury__psqueue__TypeInfo_for_P_46, mercury__psqueue__TypeInfo_for_K_47, mercury__psqueue__V_30_30, mercury__psqueue__LTreeL_11);
        }
        {
          mercury__psqueue__V_36_36 = mercury__string__string_1_f_0(mercury__psqueue__TypeInfo_for_K_47, mercury__psqueue__SplitKey_12);
        }
        mercury__psqueue__V_41_41 = (mercury__psqueue__Indent_4 + (MR_Integer) 1);
        {
          mercury__psqueue__V_40_40 = mercury__psqueue__dump_loser_tree_2_f_0(mercury__psqueue__TypeInfo_for_P_46, mercury__psqueue__TypeInfo_for_K_47, mercury__psqueue__V_41_41, mercury__psqueue__LTreeR_13);
        }
        {
          mercury__string__append_3_p_2(mercury__psqueue__IndentStr_7, (MR_String) ")\n", &mercury__psqueue__V_43_43);
        }
        {
          mercury__string__append_3_p_2(mercury__psqueue__V_40_40, mercury__psqueue__V_43_43, &mercury__psqueue__V_39_39);
        }
        {
          mercury__string__append_3_p_2((MR_String) "\n", mercury__psqueue__V_39_39, &mercury__psqueue__V_37_37);
        }
        {
          mercury__psqueue__V_35_35 = mercury__string__f_43_43_2_f_0(mercury__psqueue__V_36_36, mercury__psqueue__V_37_37);
        }
        {
          mercury__psqueue__V_33_33 = mercury__string__f_43_43_2_f_0((MR_String) "split key ", mercury__psqueue__V_35_35);
        }
        {
          mercury__psqueue__V_32_32 = mercury__string__f_43_43_2_f_0(mercury__psqueue__IndentStr_7, mercury__psqueue__V_33_33);
        }
        {
          mercury__psqueue__V_28_28 = mercury__string__f_43_43_2_f_0(mercury__psqueue__V_29_29, mercury__psqueue__V_32_32);
        }
        {
          mercury__psqueue__V_26_26 = mercury__string__f_43_43_2_f_0((MR_String) "\n", mercury__psqueue__V_28_28);
        }
        {
          mercury__psqueue__V_24_24 = mercury__string__f_43_43_2_f_0(mercury__psqueue__V_25_25, mercury__psqueue__V_26_26);
        }
        {
          mercury__psqueue__V_22_22 = mercury__string__f_43_43_2_f_0((MR_String) ", key ", mercury__psqueue__V_24_24);
        }
        {
          mercury__psqueue__V_20_20 = mercury__string__f_43_43_2_f_0(mercury__psqueue__V_21_21, mercury__psqueue__V_22_22);
        }
        {
          mercury__psqueue__V_18_18 = mercury__string__f_43_43_2_f_0((MR_String) ", prio ", mercury__psqueue__V_20_20);
        }
        {
          mercury__psqueue__V_16_16 = mercury__string__f_43_43_2_f_0(mercury__psqueue__V_17_17, mercury__psqueue__V_18_18);
        }
        {
          mercury__psqueue__V_14_14 = mercury__string__f_43_43_2_f_0((MR_String) "loser_node(size ", mercury__psqueue__V_16_16);
        }
        {
          mercury__psqueue__Str_6 = mercury__string__f_43_43_2_f_0(mercury__psqueue__IndentStr_7, mercury__psqueue__V_14_14);
        }
      }
    return mercury__psqueue__Str_6;
  }
}

MR_String MR_CALL 
mercury__psqueue__dump_winner_2_f_0(
  MR_Word mercury__psqueue__TypeInfo_for_P_32,
  MR_Word mercury__psqueue__TypeInfo_for_K_33,
  MR_Integer mercury__psqueue__Indent_4,
  MR_Word mercury__psqueue__Winner_5)
{
  {
    MR_bool mercury__psqueue__succeeded;
    MR_String mercury__psqueue__Str_6;
    MR_Word mercury__psqueue__TypeCtorInfo_8_43 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
    MR_Word mercury__psqueue__TypeCtorInfo_13_64;
    MR_Word mercury__psqueue__TypeClassInfo_for_op_table_73;
    MR_String mercury__psqueue__IndentStr_7;
    MR_Box mercury__psqueue__WinnerPrio_8;
    MR_Box mercury__psqueue__WinnerKey_9;
    MR_Word mercury__psqueue__LTree_10;
    MR_Box mercury__psqueue__MaxKey_11;
    MR_String mercury__psqueue__V_12_12;
    MR_String mercury__psqueue__V_14_14;
    MR_String mercury__psqueue__V_15_15;
    MR_String mercury__psqueue__V_16_16;
    MR_String mercury__psqueue__V_18_18;
    MR_String mercury__psqueue__V_19_19;
    MR_String mercury__psqueue__V_20_20;
    MR_String mercury__psqueue__V_22_22;
    MR_String mercury__psqueue__V_23_23;
    MR_String mercury__psqueue__V_24_24;
    MR_String mercury__psqueue__V_26_26;
    MR_String mercury__psqueue__V_27_27;
    MR_Integer mercury__psqueue__V_28_28;
    MR_String mercury__psqueue__V_30_30;
    MR_Integer mercury__psqueue__V_37_37 = (mercury__psqueue__Indent_4 * (MR_Integer) 2);
    MR_Word mercury__psqueue__V_7_42;
    MR_Word mercury__psqueue__V_7_47 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__psqueue__V_10_61;
    MR_Word mercury__psqueue__V_9_62;
    MR_Word mercury__psqueue__V_11_63;
    MR_Integer mercury__psqueue__V_10_70;
    MR_Integer mercury__psqueue__V_13_71;
    MR_Box MR_CALL (* mercury__psqueue__func_0)(MR_Box, MR_Box);
    MR_Box mercury__psqueue__conv1_V_13_71;

    {
      mercury__list__accumulate_n_copies_4_p_0(mercury__psqueue__TypeCtorInfo_8_43, mercury__psqueue__V_37_37, ((MR_Box) (MR_Word) ((MR_Char) 32)), mercury__psqueue__V_7_47, &mercury__psqueue__V_7_42);
    }
    {
      mercury__string__from_char_list_2_p_0(mercury__psqueue__V_7_42, &mercury__psqueue__IndentStr_7);
    }
    mercury__psqueue__WinnerPrio_8 = (MR_hl_field(MR_mktag(0), mercury__psqueue__Winner_5, (MR_Integer) 0));
    mercury__psqueue__WinnerKey_9 = (MR_hl_field(MR_mktag(0), mercury__psqueue__Winner_5, (MR_Integer) 1));
    mercury__psqueue__LTree_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__psqueue__Winner_5, (MR_Integer) 2)));
    mercury__psqueue__MaxKey_11 = (MR_hl_field(MR_mktag(0), mercury__psqueue__Winner_5, (MR_Integer) 3));
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
    mercury__psqueue__V_10_61 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__psqueue__TypeClassInfo_for_op_table_73 = (MR_Word) &mercury__psqueue_scalar_common_1[0];
    mercury__psqueue__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__psqueue__TypeClassInfo_for_op_table_73, (MR_Integer) 0)), (MR_Integer) 12)));
    {
      mercury__psqueue__conv1_V_13_71 = mercury__psqueue__func_0(((MR_Box) mercury__psqueue__TypeClassInfo_for_op_table_73), ((MR_Box) ((MR_Integer) 0)));
    }
    mercury__psqueue__V_13_71 = ((MR_Integer) mercury__psqueue__conv1_V_13_71);
    mercury__psqueue__V_10_70 = (mercury__psqueue__V_13_71 + (MR_Integer) 1);
    {
      mercury__string__to_string__value_to_revstrings_prio_6_p_1(mercury__psqueue__TypeInfo_for_P_32, (MR_Integer) 1, mercury__psqueue__V_10_70, mercury__psqueue__WinnerPrio_8, mercury__psqueue__V_10_61, &mercury__psqueue__V_9_62);
    }
    mercury__psqueue__TypeCtorInfo_13_64 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      mercury__list__reverse_2_p_0(mercury__psqueue__TypeCtorInfo_13_64, mercury__psqueue__V_9_62, &mercury__psqueue__V_11_63);
    }
    {
      mercury__psqueue__V_15_15 = mercury__string__append_list_1_f_0(mercury__psqueue__V_11_63);
    }
    {
      mercury__psqueue__V_19_19 = mercury__string__string_1_f_0(mercury__psqueue__TypeInfo_for_K_33, mercury__psqueue__WinnerKey_9);
    }
    {
      mercury__psqueue__V_23_23 = mercury__string__string_1_f_0(mercury__psqueue__TypeInfo_for_K_33, mercury__psqueue__MaxKey_11);
    }
    mercury__psqueue__V_28_28 = (mercury__psqueue__Indent_4 + (MR_Integer) 1);
    {
      mercury__psqueue__V_27_27 = mercury__psqueue__dump_loser_tree_2_f_0(mercury__psqueue__TypeInfo_for_P_32, mercury__psqueue__TypeInfo_for_K_33, mercury__psqueue__V_28_28, mercury__psqueue__LTree_10);
    }
    {
      mercury__string__append_3_p_2(mercury__psqueue__IndentStr_7, (MR_String) ")\n", &mercury__psqueue__V_30_30);
    }
    {
      mercury__string__append_3_p_2(mercury__psqueue__V_27_27, mercury__psqueue__V_30_30, &mercury__psqueue__V_26_26);
    }
    {
      mercury__string__append_3_p_2((MR_String) ",\n", mercury__psqueue__V_26_26, &mercury__psqueue__V_24_24);
    }
    {
      mercury__psqueue__V_22_22 = mercury__string__f_43_43_2_f_0(mercury__psqueue__V_23_23, mercury__psqueue__V_24_24);
    }
    {
      mercury__psqueue__V_20_20 = mercury__string__f_43_43_2_f_0((MR_String) ", maxkey ", mercury__psqueue__V_22_22);
    }
    {
      mercury__psqueue__V_18_18 = mercury__string__f_43_43_2_f_0(mercury__psqueue__V_19_19, mercury__psqueue__V_20_20);
    }
    {
      mercury__psqueue__V_16_16 = mercury__string__f_43_43_2_f_0((MR_String) ", key ", mercury__psqueue__V_18_18);
    }
    {
      mercury__psqueue__V_14_14 = mercury__string__f_43_43_2_f_0(mercury__psqueue__V_15_15, mercury__psqueue__V_16_16);
    }
    {
      mercury__psqueue__V_12_12 = mercury__string__f_43_43_2_f_0((MR_String) "winner(prio ", mercury__psqueue__V_14_14);
    }
    {
      mercury__psqueue__Str_6 = mercury__string__f_43_43_2_f_0(mercury__psqueue__IndentStr_7, mercury__psqueue__V_12_12);
    }
    return mercury__psqueue__Str_6;
  }
}

MR_String MR_CALL 
mercury__psqueue__dump_psqueue_2_f_0(
  MR_Word mercury__psqueue__TypeInfo_for_P_10,
  MR_Word mercury__psqueue__TypeInfo_for_K_11,
  MR_Integer mercury__psqueue__Indent_4,
  MR_Word mercury__psqueue__PSQ_5)
{
  {
    MR_bool mercury__psqueue__succeeded;
    MR_String mercury__psqueue__Str_6;
    MR_Word mercury__psqueue__TypeCtorInfo_8_21 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
    MR_String mercury__psqueue__IndentStr_7;
    MR_Integer mercury__psqueue__V_15_15 = (mercury__psqueue__Indent_4 * (MR_Integer) 2);
    MR_Word mercury__psqueue__V_7_20;
    MR_Word mercury__psqueue__V_7_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__list__accumulate_n_copies_4_p_0(mercury__psqueue__TypeCtorInfo_8_21, mercury__psqueue__V_15_15, ((MR_Box) (MR_Word) ((MR_Char) 32)), mercury__psqueue__V_7_25, &mercury__psqueue__V_7_20);
    }
    {
      mercury__string__from_char_list_2_p_0(mercury__psqueue__V_7_20, &mercury__psqueue__IndentStr_7);
    }
    if ((mercury__psqueue__PSQ_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__string__append_3_p_2(mercury__psqueue__IndentStr_7, (MR_String) "void", &mercury__psqueue__Str_6);
        }
      }
    else
      {
        MR_Word mercury__psqueue__Winner_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_5, (MR_Integer) 0)));

        {
          mercury__psqueue__Str_6 = mercury__psqueue__dump_winner_2_f_0(mercury__psqueue__TypeInfo_for_P_10, mercury__psqueue__TypeInfo_for_K_11, mercury__psqueue__Indent_4, mercury__psqueue__Winner_8);
        }
      }
    return mercury__psqueue__Str_6;
  }
}

MR_String MR_CALL 
mercury__psqueue__indent_string_1_f_0(
  MR_Integer mercury__psqueue__Indent_3)
{
  {
    MR_bool mercury__psqueue__succeeded;
    MR_String mercury__psqueue__IndentStr_4;
    MR_Word mercury__psqueue__TypeCtorInfo_8_12 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
    MR_Integer mercury__psqueue__V_6_6 = (mercury__psqueue__Indent_3 * (MR_Integer) 2);
    MR_Word mercury__psqueue__V_7_11;
    MR_Word mercury__psqueue__V_7_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__list__accumulate_n_copies_4_p_0(mercury__psqueue__TypeCtorInfo_8_12, mercury__psqueue__V_6_6, ((MR_Box) (MR_Word) ((MR_Char) 32)), mercury__psqueue__V_7_16, &mercury__psqueue__V_7_11);
    }
    {
      mercury__string__from_char_list_2_p_0(mercury__psqueue__V_7_11, &mercury__psqueue__IndentStr_4);
    }
    return mercury__psqueue__IndentStr_4;
  }
}

static MR_bool MR_CALL 
mercury__psqueue__loser_split_keys_are_present_2_p_0(
  MR_Word mercury__psqueue__TypeInfo_for_P_12,
  MR_Word mercury__psqueue__TypeInfo_for_K_13,
  MR_Word mercury__psqueue__PSQ_3,
  MR_Word mercury__psqueue__LTree_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__psqueue__succeeded;

        if ((mercury__psqueue__LTree_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          mercury__psqueue__succeeded = MR_TRUE;
        else
          {
            MR_Word mercury__psqueue__SubLTreeL_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 3)));
            MR_Box mercury__psqueue__SplitKey_9 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 4));
            MR_Word mercury__psqueue__SubLTreeR_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 5)));
            MR_Word mercury__psqueue__Winner_17;
            MR_Word mercury__psqueue__V_18_18;
            MR_Integer mercury__psqueue__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 0)));
            MR_Box mercury__psqueue__V_6_6 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 1));
            MR_Box mercury__psqueue__V_7_7 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 2));
            MR_Box mercury__psqueue__V_11_11;

            mercury__psqueue__succeeded = ((MR_tag((MR_Word) mercury__psqueue__PSQ_3)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__psqueue__succeeded)
              {
                mercury__psqueue__Winner_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_3, (MR_Integer) 0)));
                {
                  mercury__psqueue__V_18_18 = mercury__psqueue__get_tournament_view_1_f_0(mercury__psqueue__TypeInfo_for_P_12, mercury__psqueue__TypeInfo_for_K_13, mercury__psqueue__Winner_17);
                }
                {
                  mercury__psqueue__succeeded = mercury__psqueue__search_tv_3_p_0(mercury__psqueue__TypeInfo_for_P_12, mercury__psqueue__TypeInfo_for_K_13, mercury__psqueue__V_18_18, mercury__psqueue__SplitKey_9, &mercury__psqueue__V_11_11);
                }
                if (mercury__psqueue__succeeded)
                  {
                    {
                      mercury__psqueue__succeeded = mercury__psqueue__loser_split_keys_are_present_2_p_0(mercury__psqueue__TypeInfo_for_P_12, mercury__psqueue__TypeInfo_for_K_13, mercury__psqueue__PSQ_3, mercury__psqueue__SubLTreeL_8);
                    }
                    if (mercury__psqueue__succeeded)
                      {
                        /* direct tailcall eliminated */
                        {
                          MR_Word mercury__psqueue__LTree__tmp_copy_4 = mercury__psqueue__SubLTreeR_10;

                          mercury__psqueue__LTree_4 = mercury__psqueue__LTree__tmp_copy_4;
                        }
                        continue;
                      }
                  }
              }
          }
        return mercury__psqueue__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__psqueue__loser_tree_has_search_property_1_p_0(
  MR_Word mercury__psqueue__TypeInfo_for_P_15,
  MR_Word mercury__psqueue__TypeInfo_for_K_16,
  MR_Word mercury__psqueue__LTree_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__psqueue__succeeded;

        if ((mercury__psqueue__LTree_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          mercury__psqueue__succeeded = MR_TRUE;
        else
          {
            MR_Word mercury__psqueue__SubLTreeL_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_2, (MR_Integer) 3)));
            MR_Box mercury__psqueue__SplitKey_7 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_2, (MR_Integer) 4));
            MR_Word mercury__psqueue__SubLTreeR_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_2, (MR_Integer) 5)));
            MR_Word mercury__psqueue__MaybeMaxKeyL_9;
            MR_Word mercury__psqueue__MaybeMinKeyR_10;
            MR_Integer mercury__psqueue__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_2, (MR_Integer) 0)));
            MR_Box mercury__psqueue__V_4_4 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_2, (MR_Integer) 1));
            MR_Box mercury__psqueue__V_5_5 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_2, (MR_Integer) 2));

            if ((mercury__psqueue__SubLTreeL_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              mercury__psqueue__MaybeMaxKeyL_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            else
              {
                MR_Word mercury__psqueue__SubLTreeL_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeL_6, (MR_Integer) 3)));
                MR_Word mercury__psqueue__SubLTreeR_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeL_6, (MR_Integer) 5)));
                MR_Box mercury__psqueue__CurMax_25 = (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeL_6, (MR_Integer) 2));
                MR_Word mercury__psqueue__MaybeMaxKeyL_26;
                MR_Word mercury__psqueue__MaybeMaxKeyR_27;
                MR_Box mercury__psqueue__MaxKey_28;
                MR_Integer mercury__psqueue__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeL_6, (MR_Integer) 0)));
                MR_Box mercury__psqueue__V_20_20 = (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeL_6, (MR_Integer) 1));
                MR_Box mercury__psqueue__V_23_23 = (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeL_6, (MR_Integer) 4));

                {
                  mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_120_95_107_101_121_95_105_110_95_108_111_115_101_114_95_116_114_101_101_95_97_99_99_95_95_91_49_93_95_48_3_p_0(mercury__psqueue__TypeInfo_for_K_16, mercury__psqueue__SubLTreeL_22, mercury__psqueue__CurMax_25, &mercury__psqueue__MaybeMaxKeyL_26);
                }
                {
                  mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_120_95_107_101_121_95_105_110_95_108_111_115_101_114_95_116_114_101_101_95_97_99_99_95_95_91_49_93_95_48_3_p_0(mercury__psqueue__TypeInfo_for_K_16, mercury__psqueue__SubLTreeR_24, mercury__psqueue__CurMax_25, &mercury__psqueue__MaybeMaxKeyR_27);
                }
                if ((mercury__psqueue__MaybeMaxKeyL_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  if ((mercury__psqueue__MaybeMaxKeyR_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    mercury__psqueue__MaxKey_28 = mercury__psqueue__CurMax_25;
                  else
                    {
                      MR_Box mercury__psqueue__R_34 = (MR_hl_field(MR_mktag(1), mercury__psqueue__MaybeMaxKeyR_27, (MR_Integer) 0));
                      MR_Word mercury__psqueue__CMP_44;

                      {
                        mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_16, &mercury__psqueue__CMP_44, mercury__psqueue__CurMax_25, mercury__psqueue__R_34);
                      }
                      switch (mercury__psqueue__CMP_44) {
                        default:
                          mercury__psqueue__succeeded = MR_FALSE;
                          break;
                        case (MR_Integer) 1:
                          mercury__psqueue__succeeded = MR_TRUE;
                          break;
                        case (MR_Integer) 0:
                          mercury__psqueue__succeeded = MR_TRUE;
                          break;
                      }
                      if (mercury__psqueue__succeeded)
                        mercury__psqueue__MaxKey_28 = mercury__psqueue__R_34;
                      else
                        mercury__psqueue__MaxKey_28 = mercury__psqueue__CurMax_25;
                    }
                else
                  {
                    MR_Box mercury__psqueue__V_38_38 = (MR_hl_field(MR_mktag(1), mercury__psqueue__MaybeMaxKeyL_26, (MR_Integer) 0));

                    if ((mercury__psqueue__MaybeMaxKeyR_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      {
                        MR_Word mercury__psqueue__CMP_50;

                        {
                          mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_16, &mercury__psqueue__CMP_50, mercury__psqueue__CurMax_25, mercury__psqueue__V_38_38);
                        }
                        switch (mercury__psqueue__CMP_50) {
                          default:
                            mercury__psqueue__succeeded = MR_FALSE;
                            break;
                          case (MR_Integer) 1:
                            mercury__psqueue__succeeded = MR_TRUE;
                            break;
                          case (MR_Integer) 0:
                            mercury__psqueue__succeeded = MR_TRUE;
                            break;
                        }
                        if (mercury__psqueue__succeeded)
                          mercury__psqueue__MaxKey_28 = mercury__psqueue__V_38_38;
                        else
                          mercury__psqueue__MaxKey_28 = mercury__psqueue__CurMax_25;
                      }
                    else
                      {
                        MR_Box mercury__psqueue__V_35_35;
                        MR_Box mercury__psqueue__R_37 = (MR_hl_field(MR_mktag(1), mercury__psqueue__MaybeMaxKeyR_27, (MR_Integer) 0));
                        MR_Word mercury__psqueue__CMP_56;
                        MR_Word mercury__psqueue__CMP_62;

                        {
                          mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_16, &mercury__psqueue__CMP_56, mercury__psqueue__V_38_38, mercury__psqueue__R_37);
                        }
                        switch (mercury__psqueue__CMP_56) {
                          default:
                            mercury__psqueue__succeeded = MR_FALSE;
                            break;
                          case (MR_Integer) 1:
                            mercury__psqueue__succeeded = MR_TRUE;
                            break;
                          case (MR_Integer) 0:
                            mercury__psqueue__succeeded = MR_TRUE;
                            break;
                        }
                        if (mercury__psqueue__succeeded)
                          mercury__psqueue__V_35_35 = mercury__psqueue__R_37;
                        else
                          mercury__psqueue__V_35_35 = mercury__psqueue__V_38_38;
                        {
                          mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_16, &mercury__psqueue__CMP_62, mercury__psqueue__CurMax_25, mercury__psqueue__V_35_35);
                        }
                        switch (mercury__psqueue__CMP_62) {
                          default:
                            mercury__psqueue__succeeded = MR_FALSE;
                            break;
                          case (MR_Integer) 1:
                            mercury__psqueue__succeeded = MR_TRUE;
                            break;
                          case (MR_Integer) 0:
                            mercury__psqueue__succeeded = MR_TRUE;
                            break;
                        }
                        if (mercury__psqueue__succeeded)
                          mercury__psqueue__MaxKey_28 = mercury__psqueue__V_35_35;
                        else
                          mercury__psqueue__MaxKey_28 = mercury__psqueue__CurMax_25;
                      }
                  }
                {
                  mercury__psqueue__MaybeMaxKeyL_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__psqueue__MaybeMaxKeyL_9, 0) = mercury__psqueue__MaxKey_28;
                }
              }
            {
              mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_105_110_95_107_101_121_95_105_110_95_108_111_115_101_114_95_116_114_101_101_95_95_91_49_93_95_48_2_p_0(mercury__psqueue__TypeInfo_for_K_16, mercury__psqueue__SubLTreeR_8, &mercury__psqueue__MaybeMinKeyR_10);
            }
            if ((mercury__psqueue__MaybeMaxKeyL_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              mercury__psqueue__succeeded = MR_TRUE;
            else
              {
                MR_Box mercury__psqueue__MaxKeyL_11 = (MR_hl_field(MR_mktag(1), mercury__psqueue__MaybeMaxKeyL_9, (MR_Integer) 0));
                MR_Word mercury__psqueue__CMPL_12;

                {
                  mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_16, &mercury__psqueue__CMPL_12, mercury__psqueue__MaxKeyL_11, mercury__psqueue__SplitKey_7);
                }
                switch (mercury__psqueue__CMPL_12) {
                  default:
                    mercury__psqueue__succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 1:
                    mercury__psqueue__succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 0:
                    mercury__psqueue__succeeded = MR_TRUE;
                    break;
                }
                if (mercury__psqueue__succeeded)
                  {
                    mercury__psqueue__succeeded = mercury__psqueue__loser_tree_has_search_property_1_p_0(mercury__psqueue__TypeInfo_for_P_15, mercury__psqueue__TypeInfo_for_K_16, mercury__psqueue__SubLTreeL_6);
                  }
              }
            if (mercury__psqueue__succeeded)
              {
                if ((mercury__psqueue__MaybeMinKeyR_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  mercury__psqueue__succeeded = MR_TRUE;
                else
                  {
                    MR_Box mercury__psqueue__MinKeyR_13 = (MR_hl_field(MR_mktag(1), mercury__psqueue__MaybeMinKeyR_10, (MR_Integer) 0));
                    MR_Word mercury__psqueue__CMPR_14;

                    {
                      mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_16, &mercury__psqueue__CMPR_14, mercury__psqueue__MinKeyR_13, mercury__psqueue__SplitKey_7);
                    }
                    mercury__psqueue__succeeded = (mercury__psqueue__CMPR_14 == (MR_Integer) 2);
                    if (mercury__psqueue__succeeded)
                      {
                        /* direct tailcall eliminated */
                        {
                          MR_Word mercury__psqueue__LTree__tmp_copy_2 = mercury__psqueue__SubLTreeR_8;

                          mercury__psqueue__LTree_2 = mercury__psqueue__LTree__tmp_copy_2;
                        }
                        continue;
                      }
                  }
              }
          }
        return mercury__psqueue__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
mercury__psqueue__all_nodes_obey_semi_heap_1_p_0(
  MR_Word mercury__psqueue__TypeInfo_for_P_12,
  MR_Word mercury__psqueue__TypeInfo_for_K_13,
  MR_Word mercury__psqueue__LTree_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__psqueue__succeeded;

        if ((mercury__psqueue__LTree_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          mercury__psqueue__succeeded = MR_TRUE;
        else
          {
            MR_Box mercury__psqueue__Prio_4 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_2, (MR_Integer) 1));
            MR_Box mercury__psqueue__Key_5 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_2, (MR_Integer) 2));
            MR_Word mercury__psqueue__SubLTreeL_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_2, (MR_Integer) 3)));
            MR_Box mercury__psqueue__SplitKey_7 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_2, (MR_Integer) 4));
            MR_Word mercury__psqueue__SubLTreeR_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_2, (MR_Integer) 5)));
            MR_Word mercury__psqueue__MaybeMinPrio_9;
            MR_Integer mercury__psqueue__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_2, (MR_Integer) 0)));
            MR_Word mercury__psqueue__CMP_16;

            {
              mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_13, &mercury__psqueue__CMP_16, mercury__psqueue__Key_5, mercury__psqueue__SplitKey_7);
            }
            switch (mercury__psqueue__CMP_16) {
              default:
                mercury__psqueue__succeeded = MR_FALSE;
                break;
              case (MR_Integer) 1:
                mercury__psqueue__succeeded = MR_TRUE;
                break;
              case (MR_Integer) 0:
                mercury__psqueue__succeeded = MR_TRUE;
                break;
            }
            if (mercury__psqueue__succeeded)
              {
                mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_105_110_95_112_114_105_111_95_105_110_95_108_111_115_101_114_95_116_114_101_101_95_97_99_99_95_95_91_50_93_95_48_3_p_0(mercury__psqueue__TypeInfo_for_P_12, mercury__psqueue__SubLTreeL_6, mercury__psqueue__Prio_4, &mercury__psqueue__MaybeMinPrio_9);
              }
            else
              {
                mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_105_110_95_112_114_105_111_95_105_110_95_108_111_115_101_114_95_116_114_101_101_95_97_99_99_95_95_91_50_93_95_48_3_p_0(mercury__psqueue__TypeInfo_for_P_12, mercury__psqueue__SubLTreeR_8, mercury__psqueue__Prio_4, &mercury__psqueue__MaybeMinPrio_9);
              }
            if ((mercury__psqueue__MaybeMinPrio_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              mercury__psqueue__succeeded = MR_TRUE;
            else
              {
                MR_Box mercury__psqueue__MinPrio_10 = (MR_hl_field(MR_mktag(1), mercury__psqueue__MaybeMinPrio_9, (MR_Integer) 0));
                MR_Word mercury__psqueue__CMP_11;

                {
                  mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_P_12, &mercury__psqueue__CMP_11, mercury__psqueue__Prio_4, mercury__psqueue__MinPrio_10);
                }
                mercury__psqueue__succeeded = (mercury__psqueue__CMP_11 == (MR_Integer) 0);
              }
            if (mercury__psqueue__succeeded)
              {
                {
                  mercury__psqueue__succeeded = mercury__psqueue__all_nodes_obey_semi_heap_1_p_0(mercury__psqueue__TypeInfo_for_P_12, mercury__psqueue__TypeInfo_for_K_13, mercury__psqueue__SubLTreeL_6);
                }
                if (mercury__psqueue__succeeded)
                  {
                    /* direct tailcall eliminated */
                    {
                      MR_Word mercury__psqueue__LTree__tmp_copy_2 = mercury__psqueue__SubLTreeR_8;

                      mercury__psqueue__LTree_2 = mercury__psqueue__LTree__tmp_copy_2;
                    }
                    continue;
                  }
              }
          }
        return mercury__psqueue__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__psqueue__leq_2_p_0(
  MR_Word mercury__psqueue__TypeInfo_for_V_6,
  MR_Box mercury__psqueue__ValLeft_3,
  MR_Box mercury__psqueue__ValRight_4)
{
  {
    MR_bool mercury__psqueue__succeeded;
    MR_Word mercury__psqueue__CMP_5;

    {
      mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_V_6, &mercury__psqueue__CMP_5, mercury__psqueue__ValLeft_3, mercury__psqueue__ValRight_4);
    }
    switch (mercury__psqueue__CMP_5) {
      default:
        mercury__psqueue__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 1:
        mercury__psqueue__succeeded = MR_TRUE;
        break;
      case (MR_Integer) 0:
        mercury__psqueue__succeeded = MR_TRUE;
        break;
    }
    return mercury__psqueue__succeeded;
  }
}

void MR_CALL 
mercury__psqueue__at_most_in_winner_3_p_0(
  MR_Word mercury__psqueue__TypeInfo_for_P_20,
  MR_Word mercury__psqueue__TypeInfo_for_K_21,
  MR_Word mercury__psqueue__Winner_4,
  MR_Box mercury__psqueue__MaxPrio_5,
  MR_Word * mercury__psqueue__Cord_6)
{
  {
    MR_bool mercury__psqueue__succeeded;
    MR_Box mercury__psqueue__WinnerPrio_7 = (MR_hl_field(MR_mktag(0), mercury__psqueue__Winner_4, (MR_Integer) 0));
    MR_Word mercury__psqueue__CMP_11;
    MR_Box mercury__psqueue__V_8_8 = (MR_hl_field(MR_mktag(0), mercury__psqueue__Winner_4, (MR_Integer) 1));
    MR_Word mercury__psqueue__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__psqueue__Winner_4, (MR_Integer) 2)));
    MR_Box mercury__psqueue__V_10_10 = (MR_hl_field(MR_mktag(0), mercury__psqueue__Winner_4, (MR_Integer) 3));

    {
      mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_P_20, &mercury__psqueue__CMP_11, mercury__psqueue__WinnerPrio_7, mercury__psqueue__MaxPrio_5);
    }
    switch (mercury__psqueue__CMP_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
      case (MR_Integer) 0:
        {
          MR_Word mercury__psqueue__TournamentView_12;

          {
            mercury__psqueue__TournamentView_12 = mercury__psqueue__get_tournament_view_1_f_0(mercury__psqueue__TypeInfo_for_P_20, mercury__psqueue__TypeInfo_for_K_21, mercury__psqueue__Winner_4);
          }
          if (((MR_tag((MR_Word) mercury__psqueue__TournamentView_12)) == (MR_mktag((MR_Integer) 0))))
            {
              MR_Box mercury__psqueue__SinglePrio_13 = (MR_hl_field(MR_mktag(0), mercury__psqueue__TournamentView_12, (MR_Integer) 0));
              MR_Box mercury__psqueue__SingleKey_14 = (MR_hl_field(MR_mktag(0), mercury__psqueue__TournamentView_12, (MR_Integer) 1));
              MR_Word mercury__psqueue__V_19_19;
              MR_Word mercury__psqueue__V_4_29;

              {
                mercury__psqueue__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mercury__psqueue__V_19_19, 0) = mercury__psqueue__SinglePrio_13;
                MR_hl_field(MR_mktag(0), mercury__psqueue__V_19_19, 1) = mercury__psqueue__SingleKey_14;
              }
              {
                mercury__psqueue__V_4_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mercury__psqueue__V_4_29, 0) = ((MR_Box) (mercury__psqueue__V_19_19));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *mercury__psqueue__Cord_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__psqueue__V_4_29));
              }
            }
          else
            {
              MR_Word mercury__psqueue__TypeCtorInfo_26_26;
              MR_Word mercury__psqueue__TypeInfo_27_27;
              MR_Word mercury__psqueue__WinnerA_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__TournamentView_12, (MR_Integer) 0)));
              MR_Word mercury__psqueue__WinnerB_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__TournamentView_12, (MR_Integer) 1)));
              MR_Word mercury__psqueue__CordA_17;
              MR_Word mercury__psqueue__CordB_18;
              MR_Word mercury__psqueue__conv0_Cord_6;

              {
                mercury__psqueue__at_most_in_winner_3_p_0(mercury__psqueue__TypeInfo_for_P_20, mercury__psqueue__TypeInfo_for_K_21, mercury__psqueue__WinnerA_15, mercury__psqueue__MaxPrio_5, &mercury__psqueue__CordA_17);
              }
              {
                mercury__psqueue__at_most_in_winner_3_p_0(mercury__psqueue__TypeInfo_for_P_20, mercury__psqueue__TypeInfo_for_K_21, mercury__psqueue__WinnerB_16, mercury__psqueue__MaxPrio_5, &mercury__psqueue__CordB_18);
              }
              mercury__psqueue__TypeCtorInfo_26_26 = (MR_Word) &mercury__pair__pair__type_ctor_info_pair_2;
              {
                mercury__psqueue__TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mercury__psqueue__TypeInfo_27_27, 0) = ((MR_Box) (mercury__psqueue__TypeCtorInfo_26_26));
                MR_hl_field(MR_mktag(0), mercury__psqueue__TypeInfo_27_27, 1) = ((MR_Box) (mercury__psqueue__TypeInfo_for_P_20));
                MR_hl_field(MR_mktag(0), mercury__psqueue__TypeInfo_27_27, 2) = ((MR_Box) (mercury__psqueue__TypeInfo_for_K_21));
              }
              {
                mercury__psqueue__conv0_Cord_6 = mercury__cord__f_43_43_2_f_0(mercury__psqueue__TypeInfo_27_27, (MR_Word) mercury__psqueue__CordA_17, (MR_Word) mercury__psqueue__CordB_18);
              }
              *mercury__psqueue__Cord_6 = (MR_Word) mercury__psqueue__conv0_Cord_6;
            }
        }
        break;
      case (MR_Integer) 2:
        *mercury__psqueue__Cord_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
    }
  }
}

MR_bool MR_CALL 
mercury__psqueue__search_tv_3_p_0(
  MR_Word mercury__psqueue__TypeInfo_for_P_17,
  MR_Word mercury__psqueue__TypeInfo_for_K_18,
  MR_Word mercury__psqueue__TournamentView_4,
  MR_Box mercury__psqueue__SearchKey_5,
  MR_Box * mercury__psqueue__MatchingPrio_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__psqueue__succeeded;

        if (((MR_tag((MR_Word) mercury__psqueue__TournamentView_4)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_Box mercury__psqueue__Key_8;

            *mercury__psqueue__MatchingPrio_6 = (MR_hl_field(MR_mktag(0), mercury__psqueue__TournamentView_4, (MR_Integer) 0));
            mercury__psqueue__Key_8 = (MR_hl_field(MR_mktag(0), mercury__psqueue__TournamentView_4, (MR_Integer) 1));
            {
              mercury__psqueue__succeeded = mercury__builtin__unify_2_p_0(mercury__psqueue__TypeInfo_for_K_18, mercury__psqueue__Key_8, mercury__psqueue__SearchKey_5);
            }
          }
        else
          {
            MR_Word mercury__psqueue__WinnerA_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__TournamentView_4, (MR_Integer) 0)));
            MR_Word mercury__psqueue__WinnerB_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__TournamentView_4, (MR_Integer) 1)));
            MR_Box mercury__psqueue__MaxKeyA_14 = (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_9, (MR_Integer) 3));
            MR_Box mercury__psqueue__V_11_11 = (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_9, (MR_Integer) 0));
            MR_Box mercury__psqueue__V_12_12 = (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_9, (MR_Integer) 1));
            MR_Word mercury__psqueue__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_9, (MR_Integer) 2)));
            MR_Word mercury__psqueue__CMP_21;

            {
              mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_18, &mercury__psqueue__CMP_21, mercury__psqueue__SearchKey_5, mercury__psqueue__MaxKeyA_14);
            }
            switch (mercury__psqueue__CMP_21) {
              default:
                mercury__psqueue__succeeded = MR_FALSE;
                break;
              case (MR_Integer) 1:
                mercury__psqueue__succeeded = MR_TRUE;
                break;
              case (MR_Integer) 0:
                mercury__psqueue__succeeded = MR_TRUE;
                break;
            }
            if (mercury__psqueue__succeeded)
              {
                MR_Word mercury__psqueue__V_15_15;

                {
                  mercury__psqueue__V_15_15 = mercury__psqueue__get_tournament_view_1_f_0(mercury__psqueue__TypeInfo_for_P_17, mercury__psqueue__TypeInfo_for_K_18, mercury__psqueue__WinnerA_9);
                }
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__psqueue__TournamentView__tmp_copy_4 = mercury__psqueue__V_15_15;

                  mercury__psqueue__TournamentView_4 = mercury__psqueue__TournamentView__tmp_copy_4;
                }
                continue;
              }
            else
              {
                MR_Word mercury__psqueue__V_16_16;

                {
                  mercury__psqueue__V_16_16 = mercury__psqueue__get_tournament_view_1_f_0(mercury__psqueue__TypeInfo_for_P_17, mercury__psqueue__TypeInfo_for_K_18, mercury__psqueue__WinnerB_10);
                }
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__psqueue__TournamentView__tmp_copy_4 = mercury__psqueue__V_16_16;

                  mercury__psqueue__TournamentView_4 = mercury__psqueue__TournamentView__tmp_copy_4;
                }
                continue;
              }
          }
        return mercury__psqueue__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__psqueue__adjust_tv_4_p_0(
  MR_Word mercury__psqueue__TypeInfo_for_P_22,
  MR_Word mercury__psqueue__TypeInfo_for_K_23,
  MR_Word mercury__psqueue__AdjustFunc_5,
  MR_Box mercury__psqueue__SearchKey_6,
  MR_Word mercury__psqueue__TournamentView_7,
  MR_Word * mercury__psqueue__Winner_8)
{
  {
    MR_bool mercury__psqueue__succeeded;

    if (((MR_tag((MR_Word) mercury__psqueue__TournamentView_7)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Box mercury__psqueue__Prio_9 = (MR_hl_field(MR_mktag(0), mercury__psqueue__TournamentView_7, (MR_Integer) 0));
        MR_Box mercury__psqueue__Key_10 = (MR_hl_field(MR_mktag(0), mercury__psqueue__TournamentView_7, (MR_Integer) 1));
        MR_Box mercury__psqueue__V_21_21;
        MR_Word mercury__psqueue__V_26_26;
        MR_Box MR_CALL (* mercury__psqueue__func_0)(MR_Box, MR_Box);

        {
          mercury__psqueue__succeeded = mercury__builtin__unify_2_p_0(mercury__psqueue__TypeInfo_for_K_23, mercury__psqueue__Key_10, mercury__psqueue__SearchKey_6);
        }
        if (mercury__psqueue__succeeded)
          {
            mercury__psqueue__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__psqueue__AdjustFunc_5, (MR_Integer) 1)));
            {
              mercury__psqueue__V_21_21 = mercury__psqueue__func_0(((MR_Box) mercury__psqueue__AdjustFunc_5), mercury__psqueue__Prio_9);
            }
            mercury__psqueue__V_26_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              *mercury__psqueue__Winner_8 = base;
              MR_hl_field(MR_mktag(0), base, 0) = mercury__psqueue__V_21_21;
              MR_hl_field(MR_mktag(0), base, 1) = mercury__psqueue__Key_10;
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__psqueue__V_26_26));
              MR_hl_field(MR_mktag(0), base, 3) = mercury__psqueue__Key_10;
            }
            mercury__psqueue__succeeded = MR_TRUE;
          }
      }
    else
      {
        MR_Word mercury__psqueue__WinnerA_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__TournamentView_7, (MR_Integer) 0)));
        MR_Word mercury__psqueue__WinnerB_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__TournamentView_7, (MR_Integer) 1)));
        MR_Box mercury__psqueue__MaxKeyA_16 = (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_11, (MR_Integer) 3));
        MR_Box mercury__psqueue__V_13_13 = (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_11, (MR_Integer) 0));
        MR_Box mercury__psqueue__V_14_14 = (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_11, (MR_Integer) 1));
        MR_Word mercury__psqueue__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_11, (MR_Integer) 2)));
        MR_Word mercury__psqueue__CMP_30;

        {
          mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_23, &mercury__psqueue__CMP_30, mercury__psqueue__SearchKey_6, mercury__psqueue__MaxKeyA_16);
        }
        switch (mercury__psqueue__CMP_30) {
          default:
            mercury__psqueue__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 1:
            mercury__psqueue__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 0:
            mercury__psqueue__succeeded = MR_TRUE;
            break;
        }
        if (mercury__psqueue__succeeded)
          {
            MR_Word mercury__psqueue__UpdatedWinnerA_17;
            MR_Word mercury__psqueue__V_19_19;

            {
              mercury__psqueue__V_19_19 = mercury__psqueue__get_tournament_view_1_f_0(mercury__psqueue__TypeInfo_for_P_22, mercury__psqueue__TypeInfo_for_K_23, mercury__psqueue__WinnerA_11);
            }
            {
              mercury__psqueue__succeeded = mercury__psqueue__adjust_tv_4_p_0(mercury__psqueue__TypeInfo_for_P_22, mercury__psqueue__TypeInfo_for_K_23, mercury__psqueue__AdjustFunc_5, mercury__psqueue__SearchKey_6, mercury__psqueue__V_19_19, &mercury__psqueue__UpdatedWinnerA_17);
            }
            if (mercury__psqueue__succeeded)
              {
                {
                  mercury__psqueue__combine_winners_via_tournament_3_p_0(mercury__psqueue__TypeInfo_for_P_22, mercury__psqueue__TypeInfo_for_K_23, mercury__psqueue__UpdatedWinnerA_17, mercury__psqueue__WinnerB_12, mercury__psqueue__Winner_8);
                }
                mercury__psqueue__succeeded = MR_TRUE;
              }
          }
        else
          {
            MR_Word mercury__psqueue__UpdatedWinnerB_18;
            MR_Word mercury__psqueue__V_20_20;

            {
              mercury__psqueue__V_20_20 = mercury__psqueue__get_tournament_view_1_f_0(mercury__psqueue__TypeInfo_for_P_22, mercury__psqueue__TypeInfo_for_K_23, mercury__psqueue__WinnerB_12);
            }
            {
              mercury__psqueue__succeeded = mercury__psqueue__adjust_tv_4_p_0(mercury__psqueue__TypeInfo_for_P_22, mercury__psqueue__TypeInfo_for_K_23, mercury__psqueue__AdjustFunc_5, mercury__psqueue__SearchKey_6, mercury__psqueue__V_20_20, &mercury__psqueue__UpdatedWinnerB_18);
            }
            if (mercury__psqueue__succeeded)
              {
                {
                  mercury__psqueue__combine_winners_via_tournament_3_p_0(mercury__psqueue__TypeInfo_for_P_22, mercury__psqueue__TypeInfo_for_K_23, mercury__psqueue__WinnerA_11, mercury__psqueue__UpdatedWinnerB_18, mercury__psqueue__Winner_8);
                }
                mercury__psqueue__succeeded = MR_TRUE;
              }
          }
      }
    return mercury__psqueue__succeeded;
  }
}

MR_bool MR_CALL 
mercury__psqueue__remove_tv_4_p_0(
  MR_Word mercury__psqueue__TypeInfo_for_P_22,
  MR_Word mercury__psqueue__TypeInfo_for_K_23,
  MR_Box * mercury__psqueue__MatchingPrio_5,
  MR_Box mercury__psqueue__SearchKey_6,
  MR_Word mercury__psqueue__TournamentView_7,
  MR_Word * mercury__psqueue__PSQ_8)
{
  {
    MR_bool mercury__psqueue__succeeded;

    if (((MR_tag((MR_Word) mercury__psqueue__TournamentView_7)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Box mercury__psqueue__Key_10;

        *mercury__psqueue__MatchingPrio_5 = (MR_hl_field(MR_mktag(0), mercury__psqueue__TournamentView_7, (MR_Integer) 0));
        mercury__psqueue__Key_10 = (MR_hl_field(MR_mktag(0), mercury__psqueue__TournamentView_7, (MR_Integer) 1));
        {
          mercury__psqueue__succeeded = mercury__builtin__unify_2_p_0(mercury__psqueue__TypeInfo_for_K_23, mercury__psqueue__Key_10, mercury__psqueue__SearchKey_6);
        }
        if (mercury__psqueue__succeeded)
          {
            *mercury__psqueue__PSQ_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            mercury__psqueue__succeeded = MR_TRUE;
          }
      }
    else
      {
        MR_Word mercury__psqueue__WinnerA_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__TournamentView_7, (MR_Integer) 0)));
        MR_Word mercury__psqueue__WinnerB_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__TournamentView_7, (MR_Integer) 1)));
        MR_Box mercury__psqueue__MaxKeyA_16 = (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_11, (MR_Integer) 3));
        MR_Word mercury__psqueue__CombinedWinner_18;
        MR_Box mercury__psqueue__V_13_13 = (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_11, (MR_Integer) 0));
        MR_Box mercury__psqueue__V_14_14 = (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_11, (MR_Integer) 1));
        MR_Word mercury__psqueue__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_11, (MR_Integer) 2)));
        MR_Word mercury__psqueue__CMP_26;

        {
          mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_23, &mercury__psqueue__CMP_26, mercury__psqueue__SearchKey_6, mercury__psqueue__MaxKeyA_16);
        }
        switch (mercury__psqueue__CMP_26) {
          default:
            mercury__psqueue__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 1:
            mercury__psqueue__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 0:
            mercury__psqueue__succeeded = MR_TRUE;
            break;
        }
        if (mercury__psqueue__succeeded)
          {
            MR_Word mercury__psqueue__UpdatedPSQA_17;
            MR_Word mercury__psqueue__V_20_20;

            {
              mercury__psqueue__V_20_20 = mercury__psqueue__get_tournament_view_1_f_0(mercury__psqueue__TypeInfo_for_P_22, mercury__psqueue__TypeInfo_for_K_23, mercury__psqueue__WinnerA_11);
            }
            {
              mercury__psqueue__succeeded = mercury__psqueue__remove_tv_4_p_0(mercury__psqueue__TypeInfo_for_P_22, mercury__psqueue__TypeInfo_for_K_23, mercury__psqueue__MatchingPrio_5, mercury__psqueue__SearchKey_6, mercury__psqueue__V_20_20, &mercury__psqueue__UpdatedPSQA_17);
            }
            if (mercury__psqueue__succeeded)
              {
                if ((mercury__psqueue__UpdatedPSQA_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  mercury__psqueue__CombinedWinner_18 = mercury__psqueue__WinnerB_12;
                else
                  {
                    MR_Word mercury__psqueue__WinnerA_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__UpdatedPSQA_17, (MR_Integer) 0)));

                    {
                      mercury__psqueue__combine_winners_via_tournament_3_p_0(mercury__psqueue__TypeInfo_for_P_22, mercury__psqueue__TypeInfo_for_K_23, mercury__psqueue__WinnerA_30, mercury__psqueue__WinnerB_12, &mercury__psqueue__CombinedWinner_18);
                    }
                  }
                mercury__psqueue__succeeded = MR_TRUE;
              }
          }
        else
          {
            MR_Word mercury__psqueue__UpdatedPSQB_19;
            MR_Word mercury__psqueue__V_21_21;

            {
              mercury__psqueue__V_21_21 = mercury__psqueue__get_tournament_view_1_f_0(mercury__psqueue__TypeInfo_for_P_22, mercury__psqueue__TypeInfo_for_K_23, mercury__psqueue__WinnerB_12);
            }
            {
              mercury__psqueue__succeeded = mercury__psqueue__remove_tv_4_p_0(mercury__psqueue__TypeInfo_for_P_22, mercury__psqueue__TypeInfo_for_K_23, mercury__psqueue__MatchingPrio_5, mercury__psqueue__SearchKey_6, mercury__psqueue__V_21_21, &mercury__psqueue__UpdatedPSQB_19);
            }
            if (mercury__psqueue__succeeded)
              {
                if ((mercury__psqueue__UpdatedPSQB_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  mercury__psqueue__CombinedWinner_18 = mercury__psqueue__WinnerA_11;
                else
                  {
                    MR_Word mercury__psqueue__WinnerB_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__UpdatedPSQB_19, (MR_Integer) 0)));

                    {
                      mercury__psqueue__combine_winners_via_tournament_3_p_0(mercury__psqueue__TypeInfo_for_P_22, mercury__psqueue__TypeInfo_for_K_23, mercury__psqueue__WinnerA_11, mercury__psqueue__WinnerB_34, &mercury__psqueue__CombinedWinner_18);
                    }
                  }
                mercury__psqueue__succeeded = MR_TRUE;
              }
          }
        if (mercury__psqueue__succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *mercury__psqueue__PSQ_8 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__psqueue__CombinedWinner_18));
            }
            mercury__psqueue__succeeded = MR_TRUE;
          }
      }
    return mercury__psqueue__succeeded;
  }
}

void MR_CALL 
mercury__psqueue__from_assoc_list_loop_3_p_0(
  MR_Word mercury__psqueue__TypeInfo_for_P_16,
  MR_Word mercury__psqueue__TypeInfo_for_K_17,
  MR_Word mercury__psqueue__HeadVar__1_1,
  MR_Word mercury__psqueue__STATE_VARIABLE_PSQ_0_2,
  MR_Word * mercury__psqueue__STATE_VARIABLE_PSQ_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__psqueue__succeeded;

        if ((mercury__psqueue__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__psqueue__STATE_VARIABLE_PSQ_3 = mercury__psqueue__STATE_VARIABLE_PSQ_0_2;
        else
          {
            MR_Box mercury__psqueue__Prio_7;
            MR_Box mercury__psqueue__Key_8;
            MR_Word mercury__psqueue__PriosKeys_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mercury__psqueue__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mercury__psqueue__STATE_VARIABLE_PSQ_14_14;
            MR_Word mercury__psqueue__STATE_VARIABLE_PSQ_10_23;

            mercury__psqueue__Prio_7 = (MR_hl_field(MR_mktag(0), mercury__psqueue__V_13_13, (MR_Integer) 0));
            mercury__psqueue__Key_8 = (MR_hl_field(MR_mktag(0), mercury__psqueue__V_13_13, (MR_Integer) 1));
            {
              mercury__psqueue__succeeded = mercury__psqueue__insert_4_p_0(mercury__psqueue__TypeInfo_for_P_16, mercury__psqueue__TypeInfo_for_K_17, mercury__psqueue__Prio_7, mercury__psqueue__Key_8, mercury__psqueue__STATE_VARIABLE_PSQ_0_2, &mercury__psqueue__STATE_VARIABLE_PSQ_10_23);
            }
            if (mercury__psqueue__succeeded)
              mercury__psqueue__STATE_VARIABLE_PSQ_14_14 = mercury__psqueue__STATE_VARIABLE_PSQ_10_23;
            else
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "psqueue.m", (MR_String) "predicate \140psqueue.det_insert\'/4", (MR_String) "key being inserted is already present");
                  return;
                }
              }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__psqueue__HeadVar__1__tmp_copy_1 = mercury__psqueue__PriosKeys_9;
              MR_Word mercury__psqueue__STATE_VARIABLE_PSQ_0__tmp_copy_2 = mercury__psqueue__STATE_VARIABLE_PSQ_14_14;

              mercury__psqueue__STATE_VARIABLE_PSQ_0_2 = mercury__psqueue__STATE_VARIABLE_PSQ_0__tmp_copy_2;
              mercury__psqueue__HeadVar__1_1 = mercury__psqueue__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

MR_Word MR_CALL 
mercury__psqueue__convert_loser_tree_to_psqueue_2_f_0(
  MR_Word mercury__psqueue__TypeInfo_for_P_17,
  MR_Word mercury__psqueue__TypeInfo_for_K_18,
  MR_Word mercury__psqueue__LTree_4,
  MR_Box mercury__psqueue__MaxKey_5)
{
  {
    MR_bool mercury__psqueue__succeeded;
    MR_Word mercury__psqueue__PSQ_6;

    if ((mercury__psqueue__LTree_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__psqueue__PSQ_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Box mercury__psqueue__LoserPrio_8 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 1));
        MR_Box mercury__psqueue__LoserKey_9 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 2));
        MR_Word mercury__psqueue__SubLTreeL_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 3)));
        MR_Box mercury__psqueue__SplitKey_11 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 4));
        MR_Word mercury__psqueue__SubLTreeR_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 5)));
        MR_Word mercury__psqueue__PSQA_14;
        MR_Word mercury__psqueue__PSQB_15;
        MR_Integer mercury__psqueue__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_4, (MR_Integer) 0)));
        MR_Word mercury__psqueue__CMP_21;

        {
          mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_18, &mercury__psqueue__CMP_21, mercury__psqueue__LoserKey_9, mercury__psqueue__SplitKey_11);
        }
        switch (mercury__psqueue__CMP_21) {
          default:
            mercury__psqueue__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 1:
            mercury__psqueue__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 0:
            mercury__psqueue__succeeded = MR_TRUE;
            break;
        }
        if (mercury__psqueue__succeeded)
          {
            MR_Word mercury__psqueue__WinnerA_13;

            {
              mercury__psqueue__WinnerA_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_13, 0) = mercury__psqueue__LoserPrio_8;
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_13, 1) = mercury__psqueue__LoserKey_9;
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_13, 2) = ((MR_Box) (mercury__psqueue__SubLTreeL_10));
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_13, 3) = mercury__psqueue__SplitKey_11;
            }
            {
              mercury__psqueue__PSQA_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__psqueue__PSQA_14, 0) = ((MR_Box) (mercury__psqueue__WinnerA_13));
            }
            {
              mercury__psqueue__PSQB_15 = mercury__psqueue__convert_loser_tree_to_psqueue_2_f_0(mercury__psqueue__TypeInfo_for_P_17, mercury__psqueue__TypeInfo_for_K_18, mercury__psqueue__SubLTreeR_12, mercury__psqueue__MaxKey_5);
            }
          }
        else
          {
            MR_Word mercury__psqueue__WinnerB_16;

            {
              mercury__psqueue__PSQA_14 = mercury__psqueue__convert_loser_tree_to_psqueue_2_f_0(mercury__psqueue__TypeInfo_for_P_17, mercury__psqueue__TypeInfo_for_K_18, mercury__psqueue__SubLTreeL_10, mercury__psqueue__SplitKey_11);
            }
            {
              mercury__psqueue__WinnerB_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_16, 0) = mercury__psqueue__LoserPrio_8;
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_16, 1) = mercury__psqueue__LoserKey_9;
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_16, 2) = ((MR_Box) (mercury__psqueue__SubLTreeR_12));
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_16, 3) = mercury__psqueue__MaxKey_5;
            }
            {
              mercury__psqueue__PSQB_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__psqueue__PSQB_15, 0) = ((MR_Box) (mercury__psqueue__WinnerB_16));
            }
          }
        if ((mercury__psqueue__PSQA_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          mercury__psqueue__PSQ_6 = mercury__psqueue__PSQB_15;
        else
          {
            MR_Word mercury__psqueue__WinnerA_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQA_14, (MR_Integer) 0)));

            if ((mercury__psqueue__PSQB_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              mercury__psqueue__PSQ_6 = mercury__psqueue__PSQA_14;
            else
              {
                MR_Word mercury__psqueue__WinnerB_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQB_15, (MR_Integer) 0)));
                MR_Word mercury__psqueue__CombinedWinner_27;

                {
                  mercury__psqueue__combine_winners_via_tournament_3_p_0(mercury__psqueue__TypeInfo_for_P_17, mercury__psqueue__TypeInfo_for_K_18, mercury__psqueue__WinnerA_25, mercury__psqueue__WinnerB_26, &mercury__psqueue__CombinedWinner_27);
                }
                {
                  mercury__psqueue__PSQ_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_6, 0) = ((MR_Box) (mercury__psqueue__CombinedWinner_27));
                }
              }
          }
      }
    return mercury__psqueue__PSQ_6;
  }
}

MR_bool MR_CALL 
mercury__psqueue__insert_tv_4_p_0(
  MR_Word mercury__psqueue__TypeInfo_for_P_28,
  MR_Word mercury__psqueue__TypeInfo_for_K_29,
  MR_Box mercury__psqueue__InsertPrio_5,
  MR_Box mercury__psqueue__InsertKey_6,
  MR_Word mercury__psqueue__TV_7,
  MR_Word * mercury__psqueue__Winner_8)
{
  {
    MR_bool mercury__psqueue__succeeded;

    if (((MR_tag((MR_Word) mercury__psqueue__TV_7)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Box mercury__psqueue__Prio_9 = (MR_hl_field(MR_mktag(0), mercury__psqueue__TV_7, (MR_Integer) 0));
        MR_Box mercury__psqueue__Key_10 = (MR_hl_field(MR_mktag(0), mercury__psqueue__TV_7, (MR_Integer) 1));
        MR_Word mercury__psqueue__CMP_11;
        MR_Word mercury__psqueue__WinnerA_12;
        MR_Word mercury__psqueue__WinnerB_13;

        {
          mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_29, &mercury__psqueue__CMP_11, mercury__psqueue__InsertKey_6, mercury__psqueue__Key_10);
        }
        switch (mercury__psqueue__CMP_11) {
          default:
            mercury__psqueue__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 1:
            {
              MR_Word mercury__psqueue__V_32_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              MR_Word mercury__psqueue__V_36_36;

              {
                mercury__psqueue__WinnerA_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_12, 0) = mercury__psqueue__InsertPrio_5;
                MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_12, 1) = mercury__psqueue__InsertKey_6;
                MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_12, 2) = ((MR_Box) (mercury__psqueue__V_32_32));
                MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_12, 3) = mercury__psqueue__InsertKey_6;
              }
              mercury__psqueue__V_36_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              {
                mercury__psqueue__WinnerB_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_13, 0) = mercury__psqueue__Prio_9;
                MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_13, 1) = mercury__psqueue__Key_10;
                MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_13, 2) = ((MR_Box) (mercury__psqueue__V_36_36));
                MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_13, 3) = mercury__psqueue__Key_10;
              }
              mercury__psqueue__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mercury__psqueue__V_40_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              MR_Word mercury__psqueue__V_44_44;

              {
                mercury__psqueue__WinnerA_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_12, 0) = mercury__psqueue__Prio_9;
                MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_12, 1) = mercury__psqueue__Key_10;
                MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_12, 2) = ((MR_Box) (mercury__psqueue__V_40_40));
                MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_12, 3) = mercury__psqueue__Key_10;
              }
              mercury__psqueue__V_44_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              {
                mercury__psqueue__WinnerB_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_13, 0) = mercury__psqueue__InsertPrio_5;
                MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_13, 1) = mercury__psqueue__InsertKey_6;
                MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_13, 2) = ((MR_Box) (mercury__psqueue__V_44_44));
                MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_13, 3) = mercury__psqueue__InsertKey_6;
              }
              mercury__psqueue__succeeded = MR_TRUE;
            }
            break;
        }
        if (mercury__psqueue__succeeded)
          {
            {
              mercury__psqueue__combine_winners_via_tournament_3_p_0(mercury__psqueue__TypeInfo_for_P_28, mercury__psqueue__TypeInfo_for_K_29, mercury__psqueue__WinnerA_12, mercury__psqueue__WinnerB_13, mercury__psqueue__Winner_8);
            }
            mercury__psqueue__succeeded = MR_TRUE;
          }
      }
    else
      {
        MR_Box mercury__psqueue__MaxKeyA_17;
        MR_Word mercury__psqueue__WinnerA_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__TV_7, (MR_Integer) 0)));
        MR_Word mercury__psqueue__WinnerB_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__TV_7, (MR_Integer) 1)));
        MR_Box mercury__psqueue__V_14_14 = (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_26, (MR_Integer) 0));
        MR_Box mercury__psqueue__V_15_15 = (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_26, (MR_Integer) 1));
        MR_Word mercury__psqueue__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_26, (MR_Integer) 2)));
        MR_Word mercury__psqueue__CMP_48;

        mercury__psqueue__MaxKeyA_17 = (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_26, (MR_Integer) 3));
        {
          mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_29, &mercury__psqueue__CMP_48, mercury__psqueue__InsertKey_6, mercury__psqueue__MaxKeyA_17);
        }
        switch (mercury__psqueue__CMP_48) {
          default:
            mercury__psqueue__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 1:
            mercury__psqueue__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 0:
            mercury__psqueue__succeeded = MR_TRUE;
            break;
        }
        if (mercury__psqueue__succeeded)
          {
            MR_Word mercury__psqueue__UpdatedWinnerA_22;
            MR_Word mercury__psqueue__V_24_24;

            {
              mercury__psqueue__V_24_24 = mercury__psqueue__get_tournament_view_1_f_0(mercury__psqueue__TypeInfo_for_P_28, mercury__psqueue__TypeInfo_for_K_29, mercury__psqueue__WinnerA_26);
            }
            {
              mercury__psqueue__succeeded = mercury__psqueue__insert_tv_4_p_0(mercury__psqueue__TypeInfo_for_P_28, mercury__psqueue__TypeInfo_for_K_29, mercury__psqueue__InsertPrio_5, mercury__psqueue__InsertKey_6, mercury__psqueue__V_24_24, &mercury__psqueue__UpdatedWinnerA_22);
            }
            if (mercury__psqueue__succeeded)
              {
                {
                  mercury__psqueue__combine_winners_via_tournament_3_p_0(mercury__psqueue__TypeInfo_for_P_28, mercury__psqueue__TypeInfo_for_K_29, mercury__psqueue__UpdatedWinnerA_22, mercury__psqueue__WinnerB_27, mercury__psqueue__Winner_8);
                }
                mercury__psqueue__succeeded = MR_TRUE;
              }
          }
        else
          {
            MR_Word mercury__psqueue__UpdatedWinnerB_23;
            MR_Word mercury__psqueue__V_25_25;

            {
              mercury__psqueue__V_25_25 = mercury__psqueue__get_tournament_view_1_f_0(mercury__psqueue__TypeInfo_for_P_28, mercury__psqueue__TypeInfo_for_K_29, mercury__psqueue__WinnerB_27);
            }
            {
              mercury__psqueue__succeeded = mercury__psqueue__insert_tv_4_p_0(mercury__psqueue__TypeInfo_for_P_28, mercury__psqueue__TypeInfo_for_K_29, mercury__psqueue__InsertPrio_5, mercury__psqueue__InsertKey_6, mercury__psqueue__V_25_25, &mercury__psqueue__UpdatedWinnerB_23);
            }
            if (mercury__psqueue__succeeded)
              {
                {
                  mercury__psqueue__combine_winners_via_tournament_3_p_0(mercury__psqueue__TypeInfo_for_P_28, mercury__psqueue__TypeInfo_for_K_29, mercury__psqueue__WinnerA_26, mercury__psqueue__UpdatedWinnerB_23, mercury__psqueue__Winner_8);
                }
                mercury__psqueue__succeeded = MR_TRUE;
              }
          }
      }
    return mercury__psqueue__succeeded;
  }
}

MR_Word MR_CALL 
mercury__psqueue__singleton_winner_2_f_0(
  MR_Word mercury__psqueue__TypeInfo_for_P_8,
  MR_Word mercury__psqueue__TypeInfo_for_K_9,
  MR_Box mercury__psqueue__Prio_4,
  MR_Box mercury__psqueue__Key_5)
{
  {
    MR_bool mercury__psqueue__succeeded;
    MR_Word mercury__psqueue__HeadVar__3_3;
    MR_Word mercury__psqueue__V_6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__psqueue__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__psqueue__HeadVar__3_3, 0) = mercury__psqueue__Prio_4;
      MR_hl_field(MR_mktag(0), mercury__psqueue__HeadVar__3_3, 1) = mercury__psqueue__Key_5;
      MR_hl_field(MR_mktag(0), mercury__psqueue__HeadVar__3_3, 2) = ((MR_Box) (mercury__psqueue__V_6_6));
      MR_hl_field(MR_mktag(0), mercury__psqueue__HeadVar__3_3, 3) = mercury__psqueue__Key_5;
    }
    return mercury__psqueue__HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mercury__psqueue__single_right_5_f_0(
  MR_Word mercury__psqueue__TypeInfo_for_P_25,
  MR_Word mercury__psqueue__TypeInfo_for_K_26,
  MR_Box mercury__psqueue__InsertPrio_7,
  MR_Box mercury__psqueue__InsertKey_8,
  MR_Word mercury__psqueue__LTreeAB_9,
  MR_Box mercury__psqueue__SplitKeyBC_10,
  MR_Word mercury__psqueue__LTreeC_11)
{
  {
    MR_bool mercury__psqueue__succeeded;
    MR_Word mercury__psqueue__LTree_12;

    if ((mercury__psqueue__LTreeAB_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "psqueue.m", (MR_String) "function \140psqueue.single_right\'/5", (MR_String) "heavier tree is a leaf");
        }
      }
    else
      {
        MR_Box mercury__psqueue__LoserPrio_14 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeAB_9, (MR_Integer) 1));
        MR_Box mercury__psqueue__LoserKey_15 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeAB_9, (MR_Integer) 2));
        MR_Word mercury__psqueue__LTreeA_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeAB_9, (MR_Integer) 3)));
        MR_Box mercury__psqueue__SplitKeyAB_17 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeAB_9, (MR_Integer) 4));
        MR_Word mercury__psqueue__LTreeB_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeAB_9, (MR_Integer) 5)));
        MR_Integer mercury__psqueue__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeAB_9, (MR_Integer) 0)));
        MR_Word mercury__psqueue__CMP0_19;
        MR_Word mercury__psqueue__CMP_29;

        {
          mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_26, &mercury__psqueue__CMP0_19, mercury__psqueue__LoserKey_15, mercury__psqueue__SplitKeyAB_17);
        }
        mercury__psqueue__succeeded = (mercury__psqueue__CMP0_19 == (MR_Integer) 2);
        if (mercury__psqueue__succeeded)
          {
            {
              mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_P_25, &mercury__psqueue__CMP_29, mercury__psqueue__InsertPrio_7, mercury__psqueue__LoserPrio_14);
            }
            switch (mercury__psqueue__CMP_29) {
              default:
                mercury__psqueue__succeeded = MR_FALSE;
                break;
              case (MR_Integer) 1:
                mercury__psqueue__succeeded = MR_TRUE;
                break;
              case (MR_Integer) 0:
                mercury__psqueue__succeeded = MR_TRUE;
                break;
            }
          }
        if (mercury__psqueue__succeeded)
          {
            MR_Word mercury__psqueue__V_23_23;
            MR_Integer mercury__psqueue__Size_36;
            MR_Integer mercury__psqueue__V_37_37;
            MR_Integer mercury__psqueue__V_39_39;
            MR_Integer mercury__psqueue__V_40_40;
            MR_Integer mercury__psqueue__Size_61;
            MR_Integer mercury__psqueue__V_62_62;
            MR_Integer mercury__psqueue__V_64_64;

            if ((mercury__psqueue__LTreeB_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              mercury__psqueue__V_39_39 = (MR_Integer) 0;
            else
              {
                MR_Box mercury__psqueue__V_43_43;
                MR_Box mercury__psqueue__V_44_44;
                MR_Word mercury__psqueue__V_45_45;
                MR_Box mercury__psqueue__V_46_46;
                MR_Word mercury__psqueue__V_47_47;

                mercury__psqueue__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_18, (MR_Integer) 0)));
                mercury__psqueue__V_43_43 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_18, (MR_Integer) 1));
                mercury__psqueue__V_44_44 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_18, (MR_Integer) 2));
                mercury__psqueue__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_18, (MR_Integer) 3)));
                mercury__psqueue__V_46_46 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_18, (MR_Integer) 4));
                mercury__psqueue__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_18, (MR_Integer) 5)));
              }
            mercury__psqueue__V_37_37 = ((MR_Integer) 1 + mercury__psqueue__V_39_39);
            if ((mercury__psqueue__LTreeC_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              mercury__psqueue__V_40_40 = (MR_Integer) 0;
            else
              {
                MR_Box mercury__psqueue__V_50_50;
                MR_Box mercury__psqueue__V_51_51;
                MR_Word mercury__psqueue__V_52_52;
                MR_Box mercury__psqueue__V_53_53;
                MR_Word mercury__psqueue__V_54_54;

                mercury__psqueue__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_11, (MR_Integer) 0)));
                mercury__psqueue__V_50_50 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_11, (MR_Integer) 1));
                mercury__psqueue__V_51_51 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_11, (MR_Integer) 2));
                mercury__psqueue__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_11, (MR_Integer) 3)));
                mercury__psqueue__V_53_53 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_11, (MR_Integer) 4));
                mercury__psqueue__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_11, (MR_Integer) 5)));
              }
            mercury__psqueue__Size_36 = (mercury__psqueue__V_37_37 + mercury__psqueue__V_40_40);
            {
              mercury__psqueue__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_23_23, 0) = ((MR_Box) (mercury__psqueue__Size_36));
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_23_23, 1) = mercury__psqueue__LoserPrio_14;
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_23_23, 2) = mercury__psqueue__LoserKey_15;
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_23_23, 3) = ((MR_Box) (mercury__psqueue__LTreeB_18));
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_23_23, 4) = mercury__psqueue__SplitKeyBC_10;
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_23_23, 5) = ((MR_Box) (mercury__psqueue__LTreeC_11));
            }
            if ((mercury__psqueue__LTreeA_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              mercury__psqueue__V_64_64 = (MR_Integer) 0;
            else
              {
                MR_Box mercury__psqueue__V_68_68;
                MR_Box mercury__psqueue__V_69_69;
                MR_Word mercury__psqueue__V_70_70;
                MR_Box mercury__psqueue__V_71_71;
                MR_Word mercury__psqueue__V_72_72;

                mercury__psqueue__V_64_64 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_16, (MR_Integer) 0)));
                mercury__psqueue__V_68_68 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_16, (MR_Integer) 1));
                mercury__psqueue__V_69_69 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_16, (MR_Integer) 2));
                mercury__psqueue__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_16, (MR_Integer) 3)));
                mercury__psqueue__V_71_71 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_16, (MR_Integer) 4));
                mercury__psqueue__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_16, (MR_Integer) 5)));
              }
            mercury__psqueue__V_62_62 = ((MR_Integer) 1 + mercury__psqueue__V_64_64);
            mercury__psqueue__Size_61 = (mercury__psqueue__V_62_62 + mercury__psqueue__Size_36);
            {
              mercury__psqueue__LTree_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 0) = ((MR_Box) (mercury__psqueue__Size_61));
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 1) = mercury__psqueue__InsertPrio_7;
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 2) = mercury__psqueue__InsertKey_8;
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 3) = ((MR_Box) (mercury__psqueue__LTreeA_16));
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 4) = mercury__psqueue__SplitKeyAB_17;
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 5) = ((MR_Box) (mercury__psqueue__V_23_23));
            }
          }
        else
          {
            MR_Word mercury__psqueue__V_24_24;
            MR_Integer mercury__psqueue__Size_86;
            MR_Integer mercury__psqueue__V_87_87;
            MR_Integer mercury__psqueue__V_89_89;
            MR_Integer mercury__psqueue__V_90_90;
            MR_Integer mercury__psqueue__Size_111;
            MR_Integer mercury__psqueue__V_112_112;
            MR_Integer mercury__psqueue__V_114_114;

            if ((mercury__psqueue__LTreeB_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              mercury__psqueue__V_89_89 = (MR_Integer) 0;
            else
              {
                MR_Box mercury__psqueue__V_93_93;
                MR_Box mercury__psqueue__V_94_94;
                MR_Word mercury__psqueue__V_95_95;
                MR_Box mercury__psqueue__V_96_96;
                MR_Word mercury__psqueue__V_97_97;

                mercury__psqueue__V_89_89 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_18, (MR_Integer) 0)));
                mercury__psqueue__V_93_93 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_18, (MR_Integer) 1));
                mercury__psqueue__V_94_94 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_18, (MR_Integer) 2));
                mercury__psqueue__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_18, (MR_Integer) 3)));
                mercury__psqueue__V_96_96 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_18, (MR_Integer) 4));
                mercury__psqueue__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_18, (MR_Integer) 5)));
              }
            mercury__psqueue__V_87_87 = ((MR_Integer) 1 + mercury__psqueue__V_89_89);
            if ((mercury__psqueue__LTreeC_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              mercury__psqueue__V_90_90 = (MR_Integer) 0;
            else
              {
                MR_Box mercury__psqueue__V_100_100;
                MR_Box mercury__psqueue__V_101_101;
                MR_Word mercury__psqueue__V_102_102;
                MR_Box mercury__psqueue__V_103_103;
                MR_Word mercury__psqueue__V_104_104;

                mercury__psqueue__V_90_90 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_11, (MR_Integer) 0)));
                mercury__psqueue__V_100_100 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_11, (MR_Integer) 1));
                mercury__psqueue__V_101_101 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_11, (MR_Integer) 2));
                mercury__psqueue__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_11, (MR_Integer) 3)));
                mercury__psqueue__V_103_103 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_11, (MR_Integer) 4));
                mercury__psqueue__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_11, (MR_Integer) 5)));
              }
            mercury__psqueue__Size_86 = (mercury__psqueue__V_87_87 + mercury__psqueue__V_90_90);
            {
              mercury__psqueue__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_24_24, 0) = ((MR_Box) (mercury__psqueue__Size_86));
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_24_24, 1) = mercury__psqueue__InsertPrio_7;
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_24_24, 2) = mercury__psqueue__InsertKey_8;
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_24_24, 3) = ((MR_Box) (mercury__psqueue__LTreeB_18));
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_24_24, 4) = mercury__psqueue__SplitKeyBC_10;
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_24_24, 5) = ((MR_Box) (mercury__psqueue__LTreeC_11));
            }
            if ((mercury__psqueue__LTreeA_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              mercury__psqueue__V_114_114 = (MR_Integer) 0;
            else
              {
                MR_Box mercury__psqueue__V_118_118;
                MR_Box mercury__psqueue__V_119_119;
                MR_Word mercury__psqueue__V_120_120;
                MR_Box mercury__psqueue__V_121_121;
                MR_Word mercury__psqueue__V_122_122;

                mercury__psqueue__V_114_114 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_16, (MR_Integer) 0)));
                mercury__psqueue__V_118_118 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_16, (MR_Integer) 1));
                mercury__psqueue__V_119_119 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_16, (MR_Integer) 2));
                mercury__psqueue__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_16, (MR_Integer) 3)));
                mercury__psqueue__V_121_121 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_16, (MR_Integer) 4));
                mercury__psqueue__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_16, (MR_Integer) 5)));
              }
            mercury__psqueue__V_112_112 = ((MR_Integer) 1 + mercury__psqueue__V_114_114);
            mercury__psqueue__Size_111 = (mercury__psqueue__V_112_112 + mercury__psqueue__Size_86);
            {
              mercury__psqueue__LTree_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 0) = ((MR_Box) (mercury__psqueue__Size_111));
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 1) = mercury__psqueue__LoserPrio_14;
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 2) = mercury__psqueue__LoserKey_15;
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 3) = ((MR_Box) (mercury__psqueue__LTreeA_16));
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 4) = mercury__psqueue__SplitKeyAB_17;
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 5) = ((MR_Box) (mercury__psqueue__V_24_24));
            }
          }
      }
    return mercury__psqueue__LTree_12;
  }
}

static MR_Word MR_CALL 
mercury__psqueue__single_left_5_f_0(
  MR_Word mercury__psqueue__TypeInfo_for_P_24,
  MR_Word mercury__psqueue__TypeInfo_for_K_25,
  MR_Box mercury__psqueue__InsertPrio_7,
  MR_Box mercury__psqueue__InsertKey_8,
  MR_Word mercury__psqueue__LTreeA_9,
  MR_Box mercury__psqueue__SplitKeyAB_10,
  MR_Word mercury__psqueue__LTreeBC_11)
{
  {
    MR_bool mercury__psqueue__succeeded;
    MR_Word mercury__psqueue__LTree_12;

    if ((mercury__psqueue__LTreeBC_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "psqueue.m", (MR_String) "function \140psqueue.single_left\'/5", (MR_String) "heavier tree is a leaf");
        }
      }
    else
      {
        MR_Box mercury__psqueue__LoserPrio_14 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeBC_11, (MR_Integer) 1));
        MR_Box mercury__psqueue__LoserKey_15 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeBC_11, (MR_Integer) 2));
        MR_Word mercury__psqueue__LTreeB_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeBC_11, (MR_Integer) 3)));
        MR_Box mercury__psqueue__SplitKeyBC_17 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeBC_11, (MR_Integer) 4));
        MR_Word mercury__psqueue__LTreeC_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeBC_11, (MR_Integer) 5)));
        MR_Integer mercury__psqueue__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeBC_11, (MR_Integer) 0)));
        MR_Word mercury__psqueue__CMP_28;
        MR_Word mercury__psqueue__CMP_31;

        {
          mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_25, &mercury__psqueue__CMP_28, mercury__psqueue__LoserKey_15, mercury__psqueue__SplitKeyBC_17);
        }
        switch (mercury__psqueue__CMP_28) {
          default:
            mercury__psqueue__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 1:
            mercury__psqueue__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 0:
            mercury__psqueue__succeeded = MR_TRUE;
            break;
        }
        if (mercury__psqueue__succeeded)
          {
            {
              mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_P_24, &mercury__psqueue__CMP_31, mercury__psqueue__InsertPrio_7, mercury__psqueue__LoserPrio_14);
            }
            switch (mercury__psqueue__CMP_31) {
              default:
                mercury__psqueue__succeeded = MR_FALSE;
                break;
              case (MR_Integer) 1:
                mercury__psqueue__succeeded = MR_TRUE;
                break;
              case (MR_Integer) 0:
                mercury__psqueue__succeeded = MR_TRUE;
                break;
            }
          }
        if (mercury__psqueue__succeeded)
          {
            MR_Word mercury__psqueue__V_22_22;
            MR_Integer mercury__psqueue__Size_38;
            MR_Integer mercury__psqueue__V_39_39;
            MR_Integer mercury__psqueue__V_41_41;
            MR_Integer mercury__psqueue__V_42_42;
            MR_Integer mercury__psqueue__Size_63;
            MR_Integer mercury__psqueue__V_64_64;
            MR_Integer mercury__psqueue__V_67_67;

            if ((mercury__psqueue__LTreeA_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              mercury__psqueue__V_41_41 = (MR_Integer) 0;
            else
              {
                MR_Box mercury__psqueue__V_45_45;
                MR_Box mercury__psqueue__V_46_46;
                MR_Word mercury__psqueue__V_47_47;
                MR_Box mercury__psqueue__V_48_48;
                MR_Word mercury__psqueue__V_49_49;

                mercury__psqueue__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_9, (MR_Integer) 0)));
                mercury__psqueue__V_45_45 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_9, (MR_Integer) 1));
                mercury__psqueue__V_46_46 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_9, (MR_Integer) 2));
                mercury__psqueue__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_9, (MR_Integer) 3)));
                mercury__psqueue__V_48_48 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_9, (MR_Integer) 4));
                mercury__psqueue__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_9, (MR_Integer) 5)));
              }
            mercury__psqueue__V_39_39 = ((MR_Integer) 1 + mercury__psqueue__V_41_41);
            if ((mercury__psqueue__LTreeB_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              mercury__psqueue__V_42_42 = (MR_Integer) 0;
            else
              {
                MR_Box mercury__psqueue__V_52_52;
                MR_Box mercury__psqueue__V_53_53;
                MR_Word mercury__psqueue__V_54_54;
                MR_Box mercury__psqueue__V_55_55;
                MR_Word mercury__psqueue__V_56_56;

                mercury__psqueue__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_16, (MR_Integer) 0)));
                mercury__psqueue__V_52_52 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_16, (MR_Integer) 1));
                mercury__psqueue__V_53_53 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_16, (MR_Integer) 2));
                mercury__psqueue__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_16, (MR_Integer) 3)));
                mercury__psqueue__V_55_55 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_16, (MR_Integer) 4));
                mercury__psqueue__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_16, (MR_Integer) 5)));
              }
            mercury__psqueue__Size_38 = (mercury__psqueue__V_39_39 + mercury__psqueue__V_42_42);
            {
              mercury__psqueue__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_22_22, 0) = ((MR_Box) (mercury__psqueue__Size_38));
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_22_22, 1) = mercury__psqueue__LoserPrio_14;
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_22_22, 2) = mercury__psqueue__LoserKey_15;
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_22_22, 3) = ((MR_Box) (mercury__psqueue__LTreeA_9));
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_22_22, 4) = mercury__psqueue__SplitKeyAB_10;
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_22_22, 5) = ((MR_Box) (mercury__psqueue__LTreeB_16));
            }
            mercury__psqueue__V_64_64 = ((MR_Integer) 1 + mercury__psqueue__Size_38);
            if ((mercury__psqueue__LTreeC_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              mercury__psqueue__V_67_67 = (MR_Integer) 0;
            else
              {
                MR_Box mercury__psqueue__V_77_77;
                MR_Box mercury__psqueue__V_78_78;
                MR_Word mercury__psqueue__V_79_79;
                MR_Box mercury__psqueue__V_80_80;
                MR_Word mercury__psqueue__V_81_81;

                mercury__psqueue__V_67_67 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_18, (MR_Integer) 0)));
                mercury__psqueue__V_77_77 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_18, (MR_Integer) 1));
                mercury__psqueue__V_78_78 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_18, (MR_Integer) 2));
                mercury__psqueue__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_18, (MR_Integer) 3)));
                mercury__psqueue__V_80_80 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_18, (MR_Integer) 4));
                mercury__psqueue__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_18, (MR_Integer) 5)));
              }
            mercury__psqueue__Size_63 = (mercury__psqueue__V_64_64 + mercury__psqueue__V_67_67);
            {
              mercury__psqueue__LTree_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 0) = ((MR_Box) (mercury__psqueue__Size_63));
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 1) = mercury__psqueue__InsertPrio_7;
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 2) = mercury__psqueue__InsertKey_8;
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 3) = ((MR_Box) (mercury__psqueue__V_22_22));
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 4) = mercury__psqueue__SplitKeyBC_17;
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 5) = ((MR_Box) (mercury__psqueue__LTreeC_18));
            }
          }
        else
          {
            MR_Word mercury__psqueue__V_23_23;
            MR_Integer mercury__psqueue__Size_88;
            MR_Integer mercury__psqueue__V_89_89;
            MR_Integer mercury__psqueue__V_91_91;
            MR_Integer mercury__psqueue__V_92_92;
            MR_Integer mercury__psqueue__Size_113;
            MR_Integer mercury__psqueue__V_114_114;
            MR_Integer mercury__psqueue__V_117_117;

            if ((mercury__psqueue__LTreeA_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              mercury__psqueue__V_91_91 = (MR_Integer) 0;
            else
              {
                MR_Box mercury__psqueue__V_95_95;
                MR_Box mercury__psqueue__V_96_96;
                MR_Word mercury__psqueue__V_97_97;
                MR_Box mercury__psqueue__V_98_98;
                MR_Word mercury__psqueue__V_99_99;

                mercury__psqueue__V_91_91 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_9, (MR_Integer) 0)));
                mercury__psqueue__V_95_95 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_9, (MR_Integer) 1));
                mercury__psqueue__V_96_96 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_9, (MR_Integer) 2));
                mercury__psqueue__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_9, (MR_Integer) 3)));
                mercury__psqueue__V_98_98 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_9, (MR_Integer) 4));
                mercury__psqueue__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeA_9, (MR_Integer) 5)));
              }
            mercury__psqueue__V_89_89 = ((MR_Integer) 1 + mercury__psqueue__V_91_91);
            if ((mercury__psqueue__LTreeB_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              mercury__psqueue__V_92_92 = (MR_Integer) 0;
            else
              {
                MR_Box mercury__psqueue__V_102_102;
                MR_Box mercury__psqueue__V_103_103;
                MR_Word mercury__psqueue__V_104_104;
                MR_Box mercury__psqueue__V_105_105;
                MR_Word mercury__psqueue__V_106_106;

                mercury__psqueue__V_92_92 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_16, (MR_Integer) 0)));
                mercury__psqueue__V_102_102 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_16, (MR_Integer) 1));
                mercury__psqueue__V_103_103 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_16, (MR_Integer) 2));
                mercury__psqueue__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_16, (MR_Integer) 3)));
                mercury__psqueue__V_105_105 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_16, (MR_Integer) 4));
                mercury__psqueue__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeB_16, (MR_Integer) 5)));
              }
            mercury__psqueue__Size_88 = (mercury__psqueue__V_89_89 + mercury__psqueue__V_92_92);
            {
              mercury__psqueue__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_23_23, 0) = ((MR_Box) (mercury__psqueue__Size_88));
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_23_23, 1) = mercury__psqueue__InsertPrio_7;
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_23_23, 2) = mercury__psqueue__InsertKey_8;
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_23_23, 3) = ((MR_Box) (mercury__psqueue__LTreeA_9));
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_23_23, 4) = mercury__psqueue__SplitKeyAB_10;
              MR_hl_field(MR_mktag(1), mercury__psqueue__V_23_23, 5) = ((MR_Box) (mercury__psqueue__LTreeB_16));
            }
            mercury__psqueue__V_114_114 = ((MR_Integer) 1 + mercury__psqueue__Size_88);
            if ((mercury__psqueue__LTreeC_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              mercury__psqueue__V_117_117 = (MR_Integer) 0;
            else
              {
                MR_Box mercury__psqueue__V_127_127;
                MR_Box mercury__psqueue__V_128_128;
                MR_Word mercury__psqueue__V_129_129;
                MR_Box mercury__psqueue__V_130_130;
                MR_Word mercury__psqueue__V_131_131;

                mercury__psqueue__V_117_117 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_18, (MR_Integer) 0)));
                mercury__psqueue__V_127_127 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_18, (MR_Integer) 1));
                mercury__psqueue__V_128_128 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_18, (MR_Integer) 2));
                mercury__psqueue__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_18, (MR_Integer) 3)));
                mercury__psqueue__V_130_130 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_18, (MR_Integer) 4));
                mercury__psqueue__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeC_18, (MR_Integer) 5)));
              }
            mercury__psqueue__Size_113 = (mercury__psqueue__V_114_114 + mercury__psqueue__V_117_117);
            {
              mercury__psqueue__LTree_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 0) = ((MR_Box) (mercury__psqueue__Size_113));
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 1) = mercury__psqueue__LoserPrio_14;
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 2) = mercury__psqueue__LoserKey_15;
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 3) = ((MR_Box) (mercury__psqueue__V_23_23));
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 4) = mercury__psqueue__SplitKeyBC_17;
              MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 5) = ((MR_Box) (mercury__psqueue__LTreeC_18));
            }
          }
      }
    return mercury__psqueue__LTree_12;
  }
}

static MR_Word MR_CALL 
mercury__psqueue__balance_right_5_f_0(
  MR_Word mercury__psqueue__TypeInfo_for_P_25,
  MR_Word mercury__psqueue__TypeInfo_for_K_26,
  MR_Box mercury__psqueue__Prio_7,
  MR_Box mercury__psqueue__Key_8,
  MR_Word mercury__psqueue__LTreeL_9,
  MR_Box mercury__psqueue__SplitKey_10,
  MR_Word mercury__psqueue__LTreeR_11)
{
  {
    MR_bool mercury__psqueue__succeeded;
    MR_Word mercury__psqueue__LTree_12;

    if ((mercury__psqueue__LTreeL_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "psqueue.m", (MR_String) "function \140psqueue.balance_right\'/5", (MR_String) "heavier tree is a leaf");
        }
      }
    else
      {
        MR_Word mercury__psqueue__SubLTreeLL_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 3)));
        MR_Word mercury__psqueue__SubLTreeLR_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 5)));
        MR_Word mercury__psqueue__CMP_19;
        MR_Integer mercury__psqueue__V_23_23;
        MR_Integer mercury__psqueue__V_24_24;
        MR_Integer mercury__psqueue__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 0)));
        MR_Box mercury__psqueue__V_14_14 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 1));
        MR_Box mercury__psqueue__V_15_15 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 2));
        MR_Box mercury__psqueue__V_17_17 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 4));

        if ((mercury__psqueue__SubLTreeLR_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          mercury__psqueue__V_23_23 = (MR_Integer) 0;
        else
          {
            MR_Box mercury__psqueue__V_30_30;
            MR_Box mercury__psqueue__V_31_31;
            MR_Word mercury__psqueue__V_32_32;
            MR_Box mercury__psqueue__V_33_33;
            MR_Word mercury__psqueue__V_34_34;

            mercury__psqueue__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeLR_18, (MR_Integer) 0)));
            mercury__psqueue__V_30_30 = (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeLR_18, (MR_Integer) 1));
            mercury__psqueue__V_31_31 = (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeLR_18, (MR_Integer) 2));
            mercury__psqueue__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeLR_18, (MR_Integer) 3)));
            mercury__psqueue__V_33_33 = (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeLR_18, (MR_Integer) 4));
            mercury__psqueue__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeLR_18, (MR_Integer) 5)));
          }
        if ((mercury__psqueue__SubLTreeLL_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          mercury__psqueue__V_24_24 = (MR_Integer) 0;
        else
          {
            MR_Box mercury__psqueue__V_37_37;
            MR_Box mercury__psqueue__V_38_38;
            MR_Word mercury__psqueue__V_39_39;
            MR_Box mercury__psqueue__V_40_40;
            MR_Word mercury__psqueue__V_41_41;

            mercury__psqueue__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeLL_16, (MR_Integer) 0)));
            mercury__psqueue__V_37_37 = (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeLL_16, (MR_Integer) 1));
            mercury__psqueue__V_38_38 = (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeLL_16, (MR_Integer) 2));
            mercury__psqueue__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeLL_16, (MR_Integer) 3)));
            mercury__psqueue__V_40_40 = (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeLL_16, (MR_Integer) 4));
            mercury__psqueue__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeLL_16, (MR_Integer) 5)));
          }
        mercury__psqueue__succeeded = (mercury__psqueue__V_23_23 < mercury__psqueue__V_24_24);
        if (mercury__psqueue__succeeded)
          mercury__psqueue__CMP_19 = (MR_Integer) 1;
        else
          {
            mercury__psqueue__succeeded = (mercury__psqueue__V_23_23 == mercury__psqueue__V_24_24);
            if (mercury__psqueue__succeeded)
              mercury__psqueue__CMP_19 = (MR_Integer) 0;
            else
              mercury__psqueue__CMP_19 = (MR_Integer) 2;
          }
        mercury__psqueue__succeeded = (mercury__psqueue__CMP_19 == (MR_Integer) 1);
        if (mercury__psqueue__succeeded)
          {
            mercury__psqueue__LTree_12 = mercury__psqueue__single_right_5_f_0(mercury__psqueue__TypeInfo_for_P_25, mercury__psqueue__TypeInfo_for_K_26, mercury__psqueue__Prio_7, mercury__psqueue__Key_8, mercury__psqueue__LTreeL_9, mercury__psqueue__SplitKey_10, mercury__psqueue__LTreeR_11);
          }
        else
          {
            MR_Box mercury__psqueue__LoserPrio_52 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 1));
            MR_Box mercury__psqueue__LoserKey_53 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 2));
            MR_Word mercury__psqueue__LTreeA_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 3)));
            MR_Box mercury__psqueue__SplitKeyAB_55 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 4));
            MR_Word mercury__psqueue__LTreeB_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 5)));
            MR_Word mercury__psqueue__V_60_60;
            MR_Integer mercury__psqueue__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 0)));

            {
              mercury__psqueue__V_60_60 = mercury__psqueue__single_left_5_f_0(mercury__psqueue__TypeInfo_for_P_25, mercury__psqueue__TypeInfo_for_K_26, mercury__psqueue__LoserPrio_52, mercury__psqueue__LoserKey_53, mercury__psqueue__LTreeA_54, mercury__psqueue__SplitKeyAB_55, mercury__psqueue__LTreeB_56);
            }
            {
              mercury__psqueue__LTree_12 = mercury__psqueue__single_right_5_f_0(mercury__psqueue__TypeInfo_for_P_25, mercury__psqueue__TypeInfo_for_K_26, mercury__psqueue__Prio_7, mercury__psqueue__Key_8, mercury__psqueue__V_60_60, mercury__psqueue__SplitKey_10, mercury__psqueue__LTreeR_11);
            }
          }
      }
    return mercury__psqueue__LTree_12;
  }
}

static MR_Word MR_CALL 
mercury__psqueue__balance_left_5_f_0(
  MR_Word mercury__psqueue__TypeInfo_for_P_25,
  MR_Word mercury__psqueue__TypeInfo_for_K_26,
  MR_Box mercury__psqueue__Prio_7,
  MR_Box mercury__psqueue__Key_8,
  MR_Word mercury__psqueue__LTreeL_9,
  MR_Box mercury__psqueue__SplitKey_10,
  MR_Word mercury__psqueue__LTreeR_11)
{
  {
    MR_bool mercury__psqueue__succeeded;
    MR_Word mercury__psqueue__LTree_12;

    if ((mercury__psqueue__LTreeR_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "psqueue.m", (MR_String) "function \140psqueue.balance_left\'/5", (MR_String) "heavier tree is a leaf");
        }
      }
    else
      {
        MR_Word mercury__psqueue__SubLTreeRL_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 3)));
        MR_Word mercury__psqueue__SubLTreeRR_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 5)));
        MR_Word mercury__psqueue__CMP_19;
        MR_Integer mercury__psqueue__V_23_23;
        MR_Integer mercury__psqueue__V_24_24;
        MR_Integer mercury__psqueue__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 0)));
        MR_Box mercury__psqueue__V_14_14 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 1));
        MR_Box mercury__psqueue__V_15_15 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 2));
        MR_Box mercury__psqueue__V_17_17 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 4));

        if ((mercury__psqueue__SubLTreeRL_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          mercury__psqueue__V_23_23 = (MR_Integer) 0;
        else
          {
            MR_Box mercury__psqueue__V_30_30;
            MR_Box mercury__psqueue__V_31_31;
            MR_Word mercury__psqueue__V_32_32;
            MR_Box mercury__psqueue__V_33_33;
            MR_Word mercury__psqueue__V_34_34;

            mercury__psqueue__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeRL_16, (MR_Integer) 0)));
            mercury__psqueue__V_30_30 = (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeRL_16, (MR_Integer) 1));
            mercury__psqueue__V_31_31 = (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeRL_16, (MR_Integer) 2));
            mercury__psqueue__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeRL_16, (MR_Integer) 3)));
            mercury__psqueue__V_33_33 = (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeRL_16, (MR_Integer) 4));
            mercury__psqueue__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeRL_16, (MR_Integer) 5)));
          }
        if ((mercury__psqueue__SubLTreeRR_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          mercury__psqueue__V_24_24 = (MR_Integer) 0;
        else
          {
            MR_Box mercury__psqueue__V_37_37;
            MR_Box mercury__psqueue__V_38_38;
            MR_Word mercury__psqueue__V_39_39;
            MR_Box mercury__psqueue__V_40_40;
            MR_Word mercury__psqueue__V_41_41;

            mercury__psqueue__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeRR_18, (MR_Integer) 0)));
            mercury__psqueue__V_37_37 = (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeRR_18, (MR_Integer) 1));
            mercury__psqueue__V_38_38 = (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeRR_18, (MR_Integer) 2));
            mercury__psqueue__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeRR_18, (MR_Integer) 3)));
            mercury__psqueue__V_40_40 = (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeRR_18, (MR_Integer) 4));
            mercury__psqueue__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__SubLTreeRR_18, (MR_Integer) 5)));
          }
        mercury__psqueue__succeeded = (mercury__psqueue__V_23_23 < mercury__psqueue__V_24_24);
        if (mercury__psqueue__succeeded)
          mercury__psqueue__CMP_19 = (MR_Integer) 1;
        else
          {
            mercury__psqueue__succeeded = (mercury__psqueue__V_23_23 == mercury__psqueue__V_24_24);
            if (mercury__psqueue__succeeded)
              mercury__psqueue__CMP_19 = (MR_Integer) 0;
            else
              mercury__psqueue__CMP_19 = (MR_Integer) 2;
          }
        mercury__psqueue__succeeded = (mercury__psqueue__CMP_19 == (MR_Integer) 1);
        if (mercury__psqueue__succeeded)
          {
            mercury__psqueue__LTree_12 = mercury__psqueue__single_left_5_f_0(mercury__psqueue__TypeInfo_for_P_25, mercury__psqueue__TypeInfo_for_K_26, mercury__psqueue__Prio_7, mercury__psqueue__Key_8, mercury__psqueue__LTreeL_9, mercury__psqueue__SplitKey_10, mercury__psqueue__LTreeR_11);
          }
        else
          {
            MR_Box mercury__psqueue__LoserPrio_52 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 1));
            MR_Box mercury__psqueue__LoserKey_53 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 2));
            MR_Word mercury__psqueue__LTreeB_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 3)));
            MR_Box mercury__psqueue__SplitKeyBC_55 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 4));
            MR_Word mercury__psqueue__LTreeC_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 5)));
            MR_Word mercury__psqueue__V_60_60;
            MR_Integer mercury__psqueue__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 0)));

            {
              mercury__psqueue__V_60_60 = mercury__psqueue__single_right_5_f_0(mercury__psqueue__TypeInfo_for_P_25, mercury__psqueue__TypeInfo_for_K_26, mercury__psqueue__LoserPrio_52, mercury__psqueue__LoserKey_53, mercury__psqueue__LTreeB_54, mercury__psqueue__SplitKeyBC_55, mercury__psqueue__LTreeC_56);
            }
            {
              mercury__psqueue__LTree_12 = mercury__psqueue__single_left_5_f_0(mercury__psqueue__TypeInfo_for_P_25, mercury__psqueue__TypeInfo_for_K_26, mercury__psqueue__Prio_7, mercury__psqueue__Key_8, mercury__psqueue__LTreeL_9, mercury__psqueue__SplitKey_10, mercury__psqueue__V_60_60);
            }
          }
      }
    return mercury__psqueue__LTree_12;
  }
}

static MR_Word MR_CALL 
mercury__psqueue__balance_5_f_0(
  MR_Word mercury__psqueue__TypeInfo_for_P_23,
  MR_Word mercury__psqueue__TypeInfo_for_K_24,
  MR_Box mercury__psqueue__Prio_7,
  MR_Box mercury__psqueue__Key_8,
  MR_Word mercury__psqueue__LTreeL_9,
  MR_Box mercury__psqueue__SplitKey_10,
  MR_Word mercury__psqueue__LTreeR_11)
{
  {
    MR_bool mercury__psqueue__succeeded;
    MR_Word mercury__psqueue__LTree_12;
    MR_Integer mercury__psqueue__SizeL_13;
    MR_Integer mercury__psqueue__SizeR_14;
    MR_Integer mercury__psqueue__V_17_17;

    if ((mercury__psqueue__LTreeL_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__psqueue__SizeL_13 = (MR_Integer) 0;
    else
      {
        MR_Box mercury__psqueue__V_29_29;
        MR_Box mercury__psqueue__V_30_30;
        MR_Word mercury__psqueue__V_31_31;
        MR_Box mercury__psqueue__V_32_32;
        MR_Word mercury__psqueue__V_33_33;

        mercury__psqueue__SizeL_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 0)));
        mercury__psqueue__V_29_29 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 1));
        mercury__psqueue__V_30_30 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 2));
        mercury__psqueue__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 3)));
        mercury__psqueue__V_32_32 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 4));
        mercury__psqueue__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 5)));
      }
    if ((mercury__psqueue__LTreeR_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__psqueue__SizeR_14 = (MR_Integer) 0;
    else
      {
        MR_Box mercury__psqueue__V_36_36;
        MR_Box mercury__psqueue__V_37_37;
        MR_Word mercury__psqueue__V_38_38;
        MR_Box mercury__psqueue__V_39_39;
        MR_Word mercury__psqueue__V_40_40;

        mercury__psqueue__SizeR_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 0)));
        mercury__psqueue__V_36_36 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 1));
        mercury__psqueue__V_37_37 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 2));
        mercury__psqueue__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 3)));
        mercury__psqueue__V_39_39 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 4));
        mercury__psqueue__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 5)));
      }
    mercury__psqueue__V_17_17 = (mercury__psqueue__SizeR_14 + mercury__psqueue__SizeL_13);
    mercury__psqueue__succeeded = (mercury__psqueue__V_17_17 < (MR_Integer) 2);
    if (mercury__psqueue__succeeded)
      {
        MR_Integer mercury__psqueue__Size_47;
        MR_Integer mercury__psqueue__V_48_48;
        MR_Integer mercury__psqueue__V_50_50;
        MR_Integer mercury__psqueue__V_51_51;

        if ((mercury__psqueue__LTreeL_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          mercury__psqueue__V_50_50 = (MR_Integer) 0;
        else
          {
            MR_Box mercury__psqueue__V_54_54;
            MR_Box mercury__psqueue__V_55_55;
            MR_Word mercury__psqueue__V_56_56;
            MR_Box mercury__psqueue__V_57_57;
            MR_Word mercury__psqueue__V_58_58;

            mercury__psqueue__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 0)));
            mercury__psqueue__V_54_54 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 1));
            mercury__psqueue__V_55_55 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 2));
            mercury__psqueue__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 3)));
            mercury__psqueue__V_57_57 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 4));
            mercury__psqueue__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 5)));
          }
        mercury__psqueue__V_48_48 = ((MR_Integer) 1 + mercury__psqueue__V_50_50);
        if ((mercury__psqueue__LTreeR_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          mercury__psqueue__V_51_51 = (MR_Integer) 0;
        else
          {
            MR_Box mercury__psqueue__V_61_61;
            MR_Box mercury__psqueue__V_62_62;
            MR_Word mercury__psqueue__V_63_63;
            MR_Box mercury__psqueue__V_64_64;
            MR_Word mercury__psqueue__V_65_65;

            mercury__psqueue__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 0)));
            mercury__psqueue__V_61_61 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 1));
            mercury__psqueue__V_62_62 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 2));
            mercury__psqueue__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 3)));
            mercury__psqueue__V_64_64 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 4));
            mercury__psqueue__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 5)));
          }
        mercury__psqueue__Size_47 = (mercury__psqueue__V_48_48 + mercury__psqueue__V_51_51);
        {
          mercury__psqueue__LTree_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 0) = ((MR_Box) (mercury__psqueue__Size_47));
          MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 1) = mercury__psqueue__Prio_7;
          MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 2) = mercury__psqueue__Key_8;
          MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 3) = ((MR_Box) (mercury__psqueue__LTreeL_9));
          MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 4) = mercury__psqueue__SplitKey_10;
          MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 5) = ((MR_Box) (mercury__psqueue__LTreeR_11));
        }
      }
    else
      {
        MR_Word mercury__psqueue__CMPL_15;
        MR_Integer mercury__psqueue__V_19_19 = ((MR_Integer) 4 * mercury__psqueue__SizeL_13);

        mercury__psqueue__succeeded = (mercury__psqueue__SizeR_14 < mercury__psqueue__V_19_19);
        if (mercury__psqueue__succeeded)
          mercury__psqueue__CMPL_15 = (MR_Integer) 1;
        else
          {
            mercury__psqueue__succeeded = (mercury__psqueue__SizeR_14 == mercury__psqueue__V_19_19);
            if (mercury__psqueue__succeeded)
              mercury__psqueue__CMPL_15 = (MR_Integer) 0;
            else
              mercury__psqueue__CMPL_15 = (MR_Integer) 2;
          }
        mercury__psqueue__succeeded = (mercury__psqueue__CMPL_15 == (MR_Integer) 2);
        if (mercury__psqueue__succeeded)
          {
            mercury__psqueue__LTree_12 = mercury__psqueue__balance_left_5_f_0(mercury__psqueue__TypeInfo_for_P_23, mercury__psqueue__TypeInfo_for_K_24, mercury__psqueue__Prio_7, mercury__psqueue__Key_8, mercury__psqueue__LTreeL_9, mercury__psqueue__SplitKey_10, mercury__psqueue__LTreeR_11);
          }
        else
          {
            MR_Word mercury__psqueue__CMPR_16;
            MR_Integer mercury__psqueue__V_21_21 = ((MR_Integer) 4 * mercury__psqueue__SizeR_14);

            mercury__psqueue__succeeded = (mercury__psqueue__SizeL_13 < mercury__psqueue__V_21_21);
            if (mercury__psqueue__succeeded)
              mercury__psqueue__CMPR_16 = (MR_Integer) 1;
            else
              {
                mercury__psqueue__succeeded = (mercury__psqueue__SizeL_13 == mercury__psqueue__V_21_21);
                if (mercury__psqueue__succeeded)
                  mercury__psqueue__CMPR_16 = (MR_Integer) 0;
                else
                  mercury__psqueue__CMPR_16 = (MR_Integer) 2;
              }
            mercury__psqueue__succeeded = (mercury__psqueue__CMPR_16 == (MR_Integer) 2);
            if (mercury__psqueue__succeeded)
              {
                mercury__psqueue__LTree_12 = mercury__psqueue__balance_right_5_f_0(mercury__psqueue__TypeInfo_for_P_23, mercury__psqueue__TypeInfo_for_K_24, mercury__psqueue__Prio_7, mercury__psqueue__Key_8, mercury__psqueue__LTreeL_9, mercury__psqueue__SplitKey_10, mercury__psqueue__LTreeR_11);
              }
            else
              {
                MR_Integer mercury__psqueue__Size_78;
                MR_Integer mercury__psqueue__V_79_79;
                MR_Integer mercury__psqueue__V_81_81;
                MR_Integer mercury__psqueue__V_82_82;

                if ((mercury__psqueue__LTreeL_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  mercury__psqueue__V_81_81 = (MR_Integer) 0;
                else
                  {
                    MR_Box mercury__psqueue__V_85_85;
                    MR_Box mercury__psqueue__V_86_86;
                    MR_Word mercury__psqueue__V_87_87;
                    MR_Box mercury__psqueue__V_88_88;
                    MR_Word mercury__psqueue__V_89_89;

                    mercury__psqueue__V_81_81 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 0)));
                    mercury__psqueue__V_85_85 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 1));
                    mercury__psqueue__V_86_86 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 2));
                    mercury__psqueue__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 3)));
                    mercury__psqueue__V_88_88 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 4));
                    mercury__psqueue__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeL_9, (MR_Integer) 5)));
                  }
                mercury__psqueue__V_79_79 = ((MR_Integer) 1 + mercury__psqueue__V_81_81);
                if ((mercury__psqueue__LTreeR_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  mercury__psqueue__V_82_82 = (MR_Integer) 0;
                else
                  {
                    MR_Box mercury__psqueue__V_92_92;
                    MR_Box mercury__psqueue__V_93_93;
                    MR_Word mercury__psqueue__V_94_94;
                    MR_Box mercury__psqueue__V_95_95;
                    MR_Word mercury__psqueue__V_96_96;

                    mercury__psqueue__V_82_82 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 0)));
                    mercury__psqueue__V_92_92 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 1));
                    mercury__psqueue__V_93_93 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 2));
                    mercury__psqueue__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 3)));
                    mercury__psqueue__V_95_95 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 4));
                    mercury__psqueue__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTreeR_11, (MR_Integer) 5)));
                  }
                mercury__psqueue__Size_78 = (mercury__psqueue__V_79_79 + mercury__psqueue__V_82_82);
                {
                  mercury__psqueue__LTree_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 0) = ((MR_Box) (mercury__psqueue__Size_78));
                  MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 1) = mercury__psqueue__Prio_7;
                  MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 2) = mercury__psqueue__Key_8;
                  MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 3) = ((MR_Box) (mercury__psqueue__LTreeL_9));
                  MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 4) = mercury__psqueue__SplitKey_10;
                  MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_12, 5) = ((MR_Box) (mercury__psqueue__LTreeR_11));
                }
              }
          }
      }
    return mercury__psqueue__LTree_12;
  }
}

void MR_CALL 
mercury__psqueue__combine_winners_via_tournament_3_p_0(
  MR_Word mercury__psqueue__TypeInfo_for_P_17,
  MR_Word mercury__psqueue__TypeInfo_for_K_18,
  MR_Word mercury__psqueue__WinnerA_4,
  MR_Word mercury__psqueue__WinnerB_5,
  MR_Word * mercury__psqueue__CombinedWinner_6)
{
  {
    MR_bool mercury__psqueue__succeeded;
    MR_Box mercury__psqueue__PrioA_7 = (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_4, (MR_Integer) 0));
    MR_Box mercury__psqueue__KeyA_8 = (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_4, (MR_Integer) 1));
    MR_Word mercury__psqueue__LTreeA_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_4, (MR_Integer) 2)));
    MR_Box mercury__psqueue__MaxKeyA_10 = (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_4, (MR_Integer) 3));
    MR_Box mercury__psqueue__PrioB_11 = (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_5, (MR_Integer) 0));
    MR_Box mercury__psqueue__KeyB_12 = (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_5, (MR_Integer) 1));
    MR_Word mercury__psqueue__LTreeB_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_5, (MR_Integer) 2)));
    MR_Box mercury__psqueue__MaxKeyB_14 = (MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_5, (MR_Integer) 3));
    MR_Word mercury__psqueue__CMP_21;

    {
      mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_P_17, &mercury__psqueue__CMP_21, mercury__psqueue__PrioA_7, mercury__psqueue__PrioB_11);
    }
    switch (mercury__psqueue__CMP_21) {
      default:
        mercury__psqueue__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 1:
        mercury__psqueue__succeeded = MR_TRUE;
        break;
      case (MR_Integer) 0:
        mercury__psqueue__succeeded = MR_TRUE;
        break;
    }
    if (mercury__psqueue__succeeded)
      {
        MR_Word mercury__psqueue__LTree_15;

        {
          mercury__psqueue__LTree_15 = mercury__psqueue__balance_5_f_0(mercury__psqueue__TypeInfo_for_P_17, mercury__psqueue__TypeInfo_for_K_18, mercury__psqueue__PrioB_11, mercury__psqueue__KeyB_12, mercury__psqueue__LTreeA_9, mercury__psqueue__MaxKeyA_10, mercury__psqueue__LTreeB_13);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          *mercury__psqueue__CombinedWinner_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = mercury__psqueue__PrioA_7;
          MR_hl_field(MR_mktag(0), base, 1) = mercury__psqueue__KeyA_8;
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__psqueue__LTree_15));
          MR_hl_field(MR_mktag(0), base, 3) = mercury__psqueue__MaxKeyB_14;
        }
      }
    else
      {
        MR_Word mercury__psqueue__LTree_16;

        {
          mercury__psqueue__LTree_16 = mercury__psqueue__balance_5_f_0(mercury__psqueue__TypeInfo_for_P_17, mercury__psqueue__TypeInfo_for_K_18, mercury__psqueue__PrioA_7, mercury__psqueue__KeyA_8, mercury__psqueue__LTreeA_9, mercury__psqueue__MaxKeyA_10, mercury__psqueue__LTreeB_13);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          *mercury__psqueue__CombinedWinner_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = mercury__psqueue__PrioB_11;
          MR_hl_field(MR_mktag(0), base, 1) = mercury__psqueue__KeyB_12;
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__psqueue__LTree_16));
          MR_hl_field(MR_mktag(0), base, 3) = mercury__psqueue__MaxKeyB_14;
        }
      }
  }
}

MR_Word MR_CALL 
mercury__psqueue__get_tournament_view_1_f_0(
  MR_Word mercury__psqueue__TypeInfo_for_P_23,
  MR_Word mercury__psqueue__TypeInfo_for_K_24,
  MR_Word mercury__psqueue__Winner_3)
{
  {
    MR_bool mercury__psqueue__succeeded;
    MR_Word mercury__psqueue__TournamentView_4;
    MR_Box mercury__psqueue__WinnerPrio_5 = (MR_hl_field(MR_mktag(0), mercury__psqueue__Winner_3, (MR_Integer) 0));
    MR_Box mercury__psqueue__WinnerKey_6 = (MR_hl_field(MR_mktag(0), mercury__psqueue__Winner_3, (MR_Integer) 1));
    MR_Word mercury__psqueue__LTree_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__psqueue__Winner_3, (MR_Integer) 2)));
    MR_Box mercury__psqueue__MaxKey_8 = (MR_hl_field(MR_mktag(0), mercury__psqueue__Winner_3, (MR_Integer) 3));

    if ((mercury__psqueue__LTree_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        mercury__psqueue__TournamentView_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), mercury__psqueue__TournamentView_4, 0) = mercury__psqueue__WinnerPrio_5;
        MR_hl_field(MR_mktag(0), mercury__psqueue__TournamentView_4, 1) = mercury__psqueue__WinnerKey_6;
      }
    else
      {
        MR_Box mercury__psqueue__LoserPrio_10 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_7, (MR_Integer) 1));
        MR_Box mercury__psqueue__LoserKey_11 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_7, (MR_Integer) 2));
        MR_Word mercury__psqueue__SubLTreeL_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_7, (MR_Integer) 3)));
        MR_Box mercury__psqueue__SplitKey_13 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_7, (MR_Integer) 4));
        MR_Word mercury__psqueue__SubLTreeR_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_7, (MR_Integer) 5)));
        MR_Word mercury__psqueue__WinnerA_15;
        MR_Word mercury__psqueue__WinnerB_16;
        MR_Integer mercury__psqueue__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_7, (MR_Integer) 0)));
        MR_Word mercury__psqueue__CMP_27;

        {
          mercury__builtin__compare_3_p_0(mercury__psqueue__TypeInfo_for_K_24, &mercury__psqueue__CMP_27, mercury__psqueue__LoserKey_11, mercury__psqueue__SplitKey_13);
        }
        switch (mercury__psqueue__CMP_27) {
          default:
            mercury__psqueue__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 1:
            mercury__psqueue__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 0:
            mercury__psqueue__succeeded = MR_TRUE;
            break;
        }
        if (mercury__psqueue__succeeded)
          {
            {
              mercury__psqueue__WinnerA_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_15, 0) = mercury__psqueue__LoserPrio_10;
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_15, 1) = mercury__psqueue__LoserKey_11;
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_15, 2) = ((MR_Box) (mercury__psqueue__SubLTreeL_12));
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_15, 3) = mercury__psqueue__SplitKey_13;
            }
            {
              mercury__psqueue__WinnerB_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_16, 0) = mercury__psqueue__WinnerPrio_5;
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_16, 1) = mercury__psqueue__WinnerKey_6;
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_16, 2) = ((MR_Box) (mercury__psqueue__SubLTreeR_14));
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_16, 3) = mercury__psqueue__MaxKey_8;
            }
          }
        else
          {
            {
              mercury__psqueue__WinnerA_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_15, 0) = mercury__psqueue__WinnerPrio_5;
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_15, 1) = mercury__psqueue__WinnerKey_6;
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_15, 2) = ((MR_Box) (mercury__psqueue__SubLTreeL_12));
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerA_15, 3) = mercury__psqueue__SplitKey_13;
            }
            {
              mercury__psqueue__WinnerB_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_16, 0) = mercury__psqueue__LoserPrio_10;
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_16, 1) = mercury__psqueue__LoserKey_11;
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_16, 2) = ((MR_Box) (mercury__psqueue__SubLTreeR_14));
              MR_hl_field(MR_mktag(0), mercury__psqueue__WinnerB_16, 3) = mercury__psqueue__MaxKey_8;
            }
          }
        {
          mercury__psqueue__TournamentView_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__psqueue__TournamentView_4, 0) = ((MR_Box) (mercury__psqueue__WinnerA_15));
          MR_hl_field(MR_mktag(1), mercury__psqueue__TournamentView_4, 1) = ((MR_Box) (mercury__psqueue__WinnerB_16));
        }
      }
    return mercury__psqueue__TournamentView_4;
  }
}

MR_String MR_CALL 
mercury__psqueue__verify_and_dump_psqueue_1_f_0(
  MR_Word mercury__psqueue__TypeInfo_for_P_8,
  MR_Word mercury__psqueue__TypeInfo_for_K_9,
  MR_Word mercury__psqueue__PSQ_3)
{
  {
    MR_bool mercury__psqueue__succeeded;
    MR_String mercury__psqueue__Str_4;

    if ((mercury__psqueue__PSQ_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__psqueue__succeeded = MR_TRUE;
    else
      {
        MR_Box mercury__psqueue__WinnerPrio_11;
        MR_Word mercury__psqueue__LTree_13;
        MR_Word mercury__psqueue__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_3, (MR_Integer) 0)));
        MR_Box mercury__psqueue__V_12_12;
        MR_Box mercury__psqueue__V_14_14;

        mercury__psqueue__WinnerPrio_11 = (MR_hl_field(MR_mktag(0), mercury__psqueue__V_15_15, (MR_Integer) 0));
        mercury__psqueue__V_12_12 = (MR_hl_field(MR_mktag(0), mercury__psqueue__V_15_15, (MR_Integer) 1));
        mercury__psqueue__LTree_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__psqueue__V_15_15, (MR_Integer) 2)));
        mercury__psqueue__V_14_14 = (MR_hl_field(MR_mktag(0), mercury__psqueue__V_15_15, (MR_Integer) 3));
        {
          mercury__psqueue__succeeded = mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_112_114_105_111_115_95_105_110_95_108_111_115_101_114_95_116_114_101_101_95_97_116_95_111_114_95_97_98_111_118_101_95_112_114_105_111_95_95_91_50_93_95_48_2_p_0(mercury__psqueue__TypeInfo_for_P_8, mercury__psqueue__WinnerPrio_11, mercury__psqueue__LTree_13);
        }
        if (mercury__psqueue__succeeded)
          {
            mercury__psqueue__succeeded = mercury__psqueue__all_nodes_obey_semi_heap_1_p_0(mercury__psqueue__TypeInfo_for_P_8, mercury__psqueue__TypeInfo_for_K_9, mercury__psqueue__LTree_13);
          }
      }
    if (mercury__psqueue__succeeded)
      {
        if ((mercury__psqueue__PSQ_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          mercury__psqueue__succeeded = MR_TRUE;
        else
          {
            MR_Word mercury__psqueue__LTree_19;
            MR_Word mercury__psqueue__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_3, (MR_Integer) 0)));
            MR_Box mercury__psqueue__V_17_17 = (MR_hl_field(MR_mktag(0), mercury__psqueue__V_21_21, (MR_Integer) 0));
            MR_Box mercury__psqueue__V_18_18 = (MR_hl_field(MR_mktag(0), mercury__psqueue__V_21_21, (MR_Integer) 1));
            MR_Box mercury__psqueue__V_20_20;

            mercury__psqueue__LTree_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__psqueue__V_21_21, (MR_Integer) 2)));
            mercury__psqueue__V_20_20 = (MR_hl_field(MR_mktag(0), mercury__psqueue__V_21_21, (MR_Integer) 3));
            {
              mercury__psqueue__succeeded = mercury__psqueue__loser_tree_has_search_property_1_p_0(mercury__psqueue__TypeInfo_for_P_8, mercury__psqueue__TypeInfo_for_K_9, mercury__psqueue__LTree_19);
            }
          }
        if (mercury__psqueue__succeeded)
          {
            {
              mercury__psqueue__succeeded = mercury__psqueue__has_key_condition_1_p_0(mercury__psqueue__TypeInfo_for_P_8, mercury__psqueue__TypeInfo_for_K_9, mercury__psqueue__PSQ_3);
            }
            if (mercury__psqueue__succeeded)
              {
                mercury__psqueue__succeeded = mercury__psqueue__is_finite_map_1_p_0(mercury__psqueue__TypeInfo_for_P_8, mercury__psqueue__TypeInfo_for_K_9, mercury__psqueue__PSQ_3);
              }
          }
      }
    if (mercury__psqueue__succeeded)
      {
        {
          mercury__psqueue__Str_4 = mercury__psqueue__dump_psqueue_2_f_0(mercury__psqueue__TypeInfo_for_P_8, mercury__psqueue__TypeInfo_for_K_9, (MR_Integer) 0, mercury__psqueue__PSQ_3);
        }
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "psqueue", (MR_String) "function \140psqueue.verify_and_dump_psqueue\'/1", (MR_String) "verification failed");
        }
      }
    return mercury__psqueue__Str_4;
  }
}

MR_String MR_CALL 
mercury__psqueue__dump_psqueue_1_f_0(
  MR_Word mercury__psqueue__TypeInfo_for_P_5,
  MR_Word mercury__psqueue__TypeInfo_for_K_6,
  MR_Word mercury__psqueue__PSQ_3)
{
  {
    MR_bool mercury__psqueue__succeeded;
    MR_String mercury__psqueue__HeadVar__2_2;

    {
      mercury__psqueue__HeadVar__2_2 = mercury__psqueue__dump_psqueue_2_f_0(mercury__psqueue__TypeInfo_for_P_5, mercury__psqueue__TypeInfo_for_K_6, (MR_Integer) 0, mercury__psqueue__PSQ_3);
    }
    return mercury__psqueue__HeadVar__2_2;
  }
}

MR_bool MR_CALL 
mercury__psqueue__is_finite_map_1_p_0(
  MR_Word mercury__psqueue__TypeInfo_for_P_12,
  MR_Word mercury__psqueue__TypeInfo_for_K_13,
  MR_Word mercury__psqueue__PSQ_2)
{
  {
    MR_bool mercury__psqueue__succeeded;

    if ((mercury__psqueue__PSQ_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__psqueue__succeeded = MR_TRUE;
    else
      {
        MR_Word mercury__psqueue__Winner_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_2, (MR_Integer) 0)));
        MR_Word mercury__psqueue__LTree_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__psqueue__Winner_3, (MR_Integer) 2)));
        MR_Word mercury__psqueue__Keys_8;
        MR_Word mercury__psqueue__UniqKeys_9;
        MR_Integer mercury__psqueue__NumKeys_10;
        MR_Integer mercury__psqueue__NumUniqKeys_11;
        MR_Integer mercury__psqueue__V_5_16;
        MR_Box mercury__psqueue__V_4_4 = (MR_hl_field(MR_mktag(0), mercury__psqueue__Winner_3, (MR_Integer) 0));
        MR_Box mercury__psqueue__V_5_5 = (MR_hl_field(MR_mktag(0), mercury__psqueue__Winner_3, (MR_Integer) 1));
        MR_Box mercury__psqueue__V_7_7 = (MR_hl_field(MR_mktag(0), mercury__psqueue__Winner_3, (MR_Integer) 3));

        {
          mercury__psqueue__Keys_8 = mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_107_101_121_115_95_95_91_49_93_95_48_1_f_0(mercury__psqueue__TypeInfo_for_K_13, mercury__psqueue__LTree_6);
        }
        {
          mercury__list__length_acc_3_p_0(mercury__psqueue__TypeInfo_for_K_13, mercury__psqueue__Keys_8, (MR_Integer) 0, &mercury__psqueue__V_5_16);
        }
        {
          mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__psqueue__TypeInfo_for_K_13, mercury__psqueue__V_5_16, mercury__psqueue__Keys_8, &mercury__psqueue__UniqKeys_9);
        }
        {
          mercury__list__length_acc_3_p_0(mercury__psqueue__TypeInfo_for_K_13, mercury__psqueue__Keys_8, (MR_Integer) 0, &mercury__psqueue__NumKeys_10);
        }
        {
          mercury__list__length_acc_3_p_0(mercury__psqueue__TypeInfo_for_K_13, mercury__psqueue__UniqKeys_9, (MR_Integer) 0, &mercury__psqueue__NumUniqKeys_11);
        }
        mercury__psqueue__succeeded = (mercury__psqueue__NumKeys_10 == mercury__psqueue__NumUniqKeys_11);
      }
    return mercury__psqueue__succeeded;
  }
}

MR_bool MR_CALL 
mercury__psqueue__has_key_condition_1_p_0(
  MR_Word mercury__psqueue__TypeInfo_for_P_9,
  MR_Word mercury__psqueue__TypeInfo_for_K_10,
  MR_Word mercury__psqueue__PSQ_2)
{
  {
    MR_bool mercury__psqueue__succeeded;

    if ((mercury__psqueue__PSQ_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__psqueue__succeeded = MR_TRUE;
    else
      {
        MR_Word mercury__psqueue__LTree_5;
        MR_Box mercury__psqueue__MaxKey_6;
        MR_Word mercury__psqueue__Winner_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_2, (MR_Integer) 0)));
        MR_Word mercury__psqueue__V_15_15;
        MR_Box mercury__psqueue__V_3_3 = (MR_hl_field(MR_mktag(0), mercury__psqueue__Winner_14, (MR_Integer) 0));
        MR_Box mercury__psqueue__V_4_4 = (MR_hl_field(MR_mktag(0), mercury__psqueue__Winner_14, (MR_Integer) 1));
        MR_Box mercury__psqueue__V_7_7;

        mercury__psqueue__LTree_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__psqueue__Winner_14, (MR_Integer) 2)));
        mercury__psqueue__MaxKey_6 = (MR_hl_field(MR_mktag(0), mercury__psqueue__Winner_14, (MR_Integer) 3));
        {
          mercury__psqueue__V_15_15 = mercury__psqueue__get_tournament_view_1_f_0(mercury__psqueue__TypeInfo_for_P_9, mercury__psqueue__TypeInfo_for_K_10, mercury__psqueue__Winner_14);
        }
        {
          mercury__psqueue__succeeded = mercury__psqueue__search_tv_3_p_0(mercury__psqueue__TypeInfo_for_P_9, mercury__psqueue__TypeInfo_for_K_10, mercury__psqueue__V_15_15, mercury__psqueue__MaxKey_6, &mercury__psqueue__V_7_7);
        }
        if (mercury__psqueue__succeeded)
          {
            mercury__psqueue__succeeded = mercury__psqueue__loser_split_keys_are_present_2_p_0(mercury__psqueue__TypeInfo_for_P_9, mercury__psqueue__TypeInfo_for_K_10, mercury__psqueue__PSQ_2, mercury__psqueue__LTree_5);
          }
      }
    return mercury__psqueue__succeeded;
  }
}

MR_bool MR_CALL 
mercury__psqueue__is_search_tree_1_p_0(
  MR_Word mercury__psqueue__TypeInfo_for_P_8,
  MR_Word mercury__psqueue__TypeInfo_for_K_9,
  MR_Word mercury__psqueue__PSQ_2)
{
  {
    MR_bool mercury__psqueue__succeeded;

    if ((mercury__psqueue__PSQ_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__psqueue__succeeded = MR_TRUE;
    else
      {
        MR_Word mercury__psqueue__LTree_5;
        MR_Word mercury__psqueue__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_2, (MR_Integer) 0)));
        MR_Box mercury__psqueue__V_3_3 = (MR_hl_field(MR_mktag(0), mercury__psqueue__V_7_7, (MR_Integer) 0));
        MR_Box mercury__psqueue__V_4_4 = (MR_hl_field(MR_mktag(0), mercury__psqueue__V_7_7, (MR_Integer) 1));
        MR_Box mercury__psqueue__V_6_6;

        mercury__psqueue__LTree_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__psqueue__V_7_7, (MR_Integer) 2)));
        mercury__psqueue__V_6_6 = (MR_hl_field(MR_mktag(0), mercury__psqueue__V_7_7, (MR_Integer) 3));
        {
          mercury__psqueue__succeeded = mercury__psqueue__loser_tree_has_search_property_1_p_0(mercury__psqueue__TypeInfo_for_P_8, mercury__psqueue__TypeInfo_for_K_9, mercury__psqueue__LTree_5);
        }
      }
    return mercury__psqueue__succeeded;
  }
}

MR_bool MR_CALL 
mercury__psqueue__is_semi_heap_1_p_0(
  MR_Word mercury__psqueue__TypeInfo_for_P_8,
  MR_Word mercury__psqueue__TypeInfo_for_K_9,
  MR_Word mercury__psqueue__PSQ_2)
{
  {
    MR_bool mercury__psqueue__succeeded;

    if ((mercury__psqueue__PSQ_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__psqueue__succeeded = MR_TRUE;
    else
      {
        MR_Box mercury__psqueue__WinnerPrio_3;
        MR_Word mercury__psqueue__LTree_5;
        MR_Word mercury__psqueue__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_2, (MR_Integer) 0)));
        MR_Box mercury__psqueue__V_4_4;
        MR_Box mercury__psqueue__V_6_6;

        mercury__psqueue__WinnerPrio_3 = (MR_hl_field(MR_mktag(0), mercury__psqueue__V_7_7, (MR_Integer) 0));
        mercury__psqueue__V_4_4 = (MR_hl_field(MR_mktag(0), mercury__psqueue__V_7_7, (MR_Integer) 1));
        mercury__psqueue__LTree_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__psqueue__V_7_7, (MR_Integer) 2)));
        mercury__psqueue__V_6_6 = (MR_hl_field(MR_mktag(0), mercury__psqueue__V_7_7, (MR_Integer) 3));
        {
          mercury__psqueue__succeeded = mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_112_114_105_111_115_95_105_110_95_108_111_115_101_114_95_116_114_101_101_95_97_116_95_111_114_95_97_98_111_118_101_95_112_114_105_111_95_95_91_50_93_95_48_2_p_0(mercury__psqueue__TypeInfo_for_P_8, mercury__psqueue__WinnerPrio_3, mercury__psqueue__LTree_5);
        }
        if (mercury__psqueue__succeeded)
          {
            mercury__psqueue__succeeded = mercury__psqueue__all_nodes_obey_semi_heap_1_p_0(mercury__psqueue__TypeInfo_for_P_8, mercury__psqueue__TypeInfo_for_K_9, mercury__psqueue__LTree_5);
          }
      }
    return mercury__psqueue__succeeded;
  }
}

void MR_CALL 
mercury__psqueue__size_2_p_0(
  MR_Word mercury__psqueue__TypeInfo_for_P_12,
  MR_Word mercury__psqueue__TypeInfo_for_K_13,
  MR_Word mercury__psqueue__PSQ_3,
  MR_Integer * mercury__psqueue__Size_4)
{
  {
    MR_bool mercury__psqueue__succeeded;

    if ((mercury__psqueue__PSQ_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__psqueue__Size_4 = (MR_Integer) 0;
    else
      {
        MR_Word mercury__psqueue__LTree_7;
        MR_Word mercury__psqueue__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_3, (MR_Integer) 0)));
        MR_Integer mercury__psqueue__V_11_11;
        MR_Box mercury__psqueue__V_5_5 = (MR_hl_field(MR_mktag(0), mercury__psqueue__V_9_9, (MR_Integer) 0));
        MR_Box mercury__psqueue__V_6_6 = (MR_hl_field(MR_mktag(0), mercury__psqueue__V_9_9, (MR_Integer) 1));
        MR_Box mercury__psqueue__V_8_8;

        mercury__psqueue__LTree_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__psqueue__V_9_9, (MR_Integer) 2)));
        mercury__psqueue__V_8_8 = (MR_hl_field(MR_mktag(0), mercury__psqueue__V_9_9, (MR_Integer) 3));
        if ((mercury__psqueue__LTree_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          mercury__psqueue__V_11_11 = (MR_Integer) 0;
        else
          {
            MR_Box mercury__psqueue__V_16_16;
            MR_Box mercury__psqueue__V_17_17;
            MR_Word mercury__psqueue__V_18_18;
            MR_Box mercury__psqueue__V_19_19;
            MR_Word mercury__psqueue__V_20_20;

            mercury__psqueue__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_7, (MR_Integer) 0)));
            mercury__psqueue__V_16_16 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_7, (MR_Integer) 1));
            mercury__psqueue__V_17_17 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_7, (MR_Integer) 2));
            mercury__psqueue__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_7, (MR_Integer) 3)));
            mercury__psqueue__V_19_19 = (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_7, (MR_Integer) 4));
            mercury__psqueue__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__LTree_7, (MR_Integer) 5)));
          }
        *mercury__psqueue__Size_4 = ((MR_Integer) 1 + mercury__psqueue__V_11_11);
      }
  }
}

MR_Integer MR_CALL 
mercury__psqueue__size_1_f_0(
  MR_Word mercury__psqueue__TypeInfo_for_P_5,
  MR_Word mercury__psqueue__TypeInfo_for_K_6,
  MR_Word mercury__psqueue__PSQ_3)
{
  {
    MR_bool mercury__psqueue__succeeded;
    MR_Integer mercury__psqueue__Size_4;

    {
      mercury__psqueue__size_2_p_0(mercury__psqueue__TypeInfo_for_P_5, mercury__psqueue__TypeInfo_for_K_6, mercury__psqueue__PSQ_3, &mercury__psqueue__Size_4);
    }
    return mercury__psqueue__Size_4;
  }
}

void MR_CALL 
mercury__psqueue__at_most_3_p_0(
  MR_Word mercury__psqueue__TypeInfo_for_P_9,
  MR_Word mercury__psqueue__TypeInfo_for_K_10,
  MR_Word mercury__psqueue__PSQ_4,
  MR_Box mercury__psqueue__MaxPrio_5,
  MR_Word * mercury__psqueue__AssocList_6)
{
  {
    MR_bool mercury__psqueue__succeeded;

    if ((mercury__psqueue__PSQ_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__psqueue__AssocList_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word mercury__psqueue__TypeCtorInfo_11_11;
        MR_Word mercury__psqueue__TypeInfo_12_12;
        MR_Word mercury__psqueue__Winner_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_4, (MR_Integer) 0)));
        MR_Word mercury__psqueue__Cord_8;
        MR_Word mercury__psqueue__conv0_AssocList_6;

        {
          mercury__psqueue__at_most_in_winner_3_p_0(mercury__psqueue__TypeInfo_for_P_9, mercury__psqueue__TypeInfo_for_K_10, mercury__psqueue__Winner_7, mercury__psqueue__MaxPrio_5, &mercury__psqueue__Cord_8);
        }
        mercury__psqueue__TypeCtorInfo_11_11 = (MR_Word) &mercury__pair__pair__type_ctor_info_pair_2;
        {
          mercury__psqueue__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__psqueue__TypeInfo_12_12, 0) = ((MR_Box) (mercury__psqueue__TypeCtorInfo_11_11));
          MR_hl_field(MR_mktag(0), mercury__psqueue__TypeInfo_12_12, 1) = ((MR_Box) (mercury__psqueue__TypeInfo_for_P_9));
          MR_hl_field(MR_mktag(0), mercury__psqueue__TypeInfo_12_12, 2) = ((MR_Box) (mercury__psqueue__TypeInfo_for_K_10));
        }
        {
          mercury__psqueue__conv0_AssocList_6 = mercury__cord__list_1_f_0(mercury__psqueue__TypeInfo_12_12, (MR_Word) mercury__psqueue__Cord_8);
        }
        *mercury__psqueue__AssocList_6 = (MR_Word) mercury__psqueue__conv0_AssocList_6;
      }
  }
}

MR_Word MR_CALL 
mercury__psqueue__at_most_2_f_0(
  MR_Word mercury__psqueue__TypeInfo_for_P_7,
  MR_Word mercury__psqueue__TypeInfo_for_K_8,
  MR_Word mercury__psqueue__PSQ_4,
  MR_Box mercury__psqueue__MaxPrio_5)
{
  {
    MR_bool mercury__psqueue__succeeded;
    MR_Word mercury__psqueue__AssocList_6;

    if ((mercury__psqueue__PSQ_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__psqueue__AssocList_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word mercury__psqueue__TypeCtorInfo_11_14;
        MR_Word mercury__psqueue__TypeInfo_12_15;
        MR_Word mercury__psqueue__Winner_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_4, (MR_Integer) 0)));
        MR_Word mercury__psqueue__Cord_13;
        MR_Word mercury__psqueue__conv0_AssocList_6;

        {
          mercury__psqueue__at_most_in_winner_3_p_0(mercury__psqueue__TypeInfo_for_P_7, mercury__psqueue__TypeInfo_for_K_8, mercury__psqueue__Winner_12, mercury__psqueue__MaxPrio_5, &mercury__psqueue__Cord_13);
        }
        mercury__psqueue__TypeCtorInfo_11_14 = (MR_Word) &mercury__pair__pair__type_ctor_info_pair_2;
        {
          mercury__psqueue__TypeInfo_12_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__psqueue__TypeInfo_12_15, 0) = ((MR_Box) (mercury__psqueue__TypeCtorInfo_11_14));
          MR_hl_field(MR_mktag(0), mercury__psqueue__TypeInfo_12_15, 1) = ((MR_Box) (mercury__psqueue__TypeInfo_for_P_7));
          MR_hl_field(MR_mktag(0), mercury__psqueue__TypeInfo_12_15, 2) = ((MR_Box) (mercury__psqueue__TypeInfo_for_K_8));
        }
        {
          mercury__psqueue__conv0_AssocList_6 = mercury__cord__list_1_f_0(mercury__psqueue__TypeInfo_12_15, (MR_Word) mercury__psqueue__Cord_13);
        }
        mercury__psqueue__AssocList_6 = (MR_Word) mercury__psqueue__conv0_AssocList_6;
      }
    return mercury__psqueue__AssocList_6;
  }
}

void MR_CALL 
mercury__psqueue__lookup_3_p_0(
  MR_Word mercury__psqueue__TypeInfo_for_P_11,
  MR_Word mercury__psqueue__TypeInfo_for_K_12,
  MR_Word mercury__psqueue__PSQ_4,
  MR_Box mercury__psqueue__SearchKey_5,
  MR_Box * mercury__psqueue__MatchingPrio_6)
{
  {
    MR_bool mercury__psqueue__succeeded = ((MR_tag((MR_Word) mercury__psqueue__PSQ_4)) == (MR_mktag((MR_Integer) 1)));
    MR_Box mercury__psqueue__MatchingPrioPrime_7;
    MR_Word mercury__psqueue__Winner_16;
    MR_Word mercury__psqueue__V_17_17;

    if (mercury__psqueue__succeeded)
      {
        mercury__psqueue__Winner_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_4, (MR_Integer) 0)));
        {
          mercury__psqueue__V_17_17 = mercury__psqueue__get_tournament_view_1_f_0(mercury__psqueue__TypeInfo_for_P_11, mercury__psqueue__TypeInfo_for_K_12, mercury__psqueue__Winner_16);
        }
        {
          mercury__psqueue__succeeded = mercury__psqueue__search_tv_3_p_0(mercury__psqueue__TypeInfo_for_P_11, mercury__psqueue__TypeInfo_for_K_12, mercury__psqueue__V_17_17, mercury__psqueue__SearchKey_5, &mercury__psqueue__MatchingPrioPrime_7);
        }
      }
    if (mercury__psqueue__succeeded)
      *mercury__psqueue__MatchingPrio_6 = mercury__psqueue__MatchingPrioPrime_7;
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "psqueue.m", (MR_String) "predicate \140psqueue.lookup\'/3", (MR_String) "key not found");
          return;
        }
      }
  }
}

MR_Box MR_CALL 
mercury__psqueue__lookup_2_f_0(
  MR_Word mercury__psqueue__TypeInfo_for_P_7,
  MR_Word mercury__psqueue__TypeInfo_for_K_8,
  MR_Word mercury__psqueue__PSQ_4,
  MR_Box mercury__psqueue__SearchKey_5)
{
  {
    MR_bool mercury__psqueue__succeeded;
    MR_Box mercury__psqueue__MatchingPrio_6;

    {
      mercury__psqueue__lookup_3_p_0(mercury__psqueue__TypeInfo_for_P_7, mercury__psqueue__TypeInfo_for_K_8, mercury__psqueue__PSQ_4, mercury__psqueue__SearchKey_5, &mercury__psqueue__MatchingPrio_6);
    }
    return mercury__psqueue__MatchingPrio_6;
  }
}

MR_bool MR_CALL 
mercury__psqueue__search_3_p_0(
  MR_Word mercury__psqueue__TypeInfo_for_P_9,
  MR_Word mercury__psqueue__TypeInfo_for_K_10,
  MR_Word mercury__psqueue__PSQ_4,
  MR_Box mercury__psqueue__SearchKey_5,
  MR_Box * mercury__psqueue__MatchingPrio_6)
{
  {
    MR_bool mercury__psqueue__succeeded = ((MR_tag((MR_Word) mercury__psqueue__PSQ_4)) == (MR_mktag((MR_Integer) 1)));
    MR_Word mercury__psqueue__Winner_7;
    MR_Word mercury__psqueue__V_8_8;

    if (mercury__psqueue__succeeded)
      {
        mercury__psqueue__Winner_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_4, (MR_Integer) 0)));
        {
          mercury__psqueue__V_8_8 = mercury__psqueue__get_tournament_view_1_f_0(mercury__psqueue__TypeInfo_for_P_9, mercury__psqueue__TypeInfo_for_K_10, mercury__psqueue__Winner_7);
        }
        {
          mercury__psqueue__succeeded = mercury__psqueue__search_tv_3_p_0(mercury__psqueue__TypeInfo_for_P_9, mercury__psqueue__TypeInfo_for_K_10, mercury__psqueue__V_8_8, mercury__psqueue__SearchKey_5, mercury__psqueue__MatchingPrio_6);
        }
      }
    return mercury__psqueue__succeeded;
  }
}

MR_bool MR_CALL 
mercury__psqueue__adjust_4_p_0(
  MR_Word mercury__psqueue__TypeInfo_for_P_14,
  MR_Word mercury__psqueue__TypeInfo_for_K_15,
  MR_Word mercury__psqueue__AdjustFunc_5,
  MR_Box mercury__psqueue__SearchKey_6,
  MR_Word mercury__psqueue__STATE_VARIABLE_PSQ_0_10,
  MR_Word * mercury__psqueue__STATE_VARIABLE_PSQ_11)
{
  {
    MR_bool mercury__psqueue__succeeded = ((MR_tag((MR_Word) mercury__psqueue__STATE_VARIABLE_PSQ_0_10)) == (MR_mktag((MR_Integer) 1)));
    MR_Word mercury__psqueue__Winner0_8;
    MR_Word mercury__psqueue__Winner_9;
    MR_Word mercury__psqueue__V_12_12;

    if (mercury__psqueue__succeeded)
      {
        mercury__psqueue__Winner0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__STATE_VARIABLE_PSQ_0_10, (MR_Integer) 0)));
        {
          mercury__psqueue__V_12_12 = mercury__psqueue__get_tournament_view_1_f_0(mercury__psqueue__TypeInfo_for_P_14, mercury__psqueue__TypeInfo_for_K_15, mercury__psqueue__Winner0_8);
        }
        {
          mercury__psqueue__succeeded = mercury__psqueue__adjust_tv_4_p_0(mercury__psqueue__TypeInfo_for_P_14, mercury__psqueue__TypeInfo_for_K_15, mercury__psqueue__AdjustFunc_5, mercury__psqueue__SearchKey_6, mercury__psqueue__V_12_12, &mercury__psqueue__Winner_9);
        }
        if (mercury__psqueue__succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *mercury__psqueue__STATE_VARIABLE_PSQ_11 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__psqueue__Winner_9));
            }
            mercury__psqueue__succeeded = MR_TRUE;
          }
      }
    return mercury__psqueue__succeeded;
  }
}

void MR_CALL 
mercury__psqueue__det_remove_4_p_0(
  MR_Word mercury__psqueue__TypeInfo_for_P_16,
  MR_Word mercury__psqueue__TypeInfo_for_K_17,
  MR_Box * mercury__psqueue__MatchingPrio_5,
  MR_Box mercury__psqueue__SearchKey_6,
  MR_Word mercury__psqueue__STATE_VARIABLE_PSQ_0_9,
  MR_Word * mercury__psqueue__STATE_VARIABLE_PSQ_10)
{
  {
    MR_bool mercury__psqueue__succeeded = ((MR_tag((MR_Word) mercury__psqueue__STATE_VARIABLE_PSQ_0_9)) == (MR_mktag((MR_Integer) 1)));
    MR_Box mercury__psqueue__MatchingPrioPrime_8;
    MR_Word mercury__psqueue__STATE_VARIABLE_PSQ_11_11;
    MR_Word mercury__psqueue__Winner0_23;
    MR_Word mercury__psqueue__V_24_24;

    if (mercury__psqueue__succeeded)
      {
        mercury__psqueue__Winner0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__STATE_VARIABLE_PSQ_0_9, (MR_Integer) 0)));
        {
          mercury__psqueue__V_24_24 = mercury__psqueue__get_tournament_view_1_f_0(mercury__psqueue__TypeInfo_for_P_16, mercury__psqueue__TypeInfo_for_K_17, mercury__psqueue__Winner0_23);
        }
        {
          mercury__psqueue__succeeded = mercury__psqueue__remove_tv_4_p_0(mercury__psqueue__TypeInfo_for_P_16, mercury__psqueue__TypeInfo_for_K_17, &mercury__psqueue__MatchingPrioPrime_8, mercury__psqueue__SearchKey_6, mercury__psqueue__V_24_24, &mercury__psqueue__STATE_VARIABLE_PSQ_11_11);
        }
      }
    if (mercury__psqueue__succeeded)
      {
        *mercury__psqueue__STATE_VARIABLE_PSQ_10 = mercury__psqueue__STATE_VARIABLE_PSQ_11_11;
        *mercury__psqueue__MatchingPrio_5 = mercury__psqueue__MatchingPrioPrime_8;
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "psqueue.m", (MR_String) "predicate \140psqueue.det_remove\'/4", (MR_String) "element not found");
          return;
        }
      }
  }
}

MR_bool MR_CALL 
mercury__psqueue__remove_4_p_0(
  MR_Word mercury__psqueue__TypeInfo_for_P_13,
  MR_Word mercury__psqueue__TypeInfo_for_K_14,
  MR_Box * mercury__psqueue__MatchingPrio_5,
  MR_Box mercury__psqueue__SearchKey_6,
  MR_Word mercury__psqueue__STATE_VARIABLE_PSQ_0_9,
  MR_Word * mercury__psqueue__STATE_VARIABLE_PSQ_10)
{
  {
    MR_bool mercury__psqueue__succeeded = ((MR_tag((MR_Word) mercury__psqueue__STATE_VARIABLE_PSQ_0_9)) == (MR_mktag((MR_Integer) 1)));
    MR_Word mercury__psqueue__Winner0_8;
    MR_Word mercury__psqueue__V_11_11;

    if (mercury__psqueue__succeeded)
      {
        mercury__psqueue__Winner0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__STATE_VARIABLE_PSQ_0_9, (MR_Integer) 0)));
        {
          mercury__psqueue__V_11_11 = mercury__psqueue__get_tournament_view_1_f_0(mercury__psqueue__TypeInfo_for_P_13, mercury__psqueue__TypeInfo_for_K_14, mercury__psqueue__Winner0_8);
        }
        {
          mercury__psqueue__succeeded = mercury__psqueue__remove_tv_4_p_0(mercury__psqueue__TypeInfo_for_P_13, mercury__psqueue__TypeInfo_for_K_14, mercury__psqueue__MatchingPrio_5, mercury__psqueue__SearchKey_6, mercury__psqueue__V_11_11, mercury__psqueue__STATE_VARIABLE_PSQ_10);
        }
      }
    return mercury__psqueue__succeeded;
  }
}

void MR_CALL 
mercury__psqueue__from_assoc_list_2_p_0(
  MR_Word mercury__psqueue__TypeInfo_for_P_6,
  MR_Word mercury__psqueue__TypeInfo_for_K_7,
  MR_Word mercury__psqueue__AssocList_3,
  MR_Word * mercury__psqueue__PSQ_4)
{
  {
    MR_bool mercury__psqueue__succeeded;
    MR_Word mercury__psqueue__V_5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__psqueue__from_assoc_list_loop_3_p_0(mercury__psqueue__TypeInfo_for_P_6, mercury__psqueue__TypeInfo_for_K_7, mercury__psqueue__AssocList_3, mercury__psqueue__V_5_5, mercury__psqueue__PSQ_4);
    }
  }
}

MR_Word MR_CALL 
mercury__psqueue__from_assoc_list_1_f_0(
  MR_Word mercury__psqueue__TypeInfo_for_P_5,
  MR_Word mercury__psqueue__TypeInfo_for_K_6,
  MR_Word mercury__psqueue__AssocList_3)
{
  {
    MR_bool mercury__psqueue__succeeded;
    MR_Word mercury__psqueue__PSQ_4;
    MR_Word mercury__psqueue__V_9_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__psqueue__from_assoc_list_loop_3_p_0(mercury__psqueue__TypeInfo_for_P_5, mercury__psqueue__TypeInfo_for_K_6, mercury__psqueue__AssocList_3, mercury__psqueue__V_9_9, &mercury__psqueue__PSQ_4);
    }
    return mercury__psqueue__PSQ_4;
  }
}

void MR_CALL 
mercury__psqueue__to_assoc_list_2_p_0(
  MR_Word mercury__psqueue__TypeInfo_for_P_10,
  MR_Word mercury__psqueue__TypeInfo_for_K_11,
  MR_Word mercury__psqueue__PSQ0_3,
  MR_Word * mercury__psqueue__AssocList_4)
{
  {
    MR_bool mercury__psqueue__succeeded = ((MR_tag((MR_Word) mercury__psqueue__PSQ0_3)) == (MR_mktag((MR_Integer) 1)));
    MR_Box mercury__psqueue__K_5;
    MR_Box mercury__psqueue__P_6;
    MR_Word mercury__psqueue__PSQ1_7;
    MR_Word mercury__psqueue__LTree_17;
    MR_Box mercury__psqueue__MaxKey_18;
    MR_Word mercury__psqueue__V_19_19;

    if (mercury__psqueue__succeeded)
      {
        mercury__psqueue__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ0_3, (MR_Integer) 0)));
        mercury__psqueue__K_5 = (MR_hl_field(MR_mktag(0), mercury__psqueue__V_19_19, (MR_Integer) 0));
        mercury__psqueue__P_6 = (MR_hl_field(MR_mktag(0), mercury__psqueue__V_19_19, (MR_Integer) 1));
        mercury__psqueue__LTree_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__psqueue__V_19_19, (MR_Integer) 2)));
        mercury__psqueue__MaxKey_18 = (MR_hl_field(MR_mktag(0), mercury__psqueue__V_19_19, (MR_Integer) 3));
        {
          mercury__psqueue__PSQ1_7 = mercury__psqueue__convert_loser_tree_to_psqueue_2_f_0(mercury__psqueue__TypeInfo_for_P_10, mercury__psqueue__TypeInfo_for_K_11, mercury__psqueue__LTree_17, mercury__psqueue__MaxKey_18);
        }
        mercury__psqueue__succeeded = MR_TRUE;
      }
    if (mercury__psqueue__succeeded)
      {
        MR_Word mercury__psqueue__AssocListTail_8;
        MR_Word mercury__psqueue__V_9_9;

        {
          mercury__psqueue__to_assoc_list_2_p_0(mercury__psqueue__TypeInfo_for_P_10, mercury__psqueue__TypeInfo_for_K_11, mercury__psqueue__PSQ1_7, &mercury__psqueue__AssocListTail_8);
        }
        {
          mercury__psqueue__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__psqueue__V_9_9, 0) = mercury__psqueue__K_5;
          MR_hl_field(MR_mktag(0), mercury__psqueue__V_9_9, 1) = mercury__psqueue__P_6;
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *mercury__psqueue__AssocList_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__psqueue__V_9_9));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__psqueue__AssocListTail_8));
        }
      }
    else
      *mercury__psqueue__AssocList_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
}

MR_Word MR_CALL 
mercury__psqueue__to_assoc_list_1_f_0(
  MR_Word mercury__psqueue__TypeInfo_for_P_5,
  MR_Word mercury__psqueue__TypeInfo_for_K_6,
  MR_Word mercury__psqueue__PSQ_3)
{
  {
    MR_bool mercury__psqueue__succeeded;
    MR_Word mercury__psqueue__AssocList_4;

    {
      mercury__psqueue__to_assoc_list_2_p_0(mercury__psqueue__TypeInfo_for_P_5, mercury__psqueue__TypeInfo_for_K_6, mercury__psqueue__PSQ_3, &mercury__psqueue__AssocList_4);
    }
    return mercury__psqueue__AssocList_4;
  }
}

void MR_CALL 
mercury__psqueue__det_remove_least_4_p_0(
  MR_Word mercury__psqueue__TypeInfo_for_P_17,
  MR_Word mercury__psqueue__TypeInfo_for_K_18,
  MR_Box * mercury__psqueue__MinPrio_5,
  MR_Box * mercury__psqueue__MinKey_6,
  MR_Word mercury__psqueue__STATE_VARIABLE_PSQ_0_10,
  MR_Word * mercury__psqueue__STATE_VARIABLE_PSQ_11)
{
  {
    MR_bool mercury__psqueue__succeeded = ((MR_tag((MR_Word) mercury__psqueue__STATE_VARIABLE_PSQ_0_10)) == (MR_mktag((MR_Integer) 1)));
    MR_Box mercury__psqueue__MinPrioPrime_8;
    MR_Box mercury__psqueue__MinKeyPrime_9;
    MR_Word mercury__psqueue__STATE_VARIABLE_PSQ_12_12;
    MR_Word mercury__psqueue__LTree_24;
    MR_Box mercury__psqueue__MaxKey_25;
    MR_Word mercury__psqueue__V_26_26;

    if (mercury__psqueue__succeeded)
      {
        mercury__psqueue__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__STATE_VARIABLE_PSQ_0_10, (MR_Integer) 0)));
        mercury__psqueue__MinPrioPrime_8 = (MR_hl_field(MR_mktag(0), mercury__psqueue__V_26_26, (MR_Integer) 0));
        mercury__psqueue__MinKeyPrime_9 = (MR_hl_field(MR_mktag(0), mercury__psqueue__V_26_26, (MR_Integer) 1));
        mercury__psqueue__LTree_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__psqueue__V_26_26, (MR_Integer) 2)));
        mercury__psqueue__MaxKey_25 = (MR_hl_field(MR_mktag(0), mercury__psqueue__V_26_26, (MR_Integer) 3));
        {
          mercury__psqueue__STATE_VARIABLE_PSQ_12_12 = mercury__psqueue__convert_loser_tree_to_psqueue_2_f_0(mercury__psqueue__TypeInfo_for_P_17, mercury__psqueue__TypeInfo_for_K_18, mercury__psqueue__LTree_24, mercury__psqueue__MaxKey_25);
        }
        mercury__psqueue__succeeded = MR_TRUE;
      }
    if (mercury__psqueue__succeeded)
      {
        *mercury__psqueue__STATE_VARIABLE_PSQ_11 = mercury__psqueue__STATE_VARIABLE_PSQ_12_12;
        *mercury__psqueue__MinKey_6 = mercury__psqueue__MinKeyPrime_9;
        *mercury__psqueue__MinPrio_5 = mercury__psqueue__MinPrioPrime_8;
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "psqueue.m", (MR_String) "predicate \140psqueue.det_remove_least\'/4", (MR_String) "priority search queue is empty");
          return;
        }
      }
  }
}

MR_bool MR_CALL 
mercury__psqueue__remove_least_4_p_0(
  MR_Word mercury__psqueue__TypeInfo_for_P_14,
  MR_Word mercury__psqueue__TypeInfo_for_K_15,
  MR_Box * mercury__psqueue__MinPrio_5,
  MR_Box * mercury__psqueue__MinKey_6,
  MR_Word mercury__psqueue__STATE_VARIABLE_PSQ_0_10,
  MR_Word * mercury__psqueue__STATE_VARIABLE_PSQ_11)
{
  {
    MR_bool mercury__psqueue__succeeded = ((MR_tag((MR_Word) mercury__psqueue__STATE_VARIABLE_PSQ_0_10)) == (MR_mktag((MR_Integer) 1)));
    MR_Word mercury__psqueue__LTree_8;
    MR_Box mercury__psqueue__MaxKey_9;
    MR_Word mercury__psqueue__V_12_12;

    if (mercury__psqueue__succeeded)
      {
        mercury__psqueue__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__STATE_VARIABLE_PSQ_0_10, (MR_Integer) 0)));
        *mercury__psqueue__MinPrio_5 = (MR_hl_field(MR_mktag(0), mercury__psqueue__V_12_12, (MR_Integer) 0));
        *mercury__psqueue__MinKey_6 = (MR_hl_field(MR_mktag(0), mercury__psqueue__V_12_12, (MR_Integer) 1));
        mercury__psqueue__LTree_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__psqueue__V_12_12, (MR_Integer) 2)));
        mercury__psqueue__MaxKey_9 = (MR_hl_field(MR_mktag(0), mercury__psqueue__V_12_12, (MR_Integer) 3));
        {
          *mercury__psqueue__STATE_VARIABLE_PSQ_11 = mercury__psqueue__convert_loser_tree_to_psqueue_2_f_0(mercury__psqueue__TypeInfo_for_P_14, mercury__psqueue__TypeInfo_for_K_15, mercury__psqueue__LTree_8, mercury__psqueue__MaxKey_9);
        }
        mercury__psqueue__succeeded = MR_TRUE;
      }
    return mercury__psqueue__succeeded;
  }
}

void MR_CALL 
mercury__psqueue__det_peek_3_p_0(
  MR_Word mercury__psqueue__TypeInfo_for_P_12,
  MR_Word mercury__psqueue__TypeInfo_for_K_13,
  MR_Word mercury__psqueue__PSQ_4,
  MR_Box * mercury__psqueue__MinPrio_5,
  MR_Box * mercury__psqueue__MinKey_6)
{
  {
    MR_bool mercury__psqueue__succeeded = ((MR_tag((MR_Word) mercury__psqueue__PSQ_4)) == (MR_mktag((MR_Integer) 1)));
    MR_Box mercury__psqueue__MinPrioPrime_7;
    MR_Box mercury__psqueue__MinKeyPrime_8;
    MR_Word mercury__psqueue__V_19_19;
    MR_Word mercury__psqueue__V_17_17;
    MR_Box mercury__psqueue__V_18_18;

    if (mercury__psqueue__succeeded)
      {
        mercury__psqueue__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_4, (MR_Integer) 0)));
        mercury__psqueue__MinPrioPrime_7 = (MR_hl_field(MR_mktag(0), mercury__psqueue__V_19_19, (MR_Integer) 0));
        mercury__psqueue__MinKeyPrime_8 = (MR_hl_field(MR_mktag(0), mercury__psqueue__V_19_19, (MR_Integer) 1));
        mercury__psqueue__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__psqueue__V_19_19, (MR_Integer) 2)));
        mercury__psqueue__V_18_18 = (MR_hl_field(MR_mktag(0), mercury__psqueue__V_19_19, (MR_Integer) 3));
        mercury__psqueue__succeeded = MR_TRUE;
      }
    if (mercury__psqueue__succeeded)
      {
        *mercury__psqueue__MinKey_6 = mercury__psqueue__MinKeyPrime_8;
        *mercury__psqueue__MinPrio_5 = mercury__psqueue__MinPrioPrime_7;
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "psqueue.m", (MR_String) "predicate \140psqueue.det_peek\'/3", (MR_String) "priority search queue is empty");
          return;
        }
      }
  }
}

MR_bool MR_CALL 
mercury__psqueue__peek_3_p_0(
  MR_Word mercury__psqueue__TypeInfo_for_P_10,
  MR_Word mercury__psqueue__TypeInfo_for_K_11,
  MR_Word mercury__psqueue__PSQ_4,
  MR_Box * mercury__psqueue__MinPrio_5,
  MR_Box * mercury__psqueue__MinKey_6)
{
  {
    MR_bool mercury__psqueue__succeeded = ((MR_tag((MR_Word) mercury__psqueue__PSQ_4)) == (MR_mktag((MR_Integer) 1)));
    MR_Word mercury__psqueue__V_9_9;
    MR_Word mercury__psqueue__V_7_7;
    MR_Box mercury__psqueue__V_8_8;

    if (mercury__psqueue__succeeded)
      {
        mercury__psqueue__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_4, (MR_Integer) 0)));
        *mercury__psqueue__MinPrio_5 = (MR_hl_field(MR_mktag(0), mercury__psqueue__V_9_9, (MR_Integer) 0));
        *mercury__psqueue__MinKey_6 = (MR_hl_field(MR_mktag(0), mercury__psqueue__V_9_9, (MR_Integer) 1));
        mercury__psqueue__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__psqueue__V_9_9, (MR_Integer) 2)));
        mercury__psqueue__V_8_8 = (MR_hl_field(MR_mktag(0), mercury__psqueue__V_9_9, (MR_Integer) 3));
        mercury__psqueue__succeeded = MR_TRUE;
      }
    return mercury__psqueue__succeeded;
  }
}

void MR_CALL 
mercury__psqueue__det_insert_4_p_0(
  MR_Word mercury__psqueue__TypeInfo_for_P_15,
  MR_Word mercury__psqueue__TypeInfo_for_K_16,
  MR_Box mercury__psqueue__InsertPrio_5,
  MR_Box mercury__psqueue__InsertKey_6,
  MR_Word mercury__psqueue__STATE_VARIABLE_PSQ_0_8,
  MR_Word * mercury__psqueue__STATE_VARIABLE_PSQ_9)
{
  {
    MR_bool mercury__psqueue__succeeded;
    MR_Word mercury__psqueue__STATE_VARIABLE_PSQ_10_10;

    {
      mercury__psqueue__succeeded = mercury__psqueue__insert_4_p_0(mercury__psqueue__TypeInfo_for_P_15, mercury__psqueue__TypeInfo_for_K_16, mercury__psqueue__InsertPrio_5, mercury__psqueue__InsertKey_6, mercury__psqueue__STATE_VARIABLE_PSQ_0_8, &mercury__psqueue__STATE_VARIABLE_PSQ_10_10);
    }
    if (mercury__psqueue__succeeded)
      *mercury__psqueue__STATE_VARIABLE_PSQ_9 = mercury__psqueue__STATE_VARIABLE_PSQ_10_10;
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "psqueue.m", (MR_String) "predicate \140psqueue.det_insert\'/4", (MR_String) "key being inserted is already present");
          return;
        }
      }
  }
}

MR_Word MR_CALL 
mercury__psqueue__det_insert_3_f_0(
  MR_Word mercury__psqueue__TypeInfo_for_P_9,
  MR_Word mercury__psqueue__TypeInfo_for_K_10,
  MR_Word mercury__psqueue__PSQ0_5,
  MR_Box mercury__psqueue__InsertPrio_6,
  MR_Box mercury__psqueue__InsertKey_7)
{
  {
    MR_bool mercury__psqueue__succeeded;
    MR_Word mercury__psqueue__PSQ_8;
    MR_Word mercury__psqueue__STATE_VARIABLE_PSQ_10_16;

    {
      mercury__psqueue__succeeded = mercury__psqueue__insert_4_p_0(mercury__psqueue__TypeInfo_for_P_9, mercury__psqueue__TypeInfo_for_K_10, mercury__psqueue__InsertPrio_6, mercury__psqueue__InsertKey_7, mercury__psqueue__PSQ0_5, &mercury__psqueue__STATE_VARIABLE_PSQ_10_16);
    }
    if (mercury__psqueue__succeeded)
      mercury__psqueue__PSQ_8 = mercury__psqueue__STATE_VARIABLE_PSQ_10_16;
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "psqueue.m", (MR_String) "predicate \140psqueue.det_insert\'/4", (MR_String) "key being inserted is already present");
        }
      }
    return mercury__psqueue__PSQ_8;
  }
}

MR_bool MR_CALL 
mercury__psqueue__insert_4_p_0(
  MR_Word mercury__psqueue__TypeInfo_for_P_15,
  MR_Word mercury__psqueue__TypeInfo_for_K_16,
  MR_Box mercury__psqueue__InsertPrio_5,
  MR_Box mercury__psqueue__InsertKey_6,
  MR_Word mercury__psqueue__STATE_VARIABLE_PSQ_0_10,
  MR_Word * mercury__psqueue__STATE_VARIABLE_PSQ_11)
{
  {
    MR_bool mercury__psqueue__succeeded;

    if ((mercury__psqueue__STATE_VARIABLE_PSQ_0_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word mercury__psqueue__V_23_23;
        MR_Word mercury__psqueue__V_26_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

        {
          mercury__psqueue__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__psqueue__V_23_23, 0) = mercury__psqueue__InsertPrio_5;
          MR_hl_field(MR_mktag(0), mercury__psqueue__V_23_23, 1) = mercury__psqueue__InsertKey_6;
          MR_hl_field(MR_mktag(0), mercury__psqueue__V_23_23, 2) = ((MR_Box) (mercury__psqueue__V_26_26));
          MR_hl_field(MR_mktag(0), mercury__psqueue__V_23_23, 3) = mercury__psqueue__InsertKey_6;
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *mercury__psqueue__STATE_VARIABLE_PSQ_11 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__psqueue__V_23_23));
        }
        mercury__psqueue__succeeded = MR_TRUE;
      }
    else
      {
        MR_Word mercury__psqueue__Winner0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__psqueue__STATE_VARIABLE_PSQ_0_10, (MR_Integer) 0)));
        MR_Word mercury__psqueue__Winner_9;
        MR_Word mercury__psqueue__V_12_12;

        {
          mercury__psqueue__V_12_12 = mercury__psqueue__get_tournament_view_1_f_0(mercury__psqueue__TypeInfo_for_P_15, mercury__psqueue__TypeInfo_for_K_16, mercury__psqueue__Winner0_8);
        }
        {
          mercury__psqueue__succeeded = mercury__psqueue__insert_tv_4_p_0(mercury__psqueue__TypeInfo_for_P_15, mercury__psqueue__TypeInfo_for_K_16, mercury__psqueue__InsertPrio_5, mercury__psqueue__InsertKey_6, mercury__psqueue__V_12_12, &mercury__psqueue__Winner_9);
        }
        if (mercury__psqueue__succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *mercury__psqueue__STATE_VARIABLE_PSQ_11 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__psqueue__Winner_9));
            }
            mercury__psqueue__succeeded = MR_TRUE;
          }
      }
    return mercury__psqueue__succeeded;
  }
}

void MR_CALL 
mercury__psqueue__singleton_3_p_0(
  MR_Word mercury__psqueue__TypeInfo_for_P_8,
  MR_Word mercury__psqueue__TypeInfo_for_K_9,
  MR_Box mercury__psqueue__Prio_4,
  MR_Box mercury__psqueue__Key_5,
  MR_Word * mercury__psqueue__PSQ_6)
{
  {
    MR_bool mercury__psqueue__succeeded;
    MR_Word mercury__psqueue__V_7_7;
    MR_Word mercury__psqueue__V_12_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__psqueue__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__psqueue__V_7_7, 0) = mercury__psqueue__Prio_4;
      MR_hl_field(MR_mktag(0), mercury__psqueue__V_7_7, 1) = mercury__psqueue__Key_5;
      MR_hl_field(MR_mktag(0), mercury__psqueue__V_7_7, 2) = ((MR_Box) (mercury__psqueue__V_12_12));
      MR_hl_field(MR_mktag(0), mercury__psqueue__V_7_7, 3) = mercury__psqueue__Key_5;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      *mercury__psqueue__PSQ_6 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__psqueue__V_7_7));
    }
  }
}

MR_Word MR_CALL 
mercury__psqueue__singleton_2_f_0(
  MR_Word mercury__psqueue__TypeInfo_for_P_7,
  MR_Word mercury__psqueue__TypeInfo_for_K_8,
  MR_Box mercury__psqueue__Prio_4,
  MR_Box mercury__psqueue__Key_5)
{
  {
    MR_bool mercury__psqueue__succeeded;
    MR_Word mercury__psqueue__PSQ_6;
    MR_Word mercury__psqueue__V_12_12;
    MR_Word mercury__psqueue__V_15_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__psqueue__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__psqueue__V_12_12, 0) = mercury__psqueue__Prio_4;
      MR_hl_field(MR_mktag(0), mercury__psqueue__V_12_12, 1) = mercury__psqueue__Key_5;
      MR_hl_field(MR_mktag(0), mercury__psqueue__V_12_12, 2) = ((MR_Box) (mercury__psqueue__V_15_15));
      MR_hl_field(MR_mktag(0), mercury__psqueue__V_12_12, 3) = mercury__psqueue__Key_5;
    }
    {
      mercury__psqueue__PSQ_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__psqueue__PSQ_6, 0) = ((MR_Box) (mercury__psqueue__V_12_12));
    }
    return mercury__psqueue__PSQ_6;
  }
}

MR_bool MR_CALL 
mercury__psqueue__is_empty_1_p_0(
  MR_Word mercury__psqueue__TypeInfo_for_P_2,
  MR_Word mercury__psqueue__TypeInfo_for_K_3,
  MR_Word mercury__psqueue__HeadVar__1_1)
{
  {
    MR_bool mercury__psqueue__succeeded = (mercury__psqueue__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

    return mercury__psqueue__succeeded;
  }
}

void MR_CALL 
mercury__psqueue__init_1_p_0(
  MR_Word mercury__psqueue__TypeInfo_for_P_2,
  MR_Word mercury__psqueue__TypeInfo_for_K_3,
  MR_Word * mercury__psqueue__HeadVar__1_1)
{
  {
    MR_bool mercury__psqueue__succeeded;

    *mercury__psqueue__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
}

MR_Word MR_CALL 
mercury__psqueue__init_0_f_0(
  MR_Word mercury__psqueue__TypeInfo_for_P_3,
  MR_Word mercury__psqueue__TypeInfo_for_K_4)
{
  {
    MR_bool mercury__psqueue__succeeded;
    MR_Word mercury__psqueue__PSQ_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    return mercury__psqueue__PSQ_2;
  }
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
