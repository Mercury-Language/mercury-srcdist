/*
** Automatically generated from `psqueue.m'
** by the Mercury compiler,
** version 22.01-beta-2022-03-20
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


// :- module psqueue.
// :- implementation.

/*
INIT mercury__psqueue__init
ENDINIT
*/

#include "psqueue.mih"


#include "array.mih"
#include "assoc_list.mih"
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
#include "math.mih"
#include "maybe.mih"
#include "mercury_term_lexer.mih"
#include "mercury_term_parser.mih"
#include "mutvar.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "prolog.mih"
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

static MR_Word MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_98_97_108_97_110_99_101_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_5_f_0(
  MR_Word TypeInfo_for_K_24,
  MR_Integer Prio_7,
  MR_Box Key_8,
  MR_Word LTreeL_9,
  MR_Box SplitKey_10,
  MR_Word LTreeR_11);

static MR_Word MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_98_97_108_97_110_99_101_95_108_101_102_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_5_f_0(
  MR_Word TypeInfo_for_K_26,
  MR_Integer Prio_7,
  MR_Box Key_8,
  MR_Word LTreeL_9,
  MR_Box SplitKey_10,
  MR_Word LTreeR_11);

static MR_Word MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_98_97_108_97_110_99_101_95_114_105_103_104_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_5_f_0(
  MR_Word TypeInfo_for_K_26,
  MR_Integer Prio_7,
  MR_Box Key_8,
  MR_Word LTreeL_9,
  MR_Box SplitKey_10,
  MR_Word LTreeR_11);

static MR_Word MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_115_105_110_103_108_101_95_108_101_102_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_5_f_0(
  MR_Word TypeInfo_for_K_25,
  MR_Integer InsertPrio_7,
  MR_Box InsertKey_8,
  MR_Word LTreeA_9,
  MR_Box SplitKeyAB_10,
  MR_Word LTreeBC_11);

static MR_Word MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_115_105_110_103_108_101_95_114_105_103_104_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_5_f_0(
  MR_Word TypeInfo_for_K_26,
  MR_Integer InsertPrio_7,
  MR_Box InsertKey_8,
  MR_Word LTreeAB_9,
  MR_Box SplitKeyBC_10,
  MR_Word LTreeC_11);

static MR_String MR_CALL 
mercury__psqueue__dump_loser_tree_2_f_0(
  MR_Word TypeInfo_for_P_46,
  MR_Word TypeInfo_for_K_47,
  MR_Integer Indent_4,
  MR_Word LTree_5);

static MR_Word MR_CALL 
mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_107_101_121_115_95_95_91_49_93_95_48_1_f_0(
  MR_Word TypeInfo_for_K_15,
  MR_Word LTree_3);

static MR_bool MR_CALL 
mercury__psqueue__loser_split_keys_are_present_2_p_0(
  MR_Word TypeInfo_for_P_12,
  MR_Word TypeInfo_for_K_13,
  MR_Word PSQ_3,
  MR_Word LTree_4);

static void MR_CALL 
mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_120_95_107_101_121_95_105_110_95_108_111_115_101_114_95_116_114_101_101_95_97_99_99_95_95_91_49_93_95_48_3_p_0(
  MR_Word TypeInfo_for_K_20,
  MR_Word LTree_4,
  MR_Box STATE_VARIABLE_CurMax_0_17,
  MR_Word * MaybeMaxKey_6);

static void MR_CALL 
mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_105_110_95_107_101_121_95_105_110_95_108_111_115_101_114_95_116_114_101_101_95_95_91_49_93_95_48_2_p_0(
  MR_Word TypeInfo_for_K_16,
  MR_Word LTree_3,
  MR_Word * MaybeMinKey_4);

static void MR_CALL 
mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_105_110_95_107_101_121_95_105_110_95_108_111_115_101_114_95_116_114_101_101_95_97_99_99_95_95_91_49_93_95_48_3_p_0(
  MR_Word TypeInfo_for_K_20,
  MR_Word LTree_4,
  MR_Box STATE_VARIABLE_CurMin_0_17,
  MR_Word * MaybeMinKey_6);

static MR_bool MR_CALL 
mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_112_114_105_111_115_95_105_110_95_108_111_115_101_114_95_116_114_101_101_95_97_116_95_111_114_95_97_98_111_118_101_95_112_114_105_111_95_95_91_50_93_95_48_2_p_0(
  MR_Word TypeInfo_for_P_11,
  MR_Box WinnerPrio_3,
  MR_Word LTree_4);

static MR_bool MR_CALL 
mercury__psqueue__all_nodes_obey_semi_heap_1_p_0(
  MR_Word TypeInfo_for_P_12,
  MR_Word TypeInfo_for_K_13,
  MR_Word LTree_2);

static void MR_CALL 
mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_105_110_95_112_114_105_111_95_105_110_95_108_111_115_101_114_95_116_114_101_101_95_97_99_99_95_95_91_50_93_95_48_3_p_0(
  MR_Word TypeInfo_for_P_19,
  MR_Word LTree_4,
  MR_Box STATE_VARIABLE_CurMinPrio_0_17,
  MR_Word * MaybeMinPrio_6);

static MR_Word MR_CALL 
mercury__psqueue__balance_5_f_0(
  MR_Word TypeInfo_for_P_23,
  MR_Word TypeInfo_for_K_24,
  MR_Box Prio_7,
  MR_Box Key_8,
  MR_Word LTreeL_9,
  MR_Box SplitKey_10,
  MR_Word LTreeR_11);

static MR_Word MR_CALL 
mercury__psqueue__balance_right_5_f_0(
  MR_Word TypeInfo_for_P_25,
  MR_Word TypeInfo_for_K_26,
  MR_Box Prio_7,
  MR_Box Key_8,
  MR_Word LTreeL_9,
  MR_Box SplitKey_10,
  MR_Word LTreeR_11);

static MR_Word MR_CALL 
mercury__psqueue__balance_left_5_f_0(
  MR_Word TypeInfo_for_P_25,
  MR_Word TypeInfo_for_K_26,
  MR_Box Prio_7,
  MR_Box Key_8,
  MR_Word LTreeL_9,
  MR_Box SplitKey_10,
  MR_Word LTreeR_11);

static MR_Word MR_CALL 
mercury__psqueue__single_right_5_f_0(
  MR_Word TypeInfo_for_P_25,
  MR_Word TypeInfo_for_K_26,
  MR_Box InsertPrio_7,
  MR_Box InsertKey_8,
  MR_Word LTreeAB_9,
  MR_Box SplitKeyBC_10,
  MR_Word LTreeC_11);

static MR_Word MR_CALL 
mercury__psqueue__single_left_5_f_0(
  MR_Word TypeInfo_for_P_24,
  MR_Word TypeInfo_for_K_25,
  MR_Box InsertPrio_7,
  MR_Box InsertKey_8,
  MR_Word LTreeA_9,
  MR_Box SplitKeyAB_10,
  MR_Word LTreeBC_11);

static MR_bool MR_CALL 
mercury__psqueue____Unify____loser_tree_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static void MR_CALL 
mercury__psqueue____Compare____loser_tree_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5);

static MR_bool MR_CALL 
mercury__psqueue____Unify____loser_tree_size_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__psqueue____Compare____loser_tree_size_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__psqueue____Unify____psqueue_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static void MR_CALL 
mercury__psqueue____Compare____psqueue_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5);

static MR_bool MR_CALL 
mercury__psqueue____Unify____tournament_view_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static void MR_CALL 
mercury__psqueue____Compare____tournament_view_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5);

static MR_bool MR_CALL 
mercury__psqueue____Unify____winner_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static void MR_CALL 
mercury__psqueue____Compare____winner_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5);


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



static const MR_DuFunctorDesc mercury__psqueue__psqueue__du_functor_desc_loser_tree_2_0 = {
  (MR_String) "loser_leaf",
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

static const MR_FA_PseudoTypeInfo_Struct2 mercury__psqueue__psqueue__pti_loser_tree_2__pseudo_1__pseudo_2 = {
  &mercury__psqueue__psqueue__type_ctor_info_loser_tree_2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 2)
  }
};

static const MR_PseudoTypeInfo mercury__psqueue__psqueue__field_types_loser_tree_2_1[6] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) ((MR_Integer) 2),
  (MR_PseudoTypeInfo) (&mercury__psqueue__psqueue__pti_loser_tree_2__pseudo_1__pseudo_2),
  (MR_PseudoTypeInfo) ((MR_Integer) 2),
  (MR_PseudoTypeInfo) (&mercury__psqueue__psqueue__pti_loser_tree_2__pseudo_1__pseudo_2)
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
  INT16_C(6),
  UINT16_C(62),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__psqueue__psqueue__field_types_loser_tree_2_1,
  mercury__psqueue__psqueue__field_names_loser_tree_2_1,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__psqueue__psqueue__du_stag_ordered_loser_tree_2_0[1] = {
  &mercury__psqueue__psqueue__du_functor_desc_loser_tree_2_0
};

static const MR_DuFunctorDescPtr mercury__psqueue__psqueue__du_stag_ordered_loser_tree_2_1[1] = {
  &mercury__psqueue__psqueue__du_functor_desc_loser_tree_2_1
};

static const MR_DuPtagLayout mercury__psqueue__psqueue__du_ptag_ordered_loser_tree_2[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mercury__psqueue__psqueue__du_stag_ordered_loser_tree_2_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__psqueue__psqueue__du_stag_ordered_loser_tree_2_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__psqueue____Unify____loser_tree_2_0_10001)),
  ((MR_Box) (mercury__psqueue____Compare____loser_tree_2_0_10001)),
  (MR_String) "psqueue",
  (MR_String) "loser_tree",
  {     mercury__psqueue__psqueue__du_name_ordered_loser_tree_2 },
  {     mercury__psqueue__psqueue__du_ptag_ordered_loser_tree_2 },
  (MR_Integer) 2,
  UINT16_C(12),
  mercury__psqueue__psqueue__functor_number_map_loser_tree_2,

};

const MR_TypeCtorInfo_Struct mercury__psqueue__psqueue__type_ctor_info_loser_tree_size_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__psqueue____Unify____loser_tree_size_0_0_10001)),
  ((MR_Box) (mercury__psqueue____Compare____loser_tree_size_0_0_10001)),
  (MR_String) "psqueue",
  (MR_String) "loser_tree_size",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_DuFunctorDesc mercury__psqueue__psqueue__du_functor_desc_psqueue_2_0 = {
  (MR_String) "empty_psqueue",
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

static const MR_FA_PseudoTypeInfo_Struct2 mercury__psqueue__psqueue__pti_winner_2__pseudo_1__pseudo_2 = {
  &mercury__psqueue__psqueue__type_ctor_info_winner_2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 2)
  }
};

static const MR_PseudoTypeInfo mercury__psqueue__psqueue__field_types_psqueue_2_1[1] = {
  (MR_PseudoTypeInfo) (&mercury__psqueue__psqueue__pti_winner_2__pseudo_1__pseudo_2)
};

static const MR_DuFunctorDesc mercury__psqueue__psqueue__du_functor_desc_psqueue_2_1 = {
  (MR_String) "nonempty_psqueue",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__psqueue__psqueue__field_types_psqueue_2_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__psqueue__psqueue__du_stag_ordered_psqueue_2_0[1] = {
  &mercury__psqueue__psqueue__du_functor_desc_psqueue_2_0
};

static const MR_DuFunctorDescPtr mercury__psqueue__psqueue__du_stag_ordered_psqueue_2_1[1] = {
  &mercury__psqueue__psqueue__du_functor_desc_psqueue_2_1
};

static const MR_DuPtagLayout mercury__psqueue__psqueue__du_ptag_ordered_psqueue_2[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mercury__psqueue__psqueue__du_stag_ordered_psqueue_2_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__psqueue__psqueue__du_stag_ordered_psqueue_2_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__psqueue____Unify____psqueue_2_0_10001)),
  ((MR_Box) (mercury__psqueue____Compare____psqueue_2_0_10001)),
  (MR_String) "psqueue",
  (MR_String) "psqueue",
  {     mercury__psqueue__psqueue__du_name_ordered_psqueue_2 },
  {     mercury__psqueue__psqueue__du_ptag_ordered_psqueue_2 },
  (MR_Integer) 2,
  UINT16_C(12),
  mercury__psqueue__psqueue__functor_number_map_psqueue_2,

};

static const MR_PseudoTypeInfo mercury__psqueue__psqueue__field_types_tournament_view_2_0[2] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) ((MR_Integer) 2)
};

static const MR_DuFunctorDesc mercury__psqueue__psqueue__du_functor_desc_tournament_view_2_0 = {
  (MR_String) "singleton_tournament",
  INT16_C(2),
  UINT16_C(3),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__psqueue__psqueue__field_types_tournament_view_2_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__psqueue__psqueue__field_types_tournament_view_2_1[2] = {
  (MR_PseudoTypeInfo) (&mercury__psqueue__psqueue__pti_winner_2__pseudo_1__pseudo_2),
  (MR_PseudoTypeInfo) (&mercury__psqueue__psqueue__pti_winner_2__pseudo_1__pseudo_2)
};

static const MR_DuFunctorDesc mercury__psqueue__psqueue__du_functor_desc_tournament_view_2_1 = {
  (MR_String) "tournament_between",
  INT16_C(2),
  UINT16_C(3),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__psqueue__psqueue__field_types_tournament_view_2_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__psqueue__psqueue__du_stag_ordered_tournament_view_2_0[1] = {
  &mercury__psqueue__psqueue__du_functor_desc_tournament_view_2_0
};

static const MR_DuFunctorDescPtr mercury__psqueue__psqueue__du_stag_ordered_tournament_view_2_1[1] = {
  &mercury__psqueue__psqueue__du_functor_desc_tournament_view_2_1
};

static const MR_DuPtagLayout mercury__psqueue__psqueue__du_ptag_ordered_tournament_view_2[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__psqueue__psqueue__du_stag_ordered_tournament_view_2_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__psqueue__psqueue__du_stag_ordered_tournament_view_2_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__psqueue____Unify____tournament_view_2_0_10001)),
  ((MR_Box) (mercury__psqueue____Compare____tournament_view_2_0_10001)),
  (MR_String) "psqueue",
  (MR_String) "tournament_view",
  {     mercury__psqueue__psqueue__du_name_ordered_tournament_view_2 },
  {     mercury__psqueue__psqueue__du_ptag_ordered_tournament_view_2 },
  (MR_Integer) 2,
  UINT16_C(12),
  mercury__psqueue__psqueue__functor_number_map_tournament_view_2,

};

static const MR_PseudoTypeInfo mercury__psqueue__psqueue__field_types_winner_2_0[4] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) ((MR_Integer) 2),
  (MR_PseudoTypeInfo) (&mercury__psqueue__psqueue__pti_loser_tree_2__pseudo_1__pseudo_2),
  (MR_PseudoTypeInfo) ((MR_Integer) 2)
};

static const MR_ConstString mercury__psqueue__psqueue__field_names_winner_2_0[4] = {
  (MR_String) "w_prio",
  (MR_String) "w_key",
  (MR_String) "w_losers",
  (MR_String) "w_max_key"
};

static const MR_DuFunctorDesc mercury__psqueue__psqueue__du_functor_desc_winner_2_0 = {
  (MR_String) "winner",
  INT16_C(4),
  UINT16_C(15),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__psqueue__psqueue__field_types_winner_2_0,
  mercury__psqueue__psqueue__field_names_winner_2_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__psqueue__psqueue__du_stag_ordered_winner_2_0[1] = {
  &mercury__psqueue__psqueue__du_functor_desc_winner_2_0
};

static const MR_DuPtagLayout mercury__psqueue__psqueue__du_ptag_ordered_winner_2[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__psqueue__psqueue__du_stag_ordered_winner_2_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__psqueue____Unify____winner_2_0_10001)),
  ((MR_Box) (mercury__psqueue____Compare____winner_2_0_10001)),
  (MR_String) "psqueue",
  (MR_String) "winner",
  {     mercury__psqueue__psqueue__du_name_ordered_winner_2 },
  {     mercury__psqueue__psqueue__du_ptag_ordered_winner_2 },
  (MR_Integer) 1,
  UINT16_C(12),
  mercury__psqueue__psqueue__functor_number_map_winner_2,

};

MR_Word MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_3_f_0(
  MR_Word TypeInfo_for_K_10,
  MR_Word PSQ0_5,
  MR_Integer InsertPrio_6,
  MR_Box InsertKey_7)
{
  {
    MR_Word PSQ_8;

    mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_4_p_0(TypeInfo_for_K_10, InsertPrio_6, InsertKey_7, PSQ0_5, &PSQ_8);
    return PSQ_8;
  }
}

MR_bool MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_101_97_115_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_4_p_0(
  MR_Word TypeInfo_for_K_15,
  MR_Integer * MinPrio_5,
  MR_Box * MinKey_6,
  MR_Word STATE_VARIABLE_PSQ_0_10,
  MR_Word * STATE_VARIABLE_PSQ_11)
{
  {
    MR_bool succeeded = (STATE_VARIABLE_PSQ_0_10 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word LTree_8;
    MR_Box MaxKey_9;
    MR_Word Var_12;

    if (succeeded)
    {
      Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PSQ_0_10, (MR_Integer) 0))));
      *MinPrio_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 0))));
      *MinKey_6 = (MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 1));
      LTree_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 2))));
      MaxKey_9 = (MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 3));
      *STATE_VARIABLE_PSQ_11 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_99_111_110_118_101_114_116_95_108_111_115_101_114_95_116_114_101_101_95_116_111_95_112_115_113_117_101_117_101_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_2_f_0(TypeInfo_for_K_15, LTree_8, MaxKey_9);
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_114_101_109_111_118_101_95_108_101_97_115_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_4_p_0(
  MR_Word TypeInfo_for_K_18,
  MR_Integer * MinPrio_5,
  MR_Box * MinKey_6,
  MR_Word STATE_VARIABLE_PSQ_0_10,
  MR_Word * STATE_VARIABLE_PSQ_11)
{
  {
    MR_bool succeeded = (STATE_VARIABLE_PSQ_0_10 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Integer MinPrioPrime_8;
    MR_Box MinKeyPrime_9;
    MR_Word STATE_VARIABLE_PSQ_12_12;
    MR_Word LTree_24;
    MR_Box MaxKey_25;
    MR_Word Var_26;

    if (succeeded)
    {
      Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PSQ_0_10, (MR_Integer) 0))));
      MinPrioPrime_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_26, (MR_Integer) 0))));
      MinKeyPrime_9 = (MR_hl_field(MR_mktag(0), Var_26, (MR_Integer) 1));
      LTree_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_26, (MR_Integer) 2))));
      MaxKey_25 = (MR_hl_field(MR_mktag(0), Var_26, (MR_Integer) 3));
      STATE_VARIABLE_PSQ_12_12 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_99_111_110_118_101_114_116_95_108_111_115_101_114_95_116_114_101_101_95_116_111_95_112_115_113_117_101_117_101_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_2_f_0(TypeInfo_for_K_18, LTree_24, MaxKey_25);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      *STATE_VARIABLE_PSQ_11 = STATE_VARIABLE_PSQ_12_12;
      *MinKey_6 = MinKeyPrime_9;
      *MinPrio_5 = MinPrioPrime_8;
    }
    else
      {
        mercury__require__unexpected_3_p_0((MR_String) "psqueue.m", (MR_String) "predicate \140psqueue.det_remove_least\'/4", (MR_String) "priority search queue is empty");
        return;
      }
  }
}

MR_Word MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_116_111_95_97_115_115_111_99_95_108_105_115_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_1_f_0(
  MR_Word TypeInfo_for_K_6,
  MR_Word PSQ_3)
{
  {
    MR_Word AssocList_4;

    mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_116_111_95_97_115_115_111_99_95_108_105_115_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_2_p_0(TypeInfo_for_K_6, PSQ_3, &AssocList_4);
    return AssocList_4;
  }
}

void MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_116_111_95_97_115_115_111_99_95_108_105_115_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_2_p_0(
  MR_Word TypeInfo_for_K_11,
  MR_Word PSQ0_3,
  MR_Word * AssocList_4)
{
  {
    MR_bool succeeded = (PSQ0_3 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Integer K_5;
    MR_Box P_6;
    MR_Word PSQ1_7;
    MR_Word LTree_17;
    MR_Box MaxKey_18;
    MR_Word Var_19;

    if (succeeded)
    {
      Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PSQ0_3, (MR_Integer) 0))));
      K_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_19, (MR_Integer) 0))));
      P_6 = (MR_hl_field(MR_mktag(0), Var_19, (MR_Integer) 1));
      LTree_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_19, (MR_Integer) 2))));
      MaxKey_18 = (MR_hl_field(MR_mktag(0), Var_19, (MR_Integer) 3));
      PSQ1_7 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_99_111_110_118_101_114_116_95_108_111_115_101_114_95_116_114_101_101_95_116_111_95_112_115_113_117_101_117_101_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_2_f_0(TypeInfo_for_K_11, LTree_17, MaxKey_18);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Var_9;
      MR_Word * AddrAssocListTail_22;

      {
        Var_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_9, 0) = ((MR_Box) (K_5));
        MR_hl_field(MR_mktag(0), Var_9, 1) = P_6;
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *AssocList_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_9));
        MR_hl_field(MR_mktag(1), base, 1) = NULL;
      }
      AddrAssocListTail_22 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *AssocList_4, (MR_Integer) 1)));
      mercury__psqueue__f_76_67_77_67_112_114_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_116_111_95_97_115_115_111_99_95_108_105_115_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_95_49_2_p_0(TypeInfo_for_K_11, PSQ1_7, AddrAssocListTail_22);
    }
    else
      *AssocList_4 = (MR_Word) ((MR_Unsigned) 0U);
  }
}

void MR_CALL 
mercury__psqueue__f_76_67_77_67_112_114_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_116_111_95_97_115_115_111_99_95_108_105_115_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_95_49_2_p_0(
  MR_Word TypeInfo_for_K_11,
  MR_Word PSQ0_3,
  MR_Word * AddrOfAssocList_23)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (PSQ0_3 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Integer K_5;
    MR_Box P_6;
    MR_Word PSQ1_7;
    MR_Word LTree_17;
    MR_Box MaxKey_18;
    MR_Word Var_19;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PSQ0_3, (MR_Integer) 0))));
      K_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_19, (MR_Integer) 0))));
      P_6 = (MR_hl_field(MR_mktag(0), Var_19, (MR_Integer) 1));
      LTree_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_19, (MR_Integer) 2))));
      MaxKey_18 = (MR_hl_field(MR_mktag(0), Var_19, (MR_Integer) 3));
      PSQ1_7 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_99_111_110_118_101_114_116_95_108_111_115_101_114_95_116_114_101_101_95_116_111_95_112_115_113_117_101_117_101_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_2_f_0(TypeInfo_for_K_11, LTree_17, MaxKey_18);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Var_9;
      MR_Word AssocList_4;
      MR_Word * AddrAssocListTail_22;
      MR_Word next_value_of_PSQ0_3;
      MR_Word * next_value_of_AddrOfAssocList_23;

      {
        Var_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_9, 0) = ((MR_Box) (K_5));
        MR_hl_field(MR_mktag(0), Var_9, 1) = P_6;
      }
      {
        AssocList_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), AssocList_4, 0) = ((MR_Box) (Var_9));
        MR_hl_field(MR_mktag(1), AssocList_4, 1) = NULL;
      }
      AddrAssocListTail_22 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), AssocList_4, (MR_Integer) 1)));
      *AddrOfAssocList_23 = AssocList_4;
      // direct tailcall eliminated
      ;
      next_value_of_PSQ0_3 = PSQ1_7;
      next_value_of_AddrOfAssocList_23 = AddrAssocListTail_22;
      PSQ0_3 = next_value_of_PSQ0_3;
      AddrOfAssocList_23 = next_value_of_AddrOfAssocList_23;
      continue;
    }
    else
      *AddrOfAssocList_23 = (MR_Word) ((MR_Unsigned) 0U);
    break;
  }
}

MR_Word MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_102_114_111_109_95_97_115_115_111_99_95_108_105_115_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_1_f_0(
  MR_Word TypeInfo_for_K_6,
  MR_Word AssocList_3)
{
  {
    MR_Word PSQ_4;

    mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_114_111_109_95_97_115_115_111_99_95_108_105_115_116_95_108_111_111_112_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_for_K_6, AssocList_3, (MR_Word) ((MR_Unsigned) 0U), &PSQ_4);
    return PSQ_4;
  }
}

void MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_114_111_109_95_97_115_115_111_99_95_108_105_115_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_2_p_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word AssocList_3,
  MR_Word * PSQ_4)
{
  mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_114_111_109_95_97_115_115_111_99_95_108_105_115_116_95_108_111_111_112_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_for_K_7, AssocList_3, (MR_Word) ((MR_Unsigned) 0U), PSQ_4);
}

MR_bool MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_4_p_0(
  MR_Word TypeInfo_for_K_14,
  MR_Integer * MatchingPrio_5,
  MR_Box SearchKey_6,
  MR_Word STATE_VARIABLE_PSQ_0_9,
  MR_Word * STATE_VARIABLE_PSQ_10)
{
  {
    MR_bool succeeded = (STATE_VARIABLE_PSQ_0_9 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Winner0_8;
    MR_Word Var_11;

    if (succeeded)
    {
      Winner0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PSQ_0_9, (MR_Integer) 0))));
      Var_11 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_103_101_116_95_116_111_117_114_110_97_109_101_110_116_95_118_105_101_119_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_1_f_0(TypeInfo_for_K_14, Winner0_8);
      succeeded = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_116_118_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_4_p_0(TypeInfo_for_K_14, MatchingPrio_5, SearchKey_6, Var_11, STATE_VARIABLE_PSQ_10);
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_114_101_109_111_118_101_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_4_p_0(
  MR_Word TypeInfo_for_K_17,
  MR_Integer * MatchingPrio_5,
  MR_Box SearchKey_6,
  MR_Word STATE_VARIABLE_PSQ_0_9,
  MR_Word * STATE_VARIABLE_PSQ_10)
{
  {
    MR_bool succeeded = (STATE_VARIABLE_PSQ_0_9 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Integer MatchingPrioPrime_8;
    MR_Word STATE_VARIABLE_PSQ_11_11;
    MR_Word Winner0_23;
    MR_Word Var_24;

    if (succeeded)
    {
      Winner0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PSQ_0_9, (MR_Integer) 0))));
      Var_24 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_103_101_116_95_116_111_117_114_110_97_109_101_110_116_95_118_105_101_119_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_1_f_0(TypeInfo_for_K_17, Winner0_23);
      succeeded = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_116_118_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_4_p_0(TypeInfo_for_K_17, &MatchingPrioPrime_8, SearchKey_6, Var_24, &STATE_VARIABLE_PSQ_11_11);
    }
    if (succeeded)
    {
      *STATE_VARIABLE_PSQ_10 = STATE_VARIABLE_PSQ_11_11;
      *MatchingPrio_5 = MatchingPrioPrime_8;
    }
    else
      {
        mercury__require__unexpected_3_p_0((MR_String) "psqueue.m", (MR_String) "predicate \140psqueue.det_remove\'/4", (MR_String) "element not found");
        return;
      }
  }
}

MR_bool MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_97_100_106_117_115_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_4_p_0(
  MR_Word TypeInfo_for_K_15,
  MR_Word AdjustFunc_5,
  MR_Box SearchKey_6,
  MR_Word STATE_VARIABLE_PSQ_0_10,
  MR_Word * STATE_VARIABLE_PSQ_11)
{
  {
    MR_bool succeeded = (STATE_VARIABLE_PSQ_0_10 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Winner0_8;
    MR_Word Winner_9;
    MR_Word Var_12;

    if (succeeded)
    {
      Winner0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PSQ_0_10, (MR_Integer) 0))));
      Var_12 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_103_101_116_95_116_111_117_114_110_97_109_101_110_116_95_118_105_101_119_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_1_f_0(TypeInfo_for_K_15, Winner0_8);
      succeeded = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_97_100_106_117_115_116_95_116_118_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_4_p_0(TypeInfo_for_K_15, AdjustFunc_5, SearchKey_6, Var_12, &Winner_9);
      if (succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_PSQ_11 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Winner_9));
        }
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_3_p_0(
  MR_Word TypeInfo_for_K_10,
  MR_Word PSQ_4,
  MR_Box SearchKey_5,
  MR_Integer * MatchingPrio_6)
{
  {
    MR_bool succeeded = (PSQ_4 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Winner_7;
    MR_Word Var_8;

    if (succeeded)
    {
      Winner_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PSQ_4, (MR_Integer) 0))));
      Var_8 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_103_101_116_95_116_111_117_114_110_97_109_101_110_116_95_118_105_101_119_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_1_f_0(TypeInfo_for_K_10, Winner_7);
      succeeded = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_116_118_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_for_K_10, Var_8, SearchKey_5, MatchingPrio_6);
    }
    return succeeded;
  }
}

MR_Integer MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_2_f_0(
  MR_Word TypeInfo_for_K_8,
  MR_Word PSQ_4,
  MR_Box SearchKey_5)
{
  {
    MR_Integer MatchingPrio_6;

    mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_for_K_8, PSQ_4, SearchKey_5, &MatchingPrio_6);
    return MatchingPrio_6;
  }
}

void MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_3_p_0(
  MR_Word TypeInfo_for_K_12,
  MR_Word PSQ_4,
  MR_Box SearchKey_5,
  MR_Integer * MatchingPrio_6)
{
  {
    MR_bool succeeded = (PSQ_4 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Integer MatchingPrioPrime_7;
    MR_Word Winner_16;
    MR_Word Var_17;

    if (succeeded)
    {
      Winner_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PSQ_4, (MR_Integer) 0))));
      Var_17 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_103_101_116_95_116_111_117_114_110_97_109_101_110_116_95_118_105_101_119_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_1_f_0(TypeInfo_for_K_12, Winner_16);
      succeeded = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_116_118_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_for_K_12, Var_17, SearchKey_5, &MatchingPrioPrime_7);
    }
    if (succeeded)
      *MatchingPrio_6 = MatchingPrioPrime_7;
    else
      {
        mercury__require__unexpected_3_p_0((MR_String) "psqueue.m", (MR_String) "predicate \140psqueue.lookup\'/3", (MR_String) "key not found");
        return;
      }
  }
}

MR_Word MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_97_116_95_109_111_115_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_2_f_0(
  MR_Word TypeInfo_for_K_8,
  MR_Word PSQ_4,
  MR_Integer MaxPrio_5)
{
  {
    MR_Word AssocList_6;

    mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_97_116_95_109_111_115_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_for_K_8, PSQ_4, MaxPrio_5, &AssocList_6);
    return AssocList_6;
  }
}

void MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_97_116_95_109_111_115_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_3_p_0(
  MR_Word TypeInfo_for_K_10,
  MR_Word PSQ_4,
  MR_Integer MaxPrio_5,
  MR_Word * AssocList_6)
{
  if ((PSQ_4 == (MR_Word) ((MR_Unsigned) 0U)))
    *AssocList_6 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word TypeInfo_12_12;
    MR_Word Winner_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PSQ_4, (MR_Integer) 0))));
    MR_Word Cord_8;
    MR_Word conv0_AssocList_6;

    mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_97_116_95_109_111_115_116_95_105_110_95_119_105_110_110_101_114_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_for_K_10, Winner_7, MaxPrio_5, &Cord_8);
    {
      TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_12_12, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
      MR_hl_field(MR_mktag(0), TypeInfo_12_12, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0));
      MR_hl_field(MR_mktag(0), TypeInfo_12_12, 2) = ((MR_Box) (TypeInfo_for_K_10));
    }
    conv0_AssocList_6 = mercury__cord__to_list_1_f_0(TypeInfo_12_12, (MR_Word) (Cord_8));
    *AssocList_6 = (MR_Word) (conv0_AssocList_6);
  }
}

MR_Integer MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_115_105_122_101_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_1_f_0(
  MR_Word TypeInfo_for_K_6,
  MR_Word PSQ_3)
{
  {
    MR_Integer Size_4;

    mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_105_122_101_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_2_p_0(TypeInfo_for_K_6, PSQ_3, &Size_4);
    return Size_4;
  }
}

void MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_105_122_101_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_2_p_0(
  MR_Word TypeInfo_for_K_13,
  MR_Word PSQ_3,
  MR_Integer * Size_4)
{
  if ((PSQ_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *Size_4 = (MR_Integer) 0;
  else
  {
    MR_Word LTree_7;
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PSQ_3, (MR_Integer) 0))));
    MR_Integer Var_11;

    LTree_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 2))));
    if ((LTree_7 == (MR_Word) ((MR_Unsigned) 0U)))
      Var_11 = (MR_Integer) 0;
    else
      Var_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), LTree_7, (MR_Integer) 0))));
    *Size_4 = (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) Var_11);
  }
}

MR_Word MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_99_111_110_118_101_114_116_95_108_111_115_101_114_95_116_114_101_101_95_116_111_95_112_115_113_117_101_117_101_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_2_f_0(
  MR_Word TypeInfo_for_K_18,
  MR_Word LTree_4,
  MR_Box MaxKey_5)
{
  {
    MR_bool succeeded;
    MR_Word PSQ_6;

    if ((LTree_4 == (MR_Word) ((MR_Unsigned) 0U)))
      PSQ_6 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Integer LoserPrio_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), LTree_4, (MR_Integer) 1))));
      MR_Box LoserKey_9 = (MR_hl_field(MR_mktag(1), LTree_4, (MR_Integer) 2));
      MR_Word SubLTreeL_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LTree_4, (MR_Integer) 3))));
      MR_Box SplitKey_11 = (MR_hl_field(MR_mktag(1), LTree_4, (MR_Integer) 4));
      MR_Word SubLTreeR_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LTree_4, (MR_Integer) 5))));
      MR_Word PSQA_14;
      MR_Word PSQB_15;
      MR_Word CMP_21;

      mercury__builtin__compare_3_p_0(TypeInfo_for_K_18, &CMP_21, LoserKey_9, SplitKey_11);
      switch (CMP_21) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 1:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 0:
          succeeded = MR_TRUE;
          break;
      }
      if (succeeded)
      {
        MR_Word WinnerA_13;

        {
          WinnerA_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), WinnerA_13, 0) = ((MR_Box) (LoserPrio_8));
          MR_hl_field(MR_mktag(0), WinnerA_13, 1) = LoserKey_9;
          MR_hl_field(MR_mktag(0), WinnerA_13, 2) = ((MR_Box) (SubLTreeL_10));
          MR_hl_field(MR_mktag(0), WinnerA_13, 3) = SplitKey_11;
        }
        {
          PSQA_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), PSQA_14, 0) = ((MR_Box) (WinnerA_13));
        }
        PSQB_15 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_99_111_110_118_101_114_116_95_108_111_115_101_114_95_116_114_101_101_95_116_111_95_112_115_113_117_101_117_101_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_2_f_0(TypeInfo_for_K_18, SubLTreeR_12, MaxKey_5);
      }
      else
      {
        MR_Word WinnerB_16;

        PSQA_14 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_99_111_110_118_101_114_116_95_108_111_115_101_114_95_116_114_101_101_95_116_111_95_112_115_113_117_101_117_101_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_2_f_0(TypeInfo_for_K_18, SubLTreeL_10, SplitKey_11);
        {
          WinnerB_16 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), WinnerB_16, 0) = ((MR_Box) (LoserPrio_8));
          MR_hl_field(MR_mktag(0), WinnerB_16, 1) = LoserKey_9;
          MR_hl_field(MR_mktag(0), WinnerB_16, 2) = ((MR_Box) (SubLTreeR_12));
          MR_hl_field(MR_mktag(0), WinnerB_16, 3) = MaxKey_5;
        }
        {
          PSQB_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), PSQB_15, 0) = ((MR_Box) (WinnerB_16));
        }
      }
      if ((PSQA_14 == (MR_Word) ((MR_Unsigned) 0U)))
        PSQ_6 = PSQB_15;
      else
      {
        MR_Word WinnerA_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PSQA_14, (MR_Integer) 0))));

        if ((PSQB_15 == (MR_Word) ((MR_Unsigned) 0U)))
          PSQ_6 = PSQA_14;
        else
        {
          MR_Word WinnerB_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PSQB_15, (MR_Integer) 0))));
          MR_Word CombinedWinner_27;

          mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_109_98_105_110_101_95_119_105_110_110_101_114_115_95_118_105_97_95_116_111_117_114_110_97_109_101_110_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_for_K_18, WinnerA_25, WinnerB_26, &CombinedWinner_27);
          {
            PSQ_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), PSQ_6, 0) = ((MR_Box) (CombinedWinner_27));
          }
        }
      }
    }
    return PSQ_6;
  }
}

void MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_114_111_109_95_97_115_115_111_99_95_108_105_115_116_95_108_111_111_112_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_3_p_0(
  MR_Word TypeInfo_for_K_17,
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_PSQ_0_2,
  MR_Word * STATE_VARIABLE_PSQ_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_PSQ_3 = STATE_VARIABLE_PSQ_0_2;
    else
    {
      MR_Integer Prio_7;
      MR_Box Key_8;
      MR_Word PriosKeys_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_PSQ_14_14;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_PSQ_0_2;

      Prio_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 0))));
      Key_8 = (MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 1));
      mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_4_p_0(TypeInfo_for_K_17, Prio_7, Key_8, STATE_VARIABLE_PSQ_0_2, &STATE_VARIABLE_PSQ_14_14);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = PriosKeys_9;
      next_value_of_STATE_VARIABLE_PSQ_0_2 = STATE_VARIABLE_PSQ_14_14;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_PSQ_0_2 = next_value_of_STATE_VARIABLE_PSQ_0_2;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_4_p_0(
  MR_Word TypeInfo_for_K_16,
  MR_Integer InsertPrio_5,
  MR_Box InsertKey_6,
  MR_Word STATE_VARIABLE_PSQ_0_8,
  MR_Word * STATE_VARIABLE_PSQ_9)
{
  {
    MR_bool succeeded;
    MR_Word STATE_VARIABLE_PSQ_10_10;

    succeeded = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_4_p_0(TypeInfo_for_K_16, InsertPrio_5, InsertKey_6, STATE_VARIABLE_PSQ_0_8, &STATE_VARIABLE_PSQ_10_10);
    if (succeeded)
      *STATE_VARIABLE_PSQ_9 = STATE_VARIABLE_PSQ_10_10;
    else
      {
        mercury__require__unexpected_3_p_0((MR_String) "psqueue.m", (MR_String) "predicate \140psqueue.det_insert\'/4", (MR_String) "key being inserted is already present");
        return;
      }
  }
}

MR_bool MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_4_p_0(
  MR_Word TypeInfo_for_K_16,
  MR_Integer InsertPrio_5,
  MR_Box InsertKey_6,
  MR_Word STATE_VARIABLE_PSQ_0_10,
  MR_Word * STATE_VARIABLE_PSQ_11)
{
  {
    MR_bool succeeded;

    if ((STATE_VARIABLE_PSQ_0_10 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_23;

      {
        Var_23 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (InsertPrio_5));
        MR_hl_field(MR_mktag(0), Var_23, 1) = InsertKey_6;
        MR_hl_field(MR_mktag(0), Var_23, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Var_23, 3) = InsertKey_6;
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_PSQ_11 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_23));
      }
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Winner0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PSQ_0_10, (MR_Integer) 0))));
      MR_Word Winner_9;
      MR_Word Var_12;

      Var_12 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_103_101_116_95_116_111_117_114_110_97_109_101_110_116_95_118_105_101_119_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_1_f_0(TypeInfo_for_K_16, Winner0_8);
      succeeded = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_116_118_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_4_p_0(TypeInfo_for_K_16, InsertPrio_5, InsertKey_6, Var_12, &Winner_9);
      if (succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_PSQ_11 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Winner_9));
        }
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_116_118_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_4_p_0(
  MR_Word TypeInfo_for_K_29,
  MR_Integer InsertPrio_5,
  MR_Box InsertKey_6,
  MR_Word TV_7,
  MR_Word * Winner_8)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) TV_7)) == (MR_Integer) 0))
    {
      MR_Integer Prio_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TV_7, (MR_Integer) 0))));
      MR_Box Key_10 = (MR_hl_field(MR_mktag(0), TV_7, (MR_Integer) 1));
      MR_Word CMP_11;
      MR_Word WinnerA_12;
      MR_Word WinnerB_13;

      mercury__builtin__compare_3_p_0(TypeInfo_for_K_29, &CMP_11, InsertKey_6, Key_10);
      switch (CMP_11) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 1:
          {
            {
              WinnerA_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), WinnerA_12, 0) = ((MR_Box) (InsertPrio_5));
              MR_hl_field(MR_mktag(0), WinnerA_12, 1) = InsertKey_6;
              MR_hl_field(MR_mktag(0), WinnerA_12, 2) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), WinnerA_12, 3) = InsertKey_6;
            }
            {
              WinnerB_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), WinnerB_13, 0) = ((MR_Box) (Prio_9));
              MR_hl_field(MR_mktag(0), WinnerB_13, 1) = Key_10;
              MR_hl_field(MR_mktag(0), WinnerB_13, 2) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), WinnerB_13, 3) = Key_10;
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 2:
          {
            {
              WinnerA_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), WinnerA_12, 0) = ((MR_Box) (Prio_9));
              MR_hl_field(MR_mktag(0), WinnerA_12, 1) = Key_10;
              MR_hl_field(MR_mktag(0), WinnerA_12, 2) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), WinnerA_12, 3) = Key_10;
            }
            {
              WinnerB_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), WinnerB_13, 0) = ((MR_Box) (InsertPrio_5));
              MR_hl_field(MR_mktag(0), WinnerB_13, 1) = InsertKey_6;
              MR_hl_field(MR_mktag(0), WinnerB_13, 2) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), WinnerB_13, 3) = InsertKey_6;
            }
            succeeded = MR_TRUE;
          }
          break;
      }
      if (succeeded)
      {
        mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_109_98_105_110_101_95_119_105_110_110_101_114_115_95_118_105_97_95_116_111_117_114_110_97_109_101_110_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_for_K_29, WinnerA_12, WinnerB_13, Winner_8);
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Box MaxKeyA_17;
      MR_Word WinnerA_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TV_7, (MR_Integer) 0))));
      MR_Word WinnerB_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TV_7, (MR_Integer) 1))));
      MR_Word CMP_48;

      MaxKeyA_17 = (MR_hl_field(MR_mktag(0), WinnerA_26, (MR_Integer) 3));
      mercury__builtin__compare_3_p_0(TypeInfo_for_K_29, &CMP_48, InsertKey_6, MaxKeyA_17);
      switch (CMP_48) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 1:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 0:
          succeeded = MR_TRUE;
          break;
      }
      if (succeeded)
      {
        MR_Word UpdatedWinnerA_22;
        MR_Word Var_24;

        Var_24 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_103_101_116_95_116_111_117_114_110_97_109_101_110_116_95_118_105_101_119_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_1_f_0(TypeInfo_for_K_29, WinnerA_26);
        succeeded = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_116_118_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_4_p_0(TypeInfo_for_K_29, InsertPrio_5, InsertKey_6, Var_24, &UpdatedWinnerA_22);
        if (succeeded)
        {
          mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_109_98_105_110_101_95_119_105_110_110_101_114_115_95_118_105_97_95_116_111_117_114_110_97_109_101_110_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_for_K_29, UpdatedWinnerA_22, WinnerB_27, Winner_8);
          succeeded = MR_TRUE;
        }
      }
      else
      {
        MR_Word UpdatedWinnerB_23;
        MR_Word Var_25;

        Var_25 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_103_101_116_95_116_111_117_114_110_97_109_101_110_116_95_118_105_101_119_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_1_f_0(TypeInfo_for_K_29, WinnerB_27);
        succeeded = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_116_118_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_4_p_0(TypeInfo_for_K_29, InsertPrio_5, InsertKey_6, Var_25, &UpdatedWinnerB_23);
        if (succeeded)
        {
          mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_109_98_105_110_101_95_119_105_110_110_101_114_115_95_118_105_97_95_116_111_117_114_110_97_109_101_110_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_for_K_29, WinnerA_26, UpdatedWinnerB_23, Winner_8);
          succeeded = MR_TRUE;
        }
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_116_118_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_4_p_0(
  MR_Word TypeInfo_for_K_23,
  MR_Integer * MatchingPrio_5,
  MR_Box SearchKey_6,
  MR_Word TournamentView_7,
  MR_Word * PSQ_8)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) TournamentView_7)) == (MR_Integer) 0))
    {
      MR_Box Key_10;

      *MatchingPrio_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TournamentView_7, (MR_Integer) 0))));
      Key_10 = (MR_hl_field(MR_mktag(0), TournamentView_7, (MR_Integer) 1));
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_K_23, Key_10, SearchKey_6);
      if (succeeded)
      {
        *PSQ_8 = (MR_Word) ((MR_Unsigned) 0U);
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Word WinnerA_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TournamentView_7, (MR_Integer) 0))));
      MR_Word WinnerB_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TournamentView_7, (MR_Integer) 1))));
      MR_Box MaxKeyA_16 = (MR_hl_field(MR_mktag(0), WinnerA_11, (MR_Integer) 3));
      MR_Word CombinedWinner_18;
      MR_Word CMP_26;

      mercury__builtin__compare_3_p_0(TypeInfo_for_K_23, &CMP_26, SearchKey_6, MaxKeyA_16);
      switch (CMP_26) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 1:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 0:
          succeeded = MR_TRUE;
          break;
      }
      if (succeeded)
      {
        MR_Word UpdatedPSQA_17;
        MR_Word Var_20;

        Var_20 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_103_101_116_95_116_111_117_114_110_97_109_101_110_116_95_118_105_101_119_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_1_f_0(TypeInfo_for_K_23, WinnerA_11);
        succeeded = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_116_118_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_4_p_0(TypeInfo_for_K_23, MatchingPrio_5, SearchKey_6, Var_20, &UpdatedPSQA_17);
        if (succeeded)
        {
          if ((UpdatedPSQA_17 == (MR_Word) ((MR_Unsigned) 0U)))
            CombinedWinner_18 = WinnerB_12;
          else
          {
            MR_Word WinnerA_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), UpdatedPSQA_17, (MR_Integer) 0))));

            mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_109_98_105_110_101_95_119_105_110_110_101_114_115_95_118_105_97_95_116_111_117_114_110_97_109_101_110_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_for_K_23, WinnerA_30, WinnerB_12, &CombinedWinner_18);
          }
          succeeded = MR_TRUE;
        }
      }
      else
      {
        MR_Word UpdatedPSQB_19;
        MR_Word Var_21;

        Var_21 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_103_101_116_95_116_111_117_114_110_97_109_101_110_116_95_118_105_101_119_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_1_f_0(TypeInfo_for_K_23, WinnerB_12);
        succeeded = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_116_118_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_4_p_0(TypeInfo_for_K_23, MatchingPrio_5, SearchKey_6, Var_21, &UpdatedPSQB_19);
        if (succeeded)
        {
          if ((UpdatedPSQB_19 == (MR_Word) ((MR_Unsigned) 0U)))
            CombinedWinner_18 = WinnerA_11;
          else
          {
            MR_Word WinnerB_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), UpdatedPSQB_19, (MR_Integer) 0))));

            mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_109_98_105_110_101_95_119_105_110_110_101_114_115_95_118_105_97_95_116_111_117_114_110_97_109_101_110_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_for_K_23, WinnerA_11, WinnerB_35, &CombinedWinner_18);
          }
          succeeded = MR_TRUE;
        }
      }
      if (succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *PSQ_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (CombinedWinner_18));
        }
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_97_100_106_117_115_116_95_116_118_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_4_p_0(
  MR_Word TypeInfo_for_K_23,
  MR_Word AdjustFunc_5,
  MR_Box SearchKey_6,
  MR_Word TournamentView_7,
  MR_Word * Winner_8)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) TournamentView_7)) == (MR_Integer) 0))
    {
      MR_Integer Prio_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TournamentView_7, (MR_Integer) 0))));
      MR_Box Key_10 = (MR_hl_field(MR_mktag(0), TournamentView_7, (MR_Integer) 1));
      MR_Integer Var_21;
      MR_Word Var_26;
      MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
      MR_Box conv1_Var_21;

      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_K_23, Key_10, SearchKey_6);
      if (succeeded)
      {
        func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), AdjustFunc_5, (MR_Integer) 1))));
        conv1_Var_21 = func_0(((MR_Box) (AdjustFunc_5)), ((MR_Box) (Prio_9)));
        Var_21 = ((MR_Integer) (conv1_Var_21));
        Var_26 = (MR_Word) ((MR_Unsigned) 0U);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          *Winner_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_21));
          MR_hl_field(MR_mktag(0), base, 1) = Key_10;
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_26));
          MR_hl_field(MR_mktag(0), base, 3) = Key_10;
        }
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Word WinnerA_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TournamentView_7, (MR_Integer) 0))));
      MR_Word WinnerB_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TournamentView_7, (MR_Integer) 1))));
      MR_Box MaxKeyA_16 = (MR_hl_field(MR_mktag(0), WinnerA_11, (MR_Integer) 3));
      MR_Word CMP_30;

      mercury__builtin__compare_3_p_0(TypeInfo_for_K_23, &CMP_30, SearchKey_6, MaxKeyA_16);
      switch (CMP_30) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 1:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 0:
          succeeded = MR_TRUE;
          break;
      }
      if (succeeded)
      {
        MR_Word UpdatedWinnerA_17;
        MR_Word Var_19;

        Var_19 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_103_101_116_95_116_111_117_114_110_97_109_101_110_116_95_118_105_101_119_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_1_f_0(TypeInfo_for_K_23, WinnerA_11);
        succeeded = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_97_100_106_117_115_116_95_116_118_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_4_p_0(TypeInfo_for_K_23, AdjustFunc_5, SearchKey_6, Var_19, &UpdatedWinnerA_17);
        if (succeeded)
        {
          mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_109_98_105_110_101_95_119_105_110_110_101_114_115_95_118_105_97_95_116_111_117_114_110_97_109_101_110_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_for_K_23, UpdatedWinnerA_17, WinnerB_12, Winner_8);
          succeeded = MR_TRUE;
        }
      }
      else
      {
        MR_Word UpdatedWinnerB_18;
        MR_Word Var_20;

        Var_20 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_103_101_116_95_116_111_117_114_110_97_109_101_110_116_95_118_105_101_119_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_1_f_0(TypeInfo_for_K_23, WinnerB_12);
        succeeded = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_97_100_106_117_115_116_95_116_118_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_4_p_0(TypeInfo_for_K_23, AdjustFunc_5, SearchKey_6, Var_20, &UpdatedWinnerB_18);
        if (succeeded)
        {
          mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_109_98_105_110_101_95_119_105_110_110_101_114_115_95_118_105_97_95_116_111_117_114_110_97_109_101_110_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_for_K_23, WinnerA_11, UpdatedWinnerB_18, Winner_8);
          succeeded = MR_TRUE;
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_109_98_105_110_101_95_119_105_110_110_101_114_115_95_118_105_97_95_116_111_117_114_110_97_109_101_110_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_3_p_0(
  MR_Word TypeInfo_for_K_18,
  MR_Word WinnerA_4,
  MR_Word WinnerB_5,
  MR_Word * CombinedWinner_6)
{
  {
    MR_bool succeeded;
    MR_Integer PrioA_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), WinnerA_4, (MR_Integer) 0))));
    MR_Box KeyA_8 = (MR_hl_field(MR_mktag(0), WinnerA_4, (MR_Integer) 1));
    MR_Word LTreeA_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), WinnerA_4, (MR_Integer) 2))));
    MR_Box MaxKeyA_10 = (MR_hl_field(MR_mktag(0), WinnerA_4, (MR_Integer) 3));
    MR_Integer PrioB_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), WinnerB_5, (MR_Integer) 0))));
    MR_Box KeyB_12 = (MR_hl_field(MR_mktag(0), WinnerB_5, (MR_Integer) 1));
    MR_Word LTreeB_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), WinnerB_5, (MR_Integer) 2))));
    MR_Box MaxKeyB_14 = (MR_hl_field(MR_mktag(0), WinnerB_5, (MR_Integer) 3));

    succeeded = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_108_101_113_95_95_91_86_32_61_32_105_110_116_93_95_48_95_49_2_p_0(PrioA_7, PrioB_11);
    if (succeeded)
    {
      MR_Word LTree_15;

      LTree_15 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_98_97_108_97_110_99_101_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_5_f_0(TypeInfo_for_K_18, PrioB_11, KeyB_12, LTreeA_9, MaxKeyA_10, LTreeB_13);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        *CombinedWinner_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (PrioA_7));
        MR_hl_field(MR_mktag(0), base, 1) = KeyA_8;
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (LTree_15));
        MR_hl_field(MR_mktag(0), base, 3) = MaxKeyB_14;
      }
    }
    else
    {
      MR_Word LTree_16;

      LTree_16 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_98_97_108_97_110_99_101_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_5_f_0(TypeInfo_for_K_18, PrioA_7, KeyA_8, LTreeA_9, MaxKeyA_10, LTreeB_13);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        *CombinedWinner_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (PrioB_11));
        MR_hl_field(MR_mktag(0), base, 1) = KeyB_12;
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (LTree_16));
        MR_hl_field(MR_mktag(0), base, 3) = MaxKeyB_14;
      }
    }
  }
}

static MR_Word MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_98_97_108_97_110_99_101_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_5_f_0(
  MR_Word TypeInfo_for_K_24,
  MR_Integer Prio_7,
  MR_Box Key_8,
  MR_Word LTreeL_9,
  MR_Box SplitKey_10,
  MR_Word LTreeR_11)
{
  {
    MR_bool succeeded;
    MR_Word LTree_12;
    MR_Integer SizeL_13;
    MR_Integer SizeR_14;
    MR_Integer Var_17;

    if ((LTreeL_9 == (MR_Word) ((MR_Unsigned) 0U)))
      SizeL_13 = (MR_Integer) 0;
    else
      SizeL_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), LTreeL_9, (MR_Integer) 0))));
    if ((LTreeR_11 == (MR_Word) ((MR_Unsigned) 0U)))
      SizeR_14 = (MR_Integer) 0;
    else
      SizeR_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), LTreeR_11, (MR_Integer) 0))));
    Var_17 = (MR_Integer) ((MR_Unsigned) SizeR_14 + (MR_Unsigned) SizeL_13);
    succeeded = (Var_17 < (MR_Integer) 2);
    if (succeeded)
    {
      MR_Integer Size_47;
      MR_Integer Var_48;
      MR_Integer Var_50;
      MR_Integer Var_51;

      if ((LTreeL_9 == (MR_Word) ((MR_Unsigned) 0U)))
        Var_50 = (MR_Integer) 0;
      else
        Var_50 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), LTreeL_9, (MR_Integer) 0))));
      Var_48 = (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) Var_50);
      if ((LTreeR_11 == (MR_Word) ((MR_Unsigned) 0U)))
        Var_51 = (MR_Integer) 0;
      else
        Var_51 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), LTreeR_11, (MR_Integer) 0))));
      Size_47 = (MR_Integer) ((MR_Unsigned) Var_48 + (MR_Unsigned) Var_51);
      {
        LTree_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), LTree_12, 0) = ((MR_Box) (Size_47));
        MR_hl_field(MR_mktag(1), LTree_12, 1) = ((MR_Box) (Prio_7));
        MR_hl_field(MR_mktag(1), LTree_12, 2) = Key_8;
        MR_hl_field(MR_mktag(1), LTree_12, 3) = ((MR_Box) (LTreeL_9));
        MR_hl_field(MR_mktag(1), LTree_12, 4) = SplitKey_10;
        MR_hl_field(MR_mktag(1), LTree_12, 5) = ((MR_Box) (LTreeR_11));
      }
    }
    else
    {
      MR_Word CMPL_15;
      MR_Integer Var_19 = (MR_Integer) ((MR_Unsigned) 4 * (MR_Unsigned) SizeL_13);

      succeeded = (SizeR_14 < Var_19);
      if (succeeded)
        CMPL_15 = (MR_Integer) 1;
      else
      {
        succeeded = (SizeR_14 == Var_19);
        if (succeeded)
          CMPL_15 = (MR_Integer) 0;
        else
          CMPL_15 = (MR_Integer) 2;
      }
      succeeded = (CMPL_15 == (MR_Integer) 2);
      if (succeeded)
        LTree_12 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_98_97_108_97_110_99_101_95_108_101_102_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_5_f_0(TypeInfo_for_K_24, Prio_7, Key_8, LTreeL_9, SplitKey_10, LTreeR_11);
      else
      {
        MR_Word CMPR_16;
        MR_Integer Var_21 = (MR_Integer) ((MR_Unsigned) 4 * (MR_Unsigned) SizeR_14);

        succeeded = (SizeL_13 < Var_21);
        if (succeeded)
          CMPR_16 = (MR_Integer) 1;
        else
        {
          succeeded = (SizeL_13 == Var_21);
          if (succeeded)
            CMPR_16 = (MR_Integer) 0;
          else
            CMPR_16 = (MR_Integer) 2;
        }
        succeeded = (CMPR_16 == (MR_Integer) 2);
        if (succeeded)
          LTree_12 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_98_97_108_97_110_99_101_95_114_105_103_104_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_5_f_0(TypeInfo_for_K_24, Prio_7, Key_8, LTreeL_9, SplitKey_10, LTreeR_11);
        else
        {
          MR_Integer Size_78;
          MR_Integer Var_79;
          MR_Integer Var_81;
          MR_Integer Var_82;

          if ((LTreeL_9 == (MR_Word) ((MR_Unsigned) 0U)))
            Var_81 = (MR_Integer) 0;
          else
            Var_81 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), LTreeL_9, (MR_Integer) 0))));
          Var_79 = (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) Var_81);
          if ((LTreeR_11 == (MR_Word) ((MR_Unsigned) 0U)))
            Var_82 = (MR_Integer) 0;
          else
            Var_82 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), LTreeR_11, (MR_Integer) 0))));
          Size_78 = (MR_Integer) ((MR_Unsigned) Var_79 + (MR_Unsigned) Var_82);
          {
            LTree_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), LTree_12, 0) = ((MR_Box) (Size_78));
            MR_hl_field(MR_mktag(1), LTree_12, 1) = ((MR_Box) (Prio_7));
            MR_hl_field(MR_mktag(1), LTree_12, 2) = Key_8;
            MR_hl_field(MR_mktag(1), LTree_12, 3) = ((MR_Box) (LTreeL_9));
            MR_hl_field(MR_mktag(1), LTree_12, 4) = SplitKey_10;
            MR_hl_field(MR_mktag(1), LTree_12, 5) = ((MR_Box) (LTreeR_11));
          }
        }
      }
    }
    return LTree_12;
  }
}

static MR_Word MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_98_97_108_97_110_99_101_95_108_101_102_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_5_f_0(
  MR_Word TypeInfo_for_K_26,
  MR_Integer Prio_7,
  MR_Box Key_8,
  MR_Word LTreeL_9,
  MR_Box SplitKey_10,
  MR_Word LTreeR_11)
{
  {
    MR_bool succeeded;
    MR_Word LTree_12;

    if ((LTreeR_11 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__require__unexpected_3_p_0((MR_String) "psqueue.m", (MR_String) "function \140psqueue.balance_left\'/5", (MR_String) "heavier tree is a leaf");
    else
    {
      MR_Word SubLTreeRL_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LTreeR_11, (MR_Integer) 3))));
      MR_Word SubLTreeRR_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LTreeR_11, (MR_Integer) 5))));
      MR_Word CMP_19;
      MR_Integer Var_23;
      MR_Integer Var_24;

      if ((SubLTreeRL_16 == (MR_Word) ((MR_Unsigned) 0U)))
        Var_23 = (MR_Integer) 0;
      else
        Var_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), SubLTreeRL_16, (MR_Integer) 0))));
      if ((SubLTreeRR_18 == (MR_Word) ((MR_Unsigned) 0U)))
        Var_24 = (MR_Integer) 0;
      else
        Var_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), SubLTreeRR_18, (MR_Integer) 0))));
      succeeded = (Var_23 < Var_24);
      if (succeeded)
        CMP_19 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_23 == Var_24);
        if (succeeded)
          CMP_19 = (MR_Integer) 0;
        else
          CMP_19 = (MR_Integer) 2;
      }
      succeeded = (CMP_19 == (MR_Integer) 1);
      if (succeeded)
        LTree_12 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_115_105_110_103_108_101_95_108_101_102_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_5_f_0(TypeInfo_for_K_26, Prio_7, Key_8, LTreeL_9, SplitKey_10, LTreeR_11);
      else
      {
        MR_Integer LoserPrio_52 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), LTreeR_11, (MR_Integer) 1))));
        MR_Box LoserKey_53 = (MR_hl_field(MR_mktag(1), LTreeR_11, (MR_Integer) 2));
        MR_Word LTreeB_54 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LTreeR_11, (MR_Integer) 3))));
        MR_Box SplitKeyBC_55 = (MR_hl_field(MR_mktag(1), LTreeR_11, (MR_Integer) 4));
        MR_Word LTreeC_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LTreeR_11, (MR_Integer) 5))));
        MR_Word Var_60;

        Var_60 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_115_105_110_103_108_101_95_114_105_103_104_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_5_f_0(TypeInfo_for_K_26, LoserPrio_52, LoserKey_53, LTreeB_54, SplitKeyBC_55, LTreeC_56);
        LTree_12 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_115_105_110_103_108_101_95_108_101_102_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_5_f_0(TypeInfo_for_K_26, Prio_7, Key_8, LTreeL_9, SplitKey_10, Var_60);
      }
    }
    return LTree_12;
  }
}

static MR_Word MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_98_97_108_97_110_99_101_95_114_105_103_104_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_5_f_0(
  MR_Word TypeInfo_for_K_26,
  MR_Integer Prio_7,
  MR_Box Key_8,
  MR_Word LTreeL_9,
  MR_Box SplitKey_10,
  MR_Word LTreeR_11)
{
  {
    MR_bool succeeded;
    MR_Word LTree_12;

    if ((LTreeL_9 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__require__unexpected_3_p_0((MR_String) "psqueue.m", (MR_String) "function \140psqueue.balance_right\'/5", (MR_String) "heavier tree is a leaf");
    else
    {
      MR_Word SubLTreeLL_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LTreeL_9, (MR_Integer) 3))));
      MR_Word SubLTreeLR_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LTreeL_9, (MR_Integer) 5))));
      MR_Word CMP_19;
      MR_Integer Var_23;
      MR_Integer Var_24;

      if ((SubLTreeLR_18 == (MR_Word) ((MR_Unsigned) 0U)))
        Var_23 = (MR_Integer) 0;
      else
        Var_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), SubLTreeLR_18, (MR_Integer) 0))));
      if ((SubLTreeLL_16 == (MR_Word) ((MR_Unsigned) 0U)))
        Var_24 = (MR_Integer) 0;
      else
        Var_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), SubLTreeLL_16, (MR_Integer) 0))));
      succeeded = (Var_23 < Var_24);
      if (succeeded)
        CMP_19 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_23 == Var_24);
        if (succeeded)
          CMP_19 = (MR_Integer) 0;
        else
          CMP_19 = (MR_Integer) 2;
      }
      succeeded = (CMP_19 == (MR_Integer) 1);
      if (succeeded)
        LTree_12 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_115_105_110_103_108_101_95_114_105_103_104_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_5_f_0(TypeInfo_for_K_26, Prio_7, Key_8, LTreeL_9, SplitKey_10, LTreeR_11);
      else
      {
        MR_Integer LoserPrio_52 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), LTreeL_9, (MR_Integer) 1))));
        MR_Box LoserKey_53 = (MR_hl_field(MR_mktag(1), LTreeL_9, (MR_Integer) 2));
        MR_Word LTreeA_54 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LTreeL_9, (MR_Integer) 3))));
        MR_Box SplitKeyAB_55 = (MR_hl_field(MR_mktag(1), LTreeL_9, (MR_Integer) 4));
        MR_Word LTreeB_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LTreeL_9, (MR_Integer) 5))));
        MR_Word Var_60;

        Var_60 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_115_105_110_103_108_101_95_108_101_102_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_5_f_0(TypeInfo_for_K_26, LoserPrio_52, LoserKey_53, LTreeA_54, SplitKeyAB_55, LTreeB_56);
        LTree_12 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_115_105_110_103_108_101_95_114_105_103_104_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_5_f_0(TypeInfo_for_K_26, Prio_7, Key_8, Var_60, SplitKey_10, LTreeR_11);
      }
    }
    return LTree_12;
  }
}

static MR_Word MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_115_105_110_103_108_101_95_108_101_102_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_5_f_0(
  MR_Word TypeInfo_for_K_25,
  MR_Integer InsertPrio_7,
  MR_Box InsertKey_8,
  MR_Word LTreeA_9,
  MR_Box SplitKeyAB_10,
  MR_Word LTreeBC_11)
{
  {
    MR_bool succeeded;
    MR_Word LTree_12;

    if ((LTreeBC_11 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__require__unexpected_3_p_0((MR_String) "psqueue.m", (MR_String) "function \140psqueue.single_left\'/5", (MR_String) "heavier tree is a leaf");
    else
    {
      MR_Integer LoserPrio_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), LTreeBC_11, (MR_Integer) 1))));
      MR_Box LoserKey_15 = (MR_hl_field(MR_mktag(1), LTreeBC_11, (MR_Integer) 2));
      MR_Word LTreeB_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LTreeBC_11, (MR_Integer) 3))));
      MR_Box SplitKeyBC_17 = (MR_hl_field(MR_mktag(1), LTreeBC_11, (MR_Integer) 4));
      MR_Word LTreeC_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LTreeBC_11, (MR_Integer) 5))));
      MR_Word CMP_28;

      mercury__builtin__compare_3_p_0(TypeInfo_for_K_25, &CMP_28, LoserKey_15, SplitKeyBC_17);
      switch (CMP_28) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 1:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 0:
          succeeded = MR_TRUE;
          break;
      }
      if (succeeded)
        succeeded = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_108_101_113_95_95_91_86_32_61_32_105_110_116_93_95_48_95_49_2_p_0(InsertPrio_7, LoserPrio_14);
      if (succeeded)
      {
        MR_Word Var_22;
        MR_Integer Size_35;
        MR_Integer Var_36;
        MR_Integer Var_38;
        MR_Integer Var_39;
        MR_Integer Size_60;
        MR_Integer Var_61;
        MR_Integer Var_64;

        if ((LTreeA_9 == (MR_Word) ((MR_Unsigned) 0U)))
          Var_38 = (MR_Integer) 0;
        else
          Var_38 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), LTreeA_9, (MR_Integer) 0))));
        Var_36 = (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) Var_38);
        if ((LTreeB_16 == (MR_Word) ((MR_Unsigned) 0U)))
          Var_39 = (MR_Integer) 0;
        else
          Var_39 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), LTreeB_16, (MR_Integer) 0))));
        Size_35 = (MR_Integer) ((MR_Unsigned) Var_36 + (MR_Unsigned) Var_39);
        {
          Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (Size_35));
          MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (LoserPrio_14));
          MR_hl_field(MR_mktag(1), Var_22, 2) = LoserKey_15;
          MR_hl_field(MR_mktag(1), Var_22, 3) = ((MR_Box) (LTreeA_9));
          MR_hl_field(MR_mktag(1), Var_22, 4) = SplitKeyAB_10;
          MR_hl_field(MR_mktag(1), Var_22, 5) = ((MR_Box) (LTreeB_16));
        }
        Var_61 = (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) Size_35);
        if ((LTreeC_18 == (MR_Word) ((MR_Unsigned) 0U)))
          Var_64 = (MR_Integer) 0;
        else
          Var_64 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), LTreeC_18, (MR_Integer) 0))));
        Size_60 = (MR_Integer) ((MR_Unsigned) Var_61 + (MR_Unsigned) Var_64);
        {
          LTree_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), LTree_12, 0) = ((MR_Box) (Size_60));
          MR_hl_field(MR_mktag(1), LTree_12, 1) = ((MR_Box) (InsertPrio_7));
          MR_hl_field(MR_mktag(1), LTree_12, 2) = InsertKey_8;
          MR_hl_field(MR_mktag(1), LTree_12, 3) = ((MR_Box) (Var_22));
          MR_hl_field(MR_mktag(1), LTree_12, 4) = SplitKeyBC_17;
          MR_hl_field(MR_mktag(1), LTree_12, 5) = ((MR_Box) (LTreeC_18));
        }
      }
      else
      {
        MR_Word Var_23;
        MR_Integer Size_85;
        MR_Integer Var_86;
        MR_Integer Var_88;
        MR_Integer Var_89;
        MR_Integer Size_110;
        MR_Integer Var_111;
        MR_Integer Var_114;

        if ((LTreeA_9 == (MR_Word) ((MR_Unsigned) 0U)))
          Var_88 = (MR_Integer) 0;
        else
          Var_88 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), LTreeA_9, (MR_Integer) 0))));
        Var_86 = (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) Var_88);
        if ((LTreeB_16 == (MR_Word) ((MR_Unsigned) 0U)))
          Var_89 = (MR_Integer) 0;
        else
          Var_89 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), LTreeB_16, (MR_Integer) 0))));
        Size_85 = (MR_Integer) ((MR_Unsigned) Var_86 + (MR_Unsigned) Var_89);
        {
          Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (Size_85));
          MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (InsertPrio_7));
          MR_hl_field(MR_mktag(1), Var_23, 2) = InsertKey_8;
          MR_hl_field(MR_mktag(1), Var_23, 3) = ((MR_Box) (LTreeA_9));
          MR_hl_field(MR_mktag(1), Var_23, 4) = SplitKeyAB_10;
          MR_hl_field(MR_mktag(1), Var_23, 5) = ((MR_Box) (LTreeB_16));
        }
        Var_111 = (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) Size_85);
        if ((LTreeC_18 == (MR_Word) ((MR_Unsigned) 0U)))
          Var_114 = (MR_Integer) 0;
        else
          Var_114 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), LTreeC_18, (MR_Integer) 0))));
        Size_110 = (MR_Integer) ((MR_Unsigned) Var_111 + (MR_Unsigned) Var_114);
        {
          LTree_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), LTree_12, 0) = ((MR_Box) (Size_110));
          MR_hl_field(MR_mktag(1), LTree_12, 1) = ((MR_Box) (LoserPrio_14));
          MR_hl_field(MR_mktag(1), LTree_12, 2) = LoserKey_15;
          MR_hl_field(MR_mktag(1), LTree_12, 3) = ((MR_Box) (Var_23));
          MR_hl_field(MR_mktag(1), LTree_12, 4) = SplitKeyBC_17;
          MR_hl_field(MR_mktag(1), LTree_12, 5) = ((MR_Box) (LTreeC_18));
        }
      }
    }
    return LTree_12;
  }
}

static MR_Word MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_115_105_110_103_108_101_95_114_105_103_104_116_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_5_f_0(
  MR_Word TypeInfo_for_K_26,
  MR_Integer InsertPrio_7,
  MR_Box InsertKey_8,
  MR_Word LTreeAB_9,
  MR_Box SplitKeyBC_10,
  MR_Word LTreeC_11)
{
  {
    MR_bool succeeded;
    MR_Word LTree_12;

    if ((LTreeAB_9 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__require__unexpected_3_p_0((MR_String) "psqueue.m", (MR_String) "function \140psqueue.single_right\'/5", (MR_String) "heavier tree is a leaf");
    else
    {
      MR_Integer LoserPrio_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), LTreeAB_9, (MR_Integer) 1))));
      MR_Box LoserKey_15 = (MR_hl_field(MR_mktag(1), LTreeAB_9, (MR_Integer) 2));
      MR_Word LTreeA_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LTreeAB_9, (MR_Integer) 3))));
      MR_Box SplitKeyAB_17 = (MR_hl_field(MR_mktag(1), LTreeAB_9, (MR_Integer) 4));
      MR_Word LTreeB_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LTreeAB_9, (MR_Integer) 5))));
      MR_Word CMP0_19;

      mercury__builtin__compare_3_p_0(TypeInfo_for_K_26, &CMP0_19, LoserKey_15, SplitKeyAB_17);
      succeeded = (CMP0_19 == (MR_Integer) 2);
      if (succeeded)
        succeeded = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_108_101_113_95_95_91_86_32_61_32_105_110_116_93_95_48_95_49_2_p_0(InsertPrio_7, LoserPrio_14);
      if (succeeded)
      {
        MR_Word Var_23;
        MR_Integer Size_33;
        MR_Integer Var_34;
        MR_Integer Var_36;
        MR_Integer Var_37;
        MR_Integer Size_58;
        MR_Integer Var_59;
        MR_Integer Var_61;

        if ((LTreeB_18 == (MR_Word) ((MR_Unsigned) 0U)))
          Var_36 = (MR_Integer) 0;
        else
          Var_36 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), LTreeB_18, (MR_Integer) 0))));
        Var_34 = (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) Var_36);
        if ((LTreeC_11 == (MR_Word) ((MR_Unsigned) 0U)))
          Var_37 = (MR_Integer) 0;
        else
          Var_37 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), LTreeC_11, (MR_Integer) 0))));
        Size_33 = (MR_Integer) ((MR_Unsigned) Var_34 + (MR_Unsigned) Var_37);
        {
          Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (Size_33));
          MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (LoserPrio_14));
          MR_hl_field(MR_mktag(1), Var_23, 2) = LoserKey_15;
          MR_hl_field(MR_mktag(1), Var_23, 3) = ((MR_Box) (LTreeB_18));
          MR_hl_field(MR_mktag(1), Var_23, 4) = SplitKeyBC_10;
          MR_hl_field(MR_mktag(1), Var_23, 5) = ((MR_Box) (LTreeC_11));
        }
        if ((LTreeA_16 == (MR_Word) ((MR_Unsigned) 0U)))
          Var_61 = (MR_Integer) 0;
        else
          Var_61 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), LTreeA_16, (MR_Integer) 0))));
        Var_59 = (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) Var_61);
        Size_58 = (MR_Integer) ((MR_Unsigned) Var_59 + (MR_Unsigned) Size_33);
        {
          LTree_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), LTree_12, 0) = ((MR_Box) (Size_58));
          MR_hl_field(MR_mktag(1), LTree_12, 1) = ((MR_Box) (InsertPrio_7));
          MR_hl_field(MR_mktag(1), LTree_12, 2) = InsertKey_8;
          MR_hl_field(MR_mktag(1), LTree_12, 3) = ((MR_Box) (LTreeA_16));
          MR_hl_field(MR_mktag(1), LTree_12, 4) = SplitKeyAB_17;
          MR_hl_field(MR_mktag(1), LTree_12, 5) = ((MR_Box) (Var_23));
        }
      }
      else
      {
        MR_Word Var_24;
        MR_Integer Size_83;
        MR_Integer Var_84;
        MR_Integer Var_86;
        MR_Integer Var_87;
        MR_Integer Size_108;
        MR_Integer Var_109;
        MR_Integer Var_111;

        if ((LTreeB_18 == (MR_Word) ((MR_Unsigned) 0U)))
          Var_86 = (MR_Integer) 0;
        else
          Var_86 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), LTreeB_18, (MR_Integer) 0))));
        Var_84 = (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) Var_86);
        if ((LTreeC_11 == (MR_Word) ((MR_Unsigned) 0U)))
          Var_87 = (MR_Integer) 0;
        else
          Var_87 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), LTreeC_11, (MR_Integer) 0))));
        Size_83 = (MR_Integer) ((MR_Unsigned) Var_84 + (MR_Unsigned) Var_87);
        {
          Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (Size_83));
          MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (InsertPrio_7));
          MR_hl_field(MR_mktag(1), Var_24, 2) = InsertKey_8;
          MR_hl_field(MR_mktag(1), Var_24, 3) = ((MR_Box) (LTreeB_18));
          MR_hl_field(MR_mktag(1), Var_24, 4) = SplitKeyBC_10;
          MR_hl_field(MR_mktag(1), Var_24, 5) = ((MR_Box) (LTreeC_11));
        }
        if ((LTreeA_16 == (MR_Word) ((MR_Unsigned) 0U)))
          Var_111 = (MR_Integer) 0;
        else
          Var_111 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), LTreeA_16, (MR_Integer) 0))));
        Var_109 = (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) Var_111);
        Size_108 = (MR_Integer) ((MR_Unsigned) Var_109 + (MR_Unsigned) Size_83);
        {
          LTree_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), LTree_12, 0) = ((MR_Box) (Size_108));
          MR_hl_field(MR_mktag(1), LTree_12, 1) = ((MR_Box) (LoserPrio_14));
          MR_hl_field(MR_mktag(1), LTree_12, 2) = LoserKey_15;
          MR_hl_field(MR_mktag(1), LTree_12, 3) = ((MR_Box) (LTreeA_16));
          MR_hl_field(MR_mktag(1), LTree_12, 4) = SplitKeyAB_17;
          MR_hl_field(MR_mktag(1), LTree_12, 5) = ((MR_Box) (Var_24));
        }
      }
    }
    return LTree_12;
  }
}

MR_bool MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_116_118_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_3_p_0(
  MR_Word TypeInfo_for_K_18,
  MR_Word TournamentView_4,
  MR_Box SearchKey_5,
  MR_Integer * MatchingPrio_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) TournamentView_4)) == (MR_Integer) 0))
    {
      MR_Box Key_8;

      *MatchingPrio_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TournamentView_4, (MR_Integer) 0))));
      Key_8 = (MR_hl_field(MR_mktag(0), TournamentView_4, (MR_Integer) 1));
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_K_18, Key_8, SearchKey_5);
    }
    else
    {
      MR_Word WinnerA_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TournamentView_4, (MR_Integer) 0))));
      MR_Word WinnerB_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TournamentView_4, (MR_Integer) 1))));
      MR_Box MaxKeyA_14 = (MR_hl_field(MR_mktag(0), WinnerA_9, (MR_Integer) 3));
      MR_Word CMP_21;

      mercury__builtin__compare_3_p_0(TypeInfo_for_K_18, &CMP_21, SearchKey_5, MaxKeyA_14);
      switch (CMP_21) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 1:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 0:
          succeeded = MR_TRUE;
          break;
      }
      if (succeeded)
      {
        MR_Word Var_15;
        MR_Word next_value_of_TournamentView_4;

        Var_15 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_103_101_116_95_116_111_117_114_110_97_109_101_110_116_95_118_105_101_119_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_1_f_0(TypeInfo_for_K_18, WinnerA_9);
        // direct tailcall eliminated
        ;
        next_value_of_TournamentView_4 = Var_15;
        TournamentView_4 = next_value_of_TournamentView_4;
        continue;
      }
      else
      {
        MR_Word Var_16;
        MR_Word next_value_of_TournamentView_4;

        Var_16 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_103_101_116_95_116_111_117_114_110_97_109_101_110_116_95_118_105_101_119_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_1_f_0(TypeInfo_for_K_18, WinnerB_10);
        // direct tailcall eliminated
        ;
        next_value_of_TournamentView_4 = Var_16;
        TournamentView_4 = next_value_of_TournamentView_4;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_97_116_95_109_111_115_116_95_105_110_95_119_105_110_110_101_114_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_3_p_0(
  MR_Word TypeInfo_for_K_21,
  MR_Word Winner_4,
  MR_Integer MaxPrio_5,
  MR_Word * Cord_6)
{
  {
    MR_bool succeeded;
    MR_Integer WinnerPrio_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Winner_4, (MR_Integer) 0))));
    MR_Word CMP_11;

    succeeded = (WinnerPrio_7 < MaxPrio_5);
    if (succeeded)
      CMP_11 = (MR_Integer) 1;
    else
    {
      succeeded = (WinnerPrio_7 == MaxPrio_5);
      if (succeeded)
        CMP_11 = (MR_Integer) 0;
      else
        CMP_11 = (MR_Integer) 2;
    }
    switch (CMP_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
      case (MR_Integer) 0:
        {
          MR_Word TournamentView_12;

          TournamentView_12 = mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_103_101_116_95_116_111_117_114_110_97_109_101_110_116_95_118_105_101_119_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_1_f_0(TypeInfo_for_K_21, Winner_4);
          if (((MR_tag((MR_Word) TournamentView_12)) == (MR_Integer) 0))
          {
            MR_Integer SinglePrio_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TournamentView_12, (MR_Integer) 0))));
            MR_Box SingleKey_14 = (MR_hl_field(MR_mktag(0), TournamentView_12, (MR_Integer) 1));
            MR_Word Var_19;
            MR_Word Var_32;

            {
              Var_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (SinglePrio_13));
              MR_hl_field(MR_mktag(0), Var_19, 1) = SingleKey_14;
            }
            {
              Var_32 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (Var_19));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *Cord_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_32));
            }
          }
          else
          {
            MR_Word TypeInfo_27_27;
            MR_Word WinnerA_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TournamentView_12, (MR_Integer) 0))));
            MR_Word WinnerB_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TournamentView_12, (MR_Integer) 1))));
            MR_Word CordA_17;
            MR_Word CordB_18;
            MR_Word conv0_Cord_6;

            mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_97_116_95_109_111_115_116_95_105_110_95_119_105_110_110_101_114_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_for_K_21, WinnerA_15, MaxPrio_5, &CordA_17);
            mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_97_116_95_109_111_115_116_95_105_110_95_119_105_110_110_101_114_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_for_K_21, WinnerB_16, MaxPrio_5, &CordB_18);
            {
              TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TypeInfo_27_27, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
              MR_hl_field(MR_mktag(0), TypeInfo_27_27, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0));
              MR_hl_field(MR_mktag(0), TypeInfo_27_27, 2) = ((MR_Box) (TypeInfo_for_K_21));
            }
            conv0_Cord_6 = mercury__cord__f_43_43_2_f_0(TypeInfo_27_27, (MR_Word) (CordA_17), (MR_Word) (CordB_18));
            *Cord_6 = (MR_Word) (conv0_Cord_6);
          }
        }
        break;
      case (MR_Integer) 2:
        *Cord_6 = (MR_Word) ((MR_Unsigned) 0U);
        break;
    }
  }
}

MR_Word MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_103_101_116_95_116_111_117_114_110_97_109_101_110_116_95_118_105_101_119_95_95_91_80_32_61_32_105_110_116_93_95_48_95_49_1_f_0(
  MR_Word TypeInfo_for_K_26,
  MR_Word Winner_3)
{
  {
    MR_bool succeeded;
    MR_Word TournamentView_4;
    MR_Integer WinnerPrio_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Winner_3, (MR_Integer) 0))));
    MR_Box WinnerKey_6 = (MR_hl_field(MR_mktag(0), Winner_3, (MR_Integer) 1));
    MR_Word LTree_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Winner_3, (MR_Integer) 2))));
    MR_Box MaxKey_8 = (MR_hl_field(MR_mktag(0), Winner_3, (MR_Integer) 3));

    if ((LTree_7 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        TournamentView_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TournamentView_4, 0) = ((MR_Box) (WinnerPrio_5));
        MR_hl_field(MR_mktag(0), TournamentView_4, 1) = WinnerKey_6;
      }
    else
    {
      MR_Integer LoserPrio_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), LTree_7, (MR_Integer) 1))));
      MR_Box LoserKey_11 = (MR_hl_field(MR_mktag(1), LTree_7, (MR_Integer) 2));
      MR_Word SubLTreeL_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LTree_7, (MR_Integer) 3))));
      MR_Box SplitKey_13 = (MR_hl_field(MR_mktag(1), LTree_7, (MR_Integer) 4));
      MR_Word SubLTreeR_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LTree_7, (MR_Integer) 5))));
      MR_Word WinnerA_15;
      MR_Word WinnerB_16;
      MR_Word CMP_29;

      mercury__builtin__compare_3_p_0(TypeInfo_for_K_26, &CMP_29, LoserKey_11, SplitKey_13);
      switch (CMP_29) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 1:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 0:
          succeeded = MR_TRUE;
          break;
      }
      if (succeeded)
      {
        {
          WinnerA_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), WinnerA_15, 0) = ((MR_Box) (LoserPrio_10));
          MR_hl_field(MR_mktag(0), WinnerA_15, 1) = LoserKey_11;
          MR_hl_field(MR_mktag(0), WinnerA_15, 2) = ((MR_Box) (SubLTreeL_12));
          MR_hl_field(MR_mktag(0), WinnerA_15, 3) = SplitKey_13;
        }
        {
          WinnerB_16 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), WinnerB_16, 0) = ((MR_Box) (WinnerPrio_5));
          MR_hl_field(MR_mktag(0), WinnerB_16, 1) = WinnerKey_6;
          MR_hl_field(MR_mktag(0), WinnerB_16, 2) = ((MR_Box) (SubLTreeR_14));
          MR_hl_field(MR_mktag(0), WinnerB_16, 3) = MaxKey_8;
        }
      }
      else
      {
        {
          WinnerA_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), WinnerA_15, 0) = ((MR_Box) (WinnerPrio_5));
          MR_hl_field(MR_mktag(0), WinnerA_15, 1) = WinnerKey_6;
          MR_hl_field(MR_mktag(0), WinnerA_15, 2) = ((MR_Box) (SubLTreeL_12));
          MR_hl_field(MR_mktag(0), WinnerA_15, 3) = SplitKey_13;
        }
        {
          WinnerB_16 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), WinnerB_16, 0) = ((MR_Box) (LoserPrio_10));
          MR_hl_field(MR_mktag(0), WinnerB_16, 1) = LoserKey_11;
          MR_hl_field(MR_mktag(0), WinnerB_16, 2) = ((MR_Box) (SubLTreeR_14));
          MR_hl_field(MR_mktag(0), WinnerB_16, 3) = MaxKey_8;
        }
      }
      {
        TournamentView_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), TournamentView_4, 0) = ((MR_Box) (WinnerA_15));
        MR_hl_field(MR_mktag(1), TournamentView_4, 1) = ((MR_Box) (WinnerB_16));
      }
    }
    return TournamentView_4;
  }
}

MR_bool MR_CALL 
mercury__psqueue__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_108_101_113_95_95_91_86_32_61_32_105_110_116_93_95_48_95_49_2_p_0(
  MR_Integer ValLeft_3,
  MR_Integer ValRight_4)
{
  {
    MR_bool succeeded = (ValLeft_3 < ValRight_4);
    MR_Word CMP_5;

    if (succeeded)
      CMP_5 = (MR_Integer) 1;
    else
    {
      succeeded = (ValLeft_3 == ValRight_4);
      if (succeeded)
        CMP_5 = (MR_Integer) 0;
      else
        CMP_5 = (MR_Integer) 2;
    }
    switch (CMP_5) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 1:
        succeeded = MR_TRUE;
        break;
      case (MR_Integer) 0:
        succeeded = MR_TRUE;
        break;
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__psqueue____Compare____tournament_view_2_0(
  MR_Word TypeInfo_for_P_24,
  MR_Word TypeInfo_for_K_25,
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
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    {
      MR_Box Var_30 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1));
      MR_Box Var_31 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
      {
        MR_Box ArgY1_5 = (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0));
        MR_Box ArgY2_8 = (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1));
        MR_Word SubResult1_6;

        mercury__builtin__compare_3_p_0(TypeInfo_for_P_24, &SubResult1_6, Var_31, ArgY1_5);
        succeeded = (SubResult1_6 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult1_6;
        else
          mercury__builtin__compare_3_p_0(TypeInfo_for_K_25, HeadVar__1_1, Var_30, ArgY2_8);
      }
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    }
    else
    {
      MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word ArgY1_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word ArgY2_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word SubResult1_19;

        mercury__psqueue____Compare____winner_2_0(TypeInfo_for_P_24, TypeInfo_for_K_25, &SubResult1_19, Var_33, ArgY1_18);
        succeeded = (SubResult1_19 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult1_19;
        else
          mercury__psqueue____Compare____winner_2_0(TypeInfo_for_P_24, TypeInfo_for_K_25, HeadVar__1_1, Var_32, ArgY2_21);
      }
    }
  }
}

MR_bool MR_CALL 
mercury__psqueue____Unify____tournament_view_2_0(
  MR_Word TypeInfo_for_P_13,
  MR_Word TypeInfo_for_K_14,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_11 == CastY_12);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
    {
      MR_Box ArgX1_3 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0));
      MR_Box ArgY1_4;
      MR_Box ArgX2_5 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1));
      MR_Box ArgY2_6;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
      if (succeeded)
      {
        ArgY1_4 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
        ArgY2_6 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1));
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_P_13, ArgX1_3, ArgY1_4);
        if (succeeded)
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_K_14, ArgX2_5, ArgY2_6);
      }
    }
    else
    {
      MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_8;
      MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_10;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
      if (succeeded)
      {
        ArgY1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        ArgY2_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        succeeded = mercury__psqueue____Unify____winner_2_0(TypeInfo_for_P_13, TypeInfo_for_K_14, ArgX1_7, ArgY1_8);
        if (succeeded)
          succeeded = mercury__psqueue____Unify____winner_2_0(TypeInfo_for_P_13, TypeInfo_for_K_14, ArgX2_9, ArgY2_10);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__psqueue____Compare____psqueue_2_0(
  MR_Word TypeInfo_for_P_10,
  MR_Word TypeInfo_for_K_11,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_8 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_9 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_8 == CastY_9);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

        mercury__psqueue____Compare____winner_2_0(TypeInfo_for_P_10, TypeInfo_for_K_11, HeadVar__1_1, Var_14, ArgY1_7);
      }
    }
  }
}

void MR_CALL 
mercury__psqueue____Compare____winner_2_0(
  MR_Word TypeInfo_for_P_17,
  MR_Word TypeInfo_for_K_18,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_15 == CastY_16);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Box ArgX1_4 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
      MR_Box ArgY1_5 = (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0));
      MR_Box ArgX2_7 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1));
      MR_Box ArgY2_8 = (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Box ArgX4_13 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3));
      MR_Box ArgY4_14 = (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3));
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0(TypeInfo_for_P_17, &SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__builtin__compare_3_p_0(TypeInfo_for_K_18, &SubResult2_9, ArgX2_7, ArgY2_8);
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          mercury__psqueue____Compare____loser_tree_2_0(TypeInfo_for_P_17, TypeInfo_for_K_18, &SubResult3_12, ArgX3_10, ArgY3_11);
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
            mercury__builtin__compare_3_p_0(TypeInfo_for_K_18, HeadVar__1_1, ArgX4_13, ArgY4_14);
        }
      }
    }
  }
}

MR_bool MR_CALL 
mercury__psqueue____Unify____psqueue_2_0(
  MR_Word TypeInfo_for_P_9,
  MR_Word TypeInfo_for_K_10,
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
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
      MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

      succeeded = (CastY_4 == CastX_3);
    }
    else
    {
      MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_6;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        succeeded = mercury__psqueue____Unify____winner_2_0(TypeInfo_for_P_9, TypeInfo_for_K_10, ArgX1_5, ArgY1_6);
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__psqueue____Unify____winner_2_0(
  MR_Word TypeInfo_for_P_13,
  MR_Word TypeInfo_for_K_14,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_11 == CastY_12);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Box ArgX1_3 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0));
      MR_Box ArgY1_4 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
      MR_Box ArgX2_5 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1));
      MR_Box ArgY2_6 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Box ArgX4_9 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3));
      MR_Box ArgY4_10 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3));

      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_P_13, ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_K_14, ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          succeeded = mercury__psqueue____Unify____loser_tree_2_0(TypeInfo_for_P_13, TypeInfo_for_K_14, ArgX3_7, ArgY3_8);
          if (succeeded)
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_K_14, ArgX4_9, ArgY4_10);
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__psqueue____Compare____loser_tree_size_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = HeadVar__3_3;

    succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Cast_HeadVar1_4 == Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
  }
}

MR_bool MR_CALL 
mercury__psqueue____Unify____loser_tree_size_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
mercury__psqueue____Compare____loser_tree_2_0(
  MR_Word TypeInfo_for_P_35,
  MR_Word TypeInfo_for_K_36,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer CastX_33 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_34 = (MR_Integer) (HeadVar__3_3);

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = (CastX_33 == CastY_34);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Word Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 5))));
      MR_Box Var_43 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 4));
      MR_Word Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
      MR_Box Var_45 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2));
      MR_Box Var_46 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
      MR_Integer Var_47 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Integer ArgY1_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Box ArgY2_20 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1));
        MR_Box ArgY3_23 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2));
        MR_Word ArgY4_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 3))));
        MR_Box ArgY5_29 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 4));
        MR_Word ArgY6_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 5))));
        MR_Word SubResult1_18;

        succeeded = (Var_47 < ArgY1_17);
        if (succeeded)
          SubResult1_18 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_47 == ArgY1_17);
          if (succeeded)
            SubResult1_18 = (MR_Integer) 0;
          else
            SubResult1_18 = (MR_Integer) 2;
        }
        succeeded = (SubResult1_18 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult1_18;
        else
        {
          MR_Word SubResult2_21;

          mercury__builtin__compare_3_p_0(TypeInfo_for_P_35, &SubResult2_21, Var_46, ArgY2_20);
          succeeded = (SubResult2_21 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult2_21;
          else
          {
            MR_Word SubResult3_24;

            mercury__builtin__compare_3_p_0(TypeInfo_for_K_36, &SubResult3_24, Var_45, ArgY3_23);
            succeeded = (SubResult3_24 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult3_24;
            else
            {
              MR_Word SubResult4_27;

              mercury__psqueue____Compare____loser_tree_2_0(TypeInfo_for_P_35, TypeInfo_for_K_36, &SubResult4_27, Var_44, ArgY4_26);
              succeeded = (SubResult4_27 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult4_27;
              else
              {
                MR_Word SubResult5_30;

                mercury__builtin__compare_3_p_0(TypeInfo_for_K_36, &SubResult5_30, Var_43, ArgY5_29);
                succeeded = (SubResult5_30 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult5_30;
                else
                {
                  MR_Word next_value_of_HeadVar__2_2 = Var_42;
                  MR_Word next_value_of_HeadVar__3_3 = ArgY6_32;

                  // direct tailcall eliminated
                  ;
                  HeadVar__2_2 = next_value_of_HeadVar__2_2;
                  HeadVar__3_3 = next_value_of_HeadVar__3_3;
                  continue;
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
  MR_Word TypeInfo_for_P_19,
  MR_Word TypeInfo_for_K_20,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer CastX_17 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_18 = (MR_Integer) (HeadVar__2_2);

    // setup for model_semi tailcalls optimized into a loop
    ;
    succeeded = (CastX_17 == CastY_18);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
      MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

      succeeded = (CastY_4 == CastX_3);
    }
    else
    {
      MR_Integer ArgX1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Integer ArgY1_6;
      MR_Box ArgX2_7 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1));
      MR_Box ArgY2_8;
      MR_Box ArgX3_9 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2));
      MR_Box ArgY3_10;
      MR_Word ArgX4_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_12;
      MR_Box ArgX5_13 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 4));
      MR_Box ArgY5_14;
      MR_Word ArgX6_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 5))));
      MR_Word ArgY6_16;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgY1_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        ArgY2_8 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
        ArgY3_10 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2));
        ArgY4_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
        ArgY5_14 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 4));
        ArgY6_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 5))));
        succeeded = (ArgX1_5 == ArgY1_6);
        if (succeeded)
        {
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_P_19, ArgX2_7, ArgY2_8);
          if (succeeded)
          {
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_K_20, ArgX3_9, ArgY3_10);
            if (succeeded)
            {
              succeeded = mercury__psqueue____Unify____loser_tree_2_0(TypeInfo_for_P_19, TypeInfo_for_K_20, ArgX4_11, ArgY4_12);
              if (succeeded)
              {
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_K_20, ArgX5_13, ArgY5_14);
                if (succeeded)
                {
                  // direct tailcall eliminated
                  ;
                  next_value_of_HeadVar__1_1 = ArgX6_15;
                  next_value_of_HeadVar__2_2 = ArgY6_16;
                  HeadVar__1_1 = next_value_of_HeadVar__1_1;
                  HeadVar__2_2 = next_value_of_HeadVar__2_2;
                  continue;
                }
              }
            }
          }
        }
      }
    }
    return succeeded;
    break;
  }
}

MR_String MR_CALL 
mercury__psqueue__indent_string_1_f_0(
  MR_Integer Indent_3)
{
  {
    MR_String IndentStr_4;
    MR_Integer Var_6 = (MR_Integer) ((MR_Unsigned) Indent_3 * (MR_Unsigned) 2);
    MR_Word Var_11;

    mercury__list__accumulate_n_copies_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), Var_6, ((MR_Box) (MR_Word) ((MR_Char) 32)), (MR_Word) ((MR_Unsigned) 0U), &Var_11);
    mercury__string__from_char_list_2_p_0(Var_11, &IndentStr_4);
    return IndentStr_4;
  }
}

MR_bool MR_CALL 
mercury__psqueue__leq_2_p_0(
  MR_Word TypeInfo_for_V_6,
  MR_Box ValLeft_3,
  MR_Box ValRight_4)
{
  {
    MR_bool succeeded;
    MR_Word CMP_5;

    mercury__builtin__compare_3_p_0(TypeInfo_for_V_6, &CMP_5, ValLeft_3, ValRight_4);
    switch (CMP_5) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 1:
        succeeded = MR_TRUE;
        break;
      case (MR_Integer) 0:
        succeeded = MR_TRUE;
        break;
    }
    return succeeded;
  }
}

MR_Word MR_CALL 
mercury__psqueue__singleton_winner_2_f_0(
  MR_Word TypeInfo_for_P_8,
  MR_Word TypeInfo_for_K_9,
  MR_Box Prio_4,
  MR_Box Key_5)
{
  {
    MR_Word HeadVar__3_3;

    {
      HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 0) = Prio_4;
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 1) = Key_5;
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 3) = Key_5;
    }
    return HeadVar__3_3;
  }
}

MR_String MR_CALL 
mercury__psqueue__verify_and_dump_psqueue_1_f_0(
  MR_Word TypeInfo_for_P_7,
  MR_Word TypeInfo_for_K_8,
  MR_Word PSQ_3)
{
  {
    MR_bool succeeded;
    MR_String Str_4;

    if ((PSQ_3 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_Box WinnerPrio_10;
      MR_Word LTree_12;
      MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PSQ_3, (MR_Integer) 0))));

      WinnerPrio_10 = (MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 0));
      LTree_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 2))));
      succeeded = mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_112_114_105_111_115_95_105_110_95_108_111_115_101_114_95_116_114_101_101_95_97_116_95_111_114_95_97_98_111_118_101_95_112_114_105_111_95_95_91_50_93_95_48_2_p_0(TypeInfo_for_P_7, WinnerPrio_10, LTree_12);
      if (succeeded)
        succeeded = mercury__psqueue__all_nodes_obey_semi_heap_1_p_0(TypeInfo_for_P_7, TypeInfo_for_K_8, LTree_12);
    }
    if (succeeded)
    {
      if ((PSQ_3 == (MR_Word) ((MR_Unsigned) 0U)))
        succeeded = MR_TRUE;
      else
      {
        MR_Word LTree_18;
        MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PSQ_3, (MR_Integer) 0))));

        LTree_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_20, (MR_Integer) 2))));
        succeeded = mercury__psqueue__loser_tree_has_search_property_1_p_0(TypeInfo_for_P_7, TypeInfo_for_K_8, LTree_18);
      }
      if (succeeded)
      {
        succeeded = mercury__psqueue__has_key_condition_1_p_0(TypeInfo_for_P_7, TypeInfo_for_K_8, PSQ_3);
        if (succeeded)
          succeeded = mercury__psqueue__is_finite_map_1_p_0(TypeInfo_for_P_7, TypeInfo_for_K_8, PSQ_3);
      }
    }
    if (succeeded)
      Str_4 = mercury__psqueue__dump_psqueue_2_f_0(TypeInfo_for_P_7, TypeInfo_for_K_8, (MR_Integer) 0, PSQ_3);
    else
      mercury__require__unexpected_2_p_0((MR_String) "function \140psqueue.verify_and_dump_psqueue\'/1", (MR_String) "verification failed");
    return Str_4;
  }
}

MR_String MR_CALL 
mercury__psqueue__dump_psqueue_1_f_0(
  MR_Word TypeInfo_for_P_5,
  MR_Word TypeInfo_for_K_6,
  MR_Word PSQ_3)
{
  {
    MR_String HeadVar__2_2;

    HeadVar__2_2 = mercury__psqueue__dump_psqueue_2_f_0(TypeInfo_for_P_5, TypeInfo_for_K_6, (MR_Integer) 0, PSQ_3);
    return HeadVar__2_2;
  }
}

MR_String MR_CALL 
mercury__psqueue__dump_psqueue_2_f_0(
  MR_Word TypeInfo_for_P_10,
  MR_Word TypeInfo_for_K_11,
  MR_Integer Indent_4,
  MR_Word PSQ_5)
{
  {
    MR_String Str_6;
    MR_String IndentStr_7;
    MR_Integer Var_15 = (MR_Integer) ((MR_Unsigned) Indent_4 * (MR_Unsigned) 2);
    MR_Word Var_20;

    mercury__list__accumulate_n_copies_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), Var_15, ((MR_Box) (MR_Word) ((MR_Char) 32)), (MR_Word) ((MR_Unsigned) 0U), &Var_20);
    mercury__string__from_char_list_2_p_0(Var_20, &IndentStr_7);
    if ((PSQ_5 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__string__append_3_p_2(IndentStr_7, (MR_String) "void", &Str_6);
    else
    {
      MR_Word Winner_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PSQ_5, (MR_Integer) 0))));

      Str_6 = mercury__psqueue__dump_winner_2_f_0(TypeInfo_for_P_10, TypeInfo_for_K_11, Indent_4, Winner_8);
    }
    return Str_6;
  }
}

MR_String MR_CALL 
mercury__psqueue__dump_winner_2_f_0(
  MR_Word TypeInfo_for_P_32,
  MR_Word TypeInfo_for_K_33,
  MR_Integer Indent_4,
  MR_Word Winner_5)
{
  {
    MR_String Str_6;
    MR_String IndentStr_7;
    MR_Box WinnerPrio_8;
    MR_Box WinnerKey_9;
    MR_Word LTree_10;
    MR_Box MaxKey_11;
    MR_String Var_12;
    MR_String Var_14;
    MR_String Var_15;
    MR_String Var_16;
    MR_String Var_18;
    MR_String Var_19;
    MR_String Var_20;
    MR_String Var_22;
    MR_String Var_23;
    MR_String Var_24;
    MR_String Var_26;
    MR_String Var_27;
    MR_Integer Var_28;
    MR_String Var_30;
    MR_Integer Var_37 = (MR_Integer) ((MR_Unsigned) Indent_4 * (MR_Unsigned) 2);
    MR_Word Var_42;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_Integer Var_70;
    MR_Integer Var_71;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
    MR_Box conv1_Var_71;

    mercury__list__accumulate_n_copies_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), Var_37, ((MR_Box) (MR_Word) ((MR_Char) 32)), (MR_Word) ((MR_Unsigned) 0U), &Var_42);
    mercury__string__from_char_list_2_p_0(Var_42, &IndentStr_7);
    WinnerPrio_8 = (MR_hl_field(MR_mktag(0), Winner_5, (MR_Integer) 0));
    WinnerKey_9 = (MR_hl_field(MR_mktag(0), Winner_5, (MR_Integer) 1));
    LTree_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Winner_5, (MR_Integer) 2))));
    MaxKey_11 = (MR_hl_field(MR_mktag(0), Winner_5, (MR_Integer) 3));
    func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__psqueue_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 12))));
    conv1_Var_71 = func_0(((MR_Box) ((MR_Word) (&mercury__psqueue_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
    Var_71 = ((MR_Integer) (conv1_Var_71));
    Var_70 = (MR_Integer) ((MR_Unsigned) Var_71 + (MR_Unsigned) 1);
    mercury__string__to_string__value_to_revstrings_prio_6_p_1(TypeInfo_for_P_32, (MR_Integer) 1, Var_70, WinnerPrio_8, (MR_Word) ((MR_Unsigned) 0U), &Var_62);
    mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_62, &Var_63);
    Var_15 = mercury__string__append_list_1_f_0(Var_63);
    Var_19 = mercury__string__string_1_f_0(TypeInfo_for_K_33, WinnerKey_9);
    Var_23 = mercury__string__string_1_f_0(TypeInfo_for_K_33, MaxKey_11);
    Var_28 = (MR_Integer) ((MR_Unsigned) Indent_4 + (MR_Unsigned) 1);
    Var_27 = mercury__psqueue__dump_loser_tree_2_f_0(TypeInfo_for_P_32, TypeInfo_for_K_33, Var_28, LTree_10);
    mercury__string__append_3_p_2(IndentStr_7, (MR_String) ")\n", &Var_30);
    mercury__string__append_3_p_2(Var_27, Var_30, &Var_26);
    mercury__string__append_3_p_2((MR_String) ",\n", Var_26, &Var_24);
    Var_22 = mercury__string__f_43_43_2_f_0(Var_23, Var_24);
    Var_20 = mercury__string__f_43_43_2_f_0((MR_String) ", maxkey ", Var_22);
    Var_18 = mercury__string__f_43_43_2_f_0(Var_19, Var_20);
    Var_16 = mercury__string__f_43_43_2_f_0((MR_String) ", key ", Var_18);
    Var_14 = mercury__string__f_43_43_2_f_0(Var_15, Var_16);
    Var_12 = mercury__string__f_43_43_2_f_0((MR_String) "winner(prio ", Var_14);
    Str_6 = mercury__string__f_43_43_2_f_0(IndentStr_7, Var_12);
    return Str_6;
  }
}

static MR_String MR_CALL 
mercury__psqueue__dump_loser_tree_2_f_0(
  MR_Word TypeInfo_for_P_46,
  MR_Word TypeInfo_for_K_47,
  MR_Integer Indent_4,
  MR_Word LTree_5)
{
  {
    MR_String Str_6;
    MR_String IndentStr_7;
    MR_Integer Var_51 = (MR_Integer) ((MR_Unsigned) Indent_4 * (MR_Unsigned) 2);
    MR_Word Var_56;

    mercury__list__accumulate_n_copies_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), Var_51, ((MR_Box) (MR_Word) ((MR_Char) 32)), (MR_Word) ((MR_Unsigned) 0U), &Var_56);
    mercury__string__from_char_list_2_p_0(Var_56, &IndentStr_7);
    if ((LTree_5 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__string__append_3_p_2(IndentStr_7, (MR_String) "loser_leaf\n", &Str_6);
    else
    {
      MR_Integer Size_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), LTree_5, (MR_Integer) 0))));
      MR_Box LoserPrio_9 = (MR_hl_field(MR_mktag(1), LTree_5, (MR_Integer) 1));
      MR_Box LoserKey_10 = (MR_hl_field(MR_mktag(1), LTree_5, (MR_Integer) 2));
      MR_Word LTreeL_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LTree_5, (MR_Integer) 3))));
      MR_Box SplitKey_12 = (MR_hl_field(MR_mktag(1), LTree_5, (MR_Integer) 4));
      MR_Word LTreeR_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LTree_5, (MR_Integer) 5))));
      MR_String Var_14;
      MR_String Var_16;
      MR_String Var_17;
      MR_String Var_18;
      MR_String Var_20;
      MR_String Var_21;
      MR_String Var_22;
      MR_String Var_24;
      MR_String Var_25;
      MR_String Var_26;
      MR_String Var_28;
      MR_String Var_29;
      MR_Integer Var_30;
      MR_String Var_32;
      MR_String Var_33;
      MR_String Var_35;
      MR_String Var_36;
      MR_String Var_37;
      MR_String Var_39;
      MR_String Var_40;
      MR_Integer Var_41;
      MR_String Var_43;
      MR_Word Var_82;
      MR_Word Var_83;
      MR_Integer Var_90;
      MR_Integer Var_91;
      MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
      MR_Box conv1_Var_91;

{
#define MR_PROC_LABEL mercury__psqueue__dump_loser_tree_2_f_0

	MR_Integer I;
	MR_String S;

	I = Size_8 ;
		{

    char buffer[21]; // 1 for sign, 19 for digits, 1 for nul.
    sprintf(buffer, "%" MR_INTEGER_LENGTH_MODIFIER "d", I);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	 Var_17  = S;
}
      func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__psqueue_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 12))));
      conv1_Var_91 = func_0(((MR_Box) ((MR_Word) (&mercury__psqueue_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
      Var_91 = ((MR_Integer) (conv1_Var_91));
      Var_90 = (MR_Integer) ((MR_Unsigned) Var_91 + (MR_Unsigned) 1);
      mercury__string__to_string__value_to_revstrings_prio_6_p_1(TypeInfo_for_P_46, (MR_Integer) 1, Var_90, LoserPrio_9, (MR_Word) ((MR_Unsigned) 0U), &Var_82);
      mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_82, &Var_83);
      Var_21 = mercury__string__append_list_1_f_0(Var_83);
      Var_25 = mercury__string__string_1_f_0(TypeInfo_for_K_47, LoserKey_10);
      Var_30 = (MR_Integer) ((MR_Unsigned) Indent_4 + (MR_Unsigned) 1);
      Var_29 = mercury__psqueue__dump_loser_tree_2_f_0(TypeInfo_for_P_46, TypeInfo_for_K_47, Var_30, LTreeL_11);
      Var_36 = mercury__string__string_1_f_0(TypeInfo_for_K_47, SplitKey_12);
      Var_41 = (MR_Integer) ((MR_Unsigned) Indent_4 + (MR_Unsigned) 1);
      Var_40 = mercury__psqueue__dump_loser_tree_2_f_0(TypeInfo_for_P_46, TypeInfo_for_K_47, Var_41, LTreeR_13);
      Var_43 = mercury__string__f_43_43_2_f_0(IndentStr_7, (MR_String) ")\n");
      Var_39 = mercury__string__f_43_43_2_f_0(Var_40, Var_43);
      Var_37 = mercury__string__f_43_43_2_f_0((MR_String) "\n", Var_39);
      Var_35 = mercury__string__f_43_43_2_f_0(Var_36, Var_37);
      Var_33 = mercury__string__f_43_43_2_f_0((MR_String) "split key ", Var_35);
      Var_32 = mercury__string__f_43_43_2_f_0(IndentStr_7, Var_33);
      Var_28 = mercury__string__f_43_43_2_f_0(Var_29, Var_32);
      Var_26 = mercury__string__f_43_43_2_f_0((MR_String) "\n", Var_28);
      Var_24 = mercury__string__f_43_43_2_f_0(Var_25, Var_26);
      Var_22 = mercury__string__f_43_43_2_f_0((MR_String) ", key ", Var_24);
      Var_20 = mercury__string__f_43_43_2_f_0(Var_21, Var_22);
      Var_18 = mercury__string__f_43_43_2_f_0((MR_String) ", prio ", Var_20);
      Var_16 = mercury__string__f_43_43_2_f_0(Var_17, Var_18);
      Var_14 = mercury__string__f_43_43_2_f_0((MR_String) "loser_node(size ", Var_16);
      Str_6 = mercury__string__f_43_43_2_f_0(IndentStr_7, Var_14);
    }
    return Str_6;
  }
}

MR_bool MR_CALL 
mercury__psqueue__is_finite_map_1_p_0(
  MR_Word TypeInfo_for_P_12,
  MR_Word TypeInfo_for_K_13,
  MR_Word PSQ_2)
{
  {
    MR_bool succeeded;

    if ((PSQ_2 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_Word Winner_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PSQ_2, (MR_Integer) 0))));
      MR_Word LTree_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Winner_3, (MR_Integer) 2))));
      MR_Word Keys_8;
      MR_Word UniqKeys_9;
      MR_Integer NumKeys_10;
      MR_Integer NumUniqKeys_11;
      MR_Integer Var_16;

      Keys_8 = mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_107_101_121_115_95_95_91_49_93_95_48_1_f_0(TypeInfo_for_K_13, LTree_6);
      mercury__list__length_acc_3_p_0(TypeInfo_for_K_13, Keys_8, (MR_Integer) 0, &Var_16);
      mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_K_13, Var_16, Keys_8, &UniqKeys_9);
      mercury__list__length_acc_3_p_0(TypeInfo_for_K_13, Keys_8, (MR_Integer) 0, &NumKeys_10);
      mercury__list__length_acc_3_p_0(TypeInfo_for_K_13, UniqKeys_9, (MR_Integer) 0, &NumUniqKeys_11);
      succeeded = (NumKeys_10 == NumUniqKeys_11);
    }
    return succeeded;
  }
}

static MR_Word MR_CALL 
mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_107_101_121_115_95_95_91_49_93_95_48_1_f_0(
  MR_Word TypeInfo_for_K_15,
  MR_Word LTree_3)
{
  {
    MR_Word Keys_4;

    if ((LTree_3 == (MR_Word) ((MR_Unsigned) 0U)))
      Keys_4 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Box Key_7 = (MR_hl_field(MR_mktag(1), LTree_3, (MR_Integer) 2));
      MR_Word SubLTreeL_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LTree_3, (MR_Integer) 3))));
      MR_Word SubLTreeR_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LTree_3, (MR_Integer) 5))));
      MR_Word Var_11;
      MR_Word Var_12;
      MR_Word Var_13;

      Var_12 = mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_107_101_121_115_95_95_91_49_93_95_48_1_f_0(TypeInfo_for_K_15, SubLTreeL_8);
      Var_13 = mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_107_101_121_115_95_95_91_49_93_95_48_1_f_0(TypeInfo_for_K_15, SubLTreeR_10);
      mercury__list__append_3_p_1(TypeInfo_for_K_15, Var_12, Var_13, &Var_11);
      {
        Keys_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Keys_4, 0) = Key_7;
        MR_hl_field(MR_mktag(1), Keys_4, 1) = ((MR_Box) (Var_11));
      }
    }
    return Keys_4;
  }
}

MR_bool MR_CALL 
mercury__psqueue__has_key_condition_1_p_0(
  MR_Word TypeInfo_for_P_9,
  MR_Word TypeInfo_for_K_10,
  MR_Word PSQ_2)
{
  {
    MR_bool succeeded;

    if ((PSQ_2 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_Word LTree_5;
      MR_Box MaxKey_6;
      MR_Word Winner_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PSQ_2, (MR_Integer) 0))));
      MR_Word Var_15;
      MR_Box Var_7;

      LTree_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Winner_14, (MR_Integer) 2))));
      MaxKey_6 = (MR_hl_field(MR_mktag(0), Winner_14, (MR_Integer) 3));
      Var_15 = mercury__psqueue__get_tournament_view_1_f_0(TypeInfo_for_P_9, TypeInfo_for_K_10, Winner_14);
      succeeded = mercury__psqueue__search_tv_3_p_0(TypeInfo_for_P_9, TypeInfo_for_K_10, Var_15, MaxKey_6, &Var_7);
      if (succeeded)
        succeeded = mercury__psqueue__loser_split_keys_are_present_2_p_0(TypeInfo_for_P_9, TypeInfo_for_K_10, PSQ_2, LTree_5);
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mercury__psqueue__loser_split_keys_are_present_2_p_0(
  MR_Word TypeInfo_for_P_12,
  MR_Word TypeInfo_for_K_13,
  MR_Word PSQ_3,
  MR_Word LTree_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((LTree_4 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_Word SubLTreeL_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LTree_4, (MR_Integer) 3))));
      MR_Box SplitKey_9 = (MR_hl_field(MR_mktag(1), LTree_4, (MR_Integer) 4));
      MR_Word SubLTreeR_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LTree_4, (MR_Integer) 5))));
      MR_Word Winner_17;
      MR_Word Var_18;
      MR_Box Var_11;
      MR_Word next_value_of_LTree_4;

      succeeded = (PSQ_3 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Winner_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PSQ_3, (MR_Integer) 0))));
        Var_18 = mercury__psqueue__get_tournament_view_1_f_0(TypeInfo_for_P_12, TypeInfo_for_K_13, Winner_17);
        succeeded = mercury__psqueue__search_tv_3_p_0(TypeInfo_for_P_12, TypeInfo_for_K_13, Var_18, SplitKey_9, &Var_11);
        if (succeeded)
        {
          succeeded = mercury__psqueue__loser_split_keys_are_present_2_p_0(TypeInfo_for_P_12, TypeInfo_for_K_13, PSQ_3, SubLTreeL_8);
          if (succeeded)
          {
            // direct tailcall eliminated
            ;
            next_value_of_LTree_4 = SubLTreeR_10;
            LTree_4 = next_value_of_LTree_4;
            continue;
          }
        }
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__psqueue__is_search_tree_1_p_0(
  MR_Word TypeInfo_for_P_8,
  MR_Word TypeInfo_for_K_9,
  MR_Word PSQ_2)
{
  {
    MR_bool succeeded;

    if ((PSQ_2 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_Word LTree_5;
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PSQ_2, (MR_Integer) 0))));

      LTree_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_7, (MR_Integer) 2))));
      succeeded = mercury__psqueue__loser_tree_has_search_property_1_p_0(TypeInfo_for_P_8, TypeInfo_for_K_9, LTree_5);
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__psqueue__loser_tree_has_search_property_1_p_0(
  MR_Word TypeInfo_for_P_15,
  MR_Word TypeInfo_for_K_16,
  MR_Word LTree_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((LTree_2 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_Word SubLTreeL_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LTree_2, (MR_Integer) 3))));
      MR_Box SplitKey_7 = (MR_hl_field(MR_mktag(1), LTree_2, (MR_Integer) 4));
      MR_Word SubLTreeR_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LTree_2, (MR_Integer) 5))));
      MR_Word MaybeMaxKeyL_9;
      MR_Word MaybeMinKeyR_10;

      if ((SubLTreeL_6 == (MR_Word) ((MR_Unsigned) 0U)))
        MaybeMaxKeyL_9 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word SubLTreeL_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubLTreeL_6, (MR_Integer) 3))));
        MR_Word SubLTreeR_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubLTreeL_6, (MR_Integer) 5))));
        MR_Box CurMax_25 = (MR_hl_field(MR_mktag(1), SubLTreeL_6, (MR_Integer) 2));
        MR_Word MaybeMaxKeyL_26;
        MR_Word MaybeMaxKeyR_27;
        MR_Box MaxKey_28;

        mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_120_95_107_101_121_95_105_110_95_108_111_115_101_114_95_116_114_101_101_95_97_99_99_95_95_91_49_93_95_48_3_p_0(TypeInfo_for_K_16, SubLTreeL_22, CurMax_25, &MaybeMaxKeyL_26);
        mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_120_95_107_101_121_95_105_110_95_108_111_115_101_114_95_116_114_101_101_95_97_99_99_95_95_91_49_93_95_48_3_p_0(TypeInfo_for_K_16, SubLTreeR_24, CurMax_25, &MaybeMaxKeyR_27);
        if ((MaybeMaxKeyL_26 == (MR_Word) ((MR_Unsigned) 0U)))
          if ((MaybeMaxKeyR_27 == (MR_Word) ((MR_Unsigned) 0U)))
            MaxKey_28 = CurMax_25;
          else
          {
            MR_Box R_34 = (MR_hl_field(MR_mktag(1), MaybeMaxKeyR_27, (MR_Integer) 0));
            MR_Word CMP_44;

            mercury__builtin__compare_3_p_0(TypeInfo_for_K_16, &CMP_44, CurMax_25, R_34);
            switch (CMP_44) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 1:
                succeeded = MR_TRUE;
                break;
              case (MR_Integer) 0:
                succeeded = MR_TRUE;
                break;
            }
            if (succeeded)
              MaxKey_28 = R_34;
            else
              MaxKey_28 = CurMax_25;
          }
        else
        {
          MR_Box Var_38 = (MR_hl_field(MR_mktag(1), MaybeMaxKeyL_26, (MR_Integer) 0));

          if ((MaybeMaxKeyR_27 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word CMP_50;

            mercury__builtin__compare_3_p_0(TypeInfo_for_K_16, &CMP_50, CurMax_25, Var_38);
            switch (CMP_50) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 1:
                succeeded = MR_TRUE;
                break;
              case (MR_Integer) 0:
                succeeded = MR_TRUE;
                break;
            }
            if (succeeded)
              MaxKey_28 = Var_38;
            else
              MaxKey_28 = CurMax_25;
          }
          else
          {
            MR_Box Var_35;
            MR_Box R_37 = (MR_hl_field(MR_mktag(1), MaybeMaxKeyR_27, (MR_Integer) 0));
            MR_Word CMP_56;
            MR_Word CMP_62;

            mercury__builtin__compare_3_p_0(TypeInfo_for_K_16, &CMP_56, Var_38, R_37);
            switch (CMP_56) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 1:
                succeeded = MR_TRUE;
                break;
              case (MR_Integer) 0:
                succeeded = MR_TRUE;
                break;
            }
            if (succeeded)
              Var_35 = R_37;
            else
              Var_35 = Var_38;
            mercury__builtin__compare_3_p_0(TypeInfo_for_K_16, &CMP_62, CurMax_25, Var_35);
            switch (CMP_62) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 1:
                succeeded = MR_TRUE;
                break;
              case (MR_Integer) 0:
                succeeded = MR_TRUE;
                break;
            }
            if (succeeded)
              MaxKey_28 = Var_35;
            else
              MaxKey_28 = CurMax_25;
          }
        }
        {
          MaybeMaxKeyL_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeMaxKeyL_9, 0) = MaxKey_28;
        }
      }
      mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_105_110_95_107_101_121_95_105_110_95_108_111_115_101_114_95_116_114_101_101_95_95_91_49_93_95_48_2_p_0(TypeInfo_for_K_16, SubLTreeR_8, &MaybeMinKeyR_10);
      if ((MaybeMaxKeyL_9 == (MR_Word) ((MR_Unsigned) 0U)))
        succeeded = MR_TRUE;
      else
      {
        MR_Box MaxKeyL_11 = (MR_hl_field(MR_mktag(1), MaybeMaxKeyL_9, (MR_Integer) 0));
        MR_Word CMPL_12;

        mercury__builtin__compare_3_p_0(TypeInfo_for_K_16, &CMPL_12, MaxKeyL_11, SplitKey_7);
        switch (CMPL_12) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 1:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 0:
            succeeded = MR_TRUE;
            break;
        }
        if (succeeded)
          succeeded = mercury__psqueue__loser_tree_has_search_property_1_p_0(TypeInfo_for_P_15, TypeInfo_for_K_16, SubLTreeL_6);
      }
      if (succeeded)
      {
        if ((MaybeMinKeyR_10 == (MR_Word) ((MR_Unsigned) 0U)))
          succeeded = MR_TRUE;
        else
        {
          MR_Box MinKeyR_13 = (MR_hl_field(MR_mktag(1), MaybeMinKeyR_10, (MR_Integer) 0));
          MR_Word CMPR_14;
          MR_Word next_value_of_LTree_2;

          mercury__builtin__compare_3_p_0(TypeInfo_for_K_16, &CMPR_14, MinKeyR_13, SplitKey_7);
          succeeded = (CMPR_14 == (MR_Integer) 2);
          if (succeeded)
          {
            // direct tailcall eliminated
            ;
            next_value_of_LTree_2 = SubLTreeR_8;
            LTree_2 = next_value_of_LTree_2;
            continue;
          }
        }
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_120_95_107_101_121_95_105_110_95_108_111_115_101_114_95_116_114_101_101_95_97_99_99_95_95_91_49_93_95_48_3_p_0(
  MR_Word TypeInfo_for_K_20,
  MR_Word LTree_4,
  MR_Box STATE_VARIABLE_CurMax_0_17,
  MR_Word * MaybeMaxKey_6)
{
  {
    MR_bool succeeded;

    if ((LTree_4 == (MR_Word) ((MR_Unsigned) 0U)))
      *MaybeMaxKey_6 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Box Key_9 = (MR_hl_field(MR_mktag(1), LTree_4, (MR_Integer) 2));
      MR_Word SubLTreeL_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LTree_4, (MR_Integer) 3))));
      MR_Word SubLTreeR_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LTree_4, (MR_Integer) 5))));
      MR_Word CMP_13;
      MR_Word MaybeMaxKeyL_14;
      MR_Word MaybeMaxKeyR_15;
      MR_Box MaxKey_16;
      MR_Box STATE_VARIABLE_CurMax_18_18;

      mercury__builtin__compare_3_p_0(TypeInfo_for_K_20, &CMP_13, STATE_VARIABLE_CurMax_0_17, Key_9);
      switch (CMP_13) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          STATE_VARIABLE_CurMax_18_18 = Key_9;
          break;
        case (MR_Integer) 0:
          STATE_VARIABLE_CurMax_18_18 = STATE_VARIABLE_CurMax_0_17;
          break;
        case (MR_Integer) 2:
          STATE_VARIABLE_CurMax_18_18 = STATE_VARIABLE_CurMax_0_17;
          break;
      }
      mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_120_95_107_101_121_95_105_110_95_108_111_115_101_114_95_116_114_101_101_95_97_99_99_95_95_91_49_93_95_48_3_p_0(TypeInfo_for_K_20, SubLTreeL_10, STATE_VARIABLE_CurMax_18_18, &MaybeMaxKeyL_14);
      mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_120_95_107_101_121_95_105_110_95_108_111_115_101_114_95_116_114_101_101_95_97_99_99_95_95_91_49_93_95_48_3_p_0(TypeInfo_for_K_20, SubLTreeR_12, STATE_VARIABLE_CurMax_18_18, &MaybeMaxKeyR_15);
      if ((MaybeMaxKeyL_14 == (MR_Word) ((MR_Unsigned) 0U)))
        if ((MaybeMaxKeyR_15 == (MR_Word) ((MR_Unsigned) 0U)))
          MaxKey_16 = STATE_VARIABLE_CurMax_18_18;
        else
        {
          MR_Box R_26 = (MR_hl_field(MR_mktag(1), MaybeMaxKeyR_15, (MR_Integer) 0));
          MR_Word CMP_36;

          mercury__builtin__compare_3_p_0(TypeInfo_for_K_20, &CMP_36, STATE_VARIABLE_CurMax_18_18, R_26);
          switch (CMP_36) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 1:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 0:
              succeeded = MR_TRUE;
              break;
          }
          if (succeeded)
            MaxKey_16 = R_26;
          else
            MaxKey_16 = STATE_VARIABLE_CurMax_18_18;
        }
      else
      {
        MR_Box Var_30 = (MR_hl_field(MR_mktag(1), MaybeMaxKeyL_14, (MR_Integer) 0));

        if ((MaybeMaxKeyR_15 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word CMP_42;

          mercury__builtin__compare_3_p_0(TypeInfo_for_K_20, &CMP_42, STATE_VARIABLE_CurMax_18_18, Var_30);
          switch (CMP_42) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 1:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 0:
              succeeded = MR_TRUE;
              break;
          }
          if (succeeded)
            MaxKey_16 = Var_30;
          else
            MaxKey_16 = STATE_VARIABLE_CurMax_18_18;
        }
        else
        {
          MR_Box Var_27;
          MR_Box R_29 = (MR_hl_field(MR_mktag(1), MaybeMaxKeyR_15, (MR_Integer) 0));
          MR_Word CMP_48;
          MR_Word CMP_54;

          mercury__builtin__compare_3_p_0(TypeInfo_for_K_20, &CMP_48, Var_30, R_29);
          switch (CMP_48) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 1:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 0:
              succeeded = MR_TRUE;
              break;
          }
          if (succeeded)
            Var_27 = R_29;
          else
            Var_27 = Var_30;
          mercury__builtin__compare_3_p_0(TypeInfo_for_K_20, &CMP_54, STATE_VARIABLE_CurMax_18_18, Var_27);
          switch (CMP_54) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 1:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 0:
              succeeded = MR_TRUE;
              break;
          }
          if (succeeded)
            MaxKey_16 = Var_27;
          else
            MaxKey_16 = STATE_VARIABLE_CurMax_18_18;
        }
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeMaxKey_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = MaxKey_16;
      }
    }
  }
}

static void MR_CALL 
mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_105_110_95_107_101_121_95_105_110_95_108_111_115_101_114_95_116_114_101_101_95_95_91_49_93_95_48_2_p_0(
  MR_Word TypeInfo_for_K_16,
  MR_Word LTree_3,
  MR_Word * MaybeMinKey_4)
{
  {
    MR_bool succeeded;

    if ((LTree_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *MaybeMinKey_4 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word SubLTreeL_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LTree_3, (MR_Integer) 3))));
      MR_Word SubLTreeR_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LTree_3, (MR_Integer) 5))));
      MR_Box CurMin_11 = (MR_hl_field(MR_mktag(1), LTree_3, (MR_Integer) 2));
      MR_Word MaybeMinKeyL_12;
      MR_Word MaybeMinKeyR_13;
      MR_Box MinKey_14;

      mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_105_110_95_107_101_121_95_105_110_95_108_111_115_101_114_95_116_114_101_101_95_97_99_99_95_95_91_49_93_95_48_3_p_0(TypeInfo_for_K_16, SubLTreeL_8, CurMin_11, &MaybeMinKeyL_12);
      mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_105_110_95_107_101_121_95_105_110_95_108_111_115_101_114_95_116_114_101_101_95_97_99_99_95_95_91_49_93_95_48_3_p_0(TypeInfo_for_K_16, SubLTreeR_10, CurMin_11, &MaybeMinKeyR_13);
      if ((MaybeMinKeyL_12 == (MR_Word) ((MR_Unsigned) 0U)))
        if ((MaybeMinKeyR_13 == (MR_Word) ((MR_Unsigned) 0U)))
          MinKey_14 = CurMin_11;
        else
        {
          MR_Box R_22 = (MR_hl_field(MR_mktag(1), MaybeMinKeyR_13, (MR_Integer) 0));
          MR_Word CMP_32;

          mercury__builtin__compare_3_p_0(TypeInfo_for_K_16, &CMP_32, CurMin_11, R_22);
          switch (CMP_32) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 1:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 0:
              succeeded = MR_TRUE;
              break;
          }
          if (succeeded)
            MinKey_14 = CurMin_11;
          else
            MinKey_14 = R_22;
        }
      else
      {
        MR_Box Var_26 = (MR_hl_field(MR_mktag(1), MaybeMinKeyL_12, (MR_Integer) 0));

        if ((MaybeMinKeyR_13 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word CMP_38;

          mercury__builtin__compare_3_p_0(TypeInfo_for_K_16, &CMP_38, CurMin_11, Var_26);
          switch (CMP_38) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 1:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 0:
              succeeded = MR_TRUE;
              break;
          }
          if (succeeded)
            MinKey_14 = CurMin_11;
          else
            MinKey_14 = Var_26;
        }
        else
        {
          MR_Box Var_23;
          MR_Box R_25 = (MR_hl_field(MR_mktag(1), MaybeMinKeyR_13, (MR_Integer) 0));
          MR_Word CMP_44;
          MR_Word CMP_50;

          mercury__builtin__compare_3_p_0(TypeInfo_for_K_16, &CMP_44, Var_26, R_25);
          switch (CMP_44) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 1:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 0:
              succeeded = MR_TRUE;
              break;
          }
          if (succeeded)
            Var_23 = Var_26;
          else
            Var_23 = R_25;
          mercury__builtin__compare_3_p_0(TypeInfo_for_K_16, &CMP_50, CurMin_11, Var_23);
          switch (CMP_50) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 1:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 0:
              succeeded = MR_TRUE;
              break;
          }
          if (succeeded)
            MinKey_14 = CurMin_11;
          else
            MinKey_14 = Var_23;
        }
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeMinKey_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = MinKey_14;
      }
    }
  }
}

static void MR_CALL 
mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_105_110_95_107_101_121_95_105_110_95_108_111_115_101_114_95_116_114_101_101_95_97_99_99_95_95_91_49_93_95_48_3_p_0(
  MR_Word TypeInfo_for_K_20,
  MR_Word LTree_4,
  MR_Box STATE_VARIABLE_CurMin_0_17,
  MR_Word * MaybeMinKey_6)
{
  {
    MR_bool succeeded;

    if ((LTree_4 == (MR_Word) ((MR_Unsigned) 0U)))
      *MaybeMinKey_6 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Box Key_9 = (MR_hl_field(MR_mktag(1), LTree_4, (MR_Integer) 2));
      MR_Word SubLTreeL_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LTree_4, (MR_Integer) 3))));
      MR_Word SubLTreeR_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LTree_4, (MR_Integer) 5))));
      MR_Word CMP_13;
      MR_Word MaybeMinKeyL_14;
      MR_Word MaybeMinKeyR_15;
      MR_Box MinKey_16;
      MR_Box STATE_VARIABLE_CurMin_18_18;

      mercury__builtin__compare_3_p_0(TypeInfo_for_K_20, &CMP_13, STATE_VARIABLE_CurMin_0_17, Key_9);
      switch (CMP_13) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          STATE_VARIABLE_CurMin_18_18 = STATE_VARIABLE_CurMin_0_17;
          break;
        case (MR_Integer) 0:
          STATE_VARIABLE_CurMin_18_18 = STATE_VARIABLE_CurMin_0_17;
          break;
        case (MR_Integer) 2:
          STATE_VARIABLE_CurMin_18_18 = Key_9;
          break;
      }
      mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_105_110_95_107_101_121_95_105_110_95_108_111_115_101_114_95_116_114_101_101_95_97_99_99_95_95_91_49_93_95_48_3_p_0(TypeInfo_for_K_20, SubLTreeL_10, STATE_VARIABLE_CurMin_18_18, &MaybeMinKeyL_14);
      mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_105_110_95_107_101_121_95_105_110_95_108_111_115_101_114_95_116_114_101_101_95_97_99_99_95_95_91_49_93_95_48_3_p_0(TypeInfo_for_K_20, SubLTreeR_12, STATE_VARIABLE_CurMin_18_18, &MaybeMinKeyR_15);
      if ((MaybeMinKeyL_14 == (MR_Word) ((MR_Unsigned) 0U)))
        if ((MaybeMinKeyR_15 == (MR_Word) ((MR_Unsigned) 0U)))
          MinKey_16 = STATE_VARIABLE_CurMin_18_18;
        else
        {
          MR_Box R_26 = (MR_hl_field(MR_mktag(1), MaybeMinKeyR_15, (MR_Integer) 0));
          MR_Word CMP_36;

          mercury__builtin__compare_3_p_0(TypeInfo_for_K_20, &CMP_36, STATE_VARIABLE_CurMin_18_18, R_26);
          switch (CMP_36) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 1:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 0:
              succeeded = MR_TRUE;
              break;
          }
          if (succeeded)
            MinKey_16 = STATE_VARIABLE_CurMin_18_18;
          else
            MinKey_16 = R_26;
        }
      else
      {
        MR_Box Var_30 = (MR_hl_field(MR_mktag(1), MaybeMinKeyL_14, (MR_Integer) 0));

        if ((MaybeMinKeyR_15 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word CMP_42;

          mercury__builtin__compare_3_p_0(TypeInfo_for_K_20, &CMP_42, STATE_VARIABLE_CurMin_18_18, Var_30);
          switch (CMP_42) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 1:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 0:
              succeeded = MR_TRUE;
              break;
          }
          if (succeeded)
            MinKey_16 = STATE_VARIABLE_CurMin_18_18;
          else
            MinKey_16 = Var_30;
        }
        else
        {
          MR_Box Var_27;
          MR_Box R_29 = (MR_hl_field(MR_mktag(1), MaybeMinKeyR_15, (MR_Integer) 0));
          MR_Word CMP_48;
          MR_Word CMP_54;

          mercury__builtin__compare_3_p_0(TypeInfo_for_K_20, &CMP_48, Var_30, R_29);
          switch (CMP_48) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 1:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 0:
              succeeded = MR_TRUE;
              break;
          }
          if (succeeded)
            Var_27 = Var_30;
          else
            Var_27 = R_29;
          mercury__builtin__compare_3_p_0(TypeInfo_for_K_20, &CMP_54, STATE_VARIABLE_CurMin_18_18, Var_27);
          switch (CMP_54) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 1:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 0:
              succeeded = MR_TRUE;
              break;
          }
          if (succeeded)
            MinKey_16 = STATE_VARIABLE_CurMin_18_18;
          else
            MinKey_16 = Var_27;
        }
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeMinKey_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = MinKey_16;
      }
    }
  }
}

MR_bool MR_CALL 
mercury__psqueue__is_semi_heap_1_p_0(
  MR_Word TypeInfo_for_P_8,
  MR_Word TypeInfo_for_K_9,
  MR_Word PSQ_2)
{
  {
    MR_bool succeeded;

    if ((PSQ_2 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_Box WinnerPrio_3;
      MR_Word LTree_5;
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PSQ_2, (MR_Integer) 0))));

      WinnerPrio_3 = (MR_hl_field(MR_mktag(0), Var_7, (MR_Integer) 0));
      LTree_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_7, (MR_Integer) 2))));
      succeeded = mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_112_114_105_111_115_95_105_110_95_108_111_115_101_114_95_116_114_101_101_95_97_116_95_111_114_95_97_98_111_118_101_95_112_114_105_111_95_95_91_50_93_95_48_2_p_0(TypeInfo_for_P_8, WinnerPrio_3, LTree_5);
      if (succeeded)
        succeeded = mercury__psqueue__all_nodes_obey_semi_heap_1_p_0(TypeInfo_for_P_8, TypeInfo_for_K_9, LTree_5);
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_112_114_105_111_115_95_105_110_95_108_111_115_101_114_95_116_114_101_101_95_97_116_95_111_114_95_97_98_111_118_101_95_112_114_105_111_95_95_91_50_93_95_48_2_p_0(
  MR_Word TypeInfo_for_P_11,
  MR_Box WinnerPrio_3,
  MR_Word LTree_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((LTree_4 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_Box LoserPrio_6 = (MR_hl_field(MR_mktag(1), LTree_4, (MR_Integer) 1));
      MR_Word SubLTreeL_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LTree_4, (MR_Integer) 3))));
      MR_Word SubLTreeR_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LTree_4, (MR_Integer) 5))));
      MR_Word CMP_15;
      MR_Word next_value_of_LTree_4;

      mercury__builtin__compare_3_p_0(TypeInfo_for_P_11, &CMP_15, WinnerPrio_3, LoserPrio_6);
      switch (CMP_15) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 1:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 0:
          succeeded = MR_TRUE;
          break;
      }
      if (succeeded)
      {
        succeeded = mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_112_114_105_111_115_95_105_110_95_108_111_115_101_114_95_116_114_101_101_95_97_116_95_111_114_95_97_98_111_118_101_95_112_114_105_111_95_95_91_50_93_95_48_2_p_0(TypeInfo_for_P_11, WinnerPrio_3, SubLTreeL_8);
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_LTree_4 = SubLTreeR_10;
          LTree_4 = next_value_of_LTree_4;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
mercury__psqueue__all_nodes_obey_semi_heap_1_p_0(
  MR_Word TypeInfo_for_P_12,
  MR_Word TypeInfo_for_K_13,
  MR_Word LTree_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((LTree_2 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_Box Prio_4 = (MR_hl_field(MR_mktag(1), LTree_2, (MR_Integer) 1));
      MR_Box Key_5 = (MR_hl_field(MR_mktag(1), LTree_2, (MR_Integer) 2));
      MR_Word SubLTreeL_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LTree_2, (MR_Integer) 3))));
      MR_Box SplitKey_7 = (MR_hl_field(MR_mktag(1), LTree_2, (MR_Integer) 4));
      MR_Word SubLTreeR_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LTree_2, (MR_Integer) 5))));
      MR_Word MaybeMinPrio_9;
      MR_Word CMP_16;
      MR_Word next_value_of_LTree_2;

      mercury__builtin__compare_3_p_0(TypeInfo_for_K_13, &CMP_16, Key_5, SplitKey_7);
      switch (CMP_16) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 1:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 0:
          succeeded = MR_TRUE;
          break;
      }
      if (succeeded)
        mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_105_110_95_112_114_105_111_95_105_110_95_108_111_115_101_114_95_116_114_101_101_95_97_99_99_95_95_91_50_93_95_48_3_p_0(TypeInfo_for_P_12, SubLTreeL_6, Prio_4, &MaybeMinPrio_9);
      else
        mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_105_110_95_112_114_105_111_95_105_110_95_108_111_115_101_114_95_116_114_101_101_95_97_99_99_95_95_91_50_93_95_48_3_p_0(TypeInfo_for_P_12, SubLTreeR_8, Prio_4, &MaybeMinPrio_9);
      if ((MaybeMinPrio_9 == (MR_Word) ((MR_Unsigned) 0U)))
        succeeded = MR_TRUE;
      else
      {
        MR_Box MinPrio_10 = (MR_hl_field(MR_mktag(1), MaybeMinPrio_9, (MR_Integer) 0));
        MR_Word CMP_11;

        mercury__builtin__compare_3_p_0(TypeInfo_for_P_12, &CMP_11, Prio_4, MinPrio_10);
        succeeded = (CMP_11 == (MR_Integer) 0);
      }
      if (succeeded)
      {
        succeeded = mercury__psqueue__all_nodes_obey_semi_heap_1_p_0(TypeInfo_for_P_12, TypeInfo_for_K_13, SubLTreeL_6);
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_LTree_2 = SubLTreeR_8;
          LTree_2 = next_value_of_LTree_2;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_105_110_95_112_114_105_111_95_105_110_95_108_111_115_101_114_95_116_114_101_101_95_97_99_99_95_95_91_50_93_95_48_3_p_0(
  MR_Word TypeInfo_for_P_19,
  MR_Word LTree_4,
  MR_Box STATE_VARIABLE_CurMinPrio_0_17,
  MR_Word * MaybeMinPrio_6)
{
  {
    MR_bool succeeded;

    if ((LTree_4 == (MR_Word) ((MR_Unsigned) 0U)))
      *MaybeMinPrio_6 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Box Prio_8 = (MR_hl_field(MR_mktag(1), LTree_4, (MR_Integer) 1));
      MR_Word SubLTreeL_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LTree_4, (MR_Integer) 3))));
      MR_Word SubLTreeR_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LTree_4, (MR_Integer) 5))));
      MR_Word CMP_13;
      MR_Word MaybeMinPrioL_14;
      MR_Word MaybeMinPrioR_15;
      MR_Box MinPrio_16;
      MR_Box STATE_VARIABLE_CurMinPrio_18_18;

      mercury__builtin__compare_3_p_0(TypeInfo_for_P_19, &CMP_13, STATE_VARIABLE_CurMinPrio_0_17, Prio_8);
      switch (CMP_13) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          STATE_VARIABLE_CurMinPrio_18_18 = STATE_VARIABLE_CurMinPrio_0_17;
          break;
        case (MR_Integer) 0:
          STATE_VARIABLE_CurMinPrio_18_18 = STATE_VARIABLE_CurMinPrio_0_17;
          break;
        case (MR_Integer) 2:
          STATE_VARIABLE_CurMinPrio_18_18 = Prio_8;
          break;
      }
      mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_105_110_95_112_114_105_111_95_105_110_95_108_111_115_101_114_95_116_114_101_101_95_97_99_99_95_95_91_50_93_95_48_3_p_0(TypeInfo_for_P_19, SubLTreeL_10, STATE_VARIABLE_CurMinPrio_18_18, &MaybeMinPrioL_14);
      mercury__psqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_105_110_95_112_114_105_111_95_105_110_95_108_111_115_101_114_95_116_114_101_101_95_97_99_99_95_95_91_50_93_95_48_3_p_0(TypeInfo_for_P_19, SubLTreeR_12, STATE_VARIABLE_CurMinPrio_18_18, &MaybeMinPrioR_15);
      if ((MaybeMinPrioL_14 == (MR_Word) ((MR_Unsigned) 0U)))
        if ((MaybeMinPrioR_15 == (MR_Word) ((MR_Unsigned) 0U)))
          MinPrio_16 = STATE_VARIABLE_CurMinPrio_18_18;
        else
        {
          MR_Box R_26 = (MR_hl_field(MR_mktag(1), MaybeMinPrioR_15, (MR_Integer) 0));
          MR_Word CMP_36;

          mercury__builtin__compare_3_p_0(TypeInfo_for_P_19, &CMP_36, STATE_VARIABLE_CurMinPrio_18_18, R_26);
          switch (CMP_36) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 1:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 0:
              succeeded = MR_TRUE;
              break;
          }
          if (succeeded)
            MinPrio_16 = STATE_VARIABLE_CurMinPrio_18_18;
          else
            MinPrio_16 = R_26;
        }
      else
      {
        MR_Box Var_30 = (MR_hl_field(MR_mktag(1), MaybeMinPrioL_14, (MR_Integer) 0));

        if ((MaybeMinPrioR_15 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word CMP_42;

          mercury__builtin__compare_3_p_0(TypeInfo_for_P_19, &CMP_42, STATE_VARIABLE_CurMinPrio_18_18, Var_30);
          switch (CMP_42) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 1:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 0:
              succeeded = MR_TRUE;
              break;
          }
          if (succeeded)
            MinPrio_16 = STATE_VARIABLE_CurMinPrio_18_18;
          else
            MinPrio_16 = Var_30;
        }
        else
        {
          MR_Box Var_27;
          MR_Box R_29 = (MR_hl_field(MR_mktag(1), MaybeMinPrioR_15, (MR_Integer) 0));
          MR_Word CMP_48;
          MR_Word CMP_54;

          mercury__builtin__compare_3_p_0(TypeInfo_for_P_19, &CMP_48, Var_30, R_29);
          switch (CMP_48) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 1:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 0:
              succeeded = MR_TRUE;
              break;
          }
          if (succeeded)
            Var_27 = Var_30;
          else
            Var_27 = R_29;
          mercury__builtin__compare_3_p_0(TypeInfo_for_P_19, &CMP_54, STATE_VARIABLE_CurMinPrio_18_18, Var_27);
          switch (CMP_54) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 1:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 0:
              succeeded = MR_TRUE;
              break;
          }
          if (succeeded)
            MinPrio_16 = STATE_VARIABLE_CurMinPrio_18_18;
          else
            MinPrio_16 = Var_27;
        }
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeMinPrio_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = MinPrio_16;
      }
    }
  }
}

MR_Integer MR_CALL 
mercury__psqueue__size_1_f_0(
  MR_Word TypeInfo_for_P_5,
  MR_Word TypeInfo_for_K_6,
  MR_Word PSQ_3)
{
  {
    MR_Integer Size_4;

    mercury__psqueue__size_2_p_0(TypeInfo_for_P_5, TypeInfo_for_K_6, PSQ_3, &Size_4);
    return Size_4;
  }
}

void MR_CALL 
mercury__psqueue__size_2_p_0(
  MR_Word TypeInfo_for_P_12,
  MR_Word TypeInfo_for_K_13,
  MR_Word PSQ_3,
  MR_Integer * Size_4)
{
  if ((PSQ_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *Size_4 = (MR_Integer) 0;
  else
  {
    MR_Word LTree_7;
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PSQ_3, (MR_Integer) 0))));
    MR_Integer Var_11;

    LTree_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 2))));
    if ((LTree_7 == (MR_Word) ((MR_Unsigned) 0U)))
      Var_11 = (MR_Integer) 0;
    else
      Var_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), LTree_7, (MR_Integer) 0))));
    *Size_4 = (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) Var_11);
  }
}

void MR_CALL 
mercury__psqueue__at_most_3_p_0(
  MR_Word TypeInfo_for_P_9,
  MR_Word TypeInfo_for_K_10,
  MR_Word PSQ_4,
  MR_Box MaxPrio_5,
  MR_Word * AssocList_6)
{
  if ((PSQ_4 == (MR_Word) ((MR_Unsigned) 0U)))
    *AssocList_6 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word TypeInfo_12_12;
    MR_Word Winner_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PSQ_4, (MR_Integer) 0))));
    MR_Word Cord_8;
    MR_Word conv0_AssocList_6;

    mercury__psqueue__at_most_in_winner_3_p_0(TypeInfo_for_P_9, TypeInfo_for_K_10, Winner_7, MaxPrio_5, &Cord_8);
    {
      TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_12_12, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
      MR_hl_field(MR_mktag(0), TypeInfo_12_12, 1) = ((MR_Box) (TypeInfo_for_P_9));
      MR_hl_field(MR_mktag(0), TypeInfo_12_12, 2) = ((MR_Box) (TypeInfo_for_K_10));
    }
    conv0_AssocList_6 = mercury__cord__to_list_1_f_0(TypeInfo_12_12, (MR_Word) (Cord_8));
    *AssocList_6 = (MR_Word) (conv0_AssocList_6);
  }
}

MR_Word MR_CALL 
mercury__psqueue__at_most_2_f_0(
  MR_Word TypeInfo_for_P_7,
  MR_Word TypeInfo_for_K_8,
  MR_Word PSQ_4,
  MR_Box MaxPrio_5)
{
  {
    MR_Word AssocList_6;

    if ((PSQ_4 == (MR_Word) ((MR_Unsigned) 0U)))
      AssocList_6 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word TypeInfo_12_15;
      MR_Word Winner_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PSQ_4, (MR_Integer) 0))));
      MR_Word Cord_13;
      MR_Word conv0_AssocList_6;

      mercury__psqueue__at_most_in_winner_3_p_0(TypeInfo_for_P_7, TypeInfo_for_K_8, Winner_12, MaxPrio_5, &Cord_13);
      {
        TypeInfo_12_15 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_12_15, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
        MR_hl_field(MR_mktag(0), TypeInfo_12_15, 1) = ((MR_Box) (TypeInfo_for_P_7));
        MR_hl_field(MR_mktag(0), TypeInfo_12_15, 2) = ((MR_Box) (TypeInfo_for_K_8));
      }
      conv0_AssocList_6 = mercury__cord__to_list_1_f_0(TypeInfo_12_15, (MR_Word) (Cord_13));
      AssocList_6 = (MR_Word) (conv0_AssocList_6);
    }
    return AssocList_6;
  }
}

void MR_CALL 
mercury__psqueue__at_most_in_winner_3_p_0(
  MR_Word TypeInfo_for_P_20,
  MR_Word TypeInfo_for_K_21,
  MR_Word Winner_4,
  MR_Box MaxPrio_5,
  MR_Word * Cord_6)
{
  {
    MR_Box WinnerPrio_7 = (MR_hl_field(MR_mktag(0), Winner_4, (MR_Integer) 0));
    MR_Word CMP_11;

    mercury__builtin__compare_3_p_0(TypeInfo_for_P_20, &CMP_11, WinnerPrio_7, MaxPrio_5);
    switch (CMP_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
      case (MR_Integer) 0:
        {
          MR_Word TournamentView_12;

          TournamentView_12 = mercury__psqueue__get_tournament_view_1_f_0(TypeInfo_for_P_20, TypeInfo_for_K_21, Winner_4);
          if (((MR_tag((MR_Word) TournamentView_12)) == (MR_Integer) 0))
          {
            MR_Box SinglePrio_13 = (MR_hl_field(MR_mktag(0), TournamentView_12, (MR_Integer) 0));
            MR_Box SingleKey_14 = (MR_hl_field(MR_mktag(0), TournamentView_12, (MR_Integer) 1));
            MR_Word Var_19;
            MR_Word Var_29;

            {
              Var_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_19, 0) = SinglePrio_13;
              MR_hl_field(MR_mktag(0), Var_19, 1) = SingleKey_14;
            }
            {
              Var_29 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (Var_19));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *Cord_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_29));
            }
          }
          else
          {
            MR_Word TypeInfo_27_27;
            MR_Word WinnerA_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TournamentView_12, (MR_Integer) 0))));
            MR_Word WinnerB_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TournamentView_12, (MR_Integer) 1))));
            MR_Word CordA_17;
            MR_Word CordB_18;
            MR_Word conv0_Cord_6;

            mercury__psqueue__at_most_in_winner_3_p_0(TypeInfo_for_P_20, TypeInfo_for_K_21, WinnerA_15, MaxPrio_5, &CordA_17);
            mercury__psqueue__at_most_in_winner_3_p_0(TypeInfo_for_P_20, TypeInfo_for_K_21, WinnerB_16, MaxPrio_5, &CordB_18);
            {
              TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TypeInfo_27_27, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
              MR_hl_field(MR_mktag(0), TypeInfo_27_27, 1) = ((MR_Box) (TypeInfo_for_P_20));
              MR_hl_field(MR_mktag(0), TypeInfo_27_27, 2) = ((MR_Box) (TypeInfo_for_K_21));
            }
            conv0_Cord_6 = mercury__cord__f_43_43_2_f_0(TypeInfo_27_27, (MR_Word) (CordA_17), (MR_Word) (CordB_18));
            *Cord_6 = (MR_Word) (conv0_Cord_6);
          }
        }
        break;
      case (MR_Integer) 2:
        *Cord_6 = (MR_Word) ((MR_Unsigned) 0U);
        break;
    }
  }
}

MR_Box MR_CALL 
mercury__psqueue__lookup_2_f_0(
  MR_Word TypeInfo_for_P_7,
  MR_Word TypeInfo_for_K_8,
  MR_Word PSQ_4,
  MR_Box SearchKey_5)
{
  {
    MR_Box MatchingPrio_6;

    mercury__psqueue__lookup_3_p_0(TypeInfo_for_P_7, TypeInfo_for_K_8, PSQ_4, SearchKey_5, &MatchingPrio_6);
    return MatchingPrio_6;
  }
}

void MR_CALL 
mercury__psqueue__lookup_3_p_0(
  MR_Word TypeInfo_for_P_11,
  MR_Word TypeInfo_for_K_12,
  MR_Word PSQ_4,
  MR_Box SearchKey_5,
  MR_Box * MatchingPrio_6)
{
  {
    MR_bool succeeded = (PSQ_4 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Box MatchingPrioPrime_7;
    MR_Word Winner_16;
    MR_Word Var_17;

    if (succeeded)
    {
      Winner_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PSQ_4, (MR_Integer) 0))));
      Var_17 = mercury__psqueue__get_tournament_view_1_f_0(TypeInfo_for_P_11, TypeInfo_for_K_12, Winner_16);
      succeeded = mercury__psqueue__search_tv_3_p_0(TypeInfo_for_P_11, TypeInfo_for_K_12, Var_17, SearchKey_5, &MatchingPrioPrime_7);
    }
    if (succeeded)
      *MatchingPrio_6 = MatchingPrioPrime_7;
    else
      {
        mercury__require__unexpected_3_p_0((MR_String) "psqueue.m", (MR_String) "predicate \140psqueue.lookup\'/3", (MR_String) "key not found");
        return;
      }
  }
}

MR_bool MR_CALL 
mercury__psqueue__search_3_p_0(
  MR_Word TypeInfo_for_P_9,
  MR_Word TypeInfo_for_K_10,
  MR_Word PSQ_4,
  MR_Box SearchKey_5,
  MR_Box * MatchingPrio_6)
{
  {
    MR_bool succeeded = (PSQ_4 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Winner_7;
    MR_Word Var_8;

    if (succeeded)
    {
      Winner_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PSQ_4, (MR_Integer) 0))));
      Var_8 = mercury__psqueue__get_tournament_view_1_f_0(TypeInfo_for_P_9, TypeInfo_for_K_10, Winner_7);
      succeeded = mercury__psqueue__search_tv_3_p_0(TypeInfo_for_P_9, TypeInfo_for_K_10, Var_8, SearchKey_5, MatchingPrio_6);
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__psqueue__search_tv_3_p_0(
  MR_Word TypeInfo_for_P_17,
  MR_Word TypeInfo_for_K_18,
  MR_Word TournamentView_4,
  MR_Box SearchKey_5,
  MR_Box * MatchingPrio_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) TournamentView_4)) == (MR_Integer) 0))
    {
      MR_Box Key_8;

      *MatchingPrio_6 = (MR_hl_field(MR_mktag(0), TournamentView_4, (MR_Integer) 0));
      Key_8 = (MR_hl_field(MR_mktag(0), TournamentView_4, (MR_Integer) 1));
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_K_18, Key_8, SearchKey_5);
    }
    else
    {
      MR_Word WinnerA_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TournamentView_4, (MR_Integer) 0))));
      MR_Word WinnerB_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TournamentView_4, (MR_Integer) 1))));
      MR_Box MaxKeyA_14 = (MR_hl_field(MR_mktag(0), WinnerA_9, (MR_Integer) 3));
      MR_Word CMP_21;

      mercury__builtin__compare_3_p_0(TypeInfo_for_K_18, &CMP_21, SearchKey_5, MaxKeyA_14);
      switch (CMP_21) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 1:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 0:
          succeeded = MR_TRUE;
          break;
      }
      if (succeeded)
      {
        MR_Word Var_15;
        MR_Word next_value_of_TournamentView_4;

        Var_15 = mercury__psqueue__get_tournament_view_1_f_0(TypeInfo_for_P_17, TypeInfo_for_K_18, WinnerA_9);
        // direct tailcall eliminated
        ;
        next_value_of_TournamentView_4 = Var_15;
        TournamentView_4 = next_value_of_TournamentView_4;
        continue;
      }
      else
      {
        MR_Word Var_16;
        MR_Word next_value_of_TournamentView_4;

        Var_16 = mercury__psqueue__get_tournament_view_1_f_0(TypeInfo_for_P_17, TypeInfo_for_K_18, WinnerB_10);
        // direct tailcall eliminated
        ;
        next_value_of_TournamentView_4 = Var_16;
        TournamentView_4 = next_value_of_TournamentView_4;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__psqueue__adjust_4_p_0(
  MR_Word TypeInfo_for_P_14,
  MR_Word TypeInfo_for_K_15,
  MR_Word AdjustFunc_5,
  MR_Box SearchKey_6,
  MR_Word STATE_VARIABLE_PSQ_0_10,
  MR_Word * STATE_VARIABLE_PSQ_11)
{
  {
    MR_bool succeeded = (STATE_VARIABLE_PSQ_0_10 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Winner0_8;
    MR_Word Winner_9;
    MR_Word Var_12;

    if (succeeded)
    {
      Winner0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PSQ_0_10, (MR_Integer) 0))));
      Var_12 = mercury__psqueue__get_tournament_view_1_f_0(TypeInfo_for_P_14, TypeInfo_for_K_15, Winner0_8);
      succeeded = mercury__psqueue__adjust_tv_4_p_0(TypeInfo_for_P_14, TypeInfo_for_K_15, AdjustFunc_5, SearchKey_6, Var_12, &Winner_9);
      if (succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_PSQ_11 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Winner_9));
        }
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__psqueue__adjust_tv_4_p_0(
  MR_Word TypeInfo_for_P_22,
  MR_Word TypeInfo_for_K_23,
  MR_Word AdjustFunc_5,
  MR_Box SearchKey_6,
  MR_Word TournamentView_7,
  MR_Word * Winner_8)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) TournamentView_7)) == (MR_Integer) 0))
    {
      MR_Box Prio_9 = (MR_hl_field(MR_mktag(0), TournamentView_7, (MR_Integer) 0));
      MR_Box Key_10 = (MR_hl_field(MR_mktag(0), TournamentView_7, (MR_Integer) 1));
      MR_Box Var_21;
      MR_Word Var_26;
      MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);

      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_K_23, Key_10, SearchKey_6);
      if (succeeded)
      {
        func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), AdjustFunc_5, (MR_Integer) 1))));
        Var_21 = func_0(((MR_Box) (AdjustFunc_5)), Prio_9);
        Var_26 = (MR_Word) ((MR_Unsigned) 0U);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          *Winner_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = Var_21;
          MR_hl_field(MR_mktag(0), base, 1) = Key_10;
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_26));
          MR_hl_field(MR_mktag(0), base, 3) = Key_10;
        }
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Word WinnerA_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TournamentView_7, (MR_Integer) 0))));
      MR_Word WinnerB_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TournamentView_7, (MR_Integer) 1))));
      MR_Box MaxKeyA_16 = (MR_hl_field(MR_mktag(0), WinnerA_11, (MR_Integer) 3));
      MR_Word CMP_30;

      mercury__builtin__compare_3_p_0(TypeInfo_for_K_23, &CMP_30, SearchKey_6, MaxKeyA_16);
      switch (CMP_30) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 1:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 0:
          succeeded = MR_TRUE;
          break;
      }
      if (succeeded)
      {
        MR_Word UpdatedWinnerA_17;
        MR_Word Var_19;

        Var_19 = mercury__psqueue__get_tournament_view_1_f_0(TypeInfo_for_P_22, TypeInfo_for_K_23, WinnerA_11);
        succeeded = mercury__psqueue__adjust_tv_4_p_0(TypeInfo_for_P_22, TypeInfo_for_K_23, AdjustFunc_5, SearchKey_6, Var_19, &UpdatedWinnerA_17);
        if (succeeded)
        {
          mercury__psqueue__combine_winners_via_tournament_3_p_0(TypeInfo_for_P_22, TypeInfo_for_K_23, UpdatedWinnerA_17, WinnerB_12, Winner_8);
          succeeded = MR_TRUE;
        }
      }
      else
      {
        MR_Word UpdatedWinnerB_18;
        MR_Word Var_20;

        Var_20 = mercury__psqueue__get_tournament_view_1_f_0(TypeInfo_for_P_22, TypeInfo_for_K_23, WinnerB_12);
        succeeded = mercury__psqueue__adjust_tv_4_p_0(TypeInfo_for_P_22, TypeInfo_for_K_23, AdjustFunc_5, SearchKey_6, Var_20, &UpdatedWinnerB_18);
        if (succeeded)
        {
          mercury__psqueue__combine_winners_via_tournament_3_p_0(TypeInfo_for_P_22, TypeInfo_for_K_23, WinnerA_11, UpdatedWinnerB_18, Winner_8);
          succeeded = MR_TRUE;
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__psqueue__det_remove_4_p_0(
  MR_Word TypeInfo_for_P_16,
  MR_Word TypeInfo_for_K_17,
  MR_Box * MatchingPrio_5,
  MR_Box SearchKey_6,
  MR_Word STATE_VARIABLE_PSQ_0_9,
  MR_Word * STATE_VARIABLE_PSQ_10)
{
  {
    MR_bool succeeded = (STATE_VARIABLE_PSQ_0_9 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Box MatchingPrioPrime_8;
    MR_Word STATE_VARIABLE_PSQ_11_11;
    MR_Word Winner0_23;
    MR_Word Var_24;

    if (succeeded)
    {
      Winner0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PSQ_0_9, (MR_Integer) 0))));
      Var_24 = mercury__psqueue__get_tournament_view_1_f_0(TypeInfo_for_P_16, TypeInfo_for_K_17, Winner0_23);
      succeeded = mercury__psqueue__remove_tv_4_p_0(TypeInfo_for_P_16, TypeInfo_for_K_17, &MatchingPrioPrime_8, SearchKey_6, Var_24, &STATE_VARIABLE_PSQ_11_11);
    }
    if (succeeded)
    {
      *STATE_VARIABLE_PSQ_10 = STATE_VARIABLE_PSQ_11_11;
      *MatchingPrio_5 = MatchingPrioPrime_8;
    }
    else
      {
        mercury__require__unexpected_3_p_0((MR_String) "psqueue.m", (MR_String) "predicate \140psqueue.det_remove\'/4", (MR_String) "element not found");
        return;
      }
  }
}

MR_bool MR_CALL 
mercury__psqueue__remove_4_p_0(
  MR_Word TypeInfo_for_P_13,
  MR_Word TypeInfo_for_K_14,
  MR_Box * MatchingPrio_5,
  MR_Box SearchKey_6,
  MR_Word STATE_VARIABLE_PSQ_0_9,
  MR_Word * STATE_VARIABLE_PSQ_10)
{
  {
    MR_bool succeeded = (STATE_VARIABLE_PSQ_0_9 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Winner0_8;
    MR_Word Var_11;

    if (succeeded)
    {
      Winner0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PSQ_0_9, (MR_Integer) 0))));
      Var_11 = mercury__psqueue__get_tournament_view_1_f_0(TypeInfo_for_P_13, TypeInfo_for_K_14, Winner0_8);
      succeeded = mercury__psqueue__remove_tv_4_p_0(TypeInfo_for_P_13, TypeInfo_for_K_14, MatchingPrio_5, SearchKey_6, Var_11, STATE_VARIABLE_PSQ_10);
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__psqueue__remove_tv_4_p_0(
  MR_Word TypeInfo_for_P_22,
  MR_Word TypeInfo_for_K_23,
  MR_Box * MatchingPrio_5,
  MR_Box SearchKey_6,
  MR_Word TournamentView_7,
  MR_Word * PSQ_8)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) TournamentView_7)) == (MR_Integer) 0))
    {
      MR_Box Key_10;

      *MatchingPrio_5 = (MR_hl_field(MR_mktag(0), TournamentView_7, (MR_Integer) 0));
      Key_10 = (MR_hl_field(MR_mktag(0), TournamentView_7, (MR_Integer) 1));
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_K_23, Key_10, SearchKey_6);
      if (succeeded)
      {
        *PSQ_8 = (MR_Word) ((MR_Unsigned) 0U);
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Word WinnerA_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TournamentView_7, (MR_Integer) 0))));
      MR_Word WinnerB_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TournamentView_7, (MR_Integer) 1))));
      MR_Box MaxKeyA_16 = (MR_hl_field(MR_mktag(0), WinnerA_11, (MR_Integer) 3));
      MR_Word CombinedWinner_18;
      MR_Word CMP_26;

      mercury__builtin__compare_3_p_0(TypeInfo_for_K_23, &CMP_26, SearchKey_6, MaxKeyA_16);
      switch (CMP_26) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 1:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 0:
          succeeded = MR_TRUE;
          break;
      }
      if (succeeded)
      {
        MR_Word UpdatedPSQA_17;
        MR_Word Var_20;

        Var_20 = mercury__psqueue__get_tournament_view_1_f_0(TypeInfo_for_P_22, TypeInfo_for_K_23, WinnerA_11);
        succeeded = mercury__psqueue__remove_tv_4_p_0(TypeInfo_for_P_22, TypeInfo_for_K_23, MatchingPrio_5, SearchKey_6, Var_20, &UpdatedPSQA_17);
        if (succeeded)
        {
          if ((UpdatedPSQA_17 == (MR_Word) ((MR_Unsigned) 0U)))
            CombinedWinner_18 = WinnerB_12;
          else
          {
            MR_Word WinnerA_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), UpdatedPSQA_17, (MR_Integer) 0))));

            mercury__psqueue__combine_winners_via_tournament_3_p_0(TypeInfo_for_P_22, TypeInfo_for_K_23, WinnerA_30, WinnerB_12, &CombinedWinner_18);
          }
          succeeded = MR_TRUE;
        }
      }
      else
      {
        MR_Word UpdatedPSQB_19;
        MR_Word Var_21;

        Var_21 = mercury__psqueue__get_tournament_view_1_f_0(TypeInfo_for_P_22, TypeInfo_for_K_23, WinnerB_12);
        succeeded = mercury__psqueue__remove_tv_4_p_0(TypeInfo_for_P_22, TypeInfo_for_K_23, MatchingPrio_5, SearchKey_6, Var_21, &UpdatedPSQB_19);
        if (succeeded)
        {
          if ((UpdatedPSQB_19 == (MR_Word) ((MR_Unsigned) 0U)))
            CombinedWinner_18 = WinnerA_11;
          else
          {
            MR_Word WinnerB_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), UpdatedPSQB_19, (MR_Integer) 0))));

            mercury__psqueue__combine_winners_via_tournament_3_p_0(TypeInfo_for_P_22, TypeInfo_for_K_23, WinnerA_11, WinnerB_34, &CombinedWinner_18);
          }
          succeeded = MR_TRUE;
        }
      }
      if (succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *PSQ_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (CombinedWinner_18));
        }
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__psqueue__from_assoc_list_2_p_0(
  MR_Word TypeInfo_for_P_6,
  MR_Word TypeInfo_for_K_7,
  MR_Word AssocList_3,
  MR_Word * PSQ_4)
{
  mercury__psqueue__from_assoc_list_loop_3_p_0(TypeInfo_for_P_6, TypeInfo_for_K_7, AssocList_3, (MR_Word) ((MR_Unsigned) 0U), PSQ_4);
}

MR_Word MR_CALL 
mercury__psqueue__from_assoc_list_1_f_0(
  MR_Word TypeInfo_for_P_5,
  MR_Word TypeInfo_for_K_6,
  MR_Word AssocList_3)
{
  {
    MR_Word PSQ_4;

    mercury__psqueue__from_assoc_list_loop_3_p_0(TypeInfo_for_P_5, TypeInfo_for_K_6, AssocList_3, (MR_Word) ((MR_Unsigned) 0U), &PSQ_4);
    return PSQ_4;
  }
}

void MR_CALL 
mercury__psqueue__from_assoc_list_loop_3_p_0(
  MR_Word TypeInfo_for_P_16,
  MR_Word TypeInfo_for_K_17,
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_PSQ_0_2,
  MR_Word * STATE_VARIABLE_PSQ_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_PSQ_3 = STATE_VARIABLE_PSQ_0_2;
    else
    {
      MR_Box Prio_7;
      MR_Box Key_8;
      MR_Word PriosKeys_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_PSQ_14_14;
      MR_Word STATE_VARIABLE_PSQ_10_23;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_PSQ_0_2;

      Prio_7 = (MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 0));
      Key_8 = (MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 1));
      succeeded = mercury__psqueue__insert_4_p_0(TypeInfo_for_P_16, TypeInfo_for_K_17, Prio_7, Key_8, STATE_VARIABLE_PSQ_0_2, &STATE_VARIABLE_PSQ_10_23);
      if (succeeded)
        STATE_VARIABLE_PSQ_14_14 = STATE_VARIABLE_PSQ_10_23;
      else
        {
          mercury__require__unexpected_3_p_0((MR_String) "psqueue.m", (MR_String) "predicate \140psqueue.det_insert\'/4", (MR_String) "key being inserted is already present");
          return;
        }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = PriosKeys_9;
      next_value_of_STATE_VARIABLE_PSQ_0_2 = STATE_VARIABLE_PSQ_14_14;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_PSQ_0_2 = next_value_of_STATE_VARIABLE_PSQ_0_2;
      continue;
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__psqueue__to_assoc_list_1_f_0(
  MR_Word TypeInfo_for_P_5,
  MR_Word TypeInfo_for_K_6,
  MR_Word PSQ_3)
{
  {
    MR_Word AssocList_4;

    mercury__psqueue__to_assoc_list_2_p_0(TypeInfo_for_P_5, TypeInfo_for_K_6, PSQ_3, &AssocList_4);
    return AssocList_4;
  }
}

void MR_CALL 
mercury__psqueue__to_assoc_list_2_p_0(
  MR_Word TypeInfo_for_P_10,
  MR_Word TypeInfo_for_K_11,
  MR_Word PSQ0_3,
  MR_Word * AssocList_4)
{
  {
    MR_bool succeeded = (PSQ0_3 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Box K_5;
    MR_Box P_6;
    MR_Word PSQ1_7;
    MR_Word LTree_17;
    MR_Box MaxKey_18;
    MR_Word Var_19;

    if (succeeded)
    {
      Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PSQ0_3, (MR_Integer) 0))));
      K_5 = (MR_hl_field(MR_mktag(0), Var_19, (MR_Integer) 0));
      P_6 = (MR_hl_field(MR_mktag(0), Var_19, (MR_Integer) 1));
      LTree_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_19, (MR_Integer) 2))));
      MaxKey_18 = (MR_hl_field(MR_mktag(0), Var_19, (MR_Integer) 3));
      PSQ1_7 = mercury__psqueue__convert_loser_tree_to_psqueue_2_f_0(TypeInfo_for_P_10, TypeInfo_for_K_11, LTree_17, MaxKey_18);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Var_9;
      MR_Word * AddrAssocListTail_21;

      {
        Var_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_9, 0) = K_5;
        MR_hl_field(MR_mktag(0), Var_9, 1) = P_6;
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *AssocList_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_9));
        MR_hl_field(MR_mktag(1), base, 1) = NULL;
      }
      AddrAssocListTail_21 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *AssocList_4, (MR_Integer) 1)));
      mercury__psqueue__LCMCpr_to_assoc_list_1_2_p_0(TypeInfo_for_P_10, TypeInfo_for_K_11, PSQ1_7, AddrAssocListTail_21);
    }
    else
      *AssocList_4 = (MR_Word) ((MR_Unsigned) 0U);
  }
}

void MR_CALL 
mercury__psqueue__LCMCpr_to_assoc_list_1_2_p_0(
  MR_Word TypeInfo_for_P_10,
  MR_Word TypeInfo_for_K_11,
  MR_Word PSQ0_3,
  MR_Word * AddrOfAssocList_22)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (PSQ0_3 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Box K_5;
    MR_Box P_6;
    MR_Word PSQ1_7;
    MR_Word LTree_17;
    MR_Box MaxKey_18;
    MR_Word Var_19;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PSQ0_3, (MR_Integer) 0))));
      K_5 = (MR_hl_field(MR_mktag(0), Var_19, (MR_Integer) 0));
      P_6 = (MR_hl_field(MR_mktag(0), Var_19, (MR_Integer) 1));
      LTree_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_19, (MR_Integer) 2))));
      MaxKey_18 = (MR_hl_field(MR_mktag(0), Var_19, (MR_Integer) 3));
      PSQ1_7 = mercury__psqueue__convert_loser_tree_to_psqueue_2_f_0(TypeInfo_for_P_10, TypeInfo_for_K_11, LTree_17, MaxKey_18);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Var_9;
      MR_Word AssocList_4;
      MR_Word * AddrAssocListTail_21;
      MR_Word next_value_of_PSQ0_3;
      MR_Word * next_value_of_AddrOfAssocList_22;

      {
        Var_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_9, 0) = K_5;
        MR_hl_field(MR_mktag(0), Var_9, 1) = P_6;
      }
      {
        AssocList_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), AssocList_4, 0) = ((MR_Box) (Var_9));
        MR_hl_field(MR_mktag(1), AssocList_4, 1) = NULL;
      }
      AddrAssocListTail_21 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), AssocList_4, (MR_Integer) 1)));
      *AddrOfAssocList_22 = AssocList_4;
      // direct tailcall eliminated
      ;
      next_value_of_PSQ0_3 = PSQ1_7;
      next_value_of_AddrOfAssocList_22 = AddrAssocListTail_21;
      PSQ0_3 = next_value_of_PSQ0_3;
      AddrOfAssocList_22 = next_value_of_AddrOfAssocList_22;
      continue;
    }
    else
      *AddrOfAssocList_22 = (MR_Word) ((MR_Unsigned) 0U);
    break;
  }
}

void MR_CALL 
mercury__psqueue__det_remove_least_4_p_0(
  MR_Word TypeInfo_for_P_17,
  MR_Word TypeInfo_for_K_18,
  MR_Box * MinPrio_5,
  MR_Box * MinKey_6,
  MR_Word STATE_VARIABLE_PSQ_0_10,
  MR_Word * STATE_VARIABLE_PSQ_11)
{
  {
    MR_bool succeeded = (STATE_VARIABLE_PSQ_0_10 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Box MinPrioPrime_8;
    MR_Box MinKeyPrime_9;
    MR_Word STATE_VARIABLE_PSQ_12_12;
    MR_Word LTree_24;
    MR_Box MaxKey_25;
    MR_Word Var_26;

    if (succeeded)
    {
      Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PSQ_0_10, (MR_Integer) 0))));
      MinPrioPrime_8 = (MR_hl_field(MR_mktag(0), Var_26, (MR_Integer) 0));
      MinKeyPrime_9 = (MR_hl_field(MR_mktag(0), Var_26, (MR_Integer) 1));
      LTree_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_26, (MR_Integer) 2))));
      MaxKey_25 = (MR_hl_field(MR_mktag(0), Var_26, (MR_Integer) 3));
      STATE_VARIABLE_PSQ_12_12 = mercury__psqueue__convert_loser_tree_to_psqueue_2_f_0(TypeInfo_for_P_17, TypeInfo_for_K_18, LTree_24, MaxKey_25);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      *STATE_VARIABLE_PSQ_11 = STATE_VARIABLE_PSQ_12_12;
      *MinKey_6 = MinKeyPrime_9;
      *MinPrio_5 = MinPrioPrime_8;
    }
    else
      {
        mercury__require__unexpected_3_p_0((MR_String) "psqueue.m", (MR_String) "predicate \140psqueue.det_remove_least\'/4", (MR_String) "priority search queue is empty");
        return;
      }
  }
}

MR_bool MR_CALL 
mercury__psqueue__remove_least_4_p_0(
  MR_Word TypeInfo_for_P_14,
  MR_Word TypeInfo_for_K_15,
  MR_Box * MinPrio_5,
  MR_Box * MinKey_6,
  MR_Word STATE_VARIABLE_PSQ_0_10,
  MR_Word * STATE_VARIABLE_PSQ_11)
{
  {
    MR_bool succeeded = (STATE_VARIABLE_PSQ_0_10 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word LTree_8;
    MR_Box MaxKey_9;
    MR_Word Var_12;

    if (succeeded)
    {
      Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PSQ_0_10, (MR_Integer) 0))));
      *MinPrio_5 = (MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 0));
      *MinKey_6 = (MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 1));
      LTree_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 2))));
      MaxKey_9 = (MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 3));
      *STATE_VARIABLE_PSQ_11 = mercury__psqueue__convert_loser_tree_to_psqueue_2_f_0(TypeInfo_for_P_14, TypeInfo_for_K_15, LTree_8, MaxKey_9);
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

MR_Word MR_CALL 
mercury__psqueue__convert_loser_tree_to_psqueue_2_f_0(
  MR_Word TypeInfo_for_P_17,
  MR_Word TypeInfo_for_K_18,
  MR_Word LTree_4,
  MR_Box MaxKey_5)
{
  {
    MR_bool succeeded;
    MR_Word PSQ_6;

    if ((LTree_4 == (MR_Word) ((MR_Unsigned) 0U)))
      PSQ_6 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Box LoserPrio_8 = (MR_hl_field(MR_mktag(1), LTree_4, (MR_Integer) 1));
      MR_Box LoserKey_9 = (MR_hl_field(MR_mktag(1), LTree_4, (MR_Integer) 2));
      MR_Word SubLTreeL_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LTree_4, (MR_Integer) 3))));
      MR_Box SplitKey_11 = (MR_hl_field(MR_mktag(1), LTree_4, (MR_Integer) 4));
      MR_Word SubLTreeR_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LTree_4, (MR_Integer) 5))));
      MR_Word PSQA_14;
      MR_Word PSQB_15;
      MR_Word CMP_21;

      mercury__builtin__compare_3_p_0(TypeInfo_for_K_18, &CMP_21, LoserKey_9, SplitKey_11);
      switch (CMP_21) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 1:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 0:
          succeeded = MR_TRUE;
          break;
      }
      if (succeeded)
      {
        MR_Word WinnerA_13;

        {
          WinnerA_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), WinnerA_13, 0) = LoserPrio_8;
          MR_hl_field(MR_mktag(0), WinnerA_13, 1) = LoserKey_9;
          MR_hl_field(MR_mktag(0), WinnerA_13, 2) = ((MR_Box) (SubLTreeL_10));
          MR_hl_field(MR_mktag(0), WinnerA_13, 3) = SplitKey_11;
        }
        {
          PSQA_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), PSQA_14, 0) = ((MR_Box) (WinnerA_13));
        }
        PSQB_15 = mercury__psqueue__convert_loser_tree_to_psqueue_2_f_0(TypeInfo_for_P_17, TypeInfo_for_K_18, SubLTreeR_12, MaxKey_5);
      }
      else
      {
        MR_Word WinnerB_16;

        PSQA_14 = mercury__psqueue__convert_loser_tree_to_psqueue_2_f_0(TypeInfo_for_P_17, TypeInfo_for_K_18, SubLTreeL_10, SplitKey_11);
        {
          WinnerB_16 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), WinnerB_16, 0) = LoserPrio_8;
          MR_hl_field(MR_mktag(0), WinnerB_16, 1) = LoserKey_9;
          MR_hl_field(MR_mktag(0), WinnerB_16, 2) = ((MR_Box) (SubLTreeR_12));
          MR_hl_field(MR_mktag(0), WinnerB_16, 3) = MaxKey_5;
        }
        {
          PSQB_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), PSQB_15, 0) = ((MR_Box) (WinnerB_16));
        }
      }
      if ((PSQA_14 == (MR_Word) ((MR_Unsigned) 0U)))
        PSQ_6 = PSQB_15;
      else
      {
        MR_Word WinnerA_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PSQA_14, (MR_Integer) 0))));

        if ((PSQB_15 == (MR_Word) ((MR_Unsigned) 0U)))
          PSQ_6 = PSQA_14;
        else
        {
          MR_Word WinnerB_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PSQB_15, (MR_Integer) 0))));
          MR_Word CombinedWinner_27;

          mercury__psqueue__combine_winners_via_tournament_3_p_0(TypeInfo_for_P_17, TypeInfo_for_K_18, WinnerA_25, WinnerB_26, &CombinedWinner_27);
          {
            PSQ_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), PSQ_6, 0) = ((MR_Box) (CombinedWinner_27));
          }
        }
      }
    }
    return PSQ_6;
  }
}

void MR_CALL 
mercury__psqueue__det_peek_3_p_0(
  MR_Word TypeInfo_for_P_12,
  MR_Word TypeInfo_for_K_13,
  MR_Word PSQ_4,
  MR_Box * MinPrio_5,
  MR_Box * MinKey_6)
{
  {
    MR_bool succeeded = (PSQ_4 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Box MinPrioPrime_7;
    MR_Box MinKeyPrime_8;
    MR_Word Var_19;

    if (succeeded)
    {
      Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PSQ_4, (MR_Integer) 0))));
      MinPrioPrime_7 = (MR_hl_field(MR_mktag(0), Var_19, (MR_Integer) 0));
      MinKeyPrime_8 = (MR_hl_field(MR_mktag(0), Var_19, (MR_Integer) 1));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      *MinKey_6 = MinKeyPrime_8;
      *MinPrio_5 = MinPrioPrime_7;
    }
    else
      {
        mercury__require__unexpected_3_p_0((MR_String) "psqueue.m", (MR_String) "predicate \140psqueue.det_peek\'/3", (MR_String) "priority search queue is empty");
        return;
      }
  }
}

MR_bool MR_CALL 
mercury__psqueue__peek_3_p_0(
  MR_Word TypeInfo_for_P_10,
  MR_Word TypeInfo_for_K_11,
  MR_Word PSQ_4,
  MR_Box * MinPrio_5,
  MR_Box * MinKey_6)
{
  {
    MR_bool succeeded = (PSQ_4 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Var_9;

    if (succeeded)
    {
      Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PSQ_4, (MR_Integer) 0))));
      *MinPrio_5 = (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0));
      *MinKey_6 = (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__psqueue__det_insert_4_p_0(
  MR_Word TypeInfo_for_P_15,
  MR_Word TypeInfo_for_K_16,
  MR_Box InsertPrio_5,
  MR_Box InsertKey_6,
  MR_Word STATE_VARIABLE_PSQ_0_8,
  MR_Word * STATE_VARIABLE_PSQ_9)
{
  {
    MR_bool succeeded;
    MR_Word STATE_VARIABLE_PSQ_10_10;

    succeeded = mercury__psqueue__insert_4_p_0(TypeInfo_for_P_15, TypeInfo_for_K_16, InsertPrio_5, InsertKey_6, STATE_VARIABLE_PSQ_0_8, &STATE_VARIABLE_PSQ_10_10);
    if (succeeded)
      *STATE_VARIABLE_PSQ_9 = STATE_VARIABLE_PSQ_10_10;
    else
      {
        mercury__require__unexpected_3_p_0((MR_String) "psqueue.m", (MR_String) "predicate \140psqueue.det_insert\'/4", (MR_String) "key being inserted is already present");
        return;
      }
  }
}

MR_Word MR_CALL 
mercury__psqueue__det_insert_3_f_0(
  MR_Word TypeInfo_for_P_9,
  MR_Word TypeInfo_for_K_10,
  MR_Word PSQ0_5,
  MR_Box InsertPrio_6,
  MR_Box InsertKey_7)
{
  {
    MR_bool succeeded;
    MR_Word PSQ_8;
    MR_Word STATE_VARIABLE_PSQ_10_16;

    succeeded = mercury__psqueue__insert_4_p_0(TypeInfo_for_P_9, TypeInfo_for_K_10, InsertPrio_6, InsertKey_7, PSQ0_5, &STATE_VARIABLE_PSQ_10_16);
    if (succeeded)
      PSQ_8 = STATE_VARIABLE_PSQ_10_16;
    else
      mercury__require__unexpected_3_p_0((MR_String) "psqueue.m", (MR_String) "predicate \140psqueue.det_insert\'/4", (MR_String) "key being inserted is already present");
    return PSQ_8;
  }
}

MR_bool MR_CALL 
mercury__psqueue__insert_4_p_0(
  MR_Word TypeInfo_for_P_15,
  MR_Word TypeInfo_for_K_16,
  MR_Box InsertPrio_5,
  MR_Box InsertKey_6,
  MR_Word STATE_VARIABLE_PSQ_0_10,
  MR_Word * STATE_VARIABLE_PSQ_11)
{
  {
    MR_bool succeeded;

    if ((STATE_VARIABLE_PSQ_0_10 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_23;

      {
        Var_23 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_23, 0) = InsertPrio_5;
        MR_hl_field(MR_mktag(0), Var_23, 1) = InsertKey_6;
        MR_hl_field(MR_mktag(0), Var_23, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Var_23, 3) = InsertKey_6;
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_PSQ_11 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_23));
      }
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Winner0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PSQ_0_10, (MR_Integer) 0))));
      MR_Word Winner_9;
      MR_Word Var_12;

      Var_12 = mercury__psqueue__get_tournament_view_1_f_0(TypeInfo_for_P_15, TypeInfo_for_K_16, Winner0_8);
      succeeded = mercury__psqueue__insert_tv_4_p_0(TypeInfo_for_P_15, TypeInfo_for_K_16, InsertPrio_5, InsertKey_6, Var_12, &Winner_9);
      if (succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_PSQ_11 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Winner_9));
        }
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__psqueue__insert_tv_4_p_0(
  MR_Word TypeInfo_for_P_28,
  MR_Word TypeInfo_for_K_29,
  MR_Box InsertPrio_5,
  MR_Box InsertKey_6,
  MR_Word TV_7,
  MR_Word * Winner_8)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) TV_7)) == (MR_Integer) 0))
    {
      MR_Box Prio_9 = (MR_hl_field(MR_mktag(0), TV_7, (MR_Integer) 0));
      MR_Box Key_10 = (MR_hl_field(MR_mktag(0), TV_7, (MR_Integer) 1));
      MR_Word CMP_11;
      MR_Word WinnerA_12;
      MR_Word WinnerB_13;

      mercury__builtin__compare_3_p_0(TypeInfo_for_K_29, &CMP_11, InsertKey_6, Key_10);
      switch (CMP_11) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 1:
          {
            {
              WinnerA_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), WinnerA_12, 0) = InsertPrio_5;
              MR_hl_field(MR_mktag(0), WinnerA_12, 1) = InsertKey_6;
              MR_hl_field(MR_mktag(0), WinnerA_12, 2) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), WinnerA_12, 3) = InsertKey_6;
            }
            {
              WinnerB_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), WinnerB_13, 0) = Prio_9;
              MR_hl_field(MR_mktag(0), WinnerB_13, 1) = Key_10;
              MR_hl_field(MR_mktag(0), WinnerB_13, 2) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), WinnerB_13, 3) = Key_10;
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 2:
          {
            {
              WinnerA_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), WinnerA_12, 0) = Prio_9;
              MR_hl_field(MR_mktag(0), WinnerA_12, 1) = Key_10;
              MR_hl_field(MR_mktag(0), WinnerA_12, 2) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), WinnerA_12, 3) = Key_10;
            }
            {
              WinnerB_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), WinnerB_13, 0) = InsertPrio_5;
              MR_hl_field(MR_mktag(0), WinnerB_13, 1) = InsertKey_6;
              MR_hl_field(MR_mktag(0), WinnerB_13, 2) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), WinnerB_13, 3) = InsertKey_6;
            }
            succeeded = MR_TRUE;
          }
          break;
      }
      if (succeeded)
      {
        mercury__psqueue__combine_winners_via_tournament_3_p_0(TypeInfo_for_P_28, TypeInfo_for_K_29, WinnerA_12, WinnerB_13, Winner_8);
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Box MaxKeyA_17;
      MR_Word WinnerA_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TV_7, (MR_Integer) 0))));
      MR_Word WinnerB_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TV_7, (MR_Integer) 1))));
      MR_Word CMP_48;

      MaxKeyA_17 = (MR_hl_field(MR_mktag(0), WinnerA_26, (MR_Integer) 3));
      mercury__builtin__compare_3_p_0(TypeInfo_for_K_29, &CMP_48, InsertKey_6, MaxKeyA_17);
      switch (CMP_48) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 1:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 0:
          succeeded = MR_TRUE;
          break;
      }
      if (succeeded)
      {
        MR_Word UpdatedWinnerA_22;
        MR_Word Var_24;

        Var_24 = mercury__psqueue__get_tournament_view_1_f_0(TypeInfo_for_P_28, TypeInfo_for_K_29, WinnerA_26);
        succeeded = mercury__psqueue__insert_tv_4_p_0(TypeInfo_for_P_28, TypeInfo_for_K_29, InsertPrio_5, InsertKey_6, Var_24, &UpdatedWinnerA_22);
        if (succeeded)
        {
          mercury__psqueue__combine_winners_via_tournament_3_p_0(TypeInfo_for_P_28, TypeInfo_for_K_29, UpdatedWinnerA_22, WinnerB_27, Winner_8);
          succeeded = MR_TRUE;
        }
      }
      else
      {
        MR_Word UpdatedWinnerB_23;
        MR_Word Var_25;

        Var_25 = mercury__psqueue__get_tournament_view_1_f_0(TypeInfo_for_P_28, TypeInfo_for_K_29, WinnerB_27);
        succeeded = mercury__psqueue__insert_tv_4_p_0(TypeInfo_for_P_28, TypeInfo_for_K_29, InsertPrio_5, InsertKey_6, Var_25, &UpdatedWinnerB_23);
        if (succeeded)
        {
          mercury__psqueue__combine_winners_via_tournament_3_p_0(TypeInfo_for_P_28, TypeInfo_for_K_29, WinnerA_26, UpdatedWinnerB_23, Winner_8);
          succeeded = MR_TRUE;
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__psqueue__combine_winners_via_tournament_3_p_0(
  MR_Word TypeInfo_for_P_17,
  MR_Word TypeInfo_for_K_18,
  MR_Word WinnerA_4,
  MR_Word WinnerB_5,
  MR_Word * CombinedWinner_6)
{
  {
    MR_bool succeeded;
    MR_Box PrioA_7 = (MR_hl_field(MR_mktag(0), WinnerA_4, (MR_Integer) 0));
    MR_Box KeyA_8 = (MR_hl_field(MR_mktag(0), WinnerA_4, (MR_Integer) 1));
    MR_Word LTreeA_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), WinnerA_4, (MR_Integer) 2))));
    MR_Box MaxKeyA_10 = (MR_hl_field(MR_mktag(0), WinnerA_4, (MR_Integer) 3));
    MR_Box PrioB_11 = (MR_hl_field(MR_mktag(0), WinnerB_5, (MR_Integer) 0));
    MR_Box KeyB_12 = (MR_hl_field(MR_mktag(0), WinnerB_5, (MR_Integer) 1));
    MR_Word LTreeB_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), WinnerB_5, (MR_Integer) 2))));
    MR_Box MaxKeyB_14 = (MR_hl_field(MR_mktag(0), WinnerB_5, (MR_Integer) 3));
    MR_Word CMP_21;

    mercury__builtin__compare_3_p_0(TypeInfo_for_P_17, &CMP_21, PrioA_7, PrioB_11);
    switch (CMP_21) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 1:
        succeeded = MR_TRUE;
        break;
      case (MR_Integer) 0:
        succeeded = MR_TRUE;
        break;
    }
    if (succeeded)
    {
      MR_Word LTree_15;

      LTree_15 = mercury__psqueue__balance_5_f_0(TypeInfo_for_P_17, TypeInfo_for_K_18, PrioB_11, KeyB_12, LTreeA_9, MaxKeyA_10, LTreeB_13);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        *CombinedWinner_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = PrioA_7;
        MR_hl_field(MR_mktag(0), base, 1) = KeyA_8;
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (LTree_15));
        MR_hl_field(MR_mktag(0), base, 3) = MaxKeyB_14;
      }
    }
    else
    {
      MR_Word LTree_16;

      LTree_16 = mercury__psqueue__balance_5_f_0(TypeInfo_for_P_17, TypeInfo_for_K_18, PrioA_7, KeyA_8, LTreeA_9, MaxKeyA_10, LTreeB_13);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        *CombinedWinner_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = PrioB_11;
        MR_hl_field(MR_mktag(0), base, 1) = KeyB_12;
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (LTree_16));
        MR_hl_field(MR_mktag(0), base, 3) = MaxKeyB_14;
      }
    }
  }
}

static MR_Word MR_CALL 
mercury__psqueue__balance_5_f_0(
  MR_Word TypeInfo_for_P_23,
  MR_Word TypeInfo_for_K_24,
  MR_Box Prio_7,
  MR_Box Key_8,
  MR_Word LTreeL_9,
  MR_Box SplitKey_10,
  MR_Word LTreeR_11)
{
  {
    MR_bool succeeded;
    MR_Word LTree_12;
    MR_Integer SizeL_13;
    MR_Integer SizeR_14;
    MR_Integer Var_17;

    if ((LTreeL_9 == (MR_Word) ((MR_Unsigned) 0U)))
      SizeL_13 = (MR_Integer) 0;
    else
      SizeL_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), LTreeL_9, (MR_Integer) 0))));
    if ((LTreeR_11 == (MR_Word) ((MR_Unsigned) 0U)))
      SizeR_14 = (MR_Integer) 0;
    else
      SizeR_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), LTreeR_11, (MR_Integer) 0))));
    Var_17 = (MR_Integer) ((MR_Unsigned) SizeR_14 + (MR_Unsigned) SizeL_13);
    succeeded = (Var_17 < (MR_Integer) 2);
    if (succeeded)
    {
      MR_Integer Size_47;
      MR_Integer Var_48;
      MR_Integer Var_50;
      MR_Integer Var_51;

      if ((LTreeL_9 == (MR_Word) ((MR_Unsigned) 0U)))
        Var_50 = (MR_Integer) 0;
      else
        Var_50 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), LTreeL_9, (MR_Integer) 0))));
      Var_48 = (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) Var_50);
      if ((LTreeR_11 == (MR_Word) ((MR_Unsigned) 0U)))
        Var_51 = (MR_Integer) 0;
      else
        Var_51 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), LTreeR_11, (MR_Integer) 0))));
      Size_47 = (MR_Integer) ((MR_Unsigned) Var_48 + (MR_Unsigned) Var_51);
      {
        LTree_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), LTree_12, 0) = ((MR_Box) (Size_47));
        MR_hl_field(MR_mktag(1), LTree_12, 1) = Prio_7;
        MR_hl_field(MR_mktag(1), LTree_12, 2) = Key_8;
        MR_hl_field(MR_mktag(1), LTree_12, 3) = ((MR_Box) (LTreeL_9));
        MR_hl_field(MR_mktag(1), LTree_12, 4) = SplitKey_10;
        MR_hl_field(MR_mktag(1), LTree_12, 5) = ((MR_Box) (LTreeR_11));
      }
    }
    else
    {
      MR_Word CMPL_15;
      MR_Integer Var_19 = (MR_Integer) ((MR_Unsigned) 4 * (MR_Unsigned) SizeL_13);

      succeeded = (SizeR_14 < Var_19);
      if (succeeded)
        CMPL_15 = (MR_Integer) 1;
      else
      {
        succeeded = (SizeR_14 == Var_19);
        if (succeeded)
          CMPL_15 = (MR_Integer) 0;
        else
          CMPL_15 = (MR_Integer) 2;
      }
      succeeded = (CMPL_15 == (MR_Integer) 2);
      if (succeeded)
        LTree_12 = mercury__psqueue__balance_left_5_f_0(TypeInfo_for_P_23, TypeInfo_for_K_24, Prio_7, Key_8, LTreeL_9, SplitKey_10, LTreeR_11);
      else
      {
        MR_Word CMPR_16;
        MR_Integer Var_21 = (MR_Integer) ((MR_Unsigned) 4 * (MR_Unsigned) SizeR_14);

        succeeded = (SizeL_13 < Var_21);
        if (succeeded)
          CMPR_16 = (MR_Integer) 1;
        else
        {
          succeeded = (SizeL_13 == Var_21);
          if (succeeded)
            CMPR_16 = (MR_Integer) 0;
          else
            CMPR_16 = (MR_Integer) 2;
        }
        succeeded = (CMPR_16 == (MR_Integer) 2);
        if (succeeded)
          LTree_12 = mercury__psqueue__balance_right_5_f_0(TypeInfo_for_P_23, TypeInfo_for_K_24, Prio_7, Key_8, LTreeL_9, SplitKey_10, LTreeR_11);
        else
        {
          MR_Integer Size_78;
          MR_Integer Var_79;
          MR_Integer Var_81;
          MR_Integer Var_82;

          if ((LTreeL_9 == (MR_Word) ((MR_Unsigned) 0U)))
            Var_81 = (MR_Integer) 0;
          else
            Var_81 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), LTreeL_9, (MR_Integer) 0))));
          Var_79 = (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) Var_81);
          if ((LTreeR_11 == (MR_Word) ((MR_Unsigned) 0U)))
            Var_82 = (MR_Integer) 0;
          else
            Var_82 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), LTreeR_11, (MR_Integer) 0))));
          Size_78 = (MR_Integer) ((MR_Unsigned) Var_79 + (MR_Unsigned) Var_82);
          {
            LTree_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), LTree_12, 0) = ((MR_Box) (Size_78));
            MR_hl_field(MR_mktag(1), LTree_12, 1) = Prio_7;
            MR_hl_field(MR_mktag(1), LTree_12, 2) = Key_8;
            MR_hl_field(MR_mktag(1), LTree_12, 3) = ((MR_Box) (LTreeL_9));
            MR_hl_field(MR_mktag(1), LTree_12, 4) = SplitKey_10;
            MR_hl_field(MR_mktag(1), LTree_12, 5) = ((MR_Box) (LTreeR_11));
          }
        }
      }
    }
    return LTree_12;
  }
}

static MR_Word MR_CALL 
mercury__psqueue__balance_right_5_f_0(
  MR_Word TypeInfo_for_P_25,
  MR_Word TypeInfo_for_K_26,
  MR_Box Prio_7,
  MR_Box Key_8,
  MR_Word LTreeL_9,
  MR_Box SplitKey_10,
  MR_Word LTreeR_11)
{
  {
    MR_bool succeeded;
    MR_Word LTree_12;

    if ((LTreeL_9 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__require__unexpected_3_p_0((MR_String) "psqueue.m", (MR_String) "function \140psqueue.balance_right\'/5", (MR_String) "heavier tree is a leaf");
    else
    {
      MR_Word SubLTreeLL_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LTreeL_9, (MR_Integer) 3))));
      MR_Word SubLTreeLR_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LTreeL_9, (MR_Integer) 5))));
      MR_Word CMP_19;
      MR_Integer Var_23;
      MR_Integer Var_24;

      if ((SubLTreeLR_18 == (MR_Word) ((MR_Unsigned) 0U)))
        Var_23 = (MR_Integer) 0;
      else
        Var_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), SubLTreeLR_18, (MR_Integer) 0))));
      if ((SubLTreeLL_16 == (MR_Word) ((MR_Unsigned) 0U)))
        Var_24 = (MR_Integer) 0;
      else
        Var_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), SubLTreeLL_16, (MR_Integer) 0))));
      succeeded = (Var_23 < Var_24);
      if (succeeded)
        CMP_19 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_23 == Var_24);
        if (succeeded)
          CMP_19 = (MR_Integer) 0;
        else
          CMP_19 = (MR_Integer) 2;
      }
      succeeded = (CMP_19 == (MR_Integer) 1);
      if (succeeded)
        LTree_12 = mercury__psqueue__single_right_5_f_0(TypeInfo_for_P_25, TypeInfo_for_K_26, Prio_7, Key_8, LTreeL_9, SplitKey_10, LTreeR_11);
      else
      {
        MR_Box LoserPrio_52 = (MR_hl_field(MR_mktag(1), LTreeL_9, (MR_Integer) 1));
        MR_Box LoserKey_53 = (MR_hl_field(MR_mktag(1), LTreeL_9, (MR_Integer) 2));
        MR_Word LTreeA_54 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LTreeL_9, (MR_Integer) 3))));
        MR_Box SplitKeyAB_55 = (MR_hl_field(MR_mktag(1), LTreeL_9, (MR_Integer) 4));
        MR_Word LTreeB_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LTreeL_9, (MR_Integer) 5))));
        MR_Word Var_60;

        Var_60 = mercury__psqueue__single_left_5_f_0(TypeInfo_for_P_25, TypeInfo_for_K_26, LoserPrio_52, LoserKey_53, LTreeA_54, SplitKeyAB_55, LTreeB_56);
        LTree_12 = mercury__psqueue__single_right_5_f_0(TypeInfo_for_P_25, TypeInfo_for_K_26, Prio_7, Key_8, Var_60, SplitKey_10, LTreeR_11);
      }
    }
    return LTree_12;
  }
}

static MR_Word MR_CALL 
mercury__psqueue__balance_left_5_f_0(
  MR_Word TypeInfo_for_P_25,
  MR_Word TypeInfo_for_K_26,
  MR_Box Prio_7,
  MR_Box Key_8,
  MR_Word LTreeL_9,
  MR_Box SplitKey_10,
  MR_Word LTreeR_11)
{
  {
    MR_bool succeeded;
    MR_Word LTree_12;

    if ((LTreeR_11 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__require__unexpected_3_p_0((MR_String) "psqueue.m", (MR_String) "function \140psqueue.balance_left\'/5", (MR_String) "heavier tree is a leaf");
    else
    {
      MR_Word SubLTreeRL_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LTreeR_11, (MR_Integer) 3))));
      MR_Word SubLTreeRR_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LTreeR_11, (MR_Integer) 5))));
      MR_Word CMP_19;
      MR_Integer Var_23;
      MR_Integer Var_24;

      if ((SubLTreeRL_16 == (MR_Word) ((MR_Unsigned) 0U)))
        Var_23 = (MR_Integer) 0;
      else
        Var_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), SubLTreeRL_16, (MR_Integer) 0))));
      if ((SubLTreeRR_18 == (MR_Word) ((MR_Unsigned) 0U)))
        Var_24 = (MR_Integer) 0;
      else
        Var_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), SubLTreeRR_18, (MR_Integer) 0))));
      succeeded = (Var_23 < Var_24);
      if (succeeded)
        CMP_19 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_23 == Var_24);
        if (succeeded)
          CMP_19 = (MR_Integer) 0;
        else
          CMP_19 = (MR_Integer) 2;
      }
      succeeded = (CMP_19 == (MR_Integer) 1);
      if (succeeded)
        LTree_12 = mercury__psqueue__single_left_5_f_0(TypeInfo_for_P_25, TypeInfo_for_K_26, Prio_7, Key_8, LTreeL_9, SplitKey_10, LTreeR_11);
      else
      {
        MR_Box LoserPrio_52 = (MR_hl_field(MR_mktag(1), LTreeR_11, (MR_Integer) 1));
        MR_Box LoserKey_53 = (MR_hl_field(MR_mktag(1), LTreeR_11, (MR_Integer) 2));
        MR_Word LTreeB_54 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LTreeR_11, (MR_Integer) 3))));
        MR_Box SplitKeyBC_55 = (MR_hl_field(MR_mktag(1), LTreeR_11, (MR_Integer) 4));
        MR_Word LTreeC_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LTreeR_11, (MR_Integer) 5))));
        MR_Word Var_60;

        Var_60 = mercury__psqueue__single_right_5_f_0(TypeInfo_for_P_25, TypeInfo_for_K_26, LoserPrio_52, LoserKey_53, LTreeB_54, SplitKeyBC_55, LTreeC_56);
        LTree_12 = mercury__psqueue__single_left_5_f_0(TypeInfo_for_P_25, TypeInfo_for_K_26, Prio_7, Key_8, LTreeL_9, SplitKey_10, Var_60);
      }
    }
    return LTree_12;
  }
}

static MR_Word MR_CALL 
mercury__psqueue__single_right_5_f_0(
  MR_Word TypeInfo_for_P_25,
  MR_Word TypeInfo_for_K_26,
  MR_Box InsertPrio_7,
  MR_Box InsertKey_8,
  MR_Word LTreeAB_9,
  MR_Box SplitKeyBC_10,
  MR_Word LTreeC_11)
{
  {
    MR_bool succeeded;
    MR_Word LTree_12;

    if ((LTreeAB_9 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__require__unexpected_3_p_0((MR_String) "psqueue.m", (MR_String) "function \140psqueue.single_right\'/5", (MR_String) "heavier tree is a leaf");
    else
    {
      MR_Box LoserPrio_14 = (MR_hl_field(MR_mktag(1), LTreeAB_9, (MR_Integer) 1));
      MR_Box LoserKey_15 = (MR_hl_field(MR_mktag(1), LTreeAB_9, (MR_Integer) 2));
      MR_Word LTreeA_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LTreeAB_9, (MR_Integer) 3))));
      MR_Box SplitKeyAB_17 = (MR_hl_field(MR_mktag(1), LTreeAB_9, (MR_Integer) 4));
      MR_Word LTreeB_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LTreeAB_9, (MR_Integer) 5))));
      MR_Word CMP0_19;
      MR_Word CMP_29;

      mercury__builtin__compare_3_p_0(TypeInfo_for_K_26, &CMP0_19, LoserKey_15, SplitKeyAB_17);
      succeeded = (CMP0_19 == (MR_Integer) 2);
      if (succeeded)
      {
        mercury__builtin__compare_3_p_0(TypeInfo_for_P_25, &CMP_29, InsertPrio_7, LoserPrio_14);
        switch (CMP_29) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 1:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 0:
            succeeded = MR_TRUE;
            break;
        }
      }
      if (succeeded)
      {
        MR_Word Var_23;
        MR_Integer Size_36;
        MR_Integer Var_37;
        MR_Integer Var_39;
        MR_Integer Var_40;
        MR_Integer Size_61;
        MR_Integer Var_62;
        MR_Integer Var_64;

        if ((LTreeB_18 == (MR_Word) ((MR_Unsigned) 0U)))
          Var_39 = (MR_Integer) 0;
        else
          Var_39 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), LTreeB_18, (MR_Integer) 0))));
        Var_37 = (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) Var_39);
        if ((LTreeC_11 == (MR_Word) ((MR_Unsigned) 0U)))
          Var_40 = (MR_Integer) 0;
        else
          Var_40 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), LTreeC_11, (MR_Integer) 0))));
        Size_36 = (MR_Integer) ((MR_Unsigned) Var_37 + (MR_Unsigned) Var_40);
        {
          Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (Size_36));
          MR_hl_field(MR_mktag(1), Var_23, 1) = LoserPrio_14;
          MR_hl_field(MR_mktag(1), Var_23, 2) = LoserKey_15;
          MR_hl_field(MR_mktag(1), Var_23, 3) = ((MR_Box) (LTreeB_18));
          MR_hl_field(MR_mktag(1), Var_23, 4) = SplitKeyBC_10;
          MR_hl_field(MR_mktag(1), Var_23, 5) = ((MR_Box) (LTreeC_11));
        }
        if ((LTreeA_16 == (MR_Word) ((MR_Unsigned) 0U)))
          Var_64 = (MR_Integer) 0;
        else
          Var_64 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), LTreeA_16, (MR_Integer) 0))));
        Var_62 = (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) Var_64);
        Size_61 = (MR_Integer) ((MR_Unsigned) Var_62 + (MR_Unsigned) Size_36);
        {
          LTree_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), LTree_12, 0) = ((MR_Box) (Size_61));
          MR_hl_field(MR_mktag(1), LTree_12, 1) = InsertPrio_7;
          MR_hl_field(MR_mktag(1), LTree_12, 2) = InsertKey_8;
          MR_hl_field(MR_mktag(1), LTree_12, 3) = ((MR_Box) (LTreeA_16));
          MR_hl_field(MR_mktag(1), LTree_12, 4) = SplitKeyAB_17;
          MR_hl_field(MR_mktag(1), LTree_12, 5) = ((MR_Box) (Var_23));
        }
      }
      else
      {
        MR_Word Var_24;
        MR_Integer Size_86;
        MR_Integer Var_87;
        MR_Integer Var_89;
        MR_Integer Var_90;
        MR_Integer Size_111;
        MR_Integer Var_112;
        MR_Integer Var_114;

        if ((LTreeB_18 == (MR_Word) ((MR_Unsigned) 0U)))
          Var_89 = (MR_Integer) 0;
        else
          Var_89 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), LTreeB_18, (MR_Integer) 0))));
        Var_87 = (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) Var_89);
        if ((LTreeC_11 == (MR_Word) ((MR_Unsigned) 0U)))
          Var_90 = (MR_Integer) 0;
        else
          Var_90 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), LTreeC_11, (MR_Integer) 0))));
        Size_86 = (MR_Integer) ((MR_Unsigned) Var_87 + (MR_Unsigned) Var_90);
        {
          Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (Size_86));
          MR_hl_field(MR_mktag(1), Var_24, 1) = InsertPrio_7;
          MR_hl_field(MR_mktag(1), Var_24, 2) = InsertKey_8;
          MR_hl_field(MR_mktag(1), Var_24, 3) = ((MR_Box) (LTreeB_18));
          MR_hl_field(MR_mktag(1), Var_24, 4) = SplitKeyBC_10;
          MR_hl_field(MR_mktag(1), Var_24, 5) = ((MR_Box) (LTreeC_11));
        }
        if ((LTreeA_16 == (MR_Word) ((MR_Unsigned) 0U)))
          Var_114 = (MR_Integer) 0;
        else
          Var_114 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), LTreeA_16, (MR_Integer) 0))));
        Var_112 = (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) Var_114);
        Size_111 = (MR_Integer) ((MR_Unsigned) Var_112 + (MR_Unsigned) Size_86);
        {
          LTree_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), LTree_12, 0) = ((MR_Box) (Size_111));
          MR_hl_field(MR_mktag(1), LTree_12, 1) = LoserPrio_14;
          MR_hl_field(MR_mktag(1), LTree_12, 2) = LoserKey_15;
          MR_hl_field(MR_mktag(1), LTree_12, 3) = ((MR_Box) (LTreeA_16));
          MR_hl_field(MR_mktag(1), LTree_12, 4) = SplitKeyAB_17;
          MR_hl_field(MR_mktag(1), LTree_12, 5) = ((MR_Box) (Var_24));
        }
      }
    }
    return LTree_12;
  }
}

static MR_Word MR_CALL 
mercury__psqueue__single_left_5_f_0(
  MR_Word TypeInfo_for_P_24,
  MR_Word TypeInfo_for_K_25,
  MR_Box InsertPrio_7,
  MR_Box InsertKey_8,
  MR_Word LTreeA_9,
  MR_Box SplitKeyAB_10,
  MR_Word LTreeBC_11)
{
  {
    MR_bool succeeded;
    MR_Word LTree_12;

    if ((LTreeBC_11 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__require__unexpected_3_p_0((MR_String) "psqueue.m", (MR_String) "function \140psqueue.single_left\'/5", (MR_String) "heavier tree is a leaf");
    else
    {
      MR_Box LoserPrio_14 = (MR_hl_field(MR_mktag(1), LTreeBC_11, (MR_Integer) 1));
      MR_Box LoserKey_15 = (MR_hl_field(MR_mktag(1), LTreeBC_11, (MR_Integer) 2));
      MR_Word LTreeB_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LTreeBC_11, (MR_Integer) 3))));
      MR_Box SplitKeyBC_17 = (MR_hl_field(MR_mktag(1), LTreeBC_11, (MR_Integer) 4));
      MR_Word LTreeC_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LTreeBC_11, (MR_Integer) 5))));
      MR_Word CMP_28;
      MR_Word CMP_31;

      mercury__builtin__compare_3_p_0(TypeInfo_for_K_25, &CMP_28, LoserKey_15, SplitKeyBC_17);
      switch (CMP_28) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 1:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 0:
          succeeded = MR_TRUE;
          break;
      }
      if (succeeded)
      {
        mercury__builtin__compare_3_p_0(TypeInfo_for_P_24, &CMP_31, InsertPrio_7, LoserPrio_14);
        switch (CMP_31) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 1:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 0:
            succeeded = MR_TRUE;
            break;
        }
      }
      if (succeeded)
      {
        MR_Word Var_22;
        MR_Integer Size_38;
        MR_Integer Var_39;
        MR_Integer Var_41;
        MR_Integer Var_42;
        MR_Integer Size_63;
        MR_Integer Var_64;
        MR_Integer Var_67;

        if ((LTreeA_9 == (MR_Word) ((MR_Unsigned) 0U)))
          Var_41 = (MR_Integer) 0;
        else
          Var_41 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), LTreeA_9, (MR_Integer) 0))));
        Var_39 = (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) Var_41);
        if ((LTreeB_16 == (MR_Word) ((MR_Unsigned) 0U)))
          Var_42 = (MR_Integer) 0;
        else
          Var_42 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), LTreeB_16, (MR_Integer) 0))));
        Size_38 = (MR_Integer) ((MR_Unsigned) Var_39 + (MR_Unsigned) Var_42);
        {
          Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (Size_38));
          MR_hl_field(MR_mktag(1), Var_22, 1) = LoserPrio_14;
          MR_hl_field(MR_mktag(1), Var_22, 2) = LoserKey_15;
          MR_hl_field(MR_mktag(1), Var_22, 3) = ((MR_Box) (LTreeA_9));
          MR_hl_field(MR_mktag(1), Var_22, 4) = SplitKeyAB_10;
          MR_hl_field(MR_mktag(1), Var_22, 5) = ((MR_Box) (LTreeB_16));
        }
        Var_64 = (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) Size_38);
        if ((LTreeC_18 == (MR_Word) ((MR_Unsigned) 0U)))
          Var_67 = (MR_Integer) 0;
        else
          Var_67 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), LTreeC_18, (MR_Integer) 0))));
        Size_63 = (MR_Integer) ((MR_Unsigned) Var_64 + (MR_Unsigned) Var_67);
        {
          LTree_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), LTree_12, 0) = ((MR_Box) (Size_63));
          MR_hl_field(MR_mktag(1), LTree_12, 1) = InsertPrio_7;
          MR_hl_field(MR_mktag(1), LTree_12, 2) = InsertKey_8;
          MR_hl_field(MR_mktag(1), LTree_12, 3) = ((MR_Box) (Var_22));
          MR_hl_field(MR_mktag(1), LTree_12, 4) = SplitKeyBC_17;
          MR_hl_field(MR_mktag(1), LTree_12, 5) = ((MR_Box) (LTreeC_18));
        }
      }
      else
      {
        MR_Word Var_23;
        MR_Integer Size_88;
        MR_Integer Var_89;
        MR_Integer Var_91;
        MR_Integer Var_92;
        MR_Integer Size_113;
        MR_Integer Var_114;
        MR_Integer Var_117;

        if ((LTreeA_9 == (MR_Word) ((MR_Unsigned) 0U)))
          Var_91 = (MR_Integer) 0;
        else
          Var_91 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), LTreeA_9, (MR_Integer) 0))));
        Var_89 = (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) Var_91);
        if ((LTreeB_16 == (MR_Word) ((MR_Unsigned) 0U)))
          Var_92 = (MR_Integer) 0;
        else
          Var_92 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), LTreeB_16, (MR_Integer) 0))));
        Size_88 = (MR_Integer) ((MR_Unsigned) Var_89 + (MR_Unsigned) Var_92);
        {
          Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (Size_88));
          MR_hl_field(MR_mktag(1), Var_23, 1) = InsertPrio_7;
          MR_hl_field(MR_mktag(1), Var_23, 2) = InsertKey_8;
          MR_hl_field(MR_mktag(1), Var_23, 3) = ((MR_Box) (LTreeA_9));
          MR_hl_field(MR_mktag(1), Var_23, 4) = SplitKeyAB_10;
          MR_hl_field(MR_mktag(1), Var_23, 5) = ((MR_Box) (LTreeB_16));
        }
        Var_114 = (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) Size_88);
        if ((LTreeC_18 == (MR_Word) ((MR_Unsigned) 0U)))
          Var_117 = (MR_Integer) 0;
        else
          Var_117 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), LTreeC_18, (MR_Integer) 0))));
        Size_113 = (MR_Integer) ((MR_Unsigned) Var_114 + (MR_Unsigned) Var_117);
        {
          LTree_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), LTree_12, 0) = ((MR_Box) (Size_113));
          MR_hl_field(MR_mktag(1), LTree_12, 1) = LoserPrio_14;
          MR_hl_field(MR_mktag(1), LTree_12, 2) = LoserKey_15;
          MR_hl_field(MR_mktag(1), LTree_12, 3) = ((MR_Box) (Var_23));
          MR_hl_field(MR_mktag(1), LTree_12, 4) = SplitKeyBC_17;
          MR_hl_field(MR_mktag(1), LTree_12, 5) = ((MR_Box) (LTreeC_18));
        }
      }
    }
    return LTree_12;
  }
}

MR_Word MR_CALL 
mercury__psqueue__get_tournament_view_1_f_0(
  MR_Word TypeInfo_for_P_25,
  MR_Word TypeInfo_for_K_26,
  MR_Word Winner_3)
{
  {
    MR_bool succeeded;
    MR_Word TournamentView_4;
    MR_Box WinnerPrio_5 = (MR_hl_field(MR_mktag(0), Winner_3, (MR_Integer) 0));
    MR_Box WinnerKey_6 = (MR_hl_field(MR_mktag(0), Winner_3, (MR_Integer) 1));
    MR_Word LTree_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Winner_3, (MR_Integer) 2))));
    MR_Box MaxKey_8 = (MR_hl_field(MR_mktag(0), Winner_3, (MR_Integer) 3));

    if ((LTree_7 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        TournamentView_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TournamentView_4, 0) = WinnerPrio_5;
        MR_hl_field(MR_mktag(0), TournamentView_4, 1) = WinnerKey_6;
      }
    else
    {
      MR_Box LoserPrio_10 = (MR_hl_field(MR_mktag(1), LTree_7, (MR_Integer) 1));
      MR_Box LoserKey_11 = (MR_hl_field(MR_mktag(1), LTree_7, (MR_Integer) 2));
      MR_Word SubLTreeL_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LTree_7, (MR_Integer) 3))));
      MR_Box SplitKey_13 = (MR_hl_field(MR_mktag(1), LTree_7, (MR_Integer) 4));
      MR_Word SubLTreeR_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LTree_7, (MR_Integer) 5))));
      MR_Word WinnerA_15;
      MR_Word WinnerB_16;
      MR_Word CMP_29;

      mercury__builtin__compare_3_p_0(TypeInfo_for_K_26, &CMP_29, LoserKey_11, SplitKey_13);
      switch (CMP_29) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 1:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 0:
          succeeded = MR_TRUE;
          break;
      }
      if (succeeded)
      {
        {
          WinnerA_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), WinnerA_15, 0) = LoserPrio_10;
          MR_hl_field(MR_mktag(0), WinnerA_15, 1) = LoserKey_11;
          MR_hl_field(MR_mktag(0), WinnerA_15, 2) = ((MR_Box) (SubLTreeL_12));
          MR_hl_field(MR_mktag(0), WinnerA_15, 3) = SplitKey_13;
        }
        {
          WinnerB_16 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), WinnerB_16, 0) = WinnerPrio_5;
          MR_hl_field(MR_mktag(0), WinnerB_16, 1) = WinnerKey_6;
          MR_hl_field(MR_mktag(0), WinnerB_16, 2) = ((MR_Box) (SubLTreeR_14));
          MR_hl_field(MR_mktag(0), WinnerB_16, 3) = MaxKey_8;
        }
      }
      else
      {
        {
          WinnerA_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), WinnerA_15, 0) = WinnerPrio_5;
          MR_hl_field(MR_mktag(0), WinnerA_15, 1) = WinnerKey_6;
          MR_hl_field(MR_mktag(0), WinnerA_15, 2) = ((MR_Box) (SubLTreeL_12));
          MR_hl_field(MR_mktag(0), WinnerA_15, 3) = SplitKey_13;
        }
        {
          WinnerB_16 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), WinnerB_16, 0) = LoserPrio_10;
          MR_hl_field(MR_mktag(0), WinnerB_16, 1) = LoserKey_11;
          MR_hl_field(MR_mktag(0), WinnerB_16, 2) = ((MR_Box) (SubLTreeR_14));
          MR_hl_field(MR_mktag(0), WinnerB_16, 3) = MaxKey_8;
        }
      }
      {
        TournamentView_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), TournamentView_4, 0) = ((MR_Box) (WinnerA_15));
        MR_hl_field(MR_mktag(1), TournamentView_4, 1) = ((MR_Box) (WinnerB_16));
      }
    }
    return TournamentView_4;
  }
}

void MR_CALL 
mercury__psqueue__singleton_3_p_0(
  MR_Word TypeInfo_for_P_8,
  MR_Word TypeInfo_for_K_9,
  MR_Box Prio_4,
  MR_Box Key_5,
  MR_Word * PSQ_6)
{
  {
    MR_Word Var_7;

    {
      Var_7 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_7, 0) = Prio_4;
      MR_hl_field(MR_mktag(0), Var_7, 1) = Key_5;
      MR_hl_field(MR_mktag(0), Var_7, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Var_7, 3) = Key_5;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *PSQ_6 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_7));
    }
  }
}

MR_Word MR_CALL 
mercury__psqueue__singleton_2_f_0(
  MR_Word TypeInfo_for_P_7,
  MR_Word TypeInfo_for_K_8,
  MR_Box Prio_4,
  MR_Box Key_5)
{
  {
    MR_Word PSQ_6;
    MR_Word Var_12;

    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = Prio_4;
      MR_hl_field(MR_mktag(0), Var_12, 1) = Key_5;
      MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Var_12, 3) = Key_5;
    }
    {
      PSQ_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), PSQ_6, 0) = ((MR_Box) (Var_12));
    }
    return PSQ_6;
  }
}

MR_bool MR_CALL 
mercury__psqueue__is_empty_1_p_0(
  MR_Word TypeInfo_for_P_2,
  MR_Word TypeInfo_for_K_3,
  MR_Word HeadVar__1_1)
{
  {
    MR_bool succeeded = (HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U));

    return succeeded;
  }
}

void MR_CALL 
mercury__psqueue__init_1_p_0(
  MR_Word TypeInfo_for_P_2,
  MR_Word TypeInfo_for_K_3,
  MR_Word * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_Word) ((MR_Unsigned) 0U);
}

MR_Word MR_CALL 
mercury__psqueue__init_0_f_0(
  MR_Word TypeInfo_for_P_3,
  MR_Word TypeInfo_for_K_4)
{
  return (MR_Word) ((MR_Unsigned) 0U);
}

static MR_bool MR_CALL 
mercury__psqueue____Unify____loser_tree_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_bool succeeded;

    succeeded = mercury__psqueue____Unify____loser_tree_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__psqueue____Compare____loser_tree_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__psqueue____Compare____loser_tree_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)));
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__psqueue____Unify____loser_tree_size_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__psqueue____Unify____loser_tree_size_0_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__psqueue____Compare____loser_tree_size_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__psqueue____Compare____loser_tree_size_0_0(&conv0_HeadVar__1_1, ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__psqueue____Unify____psqueue_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_bool succeeded;

    succeeded = mercury__psqueue____Unify____psqueue_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__psqueue____Compare____psqueue_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__psqueue____Compare____psqueue_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)));
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__psqueue____Unify____tournament_view_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_bool succeeded;

    succeeded = mercury__psqueue____Unify____tournament_view_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__psqueue____Compare____tournament_view_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__psqueue____Compare____tournament_view_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)));
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__psqueue____Unify____winner_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_bool succeeded;

    succeeded = mercury__psqueue____Unify____winner_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__psqueue____Compare____winner_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__psqueue____Compare____winner_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)));
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__1_1));
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

// Ensure everything is compiled with the same grade.
const char *mercury__psqueue__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module psqueue.
